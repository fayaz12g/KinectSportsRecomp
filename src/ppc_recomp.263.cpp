#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82EB57F0"))) PPC_WEAK_FUNC(sub_82EB57F0);
PPC_FUNC_IMPL(__imp__sub_82EB57F0) {
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
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82eb5818
	if (ctx.cr6.eq) goto loc_82EB5818;
	// lwz r11,272(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_82EB5818:
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,272(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82eb49b0
	ctx.lr = 0x82EB5830;
	sub_82EB49B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb5844
	if (ctx.cr0.lt) goto loc_82EB5844;
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
loc_82EB5844:
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_82EB5860"))) PPC_WEAK_FUNC(sub_82EB5860);
PPC_FUNC_IMPL(__imp__sub_82EB5860) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82eb5878
	if (!ctx.cr6.eq) goto loc_82EB5878;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_82EB5878:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82eb5904
	if (ctx.cr6.eq) goto loc_82EB5904;
loc_82EB588C:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb58a4
	if (ctx.cr6.lt) goto loc_82EB58A4;
	// addi r9,r11,20
	ctx.r9.s64 = ctx.r11.s64 + 20;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82eb58cc
	if (ctx.cr6.lt) goto loc_82EB58CC;
loc_82EB58A4:
	// lwz r10,100(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82eb588c
	if (!ctx.cr6.eq) goto loc_82EB588C;
loc_82EB58B0:
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
loc_82EB58C0:
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82EB58CC:
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// lis r7,-31972
	ctx.r7.s64 = -2095316992;
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r7,r7,-27200
	ctx.r7.s64 = ctx.r7.s64 + -27200;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// clrlwi r6,r11,29
	ctx.r6.u64 = ctx.r11.u32 & 0x7;
	// lbz r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 16);
	// lbzx r7,r6,r7
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r7.u32);
	// and. r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 & ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82eb58b0
	if (ctx.cr0.eq) goto loc_82EB58B0;
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x82eb58c0
	goto loc_82EB58C0;
loc_82EB5904:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB5910"))) PPC_WEAK_FUNC(sub_82EB5910);
PPC_FUNC_IMPL(__imp__sub_82EB5910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82EB5918;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb594c
	if (ctx.cr6.eq) goto loc_82EB594C;
loc_82EB5930:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb594c
	if (ctx.cr6.lt) goto loc_82EB594C;
	// lwz r31,100(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82eb5930
	if (!ctx.cr6.eq) goto loc_82EB5930;
loc_82EB594C:
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82eb5a80
	if (ctx.cr6.eq) goto loc_82EB5A80;
	// lis r10,-31972
	ctx.r10.s64 = -2095316992;
	// lis r11,-31972
	ctx.r11.s64 = -2095316992;
	// lis r25,-31972
	ctx.r25.s64 = -2095316992;
	// addi r27,r10,-27172
	ctx.r27.s64 = ctx.r10.s64 + -27172;
	// addi r26,r11,-27184
	ctx.r26.s64 = ctx.r11.s64 + -27184;
loc_82EB596C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb598c
	if (ctx.cr6.lt) goto loc_82EB598C;
	// li r29,1
	ctx.r29.s64 = 1;
	// subf r30,r11,r28
	ctx.r30.s64 = ctx.r28.s64 - ctx.r11.s64;
	// b 0x82eb59b4
	goto loc_82EB59B4;
loc_82EB598C:
	// lbz r10,-27200(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + -27200);
	// lbz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// and. r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82eb59b4
	if (ctx.cr0.eq) goto loc_82EB59B4;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82eb48b8
	ctx.lr = 0x82EB59AC;
	sub_82EB48B8(ctx, base);
	// mr. r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// blt 0x82eb5a80
	if (ctx.cr0.lt) goto loc_82EB5A80;
loc_82EB59B4:
	// addi r11,r30,6
	ctx.r11.s64 = ctx.r30.s64 + 6;
	// addi r9,r30,5
	ctx.r9.s64 = ctx.r30.s64 + 5;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r8,r30,19
	ctx.xer.ca = ctx.r30.u32 <= 19;
	ctx.r8.s64 = 19 - ctx.r30.s64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82fa20f0
	ctx.lr = 0x82EB59D8;
	sub_82FA20F0(ctx, base);
	// rlwinm r11,r30,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 29) & 0x1FFFFFFF;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// lbz r7,16(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16);
	// bge cr6,0x82eb5a30
	if (!ctx.cr6.lt) goto loc_82EB5A30;
	// subfic r8,r11,3
	ctx.xer.ca = ctx.r11.u32 <= 3;
	ctx.r8.s64 = 3 - ctx.r11.s64;
	// addi r9,r31,16
	ctx.r9.s64 = ctx.r31.s64 + 16;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82EB59F8:
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// rlwinm r8,r8,1,24,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFE;
	// stbx r8,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u8);
	// bge cr6,0x82eb5a28
	if (!ctx.cr6.lt) goto loc_82EB5A28;
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r6,17(r6)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r6.u32 + 17);
	// rlwinm. r6,r6,0,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x82eb5a28
	if (ctx.cr0.eq) goto loc_82EB5A28;
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwimi r8,r6,0,31,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFFFFFFFFFFFF01) | (ctx.r8.u64 & 0xFE);
	// stbx r8,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u8);
loc_82EB5A28:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82eb59f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82EB59F8;
loc_82EB5A30:
	// clrlwi r11,r30,29
	ctx.r11.u64 = ctx.r30.u32 & 0x7;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82eb5a74
	if (ctx.cr6.eq) goto loc_82EB5A74;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb5a74
	if (ctx.cr0.eq) goto loc_82EB5A74;
	// addi r9,r26,8
	ctx.r9.s64 = ctx.r26.s64 + 8;
	// lbz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16);
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// lbz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// stb r9,16(r10)
	PPC_STORE_U8(ctx.r10.u32 + 16, ctx.r9.u8);
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// lbzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// and r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 & ctx.r7.u64;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stb r11,16(r10)
	PPC_STORE_U8(ctx.r10.u32 + 16, ctx.r11.u8);
loc_82EB5A74:
	// lwz r31,100(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82eb596c
	if (!ctx.cr6.eq) goto loc_82EB596C;
loc_82EB5A80:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB5A8C"))) PPC_WEAK_FUNC(sub_82EB5A8C);
PPC_FUNC_IMPL(__imp__sub_82EB5A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB5A90"))) PPC_WEAK_FUNC(sub_82EB5A90);
PPC_FUNC_IMPL(__imp__sub_82EB5A90) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82eb5aa8
	if (!ctx.cr6.eq) goto loc_82EB5AA8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_82EB5AA8:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82eb5ad8
	goto loc_82EB5AD8;
loc_82EB5ABC:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb5ad4
	if (ctx.cr6.lt) goto loc_82EB5AD4;
	// addi r9,r11,20
	ctx.r9.s64 = ctx.r11.s64 + 20;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82eb5ae4
	if (ctx.cr6.lt) goto loc_82EB5AE4;
loc_82EB5AD4:
	// lwz r10,268(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 268);
loc_82EB5AD8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82eb5abc
	if (!ctx.cr6.eq) goto loc_82EB5ABC;
	// blr 
	return;
loc_82EB5AE4:
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// lis r8,-31972
	ctx.r8.s64 = -2095316992;
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r8,r8,-27192
	ctx.r8.s64 = ctx.r8.s64 + -27192;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// clrlwi r7,r11,29
	ctx.r7.u64 = ctx.r11.u32 & 0x7;
	// lbz r9,24(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 24);
	// lbzx r8,r7,r8
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// and. r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB5B24"))) PPC_WEAK_FUNC(sub_82EB5B24);
PPC_FUNC_IMPL(__imp__sub_82EB5B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB5B28"))) PPC_WEAK_FUNC(sub_82EB5B28);
PPC_FUNC_IMPL(__imp__sub_82EB5B28) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,272
	ctx.r3.s64 = 272;
	// bl 0x82e8edd0
	ctx.lr = 0x82EB5B54;
	sub_82E8EDD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb5b88
	if (ctx.cr0.eq) goto loc_82EB5B88;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,5040
	ctx.r9.s64 = ctx.r10.s64 + 5040;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// sth r11,24(r3)
	PPC_STORE_U16(ctx.r3.u32 + 24, ctx.r11.u16);
	// stb r11,26(r3)
	PPC_STORE_U8(ctx.r3.u32 + 26, ctx.r11.u8);
	// stw r11,268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 268, ctx.r11.u32);
	// b 0x82eb5b8c
	goto loc_82EB5B8C;
loc_82EB5B88:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82EB5B8C:
	// addi r11,r10,0
	ctx.r11.s64 = ctx.r10.s64 + 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lis r10,-32761
	ctx.r10.s64 = -2147024896;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// ori r10,r10,14
	ctx.r10.u64 = ctx.r10.u64 | 14;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
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

__attribute__((alias("__imp__sub_82EB5BBC"))) PPC_WEAK_FUNC(sub_82EB5BBC);
PPC_FUNC_IMPL(__imp__sub_82EB5BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB5BC0"))) PPC_WEAK_FUNC(sub_82EB5BC0);
PPC_FUNC_IMPL(__imp__sub_82EB5BC0) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,5040
	ctx.r11.s64 = ctx.r11.s64 + 5040;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bne cr6,0x82eb5bfc
	if (!ctx.cr6.eq) goto loc_82EB5BFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82eb4ac0
	ctx.lr = 0x82EB5BFC;
	sub_82EB4AC0(ctx, base);
loc_82EB5BFC:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb5c0c
	if (ctx.cr0.eq) goto loc_82EB5C0C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8ee18
	ctx.lr = 0x82EB5C0C;
	sub_82E8EE18(ctx, base);
loc_82EB5C0C:
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

__attribute__((alias("__imp__sub_82EB5C28"))) PPC_WEAK_FUNC(sub_82EB5C28);
PPC_FUNC_IMPL(__imp__sub_82EB5C28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82EB5C30;
	__savegprlr_24(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82eb5c50
	if (!ctx.cr6.eq) goto loc_82EB5C50;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16387
	ctx.r3.u64 = ctx.r3.u64 | 16387;
	// b 0x82eb5e90
	goto loc_82EB5E90;
loc_82EB5C50:
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// lwz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB5C7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eb5e28
	if (ctx.cr0.lt) goto loc_82EB5E28;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eb5e28
	if (ctx.cr6.eq) goto loc_82EB5E28;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r28,r9,21824
	ctx.r28.s64 = ctx.r9.s64 + 21824;
	// addi r29,r10,23344
	ctx.r29.s64 = ctx.r10.s64 + 23344;
	// addi r27,r11,1552
	ctx.r27.s64 = ctx.r11.s64 + 1552;
loc_82EB5CAC:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lwz r8,4(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r7,8(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// sth r30,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r30.u16);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// beq cr6,0x82eb5cf8
	if (ctx.cr6.eq) goto loc_82EB5CF8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB5CF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
loc_82EB5CF8:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb5d18
	if (ctx.cr6.eq) goto loc_82EB5D18;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB5D14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
loc_82EB5D18:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb5d38
	if (ctx.cr6.eq) goto loc_82EB5D38;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB5D34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
loc_82EB5D38:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB5D58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eb5e28
	if (ctx.cr0.lt) goto loc_82EB5E28;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB5D78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eb5e28
	if (ctx.cr0.lt) goto loc_82EB5E28;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb5e98
	if (ctx.cr6.eq) goto loc_82EB5E98;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB5DA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eb5e28
	if (ctx.cr0.lt) goto loc_82EB5E28;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r8,r29,16
	ctx.r8.s64 = ctx.r29.s64 + 16;
loc_82EB5DB4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eb5dd4
	if (!ctx.cr0.eq) goto loc_82EB5DD4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82eb5db4
	if (!ctx.cr6.eq) goto loc_82EB5DB4;
loc_82EB5DD4:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eb5e18
	if (!ctx.cr0.eq) goto loc_82EB5E18;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB5DF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eb5e28
	if (ctx.cr0.lt) goto loc_82EB5E28;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lhz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// bl 0x82eb5528
	ctx.lr = 0x82EB5E10;
	sub_82EB5528(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eb5e28
	if (ctx.cr0.lt) goto loc_82EB5E28;
loc_82EB5E18:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb5cac
	if (ctx.cr6.lt) goto loc_82EB5CAC;
loc_82EB5E28:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82EB5E2C:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eb5e54
	if (ctx.cr6.eq) goto loc_82EB5E54;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB5E4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
loc_82EB5E54:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb5e70
	if (ctx.cr6.eq) goto loc_82EB5E70;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB5E6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
loc_82EB5E70:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb5e8c
	if (ctx.cr6.eq) goto loc_82EB5E8C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB5E8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EB5E8C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82EB5E90:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
loc_82EB5E98:
	// lis r31,-16371
	ctx.r31.s64 = -1072889856;
	// ori r31,r31,14011
	ctx.r31.u64 = ctx.r31.u64 | 14011;
	// b 0x82eb5e2c
	goto loc_82EB5E2C;
}

__attribute__((alias("__imp__sub_82EB5EA4"))) PPC_WEAK_FUNC(sub_82EB5EA4);
PPC_FUNC_IMPL(__imp__sub_82EB5EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB5EA8"))) PPC_WEAK_FUNC(sub_82EB5EA8);
PPC_FUNC_IMPL(__imp__sub_82EB5EA8) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r30,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r30.u32);
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb5edc
	if (ctx.cr6.lt) goto loc_82EB5EDC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82eb5ef8
	goto loc_82EB5EF8;
loc_82EB5EDC:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82eb5860
	ctx.lr = 0x82EB5EE4;
	sub_82EB5860(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82eb5ef0
	if (!ctx.cr0.lt) goto loc_82EB5EF0;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_82EB5EF0:
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
loc_82EB5EF8:
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

__attribute__((alias("__imp__sub_82EB5F10"))) PPC_WEAK_FUNC(sub_82EB5F10);
PPC_FUNC_IMPL(__imp__sub_82EB5F10) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82eb5f34
	if (!ctx.cr6.eq) goto loc_82EB5F34;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82eb5f40
	goto loc_82EB5F40;
loc_82EB5F34:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82eb5bc0
	ctx.lr = 0x82EB5F3C;
	sub_82EB5BC0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EB5F40:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB5F50"))) PPC_WEAK_FUNC(sub_82EB5F50);
PPC_FUNC_IMPL(__imp__sub_82EB5F50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82EB5F58;
	__savegprlr_24(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82eb5f78
	if (!ctx.cr6.eq) goto loc_82EB5F78;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82eb6244
	goto loc_82EB6244;
loc_82EB5F78:
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r5,r11,28608
	ctx.r5.s64 = ctx.r11.s64 + 28608;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r4,r10,27952
	ctx.r4.s64 = ctx.r10.s64 + 27952;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// bl 0x82e96e80
	ctx.lr = 0x82EB5FA4;
	sub_82E96E80(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eb61b8
	if (ctx.cr0.lt) goto loc_82EB61B8;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,28544
	ctx.r4.s64 = ctx.r11.s64 + 28544;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB5FCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eb61b8
	if (ctx.cr0.lt) goto loc_82EB61B8;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r26,r11,28288
	ctx.r26.s64 = ctx.r11.s64 + 28288;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB5FFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eb61b8
	if (ctx.cr0.lt) goto loc_82EB61B8;
	// addi r3,r24,24
	ctx.r3.s64 = ctx.r24.s64 + 24;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82e6c348
	ctx.lr = 0x82EB6010;
	sub_82E6C348(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eb61b8
	if (ctx.cr6.eq) goto loc_82EB61B8;
loc_82EB6024:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB6044;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eb61b8
	if (ctx.cr0.lt) goto loc_82EB61B8;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb61a4
	if (ctx.cr6.eq) goto loc_82EB61A4;
	// sth r30,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r30.u16);
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// bl 0x82e97a80
	ctx.lr = 0x82EB6068;
	sub_82E97A80(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// blt 0x82eb61b8
	if (ctx.cr0.lt) goto loc_82EB61B8;
	// sth r30,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r30.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e97f48
	ctx.lr = 0x82EB6084;
	sub_82E97F48(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82e8edd0
	ctx.lr = 0x82EB609C;
	sub_82E8EDD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb60bc
	if (ctx.cr0.eq) goto loc_82EB60BC;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// lhz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// bl 0x82eb4b58
	ctx.lr = 0x82EB60B0;
	sub_82EB4B58(ctx, base);
	// lwz r31,100(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// b 0x82eb60c0
	goto loc_82EB60C0;
loc_82EB60BC:
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
loc_82EB60C0:
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82eb61b8
	if (ctx.cr6.lt) goto loc_82EB61B8;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82eb61b0
	if (ctx.cr6.eq) goto loc_82EB61B0;
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82eb6150
	if (ctx.cr0.eq) goto loc_82EB6150;
loc_82EB60E4:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// stw r30,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// sth r30,16(r11)
	PPC_STORE_U16(ctx.r11.u32 + 16, ctx.r30.u16);
	// bl 0x82e98c78
	ctx.lr = 0x82EB6118;
	sub_82E98C78(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eb61b8
	if (ctx.cr0.lt) goto loc_82EB61B8;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82eb3d18
	ctx.lr = 0x82EB6130;
	sub_82EB3D18(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eb61b8
	if (ctx.cr0.lt) goto loc_82EB61B8;
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r29,r11,16
	ctx.r29.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82eb60e4
	if (ctx.cr6.lt) goto loc_82EB60E4;
loc_82EB6150:
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// addi r3,r24,8
	ctx.r3.s64 = ctx.r24.s64 + 8;
	// bl 0x82e6c190
	ctx.lr = 0x82EB6160;
	sub_82E6C190(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// beq 0x82eb624c
	if (ctx.cr0.eq) goto loc_82EB624C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb618c
	if (ctx.cr6.eq) goto loc_82EB618C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB6184;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
loc_82EB618C:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb6024
	if (ctx.cr6.lt) goto loc_82EB6024;
	// b 0x82eb61bc
	goto loc_82EB61BC;
loc_82EB61A4:
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// ori r31,r31,65535
	ctx.r31.u64 = ctx.r31.u64 | 65535;
	// b 0x82eb61bc
	goto loc_82EB61BC;
loc_82EB61B0:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
loc_82EB61B8:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82EB61BC:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eb61e4
	if (ctx.cr6.eq) goto loc_82EB61E4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB61DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
loc_82EB61E4:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eb620c
	if (ctx.cr6.eq) goto loc_82EB620C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB6204;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
loc_82EB620C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb6228
	if (ctx.cr6.eq) goto loc_82EB6228;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB6224;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
loc_82EB6228:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82eb6240
	if (ctx.cr6.eq) goto loc_82EB6240;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82eb4c00
	ctx.lr = 0x82EB6238;
	sub_82EB4C00(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82e8ee18
	ctx.lr = 0x82EB6240;
	sub_82E8EE18(ctx, base);
loc_82EB6240:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82EB6244:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
loc_82EB624C:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x82eb61bc
	goto loc_82EB61BC;
}

__attribute__((alias("__imp__sub_82EB6258"))) PPC_WEAK_FUNC(sub_82EB6258);
PPC_FUNC_IMPL(__imp__sub_82EB6258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82EB6260;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// bne cr6,0x82eb6290
	if (!ctx.cr6.eq) goto loc_82EB6290;
loc_82EB6284:
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// ori r30,r30,16387
	ctx.r30.u64 = ctx.r30.u64 | 16387;
	// b 0x82eb6434
	goto loc_82EB6434;
loc_82EB6290:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82eb6284
	if (ctx.cr6.eq) goto loc_82EB6284;
	// lwz r31,320(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 320);
	// lwz r11,324(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 324);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82eb6434
	if (!ctx.cr6.lt) goto loc_82EB6434;
	// addi r29,r3,580
	ctx.r29.s64 = ctx.r3.s64 + 580;
loc_82EB62B0:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82eb5a90
	ctx.lr = 0x82EB62C0;
	sub_82EB5A90(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB62DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82eb6418
	if (ctx.cr0.lt) goto loc_82EB6418;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82eb5a90
	ctx.lr = 0x82EB62F4;
	sub_82EB5A90(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eb6344
	if (!ctx.cr6.eq) goto loc_82EB6344;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82eb5a90
	ctx.lr = 0x82EB6314;
	sub_82EB5A90(ctx, base);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82eb6344
	if (!ctx.cr6.eq) goto loc_82EB6344;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82eb5a90
	ctx.lr = 0x82EB6338;
	sub_82EB5A90(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82eb63bc
	goto loc_82EB63BC;
loc_82EB6344:
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82eb5a90
	ctx.lr = 0x82EB6354;
	sub_82EB5A90(ctx, base);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82eb5a90
	ctx.lr = 0x82EB6364;
	sub_82EB5A90(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82ea32c0
	ctx.lr = 0x82EB637C;
	sub_82EA32C0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82eb6418
	if (ctx.cr0.lt) goto loc_82EB6418;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82eb5a90
	ctx.lr = 0x82EB6394;
	sub_82EB5A90(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB63B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82eb6418
	if (ctx.cr0.lt) goto loc_82EB6418;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82EB63BC:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB63D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82eb6418
	if (ctx.cr0.lt) goto loc_82EB6418;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb63fc
	if (ctx.cr6.eq) goto loc_82EB63FC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB63F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
loc_82EB63FC:
	// lwz r11,320(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 320);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r10,324(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 324);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb62b0
	if (ctx.cr6.lt) goto loc_82EB62B0;
	// b 0x82eb641c
	goto loc_82EB641C;
loc_82EB6418:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82EB641C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb6434
	if (ctx.cr6.eq) goto loc_82EB6434;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB6434;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EB6434:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB6440"))) PPC_WEAK_FUNC(sub_82EB6440);
PPC_FUNC_IMPL(__imp__sub_82EB6440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x82EB6448;
	__savegprlr_21(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,480(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 480);
	// li r26,0
	ctx.r26.s64 = 0;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb6484
	if (ctx.cr6.lt) goto loc_82EB6484;
	// lis r28,-32761
	ctx.r28.s64 = -2147024896;
	// ori r28,r28,87
	ctx.r28.u64 = ctx.r28.u64 | 87;
	// b 0x82eb6624
	goto loc_82EB6624;
loc_82EB6484:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// bl 0x82eb5ea8
	ctx.lr = 0x82EB6490;
	sub_82EB5EA8(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r30,r11,37
	ctx.r30.s64 = ctx.r11.s64 + 37;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lhz r31,31(r11)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + 31);
	// beq cr6,0x82eb6624
	if (ctx.cr6.eq) goto loc_82EB6624;
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
loc_82EB64BC:
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82eb64d8
	if (ctx.cr6.eq) goto loc_82EB64D8;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82eb64bc
	if (!ctx.cr6.eq) goto loc_82EB64BC;
	// b 0x82eb6624
	goto loc_82EB6624;
loc_82EB64D8:
	// lwz r25,4(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82eb6624
	if (ctx.cr6.eq) goto loc_82EB6624;
	// lhz r27,4(r25)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r25.u32 + 4);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// cmplwi r27,0
	ctx.cr0.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq 0x82eb6624
	if (ctx.cr0.eq) goto loc_82EB6624;
loc_82EB64F4:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// stw r26,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r26.u32);
	// stw r26,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r26.u32);
	// sth r26,16(r11)
	PPC_STORE_U16(ctx.r11.u32 + 16, ctx.r26.u16);
	// bl 0x82eb3d78
	ctx.lr = 0x82EB651C;
	sub_82EB3D78(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x82eb6624
	if (ctx.cr0.lt) goto loc_82EB6624;
	// lhz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x82eb6588
	if (!ctx.cr6.eq) goto loc_82EB6588;
	// clrlwi r9,r31,16
	ctx.r9.u64 = ctx.r31.u32 & 0xFFFF;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// add. r11,r9,r30
	ctx.r11.u64 = ctx.r9.u64 + ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb6558
	if (ctx.cr0.eq) goto loc_82EB6558;
	// addi r8,r30,2
	ctx.r8.s64 = ctx.r30.s64 + 2;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82eb6558
	if (!ctx.cr6.gt) goto loc_82EB6558;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// b 0x82eb656c
	goto loc_82EB656C;
loc_82EB6558:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// rlwinm r24,r11,24,24,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// rlwimi r24,r11,8,16,23
	ctx.r24.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFF00) | (ctx.r24.u64 & 0xFFFFFFFFFFFF00FF);
loc_82EB656C:
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82eb6624
	if (ctx.cr6.lt) goto loc_82EB6624;
	// addis r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 65536;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// clrlwi r31,r11,16
	ctx.r31.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x82eb658c
	goto loc_82EB658C;
loc_82EB6588:
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
loc_82EB658C:
	// clrlwi r10,r24,16
	ctx.r10.u64 = ctx.r24.u32 & 0xFFFF;
	// clrlwi r8,r31,16
	ctx.r8.u64 = ctx.r31.u32 & 0xFFFF;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82eb65f8
	if (ctx.cr6.lt) goto loc_82EB65F8;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
loc_82EB65A8:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// subf. r7,r5,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r5.s64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x82eb65c8
	if (!ctx.cr0.eq) goto loc_82EB65C8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x82eb65a8
	if (!ctx.cr6.eq) goto loc_82EB65A8;
loc_82EB65C8:
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82eb6604
	if (ctx.cr0.eq) goto loc_82EB6604;
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// subf r9,r10,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r10.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// clrlwi r29,r11,16
	ctx.r29.u64 = ctx.r11.u32 & 0xFFFF;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// clrlwi r31,r9,16
	ctx.r31.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82eb64f4
	if (ctx.cr6.lt) goto loc_82EB64F4;
	// b 0x82eb6624
	goto loc_82EB6624;
loc_82EB65F8:
	// lis r28,-16371
	ctx.r28.s64 = -1072889856;
	// ori r28,r28,14002
	ctx.r28.u64 = ctx.r28.u64 | 14002;
	// b 0x82eb6624
	goto loc_82EB6624;
loc_82EB6604:
	// clrlwi r5,r22,16
	ctx.r5.u64 = ctx.r22.u32 & 0xFFFF;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82eb65f8
	if (!ctx.cr6.eq) goto loc_82EB65F8;
	// add r6,r8,r30
	ctx.r6.u64 = ctx.r8.u64 + ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82e77870
	ctx.lr = 0x82EB6620;
	sub_82E77870(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82EB6624:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB6630"))) PPC_WEAK_FUNC(sub_82EB6630);
PPC_FUNC_IMPL(__imp__sub_82EB6630) {
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
	// lbz r11,568(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 568);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eb665c
	if (!ctx.cr0.eq) goto loc_82EB665C;
loc_82EB6650:
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,15000
	ctx.r3.u64 = ctx.r3.u64 | 15000;
	// b 0x82eb66d8
	goto loc_82EB66D8;
loc_82EB665C:
	// lwz r11,316(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82eb6674
	if (ctx.cr6.eq) goto loc_82EB6674;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,15003
	ctx.r3.u64 = ctx.r3.u64 | 15003;
	// b 0x82eb66d8
	goto loc_82EB66D8;
loc_82EB6674:
	// lhz r11,326(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 326);
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb6690
	if (ctx.cr6.lt) goto loc_82EB6690;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82eb66d8
	goto loc_82EB66D8;
loc_82EB6690:
	// lwz r11,480(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 480);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82eb6650
	if (!ctx.cr6.lt) goto loc_82EB6650;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,376
	ctx.r3.s64 = ctx.r3.s64 + 376;
	// bl 0x82eb5ea8
	ctx.lr = 0x82EB66A8;
	sub_82EB5EA8(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and. r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82eb66c8
	if (!ctx.cr0.eq) goto loc_82EB66C8;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14011
	ctx.r3.u64 = ctx.r3.u64 | 14011;
	// b 0x82eb66d8
	goto loc_82EB66D8;
loc_82EB66C8:
	// li r5,293
	ctx.r5.s64 = 293;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82EB66D4;
	sub_82FA77C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EB66D8:
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

__attribute__((alias("__imp__sub_82EB66EC"))) PPC_WEAK_FUNC(sub_82EB66EC);
PPC_FUNC_IMPL(__imp__sub_82EB66EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB66F0"))) PPC_WEAK_FUNC(sub_82EB66F0);
PPC_FUNC_IMPL(__imp__sub_82EB66F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82EB66F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,536
	ctx.r3.s64 = ctx.r3.s64 + 536;
	// bl 0x82e95580
	ctx.lr = 0x82EB6708;
	sub_82E95580(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r27,568(r31)
	PPC_STORE_U8(ctx.r31.u32 + 568, ctx.r27.u8);
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// bl 0x82fa7cf0
	ctx.lr = 0x82EB6720;
	sub_82FA7CF0(ctx, base);
	// lwz r11,480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb6770
	if (!ctx.cr6.gt) goto loc_82EB6770;
	// addi r29,r31,376
	ctx.r29.s64 = ctx.r31.s64 + 376;
	// addi r28,r31,484
	ctx.r28.s64 = ctx.r31.s64 + 484;
loc_82EB6738:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82eb5ea8
	ctx.lr = 0x82EB6748;
	sub_82EB5EA8(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 & ctx.r10.u64;
	// bl 0x82f29120
	ctx.lr = 0x82EB6760;
	sub_82F29120(ctx, base);
	// lwz r11,480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb6738
	if (ctx.cr6.lt) goto loc_82EB6738;
loc_82EB6770:
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e6b440
	ctx.lr = 0x82EB677C;
	sub_82E6B440(ctx, base);
	// stw r27,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r27.u32);
	// lwz r11,852(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 852);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// stw r27,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r27.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb67d8
	if (!ctx.cr6.gt) goto loc_82EB67D8;
	// addi r29,r31,580
	ctx.r29.s64 = ctx.r31.s64 + 580;
loc_82EB6798:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82eb5a90
	ctx.lr = 0x82EB67A8;
	sub_82EB5A90(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb67c8
	if (ctx.cr6.eq) goto loc_82EB67C8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB67C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EB67C8:
	// lwz r11,852(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 852);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb6798
	if (ctx.cr6.lt) goto loc_82EB6798;
loc_82EB67D8:
	// addi r31,r31,580
	ctx.r31.s64 = ctx.r31.s64 + 580;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb4ac0
	ctx.lr = 0x82EB67E8;
	sub_82EB4AC0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r27,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB67F8"))) PPC_WEAK_FUNC(sub_82EB67F8);
PPC_FUNC_IMPL(__imp__sub_82EB67F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82EB6800;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82eb6820
	if (!ctx.cr6.eq) goto loc_82EB6820;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82eb68d8
	goto loc_82EB68D8;
loc_82EB6820:
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r28,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r28.u32);
	// lwz r11,480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eb683c
	if (!ctx.cr6.eq) goto loc_82EB683C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82eb68d8
	goto loc_82EB68D8;
loc_82EB683C:
	// lwz r10,564(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	// lwz r9,560(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82eb6858
	if (!ctx.cr6.lt) goto loc_82EB6858;
loc_82EB684C:
	// lis r28,-32768
	ctx.r28.s64 = -2147483648;
	// ori r28,r28,65535
	ctx.r28.u64 = ctx.r28.u64 | 65535;
	// b 0x82eb68d4
	goto loc_82EB68D4;
loc_82EB6858:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// subf r30,r9,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r9.s64;
	// bl 0x82eb5ea8
	ctx.lr = 0x82EB686C;
	sub_82EB5EA8(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb684c
	if (ctx.cr0.eq) goto loc_82EB684C;
	// lwz r10,23(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23);
	// lwz r11,19(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82eb68d4
	if (!ctx.cr6.lt) goto loc_82EB68D4;
	// lwz r10,560(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// subf r30,r30,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r30.s64;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82eb68ac
	if (!ctx.cr6.gt) goto loc_82EB68AC;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
loc_82EB68AC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,536
	ctx.r3.s64 = ctx.r31.s64 + 536;
	// bl 0x82f23538
	ctx.lr = 0x82EB68B8;
	sub_82F23538(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x82eb68d4
	if (ctx.cr0.lt) goto loc_82EB68D4;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82eb68d0
	if (!ctx.cr6.lt) goto loc_82EB68D0;
	// lis r28,16397
	ctx.r28.s64 = 1074593792;
	// ori r28,r28,15000
	ctx.r28.u64 = ctx.r28.u64 | 15000;
loc_82EB68D0:
	// stw r29,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r29.u32);
loc_82EB68D4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82EB68D8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB68E0"))) PPC_WEAK_FUNC(sub_82EB68E0);
PPC_FUNC_IMPL(__imp__sub_82EB68E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7650
	ctx.lr = 0x82EB68E8;
	__savegprlr_18(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82eb6908
	if (!ctx.cr6.eq) goto loc_82EB6908;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82eb6a34
	goto loc_82EB6A34;
loc_82EB6908:
	// li r24,0
	ctx.r24.s64 = 0;
	// stw r24,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r24.u32);
	// lbz r11,568(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 568);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eb6928
	if (!ctx.cr0.eq) goto loc_82EB6928;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,15000
	ctx.r3.u64 = ctx.r3.u64 | 15000;
	// b 0x82eb6a34
	goto loc_82EB6A34;
loc_82EB6928:
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// addi r19,r31,484
	ctx.r19.s64 = ctx.r31.s64 + 484;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82f28fd0
	ctx.lr = 0x82EB6940;
	sub_82F28FD0(ctx, base);
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r20,r11,14
	ctx.r20.u64 = ctx.r11.u64 | 14;
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82eb695c
	if (!ctx.cr6.eq) goto loc_82EB695C;
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// b 0x82eb6d5c
	goto loc_82EB6D5C;
loc_82EB695C:
	// li r5,328
	ctx.r5.s64 = 328;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82EB696C;
	sub_82FA7CF0(ctx, base);
	// lwz r11,480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eb69e4
	if (ctx.cr6.eq) goto loc_82EB69E4;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// bl 0x82eb5ea8
	ctx.lr = 0x82EB6988;
	sub_82EB5EA8(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 & ctx.r10.u64;
	// lwz r10,23(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 23);
	// lwz r11,19(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 19);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,19(r30)
	PPC_STORE_U32(ctx.r30.u32 + 19, ctx.r11.u32);
	// lwz r11,300(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 300);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82eb69f8
	if (ctx.cr6.eq) goto loc_82EB69F8;
	// lwz r11,312(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 312);
	// lwz r10,308(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 308);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82eb69f8
	if (!ctx.cr6.lt) goto loc_82EB69F8;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb4318
	ctx.lr = 0x82EB69D8;
	sub_82EB4318(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82eb6d5c
	if (ctx.cr0.lt) goto loc_82EB6D5C;
	// b 0x82eb6d54
	goto loc_82EB6D54;
loc_82EB69E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb44a8
	ctx.lr = 0x82EB69EC;
	sub_82EB44A8(ctx, base);
	// lbz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 336);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,19(r30)
	PPC_STORE_U32(ctx.r30.u32 + 19, ctx.r11.u32);
loc_82EB69F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb4578
	ctx.lr = 0x82EB6A00;
	sub_82EB4578(ctx, base);
	// lwz r23,560(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplw cr6,r23,r3
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x82eb6a3c
	if (!ctx.cr6.lt) goto loc_82EB6A3C;
loc_82EB6A10:
	// lis r29,16397
	ctx.r29.s64 = 1074593792;
	// stw r23,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r23.u32);
	// ori r29,r29,15000
	ctx.r29.u64 = ctx.r29.u64 | 15000;
loc_82EB6A1C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82eb6a30
	if (ctx.cr6.eq) goto loc_82EB6A30;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82f29120
	ctx.lr = 0x82EB6A30;
	sub_82F29120(ctx, base);
loc_82EB6A30:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82EB6A34:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82fa76a0
	__restgprlr_18(ctx, base);
	return;
loc_82EB6A3C:
	// lwz r11,576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x82eb6a90
	if (!ctx.cr6.lt) goto loc_82EB6A90;
	// lwz r3,572(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb6a58
	if (ctx.cr6.eq) goto loc_82EB6A58;
	// bl 0x82e8ee18
	ctx.lr = 0x82EB6A58;
	sub_82E8EE18(ctx, base);
loc_82EB6A58:
	// stw r24,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r24.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e8edd0
	ctx.lr = 0x82EB6A74;
	sub_82E8EDD0(ctx, base);
	// stw r3,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82eb6a8c
	if (!ctx.cr0.eq) goto loc_82EB6A8C;
loc_82EB6A80:
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// stw r24,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r24.u32);
	// b 0x82eb6d5c
	goto loc_82EB6D5C;
loc_82EB6A8C:
	// stw r28,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r28.u32);
loc_82EB6A90:
	// addi r22,r31,536
	ctx.r22.s64 = ctx.r31.s64 + 536;
	// lwz r4,572(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82f23670
	ctx.lr = 0x82EB6AA4;
	sub_82F23670(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82eb6d5c
	if (ctx.cr0.lt) goto loc_82EB6D5C;
	// lwz r11,572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r10,r11,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFF;
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stw r10,2(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2, ctx.r10.u32);
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// lwz r11,572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r11,6(r30)
	PPC_STORE_U8(ctx.r30.u32 + 6, ctx.r11.u8);
	// lwz r10,572(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// lbz r4,346(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 346);
	// lbz r11,344(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 344);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82eb3cb8
	ctx.lr = 0x82EB6AF4;
	sub_82EB3CB8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// sth r11,31(r30)
	PPC_STORE_U16(ctx.r30.u32 + 31, ctx.r11.u16);
	// beq 0x82eb6b44
	if (ctx.cr0.eq) goto loc_82EB6B44;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r18,1
	ctx.r18.s64 = 1;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,33(r30)
	PPC_STORE_U32(ctx.r30.u32 + 33, ctx.r11.u32);
	// ble cr6,0x82eb6b50
	if (!ctx.cr6.gt) goto loc_82EB6B50;
	// stw r24,300(r30)
	PPC_STORE_U32(ctx.r30.u32 + 300, ctx.r24.u32);
	// lbz r4,345(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 345);
	// lwz r11,572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// addi r5,r11,2
	ctx.r5.s64 = ctx.r11.s64 + 2;
	// bl 0x82eb3cb8
	ctx.lr = 0x82EB6B38;
	sub_82EB3CB8(ctx, base);
	// stw r3,7(r30)
	PPC_STORE_U32(ctx.r30.u32 + 7, ctx.r3.u32);
	// cmplwi cr6,r29,8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 8, ctx.xer);
	// bge cr6,0x82eb6b6c
	if (!ctx.cr6.lt) goto loc_82EB6B6C;
loc_82EB6B44:
	// lis r29,-16371
	ctx.r29.s64 = -1072889856;
	// ori r29,r29,15002
	ctx.r29.u64 = ctx.r29.u64 | 15002;
	// b 0x82eb6d5c
	goto loc_82EB6D5C;
loc_82EB6B50:
	// stw r18,300(r30)
	PPC_STORE_U32(ctx.r30.u32 + 300, ctx.r18.u32);
	// stb r24,304(r30)
	PPC_STORE_U8(ctx.r30.u32 + 304, ctx.r24.u8);
	// lbz r4,345(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 345);
	// lwz r11,572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// addi r5,r11,2
	ctx.r5.s64 = ctx.r11.s64 + 2;
	// bl 0x82eb3cb8
	ctx.lr = 0x82EB6B68;
	sub_82EB3CB8(ctx, base);
	// stw r3,15(r30)
	PPC_STORE_U32(ctx.r30.u32 + 15, ctx.r3.u32);
loc_82EB6B6C:
	// lwz r11,340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// add r26,r29,r28
	ctx.r26.u64 = ctx.r29.u64 + ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82eb6b84
	if (ctx.cr6.eq) goto loc_82EB6B84;
	// lbz r11,369(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 369);
	// add r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 + ctx.r26.u64;
loc_82EB6B84:
	// lwz r10,300(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 300);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82eb6b98
	if (ctx.cr6.eq) goto loc_82EB6B98;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_82EB6B98:
	// clrlwi r25,r11,24
	ctx.r25.u64 = ctx.r11.u32 & 0xFF;
	// add r27,r25,r26
	ctx.r27.u64 = ctx.r25.u64 + ctx.r26.u64;
	// cmplw cr6,r23,r27
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82eb6a10
	if (ctx.cr6.lt) goto loc_82EB6A10;
	// lwz r11,576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x82eb6bf0
	if (!ctx.cr6.lt) goto loc_82EB6BF0;
	// lwz r3,572(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb6bc4
	if (ctx.cr6.eq) goto loc_82EB6BC4;
	// bl 0x82e8ee18
	ctx.lr = 0x82EB6BC4;
	sub_82E8EE18(ctx, base);
loc_82EB6BC4:
	// stw r24,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r24.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e8edd0
	ctx.lr = 0x82EB6BE0;
	sub_82E8EDD0(ctx, base);
	// stw r3,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb6a80
	if (ctx.cr0.eq) goto loc_82EB6A80;
	// stw r27,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r27.u32);
loc_82EB6BF0:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r4,572(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82f23670
	ctx.lr = 0x82EB6C00;
	sub_82F23670(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82eb6d5c
	if (ctx.cr0.lt) goto loc_82EB6D5C;
	// lwz r11,300(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 300);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// bne cr6,0x82eb6c60
	if (!ctx.cr6.eq) goto loc_82EB6C60;
	// lwz r28,33(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 33);
	// add r6,r11,r27
	ctx.r6.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lhz r5,31(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 31);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r3,r30,37
	ctx.r3.s64 = ctx.r30.s64 + 37;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82eb3b98
	ctx.lr = 0x82EB6C38;
	sub_82EB3B98(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82eb6d5c
	if (ctx.cr0.lt) goto loc_82EB6D5C;
	// lwz r10,572(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
	// lwbrx r10,r10,r28
	ctx.r10.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32));
	// stw r10,11(r30)
	PPC_STORE_U32(ctx.r30.u32 + 11, ctx.r10.u32);
	// lwz r10,572(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// lwbrx r11,r10,r11
	ctx.r11.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32));
	// stw r11,15(r30)
	PPC_STORE_U32(ctx.r30.u32 + 15, ctx.r11.u32);
	// b 0x82eb6c6c
	goto loc_82EB6C6C;
loc_82EB6C60:
	// lwz r10,33(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 33);
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// stb r11,316(r30)
	PPC_STORE_U8(ctx.r30.u32 + 316, ctx.r11.u8);
loc_82EB6C6C:
	// lwz r11,340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82eb6ca4
	if (ctx.cr6.eq) goto loc_82EB6CA4;
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lwz r10,572(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r11,369(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 369);
	// lbz r4,368(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 368);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r5,r11,r26
	ctx.r5.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bl 0x82eb3cb8
	ctx.lr = 0x82EB6C9C;
	sub_82EB3CB8(ctx, base);
	// add r11,r3,r26
	ctx.r11.u64 = ctx.r3.u64 + ctx.r26.u64;
	// b 0x82eb6ccc
	goto loc_82EB6CCC;
loc_82EB6CA4:
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eb6cb4
	if (!ctx.cr6.eq) goto loc_82EB6CB4;
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
loc_82EB6CB4:
	// lwz r10,360(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// lwz r9,19(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 19);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// subf r10,r25,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r25.s64;
	// subf r3,r26,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r26.s64;
loc_82EB6CCC:
	// lwz r10,300(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 300);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82eb6ce0
	if (!ctx.cr6.eq) goto loc_82EB6CE0;
	// stw r3,27(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27, ctx.r3.u32);
	// b 0x82eb6d08
	goto loc_82EB6D08;
loc_82EB6CE0:
	// lwz r10,572(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// lbz r10,-1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// stw r11,308(r30)
	PPC_STORE_U32(ctx.r30.u32 + 308, ctx.r11.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
	// stw r11,27(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27, ctx.r11.u32);
	// stw r11,11(r30)
	PPC_STORE_U32(ctx.r30.u32 + 11, ctx.r11.u32);
	// add r11,r10,r26
	ctx.r11.u64 = ctx.r10.u64 + ctx.r26.u64;
	// stw r11,312(r30)
	PPC_STORE_U32(ctx.r30.u32 + 312, ctx.r11.u32);
loc_82EB6D08:
	// rotlwi r28,r11,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,23(r30)
	PPC_STORE_U32(ctx.r30.u32 + 23, ctx.r11.u32);
	// stw r18,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r18.u32);
	// cmplw cr6,r28,r23
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r23.u32, ctx.xer);
	// ble cr6,0x82eb6d20
	if (!ctx.cr6.gt) goto loc_82EB6D20;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
loc_82EB6D20:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82f23538
	ctx.lr = 0x82EB6D2C;
	sub_82F23538(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82eb6d5c
	if (ctx.cr0.lt) goto loc_82EB6D5C;
	// lwz r11,23(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82eb6d48
	if (!ctx.cr6.lt) goto loc_82EB6D48;
	// lis r29,16397
	ctx.r29.s64 = 1074593792;
	// ori r29,r29,15000
	ctx.r29.u64 = ctx.r29.u64 | 15000;
loc_82EB6D48:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r11,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r11.u32);
loc_82EB6D54:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x82eb6d60
	if (!ctx.cr6.lt) goto loc_82EB6D60;
loc_82EB6D5C:
	// stw r24,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r24.u32);
loc_82EB6D60:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82eb6a1c
	if (ctx.cr6.eq) goto loc_82EB6A1C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// bl 0x82eb5788
	ctx.lr = 0x82EB6D7C;
	sub_82EB5788(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82eb6a30
	if (!ctx.cr0.eq) goto loc_82EB6A30;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82eb6d94
	if (ctx.cr6.eq) goto loc_82EB6D94;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e8ee18
	ctx.lr = 0x82EB6D94;
	sub_82E8EE18(ctx, base);
loc_82EB6D94:
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// b 0x82eb6a30
	goto loc_82EB6A30;
}

__attribute__((alias("__imp__sub_82EB6D9C"))) PPC_WEAK_FUNC(sub_82EB6D9C);
PPC_FUNC_IMPL(__imp__sub_82EB6D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB6DA0"))) PPC_WEAK_FUNC(sub_82EB6DA0);
PPC_FUNC_IMPL(__imp__sub_82EB6DA0) {
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
	// lwz r10,480(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 480);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lhz r11,326(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 326);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82eb6dd0
	if (ctx.cr6.eq) goto loc_82EB6DD0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82eb6e90
	goto loc_82EB6E90;
loc_82EB6DD0:
	// addi r31,r30,376
	ctx.r31.s64 = ctx.r30.s64 + 376;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb5ea8
	ctx.lr = 0x82EB6DE4;
	sub_82EB5EA8(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eb6e04
	if (!ctx.cr0.eq) goto loc_82EB6E04;
loc_82EB6DF8:
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14011
	ctx.r3.u64 = ctx.r3.u64 | 14011;
	// b 0x82eb6e90
	goto loc_82EB6E90;
loc_82EB6E04:
	// lwz r10,300(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82eb6e48
	if (ctx.cr6.eq) goto loc_82EB6E48;
	// lhz r10,326(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 326);
	// lbz r11,304(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 304);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x82eb6df8
	if (ctx.cr6.gt) goto loc_82EB6DF8;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb5ea8
	ctx.lr = 0x82EB6E38;
	sub_82EB5EA8(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_82EB6E48:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eb6df8
	if (ctx.cr6.eq) goto loc_82EB6DF8;
	// lwz r10,300(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82eb6e64
	if (!ctx.cr6.eq) goto loc_82EB6E64;
	// lwz r10,23(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23);
	// b 0x82eb6e68
	goto loc_82EB6E68;
loc_82EB6E64:
	// lwz r10,308(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 308);
loc_82EB6E68:
	// lwz r11,19(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19);
	// lwz r9,360(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 360);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,328(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82eb6e8c
	if (ctx.cr6.eq) goto loc_82EB6E8C;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r11,360(r30)
	PPC_STORE_U32(ctx.r30.u32 + 360, ctx.r11.u32);
loc_82EB6E8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EB6E90:
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

__attribute__((alias("__imp__sub_82EB6EA8"))) PPC_WEAK_FUNC(sub_82EB6EA8);
PPC_FUNC_IMPL(__imp__sub_82EB6EA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82EB6EB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82eb6ed0
	if (!ctx.cr6.eq) goto loc_82EB6ED0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82eb6f38
	goto loc_82EB6F38;
loc_82EB6ED0:
	// addi r4,r30,316
	ctx.r4.s64 = ctx.r30.s64 + 316;
	// li r5,60
	ctx.r5.s64 = 60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82fa77c0
	ctx.lr = 0x82EB6EE4;
	sub_82FA77C0(ctx, base);
	// sth r29,64(r31)
	PPC_STORE_U16(ctx.r31.u32 + 64, ctx.r29.u16);
	// stw r29,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r29.u32);
	// lhz r11,326(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 326);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82eb6f34
	if (ctx.cr0.eq) goto loc_82EB6F34;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,376
	ctx.r3.s64 = ctx.r30.s64 + 376;
	// bl 0x82eb5ea8
	ctx.lr = 0x82EB6F08;
	sub_82EB5EA8(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eb6f40
	if (!ctx.cr0.eq) goto loc_82EB6F40;
	// lis r29,-32768
	ctx.r29.s64 = -2147483648;
	// li r5,76
	ctx.r5.s64 = 76;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r29,r29,65535
	ctx.r29.u64 = ctx.r29.u64 | 65535;
	// bl 0x82fa7cf0
	ctx.lr = 0x82EB6F34;
	sub_82FA7CF0(ctx, base);
loc_82EB6F34:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82EB6F38:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_82EB6F40:
	// lwz r10,23(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// lwz r10,300(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82eb6f34
	if (ctx.cr6.eq) goto loc_82EB6F34;
	// lwz r10,308(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 308);
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// lbz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 304);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,64(r31)
	PPC_STORE_U16(ctx.r31.u32 + 64, ctx.r10.u16);
	// lbz r11,316(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 316);
	// stb r11,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r11.u8);
	// b 0x82eb6f34
	goto loc_82EB6F34;
}

__attribute__((alias("__imp__sub_82EB6F74"))) PPC_WEAK_FUNC(sub_82EB6F74);
PPC_FUNC_IMPL(__imp__sub_82EB6F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB6F78"))) PPC_WEAK_FUNC(sub_82EB6F78);
PPC_FUNC_IMPL(__imp__sub_82EB6F78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82EB6F80;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,480(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 480);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82eb70fc
	if (!ctx.cr6.lt) goto loc_82EB70FC;
	// lhz r11,326(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 326);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82eb70fc
	if (!ctx.cr6.lt) goto loc_82EB70FC;
	// addi r27,r3,376
	ctx.r27.s64 = ctx.r3.s64 + 376;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// bl 0x82eb5ea8
	ctx.lr = 0x82EB6FB8;
	sub_82EB5EA8(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and. r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82eb70ec
	if (ctx.cr0.eq) goto loc_82EB70EC;
	// lwz r7,300(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82eb6fe8
	if (ctx.cr6.eq) goto loc_82EB6FE8;
	// lbz r10,304(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 304);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82eb700c
	if (!ctx.cr0.eq) goto loc_82EB700C;
loc_82EB6FE8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82eb4578
	ctx.lr = 0x82EB6FF0;
	sub_82EB4578(ctx, base);
	// lhz r11,31(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 31);
	// lwz r10,340(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 340);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82eb700c
	if (ctx.cr6.eq) goto loc_82EB700C;
	// lbz r10,369(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 369);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82EB700C:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82eb7018
	if (ctx.cr6.eq) goto loc_82EB7018;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82EB7018:
	// lwz r10,27(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,23(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23, ctx.r11.u32);
	// beq cr6,0x82eb70f4
	if (ctx.cr6.eq) goto loc_82EB70F4;
	// lbz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 304);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82eb7044
	if (!ctx.cr6.lt) goto loc_82EB7044;
	// lis r26,-32761
	ctx.r26.s64 = -2147024896;
	// ori r26,r26,87
	ctx.r26.u64 = ctx.r26.u64 | 87;
	// b 0x82eb70f4
	goto loc_82EB70F4;
loc_82EB7044:
	// subf r30,r11,r28
	ctx.r30.s64 = ctx.r28.s64 - ctx.r11.s64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82eb5ea8
	ctx.lr = 0x82EB7058;
	sub_82EB5EA8(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb70ec
	if (ctx.cr0.eq) goto loc_82EB70EC;
	// lbz r10,304(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 304);
	// lbz r29,316(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 316);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x82eb70a0
	if (!ctx.cr6.gt) goto loc_82EB70A0;
	// lwz r9,15(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r8,15(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15);
	// twllei r10,0
	if (ctx.r10.u32 <= 0) __builtin_debugtrap();
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// divwu r10,r9,r10
	ctx.r10.u32 = ctx.r9.u32 / ctx.r10.u32;
	// clrlwi r29,r10,24
	ctx.r29.u64 = ctx.r10.u32 & 0xFF;
loc_82EB70A0:
	// lwz r11,308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 308);
	// lwz r10,23(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23);
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82eb70e0
	goto loc_82EB70E0;
loc_82EB70B0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82eb5ea8
	ctx.lr = 0x82EB70C0;
	sub_82EB5EA8(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb70ec
	if (ctx.cr0.eq) goto loc_82EB70EC;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r31,308(r11)
	PPC_STORE_U32(ctx.r11.u32 + 308, ctx.r31.u32);
	// stb r29,316(r11)
	PPC_STORE_U8(ctx.r11.u32 + 316, ctx.r29.u8);
loc_82EB70E0:
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// ble cr6,0x82eb70b0
	if (!ctx.cr6.gt) goto loc_82EB70B0;
	// b 0x82eb70f4
	goto loc_82EB70F4;
loc_82EB70EC:
	// lis r26,-32768
	ctx.r26.s64 = -2147483648;
	// ori r26,r26,65535
	ctx.r26.u64 = ctx.r26.u64 | 65535;
loc_82EB70F4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// b 0x82eb7104
	goto loc_82EB7104;
loc_82EB70FC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82EB7104:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB710C"))) PPC_WEAK_FUNC(sub_82EB710C);
PPC_FUNC_IMPL(__imp__sub_82EB710C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB7110"))) PPC_WEAK_FUNC(sub_82EB7110);
PPC_FUNC_IMPL(__imp__sub_82EB7110) {
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
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// bl 0x82eb44a8
	ctx.lr = 0x82EB7128;
	sub_82EB44A8(ctx, base);
	// lbz r10,336(r7)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + 336);
	// lwz r11,480(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 480);
	// add r31,r3,r10
	ctx.r31.u64 = ctx.r3.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eb716c
	if (ctx.cr6.eq) goto loc_82EB716C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// addi r3,r7,376
	ctx.r3.s64 = ctx.r7.s64 + 376;
	// bl 0x82eb5ea8
	ctx.lr = 0x82EB714C;
	sub_82EB5EA8(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb716c
	if (ctx.cr0.eq) goto loc_82EB716C;
	// lwz r10,23(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23);
	// lwz r11,19(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82EB716C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82EB7184"))) PPC_WEAK_FUNC(sub_82EB7184);
PPC_FUNC_IMPL(__imp__sub_82EB7184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB7188"))) PPC_WEAK_FUNC(sub_82EB7188);
PPC_FUNC_IMPL(__imp__sub_82EB7188) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82EB7190;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,480(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 480);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb7208
	if (!ctx.cr6.gt) goto loc_82EB7208;
	// addi r28,r3,376
	ctx.r28.s64 = ctx.r3.s64 + 376;
loc_82EB71B0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82eb5ea8
	ctx.lr = 0x82EB71C0;
	sub_82EB5EA8(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb7208
	if (ctx.cr0.eq) goto loc_82EB7208;
	// lwz r10,300(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82eb71ec
	if (ctx.cr6.eq) goto loc_82EB71EC;
	// lbz r11,304(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 304);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82eb71f8
	if (!ctx.cr0.eq) goto loc_82EB71F8;
loc_82EB71EC:
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r29,r11,16
	ctx.r29.u64 = ctx.r11.u32 & 0xFFFF;
loc_82EB71F8:
	// lwz r11,480(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 480);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb71b0
	if (ctx.cr6.lt) goto loc_82EB71B0;
loc_82EB7208:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB7214"))) PPC_WEAK_FUNC(sub_82EB7214);
PPC_FUNC_IMPL(__imp__sub_82EB7214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB7218"))) PPC_WEAK_FUNC(sub_82EB7218);
PPC_FUNC_IMPL(__imp__sub_82EB7218) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82EB7220;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,376
	ctx.r27.s64 = ctx.r3.s64 + 376;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82eb5ea8
	ctx.lr = 0x82EB723C;
	sub_82EB5EA8(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eb7258
	if (!ctx.cr0.eq) goto loc_82EB7258;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82eb7334
	goto loc_82EB7334;
loc_82EB7258:
	// lwz r10,300(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82eb7330
	if (ctx.cr6.eq) goto loc_82EB7330;
	// lbz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 304);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82eb7330
	if (!ctx.cr0.eq) goto loc_82EB7330;
	// lwz r10,480(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 480);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r11,27(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// b 0x82eb7320
	goto loc_82EB7320;
loc_82EB7288:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82eb5ea8
	ctx.lr = 0x82EB7298;
	sub_82EB5EA8(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// lwz r11,300(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82eb7328
	if (ctx.cr6.eq) goto loc_82EB7328;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82eb5ea8
	ctx.lr = 0x82EB72C4;
	sub_82EB5EA8(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// and r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 & ctx.r9.u64;
	// lbz r11,304(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 304);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x82eb7328
	if (!ctx.cr6.eq) goto loc_82EB7328;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82eb5ea8
	ctx.lr = 0x82EB72F8;
	sub_82EB5EA8(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r9,480(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 480);
	// clrlwi r30,r30,16
	ctx.r30.u64 = ctx.r30.u32 & 0xFFFF;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// lwz r11,27(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_82EB7320:
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// blt cr6,0x82eb7288
	if (ctx.cr6.lt) goto loc_82EB7288;
loc_82EB7328:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82eb7334
	goto loc_82EB7334;
loc_82EB7330:
	// lwz r3,27(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27);
loc_82EB7334:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB733C"))) PPC_WEAK_FUNC(sub_82EB733C);
PPC_FUNC_IMPL(__imp__sub_82EB733C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB7340"))) PPC_WEAK_FUNC(sub_82EB7340);
PPC_FUNC_IMPL(__imp__sub_82EB7340) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82EB7348;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82eb44a8
	ctx.lr = 0x82EB7354;
	sub_82EB44A8(ctx, base);
	// lbz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 336);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	// add r29,r3,r11
	ctx.r29.u64 = ctx.r3.u64 + ctx.r11.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82eb73cc
	if (!ctx.cr6.gt) goto loc_82EB73CC;
	// addi r28,r31,376
	ctx.r28.s64 = ctx.r31.s64 + 376;
loc_82EB7370:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82eb5ea8
	ctx.lr = 0x82EB7380;
	sub_82EB5EA8(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r29,19(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19, ctx.r29.u32);
	// bl 0x82eb5ea8
	ctx.lr = 0x82EB73A4;
	sub_82EB5EA8(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r9,480(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// lwz r11,23(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// blt cr6,0x82eb7370
	if (ctx.cr6.lt) goto loc_82EB7370;
loc_82EB73CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb7110
	ctx.lr = 0x82EB73D4;
	sub_82EB7110(ctx, base);
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eb740c
	if (!ctx.cr6.eq) goto loc_82EB740C;
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x82eb73f8
	if (ctx.cr6.lt) goto loc_82EB73F8;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// stw r11,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r11.u32);
	// b 0x82eb7414
	goto loc_82EB7414;
loc_82EB73F8:
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r3,r3,15002
	ctx.r3.u64 = ctx.r3.u64 | 15002;
	// stw r11,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r11.u32);
	// b 0x82eb7418
	goto loc_82EB7418;
loc_82EB740C:
	// stw r3,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r3.u32);
	// stw r3,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r3.u32);
loc_82EB7414:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EB7418:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB7420"))) PPC_WEAK_FUNC(sub_82EB7420);
PPC_FUNC_IMPL(__imp__sub_82EB7420) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82EB7428;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// bl 0x82eb44a8
	ctx.lr = 0x82EB7444;
	sub_82EB44A8(ctx, base);
	// lbz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 336);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// add r28,r3,r11
	ctx.r28.u64 = ctx.r3.u64 + ctx.r11.u64;
	// bne cr6,0x82eb7460
	if (!ctx.cr6.eq) goto loc_82EB7460;
loc_82EB7454:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82eb7720
	goto loc_82EB7720;
loc_82EB7460:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB7478;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb7720
	if (ctx.cr0.lt) goto loc_82EB7720;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eb7454
	if (!ctx.cr6.eq) goto loc_82EB7454;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ea36a0
	ctx.lr = 0x82EB7498;
	sub_82EA36A0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82eb7700
	if (ctx.cr0.lt) goto loc_82EB7700;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB74B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82eb7700
	if (ctx.cr0.lt) goto loc_82EB7700;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB74E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82eb7700
	if (ctx.cr0.lt) goto loc_82EB7700;
	// lwz r10,332(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82eb750c
	if (ctx.cr6.eq) goto loc_82EB750C;
	// li r10,130
	ctx.r10.s64 = 130;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// sthu r30,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r30.u16);
	ctx.r11.u32 = ea;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_82EB750C:
	// lwz r9,340(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82eb7520
	if (ctx.cr6.eq) goto loc_82EB7520;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82EB7520:
	// lbz r9,337(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 337);
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// lbz r7,338(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 338);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lbz r6,339(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 339);
	// rlwimi r7,r9,2,28,29
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0xC) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFF3);
	// clrlwi r9,r7,28
	ctx.r9.u64 = ctx.r7.u32 & 0xF;
	// rlwimi r6,r9,2,0,29
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0xFFFFFFFC) | (ctx.r6.u64 & 0xFFFFFFFF00000003);
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// lbz r9,345(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 345);
	// lbz r8,346(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 346);
	// lbz r7,349(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 349);
	// lbz r6,348(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 348);
	// rlwimi r7,r6,2,0,29
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 2) & 0xFFFFFFFC) | (ctx.r7.u64 & 0xFFFFFFFF00000003);
	// rlwimi r9,r7,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r7.u32, 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// rlwimi r8,r9,2,0,29
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0xFFFFFFFC) | (ctx.r8.u64 & 0xFFFFFFFF00000003);
	// stbu r8,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// lbz r9,337(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 337);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// lwz r8,352(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// beq cr6,0x82eb75b4
	if (ctx.cr6.eq) goto loc_82EB75B4;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x82eb759c
	if (ctx.cr6.eq) goto loc_82EB759C;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x82eb75bc
	if (!ctx.cr6.eq) goto loc_82EB75BC;
	// stwbrx r8,0,r11
	PPC_STORE_U32(ctx.r11.u32, __builtin_bswap32(ctx.r8.u32));
	// li r10,4
	ctx.r10.s64 = 4;
	// b 0x82eb75bc
	goto loc_82EB75BC;
loc_82EB759C:
	// clrlwi r9,r8,16
	ctx.r9.u64 = ctx.r8.u32 & 0xFFFF;
	// li r10,2
	ctx.r10.s64 = 2;
	// rlwinm r8,r9,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// rlwimi r8,r9,8,16,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF00) | (ctx.r8.u64 & 0xFFFFFFFFFFFF00FF);
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// b 0x82eb75bc
	goto loc_82EB75BC;
loc_82EB75B4:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
loc_82EB75BC:
	// lbz r9,339(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 339);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,356(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82eb7608
	if (ctx.cr6.eq) goto loc_82EB7608;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x82eb75f0
	if (ctx.cr6.eq) goto loc_82EB75F0;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x82eb7610
	if (!ctx.cr6.eq) goto loc_82EB7610;
	// stwbrx r8,0,r10
	PPC_STORE_U32(ctx.r10.u32, __builtin_bswap32(ctx.r8.u32));
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82eb7610
	goto loc_82EB7610;
loc_82EB75F0:
	// clrlwi r9,r8,16
	ctx.r9.u64 = ctx.r8.u32 & 0xFFFF;
	// li r11,2
	ctx.r11.s64 = 2;
	// rlwinm r8,r9,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// rlwimi r8,r9,8,16,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF00) | (ctx.r8.u64 & 0xFFFFFFFFFFFF00FF);
	// sth r8,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r8.u16);
	// b 0x82eb7610
	goto loc_82EB7610;
loc_82EB7608:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
loc_82EB7610:
	// lbz r9,338(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 338);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,360(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82eb765c
	if (ctx.cr6.eq) goto loc_82EB765C;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x82eb7644
	if (ctx.cr6.eq) goto loc_82EB7644;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x82eb7664
	if (!ctx.cr6.eq) goto loc_82EB7664;
	// stwbrx r8,0,r11
	PPC_STORE_U32(ctx.r11.u32, __builtin_bswap32(ctx.r8.u32));
	// li r10,4
	ctx.r10.s64 = 4;
	// b 0x82eb7664
	goto loc_82EB7664;
loc_82EB7644:
	// clrlwi r9,r8,16
	ctx.r9.u64 = ctx.r8.u32 & 0xFFFF;
	// li r10,2
	ctx.r10.s64 = 2;
	// rlwinm r8,r9,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// rlwimi r8,r9,8,16,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF00) | (ctx.r8.u64 & 0xFFFFFFFFFFFF00FF);
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// b 0x82eb7664
	goto loc_82EB7664;
loc_82EB765C:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
loc_82EB7664:
	// addi r9,r31,320
	ctx.r9.s64 = ctx.r31.s64 + 320;
	// lwbrx r9,0,r9
	ctx.r9.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r9.u32));
	// stwux r9,r11,r10
	ea = ctx.r11.u32 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// lhz r10,324(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 324);
	// rlwinm r9,r10,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// rlwimi r9,r10,8,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// sthu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// lwz r10,340(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r30,r11,2
	ctx.r30.s64 = ctx.r11.s64 + 2;
	// beq cr6,0x82eb76b0
	if (ctx.cr6.eq) goto loc_82EB76B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb7188
	ctx.lr = 0x82EB7698;
	sub_82EB7188(ctx, base);
	// lbz r11,368(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 368);
	// clrlwi r10,r3,26
	ctx.r10.u64 = ctx.r3.u32 & 0x3F;
	// rotlwi r11,r11,6
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 6);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_82EB76B0:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82eb76c8
	if (ctx.cr6.eq) goto loc_82EB76C8;
	// lis r29,-32768
	ctx.r29.s64 = -2147483648;
	// ori r29,r29,65535
	ctx.r29.u64 = ctx.r29.u64 | 65535;
loc_82EB76C8:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB76DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x82eb7700
	if (ctx.cr6.lt) goto loc_82EB7700;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB76FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82EB7700:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb771c
	if (ctx.cr6.eq) goto loc_82EB771C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB771C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EB771C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82EB7720:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB7728"))) PPC_WEAK_FUNC(sub_82EB7728);
PPC_FUNC_IMPL(__imp__sub_82EB7728) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82EB7730;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,480(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 480);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb7764
	if (ctx.cr6.lt) goto loc_82EB7764;
loc_82EB7758:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82eb7bc4
	goto loc_82EB7BC4;
loc_82EB7764:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82eb7758
	if (ctx.cr6.eq) goto loc_82EB7758;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB7784;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb7bc4
	if (ctx.cr0.lt) goto loc_82EB7BC4;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eb7758
	if (ctx.cr6.eq) goto loc_82EB7758;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r28,376
	ctx.r3.s64 = ctx.r28.s64 + 376;
	// bl 0x82eb5ea8
	ctx.lr = 0x82EB77A8;
	sub_82EB5EA8(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and. r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82eb77c8
	if (!ctx.cr0.eq) goto loc_82EB77C8;
	// lis r26,-32768
	ctx.r26.s64 = -2147483648;
	// ori r26,r26,65535
	ctx.r26.u64 = ctx.r26.u64 | 65535;
	// b 0x82eb7ba4
	goto loc_82EB7BA4;
loc_82EB77C8:
	// lwz r11,23(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 23);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,27(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27);
	// subf r31,r10,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ea36a0
	ctx.lr = 0x82EB77E0;
	sub_82EA36A0(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt 0x82eb7ba4
	if (ctx.cr0.lt) goto loc_82EB7BA4;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB7800;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt 0x82eb7ba4
	if (ctx.cr0.lt) goto loc_82EB7BA4;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB782C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt 0x82eb7ba4
	if (ctx.cr0.lt) goto loc_82EB7BA4;
	// lwz r11,300(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 300);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82eb7878
	if (ctx.cr6.eq) goto loc_82EB7878;
	// lbz r11,304(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 304);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82eb7878
	if (ctx.cr0.eq) goto loc_82EB7878;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// bne cr6,0x82eb786c
	if (!ctx.cr6.eq) goto loc_82EB786C;
	// lwz r11,27(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bgt cr6,0x82eb786c
	if (ctx.cr6.gt) goto loc_82EB786C;
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// b 0x82eb7b6c
	goto loc_82EB7B6C;
loc_82EB786C:
	// lis r26,-32768
	ctx.r26.s64 = -2147483648;
	// ori r26,r26,65535
	ctx.r26.u64 = ctx.r26.u64 | 65535;
	// b 0x82eb7b6c
	goto loc_82EB7B6C;
loc_82EB7878:
	// lwz r10,2(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82eb788c
	if (ctx.cr6.eq) goto loc_82EB788C;
	// li r11,128
	ctx.r11.s64 = 128;
loc_82EB788C:
	// lhz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// clrlwi r8,r8,25
	ctx.r8.u64 = ctx.r8.u32 & 0x7F;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stb r8,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r8.u8);
	// lbz r9,349(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 349);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// lbz r8,6(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 6);
	// beq cr6,0x82eb78ec
	if (ctx.cr6.eq) goto loc_82EB78EC;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x82eb78d4
	if (ctx.cr6.eq) goto loc_82EB78D4;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x82eb78f4
	if (!ctx.cr6.eq) goto loc_82EB78F4;
	// stwbrx r8,0,r10
	PPC_STORE_U32(ctx.r10.u32, __builtin_bswap32(ctx.r8.u32));
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82eb78f4
	goto loc_82EB78F4;
loc_82EB78D4:
	// clrlwi r9,r8,16
	ctx.r9.u64 = ctx.r8.u32 & 0xFFFF;
	// li r11,2
	ctx.r11.s64 = 2;
	// rlwinm r8,r9,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// rlwimi r8,r9,8,16,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF00) | (ctx.r8.u64 & 0xFFFFFFFFFFFF00FF);
	// sth r8,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r8.u16);
	// b 0x82eb78f4
	goto loc_82EB78F4;
loc_82EB78EC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
loc_82EB78F4:
	// lwz r9,300(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 300);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r11,31(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 31);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82eb7a3c
	if (ctx.cr6.eq) goto loc_82EB7A3C;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82eb786c
	if (!ctx.cr6.eq) goto loc_82EB786C;
	// lwz r11,27(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bgt cr6,0x82eb786c
	if (ctx.cr6.gt) goto loc_82EB786C;
	// lbz r8,345(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 345);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lwz r9,15(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x82eb7964
	if (ctx.cr6.eq) goto loc_82EB7964;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x82eb794c
	if (ctx.cr6.eq) goto loc_82EB794C;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// bne cr6,0x82eb796c
	if (!ctx.cr6.eq) goto loc_82EB796C;
	// stwbrx r9,0,r10
	PPC_STORE_U32(ctx.r10.u32, __builtin_bswap32(ctx.r9.u32));
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82eb796c
	goto loc_82EB796C;
loc_82EB794C:
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// li r11,2
	ctx.r11.s64 = 2;
	// rlwinm r8,r9,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// rlwimi r8,r9,8,16,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF00) | (ctx.r8.u64 & 0xFFFFFFFFFFFF00FF);
	// sth r8,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r8.u16);
	// b 0x82eb796c
	goto loc_82EB796C;
loc_82EB7964:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
loc_82EB796C:
	// lbz r9,346(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 346);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82eb79b0
	if (ctx.cr6.eq) goto loc_82EB79B0;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x82eb79a0
	if (ctx.cr6.eq) goto loc_82EB79A0;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x82eb79bc
	if (!ctx.cr6.eq) goto loc_82EB79BC;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r10,4
	ctx.r10.s64 = 4;
	// stwbrx r9,0,r11
	PPC_STORE_U32(ctx.r11.u32, __builtin_bswap32(ctx.r9.u32));
	// b 0x82eb79bc
	goto loc_82EB79BC;
loc_82EB79A0:
	// li r9,256
	ctx.r9.s64 = 256;
	// li r10,2
	ctx.r10.s64 = 2;
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// b 0x82eb79bc
	goto loc_82EB79BC;
loc_82EB79B0:
	// li r9,1
	ctx.r9.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
loc_82EB79BC:
	// lbz r9,316(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 316);
	// stbux r9,r11,r10
	ea = ctx.r11.u32 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// lwz r10,340(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 340);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// beq cr6,0x82eb7a30
	if (ctx.cr6.eq) goto loc_82EB7A30;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82eb7218
	ctx.lr = 0x82EB79E0;
	sub_82EB7218(ctx, base);
	// lbz r10,368(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 368);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82eb7a24
	if (ctx.cr6.eq) goto loc_82EB7A24;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82eb7a0c
	if (ctx.cr6.eq) goto loc_82EB7A0C;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82eb7a2c
	if (!ctx.cr6.eq) goto loc_82EB7A2C;
	// stwbrx r3,0,r31
	PPC_STORE_U32(ctx.r31.u32, __builtin_bswap32(ctx.r3.u32));
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82eb7a2c
	goto loc_82EB7A2C;
loc_82EB7A0C:
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// li r11,2
	ctx.r11.s64 = 2;
	// rlwinm r9,r10,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// rlwimi r9,r10,8,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// sth r9,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r9.u16);
	// b 0x82eb7a2c
	goto loc_82EB7A2C;
loc_82EB7A24:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r3,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r3.u8);
loc_82EB7A2C:
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82EB7A30:
	// lwz r11,27(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// b 0x82eb7b6c
	goto loc_82EB7B6C;
loc_82EB7A3C:
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x82eb786c
	if (ctx.cr6.lt) goto loc_82EB786C;
	// lbz r8,345(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 345);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lwz r9,7(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x82eb7a8c
	if (ctx.cr6.eq) goto loc_82EB7A8C;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x82eb7a74
	if (ctx.cr6.eq) goto loc_82EB7A74;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// bne cr6,0x82eb7a94
	if (!ctx.cr6.eq) goto loc_82EB7A94;
	// stwbrx r9,0,r10
	PPC_STORE_U32(ctx.r10.u32, __builtin_bswap32(ctx.r9.u32));
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82eb7a94
	goto loc_82EB7A94;
loc_82EB7A74:
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// li r11,2
	ctx.r11.s64 = 2;
	// rlwinm r8,r9,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// rlwimi r8,r9,8,16,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF00) | (ctx.r8.u64 & 0xFFFFFFFFFFFF00FF);
	// sth r8,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r8.u16);
	// b 0x82eb7a94
	goto loc_82EB7A94;
loc_82EB7A8C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
loc_82EB7A94:
	// lbz r9,346(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 346);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r8,31(r29)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r29.u32 + 31);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82eb7ae0
	if (ctx.cr6.eq) goto loc_82EB7AE0;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x82eb7ac8
	if (ctx.cr6.eq) goto loc_82EB7AC8;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x82eb7ae8
	if (!ctx.cr6.eq) goto loc_82EB7AE8;
	// stwbrx r8,0,r11
	PPC_STORE_U32(ctx.r11.u32, __builtin_bswap32(ctx.r8.u32));
	// li r10,4
	ctx.r10.s64 = 4;
	// b 0x82eb7ae8
	goto loc_82EB7AE8;
loc_82EB7AC8:
	// clrlwi r9,r8,16
	ctx.r9.u64 = ctx.r8.u32 & 0xFFFF;
	// li r10,2
	ctx.r10.s64 = 2;
	// rlwinm r8,r9,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// rlwimi r8,r9,8,16,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF00) | (ctx.r8.u64 & 0xFFFFFFFFFFFF00FF);
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// b 0x82eb7ae8
	goto loc_82EB7AE8;
loc_82EB7AE0:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
loc_82EB7AE8:
	// addi r9,r29,11
	ctx.r9.s64 = ctx.r29.s64 + 11;
	// addi r8,r29,15
	ctx.r8.s64 = ctx.r29.s64 + 15;
	// addi r4,r29,37
	ctx.r4.s64 = ctx.r29.s64 + 37;
	// lwbrx r9,0,r9
	ctx.r9.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r9.u32));
	// stwux r9,r11,r10
	ea = ctx.r11.u32 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// lwbrx r10,0,r8
	ctx.r10.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r8.u32));
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// lhz r11,31(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 31);
	// addi r30,r11,-8
	ctx.r30.s64 = ctx.r11.s64 + -8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82EB7B1C;
	sub_82FA77C0(ctx, base);
	// lwz r11,340(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82eb7b6c
	if (ctx.cr6.eq) goto loc_82EB7B6C;
	// lbz r11,368(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 368);
	// add r9,r30,r31
	ctx.r9.u64 = ctx.r30.u64 + ctx.r31.u64;
	// lwz r10,27(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82eb7b68
	if (ctx.cr6.eq) goto loc_82EB7B68;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82eb7b54
	if (ctx.cr6.eq) goto loc_82EB7B54;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82eb7b6c
	if (!ctx.cr6.eq) goto loc_82EB7B6C;
	// stwbrx r10,0,r9
	PPC_STORE_U32(ctx.r9.u32, __builtin_bswap32(ctx.r10.u32));
	// b 0x82eb7b6c
	goto loc_82EB7B6C;
loc_82EB7B54:
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwinm r10,r11,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// rlwimi r10,r11,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// sth r10,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r10.u16);
	// b 0x82eb7b6c
	goto loc_82EB7B6C;
loc_82EB7B68:
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
loc_82EB7B6C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB7B80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt cr6,0x82eb7ba4
	if (ctx.cr6.lt) goto loc_82EB7BA4;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB7BA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_82EB7BA4:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb7bc0
	if (ctx.cr6.eq) goto loc_82EB7BC0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB7BC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EB7BC0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82EB7BC4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB7BCC"))) PPC_WEAK_FUNC(sub_82EB7BCC);
PPC_FUNC_IMPL(__imp__sub_82EB7BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB7BD0"))) PPC_WEAK_FUNC(sub_82EB7BD0);
PPC_FUNC_IMPL(__imp__sub_82EB7BD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82EB7BD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,480(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 480);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb7c08
	if (ctx.cr6.lt) goto loc_82EB7C08;
loc_82EB7BFC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82eb7c78
	goto loc_82EB7C78;
loc_82EB7C08:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82eb7bfc
	if (ctx.cr6.eq) goto loc_82EB7BFC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB7C28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb7c78
	if (ctx.cr0.lt) goto loc_82EB7C78;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eb7bfc
	if (ctx.cr6.eq) goto loc_82EB7BFC;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// bl 0x82eb5ea8
	ctx.lr = 0x82EB7C4C;
	sub_82EB5EA8(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and. r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82eb7c6c
	if (!ctx.cr0.eq) goto loc_82EB7C6C;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x82eb7c78
	goto loc_82EB7C78;
loc_82EB7C6C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb6258
	ctx.lr = 0x82EB7C78;
	sub_82EB6258(ctx, base);
loc_82EB7C78:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB7C80"))) PPC_WEAK_FUNC(sub_82EB7C80);
PPC_FUNC_IMPL(__imp__sub_82EB7C80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82EB7C88;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,5048
	ctx.r11.s64 = ctx.r11.s64 + 5048;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r3,376
	ctx.r3.s64 = ctx.r3.s64 + 376;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r30.u32);
	// bl 0x82e90d48
	ctx.lr = 0x82EB7CDC;
	sub_82E90D48(ctx, base);
	// addi r28,r31,484
	ctx.r28.s64 = ctx.r31.s64 + 484;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f28bb8
	ctx.lr = 0x82EB7CE8;
	sub_82F28BB8(ctx, base);
	// addi r11,r31,536
	ctx.r11.s64 = ctx.r31.s64 + 536;
	// stw r30,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r30.u32);
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r11,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r11.u32);
	// addi r9,r9,5040
	ctx.r9.s64 = ctx.r9.s64 + 5040;
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// addi r11,r31,580
	ctx.r11.s64 = ctx.r31.s64 + 580;
	// stw r10,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r10.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r10,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r10.u32);
	// stw r30,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r30.u32);
	// stw r30,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r30.u32);
	// stw r30,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r30.u32);
	// stb r30,568(r31)
	PPC_STORE_U8(ctx.r31.u32 + 568, ctx.r30.u8);
	// stw r30,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r30.u32);
	// stw r30,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r30.u32);
	// stw r30,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r30.u32);
	// stw r30,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r30.u32);
	// sth r30,604(r31)
	PPC_STORE_U16(ctx.r31.u32 + 604, ctx.r30.u16);
	// stb r30,606(r31)
	PPC_STORE_U8(ctx.r31.u32 + 606, ctx.r30.u8);
	// stw r30,848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 848, ctx.r30.u32);
	// stw r9,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r9.u32);
	// stw r30,852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 852, ctx.r30.u32);
	// bne cr6,0x82eb7d60
	if (!ctx.cr6.eq) goto loc_82EB7D60;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82eb7db0
	goto loc_82EB7DB0;
loc_82EB7D60:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb66f0
	ctx.lr = 0x82EB7D68;
	sub_82EB66F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb7db0
	if (ctx.cr0.lt) goto loc_82EB7DB0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb5f50
	ctx.lr = 0x82EB7D7C;
	sub_82EB5F50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb7db0
	if (ctx.cr0.lt) goto loc_82EB7DB0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb4098
	ctx.lr = 0x82EB7D90;
	sub_82EB4098(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb7db0
	if (ctx.cr0.lt) goto loc_82EB7DB0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,328
	ctx.r4.s64 = 328;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f28eb8
	ctx.lr = 0x82EB7DB0;
	sub_82F28EB8(ctx, base);
loc_82EB7DB0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82eb7dbc
	if (ctx.cr6.eq) goto loc_82EB7DBC;
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
loc_82EB7DBC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB7DC8"))) PPC_WEAK_FUNC(sub_82EB7DC8);
PPC_FUNC_IMPL(__imp__sub_82EB7DC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82EB7DD0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,5048
	ctx.r11.s64 = ctx.r11.s64 + 5048;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82eb66f0
	ctx.lr = 0x82EB7DE8;
	sub_82EB66F0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// ble cr6,0x82eb7e44
	if (!ctx.cr6.gt) goto loc_82EB7E44;
	// addi r27,r31,8
	ctx.r27.s64 = ctx.r31.s64 + 8;
loc_82EB7E00:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82eb4868
	ctx.lr = 0x82EB7E18;
	sub_82EB4868(ctx, base);
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82eb7e34
	if (ctx.cr6.eq) goto loc_82EB7E34;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82eb4c00
	ctx.lr = 0x82EB7E2C;
	sub_82EB4C00(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e8ee18
	ctx.lr = 0x82EB7E34;
	sub_82E8EE18(ctx, base);
loc_82EB7E34:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb7e00
	if (ctx.cr6.lt) goto loc_82EB7E00;
loc_82EB7E44:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// b 0x82eb7e6c
	goto loc_82EB7E6C;
loc_82EB7E50:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
loc_82EB7E6C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82eb7e50
	if (!ctx.cr6.eq) goto loc_82EB7E50;
	// stw r29,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r29.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// lwz r3,572(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb7e90
	if (ctx.cr6.eq) goto loc_82EB7E90;
	// bl 0x82e8ee18
	ctx.lr = 0x82EB7E90;
	sub_82E8EE18(ctx, base);
loc_82EB7E90:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// stw r29,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r29.u32);
	// lwz r10,584(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// addi r3,r31,580
	ctx.r3.s64 = ctx.r31.s64 + 580;
	// addi r11,r11,5040
	ctx.r11.s64 = ctx.r11.s64 + 5040;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r11.u32);
	// bne cr6,0x82eb7eb8
	if (!ctx.cr6.eq) goto loc_82EB7EB8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82eb4ac0
	ctx.lr = 0x82EB7EB8;
	sub_82EB4AC0(ctx, base);
loc_82EB7EB8:
	// addi r3,r31,536
	ctx.r3.s64 = ctx.r31.s64 + 536;
	// bl 0x82e95740
	ctx.lr = 0x82EB7EC0;
	sub_82E95740(ctx, base);
	// addi r3,r31,484
	ctx.r3.s64 = ctx.r31.s64 + 484;
	// bl 0x82f28eb0
	ctx.lr = 0x82EB7EC8;
	sub_82F28EB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// addi r11,r11,28904
	ctx.r11.s64 = ctx.r11.s64 + 28904;
	// stw r11,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r11.u32);
	// lwz r11,380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eb7eec
	if (!ctx.cr6.eq) goto loc_82EB7EEC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e6b440
	ctx.lr = 0x82EB7EEC;
	sub_82E6B440(ctx, base);
loc_82EB7EEC:
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82eb1108
	ctx.lr = 0x82EB7EF4;
	sub_82EB1108(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB7EFC"))) PPC_WEAK_FUNC(sub_82EB7EFC);
PPC_FUNC_IMPL(__imp__sub_82EB7EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB7F00"))) PPC_WEAK_FUNC(sub_82EB7F00);
PPC_FUNC_IMPL(__imp__sub_82EB7F00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82EB7F08;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82eb7f28
	if (!ctx.cr6.eq) goto loc_82EB7F28;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82eb7fa8
	goto loc_82EB7FA8;
loc_82EB7F28:
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// lwz r11,328(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bgt cr6,0x82eb7f48
	if (ctx.cr6.gt) goto loc_82EB7F48;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14006
	ctx.r3.u64 = ctx.r3.u64 | 14006;
	// b 0x82eb7fa8
	goto loc_82EB7FA8;
loc_82EB7F48:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e86ad8
	ctx.lr = 0x82EB7F54;
	sub_82E86AD8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eb7f88
	if (ctx.cr0.lt) goto loc_82EB7F88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82eb7420
	ctx.lr = 0x82EB7F68;
	sub_82EB7420(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eb7f88
	if (ctx.cr0.lt) goto loc_82EB7F88;
	// lwz r10,480(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 480);
	// lhz r11,326(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 326);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82eb7fb0
	if (ctx.cr6.eq) goto loc_82EB7FB0;
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// ori r31,r31,65535
	ctx.r31.u64 = ctx.r31.u64 | 65535;
loc_82EB7F88:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb7fa4
	if (ctx.cr6.eq) goto loc_82EB7FA4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB7FA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EB7FA4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82EB7FA8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_82EB7FB0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eb7ffc
	if (ctx.cr6.eq) goto loc_82EB7FFC;
loc_82EB7FB8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82eb7728
	ctx.lr = 0x82EB7FC8;
	sub_82EB7728(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eb7f88
	if (ctx.cr0.lt) goto loc_82EB7F88;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82eb7bd0
	ctx.lr = 0x82EB7FE0;
	sub_82EB7BD0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eb7f88
	if (ctx.cr0.lt) goto loc_82EB7F88;
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// lhz r10,326(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 326);
	// clrlwi r29,r11,16
	ctx.r29.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82eb7fb8
	if (ctx.cr6.lt) goto loc_82EB7FB8;
loc_82EB7FFC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82eb4718
	ctx.lr = 0x82EB8008;
	sub_82EB4718(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eb7f88
	if (ctx.cr0.lt) goto loc_82EB7F88;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x82eb7fa4
	goto loc_82EB7FA4;
}

__attribute__((alias("__imp__sub_82EB801C"))) PPC_WEAK_FUNC(sub_82EB801C);
PPC_FUNC_IMPL(__imp__sub_82EB801C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB8020"))) PPC_WEAK_FUNC(sub_82EB8020);
PPC_FUNC_IMPL(__imp__sub_82EB8020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x82EB8028;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82eb835c
	if (ctx.cr6.eq) goto loc_82EB835C;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82eb835c
	if (ctx.cr6.eq) goto loc_82EB835C;
	// li r22,0
	ctx.r22.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r22,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r22.u32);
	// lwz r23,560(r3)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 560);
	// bne cr6,0x82eb80c0
	if (!ctx.cr6.eq) goto loc_82EB80C0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB8078;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb8364
	if (ctx.cr0.lt) goto loc_82EB8364;
loc_82EB8080:
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB80A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82eb8320
	if (ctx.cr0.lt) goto loc_82EB8320;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82eb8108
	if (!ctx.cr6.gt) goto loc_82EB8108;
loc_82EB80B4:
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,87
	ctx.r30.u64 = ctx.r30.u64 | 87;
	// b 0x82eb8320
	goto loc_82EB8320;
loc_82EB80C0:
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eb80e4
	if (ctx.cr6.eq) goto loc_82EB80E4;
	// lwz r10,564(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82eb80e4
	if (!ctx.cr6.gt) goto loc_82EB80E4;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14005
	ctx.r3.u64 = ctx.r3.u64 | 14005;
	// b 0x82eb8364
	goto loc_82EB8364;
loc_82EB80E4:
	// lwz r11,536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb8080
	if (!ctx.cr6.gt) goto loc_82EB8080;
	// lwz r11,564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x82eb8080
	if (ctx.cr6.eq) goto loc_82EB8080;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,15001
	ctx.r3.u64 = ctx.r3.u64 | 15001;
	// b 0x82eb8364
	goto loc_82EB8364;
loc_82EB8108:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82eb8120
	if (ctx.cr6.eq) goto loc_82EB8120;
	// add r10,r28,r29
	ctx.r10.u64 = ctx.r28.u64 + ctx.r29.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82eb8124
	if (!ctx.cr6.gt) goto loc_82EB8124;
	// b 0x82eb80b4
	goto loc_82EB80B4;
loc_82EB8120:
	// subf r29,r28,r11
	ctx.r29.s64 = ctx.r11.s64 - ctx.r28.s64;
loc_82EB8124:
	// addi r24,r31,536
	ctx.r24.s64 = ctx.r31.s64 + 536;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82f233d8
	ctx.lr = 0x82EB813C;
	sub_82F233D8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82eb8320
	if (ctx.cr0.lt) goto loc_82EB8320;
	// add r11,r29,r25
	ctx.r11.u64 = ctx.r29.u64 + ctx.r25.u64;
	// cmplw cr6,r23,r25
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r25.u32, ctx.xer);
	// stw r11,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r11.u32);
	// bgt cr6,0x82eb80b4
	if (ctx.cr6.gt) goto loc_82EB80B4;
	// lbz r11,568(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 568);
	// subf r28,r23,r25
	ctx.r28.s64 = ctx.r25.s64 - ctx.r23.s64;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eb81a4
	if (!ctx.cr0.eq) goto loc_82EB81A4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb4e68
	ctx.lr = 0x82EB8174;
	sub_82EB4E68(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82eb8194
	if (ctx.cr0.eq) goto loc_82EB8194;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82eb8320
	if (ctx.cr6.lt) goto loc_82EB8320;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82eb8314
	goto loc_82EB8314;
loc_82EB8194:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_82EB81A4:
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82eb80b4
	if (ctx.cr6.gt) goto loc_82EB80B4;
	// lwz r10,316(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82eb8200
	if (ctx.cr6.eq) goto loc_82EB8200;
	// add r10,r29,r28
	ctx.r10.u64 = ctx.r29.u64 + ctx.r28.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82eb81d8
	if (!ctx.cr6.gt) goto loc_82EB81D8;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subf r29,r28,r11
	ctx.r29.s64 = ctx.r11.s64 - ctx.r28.s64;
	// b 0x82eb81e0
	goto loc_82EB81E0;
loc_82EB81D8:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// subf r29,r11,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r11.s64;
loc_82EB81E0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82f23538
	ctx.lr = 0x82EB81EC;
	sub_82F23538(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82eb8320
	if (ctx.cr0.lt) goto loc_82EB8320;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x82eb8314
	goto loc_82EB8314;
loc_82EB8200:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb67f8
	ctx.lr = 0x82EB820C;
	sub_82EB67F8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82eb8320
	if (ctx.cr0.lt) goto loc_82EB8320;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// bne cr6,0x82eb831c
	if (!ctx.cr6.eq) goto loc_82EB831C;
	// b 0x82eb82a4
	goto loc_82EB82A4;
loc_82EB8230:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,328(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// lwz r9,360(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82eb82b0
	if (!ctx.cr6.lt) goto loc_82EB82B0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb68e0
	ctx.lr = 0x82EB8258;
	sub_82EB68E0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82eb8320
	if (ctx.cr0.lt) goto loc_82EB8320;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r9,r30,0
	ctx.r9.s64 = ctx.r30.s64 + 0;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r29,r9,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lhz r11,326(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 326);
	// lwz r10,480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82eb829c
	if (!ctx.cr6.eq) goto loc_82EB829C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb6da0
	ctx.lr = 0x82EB8294;
	sub_82EB6DA0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82eb8320
	if (ctx.cr0.lt) goto loc_82EB8320;
loc_82EB829C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82eb8318
	if (ctx.cr6.eq) goto loc_82EB8318;
loc_82EB82A4:
	// lwz r11,560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bgt cr6,0x82eb8230
	if (ctx.cr6.gt) goto loc_82EB8230;
loc_82EB82B0:
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r9,360(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// add r8,r10,r28
	ctx.r8.u64 = ctx.r10.u64 + ctx.r28.u64;
	// subf r9,r9,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82eb8318
	if (ctx.cr6.lt) goto loc_82EB8318;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r11,560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// subf r29,r28,r10
	ctx.r29.s64 = ctx.r10.s64 - ctx.r28.s64;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82eb82e8
	if (!ctx.cr6.gt) goto loc_82EB82E8;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_82EB82E8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82f23538
	ctx.lr = 0x82EB82F4;
	sub_82F23538(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82eb8320
	if (ctx.cr0.lt) goto loc_82EB8320;
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x82eb830c
	if (!ctx.cr6.lt) goto loc_82EB830C;
	// lis r30,16397
	ctx.r30.s64 = 1074593792;
	// ori r30,r30,15000
	ctx.r30.u64 = ctx.r30.u64 | 15000;
loc_82EB830C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
loc_82EB8314:
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_82EB8318:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
loc_82EB831C:
	// bge cr6,0x82eb8338
	if (!ctx.cr6.lt) goto loc_82EB8338;
loc_82EB8320:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB8334;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r22,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r22.u32);
loc_82EB8338:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x82eb8350
	if (ctx.cr6.lt) goto loc_82EB8350;
	// subf r11,r23,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r23.s64;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// b 0x82eb8354
	goto loc_82EB8354;
loc_82EB8350:
	// stw r22,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r22.u32);
loc_82EB8354:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82eb8364
	goto loc_82EB8364;
loc_82EB835C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82EB8364:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB836C"))) PPC_WEAK_FUNC(sub_82EB836C);
PPC_FUNC_IMPL(__imp__sub_82EB836C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB8370"))) PPC_WEAK_FUNC(sub_82EB8370);
PPC_FUNC_IMPL(__imp__sub_82EB8370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82EB8378;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r7,328(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,3
	ctx.r10.s64 = 3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 332, ctx.r11.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stb r10,336(r3)
	PPC_STORE_U8(ctx.r3.u32 + 336, ctx.r10.u8);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// beq cr6,0x82eb83ac
	if (ctx.cr6.eq) goto loc_82EB83AC;
	// stb r30,337(r3)
	PPC_STORE_U8(ctx.r3.u32 + 337, ctx.r30.u8);
	// b 0x82eb83b0
	goto loc_82EB83B0;
loc_82EB83AC:
	// stb r9,337(r31)
	PPC_STORE_U8(ctx.r31.u32 + 337, ctx.r9.u8);
loc_82EB83B0:
	// li r8,4
	ctx.r8.s64 = 4;
	// stb r30,339(r31)
	PPC_STORE_U8(ctx.r31.u32 + 339, ctx.r30.u8);
	// stb r9,338(r31)
	PPC_STORE_U8(ctx.r31.u32 + 338, ctx.r9.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r30.u32);
	// stb r8,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r8.u8);
	// stb r10,345(r31)
	PPC_STORE_U8(ctx.r31.u32 + 345, ctx.r10.u8);
	// stb r11,346(r31)
	PPC_STORE_U8(ctx.r31.u32 + 346, ctx.r11.u8);
	// stb r11,347(r31)
	PPC_STORE_U8(ctx.r31.u32 + 347, ctx.r11.u8);
	// stb r11,348(r31)
	PPC_STORE_U8(ctx.r31.u32 + 348, ctx.r11.u8);
	// stb r11,349(r31)
	PPC_STORE_U8(ctx.r31.u32 + 349, ctx.r11.u8);
	// stw r30,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r30.u32);
	// bl 0x82eb44a8
	ctx.lr = 0x82EB83E4;
	sub_82EB44A8(ctx, base);
	// addi r29,r3,3
	ctx.r29.s64 = ctx.r3.s64 + 3;
	// cmplw cr6,r29,r7
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x82eb83fc
	if (!ctx.cr6.gt) goto loc_82EB83FC;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,15002
	ctx.r3.u64 = ctx.r3.u64 | 15002;
	// b 0x82eb8448
	goto loc_82EB8448;
loc_82EB83FC:
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe. r28,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r28.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x82eb8414
	if (ctx.cr0.eq) goto loc_82EB8414;
	// stw r30,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r30.u32);
	// b 0x82eb8424
	goto loc_82EB8424;
loc_82EB8414:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb7110
	ctx.lr = 0x82EB841C;
	sub_82EB7110(ctx, base);
	// stw r3,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r3.u32);
	// stw r3,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r3.u32);
loc_82EB8424:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82eb843c
	if (ctx.cr6.eq) goto loc_82EB843C;
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// stw r11,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r11.u32);
	// b 0x82eb8444
	goto loc_82EB8444;
loc_82EB843C:
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// stb r30,338(r31)
	PPC_STORE_U8(ctx.r31.u32 + 338, ctx.r30.u8);
loc_82EB8444:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EB8448:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB8450"))) PPC_WEAK_FUNC(sub_82EB8450);
PPC_FUNC_IMPL(__imp__sub_82EB8450) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82EB8458;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82eb8478
	if (!ctx.cr6.eq) goto loc_82EB8478;
loc_82EB846C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82eb860c
	goto loc_82EB860C;
loc_82EB8478:
	// lhz r11,10(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 10);
	// lhz r10,64(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 64);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82eb846c
	if (ctx.cr6.lt) goto loc_82EB846C;
	// lwz r10,480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	// clrlwi r26,r11,16
	ctx.r26.u64 = ctx.r11.u32 & 0xFFFF;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// ble cr6,0x82eb8524
	if (!ctx.cr6.gt) goto loc_82EB8524;
	// addi r29,r31,376
	ctx.r29.s64 = ctx.r31.s64 + 376;
loc_82EB84A4:
	// lwz r11,480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r28,r11,-1
	ctx.r28.s64 = ctx.r11.s64 + -1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82eb5ea8
	ctx.lr = 0x82EB84BC;
	sub_82EB5EA8(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and. r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82eb8568
	if (ctx.cr0.eq) goto loc_82EB8568;
	// addi r3,r31,484
	ctx.r3.s64 = ctx.r31.s64 + 484;
	// bl 0x82f29120
	ctx.lr = 0x82EB84D8;
	sub_82F29120(ctx, base);
	// lwz r10,104(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82eb8518
	if (ctx.cr6.gt) goto loc_82EB8518;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
loc_82EB84EC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82eb5910
	ctx.lr = 0x82EB84F8;
	sub_82EB5910(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb8518
	if (ctx.cr0.lt) goto loc_82EB8518;
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// stw r11,104(r29)
	PPC_STORE_U32(ctx.r29.u32 + 104, ctx.r11.u32);
	// blt cr6,0x82eb84ec
	if (ctx.cr6.lt) goto loc_82EB84EC;
loc_82EB8518:
	// lwz r11,480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x82eb84a4
	if (ctx.cr6.gt) goto loc_82EB84A4;
loc_82EB8524:
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// li r5,60
	ctx.r5.s64 = 60;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82EB8534;
	sub_82FA77C0(ctx, base);
	// lhz r11,326(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 326);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82eb8608
	if (ctx.cr0.eq) goto loc_82EB8608;
	// addi r29,r31,376
	ctx.r29.s64 = ctx.r31.s64 + 376;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82eb5ea8
	ctx.lr = 0x82EB8554;
	sub_82EB5EA8(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eb8574
	if (!ctx.cr0.eq) goto loc_82EB8574;
loc_82EB8568:
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// ori r30,r30,65535
	ctx.r30.u64 = ctx.r30.u64 | 65535;
	// b 0x82eb8608
	goto loc_82EB8608;
loc_82EB8574:
	// lwz r10,60(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 60);
	// lwz r9,300(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,23(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23, ctx.r10.u32);
	// beq cr6,0x82eb85fc
	if (ctx.cr6.eq) goto loc_82EB85FC;
	// lhz r10,64(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 64);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82eb85f0
	if (ctx.cr0.eq) goto loc_82EB85F0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eb85fc
	if (ctx.cr6.eq) goto loc_82EB85FC;
loc_82EB859C:
	// lhz r11,326(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 326);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x82eb5ea8
	ctx.lr = 0x82EB85B4;
	sub_82EB5EA8(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb8568
	if (ctx.cr0.eq) goto loc_82EB8568;
	// lwz r10,68(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 68);
	// addi r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 1;
	// clrlwi r30,r9,16
	ctx.r30.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r10,308(r11)
	PPC_STORE_U32(ctx.r11.u32 + 308, ctx.r10.u32);
	// lbz r10,72(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 72);
	// stb r10,316(r11)
	PPC_STORE_U8(ctx.r11.u32 + 316, ctx.r10.u8);
	// lhz r11,64(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 64);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb859c
	if (ctx.cr6.lt) goto loc_82EB859C;
	// b 0x82eb85fc
	goto loc_82EB85FC;
loc_82EB85F0:
	// stw r30,300(r11)
	PPC_STORE_U32(ctx.r11.u32 + 300, ctx.r30.u32);
	// stb r30,304(r11)
	PPC_STORE_U8(ctx.r11.u32 + 304, ctx.r30.u8);
	// stw r30,308(r11)
	PPC_STORE_U32(ctx.r11.u32 + 308, ctx.r30.u32);
loc_82EB85FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb7340
	ctx.lr = 0x82EB8604;
	sub_82EB7340(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82EB8608:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82EB860C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB8614"))) PPC_WEAK_FUNC(sub_82EB8614);
PPC_FUNC_IMPL(__imp__sub_82EB8614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB8618"))) PPC_WEAK_FUNC(sub_82EB8618);
PPC_FUNC_IMPL(__imp__sub_82EB8618) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82EB8620;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82eb8648
	if (!ctx.cr6.eq) goto loc_82EB8648;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82eb87e0
	goto loc_82EB87E0;
loc_82EB8648:
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r25,r31,484
	ctx.r25.s64 = ctx.r31.s64 + 484;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82f28fd0
	ctx.lr = 0x82EB8660;
	sub_82F28FD0(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82eb8678
	if (!ctx.cr6.eq) goto loc_82EB8678;
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,14
	ctx.r29.u64 = ctx.r29.u64 | 14;
	// b 0x82eb87dc
	goto loc_82EB87DC;
loc_82EB8678:
	// li r5,328
	ctx.r5.s64 = 328;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82EB8688;
	sub_82FA7CF0(ctx, base);
	// li r5,293
	ctx.r5.s64 = 293;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82EB8698;
	sub_82FA77C0(ctx, base);
	// addi r28,r30,31
	ctx.r28.s64 = ctx.r30.s64 + 31;
	// li r8,256
	ctx.r8.s64 = 256;
	// lhz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// addi r7,r30,37
	ctx.r7.s64 = ctx.r30.s64 + 37;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb5208
	ctx.lr = 0x82EB86B8;
	sub_82EB5208(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82eb87d0
	if (ctx.cr0.lt) goto loc_82EB87D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb4578
	ctx.lr = 0x82EB86C8;
	sub_82EB4578(ctx, base);
	// stw r3,33(r30)
	PPC_STORE_U32(ctx.r30.u32 + 33, ctx.r3.u32);
	// lhz r11,326(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 326);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82eb86fc
	if (ctx.cr0.eq) goto loc_82EB86FC;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// bl 0x82eb5ea8
	ctx.lr = 0x82EB86EC;
	sub_82EB5EA8(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_82EB86FC:
	// li r27,1
	ctx.r27.s64 = 1;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x82eb8758
	if (ctx.cr6.eq) goto loc_82EB8758;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb4678
	ctx.lr = 0x82EB8718;
	sub_82EB4678(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82eb8738
	if (ctx.cr0.eq) goto loc_82EB8738;
	// stw r27,300(r30)
	PPC_STORE_U32(ctx.r30.u32 + 300, ctx.r27.u32);
	// lbz r11,304(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 304);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r26,0(r28)
	PPC_STORE_U16(ctx.r28.u32 + 0, ctx.r26.u16);
	// stb r11,304(r30)
	PPC_STORE_U8(ctx.r30.u32 + 304, ctx.r11.u8);
	// b 0x82eb87a0
	goto loc_82EB87A0;
loc_82EB8738:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb4630
	ctx.lr = 0x82EB8744;
	sub_82EB4630(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82eb8758
	if (ctx.cr0.eq) goto loc_82EB8758;
	// stw r27,300(r30)
	PPC_STORE_U32(ctx.r30.u32 + 300, ctx.r27.u32);
	// stb r26,304(r30)
	PPC_STORE_U8(ctx.r30.u32 + 304, ctx.r26.u8);
	// sth r27,0(r28)
	PPC_STORE_U16(ctx.r28.u32 + 0, ctx.r27.u16);
loc_82EB8758:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82eb87a0
	if (ctx.cr6.eq) goto loc_82EB87A0;
	// lwz r11,340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82eb87a0
	if (!ctx.cr6.eq) goto loc_82EB87A0;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r27,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r27.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,368(r31)
	PPC_STORE_U8(ctx.r31.u32 + 368, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,369(r31)
	PPC_STORE_U8(ctx.r31.u32 + 369, ctx.r11.u8);
	// bl 0x82eb6f78
	ctx.lr = 0x82EB8788;
	sub_82EB6F78(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82eb87d0
	if (ctx.cr0.lt) goto loc_82EB87D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb7340
	ctx.lr = 0x82EB8798;
	sub_82EB7340(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82eb87d0
	if (ctx.cr0.lt) goto loc_82EB87D0;
loc_82EB87A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb7110
	ctx.lr = 0x82EB87A8;
	sub_82EB7110(ctx, base);
	// stw r3,19(r30)
	PPC_STORE_U32(ctx.r30.u32 + 19, ctx.r3.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// bl 0x82eb5788
	ctx.lr = 0x82EB87C0;
	sub_82EB5788(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82eb87e8
	if (!ctx.cr0.eq) goto loc_82EB87E8;
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,14
	ctx.r29.u64 = ctx.r29.u64 | 14;
loc_82EB87D0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82f29120
	ctx.lr = 0x82EB87DC;
	sub_82F29120(ctx, base);
loc_82EB87DC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82EB87E0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
loc_82EB87E8:
	// lhz r11,326(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 326);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,326(r31)
	PPC_STORE_U16(ctx.r31.u32 + 326, ctx.r11.u16);
	// bl 0x82eb6f78
	ctx.lr = 0x82EB8800;
	sub_82EB6F78(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82eb87dc
	if (ctx.cr0.lt) goto loc_82EB87DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb7110
	ctx.lr = 0x82EB8810;
	sub_82EB7110(ctx, base);
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb882c
	if (!ctx.cr6.gt) goto loc_82EB882C;
	// stw r3,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r3.u32);
	// stw r3,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r3.u32);
	// b 0x82eb8878
	goto loc_82EB8878;
loc_82EB882C:
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82eb8840
	if (!ctx.cr6.gt) goto loc_82EB8840;
	// stw r26,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r26.u32);
	// b 0x82eb8878
	goto loc_82EB8878;
loc_82EB8840:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// stw r11,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r11.u32);
	// beq cr6,0x82eb8878
	if (ctx.cr6.eq) goto loc_82EB8878;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bge cr6,0x82eb8878
	if (!ctx.cr6.lt) goto loc_82EB8878;
	// lbz r11,338(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 338);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82eb8878
	if (ctx.cr6.eq) goto loc_82EB8878;
	// stb r27,338(r31)
	PPC_STORE_U8(ctx.r31.u32 + 338, ctx.r27.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb7340
	ctx.lr = 0x82EB8870;
	sub_82EB7340(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82eb87dc
	if (ctx.cr0.lt) goto loc_82EB87DC;
loc_82EB8878:
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eb888c
	if (!ctx.cr6.eq) goto loc_82EB888C;
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// b 0x82eb8894
	goto loc_82EB8894;
loc_82EB888C:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,64000
	ctx.r11.u64 = ctx.r11.u64 | 64000;
loc_82EB8894:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82eb87dc
	if (!ctx.cr6.gt) goto loc_82EB87DC;
	// lis r29,-16371
	ctx.r29.s64 = -1072889856;
	// ori r29,r29,15002
	ctx.r29.u64 = ctx.r29.u64 | 15002;
	// b 0x82eb87dc
	goto loc_82EB87DC;
}

__attribute__((alias("__imp__sub_82EB88A8"))) PPC_WEAK_FUNC(sub_82EB88A8);
PPC_FUNC_IMPL(__imp__sub_82EB88A8) {
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
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_82EB88C4:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82eb88c4
	if (!ctx.cr0.eq) goto loc_82EB88C4;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82eb8908
	if (!ctx.cr6.eq) goto loc_82EB8908;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x82eb7dc8
	ctx.lr = 0x82EB8900;
	sub_82EB7DC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8ee18
	ctx.lr = 0x82EB8908;
	sub_82E8EE18(ctx, base);
loc_82EB8908:
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

__attribute__((alias("__imp__sub_82EB8924"))) PPC_WEAK_FUNC(sub_82EB8924);
PPC_FUNC_IMPL(__imp__sub_82EB8924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB8928"))) PPC_WEAK_FUNC(sub_82EB8928);
PPC_FUNC_IMPL(__imp__sub_82EB8928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82EB8930;
	__savegprlr_26(ctx, base);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82eb895c
	if (!ctx.cr6.eq) goto loc_82EB895C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82eb89f4
	goto loc_82EB89F4;
loc_82EB895C:
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb6ea8
	ctx.lr = 0x82EB8970;
	sub_82EB6EA8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb89f4
	if (ctx.cr0.lt) goto loc_82EB89F4;
	// li r5,293
	ctx.r5.s64 = 293;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82fa7cf0
	ctx.lr = 0x82EB8988;
	sub_82FA7CF0(ctx, base);
	// sth r29,160(r1)
	PPC_STORE_U16(ctx.r1.u32 + 160, ctx.r29.u16);
	// stb r28,166(r1)
	PPC_STORE_U8(ctx.r1.u32 + 166, ctx.r28.u8);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb8618
	ctx.lr = 0x82EB89A4;
	sub_82EB8618(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb89e4
	if (ctx.cr0.lt) goto loc_82EB89E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb7110
	ctx.lr = 0x82EB89B4;
	sub_82EB7110(ctx, base);
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eb89c8
	if (!ctx.cr6.eq) goto loc_82EB89C8;
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// b 0x82eb89d0
	goto loc_82EB89D0;
loc_82EB89C8:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,64000
	ctx.r11.u64 = ctx.r11.u64 | 64000;
loc_82EB89D0:
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82eb89e4
	if (ctx.cr6.gt) goto loc_82EB89E4;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x82eb89e8
	goto loc_82EB89E8;
loc_82EB89E4:
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
loc_82EB89E8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb8450
	ctx.lr = 0x82EB89F4;
	sub_82EB8450(ctx, base);
loc_82EB89F4:
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB89FC"))) PPC_WEAK_FUNC(sub_82EB89FC);
PPC_FUNC_IMPL(__imp__sub_82EB89FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB8A00"))) PPC_WEAK_FUNC(sub_82EB8A00);
PPC_FUNC_IMPL(__imp__sub_82EB8A00) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82eb8a28
	if (!ctx.cr6.eq) goto loc_82EB8A28;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82eb8aac
	goto loc_82EB8AAC;
loc_82EB8A28:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82eb8a40
	if (ctx.cr6.eq) goto loc_82EB8A40;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// b 0x82eb8aac
	goto loc_82EB8AAC;
loc_82EB8A40:
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe. r10,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82eb8a68
	if (ctx.cr0.eq) goto loc_82EB8A68;
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82eb8a68
	if (ctx.cr6.eq) goto loc_82EB8A68;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14005
	ctx.r3.u64 = ctx.r3.u64 | 14005;
	// b 0x82eb8aac
	goto loc_82EB8AAC;
loc_82EB8A68:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// sth r11,324(r31)
	PPC_STORE_U16(ctx.r31.u32 + 324, ctx.r11.u16);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// bne cr6,0x82eb8aa0
	if (!ctx.cr6.eq) goto loc_82EB8AA0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb8370
	ctx.lr = 0x82EB8A98;
	sub_82EB8370(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb8aac
	if (ctx.cr0.lt) goto loc_82EB8AAC;
loc_82EB8AA0:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,568(r31)
	PPC_STORE_U8(ctx.r31.u32 + 568, ctx.r11.u8);
loc_82EB8AAC:
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

__attribute__((alias("__imp__sub_82EB8AC0"))) PPC_WEAK_FUNC(sub_82EB8AC0);
PPC_FUNC_IMPL(__imp__sub_82EB8AC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x82EB8AC8;
	__savegprlr_22(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82eb8dfc
	if (ctx.cr6.eq) goto loc_82EB8DFC;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82eb8dfc
	if (ctx.cr6.eq) goto loc_82EB8DFC;
	// lwz r11,328(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bgt cr6,0x82eb8b04
	if (ctx.cr6.gt) goto loc_82EB8B04;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14006
	ctx.r3.u64 = ctx.r3.u64 | 14006;
	// b 0x82eb8e04
	goto loc_82EB8E04;
loc_82EB8B04:
	// lhz r11,326(r23)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r23.u32 + 326);
	// cmplwi cr6,r11,63
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 63, ctx.xer);
	// blt cr6,0x82eb8b1c
	if (ctx.cr6.lt) goto loc_82EB8B1C;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,15007
	ctx.r3.u64 = ctx.r3.u64 | 15007;
	// b 0x82eb8e04
	goto loc_82EB8E04;
loc_82EB8B1C:
	// li r9,9
	ctx.r9.s64 = 9;
	// li r22,0
	ctx.r22.s64 = 0;
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82EB8B34:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82eb8b34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82EB8B34;
	// lwz r9,0(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,180(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB8B58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82eb8dd8
	if (ctx.cr0.lt) goto loc_82EB8DD8;
	// lwz r11,27(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27);
	// lwz r9,7(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7);
	// lwz r10,11(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82eb8b84
	if (!ctx.cr6.gt) goto loc_82EB8B84;
loc_82EB8B78:
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,87
	ctx.r29.u64 = ctx.r29.u64 | 87;
	// b 0x82eb8dd8
	goto loc_82EB8DD8;
loc_82EB8B84:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82eb8b90
	if (!ctx.cr6.eq) goto loc_82EB8B90;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82EB8B90:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82eb8b78
	if (ctx.cr6.gt) goto loc_82EB8B78;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82eb6ea8
	ctx.lr = 0x82EB8BA4;
	sub_82EB6EA8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82eb8dd8
	if (ctx.cr0.lt) goto loc_82EB8DD8;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82eb8618
	ctx.lr = 0x82EB8BC0;
	sub_82EB8618(ctx, base);
	// lis r11,-16371
	ctx.r11.s64 = -1072889856;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// ori r31,r11,15002
	ctx.r31.u64 = ctx.r11.u64 | 15002;
	// cmpw cr6,r3,r31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x82eb8bf0
	if (!ctx.cr6.eq) goto loc_82EB8BF0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82eb8450
	ctx.lr = 0x82EB8BE0;
	sub_82EB8450(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82eb8dd8
	if (ctx.cr0.lt) goto loc_82EB8DD8;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// b 0x82eb8dd8
	goto loc_82EB8DD8;
loc_82EB8BF0:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x82eb8dd8
	if (ctx.cr6.lt) goto loc_82EB8DD8;
	// lhz r11,326(r23)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r23.u32 + 326);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82eb8c10
	if (!ctx.cr0.eq) goto loc_82EB8C10;
loc_82EB8C04:
	// lis r29,-32768
	ctx.r29.s64 = -2147483648;
	// ori r29,r29,65535
	ctx.r29.u64 = ctx.r29.u64 | 65535;
	// b 0x82eb8dd8
	goto loc_82EB8DD8;
loc_82EB8C10:
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r23,376
	ctx.r3.s64 = ctx.r23.s64 + 376;
	// bl 0x82eb5ea8
	ctx.lr = 0x82EB8C20;
	sub_82EB5EA8(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and. r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x82eb8c04
	if (ctx.cr0.eq) goto loc_82EB8C04;
	// stw r22,324(r28)
	PPC_STORE_U32(ctx.r28.u32 + 324, ctx.r22.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r22,320(r28)
	PPC_STORE_U32(ctx.r28.u32 + 320, ctx.r22.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB8C54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82eb8dd8
	if (ctx.cr0.lt) goto loc_82EB8DD8;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82eb8c6c
	if (!ctx.cr6.eq) goto loc_82EB8C6C;
	// lwz r27,7(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 7);
loc_82EB8C6C:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eb8dd8
	if (ctx.cr6.eq) goto loc_82EB8DD8;
loc_82EB8C80:
	// lwz r11,27(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 27);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82eb8dd8
	if (!ctx.cr6.lt) goto loc_82EB8DD8;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB8CAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82eb8dd8
	if (ctx.cr0.lt) goto loc_82EB8DD8;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB8CCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82eb8dd8
	if (ctx.cr0.lt) goto loc_82EB8DD8;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// lwz r10,7(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 7);
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82eb8d80
	if (!ctx.cr6.gt) goto loc_82EB8D80;
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82eb8d04
	if (!ctx.cr6.lt) goto loc_82EB8D04;
	// subf r30,r27,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r27.s64;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x82eb8d08
	goto loc_82EB8D08;
loc_82EB8D04:
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
loc_82EB8D08:
	// lwz r10,27(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 27);
	// subf r31,r26,r10
	ctx.r31.s64 = ctx.r10.s64 - ctx.r26.s64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb8d1c
	if (ctx.cr6.lt) goto loc_82EB8D1C;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_82EB8D1C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB8D30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r23,580
	ctx.r3.s64 = ctx.r23.s64 + 580;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// rldicr r5,r31,32,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u64, 32) & 0xFFFFFFFF00000000;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x82eb57f0
	ctx.lr = 0x82EB8D50;
	sub_82EB57F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82eb8dbc
	if (ctx.cr0.eq) goto loc_82EB8DBC;
	// lwz r11,324(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 324);
	// add r26,r31,r26
	ctx.r26.u64 = ctx.r31.u64 + ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eb8d74
	if (!ctx.cr6.eq) goto loc_82EB8D74;
	// lwz r10,852(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 852);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,320(r28)
	PPC_STORE_U32(ctx.r28.u32 + 320, ctx.r10.u32);
loc_82EB8D74:
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,324(r28)
	PPC_STORE_U32(ctx.r28.u32 + 324, ctx.r10.u32);
loc_82EB8D80:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// beq cr6,0x82eb8da8
	if (ctx.cr6.eq) goto loc_82EB8DA8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB8DA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
loc_82EB8DA8:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb8c80
	if (ctx.cr6.lt) goto loc_82EB8C80;
	// b 0x82eb8dd8
	goto loc_82EB8DD8;
loc_82EB8DBC:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,14
	ctx.r29.u64 = ctx.r29.u64 | 14;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB8DD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EB8DD8:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb8df4
	if (ctx.cr6.eq) goto loc_82EB8DF4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB8DF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EB8DF4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82eb8e04
	goto loc_82EB8E04;
loc_82EB8DFC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82EB8E04:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB8E0C"))) PPC_WEAK_FUNC(sub_82EB8E0C);
PPC_FUNC_IMPL(__imp__sub_82EB8E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB8E10"))) PPC_WEAK_FUNC(sub_82EB8E10);
PPC_FUNC_IMPL(__imp__sub_82EB8E10) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// addi r11,r11,5104
	ctx.r11.s64 = ctx.r11.s64 + 5104;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82ebbff8
	ctx.lr = 0x82EB8E38;
	sub_82EBBFF8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82EB8E60"))) PPC_WEAK_FUNC(sub_82EB8E60);
PPC_FUNC_IMPL(__imp__sub_82EB8E60) {
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
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,5104
	ctx.r11.s64 = ctx.r11.s64 + 5104;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82eb8ea8
	if (ctx.cr6.eq) goto loc_82EB8EA8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB8EA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
loc_82EB8EA8:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb8ec8
	if (ctx.cr6.eq) goto loc_82EB8EC8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB8EC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_82EB8EC8:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb8ee8
	if (ctx.cr6.eq) goto loc_82EB8EE8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB8EE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_82EB8EE8:
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82eb07a0
	ctx.lr = 0x82EB8EF0;
	sub_82EB07A0(ctx, base);
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

__attribute__((alias("__imp__sub_82EB8F08"))) PPC_WEAK_FUNC(sub_82EB8F08);
PPC_FUNC_IMPL(__imp__sub_82EB8F08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82EB8F2C"))) PPC_WEAK_FUNC(sub_82EB8F2C);
PPC_FUNC_IMPL(__imp__sub_82EB8F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB8F30"))) PPC_WEAK_FUNC(sub_82EB8F30);
PPC_FUNC_IMPL(__imp__sub_82EB8F30) {
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
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ebc008
	ctx.lr = 0x82EB8F54;
	sub_82EBC008(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,31
	ctx.r4.s64 = 31;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ebcd38
	ctx.lr = 0x82EB8F64;
	sub_82EBCD38(ctx, base);
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

__attribute__((alias("__imp__sub_82EB8F7C"))) PPC_WEAK_FUNC(sub_82EB8F7C);
PPC_FUNC_IMPL(__imp__sub_82EB8F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB8F80"))) PPC_WEAK_FUNC(sub_82EB8F80);
PPC_FUNC_IMPL(__imp__sub_82EB8F80) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// li r4,31
	ctx.r4.s64 = 31;
	// addi r5,r11,5108
	ctx.r5.s64 = ctx.r11.s64 + 5108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ebcd38
	ctx.lr = 0x82EB8FA8;
	sub_82EBCD38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb8fb8
	if (ctx.cr0.lt) goto loc_82EB8FB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ebd9a8
	ctx.lr = 0x82EB8FB8;
	sub_82EBD9A8(ctx, base);
loc_82EB8FB8:
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

__attribute__((alias("__imp__sub_82EB8FCC"))) PPC_WEAK_FUNC(sub_82EB8FCC);
PPC_FUNC_IMPL(__imp__sub_82EB8FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB8FD0"))) PPC_WEAK_FUNC(sub_82EB8FD0);
PPC_FUNC_IMPL(__imp__sub_82EB8FD0) {
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
	// bl 0x82eb8e60
	ctx.lr = 0x82EB8FF0;
	sub_82EB8E60(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb9008
	if (ctx.cr0.eq) goto loc_82EB9008;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82eb9008
	if (ctx.cr6.eq) goto loc_82EB9008;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8ee18
	ctx.lr = 0x82EB9008;
	sub_82E8EE18(ctx, base);
loc_82EB9008:
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

__attribute__((alias("__imp__sub_82EB9024"))) PPC_WEAK_FUNC(sub_82EB9024);
PPC_FUNC_IMPL(__imp__sub_82EB9024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB9028"))) PPC_WEAK_FUNC(sub_82EB9028);
PPC_FUNC_IMPL(__imp__sub_82EB9028) {
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
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb9060
	if (ctx.cr6.eq) goto loc_82EB9060;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB9058;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_82EB9060:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,208
	ctx.r3.s64 = 208;
	// bl 0x82e8edd0
	ctx.lr = 0x82EB9078;
	sub_82E8EDD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb9098
	if (ctx.cr0.eq) goto loc_82EB9098;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82f2a458
	ctx.lr = 0x82EB9094;
	sub_82F2A458(ctx, base);
	// b 0x82eb909c
	goto loc_82EB909C;
loc_82EB9098:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EB909C:
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82eb90b4
	if (!ctx.cr6.eq) goto loc_82EB90B4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82eb90d4
	goto loc_82EB90D4;
loc_82EB90B4:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB90D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EB90D4:
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

__attribute__((alias("__imp__sub_82EB90E8"))) PPC_WEAK_FUNC(sub_82EB90E8);
PPC_FUNC_IMPL(__imp__sub_82EB90E8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82ebbff8
	ctx.lr = 0x82EB910C;
	sub_82EBBFF8(ctx, base);
	// lhz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// beq cr6,0x82eb9128
	if (ctx.cr6.eq) goto loc_82EB9128;
	// lis r31,-16371
	ctx.r31.s64 = -1072889856;
	// ori r31,r31,14002
	ctx.r31.u64 = ctx.r31.u64 | 14002;
	// b 0x82eb9148
	goto loc_82EB9148;
loc_82EB9128:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ebc128
	ctx.lr = 0x82EB9130;
	sub_82EBC128(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eb9148
	if (ctx.cr0.lt) goto loc_82EB9148;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82ebbff8
	ctx.lr = 0x82EB9148;
	sub_82EBBFF8(ctx, base);
loc_82EB9148:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eb07a0
	ctx.lr = 0x82EB9150;
	sub_82EB07A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82EB916C"))) PPC_WEAK_FUNC(sub_82EB916C);
PPC_FUNC_IMPL(__imp__sub_82EB916C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB9170"))) PPC_WEAK_FUNC(sub_82EB9170);
PPC_FUNC_IMPL(__imp__sub_82EB9170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x82EB9178;
	__savegprlr_22(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,2
	ctx.r10.s64 = 2;
	// sth r25,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r25.u16);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// bl 0x82f2bff0
	ctx.lr = 0x82EB91CC;
	sub_82F2BFF0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eb9470
	if (ctx.cr0.lt) goto loc_82EB9470;
	// lhz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82eb91ec
	if (!ctx.cr0.eq) goto loc_82EB91EC;
	// lis r31,-16371
	ctx.r31.s64 = -1072889856;
	// ori r31,r31,16013
	ctx.r31.u64 = ctx.r31.u64 | 16013;
	// b 0x82eb9470
	goto loc_82EB9470;
loc_82EB91EC:
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e8edd0
	ctx.lr = 0x82EB9204;
	sub_82E8EDD0(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne 0x82eb9218
	if (!ctx.cr0.eq) goto loc_82EB9218;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x82eb9470
	goto loc_82EB9470;
loc_82EB9218:
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82f2bff0
	ctx.lr = 0x82EB9248;
	sub_82F2BFF0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eb9458
	if (ctx.cr0.lt) goto loc_82EB9458;
	// lhz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82eb9458
	if (ctx.cr0.eq) goto loc_82EB9458;
	// mr r23,r25
	ctx.r23.u64 = ctx.r25.u64;
	// li r24,1
	ctx.r24.s64 = 1;
loc_82EB9264:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82ebbff8
	ctx.lr = 0x82EB926C;
	sub_82EBBFF8(ctx, base);
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// addi r8,r1,116
	ctx.r8.s64 = ctx.r1.s64 + 116;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// rlwinm r30,r23,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lhzx r5,r30,r26
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r26.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82f2c250
	ctx.lr = 0x82EB92B4;
	sub_82F2C250(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eb9450
	if (ctx.cr0.lt) goto loc_82EB9450;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82eb92cc
	if (ctx.cr6.eq) goto loc_82EB92CC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e8ee18
	ctx.lr = 0x82EB92CC;
	sub_82E8EE18(ctx, base);
loc_82EB92CC:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e8edd0
	ctx.lr = 0x82EB92E4;
	sub_82E8EDD0(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x82eb9448
	if (ctx.cr0.eq) goto loc_82EB9448;
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// addi r6,r1,116
	ctx.r6.s64 = ctx.r1.s64 + 116;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// lhzx r5,r30,r26
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r26.u32);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82f2c250
	ctx.lr = 0x82EB9330;
	sub_82F2C250(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eb9450
	if (ctx.cr0.lt) goto loc_82EB9450;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82eb9398
	if (ctx.cr6.lt) goto loc_82EB9398;
	// beq cr6,0x82eb9390
	if (ctx.cr6.eq) goto loc_82EB9390;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82eb9388
	if (ctx.cr6.lt) goto loc_82EB9388;
	// beq cr6,0x82eb9380
	if (ctx.cr6.eq) goto loc_82EB9380;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x82eb9378
	if (ctx.cr6.lt) goto loc_82EB9378;
	// beq cr6,0x82eb9370
	if (ctx.cr6.eq) goto loc_82EB9370;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bge cr6,0x82eb943c
	if (!ctx.cr6.lt) goto loc_82EB943C;
	// li r4,72
	ctx.r4.s64 = 72;
	// b 0x82eb939c
	goto loc_82EB939C;
loc_82EB9370:
	// li r4,18
	ctx.r4.s64 = 18;
	// b 0x82eb939c
	goto loc_82EB939C;
loc_82EB9378:
	// li r4,21
	ctx.r4.s64 = 21;
	// b 0x82eb939c
	goto loc_82EB939C;
loc_82EB9380:
	// li r4,11
	ctx.r4.s64 = 11;
	// b 0x82eb939c
	goto loc_82EB939C;
loc_82EB9388:
	// li r4,65
	ctx.r4.s64 = 65;
	// b 0x82eb939c
	goto loc_82EB939C;
loc_82EB9390:
	// li r4,31
	ctx.r4.s64 = 31;
	// b 0x82eb939c
	goto loc_82EB939C;
loc_82EB9398:
	// li r4,19
	ctx.r4.s64 = 19;
loc_82EB939C:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82ebc920
	ctx.lr = 0x82EB93AC;
	sub_82EBC920(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82eb9450
	if (ctx.cr6.lt) goto loc_82EB9450;
	// lhz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82eb9400
	if (!ctx.cr6.gt) goto loc_82EB9400;
	// lhz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r22.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82eb93f0
	if (ctx.cr0.eq) goto loc_82EB93F0;
	// lhz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 128);
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi. r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb93f0
	if (ctx.cr0.eq) goto loc_82EB93F0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82ebe080
	ctx.lr = 0x82EB93E8;
	sub_82EBE080(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eb9450
	if (ctx.cr0.lt) goto loc_82EB9450;
loc_82EB93F0:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82ebdcd8
	ctx.lr = 0x82EB93FC;
	sub_82EBDCD8(ctx, base);
	// b 0x82eb940c
	goto loc_82EB940C;
loc_82EB9400:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82ebc128
	ctx.lr = 0x82EB940C;
	sub_82EBC128(ctx, base);
loc_82EB940C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// blt cr6,0x82eb9454
	if (ctx.cr6.lt) goto loc_82EB9454;
	// bl 0x82eb07a0
	ctx.lr = 0x82EB9420;
	sub_82EB07A0(ctx, base);
	// addi r11,r23,1
	ctx.r11.s64 = ctx.r23.s64 + 1;
	// lhz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82eb9264
	if (ctx.cr6.gt) goto loc_82EB9264;
	// b 0x82eb9458
	goto loc_82EB9458;
loc_82EB943C:
	// lis r31,-16371
	ctx.r31.s64 = -1072889856;
	// ori r31,r31,16012
	ctx.r31.u64 = ctx.r31.u64 | 16012;
	// b 0x82eb9450
	goto loc_82EB9450;
loc_82EB9448:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
loc_82EB9450:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
loc_82EB9454:
	// bl 0x82eb07a0
	ctx.lr = 0x82EB9458;
	sub_82EB07A0(ctx, base);
loc_82EB9458:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e8ee18
	ctx.lr = 0x82EB9460;
	sub_82E8EE18(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82eb9470
	if (ctx.cr6.eq) goto loc_82EB9470;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e8ee18
	ctx.lr = 0x82EB9470;
	sub_82E8EE18(ctx, base);
loc_82EB9470:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB947C"))) PPC_WEAK_FUNC(sub_82EB947C);
PPC_FUNC_IMPL(__imp__sub_82EB947C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB9480"))) PPC_WEAK_FUNC(sub_82EB9480);
PPC_FUNC_IMPL(__imp__sub_82EB9480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82EB9488;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x82f2bff0
	ctx.lr = 0x82EB94C8;
	sub_82F2BFF0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eb959c
	if (ctx.cr0.lt) goto loc_82EB959C;
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82eb94e8
	if (!ctx.cr0.eq) goto loc_82EB94E8;
	// lis r31,-16371
	ctx.r31.s64 = -1072889856;
	// ori r31,r31,16013
	ctx.r31.u64 = ctx.r31.u64 | 16013;
	// b 0x82eb959c
	goto loc_82EB959C;
loc_82EB94E8:
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e8edd0
	ctx.lr = 0x82EB9500;
	sub_82E8EDD0(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x82eb9514
	if (!ctx.cr0.eq) goto loc_82EB9514;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x82eb959c
	goto loc_82EB959C;
loc_82EB9514:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82f2bff0
	ctx.lr = 0x82EB9544;
	sub_82F2BFF0(ctx, base);
	// b 0x82eb9580
	goto loc_82EB9580;
loc_82EB9548:
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// rlwinm r9,r10,1,15,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1FFFE;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lhzx r5,r9,r28
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r28.u32);
	// bl 0x82f2cce0
	ctx.lr = 0x82EB9580;
	sub_82F2CCE0(ctx, base);
loc_82EB9580:
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eb9594
	if (ctx.cr0.lt) goto loc_82EB9594;
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82eb9548
	if (!ctx.cr0.eq) goto loc_82EB9548;
loc_82EB9594:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e8ee18
	ctx.lr = 0x82EB959C;
	sub_82E8EE18(ctx, base);
loc_82EB959C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB95A8"))) PPC_WEAK_FUNC(sub_82EB95A8);
PPC_FUNC_IMPL(__imp__sub_82EB95A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82EB95B0;
	__savegprlr_24(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// sth r30,116(r1)
	PPC_STORE_U16(ctx.r1.u32 + 116, ctx.r30.u16);
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// sth r30,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r30.u16);
	// li r6,1
	ctx.r6.s64 = 1;
	// sth r30,114(r1)
	PPC_STORE_U16(ctx.r1.u32 + 114, ctx.r30.u16);
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// bl 0x82f2bf00
	ctx.lr = 0x82EB95F4;
	sub_82F2BF00(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eb9784
	if (ctx.cr0.lt) goto loc_82EB9784;
	// lhz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82eb9760
	if (ctx.cr0.eq) goto loc_82EB9760;
	// li r25,1
	ctx.r25.s64 = 1;
loc_82EB9610:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82ebbff8
	ctx.lr = 0x82EB9618;
	sub_82EBBFF8(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82eb9628
	if (ctx.cr6.eq) goto loc_82EB9628;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e8ee18
	ctx.lr = 0x82EB9628;
	sub_82E8EE18(ctx, base);
loc_82EB9628:
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r1,114
	ctx.r9.s64 = ctx.r1.s64 + 114;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82f2c250
	ctx.lr = 0x82EB966C;
	sub_82F2C250(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eb9758
	if (ctx.cr0.lt) goto loc_82EB9758;
	// lhz r11,114(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 114);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82eb9720
	if (!ctx.cr0.eq) goto loc_82EB9720;
	// lhz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rotlwi r3,r11,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e8edd0
	ctx.lr = 0x82EB969C;
	sub_82E8EDD0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82eb9744
	if (ctx.cr0.eq) goto loc_82EB9744;
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r9,r1,114
	ctx.r9.s64 = ctx.r1.s64 + 114;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82f2c250
	ctx.lr = 0x82EB96E4;
	sub_82F2C250(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// blt 0x82eb975c
	if (ctx.cr0.lt) goto loc_82EB975C;
	// lhz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,31
	ctx.r4.s64 = 31;
	// rotlwi r6,r11,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// bl 0x82ebc920
	ctx.lr = 0x82EB9704;
	sub_82EBC920(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eb9758
	if (ctx.cr0.lt) goto loc_82EB9758;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82ebdd48
	ctx.lr = 0x82EB9718;
	sub_82EBDD48(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eb9758
	if (ctx.cr0.lt) goto loc_82EB9758;
loc_82EB9720:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82eb07a0
	ctx.lr = 0x82EB9728;
	sub_82EB07A0(ctx, base);
	// clrlwi r11,r26,16
	ctx.r11.u64 = ctx.r26.u32 & 0xFFFF;
	// lhz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r26,r11,16
	ctx.r26.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x82eb9610
	if (ctx.cr6.gt) goto loc_82EB9610;
	// b 0x82eb9760
	goto loc_82EB9760;
loc_82EB9744:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// bl 0x82eb07a0
	ctx.lr = 0x82EB9754;
	sub_82EB07A0(ctx, base);
	// b 0x82eb9784
	goto loc_82EB9784;
loc_82EB9758:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
loc_82EB975C:
	// bl 0x82eb07a0
	ctx.lr = 0x82EB9760;
	sub_82EB07A0(ctx, base);
loc_82EB9760:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82eb9774
	if (ctx.cr6.lt) goto loc_82EB9774;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82ebced8
	ctx.lr = 0x82EB9770;
	sub_82EBCED8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82EB9774:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82eb9784
	if (ctx.cr6.eq) goto loc_82EB9784;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e8ee18
	ctx.lr = 0x82EB9784;
	sub_82E8EE18(ctx, base);
loc_82EB9784:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB9790"))) PPC_WEAK_FUNC(sub_82EB9790);
PPC_FUNC_IMPL(__imp__sub_82EB9790) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// rlwinm r4,r4,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb97d4
	if (ctx.cr6.eq) goto loc_82EB97D4;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82eb97d4
	if (ctx.cr6.gt) goto loc_82EB97D4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82ab8760
	ctx.lr = 0x82EB97D0;
	sub_82AB8760(ctx, base);
	// b 0x82eb97dc
	goto loc_82EB97DC;
loc_82EB97D4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82EB97DC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82eb97f8
	if (ctx.cr6.lt) goto loc_82EB97F8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82eb97f8
	if (ctx.cr6.eq) goto loc_82EB97F8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82EB97F8:
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

__attribute__((alias("__imp__sub_82EB980C"))) PPC_WEAK_FUNC(sub_82EB980C);
PPC_FUNC_IMPL(__imp__sub_82EB980C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB9810"))) PPC_WEAK_FUNC(sub_82EB9810);
PPC_FUNC_IMPL(__imp__sub_82EB9810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x82EB9818;
	__savegprlr_22(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// bl 0x82ebbff8
	ctx.lr = 0x82EB983C;
	sub_82EBBFF8(ctx, base);
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// li r31,2
	ctx.r31.s64 = 2;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// bl 0x82eb9480
	ctx.lr = 0x82EB985C;
	sub_82EB9480(ctx, base);
	// lis r11,-16371
	ctx.r11.s64 = -1072889856;
	// ori r11,r11,16013
	ctx.r11.u64 = ctx.r11.u64 | 16013;
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r11,r3
	ctx.r28.u64 = ctx.r11.u64 & ctx.r3.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x82eb9964
	if (ctx.cr6.lt) goto loc_82EB9964;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82ebc490
	ctx.lr = 0x82EB9888;
	sub_82EBC490(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x82eb9964
	if (ctx.cr0.lt) goto loc_82EB9964;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r22,r24
	ctx.r22.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eb9964
	if (ctx.cr6.eq) goto loc_82EB9964;
loc_82EB98A0:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82ebc008
	ctx.lr = 0x82EB98A8;
	sub_82EBC008(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x82eb9964
	if (ctx.cr0.lt) goto loc_82EB9964;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82ebdfe8
	ctx.lr = 0x82EB98C0;
	sub_82EBDFE8(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x82eb9964
	if (ctx.cr0.lt) goto loc_82EB9964;
	// lhz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// bgt cr6,0x82eb99bc
	if (ctx.cr6.gt) goto loc_82EB99BC;
	// beq cr6,0x82eb99ac
	if (ctx.cr6.eq) goto loc_82EB99AC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82eb999c
	if (ctx.cr6.eq) goto loc_82EB999C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82eb99ac
	if (ctx.cr6.eq) goto loc_82EB99AC;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x82eb9a0c
	if (ctx.cr6.eq) goto loc_82EB9A0C;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x82eb9978
	if (ctx.cr6.eq) goto loc_82EB9978;
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// beq cr6,0x82eb999c
	if (ctx.cr6.eq) goto loc_82EB999C;
loc_82EB9900:
	// lis r28,-16371
	ctx.r28.s64 = -1072889856;
	// ori r28,r28,14002
	ctx.r28.u64 = ctx.r28.u64 | 14002;
loc_82EB9908:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x82eb9964
	if (ctx.cr6.lt) goto loc_82EB9964;
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82f2c448
	ctx.lr = 0x82EB994C;
	sub_82F2C448(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x82eb9964
	if (ctx.cr0.lt) goto loc_82EB9964;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// bgt cr6,0x82eb98a0
	if (ctx.cr6.gt) goto loc_82EB98A0;
loc_82EB9964:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82eb07a0
	ctx.lr = 0x82EB996C;
	sub_82EB07A0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
loc_82EB9978:
	// lha r11,120(r1)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r1.u32 + 120));
	// li r31,3
	ctx.r31.s64 = 3;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r30,r1,100
	ctx.r30.s64 = ctx.r1.s64 + 100;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r29,4
	ctx.r29.s64 = 4;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// b 0x82eb9908
	goto loc_82EB9908;
loc_82EB999C:
	// li r31,5
	ctx.r31.s64 = 5;
	// addi r30,r1,120
	ctx.r30.s64 = ctx.r1.s64 + 120;
	// li r29,2
	ctx.r29.s64 = 2;
	// b 0x82eb9908
	goto loc_82EB9908;
loc_82EB99AC:
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// addi r30,r1,120
	ctx.r30.s64 = ctx.r1.s64 + 120;
	// li r29,4
	ctx.r29.s64 = 4;
	// b 0x82eb9908
	goto loc_82EB9908;
loc_82EB99BC:
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// blt cr6,0x82eb9900
	if (ctx.cr6.lt) goto loc_82EB9900;
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// ble cr6,0x82eb9a34
	if (!ctx.cr6.gt) goto loc_82EB9A34;
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// beq cr6,0x82eb9a0c
	if (ctx.cr6.eq) goto loc_82EB9A0C;
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// beq cr6,0x82eb9a34
	if (ctx.cr6.eq) goto loc_82EB9A34;
	// cmpwi cr6,r11,65
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 65, ctx.xer);
	// beq cr6,0x82eb99fc
	if (ctx.cr6.eq) goto loc_82EB99FC;
	// cmpwi cr6,r11,72
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 72, ctx.xer);
	// bne cr6,0x82eb9900
	if (!ctx.cr6.eq) goto loc_82EB9900;
	// lwz r30,120(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// li r31,6
	ctx.r31.s64 = 6;
	// li r29,16
	ctx.r29.s64 = 16;
	// b 0x82eb9908
	goto loc_82EB9908;
loc_82EB99FC:
	// lwz r30,124(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// li r31,2
	ctx.r31.s64 = 2;
	// lwz r29,120(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// b 0x82eb9908
	goto loc_82EB9908;
loc_82EB9A0C:
	// lwz r30,120(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// li r4,-1
	ctx.r4.s64 = -1;
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// bl 0x82eb9790
	ctx.lr = 0x82EB9A28;
	sub_82EB9790(ctx, base);
	// lwz r29,104(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x82eb9908
	goto loc_82EB9908;
loc_82EB9A34:
	// li r31,4
	ctx.r31.s64 = 4;
	// addi r30,r1,120
	ctx.r30.s64 = ctx.r1.s64 + 120;
	// li r29,8
	ctx.r29.s64 = 8;
	// b 0x82eb9908
	goto loc_82EB9908;
}

__attribute__((alias("__imp__sub_82EB9A44"))) PPC_WEAK_FUNC(sub_82EB9A44);
PPC_FUNC_IMPL(__imp__sub_82EB9A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB9A48"))) PPC_WEAK_FUNC(sub_82EB9A48);
PPC_FUNC_IMPL(__imp__sub_82EB9A48) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// beq cr6,0x82eb9a84
	if (ctx.cr6.eq) goto loc_82EB9A84;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB9A84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EB9A84:
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

__attribute__((alias("__imp__sub_82EB9A9C"))) PPC_WEAK_FUNC(sub_82EB9A9C);
PPC_FUNC_IMPL(__imp__sub_82EB9A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB9AA0"))) PPC_WEAK_FUNC(sub_82EB9AA0);
PPC_FUNC_IMPL(__imp__sub_82EB9AA0) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb9adc
	if (ctx.cr6.eq) goto loc_82EB9ADC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB9AD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_82EB9ADC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb9afc
	if (ctx.cr6.eq) goto loc_82EB9AFC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB9AF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82EB9AFC:
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

__attribute__((alias("__imp__sub_82EB9B14"))) PPC_WEAK_FUNC(sub_82EB9B14);
PPC_FUNC_IMPL(__imp__sub_82EB9B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB9B18"))) PPC_WEAK_FUNC(sub_82EB9B18);
PPC_FUNC_IMPL(__imp__sub_82EB9B18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82EB9B20;
	__savegprlr_29(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// addi r9,r11,1552
	ctx.r9.s64 = ctx.r11.s64 + 1552;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,1552(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1552);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// std r29,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r29.u64);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// std r29,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r29.u64);
	// std r29,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r29.u64);
	// std r29,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r29.u64);
	// std r29,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r29.u64);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stw r9,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// bne cr6,0x82eb9b94
	if (!ctx.cr6.eq) goto loc_82EB9B94;
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// ori r31,r31,16387
	ctx.r31.u64 = ctx.r31.u64 | 16387;
	// b 0x82eb9ec8
	goto loc_82EB9EC8;
loc_82EB9B94:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-88
	ctx.r4.s64 = ctx.r11.s64 + -88;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB9BB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eb9eac
	if (ctx.cr0.lt) goto loc_82EB9EAC;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82e9ff98
	ctx.lr = 0x82EB9BCC;
	sub_82E9FF98(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eb9eac
	if (ctx.cr0.lt) goto loc_82EB9EAC;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82ea0018
	ctx.lr = 0x82EB9BE0;
	sub_82EA0018(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eb9eac
	if (ctx.cr0.lt) goto loc_82EB9EAC;
	// ld r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// mulli r11,r11,10000
	ctx.r11.s64 = ctx.r11.s64 * 10000;
	// cmpld cr6,r10,r11
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, ctx.xer);
	// ble cr6,0x82eb9c00
	if (!ctx.cr6.gt) goto loc_82EB9C00;
	// subf r29,r11,r10
	ctx.r29.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_82EB9C00:
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82e9fe70
	ctx.lr = 0x82EB9C0C;
	sub_82E9FE70(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eb9eac
	if (ctx.cr0.lt) goto loc_82EB9EAC;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82e9fed0
	ctx.lr = 0x82EB9C20;
	sub_82E9FED0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eb9eac
	if (ctx.cr0.lt) goto loc_82EB9EAC;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82e9ff10
	ctx.lr = 0x82EB9C34;
	sub_82E9FF10(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eb9eac
	if (ctx.cr0.lt) goto loc_82EB9EAC;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82e9ff58
	ctx.lr = 0x82EB9C48;
	sub_82E9FF58(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eb9eac
	if (ctx.cr0.lt) goto loc_82EB9EAC;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82e9ff98
	ctx.lr = 0x82EB9C5C;
	sub_82E9FF98(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eb9eac
	if (ctx.cr0.lt) goto loc_82EB9EAC;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82e9ffd8
	ctx.lr = 0x82EB9C70;
	sub_82E9FFD8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eb9eac
	if (ctx.cr0.lt) goto loc_82EB9EAC;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82ea0058
	ctx.lr = 0x82EB9C84;
	sub_82EA0058(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eb9eac
	if (ctx.cr0.lt) goto loc_82EB9EAC;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82ea0098
	ctx.lr = 0x82EB9C98;
	sub_82EA0098(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eb9eac
	if (ctx.cr0.lt) goto loc_82EB9EAC;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82ea00d8
	ctx.lr = 0x82EB9CAC;
	sub_82EA00D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eb9eac
	if (ctx.cr0.lt) goto loc_82EB9EAC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82ea0118
	ctx.lr = 0x82EB9CC0;
	sub_82EA0118(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eb9eac
	if (ctx.cr0.lt) goto loc_82EB9EAC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r10,-7376
	ctx.r4.s64 = ctx.r10.s64 + -7376;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB9CE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eb9eac
	if (ctx.cr0.lt) goto loc_82EB9EAC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r10,-7248
	ctx.r4.s64 = ctx.r10.s64 + -7248;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB9D10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eb9eac
	if (ctx.cr0.lt) goto loc_82EB9EAC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// addi r4,r10,-7360
	ctx.r4.s64 = ctx.r10.s64 + -7360;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB9D38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eb9eac
	if (ctx.cr0.lt) goto loc_82EB9EAC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r10,-7232
	ctx.r4.s64 = ctx.r10.s64 + -7232;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB9D64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eb9eac
	if (ctx.cr0.lt) goto loc_82EB9EAC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// ld r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,-7216
	ctx.r4.s64 = ctx.r10.s64 + -7216;
	// rotlwi r5,r9,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB9D90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eb9eac
	if (ctx.cr0.lt) goto loc_82EB9EAC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// addi r4,r10,-7200
	ctx.r4.s64 = ctx.r10.s64 + -7200;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB9DB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eb9eac
	if (ctx.cr0.lt) goto loc_82EB9EAC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r5,136(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// addi r4,r10,-7184
	ctx.r4.s64 = ctx.r10.s64 + -7184;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB9DE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eb9eac
	if (ctx.cr0.lt) goto loc_82EB9EAC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// addi r4,r10,-7168
	ctx.r4.s64 = ctx.r10.s64 + -7168;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB9E08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eb9eac
	if (ctx.cr0.lt) goto loc_82EB9EAC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r10,-7152
	ctx.r4.s64 = ctx.r10.s64 + -7152;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB9E30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eb9eac
	if (ctx.cr0.lt) goto loc_82EB9EAC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r10,-7136
	ctx.r4.s64 = ctx.r10.s64 + -7136;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB9E58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eb9eac
	if (ctx.cr0.lt) goto loc_82EB9EAC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r4,r10,-7120
	ctx.r4.s64 = ctx.r10.s64 + -7120;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB9E80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eb9eac
	if (ctx.cr0.lt) goto loc_82EB9EAC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r4,r10,-7104
	ctx.r4.s64 = ctx.r10.s64 + -7104;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB9EA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82EB9EAC:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb9ec8
	if (ctx.cr6.eq) goto loc_82EB9EC8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB9EC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EB9EC8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB9ED4"))) PPC_WEAK_FUNC(sub_82EB9ED4);
PPC_FUNC_IMPL(__imp__sub_82EB9ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB9ED8"))) PPC_WEAK_FUNC(sub_82EB9ED8);
PPC_FUNC_IMPL(__imp__sub_82EB9ED8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bne cr6,0x82eb9f18
	if (!ctx.cr6.eq) goto loc_82EB9F18;
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// ori r30,r30,16387
	ctx.r30.u64 = ctx.r30.u64 | 16387;
	// b 0x82eb9fa8
	goto loc_82EB9FA8;
loc_82EB9F18:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,28304
	ctx.r4.s64 = ctx.r11.s64 + 28304;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB9F3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb9f8c
	if (ctx.cr0.lt) goto loc_82EB9F8C;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82f2cf08
	ctx.lr = 0x82EB9F54;
	sub_82F2CF08(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82eb9f8c
	if (ctx.cr0.lt) goto loc_82EB9F8C;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82eb9f8c
	if (ctx.cr6.eq) goto loc_82EB9F8C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r10,-7024
	ctx.r4.s64 = ctx.r10.s64 + -7024;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB9F88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82EB9F8C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb9fa8
	if (ctx.cr6.eq) goto loc_82EB9FA8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB9FA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EB9FA8:
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

__attribute__((alias("__imp__sub_82EB9FC4"))) PPC_WEAK_FUNC(sub_82EB9FC4);
PPC_FUNC_IMPL(__imp__sub_82EB9FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB9FC8"))) PPC_WEAK_FUNC(sub_82EB9FC8);
PPC_FUNC_IMPL(__imp__sub_82EB9FC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82EB9FD0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r4,r11,28176
	ctx.r4.s64 = ctx.r11.s64 + 28176;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBA004;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-16371
	ctx.r11.s64 = -1072889856;
	// ori r30,r11,14037
	ctx.r30.u64 = ctx.r11.u64 | 14037;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x82eba048
	if (ctx.cr6.eq) goto loc_82EBA048;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82eba048
	if (ctx.cr6.lt) goto loc_82EBA048;
	// sth r29,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r29.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82f2e688
	ctx.lr = 0x82EBA030;
	sub_82F2E688(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eba048
	if (ctx.cr0.lt) goto loc_82EBA048;
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82eba070
	if (!ctx.cr0.eq) goto loc_82EBA070;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82EBA048:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82EBA04C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eba064
	if (ctx.cr6.eq) goto loc_82EBA064;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBA064;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EBA064:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_82EBA070:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x82eba04c
	goto loc_82EBA04C;
}

__attribute__((alias("__imp__sub_82EBA084"))) PPC_WEAK_FUNC(sub_82EBA084);
PPC_FUNC_IMPL(__imp__sub_82EBA084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBA088"))) PPC_WEAK_FUNC(sub_82EBA088);
PPC_FUNC_IMPL(__imp__sub_82EBA088) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,28032
	ctx.r4.s64 = ctx.r10.s64 + 28032;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBA0CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-16371
	ctx.r11.s64 = -1072889856;
	// ori r11,r11,14037
	ctx.r11.u64 = ctx.r11.u64 | 14037;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82eba0fc
	if (ctx.cr6.eq) goto loc_82EBA0FC;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82eba0fc
	if (ctx.cr6.lt) goto loc_82EBA0FC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82eba100
	goto loc_82EBA100;
loc_82EBA0FC:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82EBA100:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eba118
	if (ctx.cr6.eq) goto loc_82EBA118;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBA118;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EBA118:
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

__attribute__((alias("__imp__sub_82EBA134"))) PPC_WEAK_FUNC(sub_82EBA134);
PPC_FUNC_IMPL(__imp__sub_82EBA134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBA138"))) PPC_WEAK_FUNC(sub_82EBA138);
PPC_FUNC_IMPL(__imp__sub_82EBA138) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,27872
	ctx.r4.s64 = ctx.r10.s64 + 27872;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBA17C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82eba198
	if (ctx.cr0.lt) goto loc_82EBA198;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82eba19c
	goto loc_82EBA19C;
loc_82EBA198:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82EBA19C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eba1b4
	if (ctx.cr6.eq) goto loc_82EBA1B4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBA1B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EBA1B4:
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

__attribute__((alias("__imp__sub_82EBA1D0"))) PPC_WEAK_FUNC(sub_82EBA1D0);
PPC_FUNC_IMPL(__imp__sub_82EBA1D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82EBA1D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// std r28,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r28.u64);
	// std r28,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r28.u64);
	// std r28,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r28.u64);
	// bne cr6,0x82eba210
	if (!ctx.cr6.eq) goto loc_82EBA210;
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// ori r31,r31,16387
	ctx.r31.u64 = ctx.r31.u64 | 16387;
	// b 0x82eba390
	goto loc_82EBA390;
loc_82EBA210:
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,28544
	ctx.r4.s64 = ctx.r11.s64 + 28544;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBA230;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eba334
	if (ctx.cr0.lt) goto loc_82EBA334;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,27952
	ctx.r4.s64 = ctx.r11.s64 + 27952;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBA25C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eba334
	if (ctx.cr0.lt) goto loc_82EBA334;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,27904
	ctx.r4.s64 = ctx.r11.s64 + 27904;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBA288;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eba334
	if (ctx.cr0.lt) goto loc_82EBA334;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBA2AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eba334
	if (ctx.cr0.lt) goto loc_82EBA334;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBA2D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eba334
	if (ctx.cr0.lt) goto loc_82EBA334;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// addi r4,r8,-6880
	ctx.r4.s64 = ctx.r8.s64 + -6880;
	// ld r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,88(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// subf r29,r11,r8
	ctx.r29.s64 = ctx.r8.s64 - ctx.r11.s64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82EBA308;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eba334
	if (ctx.cr0.lt) goto loc_82EBA334;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r10,-6864
	ctx.r4.s64 = ctx.r10.s64 + -6864;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBA330;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82EBA334:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eba354
	if (ctx.cr6.eq) goto loc_82EBA354;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBA350;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
loc_82EBA354:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eba374
	if (ctx.cr6.eq) goto loc_82EBA374;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBA370;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
loc_82EBA374:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eba390
	if (ctx.cr6.eq) goto loc_82EBA390;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBA390;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EBA390:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EBA39C"))) PPC_WEAK_FUNC(sub_82EBA39C);
PPC_FUNC_IMPL(__imp__sub_82EBA39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBA3A0"))) PPC_WEAK_FUNC(sub_82EBA3A0);
PPC_FUNC_IMPL(__imp__sub_82EBA3A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x82EBA3A8;
	__savegprlr_21(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r11,1552
	ctx.r9.s64 = ctx.r11.s64 + 1552;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r11,1552(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1552);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r23,r24
	ctx.r23.u64 = ctx.r24.u64;
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mr r22,r24
	ctx.r22.u64 = ctx.r24.u64;
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mr r21,r24
	ctx.r21.u64 = ctx.r24.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r9,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// bne cr6,0x82eba40c
	if (!ctx.cr6.eq) goto loc_82EBA40C;
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// ori r31,r31,16387
	ctx.r31.u64 = ctx.r31.u64 | 16387;
	// b 0x82eba5f0
	goto loc_82EBA5F0;
loc_82EBA40C:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eba424
	if (!ctx.cr6.eq) goto loc_82EBA424;
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// ori r31,r31,65535
	ctx.r31.u64 = ctx.r31.u64 | 65535;
	// b 0x82eba5f0
	goto loc_82EBA5F0;
loc_82EBA424:
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r25,r11,28272
	ctx.r25.s64 = ctx.r11.s64 + 28272;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBA448;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eba5d4
	if (ctx.cr0.lt) goto loc_82EBA5D4;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eba558
	if (ctx.cr6.eq) goto loc_82EBA558;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r29,r11,-16824
	ctx.r29.s64 = ctx.r11.s64 + -16824;
	// addi r28,r10,-8
	ctx.r28.s64 = ctx.r10.s64 + -8;
loc_82EBA470:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eba490
	if (ctx.cr6.eq) goto loc_82EBA490;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBA48C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
loc_82EBA490:
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBA4B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eba5d4
	if (ctx.cr0.lt) goto loc_82EBA5D4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82e9fe70
	ctx.lr = 0x82EBA4C4;
	sub_82E9FE70(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eba5d4
	if (ctx.cr0.lt) goto loc_82EBA5D4;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
loc_82EBA4D8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eba4f8
	if (!ctx.cr0.eq) goto loc_82EBA4F8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82eba4d8
	if (!ctx.cr6.eq) goto loc_82EBA4D8;
loc_82EBA4F8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eba508
	if (!ctx.cr0.eq) goto loc_82EBA508;
	// li r23,1
	ctx.r23.s64 = 1;
	// b 0x82eba548
	goto loc_82EBA548;
loc_82EBA508:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r8,r29,16
	ctx.r8.s64 = ctx.r29.s64 + 16;
loc_82EBA514:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eba534
	if (!ctx.cr0.eq) goto loc_82EBA534;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82eba514
	if (!ctx.cr6.eq) goto loc_82EBA514;
loc_82EBA534:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eba544
	if (!ctx.cr0.eq) goto loc_82EBA544;
	// li r22,1
	ctx.r22.s64 = 1;
	// b 0x82eba548
	goto loc_82EBA548;
loc_82EBA544:
	// li r21,1
	ctx.r21.s64 = 1;
loc_82EBA548:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x82eba470
	if (ctx.cr6.gt) goto loc_82EBA470;
loc_82EBA558:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addic r10,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r10.s64 = ctx.r23.s64 + -1;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// subfe r5,r10,r23
	temp.u8 = (~ctx.r10.u32 + ctx.r23.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r23.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r23.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r4,r9,-6736
	ctx.r4.s64 = ctx.r9.s64 + -6736;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBA57C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eba5d4
	if (ctx.cr0.lt) goto loc_82EBA5D4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addic r10,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r10.s64 = ctx.r22.s64 + -1;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// subfe r5,r10,r22
	temp.u8 = (~ctx.r10.u32 + ctx.r22.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r22.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r22.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r4,r9,-6720
	ctx.r4.s64 = ctx.r9.s64 + -6720;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBA5A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eba5d4
	if (ctx.cr0.lt) goto loc_82EBA5D4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r4,r10,-6704
	ctx.r4.s64 = ctx.r10.s64 + -6704;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBA5D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82EBA5D4:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eba5f0
	if (ctx.cr6.eq) goto loc_82EBA5F0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBA5F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EBA5F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EBA5FC"))) PPC_WEAK_FUNC(sub_82EBA5FC);
PPC_FUNC_IMPL(__imp__sub_82EBA5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBA600"))) PPC_WEAK_FUNC(sub_82EBA600);
PPC_FUNC_IMPL(__imp__sub_82EBA600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82EBA608;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// sth r31,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r31.u16);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// sth r31,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r31.u16);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// bne cr6,0x82eba640
	if (!ctx.cr6.eq) goto loc_82EBA640;
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// ori r30,r30,16387
	ctx.r30.u64 = ctx.r30.u64 | 16387;
	// b 0x82eba714
	goto loc_82EBA714;
loc_82EBA640:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,28256
	ctx.r4.s64 = ctx.r11.s64 + 28256;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBA664;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eba6f8
	if (ctx.cr0.lt) goto loc_82EBA6F8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82f23a68
	ctx.lr = 0x82EBA678;
	sub_82F23A68(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82eba6f8
	if (ctx.cr0.lt) goto loc_82EBA6F8;
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82eba6f8
	if (ctx.cr0.eq) goto loc_82EBA6F8;
loc_82EBA68C:
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r1,82
	ctx.r5.s64 = ctx.r1.s64 + 82;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82f24120
	ctx.lr = 0x82EBA6A0;
	sub_82F24120(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82eba6f8
	if (ctx.cr0.lt) goto loc_82EBA6F8;
	// lhz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// clrlwi r10,r28,16
	ctx.r10.u64 = ctx.r28.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82eba6d4
	if (ctx.cr6.eq) goto loc_82EBA6D4;
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r31,r11,16
	ctx.r31.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x82eba68c
	if (ctx.cr6.gt) goto loc_82EBA68C;
	// b 0x82eba6f8
	goto loc_82EBA6F8;
loc_82EBA6D4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r10,-6768
	ctx.r4.s64 = ctx.r10.s64 + -6768;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBA6F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82EBA6F8:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eba714
	if (ctx.cr6.eq) goto loc_82EBA714;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBA714;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EBA714:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EBA720"))) PPC_WEAK_FUNC(sub_82EBA720);
PPC_FUNC_IMPL(__imp__sub_82EBA720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82EBA728;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// sth r27,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r27.u16);
	// bne cr6,0x82eba75c
	if (!ctx.cr6.eq) goto loc_82EBA75C;
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// ori r31,r31,16387
	ctx.r31.u64 = ctx.r31.u64 | 16387;
	// b 0x82eba850
	goto loc_82EBA850;
loc_82EBA75C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eba774
	if (!ctx.cr6.eq) goto loc_82EBA774;
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// ori r31,r31,65535
	ctx.r31.u64 = ctx.r31.u64 | 65535;
	// b 0x82eba850
	goto loc_82EBA850;
loc_82EBA774:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r28,r11,28288
	ctx.r28.s64 = ctx.r11.s64 + 28288;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBA798;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eba834
	if (ctx.cr0.lt) goto loc_82EBA834;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eba82c
	if (ctx.cr6.eq) goto loc_82EBA82C;
loc_82EBA7B0:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eba7d0
	if (ctx.cr6.eq) goto loc_82EBA7D0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBA7CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
loc_82EBA7D0:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBA7F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eba834
	if (ctx.cr0.lt) goto loc_82EBA834;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82e97a80
	ctx.lr = 0x82EBA804;
	sub_82E97A80(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eba834
	if (ctx.cr0.lt) goto loc_82EBA834;
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// clrlwi r10,r25,16
	ctx.r10.u64 = ctx.r25.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82eba85c
	if (ctx.cr6.eq) goto loc_82EBA85C;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eba7b0
	if (ctx.cr6.lt) goto loc_82EBA7B0;
loc_82EBA82C:
	// lis r31,-16371
	ctx.r31.s64 = -1072889856;
	// ori r31,r31,14037
	ctx.r31.u64 = ctx.r31.u64 | 14037;
loc_82EBA834:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eba850
	if (ctx.cr6.eq) goto loc_82EBA850;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBA850;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EBA850:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_82EBA85C:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r3.u32);
	// beq cr6,0x82eba850
	if (ctx.cr6.eq) goto loc_82EBA850;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBA87C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82eba834
	goto loc_82EBA834;
}

__attribute__((alias("__imp__sub_82EBA880"))) PPC_WEAK_FUNC(sub_82EBA880);
PPC_FUNC_IMPL(__imp__sub_82EBA880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82EBA888;
	__savegprlr_23(ctx, base);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// sth r30,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r30.u16);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// sth r30,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r30.u16);
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// sth r30,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r30.u16);
	// mr r24,r30
	ctx.r24.u64 = ctx.r30.u64;
	// sth r30,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r30.u16);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// bl 0x82f2f2c0
	ctx.lr = 0x82EBA8C8;
	sub_82F2F2C0(ctx, base);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82eb9fc8
	ctx.lr = 0x82EBA8D4;
	sub_82EB9FC8(ctx, base);
	// lwz r28,92(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ebab00
	if (ctx.cr0.lt) goto loc_82EBAB00;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f2e688
	ctx.lr = 0x82EBA8EC;
	sub_82F2E688(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebab00
	if (ctx.cr0.lt) goto loc_82EBAB00;
	// addi r3,r1,404
	ctx.r3.s64 = ctx.r1.s64 + 404;
	// lhz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// bl 0x82f2f370
	ctx.lr = 0x82EBA900;
	sub_82F2F370(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebab00
	if (ctx.cr0.lt) goto loc_82EBAB00;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f2e400
	ctx.lr = 0x82EBA914;
	sub_82F2E400(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebab00
	if (ctx.cr0.lt) goto loc_82EBAB00;
	// lhz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ebaad8
	if (ctx.cr0.eq) goto loc_82EBAAD8;
	// lis r25,-32234
	ctx.r25.s64 = -2112487424;
loc_82EBA930:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82eba950
	if (ctx.cr6.eq) goto loc_82EBA950;
	// lwz r11,10328(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 10328);
	// clrlwi r10,r27,16
	ctx.r10.u64 = ctx.r27.u32 & 0xFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r29,r11,16
	ctx.r29.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x82eba954
	goto loc_82EBA954;
loc_82EBA950:
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_82EBA954:
	// sth r30,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r30.u16);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,86
	ctx.r6.s64 = ctx.r1.s64 + 86;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f2e1d0
	ctx.lr = 0x82EBA974;
	sub_82F2E1D0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebab00
	if (ctx.cr0.lt) goto loc_82EBAB00;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82eba98c
	if (ctx.cr6.eq) goto loc_82EBA98C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e8ee18
	ctx.lr = 0x82EBA98C;
	sub_82E8EE18(ctx, base);
loc_82EBA98C:
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rotlwi r3,r11,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e8edd0
	ctx.lr = 0x82EBA9A8;
	sub_82E8EDD0(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq 0x82ebab50
	if (ctx.cr0.eq) goto loc_82EBAB50;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// addi r6,r1,86
	ctx.r6.s64 = ctx.r1.s64 + 86;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f2e1d0
	ctx.lr = 0x82EBA9CC;
	sub_82F2E1D0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebab00
	if (ctx.cr0.lt) goto loc_82EBAB00;
	// sth r30,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r30.u16);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// li r5,0
	ctx.r5.s64 = 0;
	// lhz r4,86(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f2e0e8
	ctx.lr = 0x82EBA9EC;
	sub_82F2E0E8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebab00
	if (ctx.cr0.lt) goto loc_82EBAB00;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82ebaa04
	if (ctx.cr6.eq) goto loc_82EBAA04;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82e8ee18
	ctx.lr = 0x82EBAA04;
	sub_82E8EE18(ctx, base);
loc_82EBAA04:
	// lhz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rotlwi r3,r11,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e8edd0
	ctx.lr = 0x82EBAA20;
	sub_82E8EDD0(ctx, base);
	// mr. r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq 0x82ebab50
	if (ctx.cr0.eq) goto loc_82EBAB50;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// lhz r4,86(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f2e0e8
	ctx.lr = 0x82EBAA3C;
	sub_82F2E0E8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebab00
	if (ctx.cr0.lt) goto loc_82EBAB00;
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r3,r1,404
	ctx.r3.s64 = ctx.r1.s64 + 404;
	// rotlwi r4,r11,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// bl 0x82f2f370
	ctx.lr = 0x82EBAA54;
	sub_82F2F370(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebab00
	if (ctx.cr0.lt) goto loc_82EBAB00;
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,404
	ctx.r3.s64 = ctx.r1.s64 + 404;
	// rotlwi r5,r11,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// bl 0x82f2e900
	ctx.lr = 0x82EBAA70;
	sub_82F2E900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebab00
	if (ctx.cr0.lt) goto loc_82EBAB00;
	// lhz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// addi r3,r1,404
	ctx.r3.s64 = ctx.r1.s64 + 404;
	// rotlwi r4,r11,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// bl 0x82f2f370
	ctx.lr = 0x82EBAA88;
	sub_82F2F370(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebab00
	if (ctx.cr0.lt) goto loc_82EBAB00;
	// lhz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,404
	ctx.r3.s64 = ctx.r1.s64 + 404;
	// rotlwi r5,r11,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// bl 0x82f2e900
	ctx.lr = 0x82EBAAA4;
	sub_82F2E900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebab00
	if (ctx.cr0.lt) goto loc_82EBAB00;
	// addi r3,r1,404
	ctx.r3.s64 = ctx.r1.s64 + 404;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82f2f370
	ctx.lr = 0x82EBAAB8;
	sub_82F2F370(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebab00
	if (ctx.cr0.lt) goto loc_82EBAB00;
	// clrlwi r11,r27,16
	ctx.r11.u64 = ctx.r27.u32 & 0xFFFF;
	// lhz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r27,r11,16
	ctx.r27.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82eba930
	if (ctx.cr6.lt) goto loc_82EBA930;
loc_82EBAAD8:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r6,416(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// addi r4,r10,-6976
	ctx.r4.s64 = ctx.r10.s64 + -6976;
	// lwz r5,408(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 408);
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBAAFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82EBAB00:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82ebab1c
	if (ctx.cr6.eq) goto loc_82EBAB1C;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBAB1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EBAB1C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82ebab2c
	if (ctx.cr6.eq) goto loc_82EBAB2C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e8ee18
	ctx.lr = 0x82EBAB2C;
	sub_82E8EE18(ctx, base);
loc_82EBAB2C:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82ebab3c
	if (ctx.cr6.eq) goto loc_82EBAB3C;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82e8ee18
	ctx.lr = 0x82EBAB3C;
	sub_82E8EE18(ctx, base);
loc_82EBAB3C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f2f130
	ctx.lr = 0x82EBAB44;
	sub_82F2F130(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
loc_82EBAB50:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x82ebab00
	goto loc_82EBAB00;
}

__attribute__((alias("__imp__sub_82EBAB5C"))) PPC_WEAK_FUNC(sub_82EBAB5C);
PPC_FUNC_IMPL(__imp__sub_82EBAB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBAB60"))) PPC_WEAK_FUNC(sub_82EBAB60);
PPC_FUNC_IMPL(__imp__sub_82EBAB60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82EBAB68;
	__savegprlr_26(ctx, base);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// std r30,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r30.u64);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// std r30,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r30.u64);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// bl 0x82f2f2c0
	ctx.lr = 0x82EBABA0;
	sub_82F2F2C0(ctx, base);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82eba088
	ctx.lr = 0x82EBABAC;
	sub_82EBA088(ctx, base);
	// lwz r27,92(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ebad34
	if (ctx.cr0.lt) goto loc_82EBAD34;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82f2f5a0
	ctx.lr = 0x82EBABC4;
	sub_82F2F5A0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebad34
	if (ctx.cr0.lt) goto loc_82EBAD34;
	// addi r3,r1,404
	ctx.r3.s64 = ctx.r1.s64 + 404;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82f2f370
	ctx.lr = 0x82EBABD8;
	sub_82F2F370(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebad34
	if (ctx.cr0.lt) goto loc_82EBAD34;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ebad0c
	if (ctx.cr6.eq) goto loc_82EBAD0C;
loc_82EBABF0:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82f300f0
	ctx.lr = 0x82EBAC14;
	sub_82F300F0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebad34
	if (ctx.cr0.lt) goto loc_82EBAD34;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82ebac2c
	if (ctx.cr6.eq) goto loc_82EBAC2C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e8ee18
	ctx.lr = 0x82EBAC2C;
	sub_82E8EE18(ctx, base);
loc_82EBAC2C:
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82ebac48
	if (!ctx.cr6.gt) goto loc_82EBAC48;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82EBAC48:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e8edd0
	ctx.lr = 0x82EBAC5C;
	sub_82E8EDD0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82ebad74
	if (ctx.cr0.eq) goto loc_82EBAD74;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82f300f0
	ctx.lr = 0x82EBAC84;
	sub_82F300F0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebad34
	if (ctx.cr0.lt) goto loc_82EBAD34;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,404
	ctx.r3.s64 = ctx.r1.s64 + 404;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82f2f370
	ctx.lr = 0x82EBAC9C;
	sub_82F2F370(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebad34
	if (ctx.cr0.lt) goto loc_82EBAD34;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,404
	ctx.r3.s64 = ctx.r1.s64 + 404;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82f2e900
	ctx.lr = 0x82EBACB8;
	sub_82F2E900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebad34
	if (ctx.cr0.lt) goto loc_82EBAD34;
	// addi r3,r1,404
	ctx.r3.s64 = ctx.r1.s64 + 404;
	// ld r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x82f2f3a8
	ctx.lr = 0x82EBACCC;
	sub_82F2F3A8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebad34
	if (ctx.cr0.lt) goto loc_82EBAD34;
	// addi r3,r1,404
	ctx.r3.s64 = ctx.r1.s64 + 404;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82f2f3a8
	ctx.lr = 0x82EBACE0;
	sub_82F2F3A8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebad34
	if (ctx.cr0.lt) goto loc_82EBAD34;
	// addi r3,r1,404
	ctx.r3.s64 = ctx.r1.s64 + 404;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x82f2f3a8
	ctx.lr = 0x82EBACF4;
	sub_82F2F3A8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebad34
	if (ctx.cr0.lt) goto loc_82EBAD34;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ebabf0
	if (ctx.cr6.lt) goto loc_82EBABF0;
loc_82EBAD0C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r6,416(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// addi r4,r10,-6992
	ctx.r4.s64 = ctx.r10.s64 + -6992;
	// lwz r5,408(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 408);
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBAD30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82EBAD34:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82ebad50
	if (ctx.cr6.eq) goto loc_82EBAD50;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBAD50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EBAD50:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82ebad60
	if (ctx.cr6.eq) goto loc_82EBAD60;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e8ee18
	ctx.lr = 0x82EBAD60;
	sub_82E8EE18(ctx, base);
loc_82EBAD60:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f2f130
	ctx.lr = 0x82EBAD68;
	sub_82F2F130(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
loc_82EBAD74:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x82ebad34
	goto loc_82EBAD34;
}

__attribute__((alias("__imp__sub_82EBAD80"))) PPC_WEAK_FUNC(sub_82EBAD80);
PPC_FUNC_IMPL(__imp__sub_82EBAD80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82EBAD88;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// std r31,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r31.u64);
	// li r6,0
	ctx.r6.s64 = 0;
	// std r31,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r31.u64);
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBADC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82ebaf80
	if (ctx.cr0.lt) goto loc_82EBAF80;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r28,r11,5120
	ctx.r28.s64 = ctx.r11.s64 + 5120;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBADF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82ebae3c
	if (!ctx.cr0.eq) goto loc_82EBAE3C;
	// lhz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bne cr6,0x82ebae3c
	if (!ctx.cr6.eq) goto loc_82EBAE3C;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lha r11,104(r1)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r1.u32 + 104));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r4,r10,-6944
	ctx.r4.s64 = ctx.r10.s64 + -6944;
	// lwz r10,84(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 84);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82EBAE34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82ebaf80
	if (ctx.cr0.lt) goto loc_82EBAF80;
loc_82EBAE3C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8e518
	ctx.lr = 0x82EBAE44;
	sub_82E8E518(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r28,52
	ctx.r4.s64 = ctx.r28.s64 + 52;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// std r31,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r31.u64);
	// std r31,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r31.u64);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBAE6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82ebaea8
	if (!ctx.cr0.eq) goto loc_82EBAEA8;
	// lhz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// bne cr6,0x82ebaea8
	if (!ctx.cr6.eq) goto loc_82EBAEA8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r4,r10,-6928
	ctx.r4.s64 = ctx.r10.s64 + -6928;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBAEA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82ebaf80
	if (ctx.cr0.lt) goto loc_82EBAF80;
loc_82EBAEA8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8e518
	ctx.lr = 0x82EBAEB0;
	sub_82E8E518(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r28,72
	ctx.r4.s64 = ctx.r28.s64 + 72;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// std r31,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r31.u64);
	// std r31,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r31.u64);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBAED8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82ebaf14
	if (!ctx.cr0.eq) goto loc_82EBAF14;
	// lhz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// bne cr6,0x82ebaf14
	if (!ctx.cr6.eq) goto loc_82EBAF14;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r4,r10,-6912
	ctx.r4.s64 = ctx.r10.s64 + -6912;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBAF0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82ebaf80
	if (ctx.cr0.lt) goto loc_82EBAF80;
loc_82EBAF14:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8e518
	ctx.lr = 0x82EBAF1C;
	sub_82E8E518(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r28,12
	ctx.r4.s64 = ctx.r28.s64 + 12;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// std r31,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r31.u64);
	// std r31,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r31.u64);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBAF44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82ebaf80
	if (!ctx.cr0.eq) goto loc_82EBAF80;
	// lhz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,65
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65, ctx.xer);
	// bne cr6,0x82ebaf80
	if (!ctx.cr6.eq) goto loc_82EBAF80;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r4,r10,-6896
	ctx.r4.s64 = ctx.r10.s64 + -6896;
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBAF7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82EBAF80:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ebafa0
	if (ctx.cr6.eq) goto loc_82EBAFA0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBAF9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
loc_82EBAFA0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8e518
	ctx.lr = 0x82EBAFA8;
	sub_82E8E518(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EBAFB4"))) PPC_WEAK_FUNC(sub_82EBAFB4);
PPC_FUNC_IMPL(__imp__sub_82EBAFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBAFB8"))) PPC_WEAK_FUNC(sub_82EBAFB8);
PPC_FUNC_IMPL(__imp__sub_82EBAFB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82EBAFC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// sth r31,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r31.u16);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// bne cr6,0x82ebaff8
	if (!ctx.cr6.eq) goto loc_82EBAFF8;
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// ori r31,r31,16387
	ctx.r31.u64 = ctx.r31.u64 | 16387;
	// b 0x82ebb150
	goto loc_82EBB150;
loc_82EBAFF8:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x82eba720
	ctx.lr = 0x82EBB000;
	sub_82EBA720(ctx, base);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ebb134
	if (ctx.cr0.lt) goto loc_82EBB134;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e97b68
	ctx.lr = 0x82EBB018;
	sub_82E97B68(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebb134
	if (ctx.cr0.lt) goto loc_82EBB134;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e97968
	ctx.lr = 0x82EBB02C;
	sub_82E97968(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebb134
	if (ctx.cr0.lt) goto loc_82EBB134;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e97990
	ctx.lr = 0x82EBB040;
	sub_82E97990(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebb134
	if (ctx.cr0.lt) goto loc_82EBB134;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e979e0
	ctx.lr = 0x82EBB054;
	sub_82E979E0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebb134
	if (ctx.cr0.lt) goto loc_82EBB134;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e97a08
	ctx.lr = 0x82EBB068;
	sub_82E97A08(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebb134
	if (ctx.cr0.lt) goto loc_82EBB134;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r4,r10,-6848
	ctx.r4.s64 = ctx.r10.s64 + -6848;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBB090;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebb134
	if (ctx.cr0.lt) goto loc_82EBB134;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r10,-6832
	ctx.r4.s64 = ctx.r10.s64 + -6832;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBB0B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebb134
	if (ctx.cr0.lt) goto loc_82EBB134;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r4,r10,-6816
	ctx.r4.s64 = ctx.r10.s64 + -6816;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBB0E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebb134
	if (ctx.cr0.lt) goto loc_82EBB134;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r4,r10,-6800
	ctx.r4.s64 = ctx.r10.s64 + -6800;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBB108;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebb134
	if (ctx.cr0.lt) goto loc_82EBB134;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r4,r10,-6784
	ctx.r4.s64 = ctx.r10.s64 + -6784;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBB130;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82EBB134:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82ebb150
	if (ctx.cr6.eq) goto loc_82EBB150;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBB150;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EBB150:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EBB15C"))) PPC_WEAK_FUNC(sub_82EBB15C);
PPC_FUNC_IMPL(__imp__sub_82EBB15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBB160"))) PPC_WEAK_FUNC(sub_82EBB160);
PPC_FUNC_IMPL(__imp__sub_82EBB160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82EBB168;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// clrlwi r5,r4,16
	ctx.r5.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// std r31,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r31.u64);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// std r31,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r31.u64);
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBB1B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82ebb210
	if (ctx.cr0.lt) goto loc_82EBB210;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,5224
	ctx.r4.s64 = ctx.r11.s64 + 5224;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBB1D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82ebb210
	if (!ctx.cr0.eq) goto loc_82EBB210;
	// lhz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// bne cr6,0x82ebb210
	if (!ctx.cr6.eq) goto loc_82EBB210;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r4,r10,-6752
	ctx.r4.s64 = ctx.r10.s64 + -6752;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBB20C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82EBB210:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ebb230
	if (ctx.cr6.eq) goto loc_82EBB230;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBB22C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
loc_82EBB230:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8e518
	ctx.lr = 0x82EBB238;
	sub_82E8E518(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EBB244"))) PPC_WEAK_FUNC(sub_82EBB244);
PPC_FUNC_IMPL(__imp__sub_82EBB244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBB248"))) PPC_WEAK_FUNC(sub_82EBB248);
PPC_FUNC_IMPL(__imp__sub_82EBB248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82EBB250;
	__savegprlr_27(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// sth r28,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r28.u16);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// bl 0x82f2f2c0
	ctx.lr = 0x82EBB278;
	sub_82F2F2C0(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82ebb28c
	if (!ctx.cr6.eq) goto loc_82EBB28C;
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// ori r31,r31,16387
	ctx.r31.u64 = ctx.r31.u64 | 16387;
	// b 0x82ebb3a0
	goto loc_82EBB3A0;
loc_82EBB28C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,28096
	ctx.r4.s64 = ctx.r11.s64 + 28096;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBB2B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82ebb2c0
	if (!ctx.cr0.lt) goto loc_82EBB2C0;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// b 0x82ebb3a0
	goto loc_82EBB3A0;
loc_82EBB2C0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82e95618
	ctx.lr = 0x82EBB2CC;
	sub_82E95618(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebb3a0
	if (ctx.cr0.lt) goto loc_82EBB3A0;
	// addi r3,r1,388
	ctx.r3.s64 = ctx.r1.s64 + 388;
	// lhz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// bl 0x82f2f370
	ctx.lr = 0x82EBB2E0;
	sub_82F2F370(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebb3a0
	if (ctx.cr0.lt) goto loc_82EBB3A0;
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ebb378
	if (ctx.cr0.eq) goto loc_82EBB378;
loc_82EBB2F8:
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82e96220
	ctx.lr = 0x82EBB308;
	sub_82E96220(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebb3a0
	if (ctx.cr0.lt) goto loc_82EBB3A0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r4,260
	ctx.r4.s64 = 260;
	// bl 0x82eb9790
	ctx.lr = 0x82EBB320;
	sub_82EB9790(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebb3a0
	if (ctx.cr0.lt) goto loc_82EBB3A0;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r3,r1,388
	ctx.r3.s64 = ctx.r1.s64 + 388;
	// addi r30,r11,2
	ctx.r30.s64 = ctx.r11.s64 + 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// bl 0x82f2f370
	ctx.lr = 0x82EBB340;
	sub_82F2F370(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebb3a0
	if (ctx.cr0.lt) goto loc_82EBB3A0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r3,r1,388
	ctx.r3.s64 = ctx.r1.s64 + 388;
	// bl 0x82f2e900
	ctx.lr = 0x82EBB358;
	sub_82F2E900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebb3a0
	if (ctx.cr0.lt) goto loc_82EBB3A0;
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r29,r11,16
	ctx.r29.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82ebb2f8
	if (ctx.cr6.lt) goto loc_82EBB2F8;
loc_82EBB378:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r6,400(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// addi r4,r10,-7008
	ctx.r4.s64 = ctx.r10.s64 + -7008;
	// lwz r5,392(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 392);
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBB39C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82EBB3A0:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ebb3c0
	if (ctx.cr6.eq) goto loc_82EBB3C0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBB3BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
loc_82EBB3C0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f2f130
	ctx.lr = 0x82EBB3C8;
	sub_82F2F130(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EBB3D4"))) PPC_WEAK_FUNC(sub_82EBB3D4);
PPC_FUNC_IMPL(__imp__sub_82EBB3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBB3D8"))) PPC_WEAK_FUNC(sub_82EBB3D8);
PPC_FUNC_IMPL(__imp__sub_82EBB3D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82EBB3E0;
	__savegprlr_26(ctx, base);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// sth r30,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r30.u16);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// sth r30,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r30.u16);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// bl 0x82f2f2c0
	ctx.lr = 0x82EBB420;
	sub_82F2F2C0(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82eba138
	ctx.lr = 0x82EBB42C;
	sub_82EBA138(ctx, base);
	// lwz r27,104(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ebb5ac
	if (ctx.cr0.lt) goto loc_82EBB5AC;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82f305b0
	ctx.lr = 0x82EBB444;
	sub_82F305B0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebb5ac
	if (ctx.cr0.lt) goto loc_82EBB5AC;
	// addi r3,r1,404
	ctx.r3.s64 = ctx.r1.s64 + 404;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82f2f370
	ctx.lr = 0x82EBB458;
	sub_82F2F370(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebb5ac
	if (ctx.cr0.lt) goto loc_82EBB5AC;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ebb584
	if (ctx.cr6.eq) goto loc_82EBB584;
loc_82EBB46C:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,108
	ctx.r8.s64 = ctx.r1.s64 + 108;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,82
	ctx.r5.s64 = ctx.r1.s64 + 82;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82f310b0
	ctx.lr = 0x82EBB48C;
	sub_82F310B0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebb5ac
	if (ctx.cr0.lt) goto loc_82EBB5AC;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r4,260
	ctx.r4.s64 = 260;
	// bl 0x82eb9790
	ctx.lr = 0x82EBB4A4;
	sub_82EB9790(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebb5ac
	if (ctx.cr0.lt) goto loc_82EBB5AC;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,260
	ctx.r4.s64 = 260;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r29,r11,2
	ctx.r29.s64 = ctx.r11.s64 + 2;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// bl 0x82eb9790
	ctx.lr = 0x82EBB4C8;
	sub_82EB9790(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebb5ac
	if (ctx.cr0.lt) goto loc_82EBB5AC;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r3,r1,404
	ctx.r3.s64 = ctx.r1.s64 + 404;
	// lhz r4,82(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// addi r28,r11,2
	ctx.r28.s64 = ctx.r11.s64 + 2;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// bl 0x82f2f370
	ctx.lr = 0x82EBB4E8;
	sub_82F2F370(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebb5ac
	if (ctx.cr0.lt) goto loc_82EBB5AC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,404
	ctx.r3.s64 = ctx.r1.s64 + 404;
	// bl 0x82f2f370
	ctx.lr = 0x82EBB4FC;
	sub_82F2F370(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebb5ac
	if (ctx.cr0.lt) goto loc_82EBB5AC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,404
	ctx.r3.s64 = ctx.r1.s64 + 404;
	// bl 0x82f2e900
	ctx.lr = 0x82EBB514;
	sub_82F2E900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebb5ac
	if (ctx.cr0.lt) goto loc_82EBB5AC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,404
	ctx.r3.s64 = ctx.r1.s64 + 404;
	// bl 0x82f2f370
	ctx.lr = 0x82EBB528;
	sub_82F2F370(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebb5ac
	if (ctx.cr0.lt) goto loc_82EBB5AC;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r3,r1,404
	ctx.r3.s64 = ctx.r1.s64 + 404;
	// bl 0x82f2e900
	ctx.lr = 0x82EBB540;
	sub_82F2E900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebb5ac
	if (ctx.cr0.lt) goto loc_82EBB5AC;
	// addi r3,r1,404
	ctx.r3.s64 = ctx.r1.s64 + 404;
	// lhz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// bl 0x82f2f370
	ctx.lr = 0x82EBB554;
	sub_82F2F370(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebb5ac
	if (ctx.cr0.lt) goto loc_82EBB5AC;
	// addi r3,r1,404
	ctx.r3.s64 = ctx.r1.s64 + 404;
	// lhz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x82f2e900
	ctx.lr = 0x82EBB56C;
	sub_82F2E900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebb5ac
	if (ctx.cr0.lt) goto loc_82EBB5AC;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ebb46c
	if (ctx.cr6.lt) goto loc_82EBB46C;
loc_82EBB584:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r6,416(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// addi r4,r10,-6960
	ctx.r4.s64 = ctx.r10.s64 + -6960;
	// lwz r5,408(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 408);
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBB5A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82EBB5AC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82ebb5c8
	if (ctx.cr6.eq) goto loc_82EBB5C8;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBB5C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EBB5C8:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f2f130
	ctx.lr = 0x82EBB5D0;
	sub_82F2F130(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EBB5DC"))) PPC_WEAK_FUNC(sub_82EBB5DC);
PPC_FUNC_IMPL(__imp__sub_82EBB5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBB5E0"))) PPC_WEAK_FUNC(sub_82EBB5E0);
PPC_FUNC_IMPL(__imp__sub_82EBB5E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82EBB5E8;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,96(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwimi r29,r11,26,1,6
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r11.u32, 26) & 0x7E000000) | (ctx.r29.u64 & 0xFFFFFFFF81FFFFFF);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// mr r24,r30
	ctx.r24.u64 = ctx.r30.u64;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// mr r23,r30
	ctx.r23.u64 = ctx.r30.u64;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82ebb640
	if (!ctx.cr6.eq) goto loc_82EBB640;
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// ori r31,r31,16387
	ctx.r31.u64 = ctx.r31.u64 | 16387;
	// b 0x82ebb9e0
	goto loc_82EBB9E0;
loc_82EBB640:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBB664;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ebb96c
	if (ctx.cr0.lt) goto loc_82EBB96C;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f31db0
	ctx.lr = 0x82EBB684;
	sub_82F31DB0(ctx, base);
	// lis r11,-16371
	ctx.r11.s64 = -1072889856;
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ori r27,r11,14001
	ctx.r27.u64 = ctx.r11.u64 | 14001;
	// bge 0x82ebb69c
	if (!ctx.cr0.lt) goto loc_82EBB69C;
	// cmpw cr6,r31,r27
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x82ebb96c
	if (!ctx.cr6.eq) goto loc_82EBB96C;
loc_82EBB69C:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e8edd0
	ctx.lr = 0x82EBB6B4;
	sub_82E8EDD0(ctx, base);
	// mr. r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne 0x82ebb6c8
	if (!ctx.cr0.eq) goto loc_82EBB6C8;
loc_82EBB6BC:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x82ebb96c
	goto loc_82EBB96C;
loc_82EBB6C8:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82f31db0
	ctx.lr = 0x82EBB6DC;
	sub_82F31DB0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebb96c
	if (ctx.cr0.lt) goto loc_82EBB96C;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f31db8
	ctx.lr = 0x82EBB6FC;
	sub_82F31DB8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x82ebb70c
	if (!ctx.cr0.lt) goto loc_82EBB70C;
	// cmpw cr6,r31,r27
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x82ebb96c
	if (!ctx.cr6.eq) goto loc_82EBB96C;
loc_82EBB70C:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e8edd0
	ctx.lr = 0x82EBB724;
	sub_82E8EDD0(ctx, base);
	// mr. r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq 0x82ebb6bc
	if (ctx.cr0.eq) goto loc_82EBB6BC;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82f31db8
	ctx.lr = 0x82EBB740;
	sub_82F31DB8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebb96c
	if (ctx.cr0.lt) goto loc_82EBB96C;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f314f0
	ctx.lr = 0x82EBB760;
	sub_82F314F0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x82ebb770
	if (!ctx.cr0.lt) goto loc_82EBB770;
	// cmpw cr6,r31,r27
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x82ebb96c
	if (!ctx.cr6.eq) goto loc_82EBB96C;
loc_82EBB770:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e8edd0
	ctx.lr = 0x82EBB788;
	sub_82E8EDD0(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq 0x82ebb6bc
	if (ctx.cr0.eq) goto loc_82EBB6BC;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82f314f0
	ctx.lr = 0x82EBB7A4;
	sub_82F314F0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebb96c
	if (ctx.cr0.lt) goto loc_82EBB96C;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f31dc0
	ctx.lr = 0x82EBB7C4;
	sub_82F31DC0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x82ebb7d4
	if (!ctx.cr0.lt) goto loc_82EBB7D4;
	// cmpw cr6,r31,r27
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x82ebb96c
	if (!ctx.cr6.eq) goto loc_82EBB96C;
loc_82EBB7D4:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e8edd0
	ctx.lr = 0x82EBB7EC;
	sub_82E8EDD0(ctx, base);
	// mr. r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq 0x82ebb6bc
	if (ctx.cr0.eq) goto loc_82EBB6BC;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82f31dc0
	ctx.lr = 0x82EBB808;
	sub_82F31DC0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebb96c
	if (ctx.cr0.lt) goto loc_82EBB96C;
	// rlwinm r11,r29,0,5,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ea4520
	ctx.lr = 0x82EBB830;
	sub_82EA4520(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebb96c
	if (ctx.cr0.lt) goto loc_82EBB96C;
	// lwz r29,96(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r9,r29,0,4,4
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x8000000;
	// lwz r8,108(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r4,r11,-7088
	ctx.r4.s64 = ctx.r11.s64 + -7088;
	// addic r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// lwz r10,100(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 & ctx.r8.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82EBB86C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebb96c
	if (ctx.cr0.lt) goto loc_82EBB96C;
	// rlwinm r11,r29,0,5,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ea4520
	ctx.lr = 0x82EBB894;
	sub_82EA4520(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebb96c
	if (ctx.cr0.lt) goto loc_82EBB96C;
	// lwz r29,96(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r9,r29,0,4,4
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x8000000;
	// lwz r8,108(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r4,r11,-7072
	ctx.r4.s64 = ctx.r11.s64 + -7072;
	// addic r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// lwz r10,100(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 & ctx.r8.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82EBB8D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebb96c
	if (ctx.cr0.lt) goto loc_82EBB96C;
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82ebb90c
	if (ctx.cr6.eq) goto loc_82EBB90C;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r10,-7056
	ctx.r4.s64 = ctx.r10.s64 + -7056;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBB904;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebb96c
	if (ctx.cr0.lt) goto loc_82EBB96C;
loc_82EBB90C:
	// rlwinm r11,r29,0,5,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ea4520
	ctx.lr = 0x82EBB92C;
	sub_82EA4520(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebb96c
	if (ctx.cr0.lt) goto loc_82EBB96C;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// lwz r8,108(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r4,r10,-7040
	ctx.r4.s64 = ctx.r10.s64 + -7040;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r10,100(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 100);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 & ctx.r8.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82EBB968;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82EBB96C:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ebb98c
	if (ctx.cr6.eq) goto loc_82EBB98C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBB988;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
loc_82EBB98C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82ebb99c
	if (ctx.cr6.eq) goto loc_82EBB99C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e8ee18
	ctx.lr = 0x82EBB99C;
	sub_82E8EE18(ctx, base);
loc_82EBB99C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82ebb9ac
	if (ctx.cr6.eq) goto loc_82EBB9AC;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82e8ee18
	ctx.lr = 0x82EBB9AC;
	sub_82E8EE18(ctx, base);
loc_82EBB9AC:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82ebb9bc
	if (ctx.cr6.eq) goto loc_82EBB9BC;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82e8ee18
	ctx.lr = 0x82EBB9BC;
	sub_82E8EE18(ctx, base);
loc_82EBB9BC:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82ebb9cc
	if (ctx.cr6.eq) goto loc_82EBB9CC;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82e8ee18
	ctx.lr = 0x82EBB9CC;
	sub_82E8EE18(ctx, base);
loc_82EBB9CC:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ebb9e0
	if (ctx.cr6.eq) goto loc_82EBB9E0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e81cf8
	ctx.lr = 0x82EBB9E0;
	sub_82E81CF8(ctx, base);
loc_82EBB9E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EBB9EC"))) PPC_WEAK_FUNC(sub_82EBB9EC);
PPC_FUNC_IMPL(__imp__sub_82EBB9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBB9F0"))) PPC_WEAK_FUNC(sub_82EBB9F0);
PPC_FUNC_IMPL(__imp__sub_82EBB9F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82EBB9F8;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// bne cr6,0x82ebba3c
	if (!ctx.cr6.eq) goto loc_82EBBA3C;
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// ori r31,r31,16387
	ctx.r31.u64 = ctx.r31.u64 | 16387;
	// b 0x82ebbd08
	goto loc_82EBBD08;
loc_82EBBA3C:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ebbcb4
	if (ctx.cr6.eq) goto loc_82EBBCB4;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r28,r29,4
	ctx.r28.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ebbaa0
	if (!ctx.cr6.eq) goto loc_82EBBAA0;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r5,r11,28608
	ctx.r5.s64 = ctx.r11.s64 + 28608;
	// addi r4,r10,27952
	ctx.r4.s64 = ctx.r10.s64 + 27952;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// bl 0x82e96e80
	ctx.lr = 0x82EBBA70;
	sub_82E96E80(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebbc6c
	if (ctx.cr0.lt) goto loc_82EBBC6C;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,28544
	ctx.r4.s64 = ctx.r11.s64 + 28544;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBBA98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebbc6c
	if (ctx.cr0.lt) goto loc_82EBBC6C;
loc_82EBBAA0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82eb9b18
	ctx.lr = 0x82EBBAAC;
	sub_82EB9B18(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebbc6c
	if (ctx.cr0.lt) goto loc_82EBBC6C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ebb248
	ctx.lr = 0x82EBBAC0;
	sub_82EBB248(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebbc6c
	if (ctx.cr0.lt) goto loc_82EBBC6C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ebb5e0
	ctx.lr = 0x82EBBAD4;
	sub_82EBB5E0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebbc6c
	if (ctx.cr0.lt) goto loc_82EBBC6C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82eb9ed8
	ctx.lr = 0x82EBBAE8;
	sub_82EB9ED8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebbc6c
	if (ctx.cr0.lt) goto loc_82EBBC6C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82eba880
	ctx.lr = 0x82EBBAFC;
	sub_82EBA880(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebbc6c
	if (ctx.cr0.lt) goto loc_82EBBC6C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ebab60
	ctx.lr = 0x82EBBB10;
	sub_82EBAB60(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebbc6c
	if (ctx.cr0.lt) goto loc_82EBBC6C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ebb3d8
	ctx.lr = 0x82EBBB24;
	sub_82EBB3D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebbc6c
	if (ctx.cr0.lt) goto loc_82EBBC6C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82eba1d0
	ctx.lr = 0x82EBBB38;
	sub_82EBA1D0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebbc6c
	if (ctx.cr0.lt) goto loc_82EBBC6C;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ebad80
	ctx.lr = 0x82EBBB50;
	sub_82EBAD80(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebbc6c
	if (ctx.cr0.lt) goto loc_82EBBC6C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82eba3a0
	ctx.lr = 0x82EBBB64;
	sub_82EBA3A0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebbc6c
	if (ctx.cr0.lt) goto loc_82EBBC6C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBBB84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebbc6c
	if (ctx.cr0.lt) goto loc_82EBBC6C;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ebbc6c
	if (ctx.cr6.eq) goto loc_82EBBC6C;
loc_82EBBB9C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ebbbbc
	if (ctx.cr6.eq) goto loc_82EBBBBC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBBBB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
loc_82EBBBBC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBBBDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebbc6c
	if (ctx.cr0.lt) goto loc_82EBBC6C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBBBFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebbc6c
	if (ctx.cr0.lt) goto loc_82EBBC6C;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r28,r11,16
	ctx.r28.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82eba600
	ctx.lr = 0x82EBBC1C;
	sub_82EBA600(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebbc6c
	if (ctx.cr0.lt) goto loc_82EBBC6C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ebafb8
	ctx.lr = 0x82EBBC34;
	sub_82EBAFB8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebbc6c
	if (ctx.cr0.lt) goto loc_82EBBC6C;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ebb160
	ctx.lr = 0x82EBBC54;
	sub_82EBB160(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebbc6c
	if (ctx.cr0.lt) goto loc_82EBBC6C;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ebbb9c
	if (ctx.cr6.lt) goto loc_82EBBB9C;
loc_82EBBC6C:
	// lis r11,-16371
	ctx.r11.s64 = -1072889856;
	// ori r11,r11,15002
	ctx.r11.u64 = ctx.r11.u64 | 15002;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82ebbcac
	if (ctx.cr6.eq) goto loc_82EBBCAC;
	// lis r11,-16371
	ctx.r11.s64 = -1072889856;
	// ori r11,r11,14001
	ctx.r11.u64 = ctx.r11.u64 | 14001;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82ebbcac
	if (ctx.cr6.eq) goto loc_82EBBCAC;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82ebbcac
	if (ctx.cr6.eq) goto loc_82EBBCAC;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,87
	ctx.r11.u64 = ctx.r11.u64 | 87;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82ebbcc0
	if (!ctx.cr6.eq) goto loc_82EBBCC0;
loc_82EBBCAC:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82EBBCB4:
	// lis r31,-16371
	ctx.r31.s64 = -1072889856;
	// ori r31,r31,16012
	ctx.r31.u64 = ctx.r31.u64 | 16012;
	// b 0x82ebbcc8
	goto loc_82EBBCC8;
loc_82EBBCC0:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82EBBCC8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ebbcec
	if (ctx.cr6.eq) goto loc_82EBBCEC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBBCE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
loc_82EBBCEC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ebbd08
	if (ctx.cr6.eq) goto loc_82EBBD08;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBBD08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EBBD08:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EBBD14"))) PPC_WEAK_FUNC(sub_82EBBD14);
PPC_FUNC_IMPL(__imp__sub_82EBBD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBBD18"))) PPC_WEAK_FUNC(sub_82EBBD18);
PPC_FUNC_IMPL(__imp__sub_82EBBD18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82EBBD20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82f32298
	ctx.lr = 0x82EBBD34;
	sub_82F32298(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// sth r29,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r29.u16);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// addi r11,r11,5280
	ctx.r11.s64 = ctx.r11.s64 + 5280;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82ebbd64
	if (ctx.cr6.eq) goto loc_82EBBD64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBBD64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EBBD64:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EBBD70"))) PPC_WEAK_FUNC(sub_82EBBD70);
PPC_FUNC_IMPL(__imp__sub_82EBBD70) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r11,5280
	ctx.r11.s64 = ctx.r11.s64 + 5280;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82ebbdb4
	if (ctx.cr6.eq) goto loc_82EBBDB4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBBDAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_82EBBDB4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f31e20
	ctx.lr = 0x82EBBDBC;
	sub_82F31E20(ctx, base);
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

__attribute__((alias("__imp__sub_82EBBDD0"))) PPC_WEAK_FUNC(sub_82EBBDD0);
PPC_FUNC_IMPL(__imp__sub_82EBBDD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ebbde8
	if (!ctx.cr6.eq) goto loc_82EBBDE8;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16387
	ctx.r3.u64 = ctx.r3.u64 | 16387;
	// blr 
	return;
loc_82EBBDE8:
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// b 0x82eb8f30
	sub_82EB8F30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EBBDF0"))) PPC_WEAK_FUNC(sub_82EBBDF0);
PPC_FUNC_IMPL(__imp__sub_82EBBDF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ebbe08
	if (!ctx.cr6.eq) goto loc_82EBBE08;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16387
	ctx.r3.u64 = ctx.r3.u64 | 16387;
	// blr 
	return;
loc_82EBBE08:
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// b 0x82eb90e8
	sub_82EB90E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EBBE10"))) PPC_WEAK_FUNC(sub_82EBBE10);
PPC_FUNC_IMPL(__imp__sub_82EBBE10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lhz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// b 0x82eb9480
	sub_82EB9480(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EBBE24"))) PPC_WEAK_FUNC(sub_82EBBE24);
PPC_FUNC_IMPL(__imp__sub_82EBBE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBBE28"))) PPC_WEAK_FUNC(sub_82EBBE28);
PPC_FUNC_IMPL(__imp__sub_82EBBE28) {
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
	// bl 0x82ebbd70
	ctx.lr = 0x82EBBE48;
	sub_82EBBD70(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ebbe60
	if (ctx.cr0.eq) goto loc_82EBBE60;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ebbe60
	if (ctx.cr6.eq) goto loc_82EBBE60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8ee18
	ctx.lr = 0x82EBBE60;
	sub_82E8EE18(ctx, base);
loc_82EBBE60:
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

__attribute__((alias("__imp__sub_82EBBE7C"))) PPC_WEAK_FUNC(sub_82EBBE7C);
PPC_FUNC_IMPL(__imp__sub_82EBBE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBBE80"))) PPC_WEAK_FUNC(sub_82EBBE80);
PPC_FUNC_IMPL(__imp__sub_82EBBE80) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ebbe98
	if (!ctx.cr6.eq) goto loc_82EBBE98;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16387
	ctx.r3.u64 = ctx.r3.u64 | 16387;
	// blr 
	return;
loc_82EBBE98:
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// b 0x82eb8f80
	sub_82EB8F80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EBBEA0"))) PPC_WEAK_FUNC(sub_82EBBEA0);
PPC_FUNC_IMPL(__imp__sub_82EBBEA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ebbec0
	if (!ctx.cr6.eq) goto loc_82EBBEC0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16387
	ctx.r3.u64 = ctx.r3.u64 | 16387;
	// blr 
	return;
loc_82EBBEC0:
	// lhz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// b 0x82eb9810
	sub_82EB9810(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EBBED0"))) PPC_WEAK_FUNC(sub_82EBBED0);
PPC_FUNC_IMPL(__imp__sub_82EBBED0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ebbef0
	if (!ctx.cr6.eq) goto loc_82EBBEF0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16387
	ctx.r3.u64 = ctx.r3.u64 | 16387;
	// blr 
	return;
loc_82EBBEF0:
	// lhz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// b 0x82eb9170
	sub_82EB9170(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EBBF00"))) PPC_WEAK_FUNC(sub_82EBBF00);
PPC_FUNC_IMPL(__imp__sub_82EBBF00) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ebbf1c
	if (!ctx.cr6.eq) goto loc_82EBBF1C;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16387
	ctx.r3.u64 = ctx.r3.u64 | 16387;
	// blr 
	return;
loc_82EBBF1C:
	// lhz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// b 0x82eb95a8
	sub_82EB95A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EBBF28"))) PPC_WEAK_FUNC(sub_82EBBF28);
PPC_FUNC_IMPL(__imp__sub_82EBBF28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82EBBF30;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,65
	ctx.r11.s64 = 65;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82e8e030
	ctx.lr = 0x82EBBF54;
	sub_82E8E030(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82ebbf6c
	if (!ctx.cr0.eq) goto loc_82EBBF6C;
	// lis r28,-32761
	ctx.r28.s64 = -2147024896;
	// ori r28,r28,14
	ctx.r28.u64 = ctx.r28.u64 | 14;
	// b 0x82ebbf7c
	goto loc_82EBBF7C;
loc_82EBBF6C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82EBBF78;
	sub_82FA77C0(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_82EBBF7C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EBBF88"))) PPC_WEAK_FUNC(sub_82EBBF88);
PPC_FUNC_IMPL(__imp__sub_82EBBF88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82EBBF90;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r11,72
	ctx.r11.s64 = 72;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// sth r11,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
	// bl 0x82e8e030
	ctx.lr = 0x82EBBFB0;
	sub_82E8E030(ctx, base);
	// stw r3,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82ebbfc8
	if (!ctx.cr0.eq) goto loc_82EBBFC8;
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// b 0x82ebbfe8
	goto loc_82EBBFE8;
loc_82EBBFC8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
loc_82EBBFE8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EBBFF4"))) PPC_WEAK_FUNC(sub_82EBBFF4);
PPC_FUNC_IMPL(__imp__sub_82EBBFF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBBFF8"))) PPC_WEAK_FUNC(sub_82EBBFF8);
PPC_FUNC_IMPL(__imp__sub_82EBBFF8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBC008"))) PPC_WEAK_FUNC(sub_82EBC008);
PPC_FUNC_IMPL(__imp__sub_82EBC008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82EBC010;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ebc118
	if (ctx.cr0.eq) goto loc_82EBC118;
	// cmplwi cr6,r11,4109
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4109, ctx.xer);
	// beq cr6,0x82ebc0b0
	if (ctx.cr6.eq) goto loc_82EBC0B0;
	// cmplwi cr6,r11,4161
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4161, ctx.xer);
	// beq cr6,0x82ebc044
	if (ctx.cr6.eq) goto loc_82EBC044;
	// bl 0x82e8e518
	ctx.lr = 0x82EBC03C;
	sub_82E8E518(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x82ebc118
	goto loc_82EBC118;
loc_82EBC044:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ebc05c
	if (!ctx.cr6.eq) goto loc_82EBC05C;
loc_82EBC050:
	// lis r27,-32768
	ctx.r27.s64 = -2147483648;
	// ori r27,r27,16387
	ctx.r27.u64 = ctx.r27.u64 | 16387;
	// b 0x82ebc118
	goto loc_82EBC118;
loc_82EBC05C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82ebc098
	if (!ctx.cr6.gt) goto loc_82EBC098;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_82EBC070:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82e8ee18
	ctx.lr = 0x82EBC080;
	sub_82E8EE18(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stw r27,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r27.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bgt cr6,0x82ebc070
	if (ctx.cr6.gt) goto loc_82EBC070;
loc_82EBC098:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82e8ee18
	ctx.lr = 0x82EBC0A0;
	sub_82E8EE18(ctx, base);
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
	// std r27,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r27.u64);
	// std r27,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r27.u64);
	// b 0x82ebc118
	goto loc_82EBC118;
loc_82EBC0B0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ebc050
	if (ctx.cr6.eq) goto loc_82EBC050;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82ebc104
	if (!ctx.cr6.gt) goto loc_82EBC104;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_82EBC0D0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ebc0f0
	if (ctx.cr6.eq) goto loc_82EBC0F0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBC0F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EBC0F0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x82ebc0d0
	if (ctx.cr6.gt) goto loc_82EBC0D0;
loc_82EBC104:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82e8ee18
	ctx.lr = 0x82EBC10C;
	sub_82E8EE18(ctx, base);
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
	// std r27,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r27.u64);
	// std r27,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r27.u64);
loc_82EBC118:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EBC124"))) PPC_WEAK_FUNC(sub_82EBC124);
PPC_FUNC_IMPL(__imp__sub_82EBC124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBC128"))) PPC_WEAK_FUNC(sub_82EBC128);
PPC_FUNC_IMPL(__imp__sub_82EBC128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82EBC130;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82ebc150
	if (!ctx.cr6.eq) goto loc_82EBC150;
loc_82EBC144:
	// lis r27,-32768
	ctx.r27.s64 = -2147483648;
	// ori r27,r27,16387
	ctx.r27.u64 = ctx.r27.u64 | 16387;
	// b 0x82ebc210
	goto loc_82EBC210;
loc_82EBC150:
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82ebc144
	if (ctx.cr6.eq) goto loc_82EBC144;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e8e520
	ctx.lr = 0x82EBC164;
	sub_82E8E520(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bge 0x82ebc210
	if (!ctx.cr0.lt) goto loc_82EBC210;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,4161
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4161, ctx.xer);
	// beq cr6,0x82ebc188
	if (ctx.cr6.eq) goto loc_82EBC188;
	// lis r27,-16371
	ctx.r27.s64 = -1072889856;
	// ori r27,r27,14056
	ctx.r27.u64 = ctx.r27.u64 | 14056;
	// b 0x82ebc210
	goto loc_82EBC210;
loc_82EBC188:
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82e8e030
	ctx.lr = 0x82EBC1A0;
	sub_82E8E030(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ebc208
	if (ctx.cr0.eq) goto loc_82EBC208;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82ebc210
	if (!ctx.cr6.gt) goto loc_82EBC210;
	// addi r30,r11,-8
	ctx.r30.s64 = ctx.r11.s64 + -8;
loc_82EBC1C8:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82e8e030
	ctx.lr = 0x82EBC1D8;
	sub_82E8E030(ctx, base);
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ebc208
	if (ctx.cr0.eq) goto loc_82EBC208;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwzu r5,8(r30)
	ea = 8 + ctx.r30.u32;
	ctx.r5.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x82fa77c0
	ctx.lr = 0x82EBC1F0;
	sub_82FA77C0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bgt cr6,0x82ebc1c8
	if (ctx.cr6.gt) goto loc_82EBC1C8;
	// b 0x82ebc210
	goto loc_82EBC210;
loc_82EBC208:
	// lis r27,-32761
	ctx.r27.s64 = -2147024896;
	// ori r27,r27,14
	ctx.r27.u64 = ctx.r27.u64 | 14;
loc_82EBC210:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EBC21C"))) PPC_WEAK_FUNC(sub_82EBC21C);
PPC_FUNC_IMPL(__imp__sub_82EBC21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBC220"))) PPC_WEAK_FUNC(sub_82EBC220);
PPC_FUNC_IMPL(__imp__sub_82EBC220) {
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
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// bne cr6,0x82ebc258
	if (!ctx.cr6.eq) goto loc_82EBC258;
loc_82EBC24C:
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// ori r30,r30,16387
	ctx.r30.u64 = ctx.r30.u64 | 16387;
	// b 0x82ebc470
	goto loc_82EBC470;
loc_82EBC258:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ebc24c
	if (ctx.cr6.eq) goto loc_82EBC24C;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ebc24c
	if (ctx.cr6.eq) goto loc_82EBC24C;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// rlwinm. r8,r10,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82ebc284
	if (ctx.cr0.eq) goto loc_82EBC284;
	// lis r30,-16371
	ctx.r30.s64 = -1072889856;
	// ori r30,r30,14059
	ctx.r30.u64 = ctx.r30.u64 | 14059;
	// b 0x82ebc470
	goto loc_82EBC470;
loc_82EBC284:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82ebc29c
	if (ctx.cr6.eq) goto loc_82EBC29C;
	// lis r30,-16371
	ctx.r30.s64 = -1072889856;
	// ori r30,r30,14055
	ctx.r30.u64 = ctx.r30.u64 | 14055;
	// b 0x82ebc470
	goto loc_82EBC470;
loc_82EBC29C:
	// clrlwi r10,r10,20
	ctx.r10.u64 = ctx.r10.u32 & 0xFFF;
	// cmplwi cr6,r10,72
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 72, ctx.xer);
	// bgt cr6,0x82ebc468
	if (ctx.cr6.gt) goto loc_82EBC468;
	// lis r12,-32234
	ctx.r12.s64 = -2112487424;
	// addi r12,r12,5352
	ctx.r12.s64 = ctx.r12.s64 + 5352;
	// lbzx r0,r12,r10
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r10.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32020
	ctx.r12.s64 = -2098462720;
	// nop 
	// addi r12,r12,-15664
	ctx.r12.s64 = ctx.r12.s64 + -15664;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82EBC2D0;
	case 1:
		goto loc_82EBC2D0;
	case 2:
		goto loc_82EBC398;
	case 3:
		goto loc_82EBC3B0;
	case 4:
		goto loc_82EBC3F8;
	case 5:
		goto loc_82EBC418;
	case 6:
		goto loc_82EBC3C8;
	case 7:
		goto loc_82EBC418;
	case 8:
		goto loc_82EBC2EC;
	case 9:
		goto loc_82EBC45C;
	case 10:
		goto loc_82EBC3B0;
	case 11:
		goto loc_82EBC338;
	case 12:
		goto loc_82EBC468;
	case 13:
		goto loc_82EBC45C;
	case 14:
		goto loc_82EBC468;
	case 15:
		goto loc_82EBC468;
	case 16:
		goto loc_82EBC34C;
	case 17:
		goto loc_82EBC380;
	case 18:
		goto loc_82EBC3A4;
	case 19:
		goto loc_82EBC3BC;
	case 20:
		goto loc_82EBC3C8;
	case 21:
		goto loc_82EBC3E8;
	case 22:
		goto loc_82EBC3B0;
	case 23:
		goto loc_82EBC3BC;
	case 24:
		goto loc_82EBC468;
	case 25:
		goto loc_82EBC468;
	case 26:
		goto loc_82EBC468;
	case 27:
		goto loc_82EBC468;
	case 28:
		goto loc_82EBC468;
	case 29:
		goto loc_82EBC468;
	case 30:
		goto loc_82EBC2D8;
	case 31:
		goto loc_82EBC2EC;
	case 32:
		goto loc_82EBC468;
	case 33:
		goto loc_82EBC468;
	case 34:
		goto loc_82EBC468;
	case 35:
		goto loc_82EBC468;
	case 36:
		goto loc_82EBC468;
	case 37:
		goto loc_82EBC468;
	case 38:
		goto loc_82EBC468;
	case 39:
		goto loc_82EBC468;
	case 40:
		goto loc_82EBC468;
	case 41:
		goto loc_82EBC468;
	case 42:
		goto loc_82EBC468;
	case 43:
		goto loc_82EBC468;
	case 44:
		goto loc_82EBC468;
	case 45:
		goto loc_82EBC468;
	case 46:
		goto loc_82EBC468;
	case 47:
		goto loc_82EBC468;
	case 48:
		goto loc_82EBC468;
	case 49:
		goto loc_82EBC468;
	case 50:
		goto loc_82EBC468;
	case 51:
		goto loc_82EBC468;
	case 52:
		goto loc_82EBC468;
	case 53:
		goto loc_82EBC468;
	case 54:
		goto loc_82EBC468;
	case 55:
		goto loc_82EBC468;
	case 56:
		goto loc_82EBC468;
	case 57:
		goto loc_82EBC468;
	case 58:
		goto loc_82EBC468;
	case 59:
		goto loc_82EBC468;
	case 60:
		goto loc_82EBC468;
	case 61:
		goto loc_82EBC468;
	case 62:
		goto loc_82EBC468;
	case 63:
		goto loc_82EBC468;
	case 64:
		goto loc_82EBC42C;
	case 65:
		goto loc_82EBC468;
	case 66:
		goto loc_82EBC468;
	case 67:
		goto loc_82EBC468;
	case 68:
		goto loc_82EBC468;
	case 69:
		goto loc_82EBC468;
	case 70:
		goto loc_82EBC468;
	case 71:
		goto loc_82EBC468;
	case 72:
		goto loc_82EBC2FC;
	default:
		__builtin_unreachable();
	}
loc_82EBC2D0:
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// b 0x82ebc470
	goto loc_82EBC470;
loc_82EBC2D8:
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82fa4460
	ctx.lr = 0x82EBC2E4;
	sub_82FA4460(ctx, base);
loc_82EBC2E4:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x82ebc470
	goto loc_82EBC470;
loc_82EBC2EC:
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82fa6640
	ctx.lr = 0x82EBC2F8;
	sub_82FA6640(ctx, base);
	// b 0x82ebc2e4
	goto loc_82EBC2E4;
loc_82EBC2FC:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_82EBC308:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82ebc328
	if (!ctx.cr0.eq) goto loc_82EBC328;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82ebc308
	if (!ctx.cr6.eq) goto loc_82EBC308;
loc_82EBC328:
	// subfic r11,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r9.s64;
loc_82EBC32C:
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_82EBC330:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82ebc470
	goto loc_82EBC470;
loc_82EBC338:
	// lhz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// lhz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
loc_82EBC340:
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// b 0x82ebc32c
	goto loc_82EBC32C;
loc_82EBC34C:
	// lbz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// lbz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
loc_82EBC35C:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82ebc36c
	if (!ctx.cr6.lt) goto loc_82EBC36C;
loc_82EBC364:
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x82ebc330
	goto loc_82EBC330;
loc_82EBC36C:
	// subfc r9,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x82ebc330
	goto loc_82EBC330;
loc_82EBC380:
	// lbz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// lbz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
loc_82EBC388:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82ebc364
	if (ctx.cr6.lt) goto loc_82EBC364;
	// subfc r11,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// b 0x82ebc32c
	goto loc_82EBC32C;
loc_82EBC398:
	// lha r11,8(r11)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r11.u32 + 8));
	// lha r10,8(r3)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 8));
	// b 0x82ebc35c
	goto loc_82EBC35C;
loc_82EBC3A4:
	// lhz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// lhz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// b 0x82ebc388
	goto loc_82EBC388;
loc_82EBC3B0:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x82ebc35c
	goto loc_82EBC35C;
loc_82EBC3BC:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x82ebc388
	goto loc_82EBC388;
loc_82EBC3C8:
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// cmpd cr6,r11,r10
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r10.s64, ctx.xer);
loc_82EBC3D4:
	// blt cr6,0x82ebc364
	if (ctx.cr6.lt) goto loc_82EBC364;
loc_82EBC3D8:
	// li r11,-1
	ctx.r11.s64 = -1;
	// bgt cr6,0x82ebc330
	if (ctx.cr6.gt) goto loc_82EBC330;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82ebc330
	goto loc_82EBC330;
loc_82EBC3E8:
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// b 0x82ebc3d4
	goto loc_82EBC3D4;
loc_82EBC3F8:
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82ebc364
	if (ctx.cr6.lt) goto loc_82EBC364;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// b 0x82ebc3d8
	goto loc_82EBC3D8;
loc_82EBC410:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// b 0x82ebc3d8
	goto loc_82EBC3D8;
loc_82EBC418:
	// lfd f13,8(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// lfd f0,8(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82ebc410
	if (!ctx.cr6.lt) goto loc_82EBC410;
	// b 0x82ebc364
	goto loc_82EBC364;
loc_82EBC42C:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
loc_82EBC438:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82ebc2d0
	if (!ctx.cr0.eq) goto loc_82EBC2D0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82ebc438
	if (!ctx.cr6.eq) goto loc_82EBC438;
	// b 0x82ebc2d0
	goto loc_82EBC2D0;
loc_82EBC45C:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x82ebc340
	goto loc_82EBC340;
loc_82EBC468:
	// lis r30,-16371
	ctx.r30.s64 = -1072889856;
	// ori r30,r30,14056
	ctx.r30.u64 = ctx.r30.u64 | 14056;
loc_82EBC470:
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

__attribute__((alias("__imp__sub_82EBC48C"))) PPC_WEAK_FUNC(sub_82EBC48C);
PPC_FUNC_IMPL(__imp__sub_82EBC48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBC490"))) PPC_WEAK_FUNC(sub_82EBC490);
PPC_FUNC_IMPL(__imp__sub_82EBC490) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82ebc4ac
	if (!ctx.cr6.eq) goto loc_82EBC4AC;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16387
	ctx.r3.u64 = ctx.r3.u64 | 16387;
	// blr 
	return;
loc_82EBC4AC:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82ebc4c0
	if (!ctx.cr0.eq) goto loc_82EBC4C0;
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// blr 
	return;
loc_82EBC4C0:
	// rlwinm. r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82ebc4d0
	if (!ctx.cr0.eq) goto loc_82EBC4D0;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82ebc4d4
	goto loc_82EBC4D4;
loc_82EBC4D0:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_82EBC4D4:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBC4DC"))) PPC_WEAK_FUNC(sub_82EBC4DC);
PPC_FUNC_IMPL(__imp__sub_82EBC4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBC4E0"))) PPC_WEAK_FUNC(sub_82EBC4E0);
PPC_FUNC_IMPL(__imp__sub_82EBC4E0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ebc4fc
	if (!ctx.cr6.eq) goto loc_82EBC4FC;
loc_82EBC4F0:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16387
	ctx.r3.u64 = ctx.r3.u64 | 16387;
	// blr 
	return;
loc_82EBC4FC:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82ebc4f0
	if (ctx.cr6.eq) goto loc_82EBC4F0;
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// clrlwi r10,r11,20
	ctx.r10.u64 = ctx.r11.u32 & 0xFFF;
	// cmplwi cr6,r10,72
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 72, ctx.xer);
	// bgt cr6,0x82ebc580
	if (ctx.cr6.gt) {
		sub_82EBC580(ctx, base);
		return;
	}
	// lis r12,-32234
	ctx.r12.s64 = -2112487424;
	// addi r12,r12,5432
	ctx.r12.s64 = ctx.r12.s64 + 5432;
	// lbzx r0,r12,r10
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r10.u32);
	// lis r12,-32020
	ctx.r12.s64 = -2098462720;
	// nop 
	// addi r12,r12,-15044
	ctx.r12.s64 = ctx.r12.s64 + -15044;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		// ERROR: 0x82EBC53C
		return;
	case 1:
		// ERROR: 0x82EBC53C
		return;
	case 2:
		// ERROR: 0x82EBC550
		return;
	case 3:
		// ERROR: 0x82EBC548
		return;
	case 4:
		// ERROR: 0x82EBC548
		return;
	case 5:
		// ERROR: 0x82EBC560
		return;
	case 6:
		// ERROR: 0x82EBC560
		return;
	case 7:
		// ERROR: 0x82EBC560
		return;
	case 8:
		// ERROR: 0x82EBC548
		return;
	case 9:
		// ERROR: 0x82EBC548
		return;
	case 10:
		// ERROR: 0x82EBC548
		return;
	case 11:
		// ERROR: 0x82EBC550
		return;
	case 12:
		// ERROR: 0x82EBC568
		return;
	case 13:
		// ERROR: 0x82EBC548
		return;
	case 14:
		// ERROR: 0x82EBC580
		return;
	case 15:
		// ERROR: 0x82EBC580
		return;
	case 16:
		// ERROR: 0x82EBC558
		return;
	case 17:
		// ERROR: 0x82EBC558
		return;
	case 18:
		// ERROR: 0x82EBC550
		return;
	case 19:
		// ERROR: 0x82EBC548
		return;
	case 20:
		// ERROR: 0x82EBC560
		return;
	case 21:
		// ERROR: 0x82EBC560
		return;
	case 22:
		// ERROR: 0x82EBC548
		return;
	case 23:
		// ERROR: 0x82EBC548
		return;
	case 24:
		// ERROR: 0x82EBC580
		return;
	case 25:
		// ERROR: 0x82EBC580
		return;
	case 26:
		// ERROR: 0x82EBC580
		return;
	case 27:
		// ERROR: 0x82EBC580
		return;
	case 28:
		// ERROR: 0x82EBC580
		return;
	case 29:
		// ERROR: 0x82EBC580
		return;
	case 30:
		// ERROR: 0x82EBC548
		return;
	case 31:
		// ERROR: 0x82EBC548
		return;
	case 32:
		// ERROR: 0x82EBC580
		return;
	case 33:
		// ERROR: 0x82EBC580
		return;
	case 34:
		// ERROR: 0x82EBC580
		return;
	case 35:
		// ERROR: 0x82EBC580
		return;
	case 36:
		// ERROR: 0x82EBC580
		return;
	case 37:
		// ERROR: 0x82EBC580
		return;
	case 38:
		// ERROR: 0x82EBC580
		return;
	case 39:
		// ERROR: 0x82EBC580
		return;
	case 40:
		// ERROR: 0x82EBC580
		return;
	case 41:
		// ERROR: 0x82EBC580
		return;
	case 42:
		// ERROR: 0x82EBC580
		return;
	case 43:
		// ERROR: 0x82EBC580
		return;
	case 44:
		// ERROR: 0x82EBC580
		return;
	case 45:
		// ERROR: 0x82EBC580
		return;
	case 46:
		// ERROR: 0x82EBC580
		return;
	case 47:
		// ERROR: 0x82EBC580
		return;
	case 48:
		// ERROR: 0x82EBC580
		return;
	case 49:
		// ERROR: 0x82EBC580
		return;
	case 50:
		// ERROR: 0x82EBC580
		return;
	case 51:
		// ERROR: 0x82EBC580
		return;
	case 52:
		// ERROR: 0x82EBC580
		return;
	case 53:
		// ERROR: 0x82EBC580
		return;
	case 54:
		// ERROR: 0x82EBC580
		return;
	case 55:
		// ERROR: 0x82EBC580
		return;
	case 56:
		// ERROR: 0x82EBC580
		return;
	case 57:
		// ERROR: 0x82EBC580
		return;
	case 58:
		// ERROR: 0x82EBC580
		return;
	case 59:
		// ERROR: 0x82EBC580
		return;
	case 60:
		// ERROR: 0x82EBC580
		return;
	case 61:
		// ERROR: 0x82EBC580
		return;
	case 62:
		// ERROR: 0x82EBC580
		return;
	case 63:
		// ERROR: 0x82EBC580
		return;
	case 64:
		// ERROR: 0x82EBC560
		return;
	case 65:
		// ERROR: 0x82EBC560
		return;
	case 66:
		// ERROR: 0x82EBC580
		return;
	case 67:
		// ERROR: 0x82EBC580
		return;
	case 68:
		// ERROR: 0x82EBC580
		return;
	case 69:
		// ERROR: 0x82EBC580
		return;
	case 70:
		// ERROR: 0x82EBC580
		return;
	case 71:
		// ERROR: 0x82EBC580
		return;
	case 72:
		// ERROR: 0x82EBC568
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82EBC53C"))) PPC_WEAK_FUNC(sub_82EBC53C);
PPC_FUNC_IMPL(__imp__sub_82EBC53C) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBC548"))) PPC_WEAK_FUNC(sub_82EBC548);
PPC_FUNC_IMPL(__imp__sub_82EBC548) {
	PPC_FUNC_PROLOGUE();
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82ebc540
	// ERROR 82EBC540
	return;
}

__attribute__((alias("__imp__sub_82EBC550"))) PPC_WEAK_FUNC(sub_82EBC550);
PPC_FUNC_IMPL(__imp__sub_82EBC550) {
	PPC_FUNC_PROLOGUE();
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82ebc540
	// ERROR 82EBC540
	return;
}

__attribute__((alias("__imp__sub_82EBC558"))) PPC_WEAK_FUNC(sub_82EBC558);
PPC_FUNC_IMPL(__imp__sub_82EBC558) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82ebc540
	// ERROR 82EBC540
	return;
}

__attribute__((alias("__imp__sub_82EBC560"))) PPC_WEAK_FUNC(sub_82EBC560);
PPC_FUNC_IMPL(__imp__sub_82EBC560) {
	PPC_FUNC_PROLOGUE();
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x82ebc540
	// ERROR 82EBC540
	return;
}

__attribute__((alias("__imp__sub_82EBC568"))) PPC_WEAK_FUNC(sub_82EBC568);
PPC_FUNC_IMPL(__imp__sub_82EBC568) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x82ebc540
	// ERROR 82EBC540
	return;
}

__attribute__((alias("__imp__sub_82EBC580"))) PPC_WEAK_FUNC(sub_82EBC580);
PPC_FUNC_IMPL(__imp__sub_82EBC580) {
	PPC_FUNC_PROLOGUE();
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14056
	ctx.r3.u64 = ctx.r3.u64 | 14056;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBC58C"))) PPC_WEAK_FUNC(sub_82EBC58C);
PPC_FUNC_IMPL(__imp__sub_82EBC58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBC590"))) PPC_WEAK_FUNC(sub_82EBC590);
PPC_FUNC_IMPL(__imp__sub_82EBC590) {
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
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bne cr6,0x82ebc5c8
	if (!ctx.cr6.eq) goto loc_82EBC5C8;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16387
	ctx.r3.u64 = ctx.r3.u64 | 16387;
	// b 0x82ebc654
	goto loc_82EBC654;
loc_82EBC5C8:
	// lhz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// rlwinm. r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82ebc60c
	if (!ctx.cr0.eq) goto loc_82EBC60C;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82ebc5e8
	if (ctx.cr6.eq) goto loc_82EBC5E8;
loc_82EBC5DC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82ebc654
	goto loc_82EBC654;
loc_82EBC5E8:
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x82ebc604
	if (ctx.cr6.eq) goto loc_82EBC604;
	// cmpwi cr6,r11,72
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 72, ctx.xer);
	// beq cr6,0x82ebc604
	if (ctx.cr6.eq) goto loc_82EBC604;
	// addi r11,r9,8
	ctx.r11.s64 = ctx.r9.s64 + 8;
	// b 0x82ebc650
	goto loc_82EBC650;
loc_82EBC604:
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x82ebc650
	goto loc_82EBC650;
loc_82EBC60C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x82ebc490
	ctx.lr = 0x82EBC618;
	sub_82EBC490(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ebc654
	if (ctx.cr0.lt) goto loc_82EBC654;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82ebc5dc
	if (!ctx.cr6.gt) goto loc_82EBC5DC;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x82ebc4e0
	ctx.lr = 0x82EBC638;
	sub_82EBC4E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ebc654
	if (ctx.cr0.lt) goto loc_82EBC654;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82EBC650:
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_82EBC654:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBC664"))) PPC_WEAK_FUNC(sub_82EBC664);
PPC_FUNC_IMPL(__imp__sub_82EBC664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBC668"))) PPC_WEAK_FUNC(sub_82EBC668);
PPC_FUNC_IMPL(__imp__sub_82EBC668) {
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
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// bne cr6,0x82ebc69c
	if (!ctx.cr6.eq) goto loc_82EBC69C;
loc_82EBC690:
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// ori r30,r30,16387
	ctx.r30.u64 = ctx.r30.u64 | 16387;
	// b 0x82ebc89c
	goto loc_82EBC89C;
loc_82EBC69C:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82ebc690
	if (ctx.cr6.eq) goto loc_82EBC690;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ebc690
	if (ctx.cr6.eq) goto loc_82EBC690;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// clrlwi r10,r10,20
	ctx.r10.u64 = ctx.r10.u32 & 0xFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82ebc6d0
	if (ctx.cr6.eq) goto loc_82EBC6D0;
	// lis r30,-16371
	ctx.r30.s64 = -1072889856;
	// ori r30,r30,14059
	ctx.r30.u64 = ctx.r30.u64 | 14059;
	// b 0x82ebc89c
	goto loc_82EBC89C;
loc_82EBC6D0:
	// cmplwi cr6,r11,72
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 72, ctx.xer);
	// bgt cr6,0x82ebc894
	if (ctx.cr6.gt) goto loc_82EBC894;
	// lis r12,-32234
	ctx.r12.s64 = -2112487424;
	// addi r12,r12,5512
	ctx.r12.s64 = ctx.r12.s64 + 5512;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32020
	ctx.r12.s64 = -2098462720;
	// nop 
	// addi r12,r12,-14592
	ctx.r12.s64 = ctx.r12.s64 + -14592;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82EBC700;
	case 1:
		goto loc_82EBC700;
	case 2:
		goto loc_82EBC7C8;
	case 3:
		goto loc_82EBC7E0;
	case 4:
		goto loc_82EBC828;
	case 5:
		goto loc_82EBC848;
	case 6:
		goto loc_82EBC7F8;
	case 7:
		goto loc_82EBC848;
	case 8:
		goto loc_82EBC71C;
	case 9:
		goto loc_82EBC88C;
	case 10:
		goto loc_82EBC7E0;
	case 11:
		goto loc_82EBC768;
	case 12:
		goto loc_82EBC894;
	case 13:
		goto loc_82EBC88C;
	case 14:
		goto loc_82EBC894;
	case 15:
		goto loc_82EBC894;
	case 16:
		goto loc_82EBC77C;
	case 17:
		goto loc_82EBC7B0;
	case 18:
		goto loc_82EBC7D4;
	case 19:
		goto loc_82EBC7EC;
	case 20:
		goto loc_82EBC7F8;
	case 21:
		goto loc_82EBC818;
	case 22:
		goto loc_82EBC7E0;
	case 23:
		goto loc_82EBC7EC;
	case 24:
		goto loc_82EBC894;
	case 25:
		goto loc_82EBC894;
	case 26:
		goto loc_82EBC894;
	case 27:
		goto loc_82EBC894;
	case 28:
		goto loc_82EBC894;
	case 29:
		goto loc_82EBC894;
	case 30:
		goto loc_82EBC708;
	case 31:
		goto loc_82EBC71C;
	case 32:
		goto loc_82EBC894;
	case 33:
		goto loc_82EBC894;
	case 34:
		goto loc_82EBC894;
	case 35:
		goto loc_82EBC894;
	case 36:
		goto loc_82EBC894;
	case 37:
		goto loc_82EBC894;
	case 38:
		goto loc_82EBC894;
	case 39:
		goto loc_82EBC894;
	case 40:
		goto loc_82EBC894;
	case 41:
		goto loc_82EBC894;
	case 42:
		goto loc_82EBC894;
	case 43:
		goto loc_82EBC894;
	case 44:
		goto loc_82EBC894;
	case 45:
		goto loc_82EBC894;
	case 46:
		goto loc_82EBC894;
	case 47:
		goto loc_82EBC894;
	case 48:
		goto loc_82EBC894;
	case 49:
		goto loc_82EBC894;
	case 50:
		goto loc_82EBC894;
	case 51:
		goto loc_82EBC894;
	case 52:
		goto loc_82EBC894;
	case 53:
		goto loc_82EBC894;
	case 54:
		goto loc_82EBC894;
	case 55:
		goto loc_82EBC894;
	case 56:
		goto loc_82EBC894;
	case 57:
		goto loc_82EBC894;
	case 58:
		goto loc_82EBC894;
	case 59:
		goto loc_82EBC894;
	case 60:
		goto loc_82EBC894;
	case 61:
		goto loc_82EBC894;
	case 62:
		goto loc_82EBC894;
	case 63:
		goto loc_82EBC894;
	case 64:
		goto loc_82EBC85C;
	case 65:
		goto loc_82EBC894;
	case 66:
		goto loc_82EBC894;
	case 67:
		goto loc_82EBC894;
	case 68:
		goto loc_82EBC894;
	case 69:
		goto loc_82EBC894;
	case 70:
		goto loc_82EBC894;
	case 71:
		goto loc_82EBC894;
	case 72:
		goto loc_82EBC72C;
	default:
		__builtin_unreachable();
	}
loc_82EBC700:
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// b 0x82ebc89c
	goto loc_82EBC89C;
loc_82EBC708:
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x82fa4460
	ctx.lr = 0x82EBC714;
	sub_82FA4460(ctx, base);
loc_82EBC714:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x82ebc89c
	goto loc_82EBC89C;
loc_82EBC71C:
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x82fa6640
	ctx.lr = 0x82EBC728;
	sub_82FA6640(ctx, base);
	// b 0x82ebc714
	goto loc_82EBC714;
loc_82EBC72C:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_82EBC738:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82ebc758
	if (!ctx.cr0.eq) goto loc_82EBC758;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82ebc738
	if (!ctx.cr6.eq) goto loc_82EBC738;
loc_82EBC758:
	// subfic r11,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r9.s64;
loc_82EBC75C:
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_82EBC760:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82ebc89c
	goto loc_82EBC89C;
loc_82EBC768:
	// lhz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// lhz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_82EBC774:
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// b 0x82ebc75c
	goto loc_82EBC75C;
loc_82EBC77C:
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// lbz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
loc_82EBC78C:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82ebc79c
	if (!ctx.cr6.lt) goto loc_82EBC79C;
loc_82EBC794:
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x82ebc760
	goto loc_82EBC760;
loc_82EBC79C:
	// subfc r9,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x82ebc760
	goto loc_82EBC760;
loc_82EBC7B0:
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// lbz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
loc_82EBC7B8:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82ebc794
	if (ctx.cr6.lt) goto loc_82EBC794;
	// subfc r11,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// b 0x82ebc75c
	goto loc_82EBC75C;
loc_82EBC7C8:
	// lha r11,0(r5)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r5.u32 + 0));
	// lha r10,0(r6)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r6.u32 + 0));
	// b 0x82ebc78c
	goto loc_82EBC78C;
loc_82EBC7D4:
	// lhz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// lhz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// b 0x82ebc7b8
	goto loc_82EBC7B8;
loc_82EBC7E0:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// b 0x82ebc78c
	goto loc_82EBC78C;
loc_82EBC7EC:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// b 0x82ebc7b8
	goto loc_82EBC7B8;
loc_82EBC7F8:
	// ld r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// ld r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// cmpd cr6,r11,r10
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r10.s64, ctx.xer);
loc_82EBC804:
	// blt cr6,0x82ebc794
	if (ctx.cr6.lt) goto loc_82EBC794;
loc_82EBC808:
	// li r11,-1
	ctx.r11.s64 = -1;
	// bgt cr6,0x82ebc760
	if (ctx.cr6.gt) goto loc_82EBC760;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82ebc760
	goto loc_82EBC760;
loc_82EBC818:
	// ld r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// ld r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// b 0x82ebc804
	goto loc_82EBC804;
loc_82EBC828:
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82ebc794
	if (ctx.cr6.lt) goto loc_82EBC794;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// b 0x82ebc808
	goto loc_82EBC808;
loc_82EBC840:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// b 0x82ebc808
	goto loc_82EBC808;
loc_82EBC848:
	// lfd f13,0(r6)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// lfd f0,0(r5)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82ebc840
	if (!ctx.cr6.lt) goto loc_82EBC840;
	// b 0x82ebc794
	goto loc_82EBC794;
loc_82EBC85C:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r9,r5,8
	ctx.r9.s64 = ctx.r5.s64 + 8;
loc_82EBC864:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// subf. r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82ebc884
	if (!ctx.cr0.eq) goto loc_82EBC884;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82ebc864
	if (!ctx.cr6.eq) goto loc_82EBC864;
loc_82EBC884:
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x82ebc89c
	goto loc_82EBC89C;
loc_82EBC88C:
	// subf r11,r5,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r5.s64;
	// b 0x82ebc774
	goto loc_82EBC774;
loc_82EBC894:
	// lis r30,-16371
	ctx.r30.s64 = -1072889856;
	// ori r30,r30,14056
	ctx.r30.u64 = ctx.r30.u64 | 14056;
loc_82EBC89C:
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

__attribute__((alias("__imp__sub_82EBC8B8"))) PPC_WEAK_FUNC(sub_82EBC8B8);
PPC_FUNC_IMPL(__imp__sub_82EBC8B8) {
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
	// rlwinm r4,r4,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFF;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82ebc8f8
	if (!ctx.cr6.gt) goto loc_82EBC8F8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82ebc90c
	goto loc_82EBC90C;
loc_82EBC8F8:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82e87658
	ctx.lr = 0x82EBC90C;
	sub_82E87658(ctx, base);
loc_82EBC90C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBC91C"))) PPC_WEAK_FUNC(sub_82EBC91C);
PPC_FUNC_IMPL(__imp__sub_82EBC91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBC920"))) PPC_WEAK_FUNC(sub_82EBC920);
PPC_FUNC_IMPL(__imp__sub_82EBC920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82EBC928;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// bne cr6,0x82ebc954
	if (!ctx.cr6.eq) goto loc_82EBC954;
	// lis r26,-32768
	ctx.r26.s64 = -2147483648;
	// ori r26,r26,16387
	ctx.r26.u64 = ctx.r26.u64 | 16387;
	// b 0x82ebca7c
	goto loc_82EBCA7C;
loc_82EBC954:
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ebc96c
	if (ctx.cr0.eq) goto loc_82EBC96C;
	// lis r26,-16371
	ctx.r26.s64 = -1072889856;
	// ori r26,r26,14058
	ctx.r26.u64 = ctx.r26.u64 | 14058;
	// b 0x82ebca7c
	goto loc_82EBCA7C;
loc_82EBC96C:
	// rlwinm. r11,r4,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r4,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r4.u16);
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// beq 0x82ebc988
	if (ctx.cr0.eq) goto loc_82EBC988;
	// lis r26,-16371
	ctx.r26.s64 = -1072889856;
	// ori r26,r26,14059
	ctx.r26.u64 = ctx.r26.u64 | 14059;
	// b 0x82ebca7c
	goto loc_82EBCA7C;
loc_82EBC988:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82ebc9a4
	if (!ctx.cr6.eq) goto loc_82EBC9A4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ebc9a4
	if (ctx.cr6.eq) goto loc_82EBC9A4;
	// lis r26,-32761
	ctx.r26.s64 = -2147024896;
	// ori r26,r26,87
	ctx.r26.u64 = ctx.r26.u64 | 87;
	// b 0x82ebca7c
	goto loc_82EBCA7C;
loc_82EBC9A4:
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// bne cr6,0x82ebc9d8
	if (!ctx.cr6.eq) goto loc_82EBC9D8;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ebc9d8
	if (ctx.cr6.eq) goto loc_82EBC9D8;
loc_82EBC9B8:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lbzx r8,r11,r27
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne 0x82ebc9d4
	if (!ctx.cr0.eq) goto loc_82EBC9D4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ebc9b8
	if (!ctx.cr6.eq) goto loc_82EBC9B8;
	// b 0x82ebc9d8
	goto loc_82EBC9D8;
loc_82EBC9D4:
	// li r9,-1
	ctx.r9.s64 = -1;
loc_82EBC9D8:
	// li r28,31
	ctx.r28.s64 = 31;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bne cr6,0x82ebc9e8
	if (!ctx.cr6.eq) goto loc_82EBC9E8;
	// sth r28,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r28.u16);
loc_82EBC9E8:
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// cmpwi cr6,r11,23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 23, ctx.xer);
	// bgt cr6,0x82ebca90
	if (ctx.cr6.gt) goto loc_82EBCA90;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bge cr6,0x82ebcb00
	if (!ctx.cr6.lt) goto loc_82EBCB00;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x82ebcb24
	if (ctx.cr6.lt) goto loc_82EBCB24;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// ble cr6,0x82ebcb00
	if (!ctx.cr6.gt) goto loc_82EBCB00;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x82ebcb00
	if (ctx.cr6.eq) goto loc_82EBCB00;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x82ebca88
	if (ctx.cr6.eq) goto loc_82EBCA88;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82ebcb00
	if (ctx.cr6.eq) goto loc_82EBCB00;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x82ebcb24
	if (!ctx.cr6.eq) goto loc_82EBCB24;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// bne cr6,0x82ebcb24
	if (!ctx.cr6.eq) goto loc_82EBCB24;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82EBCA3C:
	// li r5,16
	ctx.r5.s64 = 16;
loc_82EBCA40:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82EBCA48;
	sub_82FA77C0(ctx, base);
loc_82EBCA48:
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x82ebca60
	if (ctx.cr6.eq) goto loc_82EBCA60;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// bne cr6,0x82ebca7c
	if (!ctx.cr6.eq) goto loc_82EBCA7C;
loc_82EBCA60:
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ebca7c
	if (ctx.cr6.eq) goto loc_82EBCA7C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBCA7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EBCA7C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
loc_82EBCA88:
	// sth r9,8(r29)
	PPC_STORE_U16(ctx.r29.u32 + 8, ctx.r9.u16);
	// b 0x82ebca48
	goto loc_82EBCA48;
loc_82EBCA90:
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// beq cr6,0x82ebcb84
	if (ctx.cr6.eq) goto loc_82EBCB84;
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// beq cr6,0x82ebcb14
	if (ctx.cr6.eq) goto loc_82EBCB14;
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// beq cr6,0x82ebcb00
	if (ctx.cr6.eq) goto loc_82EBCB00;
	// cmpwi cr6,r11,65
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 65, ctx.xer);
	// beq cr6,0x82ebcae0
	if (ctx.cr6.eq) goto loc_82EBCAE0;
	// cmpwi cr6,r11,72
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 72, ctx.xer);
	// bne cr6,0x82ebcb24
	if (!ctx.cr6.eq) goto loc_82EBCB24;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// bne cr6,0x82ebcb24
	if (!ctx.cr6.eq) goto loc_82EBCB24;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82e8e030
	ctx.lr = 0x82EBCAC8;
	sub_82E8E030(ctx, base);
	// stw r3,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82ebca3c
	if (!ctx.cr0.eq) goto loc_82EBCA3C;
loc_82EBCAD4:
	// lis r26,-32761
	ctx.r26.s64 = -2147024896;
	// ori r26,r26,14
	ctx.r26.u64 = ctx.r26.u64 | 14;
	// b 0x82ebcc04
	goto loc_82EBCC04;
loc_82EBCAE0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8e030
	ctx.lr = 0x82EBCAE8;
	sub_82E8E030(ctx, base);
	// stw r3,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ebcad4
	if (ctx.cr0.eq) goto loc_82EBCAD4;
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// b 0x82ebca40
	goto loc_82EBCA40;
loc_82EBCB00:
	// cmplwi cr6,r31,8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 8, ctx.xer);
	// bgt cr6,0x82ebcb24
	if (ctx.cr6.gt) goto loc_82EBCB24;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// b 0x82ebca40
	goto loc_82EBCA40;
loc_82EBCB14:
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ebcb24
	if (!ctx.cr0.eq) goto loc_82EBCB24;
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// bge cr6,0x82ebcb30
	if (!ctx.cr6.lt) goto loc_82EBCB30;
loc_82EBCB24:
	// lis r26,-32761
	ctx.r26.s64 = -2147024896;
	// ori r26,r26,87
	ctx.r26.u64 = ctx.r26.u64 | 87;
	// b 0x82ebcc04
	goto loc_82EBCC04;
loc_82EBCB30:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8e030
	ctx.lr = 0x82EBCB38;
	sub_82E8E030(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r3.u32);
	// beq 0x82ebcad4
	if (ctx.cr0.eq) goto loc_82EBCAD4;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// sth r26,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r26.u16);
	// rlwinm r4,r31,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82ebcb6c
	if (!ctx.cr6.gt) goto loc_82EBCB6C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82ebcb74
	goto loc_82EBCB74;
loc_82EBCB6C:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x82a99330
	ctx.lr = 0x82EBCB74;
	sub_82A99330(ctx, base);
loc_82EBCB74:
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82ebcc04
	if (ctx.cr6.lt) goto loc_82EBCC04;
	// b 0x82ebcbfc
	goto loc_82EBCBFC;
loc_82EBCB84:
	// rlwinm r30,r31,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e8e030
	ctx.lr = 0x82EBCB90;
	sub_82E8E030(ctx, base);
	// mr. r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r7,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r7.u32);
	// beq 0x82ebcad4
	if (ctx.cr0.eq) goto loc_82EBCAD4;
	// sth r28,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r28.u16);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a77b90
	ctx.lr = 0x82EBCBB8;
	sub_82A77B90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82ebcbf0
	if (!ctx.cr0.eq) goto loc_82EBCBF0;
	// bl 0x82a78478
	ctx.lr = 0x82EBCBC4;
	sub_82A78478(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt 0x82ebcbd4
	if (ctx.cr0.gt) goto loc_82EBCBD4;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// b 0x82ebcbdc
	goto loc_82EBCBDC;
loc_82EBCBD4:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r26,r11,32775
	ctx.r26.u64 = ctx.r11.u64 | 2147942400;
loc_82EBCBDC:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt cr6,0x82ebcc04
	if (ctx.cr6.lt) goto loc_82EBCC04;
	// lis r26,-32768
	ctx.r26.s64 = -2147483648;
	// ori r26,r26,65535
	ctx.r26.u64 = ctx.r26.u64 | 65535;
	// b 0x82ebcc04
	goto loc_82EBCC04;
loc_82EBCBF0:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// sth r26,-2(r11)
	PPC_STORE_U16(ctx.r11.u32 + -2, ctx.r26.u16);
loc_82EBCBFC:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bge cr6,0x82ebca48
	if (!ctx.cr6.lt) goto loc_82EBCA48;
loc_82EBCC04:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ebc008
	ctx.lr = 0x82EBCC0C;
	sub_82EBC008(ctx, base);
	// b 0x82ebca7c
	goto loc_82EBCA7C;
}

__attribute__((alias("__imp__sub_82EBCC10"))) PPC_WEAK_FUNC(sub_82EBCC10);
PPC_FUNC_IMPL(__imp__sub_82EBCC10) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne cr6,0x82ebcc40
	if (!ctx.cr6.eq) goto loc_82EBCC40;
loc_82EBCC34:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16387
	ctx.r3.u64 = ctx.r3.u64 | 16387;
	// b 0x82ebcc78
	goto loc_82EBCC78;
loc_82EBCC40:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ebcc34
	if (ctx.cr6.eq) goto loc_82EBCC34;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82ebcc34
	if (ctx.cr6.eq) goto loc_82EBCC34;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82ebc220
	ctx.lr = 0x82EBCC5C;
	sub_82EBC220(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ebcc78
	if (ctx.cr0.lt) goto loc_82EBCC78;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82EBCC78:
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

__attribute__((alias("__imp__sub_82EBCC8C"))) PPC_WEAK_FUNC(sub_82EBCC8C);
PPC_FUNC_IMPL(__imp__sub_82EBCC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBCC90"))) PPC_WEAK_FUNC(sub_82EBCC90);
PPC_FUNC_IMPL(__imp__sub_82EBCC90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82EBCC98;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ebccc0
	if (ctx.cr0.eq) goto loc_82EBCCC0;
	// lis r29,-16371
	ctx.r29.s64 = -1072889856;
	// ori r29,r29,14058
	ctx.r29.u64 = ctx.r29.u64 | 14058;
	// b 0x82ebcd2c
	goto loc_82EBCD2C;
loc_82EBCCC0:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r5,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// bl 0x82ebc4e0
	ctx.lr = 0x82EBCCDC;
	sub_82EBC4E0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82ebcd2c
	if (ctx.cr0.lt) goto loc_82EBCD2C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mullw r30,r11,r5
	ctx.r30.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// cmplw cr6,r30,r5
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82ebcd00
	if (!ctx.cr6.lt) goto loc_82EBCD00;
	// lis r29,-32768
	ctx.r29.s64 = -2147483648;
	// ori r29,r29,65535
	ctx.r29.u64 = ctx.r29.u64 | 65535;
	// b 0x82ebcd2c
	goto loc_82EBCD2C;
loc_82EBCD00:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e8e030
	ctx.lr = 0x82EBCD08;
	sub_82E8E030(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82ebcd20
	if (!ctx.cr0.eq) goto loc_82EBCD20;
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,14
	ctx.r29.u64 = ctx.r29.u64 | 14;
	// b 0x82ebcd2c
	goto loc_82EBCD2C;
loc_82EBCD20:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fa7cf0
	ctx.lr = 0x82EBCD2C;
	sub_82FA7CF0(ctx, base);
loc_82EBCD2C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EBCD38"))) PPC_WEAK_FUNC(sub_82EBCD38);
PPC_FUNC_IMPL(__imp__sub_82EBCD38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82EBCD40;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r28,r4,16
	ctx.r28.u64 = ctx.r4.u32 & 0xFFFF;
	// sth r4,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r4.u16);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r28,30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 30, ctx.xer);
	// bne cr6,0x82ebcdb0
	if (!ctx.cr6.eq) goto loc_82EBCDB0;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_82EBCD64:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ebcd64
	if (!ctx.cr6.eq) goto loc_82EBCD64;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8e030
	ctx.lr = 0x82EBCD90;
	sub_82E8E030(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82ebcda8
	if (!ctx.cr0.eq) goto loc_82EBCDA8;
loc_82EBCD9C:
	// lis r27,-32761
	ctx.r27.s64 = -2147024896;
	// ori r27,r27,14
	ctx.r27.u64 = ctx.r27.u64 | 14;
	// b 0x82ebcecc
	goto loc_82EBCECC;
loc_82EBCDA8:
	// sth r27,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r27.u16);
	// b 0x82ebcddc
	goto loc_82EBCDDC;
loc_82EBCDB0:
	// cmplwi cr6,r28,31
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 31, ctx.xer);
	// beq cr6,0x82ebcdcc
	if (ctx.cr6.eq) goto loc_82EBCDCC;
	// cmplwi cr6,r28,8
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 8, ctx.xer);
	// beq cr6,0x82ebcdcc
	if (ctx.cr6.eq) goto loc_82EBCDCC;
	// lis r27,-32761
	ctx.r27.s64 = -2147024896;
	// ori r27,r27,87
	ctx.r27.u64 = ctx.r27.u64 | 87;
	// b 0x82ebcecc
	goto loc_82EBCECC;
loc_82EBCDCC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fa3bb8
	ctx.lr = 0x82EBCDD4;
	sub_82FA3BB8(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_82EBCDDC:
	// cmplwi cr6,r28,30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 30, ctx.xer);
	// beq cr6,0x82ebcdec
	if (ctx.cr6.eq) goto loc_82EBCDEC;
	// cmplwi cr6,r28,31
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 31, ctx.xer);
	// bne cr6,0x82ebce04
	if (!ctx.cr6.eq) goto loc_82EBCE04;
loc_82EBCDEC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8e030
	ctx.lr = 0x82EBCDF4;
	sub_82E8E030(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ebcd9c
	if (ctx.cr0.eq) goto loc_82EBCD9C;
	// sth r27,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r27.u16);
loc_82EBCE04:
	// cmplwi cr6,r28,30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 30, ctx.xer);
	// bne cr6,0x82ebce68
	if (!ctx.cr6.eq) goto loc_82EBCE68;
	// li r11,31
	ctx.r11.s64 = 31;
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r8,r31,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFF;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a77b90
	ctx.lr = 0x82EBCE30;
	sub_82A77B90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82ebcecc
	if (!ctx.cr0.eq) goto loc_82EBCECC;
	// bl 0x82a78478
	ctx.lr = 0x82EBCE3C;
	sub_82A78478(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt 0x82ebce4c
	if (ctx.cr0.gt) goto loc_82EBCE4C;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x82ebce54
	goto loc_82EBCE54;
loc_82EBCE4C:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r27,r11,32775
	ctx.r27.u64 = ctx.r11.u64 | 2147942400;
loc_82EBCE54:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt cr6,0x82ebcecc
	if (ctx.cr6.lt) goto loc_82EBCECC;
	// lis r27,-32768
	ctx.r27.s64 = -2147483648;
	// ori r27,r27,65535
	ctx.r27.u64 = ctx.r27.u64 | 65535;
	// b 0x82ebcecc
	goto loc_82EBCECC;
loc_82EBCE68:
	// cmplwi cr6,r28,31
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 31, ctx.xer);
	// bne cr6,0x82ebcea4
	if (!ctx.cr6.eq) goto loc_82EBCEA4;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r4,r31,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFF;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82ebce94
	if (!ctx.cr6.gt) goto loc_82EBCE94;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82ebce9c
	goto loc_82EBCE9C;
loc_82EBCE94:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82a99330
	ctx.lr = 0x82EBCE9C;
	sub_82A99330(ctx, base);
loc_82EBCE9C:
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x82ebcecc
	goto loc_82EBCECC;
loc_82EBCEA4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f1d748
	ctx.lr = 0x82EBCEAC;
	sub_82F1D748(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82ebcecc
	if (!ctx.cr0.eq) goto loc_82EBCECC;
	// bl 0x82a78478
	ctx.lr = 0x82EBCEBC;
	sub_82A78478(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x82ebce9c
	if (!ctx.cr0.gt) goto loc_82EBCE9C;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r27,r11,32775
	ctx.r27.u64 = ctx.r11.u64 | 2147942400;
loc_82EBCECC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EBCED8"))) PPC_WEAK_FUNC(sub_82EBCED8);
PPC_FUNC_IMPL(__imp__sub_82EBCED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x82EBCEE0;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// beq 0x82ebd074
	if (ctx.cr0.eq) goto loc_82EBD074;
	// rlwinm. r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82ebcf1c
	if (!ctx.cr0.eq) goto loc_82EBCF1C;
	// lis r31,-16371
	ctx.r31.s64 = -1072889856;
	// ori r31,r31,14060
	ctx.r31.u64 = ctx.r31.u64 | 14060;
	// b 0x82ebd074
	goto loc_82EBD074;
loc_82EBCF1C:
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// beq cr6,0x82ebcf38
	if (ctx.cr6.eq) goto loc_82EBCF38;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// beq cr6,0x82ebcf38
	if (ctx.cr6.eq) goto loc_82EBCF38;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bne cr6,0x82ebcf44
	if (!ctx.cr6.eq) goto loc_82EBCF44;
loc_82EBCF38:
	// lis r31,-16371
	ctx.r31.s64 = -1072889856;
	// ori r31,r31,14056
	ctx.r31.u64 = ctx.r31.u64 | 14056;
	// b 0x82ebd074
	goto loc_82EBD074;
loc_82EBCF44:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ebc490
	ctx.lr = 0x82EBCF50;
	sub_82EBC490(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebd074
	if (ctx.cr0.lt) goto loc_82EBD074;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ebc4e0
	ctx.lr = 0x82EBCF64;
	sub_82EBC4E0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebd074
	if (ctx.cr0.lt) goto loc_82EBD074;
	// lwz r25,80(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
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
	// bl 0x82e8edd0
	ctx.lr = 0x82EBCF88;
	sub_82E8EDD0(ctx, base);
	// mr. r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne 0x82ebcf9c
	if (!ctx.cr0.eq) goto loc_82EBCF9C;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x82ebd074
	goto loc_82EBD074;
loc_82EBCF9C:
	// lwz r22,84(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82EBCFA0:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// bl 0x82ebc590
	ctx.lr = 0x82EBCFBC;
	sub_82EBC590(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// li r28,1
	ctx.r28.s64 = 1;
	// blt 0x82ebd06c
	if (ctx.cr0.lt) goto loc_82EBD06C;
	// cmplwi cr6,r22,1
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 1, ctx.xer);
	// ble cr6,0x82ebd06c
	if (!ctx.cr6.gt) goto loc_82EBD06C;
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82EBCFD4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ebc590
	ctx.lr = 0x82EBCFE4;
	sub_82EBC590(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebd06c
	if (ctx.cr0.lt) goto loc_82EBD06C;
	// lhz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// clrlwi r4,r11,20
	ctx.r4.u64 = ctx.r11.u32 & 0xFFF;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ebc668
	ctx.lr = 0x82EBD00C;
	sub_82EBC668(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebd06c
	if (ctx.cr0.lt) goto loc_82EBD06C;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82ebd054
	if (!ctx.cr6.gt) goto loc_82EBD054;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82EBD030;
	sub_82FA77C0(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82EBD040;
	sub_82FA77C0(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82EBD050;
	sub_82FA77C0(ctx, base);
	// li r26,1
	ctx.r26.s64 = 1;
loc_82EBD054:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmplw cr6,r22,r28
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r28.u32, ctx.xer);
	// bgt cr6,0x82ebcfd4
	if (ctx.cr6.gt) goto loc_82EBCFD4;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x82ebcfa0
	if (!ctx.cr6.eq) goto loc_82EBCFA0;
loc_82EBD06C:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82e8ee18
	ctx.lr = 0x82EBD074;
	sub_82E8EE18(ctx, base);
loc_82EBD074:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EBD080"))) PPC_WEAK_FUNC(sub_82EBD080);
PPC_FUNC_IMPL(__imp__sub_82EBD080) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne cr6,0x82ebd0b8
	if (!ctx.cr6.eq) goto loc_82EBD0B8;
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// ori r31,r31,16387
	ctx.r31.u64 = ctx.r31.u64 | 16387;
	// b 0x82ebd0f0
	goto loc_82EBD0F0;
loc_82EBD0B8:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82ebc590
	ctx.lr = 0x82EBD0C4;
	sub_82EBC590(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebd0f0
	if (ctx.cr0.lt) goto loc_82EBD0F0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82ebc4e0
	ctx.lr = 0x82EBD0D8;
	sub_82EBC4E0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebd0f0
	if (ctx.cr0.lt) goto loc_82EBD0F0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82fa77c0
	ctx.lr = 0x82EBD0F0;
	sub_82FA77C0(ctx, base);
loc_82EBD0F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82EBD108"))) PPC_WEAK_FUNC(sub_82EBD108);
PPC_FUNC_IMPL(__imp__sub_82EBD108) {
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
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// bne cr6,0x82ebd148
	if (!ctx.cr6.eq) goto loc_82EBD148;
loc_82EBD13C:
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// ori r31,r31,16387
	ctx.r31.u64 = ctx.r31.u64 | 16387;
	// b 0x82ebd1c4
	goto loc_82EBD1C4;
loc_82EBD148:
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82ebd13c
	if (ctx.cr6.eq) goto loc_82EBD13C;
	// std r11,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// std r11,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r11.u64);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82ebc590
	ctx.lr = 0x82EBD164;
	sub_82EBC590(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebd1c4
	if (ctx.cr0.lt) goto loc_82EBD1C4;
	// lhz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bne cr6,0x82ebd190
	if (!ctx.cr6.eq) goto loc_82EBD190;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82EBD18C;
	sub_82FA77C0(ctx, base);
	// b 0x82ebd1c4
	goto loc_82EBD1C4;
loc_82EBD190:
	// cmplwi cr6,r11,72
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 72, ctx.xer);
	// bne cr6,0x82ebd1ac
	if (!ctx.cr6.eq) goto loc_82EBD1AC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,72
	ctx.r10.s64 = 72;
	// sth r10,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, ctx.r10.u16);
	// stw r11,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r11.u32);
	// b 0x82ebd1c4
	goto loc_82EBD1C4;
loc_82EBD1AC:
	// sth r11,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, ctx.r11.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82ebd080
	ctx.lr = 0x82EBD1C0;
	sub_82EBD080(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82EBD1C4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ebc008
	ctx.lr = 0x82EBD1CC;
	sub_82EBC008(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82EBD1E4"))) PPC_WEAK_FUNC(sub_82EBD1E4);
PPC_FUNC_IMPL(__imp__sub_82EBD1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBD1E8"))) PPC_WEAK_FUNC(sub_82EBD1E8);
PPC_FUNC_IMPL(__imp__sub_82EBD1E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82EBD1F0;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r29,r4,16
	ctx.r29.u64 = ctx.r4.u32 & 0xFFFF;
	// li r27,0
	ctx.r27.s64 = 0;
	// clrlwi r11,r4,20
	ctx.r11.u64 = ctx.r4.u32 & 0xFFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ebd224
	if (ctx.cr6.eq) goto loc_82EBD224;
loc_82EBD218:
	// lis r31,-16371
	ctx.r31.s64 = -1072889856;
	// ori r31,r31,14059
	ctx.r31.u64 = ctx.r31.u64 | 14059;
	// b 0x82ebd994
	goto loc_82EBD994;
loc_82EBD224:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// rlwinm. r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82ebd218
	if (!ctx.cr0.eq) goto loc_82EBD218;
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ebd994
	if (ctx.cr6.eq) goto loc_82EBD994;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82eb0790
	ctx.lr = 0x82EBD250;
	sub_82EB0790(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x82ebd994
	if (!ctx.cr0.lt) goto loc_82EBD994;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmpwi cr6,r29,21
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 21, ctx.xer);
	// bgt cr6,0x82ebd504
	if (ctx.cr6.gt) goto loc_82EBD504;
	// beq cr6,0x82ebd818
	if (ctx.cr6.eq) goto loc_82EBD818;
	// cmpwi cr6,r29,11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 11, ctx.xer);
	// bgt cr6,0x82ebd4dc
	if (ctx.cr6.gt) goto loc_82EBD4DC;
	// beq cr6,0x82ebd374
	if (ctx.cr6.eq) goto loc_82EBD374;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// blt cr6,0x82ebd4f8
	if (ctx.cr6.lt) goto loc_82EBD4F8;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// ble cr6,0x82ebd8d0
	if (!ctx.cr6.gt) goto loc_82EBD8D0;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// beq cr6,0x82ebd30c
	if (ctx.cr6.eq) goto loc_82EBD30C;
	// cmpwi cr6,r29,5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 5, ctx.xer);
	// bne cr6,0x82ebd4f8
	if (!ctx.cr6.eq) goto loc_82EBD4F8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// lfd f31,22472(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r10.u32 + 22472);
	// stfd f31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f31.u64);
	// beq cr6,0x82ebd2b4
	if (ctx.cr6.eq) goto loc_82EBD2B4;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// bne cr6,0x82ebd4f8
	if (!ctx.cr6.eq) goto loc_82EBD4F8;
loc_82EBD2B4:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82ebd2cc
	if (!ctx.cr6.eq) goto loc_82EBD2CC;
loc_82EBD2C0:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,87
	ctx.r31.u64 = ctx.r31.u64 | 87;
	// b 0x82ebd994
	goto loc_82EBD994;
loc_82EBD2CC:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5780
	ctx.r4.s64 = ctx.r11.s64 + 5780;
	// bl 0x82fae650
	ctx.lr = 0x82EBD2DC;
	sub_82FAE650(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82ebd2e8
	if (ctx.cr6.eq) goto loc_82EBD2E8;
	// stfd f31,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f31.u64);
loc_82EBD2E8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ebc008
	ctx.lr = 0x82EBD2F0;
	sub_82EBC008(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebd994
	if (ctx.cr0.lt) goto loc_82EBD994;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r11,5
	ctx.r11.s64 = 5;
	// stfd f0,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.f0.u64);
loc_82EBD304:
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// b 0x82ebd990
	goto loc_82EBD990;
loc_82EBD30C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// lfs f31,5184(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// beq cr6,0x82ebd32c
	if (ctx.cr6.eq) goto loc_82EBD32C;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// bne cr6,0x82ebd4f8
	if (!ctx.cr6.eq) goto loc_82EBD4F8;
loc_82EBD32C:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ebd2c0
	if (ctx.cr6.eq) goto loc_82EBD2C0;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-26704
	ctx.r4.s64 = ctx.r11.s64 + -26704;
	// bl 0x82fae650
	ctx.lr = 0x82EBD348;
	sub_82FAE650(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82ebd354
	if (ctx.cr6.eq) goto loc_82EBD354;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_82EBD354:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ebc008
	ctx.lr = 0x82EBD35C;
	sub_82EBC008(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebd994
	if (ctx.cr0.lt) goto loc_82EBD994;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// li r11,4
	ctx.r11.s64 = 4;
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// b 0x82ebd304
	goto loc_82EBD304;
loc_82EBD374:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x82ebd388
	if (ctx.cr6.eq) goto loc_82EBD388;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// bne cr6,0x82ebd4f8
	if (!ctx.cr6.eq) goto loc_82EBD4F8;
loc_82EBD388:
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82ebd2c0
	if (ctx.cr6.eq) goto loc_82EBD2C0;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,5776
	ctx.r3.s64 = ctx.r11.s64 + 5776;
	// bl 0x82fa6640
	ctx.lr = 0x82EBD3A0;
	sub_82FA6640(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ebd4b8
	if (ctx.cr0.eq) goto loc_82EBD4B8;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r11,5768
	ctx.r3.s64 = ctx.r11.s64 + 5768;
	// bl 0x82fa6640
	ctx.lr = 0x82EBD3B8;
	sub_82FA6640(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ebd4b8
	if (ctx.cr0.eq) goto loc_82EBD4B8;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r11,5760
	ctx.r3.s64 = ctx.r11.s64 + 5760;
	// bl 0x82fa6640
	ctx.lr = 0x82EBD3D0;
	sub_82FA6640(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ebd4b8
	if (ctx.cr0.eq) goto loc_82EBD4B8;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r11,5756
	ctx.r3.s64 = ctx.r11.s64 + 5756;
	// bl 0x82fa6640
	ctx.lr = 0x82EBD3E8;
	sub_82FA6640(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ebd4b8
	if (ctx.cr0.eq) goto loc_82EBD4B8;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r11,5744
	ctx.r3.s64 = ctx.r11.s64 + 5744;
	// bl 0x82fa6640
	ctx.lr = 0x82EBD400;
	sub_82FA6640(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ebd4b8
	if (ctx.cr0.eq) goto loc_82EBD4B8;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r11,5740
	ctx.r3.s64 = ctx.r11.s64 + 5740;
	// bl 0x82fa6640
	ctx.lr = 0x82EBD418;
	sub_82FA6640(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ebd4b8
	if (ctx.cr0.eq) goto loc_82EBD4B8;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r11,5736
	ctx.r3.s64 = ctx.r11.s64 + 5736;
	// bl 0x82fa6640
	ctx.lr = 0x82EBD430;
	sub_82FA6640(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ebd4b0
	if (ctx.cr0.eq) goto loc_82EBD4B0;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r11,5728
	ctx.r3.s64 = ctx.r11.s64 + 5728;
	// bl 0x82fa6640
	ctx.lr = 0x82EBD448;
	sub_82FA6640(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ebd4b0
	if (ctx.cr0.eq) goto loc_82EBD4B0;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r11,5720
	ctx.r3.s64 = ctx.r11.s64 + 5720;
	// bl 0x82fa6640
	ctx.lr = 0x82EBD460;
	sub_82FA6640(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ebd4b0
	if (ctx.cr0.eq) goto loc_82EBD4B0;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r11,5716
	ctx.r3.s64 = ctx.r11.s64 + 5716;
	// bl 0x82fa6640
	ctx.lr = 0x82EBD478;
	sub_82FA6640(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ebd4b0
	if (ctx.cr0.eq) goto loc_82EBD4B0;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r11,5704
	ctx.r3.s64 = ctx.r11.s64 + 5704;
	// bl 0x82fa6640
	ctx.lr = 0x82EBD490;
	sub_82FA6640(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ebd4b0
	if (ctx.cr0.eq) goto loc_82EBD4B0;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r11,5700
	ctx.r3.s64 = ctx.r11.s64 + 5700;
	// bl 0x82fa6640
	ctx.lr = 0x82EBD4A8;
	sub_82FA6640(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82ebd2c0
	if (!ctx.cr0.eq) goto loc_82EBD2C0;
loc_82EBD4B0:
	// li r29,-1
	ctx.r29.s64 = -1;
	// b 0x82ebd4bc
	goto loc_82EBD4BC;
loc_82EBD4B8:
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_82EBD4BC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ebc008
	ctx.lr = 0x82EBD4C4;
	sub_82EBC008(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebd994
	if (ctx.cr0.lt) goto loc_82EBD994;
	// li r11,11
	ctx.r11.s64 = 11;
	// sth r29,8(r30)
	PPC_STORE_U16(ctx.r30.u32 + 8, ctx.r29.u16);
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// b 0x82ebd994
	goto loc_82EBD994;
loc_82EBD4DC:
	// cmpwi cr6,r29,16
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 16, ctx.xer);
	// beq cr6,0x82ebd8d0
	if (ctx.cr6.eq) goto loc_82EBD8D0;
	// ble cr6,0x82ebd4f8
	if (!ctx.cr6.gt) goto loc_82EBD4F8;
	// cmpwi cr6,r29,19
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 19, ctx.xer);
	// ble cr6,0x82ebd818
	if (!ctx.cr6.gt) goto loc_82EBD818;
	// cmpwi cr6,r29,20
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 20, ctx.xer);
	// beq cr6,0x82ebd8d0
	if (ctx.cr6.eq) goto loc_82EBD8D0;
loc_82EBD4F8:
	// lis r31,-16371
	ctx.r31.s64 = -1072889856;
	// ori r31,r31,14056
	ctx.r31.u64 = ctx.r31.u64 | 14056;
	// b 0x82ebd994
	goto loc_82EBD994;
loc_82EBD504:
	// cmpwi cr6,r29,22
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 22, ctx.xer);
	// beq cr6,0x82ebd8d0
	if (ctx.cr6.eq) goto loc_82EBD8D0;
	// cmpwi cr6,r29,23
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 23, ctx.xer);
	// beq cr6,0x82ebd818
	if (ctx.cr6.eq) goto loc_82EBD818;
	// cmpwi cr6,r29,31
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 31, ctx.xer);
	// beq cr6,0x82ebd61c
	if (ctx.cr6.eq) goto loc_82EBD61C;
	// cmpwi cr6,r29,64
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 64, ctx.xer);
	// beq cr6,0x82ebd600
	if (ctx.cr6.eq) goto loc_82EBD600;
	// cmpwi cr6,r29,65
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 65, ctx.xer);
	// beq cr6,0x82ebd584
	if (ctx.cr6.eq) goto loc_82EBD584;
	// cmpwi cr6,r29,72
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 72, ctx.xer);
	// bne cr6,0x82ebd4f8
	if (!ctx.cr6.eq) goto loc_82EBD4F8;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x82ebd548
	if (ctx.cr6.eq) goto loc_82EBD548;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// bne cr6,0x82ebd4f8
	if (!ctx.cr6.eq) goto loc_82EBD4F8;
loc_82EBD548:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ebd2c0
	if (ctx.cr6.eq) goto loc_82EBD2C0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82f325b8
	ctx.lr = 0x82EBD55C;
	sub_82F325B8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebd994
	if (ctx.cr0.lt) goto loc_82EBD994;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ebc008
	ctx.lr = 0x82EBD56C;
	sub_82EBC008(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebd994
	if (ctx.cr0.lt) goto loc_82EBD994;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ebbf88
	ctx.lr = 0x82EBD580;
	sub_82EBBF88(ctx, base);
	// b 0x82ebd810
	goto loc_82EBD810;
loc_82EBD584:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// bne cr6,0x82ebd4f8
	if (!ctx.cr6.eq) goto loc_82EBD4F8;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r29,8(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r27,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r27.u64);
	// std r27,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r27.u64);
	// bl 0x82eb9790
	ctx.lr = 0x82EBD5B4;
	sub_82EB9790(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// blt 0x82ebd650
	if (ctx.cr0.lt) goto loc_82EBD650;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,2
	ctx.r5.s64 = ctx.r11.s64 + 2;
	// bl 0x82ebbf28
	ctx.lr = 0x82EBD5D0;
	sub_82EBBF28(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebd5f8
	if (ctx.cr0.lt) goto loc_82EBD5F8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ebc008
	ctx.lr = 0x82EBD5E0;
	sub_82EBC008(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebd5f8
	if (ctx.cr0.lt) goto loc_82EBD5F8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ebc128
	ctx.lr = 0x82EBD5F4;
	sub_82EBC128(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82EBD5F8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// b 0x82ebd650
	goto loc_82EBD650;
loc_82EBD600:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// blt cr6,0x82ebd4f8
	if (ctx.cr6.lt) goto loc_82EBD4F8;
	// cmplwi cr6,r11,21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// bgt cr6,0x82ebd4f8
	if (ctx.cr6.gt) goto loc_82EBD4F8;
	// sth r28,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r28.u16);
	// b 0x82ebd994
	goto loc_82EBD994;
loc_82EBD61C:
	// lhz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 8, ctx.xer);
	// bne cr6,0x82ebd67c
	if (!ctx.cr6.eq) goto loc_82EBD67C;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// std r27,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r27.u64);
	// std r27,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r27.u64);
	// bl 0x82ebcd38
	ctx.lr = 0x82EBD644;
	sub_82EBCD38(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x82ebd658
	if (!ctx.cr0.lt) goto loc_82EBD658;
loc_82EBD64C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
loc_82EBD650:
	// bl 0x82ebc008
	ctx.lr = 0x82EBD654;
	sub_82EBC008(ctx, base);
	// b 0x82ebd994
	goto loc_82EBD994;
loc_82EBD658:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ebc008
	ctx.lr = 0x82EBD660;
	sub_82EBC008(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebd64c
	if (ctx.cr0.lt) goto loc_82EBD64C;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ebc128
	ctx.lr = 0x82EBD674;
	sub_82EBC128(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82ebd64c
	goto loc_82EBD64C;
loc_82EBD67C:
	// cmplwi cr6,r31,65
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 65, ctx.xer);
	// bne cr6,0x82ebd6d4
	if (!ctx.cr6.eq) goto loc_82EBD6D4;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// std r27,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r27.u64);
	// std r27,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r27.u64);
	// bl 0x82ebbf28
	ctx.lr = 0x82EBD6A0;
	sub_82EBBF28(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x82ebd6b0
	if (!ctx.cr0.lt) goto loc_82EBD6B0;
loc_82EBD6A8:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// b 0x82ebd650
	goto loc_82EBD650;
loc_82EBD6B0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ebc008
	ctx.lr = 0x82EBD6B8;
	sub_82EBC008(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebd6a8
	if (ctx.cr0.lt) goto loc_82EBD6A8;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ebc128
	ctx.lr = 0x82EBD6CC;
	sub_82EBC128(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82ebd6a8
	goto loc_82EBD6A8;
loc_82EBD6D4:
	// li r5,100
	ctx.r5.s64 = 100;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82fa7cf0
	ctx.lr = 0x82EBD6E4;
	sub_82FA7CF0(ctx, base);
	// cmplwi cr6,r31,19
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 19, ctx.xer);
	// bgt cr6,0x82ebd788
	if (ctx.cr6.gt) goto loc_82EBD788;
	// beq cr6,0x82ebd778
	if (ctx.cr6.eq) goto loc_82EBD778;
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// beq cr6,0x82ebd768
	if (ctx.cr6.eq) goto loc_82EBD768;
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 3, ctx.xer);
	// beq cr6,0x82ebd758
	if (ctx.cr6.eq) goto loc_82EBD758;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// beq cr6,0x82ebd744
	if (ctx.cr6.eq) goto loc_82EBD744;
	// cmplwi cr6,r31,17
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 17, ctx.xer);
	// beq cr6,0x82ebd734
	if (ctx.cr6.eq) goto loc_82EBD734;
	// cmplwi cr6,r31,18
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 18, ctx.xer);
	// bne cr6,0x82ebd4f8
	if (!ctx.cr6.eq) goto loc_82EBD4F8;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lhz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// addi r5,r11,5692
	ctx.r5.s64 = ctx.r11.s64 + 5692;
loc_82EBD724:
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82ebc8b8
	ctx.lr = 0x82EBD730;
	sub_82EBC8B8(ctx, base);
	// b 0x82ebd7ec
	goto loc_82EBD7EC;
loc_82EBD734:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lbz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// addi r5,r11,5684
	ctx.r5.s64 = ctx.r11.s64 + 5684;
	// b 0x82ebd724
	goto loc_82EBD724;
loc_82EBD744:
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r5,r10,5676
	ctx.r5.s64 = ctx.r10.s64 + 5676;
	// extsb r6,r11
	ctx.r6.s64 = ctx.r11.s8;
	// b 0x82ebd724
	goto loc_82EBD724;
loc_82EBD758:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r5,r11,5668
	ctx.r5.s64 = ctx.r11.s64 + 5668;
	// b 0x82ebd724
	goto loc_82EBD724;
loc_82EBD768:
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lha r6,8(r30)
	ctx.r6.s64 = int16_t(PPC_LOAD_U16(ctx.r30.u32 + 8));
	// addi r5,r10,5660
	ctx.r5.s64 = ctx.r10.s64 + 5660;
	// b 0x82ebd724
	goto loc_82EBD724;
loc_82EBD778:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r5,r11,5652
	ctx.r5.s64 = ctx.r11.s64 + 5652;
	// b 0x82ebd724
	goto loc_82EBD724;
loc_82EBD788:
	// cmplwi cr6,r31,20
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 20, ctx.xer);
	// beq cr6,0x82ebd7d4
	if (ctx.cr6.eq) goto loc_82EBD7D4;
	// cmplwi cr6,r31,21
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 21, ctx.xer);
	// beq cr6,0x82ebd7c8
	if (ctx.cr6.eq) goto loc_82EBD7C8;
	// cmplwi cr6,r31,22
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 22, ctx.xer);
	// beq cr6,0x82ebd7b8
	if (ctx.cr6.eq) goto loc_82EBD7B8;
	// cmplwi cr6,r31,23
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 23, ctx.xer);
	// bne cr6,0x82ebd4f8
	if (!ctx.cr6.eq) goto loc_82EBD4F8;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r5,r11,5644
	ctx.r5.s64 = ctx.r11.s64 + 5644;
	// b 0x82ebd724
	goto loc_82EBD724;
loc_82EBD7B8:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r5,r11,-10716
	ctx.r5.s64 = ctx.r11.s64 + -10716;
	// b 0x82ebd724
	goto loc_82EBD724;
loc_82EBD7C8:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r5,r11,5632
	ctx.r5.s64 = ctx.r11.s64 + 5632;
	// b 0x82ebd7dc
	goto loc_82EBD7DC;
loc_82EBD7D4:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r5,r11,5620
	ctx.r5.s64 = ctx.r11.s64 + 5620;
loc_82EBD7DC:
	// li r4,100
	ctx.r4.s64 = 100;
	// ld r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82ebc8b8
	ctx.lr = 0x82EBD7EC;
	sub_82EBC8B8(ctx, base);
loc_82EBD7EC:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82ebd994
	if (ctx.cr6.lt) goto loc_82EBD994;
	// std r27,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r27.u64);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// std r27,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r27.u64);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ebcd38
	ctx.lr = 0x82EBD810;
	sub_82EBCD38(ctx, base);
loc_82EBD810:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82ebd994
	goto loc_82EBD994;
loc_82EBD818:
	// ld r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// blt cr6,0x82ebd4f8
	if (ctx.cr6.lt) goto loc_82EBD4F8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// ble cr6,0x82ebd864
	if (!ctx.cr6.gt) goto loc_82EBD864;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x82ebd86c
	if (ctx.cr6.eq) goto loc_82EBD86C;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// ble cr6,0x82ebd4f8
	if (!ctx.cr6.gt) goto loc_82EBD4F8;
	// cmplwi cr6,r11,23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 23, ctx.xer);
	// ble cr6,0x82ebd864
	if (!ctx.cr6.gt) goto loc_82EBD864;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// beq cr6,0x82ebd86c
	if (ctx.cr6.eq) goto loc_82EBD86C;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bne cr6,0x82ebd4f8
	if (!ctx.cr6.eq) goto loc_82EBD4F8;
	// cmpwi cr6,r29,21
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 21, ctx.xer);
	// bne cr6,0x82ebd4f8
	if (!ctx.cr6.eq) goto loc_82EBD4F8;
loc_82EBD864:
	// sth r28,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r28.u16);
	// b 0x82ebd8c0
	goto loc_82EBD8C0;
loc_82EBD86C:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82ebd884
	if (!ctx.cr0.eq) goto loc_82EBD884;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// b 0x82ebd8c0
	goto loc_82EBD8C0;
loc_82EBD884:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5632
	ctx.r4.s64 = ctx.r11.s64 + 5632;
	// bl 0x82fae650
	ctx.lr = 0x82EBD894;
	sub_82FAE650(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82ebd8bc
	if (ctx.cr6.eq) goto loc_82EBD8BC;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5604
	ctx.r4.s64 = ctx.r11.s64 + 5604;
	// bl 0x82fae650
	ctx.lr = 0x82EBD8B0;
	sub_82FAE650(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// bne cr6,0x82ebd8c0
	if (!ctx.cr6.eq) goto loc_82EBD8C0;
loc_82EBD8BC:
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_82EBD8C0:
	// std r27,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r27.u64);
	// std r27,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r27.u64);
	// std r10,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r10.u64);
	// b 0x82ebd98c
	goto loc_82EBD98C;
loc_82EBD8D0:
	// ld r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// blt cr6,0x82ebd4f8
	if (ctx.cr6.lt) goto loc_82EBD4F8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// ble cr6,0x82ebd91c
	if (!ctx.cr6.gt) goto loc_82EBD91C;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x82ebd924
	if (ctx.cr6.eq) goto loc_82EBD924;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// ble cr6,0x82ebd4f8
	if (!ctx.cr6.gt) goto loc_82EBD4F8;
	// cmplwi cr6,r11,23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 23, ctx.xer);
	// ble cr6,0x82ebd91c
	if (!ctx.cr6.gt) goto loc_82EBD91C;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// beq cr6,0x82ebd924
	if (ctx.cr6.eq) goto loc_82EBD924;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bne cr6,0x82ebd4f8
	if (!ctx.cr6.eq) goto loc_82EBD4F8;
	// cmpwi cr6,r29,20
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 20, ctx.xer);
	// bne cr6,0x82ebd4f8
	if (!ctx.cr6.eq) goto loc_82EBD4F8;
loc_82EBD91C:
	// sth r28,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r28.u16);
	// b 0x82ebd974
	goto loc_82EBD974;
loc_82EBD924:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82ebd93c
	if (!ctx.cr0.eq) goto loc_82EBD93C;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// b 0x82ebd974
	goto loc_82EBD974;
loc_82EBD93C:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5620
	ctx.r4.s64 = ctx.r11.s64 + 5620;
	// bl 0x82fae650
	ctx.lr = 0x82EBD94C;
	sub_82FAE650(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82ebd974
	if (ctx.cr6.eq) goto loc_82EBD974;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5588
	ctx.r4.s64 = ctx.r11.s64 + 5588;
	// bl 0x82fae650
	ctx.lr = 0x82EBD968;
	sub_82FAE650(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82ebd974
	if (ctx.cr6.eq) goto loc_82EBD974;
	// std r27,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r27.u64);
loc_82EBD974:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ebc008
	ctx.lr = 0x82EBD97C;
	sub_82EBC008(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebd994
	if (ctx.cr0.lt) goto loc_82EBD994;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r11.u64);
loc_82EBD98C:
	// sth r28,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r28.u16);
loc_82EBD990:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_82EBD994:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EBD9A4"))) PPC_WEAK_FUNC(sub_82EBD9A4);
PPC_FUNC_IMPL(__imp__sub_82EBD9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBD9A8"))) PPC_WEAK_FUNC(sub_82EBD9A8);
PPC_FUNC_IMPL(__imp__sub_82EBD9A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82EBD9B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm. r9,r11,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// std r29,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r29.u64);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// std r29,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r29.u64);
	// beq 0x82ebd9e8
	if (ctx.cr0.eq) goto loc_82EBD9E8;
	// lis r31,-16371
	ctx.r31.s64 = -1072889856;
	// ori r31,r31,14059
	ctx.r31.u64 = ctx.r31.u64 | 14059;
	// b 0x82ebdab4
	goto loc_82EBDAB4;
loc_82EBD9E8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ebd9fc
	if (!ctx.cr6.eq) goto loc_82EBD9FC;
	// lis r31,-16371
	ctx.r31.s64 = -1072889856;
	// ori r31,r31,14057
	ctx.r31.u64 = ctx.r31.u64 | 14057;
	// b 0x82ebdab4
	goto loc_82EBDAB4;
loc_82EBD9FC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ebc128
	ctx.lr = 0x82EBDA08;
	sub_82EBC128(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebdab4
	if (ctx.cr0.lt) goto loc_82EBDAB4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ebc008
	ctx.lr = 0x82EBDA18;
	sub_82EBC008(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebdab4
	if (ctx.cr0.lt) goto loc_82EBDAB4;
	// lhz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwimi r10,r11,12,0,19
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0xFFFFF000) | (ctx.r10.u64 & 0xFFFFFFFF00000FFF);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sth r10,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r10.u16);
	// bl 0x82ebc4e0
	ctx.lr = 0x82EBDA40;
	sub_82EBC4E0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebdab4
	if (ctx.cr0.lt) goto loc_82EBDAB4;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8e030
	ctx.lr = 0x82EBDA54;
	sub_82E8E030(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82ebda6c
	if (!ctx.cr0.eq) goto loc_82EBDA6C;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x82ebdab4
	goto loc_82EBDAB4;
loc_82EBDA6C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fa7cf0
	ctx.lr = 0x82EBDA78;
	sub_82FA7CF0(ctx, base);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ebc590
	ctx.lr = 0x82EBDA88;
	sub_82EBC590(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebdab4
	if (ctx.cr0.lt) goto loc_82EBDAB4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ebd080
	ctx.lr = 0x82EBDAA0;
	sub_82EBD080(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebdab4
	if (ctx.cr0.lt) goto loc_82EBDAB4;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// std r29,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r29.u64);
	// std r29,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r29.u64);
loc_82EBDAB4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ebc008
	ctx.lr = 0x82EBDABC;
	sub_82EBC008(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EBDAC8"))) PPC_WEAK_FUNC(sub_82EBDAC8);
PPC_FUNC_IMPL(__imp__sub_82EBDAC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82EBDAD0;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lhz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// std r25,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r25.u64);
	// rlwinm. r10,r9,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// std r25,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r25.u64);
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// bne 0x82ebdb1c
	if (!ctx.cr0.eq) goto loc_82EBDB1C;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82ebdb1c
	if (ctx.cr6.eq) goto loc_82EBDB1C;
	// lis r30,-16371
	ctx.r30.s64 = -1072889856;
	// ori r30,r30,14060
	ctx.r30.u64 = ctx.r30.u64 | 14060;
	// b 0x82ebdcbc
	goto loc_82EBDCBC;
loc_82EBDB1C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ebc490
	ctx.lr = 0x82EBDB28;
	sub_82EBC490(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82ebdcbc
	if (ctx.cr0.lt) goto loc_82EBDCBC;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x82ebdb44
	if (!ctx.cr6.eq) goto loc_82EBDB44;
loc_82EBDB38:
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// ori r30,r30,16387
	ctx.r30.u64 = ctx.r30.u64 | 16387;
	// b 0x82ebdcbc
	goto loc_82EBDCBC;
loc_82EBDB44:
	// cmplw cr6,r31,r24
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x82ebdb38
	if (ctx.cr6.eq) goto loc_82EBDB38;
	// lhz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ebdb84
	if (ctx.cr0.eq) goto loc_82EBDB84;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82ebdb78
	if (ctx.cr6.eq) goto loc_82EBDB78;
	// clrlwi r10,r9,20
	ctx.r10.u64 = ctx.r9.u32 & 0xFFF;
	// cmplwi cr6,r10,12
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 12, ctx.xer);
	// beq cr6,0x82ebdb78
	if (ctx.cr6.eq) goto loc_82EBDB78;
	// clrlwi r8,r11,20
	ctx.r8.u64 = ctx.r11.u32 & 0xFFF;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ebdb84
	if (!ctx.cr6.eq) goto loc_82EBDB84;
loc_82EBDB78:
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r26,r28
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x82ebdb90
	if (!ctx.cr6.lt) goto loc_82EBDB90;
loc_82EBDB84:
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,87
	ctx.r30.u64 = ctx.r30.u64 | 87;
	// b 0x82ebdcbc
	goto loc_82EBDCBC;
loc_82EBDB90:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82ebdbac
	if (!ctx.cr6.eq) goto loc_82EBDBAC;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r25,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r25.u32);
	// stw r25,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r25.u32);
	// rlwimi r11,r10,12,0,19
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0xFFFFF000) | (ctx.r11.u64 & 0xFFFFFFFF00000FFF);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
loc_82EBDBAC:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ebc4e0
	ctx.lr = 0x82EBDBB8;
	sub_82EBC4E0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82ebdcbc
	if (ctx.cr0.lt) goto loc_82EBDCBC;
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// mullw r27,r11,r30
	ctx.r27.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e8e030
	ctx.lr = 0x82EBDBD4;
	sub_82E8E030(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82ebdbe8
	if (!ctx.cr0.eq) goto loc_82EBDBE8;
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// b 0x82ebdcbc
	goto loc_82EBDCBC;
loc_82EBDBE8:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82EBDBF8;
	sub_82FA7CF0(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82ebdc10
	if (ctx.cr6.eq) goto loc_82EBDC10;
	// mullw r5,r30,r28
	ctx.r5.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r28.s32);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82EBDC10;
	sub_82FA77C0(ctx, base);
loc_82EBDC10:
	// cmplw cr6,r26,r28
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r28.u32, ctx.xer);
	// ble cr6,0x82ebdc3c
	if (!ctx.cr6.gt) goto loc_82EBDC3C;
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mullw r9,r30,r28
	ctx.r9.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r28.s32);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// subf r8,r28,r26
	ctx.r8.s64 = ctx.r26.s64 - ctx.r28.s64;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mullw r5,r8,r30
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r30.s32);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82EBDC3C;
	sub_82FA77C0(ctx, base);
loc_82EBDC3C:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82e8ee18
	ctx.lr = 0x82EBDC44;
	sub_82E8EE18(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82ebc128
	ctx.lr = 0x82EBDC60;
	sub_82EBC128(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82ebdcbc
	if (ctx.cr0.lt) goto loc_82EBDCBC;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bne cr6,0x82ebdc80
	if (!ctx.cr6.eq) goto loc_82EBDC80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// b 0x82ebdc9c
	goto loc_82EBDC9C;
loc_82EBDC80:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ebc590
	ctx.lr = 0x82EBDC90;
	sub_82EBC590(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82ebdcbc
	if (ctx.cr0.lt) goto loc_82EBDCBC;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_82EBDC9C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ebd080
	ctx.lr = 0x82EBDCA8;
	sub_82EBD080(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82ebdcbc
	if (ctx.cr0.lt) goto loc_82EBDCBC;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// std r25,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r25.u64);
	// std r25,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r25.u64);
loc_82EBDCBC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82e8ee18
	ctx.lr = 0x82EBDCC4;
	sub_82E8EE18(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ebc008
	ctx.lr = 0x82EBDCCC;
	sub_82EBC008(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EBDCD8"))) PPC_WEAK_FUNC(sub_82EBDCD8);
PPC_FUNC_IMPL(__imp__sub_82EBDCD8) {
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
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// rlwinm. r8,r11,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82ebdd14
	if (!ctx.cr0.eq) goto loc_82EBDD14;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ebdd14
	if (ctx.cr6.eq) goto loc_82EBDD14;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14060
	ctx.r3.u64 = ctx.r3.u64 | 14060;
	// b 0x82ebdd34
	goto loc_82EBDD34;
loc_82EBDD14:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x82ebc490
	ctx.lr = 0x82EBDD20;
	sub_82EBC490(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ebdd34
	if (ctx.cr0.lt) goto loc_82EBDD34;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82ebdac8
	ctx.lr = 0x82EBDD34;
	sub_82EBDAC8(ctx, base);
loc_82EBDD34:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBDD44"))) PPC_WEAK_FUNC(sub_82EBDD44);
PPC_FUNC_IMPL(__imp__sub_82EBDD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBDD48"))) PPC_WEAK_FUNC(sub_82EBDD48);
PPC_FUNC_IMPL(__imp__sub_82EBDD48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82EBDD50;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// rlwinm. r9,r11,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// std r31,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r31.u64);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// std r31,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r31.u64);
	// bne 0x82ebdd98
	if (!ctx.cr0.eq) goto loc_82EBDD98;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ebdd98
	if (ctx.cr6.eq) goto loc_82EBDD98;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14060
	ctx.r3.u64 = ctx.r3.u64 | 14060;
	// b 0x82ebde74
	goto loc_82EBDE74;
loc_82EBDD98:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82ebddac
	if (!ctx.cr6.eq) goto loc_82EBDDAC;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16387
	ctx.r3.u64 = ctx.r3.u64 | 16387;
	// b 0x82ebde74
	goto loc_82EBDE74;
loc_82EBDDAC:
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82ebdde0
	if (ctx.cr6.eq) goto loc_82EBDDE0;
	// lhz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82ebdde0
	if (ctx.cr0.eq) goto loc_82EBDDE0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ebddec
	if (ctx.cr6.eq) goto loc_82EBDDEC;
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// beq cr6,0x82ebddec
	if (ctx.cr6.eq) goto loc_82EBDDEC;
	// clrlwi r10,r10,20
	ctx.r10.u64 = ctx.r10.u32 & 0xFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ebddec
	if (ctx.cr6.eq) goto loc_82EBDDEC;
loc_82EBDDE0:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82ebde74
	goto loc_82EBDE74;
loc_82EBDDEC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ebc490
	ctx.lr = 0x82EBDDF8;
	sub_82EBC490(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ebde74
	if (ctx.cr0.lt) goto loc_82EBDE74;
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82ebde68
	if (ctx.cr6.eq) goto loc_82EBDE68;
loc_82EBDE0C:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r31,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r31.u64);
	// std r31,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r31.u64);
	// bl 0x82ebd108
	ctx.lr = 0x82EBDE28;
	sub_82EBD108(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ebde74
	if (ctx.cr0.lt) goto loc_82EBDE74;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ebcc10
	ctx.lr = 0x82EBDE40;
	sub_82EBCC10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ebde74
	if (ctx.cr0.lt) goto loc_82EBDE74;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ebde60
	if (!ctx.cr6.eq) goto loc_82EBDE60;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x82ebde0c
	if (ctx.cr6.gt) goto loc_82EBDE0C;
loc_82EBDE60:
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x82ebde74
	if (ctx.cr6.gt) goto loc_82EBDE74;
loc_82EBDE68:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ebdcd8
	ctx.lr = 0x82EBDE74;
	sub_82EBDCD8(ctx, base);
loc_82EBDE74:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EBDE7C"))) PPC_WEAK_FUNC(sub_82EBDE7C);
PPC_FUNC_IMPL(__imp__sub_82EBDE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBDE80"))) PPC_WEAK_FUNC(sub_82EBDE80);
PPC_FUNC_IMPL(__imp__sub_82EBDE80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82EBDE88;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// std r28,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r28.u64);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// std r28,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r28.u64);
	// bne 0x82ebdec4
	if (!ctx.cr0.eq) goto loc_82EBDEC4;
	// lis r31,-16371
	ctx.r31.s64 = -1072889856;
	// ori r31,r31,14057
	ctx.r31.u64 = ctx.r31.u64 | 14057;
	// b 0x82ebdfd0
	goto loc_82EBDFD0;
loc_82EBDEC4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82ebded8
	if (!ctx.cr6.eq) goto loc_82EBDED8;
loc_82EBDECC:
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// ori r31,r31,16387
	ctx.r31.u64 = ctx.r31.u64 | 16387;
	// b 0x82ebdfd0
	goto loc_82EBDFD0;
loc_82EBDED8:
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82ebdecc
	if (ctx.cr6.eq) goto loc_82EBDECC;
	// lhz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82ebdf04
	if (ctx.cr0.eq) goto loc_82EBDF04;
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// beq cr6,0x82ebdf10
	if (ctx.cr6.eq) goto loc_82EBDF10;
	// clrlwi r10,r10,20
	ctx.r10.u64 = ctx.r10.u32 & 0xFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ebdf10
	if (ctx.cr6.eq) goto loc_82EBDF10;
loc_82EBDF04:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,87
	ctx.r31.u64 = ctx.r31.u64 | 87;
	// b 0x82ebdfd0
	goto loc_82EBDFD0;
loc_82EBDF10:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ebd108
	ctx.lr = 0x82EBDF20;
	sub_82EBD108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebdfd0
	if (ctx.cr0.lt) goto loc_82EBDFD0;
	// lhz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bne cr6,0x82ebdf48
	if (!ctx.cr6.eq) goto loc_82EBDF48;
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x82ebc008
	ctx.lr = 0x82EBDF40;
	sub_82EBC008(ctx, base);
	// sth r28,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r28.u16);
	// b 0x82ebdf60
	goto loc_82EBDF60;
loc_82EBDF48:
	// cmplwi cr6,r11,72
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 72, ctx.xer);
	// bne cr6,0x82ebdf58
	if (!ctx.cr6.eq) goto loc_82EBDF58;
	// sth r28,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r28.u16);
	// b 0x82ebdf68
	goto loc_82EBDF68;
loc_82EBDF58:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ebc008
	ctx.lr = 0x82EBDF60;
	sub_82EBC008(ctx, base);
loc_82EBDF60:
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebdfd0
	if (ctx.cr0.lt) goto loc_82EBDFD0;
loc_82EBDF68:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ebc128
	ctx.lr = 0x82EBDF74;
	sub_82EBC128(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebdfd0
	if (ctx.cr0.lt) goto loc_82EBDFD0;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bne cr6,0x82ebdf94
	if (!ctx.cr6.eq) goto loc_82EBDF94;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// b 0x82ebdfb0
	goto loc_82EBDFB0;
loc_82EBDF94:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ebc590
	ctx.lr = 0x82EBDFA4;
	sub_82EBC590(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebdfd0
	if (ctx.cr0.lt) goto loc_82EBDFD0;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82EBDFB0:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ebd080
	ctx.lr = 0x82EBDFBC;
	sub_82EBD080(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebdfd0
	if (ctx.cr0.lt) goto loc_82EBDFD0;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// std r28,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r28.u64);
	// std r28,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r28.u64);
loc_82EBDFD0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ebc008
	ctx.lr = 0x82EBDFD8;
	sub_82EBC008(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EBDFE4"))) PPC_WEAK_FUNC(sub_82EBDFE4);
PPC_FUNC_IMPL(__imp__sub_82EBDFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBDFE8"))) PPC_WEAK_FUNC(sub_82EBDFE8);
PPC_FUNC_IMPL(__imp__sub_82EBDFE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82EBDFF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// std r29,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r29.u64);
	// std r29,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r29.u64);
	// bne 0x82ebe020
	if (!ctx.cr0.eq) goto loc_82EBE020;
	// lis r31,-16371
	ctx.r31.s64 = -1072889856;
	// ori r31,r31,14057
	ctx.r31.u64 = ctx.r31.u64 | 14057;
	// b 0x82ebe06c
	goto loc_82EBE06C;
loc_82EBE020:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82ebe034
	if (!ctx.cr6.eq) goto loc_82EBE034;
loc_82EBE028:
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// ori r31,r31,16387
	ctx.r31.u64 = ctx.r31.u64 | 16387;
	// b 0x82ebe06c
	goto loc_82EBE06C;
loc_82EBE034:
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82ebe028
	if (ctx.cr6.eq) goto loc_82EBE028;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82ebd108
	ctx.lr = 0x82EBE044;
	sub_82EBD108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebe06c
	if (ctx.cr0.lt) goto loc_82EBE06C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ebc128
	ctx.lr = 0x82EBE058;
	sub_82EBC128(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebe06c
	if (ctx.cr0.lt) goto loc_82EBE06C;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// std r29,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r29.u64);
	// std r29,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r29.u64);
loc_82EBE06C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ebc008
	ctx.lr = 0x82EBE074;
	sub_82EBC008(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EBE080"))) PPC_WEAK_FUNC(sub_82EBE080);
PPC_FUNC_IMPL(__imp__sub_82EBE080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82EBE088;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm. r10,r11,20,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// std r29,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r29.u64);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// std r29,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r29.u64);
	// beq 0x82ebe0c0
	if (ctx.cr0.eq) goto loc_82EBE0C0;
	// clrlwi r9,r11,20
	ctx.r9.u64 = ctx.r11.u32 & 0xFFF;
	// cmplwi cr6,r9,12
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 12, ctx.xer);
	// beq cr6,0x82ebe20c
	if (ctx.cr6.eq) goto loc_82EBE20C;
loc_82EBE0C0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ebe100
	if (!ctx.cr6.eq) goto loc_82EBE100;
	// li r11,4108
	ctx.r11.s64 = 4108;
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// bl 0x82e8e030
	ctx.lr = 0x82EBE0DC;
	sub_82E8E030(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82ebe0f4
	if (!ctx.cr0.eq) goto loc_82EBE0F4;
loc_82EBE0E8:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x82ebe20c
	goto loc_82EBE20C;
loc_82EBE0F4:
	// std r29,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r29.u64);
	// std r29,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r29.u64);
	// b 0x82ebe20c
	goto loc_82EBE20C;
loc_82EBE100:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// beq cr6,0x82ebe1a4
	if (ctx.cr6.eq) goto loc_82EBE1A4;
	// bl 0x82ebc128
	ctx.lr = 0x82EBE114;
	sub_82EBC128(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ebc008
	ctx.lr = 0x82EBE11C;
	sub_82EBC008(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebe20c
	if (ctx.cr0.lt) goto loc_82EBE20C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ebc490
	ctx.lr = 0x82EBE130;
	sub_82EBC490(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebe20c
	if (ctx.cr0.lt) goto loc_82EBE20C;
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82ebcc90
	ctx.lr = 0x82EBE14C;
	sub_82EBCC90(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebe20c
	if (ctx.cr0.lt) goto loc_82EBE20C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82ebe198
	if (ctx.cr6.eq) goto loc_82EBE198;
loc_82EBE15C:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ebd108
	ctx.lr = 0x82EBE16C;
	sub_82EBD108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebe20c
	if (ctx.cr0.lt) goto loc_82EBE20C;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ebde80
	ctx.lr = 0x82EBE184;
	sub_82EBDE80(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebe20c
	if (ctx.cr0.lt) goto loc_82EBE20C;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x82ebe15c
	if (ctx.cr6.gt) goto loc_82EBE15C;
loc_82EBE198:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ebc008
	ctx.lr = 0x82EBE1A0;
	sub_82EBC008(ctx, base);
	// b 0x82ebe20c
	goto loc_82EBE20C;
loc_82EBE1A4:
	// bl 0x82ebc128
	ctx.lr = 0x82EBE1A8;
	sub_82EBC128(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebe20c
	if (ctx.cr0.lt) goto loc_82EBE20C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ebc008
	ctx.lr = 0x82EBE1B8;
	sub_82EBC008(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebe20c
	if (ctx.cr0.lt) goto loc_82EBE20C;
	// li r11,4108
	ctx.r11.s64 = 4108;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// bl 0x82e8e030
	ctx.lr = 0x82EBE1D8;
	sub_82E8E030(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ebe0e8
	if (ctx.cr0.eq) goto loc_82EBE0E8;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fa7cf0
	ctx.lr = 0x82EBE1F0;
	sub_82FA7CF0(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ebd080
	ctx.lr = 0x82EBE200;
	sub_82EBD080(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ebe20c
	if (ctx.cr0.lt) goto loc_82EBE20C;
	// sth r29,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r29.u16);
loc_82EBE20C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ebc008
	ctx.lr = 0x82EBE214;
	sub_82EBC008(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EBE220"))) PPC_WEAK_FUNC(sub_82EBE220);
PPC_FUNC_IMPL(__imp__sub_82EBE220) {
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
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r8,r5,r6
	ctx.r8.u64 = ctx.r5.u64 + ctx.r6.u64;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82ebe250
	if (!ctx.cr6.gt) goto loc_82EBE250;
	// subf r31,r5,r10
	ctx.r31.s64 = ctx.r10.s64 - ctx.r5.s64;
loc_82EBE250:
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82EBE264;
	sub_82FA77C0(ctx, base);
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

__attribute__((alias("__imp__sub_82EBE27C"))) PPC_WEAK_FUNC(sub_82EBE27C);
PPC_FUNC_IMPL(__imp__sub_82EBE27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBE280"))) PPC_WEAK_FUNC(sub_82EBE280);
PPC_FUNC_IMPL(__imp__sub_82EBE280) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82ebe294
	if (!ctx.cr6.gt) goto loc_82EBE294;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
loc_82EBE294:
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82ebe2e0
	if (ctx.cr6.eq) goto loc_82EBE2E0;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
loc_82EBE2A8:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x82ebe2d8
	if (ctx.cr6.gt) goto loc_82EBE2D8;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// bgt cr6,0x82ebe2cc
	if (ctx.cr6.gt) goto loc_82EBE2CC;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82EBE2CC:
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82ebe2a8
	if (!ctx.cr6.eq) goto loc_82EBE2A8;
loc_82EBE2D8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82ebe2fc
	if (!ctx.cr6.eq) goto loc_82EBE2FC;
loc_82EBE2E0:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ebe2fc
	if (ctx.cr6.eq) goto loc_82EBE2FC;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
loc_82EBE2FC:
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBE304"))) PPC_WEAK_FUNC(sub_82EBE304);
PPC_FUNC_IMPL(__imp__sub_82EBE304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBE308"))) PPC_WEAK_FUNC(sub_82EBE308);
PPC_FUNC_IMPL(__imp__sub_82EBE308) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
loc_82EBE30C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82ebe30c
	if (!ctx.cr0.eq) goto loc_82EBE30C;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBE330"))) PPC_WEAK_FUNC(sub_82EBE330);
PPC_FUNC_IMPL(__imp__sub_82EBE330) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82ebe350
	if (ctx.cr6.eq) goto loc_82EBE350;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82ebe350
	if (ctx.cr6.eq) goto loc_82EBE350;
	// lwz r11,56(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82EBE350:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16387
	ctx.r3.u64 = ctx.r3.u64 | 16387;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBE35C"))) PPC_WEAK_FUNC(sub_82EBE35C);
PPC_FUNC_IMPL(__imp__sub_82EBE35C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBE360"))) PPC_WEAK_FUNC(sub_82EBE360);
PPC_FUNC_IMPL(__imp__sub_82EBE360) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82ebe374
	if (!ctx.cr6.eq) goto loc_82EBE374;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16387
	ctx.r3.u64 = ctx.r3.u64 | 16387;
	// blr 
	return;
loc_82EBE374:
	// li r11,6
	ctx.r11.s64 = 6;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBE384"))) PPC_WEAK_FUNC(sub_82EBE384);
PPC_FUNC_IMPL(__imp__sub_82EBE384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBE388"))) PPC_WEAK_FUNC(sub_82EBE388);
PPC_FUNC_IMPL(__imp__sub_82EBE388) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82ebe39c
	if (!ctx.cr6.eq) goto loc_82EBE39C;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16387
	ctx.r3.u64 = ctx.r3.u64 | 16387;
	// blr 
	return;
loc_82EBE39C:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// std r11,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBE3AC"))) PPC_WEAK_FUNC(sub_82EBE3AC);
PPC_FUNC_IMPL(__imp__sub_82EBE3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBE3B0"))) PPC_WEAK_FUNC(sub_82EBE3B0);
PPC_FUNC_IMPL(__imp__sub_82EBE3B0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82ebe3c4
	if (!ctx.cr6.eq) goto loc_82EBE3C4;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16387
	ctx.r3.u64 = ctx.r3.u64 | 16387;
	// blr 
	return;
loc_82EBE3C4:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// std r11,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBE3D4"))) PPC_WEAK_FUNC(sub_82EBE3D4);
PPC_FUNC_IMPL(__imp__sub_82EBE3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBE3D8"))) PPC_WEAK_FUNC(sub_82EBE3D8);
PPC_FUNC_IMPL(__imp__sub_82EBE3D8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82ebe3f0
	if (!ctx.cr6.eq) goto loc_82EBE3F0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16387
	ctx.r3.u64 = ctx.r3.u64 | 16387;
	// blr 
	return;
loc_82EBE3F0:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBE410"))) PPC_WEAK_FUNC(sub_82EBE410);
PPC_FUNC_IMPL(__imp__sub_82EBE410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82EBE418;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82ebe444
	if (!ctx.cr6.eq) goto loc_82EBE444;
loc_82EBE438:
	// lis r27,-32768
	ctx.r27.s64 = -2147483648;
	// ori r27,r27,16387
	ctx.r27.u64 = ctx.r27.u64 | 16387;
	// b 0x82ebe504
	goto loc_82EBE504;
loc_82EBE444:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82ebe438
	if (ctx.cr6.eq) goto loc_82EBE438;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ebe46c
	if (!ctx.cr6.eq) goto loc_82EBE46C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ebe46c
	if (ctx.cr6.eq) goto loc_82EBE46C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ebe280
	ctx.lr = 0x82EBE46C;
	sub_82EBE280(ctx, base);
loc_82EBE46C:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82ebe484
	if (!ctx.cr6.gt) goto loc_82EBE484;
	// subf r30,r10,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_82EBE484:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r27,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r27.u32);
	// beq cr6,0x82ebe504
	if (ctx.cr6.eq) goto loc_82EBE504;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82EBE494:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r5,r11,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r11.s64;
	// bl 0x82ebe220
	ctx.lr = 0x82EBE4AC;
	sub_82EBE220(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r30,r3,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r3.s64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82ebe4fc
	if (ctx.cr6.lt) goto loc_82EBE4FC;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82ebe4fc
	if (ctx.cr6.eq) goto loc_82EBE4FC;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_82EBE4FC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82ebe494
	if (!ctx.cr6.eq) goto loc_82EBE494;
loc_82EBE504:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EBE510"))) PPC_WEAK_FUNC(sub_82EBE510);
PPC_FUNC_IMPL(__imp__sub_82EBE510) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82ebe538
	if (!ctx.cr6.eq) goto loc_82EBE538;
	// lis r6,-32768
	ctx.r6.s64 = -2147483648;
	// ori r6,r6,16387
	ctx.r6.u64 = ctx.r6.u64 | 16387;
	// b 0x82ebe580
	goto loc_82EBE580;
loc_82EBE538:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82ebe548
	if (ctx.cr6.eq) goto loc_82EBE548;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82EBE548:
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// bge cr6,0x82ebe55c
	if (!ctx.cr6.lt) goto loc_82EBE55C;
	// lis r6,-32761
	ctx.r6.s64 = -2147024896;
	// ori r6,r6,87
	ctx.r6.u64 = ctx.r6.u64 | 87;
	// b 0x82ebe580
	goto loc_82EBE580;
loc_82EBE55C:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmpd cr6,r11,r10
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r10.s64, ctx.xer);
	// bgt cr6,0x82ebe570
	if (ctx.cr6.gt) goto loc_82EBE570;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EBE570:
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// bl 0x82ebe280
	ctx.lr = 0x82EBE578;
	sub_82EBE280(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// std r11,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
loc_82EBE580:
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBE594"))) PPC_WEAK_FUNC(sub_82EBE594);
PPC_FUNC_IMPL(__imp__sub_82EBE594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBE598"))) PPC_WEAK_FUNC(sub_82EBE598);
PPC_FUNC_IMPL(__imp__sub_82EBE598) {
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
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmpld cr6,r4,r11
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r11.u64, ctx.xer);
	// bgt cr6,0x82ebe5b8
	if (ctx.cr6.gt) goto loc_82EBE5B8;
	// rotlwi r11,r4,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
loc_82EBE5B8:
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bl 0x82ebe280
	ctx.lr = 0x82EBE5C0;
	sub_82EBE280(ctx, base);
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

__attribute__((alias("__imp__sub_82EBE5D4"))) PPC_WEAK_FUNC(sub_82EBE5D4);
PPC_FUNC_IMPL(__imp__sub_82EBE5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBE5D8"))) PPC_WEAK_FUNC(sub_82EBE5D8);
PPC_FUNC_IMPL(__imp__sub_82EBE5D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82EBE5E0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82ebe614
	if (!ctx.cr6.eq) goto loc_82EBE614;
loc_82EBE600:
	// lis r26,-32768
	ctx.r26.s64 = -2147483648;
	// ori r26,r26,16387
	ctx.r26.u64 = ctx.r26.u64 | 16387;
loc_82EBE608:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
loc_82EBE614:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82ebe600
	if (ctx.cr6.eq) goto loc_82EBE600;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82ebe634
	if (!ctx.cr6.gt) goto loc_82EBE634;
	// subf r29,r11,r10
	ctx.r29.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_82EBE634:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82ebe648
	if (!ctx.cr6.eq) goto loc_82EBE648;
	// lis r26,-32761
	ctx.r26.s64 = -2147024896;
	// ori r26,r26,87
	ctx.r26.u64 = ctx.r26.u64 | 87;
	// b 0x82ebe608
	goto loc_82EBE608;
loc_82EBE648:
	// stw r26,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r26.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ebe66c
	if (!ctx.cr6.eq) goto loc_82EBE66C;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ebe66c
	if (ctx.cr6.eq) goto loc_82EBE66C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ebe280
	ctx.lr = 0x82EBE66C;
	sub_82EBE280(ctx, base);
loc_82EBE66C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82ebe6a0
	if (!ctx.cr6.gt) goto loc_82EBE6A0;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// clrldi r4,r11,32
	ctx.r4.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBE698;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt 0x82ebe608
	if (ctx.cr0.lt) goto loc_82EBE608;
loc_82EBE6A0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82ebe608
	if (ctx.cr6.eq) goto loc_82EBE608;
loc_82EBE6A8:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// add r8,r10,r29
	ctx.r8.u64 = ctx.r10.u64 + ctx.r29.u64;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82ebe6d0
	if (!ctx.cr6.gt) goto loc_82EBE6D0;
	// subf r31,r10,r9
	ctx.r31.s64 = ctx.r9.s64 - ctx.r10.s64;
loc_82EBE6D0:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82EBE6E4;
	sub_82FA77C0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf. r29,r31,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r31.s64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r28,r31,r28
	ctx.r28.u64 = ctx.r31.u64 + ctx.r28.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// beq 0x82ebe608
	if (ctx.cr0.eq) goto loc_82EBE608;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// b 0x82ebe6a8
	goto loc_82EBE6A8;
}

__attribute__((alias("__imp__sub_82EBE718"))) PPC_WEAK_FUNC(sub_82EBE718);
PPC_FUNC_IMPL(__imp__sub_82EBE718) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// beq cr6,0x82ebe778
	if (ctx.cr6.eq) goto loc_82EBE778;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e8edd0
	ctx.lr = 0x82EBE768;
	sub_82E8EDD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ebe778
	if (ctx.cr0.eq) goto loc_82EBE778;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
loc_82EBE778:
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

__attribute__((alias("__imp__sub_82EBE794"))) PPC_WEAK_FUNC(sub_82EBE794);
PPC_FUNC_IMPL(__imp__sub_82EBE794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBE798"))) PPC_WEAK_FUNC(sub_82EBE798);
PPC_FUNC_IMPL(__imp__sub_82EBE798) {
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
	// beq cr6,0x82ebe7c4
	if (ctx.cr6.eq) goto loc_82EBE7C4;
	// bl 0x82e8ee18
	ctx.lr = 0x82EBE7C4;
	sub_82E8EE18(ctx, base);
loc_82EBE7C4:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ebe7d4
	if (ctx.cr0.eq) goto loc_82EBE7D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8ee18
	ctx.lr = 0x82EBE7D4;
	sub_82E8EE18(ctx, base);
loc_82EBE7D4:
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

__attribute__((alias("__imp__sub_82EBE7F0"))) PPC_WEAK_FUNC(sub_82EBE7F0);
PPC_FUNC_IMPL(__imp__sub_82EBE7F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82EBE7F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82ebe818
	if (!ctx.cr6.eq) goto loc_82EBE818;
loc_82EBE80C:
	// lis r28,-32768
	ctx.r28.s64 = -2147483648;
	// ori r28,r28,16387
	ctx.r28.u64 = ctx.r28.u64 | 16387;
	// b 0x82ebe8e0
	goto loc_82EBE8E0;
loc_82EBE818:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82ebe80c
	if (ctx.cr6.eq) goto loc_82EBE80C;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBE83C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x82ebe8e0
	if (ctx.cr0.lt) goto loc_82EBE8E0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x82e8edd0
	ctx.lr = 0x82EBE85C;
	sub_82E8EDD0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82ebe88c
	if (ctx.cr0.eq) goto loc_82EBE88C;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ea38d8
	ctx.lr = 0x82EBE878;
	sub_82EA38D8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// addi r11,r11,5788
	ctx.r11.s64 = ctx.r11.s64 + 5788;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82ebe890
	goto loc_82EBE890;
loc_82EBE88C:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82EBE890:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82ebe8a4
	if (!ctx.cr6.eq) goto loc_82EBE8A4;
	// lis r28,-32761
	ctx.r28.s64 = -2147024896;
	// ori r28,r28,14
	ctx.r28.u64 = ctx.r28.u64 | 14;
	// b 0x82ebe8e0
	goto loc_82EBE8E0;
loc_82EBE8A4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBE8B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// bl 0x82ea39a0
	ctx.lr = 0x82EBE8CC;
	sub_82EA39A0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBE8E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EBE8E0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EBE8EC"))) PPC_WEAK_FUNC(sub_82EBE8EC);
PPC_FUNC_IMPL(__imp__sub_82EBE8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBE8F0"))) PPC_WEAK_FUNC(sub_82EBE8F0);
PPC_FUNC_IMPL(__imp__sub_82EBE8F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82EBE8F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82ebe918
	if (!ctx.cr6.eq) goto loc_82EBE918;
loc_82EBE90C:
	// lis r28,-32768
	ctx.r28.s64 = -2147483648;
	// ori r28,r28,16387
	ctx.r28.u64 = ctx.r28.u64 | 16387;
	// b 0x82ebe9e0
	goto loc_82EBE9E0;
loc_82EBE918:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82ebe90c
	if (ctx.cr6.eq) goto loc_82EBE90C;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBE93C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x82ebe9e0
	if (ctx.cr0.lt) goto loc_82EBE9E0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x82e8edd0
	ctx.lr = 0x82EBE95C;
	sub_82E8EDD0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82ebe98c
	if (ctx.cr0.eq) goto loc_82EBE98C;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ea38d8
	ctx.lr = 0x82EBE978;
	sub_82EA38D8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// addi r11,r11,5788
	ctx.r11.s64 = ctx.r11.s64 + 5788;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82ebe990
	goto loc_82EBE990;
loc_82EBE98C:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82EBE990:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82ebe9a4
	if (!ctx.cr6.eq) goto loc_82EBE9A4;
	// lis r28,-32761
	ctx.r28.s64 = -2147024896;
	// ori r28,r28,14
	ctx.r28.u64 = ctx.r28.u64 | 14;
	// b 0x82ebe9e0
	goto loc_82EBE9E0;
loc_82EBE9A4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBE9B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// bl 0x82ea39a0
	ctx.lr = 0x82EBE9CC;
	sub_82EA39A0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBE9E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EBE9E0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EBE9EC"))) PPC_WEAK_FUNC(sub_82EBE9EC);
PPC_FUNC_IMPL(__imp__sub_82EBE9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBE9F0"))) PPC_WEAK_FUNC(sub_82EBE9F0);
PPC_FUNC_IMPL(__imp__sub_82EBE9F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82EBE9F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpld cr6,r4,r11
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r11.u64, ctx.xer);
	// ble cr6,0x82ebea20
	if (!ctx.cr6.gt) goto loc_82EBEA20;
	// lis r28,-32761
	ctx.r28.s64 = -2147024896;
	// ori r28,r28,87
	ctx.r28.u64 = ctx.r28.u64 | 87;
	// b 0x82ebeae4
	goto loc_82EBEAE4;
loc_82EBEA20:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ebea3c
	if (ctx.cr6.eq) goto loc_82EBEA3C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r31,r10,r9
	ctx.r31.u64 = ctx.r10.u64 + ctx.r9.u64;
	// b 0x82ebea40
	goto loc_82EBEA40;
loc_82EBEA3C:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82EBEA40:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ebea54
	if (ctx.cr6.eq) goto loc_82EBEA54;
	// rotlwi r11,r29,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r29.u32, 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x82ebeac4
	if (!ctx.cr6.gt) goto loc_82EBEAC4;
loc_82EBEA54:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82e8edd0
	ctx.lr = 0x82EBEA6C;
	sub_82E8EDD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ebea88
	if (ctx.cr0.eq) goto loc_82EBEA88;
	// rotlwi r11,r29,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r29.u32, 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// subf r5,r31,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r31.s64;
	// bl 0x82ebe718
	ctx.lr = 0x82EBEA84;
	sub_82EBE718(ctx, base);
	// b 0x82ebea8c
	goto loc_82EBEA8C;
loc_82EBEA88:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82EBEA8C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82ebeaa0
	if (!ctx.cr6.eq) goto loc_82EBEAA0;
	// lis r28,-32761
	ctx.r28.s64 = -2147024896;
	// ori r28,r28,14
	ctx.r28.u64 = ctx.r28.u64 | 14;
	// b 0x82ebeae4
	goto loc_82EBEAE4;
loc_82EBEAA0:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ebeabc
	if (!ctx.cr6.eq) goto loc_82EBEABC;
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// stw r3,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
	// stw r28,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r28.u32);
	// b 0x82ebeac0
	goto loc_82EBEAC0;
loc_82EBEABC:
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
loc_82EBEAC0:
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
loc_82EBEAC4:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rotlwi r11,r29,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r29.u32, 0);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82ebeae4
	if (!ctx.cr6.gt) goto loc_82EBEAE4;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ebe280
	ctx.lr = 0x82EBEAE4;
	sub_82EBE280(ctx, base);
loc_82EBEAE4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EBEAF0"))) PPC_WEAK_FUNC(sub_82EBEAF0);
PPC_FUNC_IMPL(__imp__sub_82EBEAF0) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,5824
	ctx.r11.s64 = ctx.r11.s64 + 5824;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82ebeb48
	if (ctx.cr6.eq) goto loc_82EBEB48;
loc_82EBEB20:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,12(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// beq 0x82ebeb38
	if (ctx.cr0.eq) goto loc_82EBEB38;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82ebe798
	ctx.lr = 0x82EBEB38;
	sub_82EBE798(ctx, base);
loc_82EBEB38:
	// rotlwi r11,r30,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ebeb20
	if (!ctx.cr6.eq) goto loc_82EBEB20;
loc_82EBEB48:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82EBEB68"))) PPC_WEAK_FUNC(sub_82EBEB68);
PPC_FUNC_IMPL(__imp__sub_82EBEB68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82EBEB70;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// bne cr6,0x82ebeb94
	if (!ctx.cr6.eq) goto loc_82EBEB94;
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,87
	ctx.r29.u64 = ctx.r29.u64 | 87;
	// b 0x82ebebf8
	goto loc_82EBEBF8;
loc_82EBEB94:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82e8edd0
	ctx.lr = 0x82EBEBAC;
	sub_82E8EDD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ebebe0
	if (ctx.cr0.eq) goto loc_82EBEBE0;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// addi r11,r11,5824
	ctx.r11.s64 = ctx.r11.s64 + 5824;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r31.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
loc_82EBEBE0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82ebebf4
	if (!ctx.cr6.eq) goto loc_82EBEBF4;
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,14
	ctx.r29.u64 = ctx.r29.u64 | 14;
	// b 0x82ebebf8
	goto loc_82EBEBF8;
loc_82EBEBF4:
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
loc_82EBEBF8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EBEC04"))) PPC_WEAK_FUNC(sub_82EBEC04);
PPC_FUNC_IMPL(__imp__sub_82EBEC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBEC08"))) PPC_WEAK_FUNC(sub_82EBEC08);
PPC_FUNC_IMPL(__imp__sub_82EBEC08) {
	PPC_FUNC_PROLOGUE();
	// b 0x82ebeb68
	sub_82EBEB68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EBEC0C"))) PPC_WEAK_FUNC(sub_82EBEC0C);
PPC_FUNC_IMPL(__imp__sub_82EBEC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBEC10"))) PPC_WEAK_FUNC(sub_82EBEC10);
PPC_FUNC_IMPL(__imp__sub_82EBEC10) {
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
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
loc_82EBEC2C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82ebec2c
	if (!ctx.cr0.eq) goto loc_82EBEC2C;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ebec6c
	if (!ctx.cr6.eq) goto loc_82EBEC6C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ebec6c
	if (ctx.cr6.eq) goto loc_82EBEC6C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ebeaf0
	ctx.lr = 0x82EBEC64;
	sub_82EBEAF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8ee18
	ctx.lr = 0x82EBEC6C;
	sub_82E8EE18(ctx, base);
loc_82EBEC6C:
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

__attribute__((alias("__imp__sub_82EBEC88"))) PPC_WEAK_FUNC(sub_82EBEC88);
PPC_FUNC_IMPL(__imp__sub_82EBEC88) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,8176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ebed48
	if (ctx.cr6.eq) goto loc_82EBED48;
	// lwz r11,8180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8180);
	// lwz r10,160(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82ebed48
	if (ctx.cr6.eq) goto loc_82EBED48;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82ebed48
	if (ctx.cr6.eq) goto loc_82EBED48;
	// srawi r10,r11,24
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 24;
	// srawi r9,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 16;
	// srawi r8,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 8;
	// clrlwi r3,r10,28
	ctx.r3.u64 = ctx.r10.u32 & 0xF;
	// clrlwi r10,r9,28
	ctx.r10.u64 = ctx.r9.u32 & 0xF;
	// clrlwi r9,r8,28
	ctx.r9.u64 = ctx.r8.u32 & 0xF;
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// clrlwi r8,r11,28
	ctx.r8.u64 = ctx.r11.u32 & 0xF;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// stw r8,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// ble cr6,0x82ebed00
	if (!ctx.cr6.gt) goto loc_82EBED00;
	// li r11,8
	ctx.r11.s64 = 8;
loc_82EBED00:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// ble cr6,0x82ebed14
	if (!ctx.cr6.gt) goto loc_82EBED14;
	// li r11,8
	ctx.r11.s64 = 8;
loc_82EBED14:
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// ble cr6,0x82ebed28
	if (!ctx.cr6.gt) goto loc_82EBED28;
	// li r11,8
	ctx.r11.s64 = 8;
loc_82EBED28:
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// ble cr6,0x82ebed3c
	if (!ctx.cr6.gt) goto loc_82EBED3C;
	// li r11,8
	ctx.r11.s64 = 8;
loc_82EBED3C:
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82EBED48:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBED50"))) PPC_WEAK_FUNC(sub_82EBED50);
PPC_FUNC_IMPL(__imp__sub_82EBED50) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,7868(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7868);
	// li r10,10
	ctx.r10.s64 = 10;
	// add r8,r4,r11
	ctx.r8.u64 = ctx.r4.u64 + ctx.r11.u64;
	// divw r7,r8,r10
	ctx.r7.s32 = ctx.r8.s32 / ctx.r10.s32;
	// rlwinm r6,r7,0,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r6,52(r9)
	PPC_STORE_U32(ctx.r9.u32 + 52, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBED70"))) PPC_WEAK_FUNC(sub_82EBED70);
PPC_FUNC_IMPL(__imp__sub_82EBED70) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,7868(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7868, ctx.r11.u32);
	// stw r11,7764(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7764, ctx.r11.u32);
	// stw r11,7768(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7768, ctx.r11.u32);
	// stw r11,7772(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7772, ctx.r11.u32);
	// stw r11,19200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 19200, ctx.r11.u32);
	// stw r11,19112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 19112, ctx.r11.u32);
	// stw r11,19196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 19196, ctx.r11.u32);
	// stw r11,19204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 19204, ctx.r11.u32);
	// stw r11,7612(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7612, ctx.r11.u32);
	// stw r11,7608(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7608, ctx.r11.u32);
	// stw r11,7604(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7604, ctx.r11.u32);
	// stw r11,7624(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7624, ctx.r11.u32);
	// stw r11,7664(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7664, ctx.r11.u32);
	// stw r11,7780(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7780, ctx.r11.u32);
	// stw r11,7784(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7784, ctx.r11.u32);
	// stw r11,7788(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7788, ctx.r11.u32);
	// stw r11,7792(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7792, ctx.r11.u32);
	// stw r11,7796(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7796, ctx.r11.u32);
	// stw r11,7800(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7800, ctx.r11.u32);
	// stw r11,7776(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7776, ctx.r11.u32);
	// stw r11,7832(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7832, ctx.r11.u32);
	// stw r11,6808(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6808, ctx.r11.u32);
	// stw r11,6812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6812, ctx.r11.u32);
	// stw r11,6816(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6816, ctx.r11.u32);
	// stw r11,6820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6820, ctx.r11.u32);
	// stw r11,6824(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6824, ctx.r11.u32);
	// stw r11,6836(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6836, ctx.r11.u32);
	// stw r11,6840(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6840, ctx.r11.u32);
	// stw r11,2268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2268, ctx.r11.u32);
	// stw r11,772(r3)
	PPC_STORE_U32(ctx.r3.u32 + 772, ctx.r11.u32);
	// stw r11,3460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3460, ctx.r11.u32);
	// stw r11,3464(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3464, ctx.r11.u32);
	// stw r11,3492(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3492, ctx.r11.u32);
	// stw r11,3020(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3020, ctx.r11.u32);
	// stw r11,3592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3592, ctx.r11.u32);
	// stw r11,3596(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3596, ctx.r11.u32);
	// stw r11,4428(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4428, ctx.r11.u32);
	// stw r11,4432(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4432, ctx.r11.u32);
	// stw r11,4460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4460, ctx.r11.u32);
	// stw r11,3988(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3988, ctx.r11.u32);
	// stw r11,4560(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4560, ctx.r11.u32);
	// stw r11,4564(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4564, ctx.r11.u32);
	// stw r11,5396(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5396, ctx.r11.u32);
	// stw r11,5400(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5400, ctx.r11.u32);
	// stw r11,5428(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5428, ctx.r11.u32);
	// stw r11,4956(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4956, ctx.r11.u32);
	// stw r11,5528(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5528, ctx.r11.u32);
	// stw r11,5532(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5532, ctx.r11.u32);
	// stw r11,6364(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6364, ctx.r11.u32);
	// stw r11,6368(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6368, ctx.r11.u32);
	// stw r11,6396(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6396, ctx.r11.u32);
	// stw r11,5924(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5924, ctx.r11.u32);
	// stw r11,6496(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6496, ctx.r11.u32);
	// stw r11,6500(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6500, ctx.r11.u32);
	// stw r11,3400(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3400, ctx.r11.u32);
	// stw r11,3404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3404, ctx.r11.u32);
	// stw r11,3408(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3408, ctx.r11.u32);
	// stw r11,3396(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3396, ctx.r11.u32);
	// stw r11,3016(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3016, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBEE64"))) PPC_WEAK_FUNC(sub_82EBEE64);
PPC_FUNC_IMPL(__imp__sub_82EBEE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBEE68"))) PPC_WEAK_FUNC(sub_82EBEE68);
PPC_FUNC_IMPL(__imp__sub_82EBEE68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8176);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,1624(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1624, ctx.r10.u32);
	// beq cr6,0x82ebeea8
	if (ctx.cr6.eq) goto loc_82EBEEA8;
	// lwz r11,8180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8180);
	// lwz r9,180(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82ebeea8
	if (ctx.cr6.eq) goto loc_82EBEEA8;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// stw r11,1624(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1624, ctx.r11.u32);
	// blr 
	return;
loc_82EBEEA8:
	// lis r11,-31959
	ctx.r11.s64 = -2094465024;
	// lwz r11,-30996(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30996);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ebeec8
	if (!ctx.cr6.eq) goto loc_82EBEEC8;
	// lis r11,-31959
	ctx.r11.s64 = -2094465024;
	// lwz r11,-30992(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30992);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ebeecc
	if (ctx.cr6.eq) goto loc_82EBEECC;
loc_82EBEEC8:
	// stw r10,1624(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1624, ctx.r10.u32);
loc_82EBEECC:
	// lwz r11,6772(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6772);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ebeee8
	if (ctx.cr6.eq) goto loc_82EBEEE8;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x82ebeee8
	if (!ctx.cr6.eq) goto loc_82EBEEE8;
	// stw r10,1624(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1624, ctx.r10.u32);
loc_82EBEEE8:
	// lis r11,-31959
	ctx.r11.s64 = -2094465024;
	// lwz r11,-31000(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31000);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r10,1624(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1624, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBEF00"))) PPC_WEAK_FUNC(sub_82EBEF00);
PPC_FUNC_IMPL(__imp__sub_82EBEF00) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2824(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2824);
	// lis r6,-31959
	ctx.r6.s64 = -2094465024;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ebef24
	if (ctx.cr6.eq) goto loc_82EBEF24;
	// lwz r11,31532(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31532);
	// ori r10,r11,10
	ctx.r10.u64 = ctx.r11.u64 | 10;
	// stw r10,31532(r3)
	PPC_STORE_U32(ctx.r3.u32 + 31532, ctx.r10.u32);
	// b 0x82ebf01c
	goto loc_82EBF01C;
loc_82EBEF24:
	// lwz r11,8176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ebef48
	if (ctx.cr6.eq) goto loc_82EBEF48;
	// lwz r11,8180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8180);
	// lwz r10,172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82ebef48
	if (ctx.cr6.eq) goto loc_82EBEF48;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// b 0x82ebef4c
	goto loc_82EBEF4C;
loc_82EBEF48:
	// lwz r11,31092(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31092);
loc_82EBEF4C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82ebef74
	if (!ctx.cr6.lt) goto loc_82EBEF74;
	// lwz r11,31532(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31532);
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r7,7980(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7980, ctx.r7.u32);
	// rlwinm r9,r11,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// stb r10,31536(r3)
	PPC_STORE_U8(ctx.r3.u32 + 31536, ctx.r10.u8);
	// rlwinm r9,r9,0,29,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r9,31532(r3)
	PPC_STORE_U32(ctx.r3.u32 + 31532, ctx.r9.u32);
	// b 0x82ebf01c
	goto loc_82EBF01C;
loc_82EBEF74:
	// rlwinm r8,r11,0,24,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,2
	ctx.r9.s64 = 2;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82ebefc8
	if (ctx.cr6.eq) goto loc_82EBEFC8;
	// lwz r8,-30996(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + -30996);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82ebefc8
	if (!ctx.cr6.eq) goto loc_82EBEFC8;
	// lis r8,-31959
	ctx.r8.s64 = -2094465024;
	// lwz r8,-30992(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30992);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82ebefc8
	if (!ctx.cr6.eq) goto loc_82EBEFC8;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// bne cr6,0x82ebefc8
	if (!ctx.cr6.eq) goto loc_82EBEFC8;
	// rlwinm r8,r11,28,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xF;
	// stw r10,30992(r3)
	PPC_STORE_U32(ctx.r3.u32 + 30992, ctx.r10.u32);
	// rlwinm r5,r11,24,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xF;
	// stw r9,30996(r3)
	PPC_STORE_U32(ctx.r3.u32 + 30996, ctx.r9.u32);
	// stb r8,31536(r3)
	PPC_STORE_U8(ctx.r3.u32 + 31536, ctx.r8.u8);
	// stb r5,31537(r3)
	PPC_STORE_U8(ctx.r3.u32 + 31537, ctx.r5.u8);
loc_82EBEFC8:
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ebefec
	if (!ctx.cr6.eq) goto loc_82EBEFEC;
	// lwz r11,31532(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31532);
	// stw r7,7980(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7980, ctx.r7.u32);
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r10,r10,0,29,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r10,31532(r3)
	PPC_STORE_U32(ctx.r3.u32 + 31532, ctx.r10.u32);
	// b 0x82ebf01c
	goto loc_82EBF01C;
loc_82EBEFEC:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82ebf004
	if (ctx.cr6.eq) goto loc_82EBF004;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82ebf004
	if (ctx.cr6.eq) goto loc_82EBF004;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82ebf01c
	if (!ctx.cr6.eq) goto loc_82EBF01C;
loc_82EBF004:
	// lwz r11,31532(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31532);
	// stw r10,7980(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7980, ctx.r10.u32);
	// ori r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 | 32;
	// stw r10,30992(r3)
	PPC_STORE_U32(ctx.r3.u32 + 30992, ctx.r10.u32);
	// stw r9,30996(r3)
	PPC_STORE_U32(ctx.r3.u32 + 30996, ctx.r9.u32);
	// stw r8,31532(r3)
	PPC_STORE_U32(ctx.r3.u32 + 31532, ctx.r8.u32);
loc_82EBF01C:
	// lwz r11,-30996(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -30996);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r7,31532(r3)
	PPC_STORE_U32(ctx.r3.u32 + 31532, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBF030"))) PPC_WEAK_FUNC(sub_82EBF030);
PPC_FUNC_IMPL(__imp__sub_82EBF030) {
	PPC_FUNC_PROLOGUE();
	// std r4,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r4.u64);
	// std r5,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r5.u64);
	// std r6,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r6.u64);
	// std r7,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r7.u64);
	// std r8,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r8.u64);
	// std r9,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r9.u64);
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r11,2572(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2572);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,2184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2184, ctx.r9.u32);
	// beq cr6,0x82ebf070
	if (ctx.cr6.eq) goto loc_82EBF070;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,2184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2184, ctx.r11.u32);
	// b 0x82ebf0a8
	goto loc_82EBF0A8;
loc_82EBF070:
	// lwz r11,8108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ebf084
	if (!ctx.cr6.eq) goto loc_82EBF084;
	// stw r11,2184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2184, ctx.r11.u32);
	// b 0x82ebf0a8
	goto loc_82EBF0A8;
loc_82EBF084:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82ebf094
	if (!ctx.cr6.eq) goto loc_82EBF094;
	// stw r10,2184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2184, ctx.r10.u32);
	// b 0x82ebf0a8
	goto loc_82EBF0A8;
loc_82EBF094:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,2184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2184, ctx.r8.u32);
loc_82EBF0A8:
	// lwz r11,2824(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2824);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ebf0b8
	if (ctx.cr6.eq) goto loc_82EBF0B8;
	// stw r10,2184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2184, ctx.r10.u32);
loc_82EBF0B8:
	// lwz r11,32(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,36(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	// stw r11,2184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2184, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBF0D0"))) PPC_WEAK_FUNC(sub_82EBF0D0);
PPC_FUNC_IMPL(__imp__sub_82EBF0D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r4,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r4.u64);
	// std r5,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r5.u64);
	// std r6,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r6.u64);
	// std r7,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r7.u64);
	// std r8,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r8.u64);
	// std r9,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r9.u64);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,2124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2124, ctx.r9.u32);
	// stw r9,7840(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7840, ctx.r9.u32);
	// beq cr6,0x82ebf128
	if (ctx.cr6.eq) goto loc_82EBF128;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82ebf128
	if (!ctx.cr6.eq) goto loc_82EBF128;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 & ctx.r11.u64;
	// stw r6,2124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2124, ctx.r6.u32);
	// stw r6,7840(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7840, ctx.r6.u32);
loc_82EBF128:
	// lwz r11,7188(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7188);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ebf140
	if (ctx.cr6.eq) goto loc_82EBF140;
	// lwz r11,7596(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7596);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82ebf148
	if (!ctx.cr6.eq) goto loc_82EBF148;
loc_82EBF140:
	// stw r9,2124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2124, ctx.r9.u32);
	// stw r9,7840(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7840, ctx.r9.u32);
loc_82EBF148:
	// lwz r11,32(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ebf16c
	if (ctx.cr6.eq) goto loc_82EBF16C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ebf16c
	if (!ctx.cr6.eq) goto loc_82EBF16C;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r11,2124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2124, ctx.r11.u32);
	// stw r11,7840(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7840, ctx.r11.u32);
loc_82EBF16C:
	// lwz r11,2124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82ebf184
	if (!ctx.cr6.lt) goto loc_82EBF184;
	// stw r9,2124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2124, ctx.r9.u32);
	// stw r9,7840(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7840, ctx.r9.u32);
	// b 0x82ebf1a4
	goto loc_82EBF1A4;
loc_82EBF184:
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// ble cr6,0x82ebf1a4
	if (!ctx.cr6.gt) goto loc_82EBF1A4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ebf1a4
	if (!ctx.cr6.eq) goto loc_82EBF1A4;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,2124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2124, ctx.r11.u32);
	// stw r11,7840(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7840, ctx.r11.u32);
loc_82EBF1A4:
	// lwz r11,2124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2124);
	// lwz r10,7752(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7752);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// stw r9,2124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2124, ctx.r9.u32);
	// stw r9,7840(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7840, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBF1C4"))) PPC_WEAK_FUNC(sub_82EBF1C4);
PPC_FUNC_IMPL(__imp__sub_82EBF1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBF1C8"))) PPC_WEAK_FUNC(sub_82EBF1C8);
PPC_FUNC_IMPL(__imp__sub_82EBF1C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x82ebf318
	if (!ctx.cr6.eq) goto loc_82EBF318;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// lwz r10,30408(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30408);
	// lis r8,-32211
	ctx.r8.s64 = -2110980096;
	// addi r7,r11,28464
	ctx.r7.s64 = ctx.r11.s64 + 28464;
	// addi r6,r8,28464
	ctx.r6.s64 = ctx.r8.s64 + 28464;
	// stw r7,7064(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7064, ctx.r7.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r6,7068(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7068, ctx.r6.u32);
	// beq cr6,0x82ebf208
	if (ctx.cr6.eq) goto loc_82EBF208;
	// lis r11,-32019
	ctx.r11.s64 = -2098397184;
	// addi r10,r11,22576
	ctx.r10.s64 = ctx.r11.s64 + 22576;
	// b 0x82ebf210
	goto loc_82EBF210;
loc_82EBF208:
	// lis r11,-32016
	ctx.r11.s64 = -2098200576;
	// addi r10,r11,19312
	ctx.r10.s64 = ctx.r11.s64 + 19312;
loc_82EBF210:
	// lwz r8,7064(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7064);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,7060(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7060, ctx.r10.u32);
	// lwz r10,8104(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8104);
	// stw r11,1604(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1604, ctx.r11.u32);
	// stw r11,21096(r3)
	PPC_STORE_U32(ctx.r3.u32 + 21096, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,2336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2336, ctx.r11.u32);
	// stw r8,7056(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7056, ctx.r8.u32);
	// stw r11,30220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 30220, ctx.r11.u32);
	// stw r11,1608(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1608, ctx.r11.u32);
	// bne cr6,0x82ebf258
	if (!ctx.cr6.eq) goto loc_82EBF258;
	// stw r11,1604(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1604, ctx.r11.u32);
	// stw r9,21096(r3)
	PPC_STORE_U32(ctx.r3.u32 + 21096, ctx.r9.u32);
	// stw r9,2336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2336, ctx.r9.u32);
	// stw r9,30220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 30220, ctx.r9.u32);
	// stw r9,1608(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1608, ctx.r9.u32);
	// b 0x82ebf318
	goto loc_82EBF318;
loc_82EBF258:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82ebf278
	if (!ctx.cr6.eq) goto loc_82EBF278;
	// stw r11,1604(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1604, ctx.r11.u32);
	// stw r9,21096(r3)
	PPC_STORE_U32(ctx.r3.u32 + 21096, ctx.r9.u32);
	// stw r11,2336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2336, ctx.r11.u32);
	// stw r11,30220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 30220, ctx.r11.u32);
	// stw r11,1608(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1608, ctx.r11.u32);
	// b 0x82ebf318
	goto loc_82EBF318;
loc_82EBF278:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82ebf298
	if (!ctx.cr6.eq) goto loc_82EBF298;
	// stw r11,1604(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1604, ctx.r11.u32);
	// stw r11,21096(r3)
	PPC_STORE_U32(ctx.r3.u32 + 21096, ctx.r11.u32);
	// stw r11,2336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2336, ctx.r11.u32);
	// stw r11,30220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 30220, ctx.r11.u32);
	// stw r11,1608(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1608, ctx.r11.u32);
	// b 0x82ebf318
	goto loc_82EBF318;
loc_82EBF298:
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82ebf2b8
	if (!ctx.cr6.eq) goto loc_82EBF2B8;
	// stw r11,1604(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1604, ctx.r11.u32);
	// stw r11,21096(r3)
	PPC_STORE_U32(ctx.r3.u32 + 21096, ctx.r11.u32);
	// stw r11,2336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2336, ctx.r11.u32);
	// stw r11,30220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 30220, ctx.r11.u32);
	// stw r11,1608(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1608, ctx.r11.u32);
	// b 0x82ebf318
	goto loc_82EBF318;
loc_82EBF2B8:
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x82ebf2c8
	if (ctx.cr6.eq) goto loc_82EBF2C8;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bne cr6,0x82ebf318
	if (!ctx.cr6.eq) goto loc_82EBF318;
loc_82EBF2C8:
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r11,1604(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1604, ctx.r11.u32);
	// stw r11,21096(r3)
	PPC_STORE_U32(ctx.r3.u32 + 21096, ctx.r11.u32);
	// stw r11,2336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2336, ctx.r11.u32);
	// stw r11,30220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 30220, ctx.r11.u32);
	// stw r11,1608(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1608, ctx.r11.u32);
	// lwz r10,-30996(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30996);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82ebf318
	if (!ctx.cr6.eq) goto loc_82EBF318;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lwz r10,-30992(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30992);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82ebf318
	if (!ctx.cr6.eq) goto loc_82EBF318;
	// lbz r10,31536(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 31536);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ebf318
	if (!ctx.cr6.eq) goto loc_82EBF318;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r11,31536(r3)
	PPC_STORE_U8(ctx.r3.u32 + 31536, ctx.r11.u8);
	// stw r11,30992(r3)
	PPC_STORE_U32(ctx.r3.u32 + 30992, ctx.r11.u32);
	// stw r10,30996(r3)
	PPC_STORE_U32(ctx.r3.u32 + 30996, ctx.r10.u32);
loc_82EBF318:
	// lbz r11,31536(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 31536);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// stb r9,31536(r3)
	PPC_STORE_U8(ctx.r3.u32 + 31536, ctx.r9.u8);
	// stb r9,31537(r3)
	PPC_STORE_U8(ctx.r3.u32 + 31537, ctx.r9.u8);
	// stw r9,31532(r3)
	PPC_STORE_U32(ctx.r3.u32 + 31532, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBF334"))) PPC_WEAK_FUNC(sub_82EBF334);
PPC_FUNC_IMPL(__imp__sub_82EBF334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBF338"))) PPC_WEAK_FUNC(sub_82EBF338);
PPC_FUNC_IMPL(__imp__sub_82EBF338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32016
	ctx.r11.s64 = -2098200576;
	// lwz r10,8108(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8108);
	// addi r9,r11,19312
	ctx.r9.s64 = ctx.r11.s64 + 19312;
	// lwz r11,8104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8104);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// stw r9,7056(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7056, ctx.r9.u32);
	// bne cr6,0x82ebf3a8
	if (!ctx.cr6.eq) goto loc_82EBF3A8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ebf3c4
	if (ctx.cr6.eq) goto loc_82EBF3C4;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82ebf378
	if (!ctx.cr6.eq) goto loc_82EBF378;
loc_82EBF364:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,7976(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7976, ctx.r11.u32);
	// stw r11,30220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 30220, ctx.r11.u32);
	// stw r11,2336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2336, ctx.r11.u32);
	// blr 
	return;
loc_82EBF378:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82ebf398
	if (ctx.cr6.eq) goto loc_82EBF398;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82ebf364
	if (ctx.cr6.eq) goto loc_82EBF364;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82ebf398
	if (ctx.cr6.eq) goto loc_82EBF398;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82EBF398:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,30220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 30220, ctx.r11.u32);
	// stw r11,2336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2336, ctx.r11.u32);
	// blr 
	return;
loc_82EBF3A8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ebf3bc
	if (!ctx.cr6.eq) goto loc_82EBF3BC;
	// stw r11,21096(r3)
	PPC_STORE_U32(ctx.r3.u32 + 21096, ctx.r11.u32);
	// stw r11,1608(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1608, ctx.r11.u32);
	// blr 
	return;
loc_82EBF3BC:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82ebf3d8
	if (!ctx.cr6.eq) goto loc_82EBF3D8;
loc_82EBF3C4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,21096(r3)
	PPC_STORE_U32(ctx.r3.u32 + 21096, ctx.r11.u32);
	// stw r10,2336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2336, ctx.r10.u32);
	// blr 
	return;
loc_82EBF3D8:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82ebf3ec
	if (!ctx.cr6.eq) goto loc_82EBF3EC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,2336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2336, ctx.r11.u32);
	// blr 
	return;
loc_82EBF3EC:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82ebf398
	if (ctx.cr6.eq) goto loc_82EBF398;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82ebf404
	if (ctx.cr6.eq) goto loc_82EBF404;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82EBF404:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,28016(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28016, ctx.r11.u32);
	// stw r10,28104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28104, ctx.r10.u32);
	// stw r10,28108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28108, ctx.r10.u32);
	// stw r11,30220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 30220, ctx.r11.u32);
	// stw r11,2336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2336, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBF424"))) PPC_WEAK_FUNC(sub_82EBF424);
PPC_FUNC_IMPL(__imp__sub_82EBF424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBF428"))) PPC_WEAK_FUNC(sub_82EBF428);
PPC_FUNC_IMPL(__imp__sub_82EBF428) {
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
	// lis r11,-31959
	ctx.r11.s64 = -2094465024;
	// lwz r11,-30996(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30996);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ebf514
	if (!ctx.cr6.eq) goto loc_82EBF514;
	// lwz r11,800(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 800);
	// lfd f13,7896(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r3.u32 + 7896);
	// lwz r10,796(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 796);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lwz r5,7936(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7936);
	// mullw r7,r11,r10
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lfd f0,-15528(r9)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + -15528);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// fcfid f8,f12
	ctx.f8.f64 = double(ctx.f12.s64);
	// fmul f9,f10,f13
	ctx.f9.f64 = ctx.f10.f64 * ctx.f13.f64;
	// fdiv f1,f9,f8
	ctx.f1.f64 = ctx.f9.f64 / ctx.f8.f64;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x82ebf514
	if (!ctx.cr6.lt) goto loc_82EBF514;
	// lwz r11,30408(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ebf50c
	if (ctx.cr6.eq) goto loc_82EBF50C;
	// lwz r11,31012(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31012);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ebf4bc
	if (ctx.cr6.eq) goto loc_82EBF4BC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,30724(r3)
	PPC_STORE_U32(ctx.r3.u32 + 30724, ctx.r11.u32);
	// stw r11,30720(r3)
	PPC_STORE_U32(ctx.r3.u32 + 30720, ctx.r11.u32);
	// stw r11,30732(r3)
	PPC_STORE_U32(ctx.r3.u32 + 30732, ctx.r11.u32);
	// b 0x82ebf4c8
	goto loc_82EBF4C8;
loc_82EBF4BC:
	// stw r10,30724(r3)
	PPC_STORE_U32(ctx.r3.u32 + 30724, ctx.r10.u32);
	// stw r10,30720(r3)
	PPC_STORE_U32(ctx.r3.u32 + 30720, ctx.r10.u32);
	// stw r10,30732(r3)
	PPC_STORE_U32(ctx.r3.u32 + 30732, ctx.r10.u32);
loc_82EBF4C8:
	// lwz r11,31016(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31016);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ebf4e8
	if (ctx.cr6.eq) goto loc_82EBF4E8;
	// lwz r11,30624(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30624);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r9,30628(r3)
	PPC_STORE_U32(ctx.r3.u32 + 30628, ctx.r9.u32);
	// b 0x82ebf4ec
	goto loc_82EBF4EC;
loc_82EBF4E8:
	// stw r10,30628(r3)
	PPC_STORE_U32(ctx.r3.u32 + 30628, ctx.r10.u32);
loc_82EBF4EC:
	// lwz r11,8104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82ebf514
	if (!ctx.cr6.gt) goto loc_82EBF514;
	// bl 0x82ed0a70
	ctx.lr = 0x82EBF4FC;
	sub_82ED0A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82EBF50C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,2812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2812, ctx.r11.u32);
loc_82EBF514:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBF524"))) PPC_WEAK_FUNC(sub_82EBF524);
PPC_FUNC_IMPL(__imp__sub_82EBF524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBF528"))) PPC_WEAK_FUNC(sub_82EBF528);
PPC_FUNC_IMPL(__imp__sub_82EBF528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,77
	ctx.r11.s64 = 5046272;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,22528
	ctx.r11.u64 = ctx.r11.u64 | 22528;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82ebf540
	if (!ctx.cr6.gt) goto loc_82EBF540;
	// stw r9,1604(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1604, ctx.r9.u32);
loc_82EBF540:
	// lwz r10,8104(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8104);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x82ebf554
	if (ctx.cr6.lt) goto loc_82EBF554;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r8,1608(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1608, ctx.r8.u32);
loc_82EBF554:
	// subfc r8,r4,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r4.u32;
	ctx.r8.s64 = ctx.r11.s64 - ctx.r4.s64;
	// eqv r7,r4,r11
	ctx.r7.u64 = ~(ctx.r4.u64 ^ ctx.r11.u64);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// rlwinm r6,r7,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// clrlwi r11,r5,31
	ctx.r11.u64 = ctx.r5.u32 & 0x1;
	// stw r11,30392(r3)
	PPC_STORE_U32(ctx.r3.u32 + 30392, ctx.r11.u32);
	// blt cr6,0x82ebf578
	if (ctx.cr6.lt) goto loc_82EBF578;
	// stw r9,2336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2336, ctx.r9.u32);
loc_82EBF578:
	// lwz r11,2184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2184);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x82ebf5b4
	if (ctx.cr6.lt) goto loc_82EBF5B4;
	// lis r11,112
	ctx.r11.s64 = 7340032;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// subfc r10,r11,r4
	ctx.xer.ca = ctx.r4.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r4.s64 - ctx.r11.s64;
	// eqv r9,r11,r4
	ctx.r9.u64 = ~(ctx.r11.u64 ^ ctx.r4.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// stw r6,1580(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1580, ctx.r6.u32);
	// stw r6,1584(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1584, ctx.r6.u32);
	// blr 
	return;
loc_82EBF5B4:
	// lis r11,46
	ctx.r11.s64 = 3014656;
	// rlwinm r10,r4,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// ori r11,r11,26624
	ctx.r11.u64 = ctx.r11.u64 | 26624;
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// subfc r8,r4,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r4.u32;
	ctx.r8.s64 = ctx.r11.s64 - ctx.r4.s64;
	// adde r11,r10,r9
	temp.u8 = (ctx.r10.u32 + ctx.r9.u32 < ctx.r10.u32) | (ctx.r10.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r11,1580(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1580, ctx.r11.u32);
	// stw r11,1584(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1584, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBF5D8"))) PPC_WEAK_FUNC(sub_82EBF5D8);
PPC_FUNC_IMPL(__imp__sub_82EBF5D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,30976(r3)
	PPC_STORE_U32(ctx.r3.u32 + 30976, ctx.r11.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,30980(r3)
	PPC_STORE_U32(ctx.r3.u32 + 30980, ctx.r10.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r9,30984(r3)
	PPC_STORE_U32(ctx.r3.u32 + 30984, ctx.r9.u32);
	// lwz r8,12(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r8,30988(r3)
	PPC_STORE_U32(ctx.r3.u32 + 30988, ctx.r8.u32);
	// lwz r7,16(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r7,30992(r3)
	PPC_STORE_U32(ctx.r3.u32 + 30992, ctx.r7.u32);
	// lwz r6,20(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r6,30996(r3)
	PPC_STORE_U32(ctx.r3.u32 + 30996, ctx.r6.u32);
	// lwz r5,28(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stw r5,31004(r3)
	PPC_STORE_U32(ctx.r3.u32 + 31004, ctx.r5.u32);
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r11,31000(r3)
	PPC_STORE_U32(ctx.r3.u32 + 31000, ctx.r11.u32);
	// lwz r10,32(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// stw r10,31008(r3)
	PPC_STORE_U32(ctx.r3.u32 + 31008, ctx.r10.u32);
	// lwz r9,36(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// stw r9,31012(r3)
	PPC_STORE_U32(ctx.r3.u32 + 31012, ctx.r9.u32);
	// lwz r8,40(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// stw r8,31016(r3)
	PPC_STORE_U32(ctx.r3.u32 + 31016, ctx.r8.u32);
	// lwz r7,44(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// stw r7,31020(r3)
	PPC_STORE_U32(ctx.r3.u32 + 31020, ctx.r7.u32);
	// lwz r6,48(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// stw r6,31028(r3)
	PPC_STORE_U32(ctx.r3.u32 + 31028, ctx.r6.u32);
	// lwz r5,52(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// stw r5,31032(r3)
	PPC_STORE_U32(ctx.r3.u32 + 31032, ctx.r5.u32);
	// lwz r11,64(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// stw r11,31036(r3)
	PPC_STORE_U32(ctx.r3.u32 + 31036, ctx.r11.u32);
	// lwz r10,56(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// stw r10,31040(r3)
	PPC_STORE_U32(ctx.r3.u32 + 31040, ctx.r10.u32);
	// lwz r9,68(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// stw r9,31044(r3)
	PPC_STORE_U32(ctx.r3.u32 + 31044, ctx.r9.u32);
	// lwz r8,72(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// stw r8,31048(r3)
	PPC_STORE_U32(ctx.r3.u32 + 31048, ctx.r8.u32);
	// lwz r7,76(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// stw r7,31052(r3)
	PPC_STORE_U32(ctx.r3.u32 + 31052, ctx.r7.u32);
	// lwz r6,84(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	// stw r6,31060(r3)
	PPC_STORE_U32(ctx.r3.u32 + 31060, ctx.r6.u32);
	// lwz r5,80(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// stw r5,31056(r3)
	PPC_STORE_U32(ctx.r3.u32 + 31056, ctx.r5.u32);
	// lwz r11,92(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	// stw r11,31068(r3)
	PPC_STORE_U32(ctx.r3.u32 + 31068, ctx.r11.u32);
	// lwz r10,96(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	// stw r10,31072(r3)
	PPC_STORE_U32(ctx.r3.u32 + 31072, ctx.r10.u32);
	// lwz r9,88(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// stw r9,31064(r3)
	PPC_STORE_U32(ctx.r3.u32 + 31064, ctx.r9.u32);
	// lwz r8,60(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// stw r8,31080(r3)
	PPC_STORE_U32(ctx.r3.u32 + 31080, ctx.r8.u32);
	// lwz r7,100(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// stw r7,31076(r3)
	PPC_STORE_U32(ctx.r3.u32 + 31076, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBF6AC"))) PPC_WEAK_FUNC(sub_82EBF6AC);
PPC_FUNC_IMPL(__imp__sub_82EBF6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBF6B0"))) PPC_WEAK_FUNC(sub_82EBF6B0);
PPC_FUNC_IMPL(__imp__sub_82EBF6B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,30976(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30976);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82ebf6cc
	if (ctx.cr6.eq) goto loc_82EBF6CC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r9,1576(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1576, ctx.r9.u32);
loc_82EBF6CC:
	// lwz r11,30980(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30980);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82ebf6e8
	if (ctx.cr6.eq) goto loc_82EBF6E8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r9,1608(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1608, ctx.r9.u32);
loc_82EBF6E8:
	// lwz r11,30984(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30984);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82ebf704
	if (ctx.cr6.eq) goto loc_82EBF704;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r9,1604(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1604, ctx.r9.u32);
loc_82EBF704:
	// lwz r11,30988(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30988);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82ebf720
	if (ctx.cr6.eq) goto loc_82EBF720;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r9,1612(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1612, ctx.r9.u32);
loc_82EBF720:
	// lwz r11,30992(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30992);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82ebf768
	if (ctx.cr6.eq) goto loc_82EBF768;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,30996(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30996);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r7,2424(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2424, ctx.r7.u32);
	// bne cr6,0x82ebf758
	if (!ctx.cr6.eq) goto loc_82EBF758;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,2424(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2424, ctx.r11.u32);
	// b 0x82ebf764
	goto loc_82EBF764;
loc_82EBF758:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82ebf768
	if (ctx.cr6.gt) goto loc_82EBF768;
	// stw r8,2424(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2424, ctx.r8.u32);
loc_82EBF764:
	// stw r8,30996(r3)
	PPC_STORE_U32(ctx.r3.u32 + 30996, ctx.r8.u32);
loc_82EBF768:
	// lwz r11,31000(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31000);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82ebf784
	if (ctx.cr6.eq) goto loc_82EBF784;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r9,788(r3)
	PPC_STORE_U32(ctx.r3.u32 + 788, ctx.r9.u32);
loc_82EBF784:
	// lwz r11,31004(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31004);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82ebf7a0
	if (ctx.cr6.eq) goto loc_82EBF7A0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r9,2336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2336, ctx.r9.u32);
loc_82EBF7A0:
	// lwz r11,31008(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31008);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82ebf7bc
	if (ctx.cr6.eq) goto loc_82EBF7BC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r9,21096(r3)
	PPC_STORE_U32(ctx.r3.u32 + 21096, ctx.r9.u32);
loc_82EBF7BC:
	// lwz r11,31012(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31012);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82ebf7d8
	if (ctx.cr6.eq) goto loc_82EBF7D8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r9,2812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2812, ctx.r9.u32);
loc_82EBF7D8:
	// lwz r11,31016(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31016);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ebf7ec
	if (!ctx.cr6.eq) goto loc_82EBF7EC;
	// stw r8,30624(r3)
	PPC_STORE_U32(ctx.r3.u32 + 30624, ctx.r8.u32);
	// stw r8,30628(r3)
	PPC_STORE_U32(ctx.r3.u32 + 30628, ctx.r8.u32);
loc_82EBF7EC:
	// lwz r11,31020(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31020);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82ebf808
	if (ctx.cr6.eq) goto loc_82EBF808;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r9,2260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2260, ctx.r9.u32);
loc_82EBF808:
	// lwz r6,31028(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31028);
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x82ebf820
	if (ctx.cr6.eq) goto loc_82EBF820;
	// addic r11,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// subfe r10,r11,r6
	temp.u8 = (~ctx.r11.u32 + ctx.r6.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r10,6772(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6772, ctx.r10.u32);
loc_82EBF820:
	// lwz r7,31032(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31032);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// beq cr6,0x82ebf898
	if (ctx.cr6.eq) goto loc_82EBF898;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82ebf844
	if (!ctx.cr6.eq) goto loc_82EBF844;
	// stw r8,1432(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1432, ctx.r8.u32);
	// stw r8,1440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1440, ctx.r8.u32);
	// b 0x82ebf894
	goto loc_82EBF894;
loc_82EBF844:
	// lwz r10,31036(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31036);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82ebf864
	if (!ctx.cr6.eq) goto loc_82EBF864;
	// stw r11,1436(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1436, ctx.r11.u32);
	// stw r11,1432(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1432, ctx.r11.u32);
	// stw r8,1440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1440, ctx.r8.u32);
	// stw r11,1428(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1428, ctx.r11.u32);
	// b 0x82ebf898
	goto loc_82EBF898;
loc_82EBF864:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82ebf880
	if (!ctx.cr6.eq) goto loc_82EBF880;
	// stw r11,1436(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1436, ctx.r11.u32);
	// stw r11,1432(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1432, ctx.r11.u32);
	// stw r8,1440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1440, ctx.r8.u32);
	// stw r8,1428(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1428, ctx.r8.u32);
	// b 0x82ebf898
	goto loc_82EBF898;
loc_82EBF880:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82ebf898
	if (!ctx.cr6.eq) goto loc_82EBF898;
	// stw r11,1432(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1432, ctx.r11.u32);
	// stw r11,1440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1440, ctx.r11.u32);
	// stw r8,1428(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1428, ctx.r8.u32);
loc_82EBF894:
	// stw r8,1436(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1436, ctx.r8.u32);
loc_82EBF898:
	// lwz r10,31080(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31080);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82ebf8bc
	if (ctx.cr6.eq) goto loc_82EBF8BC;
	// stw r10,30944(r3)
	PPC_STORE_U32(ctx.r3.u32 + 30944, ctx.r10.u32);
	// stw r10,30940(r3)
	PPC_STORE_U32(ctx.r3.u32 + 30940, ctx.r10.u32);
	// stw r11,30888(r3)
	PPC_STORE_U32(ctx.r3.u32 + 30888, ctx.r11.u32);
	// stw r11,30884(r3)
	PPC_STORE_U32(ctx.r3.u32 + 30884, ctx.r11.u32);
	// stw r11,30880(r3)
	PPC_STORE_U32(ctx.r3.u32 + 30880, ctx.r11.u32);
	// stw r10,30936(r3)
	PPC_STORE_U32(ctx.r3.u32 + 30936, ctx.r10.u32);
loc_82EBF8BC:
	// lwz r10,31040(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31040);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82ebf904
	if (ctx.cr6.eq) goto loc_82EBF904;
	// lwz r9,2152(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2152);
	// stw r10,30928(r3)
	PPC_STORE_U32(ctx.r3.u32 + 30928, ctx.r10.u32);
	// stw r10,30924(r3)
	PPC_STORE_U32(ctx.r3.u32 + 30924, ctx.r10.u32);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// stw r11,30872(r3)
	PPC_STORE_U32(ctx.r3.u32 + 30872, ctx.r11.u32);
	// stw r11,30868(r3)
	PPC_STORE_U32(ctx.r3.u32 + 30868, ctx.r11.u32);
	// beq cr6,0x82ebf8f0
	if (ctx.cr6.eq) goto loc_82EBF8F0;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,30876(r3)
	PPC_STORE_U32(ctx.r3.u32 + 30876, ctx.r11.u32);
	// stw r10,30932(r3)
	PPC_STORE_U32(ctx.r3.u32 + 30932, ctx.r10.u32);
loc_82EBF8F0:
	// lwz r11,30932(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30932);
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// ble cr6,0x82ebf904
	if (!ctx.cr6.gt) goto loc_82EBF904;
	// li r11,31
	ctx.r11.s64 = 31;
	// stw r11,30932(r3)
	PPC_STORE_U32(ctx.r3.u32 + 30932, ctx.r11.u32);
loc_82EBF904:
	// lwz r11,31048(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31048);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82ebf924
	if (ctx.cr6.eq) goto loc_82EBF924;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x82ebf920
	if (ctx.cr6.gt) goto loc_82EBF920;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bge cr6,0x82ebf924
	if (!ctx.cr6.lt) goto loc_82EBF924;
loc_82EBF920:
	// stw r8,31048(r3)
	PPC_STORE_U32(ctx.r3.u32 + 31048, ctx.r8.u32);
loc_82EBF924:
	// lwz r11,31052(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31052);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82ebf944
	if (ctx.cr6.eq) goto loc_82EBF944;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x82ebf940
	if (ctx.cr6.gt) goto loc_82EBF940;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bge cr6,0x82ebf944
	if (!ctx.cr6.lt) goto loc_82EBF944;
loc_82EBF940:
	// stw r8,31052(r3)
	PPC_STORE_U32(ctx.r3.u32 + 31052, ctx.r8.u32);
loc_82EBF944:
	// lwz r11,31068(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31068);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82ebf964
	if (ctx.cr6.eq) goto loc_82EBF964;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x82ebf960
	if (ctx.cr6.gt) goto loc_82EBF960;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bge cr6,0x82ebf964
	if (!ctx.cr6.lt) goto loc_82EBF964;
loc_82EBF960:
	// stw r8,31068(r3)
	PPC_STORE_U32(ctx.r3.u32 + 31068, ctx.r8.u32);
loc_82EBF964:
	// lwz r11,31076(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31076);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82ebf984
	if (ctx.cr6.eq) goto loc_82EBF984;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x82ebf980
	if (ctx.cr6.gt) goto loc_82EBF980;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bge cr6,0x82ebf984
	if (!ctx.cr6.lt) goto loc_82EBF984;
loc_82EBF980:
	// stw r8,31076(r3)
	PPC_STORE_U32(ctx.r3.u32 + 31076, ctx.r8.u32);
loc_82EBF984:
	// lwz r11,31072(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31072);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82ebf9a4
	if (ctx.cr6.eq) goto loc_82EBF9A4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x82ebf9a0
	if (ctx.cr6.gt) goto loc_82EBF9A0;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bge cr6,0x82ebf9a4
	if (!ctx.cr6.lt) goto loc_82EBF9A4;
loc_82EBF9A0:
	// stw r8,31072(r3)
	PPC_STORE_U32(ctx.r3.u32 + 31072, ctx.r8.u32);
loc_82EBF9A4:
	// lwz r11,31060(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31060);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82ebf9c4
	if (ctx.cr6.eq) goto loc_82EBF9C4;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bgt cr6,0x82ebf9c0
	if (ctx.cr6.gt) goto loc_82EBF9C0;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bge cr6,0x82ebf9c4
	if (!ctx.cr6.lt) goto loc_82EBF9C4;
loc_82EBF9C0:
	// stw r8,31060(r3)
	PPC_STORE_U32(ctx.r3.u32 + 31060, ctx.r8.u32);
loc_82EBF9C4:
	// lwz r11,31064(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31064);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82ebf9e4
	if (ctx.cr6.eq) goto loc_82EBF9E4;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bgt cr6,0x82ebf9e0
	if (ctx.cr6.gt) goto loc_82EBF9E0;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bge cr6,0x82ebf9e4
	if (!ctx.cr6.lt) goto loc_82EBF9E4;
loc_82EBF9E0:
	// stw r8,31064(r3)
	PPC_STORE_U32(ctx.r3.u32 + 31064, ctx.r8.u32);
loc_82EBF9E4:
	// lwz r11,31056(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31056);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82ebfa04
	if (ctx.cr6.eq) goto loc_82EBFA04;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bgt cr6,0x82ebfa00
	if (ctx.cr6.gt) goto loc_82EBFA00;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bge cr6,0x82ebfa04
	if (!ctx.cr6.lt) goto loc_82EBFA04;
loc_82EBFA00:
	// stw r8,31056(r3)
	PPC_STORE_U32(ctx.r3.u32 + 31056, ctx.r8.u32);
loc_82EBFA04:
	// lis r11,-31959
	ctx.r11.s64 = -2094465024;
	// lwz r11,-30892(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30892);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x82ebfa30
	if (ctx.cr6.eq) goto loc_82EBFA30;
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,31036(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31036);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82EBFA30:
	// li r3,987
	ctx.r3.s64 = 987;
	// b 0x82fa40d8
	sub_82FA40D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EBFA38"))) PPC_WEAK_FUNC(sub_82EBFA38);
PPC_FUNC_IMPL(__imp__sub_82EBFA38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBFA3C"))) PPC_WEAK_FUNC(sub_82EBFA3C);
PPC_FUNC_IMPL(__imp__sub_82EBFA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBFA40"))) PPC_WEAK_FUNC(sub_82EBFA40);
PPC_FUNC_IMPL(__imp__sub_82EBFA40) {
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
	// bl 0x82fa4108
	ctx.lr = 0x82EBFA58;
	sub_82FA4108(ctx, base);
	// lwz r11,30984(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30984);
	// clrlwi r10,r3,31
	ctx.r10.u64 = ctx.r3.u32 & 0x1;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// stw r10,1276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1276, ctx.r10.u32);
	// bne cr6,0x82ebfa78
	if (!ctx.cr6.eq) goto loc_82EBFA78;
	// bl 0x82fa4108
	ctx.lr = 0x82EBFA70;
	sub_82FA4108(ctx, base);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// stw r11,1604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1604, ctx.r11.u32);
loc_82EBFA78:
	// lwz r11,30992(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30992);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82ebfaa0
	if (!ctx.cr6.eq) goto loc_82EBFAA0;
	// bl 0x82fa4108
	ctx.lr = 0x82EBFA88;
	sub_82FA4108(ctx, base);
	// clrlwi r11,r3,30
	ctx.r11.u64 = ctx.r3.u32 & 0x3;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// stw r11,2424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2424, ctx.r11.u32);
	// bne cr6,0x82ebfaa0
	if (!ctx.cr6.eq) goto loc_82EBFAA0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,2424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2424, ctx.r11.u32);
loc_82EBFAA0:
	// lwz r11,30980(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30980);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82ebfab8
	if (!ctx.cr6.eq) goto loc_82EBFAB8;
	// bl 0x82fa4108
	ctx.lr = 0x82EBFAB0;
	sub_82FA4108(ctx, base);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// stw r11,1608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1608, ctx.r11.u32);
loc_82EBFAB8:
	// lwz r11,31004(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31004);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82ebfad0
	if (!ctx.cr6.eq) goto loc_82EBFAD0;
	// bl 0x82fa4108
	ctx.lr = 0x82EBFAC8;
	sub_82FA4108(ctx, base);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// stw r11,2336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2336, ctx.r11.u32);
loc_82EBFAD0:
	// lwz r11,31000(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31000);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82ebfae8
	if (!ctx.cr6.eq) goto loc_82EBFAE8;
	// bl 0x82fa4108
	ctx.lr = 0x82EBFAE0;
	sub_82FA4108(ctx, base);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// stw r11,788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 788, ctx.r11.u32);
loc_82EBFAE8:
	// lwz r11,31032(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31032);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82ebfb50
	if (!ctx.cr6.eq) goto loc_82EBFB50;
	// bl 0x82fa4108
	ctx.lr = 0x82EBFAF8;
	sub_82FA4108(ctx, base);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,1436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1436, ctx.r11.u32);
	// beq cr6,0x82ebfb20
	if (ctx.cr6.eq) goto loc_82EBFB20;
	// bl 0x82fa4108
	ctx.lr = 0x82EBFB0C;
	sub_82FA4108(ctx, base);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r11.u32);
	// stw r10,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r10.u32);
	// b 0x82ebfb2c
	goto loc_82EBFB2C;
loc_82EBFB20:
	// bl 0x82fa4108
	ctx.lr = 0x82EBFB24;
	sub_82FA4108(ctx, base);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// stw r11,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r11.u32);
loc_82EBFB2C:
	// lwz r11,1436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1436);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ebfb48
	if (!ctx.cr6.eq) goto loc_82EBFB48;
	// lwz r11,1440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82ebfb4c
	if (ctx.cr6.eq) goto loc_82EBFB4C;
loc_82EBFB48:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EBFB4C:
	// stw r11,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r11.u32);
loc_82EBFB50:
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

__attribute__((alias("__imp__sub_82EBFB64"))) PPC_WEAK_FUNC(sub_82EBFB64);
PPC_FUNC_IMPL(__imp__sub_82EBFB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBFB68"))) PPC_WEAK_FUNC(sub_82EBFB68);
PPC_FUNC_IMPL(__imp__sub_82EBFB68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31959
	ctx.r11.s64 = -2094465024;
	// li r9,897
	ctx.r9.s64 = 897;
	// addi r10,r11,-11176
	ctx.r10.s64 = ctx.r11.s64 + -11176;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1023
	ctx.r7.s64 = 1023;
	// stw r8,19220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 19220, ctx.r8.u32);
	// li r11,127
	ctx.r11.s64 = 127;
	// stw r7,28548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28548, ctx.r7.u32);
	// addi r10,r10,252
	ctx.r10.s64 = ctx.r10.s64 + 252;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82EBFB90:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x82ebfb90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82EBFB90;
	// lis r11,-31972
	ctx.r11.s64 = -2095316992;
	// lis r10,-31972
	ctx.r10.s64 = -2095316992;
	// lis r9,-31972
	ctx.r9.s64 = -2095316992;
	// lis r5,-31971
	ctx.r5.s64 = -2095251456;
	// addi r7,r9,2024
	ctx.r7.s64 = ctx.r9.s64 + 2024;
	// addi r8,r11,-10648
	ctx.r8.s64 = ctx.r11.s64 + -10648;
	// addi r6,r10,-2584
	ctx.r6.s64 = ctx.r10.s64 + -2584;
	// stw r7,20892(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20892, ctx.r7.u32);
	// addi r4,r5,2024
	ctx.r4.s64 = ctx.r5.s64 + 2024;
	// stw r8,20864(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20864, ctx.r8.u32);
	// stw r6,20868(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20868, ctx.r6.u32);
	// stw r7,20888(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20888, ctx.r7.u32);
	// stw r4,20896(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20896, ctx.r4.u32);
	// b 0x82f3b960
	sub_82F3B960(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EBFBD8"))) PPC_WEAK_FUNC(sub_82EBFBD8);
PPC_FUNC_IMPL(__imp__sub_82EBFBD8) {
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
	// lwz r11,7596(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7596);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ebfc1c
	if (ctx.cr6.eq) goto loc_82EBFC1C;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82ebfc1c
	if (ctx.cr6.eq) goto loc_82EBFC1C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82ebfc2c
	if (!ctx.cr6.eq) goto loc_82EBFC2C;
	// stw r30,7600(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7600, ctx.r30.u32);
	// bl 0x82f3d9a0
	ctx.lr = 0x82EBFC18;
	sub_82F3D9A0(ctx, base);
	// b 0x82ebfc2c
	goto loc_82EBFC2C;
loc_82EBFC1C:
	// stw r30,7600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7600, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,7936(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7936);
	// bl 0x82f3cf40
	ctx.lr = 0x82EBFC2C;
	sub_82F3CF40(ctx, base);
loc_82EBFC2C:
	// lwz r11,7596(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7596);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82ebfc40
	if (ctx.cr6.eq) goto loc_82EBFC40;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82ebfc64
	if (!ctx.cr6.eq) goto loc_82EBFC64;
loc_82EBFC40:
	// lwz r11,7592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7592);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ebfc60
	if (ctx.cr6.eq) goto loc_82EBFC60;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,92
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 92, ctx.xer);
	// bne cr6,0x82ebfc60
	if (!ctx.cr6.eq) goto loc_82EBFC60;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,7592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7592, ctx.r11.u32);
loc_82EBFC60:
	// stw r30,7624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7624, ctx.r30.u32);
loc_82EBFC64:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_82EBFC80"))) PPC_WEAK_FUNC(sub_82EBFC80);
PPC_FUNC_IMPL(__imp__sub_82EBFC80) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ebfcb0
	if (ctx.cr6.eq) goto loc_82EBFCB0;
	// lwz r11,8180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8180);
	// lwz r10,168(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82ebfcb0
	if (ctx.cr6.eq) goto loc_82EBFCB0;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82ebfcb0
	if (ctx.cr6.lt) goto loc_82EBFCB0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x82ebfd5c
	if (!ctx.cr6.gt) goto loc_82EBFD5C;
loc_82EBFCB0:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,7596(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7596);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82ebfcf4
	if (!ctx.cr6.eq) goto loc_82EBFCF4;
	// lwz r11,7904(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7904);
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// bge cr6,0x82ebfce0
	if (!ctx.cr6.lt) goto loc_82EBFCE0;
loc_82EBFCD4:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,21076(r3)
	PPC_STORE_U32(ctx.r3.u32 + 21076, ctx.r11.u32);
	// blr 
	return;
loc_82EBFCE0:
	// cmpwi cr6,r11,50
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 50, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,21076(r3)
	PPC_STORE_U32(ctx.r3.u32 + 21076, ctx.r11.u32);
	// blr 
	return;
loc_82EBFCF4:
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// lfd f0,6568(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 6568);
	// fmul f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 * ctx.f0.f64;
	// lfd f13,6560(r9)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + 6560);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82ebfd24
	if (ctx.cr6.lt) goto loc_82EBFD24;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82EBFD24:
	// lfd f13,7888(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r3.u32 + 7888);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82ebfcd4
	if (ctx.cr6.lt) goto loc_82EBFCD4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfd f12,-5104(r11)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + -5104);
	// fmul f0,f0,f12
	ctx.f0.f64 = ctx.f0.f64 * ctx.f12.f64;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r11,17
	ctx.r11.s64 = 1114112;
	// ori r10,r11,37888
	ctx.r10.u64 = ctx.r11.u64 | 37888;
	// li r11,2
	ctx.r11.s64 = 2;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82ebfd5c
	if (ctx.cr6.gt) goto loc_82EBFD5C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EBFD5C:
	// stw r11,21076(r3)
	PPC_STORE_U32(ctx.r3.u32 + 21076, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBFD64"))) PPC_WEAK_FUNC(sub_82EBFD64);
PPC_FUNC_IMPL(__imp__sub_82EBFD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBFD68"))) PPC_WEAK_FUNC(sub_82EBFD68);
PPC_FUNC_IMPL(__imp__sub_82EBFD68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ebfd94
	if (!ctx.cr6.eq) goto loc_82EBFD94;
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r4,2124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2124, ctx.r4.u32);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r4,7840(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7840, ctx.r4.u32);
	// addi r9,r11,-23448
	ctx.r9.s64 = ctx.r11.s64 + -23448;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r8,2128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2128, ctx.r8.u32);
	// blr 
	return;
loc_82EBFD94:
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2124, ctx.r11.u32);
	// stw r11,7840(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7840, ctx.r11.u32);
	// lwz r11,-23448(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23448);
	// stw r11,2128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2128, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBFDB0"))) PPC_WEAK_FUNC(sub_82EBFDB0);
PPC_FUNC_IMPL(__imp__sub_82EBFDB0) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82ebfde0
	if (!ctx.cr6.eq) goto loc_82EBFDE0;
	// lwz r11,30728(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30728);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ebfde0
	if (!ctx.cr6.eq) goto loc_82EBFDE0;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x82f3e0d8
	ctx.lr = 0x82EBFDE0;
	sub_82F3E0D8(ctx, base);
loc_82EBFDE0:
	// lwz r11,30752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30752);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ebfdf8
	if (!ctx.cr6.eq) goto loc_82EBFDF8;
	// lwz r11,30756(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30756);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ebfe08
	if (ctx.cr6.eq) goto loc_82EBFE08;
loc_82EBFDF8:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f3de70
	ctx.lr = 0x82EBFE08;
	sub_82F3DE70(ctx, base);
loc_82EBFE08:
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

__attribute__((alias("__imp__sub_82EBFE1C"))) PPC_WEAK_FUNC(sub_82EBFE1C);
PPC_FUNC_IMPL(__imp__sub_82EBFE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBFE20"))) PPC_WEAK_FUNC(sub_82EBFE20);
PPC_FUNC_IMPL(__imp__sub_82EBFE20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82EBFE28;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,7868(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7868);
	// bl 0x82f3fd28
	ctx.lr = 0x82EBFE44;
	sub_82F3FD28(ctx, base);
	// lwz r11,2184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ebfe58
	if (!ctx.cr6.eq) goto loc_82EBFE58;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82ebfe74
	goto loc_82EBFE74;
loc_82EBFE58:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82ebfe68
	if (!ctx.cr6.eq) goto loc_82EBFE68;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82ebfe74
	goto loc_82EBFE74;
loc_82EBFE68:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82ebfe80
	if (!ctx.cr6.eq) goto loc_82EBFE80;
	// li r4,2
	ctx.r4.s64 = 2;
loc_82EBFE74:
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x82f3fd88
	ctx.lr = 0x82EBFE80;
	sub_82F3FD88(ctx, base);
loc_82EBFE80:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f3fd88
	ctx.lr = 0x82EBFE90;
	sub_82F3FD88(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// lwz r4,2824(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2824);
	// bl 0x82f3fd88
	ctx.lr = 0x82EBFEA0;
	sub_82F3FD88(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lfd f0,7688(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 7688);
	// lfd f13,6576(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 6576);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82ebfebc
	if (ctx.cr6.lt) goto loc_82EBFEBC;
	// li r11,31
	ctx.r11.s64 = 31;
	// b 0x82ebfec8
	goto loc_82EBFEC8;
loc_82EBFEBC:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82EBFEC8:
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lfd f0,7888(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 7888);
	// lfd f13,30024(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 30024);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82ebfee4
	if (ctx.cr6.lt) goto loc_82EBFEE4;
	// li r30,2047
	ctx.r30.s64 = 2047;
	// b 0x82ebfef0
	goto loc_82EBFEF0;
loc_82EBFEE4:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82EBFEF0:
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// srawi r4,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 2;
	// bl 0x82f3fd88
	ctx.lr = 0x82EBFF00;
	sub_82F3FD88(ctx, base);
	// li r5,5
	ctx.r5.s64 = 5;
	// srawi r4,r30,6
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3F) != 0);
	ctx.r4.s64 = ctx.r30.s32 >> 6;
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x82f3fd88
	ctx.lr = 0x82EBFF10;
	sub_82F3FD88(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,1604(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1604);
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x82f3fd88
	ctx.lr = 0x82EBFF20;
	sub_82F3FD88(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,1580(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1580);
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x82f3fd88
	ctx.lr = 0x82EBFF30;
	sub_82F3FD88(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,1612(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1612);
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x82f3fd88
	ctx.lr = 0x82EBFF40;
	sub_82F3FD88(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,1576(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1576);
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x82f3fd88
	ctx.lr = 0x82EBFF50;
	sub_82F3FD88(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,788(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 788);
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x82f3fd88
	ctx.lr = 0x82EBFF60;
	sub_82F3FD88(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,2564(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2564);
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x82f3fd88
	ctx.lr = 0x82EBFF70;
	sub_82F3FD88(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,2424(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2424);
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x82f3fd88
	ctx.lr = 0x82EBFF80;
	sub_82F3FD88(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,1608(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x82f3fd88
	ctx.lr = 0x82EBFF90;
	sub_82F3FD88(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,1540(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1540);
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x82f3fd88
	ctx.lr = 0x82EBFFA0;
	sub_82F3FD88(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,2336(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2336);
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x82f3fd88
	ctx.lr = 0x82EBFFB0;
	sub_82F3FD88(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,2260(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2260);
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x82f3fd88
	ctx.lr = 0x82EBFFC0;
	sub_82F3FD88(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,2812(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2812);
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x82f3fd88
	ctx.lr = 0x82EBFFD0;
	sub_82F3FD88(ctx, base);
	// lwz r4,2124(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2124);
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// stw r4,2120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2120, ctx.r4.u32);
	// bl 0x82f3fd88
	ctx.lr = 0x82EBFFE4;
	sub_82F3FD88(ctx, base);
	// lwz r11,1436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1436);
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// li r5,1
	ctx.r5.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec0008
	if (ctx.cr6.eq) goto loc_82EC0008;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82f3fd88
	ctx.lr = 0x82EC0000;
	sub_82F3FD88(ctx, base);
	// lwz r4,1428(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1428);
	// b 0x82ec0014
	goto loc_82EC0014;
loc_82EC0008:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f3fd88
	ctx.lr = 0x82EC0010;
	sub_82F3FD88(ctx, base);
	// lwz r4,1440(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
loc_82EC0014:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x82f3fd88
	ctx.lr = 0x82EC0020;
	sub_82F3FD88(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,1444(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1444);
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x82f3fd88
	ctx.lr = 0x82EC0030;
	sub_82F3FD88(ctx, base);
	// lwz r11,2824(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2824);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec0054
	if (ctx.cr6.eq) goto loc_82EC0054;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eca178
	ctx.lr = 0x82EC004C;
	sub_82ECA178(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_82EC0054:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82f3fd88
	ctx.lr = 0x82EC0064;
	sub_82F3FD88(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,2176(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2176);
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x82f3fd88
	ctx.lr = 0x82EC0074;
	sub_82F3FD88(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f3fd88
	ctx.lr = 0x82EC0084;
	sub_82F3FD88(ctx, base);
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x82f3ff68
	ctx.lr = 0x82EC008C;
	sub_82F3FF68(ctx, base);
	// lwz r11,7868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// subfic r9,r10,39
	ctx.xer.ca = ctx.r10.u32 <= 39;
	ctx.r9.s64 = 39 - ctx.r10.s64;
	// rlwinm r10,r9,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x82ea6940
	ctx.lr = 0x82EC00B0;
	sub_82EA6940(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC00B8"))) PPC_WEAK_FUNC(sub_82EC00B8);
PPC_FUNC_IMPL(__imp__sub_82EC00B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28492(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28492);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec00d0
	if (ctx.cr6.eq) goto loc_82EC00D0;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82EC00D0:
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// lfd f13,7688(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r8.u32 + 7688);
	// lwz r11,800(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 800);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// lwz r10,796(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 796);
	// addi r7,r11,15
	ctx.r7.s64 = ctx.r11.s64 + 15;
	// addi r6,r10,15
	ctx.r6.s64 = ctx.r10.s64 + 15;
	// lfd f0,-5472(r9)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + -5472);
	// srawi r5,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 4;
	// fadd f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 + ctx.f0.f64;
	// srawi r4,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 4;
	// mullw r6,r5,r4
	ctx.r6.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f11.u64);
	// lwz r5,-12(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// mullw r7,r6,r5
	ctx.r7.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// bge cr6,0x82ec0180
	if (!ctx.cr6.lt) goto loc_82EC0180;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r11,6664
	ctx.r10.s64 = ctx.r11.s64 + 6664;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_82EC0124:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82ec0148
	if (!ctx.cr6.gt) goto loc_82EC0148;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82ec0124
	if (ctx.cr6.lt) goto loc_82EC0124;
	// b 0x82ec0180
	goto loc_82EC0180;
loc_82EC0148:
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bge cr6,0x82ec0180
	if (!ctx.cr6.lt) goto loc_82EC0180;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r11,6644
	ctx.r10.s64 = ctx.r11.s64 + 6644;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_82EC0160:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r6,r9
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82ec0180
	if (!ctx.cr6.gt) goto loc_82EC0180;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82ec0160
	if (ctx.cr6.lt) goto loc_82EC0160;
loc_82EC0180:
	// lwz r11,7596(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 7596);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82ec01bc
	if (!ctx.cr6.eq) goto loc_82EC01BC;
	// lwz r11,7572(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 7572);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x82ec01a0
	if (!ctx.cr6.lt) goto loc_82EC01A0;
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// b 0x82ec01ac
	goto loc_82EC01AC;
loc_82EC01A0:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bge cr6,0x82ec01ac
	if (!ctx.cr6.lt) goto loc_82EC01AC;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82EC01AC:
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// ble cr6,0x82ec0270
	if (!ctx.cr6.gt) goto loc_82EC0270;
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x82ec0270
	goto loc_82EC0270;
loc_82EC01BC:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82ec020c
	if (!ctx.cr6.eq) goto loc_82EC020C;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfd f12,7888(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r8.u32 + 7888);
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// lfd f0,7896(r8)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r8.u32 + 7896);
	// stfd f11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f11.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// mulli r11,r9,10000
	ctx.r11.s64 = ctx.r9.s64 * 10000;
	// lfd f13,22080(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 22080);
	// fmul f10,f12,f13
	ctx.f10.f64 = ctx.f12.f64 * ctx.f13.f64;
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x82ec0230
	if (!ctx.cr6.gt) goto loc_82EC0230;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f13,22496(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22496);
	// fmul f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// b 0x82ec0228
	goto loc_82EC0228;
loc_82EC020C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f13,7888(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r8.u32 + 7888);
	// lfd f0,22496(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22496);
	// fmul f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 * ctx.f0.f64;
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f11.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
loc_82EC0228:
	// lwz r10,7936(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 7936);
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
loc_82EC0230:
	// addi r11,r11,1000
	ctx.r11.s64 = ctx.r11.s64 + 1000;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// srawi r9,r11,10
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 10;
	// bge cr6,0x82ec0270
	if (!ctx.cr6.lt) goto loc_82EC0270;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,6624
	ctx.r10.s64 = ctx.r10.s64 + 6624;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82EC0250:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82ec0270
	if (ctx.cr6.lt) goto loc_82EC0270;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82ec0250
	if (ctx.cr6.lt) goto loc_82EC0250;
loc_82EC0270:
	// stw r3,2188(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2188, ctx.r3.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r10,6604
	ctx.r9.s64 = ctx.r10.s64 + 6604;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// lwzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r6,r7,11,0,20
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 11) & 0xFFFFF800;
	// stw r6,2196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2196, ctx.r6.u32);
	// bge cr6,0x82ec0298
	if (!ctx.cr6.lt) goto loc_82EC0298;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82EC0298:
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// addi r7,r10,6584
	ctx.r7.s64 = ctx.r10.s64 + 6584;
	// ori r6,r9,59464
	ctx.r6.u64 = ctx.r9.u64 | 59464;
	// li r4,0
	ctx.r4.s64 = 0;
	// twllei r5,0
	if (ctx.r5.u32 <= 0) __builtin_debugtrap();
	// lwzx r11,r11,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// stw r4,2192(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2192, ctx.r4.u32);
	// mullw r10,r11,r6
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r9,r10,r5
	ctx.r9.s32 = ctx.r10.s32 / ctx.r5.s32;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// stw r9,2200(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2200, ctx.r9.u32);
	// andc r6,r5,r7
	ctx.r6.u64 = ctx.r5.u64 & ~ctx.r7.u64;
	// twlgei r6,-1
	if (ctx.r6.u32 >= 4294967295) __builtin_debugtrap();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC02D8"))) PPC_WEAK_FUNC(sub_82EC02D8);
PPC_FUNC_IMPL(__imp__sub_82EC02D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82EC02E0;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,30408(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30408);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec0324
	if (ctx.cr6.eq) goto loc_82EC0324;
	// stw r30,28492(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28492, ctx.r30.u32);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// stw r30,1444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1444, ctx.r30.u32);
	// stw r30,28504(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28504, ctx.r30.u32);
	// stw r30,28540(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28540, ctx.r30.u32);
	// stw r30,1264(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1264, ctx.r30.u32);
loc_82EC0324:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82ec0348
	if (ctx.cr6.eq) goto loc_82EC0348;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r6,r10,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82f3fd28
	ctx.lr = 0x82EC0348;
	sub_82F3FD28(ctx, base);
loc_82EC0348:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ec00b8
	ctx.lr = 0x82EC0350;
	sub_82EC00B8(ctx, base);
	// lwz r8,2188(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2188);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lfd f0,7688(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 7688);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,6696
	ctx.r9.s64 = ctx.r11.s64 + 6696;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lfd f13,6576(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 6576);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// stw r6,2624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2624, ctx.r6.u32);
	// blt cr6,0x82ec0384
	if (ctx.cr6.lt) goto loc_82EC0384;
	// li r27,31
	ctx.r27.s64 = 31;
	// b 0x82ec0390
	goto loc_82EC0390;
loc_82EC0384:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r27,84(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82EC0390:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lfd f0,7888(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 7888);
	// lfd f13,30024(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 30024);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82ec03ac
	if (ctx.cr6.lt) goto loc_82EC03AC;
	// li r29,2047
	ctx.r29.s64 = 2047;
	// b 0x82ec03b8
	goto loc_82EC03B8;
loc_82EC03AC:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82EC03B8:
	// li r11,3
	ctx.r11.s64 = 3;
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r11,2184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2184, ctx.r11.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82f3fd88
	ctx.lr = 0x82EC03D0;
	sub_82F3FD88(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r4,2188(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2188);
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x82f3fd88
	ctx.lr = 0x82EC03E0;
	sub_82F3FD88(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,28508(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28508);
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x82f3fd88
	ctx.lr = 0x82EC03F0;
	sub_82F3FD88(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// srawi r4,r27,2
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r27.s32 >> 2;
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x82f3fd88
	ctx.lr = 0x82EC0400;
	sub_82F3FD88(ctx, base);
	// li r5,5
	ctx.r5.s64 = 5;
	// srawi r4,r29,6
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3F) != 0);
	ctx.r4.s64 = ctx.r29.s32 >> 6;
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x82f3fd88
	ctx.lr = 0x82EC0410;
	sub_82F3FD88(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,2176(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2176);
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x82f3fd88
	ctx.lr = 0x82EC0420;
	sub_82F3FD88(ctx, base);
	// lwz r10,796(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 796);
	// li r5,12
	ctx.r5.s64 = 12;
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// addze r11,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r11.s64 = temp.s64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x82f3fd88
	ctx.lr = 0x82EC043C;
	sub_82F3FD88(ctx, base);
	// lwz r8,800(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// li r5,12
	ctx.r5.s64 = 12;
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// addze r11,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r11.s64 = temp.s64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x82f3fd88
	ctx.lr = 0x82EC0458;
	sub_82F3FD88(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,28488(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28488);
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x82f3fd88
	ctx.lr = 0x82EC0468;
	sub_82F3FD88(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,28492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28492);
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x82f3fd88
	ctx.lr = 0x82EC0478;
	sub_82F3FD88(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,28504(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28504);
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x82f3fd88
	ctx.lr = 0x82EC0488;
	sub_82F3FD88(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,1444(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1444);
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x82f3fd88
	ctx.lr = 0x82EC0498;
	sub_82F3FD88(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x82f3fd88
	ctx.lr = 0x82EC04A8;
	sub_82F3FD88(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,28540(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28540);
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x82f3fd88
	ctx.lr = 0x82EC04B8;
	sub_82F3FD88(ctx, base);
	// lwz r6,2824(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2824);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// addic r4,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r4.s64 = ctx.r6.s64 + -1;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r29,r10,r28
	ctx.r29.u64 = ctx.r10.u64 & ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82f3fd88
	ctx.lr = 0x82EC04D8;
	sub_82F3FD88(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82ec0654
	if (ctx.cr6.eq) goto loc_82EC0654;
	// lwz r11,808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 808);
	// li r5,14
	ctx.r5.s64 = 14;
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x82f3fd88
	ctx.lr = 0x82EC04F4;
	sub_82F3FD88(ctx, base);
	// lwz r11,812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 812);
	// li r5,14
	ctx.r5.s64 = 14;
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x82f3fd88
	ctx.lr = 0x82EC0508;
	sub_82F3FD88(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x82f3fd88
	ctx.lr = 0x82EC0518;
	sub_82F3FD88(ctx, base);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82ec0560
	if (ctx.cr6.eq) goto loc_82EC0560;
	// stw r25,28516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28516, ctx.r25.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x82f3fd88
	ctx.lr = 0x82EC0534;
	sub_82F3FD88(ctx, base);
	// lwz r11,28516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28516);
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// bne cr6,0x82ec0560
	if (!ctx.cr6.eq) goto loc_82EC0560;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,28520(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28520);
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x82f3fd88
	ctx.lr = 0x82EC0550;
	sub_82F3FD88(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,28524(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28524);
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x82f3fd88
	ctx.lr = 0x82EC0560;
	sub_82F3FD88(ctx, base);
loc_82EC0560:
	// lwz r29,268(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82f3fd88
	ctx.lr = 0x82EC0574;
	sub_82F3FD88(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82ec0608
	if (ctx.cr6.eq) goto loc_82EC0608;
	// lwz r4,276(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// stw r4,28528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28528, ctx.r4.u32);
	// bl 0x82f3fd88
	ctx.lr = 0x82EC0590;
	sub_82F3FD88(ctx, base);
	// lwz r11,28528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28528);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ec05c4
	if (!ctx.cr6.eq) goto loc_82EC05C4;
	// lwz r4,284(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// stw r4,28532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28532, ctx.r4.u32);
	// stw r11,28536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28536, ctx.r11.u32);
	// bl 0x82f3fd88
	ctx.lr = 0x82EC05B8;
	sub_82F3FD88(ctx, base);
	// lwz r4,28536(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28536);
	// li r5,4
	ctx.r5.s64 = 4;
	// b 0x82ec0600
	goto loc_82EC0600;
loc_82EC05C4:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lfd f12,7688(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r31.u32 + 7688);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lfd f0,6688(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 6688);
	// lfd f13,22496(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 22496);
	// fmadd f11,f12,f0,f13
	ctx.f11.f64 = ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64;
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82ec05f8
	if (!ctx.cr6.gt) goto loc_82EC05F8;
	// lis r11,1
	ctx.r11.s64 = 65536;
loc_82EC05F8:
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
loc_82EC0600:
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x82f3fd88
	ctx.lr = 0x82EC0608;
	sub_82F3FD88(ctx, base);
loc_82EC0608:
	// lwz r29,300(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82f3fd88
	ctx.lr = 0x82EC061C;
	sub_82F3FD88(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82ec0654
	if (ctx.cr6.eq) goto loc_82EC0654;
	// li r5,8
	ctx.r5.s64 = 8;
	// lbz r4,319(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 319);
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x82f3fd88
	ctx.lr = 0x82EC0634;
	sub_82F3FD88(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// lbz r4,327(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 327);
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x82f3fd88
	ctx.lr = 0x82EC0644;
	sub_82F3FD88(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// lbz r4,335(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 335);
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x82f3fd88
	ctx.lr = 0x82EC0654;
	sub_82F3FD88(ctx, base);
loc_82EC0654:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,1264(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1264);
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x82f3fd88
	ctx.lr = 0x82EC0664;
	sub_82F3FD88(ctx, base);
	// lwz r11,1264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1264);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec0720
	if (ctx.cr6.eq) goto loc_82EC0720;
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// lwz r4,1260(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// bl 0x82f3fd88
	ctx.lr = 0x82EC0680;
	sub_82F3FD88(ctx, base);
	// lwz r11,868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 868);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// addi r4,r11,-6
	ctx.r4.s64 = ctx.r11.s64 + -6;
	// bl 0x82f3fd88
	ctx.lr = 0x82EC0694;
	sub_82F3FD88(ctx, base);
	// lwz r11,872(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 872);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// bl 0x82f3fd88
	ctx.lr = 0x82EC06A8;
	sub_82F3FD88(ctx, base);
	// lwz r11,868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 868);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,872(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 872);
	// lwz r8,1260(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// addi r27,r11,-1
	ctx.r27.s64 = ctx.r11.s64 + -1;
	// addi r26,r10,-1
	ctx.r26.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82ec0720
	if (!ctx.cr6.gt) goto loc_82EC0720;
	// addi r29,r31,1000
	ctx.r29.s64 = ctx.r31.s64 + 1000;
loc_82EC06D4:
	// lwz r10,132(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 132);
	// li r5,16
	ctx.r5.s64 = 16;
	// lwzu r11,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// lwz r9,872(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 872);
	// add r8,r10,r26
	ctx.r8.u64 = ctx.r10.u64 + ctx.r26.u64;
	// lwz r7,868(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 868);
	// add r6,r11,r27
	ctx.r6.u64 = ctx.r11.u64 + ctx.r27.u64;
	// sraw r28,r8,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r28.s64 = ctx.r8.s32 >> temp.u32;
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// sraw r4,r6,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	ctx.r4.s64 = ctx.r6.s32 >> temp.u32;
	// bl 0x82f3fd88
	ctx.lr = 0x82EC0700;
	sub_82F3FD88(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x82f3fd88
	ctx.lr = 0x82EC0710;
	sub_82F3FD88(ctx, base);
	// lwz r5,1260(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82ec06d4
	if (ctx.cr6.lt) goto loc_82EC06D4;
loc_82EC0720:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82ec0754
	if (ctx.cr6.eq) goto loc_82EC0754;
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x82f3ff68
	ctx.lr = 0x82EC0730;
	sub_82F3FF68(ctx, base);
	// lwz r11,7868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subfic r8,r9,39
	ctx.xer.ca = ctx.r9.u32 <= 39;
	ctx.r8.s64 = 39 - ctx.r9.s64;
	// rlwinm r11,r8,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r7.u32);
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x82ea6940
	ctx.lr = 0x82EC0754;
	sub_82EA6940(ctx, base);
loc_82EC0754:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC075C"))) PPC_WEAK_FUNC(sub_82EC075C);
PPC_FUNC_IMPL(__imp__sub_82EC075C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC0760"))) PPC_WEAK_FUNC(sub_82EC0760);
PPC_FUNC_IMPL(__imp__sub_82EC0760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82EC0768;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,30408(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30408);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec07d0
	if (ctx.cr6.eq) goto loc_82EC07D0;
	// lwz r11,30432(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec0a10
	if (ctx.cr6.eq) goto loc_82EC0A10;
	// lwz r11,30672(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30672);
	// lwz r10,30648(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30648);
	// stw r30,1268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1268, ctx.r30.u32);
	// stw r28,1272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1272, ctx.r28.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// stw r30,1276(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1276, ctx.r30.u32);
	// stw r30,28164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28164, ctx.r30.u32);
	// stw r30,2564(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2564, ctx.r30.u32);
	// bne cr6,0x82ec07d0
	if (!ctx.cr6.eq) goto loc_82EC07D0;
	// lwz r11,30676(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30676);
	// lwz r10,30652(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30652);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfic r8,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r6,r28
	ctx.r28.u64 = ctx.r6.u64 & ctx.r28.u64;
loc_82EC07D0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r6,r10,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82f3fd28
	ctx.lr = 0x82EC07EC;
	sub_82F3FD28(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,1268(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1268);
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x82f3fd88
	ctx.lr = 0x82EC07FC;
	sub_82F3FD88(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,1272(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1272);
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x82f3fd88
	ctx.lr = 0x82EC080C;
	sub_82F3FD88(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,1276(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1276);
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x82f3fd88
	ctx.lr = 0x82EC081C;
	sub_82F3FD88(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,28164(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28164);
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x82f3fd88
	ctx.lr = 0x82EC082C;
	sub_82F3FD88(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,1604(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1604);
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x82f3fd88
	ctx.lr = 0x82EC083C;
	sub_82F3FD88(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,788(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 788);
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x82f3fd88
	ctx.lr = 0x82EC084C;
	sub_82F3FD88(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// lwz r4,2564(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2564);
	// bl 0x82f3fd88
	ctx.lr = 0x82EC085C;
	sub_82F3FD88(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,2424(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2424);
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x82f3fd88
	ctx.lr = 0x82EC086C;
	sub_82F3FD88(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,1608(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x82f3fd88
	ctx.lr = 0x82EC087C;
	sub_82F3FD88(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,2336(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2336);
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x82f3fd88
	ctx.lr = 0x82EC088C;
	sub_82F3FD88(ctx, base);
	// lwz r9,1436(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1436);
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// li r5,1
	ctx.r5.s64 = 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82ec08b0
	if (ctx.cr6.eq) goto loc_82EC08B0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82f3fd88
	ctx.lr = 0x82EC08A8;
	sub_82F3FD88(ctx, base);
	// lwz r4,1428(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1428);
	// b 0x82ec08bc
	goto loc_82EC08BC;
loc_82EC08B0:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f3fd88
	ctx.lr = 0x82EC08B8;
	sub_82F3FD88(ctx, base);
	// lwz r4,1440(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
loc_82EC08BC:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x82f3fd88
	ctx.lr = 0x82EC08C8;
	sub_82F3FD88(ctx, base);
	// lwz r11,1264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1264);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec0908
	if (ctx.cr6.eq) goto loc_82EC0908;
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82ec0908
	if (!ctx.cr6.gt) goto loc_82EC0908;
	// addi r29,r31,872
	ctx.r29.s64 = ctx.r31.s64 + 872;
loc_82EC08E4:
	// lwzu r11,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x82f3fd88
	ctx.lr = 0x82EC08F8;
	sub_82F3FD88(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82ec08e4
	if (ctx.cr6.lt) goto loc_82EC08E4;
loc_82EC0908:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82f3fd88
	ctx.lr = 0x82EC0918;
	sub_82F3FD88(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82ec0958
	if (ctx.cr6.eq) goto loc_82EC0958;
	// lwz r11,796(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 796);
	// li r5,12
	ctx.r5.s64 = 12;
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x82f3fd88
	ctx.lr = 0x82EC093C;
	sub_82F3FD88(ctx, base);
	// lwz r9,800(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// li r5,12
	ctx.r5.s64 = 12;
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// addze r11,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r11.s64 = temp.s64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x82f3fd88
	ctx.lr = 0x82EC0958;
	sub_82F3FD88(ctx, base);
loc_82EC0958:
	// lwz r11,2564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2564);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec0974
	if (ctx.cr6.eq) goto loc_82EC0974;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,2568(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2568);
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x82f3fd88
	ctx.lr = 0x82EC0974;
	sub_82F3FD88(ctx, base);
loc_82EC0974:
	// lwz r11,30784(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30784);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// neg r10,r11
	ctx.r10.s64 = -ctx.r11.s64;
	// andc r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// rlwinm r4,r9,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// bl 0x82f3fd88
	ctx.lr = 0x82EC0990;
	sub_82F3FD88(ctx, base);
	// lwz r11,30784(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30784);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82ec09ac
	if (!ctx.cr6.gt) goto loc_82EC09AC;
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x82f3fd88
	ctx.lr = 0x82EC09AC;
	sub_82F3FD88(ctx, base);
loc_82EC09AC:
	// lwz r11,30788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30788);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// neg r10,r11
	ctx.r10.s64 = -ctx.r11.s64;
	// andc r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// rlwinm r4,r9,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// bl 0x82f3fd88
	ctx.lr = 0x82EC09C8;
	sub_82F3FD88(ctx, base);
	// lwz r11,30788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30788);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82ec09e4
	if (!ctx.cr6.gt) goto loc_82EC09E4;
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x82f3fd88
	ctx.lr = 0x82EC09E4;
	sub_82F3FD88(ctx, base);
loc_82EC09E4:
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x82f3ff68
	ctx.lr = 0x82EC09EC;
	sub_82F3FF68(ctx, base);
	// lwz r11,7868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// subfic r9,r10,39
	ctx.xer.ca = ctx.r10.u32 <= 39;
	ctx.r9.s64 = 39 - ctx.r10.s64;
	// rlwinm r10,r9,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r8.u32);
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x82ea6940
	ctx.lr = 0x82EC0A10;
	sub_82EA6940(ctx, base);
loc_82EC0A10:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC0A18"))) PPC_WEAK_FUNC(sub_82EC0A18);
PPC_FUNC_IMPL(__imp__sub_82EC0A18) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r10,27988(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27988);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,31544(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC0A4C"))) PPC_WEAK_FUNC(sub_82EC0A4C);
PPC_FUNC_IMPL(__imp__sub_82EC0A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC0A50"))) PPC_WEAK_FUNC(sub_82EC0A50);
PPC_FUNC_IMPL(__imp__sub_82EC0A50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1272(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1272);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec0a6c
	if (ctx.cr6.eq) goto loc_82EC0A6C;
	// lwz r11,2124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2124);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
loc_82EC0A6C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC0A74"))) PPC_WEAK_FUNC(sub_82EC0A74);
PPC_FUNC_IMPL(__imp__sub_82EC0A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC0A78"))) PPC_WEAK_FUNC(sub_82EC0A78);
PPC_FUNC_IMPL(__imp__sub_82EC0A78) {
	PPC_FUNC_PROLOGUE();
	// stw r4,30624(r3)
	PPC_STORE_U32(ctx.r3.u32 + 30624, ctx.r4.u32);
	// stw r5,30628(r3)
	PPC_STORE_U32(ctx.r3.u32 + 30628, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC0A84"))) PPC_WEAK_FUNC(sub_82EC0A84);
PPC_FUNC_IMPL(__imp__sub_82EC0A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC0A88"))) PPC_WEAK_FUNC(sub_82EC0A88);
PPC_FUNC_IMPL(__imp__sub_82EC0A88) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x82ec0c00
	if (!ctx.cr6.eq) goto loc_82EC0C00;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82ec0b20
	if (!ctx.cr6.eq) goto loc_82EC0B20;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82ebec88
	ctx.lr = 0x82EC0AC4;
	sub_82EBEC88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82ec0b94
	if (ctx.cr6.eq) goto loc_82EC0B94;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r8,1
	ctx.r8.s64 = 1;
	// neg r7,r11
	ctx.r7.s64 = -ctx.r11.s64;
	// stw r9,30732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30732, ctx.r9.u32);
	// neg r5,r10
	ctx.r5.s64 = -ctx.r10.s64;
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// andc r3,r7,r11
	ctx.r3.u64 = ctx.r7.u64 & ~ctx.r11.u64;
	// andc r9,r5,r10
	ctx.r9.u64 = ctx.r5.u64 & ~ctx.r10.u64;
	// stw r11,30752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30752, ctx.r11.u32);
	// rlwinm r7,r3,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// stw r10,30756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30756, ctx.r10.u32);
	// rlwinm r5,r9,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// stw r8,30728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30728, ctx.r8.u32);
	// stw r6,30784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30784, ctx.r6.u32);
	// stw r4,30788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30788, ctx.r4.u32);
	// stw r7,30720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30720, ctx.r7.u32);
	// stw r5,30724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30724, ctx.r5.u32);
	// b 0x82ec0b94
	goto loc_82EC0B94;
loc_82EC0B20:
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// beq cr6,0x82ec0b94
	if (ctx.cr6.eq) goto loc_82EC0B94;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,30724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30724, ctx.r11.u32);
	// cmpwi cr6,r5,9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 9, ctx.xer);
	// stw r11,30720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30720, ctx.r11.u32);
	// stw r11,30728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30728, ctx.r11.u32);
	// stw r10,30732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30732, ctx.r10.u32);
	// bne cr6,0x82ec0b64
	if (!ctx.cr6.eq) goto loc_82EC0B64;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,30736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30736, ctx.r11.u32);
	// stw r11,30784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30784, ctx.r11.u32);
	// stw r11,30752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30752, ctx.r11.u32);
	// stw r10,30788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30788, ctx.r10.u32);
	// stw r10,30756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30756, ctx.r10.u32);
	// b 0x82ec0b94
	goto loc_82EC0B94;
loc_82EC0B64:
	// cmpwi cr6,r5,8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 8, ctx.xer);
	// stw r10,30736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30736, ctx.r10.u32);
	// bgt cr6,0x82ec0b80
	if (ctx.cr6.gt) goto loc_82EC0B80;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge cr6,0x82ec0b84
	if (!ctx.cr6.lt) goto loc_82EC0B84;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// b 0x82ec0b84
	goto loc_82EC0B84;
loc_82EC0B80:
	// li r5,8
	ctx.r5.s64 = 8;
loc_82EC0B84:
	// stw r5,30788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30788, ctx.r5.u32);
	// stw r5,30756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30756, ctx.r5.u32);
	// stw r5,30784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30784, ctx.r5.u32);
	// stw r5,30752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30752, ctx.r5.u32);
loc_82EC0B94:
	// lwz r11,30408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec0be0
	if (ctx.cr6.eq) goto loc_82EC0BE0;
	// lwz r11,30784(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30784);
	// lwz r10,30788(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30788);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82ec0be0
	if (ctx.cr6.eq) goto loc_82EC0BE0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82ec0bdc
	if (!ctx.cr6.gt) goto loc_82EC0BDC;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bge cr6,0x82ec0bd0
	if (!ctx.cr6.lt) goto loc_82EC0BD0;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82ec0be0
	if (ctx.cr6.eq) goto loc_82EC0BE0;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
loc_82EC0BD0:
	// bne cr6,0x82ec0bdc
	if (!ctx.cr6.eq) goto loc_82EC0BDC;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// beq cr6,0x82ec0be0
	if (ctx.cr6.eq) goto loc_82EC0BE0;
loc_82EC0BDC:
	// stw r11,30788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30788, ctx.r11.u32);
loc_82EC0BE0:
	// lwz r11,30752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30752);
	// lwz r10,30756(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30756);
	// lwz r9,30784(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30784);
	// lwz r8,30788(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30788);
	// stw r11,30760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30760, ctx.r11.u32);
	// stw r10,30764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30764, ctx.r10.u32);
	// stw r9,30792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30792, ctx.r9.u32);
	// stw r8,30796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30796, ctx.r8.u32);
loc_82EC0C00:
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

__attribute__((alias("__imp__sub_82EC0C14"))) PPC_WEAK_FUNC(sub_82EC0C14);
PPC_FUNC_IMPL(__imp__sub_82EC0C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC0C18"))) PPC_WEAK_FUNC(sub_82EC0C18);
PPC_FUNC_IMPL(__imp__sub_82EC0C18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82EC0C20;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,30408(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30408);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec0c50
	if (ctx.cr6.eq) goto loc_82EC0C50;
	// lwz r11,30432(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ec0c50
	if (!ctx.cr6.eq) goto loc_82EC0C50;
loc_82EC0C44:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_82EC0C50:
	// lwz r11,31544(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 31544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec0c70
	if (ctx.cr6.eq) goto loc_82EC0C70;
	// lwz r9,2804(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2804);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82ec0c44
	if (!ctx.cr6.eq) goto loc_82EC0C44;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ec0c7c
	if (!ctx.cr6.eq) goto loc_82EC0C7C;
loc_82EC0C70:
	// lwz r9,2800(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2800);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82ec0c44
	if (!ctx.cr6.eq) goto loc_82EC0C44;
loc_82EC0C7C:
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// bne cr6,0x82ec0d50
	if (!ctx.cr6.eq) goto loc_82EC0D50;
	// lwz r9,2116(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2116);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82ec0ca0
	if (!ctx.cr6.eq) goto loc_82EC0CA0;
	// lwz r9,6772(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6772);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82ec0d50
	if (ctx.cr6.eq) goto loc_82EC0D50;
loc_82EC0CA0:
	// lwz r9,27988(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27988);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82ec0cbc
	if (ctx.cr6.eq) goto loc_82EC0CBC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec0cbc
	if (ctx.cr6.eq) goto loc_82EC0CBC;
	// lwz r11,2804(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2804);
	// b 0x82ec0cc0
	goto loc_82EC0CC0;
loc_82EC0CBC:
	// lwz r11,2800(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2800);
loc_82EC0CC0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ec0d50
	if (!ctx.cr6.eq) goto loc_82EC0D50;
	// lwz r11,7756(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7756);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x82ec0d50
	if (!ctx.cr6.eq) goto loc_82EC0D50;
	// bl 0x82fa4108
	ctx.lr = 0x82EC0CDC;
	sub_82FA4108(ctx, base);
	// srawi r10,r3,6
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 6;
	// lwz r11,1260(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1260);
	// li r31,1
	ctx.r31.s64 = 1;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// rlwinm r8,r9,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// subf r11,r8,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r8.s64;
	// addi r7,r11,64
	ctx.r7.s64 = ctx.r11.s64 + 64;
	// stw r7,876(r29)
	PPC_STORE_U32(ctx.r29.u32 + 876, ctx.r7.u32);
	// ble cr6,0x82ec0d4c
	if (!ctx.cr6.gt) goto loc_82EC0D4C;
	// lis r11,21845
	ctx.r11.s64 = 1431633920;
	// addi r30,r29,876
	ctx.r30.s64 = ctx.r29.s64 + 876;
	// ori r27,r11,21846
	ctx.r27.u64 = ctx.r11.u64 | 21846;
loc_82EC0D10:
	// lwz r28,0(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82fa4108
	ctx.lr = 0x82EC0D18;
	sub_82FA4108(ctx, base);
	// mulhw r11,r3,r27
	ctx.r11.s64 = (int64_t(ctx.r3.s32) * int64_t(ctx.r27.s32)) >> 32;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r11,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r30.u32 = ea;
	// lwz r10,1260(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1260);
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82ec0d10
	if (ctx.cr6.lt) goto loc_82EC0D10;
loc_82EC0D4C:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82EC0D50:
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// lwz r11,-2056(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2056);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82ec0d6c
	if (!ctx.cr6.gt) goto loc_82EC0D6C;
	// ld r11,736(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 736);
	// cmpdi cr6,r11,1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 1, ctx.xer);
	// beq cr6,0x82ec0dbc
	if (ctx.cr6.eq) goto loc_82EC0DBC;
loc_82EC0D6C:
	// lwz r11,6776(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6776);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec0d98
	if (ctx.cr6.eq) goto loc_82EC0D98;
	// lwz r11,6788(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6788);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec0d98
	if (ctx.cr6.eq) goto loc_82EC0D98;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,6788(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6788, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_82EC0D98:
	// lwz r11,30744(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 30744);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ec0dbc
	if (!ctx.cr6.eq) goto loc_82EC0DBC;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82ec0dbc
	if (!ctx.cr6.eq) goto loc_82EC0DBC;
	// lwz r11,30700(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 30700);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec0dc0
	if (ctx.cr6.eq) goto loc_82EC0DC0;
loc_82EC0DBC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82EC0DC0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC0DC8"))) PPC_WEAK_FUNC(sub_82EC0DC8);
PPC_FUNC_IMPL(__imp__sub_82EC0DC8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,7864(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7864, ctx.r4.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,256
	ctx.r9.s64 = 256;
	// stw r11,7200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7200, ctx.r11.u32);
	// stw r10,2184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2184, ctx.r10.u32);
	// stw r11,2824(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2824, ctx.r11.u32);
	// stw r10,1604(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1604, ctx.r10.u32);
	// stw r11,1580(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1580, ctx.r11.u32);
	// stw r11,1612(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1612, ctx.r11.u32);
	// stw r11,788(r3)
	PPC_STORE_U32(ctx.r3.u32 + 788, ctx.r11.u32);
	// stw r11,2564(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2564, ctx.r11.u32);
	// stw r10,2424(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2424, ctx.r10.u32);
	// stw r11,2260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2260, ctx.r11.u32);
	// stw r10,1608(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1608, ctx.r10.u32);
	// stw r11,1540(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1540, ctx.r11.u32);
	// stw r11,2336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2336, ctx.r11.u32);
	// stw r11,2812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2812, ctx.r11.u32);
	// stw r11,2124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2124, ctx.r11.u32);
	// stw r9,2128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2128, ctx.r9.u32);
	// stw r11,1428(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1428, ctx.r11.u32);
	// stw r11,1436(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1436, ctx.r11.u32);
	// stw r11,1440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1440, ctx.r11.u32);
	// stw r11,1432(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1432, ctx.r11.u32);
	// stw r11,1444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1444, ctx.r11.u32);
	// stw r10,1576(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1576, ctx.r10.u32);
	// b 0x82f40098
	sub_82F40098(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC0E3C"))) PPC_WEAK_FUNC(sub_82EC0E3C);
PPC_FUNC_IMPL(__imp__sub_82EC0E3C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC0E40"))) PPC_WEAK_FUNC(sub_82EC0E40);
PPC_FUNC_IMPL(__imp__sub_82EC0E40) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8236(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8236);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec0e74
	if (ctx.cr6.eq) goto loc_82EC0E74;
	// lwz r11,30408(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30408);
	// lwz r3,7868(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7868);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec0e68
	if (ctx.cr6.eq) goto loc_82EC0E68;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,31
	ctx.r4.s64 = 31;
	// b 0x82f3fd88
	sub_82F3FD88(ctx, base);
	return;
loc_82EC0E68:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,15
	ctx.r4.s64 = 15;
	// b 0x82f3fd88
	sub_82F3FD88(ctx, base);
	return;
loc_82EC0E74:
	// lwz r10,2800(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2800);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82ec0e90
	if (!ctx.cr6.eq) goto loc_82EC0E90;
	// lwz r3,7868(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7868);
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x82f3fd88
	sub_82F3FD88(ctx, base);
	return;
loc_82EC0E90:
	// lwz r11,30408(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec0ef0
	if (ctx.cr6.eq) goto loc_82EC0EF0;
	// lwz r11,30432(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ec0ef0
	if (!ctx.cr6.eq) goto loc_82EC0EF0;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82ec0f20
	if (!ctx.cr6.eq) goto loc_82EC0F20;
	// ld r9,7728(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 7728);
	// ld r8,30528(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 30528);
	// ld r11,30552(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 30552);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// cmpd cr6,r7,r11
	ctx.cr6.compare<int64_t>(ctx.r7.s64, ctx.r11.s64, ctx.xer);
	// blt cr6,0x82ec0ef0
	if (ctx.cr6.lt) goto loc_82EC0EF0;
	// ld r9,7704(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 7704);
	// sradi r8,r11,1
	ctx.xer.ca = (ctx.r11.s64 < 0) & ((ctx.r11.u64 & 0x1) != 0);
	ctx.r8.s64 = ctx.r11.s64 >> 1;
	// ld r7,7712(r3)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r3.u32 + 7712);
	// subf r6,r7,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r7.s64;
	// cmpd cr6,r6,r8
	ctx.cr6.compare<int64_t>(ctx.r6.s64, ctx.r8.s64, ctx.xer);
	// blt cr6,0x82ec0ef0
	if (ctx.cr6.lt) goto loc_82EC0EF0;
	// lwz r3,7868(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7868);
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,61
	ctx.r4.s64 = 61;
	// b 0x82f3fd88
	sub_82F3FD88(ctx, base);
	return;
loc_82EC0EF0:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82ec0f20
	if (!ctx.cr6.eq) goto loc_82EC0F20;
	// lwz r11,30432(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ec0f10
	if (!ctx.cr6.eq) goto loc_82EC0F10;
	// lwz r11,30416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30416);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ec0f20
	if (!ctx.cr6.eq) goto loc_82EC0F20;
loc_82EC0F10:
	// lwz r3,7868(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7868);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82f3fd88
	sub_82F3FD88(ctx, base);
	return;
loc_82EC0F20:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82ec0f38
	if (!ctx.cr6.eq) goto loc_82EC0F38;
	// lwz r3,7868(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7868);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x82f3fd88
	sub_82F3FD88(ctx, base);
	return;
loc_82EC0F38:
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x82ec0f50
	if (!ctx.cr6.eq) goto loc_82EC0F50;
	// lwz r3,7868(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7868);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,14
	ctx.r4.s64 = 14;
	// b 0x82f3fd88
	sub_82F3FD88(ctx, base);
	return;
loc_82EC0F50:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,30432(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,30416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30416);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,7868(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7868);
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,60
	ctx.r4.s64 = 60;
	// b 0x82f3fd88
	sub_82F3FD88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC0F80"))) PPC_WEAK_FUNC(sub_82EC0F80);
PPC_FUNC_IMPL(__imp__sub_82EC0F80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC0F84"))) PPC_WEAK_FUNC(sub_82EC0F84);
PPC_FUNC_IMPL(__imp__sub_82EC0F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC0F88"))) PPC_WEAK_FUNC(sub_82EC0F88);
PPC_FUNC_IMPL(__imp__sub_82EC0F88) {
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
	// lwz r11,2800(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2800);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82ec0fcc
	if (!ctx.cr6.eq) goto loc_82EC0FCC;
	// lwz r10,31544(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31544);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82ec0fcc
	if (!ctx.cr6.eq) goto loc_82EC0FCC;
	// lwz r11,2204(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2204);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r4,r10,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82ec1188
	goto loc_82EC1188;
loc_82EC0FCC:
	// lwz r10,1556(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1556);
	// cmplwi cr6,r10,12
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 12, ctx.xer);
	// lwz r10,2208(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2208);
	// ble cr6,0x82ec1030
	if (!ctx.cr6.gt) goto loc_82EC1030;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82ec0ffc
	if (ctx.cr6.eq) goto loc_82EC0FFC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82ec0ffc
	if (ctx.cr6.eq) goto loc_82EC0FFC;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82f3fd88
	ctx.lr = 0x82EC0FFC;
	sub_82F3FD88(ctx, base);
loc_82EC0FFC:
	// lwz r11,2204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2204);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x82ec10b4
	if (ctx.cr6.gt) goto loc_82EC10B4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec107c
	if (ctx.cr6.eq) goto loc_82EC107C;
	// bdz 0x82ec1070
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82EC1070;
	// bdz 0x82ec1024
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82EC1024;
loc_82EC101C:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82ec10a8
	goto loc_82EC10A8;
loc_82EC1024:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82ec10ac
	goto loc_82EC10AC;
loc_82EC1030:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82ec1050
	if (ctx.cr6.eq) goto loc_82EC1050;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82ec1050
	if (ctx.cr6.eq) goto loc_82EC1050;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82f3fd88
	ctx.lr = 0x82EC1050;
	sub_82F3FD88(ctx, base);
loc_82EC1050:
	// lwz r11,2204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2204);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x82ec10b4
	if (ctx.cr6.gt) goto loc_82EC10B4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82ec101c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82EC101C;
	// bdzf 4*cr6+eq,0x82ec1024
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82EC1024;
	// bne cr6,0x82ec107c
	if (!ctx.cr6.eq) goto loc_82EC107C;
loc_82EC1070:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82ec10ac
	goto loc_82EC10AC;
loc_82EC107C:
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f3fd88
	ctx.lr = 0x82EC108C;
	sub_82F3FD88(ctx, base);
	// lwz r11,2208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2208);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ec10b4
	if (!ctx.cr6.eq) goto loc_82EC10B4;
	// lwz r11,2800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2800);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82ec10b4
	if (ctx.cr6.eq) goto loc_82EC10B4;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82EC10A8:
	// li r5,1
	ctx.r5.s64 = 1;
loc_82EC10AC:
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x82f3fd88
	ctx.lr = 0x82EC10B4;
	sub_82F3FD88(ctx, base);
loc_82EC10B4:
	// lwz r11,2208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2208);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec1190
	if (ctx.cr6.eq) goto loc_82EC1190;
	// lwz r11,31544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31544);
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec1174
	if (ctx.cr6.eq) goto loc_82EC1174;
	// lwz r11,2212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2212);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec1150
	if (ctx.cr6.eq) goto loc_82EC1150;
	// lwz r11,2216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2216);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ec112c
	if (ctx.cr6.eq) goto loc_82EC112C;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82f3fd88
	ctx.lr = 0x82EC10F4;
	sub_82F3FD88(ctx, base);
	// li r5,6
	ctx.r5.s64 = 6;
	// lwz r4,2228(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2228);
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x82f3fd88
	ctx.lr = 0x82EC1104;
	sub_82F3FD88(ctx, base);
	// li r5,6
	ctx.r5.s64 = 6;
	// lwz r4,2232(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2232);
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x82f3fd88
	ctx.lr = 0x82EC1114;
	sub_82F3FD88(ctx, base);
	// li r5,6
	ctx.r5.s64 = 6;
	// lwz r4,2236(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2236);
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x82f3fd88
	ctx.lr = 0x82EC1124;
	sub_82F3FD88(ctx, base);
	// lwz r4,2240(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2240);
	// b 0x82ec1184
	goto loc_82EC1184;
loc_82EC112C:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f3fd88
	ctx.lr = 0x82EC1138;
	sub_82F3FD88(ctx, base);
	// li r5,6
	ctx.r5.s64 = 6;
	// lwz r4,2228(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2228);
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x82f3fd88
	ctx.lr = 0x82EC1148;
	sub_82F3FD88(ctx, base);
	// lwz r4,2232(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2232);
	// b 0x82ec1184
	goto loc_82EC1184;
loc_82EC1150:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82f3fd88
	ctx.lr = 0x82EC115C;
	sub_82F3FD88(ctx, base);
	// li r5,6
	ctx.r5.s64 = 6;
	// lwz r4,2236(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2236);
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x82f3fd88
	ctx.lr = 0x82EC116C;
	sub_82F3FD88(ctx, base);
	// lwz r4,2240(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2240);
	// b 0x82ec1184
	goto loc_82EC1184;
loc_82EC1174:
	// li r5,6
	ctx.r5.s64 = 6;
	// lwz r4,2220(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2220);
	// bl 0x82f3fd88
	ctx.lr = 0x82EC1180;
	sub_82F3FD88(ctx, base);
	// lwz r4,2224(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2224);
loc_82EC1184:
	// li r5,6
	ctx.r5.s64 = 6;
loc_82EC1188:
	// lwz r3,7868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x82f3fd88
	ctx.lr = 0x82EC1190;
	sub_82F3FD88(ctx, base);
loc_82EC1190:
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

