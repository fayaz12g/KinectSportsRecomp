#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82AF4BA0"))) PPC_WEAK_FUNC(sub_82AF4BA0);
PPC_FUNC_IMPL(__imp__sub_82AF4BA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82AF4BA8;
	__savegprlr_14(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// stw r4,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r4.u32);
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// stw r6,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r6.u32);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// li r14,0
	ctx.r14.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82af4be8
	if (!ctx.cr6.eq) goto loc_82AF4BE8;
	// stw r7,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// addi r28,r1,112
	ctx.r28.s64 = ctx.r1.s64 + 112;
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// stw r14,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r14.u32);
	// stw r14,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r14.u32);
loc_82AF4BE8:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r9,12(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwz r6,4(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// subf r17,r10,r11
	ctx.r17.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subf r25,r6,r9
	ctx.r25.s64 = ctx.r9.s64 - ctx.r6.s64;
	// stw r17,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r17.u32);
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// bne cr6,0x82af4c1c
	if (!ctx.cr6.eq) goto loc_82AF4C1C;
	// stw r14,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r14.u32);
	// addi r20,r1,104
	ctx.r20.s64 = ctx.r1.s64 + 104;
	// stw r14,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r14.u32);
loc_82AF4C1C:
	// addi r11,r7,31
	ctx.r11.s64 = ctx.r7.s64 + 31;
	// cmplw cr6,r27,r18
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r18.u32, ctx.xer);
	// rlwinm r26,r11,0,0,26
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// bne cr6,0x82af4c64
	if (!ctx.cr6.eq) goto loc_82AF4C64;
	// addi r11,r8,31
	ctx.r11.s64 = ctx.r8.s64 + 31;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// mullw r11,r11,r26
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r26.s32);
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// addi r11,r11,4095
	ctx.r11.s64 = ctx.r11.s64 + 4095;
	// rlwinm r30,r11,0,0,19
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82691410
	ctx.lr = 0x82AF4C50;
	sub_82691410(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// bl 0x82af45a0
	ctx.lr = 0x82AF4C60;
	sub_82AF45A0(ctx, base);
	// b 0x82af4c68
	goto loc_82AF4C68;
loc_82AF4C64:
	// mr r19,r27
	ctx.r19.u64 = ctx.r27.u64;
loc_82AF4C68:
	// rlwinm r10,r31,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r9,r31,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 28) & 0xFFFFFFF;
	// li r8,1
	ctx.r8.s64 = 1;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// rlwinm r7,r31,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r6,r9,3
	ctx.r6.s64 = ctx.r9.s64 + 3;
	// srw r9,r7,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r10.u8 & 0x3F));
	// slw r8,r8,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r6.u8 & 0x3F));
	// add r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r6,r8,-1
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// add r5,r11,r17
	ctx.r5.u64 = ctx.r11.u64 + ctx.r17.u64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// andc r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 & ~ctx.r6.u64;
	// add r29,r9,r10
	ctx.r29.u64 = ctx.r9.u64 + ctx.r10.u64;
	// andc r10,r5,r8
	ctx.r10.u64 = ctx.r5.u64 & ~ctx.r8.u64;
	// subf r15,r11,r7
	ctx.r15.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r16,r11,r10
	ctx.r16.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r30,r29,6
	ctx.r30.s64 = ctx.r29.s64 + 6;
	// cmplw cr6,r15,r17
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, ctx.r17.u32, ctx.xer);
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// bgt cr6,0x82af4cc8
	if (ctx.cr6.gt) goto loc_82AF4CC8;
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
loc_82AF4CC8:
	// slw r11,r11,r29
	ctx.r11.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r29.u8 & 0x3F));
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82af4f54
	if (ctx.cr6.eq) goto loc_82AF4F54;
	// rlwinm r11,r26,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 27) & 0x7FFFFFF;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_82AF4CE0:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r11,r14,r11
	ctx.r11.u64 = ctx.r14.u64 + ctx.r11.u64;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r10,r8,29
	ctx.r10.u64 = ctx.r8.u32 & 0x7;
	// lwz r7,4(r20)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// rlwinm r27,r11,2,27,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x18;
	// lwz r4,0(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// rlwinm r6,r11,27,5,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r3,316(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// add r31,r10,r27
	ctx.r31.u64 = ctx.r10.u64 + ctx.r27.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mullw r26,r6,r9
	ctx.r26.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// rlwinm r10,r8,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FFFFFF;
	// slw r9,r31,r30
	ctx.r9.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r30.u8 & 0x3F));
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// rlwinm r6,r9,26,6,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FFFFFF;
	// slw r10,r10,r30
	ctx.r10.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r30.u8 & 0x3F));
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r9,r6,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r31,r11,29,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// clrlwi r9,r6,28
	ctx.r9.u64 = ctx.r6.u32 & 0xF;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r25,r11,30,30,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x2;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r8,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// slw r24,r31,r30
	ctx.r24.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r30.u8 & 0x3F));
	// rlwinm r23,r11,4,27,27
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x10;
	// add r9,r9,r25
	ctx.r9.u64 = ctx.r9.u64 + ctx.r25.u64;
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + ctx.r24.u64;
	// rlwinm r22,r11,28,31,31
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// add r10,r10,r23
	ctx.r10.u64 = ctx.r10.u64 + ctx.r23.u64;
	// rlwinm r11,r9,1,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x6;
	// srawi r9,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 6;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// clrlwi r6,r9,29
	ctx.r6.u64 = ctx.r9.u32 & 0x7;
	// rlwinm r8,r11,3,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x8;
	// rlwinm r9,r11,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// add r11,r8,r6
	ctx.r11.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwinm r8,r10,0,0,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFE00;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r7,r14
	ctx.r7.u64 = ctx.r7.u64 + ctx.r14.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r9,r10,26
	ctx.r9.u64 = ctx.r10.u32 & 0x3F;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r21,r7,r3
	ctx.r21.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r3.s32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// slw r10,r4,r29
	ctx.r10.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r29.u8 & 0x3F));
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r21
	ctx.r10.u64 = ctx.r10.u64 + ctx.r21.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r3,r10,r18
	ctx.r3.u64 = ctx.r10.u64 + ctx.r18.u64;
	// add r4,r11,r19
	ctx.r4.u64 = ctx.r11.u64 + ctx.r19.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82AF4DBC;
	sub_82FA77C0(ctx, base);
	// mr r31,r15
	ctx.r31.u64 = ctx.r15.u64;
	// cmpw cr6,r15,r16
	ctx.cr6.compare<int32_t>(ctx.r15.s32, ctx.r16.s32, ctx.xer);
	// bge cr6,0x82af4e8c
	if (!ctx.cr6.lt) goto loc_82AF4E8C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// slw r17,r11,r29
	ctx.r17.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r29.u8 & 0x3F));
loc_82AF4DD0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r6,r10,r31
	ctx.r6.u64 = ctx.r10.u64 + ctx.r31.u64;
	// clrlwi r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + ctx.r27.u64;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// slw r9,r9,r30
	ctx.r9.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r30.u8 & 0x3F));
	// rlwinm r7,r9,26,6,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FFFFFF;
	// slw r10,r10,r30
	ctx.r10.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r30.u8 & 0x3F));
	// clrlwi r9,r10,3
	ctx.r9.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r8,r7,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF0;
	// clrlwi r10,r7,28
	ctx.r10.u64 = ctx.r7.u32 & 0xF;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r25
	ctx.r9.u64 = ctx.r9.u64 + ctx.r25.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r9,1,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x6;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// add r10,r10,r22
	ctx.r10.u64 = ctx.r10.u64 + ctx.r22.u64;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// rlwinm r8,r10,3,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x8;
	// srawi r9,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 6;
	// rlwinm r7,r10,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// clrlwi r10,r9,29
	ctx.r10.u64 = ctx.r9.u32 & 0x7;
	// rlwinm r9,r11,0,0,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFE00;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// clrlwi r10,r11,26
	ctx.r10.u64 = ctx.r11.u32 & 0x3F;
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// slw r11,r6,r29
	ctx.r11.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r29.u8 & 0x3F));
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r8,r11,r21
	ctx.r8.u64 = ctx.r11.u64 + ctx.r21.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r8,r18
	ctx.r3.u64 = ctx.r8.u64 + ctx.r18.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r4,r11,r19
	ctx.r4.u64 = ctx.r11.u64 + ctx.r19.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82AF4E78;
	sub_82FA77C0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r31,r31,r11
	ctx.r31.u64 = ctx.r31.u64 + ctx.r11.u64;
	// cmpw cr6,r31,r16
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r16.s32, ctx.xer);
	// blt cr6,0x82af4dd0
	if (ctx.cr6.lt) goto loc_82AF4DD0;
	// lwz r17,92(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_82AF4E8C:
	// cmplw cr6,r31,r17
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r17.u32, ctx.xer);
	// bge cr6,0x82af4f40
	if (!ctx.cr6.lt) goto loc_82AF4F40;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// subf r6,r31,r17
	ctx.r6.s64 = ctx.r17.s64 - ctx.r31.s64;
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r5,r10,r31
	ctx.r5.u64 = ctx.r10.u64 + ctx.r31.u64;
	// clrlwi r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + ctx.r27.u64;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// slw r9,r9,r30
	ctx.r9.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r30.u8 & 0x3F));
	// rlwinm r7,r9,26,6,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FFFFFF;
	// slw r10,r10,r30
	ctx.r10.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r30.u8 & 0x3F));
	// clrlwi r9,r10,3
	ctx.r9.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r8,r7,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF0;
	// clrlwi r10,r7,28
	ctx.r10.u64 = ctx.r7.u32 & 0xF;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r25
	ctx.r9.u64 = ctx.r9.u64 + ctx.r25.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r9,1,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x6;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// add r10,r10,r22
	ctx.r10.u64 = ctx.r10.u64 + ctx.r22.u64;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// rlwinm r9,r10,3,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x8;
	// srawi r8,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 6;
	// rlwinm r7,r10,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// clrlwi r10,r8,29
	ctx.r10.u64 = ctx.r8.u32 & 0x7;
	// rlwinm r8,r11,0,0,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFE00;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// clrlwi r10,r11,26
	ctx.r10.u64 = ctx.r11.u32 & 0x3F;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// slw r11,r5,r29
	ctx.r11.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r29.u8 & 0x3F));
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r18
	ctx.r3.u64 = ctx.r11.u64 + ctx.r18.u64;
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// slw r5,r6,r29
	ctx.r5.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r29.u8 & 0x3F));
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r4,r11,r19
	ctx.r4.u64 = ctx.r11.u64 + ctx.r19.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82AF4F40;
	sub_82FA77C0(ctx, base);
loc_82AF4F40:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// cmplw cr6,r14,r11
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82af4ce0
	if (ctx.cr6.lt) goto loc_82AF4CE0;
	// lwz r27,332(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
loc_82AF4F54:
	// cmplw cr6,r27,r18
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r18.u32, ctx.xer);
	// bne cr6,0x82af4f68
	if (!ctx.cr6.eq) goto loc_82AF4F68;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82691460
	ctx.lr = 0x82AF4F68;
	sub_82691460(ctx, base);
loc_82AF4F68:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF4F70"))) PPC_WEAK_FUNC(sub_82AF4F70);
PPC_FUNC_IMPL(__imp__sub_82AF4F70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7658
	ctx.lr = 0x82AF4F78;
	__savegprlr_20(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// cntlzw r8,r5
	ctx.r8.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// subfic r10,r8,31
	ctx.xer.ca = ctx.r8.u32 <= 31;
	ctx.r10.s64 = 31 - ctx.r8.s64;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// addi r8,r4,-1
	ctx.r8.s64 = ctx.r4.s64 + -1;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// subfic r11,r10,7
	ctx.xer.ca = ctx.r10.u32 <= 7;
	ctx.r11.s64 = 7 - ctx.r10.s64;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// slw r11,r6,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r11.u8 & 0x3F));
	// lwzx r31,r4,r7
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// rlwinm r20,r10,0,0,26
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// add r10,r31,r3
	ctx.r10.u64 = ctx.r31.u64 + ctx.r3.u64;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// divwu r10,r10,r31
	ctx.r10.u32 = ctx.r10.u32 / ctx.r31.u32;
	// andc r29,r8,r11
	ctx.r29.u64 = ctx.r8.u64 & ~ctx.r11.u64;
	// lwzx r25,r4,r5
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// twllei r31,0
	if (ctx.r31.u32 <= 0) __builtin_debugtrap();
	// mullw r22,r10,r31
	ctx.r22.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r31.s32);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x82af5074
	if (!ctx.cr6.lt) goto loc_82AF5074;
	// add r11,r29,r25
	ctx.r11.u64 = ctx.r29.u64 + ctx.r25.u64;
	// addi r23,r11,-1
	ctx.r23.s64 = ctx.r11.s64 + -1;
loc_82AF5028:
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
	// cmplw cr6,r20,r30
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82af5064
	if (!ctx.cr6.lt) goto loc_82AF5064;
	// addi r21,r31,-1
	ctx.r21.s64 = ctx.r31.s64 + -1;
loc_82AF5038:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// add r3,r21,r26
	ctx.r3.u64 = ctx.r21.u64 + ctx.r26.u64;
	// bl 0x82588a28
	ctx.lr = 0x82AF504C;
	sub_82588A28(ctx, base);
	// cmplw cr6,r24,r3
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r3.u32, ctx.xer);
	// bgt cr6,0x82af5058
	if (ctx.cr6.gt) goto loc_82AF5058;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
loc_82AF5058:
	// add r26,r26,r31
	ctx.r26.u64 = ctx.r26.u64 + ctx.r31.u64;
	// cmplw cr6,r26,r30
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82af5038
	if (ctx.cr6.lt) goto loc_82AF5038;
loc_82AF5064:
	// add r29,r29,r25
	ctx.r29.u64 = ctx.r29.u64 + ctx.r25.u64;
	// add r23,r23,r25
	ctx.r23.u64 = ctx.r23.u64 + ctx.r25.u64;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82af5028
	if (ctx.cr6.lt) goto loc_82AF5028;
loc_82AF5074:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82fa76a8
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF5080"))) PPC_WEAK_FUNC(sub_82AF5080);
PPC_FUNC_IMPL(__imp__sub_82AF5080) {
	PPC_FUNC_PROLOGUE();
	// b 0x82af47d0
	sub_82AF47D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF5084"))) PPC_WEAK_FUNC(sub_82AF5084);
PPC_FUNC_IMPL(__imp__sub_82AF5084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF5088"))) PPC_WEAK_FUNC(sub_82AF5088);
PPC_FUNC_IMPL(__imp__sub_82AF5088) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7654
	ctx.lr = 0x82AF5090;
	__savegprlr_19(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// mr r20,r10
	ctx.r20.u64 = ctx.r10.u64;
	// bl 0x82af34b8
	ctx.lr = 0x82AF50C4;
	sub_82AF34B8(ctx, base);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,1
	ctx.r3.s64 = 1;
	// cntlzw r10,r7
	ctx.r10.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// addi r8,r11,-25800
	ctx.r8.s64 = ctx.r11.s64 + -25800;
	// cntlzw r9,r4
	ctx.r9.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// subfic r11,r10,31
	ctx.xer.ca = ctx.r10.u32 <= 31;
	ctx.r11.s64 = 31 - ctx.r10.s64;
	// subfic r6,r9,31
	ctx.xer.ca = ctx.r9.u32 <= 31;
	ctx.r6.s64 = 31 - ctx.r9.s64;
	// rlwinm r9,r26,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x2;
	// add r5,r6,r11
	ctx.r5.u64 = ctx.r6.u64 + ctx.r11.u64;
	// rlwinm r10,r26,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lbzx r8,r25,r8
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r25.u32 + ctx.r8.u32);
	// slw r8,r8,r5
	ctx.r8.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r5.u8 & 0x3F));
	// rlwinm r19,r8,29,3,31
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// beq cr6,0x82af5170
	if (ctx.cr6.eq) goto loc_82AF5170;
	// subf r8,r9,r27
	ctx.r8.s64 = ctx.r27.s64 - ctx.r9.s64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// subf r8,r8,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r8.s64;
	// addi r8,r8,32
	ctx.r8.s64 = ctx.r8.s64 + 32;
	// slw r8,r3,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r8.u8 & 0x3F));
	// sraw r8,r8,r31
	temp.u32 = ctx.r31.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r8.s64 = ctx.r8.s32 >> temp.u32;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// bgt cr6,0x82af5134
	if (ctx.cr6.gt) goto loc_82AF5134;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_82AF5134:
	// subf r8,r9,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r9.s64;
	// addi r29,r8,-1
	ctx.r29.s64 = ctx.r8.s64 + -1;
	// add r8,r5,r7
	ctx.r8.u64 = ctx.r5.u64 + ctx.r7.u64;
	// cntlzw r5,r29
	ctx.r5.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// subf r10,r5,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r5.s64;
	// srw r22,r8,r11
	ctx.r22.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r11.u8 & 0x3F));
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// slw r10,r3,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r10.u8 & 0x3F));
	// sraw r10,r10,r31
	temp.u32 = ctx.r31.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bgt cr6,0x82af5168
	if (ctx.cr6.gt) goto loc_82AF5168;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_82AF5168:
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// b 0x82af5180
	goto loc_82AF5180;
loc_82AF5170:
	// add r8,r7,r27
	ctx.r8.u64 = ctx.r7.u64 + ctx.r27.u64;
	// add r10,r4,r30
	ctx.r10.u64 = ctx.r4.u64 + ctx.r30.u64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// srw r22,r8,r11
	ctx.r22.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r11.u8 & 0x3F));
loc_82AF5180:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// srw r23,r10,r6
	ctx.r23.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r6.u8 & 0x3F));
	// lwz r10,332(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82af51e8
	if (ctx.cr6.eq) goto loc_82AF51E8;
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// sraw r7,r7,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r7.s32 < 0) & (((ctx.r7.s32 >> temp.u32) << temp.u32) != ctx.r7.s32);
	ctx.r7.s64 = ctx.r7.s32 >> temp.u32;
	// sraw r10,r10,r6
	temp.u32 = ctx.r6.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// srw r8,r8,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r11.u8 & 0x3F));
	// srw r10,r9,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r6.u8 & 0x3F));
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// b 0x82af523c
	goto loc_82AF523C;
loc_82AF51E8:
	// subf r10,r9,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r9.s64;
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// srw r10,r10,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r31.u8 & 0x3F));
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bgt cr6,0x82af5204
	if (ctx.cr6.gt) goto loc_82AF5204;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_82AF5204:
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r5,r9,r30
	ctx.r5.s64 = ctx.r30.s64 - ctx.r9.s64;
	// add r8,r10,r7
	ctx.r8.u64 = ctx.r10.u64 + ctx.r7.u64;
	// srw r10,r5,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r31.u8 & 0x3F));
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// srw r8,r8,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r11.u8 & 0x3F));
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// bgt cr6,0x82af522c
	if (ctx.cr6.gt) goto loc_82AF522C;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_82AF522C:
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// srw r10,r10,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r6.u8 & 0x3F));
loc_82AF523C:
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82af5264
	if (ctx.cr6.eq) goto loc_82AF5264;
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r9,4(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// addi r24,r1,88
	ctx.r24.s64 = ctx.r1.s64 + 88;
	// sraw r29,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r29.s64 = ctx.r10.s32 >> temp.u32;
	// sraw r28,r9,r6
	temp.u32 = ctx.r6.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r28.s64 = ctx.r9.s32 >> temp.u32;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
loc_82AF5264:
	// clrlwi. r11,r26,31
	ctx.r11.u64 = ctx.r26.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82af52b0
	if (!ctx.cr0.eq) goto loc_82AF52B0;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// rlwinm r9,r26,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 31) & 0x1;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82af3038
	ctx.lr = 0x82AF5290;
	sub_82AF3038(ctx, base);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf r21,r3,r21
	ctx.r21.s64 = ctx.r21.s64 - ctx.r3.s64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r24,r1,88
	ctx.r24.s64 = ctx.r1.s64 + 88;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_82AF52B0:
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// lwz r8,324(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82af47d0
	ctx.lr = 0x82AF52D4;
	sub_82AF47D0(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82fa76a4
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF52DC"))) PPC_WEAK_FUNC(sub_82AF52DC);
PPC_FUNC_IMPL(__imp__sub_82AF52DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF52E0"))) PPC_WEAK_FUNC(sub_82AF52E0);
PPC_FUNC_IMPL(__imp__sub_82AF52E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82af4ba0
	sub_82AF4BA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF52E4"))) PPC_WEAK_FUNC(sub_82AF52E4);
PPC_FUNC_IMPL(__imp__sub_82AF52E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF52E8"))) PPC_WEAK_FUNC(sub_82AF52E8);
PPC_FUNC_IMPL(__imp__sub_82AF52E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa764c
	ctx.lr = 0x82AF52F0;
	__savegprlr_17(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r19,r8
	ctx.r19.u64 = ctx.r8.u64;
	// mr r18,r9
	ctx.r18.u64 = ctx.r9.u64;
	// mr r20,r10
	ctx.r20.u64 = ctx.r10.u64;
	// bl 0x82af34b8
	ctx.lr = 0x82AF5324;
	sub_82AF34B8(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,1
	ctx.r3.s64 = 1;
	// cntlzw r10,r6
	ctx.r10.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// addi r7,r11,-25800
	ctx.r7.s64 = ctx.r11.s64 + -25800;
	// cntlzw r9,r4
	ctx.r9.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// subfic r11,r10,31
	ctx.xer.ca = ctx.r10.u32 <= 31;
	ctx.r11.s64 = 31 - ctx.r10.s64;
	// subfic r8,r9,31
	ctx.xer.ca = ctx.r9.u32 <= 31;
	ctx.r8.s64 = 31 - ctx.r9.s64;
	// rlwinm r9,r24,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x2;
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r10,r24,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lbzx r7,r23,r7
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r23.u32 + ctx.r7.u32);
	// slw r7,r7,r5
	ctx.r7.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r5.u8 & 0x3F));
	// rlwinm r17,r7,29,3,31
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFF;
	// beq cr6,0x82af53d0
	if (ctx.cr6.eq) goto loc_82AF53D0;
	// subf r7,r9,r25
	ctx.r7.s64 = ctx.r25.s64 - ctx.r9.s64;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// subf r7,r7,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r7.s64;
	// addi r7,r7,32
	ctx.r7.s64 = ctx.r7.s64 + 32;
	// slw r7,r3,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r7.u8 & 0x3F));
	// sraw r7,r7,r30
	temp.u32 = ctx.r30.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r7.s32 < 0) & (((ctx.r7.s32 >> temp.u32) << temp.u32) != ctx.r7.s32);
	ctx.r7.s64 = ctx.r7.s32 >> temp.u32;
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// bgt cr6,0x82af5394
	if (ctx.cr6.gt) goto loc_82AF5394;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_82AF5394:
	// subf r7,r9,r26
	ctx.r7.s64 = ctx.r26.s64 - ctx.r9.s64;
	// addi r31,r7,-1
	ctx.r31.s64 = ctx.r7.s64 + -1;
	// add r7,r5,r6
	ctx.r7.u64 = ctx.r5.u64 + ctx.r6.u64;
	// cntlzw r5,r31
	ctx.r5.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// subf r10,r5,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r5.s64;
	// srw r21,r7,r11
	ctx.r21.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r11.u8 & 0x3F));
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// slw r10,r3,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r10.u8 & 0x3F));
	// sraw r10,r10,r30
	temp.u32 = ctx.r30.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bgt cr6,0x82af53c8
	if (ctx.cr6.gt) goto loc_82AF53C8;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_82AF53C8:
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// b 0x82af53e0
	goto loc_82AF53E0;
loc_82AF53D0:
	// add r7,r6,r25
	ctx.r7.u64 = ctx.r6.u64 + ctx.r25.u64;
	// add r10,r4,r26
	ctx.r10.u64 = ctx.r4.u64 + ctx.r26.u64;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// srw r21,r7,r11
	ctx.r21.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r11.u8 & 0x3F));
loc_82AF53E0:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// srw r22,r10,r8
	ctx.r22.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r8.u8 & 0x3F));
	// beq cr6,0x82af540c
	if (ctx.cr6.eq) goto loc_82AF540C;
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// lwz r7,4(r20)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// addi r20,r1,88
	ctx.r20.s64 = ctx.r1.s64 + 88;
	// sraw r10,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	// sraw r7,r7,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r7.s32 < 0) & (((ctx.r7.s32 >> temp.u32) << temp.u32) != ctx.r7.s32);
	ctx.r7.s64 = ctx.r7.s32 >> temp.u32;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
loc_82AF540C:
	// lwz r10,348(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82af5458
	if (ctx.cr6.eq) goto loc_82AF5458;
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// sraw r28,r6,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	ctx.r28.s64 = ctx.r6.s32 >> temp.u32;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// sraw r27,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r27.s64 = ctx.r10.s32 >> temp.u32;
	// srw r29,r7,r11
	ctx.r29.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r11.u8 & 0x3F));
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// srw r31,r9,r8
	ctx.r31.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// b 0x82af54b4
	goto loc_82AF54B4;
loc_82AF5458:
	// subf r10,r9,r25
	ctx.r10.s64 = ctx.r25.s64 - ctx.r9.s64;
	// li r28,0
	ctx.r28.s64 = 0;
	// srw r10,r10,r30
	ctx.r10.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r30.u8 & 0x3F));
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// bgt cr6,0x82af547c
	if (ctx.cr6.gt) goto loc_82AF547C;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_82AF547C:
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r5,r9,r26
	ctx.r5.s64 = ctx.r26.s64 - ctx.r9.s64;
	// add r7,r10,r6
	ctx.r7.u64 = ctx.r10.u64 + ctx.r6.u64;
	// srw r10,r5,r30
	ctx.r10.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r30.u8 & 0x3F));
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// srw r29,r7,r11
	ctx.r29.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r11.u8 & 0x3F));
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// bgt cr6,0x82af54a4
	if (ctx.cr6.gt) goto loc_82AF54A4;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_82AF54A4:
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// srw r31,r11,r8
	ctx.r31.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r8.u8 & 0x3F));
loc_82AF54B4:
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// clrlwi. r11,r24,31
	ctx.r11.u64 = ctx.r24.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82af5518
	if (!ctx.cr0.eq) goto loc_82AF5518;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// rlwinm r9,r24,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 31) & 0x1;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82af3038
	ctx.lr = 0x82AF54E4;
	sub_82AF3038(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// add r8,r11,r28
	ctx.r8.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r9,340(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// add r7,r10,r27
	ctx.r7.u64 = ctx.r10.u64 + ctx.r27.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// subf r6,r3,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r3.s64;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// b 0x82af551c
	goto loc_82AF551C;
loc_82AF5518:
	// lwz r6,340(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
loc_82AF551C:
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82af4ba0
	ctx.lr = 0x82AF553C;
	sub_82AF4BA0(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82fa769c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF5544"))) PPC_WEAK_FUNC(sub_82AF5544);
PPC_FUNC_IMPL(__imp__sub_82AF5544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF5548"))) PPC_WEAK_FUNC(sub_82AF5548);
PPC_FUNC_IMPL(__imp__sub_82AF5548) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// srawi r11,r3,18
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 18;
	// lis r8,4113
	ctx.r8.s64 = 269549568;
	// rlwinm r7,r11,2,27,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1C;
	// addi r6,r1,-48
	ctx.r6.s64 = ctx.r1.s64 + -48;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// ori r11,r8,4627
	ctx.r11.u64 = ctx.r8.u64 | 4627;
	// srawi r10,r3,21
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1FFFFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 21;
	// srawi r9,r3,24
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFFFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 24;
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// ori r4,r4,515
	ctx.r4.u64 = ctx.r4.u64 | 515;
	// stw r11,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r11.u32);
	// srawi r5,r3,27
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFF) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 27;
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// stw r11,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r11.u32);
	// lis r31,1029
	ctx.r31.s64 = 67436544;
	// rlwinm r10,r10,2,27,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1C;
	// stwx r4,r7,r6
	PPC_STORE_U32(ctx.r7.u32 + ctx.r6.u32, ctx.r4.u32);
	// addi r3,r1,-48
	ctx.r3.s64 = ctx.r1.s64 + -48;
	// rlwinm r9,r9,2,27,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x1C;
	// addi r8,r1,-48
	ctx.r8.s64 = ctx.r1.s64 + -48;
	// lis r30,2057
	ctx.r30.s64 = 134807552;
	// rlwinm r5,r5,2,27,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x1C;
	// addi r11,r1,-48
	ctx.r11.s64 = ctx.r1.s64 + -48;
	// lis r7,3085
	ctx.r7.s64 = 202178560;
	// addi r6,r1,-48
	ctx.r6.s64 = ctx.r1.s64 + -48;
	// ori r4,r31,1543
	ctx.r4.u64 = ctx.r31.u64 | 1543;
	// ori r31,r30,2571
	ctx.r31.u64 = ctx.r30.u64 | 2571;
	// ori r7,r7,3599
	ctx.r7.u64 = ctx.r7.u64 | 3599;
	// stwx r4,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r4.u32);
	// stwx r31,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r31.u32);
	// stwx r7,r5,r11
	PPC_STORE_U32(ctx.r5.u32 + ctx.r11.u32, ctx.r7.u32);
	// lvx128 v1,r0,r6
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AF55DC"))) PPC_WEAK_FUNC(sub_82AF55DC);
PPC_FUNC_IMPL(__imp__sub_82AF55DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF55E0"))) PPC_WEAK_FUNC(sub_82AF55E0);
PPC_FUNC_IMPL(__imp__sub_82AF55E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// vspltisw128 v63,4
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x4)));
	// vspltisw128 v59,2
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_set1_epi32(int(0x2)));
	// vor128 v61,v1,v1
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// addi r11,r11,-30064
	ctx.r11.s64 = ctx.r11.s64 + -30064;
	// vspltisw128 v62,8
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_set1_epi32(int(0x8)));
	// vspltisw128 v60,1
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_set1_epi32(int(0x1)));
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// vcsxwfp128 v7,v63,0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v7.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v63.u32)));
	// vcsxwfp128 v13,v59,0
	_mm_store_ps(ctx.v13.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v59.u32)));
	// addi r10,r10,-30080
	ctx.r10.s64 = ctx.r10.s64 + -30080;
	// vcsxwfp128 v5,v62,0
	_mm_store_ps(ctx.v5.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v62.u32)));
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vcsxwfp128 v58,v60,8
	_mm_store_ps(ctx.v58.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v60.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3B800000)))));
	// vcsxwfp128 v60,v60,7
	_mm_store_ps(ctx.v60.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v60.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vspltw128 v59,v63,0
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// vspltw128 v10,v63,2
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0x55));
	// lvx128 v62,r0,r10
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vspltw128 v6,v63,3
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0x0));
	// vspltw128 v11,v63,1
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xAA));
	// vmulfp128 v0,v61,v59
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v59.f32)));
	// vspltw128 v63,v62,2
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0x55));
	// vspltw128 v59,v62,1
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0xAA));
	// vspltw128 v57,v62,0
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0xFF));
	// vspltw128 v62,v62,3
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0x0));
	// vcmpgtfp128 v12,v63,v61
	_mm_store_ps(ctx.v12.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v61.f32)));
	// vcmpgtfp128 v8,v59,v61
	_mm_store_ps(ctx.v8.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v61.f32)));
	// vcmpgtfp128 v9,v57,v61
	_mm_store_ps(ctx.v9.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v61.f32)));
	// vmaddfp v7,v0,v7,v10
	_mm_store_ps(ctx.v7.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v10.f32)));
	// vmaddfp v6,v0,v5,v6
	_mm_store_ps(ctx.v6.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v5.f32)), _mm_load_ps(ctx.v6.f32)));
	// vmaddfp v10,v0,v13,v11
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v63,v7,v58
	_mm_store_ps(ctx.v63.f32, _mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v58.f32)));
	// vmulfp128 v60,v6,v60
	_mm_store_ps(ctx.v60.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v60.f32)));
	// vrfiz128 v63,v63
	_mm_store_ps(ctx.v63.f32, _mm_round_ps(_mm_load_ps(ctx.v63.f32), _MM_FROUND_TO_ZERO | _MM_FROUND_NO_EXC));
	// vrfiz128 v60,v60
	_mm_store_ps(ctx.v60.f32, _mm_round_ps(_mm_load_ps(ctx.v60.f32), _MM_FROUND_TO_ZERO | _MM_FROUND_NO_EXC));
	// vaddfp128 v13,v7,v63
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v63.f32)));
	// vaddfp128 v11,v6,v60
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v60.f32)));
	// vsel v12,v11,v13,v12
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v11.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// vsel v13,v12,v10,v8
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v12.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v10.u8))));
	// vsel v12,v13,v0,v9
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// vmulfp128 v1,v12,v62
	_mm_store_ps(ctx.v1.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v62.f32)));
	// vrlimi128 v1,v61,1,0
	_mm_store_ps(ctx.v1.f32, _mm_blend_ps(_mm_load_ps(ctx.v1.f32), _mm_permute_ps(_mm_load_ps(ctx.v61.f32), 228), 1));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AF568C"))) PPC_WEAK_FUNC(sub_82AF568C);
PPC_FUNC_IMPL(__imp__sub_82AF568C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF5690"))) PPC_WEAK_FUNC(sub_82AF5690);
PPC_FUNC_IMPL(__imp__sub_82AF5690) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r10,r1,-20
	ctx.r10.s64 = ctx.r1.s64 + -20;
	// addi r11,r4,8
	ctx.r11.s64 = ctx.r4.s64 + 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82AF56A0:
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lbzx r9,r9,r3
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r3.u32);
	// and r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 & ctx.r7.u64;
	// srw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82af56a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82AF56A0;
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// lvrx128 v63,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx128 v62,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v1,v62,v63
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v63.u8)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AF56DC"))) PPC_WEAK_FUNC(sub_82AF56DC);
PPC_FUNC_IMPL(__imp__sub_82AF56DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF56E0"))) PPC_WEAK_FUNC(sub_82AF56E0);
PPC_FUNC_IMPL(__imp__sub_82AF56E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82AF56E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r4,24
	ctx.r31.s64 = ctx.r4.s64 + 24;
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
	// li r30,4
	ctx.r30.s64 = 4;
loc_82AF5700:
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x82b063c0
	ctx.lr = 0x82AF571C;
	sub_82B063C0(ctx, base);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwzu r11,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// srw r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// stwu r11,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r29.u32 = ea;
	// bne 0x82af5700
	if (!ctx.cr0.eq) goto loc_82AF5700;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lvrx128 v63,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx128 v62,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v1,v62,v63
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v63.u8)));
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF575C"))) PPC_WEAK_FUNC(sub_82AF575C);
PPC_FUNC_IMPL(__imp__sub_82AF575C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF5760"))) PPC_WEAK_FUNC(sub_82AF5760);
PPC_FUNC_IMPL(__imp__sub_82AF5760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82AF5768;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r4,24
	ctx.r31.s64 = ctx.r4.s64 + 24;
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
	// li r30,4
	ctx.r30.s64 = 4;
loc_82AF5780:
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x82b063c0
	ctx.lr = 0x82AF579C;
	sub_82B063C0(ctx, base);
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lhz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// lwzu r11,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// and r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ctx.r11.u64;
	// srw r11,r11,r7
	ctx.r11.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r7.u8 & 0x3F));
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsplth v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u16, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u16), _mm_set1_epi16(short(0xF0E))));
	// vupkd3d128 v63,v0,20
	__builtin_trap();
	// stvewx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfsu f0,4(r29)
	temp.f32 = float(ctx.f0.f64);
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r29.u32 = ea;
	// bne 0x82af5780
	if (!ctx.cr0.eq) goto loc_82AF5780;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lvrx128 v63,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx128 v62,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v1,v62,v63
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v63.u8)));
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF57FC"))) PPC_WEAK_FUNC(sub_82AF57FC);
PPC_FUNC_IMPL(__imp__sub_82AF57FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF5800"))) PPC_WEAK_FUNC(sub_82AF5800);
PPC_FUNC_IMPL(__imp__sub_82AF5800) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82AF5808;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r4,24
	ctx.r31.s64 = ctx.r4.s64 + 24;
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
	// li r30,4
	ctx.r30.s64 = 4;
loc_82AF5820:
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// lis r5,4
	ctx.r5.s64 = 262144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x82b063c0
	ctx.lr = 0x82AF583C;
	sub_82B063C0(ctx, base);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwzu r11,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// stwu r11,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r29.u32 = ea;
	// bne 0x82af5820
	if (!ctx.cr0.eq) goto loc_82AF5820;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lvrx128 v63,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx128 v62,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v1,v62,v63
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v63.u8)));
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF587C"))) PPC_WEAK_FUNC(sub_82AF587C);
PPC_FUNC_IMPL(__imp__sub_82AF587C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF5880"))) PPC_WEAK_FUNC(sub_82AF5880);
PPC_FUNC_IMPL(__imp__sub_82AF5880) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82AF5888;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r4,24
	ctx.r31.s64 = ctx.r4.s64 + 24;
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
	// li r30,4
	ctx.r30.s64 = 4;
loc_82AF58A0:
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// lis r5,4
	ctx.r5.s64 = 262144;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x82b063c0
	ctx.lr = 0x82AF58BC;
	sub_82B063C0(ctx, base);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwzu r11,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// and r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 & ctx.r7.u64;
	// srw r11,r11,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r8.u8 & 0x3F));
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsplth v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u16, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u16), _mm_set1_epi16(short(0xF0E))));
	// vupkd3d128 v63,v0,20
	__builtin_trap();
	// stvewx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfsu f0,4(r29)
	temp.f32 = float(ctx.f0.f64);
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r29.u32 = ea;
	// bne 0x82af58a0
	if (!ctx.cr0.eq) goto loc_82AF58A0;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lvrx128 v63,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx128 v62,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v1,v62,v63
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v63.u8)));
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF5920"))) PPC_WEAK_FUNC(sub_82AF5920);
PPC_FUNC_IMPL(__imp__sub_82AF5920) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b068e8
	ctx.lr = 0x82AF5958;
	sub_82B068E8(ctx, base);
	// lis r5,4
	ctx.r5.s64 = 262144;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82b063c0
	ctx.lr = 0x82AF596C;
	sub_82B063C0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lhz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// rlwinm r5,r10,21,11,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0x1FFFFF;
	// rlwinm r4,r10,27,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x3F;
	// clrlwi r3,r10,27
	ctx.r3.u64 = ctx.r10.u32 & 0x1F;
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// lvrx128 v63,r9,r11
	temp.u32 = ctx.r9.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx128 v62,r0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v63,v62,v63
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v63.u8)));
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// vcuxwfp128 v62,v63,0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v62.f32, _mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v63.u32)));
	// addi r6,r5,-30048
	ctx.r6.s64 = ctx.r5.s64 + -30048;
	// rlwinm r5,r11,21,11,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1FFFFF;
	// rlwinm r4,r11,27,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3F;
	// clrlwi r3,r11,27
	ctx.r3.u64 = ctx.r11.u32 & 0x1F;
	// stw r5,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// stw r4,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// lvrx128 v63,r9,r8
	temp.u32 = ctx.r9.u32 + ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx128 v61,r0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v63,v61,v63
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v63.u8)));
	// vcuxwfp128 v61,v63,0
	_mm_store_ps(ctx.v61.f32, _mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v63.u32)));
	// lvx128 v63,r0,r6
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// vmulfp128 v0,v61,v63
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v63,v62,v63
	_mm_store_ps(ctx.v63.f32, _mm_mul_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v63.f32)));
	// stvx128 v0,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// vsubfp128 v13,v63,v0
	_mm_store_ps(ctx.v13.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v0.f32)));
	// bgt cr6,0x82af5a40
	if (ctx.cr6.gt) goto loc_82AF5A40;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addi r11,r11,11556
	ctx.r11.s64 = ctx.r11.s64 + 11556;
	// lvlx128 v62,r0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltw128 v12,v62,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0xFF));
	// vmaddfp v0,v13,v12,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82af5a74
	goto loc_82AF5A74;
loc_82AF5A40:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,23560
	ctx.r11.s64 = ctx.r11.s64 + 23560;
	// addi r10,r10,20968
	ctx.r10.s64 = ctx.r10.s64 + 20968;
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v12,v63,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// vmaddfp v12,v13,v12,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v12,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvlx128 v63,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v12,v63,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// vmaddfp v0,v13,v12,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v0,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82AF5A74:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82AF5A80:
	// rlwinm r9,r11,4,26,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x30;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// lvx128 v63,r9,r8
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x82af5a80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82AF5A80;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
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

__attribute__((alias("__imp__sub_82AF5AB4"))) PPC_WEAK_FUNC(sub_82AF5AB4);
PPC_FUNC_IMPL(__imp__sub_82AF5AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF5AB8"))) PPC_WEAK_FUNC(sub_82AF5AB8);
PPC_FUNC_IMPL(__imp__sub_82AF5AB8) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b068e8
	ctx.lr = 0x82AF5AF0;
	sub_82B068E8(ctx, base);
	// lis r5,4
	ctx.r5.s64 = 262144;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82b063c0
	ctx.lr = 0x82AF5B04;
	sub_82B063C0(ctx, base);
	// lhz r9,82(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// li r11,16
	ctx.r11.s64 = 16;
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// rlwinm r8,r9,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// rlwinm r9,r10,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// lvrx128 v63,r11,r5
	temp.u32 = ctx.r11.u32 + ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx128 v62,r0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r9,r8,-30032
	ctx.r9.s64 = ctx.r8.s64 + -30032;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lvrx128 v61,r11,r3
	temp.u32 = ctx.r11.u32 + ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx128 v60,r0,r31
	temp.u32 = ctx.r31.u32;
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v61,v60,v61
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// vor128 v62,v62,v63
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v63.u8)));
	// vcuxwfp128 v61,v61,0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v61.f32, _mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v61.u32)));
	// lvx128 v63,r0,r9
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r7,23560
	ctx.r11.s64 = ctx.r7.s64 + 23560;
	// vcuxwfp128 v62,v62,0
	_mm_store_ps(ctx.v62.f32, _mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v62.u32)));
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// addi r5,r5,20968
	ctx.r5.s64 = ctx.r5.s64 + 20968;
	// vmulfp128 v0,v61,v63
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v63,v62,v63
	_mm_store_ps(ctx.v63.f32, _mm_mul_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v63.f32)));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp128 v13,v63,v0
	_mm_store_ps(ctx.v13.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v63,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v12,v63,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// vmaddfp v12,v13,v12,v0
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v12,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvlx128 v63,r0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v12,v63,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// vmaddfp v0,v13,v12,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v0,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82AF5BD8:
	// rlwinm r11,r6,4,26,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0x30;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// rlwinm r6,r6,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// lvx128 v63,r11,r10
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bdnz 0x82af5bd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82AF5BD8;
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

__attribute__((alias("__imp__sub_82AF5C0C"))) PPC_WEAK_FUNC(sub_82AF5C0C);
PPC_FUNC_IMPL(__imp__sub_82AF5C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF5C10"))) PPC_WEAK_FUNC(sub_82AF5C10);
PPC_FUNC_IMPL(__imp__sub_82AF5C10) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r5,4
	ctx.r5.s64 = 262144;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b063c0
	ctx.lr = 0x82AF5C40;
	sub_82B063C0(ctx, base);
	// lis r5,4
	ctx.r5.s64 = 262144;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82b063c0
	ctx.lr = 0x82AF5C54;
	sub_82B063C0(ctx, base);
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r11,0
	ctx.r11.s64 = 0;
	// stvx128 v63,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stvx128 v63,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82AF5C84:
	// rlwinm r8,r11,31,1,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFC;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r11,2,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFF0;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lwzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// rlwinm r5,r11,2,28,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// clrlwi r31,r7,28
	ctx.r31.u64 = ctx.r7.u32 & 0xF;
	// lvx128 v63,r0,r10
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// rlwinm r7,r7,28,4,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xFFFFFFF;
	// stvx128 v63,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r31,r5,r4
	PPC_STORE_U32(ctx.r5.u32 + ctx.r4.u32, ctx.r31.u32);
	// lvx128 v63,r0,r3
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// stwx r7,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r7.u32);
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bdnz 0x82af5c84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82AF5C84;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r10,r10,-30016
	ctx.r10.s64 = ctx.r10.s64 + -30016;
	// lvx128 v63,r0,r10
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
loc_82AF5CEC:
	// lvx128 v62,r0,r11
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vcuxwfp128 v62,v62,0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v62.f32, _mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v62.u32)));
	// stvx128 v62,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v62,v62,v63
	_mm_store_ps(ctx.v62.f32, _mm_mul_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v63.f32)));
	// stvx128 v62,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x82af5cec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82AF5CEC;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82AF5D18:
	// rlwinm r9,r11,2,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFF0;
	// lvx128 v63,r0,r10
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// rlwinm r6,r11,2,28,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lvx128 v62,r9,r8
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// stvx128 v62,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvlx128 v62,r6,r5
	temp.u32 = ctx.r6.u32 + ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v63,v62,1,1
	_mm_store_ps(ctx.v63.f32, _mm_blend_ps(_mm_load_ps(ctx.v63.f32), _mm_permute_ps(_mm_load_ps(ctx.v62.f32), 147), 1));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x82af5d18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82AF5D18;
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

__attribute__((alias("__imp__sub_82AF5D68"))) PPC_WEAK_FUNC(sub_82AF5D68);
PPC_FUNC_IMPL(__imp__sub_82AF5D68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82AF5D70;
	__savegprlr_29(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r5,4
	ctx.r5.s64 = 262144;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b063c0
	ctx.lr = 0x82AF5D90;
	sub_82B063C0(ctx, base);
	// lis r5,4
	ctx.r5.s64 = 262144;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82b063c0
	ctx.lr = 0x82AF5DA4;
	sub_82B063C0(ctx, base);
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// stvx128 v63,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// stvx128 v63,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82AF5DD8:
	// rlwinm r8,r11,31,1,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFC;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r11,2,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFF0;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lwzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// rlwinm r4,r11,2,28,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r1,96
	ctx.r31.s64 = ctx.r1.s64 + 96;
	// clrlwi r29,r7,28
	ctx.r29.u64 = ctx.r7.u32 & 0xF;
	// lvx128 v63,r0,r10
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// rlwinm r7,r7,28,4,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xFFFFFFF;
	// stvx128 v63,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r29,r4,r3
	PPC_STORE_U32(ctx.r4.u32 + ctx.r3.u32, ctx.r29.u32);
	// lvx128 v63,r0,r31
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// stwx r7,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r7.u32);
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bdnz 0x82af5dd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82AF5DD8;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82AF5E38:
	// rlwinm r9,r11,2,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFF0;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// rlwinm r5,r11,2,28,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lvx128 v63,r9,r8
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stvx128 v63,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r8,r5,r4
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	// rlwinm r7,r8,31,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x1;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// rlwinm r5,r8,29,3,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r8,r8,30,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x1;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lvrx128 v63,r6,r3
	temp.u32 = ctx.r6.u32 + ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx128 v62,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v63,v62,v63
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v63.u8)));
	// vcuxwfp128 v63,v63,0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v63.f32, _mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v63.u32)));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x82af5e38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82AF5E38;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF5EA8"))) PPC_WEAK_FUNC(sub_82AF5EA8);
PPC_FUNC_IMPL(__imp__sub_82AF5EA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw128 v62,0
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_set1_epi32(int(0x0)));
	// li r10,16
	ctx.r10.s64 = 16;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// vupkd3d128 v63,v62,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v62.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v62.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v63 = vTemp;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// vupkd3d128 v61,v62,0
	vTemp.u32[0] = ctx.v62.u8[3] | 0x3F800000;
	vTemp.u32[1] = ctx.v62.u8[0] | 0x3F800000;
	vTemp.u32[2] = ctx.v62.u8[1] | 0x3F800000;
	vTemp.u32[3] = ctx.v62.u8[2] | 0x3F800000;
	ctx.v61 = vTemp;
	// addi r10,r10,-30000
	ctx.r10.s64 = ctx.r10.s64 + -30000;
	// vspltw128 v8,v63,3
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0x0));
loc_82AF5ECC:
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vor128 v13,v62,v62
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v62.u8));
	// lvx128 v7,r0,r10
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vspltw128 v60,v63,3
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0x0));
	// vrefp128 v0,v60
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v60.f32)));
	// vor128 v9,v60,v60
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)ctx.v60.u8));
	// vor128 v10,v60,v60
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)ctx.v60.u8));
	// vcmpeqfp128 v6,v60,v62
	_mm_store_ps(ctx.v6.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v62.f32)));
	// vnmsubfp v5,v9,v0,v8
	_mm_store_ps(ctx.v5.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v8.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor v12,v0,v0
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vmaddfp v0,v0,v5,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v5.f32)), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v5,v10,v0,v8
	_mm_store_ps(ctx.v5.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v8.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vcmpeqfp v9,v0,v0
	_mm_store_ps(ctx.v9.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v0,v5,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v5.f32)), _mm_load_ps(ctx.v0.f32)));
	// vsel v11,v12,v0,v9
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v12.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// vmulfp128 v60,v63,v11
	_mm_store_ps(ctx.v60.f32, _mm_mul_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v11.f32)));
	// vminfp128 v0,v60,v61
	_mm_store_ps(ctx.v0.f32, _mm_min_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v61.f32)));
	// vsel v12,v0,v13,v6
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// vperm128 v63,v63,v12,v7
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// stvx128 v63,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x82af5ecc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82AF5ECC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AF5F28"))) PPC_WEAK_FUNC(sub_82AF5F28);
PPC_FUNC_IMPL(__imp__sub_82AF5F28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lvlx128 v63,r0,r3
	temp.u32 = ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// vspltisw128 v62,0
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_set1_epi32(int(0x0)));
	// addi r11,r11,5184
	ctx.r11.s64 = ctx.r11.s64 + 5184;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r10,r10,-29888
	ctx.r10.s64 = ctx.r10.s64 + -29888;
	// addi r9,r9,-30032
	ctx.r9.s64 = ctx.r9.s64 + -30032;
	// vupkd3d128 v61,v62,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v62.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v62.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v61 = vTemp;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lvlx128 v60,r0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// vrlimi128 v63,v60,4,3
	_mm_store_ps(ctx.v63.f32, _mm_blend_ps(_mm_load_ps(ctx.v63.f32), _mm_permute_ps(_mm_load_ps(ctx.v60.f32), 57), 4));
	// addi r8,r8,-29904
	ctx.r8.s64 = ctx.r8.s64 + -29904;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r11,r11,-29920
	ctx.r11.s64 = ctx.r11.s64 + -29920;
	// lvx128 v13,r0,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// vspltw128 v61,v61,3
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), 0x0));
	// vperm128 v63,v63,v63,v1
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v1.u8)));
	// addi r10,r10,-29936
	ctx.r10.s64 = ctx.r10.s64 + -29936;
	// lvx128 v12,r0,r8
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r9,r9,-29952
	ctx.r9.s64 = ctx.r9.s64 + -29952;
	// lvx128 v11,r0,r11
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r4,16
	ctx.r11.s64 = ctx.r4.s64 + 16;
	// vcuxwfp128 v8,v63,0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v8.f32, _mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v63.u32)));
	// lvx128 v10,r0,r10
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v9,r0,r9
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmaddfp v0,v8,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vor128 v63,v0,v0
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vspltw128 v0,v63,1
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xAA));
	// vspltw128 v13,v63,3
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0x0));
	// vspltw128 v8,v63,0
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// vspltw128 v7,v63,2
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0x55));
	// vmaddfp v0,v0,v11,v12
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v0,v13,v10,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v13,v8,v9,v0
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v13,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vor128 v63,v13,v13
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// lvx128 v13,r0,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmaddfp v0,v7,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vor128 v60,v0,v0
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vmaxfp128 v63,v62,v63
	_mm_store_ps(ctx.v63.f32, _mm_max_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v63.f32)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaxfp128 v62,v62,v60
	_mm_store_ps(ctx.v62.f32, _mm_max_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v60.f32)));
	// vminfp128 v63,v61,v63
	_mm_store_ps(ctx.v63.f32, _mm_min_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v63.f32)));
	// vminfp128 v62,v61,v62
	_mm_store_ps(ctx.v62.f32, _mm_min_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v62.f32)));
	// stvx128 v63,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AF5FF4"))) PPC_WEAK_FUNC(sub_82AF5FF4);
PPC_FUNC_IMPL(__imp__sub_82AF5FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF5FF8"))) PPC_WEAK_FUNC(sub_82AF5FF8);
PPC_FUNC_IMPL(__imp__sub_82AF5FF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82af5920
	sub_82AF5920(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF5FFC"))) PPC_WEAK_FUNC(sub_82AF5FFC);
PPC_FUNC_IMPL(__imp__sub_82AF5FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF6000"))) PPC_WEAK_FUNC(sub_82AF6000);
PPC_FUNC_IMPL(__imp__sub_82AF6000) {
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
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82af5920
	ctx.lr = 0x82AF6024;
	sub_82AF5920(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af5c10
	ctx.lr = 0x82AF6030;
	sub_82AF5C10(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82af5ea8
	ctx.lr = 0x82AF6038;
	sub_82AF5EA8(ctx, base);
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

__attribute__((alias("__imp__sub_82AF6050"))) PPC_WEAK_FUNC(sub_82AF6050);
PPC_FUNC_IMPL(__imp__sub_82AF6050) {
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
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82af5920
	ctx.lr = 0x82AF6074;
	sub_82AF5920(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af5c10
	ctx.lr = 0x82AF6080;
	sub_82AF5C10(ctx, base);
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

__attribute__((alias("__imp__sub_82AF6098"))) PPC_WEAK_FUNC(sub_82AF6098);
PPC_FUNC_IMPL(__imp__sub_82AF6098) {
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
	// bl 0x82af5c10
	ctx.lr = 0x82AF60B0;
	sub_82AF5C10(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82AF60B8:
	// lvx128 v63,r0,r31
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// vspltw128 v63,v63,3
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0x0));
	// stvx128 v63,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// bdnz 0x82af60b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82AF60B8;
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

__attribute__((alias("__imp__sub_82AF60E0"))) PPC_WEAK_FUNC(sub_82AF60E0);
PPC_FUNC_IMPL(__imp__sub_82AF60E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82af5d68
	sub_82AF5D68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF60E4"))) PPC_WEAK_FUNC(sub_82AF60E4);
PPC_FUNC_IMPL(__imp__sub_82AF60E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF60E8"))) PPC_WEAK_FUNC(sub_82AF60E8);
PPC_FUNC_IMPL(__imp__sub_82AF60E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82af5ab8
	sub_82AF5AB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF60EC"))) PPC_WEAK_FUNC(sub_82AF60EC);
PPC_FUNC_IMPL(__imp__sub_82AF60EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF60F0"))) PPC_WEAK_FUNC(sub_82AF60F0);
PPC_FUNC_IMPL(__imp__sub_82AF60F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r11,r11,-29856
	ctx.r11.s64 = ctx.r11.s64 + -29856;
	// lvx128 v1,r0,r11
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// b 0x82af5f28
	sub_82AF5F28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF6100"))) PPC_WEAK_FUNC(sub_82AF6100);
PPC_FUNC_IMPL(__imp__sub_82AF6100) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r11,r11,-29872
	ctx.r11.s64 = ctx.r11.s64 + -29872;
	// lvx128 v1,r0,r11
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// b 0x82af5f28
	sub_82AF5F28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF6110"))) PPC_WEAK_FUNC(sub_82AF6110);
PPC_FUNC_IMPL(__imp__sub_82AF6110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lvlx128 v63,r0,r3
	temp.u32 = ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// vspltisw128 v62,0
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_set1_epi32(int(0x0)));
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-29872
	ctx.r10.s64 = ctx.r10.s64 + -29872;
	// stw r9,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r9.u32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lvlx128 v61,r0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v63,v61,4,3
	_mm_store_ps(ctx.v63.f32, _mm_blend_ps(_mm_load_ps(ctx.v63.f32), _mm_permute_ps(_mm_load_ps(ctx.v61.f32), 57), 4));
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r11,r9,-30032
	ctx.r11.s64 = ctx.r9.s64 + -30032;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// vupkd3d128 v62,v62,0
	vTemp.u32[0] = ctx.v62.u8[3] | 0x3F800000;
	vTemp.u32[1] = ctx.v62.u8[0] | 0x3F800000;
	vTemp.u32[2] = ctx.v62.u8[1] | 0x3F800000;
	vTemp.u32[3] = ctx.v62.u8[2] | 0x3F800000;
	ctx.v62 = vTemp;
	// vperm128 v61,v63,v63,v0
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r10,r10,-29968
	ctx.r10.s64 = ctx.r10.s64 + -29968;
	// addi r9,r9,-29984
	ctx.r9.s64 = ctx.r9.s64 + -29984;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// li r11,16
	ctx.r11.s64 = 16;
	// vcuxwfp128 v61,v61,0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v61.f32, _mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v61.u32)));
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v63,v61,v63
	_mm_store_ps(ctx.v63.f32, _mm_mul_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v63.f32)));
	// vperm128 v61,v63,v62,v0
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v61,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vperm128 v63,v63,v62,v0
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v63,r4,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AF6184"))) PPC_WEAK_FUNC(sub_82AF6184);
PPC_FUNC_IMPL(__imp__sub_82AF6184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF6188"))) PPC_WEAK_FUNC(sub_82AF6188);
PPC_FUNC_IMPL(__imp__sub_82AF6188) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lvlx128 v63,r0,r3
	temp.u32 = ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// vspltisw128 v62,0
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_set1_epi32(int(0x0)));
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-29856
	ctx.r10.s64 = ctx.r10.s64 + -29856;
	// stw r9,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r9.u32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lvlx128 v61,r0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v63,v61,4,3
	_mm_store_ps(ctx.v63.f32, _mm_blend_ps(_mm_load_ps(ctx.v63.f32), _mm_permute_ps(_mm_load_ps(ctx.v61.f32), 57), 4));
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r11,r9,-30032
	ctx.r11.s64 = ctx.r9.s64 + -30032;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// vupkd3d128 v62,v62,0
	vTemp.u32[0] = ctx.v62.u8[3] | 0x3F800000;
	vTemp.u32[1] = ctx.v62.u8[0] | 0x3F800000;
	vTemp.u32[2] = ctx.v62.u8[1] | 0x3F800000;
	vTemp.u32[3] = ctx.v62.u8[2] | 0x3F800000;
	ctx.v62 = vTemp;
	// vperm128 v61,v63,v63,v0
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r10,r10,-29968
	ctx.r10.s64 = ctx.r10.s64 + -29968;
	// addi r9,r9,-29984
	ctx.r9.s64 = ctx.r9.s64 + -29984;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// li r11,16
	ctx.r11.s64 = 16;
	// vcuxwfp128 v61,v61,0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v61.f32, _mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v61.u32)));
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v63,v61,v63
	_mm_store_ps(ctx.v63.f32, _mm_mul_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v63.f32)));
	// vperm128 v61,v63,v62,v0
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v61,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vperm128 v63,v63,v62,v0
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v63,r4,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AF61FC"))) PPC_WEAK_FUNC(sub_82AF61FC);
PPC_FUNC_IMPL(__imp__sub_82AF61FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF6200"))) PPC_WEAK_FUNC(sub_82AF6200);
PPC_FUNC_IMPL(__imp__sub_82AF6200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r10,r1,-20
	ctx.r10.s64 = ctx.r1.s64 + -20;
	// addi r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 + 12;
	// stvx128 v1,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82AF6218:
	// lwz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// slw r8,r8,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// lbzx r7,r9,r3
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r3.u32);
	// and r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 & ctx.r6.u64;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// stbx r8,r9,r3
	PPC_STORE_U8(ctx.r9.u32 + ctx.r3.u32, ctx.r8.u8);
	// bdnz 0x82af6218
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82AF6218;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AF624C"))) PPC_WEAK_FUNC(sub_82AF624C);
PPC_FUNC_IMPL(__imp__sub_82AF624C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF6250"))) PPC_WEAK_FUNC(sub_82AF6250);
PPC_FUNC_IMPL(__imp__sub_82AF6250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82AF6258;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r4,12
	ctx.r31.s64 = ctx.r4.s64 + 12;
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
	// li r30,4
	ctx.r30.s64 = 4;
	// stvx128 v1,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82AF6278:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// lwzu r11,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bl 0x82b063c0
	ctx.lr = 0x82AF62A4;
	sub_82B063C0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lhzx r9,r11,r28
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r28.u32);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// sthx r10,r11,r28
	PPC_STORE_U16(ctx.r11.u32 + ctx.r28.u32, ctx.r10.u16);
	// bne 0x82af6278
	if (!ctx.cr0.eq) goto loc_82AF6278;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF62D0"))) PPC_WEAK_FUNC(sub_82AF62D0);
PPC_FUNC_IMPL(__imp__sub_82AF62D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82AF62D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r1,96
	ctx.r29.s64 = ctx.r1.s64 + 96;
	// addi r31,r4,12
	ctx.r31.s64 = ctx.r4.s64 + 12;
	// li r30,4
	ctx.r30.s64 = 4;
	// stvx128 v1,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82AF62F4:
	// lvlx128 v63,r0,r29
	temp.u32 = ctx.r29.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,82
	ctx.r11.s64 = ctx.r1.s64 + 82;
	// vor128 v0,v63,v63
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// lis r5,2
	ctx.r5.s64 = 131072;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// vpkd3d128 v0,v63,5,2,2
	ctx.fpscr.enableFlushMode();
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
	// stvehx v0,r0,r11
	ea = (ctx.r11.u32) & ~0x1;
	PPC_STORE_U16(ea, ctx.v0.u16[7 - ((ea & 0xF) >> 1)]);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lhz r9,82(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bl 0x82b063c0
	ctx.lr = 0x82AF6338;
	sub_82B063C0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lhzx r9,r11,r28
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r28.u32);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// sthx r10,r11,r28
	PPC_STORE_U16(ctx.r11.u32 + ctx.r28.u32, ctx.r10.u16);
	// bne 0x82af62f4
	if (!ctx.cr0.eq) goto loc_82AF62F4;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF6368"))) PPC_WEAK_FUNC(sub_82AF6368);
PPC_FUNC_IMPL(__imp__sub_82AF6368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82AF6370;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r4,12
	ctx.r31.s64 = ctx.r4.s64 + 12;
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
	// li r30,4
	ctx.r30.s64 = 4;
	// stvx128 v1,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82AF6390:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lis r5,4
	ctx.r5.s64 = 262144;
	// lwzu r11,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82b063c0
	ctx.lr = 0x82AF63BC;
	sub_82B063C0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwzx r9,r11,r28
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stwx r10,r11,r28
	PPC_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r10.u32);
	// bne 0x82af6390
	if (!ctx.cr0.eq) goto loc_82AF6390;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF63E8"))) PPC_WEAK_FUNC(sub_82AF63E8);
PPC_FUNC_IMPL(__imp__sub_82AF63E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82AF63F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r1,96
	ctx.r29.s64 = ctx.r1.s64 + 96;
	// addi r31,r4,12
	ctx.r31.s64 = ctx.r4.s64 + 12;
	// li r30,4
	ctx.r30.s64 = 4;
	// stvx128 v1,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82AF640C:
	// lvlx128 v63,r0,r29
	temp.u32 = ctx.r29.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// vor128 v0,v63,v63
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// lis r5,4
	ctx.r5.s64 = 262144;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// vpkd3d128 v0,v63,5,2,2
	ctx.fpscr.enableFlushMode();
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
	// stvehx v0,r0,r11
	ea = (ctx.r11.u32) & ~0x1;
	PPC_STORE_U16(ea, ctx.v0.u16[7 - ((ea & 0xF) >> 1)]);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lhz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82b063c0
	ctx.lr = 0x82AF6450;
	sub_82B063C0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwzx r9,r11,r28
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stwx r10,r11,r28
	PPC_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r10.u32);
	// bne 0x82af640c
	if (!ctx.cr0.eq) goto loc_82AF640C;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF6480"))) PPC_WEAK_FUNC(sub_82AF6480);
PPC_FUNC_IMPL(__imp__sub_82AF6480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82AF6488;
	__savegprlr_29(ctx, base);
	// li r12,-80
	ctx.r12.s64 = -80;
	// stvx128 v125,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r12,-64
	ctx.r12.s64 = -64;
	// stvx128 v126,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r12,-48
	ctx.r12.s64 = -48;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// vmaxfp128 v63,v5,v1
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v63.f32, _mm_max_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v1.f32)));
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// vor128 v127,v2,v2
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_load_si128((__m128i*)ctx.v2.u8));
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// vor128 v126,v7,v7
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_load_si128((__m128i*)ctx.v7.u8));
	// rlwinm r5,r11,29,3,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// vminfp128 v0,v6,v63
	_mm_store_ps(ctx.v0.f32, _mm_min_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v63.f32)));
	// vmaddfp v0,v0,v3,v4
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v3.f32)), _mm_load_ps(ctx.v4.f32)));
	// vor128 v125,v0,v0
	_mm_store_si128((__m128i*)ctx.v125.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// bl 0x82fa7cf0
	ctx.lr = 0x82AF64D8;
	sub_82FA7CF0(ctx, base);
	// vrfin128 v63,v125
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v63.f32, _mm_round_ps(_mm_load_ps(ctx.v125.f32), _MM_FROUND_TO_NEAREST_INT | _MM_FROUND_NO_EXC));
	// vor128 v0,v125,v125
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v125.u8));
	// vor128 v12,v127,v127
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// vcfpuxws128 v13,v63,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_vctuxs(_mm_load_ps(ctx.v63.f32)));
	// vsel128 v12,v0,v13,v12
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// vxor128 v1,v12,v126
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v126.u8)));
	// bctrl 
	ctx.lr = 0x82AF6500;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// li r0,-80
	ctx.r0.s64 = -80;
	// lvx128 v125,r1,r0
	simd::store_shuffled(ctx.v125, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF), VectorMaskL));
	// li r0,-64
	ctx.r0.s64 = -64;
	// lvx128 v126,r1,r0
	simd::store_shuffled(ctx.v126, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF), VectorMaskL));
	// li r0,-48
	ctx.r0.s64 = -48;
	// lvx128 v127,r1,r0
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF), VectorMaskL));
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF6520"))) PPC_WEAK_FUNC(sub_82AF6520);
PPC_FUNC_IMPL(__imp__sub_82AF6520) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r4,28
	ctx.r11.s64 = ctx.r4.s64 + 28;
	// lfs f0,5184(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// lfs f13,11556(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11556);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,24436(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24436);
	ctx.f0.f64 = double(temp.f32);
loc_82AF6558:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// srw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82af6578
	if (!ctx.cr6.eq) goto loc_82AF6578;
	// fsubs f12,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
loc_82AF6578:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82af6558
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82AF6558;
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// lvrx128 v63,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx128 v62,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v1,v62,v63
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v63.u8)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AF65A0"))) PPC_WEAK_FUNC(sub_82AF65A0);
PPC_FUNC_IMPL(__imp__sub_82AF65A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// subf r9,r9,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r9.s64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82AF65B4:
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// addi r10,r10,-3
	ctx.r10.s64 = ctx.r10.s64 + -3;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82af65b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82AF65B4;
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// lvrx128 v63,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx128 v62,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v1,v62,v63
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v63.u8)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AF65F4"))) PPC_WEAK_FUNC(sub_82AF65F4);
PPC_FUNC_IMPL(__imp__sub_82AF65F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF65F8"))) PPC_WEAK_FUNC(sub_82AF65F8);
PPC_FUNC_IMPL(__imp__sub_82AF65F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x82af6728
	if (ctx.cr6.eq) goto loc_82AF6728;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x82af66a4
	if (ctx.cr6.eq) goto loc_82AF66A4;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// beq cr6,0x82af6620
	if (ctx.cr6.eq) goto loc_82AF6620;
	// twi 31,r0,22
	if (ctx.r0.s32 < 22 || ctx.r0.s32 > 22 || ctx.r0.u32 == 22 || ctx.r0.u32 < 22 || ctx.r0.u32 > 22) __builtin_debugtrap();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82AF6620:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82af6698
	if (!ctx.cr6.eq) goto loc_82AF6698;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x82af668c
	if (ctx.cr6.eq) goto loc_82AF668C;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x82af668c
	if (ctx.cr6.eq) goto loc_82AF668C;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x82af668c
	if (ctx.cr6.eq) goto loc_82AF668C;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x82af6698
	if (!ctx.cr6.eq) goto loc_82AF6698;
loc_82AF668C:
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,22656
	ctx.r3.s64 = ctx.r11.s64 + 22656;
	// blr 
	return;
loc_82AF6698:
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,22528
	ctx.r3.s64 = ctx.r11.s64 + 22528;
	// blr 
	return;
loc_82AF66A4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82af671c
	if (!ctx.cr6.eq) goto loc_82AF671C;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x82af6710
	if (ctx.cr6.eq) goto loc_82AF6710;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x82af6710
	if (ctx.cr6.eq) goto loc_82AF6710;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x82af6710
	if (ctx.cr6.eq) goto loc_82AF6710;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x82af671c
	if (!ctx.cr6.eq) goto loc_82AF671C;
loc_82AF6710:
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,22368
	ctx.r3.s64 = ctx.r11.s64 + 22368;
	// blr 
	return;
loc_82AF671C:
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,22240
	ctx.r3.s64 = ctx.r11.s64 + 22240;
	// blr 
	return;
loc_82AF6728:
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,22160
	ctx.r3.s64 = ctx.r11.s64 + 22160;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AF6734"))) PPC_WEAK_FUNC(sub_82AF6734);
PPC_FUNC_IMPL(__imp__sub_82AF6734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF6738"))) PPC_WEAK_FUNC(sub_82AF6738);
PPC_FUNC_IMPL(__imp__sub_82AF6738) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x82af6868
	if (ctx.cr6.eq) goto loc_82AF6868;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x82af67e4
	if (ctx.cr6.eq) goto loc_82AF67E4;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// beq cr6,0x82af6760
	if (ctx.cr6.eq) goto loc_82AF6760;
	// twi 31,r0,22
	if (ctx.r0.s32 < 22 || ctx.r0.s32 > 22 || ctx.r0.u32 == 22 || ctx.r0.u32 < 22 || ctx.r0.u32 > 22) __builtin_debugtrap();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82AF6760:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82af67d8
	if (!ctx.cr6.eq) goto loc_82AF67D8;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x82af67cc
	if (ctx.cr6.eq) goto loc_82AF67CC;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x82af67cc
	if (ctx.cr6.eq) goto loc_82AF67CC;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x82af67cc
	if (ctx.cr6.eq) goto loc_82AF67CC;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x82af67d8
	if (!ctx.cr6.eq) goto loc_82AF67D8;
loc_82AF67CC:
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,25576
	ctx.r3.s64 = ctx.r11.s64 + 25576;
	// blr 
	return;
loc_82AF67D8:
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,25448
	ctx.r3.s64 = ctx.r11.s64 + 25448;
	// blr 
	return;
loc_82AF67E4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82af685c
	if (!ctx.cr6.eq) goto loc_82AF685C;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x82af6850
	if (ctx.cr6.eq) goto loc_82AF6850;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x82af6850
	if (ctx.cr6.eq) goto loc_82AF6850;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x82af6850
	if (ctx.cr6.eq) goto loc_82AF6850;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x82af685c
	if (!ctx.cr6.eq) goto loc_82AF685C;
loc_82AF6850:
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,25296
	ctx.r3.s64 = ctx.r11.s64 + 25296;
	// blr 
	return;
loc_82AF685C:
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,25168
	ctx.r3.s64 = ctx.r11.s64 + 25168;
	// blr 
	return;
loc_82AF6868:
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,25088
	ctx.r3.s64 = ctx.r11.s64 + 25088;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AF6874"))) PPC_WEAK_FUNC(sub_82AF6874);
PPC_FUNC_IMPL(__imp__sub_82AF6874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF6878"))) PPC_WEAK_FUNC(sub_82AF6878);
PPC_FUNC_IMPL(__imp__sub_82AF6878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7658
	ctx.lr = 0x82AF6880;
	__savegprlr_20(ctx, base);
	// stfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f30.u64);
	// stfd f31,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x82fac154
	ctx.lr = 0x82AF6890;
	__savevmx_124(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// vor128 v127,v63,v63
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// vor128 v126,v63,v63
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// mr r21,r9
	ctx.r21.u64 = ctx.r9.u64;
	// vor128 v124,v63,v63
	_mm_store_si128((__m128i*)ctx.v124.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// mr r20,r10
	ctx.r20.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r29,-128
	ctx.r29.s64 = -8388608;
	// bne cr6,0x82af690c
	if (!ctx.cr6.eq) goto loc_82AF690C;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// vupkd3d128 v63,v63,0
	vTemp.u32[0] = ctx.v63.u8[3] | 0x3F800000;
	vTemp.u32[1] = ctx.v63.u8[0] | 0x3F800000;
	vTemp.u32[2] = ctx.v63.u8[1] | 0x3F800000;
	vTemp.u32[3] = ctx.v63.u8[2] | 0x3F800000;
	ctx.v63 = vTemp;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// lvx128 v125,r0,r11
	simd::store_shuffled(ctx.v125, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// lvx128 v127,r0,r10
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// b 0x82af6b10
	goto loc_82AF6B10;
loc_82AF690C:
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r28,r3,28
	ctx.r28.s64 = ctx.r3.s64 + 28;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r30,1
	ctx.r30.s64 = 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lfs f30,5180(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5180);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,24436(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24436);
	ctx.f31.f64 = double(temp.f32);
	// lvx128 v125,r0,r9
	simd::store_shuffled(ctx.v125, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
loc_82AF694C:
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r10,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r10.s64 = 32 - ctx.r11.s64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82af6b00
	if (ctx.cr6.eq) goto loc_82AF6B00;
	// lwzx r9,r31,r25
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82af6980
	if (!ctx.cr6.eq) goto loc_82AF6980;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// slw r11,r30,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r11.u8 & 0x3F));
	// b 0x82af6984
	goto loc_82AF6984;
loc_82AF6980:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82AF6984:
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// stvx128 v124,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v124.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwx r11,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// lvx128 v124,r0,r6
	simd::store_shuffled(ctx.v124, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// bne cr6,0x82af6a88
	if (!ctx.cr6.eq) goto loc_82AF6A88;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82af6a3c
	if (ctx.cr6.eq) goto loc_82AF6A3C;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// beq cr6,0x82af6a3c
	if (ctx.cr6.eq) goto loc_82AF6A3C;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stvx128 v126,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// slw r11,r30,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r11.u8 & 0x3F));
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r10,r9,32
	ctx.r10.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// stvx128 v63,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// stvx128 v127,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// stfsx f30,r31,r7
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, temp.u32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lvx128 v127,r0,r6
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfsx f0,r31,r9
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, temp.u32);
	// lvx128 v126,r0,r11
	simd::store_shuffled(ctx.v126, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// fdivs f0,f31,f13
	ctx.f0.f64 = double(float(ctx.f31.f64 / ctx.f13.f64));
	// stfsx f0,r31,r8
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, temp.u32);
	// lvx128 v63,r0,r10
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// b 0x82af6b00
	goto loc_82AF6B00;
loc_82AF6A3C:
	// clrldi r11,r10,32
	ctx.r11.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// sld r11,r30,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r30.u64 << (ctx.r11.u8 & 0x7F));
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82fa9760
	ctx.lr = 0x82AF6A54;
	sub_82FA9760(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// stvx128 v127,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwx r29,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r29.u32);
	// fdivs f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// stfsx f0,r31,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, temp.u32);
	// lvx128 v127,r0,r8
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v63,r0,r7
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// b 0x82af6b00
	goto loc_82AF6B00;
loc_82AF6A88:
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// stvx128 v63,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfsx f31,r31,r7
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, temp.u32);
	// lvx128 v63,r0,r8
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// beq cr6,0x82af6ab0
	if (ctx.cr6.eq) goto loc_82AF6AB0;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// bne cr6,0x82af6ae8
	if (!ctx.cr6.eq) goto loc_82AF6AE8;
loc_82AF6AB0:
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// stvx128 v126,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// slw r11,r30,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r11.u8 & 0x3F));
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfsx f0,r31,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, temp.u32);
	// lvx128 v126,r0,r11
	simd::store_shuffled(ctx.v126, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
loc_82AF6AE8:
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// addi r9,r1,240
	ctx.r9.s64 = ctx.r1.s64 + 240;
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// stvx128 v127,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwx r29,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r29.u32);
	// lvx128 v127,r0,r10
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
loc_82AF6B00:
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bdnz 0x82af694c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82AF694C;
	// vmulfp128 v126,v126,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v126.f32, _mm_mul_ps(_mm_load_ps(ctx.v126.f32), _mm_load_ps(ctx.v63.f32)));
loc_82AF6B10:
	// stvx128 v125,r0,r24
	_mm_store_si128((__m128i*)(base + ((ctx.r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r23
	_mm_store_si128((__m128i*)(base + ((ctx.r23.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v126,r0,r22
	_mm_store_si128((__m128i*)(base + ((ctx.r22.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v127,r0,r21
	_mm_store_si128((__m128i*)(base + ((ctx.r21.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v124,r0,r20
	_mm_store_si128((__m128i*)(base + ((ctx.r20.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v124.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x82fac3ec
	ctx.lr = 0x82AF6B30;
	__restvmx_124(ctx, base);
	// lfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x82fa76a8
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF6B3C"))) PPC_WEAK_FUNC(sub_82AF6B3C);
PPC_FUNC_IMPL(__imp__sub_82AF6B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF6B40"))) PPC_WEAK_FUNC(sub_82AF6B40);
PPC_FUNC_IMPL(__imp__sub_82AF6B40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x82AF6B48;
	__savegprlr_21(ctx, base);
	// stfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f30.u64);
	// stfd f31,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x82fac144
	ctx.lr = 0x82AF6B58;
	__savevmx_122(ctx, base);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// vor128 v127,v63,v63
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// vor128 v126,v63,v63
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// vor128 v125,v63,v63
	_mm_store_si128((__m128i*)ctx.v125.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// vor128 v124,v63,v63
	_mm_store_si128((__m128i*)ctx.v124.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// mr r21,r10
	ctx.r21.u64 = ctx.r10.u64;
	// vor128 v122,v63,v63
	_mm_store_si128((__m128i*)ctx.v122.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// li r28,0
	ctx.r28.s64 = 0;
	// bne cr6,0x82af6bf8
	if (!ctx.cr6.eq) goto loc_82AF6BF8;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// vupkd3d128 v125,v63,0
	vTemp.u32[0] = ctx.v63.u8[3] | 0x3F800000;
	vTemp.u32[1] = ctx.v63.u8[0] | 0x3F800000;
	vTemp.u32[2] = ctx.v63.u8[1] | 0x3F800000;
	vTemp.u32[3] = ctx.v63.u8[2] | 0x3F800000;
	ctx.v125 = vTemp;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// lis r10,-128
	ctx.r10.s64 = -8388608;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// lis r11,32640
	ctx.r11.s64 = 2139095040;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// lvx128 v123,r0,r9
	simd::store_shuffled(ctx.v123, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lvx128 v126,r0,r8
	simd::store_shuffled(ctx.v126, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lvx128 v127,r0,r7
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// b 0x82af6e5c
	goto loc_82AF6E5C;
loc_82AF6BF8:
	// li r10,4
	ctx.r10.s64 = 4;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r29,r3,28
	ctx.r29.s64 = ctx.r3.s64 + 28;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lvx128 v123,r0,r9
	simd::store_shuffled(ctx.v123, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lfs f31,24436(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,5180(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5180);
	ctx.f30.f64 = double(temp.f32);
loc_82AF6C34:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r11,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r11.s64 = 32 - ctx.r11.s64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82af6e50
	if (ctx.cr6.eq) goto loc_82AF6E50;
	// lwzx r9,r31,r26
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82af6c68
	if (!ctx.cr6.eq) goto loc_82AF6C68;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// slw r10,r30,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r10.u8 & 0x3F));
	// b 0x82af6c6c
	goto loc_82AF6C6C;
loc_82AF6C68:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_82AF6C6C:
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// stvx128 v122,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v122.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwx r10,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r10.u32);
	// lvx128 v122,r0,r6
	simd::store_shuffled(ctx.v122, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// bne cr6,0x82af6d7c
	if (!ctx.cr6.eq) goto loc_82AF6D7C;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82af6d34
	if (ctx.cr6.eq) goto loc_82AF6D34;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// beq cr6,0x82af6d34
	if (ctx.cr6.eq) goto loc_82AF6D34;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// stvx128 v127,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// slw r11,r30,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r11.u8 & 0x3F));
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r10,r9,32
	ctx.r10.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f13,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lfd f0,112(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// addi r8,r1,288
	ctx.r8.s64 = ctx.r1.s64 + 288;
	// stvx128 v126,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r1,256
	ctx.r7.s64 = ctx.r1.s64 + 256;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// addi r11,r1,288
	ctx.r11.s64 = ctx.r1.s64 + 288;
	// stfsx f31,r31,r10
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, temp.u32);
	// addi r10,r1,256
	ctx.r10.s64 = ctx.r1.s64 + 256;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// stvx128 v124,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v124.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v125,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r1,256
	ctx.r7.s64 = ctx.r1.s64 + 256;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lvx128 v127,r0,r9
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// stfsx f0,r31,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, temp.u32);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// stfsx f0,r31,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, temp.u32);
	// stfsx f30,r31,r6
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, temp.u32);
	// lvx128 v126,r0,r8
	simd::store_shuffled(ctx.v126, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v124,r0,r5
	simd::store_shuffled(ctx.v124, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// lvx128 v125,r0,r7
	simd::store_shuffled(ctx.v125, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// b 0x82af6e50
	goto loc_82AF6E50;
loc_82AF6D34:
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// sld r11,r30,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r30.u64 << (ctx.r11.u8 & 0x7F));
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// stvx128 v125,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82fa9760
	ctx.lr = 0x82AF6D4C;
	sub_82FA9760(ctx, base);
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// stvx128 v127,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfsx f0,r31,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, temp.u32);
	// stfsx f31,r31,r9
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, temp.u32);
	// lvx128 v127,r0,r8
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v125,r0,r7
	simd::store_shuffled(ctx.v125, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// b 0x82af6e50
	goto loc_82AF6E50;
loc_82AF6D7C:
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stvx128 v125,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfsx f31,r31,r7
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, temp.u32);
	// lvx128 v125,r0,r8
	simd::store_shuffled(ctx.v125, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// beq cr6,0x82af6e24
	if (ctx.cr6.eq) goto loc_82AF6E24;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// beq cr6,0x82af6e24
	if (ctx.cr6.eq) goto loc_82AF6E24;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// slw r11,r30,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r11.u8 & 0x3F));
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stvx128 v126,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// stvx128 v124,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v124.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfd f0,104(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// addi r7,r1,240
	ctx.r7.s64 = ctx.r1.s64 + 240;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// stvx128 v127,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// stfsx f13,r31,r7
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, temp.u32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfsx f0,r31,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, temp.u32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfsx f0,r31,r8
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, temp.u32);
	// lvx128 v124,r0,r6
	simd::store_shuffled(ctx.v124, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// lvx128 v126,r0,r9
	simd::store_shuffled(ctx.v126, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// b 0x82af6e4c
	goto loc_82AF6E4C;
loc_82AF6E24:
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// addi r10,r1,304
	ctx.r10.s64 = ctx.r1.s64 + 304;
	// sld r11,r30,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r30.u64 << (ctx.r11.u8 & 0x7F));
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// stvx128 v127,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82fa9760
	ctx.lr = 0x82AF6E3C;
	sub_82FA9760(ctx, base);
	// addi r11,r1,304
	ctx.r11.s64 = ctx.r1.s64 + 304;
	// addi r10,r1,304
	ctx.r10.s64 = ctx.r1.s64 + 304;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfsx f0,r31,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, temp.u32);
loc_82AF6E4C:
	// lvx128 v127,r0,r10
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
loc_82AF6E50:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bdnz 0x82af6c34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82AF6C34;
loc_82AF6E5C:
	// lwz r11,612(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// stvx128 v123,r0,r25
	_mm_store_si128((__m128i*)(base + ((ctx.r25.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v123.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v125,r0,r24
	_mm_store_si128((__m128i*)(base + ((ctx.r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v124,r0,r23
	_mm_store_si128((__m128i*)(base + ((ctx.r23.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v124.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v126,r0,r22
	_mm_store_si128((__m128i*)(base + ((ctx.r22.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v127,r0,r21
	_mm_store_si128((__m128i*)(base + ((ctx.r21.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v122,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v122.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x82fac3dc
	ctx.lr = 0x82AF6E84;
	__restvmx_122(ctx, base);
	// lfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF6E90"))) PPC_WEAK_FUNC(sub_82AF6E90);
PPC_FUNC_IMPL(__imp__sub_82AF6E90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r8,r1,-80
	ctx.r8.s64 = ctx.r1.s64 + -80;
	// lbz r7,1(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// stw r10,-72(r1)
	PPC_STORE_U32(ctx.r1.u32 + -72, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r10,-68(r1)
	PPC_STORE_U32(ctx.r1.u32 + -68, ctx.r10.u32);
	// addi r6,r6,-30032
	ctx.r6.s64 = ctx.r6.s64 + -30032;
	// stw r9,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r9.u32);
	// stw r7,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r7.u32);
	// lvx128 v63,r0,r8
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vcuxwfp128 v62,v63,0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v62.f32, _mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v63.u32)));
	// lvx128 v63,r0,r6
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v63,v62,v63
	_mm_store_ps(ctx.v63.f32, _mm_mul_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v63.f32)));
	// vspltw128 v0,v63,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// vspltw128 v63,v63,1
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xAA));
	// vcmpgtfp128. v62,v0,v63
	_mm_store_ps(ctx.v62.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v63.f32)));
	ctx.cr6.setFromMask(_mm_load_ps(ctx.v62.f32), 0xF);
	// bge cr6,0x82af6f44
	if (!ctx.cr6.lt) goto loc_82AF6F44;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// addi r9,r9,-29696
	ctx.r9.s64 = ctx.r9.s64 + -29696;
	// addi r8,r8,-29712
	ctx.r8.s64 = ctx.r8.s64 + -29712;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// addi r7,r7,-29728
	ctx.r7.s64 = ctx.r7.s64 + -29728;
	// lvx128 v62,r0,r9
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r9,r1,-48
	ctx.r9.s64 = ctx.r1.s64 + -48;
	// lvx128 v61,r0,r8
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v13,v63,v62
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v62.f32)));
	// vmulfp128 v12,v63,v61
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v61.f32)));
	// addi r8,r6,-29744
	ctx.r8.s64 = ctx.r6.s64 + -29744;
	// addi r6,r1,-32
	ctx.r6.s64 = ctx.r1.s64 + -32;
	// lvx128 v11,r0,r7
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// addi r7,r1,-48
	ctx.r7.s64 = ctx.r1.s64 + -48;
	// addi r4,r1,-32
	ctx.r4.s64 = ctx.r1.s64 + -32;
	// lvx128 v10,r0,r8
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// stvx128 v13,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaddfp v13,v0,v11,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v0,v10,v12
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v12.f32)));
	// stvx128 v12,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82af6fb8
	goto loc_82AF6FB8;
loc_82AF6F44:
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// addi r9,r9,-29760
	ctx.r9.s64 = ctx.r9.s64 + -29760;
	// addi r8,r8,-29776
	ctx.r8.s64 = ctx.r8.s64 + -29776;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// addi r4,r1,-48
	ctx.r4.s64 = ctx.r1.s64 + -48;
	// lvx128 v62,r0,r9
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r7,r7,-29808
	ctx.r7.s64 = ctx.r7.s64 + -29808;
	// vmulfp128 v13,v63,v62
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v62.f32)));
	// lvx128 v62,r0,r8
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v12,v63,v62
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v62.f32)));
	// addi r8,r6,-29792
	ctx.r8.s64 = ctx.r6.s64 + -29792;
	// addi r9,r1,-48
	ctx.r9.s64 = ctx.r1.s64 + -48;
	// lis r6,-32233
	ctx.r6.s64 = -2112421888;
	// lvx128 v11,r0,r7
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// addi r7,r1,-32
	ctx.r7.s64 = ctx.r1.s64 + -32;
	// addi r6,r6,24436
	ctx.r6.s64 = ctx.r6.s64 + 24436;
	// lvx128 v10,r0,r8
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r8,r1,-32
	ctx.r8.s64 = ctx.r1.s64 + -32;
	// stvx128 v13,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaddfp v13,v0,v11,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)));
	// vor128 v63,v12,v12
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_load_si128((__m128i*)ctx.v12.u8));
	// stvx128 v12,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaddfp128 v63,v0,v10,v63
	_mm_store_ps(ctx.v63.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v63.f32)));
	// stvx128 v13,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvlx128 v62,r0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v63,v62,1,1
	_mm_store_ps(ctx.v63.f32, _mm_blend_ps(_mm_load_ps(ctx.v63.f32), _mm_permute_ps(_mm_load_ps(ctx.v62.f32), 147), 1));
	// stvx128 v63,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82AF6FB8:
	// lbz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// li r9,16
	ctx.r9.s64 = 16;
	// lbz r7,7(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// rlwinm r6,r5,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r5,3(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// lbz r4,6(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// or r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 | ctx.r5.u64;
	// lbz r5,2(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// or r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 | ctx.r4.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lbz r4,5(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r9,r7,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 | ctx.r5.u64;
	// or r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 | ctx.r4.u64;
	// addi r7,r1,-64
	ctx.r7.s64 = ctx.r1.s64 + -64;
	// stw r8,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r8.u32);
	// stw r9,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r9.u32);
loc_82AF7008:
	// rlwinm r8,r10,31,1,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFC;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r9,r1,-80
	ctx.r9.s64 = ctx.r1.s64 + -80;
	// addi r5,r1,-64
	ctx.r5.s64 = ctx.r1.s64 + -64;
	// addi r3,r1,-64
	ctx.r3.s64 = ctx.r1.s64 + -64;
	// addi r4,r1,-48
	ctx.r4.s64 = ctx.r1.s64 + -48;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r31,r8,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// stvx128 v63,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// rlwinm r5,r31,2,27,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x1C;
	// rlwinm r31,r31,29,3,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFFF;
	// stwx r31,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r31.u32);
	// lfsx f0,r5,r4
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r6,r7
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r7.u32, temp.u32);
	// lvx128 v63,r0,r3
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x82af7008
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82AF7008;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AF7058"))) PPC_WEAK_FUNC(sub_82AF7058);
PPC_FUNC_IMPL(__imp__sub_82AF7058) {
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
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82af5920
	ctx.lr = 0x82AF707C;
	sub_82AF5920(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af6e90
	ctx.lr = 0x82AF708C;
	sub_82AF6E90(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82af5ea8
	ctx.lr = 0x82AF7094;
	sub_82AF5EA8(ctx, base);
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

__attribute__((alias("__imp__sub_82AF70AC"))) PPC_WEAK_FUNC(sub_82AF70AC);
PPC_FUNC_IMPL(__imp__sub_82AF70AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF70B0"))) PPC_WEAK_FUNC(sub_82AF70B0);
PPC_FUNC_IMPL(__imp__sub_82AF70B0) {
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
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82af5920
	ctx.lr = 0x82AF70D4;
	sub_82AF5920(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af6e90
	ctx.lr = 0x82AF70E4;
	sub_82AF6E90(ctx, base);
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

__attribute__((alias("__imp__sub_82AF70FC"))) PPC_WEAK_FUNC(sub_82AF70FC);
PPC_FUNC_IMPL(__imp__sub_82AF70FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF7100"))) PPC_WEAK_FUNC(sub_82AF7100);
PPC_FUNC_IMPL(__imp__sub_82AF7100) {
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
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82af6e90
	ctx.lr = 0x82AF711C;
	sub_82AF6E90(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82AF7124:
	// lvx128 v63,r0,r31
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// vspltw128 v63,v63,3
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0x0));
	// stvx128 v63,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// bdnz 0x82af7124
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82AF7124;
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

__attribute__((alias("__imp__sub_82AF714C"))) PPC_WEAK_FUNC(sub_82AF714C);
PPC_FUNC_IMPL(__imp__sub_82AF714C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF7150"))) PPC_WEAK_FUNC(sub_82AF7150);
PPC_FUNC_IMPL(__imp__sub_82AF7150) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82af6e90
	ctx.lr = 0x82AF7174;
	sub_82AF6E90(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x82af6e90
	ctx.lr = 0x82AF7184;
	sub_82AF6E90(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82AF718C:
	// lvx128 v63,r0,r31
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v63,v63,17
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xEE));
	// stvx128 v63,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// bdnz 0x82af718c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82AF718C;
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

__attribute__((alias("__imp__sub_82AF71B8"))) PPC_WEAK_FUNC(sub_82AF71B8);
PPC_FUNC_IMPL(__imp__sub_82AF71B8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,51
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 51, ctx.xer);
	// bgt cr6,0x82af724c
	if (ctx.cr6.gt) goto loc_82AF724C;
	// beq cr6,0x82af7240
	if (ctx.cr6.eq) goto loc_82AF7240;
	// cmplwi cr6,r3,11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 11, ctx.xer);
	// beq cr6,0x82af7220
	if (ctx.cr6.eq) goto loc_82AF7220;
	// cmplwi cr6,r3,12
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 12, ctx.xer);
	// beq cr6,0x82af7200
	if (ctx.cr6.eq) goto loc_82AF7200;
	// cmplwi cr6,r3,18
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 18, ctx.xer);
	// beq cr6,0x82af7240
	if (ctx.cr6.eq) goto loc_82AF7240;
	// cmplwi cr6,r3,19
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 19, ctx.xer);
	// beq cr6,0x82af72d8
	if (ctx.cr6.eq) goto loc_82AF72D8;
	// cmplwi cr6,r3,20
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 20, ctx.xer);
	// beq cr6,0x82af72b8
	if (ctx.cr6.eq) goto loc_82AF72B8;
	// cmplwi cr6,r3,49
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 49, ctx.xer);
	// bne cr6,0x82af727c
	if (!ctx.cr6.eq) goto loc_82AF727C;
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,29008
	ctx.r3.s64 = ctx.r11.s64 + 29008;
	// blr 
	return;
loc_82AF7200:
	// rlwinm. r11,r4,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82af7214
	if (ctx.cr0.eq) goto loc_82AF7214;
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,24816
	ctx.r3.s64 = ctx.r11.s64 + 24816;
	// blr 
	return;
loc_82AF7214:
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,24968
	ctx.r3.s64 = ctx.r11.s64 + 24968;
	// blr 
	return;
loc_82AF7220:
	// rlwinm. r11,r4,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82af7234
	if (ctx.cr0.eq) goto loc_82AF7234;
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,24832
	ctx.r3.s64 = ctx.r11.s64 + 24832;
	// blr 
	return;
loc_82AF7234:
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,24848
	ctx.r3.s64 = ctx.r11.s64 + 24848;
	// blr 
	return;
loc_82AF7240:
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,24568
	ctx.r3.s64 = ctx.r11.s64 + 24568;
	// blr 
	return;
loc_82AF724C:
	// cmplwi cr6,r3,52
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 52, ctx.xer);
	// beq cr6,0x82af72d8
	if (ctx.cr6.eq) goto loc_82AF72D8;
	// cmplwi cr6,r3,53
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 53, ctx.xer);
	// beq cr6,0x82af72b8
	if (ctx.cr6.eq) goto loc_82AF72B8;
	// cmplwi cr6,r3,58
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 58, ctx.xer);
	// beq cr6,0x82af72ac
	if (ctx.cr6.eq) goto loc_82AF72AC;
	// cmplwi cr6,r3,59
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 59, ctx.xer);
	// beq cr6,0x82af72a0
	if (ctx.cr6.eq) goto loc_82AF72A0;
	// cmplwi cr6,r3,60
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 60, ctx.xer);
	// beq cr6,0x82af7294
	if (ctx.cr6.eq) goto loc_82AF7294;
	// cmplwi cr6,r3,61
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 61, ctx.xer);
	// beq cr6,0x82af7288
	if (ctx.cr6.eq) goto loc_82AF7288;
loc_82AF727C:
	// twi 31,r0,22
	if (ctx.r0.s32 < 22 || ctx.r0.s32 > 22 || ctx.r0.u32 == 22 || ctx.r0.u32 < 22 || ctx.r0.u32 > 22) __builtin_debugtrap();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82AF7288:
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,24800
	ctx.r3.s64 = ctx.r11.s64 + 24800;
	// blr 
	return;
loc_82AF7294:
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,24808
	ctx.r3.s64 = ctx.r11.s64 + 24808;
	// blr 
	return;
loc_82AF72A0:
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,28928
	ctx.r3.s64 = ctx.r11.s64 + 28928;
	// blr 
	return;
loc_82AF72AC:
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,24728
	ctx.r3.s64 = ctx.r11.s64 + 24728;
	// blr 
	return;
loc_82AF72B8:
	// rlwinm. r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82af72cc
	if (ctx.cr0.eq) goto loc_82AF72CC;
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,28760
	ctx.r3.s64 = ctx.r11.s64 + 28760;
	// blr 
	return;
loc_82AF72CC:
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,28848
	ctx.r3.s64 = ctx.r11.s64 + 28848;
	// blr 
	return;
loc_82AF72D8:
	// rlwinm. r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82af72ec
	if (ctx.cr0.eq) goto loc_82AF72EC;
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,24576
	ctx.r3.s64 = ctx.r11.s64 + 24576;
	// blr 
	return;
loc_82AF72EC:
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,24656
	ctx.r3.s64 = ctx.r11.s64 + 24656;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AF72F8"))) PPC_WEAK_FUNC(sub_82AF72F8);
PPC_FUNC_IMPL(__imp__sub_82AF72F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82AF7300;
	__savegprlr_14(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// addi r12,r1,-160
	ctx.r12.s64 = ctx.r1.s64 + -160;
	// bl 0x82fac14c
	ctx.lr = 0x82AF730C;
	__savevmx_123(ctx, base);
	// stwu r1,-736(r1)
	ea = -736 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// stw r10,812(r1)
	PPC_STORE_U32(ctx.r1.u32 + 812, ctx.r10.u32);
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// lwz r20,828(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 828);
	// mr r14,r10
	ctx.r14.u64 = ctx.r10.u64;
	// stw r4,764(r1)
	PPC_STORE_U32(ctx.r1.u32 + 764, ctx.r4.u32);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lis r9,4
	ctx.r9.s64 = 262144;
	// lis r8,4
	ctx.r8.s64 = 262144;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// stw r11,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r11.u32);
	// ori r8,r8,2
	ctx.r8.u64 = ctx.r8.u64 | 2;
	// stw r10,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r10.u32);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// mr r15,r4
	ctx.r15.u64 = ctx.r4.u64;
	// stw r9,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r9.u32);
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// stw r8,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r8.u32);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// stw r11,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r11.u32);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// bne cr6,0x82af7394
	if (!ctx.cr6.eq) goto loc_82AF7394;
	// stw r5,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r5.u32);
	// addi r20,r1,320
	ctx.r20.s64 = ctx.r1.s64 + 320;
	// stw r6,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r6.u32);
	// stw r11,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r11.u32);
	// stw r11,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r11.u32);
loc_82AF7394:
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// lwz r9,8(r20)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// lwz r8,12(r20)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r20.u32 + 12);
	// lwz r7,4(r20)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// subf r28,r10,r9
	ctx.r28.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subf r10,r7,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r7.s64;
	// stw r28,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r28.u32);
	// stw r10,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r10.u32);
	// bne cr6,0x82af73c8
	if (!ctx.cr6.eq) goto loc_82AF73C8;
	// stw r11,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r11.u32);
	// addi r25,r1,304
	ctx.r25.s64 = ctx.r1.s64 + 304;
	// stw r11,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r11.u32);
loc_82AF73C8:
	// lwz r31,820(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 820);
	// clrlwi r26,r27,26
	ctx.r26.u64 = ctx.r27.u32 & 0x3F;
	// clrlwi. r19,r31,26
	ctx.r19.u64 = ctx.r31.u32 & 0x3F;
	ctx.cr0.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// beq 0x82af7dfc
	if (ctx.cr0.eq) goto loc_82AF7DFC;
	// cmplwi cr6,r19,1
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 1, ctx.xer);
	// beq cr6,0x82af7dfc
	if (ctx.cr6.eq) goto loc_82AF7DFC;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82af7dfc
	if (ctx.cr6.eq) goto loc_82AF7DFC;
	// cmplwi cr6,r26,1
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 1, ctx.xer);
	// beq cr6,0x82af7dfc
	if (ctx.cr6.eq) goto loc_82AF7DFC;
	// addi r5,r1,276
	ctx.r5.s64 = ctx.r1.s64 + 276;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82af34b8
	ctx.lr = 0x82AF7400;
	sub_82AF34B8(ctx, base);
	// addi r5,r1,164
	ctx.r5.s64 = ctx.r1.s64 + 164;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82af34b8
	ctx.lr = 0x82AF7410;
	sub_82AF34B8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r6,272(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// cmpw cr6,r27,r31
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r31.s32, ctx.xer);
	// addi r9,r11,-25800
	ctx.r9.s64 = ctx.r11.s64 + -25800;
	// lwz r5,276(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r18,836(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 836);
	// lbzx r8,r26,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r9.u32);
	// mullw r8,r8,r6
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// mullw r8,r8,r5
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// lbzx r9,r19,r9
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r19.u32 + ctx.r9.u32);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// rlwinm r16,r8,29,3,31
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r17,r9,29,3,31
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r16,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r16.u32);
	// stw r17,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r17.u32);
	// bne cr6,0x82af757c
	if (!ctx.cr6.eq) goto loc_82AF757C;
	// rlwinm r9,r18,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 31) & 0x7FFFFFFF;
	// xor r9,r9,r18
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r18.u64;
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82af757c
	if (!ctx.cr0.eq) goto loc_82AF757C;
	// rlwinm r9,r18,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 31) & 0x7FFFFFFF;
	// xor r9,r9,r18
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r18.u64;
	// rlwinm. r9,r9,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82af757c
	if (!ctx.cr0.eq) goto loc_82AF757C;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r9,r6,-1
	ctx.r9.s64 = ctx.r6.s64 + -1;
	// and. r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 & ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82af757c
	if (!ctx.cr0.eq) goto loc_82AF757C;
	// lwz r4,4(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r9,r5,-1
	ctx.r9.s64 = ctx.r5.s64 + -1;
	// and. r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 & ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82af757c
	if (!ctx.cr0.eq) goto loc_82AF757C;
	// lwz r7,0(r20)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
	// and. r9,r30,r7
	ctx.r9.u64 = ctx.r30.u64 & ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82af757c
	if (!ctx.cr0.eq) goto loc_82AF757C;
	// lwz r8,4(r20)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// addi r29,r10,-1
	ctx.r29.s64 = ctx.r10.s64 + -1;
	// and. r9,r29,r8
	ctx.r9.u64 = ctx.r29.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82af757c
	if (!ctx.cr0.eq) goto loc_82AF757C;
	// lwz r9,8(r20)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// and. r30,r30,r9
	ctx.r30.u64 = ctx.r30.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82af74d0
	if (ctx.cr0.eq) goto loc_82AF74D0;
	// cmplw cr6,r9,r24
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x82af757c
	if (!ctx.cr6.eq) goto loc_82AF757C;
loc_82AF74D0:
	// lwz r9,12(r20)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r20.u32 + 12);
	// and. r30,r29,r9
	ctx.r30.u64 = ctx.r29.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82af74e4
	if (ctx.cr0.eq) goto loc_82AF74E4;
	// cmplw cr6,r9,r23
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x82af757c
	if (!ctx.cr6.eq) goto loc_82AF757C;
loc_82AF74E4:
	// lwz r9,172(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// divwu r30,r7,r11
	ctx.r30.u32 = ctx.r7.u32 / ctx.r11.u32;
	// divwu r7,r3,r6
	ctx.r7.u32 = ctx.r3.u32 / ctx.r6.u32;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// twllei r6,0
	if (ctx.r6.u32 <= 0) __builtin_debugtrap();
	// divwu r6,r4,r5
	ctx.r6.u32 = ctx.r4.u32 / ctx.r5.u32;
	// divwu r31,r8,r10
	ctx.r31.u32 = ctx.r8.u32 / ctx.r10.u32;
	// addi r4,r9,-1
	ctx.r4.s64 = ctx.r9.s64 + -1;
	// add r8,r11,r28
	ctx.r8.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mullw r9,r6,r15
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r15.s32);
	// twllei r5,0
	if (ctx.r5.u32 <= 0) __builtin_debugtrap();
	// mullw r5,r30,r17
	ctx.r5.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r17.s32);
	// mullw r6,r31,r14
	ctx.r6.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r14.s32);
	// mullw r7,r7,r16
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r16.s32);
	// addi r3,r8,-1
	ctx.r3.s64 = ctx.r8.s64 + -1;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r8,r5,r6
	ctx.r8.u64 = ctx.r5.u64 + ctx.r6.u64;
	// twllei r10,0
	if (ctx.r10.u32 <= 0) __builtin_debugtrap();
	// twllei r11,0
	if (ctx.r11.u32 <= 0) __builtin_debugtrap();
	// twllei r10,0
	if (ctx.r10.u32 <= 0) __builtin_debugtrap();
	// twllei r11,0
	if (ctx.r11.u32 <= 0) __builtin_debugtrap();
	// divwu. r10,r4,r10
	ctx.r10.u32 = ctx.r4.u32 / ctx.r10.u32;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// divwu r11,r3,r11
	ctx.r11.u32 = ctx.r3.u32 / ctx.r11.u32;
	// add r31,r9,r21
	ctx.r31.u64 = ctx.r9.u64 + ctx.r21.u64;
	// add r30,r8,r22
	ctx.r30.u64 = ctx.r8.u64 + ctx.r22.u64;
	// beq 0x82af7574
	if (ctx.cr0.eq) goto loc_82AF7574;
	// mullw r28,r11,r17
	ctx.r28.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r17.s32);
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
loc_82AF7554:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82AF7564;
	sub_82FA77C0(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r31,r31,r15
	ctx.r31.u64 = ctx.r31.u64 + ctx.r15.u64;
	// add r30,r30,r14
	ctx.r30.u64 = ctx.r30.u64 + ctx.r14.u64;
	// bne 0x82af7554
	if (!ctx.cr0.eq) goto loc_82AF7554;
loc_82AF7574:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82af7e04
	goto loc_82AF7E04;
loc_82AF757C:
	// srawi r8,r27,17
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1FFFF) != 0);
	ctx.r8.s64 = ctx.r27.s32 >> 17;
	// srawi r7,r31,17
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1FFFF) != 0);
	ctx.r7.s64 = ctx.r31.s32 >> 17;
	// srawi r9,r27,6
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r27.s32 >> 6;
	// srawi r6,r31,6
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x3F) != 0);
	ctx.r6.s64 = ctx.r31.s32 >> 6;
	// srawi r5,r27,9
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1FF) != 0);
	ctx.r5.s64 = ctx.r27.s32 >> 9;
	// srawi r4,r27,11
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FF) != 0);
	ctx.r4.s64 = ctx.r27.s32 >> 11;
	// srawi r3,r27,13
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1FFF) != 0);
	ctx.r3.s64 = ctx.r27.s32 >> 13;
	// srawi r30,r27,15
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFF) != 0);
	ctx.r30.s64 = ctx.r27.s32 >> 15;
	// clrlwi r5,r5,30
	ctx.r5.u64 = ctx.r5.u32 & 0x3;
	// clrlwi r4,r4,30
	ctx.r4.u64 = ctx.r4.u32 & 0x3;
	// srawi r29,r31,9
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1FF) != 0);
	ctx.r29.s64 = ctx.r31.s32 >> 9;
	// stw r5,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r5.u32);
	// srawi r28,r31,11
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FF) != 0);
	ctx.r28.s64 = ctx.r31.s32 >> 11;
	// stw r4,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r4.u32);
	// clrlwi r5,r30,30
	ctx.r5.u64 = ctx.r30.u32 & 0x3;
	// clrlwi r4,r29,30
	ctx.r4.u64 = ctx.r29.u32 & 0x3;
	// srawi r15,r31,13
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1FFF) != 0);
	ctx.r15.s64 = ctx.r31.s32 >> 13;
	// stw r5,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r5.u32);
	// clrlwi r3,r3,30
	ctx.r3.u64 = ctx.r3.u32 & 0x3;
	// stw r4,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r4.u32);
	// srawi r14,r31,15
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FFF) != 0);
	ctx.r14.s64 = ctx.r31.s32 >> 15;
	// stw r3,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r3.u32);
	// clrlwi r3,r28,30
	ctx.r3.u64 = ctx.r28.u32 & 0x3;
	// clrlwi r5,r15,30
	ctx.r5.u64 = ctx.r15.u32 & 0x3;
	// clrlwi r4,r14,30
	ctx.r4.u64 = ctx.r14.u32 & 0x3;
	// stw r3,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r3.u32);
	// clrlwi r30,r8,31
	ctx.r30.u64 = ctx.r8.u32 & 0x1;
	// stw r5,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r5.u32);
	// clrlwi. r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r4,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r4.u32);
	// clrlwi r29,r7,31
	ctx.r29.u64 = ctx.r7.u32 & 0x1;
	// clrlwi r8,r6,30
	ctx.r8.u64 = ctx.r6.u32 & 0x3;
	// beq 0x82af7610
	if (ctx.cr0.eq) goto loc_82AF7610;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,256
	ctx.r7.s64 = ctx.r1.s64 + 256;
	// lwzx r9,r9,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// b 0x82af7614
	goto loc_82AF7614;
loc_82AF7610:
	// rlwinm r9,r16,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 16) & 0xFFFF0000;
loc_82AF7614:
	// stw r9,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82af7630
	if (ctx.cr6.eq) goto loc_82AF7630;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,256
	ctx.r8.s64 = ctx.r1.s64 + 256;
	// lwzx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// b 0x82af7634
	goto loc_82AF7634;
loc_82AF7630:
	// rlwinm r9,r17,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 16) & 0xFFFF0000;
loc_82AF7634:
	// stw r9,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r9.u32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mulli r7,r26,60
	ctx.r7.s64 = ctx.r26.s64 * 60;
	// addi r9,r9,31616
	ctx.r9.s64 = ctx.r9.s64 + 31616;
	// mulli r8,r19,60
	ctx.r8.s64 = ctx.r19.s64 * 60;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r15,r8,r9
	ctx.r15.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r7,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r7.u32);
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x82af774c
	if (!ctx.cr6.eq) goto loc_82AF774C;
	// add r8,r11,r24
	ctx.r8.u64 = ctx.r11.u64 + ctx.r24.u64;
	// add r9,r10,r23
	ctx.r9.u64 = ctx.r10.u64 + ctx.r23.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// andc r29,r8,r11
	ctx.r29.u64 = ctx.r8.u64 & ~ctx.r11.u64;
	// andc r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82691410
	ctx.lr = 0x82AF7690;
	sub_82691410(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82af76a4
	if (!ctx.cr0.eq) goto loc_82AF76A4;
loc_82AF7698:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82af7e04
	goto loc_82AF7E04;
loc_82AF76A4:
	// lwz r5,0(r20)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// lis r11,6690
	ctx.r11.s64 = 438435840;
	// lwz r4,4(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// rlwinm r29,r29,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// ori r28,r11,43686
	ctx.r28.u64 = ctx.r11.u64 | 43686;
	// lwz r10,812(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 812);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// stw r18,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r18.u32);
	// stw r5,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r5.u32);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// stw r4,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r4.u32);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// stw r20,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82af72f8
	ctx.lr = 0x82AF76F4;
	sub_82AF72F8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x82af7710
	if (!ctx.cr0.lt) goto loc_82AF7710;
loc_82AF76FC:
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82691460
	ctx.lr = 0x82AF7708;
	sub_82691460(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82af7e04
	goto loc_82AF7E04;
loc_82AF7710:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r4,764(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 764);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r18,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r18.u32);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// stw r20,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82b06d90
	ctx.lr = 0x82AF7744;
	sub_82B06D90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82af76fc
	goto loc_82AF76FC;
loc_82AF774C:
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82AF7758:
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82af7774
	if (!ctx.cr6.eq) goto loc_82AF7774;
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
loc_82AF7774:
	// addi r11,r1,288
	ctx.r11.s64 = ctx.r1.s64 + 288;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82af7790
	if (!ctx.cr6.eq) goto loc_82AF7790;
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
loc_82AF7790:
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r9,184(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// xor. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82af77a8
	if (ctx.cr0.eq) goto loc_82AF77A8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r11.u32);
loc_82AF77A8:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82af7758
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82AF7758;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82af5548
	ctx.lr = 0x82AF77B8;
	sub_82AF5548(ctx, base);
	// srawi r11,r31,18
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x3FFFF) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 18;
	// srawi r10,r31,21
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1FFFFF) != 0);
	ctx.r10.s64 = ctx.r31.s32 >> 21;
	// srawi r9,r31,24
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFFFFFF) != 0);
	ctx.r9.s64 = ctx.r31.s32 >> 24;
	// srawi r8,r31,27
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FFFFFF) != 0);
	ctx.r8.s64 = ctx.r31.s32 >> 27;
	// lwz r31,208(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// rlwinm r11,r11,2,27,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1C;
	// addi r7,r7,-29840
	ctx.r7.s64 = ctx.r7.s64 + -29840;
	// rlwinm r10,r10,2,27,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1C;
	// rlwinm r9,r9,2,27,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x1C;
	// rlwinm r8,r8,2,27,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x1C;
	// addi r6,r1,416
	ctx.r6.s64 = ctx.r1.s64 + 416;
	// lwzx r11,r11,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r10,r10,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lwzx r9,r9,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lwzx r8,r8,r7
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// stvx128 v1,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r11,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r11.u32);
	// stw r10,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r10.u32);
	// stw r9,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r9.u32);
	// stw r8,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r8.u32);
	// bl 0x82af6738
	ctx.lr = 0x82AF7814;
	sub_82AF6738(ctx, base);
	// stw r3,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r3.u32);
	// addi r11,r1,384
	ctx.r11.s64 = ctx.r1.s64 + 384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r1,352
	ctx.r10.s64 = ctx.r1.s64 + 352;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r9,r1,400
	ctx.r9.s64 = ctx.r1.s64 + 400;
	// addi r8,r1,336
	ctx.r8.s64 = ctx.r1.s64 + 336;
	// addi r7,r1,432
	ctx.r7.s64 = ctx.r1.s64 + 432;
	// addi r6,r1,368
	ctx.r6.s64 = ctx.r1.s64 + 368;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82af6b40
	ctx.lr = 0x82AF7844;
	sub_82AF6B40(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82af6520
	ctx.lr = 0x82AF7850;
	sub_82AF6520(ctx, base);
	// addi r11,r1,336
	ctx.r11.s64 = ctx.r1.s64 + 336;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vaddfp128 v125,v63,v1
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v125.f32, _mm_add_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v1.f32)));
	// bl 0x82af65a0
	ctx.lr = 0x82AF7864;
	sub_82AF65A0(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// vor128 v124,v1,v1
	_mm_store_si128((__m128i*)ctx.v124.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// bl 0x82af65a0
	ctx.lr = 0x82AF7870;
	sub_82AF65A0(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r8,160(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// twllei r11,0
	if (ctx.r11.u32 <= 0) __builtin_debugtrap();
	// lwz r9,4(r20)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// twllei r8,0
	if (ctx.r8.u32 <= 0) __builtin_debugtrap();
	// lwz r28,764(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 764);
	// divwu r6,r10,r8
	ctx.r6.u32 = ctx.r10.u32 / ctx.r8.u32;
	// divwu r9,r9,r11
	ctx.r9.u32 = ctx.r9.u32 / ctx.r11.u32;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mullw r3,r11,r28
	ctx.r3.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r7,4(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// vor128 v123,v1,v1
	_mm_store_si128((__m128i*)ctx.v123.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// lwz r24,180(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r23,812(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 812);
	// mullw r8,r10,r11
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// mullw r9,r9,r23
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r23.s32);
	// mullw r10,r7,r28
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r28.s32);
	// mullw r11,r6,r24
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r24.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r14,r10,r21
	ctx.r14.u64 = ctx.r10.u64 + ctx.r21.u64;
	// add r17,r11,r22
	ctx.r17.u64 = ctx.r11.u64 + ctx.r22.u64;
	// bl 0x82691410
	ctx.lr = 0x82AF78D8;
	sub_82691410(ctx, base);
	// mr. r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq 0x82af7698
	if (ctx.cr0.eq) goto loc_82AF7698;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82691410
	ctx.lr = 0x82AF78EC;
	sub_82691410(ctx, base);
	// mr. r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// stw r25,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r25.u32);
	// bne 0x82af7908
	if (!ctx.cr0.eq) goto loc_82AF7908;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
loc_82AF78FC:
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// bl 0x82691460
	ctx.lr = 0x82AF7904;
	sub_82691460(ctx, base);
	// b 0x82af7698
	goto loc_82AF7698;
loc_82AF7908:
	// lwz r11,0(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82af7c08
	if (!ctx.cr6.eq) goto loc_82AF7C08;
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82691410
	ctx.lr = 0x82AF792C;
	sub_82691410(ctx, base);
	// mr. r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// stw r22,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r22.u32);
	// bne 0x82af794c
	if (!ctx.cr0.eq) goto loc_82AF794C;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82691460
	ctx.lr = 0x82AF7944;
	sub_82691460(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// b 0x82af78fc
	goto loc_82AF78FC;
loc_82AF794C:
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82af71b8
	ctx.lr = 0x82AF7958;
	sub_82AF71B8(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r10,4(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// li r18,0
	ctx.r18.s64 = 0;
	// lwz r19,172(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r3,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r3.u32);
	// and r21,r11,r10
	ctx.r21.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82af7bf8
	if (ctx.cr6.eq) goto loc_82AF7BF8;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lwz r15,188(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r10,r10,-29680
	ctx.r10.s64 = ctx.r10.s64 + -29680;
	// stw r10,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r10.u32);
loc_82AF7990:
	// add r10,r11,r15
	ctx.r10.u64 = ctx.r11.u64 + ctx.r15.u64;
	// lwz r5,192(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// twllei r11,0
	if (ctx.r11.u32 <= 0) __builtin_debugtrap();
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r6,r5,16,16,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF;
	// divwu r11,r10,r11
	ctx.r11.u32 = ctx.r10.u32 / ctx.r11.u32;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mullw r11,r11,r24
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r24.s32);
	// divwu r7,r11,r6
	ctx.r7.u32 = ctx.r11.u32 / ctx.r6.u32;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// twllei r6,0
	if (ctx.r6.u32 <= 0) __builtin_debugtrap();
	// bl 0x82b068e8
	ctx.lr = 0x82AF79C0;
	sub_82B068E8(ctx, base);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r9,0(r20)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// mr r26,r16
	ctx.r26.u64 = ctx.r16.u64;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// and r29,r10,r9
	ctx.r29.u64 = ctx.r10.u64 & ctx.r9.u64;
	// beq cr6,0x82af7b6c
	if (ctx.cr6.eq) goto loc_82AF7B6C;
loc_82AF79E0:
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AF79F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// mr r24,r21
	ctx.r24.u64 = ctx.r21.u64;
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplw cr6,r21,r8
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82af7b2c
	if (!ctx.cr6.lt) goto loc_82AF7B2C;
	// li r23,0
	ctx.r23.s64 = 0;
	// subf r19,r21,r18
	ctx.r19.s64 = ctx.r18.s64 - ctx.r21.s64;
loc_82AF7A10:
	// lwz r10,172(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// add r9,r19,r24
	ctx.r9.u64 = ctx.r19.u64 + ctx.r24.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82af7b2c
	if (!ctx.cr6.lt) goto loc_82AF7B2C;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82af7b1c
	if (!ctx.cr6.lt) goto loc_82AF7B1C;
	// li r30,0
	ctx.r30.s64 = 0;
	// subf r22,r29,r27
	ctx.r22.s64 = ctx.r27.s64 - ctx.r29.s64;
loc_82AF7A34:
	// add r10,r22,r31
	ctx.r10.u64 = ctx.r22.u64 + ctx.r31.u64;
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r15.u32, ctx.xer);
	// bge cr6,0x82af7b18
	if (!ctx.cr6.lt) goto loc_82AF7B18;
	// lwz r10,188(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// mullw r11,r24,r11
	ctx.r11.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r11.s32);
	// lwz r9,200(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r8,204(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// lvx128 v126,r0,r10
	simd::store_shuffled(ctx.v126, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r1,256
	ctx.r10.s64 = ctx.r1.s64 + 256;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v63,r11,r9
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vperm128 v127,v63,v126,v0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// beq cr6,0x82af7ab4
	if (ctx.cr6.eq) goto loc_82AF7AB4;
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82af7a94
	if (ctx.cr6.eq) goto loc_82AF7A94;
	// vor128 v1,v127,v127
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// bl 0x82af55e0
	ctx.lr = 0x82AF7A88;
	sub_82AF55E0(ctx, base);
	// vor128 v0,v123,v123
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v123.u8));
	// vsel128 v0,v127,v1,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v127.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v1.u8))));
	// vor128 v127,v0,v0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
loc_82AF7A94:
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82af7ab4
	if (ctx.cr6.eq) goto loc_82AF7AB4;
	// vor128 v1,v127,v127
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// bl 0x82672280
	ctx.lr = 0x82AF7AA8;
	sub_82672280(ctx, base);
	// vor128 v0,v124,v124
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v124.u8));
	// vsel128 v0,v127,v1,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v127.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v1.u8))));
	// vor128 v127,v0,v0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
loc_82AF7AB4:
	// addi r11,r1,416
	ctx.r11.s64 = ctx.r1.s64 + 416;
	// vor128 v4,v125,v125
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_load_si128((__m128i*)ctx.v125.u8));
	// addi r10,r1,384
	ctx.r10.s64 = ctx.r1.s64 + 384;
	// lwz r5,240(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// addi r9,r1,352
	ctx.r9.s64 = ctx.r1.s64 + 352;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// addi r8,r1,400
	ctx.r8.s64 = ctx.r1.s64 + 400;
	// addi r7,r1,432
	ctx.r7.s64 = ctx.r1.s64 + 432;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r6,r1,368
	ctx.r6.s64 = ctx.r1.s64 + 368;
	// add r11,r23,r30
	ctx.r11.u64 = ctx.r23.u64 + ctx.r30.u64;
	// lvx128 v7,r0,r10
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v6,r0,r9
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vperm128 v1,v127,v126,v0
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lvx128 v5,r0,r8
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v3,r0,r7
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v2,r0,r6
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// bl 0x82af6480
	ctx.lr = 0x82AF7B00;
	sub_82AF6480(ctx, base);
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// add r30,r30,r10
	ctx.r30.u64 = ctx.r30.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82af7a34
	if (ctx.cr6.lt) goto loc_82AF7A34;
loc_82AF7B18:
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
loc_82AF7B1C:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// add r23,r23,r28
	ctx.r23.u64 = ctx.r23.u64 + ctx.r28.u64;
	// cmplw cr6,r24,r8
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82af7a10
	if (ctx.cr6.lt) goto loc_82AF7A10;
loc_82AF7B2C:
	// subf r10,r29,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r29.s64;
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// subf r7,r29,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r29.s64;
	// lwz r24,180(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r22,200(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// mullw r10,r7,r9
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// add r26,r10,r26
	ctx.r26.u64 = ctx.r10.u64 + ctx.r26.u64;
	// add r25,r25,r24
	ctx.r25.u64 = ctx.r25.u64 + ctx.r24.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplw cr6,r27,r15
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r15.u32, ctx.xer);
	// blt cr6,0x82af79e0
	if (ctx.cr6.lt) goto loc_82AF79E0;
	// lwz r25,196(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r19,172(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r23,812(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 812);
	// b 0x82af7b70
	goto loc_82AF7B70;
loc_82AF7B6C:
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
loc_82AF7B70:
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// cmplw cr6,r21,r8
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82af7bd4
	if (!ctx.cr6.lt) goto loc_82AF7BD4;
	// lwz r26,212(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// mr r31,r14
	ctx.r31.u64 = ctx.r14.u64;
	// subf r29,r14,r16
	ctx.r29.s64 = ctx.r16.s64 - ctx.r14.s64;
	// subf r27,r21,r18
	ctx.r27.s64 = ctx.r18.s64 - ctx.r21.s64;
loc_82AF7B8C:
	// add r11,r27,r30
	ctx.r11.u64 = ctx.r27.u64 + ctx.r30.u64;
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r19.u32, ctx.xer);
	// bge cr6,0x82af7bd0
	if (!ctx.cr6.lt) goto loc_82AF7BD0;
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// rlwinm r6,r26,16,16,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 16) & 0xFFFF;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mullw r11,r11,r15
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r15.s32);
	// divwu r7,r11,r6
	ctx.r7.u32 = ctx.r11.u32 / ctx.r6.u32;
	// add r4,r29,r31
	ctx.r4.u64 = ctx.r29.u64 + ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// twllei r6,0
	if (ctx.r6.u32 <= 0) __builtin_debugtrap();
	// bl 0x82b068e8
	ctx.lr = 0x82AF7BBC;
	sub_82B068E8(ctx, base);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r31,r31,r28
	ctx.r31.u64 = ctx.r31.u64 + ctx.r28.u64;
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82af7b8c
	if (ctx.cr6.lt) goto loc_82AF7B8C;
loc_82AF7BD0:
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
loc_82AF7BD4:
	// subf r10,r21,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r21.s64;
	// subf r9,r21,r18
	ctx.r9.s64 = ctx.r18.s64 - ctx.r21.s64;
	// mullw r10,r10,r28
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r28.s32);
	// add r18,r9,r8
	ctx.r18.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r14,r10,r14
	ctx.r14.u64 = ctx.r10.u64 + ctx.r14.u64;
	// add r17,r17,r23
	ctx.r17.u64 = ctx.r17.u64 + ctx.r23.u64;
	// li r21,0
	ctx.r21.s64 = 0;
	// cmplw cr6,r18,r19
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r19.u32, ctx.xer);
	// blt cr6,0x82af7990
	if (ctx.cr6.lt) goto loc_82AF7990;
loc_82AF7BF8:
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82691460
	ctx.lr = 0x82AF7C04;
	sub_82691460(ctx, base);
	// b 0x82af7de0
	goto loc_82AF7DE0;
loc_82AF7C08:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82af65f8
	ctx.lr = 0x82AF7C10;
	sub_82AF65F8(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// addi r10,r1,336
	ctx.r10.s64 = ctx.r1.s64 + 336;
	// addi r9,r1,480
	ctx.r9.s64 = ctx.r1.s64 + 480;
	// addi r8,r1,448
	ctx.r8.s64 = ctx.r1.s64 + 448;
	// addi r7,r1,464
	ctx.r7.s64 = ctx.r1.s64 + 464;
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82af6878
	ctx.lr = 0x82AF7C38;
	sub_82AF6878(ctx, base);
	// lwz r28,172(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82af7de0
	if (ctx.cr6.eq) goto loc_82AF7DE0;
	// lwz r21,188(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r20,192(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// rlwinm r27,r20,16,16,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 16) & 0xFFFF;
	// lwz r19,212(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// mullw r11,r11,r21
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r21.s32);
	// lwz r18,168(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// divwu r25,r11,r27
	ctx.r25.u32 = ctx.r11.u32 / ctx.r27.u32;
	// rlwinm r26,r19,16,16,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 16) & 0xFFFF;
	// mullw r10,r18,r21
	ctx.r10.s64 = int64_t(ctx.r18.s32) * int64_t(ctx.r21.s32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// twllei r27,0
	if (ctx.r27.u32 <= 0) __builtin_debugtrap();
	// divwu r24,r10,r26
	ctx.r24.u32 = ctx.r10.u32 / ctx.r26.u32;
	// twllei r26,0
	if (ctx.r26.u32 <= 0) __builtin_debugtrap();
	// addi r23,r11,-29680
	ctx.r23.s64 = ctx.r11.s64 + -29680;
loc_82AF7C80:
	// lwz r31,196(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// bl 0x82b068e8
	ctx.lr = 0x82AF7C9C;
	sub_82B068E8(ctx, base);
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82af7db0
	if (ctx.cr6.eq) goto loc_82AF7DB0;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
loc_82AF7CAC:
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mtctr r22
	ctx.ctr.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82AF7CBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r1,336
	ctx.r11.s64 = ctx.r1.s64 + 336;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// lvx128 v126,r0,r23
	simd::store_shuffled(ctx.v126, simd::load_and_shuffle(base + ((ctx.r23.u32) & ~0xF), VectorMaskL));
	// addi r9,r1,448
	ctx.r9.s64 = ctx.r1.s64 + 448;
	// lwz r8,204(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// addi r7,r1,464
	ctx.r7.s64 = ctx.r1.s64 + 464;
	// addi r6,r1,480
	ctx.r6.s64 = ctx.r1.s64 + 480;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// vxor128 v13,v1,v63
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v63.u8)));
	// lvx128 v12,r0,r10
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v63,r0,r9
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lvx128 v62,r0,r7
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v61,r0,r6
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vcfux v0,v13,0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v13.u32)));
	// lvx128 v7,r0,r11
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vsel128 v12,v13,v0,v12
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// vmaddfp128 v63,v12,v62,v63
	_mm_store_ps(ctx.v63.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v62.f32)), _mm_load_ps(ctx.v63.f32)));
	// vmaxfp128 v63,v63,v61
	_mm_store_ps(ctx.v63.f32, _mm_max_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v61.f32)));
	// vperm128 v127,v63,v126,v7
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// beq cr6,0x82af7d54
	if (ctx.cr6.eq) goto loc_82AF7D54;
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82af7d34
	if (ctx.cr6.eq) goto loc_82AF7D34;
	// vor128 v1,v127,v127
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// bl 0x82af55e0
	ctx.lr = 0x82AF7D28;
	sub_82AF55E0(ctx, base);
	// vor128 v0,v123,v123
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v123.u8));
	// vsel128 v0,v127,v1,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v127.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v1.u8))));
	// vor128 v127,v0,v0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
loc_82AF7D34:
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82af7d54
	if (ctx.cr6.eq) goto loc_82AF7D54;
	// vor128 v1,v127,v127
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// bl 0x82672280
	ctx.lr = 0x82AF7D48;
	sub_82672280(ctx, base);
	// vor128 v0,v124,v124
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v124.u8));
	// vsel128 v0,v127,v1,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v127.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v1.u8))));
	// vor128 v127,v0,v0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
loc_82AF7D54:
	// addi r11,r1,416
	ctx.r11.s64 = ctx.r1.s64 + 416;
	// vor128 v4,v125,v125
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_load_si128((__m128i*)ctx.v125.u8));
	// addi r10,r1,384
	ctx.r10.s64 = ctx.r1.s64 + 384;
	// lwz r5,240(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// addi r9,r1,352
	ctx.r9.s64 = ctx.r1.s64 + 352;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// addi r8,r1,400
	ctx.r8.s64 = ctx.r1.s64 + 400;
	// addi r7,r1,432
	ctx.r7.s64 = ctx.r1.s64 + 432;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,368
	ctx.r11.s64 = ctx.r1.s64 + 368;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lvx128 v7,r0,r10
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v6,r0,r9
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vperm128 v1,v127,v126,v0
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v5,r0,r8
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v3,r0,r7
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v2,r0,r11
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// bl 0x82af6480
	ctx.lr = 0x82AF7D9C;
	sub_82AF6480(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r30,r30,r18
	ctx.r30.u64 = ctx.r30.u64 + ctx.r18.u64;
	// add r31,r31,r11
	ctx.r31.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bne 0x82af7cac
	if (!ctx.cr0.eq) goto loc_82AF7CAC;
loc_82AF7DB0:
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82b068e8
	ctx.lr = 0x82AF7DC8;
	sub_82B068E8(ctx, base);
	// lwz r11,764(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 764);
	// lwz r10,812(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 812);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// add r14,r14,r11
	ctx.r14.u64 = ctx.r14.u64 + ctx.r11.u64;
	// add r17,r17,r10
	ctx.r17.u64 = ctx.r17.u64 + ctx.r10.u64;
	// bne 0x82af7c80
	if (!ctx.cr0.eq) goto loc_82AF7C80;
loc_82AF7DE0:
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82691460
	ctx.lr = 0x82AF7DEC;
	sub_82691460(ctx, base);
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x82691460
	ctx.lr = 0x82AF7DF8;
	sub_82691460(ctx, base);
	// b 0x82af7574
	goto loc_82AF7574;
loc_82AF7DFC:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
loc_82AF7E04:
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// addi r12,r1,-160
	ctx.r12.s64 = ctx.r1.s64 + -160;
	// bl 0x82fac3e4
	ctx.lr = 0x82AF7E10;
	__restvmx_123(ctx, base);
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF7E18"))) PPC_WEAK_FUNC(sub_82AF7E18);
PPC_FUNC_IMPL(__imp__sub_82AF7E18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7650
	ctx.lr = 0x82AF7E20;
	__savegprlr_18(ctx, base);
	// stwu r1,-752(r1)
	ea = -752 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// mr r18,r6
	ctx.r18.u64 = ctx.r6.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// mr r20,r30
	ctx.r20.u64 = ctx.r30.u64;
	// bne cr6,0x82af7e58
	if (!ctx.cr6.eq) goto loc_82AF7E58;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// addi r24,r1,120
	ctx.r24.s64 = ctx.r1.s64 + 120;
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
loc_82AF7E58:
	// addi r11,r1,196
	ctx.r11.s64 = ctx.r1.s64 + 196;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// stw r30,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r30.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// li r31,7
	ctx.r31.s64 = 7;
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// addi r29,r1,496
	ctx.r29.s64 = ctx.r1.s64 + 496;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// stw r30,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stw r8,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r8.u32);
	// stw r7,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r7.u32);
	// stw r6,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r6.u32);
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// stw r29,488(r1)
	PPC_STORE_U32(ctx.r1.u32 + 488, ctx.r29.u32);
	// bl 0x82b07648
	ctx.lr = 0x82AF7EC0;
	sub_82B07648(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82af7ed4
	if (ctx.cr0.eq) goto loc_82AF7ED4;
loc_82AF7EC8:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82af81cc
	goto loc_82AF81CC;
loc_82AF7ED4:
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82b07668
	ctx.lr = 0x82AF7EDC;
	sub_82B07668(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82af7ec8
	if (!ctx.cr0.eq) goto loc_82AF7EC8;
	// lhz r11,264(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 264);
	// cmplwi cr6,r11,410
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 410, ctx.xer);
	// bne cr6,0x82af7ec8
	if (!ctx.cr6.eq) goto loc_82AF7EC8;
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82af7ec8
	if (!ctx.cr6.eq) goto loc_82AF7EC8;
	// lwz r3,292(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82af7f50
	if (ctx.cr6.eq) goto loc_82AF7F50;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82691410
	ctx.lr = 0x82AF7F14;
	sub_82691410(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82af7f28
	if (!ctx.cr0.eq) goto loc_82AF7F28;
loc_82AF7F1C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82af81cc
	goto loc_82AF81CC;
loc_82AF7F28:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82b07748
	ctx.lr = 0x82AF7F34;
	sub_82B07748(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82af7ec8
	if (!ctx.cr0.eq) goto loc_82AF7EC8;
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r30.u8);
	// bl 0x82691460
	ctx.lr = 0x82AF7F50;
	sub_82691460(ctx, base);
loc_82AF7F50:
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82b07800
	ctx.lr = 0x82AF7F60;
	sub_82B07800(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82af7ec8
	if (!ctx.cr0.eq) goto loc_82AF7EC8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82b07880
	ctx.lr = 0x82AF7F74;
	sub_82B07880(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82af7ec8
	if (!ctx.cr0.eq) goto loc_82AF7EC8;
	// lwz r3,360(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82af7fc8
	if (ctx.cr6.eq) goto loc_82AF7FC8;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82691410
	ctx.lr = 0x82AF7F94;
	sub_82691410(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82af7f1c
	if (ctx.cr0.eq) goto loc_82AF7F1C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82b07a00
	ctx.lr = 0x82AF7FAC;
	sub_82B07A00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82af7ec8
	if (!ctx.cr0.eq) goto loc_82AF7EC8;
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r30.u8);
	// bl 0x82691460
	ctx.lr = 0x82AF7FC8;
	sub_82691460(ctx, base);
loc_82AF7FC8:
	// lhz r11,348(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 348);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82af7ff4
	if (!ctx.cr6.eq) goto loc_82AF7FF4;
	// lhz r11,346(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 346);
	// lis r28,10240
	ctx.r28.s64 = 671088640;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x82af7fec
	if (ctx.cr6.gt) goto loc_82AF7FEC;
	// ori r28,r28,2
	ctx.r28.u64 = ctx.r28.u64 | 2;
	// b 0x82af8058
	goto loc_82AF8058;
loc_82AF7FEC:
	// ori r28,r28,88
	ctx.r28.u64 = ctx.r28.u64 | 88;
	// b 0x82af8058
	goto loc_82AF8058;
loc_82AF7FF4:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82af8020
	if (!ctx.cr6.eq) goto loc_82AF8020;
	// lhz r11,346(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 346);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x82af8014
	if (ctx.cr6.gt) goto loc_82AF8014;
	// lis r28,2048
	ctx.r28.s64 = 134217728;
	// ori r28,r28,74
	ctx.r28.u64 = ctx.r28.u64 | 74;
	// b 0x82af8058
	goto loc_82AF8058;
loc_82AF8014:
	// lis r28,11552
	ctx.r28.s64 = 757071872;
	// ori r28,r28,153
	ctx.r28.u64 = ctx.r28.u64 | 153;
	// b 0x82af8058
	goto loc_82AF8058;
loc_82AF8020:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// lhz r11,346(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 346);
	// bne cr6,0x82af803c
	if (!ctx.cr6.eq) goto loc_82AF803C;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x82af8050
	if (ctx.cr6.gt) goto loc_82AF8050;
	// lis r28,10784
	ctx.r28.s64 = 706740224;
	// b 0x82af8048
	goto loc_82AF8048;
loc_82AF803C:
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x82af8050
	if (ctx.cr6.gt) goto loc_82AF8050;
	// lis r28,6688
	ctx.r28.s64 = 438304768;
loc_82AF8048:
	// ori r28,r28,134
	ctx.r28.u64 = ctx.r28.u64 | 134;
	// b 0x82af8058
	goto loc_82AF8058;
loc_82AF8050:
	// lis r28,6688
	ctx.r28.s64 = 438304768;
	// ori r28,r28,90
	ctx.r28.u64 = ctx.r28.u64 | 90;
loc_82AF8058:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r10,328(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// clrlwi r8,r28,26
	ctx.r8.u64 = ctx.r28.u32 & 0x3F;
	// lwz r9,332(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// addi r11,r11,-25800
	ctx.r11.s64 = ctx.r11.s64 + -25800;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// cmpw cr6,r21,r28
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r28.s32, ctx.xer);
	// lbzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// bne cr6,0x82af80a4
	if (!ctx.cr6.eq) goto loc_82AF80A4;
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// lwz r9,0(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mullw r10,r10,r23
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r23.s32);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r31,r11,r22
	ctx.r31.u64 = ctx.r11.u64 + ctx.r22.u64;
	// b 0x82af80bc
	goto loc_82AF80BC;
loc_82AF80A4:
	// mullw r29,r11,r9
	ctx.r29.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// mullw r3,r29,r10
	ctx.r3.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r10.s32);
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// bl 0x82691410
	ctx.lr = 0x82AF80B4;
	sub_82691410(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82af7f1c
	if (ctx.cr0.eq) goto loc_82AF7F1C;
loc_82AF80BC:
	// lhz r11,318(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 318);
	// li r10,5
	ctx.r10.s64 = 5;
	// lhz r8,348(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 348);
	// addi r7,r1,512
	ctx.r7.s64 = ctx.r1.s64 + 512;
	// rlwinm r11,r11,19,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x1;
	// stw r26,524(r1)
	PPC_STORE_U32(ctx.r1.u32 + 524, ctx.r26.u32);
	// stw r25,520(r1)
	PPC_STORE_U32(ctx.r1.u32 + 520, ctx.r25.u32);
	// addi r9,r1,212
	ctx.r9.s64 = ctx.r1.s64 + 212;
	// sth r11,530(r1)
	PPC_STORE_U16(ctx.r1.u32 + 530, ctx.r11.u16);
	// addi r11,r1,512
	ctx.r11.s64 = ctx.r1.s64 + 512;
	// stw r7,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r7.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// sth r8,528(r1)
	PPC_STORE_U16(ctx.r1.u32 + 528, ctx.r8.u16);
loc_82AF80F0:
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// bdnz 0x82af80f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82AF80F0;
	// addi r5,r1,512
	ctx.r5.s64 = ctx.r1.s64 + 512;
	// lhz r6,344(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 344);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b0ada8
	ctx.lr = 0x82AF8110;
	sub_82B0ADA8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82af7ec8
	if (!ctx.cr0.eq) goto loc_82AF7EC8;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82b0a7f8
	ctx.lr = 0x82AF8120;
	sub_82B0A7F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82af7ec8
	if (!ctx.cr0.eq) goto loc_82AF7EC8;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82b0a2b8
	ctx.lr = 0x82AF8130;
	sub_82B0A2B8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82b0acc0
	ctx.lr = 0x82AF813C;
	sub_82B0ACC0(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x822d6f30
	ctx.lr = 0x82AF8144;
	sub_822D6F30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82af8154
	if (ctx.cr0.eq) goto loc_82AF8154;
	// lis r20,-32768
	ctx.r20.s64 = -2147483648;
	// ori r20,r20,16389
	ctx.r20.u64 = ctx.r20.u64 | 16389;
loc_82AF8154:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bge cr6,0x82af8164
	if (!ctx.cr6.lt) goto loc_82AF8164;
	// lis r20,-32768
	ctx.r20.s64 = -2147483648;
	// ori r20,r20,16389
	ctx.r20.u64 = ctx.r20.u64 | 16389;
loc_82AF8164:
	// cmpw cr6,r21,r28
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x82af81c8
	if (ctx.cr6.eq) goto loc_82AF81C8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r25,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r25.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r26,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r26.u32);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// lfs f1,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f1.f64 = double(temp.f32);
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82af72f8
	ctx.lr = 0x82AF81B8;
	sub_82AF72F8(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691460
	ctx.lr = 0x82AF81C8;
	sub_82691460(ctx, base);
loc_82AF81C8:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
loc_82AF81CC:
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x82fa76a0
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF81D4"))) PPC_WEAK_FUNC(sub_82AF81D4);
PPC_FUNC_IMPL(__imp__sub_82AF81D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF81D8"))) PPC_WEAK_FUNC(sub_82AF81D8);
PPC_FUNC_IMPL(__imp__sub_82AF81D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa764c
	ctx.lr = 0x82AF81E0;
	__savegprlr_17(ctx, base);
	// stwu r1,-768(r1)
	ea = -768 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r18,r5
	ctx.r18.u64 = ctx.r5.u64;
	// mr r17,r6
	ctx.r17.u64 = ctx.r6.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// mr r20,r28
	ctx.r20.u64 = ctx.r28.u64;
	// bne cr6,0x82af8218
	if (!ctx.cr6.eq) goto loc_82AF8218;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// addi r24,r1,120
	ctx.r24.s64 = ctx.r1.s64 + 120;
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r28.u32);
loc_82AF8218:
	// addi r11,r1,196
	ctx.r11.s64 = ctx.r1.s64 + 196;
	// lwz r19,860(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 860);
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// addi r8,r1,196
	ctx.r8.s64 = ctx.r1.s64 + 196;
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// rlwinm r7,r19,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r28,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r28.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r28,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r28.u32);
	// li r5,7
	ctx.r5.s64 = 7;
	// stw r28,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r28.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r28,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r28.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// stw r28,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
	// stw r28,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r28.u32);
	// stw r28,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r28.u32);
	// stw r6,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r6.u32);
	// stw r5,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r5.u32);
	// stwx r29,r7,r8
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r29.u32);
	// stw r4,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r4.u32);
	// beq cr6,0x82af8280
	if (ctx.cr6.eq) goto loc_82AF8280;
	// stw r29,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r29.u32);
loc_82AF8280:
	// lwz r11,852(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 852);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82af82b8
	if (ctx.cr6.eq) goto loc_82AF82B8;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// subf r6,r7,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r7.s64;
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// stw r7,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r7.u32);
	// stw r8,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// stw r6,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r6.u32);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
loc_82AF82B8:
	// addi r11,r1,496
	ctx.r11.s64 = ctx.r1.s64 + 496;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// stw r11,488(r1)
	PPC_STORE_U32(ctx.r1.u32 + 488, ctx.r11.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x82b07648
	ctx.lr = 0x82AF82D0;
	sub_82B07648(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82af82e4
	if (ctx.cr0.eq) goto loc_82AF82E4;
loc_82AF82D8:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82af8658
	goto loc_82AF8658;
loc_82AF82E4:
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82b07668
	ctx.lr = 0x82AF82EC;
	sub_82B07668(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82af82d8
	if (!ctx.cr0.eq) goto loc_82AF82D8;
	// lhz r11,264(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 264);
	// cmplwi cr6,r11,410
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 410, ctx.xer);
	// bne cr6,0x82af82d8
	if (!ctx.cr6.eq) goto loc_82AF82D8;
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82af82d8
	if (!ctx.cr6.eq) goto loc_82AF82D8;
	// lwz r3,292(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82af8360
	if (ctx.cr6.eq) goto loc_82AF8360;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82691410
	ctx.lr = 0x82AF8324;
	sub_82691410(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82af8338
	if (!ctx.cr0.eq) goto loc_82AF8338;
loc_82AF832C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82af8658
	goto loc_82AF8658;
loc_82AF8338:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82b07748
	ctx.lr = 0x82AF8344;
	sub_82B07748(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82af82d8
	if (!ctx.cr0.eq) goto loc_82AF82D8;
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r28,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r28.u8);
	// bl 0x82691460
	ctx.lr = 0x82AF8360;
	sub_82691460(ctx, base);
loc_82AF8360:
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82b07800
	ctx.lr = 0x82AF8370;
	sub_82B07800(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82af82d8
	if (!ctx.cr0.eq) goto loc_82AF82D8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82b07880
	ctx.lr = 0x82AF8384;
	sub_82B07880(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82af82d8
	if (!ctx.cr0.eq) goto loc_82AF82D8;
	// lwz r3,360(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82af83d8
	if (ctx.cr6.eq) goto loc_82AF83D8;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82691410
	ctx.lr = 0x82AF83A4;
	sub_82691410(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82af832c
	if (ctx.cr0.eq) goto loc_82AF832C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82b07a00
	ctx.lr = 0x82AF83BC;
	sub_82B07A00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82af82d8
	if (!ctx.cr0.eq) goto loc_82AF82D8;
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r28,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r28.u8);
	// bl 0x82691460
	ctx.lr = 0x82AF83D8;
	sub_82691460(ctx, base);
loc_82AF83D8:
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82b0a7f8
	ctx.lr = 0x82AF83E0;
	sub_82B0A7F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82af82d8
	if (!ctx.cr0.eq) goto loc_82AF82D8;
	// lhz r5,348(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 348);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// bne cr6,0x82af8418
	if (!ctx.cr6.eq) goto loc_82AF8418;
	// lhz r11,346(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 346);
	// lis r25,10240
	ctx.r25.s64 = 671088640;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x82af8410
	if (ctx.cr6.gt) goto loc_82AF8410;
	// ori r25,r25,2
	ctx.r25.u64 = ctx.r25.u64 | 2;
	// b 0x82af847c
	goto loc_82AF847C;
loc_82AF8410:
	// ori r25,r25,88
	ctx.r25.u64 = ctx.r25.u64 | 88;
	// b 0x82af847c
	goto loc_82AF847C;
loc_82AF8418:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82af8444
	if (!ctx.cr6.eq) goto loc_82AF8444;
	// lhz r11,346(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 346);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x82af8438
	if (ctx.cr6.gt) goto loc_82AF8438;
	// lis r25,2048
	ctx.r25.s64 = 134217728;
	// ori r25,r25,74
	ctx.r25.u64 = ctx.r25.u64 | 74;
	// b 0x82af847c
	goto loc_82AF847C;
loc_82AF8438:
	// lis r25,11552
	ctx.r25.s64 = 757071872;
	// ori r25,r25,153
	ctx.r25.u64 = ctx.r25.u64 | 153;
	// b 0x82af847c
	goto loc_82AF847C;
loc_82AF8444:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// lhz r11,346(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 346);
	// bne cr6,0x82af8460
	if (!ctx.cr6.eq) goto loc_82AF8460;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x82af8474
	if (ctx.cr6.gt) goto loc_82AF8474;
	// lis r25,10784
	ctx.r25.s64 = 706740224;
	// b 0x82af846c
	goto loc_82AF846C;
loc_82AF8460:
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x82af8474
	if (ctx.cr6.gt) goto loc_82AF8474;
	// lis r25,6688
	ctx.r25.s64 = 438304768;
loc_82AF846C:
	// ori r25,r25,134
	ctx.r25.u64 = ctx.r25.u64 | 134;
	// b 0x82af847c
	goto loc_82AF847C;
loc_82AF8474:
	// lis r25,6688
	ctx.r25.s64 = 438304768;
	// ori r25,r25,90
	ctx.r25.u64 = ctx.r25.u64 | 90;
loc_82AF847C:
	// li r11,5
	ctx.r11.s64 = 5;
	// lwz r9,328(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// addi r10,r1,512
	ctx.r10.s64 = ctx.r1.s64 + 512;
	// lwz r8,332(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// stw r10,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r10.u32);
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// addi r7,r1,212
	ctx.r7.s64 = ctx.r1.s64 + 212;
	// addi r10,r1,512
	ctx.r10.s64 = ctx.r1.s64 + 512;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82AF84A4:
	// stwu r10,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r7.u32 = ea;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// bdnz 0x82af84a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82AF84A4;
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lhz r11,318(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 318);
	// beq cr6,0x82af8528
	if (ctx.cr6.eq) goto loc_82AF8528;
	// li r10,5
	ctx.r10.s64 = 5;
	// rlwinm r6,r11,19,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x1;
	// addi r7,r1,196
	ctx.r7.s64 = ctx.r1.s64 + 196;
	// addi r11,r1,520
	ctx.r11.s64 = ctx.r1.s64 + 520;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82AF84D4:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// sth r5,8(r11)
	PPC_STORE_U16(ctx.r11.u32 + 8, ctx.r5.u16);
	// sth r6,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r6.u16);
	// beq cr6,0x82af84f8
	if (ctx.cr6.eq) goto loc_82AF84F8;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
loc_82AF84F8:
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bge cr6,0x82af8508
	if (!ctx.cr6.lt) goto loc_82AF8508;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_82AF8508:
	// srawi r8,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 1;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bge cr6,0x82af8518
	if (!ctx.cr6.lt) goto loc_82AF8518;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
loc_82AF8518:
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bdnz 0x82af84d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82AF84D4;
	// b 0x82af853c
	goto loc_82AF853C;
loc_82AF8528:
	// rlwinm r11,r11,19,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x1;
	// stw r9,524(r1)
	PPC_STORE_U32(ctx.r1.u32 + 524, ctx.r9.u32);
	// stw r8,520(r1)
	PPC_STORE_U32(ctx.r1.u32 + 520, ctx.r8.u32);
	// sth r5,528(r1)
	PPC_STORE_U16(ctx.r1.u32 + 528, ctx.r5.u16);
	// sth r11,530(r1)
	PPC_STORE_U16(ctx.r1.u32 + 530, ctx.r11.u16);
loc_82AF853C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// clrlwi r10,r25,26
	ctx.r10.u64 = ctx.r25.u32 & 0x3F;
	// addi r11,r11,-25800
	ctx.r11.s64 = ctx.r11.s64 + -25800;
	// cmpw cr6,r21,r25
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r25.s32, ctx.xer);
	// lbzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// bne cr6,0x82af8578
	if (!ctx.cr6.eq) goto loc_82AF8578;
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// lwz r9,0(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mullw r10,r10,r23
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r23.s32);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r31,r11,r22
	ctx.r31.u64 = ctx.r11.u64 + ctx.r22.u64;
	// b 0x82af8590
	goto loc_82AF8590;
loc_82AF8578:
	// mullw r30,r11,r26
	ctx.r30.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r26.s32);
	// mullw r3,r30,r27
	ctx.r3.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r27.s32);
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// bl 0x82691410
	ctx.lr = 0x82AF8588;
	sub_82691410(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82af832c
	if (ctx.cr0.eq) goto loc_82AF832C;
loc_82AF8590:
	// mulli r10,r19,24
	ctx.r10.s64 = ctx.r19.s64 * 24;
	// lhz r6,344(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 344);
	// addi r11,r1,512
	ctx.r11.s64 = ctx.r1.s64 + 512;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b0ada8
	ctx.lr = 0x82AF85AC;
	sub_82B0ADA8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82af82d8
	if (!ctx.cr0.eq) goto loc_82AF82D8;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82b0a2b8
	ctx.lr = 0x82AF85BC;
	sub_82B0A2B8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82b0acc0
	ctx.lr = 0x82AF85C8;
	sub_82B0ACC0(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x822d6f30
	ctx.lr = 0x82AF85D0;
	sub_822D6F30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82af85e0
	if (ctx.cr0.eq) goto loc_82AF85E0;
	// lis r20,-32768
	ctx.r20.s64 = -2147483648;
	// ori r20,r20,16389
	ctx.r20.u64 = ctx.r20.u64 | 16389;
loc_82AF85E0:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x82af85f0
	if (!ctx.cr6.lt) goto loc_82AF85F0;
	// lis r20,-32768
	ctx.r20.s64 = -2147483648;
	// ori r20,r20,16389
	ctx.r20.u64 = ctx.r20.u64 | 16389;
loc_82AF85F0:
	// cmpw cr6,r21,r25
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r25.s32, ctx.xer);
	// beq cr6,0x82af8654
	if (ctx.cr6.eq) goto loc_82AF8654;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r26,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r26.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r27,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r27.u32);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// lfs f1,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f1.f64 = double(temp.f32);
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82af72f8
	ctx.lr = 0x82AF8644;
	sub_82AF72F8(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691460
	ctx.lr = 0x82AF8654;
	sub_82691460(ctx, base);
loc_82AF8654:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
loc_82AF8658:
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// b 0x82fa769c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF8660"))) PPC_WEAK_FUNC(sub_82AF8660);
PPC_FUNC_IMPL(__imp__sub_82AF8660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82AF8668;
	__savegprlr_26(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r11,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r11.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x82b07648
	ctx.lr = 0x82AF8688;
	sub_82B07648(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82af869c
	if (ctx.cr0.eq) goto loc_82AF869C;
loc_82AF8690:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82af8800
	goto loc_82AF8800;
loc_82AF869C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82b07668
	ctx.lr = 0x82AF86A4;
	sub_82B07668(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82af8690
	if (!ctx.cr0.eq) goto loc_82AF8690;
	// lhz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 120);
	// cmplwi cr6,r11,410
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 410, ctx.xer);
	// bne cr6,0x82af8690
	if (!ctx.cr6.eq) goto loc_82AF8690;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82af8690
	if (!ctx.cr6.eq) goto loc_82AF8690;
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82af871c
	if (ctx.cr6.eq) goto loc_82AF871C;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82691410
	ctx.lr = 0x82AF86E0;
	sub_82691410(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82af86f4
	if (!ctx.cr0.eq) goto loc_82AF86F4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82af8800
	goto loc_82AF8800;
loc_82AF86F4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82b07748
	ctx.lr = 0x82AF8700;
	sub_82B07748(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82af8690
	if (!ctx.cr0.eq) goto loc_82AF8690;
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r29,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r29.u8);
	// bl 0x82691460
	ctx.lr = 0x82AF871C;
	sub_82691460(ctx, base);
loc_82AF871C:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82b07800
	ctx.lr = 0x82AF872C;
	sub_82B07800(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82af8690
	if (!ctx.cr0.eq) goto loc_82AF8690;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82b07880
	ctx.lr = 0x82AF8740;
	sub_82B07880(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82af8690
	if (!ctx.cr0.eq) goto loc_82AF8690;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822d6f30
	ctx.lr = 0x82AF8750;
	sub_822D6F30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82af8690
	if (!ctx.cr0.eq) goto loc_82AF8690;
	// lwz r10,188(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r9,184(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lhz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 204);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
	// bne cr6,0x82af8794
	if (!ctx.cr6.eq) goto loc_82AF8794;
	// lhz r11,202(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 202);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// lis r11,10240
	ctx.r11.s64 = 671088640;
	// bgt cr6,0x82af878c
	if (ctx.cr6.gt) goto loc_82AF878C;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// b 0x82af87f8
	goto loc_82AF87F8;
loc_82AF878C:
	// ori r11,r11,88
	ctx.r11.u64 = ctx.r11.u64 | 88;
	// b 0x82af87f8
	goto loc_82AF87F8;
loc_82AF8794:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82af87c0
	if (!ctx.cr6.eq) goto loc_82AF87C0;
	// lhz r11,202(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 202);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x82af87b4
	if (ctx.cr6.gt) goto loc_82AF87B4;
	// lis r11,2048
	ctx.r11.s64 = 134217728;
	// ori r11,r11,74
	ctx.r11.u64 = ctx.r11.u64 | 74;
	// b 0x82af87f8
	goto loc_82AF87F8;
loc_82AF87B4:
	// lis r11,11552
	ctx.r11.s64 = 757071872;
	// ori r11,r11,153
	ctx.r11.u64 = ctx.r11.u64 | 153;
	// b 0x82af87f8
	goto loc_82AF87F8;
loc_82AF87C0:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// lhz r11,202(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 202);
	// bne cr6,0x82af87e0
	if (!ctx.cr6.eq) goto loc_82AF87E0;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x82af87f0
	if (ctx.cr6.gt) goto loc_82AF87F0;
	// lis r11,10784
	ctx.r11.s64 = 706740224;
loc_82AF87D8:
	// ori r11,r11,134
	ctx.r11.u64 = ctx.r11.u64 | 134;
	// b 0x82af87f8
	goto loc_82AF87F8;
loc_82AF87E0:
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x82af87f0
	if (ctx.cr6.gt) goto loc_82AF87F0;
	// lis r11,6688
	ctx.r11.s64 = 438304768;
	// b 0x82af87d8
	goto loc_82AF87D8;
loc_82AF87F0:
	// lis r11,6688
	ctx.r11.s64 = 438304768;
	// ori r11,r11,90
	ctx.r11.u64 = ctx.r11.u64 | 90;
loc_82AF87F8:
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AF8800:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF8808"))) PPC_WEAK_FUNC(sub_82AF8808);
PPC_FUNC_IMPL(__imp__sub_82AF8808) {
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
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AF8850;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AF8860"))) PPC_WEAK_FUNC(sub_82AF8860);
PPC_FUNC_IMPL(__imp__sub_82AF8860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82AF8868;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82af88b4
	if (ctx.cr6.eq) goto loc_82AF88B4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// ble cr6,0x82af88b4
	if (!ctx.cr6.gt) goto loc_82AF88B4;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r29,r11,4404
	ctx.r29.s64 = ctx.r11.s64 + 4404;
loc_82AF8898:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AF88A4;
	sub_82AF8808(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82af8898
	if (ctx.cr6.lt) goto loc_82AF8898;
loc_82AF88B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF88BC"))) PPC_WEAK_FUNC(sub_82AF88BC);
PPC_FUNC_IMPL(__imp__sub_82AF88BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF88C0"))) PPC_WEAK_FUNC(sub_82AF88C0);
PPC_FUNC_IMPL(__imp__sub_82AF88C0) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bl 0x82af8860
	ctx.lr = 0x82AF88EC;
	sub_82AF8860(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-29664
	ctx.r4.s64 = ctx.r11.s64 + -29664;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AF8900;
	sub_82AF8808(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4436
	ctx.r4.s64 = ctx.r11.s64 + 4436;
	// bl 0x82af8808
	ctx.lr = 0x82AF8910;
	sub_82AF8808(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
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

__attribute__((alias("__imp__sub_82AF8930"))) PPC_WEAK_FUNC(sub_82AF8930);
PPC_FUNC_IMPL(__imp__sub_82AF8930) {
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
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r4,r10,-29664
	ctx.r4.s64 = ctx.r10.s64 + -29664;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AF8960;
	sub_82AF8808(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4436
	ctx.r4.s64 = ctx.r11.s64 + 4436;
	// bl 0x82af8808
	ctx.lr = 0x82AF8970;
	sub_82AF8808(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82AF898C"))) PPC_WEAK_FUNC(sub_82AF898C);
PPC_FUNC_IMPL(__imp__sub_82AF898C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF8990"))) PPC_WEAK_FUNC(sub_82AF8990);
PPC_FUNC_IMPL(__imp__sub_82AF8990) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82af89c0
	if (ctx.cr6.eq) goto loc_82AF89C0;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// add r6,r5,r7
	ctx.r6.u64 = ctx.r5.u64 + ctx.r7.u64;
	// addi r4,r10,-29644
	ctx.r4.s64 = ctx.r10.s64 + -29644;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AF89BC;
	sub_82AF8808(ctx, base);
	// b 0x82af8a0c
	goto loc_82AF8A0C;
loc_82AF89C0:
	// rlwinm r10,r7,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r9,r7,31
	ctx.r9.u64 = ctx.r7.u32 & 0x1;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfs f0,11976(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11976);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// addi r4,r10,-29632
	ctx.r4.s64 = ctx.r10.s64 + -29632;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmadds f1,f13,f0,f12
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x82af8808
	ctx.lr = 0x82AF8A0C;
	sub_82AF8808(ctx, base);
loc_82AF8A0C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AF8A1C"))) PPC_WEAK_FUNC(sub_82AF8A1C);
PPC_FUNC_IMPL(__imp__sub_82AF8A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF8A20"))) PPC_WEAK_FUNC(sub_82AF8A20);
PPC_FUNC_IMPL(__imp__sub_82AF8A20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82AF8A28;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,-29604
	ctx.r4.s64 = ctx.r11.s64 + -29604;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AF8A44;
	sub_82AF8808(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82af8b00
	if (ctx.cr0.eq) goto loc_82AF8B00;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r31,r9,13912
	ctx.r31.s64 = ctx.r9.s64 + 13912;
	// addi r29,r8,23800
	ctx.r29.s64 = ctx.r8.s64 + 23800;
	// addi r28,r7,23808
	ctx.r28.s64 = ctx.r7.s64 + 23808;
	// addi r27,r6,23816
	ctx.r27.s64 = ctx.r6.s64 + 23816;
	// addi r26,r10,23792
	ctx.r26.s64 = ctx.r10.s64 + 23792;
	// addi r25,r11,23784
	ctx.r25.s64 = ctx.r11.s64 + 23784;
loc_82AF8A84:
	// lbz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 0);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// cmpwi cr6,r5,34
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 34, ctx.xer);
	// beq cr6,0x82af8ae8
	if (ctx.cr6.eq) goto loc_82AF8AE8;
	// cmpwi cr6,r5,38
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 38, ctx.xer);
	// beq cr6,0x82af8ae0
	if (ctx.cr6.eq) goto loc_82AF8AE0;
	// cmpwi cr6,r5,39
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 39, ctx.xer);
	// beq cr6,0x82af8ad8
	if (ctx.cr6.eq) goto loc_82AF8AD8;
	// cmpwi cr6,r5,60
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 60, ctx.xer);
	// beq cr6,0x82af8ac8
	if (ctx.cr6.eq) goto loc_82AF8AC8;
	// cmpwi cr6,r5,62
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 62, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82af8ac0
	if (ctx.cr6.eq) goto loc_82AF8AC0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// b 0x82af8af0
	goto loc_82AF8AF0;
loc_82AF8AC0:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// b 0x82af8ad0
	goto loc_82AF8AD0;
loc_82AF8AC8:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_82AF8ACC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82AF8AD0:
	// bl 0x82af8808
	ctx.lr = 0x82AF8AD4;
	sub_82AF8808(ctx, base);
	// b 0x82af8af4
	goto loc_82AF8AF4;
loc_82AF8AD8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x82af8acc
	goto loc_82AF8ACC;
loc_82AF8AE0:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// b 0x82af8acc
	goto loc_82AF8ACC;
loc_82AF8AE8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82AF8AF0:
	// bl 0x82af8808
	ctx.lr = 0x82AF8AF4;
	sub_82AF8808(ctx, base);
loc_82AF8AF4:
	// lbzu r11,1(r24)
	ea = 1 + ctx.r24.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r24.u32 = ea;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82af8a84
	if (!ctx.cr0.eq) goto loc_82AF8A84;
loc_82AF8B00:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-14928
	ctx.r4.s64 = ctx.r11.s64 + -14928;
	// bl 0x82af8808
	ctx.lr = 0x82AF8B10;
	sub_82AF8808(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF8B18"))) PPC_WEAK_FUNC(sub_82AF8B18);
PPC_FUNC_IMPL(__imp__sub_82AF8B18) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AF8B1C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82af8b1c
	if (!ctx.cr6.eq) goto loc_82AF8B1C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AF8B48"))) PPC_WEAK_FUNC(sub_82AF8B48);
PPC_FUNC_IMPL(__imp__sub_82AF8B48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AF8B58"))) PPC_WEAK_FUNC(sub_82AF8B58);
PPC_FUNC_IMPL(__imp__sub_82AF8B58) {
	PPC_FUNC_PROLOGUE();
	// add r8,r4,r5
	ctx.r8.u64 = ctx.r4.u64 + ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82af8bac
	if (!ctx.cr6.lt) goto loc_82AF8BAC;
loc_82AF8B6C:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmpwi cr6,r9,60
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 60, ctx.xer);
	// beq cr6,0x82af8b84
	if (ctx.cr6.eq) goto loc_82AF8B84;
	// cmpwi cr6,r9,62
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 62, ctx.xer);
	// bne cr6,0x82af8b8c
	if (!ctx.cr6.eq) goto loc_82AF8B8C;
loc_82AF8B84:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x82af8ba0
	goto loc_82AF8BA0;
loc_82AF8B8C:
	// cmpwi cr6,r9,38
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 38, ctx.xer);
	// bne cr6,0x82af8b9c
	if (!ctx.cr6.eq) goto loc_82AF8B9C;
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// b 0x82af8ba0
	goto loc_82AF8BA0;
loc_82AF8B9C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82AF8BA0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82af8b6c
	if (ctx.cr6.lt) goto loc_82AF8B6C;
loc_82AF8BAC:
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AF8BBC"))) PPC_WEAK_FUNC(sub_82AF8BBC);
PPC_FUNC_IMPL(__imp__sub_82AF8BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF8BC0"))) PPC_WEAK_FUNC(sub_82AF8BC0);
PPC_FUNC_IMPL(__imp__sub_82AF8BC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-1120(r1)
	ea = -1120 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fad3e8
	ctx.lr = 0x82AF8BE8;
	sub_82FAD3E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82af8c00
	if (!ctx.cr0.lt) goto loc_82AF8C00;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,16389
	ctx.r11.u64 = ctx.r11.u64 | 16389;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x82af8c0c
	goto loc_82AF8C0C;
loc_82AF8C00:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_82AF8C0C:
	// addi r1,r1,1120
	ctx.r1.s64 = ctx.r1.s64 + 1120;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AF8C20"))) PPC_WEAK_FUNC(sub_82AF8C20);
PPC_FUNC_IMPL(__imp__sub_82AF8C20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AF8C30:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82af8c30
	if (!ctx.cr6.eq) goto loc_82AF8C30;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82af8c74
	if (!ctx.cr6.lt) goto loc_82AF8C74;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,16389
	ctx.r11.u64 = ctx.r11.u64 | 16389;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
loc_82AF8C74:
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r9,r4,-1
	ctx.r9.s64 = ctx.r4.s64 + -1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82AF8C84:
	// lbzu r10,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// extsb. r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stbu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bne 0x82af8c84
	if (!ctx.cr0.eq) goto loc_82AF8C84;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AF8C98:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82af8c98
	if (!ctx.cr6.eq) goto loc_82AF8C98;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AF8CC4"))) PPC_WEAK_FUNC(sub_82AF8CC4);
PPC_FUNC_IMPL(__imp__sub_82AF8CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF8CC8"))) PPC_WEAK_FUNC(sub_82AF8CC8);
PPC_FUNC_IMPL(__imp__sub_82AF8CC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82AF8CD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82af8d3c
	if (ctx.cr6.lt) goto loc_82AF8D3C;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// subf r31,r11,r9
	ctx.r31.s64 = ctx.r9.s64 - ctx.r11.s64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r5,r31
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x82af8d14
	if (!ctx.cr6.gt) goto loc_82AF8D14;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,16389
	ctx.r11.u64 = ctx.r11.u64 | 16389;
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// b 0x82af8d3c
	goto loc_82AF8D3C;
loc_82AF8D14:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// blt cr6,0x82af8d20
	if (ctx.cr6.lt) goto loc_82AF8D20;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
loc_82AF8D20:
	// bl 0x82fa77c0
	ctx.lr = 0x82AF8D24;
	sub_82FA77C0(ctx, base);
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82af8d30
	if (!ctx.cr6.lt) goto loc_82AF8D30;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82AF8D30:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r11,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r11.u32);
loc_82AF8D3C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF8D44"))) PPC_WEAK_FUNC(sub_82AF8D44);
PPC_FUNC_IMPL(__imp__sub_82AF8D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF8D48"))) PPC_WEAK_FUNC(sub_82AF8D48);
PPC_FUNC_IMPL(__imp__sub_82AF8D48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x82af8e24
	if (ctx.cr6.lt) goto loc_82AF8E24;
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// add r31,r4,r5
	ctx.r31.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r4,r31
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82af8e24
	if (!ctx.cr6.lt) goto loc_82AF8E24;
	// li r6,38
	ctx.r6.s64 = 38;
	// li r5,116
	ctx.r5.s64 = 116;
	// li r7,59
	ctx.r7.s64 = 59;
loc_82AF8D84:
	// lbz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// cmpwi cr6,r9,60
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 60, ctx.xer);
	// bne cr6,0x82af8db8
	if (!ctx.cr6.eq) goto loc_82AF8DB8;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x82af8e38
	if (ctx.cr6.lt) goto loc_82AF8E38;
	// li r9,108
	ctx.r9.s64 = 108;
loc_82AF8DA0:
	// stb r6,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// stbu r5,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r5.u8);
	ctx.r11.u32 = ea;
loc_82AF8DB0:
	// stbu r7,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r11.u32 = ea;
	// b 0x82af8e14
	goto loc_82AF8E14;
loc_82AF8DB8:
	// cmpwi cr6,r9,62
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 62, ctx.xer);
	// bne cr6,0x82af8dd0
	if (!ctx.cr6.eq) goto loc_82AF8DD0;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x82af8e38
	if (ctx.cr6.lt) goto loc_82AF8E38;
	// li r9,103
	ctx.r9.s64 = 103;
	// b 0x82af8da0
	goto loc_82AF8DA0;
loc_82AF8DD0:
	// cmpwi cr6,r9,38
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 38, ctx.xer);
	// bne cr6,0x82af8e04
	if (!ctx.cr6.eq) goto loc_82AF8E04;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// blt cr6,0x82af8e38
	if (ctx.cr6.lt) goto loc_82AF8E38;
	// li r9,97
	ctx.r9.s64 = 97;
	// stb r6,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// li r8,109
	ctx.r8.s64 = 109;
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// li r9,112
	ctx.r9.s64 = 112;
	// addi r10,r10,-5
	ctx.r10.s64 = ctx.r10.s64 + -5;
	// stbu r8,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// b 0x82af8db0
	goto loc_82AF8DB0;
loc_82AF8E04:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// blt cr6,0x82af8e38
	if (ctx.cr6.lt) goto loc_82AF8E38;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_82AF8E14:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r4,r31
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x82af8d84
	if (ctx.cr6.lt) goto loc_82AF8D84;
loc_82AF8E24:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
loc_82AF8E30:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82AF8E38:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,16389
	ctx.r11.u64 = ctx.r11.u64 | 16389;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// b 0x82af8e30
	goto loc_82AF8E30;
}

__attribute__((alias("__imp__sub_82AF8E48"))) PPC_WEAK_FUNC(sub_82AF8E48);
PPC_FUNC_IMPL(__imp__sub_82AF8E48) {
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
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82af8eac
	if (ctx.cr6.lt) goto loc_82AF8EAC;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// subf r4,r11,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r11.s64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82fad3e8
	ctx.lr = 0x82AF8E88;
	sub_82FAD3E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82af8ea0
	if (!ctx.cr0.lt) goto loc_82AF8EA0;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,16389
	ctx.r11.u64 = ctx.r11.u64 | 16389;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x82af8eac
	goto loc_82AF8EAC;
loc_82AF8EA0:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_82AF8EAC:
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

__attribute__((alias("__imp__sub_82AF8EC0"))) PPC_WEAK_FUNC(sub_82AF8EC0);
PPC_FUNC_IMPL(__imp__sub_82AF8EC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r10.u32);
	// lwz r10,272(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// stw r4,272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 272, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AF8EE0"))) PPC_WEAK_FUNC(sub_82AF8EE0);
PPC_FUNC_IMPL(__imp__sub_82AF8EE0) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AF8EEC"))) PPC_WEAK_FUNC(sub_82AF8EEC);
PPC_FUNC_IMPL(__imp__sub_82AF8EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF8EF0"))) PPC_WEAK_FUNC(sub_82AF8EF0);
PPC_FUNC_IMPL(__imp__sub_82AF8EF0) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AF8EFC"))) PPC_WEAK_FUNC(sub_82AF8EFC);
PPC_FUNC_IMPL(__imp__sub_82AF8EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF8F00"))) PPC_WEAK_FUNC(sub_82AF8F00);
PPC_FUNC_IMPL(__imp__sub_82AF8F00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82AF8F08;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82af8f84
	if (!ctx.cr6.gt) goto loc_82AF8F84;
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82af8f30
	if (!ctx.cr6.lt) goto loc_82AF8F30;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
loc_82AF8F30:
	// mulli r4,r30,28
	ctx.r4.s64 = ctx.r30.s64 * 28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b0b468
	ctx.lr = 0x82AF8F3C;
	sub_82B0B468(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82af8f54
	if (!ctx.cr0.eq) goto loc_82AF8F54;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x82af8f84
	goto loc_82AF8F84;
loc_82AF8F54:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82af8f80
	if (ctx.cr6.eq) goto loc_82AF8F80;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mulli r5,r11,28
	ctx.r5.s64 = ctx.r11.s64 * 28;
	// bl 0x82fa77c0
	ctx.lr = 0x82AF8F74;
	sub_82FA77C0(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b0b478
	ctx.lr = 0x82AF8F80;
	sub_82B0B478(ctx, base);
loc_82AF8F80:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_82AF8F84:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF8F8C"))) PPC_WEAK_FUNC(sub_82AF8F8C);
PPC_FUNC_IMPL(__imp__sub_82AF8F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF8F90"))) PPC_WEAK_FUNC(sub_82AF8F90);
PPC_FUNC_IMPL(__imp__sub_82AF8F90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82AF8F98;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82af9014
	if (!ctx.cr6.gt) goto loc_82AF9014;
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82af8fc0
	if (!ctx.cr6.lt) goto loc_82AF8FC0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
loc_82AF8FC0:
	// mulli r4,r30,24
	ctx.r4.s64 = ctx.r30.s64 * 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b0b468
	ctx.lr = 0x82AF8FCC;
	sub_82B0B468(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82af8fe4
	if (!ctx.cr0.eq) goto loc_82AF8FE4;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x82af9014
	goto loc_82AF9014;
loc_82AF8FE4:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82af9010
	if (ctx.cr6.eq) goto loc_82AF9010;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mulli r5,r11,24
	ctx.r5.s64 = ctx.r11.s64 * 24;
	// bl 0x82fa77c0
	ctx.lr = 0x82AF9004;
	sub_82FA77C0(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b0b478
	ctx.lr = 0x82AF9010;
	sub_82B0B478(ctx, base);
loc_82AF9010:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_82AF9014:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF901C"))) PPC_WEAK_FUNC(sub_82AF901C);
PPC_FUNC_IMPL(__imp__sub_82AF901C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF9020"))) PPC_WEAK_FUNC(sub_82AF9020);
PPC_FUNC_IMPL(__imp__sub_82AF9020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82AF9028;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82af90a4
	if (!ctx.cr6.gt) goto loc_82AF90A4;
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82af9050
	if (!ctx.cr6.lt) goto loc_82AF9050;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
loc_82AF9050:
	// rlwinm r4,r30,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b0b468
	ctx.lr = 0x82AF905C;
	sub_82B0B468(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82af9074
	if (!ctx.cr0.eq) goto loc_82AF9074;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x82af90a4
	goto loc_82AF90A4;
loc_82AF9074:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82af90a0
	if (ctx.cr6.eq) goto loc_82AF90A0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82fa77c0
	ctx.lr = 0x82AF9094;
	sub_82FA77C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82b0b478
	ctx.lr = 0x82AF90A0;
	sub_82B0B478(ctx, base);
loc_82AF90A0:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_82AF90A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF90AC"))) PPC_WEAK_FUNC(sub_82AF90AC);
PPC_FUNC_IMPL(__imp__sub_82AF90AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF90B0"))) PPC_WEAK_FUNC(sub_82AF90B0);
PPC_FUNC_IMPL(__imp__sub_82AF90B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82AF90B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82af9134
	if (!ctx.cr6.gt) goto loc_82AF9134;
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82af90e0
	if (!ctx.cr6.lt) goto loc_82AF90E0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
loc_82AF90E0:
	// rlwinm r4,r30,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b0b468
	ctx.lr = 0x82AF90EC;
	sub_82B0B468(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82af9104
	if (!ctx.cr0.eq) goto loc_82AF9104;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x82af9134
	goto loc_82AF9134;
loc_82AF9104:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82af9130
	if (ctx.cr6.eq) goto loc_82AF9130;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82fa77c0
	ctx.lr = 0x82AF9124;
	sub_82FA77C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82b0b478
	ctx.lr = 0x82AF9130;
	sub_82B0B478(ctx, base);
loc_82AF9130:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_82AF9134:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF913C"))) PPC_WEAK_FUNC(sub_82AF913C);
PPC_FUNC_IMPL(__imp__sub_82AF913C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF9140"))) PPC_WEAK_FUNC(sub_82AF9140);
PPC_FUNC_IMPL(__imp__sub_82AF9140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82AF9148;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82af91c4
	if (!ctx.cr6.gt) goto loc_82AF91C4;
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82af9170
	if (!ctx.cr6.lt) goto loc_82AF9170;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
loc_82AF9170:
	// mulli r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 * 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b0b468
	ctx.lr = 0x82AF917C;
	sub_82B0B468(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82af9194
	if (!ctx.cr0.eq) goto loc_82AF9194;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x82af91c4
	goto loc_82AF91C4;
loc_82AF9194:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82af91c0
	if (ctx.cr6.eq) goto loc_82AF91C0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mulli r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 * 12;
	// bl 0x82fa77c0
	ctx.lr = 0x82AF91B4;
	sub_82FA77C0(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b0b478
	ctx.lr = 0x82AF91C0;
	sub_82B0B478(ctx, base);
loc_82AF91C0:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_82AF91C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF91CC"))) PPC_WEAK_FUNC(sub_82AF91CC);
PPC_FUNC_IMPL(__imp__sub_82AF91CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF91D0"))) PPC_WEAK_FUNC(sub_82AF91D0);
PPC_FUNC_IMPL(__imp__sub_82AF91D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82AF91D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82af9254
	if (!ctx.cr6.gt) goto loc_82AF9254;
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82af9200
	if (!ctx.cr6.lt) goto loc_82AF9200;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
loc_82AF9200:
	// mulli r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 * 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b0b468
	ctx.lr = 0x82AF920C;
	sub_82B0B468(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82af9224
	if (!ctx.cr0.eq) goto loc_82AF9224;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x82af9254
	goto loc_82AF9254;
loc_82AF9224:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82af9250
	if (ctx.cr6.eq) goto loc_82AF9250;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mulli r5,r11,20
	ctx.r5.s64 = ctx.r11.s64 * 20;
	// bl 0x82fa77c0
	ctx.lr = 0x82AF9244;
	sub_82FA77C0(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b0b478
	ctx.lr = 0x82AF9250;
	sub_82B0B478(ctx, base);
loc_82AF9250:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_82AF9254:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF925C"))) PPC_WEAK_FUNC(sub_82AF925C);
PPC_FUNC_IMPL(__imp__sub_82AF925C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF9260"))) PPC_WEAK_FUNC(sub_82AF9260);
PPC_FUNC_IMPL(__imp__sub_82AF9260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82AF9268;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82af92e4
	if (!ctx.cr6.gt) goto loc_82AF92E4;
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82af9290
	if (!ctx.cr6.lt) goto loc_82AF9290;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
loc_82AF9290:
	// rlwinm r4,r30,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b0b468
	ctx.lr = 0x82AF929C;
	sub_82B0B468(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82af92b4
	if (!ctx.cr0.eq) goto loc_82AF92B4;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x82af92e4
	goto loc_82AF92E4;
loc_82AF92B4:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82af92e0
	if (ctx.cr6.eq) goto loc_82AF92E0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82fa77c0
	ctx.lr = 0x82AF92D4;
	sub_82FA77C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82b0b478
	ctx.lr = 0x82AF92E0;
	sub_82B0B478(ctx, base);
loc_82AF92E0:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_82AF92E4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF92EC"))) PPC_WEAK_FUNC(sub_82AF92EC);
PPC_FUNC_IMPL(__imp__sub_82AF92EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF92F0"))) PPC_WEAK_FUNC(sub_82AF92F0);
PPC_FUNC_IMPL(__imp__sub_82AF92F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82AF92F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82af9374
	if (!ctx.cr6.gt) goto loc_82AF9374;
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82af9320
	if (!ctx.cr6.lt) goto loc_82AF9320;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
loc_82AF9320:
	// rlwinm r4,r30,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b0b468
	ctx.lr = 0x82AF932C;
	sub_82B0B468(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82af9344
	if (!ctx.cr0.eq) goto loc_82AF9344;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x82af9374
	goto loc_82AF9374;
loc_82AF9344:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82af9370
	if (ctx.cr6.eq) goto loc_82AF9370;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82fa77c0
	ctx.lr = 0x82AF9364;
	sub_82FA77C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82b0b478
	ctx.lr = 0x82AF9370;
	sub_82B0B478(ctx, base);
loc_82AF9370:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_82AF9374:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF937C"))) PPC_WEAK_FUNC(sub_82AF937C);
PPC_FUNC_IMPL(__imp__sub_82AF937C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF9380"))) PPC_WEAK_FUNC(sub_82AF9380);
PPC_FUNC_IMPL(__imp__sub_82AF9380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82AF9388;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82af9404
	if (!ctx.cr6.gt) goto loc_82AF9404;
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82af93b0
	if (!ctx.cr6.lt) goto loc_82AF93B0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
loc_82AF93B0:
	// mulli r4,r30,276
	ctx.r4.s64 = ctx.r30.s64 * 276;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b0b468
	ctx.lr = 0x82AF93BC;
	sub_82B0B468(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82af93d4
	if (!ctx.cr0.eq) goto loc_82AF93D4;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x82af9404
	goto loc_82AF9404;
loc_82AF93D4:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82af9400
	if (ctx.cr6.eq) goto loc_82AF9400;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mulli r5,r11,276
	ctx.r5.s64 = ctx.r11.s64 * 276;
	// bl 0x82fa77c0
	ctx.lr = 0x82AF93F4;
	sub_82FA77C0(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b0b478
	ctx.lr = 0x82AF9400;
	sub_82B0B478(ctx, base);
loc_82AF9400:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_82AF9404:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF940C"))) PPC_WEAK_FUNC(sub_82AF940C);
PPC_FUNC_IMPL(__imp__sub_82AF940C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF9410"))) PPC_WEAK_FUNC(sub_82AF9410);
PPC_FUNC_IMPL(__imp__sub_82AF9410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82AF9418;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82af9494
	if (!ctx.cr6.gt) goto loc_82AF9494;
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82af9440
	if (!ctx.cr6.lt) goto loc_82AF9440;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
loc_82AF9440:
	// mulli r4,r30,476
	ctx.r4.s64 = ctx.r30.s64 * 476;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b0b468
	ctx.lr = 0x82AF944C;
	sub_82B0B468(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82af9464
	if (!ctx.cr0.eq) goto loc_82AF9464;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x82af9494
	goto loc_82AF9494;
loc_82AF9464:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82af9490
	if (ctx.cr6.eq) goto loc_82AF9490;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mulli r5,r11,476
	ctx.r5.s64 = ctx.r11.s64 * 476;
	// bl 0x82fa77c0
	ctx.lr = 0x82AF9484;
	sub_82FA77C0(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b0b478
	ctx.lr = 0x82AF9490;
	sub_82B0B478(ctx, base);
loc_82AF9490:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_82AF9494:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF949C"))) PPC_WEAK_FUNC(sub_82AF949C);
PPC_FUNC_IMPL(__imp__sub_82AF949C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF94A0"))) PPC_WEAK_FUNC(sub_82AF94A0);
PPC_FUNC_IMPL(__imp__sub_82AF94A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82AF94A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82af9520
	if (!ctx.cr6.gt) goto loc_82AF9520;
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82af94d0
	if (!ctx.cr6.lt) goto loc_82AF94D0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
loc_82AF94D0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b0b468
	ctx.lr = 0x82AF94DC;
	sub_82B0B468(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82af94f4
	if (!ctx.cr0.eq) goto loc_82AF94F4;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x82af9520
	goto loc_82AF9520;
loc_82AF94F4:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82af951c
	if (ctx.cr6.eq) goto loc_82AF951C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82fa77c0
	ctx.lr = 0x82AF9510;
	sub_82FA77C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82b0b478
	ctx.lr = 0x82AF951C;
	sub_82B0B478(ctx, base);
loc_82AF951C:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_82AF9520:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF9528"))) PPC_WEAK_FUNC(sub_82AF9528);
PPC_FUNC_IMPL(__imp__sub_82AF9528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82AF9530;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82af95ac
	if (!ctx.cr6.gt) goto loc_82AF95AC;
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82af9558
	if (!ctx.cr6.lt) goto loc_82AF9558;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
loc_82AF9558:
	// mulli r4,r30,40
	ctx.r4.s64 = ctx.r30.s64 * 40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b0b468
	ctx.lr = 0x82AF9564;
	sub_82B0B468(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82af957c
	if (!ctx.cr0.eq) goto loc_82AF957C;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x82af95ac
	goto loc_82AF95AC;
loc_82AF957C:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82af95a8
	if (ctx.cr6.eq) goto loc_82AF95A8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mulli r5,r11,40
	ctx.r5.s64 = ctx.r11.s64 * 40;
	// bl 0x82fa77c0
	ctx.lr = 0x82AF959C;
	sub_82FA77C0(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b0b478
	ctx.lr = 0x82AF95A8;
	sub_82B0B478(ctx, base);
loc_82AF95A8:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_82AF95AC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF95B4"))) PPC_WEAK_FUNC(sub_82AF95B4);
PPC_FUNC_IMPL(__imp__sub_82AF95B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF95B8"))) PPC_WEAK_FUNC(sub_82AF95B8);
PPC_FUNC_IMPL(__imp__sub_82AF95B8) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-29560
	ctx.r4.s64 = ctx.r11.s64 + -29560;
	// bl 0x82af8808
	ctx.lr = 0x82AF95D8;
	sub_82AF8808(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4436
	ctx.r4.s64 = ctx.r11.s64 + 4436;
	// bl 0x82af8808
	ctx.lr = 0x82AF95E8;
	sub_82AF8808(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82AF9604"))) PPC_WEAK_FUNC(sub_82AF9604);
PPC_FUNC_IMPL(__imp__sub_82AF9604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF9608"))) PPC_WEAK_FUNC(sub_82AF9608);
PPC_FUNC_IMPL(__imp__sub_82AF9608) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,22544
	ctx.r4.s64 = ctx.r11.s64 + 22544;
	// bl 0x82af8808
	ctx.lr = 0x82AF9628;
	sub_82AF8808(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4436
	ctx.r4.s64 = ctx.r11.s64 + 4436;
	// bl 0x82af8808
	ctx.lr = 0x82AF9638;
	sub_82AF8808(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82AF9660"))) PPC_WEAK_FUNC(sub_82AF9660);
PPC_FUNC_IMPL(__imp__sub_82AF9660) {
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
	// stw r5,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r5.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r11.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r10,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r10.u32);
loc_82AF96A0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82af96a0
	if (!ctx.cr6.eq) goto loc_82AF96A0;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// bl 0x82691410
	ctx.lr = 0x82AF96C8;
	sub_82691410(ctx, base);
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82af96e4
	if (!ctx.cr0.eq) goto loc_82AF96E4;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,16389
	ctx.r11.u64 = ctx.r11.u64 | 16389;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// b 0x82af96fc
	goto loc_82AF96FC;
loc_82AF96E4:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
loc_82AF96EC:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// extsb. r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bne 0x82af96ec
	if (!ctx.cr0.eq) goto loc_82AF96EC;
loc_82AF96FC:
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

__attribute__((alias("__imp__sub_82AF9714"))) PPC_WEAK_FUNC(sub_82AF9714);
PPC_FUNC_IMPL(__imp__sub_82AF9714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF9718"))) PPC_WEAK_FUNC(sub_82AF9718);
PPC_FUNC_IMPL(__imp__sub_82AF9718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82AF9720;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82af9788
	if (ctx.cr6.lt) goto loc_82AF9788;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82691410
	ctx.lr = 0x82AF9748;
	sub_82691410(ctx, base);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// stw r3,388(r11)
	PPC_STORE_U32(ctx.r11.u32 + 388, ctx.r3.u32);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r10,388(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82af9770
	if (!ctx.cr6.eq) goto loc_82AF9770;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// b 0x82af9788
	goto loc_82AF9788;
loc_82AF9770:
	// stw r30,392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 392, ctx.r30.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r3,388(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// bl 0x82fa77c0
	ctx.lr = 0x82AF9788;
	sub_82FA77C0(ctx, base);
loc_82AF9788:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF9790"))) PPC_WEAK_FUNC(sub_82AF9790);
PPC_FUNC_IMPL(__imp__sub_82AF9790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7658
	ctx.lr = 0x82AF9798;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82af8860
	ctx.lr = 0x82AF97AC;
	sub_82AF8860(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r20,r11,-29532
	ctx.r20.s64 = ctx.r11.s64 + -29532;
	// addi r21,r10,-29564
	ctx.r21.s64 = ctx.r10.s64 + -29564;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AF97CC;
	sub_82AF8808(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af9608
	ctx.lr = 0x82AF97D4;
	sub_82AF9608(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r28,r30,4
	ctx.r28.s64 = ctx.r30.s64 + 4;
	// mulli r11,r11,276
	ctx.r11.s64 = ctx.r11.s64 * 276;
	// extsw r30,r10
	ctx.r30.s64 = ctx.r10.s32;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82af990c
	if (!ctx.cr6.lt) goto loc_82AF990C;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r22,r5,22544
	ctx.r22.s64 = ctx.r5.s64 + 22544;
	// addi r27,r6,-29620
	ctx.r27.s64 = ctx.r6.s64 + -29620;
	// addi r26,r7,-29644
	ctx.r26.s64 = ctx.r7.s64 + -29644;
	// addi r25,r8,-29540
	ctx.r25.s64 = ctx.r8.s64 + -29540;
	// addi r24,r9,-29548
	ctx.r24.s64 = ctx.r9.s64 + -29548;
	// addi r23,r10,4868
	ctx.r23.s64 = ctx.r10.s64 + 4868;
	// addi r29,r11,-29556
	ctx.r29.s64 = ctx.r11.s64 + -29556;
loc_82AF982C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8860
	ctx.lr = 0x82AF9834;
	sub_82AF8860(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AF9844;
	sub_82AF8808(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r6,260(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AF9858;
	sub_82AF8808(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8a20
	ctx.lr = 0x82AF9868;
	sub_82AF8A20(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r7,268(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 268);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,264(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// bl 0x82af8808
	ctx.lr = 0x82AF9880;
	sub_82AF8808(ctx, base);
	// lwz r11,272(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82af98ec
	if (ctx.cr6.eq) goto loc_82AF98EC;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AF9898;
	sub_82AF8808(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r4,272(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AF98AC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82af98ac
	if (!ctx.cr6.eq) goto loc_82AF98AC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AF98DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8930
	ctx.lr = 0x82AF98E8;
	sub_82AF8930(ctx, base);
	// b 0x82af98f0
	goto loc_82AF98F0;
loc_82AF98EC:
	// bl 0x82af95b8
	ctx.lr = 0x82AF98F0;
	sub_82AF95B8(ctx, base);
loc_82AF98F0:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r30,r30,276
	ctx.r30.s64 = ctx.r30.s64 + 276;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mulli r11,r11,276
	ctx.r11.s64 = ctx.r11.s64 * 276;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82af982c
	if (ctx.cr6.lt) goto loc_82AF982C;
loc_82AF990C:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af88c0
	ctx.lr = 0x82AF9918;
	sub_82AF88C0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76a8
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF9920"))) PPC_WEAK_FUNC(sub_82AF9920);
PPC_FUNC_IMPL(__imp__sub_82AF9920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7654
	ctx.lr = 0x82AF9928;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// bl 0x82af8860
	ctx.lr = 0x82AF9940;
	sub_82AF8860(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r19,r10,-29484
	ctx.r19.s64 = ctx.r10.s64 + -29484;
	// addi r21,r11,-29564
	ctx.r21.s64 = ctx.r11.s64 + -29564;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AF9960;
	sub_82AF8808(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af9608
	ctx.lr = 0x82AF9968;
	sub_82AF9608(ctx, base);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82af9a64
	if (!ctx.cr6.lt) goto loc_82AF9A64;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r29,r5,-29644
	ctx.r29.s64 = ctx.r5.s64 + -29644;
	// addi r27,r6,-29500
	ctx.r27.s64 = ctx.r6.s64 + -29500;
	// addi r26,r7,-29508
	ctx.r26.s64 = ctx.r7.s64 + -29508;
	// addi r25,r8,-19700
	ctx.r25.s64 = ctx.r8.s64 + -19700;
	// addi r24,r9,-29556
	ctx.r24.s64 = ctx.r9.s64 + -29556;
	// addi r23,r10,-29512
	ctx.r23.s64 = ctx.r10.s64 + -29512;
	// addi r22,r11,-29524
	ctx.r22.s64 = ctx.r11.s64 + -29524;
loc_82AF99BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8860
	ctx.lr = 0x82AF99C4;
	sub_82AF8860(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AF99D4;
	sub_82AF8808(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// lwz r7,-4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,-8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// bl 0x82af8990
	ctx.lr = 0x82AF99EC;
	sub_82AF8990(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AF9A00;
	sub_82AF8808(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AF9A14;
	sub_82AF8808(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AF9A28;
	sub_82AF8808(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AF9A3C;
	sub_82AF8808(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af95b8
	ctx.lr = 0x82AF9A44;
	sub_82AF95B8(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// addi r9,r30,-8
	ctx.r9.s64 = ctx.r30.s64 + -8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82af99bc
	if (ctx.cr6.lt) goto loc_82AF99BC;
loc_82AF9A64:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af88c0
	ctx.lr = 0x82AF9A70;
	sub_82AF88C0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76a4
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF9A78"))) PPC_WEAK_FUNC(sub_82AF9A78);
PPC_FUNC_IMPL(__imp__sub_82AF9A78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82AF9A80;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r17,r5
	ctx.r17.u64 = ctx.r5.u64;
	// mr r15,r6
	ctx.r15.u64 = ctx.r6.u64;
	// bl 0x82af8860
	ctx.lr = 0x82AF9A98;
	sub_82AF8860(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r14,r11,-29424
	ctx.r14.s64 = ctx.r11.s64 + -29424;
	// addi r16,r10,-29564
	ctx.r16.s64 = ctx.r10.s64 + -29564;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AF9AB8;
	sub_82AF8808(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af9608
	ctx.lr = 0x82AF9AC0;
	sub_82AF9608(ctx, base);
	// lwz r10,4(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82af9c44
	if (!ctx.cr6.lt) goto loc_82AF9C44;
	// lis r29,-32242
	ctx.r29.s64 = -2113011712;
	// lis r30,-32242
	ctx.r30.s64 = -2113011712;
	// addi r27,r11,12
	ctx.r27.s64 = ctx.r11.s64 + 12;
	// lis r28,-32242
	ctx.r28.s64 = -2113011712;
	// lis r3,-32242
	ctx.r3.s64 = -2113011712;
	// lis r4,-32242
	ctx.r4.s64 = -2113011712;
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// lis r6,-32229
	ctx.r6.s64 = -2112159744;
	// lis r7,-32230
	ctx.r7.s64 = -2112225280;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r21,r29,-29512
	ctx.r21.s64 = ctx.r29.s64 + -29512;
	// addi r20,r30,-29428
	ctx.r20.s64 = ctx.r30.s64 + -29428;
	// addi r28,r28,-29644
	ctx.r28.s64 = ctx.r28.s64 + -29644;
	// addi r30,r3,-29432
	ctx.r30.s64 = ctx.r3.s64 + -29432;
	// addi r29,r4,-29440
	ctx.r29.s64 = ctx.r4.s64 + -29440;
	// addi r26,r5,-29456
	ctx.r26.s64 = ctx.r5.s64 + -29456;
	// addi r25,r6,-4464
	ctx.r25.s64 = ctx.r6.s64 + -4464;
	// addi r19,r7,-30212
	ctx.r19.s64 = ctx.r7.s64 + -30212;
	// addi r18,r8,-30204
	ctx.r18.s64 = ctx.r8.s64 + -30204;
	// addi r24,r9,5008
	ctx.r24.s64 = ctx.r9.s64 + 5008;
	// addi r23,r10,-29464
	ctx.r23.s64 = ctx.r10.s64 + -29464;
	// addi r22,r11,-29472
	ctx.r22.s64 = ctx.r11.s64 + -29472;
loc_82AF9B3C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r11,r11,0,16,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFE00;
	// cmplwi cr6,r11,24576
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24576, ctx.xer);
	// beq cr6,0x82af9c24
	if (ctx.cr6.eq) goto loc_82AF9C24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8860
	ctx.lr = 0x82AF9B54;
	sub_82AF8860(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AF9B64;
	sub_82AF8808(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r6,-12(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + -12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AF9B78;
	sub_82AF8808(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r6,-8(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + -8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AF9B8C;
	sub_82AF8808(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82af9ba0
	if (!ctx.cr0.eq) goto loc_82AF9BA0;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
loc_82AF9BA0:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8a20
	ctx.lr = 0x82AF9BAC;
	sub_82AF8A20(ctx, base);
	// lwz r11,-4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rlwinm r9,r11,2,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r6,r11,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r5,r10,23,25,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x7F;
	// lwzx r7,r9,r26
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r26.u32);
	// bl 0x82fa24d8
	ctx.lr = 0x82AF9BD0;
	sub_82FA24D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8a20
	ctx.lr = 0x82AF9BE0;
	sub_82AF8A20(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82af9bf4
	if (!ctx.cr0.eq) goto loc_82AF9BF4;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
loc_82AF9BF4:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8a20
	ctx.lr = 0x82AF9C00;
	sub_82AF8A20(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r7,r11,16,19,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x1FFF;
	// rlwinm r6,r11,3,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// bl 0x82af8990
	ctx.lr = 0x82AF9C1C;
	sub_82AF8990(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af95b8
	ctx.lr = 0x82AF9C24;
	sub_82AF95B8(ctx, base);
loc_82AF9C24:
	// lwz r11,4(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// lwz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r27,-12
	ctx.r9.s64 = ctx.r27.s64 + -12;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82af9b3c
	if (ctx.cr6.lt) goto loc_82AF9B3C;
loc_82AF9C44:
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af88c0
	ctx.lr = 0x82AF9C50;
	sub_82AF88C0(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF9C58"))) PPC_WEAK_FUNC(sub_82AF9C58);
PPC_FUNC_IMPL(__imp__sub_82AF9C58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82AF9C60;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82af8860
	ctx.lr = 0x82AF9C74;
	sub_82AF8860(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r23,r10,-29392
	ctx.r23.s64 = ctx.r10.s64 + -29392;
	// addi r27,r11,-29564
	ctx.r27.s64 = ctx.r11.s64 + -29564;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AF9C94;
	sub_82AF8808(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af9608
	ctx.lr = 0x82AF9C9C;
	sub_82AF9608(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82af9d50
	if (!ctx.cr6.lt) goto loc_82AF9D50;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r28,r8,-29644
	ctx.r28.s64 = ctx.r8.s64 + -29644;
	// addi r26,r9,-29404
	ctx.r26.s64 = ctx.r9.s64 + -29404;
	// addi r25,r10,4868
	ctx.r25.s64 = ctx.r10.s64 + 4868;
	// addi r24,r11,-29508
	ctx.r24.s64 = ctx.r11.s64 + -29508;
loc_82AF9CD8:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82af9d34
	if (ctx.cr0.eq) goto loc_82AF9D34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8860
	ctx.lr = 0x82AF9CEC;
	sub_82AF8860(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AF9CFC;
	sub_82AF8808(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// subf r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srawi r6,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 3;
	// bl 0x82af8808
	ctx.lr = 0x82AF9D18;
	sub_82AF8808(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AF9D2C;
	sub_82AF8808(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af95b8
	ctx.lr = 0x82AF9D34;
	sub_82AF95B8(ctx, base);
loc_82AF9D34:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82af9cd8
	if (ctx.cr6.lt) goto loc_82AF9CD8;
loc_82AF9D50:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af88c0
	ctx.lr = 0x82AF9D5C;
	sub_82AF88C0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF9D64"))) PPC_WEAK_FUNC(sub_82AF9D64);
PPC_FUNC_IMPL(__imp__sub_82AF9D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF9D68"))) PPC_WEAK_FUNC(sub_82AF9D68);
PPC_FUNC_IMPL(__imp__sub_82AF9D68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7650
	ctx.lr = 0x82AF9D70;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// bl 0x82af8860
	ctx.lr = 0x82AF9D88;
	sub_82AF8860(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r18,r10,-29364
	ctx.r18.s64 = ctx.r10.s64 + -29364;
	// addi r19,r11,-29564
	ctx.r19.s64 = ctx.r11.s64 + -29564;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AF9DA8;
	sub_82AF8808(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af9608
	ctx.lr = 0x82AF9DB0;
	sub_82AF9608(ctx, base);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82af9eb0
	if (!ctx.cr6.lt) goto loc_82AF9EB0;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// lis r4,-32242
	ctx.r4.s64 = -2113011712;
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r29,r4,-29644
	ctx.r29.s64 = ctx.r4.s64 + -29644;
	// addi r27,r5,-29512
	ctx.r27.s64 = ctx.r5.s64 + -29512;
	// addi r26,r6,-4632
	ctx.r26.s64 = ctx.r6.s64 + -4632;
	// addi r25,r7,-29372
	ctx.r25.s64 = ctx.r7.s64 + -29372;
	// addi r22,r8,-30212
	ctx.r22.s64 = ctx.r8.s64 + -30212;
	// addi r21,r9,-30204
	ctx.r21.s64 = ctx.r9.s64 + -30204;
	// addi r24,r10,4868
	ctx.r24.s64 = ctx.r10.s64 + 4868;
	// addi r23,r11,-29384
	ctx.r23.s64 = ctx.r11.s64 + -29384;
loc_82AF9E0C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8860
	ctx.lr = 0x82AF9E14;
	sub_82AF8860(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AF9E24;
	sub_82AF8808(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r6,-8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AF9E38;
	sub_82AF8808(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// rlwinm. r11,r11,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82af9e4c
	if (!ctx.cr0.eq) goto loc_82AF9E4C;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
loc_82AF9E4C:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8a20
	ctx.lr = 0x82AF9E58;
	sub_82AF8A20(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r6,-4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AF9E6C;
	sub_82AF8808(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r7,r11,13,19,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1FFF;
	// rlwinm r6,r11,14,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x1;
	// bl 0x82af8990
	ctx.lr = 0x82AF9E88;
	sub_82AF8990(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af95b8
	ctx.lr = 0x82AF9E90;
	sub_82AF95B8(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// addi r9,r30,-8
	ctx.r9.s64 = ctx.r30.s64 + -8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82af9e0c
	if (ctx.cr6.lt) goto loc_82AF9E0C;
loc_82AF9EB0:
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af88c0
	ctx.lr = 0x82AF9EBC;
	sub_82AF88C0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76a0
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AF9EC4"))) PPC_WEAK_FUNC(sub_82AF9EC4);
PPC_FUNC_IMPL(__imp__sub_82AF9EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AF9EC8"))) PPC_WEAK_FUNC(sub_82AF9EC8);
PPC_FUNC_IMPL(__imp__sub_82AF9EC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7644
	ctx.lr = 0x82AF9ED0;
	__savegprlr_15(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// mr r16,r6
	ctx.r16.u64 = ctx.r6.u64;
	// bl 0x82af8860
	ctx.lr = 0x82AF9EE8;
	sub_82AF8860(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r15,r10,-29280
	ctx.r15.s64 = ctx.r10.s64 + -29280;
	// addi r17,r11,-29564
	ctx.r17.s64 = ctx.r11.s64 + -29564;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AF9F08;
	sub_82AF8808(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af9608
	ctx.lr = 0x82AF9F10;
	sub_82AF9608(ctx, base);
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r30,0(r20)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82afa080
	if (!ctx.cr6.lt) goto loc_82AFA080;
	// lis r29,-32242
	ctx.r29.s64 = -2113011712;
	// lis r28,-32242
	ctx.r28.s64 = -2113011712;
	// lis r3,-32230
	ctx.r3.s64 = -2112225280;
	// lis r4,-32230
	ctx.r4.s64 = -2112225280;
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r21,r29,-29284
	ctx.r21.s64 = ctx.r29.s64 + -29284;
	// addi r28,r28,-29644
	ctx.r28.s64 = ctx.r28.s64 + -29644;
	// addi r19,r3,-30212
	ctx.r19.s64 = ctx.r3.s64 + -30212;
	// addi r18,r4,-30204
	ctx.r18.s64 = ctx.r4.s64 + -30204;
	// addi r27,r5,-29296
	ctx.r27.s64 = ctx.r5.s64 + -29296;
	// addi r26,r6,-29304
	ctx.r26.s64 = ctx.r6.s64 + -29304;
	// addi r25,r7,-29316
	ctx.r25.s64 = ctx.r7.s64 + -29316;
	// addi r29,r8,-29324
	ctx.r29.s64 = ctx.r8.s64 + -29324;
	// addi r24,r9,-29336
	ctx.r24.s64 = ctx.r9.s64 + -29336;
	// addi r23,r10,-29344
	ctx.r23.s64 = ctx.r10.s64 + -29344;
	// addi r22,r11,14140
	ctx.r22.s64 = ctx.r11.s64 + 14140;
loc_82AF9F80:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8860
	ctx.lr = 0x82AF9F88;
	sub_82AF8860(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AF9F98;
	sub_82AF8808(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// rlwinm r11,r11,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r6,r11,r16
	ctx.r6.u64 = ctx.r11.u64 + ctx.r16.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AF9FB4;
	sub_82AF8808(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r6,r11,18,26,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3F;
	// bl 0x82af8808
	ctx.lr = 0x82AF9FCC;
	sub_82AF8808(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r11,30,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x7;
	// rlwinm r9,r11,27,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7;
	// rlwinm r8,r11,24,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x7;
	// rlwinm r11,r11,21,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x7;
	// lbzx r10,r10,r29
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r29.u32);
	// lbzx r9,r9,r29
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r29.u32);
	// lbzx r8,r8,r29
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r29.u32);
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// stb r8,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// bl 0x82af8a20
	ctx.lr = 0x82AFA018;
	sub_82AF8A20(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r5,r11,9,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFF;
	// bl 0x82fa24d8
	ctx.lr = 0x82AFA02C;
	sub_82FA24D8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8a20
	ctx.lr = 0x82AFA03C;
	sub_82AF8A20(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82afa050
	if (!ctx.cr0.eq) goto loc_82AFA050;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
loc_82AFA050:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8a20
	ctx.lr = 0x82AFA05C;
	sub_82AF8A20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af95b8
	ctx.lr = 0x82AFA064;
	sub_82AF95B8(ctx, base);
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82af9f80
	if (ctx.cr6.lt) goto loc_82AF9F80;
loc_82AFA080:
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af88c0
	ctx.lr = 0x82AFA08C;
	sub_82AF88C0(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82fa7694
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFA094"))) PPC_WEAK_FUNC(sub_82AFA094);
PPC_FUNC_IMPL(__imp__sub_82AFA094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFA098"))) PPC_WEAK_FUNC(sub_82AFA098);
PPC_FUNC_IMPL(__imp__sub_82AFA098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7644
	ctx.lr = 0x82AFA0A0;
	__savegprlr_15(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// bl 0x82af8860
	ctx.lr = 0x82AFA0B4;
	sub_82AF8860(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r15,r10,-29240
	ctx.r15.s64 = ctx.r10.s64 + -29240;
	// addi r16,r11,-29564
	ctx.r16.s64 = ctx.r11.s64 + -29564;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AFA0D4;
	sub_82AF8808(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af9608
	ctx.lr = 0x82AFA0DC;
	sub_82AF9608(ctx, base);
	// lwz r10,4(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82afa22c
	if (!ctx.cr6.lt) goto loc_82AFA22C;
	// lis r28,-32242
	ctx.r28.s64 = -2113011712;
	// lis r29,-32256
	ctx.r29.s64 = -2113929216;
	// lis r30,-32242
	ctx.r30.s64 = -2113011712;
	// lis r3,-32227
	ctx.r3.s64 = -2112028672;
	// lis r4,-32227
	ctx.r4.s64 = -2112028672;
	// lis r5,-32227
	ctx.r5.s64 = -2112028672;
	// lis r6,-32231
	ctx.r6.s64 = -2112290816;
	// lis r7,-32227
	ctx.r7.s64 = -2112028672;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r28,r28,-29644
	ctx.r28.s64 = ctx.r28.s64 + -29644;
	// addi r29,r29,24144
	ctx.r29.s64 = ctx.r29.s64 + 24144;
	// addi r30,r30,-29252
	ctx.r30.s64 = ctx.r30.s64 + -29252;
	// addi r20,r3,13976
	ctx.r20.s64 = ctx.r3.s64 + 13976;
	// addi r19,r4,13980
	ctx.r19.s64 = ctx.r4.s64 + 13980;
	// addi r18,r5,13984
	ctx.r18.s64 = ctx.r5.s64 + 13984;
	// addi r22,r6,32570
	ctx.r22.s64 = ctx.r6.s64 + 32570;
	// addi r17,r7,13988
	ctx.r17.s64 = ctx.r7.s64 + 13988;
	// addi r26,r8,-29296
	ctx.r26.s64 = ctx.r8.s64 + -29296;
	// addi r25,r9,-29304
	ctx.r25.s64 = ctx.r9.s64 + -29304;
	// addi r24,r10,-29336
	ctx.r24.s64 = ctx.r10.s64 + -29336;
	// addi r23,r11,-29268
	ctx.r23.s64 = ctx.r11.s64 + -29268;
loc_82AFA158:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8860
	ctx.lr = 0x82AFA160;
	sub_82AF8860(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AFA170;
	sub_82AF8808(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r6,r11,12,28,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xF;
	// bl 0x82af8808
	ctx.lr = 0x82AFA188;
	sub_82AF8808(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// bl 0x82fa24d8
	ctx.lr = 0x82AFA198;
	sub_82FA24D8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8a20
	ctx.lr = 0x82AFA1A8;
	sub_82AF8A20(ctx, base);
	// lhz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// mr r8,r17
	ctx.r8.u64 = ctx.r17.u64;
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82afa1bc
	if (!ctx.cr0.eq) goto loc_82AFA1BC;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
loc_82AFA1BC:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// bne 0x82afa1cc
	if (!ctx.cr0.eq) goto loc_82AFA1CC;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
loc_82AFA1CC:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// bne 0x82afa1dc
	if (!ctx.cr0.eq) goto loc_82AFA1DC;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
loc_82AFA1DC:
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// bne 0x82afa1ec
	if (!ctx.cr0.eq) goto loc_82AFA1EC;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
loc_82AFA1EC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fa24d8
	ctx.lr = 0x82AFA1F8;
	sub_82FA24D8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8a20
	ctx.lr = 0x82AFA208;
	sub_82AF8A20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af95b8
	ctx.lr = 0x82AFA210;
	sub_82AF95B8(ctx, base);
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82afa158
	if (ctx.cr6.lt) goto loc_82AFA158;
loc_82AFA22C:
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af88c0
	ctx.lr = 0x82AFA238;
	sub_82AF88C0(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82fa7694
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFA240"))) PPC_WEAK_FUNC(sub_82AFA240);
PPC_FUNC_IMPL(__imp__sub_82AFA240) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa764c
	ctx.lr = 0x82AFA248;
	__savegprlr_17(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r17,r5
	ctx.r17.u64 = ctx.r5.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x82af8860
	ctx.lr = 0x82AFA264;
	sub_82AF8860(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r19,r10,-29128
	ctx.r19.s64 = ctx.r10.s64 + -29128;
	// addi r27,r11,-29564
	ctx.r27.s64 = ctx.r11.s64 + -29564;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AFA284;
	sub_82AF8808(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af9608
	ctx.lr = 0x82AFA28C;
	sub_82AF9608(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r26,r10,-29644
	ctx.r26.s64 = ctx.r10.s64 + -29644;
	// addi r18,r11,-29336
	ctx.r18.s64 = ctx.r11.s64 + -29336;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mulli r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 * 20;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82afa3ac
	if (!ctx.cr6.lt) goto loc_82AFA3AC;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r29,r6,-29656
	ctx.r29.s64 = ctx.r6.s64 + -29656;
	// addi r25,r7,-29136
	ctx.r25.s64 = ctx.r7.s64 + -29136;
	// addi r24,r8,-29144
	ctx.r24.s64 = ctx.r8.s64 + -29144;
	// addi r23,r9,-29152
	ctx.r23.s64 = ctx.r9.s64 + -29152;
	// addi r22,r10,-29160
	ctx.r22.s64 = ctx.r10.s64 + -29160;
	// addi r21,r11,-29168
	ctx.r21.s64 = ctx.r11.s64 + -29168;
loc_82AFA2E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8860
	ctx.lr = 0x82AFA2F0;
	sub_82AF8860(ctx, base);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AFA300;
	sub_82AF8808(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lbz r6,-8(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + -8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AFA314;
	sub_82AF8808(ctx, base);
	// lfs f1,-4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AFA330;
	sub_82AF8808(ctx, base);
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AFA34C;
	sub_82AF8808(ctx, base);
	// lfs f1,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AFA368;
	sub_82AF8808(ctx, base);
	// lfs f1,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AFA384;
	sub_82AF8808(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af95b8
	ctx.lr = 0x82AFA38C;
	sub_82AF95B8(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// addi r9,r30,-8
	ctx.r9.s64 = ctx.r30.s64 + -8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82afa2e8
	if (ctx.cr6.lt) goto loc_82AFA2E8;
loc_82AFA3AC:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af88c0
	ctx.lr = 0x82AFA3B8;
	sub_82AF88C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8860
	ctx.lr = 0x82AFA3C0;
	sub_82AF8860(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r23,r11,-29180
	ctx.r23.s64 = ctx.r11.s64 + -29180;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AFA3D8;
	sub_82AF8808(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af9608
	ctx.lr = 0x82AFA3E0;
	sub_82AF9608(ctx, base);
	// lwz r10,4(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82afa4b0
	if (!ctx.cr6.lt) goto loc_82AFA4B0;
	// addi r30,r11,2
	ctx.r30.s64 = ctx.r11.s64 + 2;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r29,r8,-29184
	ctx.r29.s64 = ctx.r8.s64 + -29184;
	// addi r28,r9,-29192
	ctx.r28.s64 = ctx.r9.s64 + -29192;
	// addi r25,r10,24280
	ctx.r25.s64 = ctx.r10.s64 + 24280;
	// addi r24,r11,-29196
	ctx.r24.s64 = ctx.r11.s64 + -29196;
loc_82AFA41C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8860
	ctx.lr = 0x82AFA424;
	sub_82AF8860(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AFA434;
	sub_82AF8808(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lbz r6,-2(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + -2);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AFA448;
	sub_82AF8808(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lbz r6,-1(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + -1);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AFA45C;
	sub_82AF8808(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lbz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AFA470;
	sub_82AF8808(ctx, base);
	// lbz r11,1(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsb r6,r11
	ctx.r6.s64 = ctx.r11.s8;
	// bl 0x82af8808
	ctx.lr = 0x82AFA488;
	sub_82AF8808(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af95b8
	ctx.lr = 0x82AFA490;
	sub_82AF95B8(ctx, base);
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r30,-2
	ctx.r9.s64 = ctx.r30.s64 + -2;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82afa41c
	if (ctx.cr6.lt) goto loc_82AFA41C;
loc_82AFA4B0:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af88c0
	ctx.lr = 0x82AFA4BC;
	sub_82AF88C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8860
	ctx.lr = 0x82AFA4C4;
	sub_82AF8860(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r25,r11,-29212
	ctx.r25.s64 = ctx.r11.s64 + -29212;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AFA4DC;
	sub_82AF8808(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af9608
	ctx.lr = 0x82AFA4E4;
	sub_82AF9608(ctx, base);
	// lwz r11,4(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r30,0(r17)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82afa570
	if (!ctx.cr6.lt) goto loc_82AFA570;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r29,r10,1000
	ctx.r29.s64 = ctx.r10.s64 + 1000;
	// addi r28,r11,-29220
	ctx.r28.s64 = ctx.r11.s64 + -29220;
loc_82AFA50C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8860
	ctx.lr = 0x82AFA514;
	sub_82AF8860(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AFA524;
	sub_82AF8808(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lbz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AFA538;
	sub_82AF8808(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lbz r6,1(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AFA54C;
	sub_82AF8808(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af95b8
	ctx.lr = 0x82AFA554;
	sub_82AF95B8(ctx, base);
	// lwz r11,4(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// lwz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82afa50c
	if (ctx.cr6.lt) goto loc_82AFA50C;
loc_82AFA570:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af88c0
	ctx.lr = 0x82AFA57C;
	sub_82AF88C0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa769c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFA584"))) PPC_WEAK_FUNC(sub_82AFA584);
PPC_FUNC_IMPL(__imp__sub_82AFA584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFA588"))) PPC_WEAK_FUNC(sub_82AFA588);
PPC_FUNC_IMPL(__imp__sub_82AFA588) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7650
	ctx.lr = 0x82AFA590;
	__savegprlr_18(ctx, base);
	// stfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82afa5bc
	if (!ctx.cr6.eq) goto loc_82AFA5BC;
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82afa7fc
	if (ctx.cr6.eq) goto loc_82AFA7FC;
loc_82AFA5BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8860
	ctx.lr = 0x82AFA5C4;
	sub_82AF8860(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r18,r11,-29100
	ctx.r18.s64 = ctx.r11.s64 + -29100;
	// addi r20,r10,-29564
	ctx.r20.s64 = ctx.r10.s64 + -29564;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AFA5E4;
	sub_82AF8808(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r21,r11,-29644
	ctx.r21.s64 = ctx.r11.s64 + -29644;
	// lwz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82afa610
	if (ctx.cr6.eq) goto loc_82AFA610;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r5,r11,13048
	ctx.r5.s64 = ctx.r11.s64 + 13048;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AFA610;
	sub_82AF8808(ctx, base);
loc_82AFA610:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af9608
	ctx.lr = 0x82AFA618;
	sub_82AF9608(ctx, base);
	// lwz r10,4(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// mulli r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 * 28;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82afa7f0
	if (!ctx.cr6.lt) goto loc_82AFA7F0;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lfs f31,11976(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11976);
	ctx.f31.f64 = double(temp.f32);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r25,r4,22544
	ctx.r25.s64 = ctx.r4.s64 + 22544;
	// addi r28,r5,-29632
	ctx.r28.s64 = ctx.r5.s64 + -29632;
	// addi r24,r6,-19700
	ctx.r24.s64 = ctx.r6.s64 + -19700;
	// addi r23,r7,-29556
	ctx.r23.s64 = ctx.r7.s64 + -29556;
	// addi r22,r8,-29112
	ctx.r22.s64 = ctx.r8.s64 + -29112;
	// addi r27,r9,-29512
	ctx.r27.s64 = ctx.r9.s64 + -29512;
	// addi r26,r10,4868
	ctx.r26.s64 = ctx.r10.s64 + 4868;
	// addi r29,r11,-21084
	ctx.r29.s64 = ctx.r11.s64 + -21084;
loc_82AFA67C:
	// lwz r11,-8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82afa7d0
	if (ctx.cr6.eq) goto loc_82AFA7D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8860
	ctx.lr = 0x82AFA690;
	sub_82AF8860(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AFA6A0;
	sub_82AF8808(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lwz r6,-8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AFA6B4;
	sub_82AF8808(ctx, base);
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmadds f1,f13,f31,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 + ctx.f0.f64));
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x82af8808
	ctx.lr = 0x82AFA6FC;
	sub_82AF8808(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82afa74c
	if (ctx.cr6.eq) goto loc_82AFA74C;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f13,104(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmadds f1,f13,f31,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 + ctx.f0.f64));
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x82af8808
	ctx.lr = 0x82AFA74C;
	sub_82AF8808(ctx, base);
loc_82AFA74C:
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// beq cr6,0x82afa768
	if (ctx.cr6.eq) goto loc_82AFA768;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AFA768;
	sub_82AF8808(ctx, base);
loc_82AFA768:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AFA77C;
	sub_82AF8808(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82afa7cc
	if (ctx.cr6.eq) goto loc_82AFA7CC;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AFA794;
	sub_82AF8808(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AFA7BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8930
	ctx.lr = 0x82AFA7C8;
	sub_82AF8930(ctx, base);
	// b 0x82afa7d0
	goto loc_82AFA7D0;
loc_82AFA7CC:
	// bl 0x82af95b8
	ctx.lr = 0x82AFA7D0;
	sub_82AF95B8(ctx, base);
loc_82AFA7D0:
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// lwz r10,0(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r30,-8
	ctx.r10.s64 = ctx.r30.s64 + -8;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82afa67c
	if (ctx.cr6.lt) goto loc_82AFA67C;
loc_82AFA7F0:
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af88c0
	ctx.lr = 0x82AFA7FC;
	sub_82AF88C0(ctx, base);
loc_82AFA7FC:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x82fa76a0
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFA808"))) PPC_WEAK_FUNC(sub_82AFA808);
PPC_FUNC_IMPL(__imp__sub_82AFA808) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82AFA810;
	__savegprlr_14(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r5,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r5.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82afa840
	if (!ctx.cr6.eq) goto loc_82AFA840;
	// lwz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82afabfc
	if (ctx.cr6.eq) goto loc_82AFABFC;
loc_82AFA840:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8860
	ctx.lr = 0x82AFA848;
	sub_82AF8860(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r29,r11,-29052
	ctx.r29.s64 = ctx.r11.s64 + -29052;
	// addi r15,r10,-29564
	ctx.r15.s64 = ctx.r10.s64 + -29564;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AFA86C;
	sub_82AF8808(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,-29644
	ctx.r4.s64 = ctx.r11.s64 + -29644;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// lwz r11,124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82afa898
	if (ctx.cr6.eq) goto loc_82AFA898;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,13048
	ctx.r5.s64 = ctx.r11.s64 + 13048;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AFA898;
	sub_82AF8808(ctx, base);
loc_82AFA898:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af9608
	ctx.lr = 0x82AFA8A0;
	sub_82AF9608(ctx, base);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82afabf0
	if (!ctx.cr6.lt) goto loc_82AFABF0;
	// addi r24,r11,8
	ctx.r24.s64 = ctx.r11.s64 + 8;
	// lis r26,-32242
	ctx.r26.s64 = -2113011712;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r10,r26,-29632
	ctx.r10.s64 = ctx.r26.s64 + -29632;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r25,-32255
	ctx.r25.s64 = -2113863680;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lis r27,-32242
	ctx.r27.s64 = -2113011712;
	// lfs f31,11976(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11976);
	ctx.f31.f64 = double(temp.f32);
	// lis r28,-32242
	ctx.r28.s64 = -2113011712;
	// lis r29,-32242
	ctx.r29.s64 = -2113011712;
	// lis r30,-32251
	ctx.r30.s64 = -2113601536;
	// lis r3,-32242
	ctx.r3.s64 = -2113011712;
	// lis r4,-32242
	ctx.r4.s64 = -2113011712;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r6,-31975
	ctx.r6.s64 = -2095513600;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r9,r9,-29512
	ctx.r9.s64 = ctx.r9.s64 + -29512;
	// addi r14,r25,22544
	ctx.r14.s64 = ctx.r25.s64 + 22544;
	// addi r25,r27,-29432
	ctx.r25.s64 = ctx.r27.s64 + -29432;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r23,r28,-29060
	ctx.r23.s64 = ctx.r28.s64 + -29060;
	// addi r22,r29,-29456
	ctx.r22.s64 = ctx.r29.s64 + -29456;
	// addi r21,r30,3740
	ctx.r21.s64 = ctx.r30.s64 + 3740;
	// addi r20,r3,-29068
	ctx.r20.s64 = ctx.r3.s64 + -29068;
	// addi r19,r4,-29076
	ctx.r19.s64 = ctx.r4.s64 + -29076;
	// addi r18,r5,26200
	ctx.r18.s64 = ctx.r5.s64 + 26200;
	// addi r17,r6,2760
	ctx.r17.s64 = ctx.r6.s64 + 2760;
	// addi r26,r7,-29088
	ctx.r26.s64 = ctx.r7.s64 + -29088;
	// addi r27,r8,3960
	ctx.r27.s64 = ctx.r8.s64 + 3960;
	// addi r28,r10,4868
	ctx.r28.s64 = ctx.r10.s64 + 4868;
	// addi r16,r11,-21136
	ctx.r16.s64 = ctx.r11.s64 + -21136;
loc_82AFA944:
	// lwz r11,-8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82afabc8
	if (ctx.cr6.eq) goto loc_82AFABC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8860
	ctx.lr = 0x82AFA958;
	sub_82AF8860(ctx, base);
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AFA968;
	sub_82AF8808(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r6,-8(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + -8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AFA980;
	sub_82AF8808(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82afa9d0
	if (ctx.cr6.eq) goto loc_82AFA9D0;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f13,104(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmadds f1,f13,f31,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 + ctx.f0.f64));
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x82af8808
	ctx.lr = 0x82AFA9D0;
	sub_82AF8808(ctx, base);
loc_82AFA9D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af9608
	ctx.lr = 0x82AFA9D8;
	sub_82AF9608(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8860
	ctx.lr = 0x82AFA9E0;
	sub_82AF8860(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AFA9F0;
	sub_82AF8808(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AFA9FC;
	sub_82AF8808(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r4,-4(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + -4);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AFAA10:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82afaa10
	if (!ctx.cr6.eq) goto loc_82AFAA10;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AFAA40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8930
	ctx.lr = 0x82AFAA4C;
	sub_82AF8930(ctx, base);
	// lwz r10,8(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// mulli r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 * 28;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82afabbc
	if (!ctx.cr6.lt) goto loc_82AFABBC;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
loc_82AFAA68:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82afab9c
	if (ctx.cr6.eq) goto loc_82AFAB9C;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82afab9c
	if (ctx.cr6.eq) goto loc_82AFAB9C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,56
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 56, ctx.xer);
	// bge cr6,0x82afab9c
	if (!ctx.cr6.lt) goto loc_82AFAB9C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8860
	ctx.lr = 0x82AFAA94;
	sub_82AF8860(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AFAAA4;
	sub_82AF8808(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r6,-4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AFAAB8;
	sub_82AF8808(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r11,r17
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r17.u32);
	// bl 0x82af8a20
	ctx.lr = 0x82AFAAD0;
	sub_82AF8A20(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AFAAE4;
	sub_82AF8808(ctx, base);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AFAAF8;
	sub_82AF8808(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82afab10
	if (!ctx.cr6.eq) goto loc_82AFAB10;
	// bl 0x82af95b8
	ctx.lr = 0x82AFAB0C;
	sub_82AF95B8(ctx, base);
	// b 0x82afab9c
	goto loc_82AFAB9C;
loc_82AFAB10:
	// bl 0x82af9608
	ctx.lr = 0x82AFAB14;
	sub_82AF9608(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r29,12(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x82afab84
	goto loc_82AFAB84;
loc_82AFAB28:
	// bl 0x82af8860
	ctx.lr = 0x82AFAB2C;
	sub_82AF8860(ctx, base);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AFAB3C;
	sub_82AF8808(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// rlwinm r10,r11,2,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rlwinm r5,r11,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// lwzx r6,r10,r22
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r22.u32);
	// bl 0x82fa24d8
	ctx.lr = 0x82AFAB58;
	sub_82FA24D8(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8a20
	ctx.lr = 0x82AFAB68;
	sub_82AF8A20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af95b8
	ctx.lr = 0x82AFAB70;
	sub_82AF95B8(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82AFAB84:
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// blt cr6,0x82afab28
	if (ctx.cr6.lt) goto loc_82AFAB28;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82af88c0
	ctx.lr = 0x82AFAB98;
	sub_82AF88C0(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82AFAB9C:
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r30,-4
	ctx.r10.s64 = ctx.r30.s64 + -4;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82afaa68
	if (ctx.cr6.lt) goto loc_82AFAA68;
loc_82AFABBC:
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af88c0
	ctx.lr = 0x82AFABC8;
	sub_82AF88C0(ctx, base);
loc_82AFABC8:
	// lwz r11,324(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// addi r24,r24,24
	ctx.r24.s64 = ctx.r24.s64 + 24;
	// addi r9,r24,-8
	ctx.r9.s64 = ctx.r24.s64 + -8;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mulli r11,r8,24
	ctx.r11.s64 = ctx.r8.s64 * 24;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82afa944
	if (ctx.cr6.lt) goto loc_82AFA944;
	// lwz r29,92(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_82AFABF0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af88c0
	ctx.lr = 0x82AFABFC;
	sub_82AF88C0(ctx, base);
loc_82AFABFC:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFAC08"))) PPC_WEAK_FUNC(sub_82AFAC08);
PPC_FUNC_IMPL(__imp__sub_82AFAC08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82AFAC10;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x82af8860
	ctx.lr = 0x82AFAC30;
	sub_82AF8860(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r27,r11,26200
	ctx.r27.s64 = ctx.r11.s64 + 26200;
	// addi r4,r10,-29564
	ctx.r4.s64 = ctx.r10.s64 + -29564;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AFAC4C;
	sub_82AF8808(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82afac68
	if (ctx.cr6.eq) goto loc_82AFAC68;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-29032
	ctx.r4.s64 = ctx.r11.s64 + -29032;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8a20
	ctx.lr = 0x82AFAC68;
	sub_82AF8A20(ctx, base);
loc_82AFAC68:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r10,r10,3060
	ctx.r10.s64 = ctx.r10.s64 + 3060;
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addi r4,r9,4200
	ctx.r4.s64 = ctx.r9.s64 + 4200;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82af8a20
	ctx.lr = 0x82AFAC8C;
	sub_82AF8A20(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r29,r11,-29644
	ctx.r29.s64 = ctx.r11.s64 + -29644;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x82afad00
	if (ctx.cr6.eq) goto loc_82AFAD00;
	// lhz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r10,r10,2984
	ctx.r10.s64 = ctx.r10.s64 + 2984;
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82af8a20
	ctx.lr = 0x82AFACC0;
	sub_82AF8A20(ctx, base);
	// lhz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// beq cr6,0x82aface0
	if (ctx.cr6.eq) goto loc_82AFACE0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,-29076
	ctx.r5.s64 = ctx.r11.s64 + -29076;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AFACE0;
	sub_82AF8808(ctx, base);
loc_82AFACE0:
	// lhz r6,6(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// beq cr6,0x82afad00
	if (ctx.cr6.eq) goto loc_82AFAD00;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,-29040
	ctx.r5.s64 = ctx.r11.s64 + -29040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AFAD00;
	sub_82AF8808(ctx, base);
loc_82AFAD00:
	// lhz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// beq cr6,0x82afad20
	if (ctx.cr6.eq) goto loc_82AFAD20;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,-21780
	ctx.r5.s64 = ctx.r11.s64 + -21780;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AFAD20;
	sub_82AF8808(ctx, base);
loc_82AFAD20:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x82afad84
	if (!ctx.cr6.eq) goto loc_82AFAD84;
	// lhz r29,10(r30)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r30.u32 + 10);
	// bl 0x82af9608
	ctx.lr = 0x82AFAD38;
	sub_82AF9608(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// beq cr6,0x82afad74
	if (ctx.cr6.eq) goto loc_82AFAD74;
	// addi r30,r11,-8
	ctx.r30.s64 = ctx.r11.s64 + -8;
loc_82AFAD4C:
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwzu r11,8(r30)
	ea = 8 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r6,r10,r28
	ctx.r6.u64 = ctx.r10.u64 + ctx.r28.u64;
	// add r7,r11,r28
	ctx.r7.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82afac08
	ctx.lr = 0x82AFAD6C;
	sub_82AFAC08(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82afad4c
	if (!ctx.cr0.eq) goto loc_82AFAD4C;
loc_82AFAD74:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af88c0
	ctx.lr = 0x82AFAD80;
	sub_82AF88C0(ctx, base);
	// b 0x82afad88
	goto loc_82AFAD88;
loc_82AFAD84:
	// bl 0x82af95b8
	ctx.lr = 0x82AFAD88;
	sub_82AF95B8(ctx, base);
loc_82AFAD88:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFAD90"))) PPC_WEAK_FUNC(sub_82AFAD90);
PPC_FUNC_IMPL(__imp__sub_82AFAD90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82AFAD98;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x82af8860
	ctx.lr = 0x82AFADB4;
	sub_82AF8860(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r28,r11,-29004
	ctx.r28.s64 = ctx.r11.s64 + -29004;
	// addi r4,r10,-29564
	ctx.r4.s64 = ctx.r10.s64 + -29564;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AFADD0;
	sub_82AF8808(ctx, base);
	// lhz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82afae3c
	if (ctx.cr0.eq) goto loc_82AFAE3C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lhz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lhz r6,6(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// addi r11,r11,-29008
	ctx.r11.s64 = ctx.r11.s64 + -29008;
	// addi r4,r9,-29016
	ctx.r4.s64 = ctx.r9.s64 + -29016;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x82fa24d8
	ctx.lr = 0x82AFAE04;
	sub_82FA24D8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,3740
	ctx.r4.s64 = ctx.r11.s64 + 3740;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8a20
	ctx.lr = 0x82AFAE18;
	sub_82AF8A20(ctx, base);
	// lhz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// beq cr6,0x82afae3c
	if (ctx.cr6.eq) goto loc_82AFAE3C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r5,r11,-29024
	ctx.r5.s64 = ctx.r11.s64 + -29024;
	// addi r4,r10,-29644
	ctx.r4.s64 = ctx.r10.s64 + -29644;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AFAE3C;
	sub_82AF8808(ctx, base);
loc_82AFAE3C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af9608
	ctx.lr = 0x82AFAE44;
	sub_82AF9608(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// add r7,r11,r29
	ctx.r7.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r6,r10,r29
	ctx.r6.u64 = ctx.r10.u64 + ctx.r29.u64;
	// bl 0x82afac08
	ctx.lr = 0x82AFAE64;
	sub_82AFAC08(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af88c0
	ctx.lr = 0x82AFAE70;
	sub_82AF88C0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFAE78"))) PPC_WEAK_FUNC(sub_82AFAE78);
PPC_FUNC_IMPL(__imp__sub_82AFAE78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82AFAE80;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82afaf1c
	if (ctx.cr6.lt) goto loc_82AFAF1C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r31,388(r5)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 388);
	// bl 0x82af8860
	ctx.lr = 0x82AFAEA4;
	sub_82AF8860(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r27,r11,-28992
	ctx.r27.s64 = ctx.r11.s64 + -28992;
	// addi r4,r10,-29564
	ctx.r4.s64 = ctx.r10.s64 + -29564;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AFAEC0;
	sub_82AF8808(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82af9608
	ctx.lr = 0x82AFAEC8;
	sub_82AF9608(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82afaf10
	if (ctx.cr6.eq) goto loc_82AFAF10;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r28,r11,r31
	ctx.r28.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82afaf10
	if (!ctx.cr6.gt) goto loc_82AFAF10;
loc_82AFAEE8:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82afad90
	ctx.lr = 0x82AFAEFC;
	sub_82AFAD90(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,20
	ctx.r28.s64 = ctx.r28.s64 + 20;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82afaee8
	if (ctx.cr6.lt) goto loc_82AFAEE8;
loc_82AFAF10:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82af88c0
	ctx.lr = 0x82AFAF1C;
	sub_82AF88C0(ctx, base);
loc_82AFAF1C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFAF24"))) PPC_WEAK_FUNC(sub_82AFAF24);
PPC_FUNC_IMPL(__imp__sub_82AFAF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFAF28"))) PPC_WEAK_FUNC(sub_82AFAF28);
PPC_FUNC_IMPL(__imp__sub_82AFAF28) {
	PPC_FUNC_PROLOGUE();
	// b 0x82af9660
	sub_82AF9660(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFAF2C"))) PPC_WEAK_FUNC(sub_82AFAF2C);
PPC_FUNC_IMPL(__imp__sub_82AFAF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFAF30"))) PPC_WEAK_FUNC(sub_82AFAF30);
PPC_FUNC_IMPL(__imp__sub_82AFAF30) {
	PPC_FUNC_PROLOGUE();
	// b 0x82af9718
	sub_82AF9718(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFAF34"))) PPC_WEAK_FUNC(sub_82AFAF34);
PPC_FUNC_IMPL(__imp__sub_82AFAF34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFAF38"))) PPC_WEAK_FUNC(sub_82AFAF38);
PPC_FUNC_IMPL(__imp__sub_82AFAF38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82AFAF40;
	__savegprlr_27(ctx, base);
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// lis r10,20042
	ctx.r10.s64 = 1313472512;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// stw r10,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82afaf64
	if (!ctx.cr6.lt) goto loc_82AFAF64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r11.u32);
	// b 0x82afb234
	goto loc_82AFB234;
loc_82AFAF64:
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lis r6,-19687
	ctx.r6.s64 = -1290207232;
	// lwz r9,56(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r11,1
	ctx.r11.s64 = 1;
	// mulli r7,r10,40
	ctx.r7.s64 = ctx.r10.s64 * 40;
	// ori r10,r6,62707
	ctx.r10.u64 = ctx.r6.u64 | 62707;
	// extsw r29,r9
	ctx.r29.s64 = ctx.r9.s32;
	// add r28,r7,r9
	ctx.r28.u64 = ctx.r7.u64 + ctx.r9.u64;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// b 0x82afb010
	goto loc_82AFB010;
loc_82AFAF8C:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82afafcc
	if (ctx.cr6.eq) goto loc_82AFAFCC;
	// lbz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82afafcc
	if (ctx.cr0.eq) goto loc_82AFAFCC;
loc_82AFAFA4:
	// rldicl r31,r11,45,19
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u64, 45) & 0x1FFFFFFFFFFF;
	// mulld r7,r11,r10
	ctx.r7.s64 = ctx.r11.s64 * ctx.r10.s64;
	// clrldi r6,r9,56
	ctx.r6.u64 = ctx.r9.u64 & 0xFF;
	// lbzu r9,1(r30)
	ea = 1 + ctx.r30.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + ctx.r31.u64;
	// rldicl r11,r11,17,47
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 17) & 0x1FFFF;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// extsb. r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// xor r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 ^ ctx.r11.u64;
	// bne 0x82afafa4
	if (!ctx.cr0.eq) goto loc_82AFAFA4;
loc_82AFAFCC:
	// addi r30,r29,32
	ctx.r30.s64 = ctx.r29.s64 + 32;
	// cmpwi cr6,r29,-32
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -32, ctx.xer);
	// beq cr6,0x82afb00c
	if (ctx.cr6.eq) goto loc_82AFB00C;
	// lbz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82afb00c
	if (ctx.cr0.eq) goto loc_82AFB00C;
loc_82AFAFE4:
	// rldicl r31,r11,45,19
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u64, 45) & 0x1FFFFFFFFFFF;
	// mulld r7,r11,r10
	ctx.r7.s64 = ctx.r11.s64 * ctx.r10.s64;
	// clrldi r6,r9,56
	ctx.r6.u64 = ctx.r9.u64 & 0xFF;
	// lbzu r9,1(r30)
	ea = 1 + ctx.r30.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + ctx.r31.u64;
	// rldicl r11,r11,17,47
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 17) & 0x1FFFF;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// extsb. r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// xor r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 ^ ctx.r11.u64;
	// bne 0x82afafe4
	if (!ctx.cr0.eq) goto loc_82AFAFE4;
loc_82AFB00C:
	// addi r29,r29,40
	ctx.r29.s64 = ctx.r29.s64 + 40;
loc_82AFB010:
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82afaf8c
	if (ctx.cr6.lt) goto loc_82AFAF8C;
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r7,32(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// extsw r29,r7
	ctx.r29.s64 = ctx.r7.s32;
	// add r28,r9,r7
	ctx.r28.u64 = ctx.r9.u64 + ctx.r7.u64;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x82afb0f8
	if (!ctx.cr6.lt) goto loc_82AFB0F8;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// addi r27,r9,32570
	ctx.r27.s64 = ctx.r9.s64 + 32570;
loc_82AFB03C:
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x82afb050
	if (!ctx.cr6.eq) goto loc_82AFB050;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// b 0x82afb058
	goto loc_82AFB058;
loc_82AFB050:
	// lwz r7,44(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// add r30,r7,r9
	ctx.r30.u64 = ctx.r7.u64 + ctx.r9.u64;
loc_82AFB058:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82afb094
	if (ctx.cr6.eq) goto loc_82AFB094;
	// lbz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82afb094
	if (ctx.cr0.eq) goto loc_82AFB094;
loc_82AFB06C:
	// rldicl r31,r11,45,19
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u64, 45) & 0x1FFFFFFFFFFF;
	// mulld r7,r11,r10
	ctx.r7.s64 = ctx.r11.s64 * ctx.r10.s64;
	// clrldi r6,r9,56
	ctx.r6.u64 = ctx.r9.u64 & 0xFF;
	// lbzu r9,1(r30)
	ea = 1 + ctx.r30.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + ctx.r31.u64;
	// rldicl r11,r11,17,47
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 17) & 0x1FFFF;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// extsb. r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// xor r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 ^ ctx.r11.u64;
	// bne 0x82afb06c
	if (!ctx.cr0.eq) goto loc_82AFB06C;
loc_82AFB094:
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x82afb0a8
	if (!ctx.cr6.eq) goto loc_82AFB0A8;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// b 0x82afb0b0
	goto loc_82AFB0B0;
loc_82AFB0A8:
	// lwz r7,44(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// add r30,r7,r9
	ctx.r30.u64 = ctx.r7.u64 + ctx.r9.u64;
loc_82AFB0B0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82afb0ec
	if (ctx.cr6.eq) goto loc_82AFB0EC;
	// lbz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82afb0ec
	if (ctx.cr0.eq) goto loc_82AFB0EC;
loc_82AFB0C4:
	// rldicl r31,r11,45,19
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u64, 45) & 0x1FFFFFFFFFFF;
	// mulld r7,r11,r10
	ctx.r7.s64 = ctx.r11.s64 * ctx.r10.s64;
	// clrldi r6,r9,56
	ctx.r6.u64 = ctx.r9.u64 & 0xFF;
	// lbzu r9,1(r30)
	ea = 1 + ctx.r30.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + ctx.r31.u64;
	// rldicl r11,r11,17,47
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 17) & 0x1FFFF;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// extsb. r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// xor r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 ^ ctx.r11.u64;
	// bne 0x82afb0c4
	if (!ctx.cr0.eq) goto loc_82AFB0C4;
loc_82AFB0EC:
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82afb03c
	if (ctx.cr6.lt) goto loc_82AFB03C;
loc_82AFB0F8:
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mulli r9,r9,276
	ctx.r9.s64 = ctx.r9.s64 * 276;
	// extsw r30,r7
	ctx.r30.s64 = ctx.r7.s32;
	// add r29,r9,r7
	ctx.r29.u64 = ctx.r9.u64 + ctx.r7.u64;
	// b 0x82afb170
	goto loc_82AFB170;
loc_82AFB110:
	// lwz r31,272(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82afb16c
	if (ctx.cr6.eq) goto loc_82AFB16C;
	// lbz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// b 0x82afb164
	goto loc_82AFB164;
loc_82AFB124:
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// beq cr6,0x82afb160
	if (ctx.cr6.eq) goto loc_82AFB160;
	// cmpwi cr6,r9,10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 10, ctx.xer);
	// beq cr6,0x82afb160
	if (ctx.cr6.eq) goto loc_82AFB160;
	// cmpwi cr6,r9,13
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 13, ctx.xer);
	// beq cr6,0x82afb160
	if (ctx.cr6.eq) goto loc_82AFB160;
	// cmpwi cr6,r9,9
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 9, ctx.xer);
	// beq cr6,0x82afb160
	if (ctx.cr6.eq) goto loc_82AFB160;
	// rldicl r6,r11,45,19
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 45) & 0x1FFFFFFFFFFF;
	// mulld r9,r11,r10
	ctx.r9.s64 = ctx.r11.s64 * ctx.r10.s64;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// clrldi r7,r7,56
	ctx.r7.u64 = ctx.r7.u64 & 0xFF;
	// rldicl r11,r11,17,47
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 17) & 0x1FFFF;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// xor r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 ^ ctx.r11.u64;
loc_82AFB160:
	// lbzu r7,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
loc_82AFB164:
	// extsb. r9,r7
	ctx.r9.s64 = ctx.r7.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82afb124
	if (!ctx.cr0.eq) goto loc_82AFB124;
loc_82AFB16C:
	// addi r30,r30,276
	ctx.r30.s64 = ctx.r30.s64 + 276;
loc_82AFB170:
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82afb110
	if (ctx.cr6.lt) goto loc_82AFB110;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82afb22c
	if (ctx.cr6.eq) goto loc_82AFB22C;
	// lbz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82afb1b4
	if (ctx.cr0.eq) goto loc_82AFB1B4;
loc_82AFB18C:
	// rldicl r4,r11,45,19
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 45) & 0x1FFFFFFFFFFF;
	// mulld r7,r11,r10
	ctx.r7.s64 = ctx.r11.s64 * ctx.r10.s64;
	// clrldi r6,r9,56
	ctx.r6.u64 = ctx.r9.u64 & 0xFF;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// rldicl r11,r11,17,47
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 17) & 0x1FFFF;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// extsb. r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// xor r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 ^ ctx.r11.u64;
	// bne 0x82afb18c
	if (!ctx.cr0.eq) goto loc_82AFB18C;
loc_82AFB1B4:
	// rldicl r8,r11,45,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 45) & 0x1FFFFFFFFFFF;
	// mulld r9,r11,r10
	ctx.r9.s64 = ctx.r11.s64 * ctx.r10.s64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// clrlwi r7,r5,24
	ctx.r7.u64 = ctx.r5.u32 & 0xFF;
	// rldicl r11,r11,17,47
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 17) & 0x1FFFF;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r8,r5,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFF;
	// xor r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// mulld r8,r7,r10
	ctx.r8.s64 = ctx.r7.s64 * ctx.r10.s64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rldicl r9,r7,45,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u64, 45) & 0x1FFFFFFFFFFF;
	// rldicl r8,r7,17,47
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u64, 17) & 0x1FFFF;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r5,16,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFF;
	// xor r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// mulld r8,r7,r10
	ctx.r8.s64 = ctx.r7.s64 * ctx.r10.s64;
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rldicl r9,r7,45,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u64, 45) & 0x1FFFFFFFFFFF;
	// rldicl r8,r7,17,47
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u64, 17) & 0x1FFFF;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r5,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFF;
	// xor r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// mulld r9,r8,r10
	ctx.r9.s64 = ctx.r8.s64 * ctx.r10.s64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rldicl r10,r8,45,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u64, 45) & 0x1FFFFFFFFFFF;
	// rldicl r9,r8,17,47
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u64, 17) & 0x1FFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// xor r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r9.u64;
loc_82AFB22C:
	// rldicl r10,r11,32,32
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// stw r10,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r10.u32);
loc_82AFB234:
	// stw r11,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r11.u32);
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFB23C"))) PPC_WEAK_FUNC(sub_82AFB23C);
PPC_FUNC_IMPL(__imp__sub_82AFB23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFB240"))) PPC_WEAK_FUNC(sub_82AFB240);
PPC_FUNC_IMPL(__imp__sub_82AFB240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x82AFB248;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82af8860
	ctx.lr = 0x82AFB25C;
	sub_82AF8860(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r21,r10,-28968
	ctx.r21.s64 = ctx.r10.s64 + -28968;
	// addi r27,r11,-29564
	ctx.r27.s64 = ctx.r11.s64 + -29564;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AFB27C;
	sub_82AF8808(ctx, base);
	// lwz r5,132(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 132);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// addi r22,r11,-29032
	ctx.r22.s64 = ctx.r11.s64 + -29032;
	// beq cr6,0x82afb29c
	if (ctx.cr6.eq) goto loc_82AFB29C;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8a20
	ctx.lr = 0x82AFB29C;
	sub_82AF8A20(ctx, base);
loc_82AFB29C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af9608
	ctx.lr = 0x82AFB2A4;
	sub_82AF9608(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r23,r11,5264
	ctx.r23.s64 = ctx.r11.s64 + 5264;
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82afb3a8
	if (ctx.cr6.eq) goto loc_82AFB3A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8860
	ctx.lr = 0x82AFB2C0;
	sub_82AF8860(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r26,r11,-28976
	ctx.r26.s64 = ctx.r11.s64 + -28976;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AFB2D8;
	sub_82AF8808(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af9608
	ctx.lr = 0x82AFB2E0;
	sub_82AF9608(ctx, base);
	// lwz r10,36(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addi r28,r29,32
	ctx.r28.s64 = ctx.r29.s64 + 32;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82afb39c
	if (!ctx.cr6.lt) goto loc_82AFB39C;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r24,r10,32570
	ctx.r24.s64 = ctx.r10.s64 + 32570;
	// addi r25,r11,-19760
	ctx.r25.s64 = ctx.r11.s64 + -19760;
loc_82AFB310:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8860
	ctx.lr = 0x82AFB318;
	sub_82AF8860(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AFB328;
	sub_82AF8808(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82afb33c
	if (!ctx.cr6.eq) goto loc_82AFB33C;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// b 0x82afb344
	goto loc_82AFB344;
loc_82AFB33C:
	// lwz r10,44(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82AFB344:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8a20
	ctx.lr = 0x82AFB350;
	sub_82AF8A20(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82afb364
	if (!ctx.cr6.eq) goto loc_82AFB364;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// b 0x82afb36c
	goto loc_82AFB36C;
loc_82AFB364:
	// lwz r10,44(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82AFB36C:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8a20
	ctx.lr = 0x82AFB378;
	sub_82AF8A20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af95b8
	ctx.lr = 0x82AFB380;
	sub_82AF95B8(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82afb310
	if (ctx.cr6.lt) goto loc_82AFB310;
loc_82AFB39C:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af88c0
	ctx.lr = 0x82AFB3A8;
	sub_82AF88C0(ctx, base);
loc_82AFB3A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8860
	ctx.lr = 0x82AFB3B0;
	sub_82AF8860(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r26,r11,-4624
	ctx.r26.s64 = ctx.r11.s64 + -4624;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AFB3C8;
	sub_82AF8808(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af9608
	ctx.lr = 0x82AFB3D0;
	sub_82AF9608(ctx, base);
	// addi r29,r29,56
	ctx.r29.s64 = ctx.r29.s64 + 56;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mulli r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 * 40;
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82afb450
	if (!ctx.cr6.lt) goto loc_82AFB450;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r28,r11,-29088
	ctx.r28.s64 = ctx.r11.s64 + -29088;
loc_82AFB3F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8860
	ctx.lr = 0x82AFB3FC;
	sub_82AF8860(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AFB40C;
	sub_82AF8808(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8a20
	ctx.lr = 0x82AFB41C;
	sub_82AF8A20(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r5,r30,32
	ctx.r5.s64 = ctx.r30.s64 + 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8a20
	ctx.lr = 0x82AFB42C;
	sub_82AF8A20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af95b8
	ctx.lr = 0x82AFB434;
	sub_82AF95B8(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// mulli r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 * 40;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82afb3f4
	if (ctx.cr6.lt) goto loc_82AFB3F4;
loc_82AFB450:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af88c0
	ctx.lr = 0x82AFB45C;
	sub_82AF88C0(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af88c0
	ctx.lr = 0x82AFB468;
	sub_82AF88C0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFB470"))) PPC_WEAK_FUNC(sub_82AFB470);
PPC_FUNC_IMPL(__imp__sub_82AFB470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7650
	ctx.lr = 0x82AFB478;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x82af8860
	ctx.lr = 0x82AFB494;
	sub_82AF8860(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r18,r10,-28960
	ctx.r18.s64 = ctx.r10.s64 + -28960;
	// addi r22,r11,-29564
	ctx.r22.s64 = ctx.r11.s64 + -29564;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AFB4B4;
	sub_82AF8808(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af9608
	ctx.lr = 0x82AFB4BC;
	sub_82AF9608(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8296ce28
	ctx.lr = 0x82AFB4C4;
	sub_8296CE28(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82691410
	ctx.lr = 0x82AFB4D4;
	sub_82691410(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne 0x82afb4ec
	if (!ctx.cr0.eq) goto loc_82AFB4EC;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// stw r11,144(r21)
	PPC_STORE_U32(ctx.r21.u32 + 144, ctx.r11.u32);
	// b 0x82afb62c
	goto loc_82AFB62C;
loc_82AFB4EC:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8296d198
	ctx.lr = 0x82AFB500;
	sub_8296D198(ctx, base);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r19,r26,8
	ctx.r19.s64 = ctx.r26.s64 + 8;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82afb620
	if (!ctx.cr6.lt) goto loc_82AFB620;
	// lis r6,-32231
	ctx.r6.s64 = -2112290816;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r20,r6,32570
	ctx.r20.s64 = ctx.r6.s64 + 32570;
	// addi r29,r7,-29644
	ctx.r29.s64 = ctx.r7.s64 + -29644;
	// addi r25,r8,-29508
	ctx.r25.s64 = ctx.r8.s64 + -29508;
	// addi r24,r9,-4568
	ctx.r24.s64 = ctx.r9.s64 + -4568;
	// addi r23,r10,4868
	ctx.r23.s64 = ctx.r10.s64 + 4868;
	// addi r28,r11,26332
	ctx.r28.s64 = ctx.r11.s64 + 26332;
loc_82AFB54C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82afb604
	if (ctx.cr0.eq) goto loc_82AFB604;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8860
	ctx.lr = 0x82AFB560;
	sub_82AF8860(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AFB570;
	sub_82AF8808(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srawi r6,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 4;
	// bl 0x82af8808
	ctx.lr = 0x82AFB58C;
	sub_82AF8808(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AFB5A0;
	sub_82AF8808(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AFB5B4;
	sub_82AF8808(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af9608
	ctx.lr = 0x82AFB5BC;
	sub_82AF9608(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82afb5d4
	if (!ctx.cr6.eq) goto loc_82AFB5D4;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// b 0x82afb5dc
	goto loc_82AFB5DC;
loc_82AFB5D4:
	// lwz r10,44(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 44);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82AFB5DC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// bl 0x82afac08
	ctx.lr = 0x82AFB5F8;
	sub_82AFAC08(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af88c0
	ctx.lr = 0x82AFB604;
	sub_82AF88C0(ctx, base);
loc_82AFB604:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82afb54c
	if (ctx.cr6.lt) goto loc_82AFB54C;
loc_82AFB620:
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82691460
	ctx.lr = 0x82AFB62C;
	sub_82691460(ctx, base);
loc_82AFB62C:
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af88c0
	ctx.lr = 0x82AFB638;
	sub_82AF88C0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76a0
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFB640"))) PPC_WEAK_FUNC(sub_82AFB640);
PPC_FUNC_IMPL(__imp__sub_82AFB640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7650
	ctx.lr = 0x82AFB648;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x82af8860
	ctx.lr = 0x82AFB660;
	sub_82AF8860(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r19,r10,-28928
	ctx.r19.s64 = ctx.r10.s64 + -28928;
	// addi r24,r11,-29564
	ctx.r24.s64 = ctx.r11.s64 + -29564;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AFB680;
	sub_82AF8808(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af9608
	ctx.lr = 0x82AFB688;
	sub_82AF9608(ctx, base);
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mulli r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 * 20;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82afb7e8
	if (!ctx.cr6.lt) goto loc_82AFB7E8;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// lis r5,-32231
	ctx.r5.s64 = -2112290816;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r20,r5,32570
	ctx.r20.s64 = ctx.r5.s64 + 32570;
	// addi r28,r6,-29644
	ctx.r28.s64 = ctx.r6.s64 + -29644;
	// addi r23,r7,-28940
	ctx.r23.s64 = ctx.r7.s64 + -28940;
	// addi r22,r8,-28948
	ctx.r22.s64 = ctx.r8.s64 + -28948;
	// addi r21,r9,-29032
	ctx.r21.s64 = ctx.r9.s64 + -29032;
	// addi r27,r10,4868
	ctx.r27.s64 = ctx.r10.s64 + 4868;
	// addi r25,r11,-4568
	ctx.r25.s64 = ctx.r11.s64 + -4568;
loc_82AFB6DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8860
	ctx.lr = 0x82AFB6E4;
	sub_82AF8860(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AFB6F4;
	sub_82AF8808(ctx, base);
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r11,r30,-8
	ctx.r11.s64 = ctx.r30.s64 + -8;
	// li r10,20
	ctx.r10.s64 = 20;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// divw r6,r11,r10
	ctx.r6.s32 = ctx.r11.s32 / ctx.r10.s32;
	// bl 0x82af8808
	ctx.lr = 0x82AFB718;
	sub_82AF8808(ctx, base);
	// lwz r11,-8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82afb72c
	if (!ctx.cr6.eq) goto loc_82AFB72C;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// b 0x82afb734
	goto loc_82AFB734;
loc_82AFB72C:
	// lwz r10,44(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 44);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82AFB734:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8a20
	ctx.lr = 0x82AFB740;
	sub_82AF8A20(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r6,-4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AFB754;
	sub_82AF8808(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af9608
	ctx.lr = 0x82AFB75C;
	sub_82AF9608(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x82afb7b4
	goto loc_82AFB7B4;
loc_82AFB770:
	// bl 0x82af8860
	ctx.lr = 0x82AFB774;
	sub_82AF8860(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AFB784;
	sub_82AF8808(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AFB798;
	sub_82AF8808(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af95b8
	ctx.lr = 0x82AFB7A0;
	sub_82AF95B8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82AFB7B4:
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// blt cr6,0x82afb770
	if (ctx.cr6.lt) goto loc_82AFB770;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82af88c0
	ctx.lr = 0x82AFB7C8;
	sub_82AF88C0(ctx, base);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// addi r9,r30,-8
	ctx.r9.s64 = ctx.r30.s64 + -8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82afb6dc
	if (ctx.cr6.lt) goto loc_82AFB6DC;
loc_82AFB7E8:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af88c0
	ctx.lr = 0x82AFB7F4;
	sub_82AF88C0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76a0
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFB7FC"))) PPC_WEAK_FUNC(sub_82AFB7FC);
PPC_FUNC_IMPL(__imp__sub_82AFB7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFB800"))) PPC_WEAK_FUNC(sub_82AFB800);
PPC_FUNC_IMPL(__imp__sub_82AFB800) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82afb834
	if (!ctx.cr6.gt) goto loc_82AFB834;
	// bl 0x82af8f90
	ctx.lr = 0x82AFB834;
	sub_82AF8F90(ctx, base);
loc_82AFB834:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,24
	ctx.r5.s64 = 24;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82AFB850;
	sub_82FA77C0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82AFB874"))) PPC_WEAK_FUNC(sub_82AFB874);
PPC_FUNC_IMPL(__imp__sub_82AFB874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFB878"))) PPC_WEAK_FUNC(sub_82AFB878);
PPC_FUNC_IMPL(__imp__sub_82AFB878) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82afb8ac
	if (!ctx.cr6.gt) goto loc_82AFB8AC;
	// bl 0x82af9020
	ctx.lr = 0x82AFB8AC;
	sub_82AF9020(ctx, base);
loc_82AFB8AC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82AFB900"))) PPC_WEAK_FUNC(sub_82AFB900);
PPC_FUNC_IMPL(__imp__sub_82AFB900) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82afb934
	if (!ctx.cr6.gt) goto loc_82AFB934;
	// bl 0x82af9260
	ctx.lr = 0x82AFB934;
	sub_82AF9260(ctx, base);
loc_82AFB934:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stbx r9,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
	// lbz r11,1(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// stb r11,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r11.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82AFB978"))) PPC_WEAK_FUNC(sub_82AFB978);
PPC_FUNC_IMPL(__imp__sub_82AFB978) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82afb9ac
	if (!ctx.cr6.gt) goto loc_82AFB9AC;
	// bl 0x82af92f0
	ctx.lr = 0x82AFB9AC;
	sub_82AF92F0(ctx, base);
loc_82AFB9AC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stbx r9,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
	// lbz r11,1(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// stb r11,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r11.u8);
	// lbz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// stb r11,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r11.u8);
	// lbz r11,3(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// stb r11,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, ctx.r11.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82AFBA00"))) PPC_WEAK_FUNC(sub_82AFBA00);
PPC_FUNC_IMPL(__imp__sub_82AFBA00) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82afba34
	if (!ctx.cr6.gt) goto loc_82AFBA34;
	// bl 0x82af91d0
	ctx.lr = 0x82AFBA34;
	sub_82AF91D0(ctx, base);
loc_82AFBA34:
	// li r11,5
	ctx.r11.s64 = 5;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r30,-4
	ctx.r8.s64 = ctx.r30.s64 + -4;
	// mulli r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 * 20;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_82AFBA54:
	// lwzu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82afba54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82AFBA54;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82AFBA84"))) PPC_WEAK_FUNC(sub_82AFBA84);
PPC_FUNC_IMPL(__imp__sub_82AFBA84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFBA88"))) PPC_WEAK_FUNC(sub_82AFBA88);
PPC_FUNC_IMPL(__imp__sub_82AFBA88) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82afbabc
	if (!ctx.cr6.gt) goto loc_82AFBABC;
	// bl 0x82af9380
	ctx.lr = 0x82AFBABC;
	sub_82AF9380(ctx, base);
loc_82AFBABC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,276
	ctx.r5.s64 = 276;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mulli r11,r11,276
	ctx.r11.s64 = ctx.r11.s64 * 276;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82AFBAD8;
	sub_82FA77C0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82AFBAFC"))) PPC_WEAK_FUNC(sub_82AFBAFC);
PPC_FUNC_IMPL(__imp__sub_82AFBAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFBB00"))) PPC_WEAK_FUNC(sub_82AFBB00);
PPC_FUNC_IMPL(__imp__sub_82AFBB00) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82afbb34
	if (!ctx.cr6.gt) goto loc_82AFBB34;
	// bl 0x82af9528
	ctx.lr = 0x82AFBB34;
	sub_82AF9528(ctx, base);
loc_82AFBB34:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,40
	ctx.r5.s64 = 40;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mulli r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 * 40;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82AFBB50;
	sub_82FA77C0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82AFBB74"))) PPC_WEAK_FUNC(sub_82AFBB74);
PPC_FUNC_IMPL(__imp__sub_82AFBB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFBB78"))) PPC_WEAK_FUNC(sub_82AFBB78);
PPC_FUNC_IMPL(__imp__sub_82AFBB78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82AFBB80;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-28916
	ctx.r11.s64 = ctx.r11.s64 + -28916;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// addi r29,r3,16
	ctx.r29.s64 = ctx.r3.s64 + 16;
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// addi r28,r3,56
	ctx.r28.s64 = ctx.r3.s64 + 56;
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// addi r27,r30,144
	ctx.r27.s64 = ctx.r30.s64 + 144;
	// stw r31,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r31.u32);
	// stw r31,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r31.u32);
	// stw r31,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r31.u32);
	// stw r31,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r31.u32);
	// stw r31,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r31.u32);
	// stw r31,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r31.u32);
	// stw r31,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r31.u32);
	// stw r31,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r31.u32);
	// stw r31,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r31.u32);
	// stw r31,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r31.u32);
	// stw r31,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r31.u32);
	// stw r10,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r10.u32);
	// stw r31,144(r30)
	PPC_STORE_U32(ctx.r30.u32 + 144, ctx.r31.u32);
	// stw r31,148(r30)
	PPC_STORE_U32(ctx.r30.u32 + 148, ctx.r31.u32);
	// stw r31,152(r30)
	PPC_STORE_U32(ctx.r30.u32 + 152, ctx.r31.u32);
	// sth r31,156(r30)
	PPC_STORE_U16(ctx.r30.u32 + 156, ctx.r31.u16);
	// sth r31,158(r30)
	PPC_STORE_U16(ctx.r30.u32 + 158, ctx.r31.u16);
	// stw r31,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r31.u32);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82afbc1c
	if (!ctx.cr6.lt) goto loc_82AFBC1C;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82af90b0
	ctx.lr = 0x82AFBC1C;
	sub_82AF90B0(ctx, base);
loc_82AFBC1C:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82afbc3c
	if (!ctx.cr6.lt) goto loc_82AFBC3C;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82af9410
	ctx.lr = 0x82AFBC3C;
	sub_82AF9410(ctx, base);
loc_82AFBC3C:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x82afbc5c
	if (!ctx.cr6.lt) goto loc_82AFBC5C;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82af9528
	ctx.lr = 0x82AFBC5C;
	sub_82AF9528(ctx, base);
loc_82AFBC5C:
	// stw r31,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,160(r30)
	PPC_STORE_U32(ctx.r30.u32 + 160, ctx.r31.u32);
	// stw r31,164(r30)
	PPC_STORE_U32(ctx.r30.u32 + 164, ctx.r31.u32);
	// stw r31,168(r30)
	PPC_STORE_U32(ctx.r30.u32 + 168, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFBC78"))) PPC_WEAK_FUNC(sub_82AFBC78);
PPC_FUNC_IMPL(__imp__sub_82AFBC78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r3,136(r10)
	PPC_STORE_U32(ctx.r10.u32 + 136, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AFBC8C"))) PPC_WEAK_FUNC(sub_82AFBC8C);
PPC_FUNC_IMPL(__imp__sub_82AFBC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFBC90"))) PPC_WEAK_FUNC(sub_82AFBC90);
PPC_FUNC_IMPL(__imp__sub_82AFBC90) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// stw r4,272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 272, ctx.r4.u32);
	// lhz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 156);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,156(r3)
	PPC_STORE_U16(ctx.r3.u32 + 156, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AFBCA8"))) PPC_WEAK_FUNC(sub_82AFBCA8);
PPC_FUNC_IMPL(__imp__sub_82AFBCA8) {
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
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82afbcd8
	if (ctx.cr6.eq) goto loc_82AFBCD8;
	// bl 0x82b0b478
	ctx.lr = 0x82AFBCD4;
	sub_82B0B478(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_82AFBCD8:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82AFBCF8"))) PPC_WEAK_FUNC(sub_82AFBCF8);
PPC_FUNC_IMPL(__imp__sub_82AFBCF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82AFBD00;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r26,16(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r11,r11,-28916
	ctx.r11.s64 = ctx.r11.s64 + -28916;
	// rotlwi r10,r26,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r26.u32, 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r24,r3,16
	ctx.r24.s64 = ctx.r3.s64 + 16;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mulli r11,r11,476
	ctx.r11.s64 = ctx.r11.s64 * 476;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82afbe80
	if (!ctx.cr6.lt) goto loc_82AFBE80;
	// addi r31,r26,448
	ctx.r31.s64 = ctx.r26.s64 + 448;
loc_82AFBD38:
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// lwz r3,-60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -60);
	// bl 0x82691460
	ctx.lr = 0x82AFBD44;
	sub_82691460(ctx, base);
	// addi r3,r31,-172
	ctx.r3.s64 = ctx.r31.s64 + -172;
	// bl 0x82afbca8
	ctx.lr = 0x82AFBD4C;
	sub_82AFBCA8(ctx, base);
	// addi r3,r31,-160
	ctx.r3.s64 = ctx.r31.s64 + -160;
	// bl 0x82afbca8
	ctx.lr = 0x82AFBD54;
	sub_82AFBCA8(ctx, base);
	// addi r3,r31,-148
	ctx.r3.s64 = ctx.r31.s64 + -148;
	// bl 0x82afbca8
	ctx.lr = 0x82AFBD5C;
	sub_82AFBCA8(ctx, base);
	// addi r3,r31,-136
	ctx.r3.s64 = ctx.r31.s64 + -136;
	// bl 0x82afbca8
	ctx.lr = 0x82AFBD64;
	sub_82AFBCA8(ctx, base);
	// addi r3,r31,-124
	ctx.r3.s64 = ctx.r31.s64 + -124;
	// bl 0x82afbca8
	ctx.lr = 0x82AFBD6C;
	sub_82AFBCA8(ctx, base);
	// addi r3,r31,-112
	ctx.r3.s64 = ctx.r31.s64 + -112;
	// bl 0x8296ce40
	ctx.lr = 0x82AFBD74;
	sub_8296CE40(ctx, base);
	// addi r3,r31,-96
	ctx.r3.s64 = ctx.r31.s64 + -96;
	// bl 0x82afbca8
	ctx.lr = 0x82AFBD7C;
	sub_82AFBCA8(ctx, base);
	// addi r3,r31,-84
	ctx.r3.s64 = ctx.r31.s64 + -84;
	// bl 0x82afbca8
	ctx.lr = 0x82AFBD84;
	sub_82AFBCA8(ctx, base);
	// lwz r10,-72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -72);
	// addi r29,r31,-72
	ctx.r29.s64 = ctx.r31.s64 + -72;
	// extsw r30,r10
	ctx.r30.s64 = ctx.r10.s32;
	// b 0x82afbda4
	goto loc_82AFBDA4;
loc_82AFBD94:
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x82afbca8
	ctx.lr = 0x82AFBD9C;
	sub_82AFBCA8(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
loc_82AFBDA4:
	// lwz r11,-68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -68);
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82afbd94
	if (ctx.cr6.lt) goto loc_82AFBD94;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82afbca8
	ctx.lr = 0x82AFBDC0;
	sub_82AFBCA8(ctx, base);
	// addi r3,r31,-52
	ctx.r3.s64 = ctx.r31.s64 + -52;
	// bl 0x82afbca8
	ctx.lr = 0x82AFBDC8;
	sub_82AFBCA8(ctx, base);
	// addi r3,r31,-40
	ctx.r3.s64 = ctx.r31.s64 + -40;
	// bl 0x82afbca8
	ctx.lr = 0x82AFBDD0;
	sub_82AFBCA8(ctx, base);
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// bl 0x82afbca8
	ctx.lr = 0x82AFBDD8;
	sub_82AFBCA8(ctx, base);
	// addi r3,r31,-16
	ctx.r3.s64 = ctx.r31.s64 + -16;
	// bl 0x82afbca8
	ctx.lr = 0x82AFBDE0;
	sub_82AFBCA8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,-4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// addi r27,r31,-4
	ctx.r27.s64 = ctx.r31.s64 + -4;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// extsw r29,r10
	ctx.r29.s64 = ctx.r10.s32;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82afbe58
	if (!ctx.cr6.lt) goto loc_82AFBE58;
	// addi r30,r29,12
	ctx.r30.s64 = ctx.r29.s64 + 12;
loc_82AFBE04:
	// lwz r28,0(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82afbe18
	goto loc_82AFBE18;
loc_82AFBE0C:
	// addi r3,r28,16
	ctx.r3.s64 = ctx.r28.s64 + 16;
	// bl 0x82afbca8
	ctx.lr = 0x82AFBE14;
	sub_82AFBCA8(ctx, base);
	// addi r28,r28,28
	ctx.r28.s64 = ctx.r28.s64 + 28;
loc_82AFBE18:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82afbe0c
	if (ctx.cr6.lt) goto loc_82AFBE0C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82afbca8
	ctx.lr = 0x82AFBE38;
	sub_82AFBCA8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82afbe04
	if (ctx.cr6.lt) goto loc_82AFBE04;
loc_82AFBE58:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82afbca8
	ctx.lr = 0x82AFBE60;
	sub_82AFBCA8(ctx, base);
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r26,r26,476
	ctx.r26.s64 = ctx.r26.s64 + 476;
	// mulli r11,r11,476
	ctx.r11.s64 = ctx.r11.s64 * 476;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r31,r31,476
	ctx.r31.s64 = ctx.r31.s64 + 476;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82afbd38
	if (ctx.cr6.lt) goto loc_82AFBD38;
loc_82AFBE80:
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r30,r25,4
	ctx.r30.s64 = ctx.r25.s64 + 4;
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// li r29,0
	ctx.r29.s64 = 0;
	// extsw r31,r10
	ctx.r31.s64 = ctx.r10.s32;
	// b 0x82afbebc
	goto loc_82AFBEBC;
loc_82AFBE98:
	// lwz r3,272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82afbeb0
	if (ctx.cr6.eq) goto loc_82AFBEB0;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// bl 0x82691460
	ctx.lr = 0x82AFBEAC;
	sub_82691460(ctx, base);
	// stw r29,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r29.u32);
loc_82AFBEB0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r31,r31,276
	ctx.r31.s64 = ctx.r31.s64 + 276;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82AFBEBC:
	// mulli r11,r11,276
	ctx.r11.s64 = ctx.r11.s64 * 276;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82afbe98
	if (ctx.cr6.lt) goto loc_82AFBE98;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// lwz r3,132(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 132);
	// bl 0x82691460
	ctx.lr = 0x82AFBED8;
	sub_82691460(ctx, base);
	// stw r29,132(r25)
	PPC_STORE_U32(ctx.r25.u32 + 132, ctx.r29.u32);
	// lwz r4,56(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 56);
	// addi r3,r25,56
	ctx.r3.s64 = ctx.r25.s64 + 56;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82afbef0
	if (ctx.cr6.eq) goto loc_82AFBEF0;
	// bl 0x82b0b478
	ctx.lr = 0x82AFBEF0;
	sub_82B0B478(ctx, base);
loc_82AFBEF0:
	// lwz r4,44(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 44);
	// addi r3,r25,44
	ctx.r3.s64 = ctx.r25.s64 + 44;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82afbf04
	if (ctx.cr6.eq) goto loc_82AFBF04;
	// bl 0x82b0b478
	ctx.lr = 0x82AFBF04;
	sub_82B0B478(ctx, base);
loc_82AFBF04:
	// lwz r4,32(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	// addi r3,r25,32
	ctx.r3.s64 = ctx.r25.s64 + 32;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82afbf18
	if (ctx.cr6.eq) goto loc_82AFBF18;
	// bl 0x82b0b478
	ctx.lr = 0x82AFBF18;
	sub_82B0B478(ctx, base);
loc_82AFBF18:
	// lwz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82afbf2c
	if (ctx.cr6.eq) goto loc_82AFBF2C;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82b0b478
	ctx.lr = 0x82AFBF2C;
	sub_82B0B478(ctx, base);
loc_82AFBF2C:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82afbf40
	if (ctx.cr6.eq) goto loc_82AFBF40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b0b478
	ctx.lr = 0x82AFBF40;
	sub_82B0B478(ctx, base);
loc_82AFBF40:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFBF48"))) PPC_WEAK_FUNC(sub_82AFBF48);
PPC_FUNC_IMPL(__imp__sub_82AFBF48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// b 0x82afbfa4
	goto loc_82AFBFA4;
loc_82AFBF64:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r10,r10,0,16,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFE00;
	// cmplwi cr6,r10,58368
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 58368, ctx.xer);
	// bne cr6,0x82afbf8c
	if (!ctx.cr6.eq) goto loc_82AFBF8C;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r10,0,24,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFC;
	// lwzx r9,r9,r4
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// rlwimi r10,r9,2,24,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0xFC) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF03);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_82AFBF8C:
	// lwz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r8,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_82AFBFA4:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82afbf64
	if (ctx.cr6.lt) goto loc_82AFBF64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AFBFB0"))) PPC_WEAK_FUNC(sub_82AFBFB0);
PPC_FUNC_IMPL(__imp__sub_82AFBFB0) {
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
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addic. r3,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r3.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r3,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r3.u32);
	// bne 0x82afbfec
	if (!ctx.cr0.eq) goto loc_82AFBFEC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82afbcf8
	ctx.lr = 0x82AFBFDC;
	sub_82AFBCF8(ctx, base);
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691460
	ctx.lr = 0x82AFBFE8;
	sub_82691460(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AFBFEC:
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

__attribute__((alias("__imp__sub_82AFC000"))) PPC_WEAK_FUNC(sub_82AFC000);
PPC_FUNC_IMPL(__imp__sub_82AFC000) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82afc034
	if (!ctx.cr6.gt) goto loc_82AFC034;
	// bl 0x82af90b0
	ctx.lr = 0x82AFC034;
	sub_82AF90B0(ctx, base);
loc_82AFC034:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82AFC078"))) PPC_WEAK_FUNC(sub_82AFC078);
PPC_FUNC_IMPL(__imp__sub_82AFC078) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82afc0ac
	if (!ctx.cr6.gt) goto loc_82AFC0AC;
	// bl 0x82af92f0
	ctx.lr = 0x82AFC0AC;
	sub_82AF92F0(ctx, base);
loc_82AFC0AC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82AFC0E4"))) PPC_WEAK_FUNC(sub_82AFC0E4);
PPC_FUNC_IMPL(__imp__sub_82AFC0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFC0E8"))) PPC_WEAK_FUNC(sub_82AFC0E8);
PPC_FUNC_IMPL(__imp__sub_82AFC0E8) {
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
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82afc134
	if (ctx.cr6.eq) goto loc_82AFC134;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,-28888
	ctx.r4.s64 = ctx.r11.s64 + -28888;
	// bl 0x82fa4460
	ctx.lr = 0x82AFC114;
	sub_82FA4460(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82afc134
	if (ctx.cr0.eq) goto loc_82AFC134;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82afc134
	if (ctx.cr6.eq) goto loc_82AFC134;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r5,256(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 256);
	// b 0x82afc13c
	goto loc_82AFC13C;
loc_82AFC134:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82AFC13C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82afaf38
	ctx.lr = 0x82AFC144;
	sub_82AFAF38(ctx, base);
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

__attribute__((alias("__imp__sub_82AFC158"))) PPC_WEAK_FUNC(sub_82AFC158);
PPC_FUNC_IMPL(__imp__sub_82AFC158) {
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
	// lwz r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82afc184
	if (!ctx.cr6.eq) goto loc_82AFC184;
	// bl 0x82afc0e8
	ctx.lr = 0x82AFC184;
	sub_82AFC0E8(ctx, base);
loc_82AFC184:
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82afc1b4
	if (ctx.cr6.eq) goto loc_82AFC1B4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82AFC1B4:
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

__attribute__((alias("__imp__sub_82AFC1CC"))) PPC_WEAK_FUNC(sub_82AFC1CC);
PPC_FUNC_IMPL(__imp__sub_82AFC1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFC1D0"))) PPC_WEAK_FUNC(sub_82AFC1D0);
PPC_FUNC_IMPL(__imp__sub_82AFC1D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82AFC1D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r30,r3,144
	ctx.r30.s64 = ctx.r3.s64 + 144;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82afc224
	if (ctx.cr6.lt) goto loc_82AFC224;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829321e0
	ctx.lr = 0x82AFC204;
	sub_829321E0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x829321e0
	ctx.lr = 0x82AFC214;
	sub_829321E0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82afbb00
	ctx.lr = 0x82AFC224;
	sub_82AFBB00(ctx, base);
loc_82AFC224:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFC22C"))) PPC_WEAK_FUNC(sub_82AFC22C);
PPC_FUNC_IMPL(__imp__sub_82AFC22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFC230"))) PPC_WEAK_FUNC(sub_82AFC230);
PPC_FUNC_IMPL(__imp__sub_82AFC230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x82AFC238;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r29,r11,-30204
	ctx.r29.s64 = ctx.r11.s64 + -30204;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// clrlwi. r9,r4,31
	ctx.r9.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r28,r10,-30212
	ctx.r28.s64 = ctx.r10.s64 + -30212;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bne 0x82afc27c
	if (!ctx.cr0.eq) goto loc_82AFC27C;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_82AFC27C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28744
	ctx.r4.s64 = ctx.r11.s64 + -28744;
	// bl 0x82afc1d0
	ctx.lr = 0x82AFC28C;
	sub_82AFC1D0(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bne 0x82afc29c
	if (!ctx.cr0.eq) goto loc_82AFC29C;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_82AFC29C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28748
	ctx.r4.s64 = ctx.r11.s64 + -28748;
	// bl 0x82afc1d0
	ctx.lr = 0x82AFC2AC;
	sub_82AFC1D0(ctx, base);
	// rlwinm. r11,r30,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bne 0x82afc2bc
	if (!ctx.cr0.eq) goto loc_82AFC2BC;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_82AFC2BC:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28764
	ctx.r4.s64 = ctx.r11.s64 + -28764;
	// bl 0x82afc1d0
	ctx.lr = 0x82AFC2CC;
	sub_82AFC1D0(ctx, base);
	// rlwinm. r11,r30,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bne 0x82afc2dc
	if (!ctx.cr0.eq) goto loc_82AFC2DC;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_82AFC2DC:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28780
	ctx.r4.s64 = ctx.r11.s64 + -28780;
	// bl 0x82afc1d0
	ctx.lr = 0x82AFC2EC;
	sub_82AFC1D0(ctx, base);
	// rlwinm. r11,r27,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bne 0x82afc2fc
	if (!ctx.cr0.eq) goto loc_82AFC2FC;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_82AFC2FC:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28788
	ctx.r4.s64 = ctx.r11.s64 + -28788;
	// bl 0x82afc1d0
	ctx.lr = 0x82AFC30C;
	sub_82AFC1D0(ctx, base);
	// rlwinm. r11,r27,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bne 0x82afc31c
	if (!ctx.cr0.eq) goto loc_82AFC31C;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_82AFC31C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28796
	ctx.r4.s64 = ctx.r11.s64 + -28796;
	// bl 0x82afc1d0
	ctx.lr = 0x82AFC32C;
	sub_82AFC1D0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r30,r11,26556
	ctx.r30.s64 = ctx.r11.s64 + 26556;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8292e140
	ctx.lr = 0x82AFC348;
	sub_8292E140(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28812
	ctx.r4.s64 = ctx.r11.s64 + -28812;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82afc1d0
	ctx.lr = 0x82AFC35C;
	sub_82AFC1D0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8292e140
	ctx.lr = 0x82AFC370;
	sub_8292E140(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28824
	ctx.r4.s64 = ctx.r11.s64 + -28824;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82afc1d0
	ctx.lr = 0x82AFC384;
	sub_82AFC1D0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8292e140
	ctx.lr = 0x82AFC398;
	sub_8292E140(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28836
	ctx.r4.s64 = ctx.r11.s64 + -28836;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82afc1d0
	ctx.lr = 0x82AFC3AC;
	sub_82AFC1D0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8292e140
	ctx.lr = 0x82AFC3C0;
	sub_8292E140(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28848
	ctx.r4.s64 = ctx.r11.s64 + -28848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82afc1d0
	ctx.lr = 0x82AFC3D4;
	sub_82AFC1D0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8292e140
	ctx.lr = 0x82AFC3E8;
	sub_8292E140(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28860
	ctx.r4.s64 = ctx.r11.s64 + -28860;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82afc1d0
	ctx.lr = 0x82AFC3FC;
	sub_82AFC1D0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r6,276(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8292e140
	ctx.lr = 0x82AFC410;
	sub_8292E140(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28872
	ctx.r4.s64 = ctx.r11.s64 + -28872;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82afc1d0
	ctx.lr = 0x82AFC424;
	sub_82AFC1D0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r6,284(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8292e140
	ctx.lr = 0x82AFC438;
	sub_8292E140(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28884
	ctx.r4.s64 = ctx.r11.s64 + -28884;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82afc1d0
	ctx.lr = 0x82AFC44C;
	sub_82AFC1D0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFC454"))) PPC_WEAK_FUNC(sub_82AFC454);
PPC_FUNC_IMPL(__imp__sub_82AFC454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFC458"))) PPC_WEAK_FUNC(sub_82AFC458);
PPC_FUNC_IMPL(__imp__sub_82AFC458) {
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
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82afc478
	if (ctx.cr6.eq) goto loc_82AFC478;
	// lwz r31,48(r5)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// b 0x82afc47c
	goto loc_82AFC47C;
loc_82AFC478:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82AFC47C:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82afc48c
	if (ctx.cr6.eq) goto loc_82AFC48C;
	// lwz r11,52(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	// b 0x82afc490
	goto loc_82AFC490;
loc_82AFC48C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AFC490:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82afc4a0
	if (ctx.cr6.eq) goto loc_82AFC4A0;
	// lwz r10,44(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	// b 0x82afc4a4
	goto loc_82AFC4A4;
loc_82AFC4A0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82AFC4A4:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82afc4b4
	if (ctx.cr6.eq) goto loc_82AFC4B4;
	// lwz r9,40(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	// b 0x82afc4b8
	goto loc_82AFC4B8;
loc_82AFC4B4:
	// li r9,0
	ctx.r9.s64 = 0;
loc_82AFC4B8:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82afc4c8
	if (ctx.cr6.eq) goto loc_82AFC4C8;
	// lwz r8,36(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	// b 0x82afc4cc
	goto loc_82AFC4CC;
loc_82AFC4C8:
	// li r8,0
	ctx.r8.s64 = 0;
loc_82AFC4CC:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82afc4dc
	if (ctx.cr6.eq) goto loc_82AFC4DC;
	// lwz r7,32(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// b 0x82afc4e0
	goto loc_82AFC4E0;
loc_82AFC4DC:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82AFC4E0:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82afc4f0
	if (ctx.cr6.eq) goto loc_82AFC4F0;
	// lwz r6,16(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// b 0x82afc4f4
	goto loc_82AFC4F4;
loc_82AFC4F0:
	// li r6,0
	ctx.r6.s64 = 0;
loc_82AFC4F4:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82afc504
	if (ctx.cr6.eq) goto loc_82AFC504;
	// lwz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// b 0x82afc508
	goto loc_82AFC508;
loc_82AFC504:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82AFC508:
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82afc230
	ctx.lr = 0x82AFC514;
	sub_82AFC230(ctx, base);
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

__attribute__((alias("__imp__sub_82AFC528"))) PPC_WEAK_FUNC(sub_82AFC528);
PPC_FUNC_IMPL(__imp__sub_82AFC528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x82AFC530;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r29,r11,-30204
	ctx.r29.s64 = ctx.r11.s64 + -30204;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// rlwinm. r9,r4,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r28,r10,-30212
	ctx.r28.s64 = ctx.r10.s64 + -30212;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bne 0x82afc574
	if (!ctx.cr0.eq) goto loc_82AFC574;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_82AFC574:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28428
	ctx.r4.s64 = ctx.r11.s64 + -28428;
	// bl 0x82afc1d0
	ctx.lr = 0x82AFC584;
	sub_82AFC1D0(ctx, base);
	// rlwinm. r11,r30,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bne 0x82afc594
	if (!ctx.cr0.eq) goto loc_82AFC594;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_82AFC594:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28436
	ctx.r4.s64 = ctx.r11.s64 + -28436;
	// bl 0x82afc1d0
	ctx.lr = 0x82AFC5A4;
	sub_82AFC1D0(ctx, base);
	// rlwinm. r11,r30,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bne 0x82afc5b4
	if (!ctx.cr0.eq) goto loc_82AFC5B4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_82AFC5B4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28444
	ctx.r4.s64 = ctx.r11.s64 + -28444;
	// bl 0x82afc1d0
	ctx.lr = 0x82AFC5C4;
	sub_82AFC1D0(ctx, base);
	// rlwinm. r11,r30,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bne 0x82afc5d4
	if (!ctx.cr0.eq) goto loc_82AFC5D4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_82AFC5D4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28452
	ctx.r4.s64 = ctx.r11.s64 + -28452;
	// bl 0x82afc1d0
	ctx.lr = 0x82AFC5E4;
	sub_82AFC1D0(ctx, base);
	// rlwinm. r11,r30,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bne 0x82afc5f4
	if (!ctx.cr0.eq) goto loc_82AFC5F4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_82AFC5F4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28456
	ctx.r4.s64 = ctx.r11.s64 + -28456;
	// bl 0x82afc1d0
	ctx.lr = 0x82AFC604;
	sub_82AFC1D0(ctx, base);
	// rlwinm. r11,r30,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bne 0x82afc614
	if (!ctx.cr0.eq) goto loc_82AFC614;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_82AFC614:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28464
	ctx.r4.s64 = ctx.r11.s64 + -28464;
	// bl 0x82afc1d0
	ctx.lr = 0x82AFC624;
	sub_82AFC1D0(ctx, base);
	// rlwinm. r11,r30,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bne 0x82afc634
	if (!ctx.cr0.eq) goto loc_82AFC634;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_82AFC634:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28472
	ctx.r4.s64 = ctx.r11.s64 + -28472;
	// bl 0x82afc1d0
	ctx.lr = 0x82AFC644;
	sub_82AFC1D0(ctx, base);
	// rlwinm. r11,r30,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bne 0x82afc654
	if (!ctx.cr0.eq) goto loc_82AFC654;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_82AFC654:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28488
	ctx.r4.s64 = ctx.r11.s64 + -28488;
	// bl 0x82afc1d0
	ctx.lr = 0x82AFC664;
	sub_82AFC1D0(ctx, base);
	// rlwinm. r11,r30,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bne 0x82afc674
	if (!ctx.cr0.eq) goto loc_82AFC674;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_82AFC674:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28496
	ctx.r4.s64 = ctx.r11.s64 + -28496;
	// bl 0x82afc1d0
	ctx.lr = 0x82AFC684;
	sub_82AFC1D0(ctx, base);
	// rlwinm. r11,r30,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bne 0x82afc694
	if (!ctx.cr0.eq) goto loc_82AFC694;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_82AFC694:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28504
	ctx.r4.s64 = ctx.r11.s64 + -28504;
	// bl 0x82afc1d0
	ctx.lr = 0x82AFC6A4;
	sub_82AFC1D0(ctx, base);
	// rlwinm. r11,r30,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bne 0x82afc6b4
	if (!ctx.cr0.eq) goto loc_82AFC6B4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_82AFC6B4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28512
	ctx.r4.s64 = ctx.r11.s64 + -28512;
	// bl 0x82afc1d0
	ctx.lr = 0x82AFC6C4;
	sub_82AFC1D0(ctx, base);
	// rlwinm. r11,r27,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bne 0x82afc6d4
	if (!ctx.cr0.eq) goto loc_82AFC6D4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_82AFC6D4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28532
	ctx.r4.s64 = ctx.r11.s64 + -28532;
	// bl 0x82afc1d0
	ctx.lr = 0x82AFC6E4;
	sub_82AFC1D0(ctx, base);
	// rlwinm. r11,r27,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bne 0x82afc6f4
	if (!ctx.cr0.eq) goto loc_82AFC6F4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_82AFC6F4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28544
	ctx.r4.s64 = ctx.r11.s64 + -28544;
	// bl 0x82afc1d0
	ctx.lr = 0x82AFC704;
	sub_82AFC1D0(ctx, base);
	// rlwinm. r11,r27,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82afc720
	if (ctx.cr0.eq) goto loc_82AFC720;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-28556
	ctx.r4.s64 = ctx.r11.s64 + -28556;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82afc1d0
	ctx.lr = 0x82AFC720;
	sub_82AFC1D0(ctx, base);
loc_82AFC720:
	// rlwinm. r11,r27,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82afc73c
	if (ctx.cr0.eq) goto loc_82AFC73C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-28576
	ctx.r4.s64 = ctx.r11.s64 + -28576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82afc1d0
	ctx.lr = 0x82AFC73C;
	sub_82AFC1D0(ctx, base);
loc_82AFC73C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// rlwinm. r10,r27,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r30,r11,26556
	ctx.r30.s64 = ctx.r11.s64 + 26556;
	// beq 0x82afc788
	if (ctx.cr0.eq) goto loc_82AFC788;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-28596
	ctx.r4.s64 = ctx.r11.s64 + -28596;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82afc1d0
	ctx.lr = 0x82AFC760;
	sub_82AFC1D0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8292e140
	ctx.lr = 0x82AFC774;
	sub_8292E140(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28616
	ctx.r4.s64 = ctx.r11.s64 + -28616;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82afc1d0
	ctx.lr = 0x82AFC788;
	sub_82AFC1D0(ctx, base);
loc_82AFC788:
	// rlwinm. r11,r27,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82afc81c
	if (ctx.cr0.eq) goto loc_82AFC81C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-28640
	ctx.r4.s64 = ctx.r11.s64 + -28640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82afc1d0
	ctx.lr = 0x82AFC7A4;
	sub_82AFC1D0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8292e140
	ctx.lr = 0x82AFC7B8;
	sub_8292E140(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28660
	ctx.r4.s64 = ctx.r11.s64 + -28660;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82afc1d0
	ctx.lr = 0x82AFC7CC;
	sub_82AFC1D0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8292e140
	ctx.lr = 0x82AFC7E0;
	sub_8292E140(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28680
	ctx.r4.s64 = ctx.r11.s64 + -28680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82afc1d0
	ctx.lr = 0x82AFC7F4;
	sub_82AFC1D0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8292e140
	ctx.lr = 0x82AFC808;
	sub_8292E140(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28700
	ctx.r4.s64 = ctx.r11.s64 + -28700;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82afc1d0
	ctx.lr = 0x82AFC81C;
	sub_82AFC1D0(ctx, base);
loc_82AFC81C:
	// rlwinm. r11,r27,0,20,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xC00;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82afc84c
	if (ctx.cr0.eq) goto loc_82AFC84C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8292e140
	ctx.lr = 0x82AFC838;
	sub_8292E140(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28720
	ctx.r4.s64 = ctx.r11.s64 + -28720;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82afc1d0
	ctx.lr = 0x82AFC84C;
	sub_82AFC1D0(ctx, base);
loc_82AFC84C:
	// rlwinm. r11,r27,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82afc868
	if (ctx.cr0.eq) goto loc_82AFC868;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-28740
	ctx.r4.s64 = ctx.r11.s64 + -28740;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82afc1d0
	ctx.lr = 0x82AFC868;
	sub_82AFC1D0(ctx, base);
loc_82AFC868:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFC870"))) PPC_WEAK_FUNC(sub_82AFC870);
PPC_FUNC_IMPL(__imp__sub_82AFC870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82AFC878;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82afc458
	ctx.lr = 0x82AFC88C;
	sub_82AFC458(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82afc89c
	if (ctx.cr6.eq) goto loc_82AFC89C;
	// lhz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 64);
	// b 0x82afc8a0
	goto loc_82AFC8A0;
loc_82AFC89C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82AFC8A0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82afc8b0
	if (ctx.cr6.eq) goto loc_82AFC8B0;
	// lhz r9,62(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 62);
	// b 0x82afc8b4
	goto loc_82AFC8B4;
loc_82AFC8B0:
	// li r9,0
	ctx.r9.s64 = 0;
loc_82AFC8B4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82afc8c4
	if (ctx.cr6.eq) goto loc_82AFC8C4;
	// lhz r8,60(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 60);
	// b 0x82afc8c8
	goto loc_82AFC8C8;
loc_82AFC8C4:
	// li r8,0
	ctx.r8.s64 = 0;
loc_82AFC8C8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82afc8d8
	if (ctx.cr6.eq) goto loc_82AFC8D8;
	// lhz r7,58(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 58);
	// b 0x82afc8dc
	goto loc_82AFC8DC;
loc_82AFC8D8:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82AFC8DC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82afc8ec
	if (ctx.cr6.eq) goto loc_82AFC8EC;
	// lhz r6,56(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 56);
	// b 0x82afc8f0
	goto loc_82AFC8F0;
loc_82AFC8EC:
	// li r6,0
	ctx.r6.s64 = 0;
loc_82AFC8F0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82afc900
	if (ctx.cr6.eq) goto loc_82AFC900;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82afc904
	goto loc_82AFC904;
loc_82AFC900:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82AFC904:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82afc528
	ctx.lr = 0x82AFC910;
	sub_82AFC528(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFC918"))) PPC_WEAK_FUNC(sub_82AFC918);
PPC_FUNC_IMPL(__imp__sub_82AFC918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82AFC920;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r29,r3,144
	ctx.r29.s64 = ctx.r3.s64 + 144;
	// lwz r3,144(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82afc96c
	if (ctx.cr6.lt) goto loc_82AFC96C;
	// lwz r30,72(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x82afc96c
	if (ctx.cr6.gt) goto loc_82AFC96C;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82afc964
	if (!ctx.cr6.gt) goto loc_82AFC964;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82af9020
	ctx.lr = 0x82AFC964;
	sub_82AF9020(ctx, base);
loc_82AFC964:
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82AFC96C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFC974"))) PPC_WEAK_FUNC(sub_82AFC974);
PPC_FUNC_IMPL(__imp__sub_82AFC974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFC978"))) PPC_WEAK_FUNC(sub_82AFC978);
PPC_FUNC_IMPL(__imp__sub_82AFC978) {
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
	// lwz r10,144(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// addi r11,r3,144
	ctx.r11.s64 = ctx.r3.s64 + 144;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82afc9e8
	if (ctx.cr6.lt) goto loc_82AFC9E8;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r3,76(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwimi r6,r5,12,14,19
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 12) & 0x3F000) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0FFF);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// rlwinm r31,r4,20,0,11
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 20) & 0xFFF00000;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// rlwinm r7,r7,23,0,8
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 23) & 0xFF800000;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// clrlwi r10,r10,10
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFFF;
	// or r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 | ctx.r31.u64;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// rlwimi r11,r6,2,12,29
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r6.u32, 2) & 0xFFFFC) | (ctx.r11.u64 & 0xFFFFFFFFFFF00003);
	// rlwimi r10,r8,22,9,9
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 22) & 0x400000) | (ctx.r10.u64 & 0xFFFFFFFFFFBFFFFF);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x82afc000
	ctx.lr = 0x82AFC9E8;
	sub_82AFC000(ctx, base);
loc_82AFC9E8:
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

__attribute__((alias("__imp__sub_82AFC9FC"))) PPC_WEAK_FUNC(sub_82AFC9FC);
PPC_FUNC_IMPL(__imp__sub_82AFC9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFCA00"))) PPC_WEAK_FUNC(sub_82AFCA00);
PPC_FUNC_IMPL(__imp__sub_82AFCA00) {
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
	// lwz r9,144(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r5,r3,144
	ctx.r5.s64 = ctx.r3.s64 + 144;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x82afca58
	if (ctx.cr6.lt) goto loc_82AFCA58;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwimi r11,r10,4,0,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 4) & 0xFFFFFFF0) | (ctx.r11.u64 & 0xFFFFFFFF0000000F);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,20,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFF00000;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwimi r11,r6,16,12,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r6.u32, 16) & 0xF0000) | (ctx.r11.u64 & 0xFFFFFFFFFFF0FFFF);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82afc078
	ctx.lr = 0x82AFCA58;
	sub_82AFC078(ctx, base);
loc_82AFCA58:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AFCA68"))) PPC_WEAK_FUNC(sub_82AFCA68);
PPC_FUNC_IMPL(__imp__sub_82AFCA68) {
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
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r3,144
	ctx.r5.s64 = ctx.r3.s64 + 144;
	// lwz r3,144(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82afcb8c
	if (ctx.cr6.lt) goto loc_82AFCB8C;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lhz r11,158(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 158);
	// mulli r9,r9,476
	ctx.r9.s64 = ctx.r9.s64 * 476;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82afcad8
	if (ctx.cr0.eq) goto loc_82AFCAD8;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82afcac4
	if (ctx.cr6.lt) goto loc_82AFCAC4;
	// subf r11,r11,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r11.s64;
	// mulli r11,r11,476
	ctx.r11.s64 = ctx.r11.s64 * 476;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82afcadc
	goto loc_82AFCADC;
loc_82AFCAC4:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r3,r11,16389
	ctx.r3.u64 = ctx.r11.u64 | 16389;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
	// b 0x82afcb8c
	goto loc_82AFCB8C;
loc_82AFCAD8:
	// addi r11,r10,-476
	ctx.r11.s64 = ctx.r10.s64 + -476;
loc_82AFCADC:
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x82afcb68
	if (ctx.cr6.lt) goto loc_82AFCB68;
	// beq cr6,0x82afcb34
	if (ctx.cr6.eq) goto loc_82AFCB34;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// blt cr6,0x82afcb08
	if (ctx.cr6.lt) goto loc_82AFCB08;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-28424
	ctx.r3.s64 = ctx.r11.s64 + -28424;
	// bl 0x82fa3be8
	ctx.lr = 0x82AFCAFC;
	sub_82FA3BE8(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82afcb8c
	goto loc_82AFCB8C;
loc_82AFCB08:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r8,4(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// addi r3,r11,408
	ctx.r3.s64 = ctx.r11.s64 + 408;
	// lwz r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stb r6,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r6.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// stb r8,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// stb r7,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r7.u8);
	// bl 0x82afb978
	ctx.lr = 0x82AFCB30;
	sub_82AFB978(ctx, base);
	// b 0x82afcb88
	goto loc_82AFCB88;
loc_82AFCB34:
	// lfs f0,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stb r6,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r6.u8);
	// lfs f13,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f12,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r11,420
	ctx.r3.s64 = ctx.r11.s64 + 420;
	// lfs f11,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x82afba00
	ctx.lr = 0x82AFCB64;
	sub_82AFBA00(ctx, base);
	// b 0x82afcb88
	goto loc_82AFCB88;
loc_82AFCB68:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r6,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r6.u8);
	// addi r3,r11,396
	ctx.r3.s64 = ctx.r11.s64 + 396;
	// addic r8,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// subfe r10,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// bl 0x82afb900
	ctx.lr = 0x82AFCB88;
	sub_82AFB900(ctx, base);
loc_82AFCB88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AFCB8C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AFCB9C"))) PPC_WEAK_FUNC(sub_82AFCB9C);
PPC_FUNC_IMPL(__imp__sub_82AFCB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFCBA0"))) PPC_WEAK_FUNC(sub_82AFCBA0);
PPC_FUNC_IMPL(__imp__sub_82AFCBA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82AFCBA8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r5,r3,144
	ctx.r5.s64 = ctx.r3.s64 + 144;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82afcc34
	if (ctx.cr6.lt) goto loc_82AFCC34;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r28,72(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r27,228(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// rlwinm r31,r4,4,0,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwimi r10,r9,1,30,30
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 1) & 0x2) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFD);
	// rlwinm r9,r8,31,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x80000000;
	// std r30,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r30.u64);
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// std r30,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r30.u64);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwimi r27,r10,13,0,18
	ctx.r27.u64 = (__builtin_rotateleft32(ctx.r10.u32, 13) & 0xFFFFE000) | (ctx.r27.u64 & 0xFFFFFFFF00001FFF);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwimi r6,r27,7,0,24
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r27.u32, 7) & 0xFFFFFF80) | (ctx.r6.u64 & 0xFFFFFFFF0000007F);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// rlwinm r10,r6,9,0,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 9) & 0xFFFFFE00;
	// lwzx r8,r11,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// oris r8,r8,32768
	ctx.r8.u64 = ctx.r8.u64 | 2147483648;
	// stwx r8,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u32);
	// lwz r3,68(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// clrlwi r11,r11,23
	ctx.r11.u64 = ctx.r11.u32 & 0x1FF;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,0,23,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFF800001FF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x82afb878
	ctx.lr = 0x82AFCC34;
	sub_82AFB878(ctx, base);
loc_82AFCC34:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFCC3C"))) PPC_WEAK_FUNC(sub_82AFCC3C);
PPC_FUNC_IMPL(__imp__sub_82AFCC3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFCC40"))) PPC_WEAK_FUNC(sub_82AFCC40);
PPC_FUNC_IMPL(__imp__sub_82AFCC40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82AFCC48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r29,r3,144
	ctx.r29.s64 = ctx.r3.s64 + 144;
	// lwz r3,144(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82afcc94
	if (ctx.cr6.lt) goto loc_82AFCC94;
	// lwz r30,108(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x82afcc94
	if (ctx.cr6.gt) goto loc_82AFCC94;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82afcc8c
	if (!ctx.cr6.gt) goto loc_82AFCC8C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82af91d0
	ctx.lr = 0x82AFCC8C;
	sub_82AF91D0(ctx, base);
loc_82AFCC8C:
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82AFCC94:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFCC9C"))) PPC_WEAK_FUNC(sub_82AFCC9C);
PPC_FUNC_IMPL(__imp__sub_82AFCC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFCCA0"))) PPC_WEAK_FUNC(sub_82AFCCA0);
PPC_FUNC_IMPL(__imp__sub_82AFCCA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82AFCCA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r29,r3,144
	ctx.r29.s64 = ctx.r3.s64 + 144;
	// lwz r3,144(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82afccf4
	if (ctx.cr6.lt) goto loc_82AFCCF4;
	// lwz r30,104(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x82afccf4
	if (ctx.cr6.gt) goto loc_82AFCCF4;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82afccec
	if (!ctx.cr6.gt) goto loc_82AFCCEC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82af9140
	ctx.lr = 0x82AFCCEC;
	sub_82AF9140(ctx, base);
loc_82AFCCEC:
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82AFCCF4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFCCFC"))) PPC_WEAK_FUNC(sub_82AFCCFC);
PPC_FUNC_IMPL(__imp__sub_82AFCCFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFCD00"))) PPC_WEAK_FUNC(sub_82AFCD00);
PPC_FUNC_IMPL(__imp__sub_82AFCD00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82AFCD08;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// addi r26,r3,144
	ctx.r26.s64 = ctx.r3.s64 + 144;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82afcda4
	if (ctx.cr6.lt) goto loc_82AFCDA4;
	// lwz r29,104(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x82afcd70
	if (ctx.cr6.gt) goto loc_82AFCD70;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r27,r4,1
	ctx.r27.s64 = ctx.r4.s64 + 1;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82afcd60
	if (!ctx.cr6.gt) goto loc_82AFCD60;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82af9140
	ctx.lr = 0x82AFCD60;
	sub_82AF9140(ctx, base);
loc_82AFCD60:
	// stw r27,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r27.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82afcda4
	if (ctx.cr6.lt) goto loc_82AFCDA4;
loc_82AFCD70:
	// lwz r10,104(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// mulli r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 * 12;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwimi r30,r24,1,0,30
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r24.u32, 1) & 0xFFFFFFFE) | (ctx.r30.u64 & 0xFFFFFFFF00000001);
	// rlwinm r10,r30,18,0,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 18) & 0xFFFC0000;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// clrlwi r9,r9,15
	ctx.r9.u64 = ctx.r9.u32 & 0x1FFFF;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// oris r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 131072;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_82AFCDA4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFCDAC"))) PPC_WEAK_FUNC(sub_82AFCDAC);
PPC_FUNC_IMPL(__imp__sub_82AFCDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFCDB0"))) PPC_WEAK_FUNC(sub_82AFCDB0);
PPC_FUNC_IMPL(__imp__sub_82AFCDB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82AFCDB8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// addi r26,r3,144
	ctx.r26.s64 = ctx.r3.s64 + 144;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82afce50
	if (ctx.cr6.lt) goto loc_82AFCE50;
	// lwz r29,104(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x82afce20
	if (ctx.cr6.gt) goto loc_82AFCE20;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r27,r4,1
	ctx.r27.s64 = ctx.r4.s64 + 1;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82afce10
	if (!ctx.cr6.gt) goto loc_82AFCE10;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82af9140
	ctx.lr = 0x82AFCE10;
	sub_82AF9140(ctx, base);
loc_82AFCE10:
	// stw r27,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r27.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82afce50
	if (ctx.cr6.lt) goto loc_82AFCE50;
loc_82AFCE20:
	// lwz r10,104(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// mulli r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 * 12;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwimi r30,r24,1,0,30
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r24.u32, 1) & 0xFFFFFFFE) | (ctx.r30.u64 & 0xFFFFFFFF00000001);
	// rlwinm r10,r30,18,0,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 18) & 0xFFFC0000;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// clrlwi r9,r9,15
	ctx.r9.u64 = ctx.r9.u32 & 0x1FFFF;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_82AFCE50:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFCE58"))) PPC_WEAK_FUNC(sub_82AFCE58);
PPC_FUNC_IMPL(__imp__sub_82AFCE58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82AFCE60;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r29,r3,144
	ctx.r29.s64 = ctx.r3.s64 + 144;
	// lwz r3,144(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82afceac
	if (ctx.cr6.lt) goto loc_82AFCEAC;
	// lwz r30,100(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x82afceac
	if (ctx.cr6.gt) goto loc_82AFCEAC;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82afcea4
	if (!ctx.cr6.gt) goto loc_82AFCEA4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82af90b0
	ctx.lr = 0x82AFCEA4;
	sub_82AF90B0(ctx, base);
loc_82AFCEA4:
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82AFCEAC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFCEB4"))) PPC_WEAK_FUNC(sub_82AFCEB4);
PPC_FUNC_IMPL(__imp__sub_82AFCEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFCEB8"))) PPC_WEAK_FUNC(sub_82AFCEB8);
PPC_FUNC_IMPL(__imp__sub_82AFCEB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82AFCEC0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r27,r3,144
	ctx.r27.s64 = ctx.r3.s64 + 144;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82afcf40
	if (ctx.cr6.lt) goto loc_82AFCF40;
	// lwz r31,100(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x82afcf20
	if (ctx.cr6.gt) goto loc_82AFCF20;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r30,r4,1
	ctx.r30.s64 = ctx.r4.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82afcf10
	if (!ctx.cr6.gt) goto loc_82AFCF10;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af90b0
	ctx.lr = 0x82AFCF10;
	sub_82AF90B0(ctx, base);
loc_82AFCF10:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82afcf40
	if (ctx.cr6.lt) goto loc_82AFCF40;
loc_82AFCF20:
	// lwz r10,100(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82AFCF40:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFCF48"))) PPC_WEAK_FUNC(sub_82AFCF48);
PPC_FUNC_IMPL(__imp__sub_82AFCF48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82AFCF50;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r29,r3,144
	ctx.r29.s64 = ctx.r3.s64 + 144;
	// lwz r3,144(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82afcf9c
	if (ctx.cr6.lt) goto loc_82AFCF9C;
	// lwz r30,112(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x82afcf9c
	if (ctx.cr6.gt) goto loc_82AFCF9C;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82afcf94
	if (!ctx.cr6.gt) goto loc_82AFCF94;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82af8f00
	ctx.lr = 0x82AFCF94;
	sub_82AF8F00(ctx, base);
loc_82AFCF94:
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82AFCF9C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFCFA4"))) PPC_WEAK_FUNC(sub_82AFCFA4);
PPC_FUNC_IMPL(__imp__sub_82AFCFA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFCFA8"))) PPC_WEAK_FUNC(sub_82AFCFA8);
PPC_FUNC_IMPL(__imp__sub_82AFCFA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82AFCFB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r29,r3,144
	ctx.r29.s64 = ctx.r3.s64 + 144;
	// lwz r3,144(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82afcffc
	if (ctx.cr6.lt) goto loc_82AFCFFC;
	// lwz r30,120(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x82afcffc
	if (ctx.cr6.gt) goto loc_82AFCFFC;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82afcff4
	if (!ctx.cr6.gt) goto loc_82AFCFF4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82af8f90
	ctx.lr = 0x82AFCFF4;
	sub_82AF8F90(ctx, base);
loc_82AFCFF4:
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82AFCFFC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFD004"))) PPC_WEAK_FUNC(sub_82AFD004);
PPC_FUNC_IMPL(__imp__sub_82AFD004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFD008"))) PPC_WEAK_FUNC(sub_82AFD008);
PPC_FUNC_IMPL(__imp__sub_82AFD008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82AFD010;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// addi r27,r3,144
	ctx.r27.s64 = ctx.r3.s64 + 144;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82afd090
	if (ctx.cr6.lt) goto loc_82AFD090;
	// lwz r30,120(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x82afd074
	if (ctx.cr6.gt) goto loc_82AFD074;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r29,r4,1
	ctx.r29.s64 = ctx.r4.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82afd064
	if (!ctx.cr6.gt) goto loc_82AFD064;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82af8f90
	ctx.lr = 0x82AFD064;
	sub_82AF8F90(ctx, base);
loc_82AFD064:
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82afd090
	if (ctx.cr6.lt) goto loc_82AFD090;
loc_82AFD074:
	// lwz r10,120(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 120);
	// mulli r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 * 24;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// stw r25,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
loc_82AFD090:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFD098"))) PPC_WEAK_FUNC(sub_82AFD098);
PPC_FUNC_IMPL(__imp__sub_82AFD098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82AFD0A0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r3,144
	ctx.r27.s64 = ctx.r3.s64 + 144;
	// lwz r3,144(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82afd148
	if (ctx.cr6.lt) goto loc_82AFD148;
	// lwz r31,120(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 120);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x82afd100
	if (ctx.cr6.gt) goto loc_82AFD100;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r4,1
	ctx.r29.s64 = ctx.r4.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82afd0f0
	if (!ctx.cr6.gt) goto loc_82AFD0F0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8f90
	ctx.lr = 0x82AFD0F0;
	sub_82AF8F90(ctx, base);
loc_82AFD0F0:
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82afd148
	if (ctx.cr6.lt) goto loc_82AFD148;
loc_82AFD100:
	// lwz r10,120(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 120);
	// mulli r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 * 24;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x82afd144
	if (ctx.cr6.gt) goto loc_82AFD144;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82afd140
	if (!ctx.cr6.gt) goto loc_82AFD140;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8f00
	ctx.lr = 0x82AFD140;
	sub_82AF8F00(ctx, base);
loc_82AFD140:
	// stw r26,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r26.u32);
loc_82AFD144:
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
loc_82AFD148:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFD150"))) PPC_WEAK_FUNC(sub_82AFD150);
PPC_FUNC_IMPL(__imp__sub_82AFD150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82AFD158;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// addi r26,r3,144
	ctx.r26.s64 = ctx.r3.s64 + 144;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82afd234
	if (ctx.cr6.lt) goto loc_82AFD234;
	// lwz r31,120(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x82afd1c4
	if (ctx.cr6.gt) goto loc_82AFD1C4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r27,r4,1
	ctx.r27.s64 = ctx.r4.s64 + 1;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82afd1b4
	if (!ctx.cr6.gt) goto loc_82AFD1B4;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8f90
	ctx.lr = 0x82AFD1B4;
	sub_82AF8F90(ctx, base);
loc_82AFD1B4:
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82afd234
	if (ctx.cr6.lt) goto loc_82AFD234;
loc_82AFD1C4:
	// lwz r10,120(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 120);
	// mulli r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 * 24;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r30,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x82afd218
	if (ctx.cr6.gt) goto loc_82AFD218;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r28,r29,1
	ctx.r28.s64 = ctx.r29.s64 + 1;
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82afd208
	if (!ctx.cr6.gt) goto loc_82AFD208;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82af8f00
	ctx.lr = 0x82AFD208;
	sub_82AF8F00(ctx, base);
loc_82AFD208:
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82afd234
	if (ctx.cr6.lt) goto loc_82AFD234;
loc_82AFD218:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r11,r29,28
	ctx.r11.s64 = ctx.r29.s64 * 28;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// stw r24,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r24.u32);
	// stw r23,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r23.u32);
loc_82AFD234:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFD23C"))) PPC_WEAK_FUNC(sub_82AFD23C);
PPC_FUNC_IMPL(__imp__sub_82AFD23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFD240"))) PPC_WEAK_FUNC(sub_82AFD240);
PPC_FUNC_IMPL(__imp__sub_82AFD240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82AFD248;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r26,r3,144
	ctx.r26.s64 = ctx.r3.s64 + 144;
	// lwz r3,144(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82afd344
	if (ctx.cr6.lt) goto loc_82AFD344;
	// lwz r31,120(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 120);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x82afd2ac
	if (ctx.cr6.gt) goto loc_82AFD2AC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r4,1
	ctx.r29.s64 = ctx.r4.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82afd29c
	if (!ctx.cr6.gt) goto loc_82AFD29C;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8f90
	ctx.lr = 0x82AFD29C;
	sub_82AF8F90(ctx, base);
loc_82AFD29C:
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82afd344
	if (ctx.cr6.lt) goto loc_82AFD344;
loc_82AFD2AC:
	// lwz r10,120(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 120);
	// mulli r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 * 24;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r30,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bgt cr6,0x82afd300
	if (ctx.cr6.gt) goto loc_82AFD300;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r29,r27,1
	ctx.r29.s64 = ctx.r27.s64 + 1;
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82afd2f0
	if (!ctx.cr6.gt) goto loc_82AFD2F0;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82af8f00
	ctx.lr = 0x82AFD2F0;
	sub_82AF8F00(ctx, base);
loc_82AFD2F0:
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82afd344
	if (ctx.cr6.lt) goto loc_82AFD344;
loc_82AFD300:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r11,r27,28
	ctx.r11.s64 = ctx.r27.s64 * 28;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// cmplw cr6,r10,r25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r25.u32, ctx.xer);
	// bgt cr6,0x82afd340
	if (ctx.cr6.gt) goto loc_82AFD340;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r25,r10
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82afd33c
	if (!ctx.cr6.gt) goto loc_82AFD33C;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af92f0
	ctx.lr = 0x82AFD33C;
	sub_82AF92F0(ctx, base);
loc_82AFD33C:
	// stw r25,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r25.u32);
loc_82AFD340:
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
loc_82AFD344:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFD34C"))) PPC_WEAK_FUNC(sub_82AFD34C);
PPC_FUNC_IMPL(__imp__sub_82AFD34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFD350"))) PPC_WEAK_FUNC(sub_82AFD350);
PPC_FUNC_IMPL(__imp__sub_82AFD350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82AFD358;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// addi r26,r3,144
	ctx.r26.s64 = ctx.r3.s64 + 144;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82afd470
	if (ctx.cr6.lt) goto loc_82AFD470;
	// lwz r31,120(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x82afd3c0
	if (ctx.cr6.gt) goto loc_82AFD3C0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r4,1
	ctx.r29.s64 = ctx.r4.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82afd3b0
	if (!ctx.cr6.gt) goto loc_82AFD3B0;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8f90
	ctx.lr = 0x82AFD3B0;
	sub_82AF8F90(ctx, base);
loc_82AFD3B0:
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82afd470
	if (ctx.cr6.lt) goto loc_82AFD470;
loc_82AFD3C0:
	// lwz r10,120(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 120);
	// mulli r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 * 24;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r30,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bgt cr6,0x82afd414
	if (ctx.cr6.gt) goto loc_82AFD414;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r29,r27,1
	ctx.r29.s64 = ctx.r27.s64 + 1;
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82afd404
	if (!ctx.cr6.gt) goto loc_82AFD404;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82af8f00
	ctx.lr = 0x82AFD404;
	sub_82AF8F00(ctx, base);
loc_82AFD404:
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82afd470
	if (ctx.cr6.lt) goto loc_82AFD470;
loc_82AFD414:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r11,r27,28
	ctx.r11.s64 = ctx.r27.s64 * 28;
	// stwx r27,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r27.u32);
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bgt cr6,0x82afd464
	if (ctx.cr6.gt) goto loc_82AFD464;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r29,r25,1
	ctx.r29.s64 = ctx.r25.s64 + 1;
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82afd454
	if (!ctx.cr6.gt) goto loc_82AFD454;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82af92f0
	ctx.lr = 0x82AFD454;
	sub_82AF92F0(ctx, base);
loc_82AFD454:
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82afd470
	if (ctx.cr6.lt) goto loc_82AFD470;
loc_82AFD464:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r25,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r24,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r24.u32);
loc_82AFD470:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFD478"))) PPC_WEAK_FUNC(sub_82AFD478);
PPC_FUNC_IMPL(__imp__sub_82AFD478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82AFD480;
	__savegprlr_27(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// beq 0x82afd5b8
	if (ctx.cr0.eq) goto loc_82AFD5B8;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r31,r11,32570
	ctx.r31.s64 = ctx.r11.s64 + 32570;
loc_82AFD4A8:
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r30,r29,4
	ctx.r30.s64 = ctx.r29.s64 + 4;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mulli r10,r10,276
	ctx.r10.s64 = ctx.r10.s64 * 276;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82afd508
	if (!ctx.cr6.lt) goto loc_82AFD508;
loc_82AFD4C8:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82AFD4D0:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r6,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r6.s64;
	// beq 0x82afd4f4
	if (ctx.cr0.eq) goto loc_82AFD4F4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82afd4d0
	if (ctx.cr6.eq) goto loc_82AFD4D0;
loc_82AFD4F4:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82afd5ec
	if (ctx.cr0.eq) goto loc_82AFD5EC;
	// addi r9,r9,276
	ctx.r9.s64 = ctx.r9.s64 + 276;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82afd4c8
	if (ctx.cr6.lt) goto loc_82AFD4C8;
loc_82AFD508:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r5,260
	ctx.r5.s64 = 260;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r11.u32);
	// bl 0x82fa5b30
	ctx.lr = 0x82AFD520;
	sub_82FA5B30(ctx, base);
	// addi r10,r1,344
	ctx.r10.s64 = ctx.r1.s64 + 344;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stb r11,339(r1)
	PPC_STORE_U8(ctx.r1.u32 + 339, ctx.r11.u8);
	// stw r11,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r11.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// bne cr6,0x82afd584
	if (!ctx.cr6.eq) goto loc_82AFD584;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,128
	ctx.r8.s64 = 128;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a82d10
	ctx.lr = 0x82AFD560;
	sub_82A82D10(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82afd584
	if (ctx.cr6.eq) goto loc_82AFD584;
	// addi r6,r1,344
	ctx.r6.s64 = ctx.r1.s64 + 344;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8309dca8
	ctx.lr = 0x82AFD57C;
	sub_8309DCA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a756a0
	ctx.lr = 0x82AFD584;
	sub_82A756A0(ctx, base);
loc_82AFD584:
	// addi r31,r29,144
	ctx.r31.s64 = ctx.r29.s64 + 144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82afba88
	ctx.lr = 0x82AFD598;
	sub_82AFBA88(ctx, base);
	// lwz r11,144(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82afd5ac
	if (ctx.cr6.lt) goto loc_82AFD5AC;
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_82AFD5AC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82AFD5B0:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_82AFD5B8:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82AFD5BC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82afd5bc
	if (!ctx.cr6.eq) goto loc_82AFD5BC;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,260
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 260, ctx.xer);
	// blt cr6,0x82afd4a8
	if (ctx.cr6.lt) goto loc_82AFD4A8;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82afd5b0
	goto loc_82AFD5B0;
loc_82AFD5EC:
	// lwz r11,260(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 260);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// b 0x82afd5b0
	goto loc_82AFD5B0;
}

__attribute__((alias("__imp__sub_82AFD5FC"))) PPC_WEAK_FUNC(sub_82AFD5FC);
PPC_FUNC_IMPL(__imp__sub_82AFD5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFD600"))) PPC_WEAK_FUNC(sub_82AFD600);
PPC_FUNC_IMPL(__imp__sub_82AFD600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82AFD608;
	__savegprlr_14(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82af8860
	ctx.lr = 0x82AFD61C;
	sub_82AF8860(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r28,r10,-28296
	ctx.r28.s64 = ctx.r10.s64 + -28296;
	// addi r4,r11,-29564
	ctx.r4.s64 = ctx.r11.s64 + -29564;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// bl 0x82af8808
	ctx.lr = 0x82AFD640;
	sub_82AF8808(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82af9608
	ctx.lr = 0x82AFD648;
	sub_82AF9608(ctx, base);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r18,r29,16
	ctx.r18.s64 = ctx.r29.s64 + 16;
	// mulli r11,r11,476
	ctx.r11.s64 = ctx.r11.s64 * 476;
	// extsw r31,r10
	ctx.r31.s64 = ctx.r10.s32;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82afd944
	if (!ctx.cr6.lt) goto loc_82AFD944;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r28,-32242
	ctx.r28.s64 = -2113011712;
	// lis r23,-32242
	ctx.r23.s64 = -2113011712;
	// lis r24,-32242
	ctx.r24.s64 = -2113011712;
	// lis r25,-32242
	ctx.r25.s64 = -2113011712;
	// lis r26,-32242
	ctx.r26.s64 = -2113011712;
	// lis r27,-32242
	ctx.r27.s64 = -2113011712;
	// lis r3,-32242
	ctx.r3.s64 = -2113011712;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// lis r6,-32227
	ctx.r6.s64 = -2112028672;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r9,r9,-28144
	ctx.r9.s64 = ctx.r9.s64 + -28144;
	// addi r22,r28,-28312
	ctx.r22.s64 = ctx.r28.s64 + -28312;
	// addi r23,r23,-29644
	ctx.r23.s64 = ctx.r23.s64 + -29644;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r24,r24,-28340
	ctx.r24.s64 = ctx.r24.s64 + -28340;
	// addi r25,r25,-28348
	ctx.r25.s64 = ctx.r25.s64 + -28348;
	// addi r26,r26,-28356
	ctx.r26.s64 = ctx.r26.s64 + -28356;
	// addi r27,r27,-28368
	ctx.r27.s64 = ctx.r27.s64 + -28368;
	// addi r21,r3,-28388
	ctx.r21.s64 = ctx.r3.s64 + -28388;
	// addi r20,r4,2956
	ctx.r20.s64 = ctx.r4.s64 + 2956;
	// addi r19,r5,-28400
	ctx.r19.s64 = ctx.r5.s64 + -28400;
	// addi r16,r6,3056
	ctx.r16.s64 = ctx.r6.s64 + 3056;
	// addi r15,r7,-28404
	ctx.r15.s64 = ctx.r7.s64 + -28404;
	// addi r14,r8,-27944
	ctx.r14.s64 = ctx.r8.s64 + -27944;
	// addi r17,r10,-4200
	ctx.r17.s64 = ctx.r10.s64 + -4200;
	// addi r28,r11,5564
	ctx.r28.s64 = ctx.r11.s64 + 5564;
loc_82AFD6E4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82af8860
	ctx.lr = 0x82AFD6EC;
	sub_82AF8860(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82af8808
	ctx.lr = 0x82AFD6FC;
	sub_82AF8808(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,15
	ctx.r5.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// addi r3,r1,97
	ctx.r3.s64 = ctx.r1.s64 + 97;
	// bl 0x82fa7cf0
	ctx.lr = 0x82AFD714;
	sub_82FA7CF0(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82afd808
	if (ctx.cr0.eq) goto loc_82AFD808;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82af8a20
	ctx.lr = 0x82AFD730;
	sub_82AF8A20(ctx, base);
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lis r10,18008
	ctx.r10.s64 = 1180172288;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82afd774
	if (ctx.cr6.eq) goto loc_82AFD774;
	// lis r10,-2
	ctx.r10.s64 = -131072;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82afd76c
	if (ctx.cr6.eq) goto loc_82AFD76C;
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82afd764
	if (ctx.cr6.eq) goto loc_82AFD764;
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// b 0x82afd778
	goto loc_82AFD778;
loc_82AFD764:
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// b 0x82afd778
	goto loc_82AFD778;
loc_82AFD76C:
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82afd778
	goto loc_82AFD778;
loc_82AFD774:
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
loc_82AFD778:
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// lbz r8,259(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 259);
	// li r4,16
	ctx.r4.s64 = 16;
	// lbz r7,258(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 258);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82fac410
	ctx.lr = 0x82AFD790;
	sub_82FAC410(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82af8a20
	ctx.lr = 0x82AFD7A0;
	sub_82AF8A20(ctx, base);
	// lwz r11,460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82afd7d4
	if (ctx.cr6.eq) goto loc_82AFD7D4;
	// lwz r10,44(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82af8a20
	ctx.lr = 0x82AFD7C0;
	sub_82AF8A20(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r6,456(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AFD7D4;
	sub_82AF8808(ctx, base);
loc_82AFD7D4:
	// lwz r10,468(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82afd808
	if (ctx.cr6.eq) goto loc_82AFD808;
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82af8a20
	ctx.lr = 0x82AFD7F4;
	sub_82AF8A20(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r6,464(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AFD808;
	sub_82AF8808(ctx, base);
loc_82AFD808:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r6,472(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AFD81C;
	sub_82AF8808(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,268(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// lwz r6,264(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r5,260(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// bl 0x82af8808
	ctx.lr = 0x82AFD834;
	sub_82AF8808(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82af9608
	ctx.lr = 0x82AFD83C;
	sub_82AF9608(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82afae78
	ctx.lr = 0x82AFD84C;
	sub_82AFAE78(ctx, base);
	// addi r5,r31,276
	ctx.r5.s64 = ctx.r31.s64 + 276;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,272(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82af9920
	ctx.lr = 0x82AFD860;
	sub_82AF9920(ctx, base);
	// addi r6,r31,336
	ctx.r6.s64 = ctx.r31.s64 + 336;
	// addi r5,r31,324
	ctx.r5.s64 = ctx.r31.s64 + 324;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82afb470
	ctx.lr = 0x82AFD874;
	sub_82AFB470(ctx, base);
	// addi r5,r31,288
	ctx.r5.s64 = ctx.r31.s64 + 288;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,272(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82af9a78
	ctx.lr = 0x82AFD888;
	sub_82AF9A78(ctx, base);
	// addi r5,r31,352
	ctx.r5.s64 = ctx.r31.s64 + 352;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82af9c58
	ctx.lr = 0x82AFD898;
	sub_82AF9C58(ctx, base);
	// addi r5,r31,376
	ctx.r5.s64 = ctx.r31.s64 + 376;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82afb640
	ctx.lr = 0x82AFD8A8;
	sub_82AFB640(ctx, base);
	// addi r5,r31,364
	ctx.r5.s64 = ctx.r31.s64 + 364;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,272(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82af9d68
	ctx.lr = 0x82AFD8BC;
	sub_82AF9D68(ctx, base);
	// addi r5,r31,300
	ctx.r5.s64 = ctx.r31.s64 + 300;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,272(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82af9ec8
	ctx.lr = 0x82AFD8D0;
	sub_82AF9EC8(ctx, base);
	// addi r5,r31,312
	ctx.r5.s64 = ctx.r31.s64 + 312;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82afa098
	ctx.lr = 0x82AFD8E0;
	sub_82AFA098(ctx, base);
	// addi r7,r31,420
	ctx.r7.s64 = ctx.r31.s64 + 420;
	// addi r6,r31,408
	ctx.r6.s64 = ctx.r31.s64 + 408;
	// addi r5,r31,396
	ctx.r5.s64 = ctx.r31.s64 + 396;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82afa240
	ctx.lr = 0x82AFD8F8;
	sub_82AFA240(ctx, base);
	// addi r5,r31,432
	ctx.r5.s64 = ctx.r31.s64 + 432;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82afa588
	ctx.lr = 0x82AFD908;
	sub_82AFA588(ctx, base);
	// addi r5,r31,444
	ctx.r5.s64 = ctx.r31.s64 + 444;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82afa808
	ctx.lr = 0x82AFD918;
	sub_82AFA808(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82af88c0
	ctx.lr = 0x82AFD924;
	sub_82AF88C0(ctx, base);
	// lwz r11,4(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// lwz r10,0(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// addi r31,r31,476
	ctx.r31.s64 = ctx.r31.s64 + 476;
	// mulli r11,r11,476
	ctx.r11.s64 = ctx.r11.s64 * 476;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82afd6e4
	if (ctx.cr6.lt) goto loc_82AFD6E4;
	// lwz r28,88(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_82AFD944:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82af88c0
	ctx.lr = 0x82AFD950;
	sub_82AF88C0(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFD958"))) PPC_WEAK_FUNC(sub_82AFD958);
PPC_FUNC_IMPL(__imp__sub_82AFD958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82AFD960;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r26,r3,144
	ctx.r26.s64 = ctx.r3.s64 + 144;
	// li r25,-1
	ctx.r25.s64 = -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82afd9f0
	if (ctx.cr6.lt) goto loc_82AFD9F0;
	// lwz r28,48(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82AFD984:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82afd984
	if (!ctx.cr6.eq) goto loc_82AFD984;
	// subf r11,r27,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r27.s64;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r31,r3,44
	ctx.r31.s64 = ctx.r3.s64 + 44;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r29,r11,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r29,r28
	ctx.r11.u64 = ctx.r29.u64 + ctx.r28.u64;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82afd9c8
	if (!ctx.cr6.gt) goto loc_82AFD9C8;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af94a0
	ctx.lr = 0x82AFD9C8;
	sub_82AF94A0(ctx, base);
loc_82AFD9C8:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82afd9f0
	if (ctx.cr6.lt) goto loc_82AFD9F0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r29,1
	ctx.r5.s64 = ctx.r29.s64 + 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82AFD9EC;
	sub_82FA77C0(ctx, base);
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
loc_82AFD9F0:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFD9FC"))) PPC_WEAK_FUNC(sub_82AFD9FC);
PPC_FUNC_IMPL(__imp__sub_82AFD9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFDA00"))) PPC_WEAK_FUNC(sub_82AFDA00);
PPC_FUNC_IMPL(__imp__sub_82AFDA00) {
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
	// lis r4,25735
	ctx.r4.s64 = 1686568960;
	// li r3,172
	ctx.r3.s64 = 172;
	// bl 0x82691410
	ctx.lr = 0x82AFDA18;
	sub_82691410(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82afda28
	if (ctx.cr0.eq) goto loc_82AFDA28;
	// bl 0x82afbb78
	ctx.lr = 0x82AFDA24;
	sub_82AFBB78(ctx, base);
	// b 0x82afda2c
	goto loc_82AFDA2C;
loc_82AFDA28:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AFDA2C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AFDA3C"))) PPC_WEAK_FUNC(sub_82AFDA3C);
PPC_FUNC_IMPL(__imp__sub_82AFDA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFDA40"))) PPC_WEAK_FUNC(sub_82AFDA40);
PPC_FUNC_IMPL(__imp__sub_82AFDA40) {
	PPC_FUNC_PROLOGUE();
	// b 0x82afc158
	sub_82AFC158(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFDA44"))) PPC_WEAK_FUNC(sub_82AFDA44);
PPC_FUNC_IMPL(__imp__sub_82AFDA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFDA48"))) PPC_WEAK_FUNC(sub_82AFDA48);
PPC_FUNC_IMPL(__imp__sub_82AFDA48) {
	PPC_FUNC_PROLOGUE();
	// b 0x82afc870
	sub_82AFC870(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFDA4C"))) PPC_WEAK_FUNC(sub_82AFDA4C);
PPC_FUNC_IMPL(__imp__sub_82AFDA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFDA50"))) PPC_WEAK_FUNC(sub_82AFDA50);
PPC_FUNC_IMPL(__imp__sub_82AFDA50) {
	PPC_FUNC_PROLOGUE();
	// b 0x82afc918
	sub_82AFC918(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFDA54"))) PPC_WEAK_FUNC(sub_82AFDA54);
PPC_FUNC_IMPL(__imp__sub_82AFDA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFDA58"))) PPC_WEAK_FUNC(sub_82AFDA58);
PPC_FUNC_IMPL(__imp__sub_82AFDA58) {
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
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82afcba0
	ctx.lr = 0x82AFDA70;
	sub_82AFCBA0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AFDA80"))) PPC_WEAK_FUNC(sub_82AFDA80);
PPC_FUNC_IMPL(__imp__sub_82AFDA80) {
	PPC_FUNC_PROLOGUE();
	// b 0x82afcc40
	sub_82AFCC40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFDA84"))) PPC_WEAK_FUNC(sub_82AFDA84);
PPC_FUNC_IMPL(__imp__sub_82AFDA84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFDA88"))) PPC_WEAK_FUNC(sub_82AFDA88);
PPC_FUNC_IMPL(__imp__sub_82AFDA88) {
	PPC_FUNC_PROLOGUE();
	// b 0x82afcca0
	sub_82AFCCA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFDA8C"))) PPC_WEAK_FUNC(sub_82AFDA8C);
PPC_FUNC_IMPL(__imp__sub_82AFDA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFDA90"))) PPC_WEAK_FUNC(sub_82AFDA90);
PPC_FUNC_IMPL(__imp__sub_82AFDA90) {
	PPC_FUNC_PROLOGUE();
	// b 0x82afcd00
	sub_82AFCD00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFDA94"))) PPC_WEAK_FUNC(sub_82AFDA94);
PPC_FUNC_IMPL(__imp__sub_82AFDA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFDA98"))) PPC_WEAK_FUNC(sub_82AFDA98);
PPC_FUNC_IMPL(__imp__sub_82AFDA98) {
	PPC_FUNC_PROLOGUE();
	// b 0x82afcdb0
	sub_82AFCDB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFDA9C"))) PPC_WEAK_FUNC(sub_82AFDA9C);
PPC_FUNC_IMPL(__imp__sub_82AFDA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFDAA0"))) PPC_WEAK_FUNC(sub_82AFDAA0);
PPC_FUNC_IMPL(__imp__sub_82AFDAA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82afce58
	sub_82AFCE58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFDAA4"))) PPC_WEAK_FUNC(sub_82AFDAA4);
PPC_FUNC_IMPL(__imp__sub_82AFDAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFDAA8"))) PPC_WEAK_FUNC(sub_82AFDAA8);
PPC_FUNC_IMPL(__imp__sub_82AFDAA8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82afceb8
	sub_82AFCEB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFDAAC"))) PPC_WEAK_FUNC(sub_82AFDAAC);
PPC_FUNC_IMPL(__imp__sub_82AFDAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFDAB0"))) PPC_WEAK_FUNC(sub_82AFDAB0);
PPC_FUNC_IMPL(__imp__sub_82AFDAB0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82afca68
	sub_82AFCA68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFDAB4"))) PPC_WEAK_FUNC(sub_82AFDAB4);
PPC_FUNC_IMPL(__imp__sub_82AFDAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFDAB8"))) PPC_WEAK_FUNC(sub_82AFDAB8);
PPC_FUNC_IMPL(__imp__sub_82AFDAB8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82afcf48
	sub_82AFCF48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFDABC"))) PPC_WEAK_FUNC(sub_82AFDABC);
PPC_FUNC_IMPL(__imp__sub_82AFDABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFDAC0"))) PPC_WEAK_FUNC(sub_82AFDAC0);
PPC_FUNC_IMPL(__imp__sub_82AFDAC0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82afcfa8
	sub_82AFCFA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFDAC4"))) PPC_WEAK_FUNC(sub_82AFDAC4);
PPC_FUNC_IMPL(__imp__sub_82AFDAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFDAC8"))) PPC_WEAK_FUNC(sub_82AFDAC8);
PPC_FUNC_IMPL(__imp__sub_82AFDAC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82afd008
	sub_82AFD008(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFDACC"))) PPC_WEAK_FUNC(sub_82AFDACC);
PPC_FUNC_IMPL(__imp__sub_82AFDACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

