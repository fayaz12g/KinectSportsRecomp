#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82688668"))) PPC_WEAK_FUNC(sub_82688668);
PPC_FUNC_IMPL(__imp__sub_82688668) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7654
	ctx.lr = 0x82688670;
	__savegprlr_19(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r19,r6
	ctx.r19.u64 = ctx.r6.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82688694
	if (ctx.cr6.eq) goto loc_82688694;
	// stw r26,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r26.u32);
loc_82688694:
	// lwz r11,412(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 412);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826886b0
	if (ctx.cr6.eq) goto loc_826886B0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82688598
	ctx.lr = 0x826886B0;
	sub_82688598(ctx, base);
loc_826886B0:
	// mulli r11,r27,36
	ctx.r11.s64 = ctx.r27.s64 * 36;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// add r23,r11,r31
	ctx.r23.u64 = ctx.r11.u64 + ctx.r31.u64;
	// ori r11,r10,34174
	ctx.r11.u64 = ctx.r10.u64 | 34174;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// ori r10,r9,77
	ctx.r10.u64 = ctx.r9.u64 | 77;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// li r24,1
	ctx.r24.s64 = 1;
	// li r9,1480
	ctx.r9.s64 = 1480;
	// lwz r11,24488(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24488);
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lwz r7,24492(r23)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24492);
	// li r6,3584
	ctx.r6.s64 = 3584;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,24476(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24476);
	// li r25,3648
	ctx.r25.s64 = 3648;
	// and r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 & ctx.r7.u64;
	// li r5,9
	ctx.r5.s64 = 9;
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r23,24476
	ctx.r30.s64 = ctx.r23.s64 + 24476;
	// mr r21,r26
	ctx.r21.u64 = ctx.r26.u64;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// stw r6,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// stw r24,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r24.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r25,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r25.u32);
	// stw r24,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r24.u32);
	// bl 0x82676180
	ctx.lr = 0x82688738;
	sub_82676180(ctx, base);
	// lwz r11,396(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 396);
	// subf r11,r27,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r27.s64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe. r22,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r22.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq 0x82688754
	if (ctx.cr0.eq) goto loc_82688754;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
loc_82688754:
	// mr r20,r26
	ctx.r20.u64 = ctx.r26.u64;
	// li r25,1403
	ctx.r25.s64 = 1403;
loc_8268875C:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// and r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 & ctx.r9.u64;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// mulli r11,r9,28
	ctx.r11.s64 = ctx.r9.s64 * 28;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268878c
	if (ctx.cr0.eq) goto loc_8268878C;
	// stw r24,428(r29)
	PPC_STORE_U32(ctx.r29.u32 + 428, ctx.r24.u32);
loc_8268878C:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne cr6,0x826888e8
	if (!ctx.cr6.eq) goto loc_826888E8;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826887ec
	if (ctx.cr6.eq) goto loc_826887EC;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826887c4
	if (ctx.cr0.eq) goto loc_826887C4;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r20,r24
	ctx.r20.u64 = ctx.r24.u64;
	// stw r27,416(r29)
	PPC_STORE_U32(ctx.r29.u32 + 416, ctx.r27.u32);
	// stw r24,412(r29)
	PPC_STORE_U32(ctx.r29.u32 + 412, ctx.r24.u32);
	// stw r11,420(r29)
	PPC_STORE_U32(ctx.r29.u32 + 420, ctx.r11.u32);
	// b 0x826888e8
	goto loc_826888E8;
loc_826887C4:
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826887d4
	if (ctx.cr0.eq) goto loc_826887D4;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x826888e8
	if (ctx.cr6.eq) goto loc_826888E8;
loc_826887D4:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826884a8
	ctx.lr = 0x826887E8;
	sub_826884A8(ctx, base);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
loc_826887EC:
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826888e8
	if (ctx.cr0.eq) goto loc_826888E8;
	// lwz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// addi r11,r27,25
	ctx.r11.s64 = ctx.r27.s64 + 25;
	// lis r9,-16383
	ctx.r9.s64 = -1073676288;
	// stw r25,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r25.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r26,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r26.u32);
	// ori r9,r9,15616
	ctx.r9.u64 = ctx.r9.u64 | 15616;
	// lis r7,-16382
	ctx.r7.s64 = -1073610752;
	// stw r10,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r10.u32);
	// lis r6,-32768
	ctx.r6.s64 = -2147483648;
	// lwz r4,20(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lis r5,-8531
	ctx.r5.s64 = -559087616;
	// lwz r10,11024(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11024);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r10,116
	ctx.r10.s64 = ctx.r10.s64 + 116;
	// stw r9,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// rlwinm r8,r11,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// stw r4,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r4.u32);
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// addi r4,r8,512
	ctx.r4.s64 = ctx.r8.s64 + 512;
	// addi r3,r9,512
	ctx.r3.s64 = ctx.r9.s64 + 512;
	// clrlwi r8,r11,3
	ctx.r8.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r11,r3,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1000;
	// rlwinm r9,r4,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r10,r7,22528
	ctx.r10.u64 = ctx.r7.u64 | 22528;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// ori r7,r5,48879
	ctx.r7.u64 = ctx.r5.u64 | 48879;
	// ori r8,r6,3
	ctx.r8.u64 = ctx.r6.u64 | 3;
	// ori r10,r9,2
	ctx.r10.u64 = ctx.r9.u64 | 2;
	// stw r7,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r7.u32);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r8,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r8.u32);
	// stw r10,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// li r5,9
	ctx.r5.s64 = 9;
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82676180
	ctx.lr = 0x8268889C;
	sub_82676180(ctx, base);
	// lwz r10,48(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// lwz r9,52(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r11,r10,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// clrlwi r9,r9,8
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFFFF;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// oris r9,r9,33024
	ctx.r9.u64 = ctx.r9.u64 | 2164260864;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82676298
	ctx.lr = 0x826888D8;
	sub_82676298(ctx, base);
	// lwz r11,11564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11564);
	// stw r26,11504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11504, ctx.r26.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,11564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11564, ctx.r11.u32);
loc_826888E8:
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268875c
	if (ctx.cr0.eq) goto loc_8268875C;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne cr6,0x82688930
	if (!ctx.cr6.eq) goto loc_82688930;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// li r10,1406
	ctx.r10.s64 = 1406;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// ori r11,r11,78
	ctx.r11.u64 = ctx.r11.u64 | 78;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82676180
	ctx.lr = 0x82688928;
	sub_82676180(ctx, base);
	// lwz r11,24488(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24488);
	// stw r11,24484(r23)
	PPC_STORE_U32(ctx.r23.u32 + 24484, ctx.r11.u32);
loc_82688930:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x8268893c
	if (ctx.cr6.eq) goto loc_8268893C;
	// stw r21,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r21.u32);
loc_8268893C:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x82fa76a4
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82688944"))) PPC_WEAK_FUNC(sub_82688944);
PPC_FUNC_IMPL(__imp__sub_82688944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82688948"))) PPC_WEAK_FUNC(sub_82688948);
PPC_FUNC_IMPL(__imp__sub_82688948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x82688950;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// addi r23,r3,400
	ctx.r23.s64 = ctx.r3.s64 + 400;
	// addi r22,r4,24488
	ctx.r22.s64 = ctx.r4.s64 + 24488;
loc_82688968:
	// li r26,0
	ctx.r26.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
loc_8268897C:
	// addi r31,r29,-12
	ctx.r31.s64 = ctx.r29.s64 + -12;
loc_82688980:
	// lwz r11,428(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 428);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826889f4
	if (!ctx.cr6.eq) goto loc_826889F4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x826889ec
	if (ctx.cr6.eq) goto loc_826889EC;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_826889A4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// and r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 & ctx.r11.u64;
	// mulli r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 * 28;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// rlwinm. r10,r10,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826889ec
	if (ctx.cr0.eq) goto loc_826889EC;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x826889dc
	if (!ctx.cr6.eq) goto loc_826889DC;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_826889DC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x826889a4
	if (!ctx.cr6.eq) goto loc_826889A4;
loc_826889EC:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x826889f8
	goto loc_826889F8;
loc_826889F4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_826889F8:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// lwz r10,-8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf. r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82688a68
	if (ctx.cr0.eq) goto loc_82688A68;
	// lwz r10,4(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// rlwinm r8,r10,14,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x82688a2c
	if (ctx.cr6.gt) goto loc_82688A2C;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r10,r10,20,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x3F;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82688a68
	if (!ctx.cr6.lt) goto loc_82688A68;
loc_82688A2C:
	// clrlwi. r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82688a6c
	if (!ctx.cr0.eq) goto loc_82688A6C;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82688668
	ctx.lr = 0x82688A54;
	sub_82688668(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// or r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 | ctx.r27.u64;
	// b 0x82688980
	goto loc_82688980;
loc_82688A68:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82688A6C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r10,r26,24
	ctx.r10.u64 = ctx.r26.u32 & 0xFF;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// or r26,r11,r10
	ctx.r26.u64 = ctx.r11.u64 | ctx.r10.u64;
	// addi r29,r29,36
	ctx.r29.s64 = ctx.r29.s64 + 36;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// blt cr6,0x8268897c
	if (ctx.cr6.lt) goto loc_8268897C;
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82688a9c
	if (ctx.cr0.eq) goto loc_82688A9C;
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82688968
	if (!ctx.cr0.eq) goto loc_82688968;
loc_82688A9C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82688AA4"))) PPC_WEAK_FUNC(sub_82688AA4);
PPC_FUNC_IMPL(__imp__sub_82688AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82688AA8"))) PPC_WEAK_FUNC(sub_82688AA8);
PPC_FUNC_IMPL(__imp__sub_82688AA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7654
	ctx.lr = 0x82688AB0;
	__savegprlr_19(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// bl 0x83179244
	ctx.lr = 0x82688AC0;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82688ad4
	if (!ctx.cr6.eq) goto loc_82688AD4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,2392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2392);
	// b 0x82688adc
	goto loc_82688ADC;
loc_82688AD4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,2396(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2396);
loc_82688ADC:
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// lwz r10,24584(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24584);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82688b04
	if (!ctx.cr6.gt) goto loc_82688B04;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_82688AF8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82688af8
	if (ctx.cr6.lt) goto loc_82688AF8;
loc_82688B04:
	// li r26,-1
	ctx.r26.s64 = -1;
	// stw r28,412(r30)
	PPC_STORE_U32(ctx.r30.u32 + 412, ctx.r28.u32);
	// li r23,1
	ctx.r23.s64 = 1;
	// stw r26,396(r30)
	PPC_STORE_U32(ctx.r30.u32 + 396, ctx.r26.u32);
	// stw r26,416(r30)
	PPC_STORE_U32(ctx.r30.u32 + 416, ctx.r26.u32);
	// stw r26,420(r30)
	PPC_STORE_U32(ctx.r30.u32 + 420, ctx.r26.u32);
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// rlwinm. r24,r11,21,31,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// stw r28,392(r30)
	PPC_STORE_U32(ctx.r30.u32 + 392, ctx.r28.u32);
	// beq 0x82688b34
	if (ctx.cr0.eq) goto loc_82688B34;
	// li r11,64
	ctx.r11.s64 = 64;
	// stw r11,392(r30)
	PPC_STORE_U32(ctx.r30.u32 + 392, ctx.r11.u32);
loc_82688B34:
	// lwz r21,392(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 392);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r28,400(r30)
	PPC_STORE_U64(ctx.r30.u32 + 400, ctx.r28.u64);
	// stw r28,408(r30)
	PPC_STORE_U32(ctx.r30.u32 + 408, ctx.r28.u32);
	// addi r20,r30,400
	ctx.r20.s64 = ctx.r30.s64 + 400;
	// lwz r11,11024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11024);
	// addi r4,r11,112
	ctx.r4.s64 = ctx.r11.s64 + 112;
	// bl 0x82688440
	ctx.lr = 0x82688B54;
	sub_82688440(ctx, base);
	// lwz r11,11024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11024);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,116
	ctx.r4.s64 = ctx.r11.s64 + 116;
	// bl 0x82688440
	ctx.lr = 0x82688B64;
	sub_82688440(ctx, base);
	// lbz r11,11070(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11070);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82688bc4
	if (ctx.cr0.eq) goto loc_82688BC4;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-16383
	ctx.r10.s64 = -1073676288;
	// stw r11,468(r30)
	PPC_STORE_U32(ctx.r30.u32 + 468, ctx.r11.u32);
	// li r11,919
	ctx.r11.s64 = 919;
	// ori r10,r10,15872
	ctx.r10.u64 = ctx.r10.u64 | 15872;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,11024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11024);
	// addi r11,r11,120
	ctx.r11.s64 = ctx.r11.s64 + 120;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x82676180
	ctx.lr = 0x82688BC0;
	sub_82676180(ctx, base);
	// b 0x82688bd0
	goto loc_82688BD0;
loc_82688BC4:
	// stw r28,468(r30)
	PPC_STORE_U32(ctx.r30.u32 + 468, ctx.r28.u32);
	// lwz r11,11024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11024);
	// stw r28,120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 120, ctx.r28.u32);
loc_82688BD0:
	// lwz r11,11088(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11088);
	// sync 
	// lis r22,32712
	ctx.r22.s64 = 2143813632;
	// stw r11,1812(r22)
	PPC_MM_STORE_U32(ctx.r22.u32 + 1812, ctx.r11.u32);
	// eieio 
	// sync 
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82688948
	ctx.lr = 0x82688BF8;
	sub_82688948(ctx, base);
	// lwz r11,11024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11024);
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// bl 0x82a78340
	ctx.lr = 0x82688C0C;
	sub_82A78340(ctx, base);
loc_82688C0C:
	// lwz r11,16976(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16976);
	// lwz r10,8(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	// subfc r11,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r24,r11,r24
	ctx.r24.u64 = ctx.r11.u64 & ctx.r24.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x82688c30
	if (!ctx.cr6.eq) goto loc_82688C30;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82688dbc
	if (ctx.cr6.eq) goto loc_82688DBC;
loc_82688C30:
	// lwz r4,24584(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24584);
	// mr r23,r28
	ctx.r23.u64 = ctx.r28.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82688c7c
	if (ctx.cr6.eq) goto loc_82688C7C;
	// lwz r6,11024(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11024);
	// li r11,100
	ctx.r11.s64 = 100;
	// rotlwi r5,r4,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// addi r9,r31,24464
	ctx.r9.s64 = ctx.r31.s64 + 24464;
loc_82688C58:
	// lwzx r3,r6,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzu r7,36(r9)
	ea = 36 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// subf r7,r3,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r3.s64;
	// rlwinm r7,r7,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFF;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// blt cr6,0x82688c58
	if (ctx.cr6.lt) goto loc_82688C58;
loc_82688C7C:
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// rlwinm r11,r11,24,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x7;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82688d50
	if (!ctx.cr6.lt) goto loc_82688D50;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82688d50
	if (ctx.cr6.eq) goto loc_82688D50;
	// addi r11,r31,24480
	ctx.r11.s64 = ctx.r31.s64 + 24480;
loc_82688C9C:
	// lwz r10,428(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 428);
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82688d14
	if (!ctx.cr6.eq) goto loc_82688D14;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82688d0c
	if (ctx.cr6.eq) goto loc_82688D0C;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
loc_82688CC4:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// and r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 & ctx.r7.u64;
	// mulli r9,r9,28
	ctx.r9.s64 = ctx.r9.s64 * 28;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lwz r9,24(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// rlwinm. r9,r9,0,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82688d0c
	if (ctx.cr0.eq) goto loc_82688D0C;
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82688cfc
	if (!ctx.cr6.eq) goto loc_82688CFC;
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
loc_82688CFC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82688cc4
	if (!ctx.cr6.eq) goto loc_82688CC4;
loc_82688D0C:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// b 0x82688d18
	goto loc_82688D18;
loc_82688D14:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82688D18:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82688d30
	if (!ctx.cr0.eq) goto loc_82688D30;
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r9,12(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// subf. r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt 0x82688d48
	if (ctx.cr0.gt) goto loc_82688D48;
loc_82688D30:
	// lwz r10,24584(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24584);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82688c9c
	if (ctx.cr6.lt) goto loc_82688C9C;
	// b 0x82688d50
	goto loc_82688D50;
loc_82688D48:
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// bne cr6,0x82688d98
	if (!ctx.cr6.eq) goto loc_82688D98;
loc_82688D50:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82a77448
	ctx.lr = 0x82688D58;
	sub_82A77448(ctx, base);
	// addi r29,r31,24460
	ctx.r29.s64 = ctx.r31.s64 + 24460;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x83179414
	ctx.lr = 0x82688D74;
	__imp__KeWaitForSingleObject(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831793b4
	ctx.lr = 0x82688D7C;
	__imp__KeResetEvent(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a77448
	ctx.lr = 0x82688D84;
	sub_82A77448(ctx, base);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r25,r11,r25
	ctx.r25.u64 = ctx.r11.u64 + ctx.r25.u64;
	// b 0x82688db4
	goto loc_82688DB4;
loc_82688D98:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82688668
	ctx.lr = 0x82688DAC;
	sub_82688668(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
loc_82688DB4:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x82688c0c
	if (!ctx.cr6.eq) goto loc_82688C0C;
loc_82688DBC:
	// lwz r11,412(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 412);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82688dd8
	if (ctx.cr6.eq) goto loc_82688DD8;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82688598
	ctx.lr = 0x82688DD8;
	sub_82688598(ctx, base);
loc_82688DD8:
	// addi r11,r30,432
	ctx.r11.s64 = ctx.r30.s64 + 432;
	// lwz r10,484(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 484);
	// addi r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 + 56;
loc_82688DE4:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_82688DF8:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// ldarx r8,0,r11
	ctx.reserved.u64 = *(uint64_t*)(base + ctx.r11.u32);
	ctx.r8.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r8,r6
	ctx.cr6.compare<int64_t>(ctx.r8.s64, ctx.r6.s64, ctx.xer);
	// bne cr6,0x82688e1c
	if (!ctx.cr6.eq) goto loc_82688E1C;
	// stdcx. r9,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r11.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r9.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82688df8
	if (!ctx.cr0.eq) goto loc_82688DF8;
	// b 0x82688e24
	goto loc_82688E24;
loc_82688E1C:
	// stdcx. r8,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r11.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r8.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82688E24:
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// cmpd cr6,r8,r6
	ctx.cr6.compare<int64_t>(ctx.r8.s64, ctx.r6.s64, ctx.xer);
	// bne cr6,0x82688de4
	if (!ctx.cr6.eq) goto loc_82688DE4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82688e4c
	if (ctx.cr0.eq) goto loc_82688E4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826881d0
	ctx.lr = 0x82688E4C;
	sub_826881D0(ctx, base);
loc_82688E4C:
	// stw r28,428(r30)
	PPC_STORE_U32(ctx.r30.u32 + 428, ctx.r28.u32);
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// rlwinm r5,r11,31,25,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7F;
	// cmplwi cr6,r5,16
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 16, ctx.xer);
	// blt cr6,0x82688e68
	if (ctx.cr6.lt) goto loc_82688E68;
	// cmplwi cr6,r5,112
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 112, ctx.xer);
	// ble cr6,0x82688e80
	if (!ctx.cr6.gt) goto loc_82688E80;
loc_82688E68:
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// cmplwi cr6,r21,16
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 16, ctx.xer);
	// blt cr6,0x82688e7c
	if (ctx.cr6.lt) goto loc_82688E7C;
	// cmplwi cr6,r21,112
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 112, ctx.xer);
	// ble cr6,0x82688e80
	if (!ctx.cr6.gt) goto loc_82688E80;
loc_82688E7C:
	// li r5,64
	ctx.r5.s64 = 64;
loc_82688E80:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82688360
	ctx.lr = 0x82688E8C;
	sub_82688360(ctx, base);
	// lwz r11,424(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 424);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82688eb0
	if (ctx.cr6.eq) goto loc_82688EB0;
	// lwz r11,11088(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11088);
	// sync 
	// stw r11,1812(r22)
	PPC_MM_STORE_U32(ctx.r22.u32 + 1812, ctx.r11.u32);
	// eieio 
	// sync 
	// stw r28,424(r30)
	PPC_STORE_U32(ctx.r30.u32 + 424, ctx.r28.u32);
loc_82688EB0:
	// lwz r11,24584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24584);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82688ef4
	if (!ctx.cr6.gt) goto loc_82688EF4;
	// addi r11,r31,24508
	ctx.r11.s64 = ctx.r31.s64 + 24508;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_82688EC8:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82688edc
	if (ctx.cr6.eq) goto loc_82688EDC;
	// lwz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
loc_82688EDC:
	// lwz r8,24584(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24584);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82688ec8
	if (ctx.cr6.lt) goto loc_82688EC8;
loc_82688EF4:
	// lwz r11,11024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11024);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwsync 
	// addi r11,r31,24592
	ctx.r11.s64 = ctx.r31.s64 + 24592;
loc_82688F04:
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
	// bne 0x82688f04
	if (!ctx.cr0.eq) goto loc_82688F04;
	// addi r3,r19,16
	ctx.r3.s64 = ctx.r19.s64 + 16;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82fa76a4
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82688F2C"))) PPC_WEAK_FUNC(sub_82688F2C);
PPC_FUNC_IMPL(__imp__sub_82688F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82688F30"))) PPC_WEAK_FUNC(sub_82688F30);
PPC_FUNC_IMPL(__imp__sub_82688F30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// addi r9,r11,21800
	ctx.r9.s64 = ctx.r11.s64 + 21800;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r7,-32231
	ctx.r7.s64 = -2112290816;
	// lfs f11,21800(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21800);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lfs f13,-24756(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24756);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,27984
	ctx.r10.s64 = ctx.r10.s64 + 27984;
	// lfs f0,36(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// fadds f10,f1,f0
	ctx.f10.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f13,-16(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r6,r1,-16
	ctx.r6.s64 = ctx.r1.s64 + -16;
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// lfs f12,240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r7,30864
	ctx.r10.s64 = ctx.r7.s64 + 30864;
	// addi r8,r8,30880
	ctx.r8.s64 = ctx.r8.s64 + 30880;
	// lis r7,-32231
	ctx.r7.s64 = -2112290816;
	// addi r7,r7,30896
	ctx.r7.s64 = ctx.r7.s64 + 30896;
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v12,r0,r8
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// fabs f13,f10
	ctx.f13.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// lvx128 v11,r0,r7
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// fmuls f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fctidz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fnmsubs f13,f12,f11,f13
	ctx.f13.f64 = double(float(-(ctx.f12.f64 * ctx.f11.f64 - ctx.f13.f64)));
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsel f0,f10,f0,f13
	ctx.f0.f64 = ctx.f10.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// stfs f13,-8(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v10,v0,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vspltw v0,v0,1
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xAA));
	// vmulfp128 v10,v10,v0
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v0.f32)));
	// vspltw v9,v10,3
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0x0));
	// vmsum4fp128 v13,v10,v13
	_mm_store_ps(ctx.v13.f32, _mm_dp_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v13.f32), 0xFF));
	// vmulfp128 v0,v9,v0
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v13,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// vmulfp128 v13,v10,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v0,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// vmsum4fp128 v13,v13,v12
	_mm_store_ps(ctx.v13.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32), 0xFF));
	// stvx128 v13,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// vmsum4fp128 v0,v0,v11
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v11.f32), 0xFF));
	// stvx128 v0,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f12,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fadds f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82689018"))) PPC_WEAK_FUNC(sub_82689018);
PPC_FUNC_IMPL(__imp__sub_82689018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stfs f2,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// vspltisw v21,0
	_mm_store_si128((__m128i*)ctx.v21.u32, _mm_set1_epi32(int(0x0)));
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// stfs f1,-32(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// addi r10,r10,11248
	ctx.r10.s64 = ctx.r10.s64 + 11248;
	// vspltisw v22,-1
	_mm_store_si128((__m128i*)ctx.v22.u32, _mm_set1_epi32(int(0xFFFFFFFF)));
	// addi r9,r1,-32
	ctx.r9.s64 = ctx.r1.s64 + -32;
	// vspltisw v20,-9
	_mm_store_si128((__m128i*)ctx.v20.u32, _mm_set1_epi32(int(0xFFFFFFF7)));
	// lfs f0,-2340(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r8,11200
	ctx.r11.s64 = ctx.r8.s64 + 11200;
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// stfs f0,-28(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// vupkd3d128 v0,v21,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v21.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v21.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v0 = vTemp;
	// stfs f0,-24(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// vslw v19,v22,v22
	ctx.v19.u32[0] = ctx.v22.u32[0] << (ctx.v22.u8[0] & 0x1F);
	ctx.v19.u32[1] = ctx.v22.u32[1] << (ctx.v22.u8[4] & 0x1F);
	ctx.v19.u32[2] = ctx.v22.u32[2] << (ctx.v22.u8[8] & 0x1F);
	ctx.v19.u32[3] = ctx.v22.u32[3] << (ctx.v22.u8[12] & 0x1F);
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r10,r8,11232
	ctx.r10.s64 = ctx.r8.s64 + 11232;
	// lvx128 v12,r0,r11
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// vspltw v18,v0,3
	_mm_store_si128((__m128i*)ctx.v18.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x0));
	// stfs f0,-20(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -20, temp.u32);
	// addi r11,r11,11216
	ctx.r11.s64 = ctx.r11.s64 + 11216;
	// vspltw v11,v12,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFF));
	// vspltw v1,v12,1
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xAA));
	// vslw v31,v22,v20
	ctx.v31.u32[0] = ctx.v22.u32[0] << (ctx.v20.u8[0] & 0x1F);
	ctx.v31.u32[1] = ctx.v22.u32[1] << (ctx.v20.u8[4] & 0x1F);
	ctx.v31.u32[2] = ctx.v22.u32[2] << (ctx.v20.u8[8] & 0x1F);
	ctx.v31.u32[3] = ctx.v22.u32[3] << (ctx.v20.u8[12] & 0x1F);
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// vspltw v4,v12,2
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0x55));
	// vspltw v29,v0,1
	_mm_store_si128((__m128i*)ctx.v29.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xAA));
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// vspltw v30,v0,0
	_mm_store_si128((__m128i*)ctx.v30.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// vspltw v26,v0,2
	_mm_store_si128((__m128i*)ctx.v26.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x55));
	// vspltw v24,v0,3
	_mm_store_si128((__m128i*)ctx.v24.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x0));
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vspltw v6,v12,3
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0x0));
	// vspltw v3,v0,1
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xAA));
	// vspltw v2,v0,0
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// vspltw v5,v0,2
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x55));
	// vspltw v7,v0,3
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x0));
	// vspltw v28,v13,0
	_mm_store_si128((__m128i*)ctx.v28.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vspltw v27,v13,1
	_mm_store_si128((__m128i*)ctx.v27.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xAA));
	// vspltw v25,v13,2
	_mm_store_si128((__m128i*)ctx.v25.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x55));
	// lvx128 v10,r0,r9
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vandc v12,v10,v19
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v19.u8), _mm_load_si128((__m128i*)ctx.v10.u8)));
	// vlogefp v8,v12
	ctx.fpscr.enableFlushModeUnconditional();
	ctx.v8.f32[0] = log2f(ctx.v12.f32[0]);
	ctx.v8.f32[1] = log2f(ctx.v12.f32[1]);
	ctx.v8.f32[2] = log2f(ctx.v12.f32[2]);
	ctx.v8.f32[3] = log2f(ctx.v12.f32[3]);
	// vsel v12,v12,v18,v31
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v12.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v18.u8))));
	// vspltw v23,v13,3
	_mm_store_si128((__m128i*)ctx.v23.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x0));
	// vctsxs v16,v0,0
	_mm_store_si128((__m128i*)ctx.v16.s32, _mm_vctsxs(_mm_load_ps(ctx.v0.f32)));
	// vspltisw v17,1
	_mm_store_si128((__m128i*)ctx.v17.u32, _mm_set1_epi32(int(0x1)));
	// vsubfp v13,v12,v18
	_mm_store_ps(ctx.v13.f32, _mm_sub_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v18.f32)));
	// vrfim v9,v8
	_mm_store_ps(ctx.v9.f32, _mm_round_ps(_mm_load_ps(ctx.v8.f32), _MM_FROUND_TO_NEG_INF | _MM_FROUND_NO_EXC));
	// vcmpeqfp v8,v0,v21
	_mm_store_ps(ctx.v8.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v21.f32)));
	// vand v16,v16,v17
	_mm_store_si128((__m128i*)ctx.v16.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v16.u8), _mm_load_si128((__m128i*)ctx.v17.u8)));
	// vmulfp128 v12,v13,v13
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v30,v13,v29,v30
	_mm_store_ps(ctx.v30.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v29.f32)), _mm_load_ps(ctx.v30.f32)));
	// vmaddfp v29,v13,v27,v28
	_mm_store_ps(ctx.v29.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v27.f32)), _mm_load_ps(ctx.v28.f32)));
	// vmulfp128 v31,v13,v0
	_mm_store_ps(ctx.v31.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v9,v9,v0
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v13,v13,v12
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v30,v12,v26,v30
	_mm_store_ps(ctx.v30.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v26.f32)), _mm_load_ps(ctx.v30.f32)));
	// vmaddfp v29,v12,v25,v29
	_mm_store_ps(ctx.v29.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v25.f32)), _mm_load_ps(ctx.v29.f32)));
	// vmulfp128 v28,v12,v12
	_mm_store_ps(ctx.v28.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v12,v13,v24,v30
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v24.f32)), _mm_load_ps(ctx.v30.f32)));
	// vmaddfp v13,v13,v23,v29
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v23.f32)), _mm_load_ps(ctx.v29.f32)));
	// vmaddfp v13,v28,v13,v12
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v28.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v13,v31,v13,v9
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v31.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v9.f32)));
	// vrfim v12,v13
	_mm_store_ps(ctx.v12.f32, _mm_round_ps(_mm_load_ps(ctx.v13.f32), _MM_FROUND_TO_NEG_INF | _MM_FROUND_NO_EXC));
	// vsubfp v13,v13,v12
	_mm_store_ps(ctx.v13.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)));
	// vexptefp v31,v12
	ctx.v31.f32[0] = exp2f(ctx.v12.f32[0]);
	ctx.v31.f32[1] = exp2f(ctx.v12.f32[1]);
	ctx.v31.f32[2] = exp2f(ctx.v12.f32[2]);
	ctx.v31.f32[3] = exp2f(ctx.v12.f32[3]);
	// vmulfp128 v12,v13,v13
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v9,v13,v3,v2
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v3.f32)), _mm_load_ps(ctx.v2.f32)));
	// vand v3,v10,v19
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v19.u8)));
	// vmaddfp v1,v13,v1,v11
	_mm_store_ps(ctx.v1.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v1.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v13,v13,v12
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v5,v12,v5,v9
	_mm_store_ps(ctx.v5.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v5.f32)), _mm_load_ps(ctx.v9.f32)));
	// vmaddfp v4,v12,v4,v1
	_mm_store_ps(ctx.v4.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v4.f32)), _mm_load_ps(ctx.v1.f32)));
	// vrfiz v2,v0
	_mm_store_ps(ctx.v2.f32, _mm_round_ps(_mm_load_ps(ctx.v0.f32), _MM_FROUND_TO_ZERO | _MM_FROUND_NO_EXC));
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// vcmpgtfp v1,v21,v0
	_mm_store_ps(ctx.v1.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v21.f32), _mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp v30,v10,v21
	_mm_store_ps(ctx.v30.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v21.f32)));
	// vmulfp128 v9,v12,v12
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32)));
	// vslw v12,v16,v22
	ctx.v12.u32[0] = ctx.v16.u32[0] << (ctx.v22.u8[0] & 0x1F);
	ctx.v12.u32[1] = ctx.v16.u32[1] << (ctx.v22.u8[4] & 0x1F);
	ctx.v12.u32[2] = ctx.v16.u32[2] << (ctx.v22.u8[8] & 0x1F);
	ctx.v12.u32[3] = ctx.v16.u32[3] << (ctx.v22.u8[12] & 0x1F);
	// vmaddfp v6,v13,v6,v4
	_mm_store_ps(ctx.v6.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(ctx.v4.f32)));
	// vslw v4,v22,v20
	ctx.v4.u32[0] = ctx.v22.u32[0] << (ctx.v20.u8[0] & 0x1F);
	ctx.v4.u32[1] = ctx.v22.u32[1] << (ctx.v20.u8[4] & 0x1F);
	ctx.v4.u32[2] = ctx.v22.u32[2] << (ctx.v20.u8[8] & 0x1F);
	ctx.v4.u32[3] = ctx.v22.u32[3] << (ctx.v20.u8[12] & 0x1F);
	// vmaddfp v7,v13,v7,v5
	_mm_store_ps(ctx.v7.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v5.f32)));
	// vcmpgtfp v29,v21,v10
	_mm_store_ps(ctx.v29.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v21.f32), _mm_load_ps(ctx.v10.f32)));
	// vand v3,v3,v12
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v12.u8)));
	// vsrw v10,v4,v17
	ctx.v10.u32[0] = ctx.v4.u32[0] >> (ctx.v17.u8[0] & 0x1F);
	ctx.v10.u32[1] = ctx.v4.u32[1] >> (ctx.v17.u8[4] & 0x1F);
	ctx.v10.u32[2] = ctx.v4.u32[2] >> (ctx.v17.u8[8] & 0x1F);
	ctx.v10.u32[3] = ctx.v4.u32[3] >> (ctx.v17.u8[12] & 0x1F);
	// vor v12,v21,v3
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v21.u8), _mm_load_si128((__m128i*)ctx.v3.u8)));
	// vcmpeqfp v5,v0,v2
	_mm_store_ps(ctx.v5.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v2.f32)));
	// vandc v0,v30,v1
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v30.u8)));
	// vor v4,v30,v8
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)ctx.v8.u8)));
	// vmaddfp v13,v9,v7,v6
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v6.f32)));
	// vsel v0,v10,v12,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v10.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v12.u8))));
	// vsel v8,v0,v18,v8
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v18.u8))));
	// vandc v0,v29,v5
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v29.u8)));
	// vor v7,v0,v4
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// vrefp v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v13.f32)));
	// vor v9,v13,v13
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vor v10,v13,v13
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vnmsubfp v6,v9,v0,v11
	_mm_store_ps(ctx.v6.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v11.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor v13,v0,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vmaddfp v0,v0,v6,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v11,v10,v0,v11
	_mm_store_ps(ctx.v11.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v11.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vcmpeqfp v9,v0,v0
	_mm_store_ps(ctx.v9.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v0,v11,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v0.f32)));
	// vsel v12,v13,v0,v9
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// vmulfp128 v0,v31,v12
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v31.f32), _mm_load_ps(ctx.v12.f32)));
	// vor v0,v0,v3
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v3.u8)));
	// vsel v13,v0,v8,v7
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v8.u8))));
	// stvx128 v13,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f1,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826891F0"))) PPC_WEAK_FUNC(sub_826891F0);
PPC_FUNC_IMPL(__imp__sub_826891F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x826891F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-912(r1)
	ea = -912 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// rlwinm. r9,r5,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// ble 0x82689230
	if (!ctx.cr0.gt) goto loc_82689230;
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// subf r8,r8,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r8.s64;
loc_82689218:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfsx f0,r8,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82689218
	if (ctx.cr6.lt) goto loc_82689218;
loc_82689230:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82689254
	if (!ctx.cr6.gt) goto loc_82689254;
	// addi r11,r1,28
	ctx.r11.s64 = ctx.r1.s64 + 28;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq 0x82689254
	if (ctx.cr0.eq) goto loc_82689254;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_8268924C:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8268924c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8268924C;
loc_82689254:
	// srawi r11,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 1;
	// addi r10,r5,-1
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// addi r9,r1,32
	ctx.r9.s64 = ctx.r1.s64 + 32;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,32
	ctx.r8.s64 = ctx.r1.s64 + 32;
	// li r31,1
	ctx.r31.s64 = 1;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// stwx r28,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r28.u32);
	// stwx r28,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r28.u32);
	// beq cr6,0x826892bc
	if (ctx.cr6.eq) goto loc_826892BC;
	// addi r11,r5,2
	ctx.r11.s64 = ctx.r5.s64 + 2;
	// addi r10,r5,-3
	ctx.r10.s64 = ctx.r5.s64 + -3;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addi r9,r1,32
	ctx.r9.s64 = ctx.r1.s64 + 32;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// addi r8,r1,32
	ctx.r8.s64 = ctx.r1.s64 + 32;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r31.u32);
	// stwx r31,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r31.u32);
loc_826892BC:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x826892e8
	if (!ctx.cr6.gt) goto loc_826892E8;
	// addi r11,r1,32
	ctx.r11.s64 = ctx.r1.s64 + 32;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_826892CC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x826892e0
	if (!ctx.cr6.eq) goto loc_826892E0;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_826892E0:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x826892cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826892CC;
loc_826892E8:
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subf r30,r4,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r4.s64;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,27984
	ctx.r11.s64 = ctx.r11.s64 + 27984;
	// lfs f11,-2340(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -2340);
	ctx.f11.f64 = double(temp.f32);
	// li r29,16
	ctx.r29.s64 = 16;
	// li r4,4
	ctx.r4.s64 = 4;
	// lfd f10,120(r11)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 120);
	// lfs f12,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
loc_82689314:
	// li r7,512
	ctx.r7.s64 = 512;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x826893d8
	if (!ctx.cr6.gt) goto loc_826893D8;
	// addi r10,r1,172
	ctx.r10.s64 = ctx.r1.s64 + 172;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// add r11,r30,r3
	ctx.r11.u64 = ctx.r30.u64 + ctx.r3.u64;
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
loc_82689330:
	// lfsu f0,64(r11)
	ctx.fpscr.disableFlushMode();
	ea = 64 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f0.f64 = double(temp.f32);
	// stfsu f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82689330
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82689330;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_82689344:
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,32
	ctx.r10.s64 = ctx.r1.s64 + 32;
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r9,r10,7
	ctx.r9.s64 = ctx.r10.s64 + 7;
	// slw r9,r31,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r9.u8 & 0x3F));
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// ble cr6,0x82689390
	if (!ctx.cr6.gt) goto loc_82689390;
	// std r9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fadd f0,f0,f10
	ctx.f0.f64 = ctx.f0.f64 + ctx.f10.f64;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,16(r1)
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f0.u64);
	// lwz r9,20(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// b 0x826893b4
	goto loc_826893B4;
loc_82689390:
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fsub f0,f0,f10
	ctx.f0.f64 = ctx.f0.f64 - ctx.f10.f64;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,16(r1)
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f0.u64);
	// lwz r9,20(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
loc_826893B4:
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// subfic r10,r10,2
	ctx.xer.ca = ctx.r10.u32 <= 2;
	ctx.r10.s64 = 2 - ctx.r10.s64;
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// stwx r9,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// subf r7,r10,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r10.s64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82689344
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82689344;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x826894c8
	if (!ctx.cr6.gt) goto loc_826894C8;
loc_826893D8:
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// fmr f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f12.f64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8268949c
	if (!ctx.cr6.gt) goto loc_8268949C;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_826893F4:
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fabs f9,f0
	ctx.f9.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f9,f11
	ctx.cr6.compare(ctx.f9.f64, ctx.f11.f64);
	// ble cr6,0x82689458
	if (!ctx.cr6.gt) goto loc_82689458;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,32
	ctx.r10.s64 = ctx.r1.s64 + 32;
	// lwax r6,r11,r6
	ctx.r6.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32));
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// std r6,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r6.u64);
	// addi r10,r10,7
	ctx.r10.s64 = ctx.r10.s64 + 7;
	// slw r10,r31,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r10.u8 & 0x3F));
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// lfd f9,104(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f8,96(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fsubs f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// fdivs f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 / ctx.f0.f64));
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// b 0x8268945c
	goto loc_8268945C;
loc_82689458:
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
loc_8268945C:
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// bge cr6,0x82689490
	if (!ctx.cr6.lt) goto loc_82689490;
	// addi r10,r1,32
	ctx.r10.s64 = ctx.r1.s64 + 32;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// sraw r10,r4,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r10.s64 = ctx.r4.s32 >> temp.u32;
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82689490
	if (ctx.cr6.lt) goto loc_82689490;
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82689490
	if (!ctx.cr6.lt) goto loc_82689490;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
loc_82689490:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x826893f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826893F4;
loc_8268949C:
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,32
	ctx.r9.s64 = ctx.r1.s64 + 32;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// sraw r8,r4,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r8.s64 = ctx.r4.s32 >> temp.u32;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// subf. r7,r8,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r8.s64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// bgt 0x826893d8
	if (ctx.cr0.gt) goto loc_826893D8;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
loc_826894C8:
	// bge cr6,0x826895e4
	if (!ctx.cr6.lt) goto loc_826895E4;
loc_826894CC:
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// fmr f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f12.f64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x826895bc
	if (!ctx.cr6.gt) goto loc_826895BC;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_826894E8:
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fabs f9,f0
	ctx.f9.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f9,f11
	ctx.cr6.compare(ctx.f9.f64, ctx.f11.f64);
	// ble cr6,0x82689554
	if (!ctx.cr6.gt) goto loc_82689554;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r27,r1,32
	ctx.r27.s64 = ctx.r1.s64 + 32;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r10,r11,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r10,r10,7
	ctx.r10.s64 = ctx.r10.s64 + 7;
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// slw r10,r31,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r10.u8 & 0x3F));
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// lfd f9,72(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 72);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// fmuls f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// frsp f9,f8
	ctx.f9.f64 = double(float(ctx.f8.f64));
	// fsubs f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// fdivs f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 / ctx.f0.f64));
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// b 0x82689558
	goto loc_82689558;
loc_82689554:
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
loc_82689558:
	// addi r10,r1,32
	ctx.r10.s64 = ctx.r1.s64 + 32;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// sraw r9,r4,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r9.s64 = ctx.r4.s32 >> temp.u32;
	// neg r9,r9
	ctx.r9.s64 = -ctx.r9.s64;
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x826895b0
	if (ctx.cr6.gt) goto loc_826895B0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8268958c
	if (!ctx.cr6.eq) goto loc_8268958C;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x826895a0
	if (ctx.cr6.gt) goto loc_826895A0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
loc_8268958C:
	// ble cr6,0x826895b0
	if (!ctx.cr6.gt) goto loc_826895B0;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,-256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -256, ctx.xer);
	// ble cr6,0x826895b0
	if (!ctx.cr6.gt) goto loc_826895B0;
loc_826895A0:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x826895b0
	if (!ctx.cr6.lt) goto loc_826895B0;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
loc_826895B0:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x826894e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826894E8;
loc_826895BC:
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r9,r1,32
	ctx.r9.s64 = ctx.r1.s64 + 32;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// sraw r9,r4,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r9.s64 = ctx.r4.s32 >> temp.u32;
	// add. r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stwx r8,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// blt 0x826894cc
	if (ctx.cr0.lt) goto loc_826894CC;
loc_826895E4:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8268961c
	if (!ctx.cr6.gt) goto loc_8268961C;
	// addi r10,r3,-64
	ctx.r10.s64 = ctx.r3.s64 + -64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_826895F8:
	// addi r9,r1,32
	ctx.r9.s64 = ctx.r1.s64 + 32;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r8,r11,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// subfic r9,r9,2
	ctx.xer.ca = ctx.r9.u32 <= 2;
	ctx.r9.s64 = 2 - ctx.r9.s64;
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// stwu r9,64(r10)
	ea = 64 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x826895f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826895F8;
loc_8268961C:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bne 0x82689314
	if (!ctx.cr0.eq) goto loc_82689314;
	// addi r1,r1,912
	ctx.r1.s64 = ctx.r1.s64 + 912;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689630"))) PPC_WEAK_FUNC(sub_82689630);
PPC_FUNC_IMPL(__imp__sub_82689630) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fabs f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r11,r11,27984
	ctx.r11.s64 = ctx.r11.s64 + 27984;
	// lfs f13,672(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 672);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82689690
	if (!ctx.cr6.lt) goto loc_82689690;
	// lfs f0,676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 676);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// fmuls f7,f1,f0
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f0,680(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 680);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,684(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 684);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,688(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 688);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,692(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 692);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,696(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 696);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,700(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 700);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,-24756(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24756);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f7,f7
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// fmadds f0,f7,f0,f13
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f0,f0,f7,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f7.f64 + ctx.f12.f64));
	// fmadds f0,f0,f7,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f7.f64 + ctx.f11.f64));
	// fmadds f0,f0,f7,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f7.f64 + ctx.f10.f64));
	// fmadds f0,f0,f7,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f7.f64 + ctx.f9.f64));
	// fmadds f1,f0,f7,f8
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f7.f64 + ctx.f8.f64));
	// blr 
	return;
loc_82689690:
	// stfs f0,-32(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r1,-32
	ctx.r9.s64 = ctx.r1.s64 + -32;
	// fdivs f7,f13,f0
	ctx.f7.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// vspltisw v0,1
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x1)));
	// addi r8,r8,11216
	ctx.r8.s64 = ctx.r8.s64 + 11216;
	// lfs f13,704(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 704);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-2340(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,-16
	ctx.r6.s64 = ctx.r1.s64 + -16;
	// stfs f0,-28(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// stfs f0,-24(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// vcfsx v7,v0,1
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v0.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3F000000)))));
	// stfs f0,-20(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -20, temp.u32);
	// addi r10,r10,11200
	ctx.r10.s64 = ctx.r10.s64 + 11200;
	// lvx128 v13,r0,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// vspltw v1,v13,1
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xAA));
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// vspltw v2,v13,0
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vspltw v4,v13,2
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x55));
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vspltw v6,v13,3
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x0));
	// lfs f12,708(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 708);
	ctx.f12.f64 = double(temp.f32);
	// vspltw v11,v0,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// fmsubs f9,f7,f13,f12
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 - ctx.f12.f64));
	// vspltw v3,v0,1
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xAA));
	// lfs f0,712(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 712);
	ctx.f0.f64 = double(temp.f32);
	// vspltw v31,v0,2
	_mm_store_si128((__m128i*)ctx.v31.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x55));
	// lfs f13,716(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 716);
	ctx.f13.f64 = double(temp.f32);
	// vspltw v5,v0,3
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x0));
	// lfs f12,720(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 720);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,724(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 724);
	ctx.f11.f64 = double(temp.f32);
	// lvx128 v10,r0,r9
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lfs f10,728(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 728);
	ctx.f10.f64 = double(temp.f32);
	// lvx128 v13,r0,r7
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vrfim v12,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v12.f32, _mm_round_ps(_mm_load_ps(ctx.v13.f32), _MM_FROUND_TO_NEG_INF | _MM_FROUND_NO_EXC));
	// vrsqrtefp v0,v10
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v10.f32))));
	// fmadds f0,f9,f7,f0
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f7.f64 + ctx.f0.f64));
	// vsubfp v13,v13,v12
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v13.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)));
	// lfs f9,732(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 732);
	ctx.f9.f64 = double(temp.f32);
	// vmulfp128 v9,v10,v7
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v7.f32)));
	// lfs f8,736(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 736);
	ctx.f8.f64 = double(temp.f32);
	// vexptefp v30,v12
	ctx.fpscr.enableFlushModeUnconditional();
	ctx.v30.f32[0] = exp2f(ctx.v12.f32[0]);
	ctx.v30.f32[1] = exp2f(ctx.v12.f32[1]);
	ctx.v30.f32[2] = exp2f(ctx.v12.f32[2]);
	ctx.v30.f32[3] = exp2f(ctx.v12.f32[3]);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// fmsubs f0,f0,f7,f13
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f7.f64 - ctx.f13.f64));
	// vmulfp128 v8,v0,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v12,v13,v13
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v3,v13,v3,v11
	_mm_store_ps(ctx.v3.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v3.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v2,v13,v1,v2
	_mm_store_ps(ctx.v2.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v1.f32)), _mm_load_ps(ctx.v2.f32)));
	// vcmpeqfp v1,v0,v0
	_mm_store_ps(ctx.v1.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// fmadds f0,f0,f7,f12
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f7.f64 + ctx.f12.f64));
	// vnmsubfp v7,v9,v8,v7
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v7.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v7.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmulfp128 v13,v13,v12
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v8,v12,v31,v3
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v31.f32)), _mm_load_ps(ctx.v3.f32)));
	// vmaddfp v9,v12,v4,v2
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v4.f32)), _mm_load_ps(ctx.v2.f32)));
	// vmulfp128 v12,v12,v12
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32)));
	// fmsubs f0,f0,f7,f11
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f7.f64 - ctx.f11.f64));
	// vmaddfp v0,v0,v7,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp v7,v7,v7
	_mm_store_ps(ctx.v7.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v7.f32)));
	// vmaddfp v8,v13,v5,v8
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v5.f32)), _mm_load_ps(ctx.v8.f32)));
	// vmaddfp v9,v13,v6,v9
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(ctx.v9.f32)));
	// fmadds f0,f0,f7,f10
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f7.f64 + ctx.f10.f64));
	// vmulfp128 v0,v10,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v0.f32)));
	// vxor v13,v7,v1
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v1.u8)));
	// fmadds f0,f0,f7,f9
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f7.f64 + ctx.f9.f64));
	// vmaddfp v12,v12,v9,v8
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v8.f32)));
	// vsel v13,v0,v10,v13
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v10.u8))));
	// fmadds f0,f0,f7,f8
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f7.f64 + ctx.f8.f64));
	// vrefp v0,v12
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v12.f32)));
	// stvx128 v13,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// vnmsubfp v8,v12,v0,v11
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v8.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v11.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor v13,v0,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vmaddfp v0,v0,v8,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp v9,v0,v0
	_mm_store_ps(ctx.v9.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v11,v12,v0,v11
	_mm_store_ps(ctx.v11.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v11.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v11,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v0.f32)));
	// vsel v12,v13,v0,v9
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// vmulfp128 v0,v30,v12
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v30.f32), _mm_load_ps(ctx.v12.f32)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f12,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826897F4"))) PPC_WEAK_FUNC(sub_826897F4);
PPC_FUNC_IMPL(__imp__sub_826897F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826897F8"))) PPC_WEAK_FUNC(sub_826897F8);
PPC_FUNC_IMPL(__imp__sub_826897F8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fabs f13,f1
	ctx.f13.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f0,-24756(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24756);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82689878
	if (!ctx.cr6.lt) goto loc_82689878;
	// lis r31,-32231
	ctx.r31.s64 = -2112290816;
	// fabs f1,f1
	ctx.f1.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// addi r30,r31,15164
	ctx.r30.s64 = ctx.r31.s64 + 15164;
	// lfs f2,-3360(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -3360);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82689018
	ctx.lr = 0x82689844;
	sub_82689018(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f2,31396(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31396);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82689018
	ctx.lr = 0x82689858;
	sub_82689018(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,-6924(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -6924);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,15164(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 15164);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,12080(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12080);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmsubs f0,f30,f13,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f13.f64 - ctx.f0.f64));
loc_82689870:
	// fadds f1,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// b 0x826898e4
	goto loc_826898E4;
loc_82689878:
	// fabs f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lfs f30,31396(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31396);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x826898dc
	if (!ctx.cr6.lt) goto loc_826898DC;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82689018
	ctx.lr = 0x82689898;
	sub_82689018(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// fabs f1,f31
	ctx.f1.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// addi r11,r11,15164
	ctx.r11.s64 = ctx.r11.s64 + 15164;
	// lfs f2,-3360(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -3360);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82689018
	ctx.lr = 0x826898B0;
	sub_82689018(ctx, base);
	// fmuls f11,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fabs f10,f31
	ctx.f10.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// lfs f0,12080(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12080);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-23576(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23576);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,7408(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7408);
	ctx.f12.f64 = double(temp.f32);
	// fmsubs f0,f29,f0,f11
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f0.f64 - ctx.f11.f64));
	// fnmsubs f0,f10,f13,f0
	ctx.f0.f64 = double(float(-(ctx.f10.f64 * ctx.f13.f64 - ctx.f0.f64)));
	// b 0x82689870
	goto loc_82689870;
loc_826898DC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f1,-2340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f1.f64 = double(temp.f32);
loc_826898E4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_82689908"))) PPC_WEAK_FUNC(sub_82689908);
PPC_FUNC_IMPL(__imp__sub_82689908) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// fabs f13,f1
	ctx.f13.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f0,-24756(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24756);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8268998c
	if (!ctx.cr6.lt) goto loc_8268998C;
	// lis r31,-32231
	ctx.r31.s64 = -2112290816;
	// fabs f1,f1
	ctx.f1.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// addi r11,r31,7088
	ctx.r11.s64 = ctx.r31.s64 + 7088;
	// lfs f2,4716(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4716);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82689018
	ctx.lr = 0x82689950;
	sub_82689018(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f2,31396(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31396);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82689018
	ctx.lr = 0x82689964;
	sub_82689018(ctx, base);
	// lfs f0,7088(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7088);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// fmuls f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r10,r10,27984
	ctx.r10.s64 = ctx.r10.s64 + 27984;
	// lfs f0,-11508(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11508);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,616(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 616);
	ctx.f13.f64 = double(temp.f32);
	// fmsubs f0,f30,f0,f12
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f0.f64 - ctx.f12.f64));
	// fadds f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x826899fc
	goto loc_826899FC;
loc_8268998C:
	// fabs f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lfs f2,31396(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31396);
	ctx.f2.f64 = double(temp.f32);
	// fcmpu cr6,f0,f2
	ctx.cr6.compare(ctx.f0.f64, ctx.f2.f64);
	// bge cr6,0x826899f4
	if (!ctx.cr6.lt) goto loc_826899F4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82689018
	ctx.lr = 0x826899A8;
	sub_82689018(ctx, base);
	// lis r31,-32231
	ctx.r31.s64 = -2112290816;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// fabs f1,f31
	ctx.f1.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// addi r11,r31,7088
	ctx.r11.s64 = ctx.r31.s64 + 7088;
	// lfs f30,4716(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4716);
	ctx.f30.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// bl 0x82689018
	ctx.lr = 0x826899C4;
	sub_82689018(ctx, base);
	// fmuls f11,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// lfs f0,7088(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7088);
	ctx.f0.f64 = double(temp.f32);
	// fabs f10,f31
	ctx.f10.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,27984
	ctx.r11.s64 = ctx.r11.s64 + 27984;
	// lfs f12,12080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12080);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,412(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 412);
	ctx.f13.f64 = double(temp.f32);
	// fmsubs f0,f29,f0,f11
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f0.f64 - ctx.f11.f64));
	// fnmsubs f0,f10,f13,f0
	ctx.f0.f64 = double(float(-(ctx.f10.f64 * ctx.f13.f64 - ctx.f0.f64)));
	// fadds f1,f0,f12
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// b 0x826899fc
	goto loc_826899FC;
loc_826899F4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f1,-2340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f1.f64 = double(temp.f32);
loc_826899FC:
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

__attribute__((alias("__imp__sub_82689A1C"))) PPC_WEAK_FUNC(sub_82689A1C);
PPC_FUNC_IMPL(__imp__sub_82689A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82689A20"))) PPC_WEAK_FUNC(sub_82689A20);
PPC_FUNC_IMPL(__imp__sub_82689A20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82689A28;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82fa8d14
	ctx.lr = 0x82689A30;
	__savefpr_23(ctx, base);
	// li r12,-144
	ctx.r12.s64 = -144;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmr f24,f1
	ctx.fpscr.disableFlushMode();
	ctx.f24.f64 = ctx.f1.f64;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// rlwinm r31,r4,4,0,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f25,-2340(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f25.f64 = double(temp.f32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// lfs f26,-24756(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24756);
	ctx.f26.f64 = double(temp.f32);
	// beq cr6,0x82689e28
	if (ctx.cr6.eq) goto loc_82689E28;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82689d1c
	if (ctx.cr6.eq) goto loc_82689D1C;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x82689c9c
	if (ctx.cr6.eq) goto loc_82689C9C;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x82689c38
	if (ctx.cr6.eq) goto loc_82689C38;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// beq cr6,0x82689b84
	if (ctx.cr6.eq) goto loc_82689B84;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x82689af4
	if (ctx.cr6.eq) goto loc_82689AF4;
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// bne cr6,0x82689af4
	if (!ctx.cr6.eq) goto loc_82689AF4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82689abc
	if (ctx.cr6.eq) goto loc_82689ABC;
	// addi r11,r7,-4
	ctx.r11.s64 = ctx.r7.s64 + -4;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x82689abc
	if (ctx.cr0.eq) goto loc_82689ABC;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_82689AB4:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82689ab4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82689AB4;
loc_82689ABC:
	// addi r11,r31,-16
	ctx.r11.s64 = ctx.r31.s64 + -16;
	// addi r10,r31,16
	ctx.r10.s64 = ctx.r31.s64 + 16;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r9,r10,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82689e88
	if (!ctx.cr6.lt) goto loc_82689E88;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_82689AE0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stfsu f26,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f26.f64);
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82689ae0
	if (ctx.cr6.lt) goto loc_82689AE0;
	// b 0x82689e88
	goto loc_82689E88;
loc_82689AF4:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82689e88
	if (ctx.cr6.eq) goto loc_82689E88;
	// rlwinm r10,r31,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFF;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
loc_82689B0C:
	// addi r8,r10,-16
	ctx.r8.s64 = ctx.r10.s64 + -16;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82689b38
	if (ctx.cr6.lt) goto loc_82689B38;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82689b38
	if (!ctx.cr6.lt) goto loc_82689B38;
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// clrldi r8,r8,32
	ctx.r8.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x82689b60
	goto loc_82689B60;
loc_82689B38:
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82689b70
	if (!ctx.cr6.lt) goto loc_82689B70;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82689b70
	if (ctx.cr6.lt) goto loc_82689B70;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// clrldi r8,r8,32
	ctx.r8.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
loc_82689B60:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// b 0x82689b74
	goto loc_82689B74;
loc_82689B70:
	// stfs f25,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
loc_82689B74:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82689b0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82689B0C;
	// b 0x82689e88
	goto loc_82689E88;
loc_82689B84:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82689e88
	if (ctx.cr6.eq) goto loc_82689E88;
	// clrldi r11,r31,32
	ctx.r11.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// fdivs f28,f26,f31
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = double(float(ctx.f26.f64 / ctx.f31.f64));
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r29,r28,-4
	ctx.r29.s64 = ctx.r28.s64 + -4;
	// lfs f29,21836(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21836);
	ctx.f29.f64 = double(temp.f32);
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,31512(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 31512);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f27,f13,f0
	ctx.f27.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_82689BC0:
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fsubs f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f27.f64));
	// fmuls f31,f0,f24
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f24.f64));
	// fcmpu cr6,f31,f25
	ctx.cr6.compare(ctx.f31.f64, ctx.f25.f64);
	// bne cr6,0x82689bec
	if (!ctx.cr6.eq) goto loc_82689BEC;
	// fmr f30,f26
	ctx.f30.f64 = ctx.f26.f64;
	// b 0x82689bfc
	goto loc_82689BFC;
loc_82689BEC:
	// fmuls f30,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82688f30
	ctx.lr = 0x82689BF8;
	sub_82688F30(ctx, base);
	// fdivs f30,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64 / ctx.f30.f64));
loc_82689BFC:
	// fmuls f0,f28,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f28.f64 * ctx.f31.f64));
	// fcmpu cr6,f0,f25
	ctx.cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// bne cr6,0x82689c10
	if (!ctx.cr6.eq) goto loc_82689C10;
	// fmr f0,f26
	ctx.f0.f64 = ctx.f26.f64;
	// b 0x82689c20
	goto loc_82689C20;
loc_82689C10:
	// fmuls f31,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82688f30
	ctx.lr = 0x82689C1C;
	sub_82688F30(ctx, base);
	// fdivs f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 / ctx.f31.f64));
loc_82689C20:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// fmuls f0,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// stfsu f0,4(r29)
	temp.f32 = float(ctx.f0.f64);
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r29.u32 = ea;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x82689bc0
	if (ctx.cr6.lt) goto loc_82689BC0;
	// b 0x82689e88
	goto loc_82689E88;
loc_82689C38:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82689e88
	if (ctx.cr6.eq) goto loc_82689E88;
	// clrldi r11,r31,32
	ctx.r11.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r29,r28,-4
	ctx.r29.s64 = ctx.r28.s64 + -4;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,31512(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 31512);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_82689C68:
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fmuls f1,f0,f24
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f24.f64));
	// bl 0x826897f8
	ctx.lr = 0x82689C88;
	sub_826897F8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stfsu f1,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r29.u32 = ea;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x82689c68
	if (ctx.cr6.lt) goto loc_82689C68;
	// b 0x82689e88
	goto loc_82689E88;
loc_82689C9C:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82689e88
	if (ctx.cr6.eq) goto loc_82689E88;
	// clrldi r11,r31,32
	ctx.r11.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// fdivs f31,f26,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f26.f64 / ctx.f31.f64));
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,31512(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 31512);
	ctx.f0.f64 = double(temp.f32);
	// lfs f29,31396(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31396);
	ctx.f29.f64 = double(temp.f32);
	// addi r29,r28,-4
	ctx.r29.s64 = ctx.r28.s64 + -4;
	// fmuls f30,f13,f0
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_82689CD8:
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f0,f0,f24
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f24.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fneg f2,f0
	ctx.f2.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// bl 0x82689018
	ctx.lr = 0x82689D08;
	sub_82689018(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stfsu f1,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r29.u32 = ea;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x82689cd8
	if (ctx.cr6.lt) goto loc_82689CD8;
	// b 0x82689e88
	goto loc_82689E88;
loc_82689D1C:
	// clrldi r11,r31,32
	ctx.r11.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f13,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// li r30,0
	ctx.r30.s64 = 0;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lfs f0,31512(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 31512);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// fmuls f30,f13,f0
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// beq cr6,0x82689e88
	if (ctx.cr6.eq) goto loc_82689E88;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// vspltisw v0,1
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x1)));
	// stfs f25,84(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fdivs f28,f26,f30
	ctx.f28.f64 = double(float(ctx.f26.f64 / ctx.f30.f64));
	// stfs f25,88(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r29,r28,-4
	ctx.r29.s64 = ctx.r28.s64 + -4;
	// stfs f25,92(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// vcsxwfp128 v127,v0,1
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v127.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v0.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3F000000)))));
	// lfs f27,21836(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21836);
	ctx.f27.f64 = double(temp.f32);
loc_82689D6C:
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// vor128 v10,v127,v127
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f6,f0
	ctx.f6.f64 = double(float(ctx.f0.f64));
	// fsubs f0,f6,f30
	ctx.f0.f64 = double(float(ctx.f6.f64 - ctx.f30.f64));
	// fmuls f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// fnmsubs f0,f0,f0,f26
	ctx.f0.f64 = double(float(-(ctx.f0.f64 * ctx.f0.f64 - ctx.f26.f64)));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vrsqrtefp v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v13.f32))));
	// vmulfp128 v11,v0,v0
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v12,v13,v127
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v127.f32)));
	// vcmpeqfp v9,v0,v0
	_mm_store_ps(ctx.v9.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp128 v10,v12,v11,v10
	_mm_store_ps(ctx.v10.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v10.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v10,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp v12,v10,v10
	_mm_store_ps(ctx.v12.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v10.f32)));
	// vmulfp128 v0,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// vxor v12,v12,v9
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v9.u8)));
	// vsel v12,v0,v13,v12
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// stvx128 v12,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// bl 0x82689630
	ctx.lr = 0x82689DD8;
	sub_82689630(ctx, base);
	// fmr f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82689630
	ctx.lr = 0x82689DE4;
	sub_82689630(ctx, base);
	// fsubs f0,f6,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f6.f64 - ctx.f30.f64));
	// fdivs f29,f5,f1
	ctx.f29.f64 = double(float(ctx.f5.f64 / ctx.f1.f64));
	// fmuls f0,f0,f24
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f24.f64));
	// fcmpu cr6,f0,f25
	ctx.cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// bne cr6,0x82689e00
	if (!ctx.cr6.eq) goto loc_82689E00;
	// fmr f0,f26
	ctx.f0.f64 = ctx.f26.f64;
	// b 0x82689e10
	goto loc_82689E10;
loc_82689E00:
	// fmuls f23,f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.f23.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// fmr f1,f23
	ctx.f1.f64 = ctx.f23.f64;
	// bl 0x82688f30
	ctx.lr = 0x82689E0C;
	sub_82688F30(ctx, base);
	// fdivs f0,f1,f23
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 / ctx.f23.f64));
loc_82689E10:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// fmuls f0,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// stfsu f0,4(r29)
	temp.f32 = float(ctx.f0.f64);
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r29.u32 = ea;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x82689d6c
	if (ctx.cr6.lt) goto loc_82689D6C;
	// b 0x82689e88
	goto loc_82689E88;
loc_82689E28:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82689e88
	if (ctx.cr6.eq) goto loc_82689E88;
	// clrldi r11,r31,32
	ctx.r11.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f13,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// addi r29,r28,-4
	ctx.r29.s64 = ctx.r28.s64 + -4;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lfs f0,31512(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 31512);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_82689E58:
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fmuls f1,f0,f24
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f24.f64));
	// bl 0x82689908
	ctx.lr = 0x82689E78;
	sub_82689908(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stfsu f1,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r29.u32 = ea;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x82689e58
	if (ctx.cr6.lt) goto loc_82689E58;
loc_82689E88:
	// stfs f25,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// li r9,16
	ctx.r9.s64 = 16;
loc_82689E94:
	// fmr f0,f25
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f25.f64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82689ed0
	if (ctx.cr6.eq) goto loc_82689ED0;
	// addi r10,r11,-64
	ctx.r10.s64 = ctx.r11.s64 + -64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
loc_82689EA8:
	// lfsu f13,64(r10)
	ctx.fpscr.disableFlushMode();
	ea = 64 + ctx.r10.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// bdnz 0x82689ea8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82689EA8;
	// fdivs f0,f26,f0
	ctx.f0.f64 = double(float(ctx.f26.f64 / ctx.f0.f64));
	// addi r10,r11,-64
	ctx.r10.s64 = ctx.r11.s64 + -64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
loc_82689EC0:
	// lfs f13,64(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfsu f13,64(r10)
	temp.f32 = float(ctx.f13.f64);
	ea = 64 + ctx.r10.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82689ec0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82689EC0;
loc_82689ED0:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82689e94
	if (!ctx.cr0.eq) goto loc_82689E94;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// li r0,-144
	ctx.r0.s64 = -144;
	// lvx128 v127,r1,r0
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF), VectorMaskL));
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82fa8d60
	ctx.lr = 0x82689EF0;
	__restfpr_23(ctx, base);
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689EF4"))) PPC_WEAK_FUNC(sub_82689EF4);
PPC_FUNC_IMPL(__imp__sub_82689EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82689EF8"))) PPC_WEAK_FUNC(sub_82689EF8);
PPC_FUNC_IMPL(__imp__sub_82689EF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82689F00;
	__savegprlr_29(ctx, base);
	// stwu r1,-784(r1)
	ea = -784 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82689f2c
	if (!ctx.cr6.eq) goto loc_82689F2C;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
loc_82689F2C:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r11,7008
	ctx.r7.s64 = ctx.r11.s64 + 7008;
	// lfs f9,1064(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 1064);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// bge cr6,0x82689f48
	if (!ctx.cr6.lt) goto loc_82689F48;
	// fmr f0,f9
	ctx.f0.f64 = ctx.f9.f64;
loc_82689F48:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lfs f11,-24756(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24756);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x82689f5c
	if (!ctx.cr6.gt) goto loc_82689F5C;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
loc_82689F5C:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lfs f13,2228(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2228);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r11,27984
	ctx.r10.s64 = ctx.r11.s64 + 27984;
	// lfs f12,1448(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1448);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f13,f0,f12,f13
	ctx.f13.f64 = double(float(-(ctx.f0.f64 * ctx.f12.f64 - ctx.f13.f64)));
	// fmadds f10,f13,f0,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f11.f64));
	// beq cr6,0x8268a008
	if (ctx.cr6.eq) goto loc_8268A008;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8268a008
	if (ctx.cr6.eq) goto loc_8268A008;
	// lfs f0,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// bge cr6,0x82689f94
	if (!ctx.cr6.lt) goto loc_82689F94;
	// fmr f0,f9
	ctx.f0.f64 = ctx.f9.f64;
loc_82689F94:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x82689fa0
	if (!ctx.cr6.gt) goto loc_82689FA0;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
loc_82689FA0:
	// lfs f13,1544(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 1544);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f8,f0,f12,f13
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f12.f64 + ctx.f13.f64));
	// lfs f13,11700(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 11700);
	ctx.f13.f64 = double(temp.f32);
	// lfd f12,1456(r10)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r10.u32 + 1456);
	// fcmpu cr6,f1,f12
	ctx.cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// fnmsubs f13,f8,f0,f13
	ctx.f13.f64 = double(float(-(ctx.f8.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// ble cr6,0x82689fc8
	if (!ctx.cr6.gt) goto loc_82689FC8;
	// lfd f0,1464(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 1464);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82689fcc
	if (ctx.cr6.lt) goto loc_82689FCC;
loc_82689FC8:
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
loc_82689FCC:
	// fcmpu cr6,f10,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// bge cr6,0x82689fd8
	if (!ctx.cr6.lt) goto loc_82689FD8;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
loc_82689FD8:
	// fcmpu cr6,f13,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bge cr6,0x82689fe4
	if (!ctx.cr6.lt) goto loc_82689FE4;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
loc_82689FE4:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lfs f0,31396(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31396);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x82689ffc
	if (ctx.cr6.lt) goto loc_82689FFC;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
loc_82689FFC:
	// fmuls f13,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// b 0x8268a044
	goto loc_8268A044;
loc_8268A008:
	// lfd f0,1472(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 1472);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8268a020
	if (!ctx.cr6.gt) goto loc_8268A020;
	// lfd f0,1480(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 1480);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x8268a024
	if (ctx.cr6.lt) goto loc_8268A024;
loc_8268A020:
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
loc_8268A024:
	// fcmpu cr6,f10,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// bge cr6,0x8268a030
	if (!ctx.cr6.lt) goto loc_8268A030;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
loc_8268A030:
	// fdivs f0,f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f11.f64 / ctx.f1.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x8268a040
	if (ctx.cr6.lt) goto loc_8268A040;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
loc_8268A040:
	// fmuls f13,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
loc_8268A044:
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lfs f0,848(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 848);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f0,1452(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1452);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,31
	ctx.r11.s64 = 2031616;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// lfs f10,31512(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 31512);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f0,f1,f0,f10
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// stw r9,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r9.u32);
	// ble cr6,0x8268a084
	if (!ctx.cr6.gt) goto loc_8268A084;
	// stw r11,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r11.u32);
loc_8268A084:
	// lfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bne cr6,0x8268a0c4
	if (!ctx.cr6.eq) goto loc_8268A0C4;
	// lfs f0,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// bge cr6,0x8268a0a4
	if (!ctx.cr6.lt) goto loc_8268A0A4;
	// fmr f0,f9
	ctx.f0.f64 = ctx.f9.f64;
loc_8268A0A4:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x8268a0b0
	if (!ctx.cr6.gt) goto loc_8268A0B0;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
loc_8268A0B0:
	// lfs f13,4796(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4796);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12716(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12716);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f12,f0,f13,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// lfs f13,8156(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8156);
	ctx.f13.f64 = double(temp.f32);
	// b 0x8268a13c
	goto loc_8268A13C;
loc_8268A0C4:
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x8268a100
	if (!ctx.cr6.eq) goto loc_8268A100;
	// lfs f0,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// bge cr6,0x8268a0dc
	if (!ctx.cr6.lt) goto loc_8268A0DC;
	// fmr f0,f9
	ctx.f0.f64 = ctx.f9.f64;
loc_8268A0DC:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x8268a0e8
	if (!ctx.cr6.gt) goto loc_8268A0E8;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
loc_8268A0E8:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f12,1128(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1128);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,-27108(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27108);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f13,f0,f13,f12
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fmadds f2,f13,f0,f10
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f10.f64));
	// b 0x8268a14c
	goto loc_8268A14C;
loc_8268A100:
	// cmpwi cr6,r5,5
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 5, ctx.xer);
	// bne cr6,0x8268a144
	if (!ctx.cr6.eq) goto loc_8268A144;
	// lfs f0,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// bge cr6,0x8268a118
	if (!ctx.cr6.lt) goto loc_8268A118;
	// fmr f0,f9
	ctx.f0.f64 = ctx.f9.f64;
loc_8268A118:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x8268a124
	if (!ctx.cr6.gt) goto loc_8268A124;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
loc_8268A124:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// lfs f13,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lfs f12,13276(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13276);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f12,f0,f13,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// lfs f13,-1980(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -1980);
	ctx.f13.f64 = double(temp.f32);
loc_8268A13C:
	// fmadds f2,f12,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// b 0x8268a14c
	goto loc_8268A14C;
loc_8268A144:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f2,-2340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f2.f64 = double(temp.f32);
loc_8268A14C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// li r3,7
	ctx.r3.s64 = 7;
	// bne cr6,0x8268a15c
	if (!ctx.cr6.eq) goto loc_8268A15C;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
loc_8268A15C:
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82689a20
	ctx.lr = 0x8268A168;
	sub_82689A20(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826891f0
	ctx.lr = 0x8268A178;
	sub_826891F0(ctx, base);
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268A180"))) PPC_WEAK_FUNC(sub_8268A180);
PPC_FUNC_IMPL(__imp__sub_8268A180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x8268A188;
	__savegprlr_14(ctx, base);
	// stfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -176, ctx.f29.u64);
	// stfd f30,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r9,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r9.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r10.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r18,r8
	ctx.r18.u64 = ctx.r8.u64;
	// bl 0x83179434
	ctx.lr = 0x8268A1C0;
	__imp__VdQueryVideoMode(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwz r28,104(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cntlzw r11,r28
	ctx.r11.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x8268a1e8
	if (!ctx.cr6.eq) goto loc_8268A1E8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8268a1e8
	if (!ctx.cr6.eq) goto loc_8268A1E8;
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
loc_8268A1E8:
	// lwz r19,404(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// rlwinm r17,r31,16,16,31
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 16) & 0xFFFF;
	// lwz r16,21960(r25)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r25.u32 + 21960);
	// clrlwi r15,r31,16
	ctx.r15.u64 = ctx.r31.u32 & 0xFFFF;
	// lwz r14,21956(r25)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r25.u32 + 21956);
	// rlwinm r27,r30,16,16,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFFFF;
	// clrlwi r24,r30,16
	ctx.r24.u64 = ctx.r30.u32 & 0xFFFF;
	// rlwinm r23,r29,16,16,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFFFF;
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// clrlwi r22,r29,16
	ctx.r22.u64 = ctx.r29.u32 & 0xFFFF;
	// rlwinm r21,r26,16,16,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 16) & 0xFFFF;
	// clrlwi r20,r26,16
	ctx.r20.u64 = ctx.r26.u32 & 0xFFFF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8268a244
	if (!ctx.cr6.eq) goto loc_8268A244;
	// cmplw cr6,r27,r21
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r21.u32, ctx.xer);
	// bne cr6,0x8268a230
	if (!ctx.cr6.eq) goto loc_8268A230;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x8268a240
	goto loc_8268A240;
loc_8268A230:
	// subfc r11,r21,r27
	ctx.xer.ca = ctx.r27.u32 >= ctx.r21.u32;
	ctx.r11.s64 = ctx.r27.s64 - ctx.r21.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
loc_8268A240:
	// stw r11,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r11.u32);
loc_8268A244:
	// lwz r10,388(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8268a28c
	if (!ctx.cr6.eq) goto loc_8268A28C;
	// divwu r11,r20,r9
	ctx.r11.u32 = ctx.r20.u32 / ctx.r9.u32;
	// twllei r9,0
	if (ctx.r9.u32 <= 0) __builtin_debugtrap();
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8268a278
	if (!ctx.cr6.eq) goto loc_8268A278;
	// subfic r11,r28,0
	ctx.xer.ca = ctx.r28.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r28.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// b 0x8268a288
	goto loc_8268A288;
loc_8268A278:
	// subfc r11,r11,r24
	ctx.xer.ca = ctx.r24.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r24.s64 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
loc_8268A288:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_8268A28C:
	// clrldi r11,r21,32
	ctx.r11.u64 = ctx.r21.u64 & 0xFFFFFFFF;
	// clrldi r10,r27,32
	ctx.r10.u64 = ctx.r27.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// addi r29,r11,27984
	ctx.r29.s64 = ctx.r11.s64 + 27984;
	// lfs f11,-1980(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -1980);
	ctx.f11.f64 = double(temp.f32);
	// lfd f10,1544(r29)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 1544);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f29,f13,f0
	ctx.f29.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fcmpu cr6,f29,f11
	ctx.cr6.compare(ctx.f29.f64, ctx.f11.f64);
	// blt cr6,0x8268a2e0
	if (ctx.cr6.lt) goto loc_8268A2E0;
	// fcmpu cr6,f29,f10
	ctx.cr6.compare(ctx.f29.f64, ctx.f10.f64);
	// bgt cr6,0x8268a2e0
	if (ctx.cr6.gt) goto loc_8268A2E0;
	// fmr f29,f11
	ctx.f29.f64 = ctx.f11.f64;
loc_8268A2E0:
	// clrldi r11,r24,32
	ctx.r11.u64 = ctx.r24.u64 & 0xFFFFFFFF;
	// lwz r10,13992(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13992);
	// clrldi r8,r20,32
	ctx.r8.u64 = ctx.r20.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// clrldi r11,r9,32
	ctx.r11.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
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
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lfs f30,31512(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31512);
	ctx.f30.f64 = double(temp.f32);
	// frsp f9,f12
	ctx.f9.f64 = double(float(ctx.f12.f64));
	// lfs f12,31396(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 31396);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fdivs f31,f9,f13
	ctx.f31.f64 = double(float(ctx.f9.f64 / ctx.f13.f64));
	// beq 0x8268a384
	if (ctx.cr0.eq) goto loc_8268A384;
	// lfs f13,1524(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1524);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f13,f0,f13,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f30.f64));
	// lfs f0,1552(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1552);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fctidz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f13.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r10,r11,r24
	ctx.r10.s64 = ctx.r24.s64 - ctx.r11.s64;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_8268A384:
	// fcmpu cr6,f31,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f11.f64);
	// blt cr6,0x8268a39c
	if (ctx.cr6.lt) goto loc_8268A39C;
	// fcmpu cr6,f31,f10
	ctx.cr6.compare(ctx.f31.f64, ctx.f10.f64);
	// bgt cr6,0x8268a39c
	if (ctx.cr6.gt) goto loc_8268A39C;
	// fmr f31,f11
	ctx.f31.f64 = ctx.f11.f64;
	// b 0x8268a3d8
	goto loc_8268A3D8;
loc_8268A39C:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lfs f13,11804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11804);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f31,f13
	ctx.cr6.compare(ctx.f31.f64, ctx.f13.f64);
	// blt cr6,0x8268a3c0
	if (ctx.cr6.lt) goto loc_8268A3C0;
	// lfd f0,1560(r29)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r29.u32 + 1560);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x8268a3c0
	if (ctx.cr6.gt) goto loc_8268A3C0;
	// fmr f31,f13
	ctx.f31.f64 = ctx.f13.f64;
	// b 0x8268a3d8
	goto loc_8268A3D8;
loc_8268A3C0:
	// fcmpu cr6,f31,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f12.f64);
	// blt cr6,0x8268a3d8
	if (ctx.cr6.lt) goto loc_8268A3D8;
	// lfd f0,1464(r29)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r29.u32 + 1464);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x8268a3d8
	if (ctx.cr6.gt) goto loc_8268A3D8;
	// fmr f31,f12
	ctx.f31.f64 = ctx.f12.f64;
loc_8268A3D8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r9,124(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// twllei r9,0
	if (ctx.r9.u32 <= 0) __builtin_debugtrap();
	// lwz r11,2192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2192);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// divwu r11,r10,r9
	ctx.r11.u32 = ctx.r10.u32 / ctx.r9.u32;
	// rlwinm r26,r11,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r26,10
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 10, ctx.xer);
	// ble cr6,0x8268a400
	if (!ctx.cr6.gt) goto loc_8268A400;
	// li r26,10
	ctx.r26.s64 = 10;
loc_8268A400:
	// li r11,7680
	ctx.r11.s64 = 7680;
	// twllei r27,0
	if (ctx.r27.u32 <= 0) __builtin_debugtrap();
	// divwu r11,r11,r27
	ctx.r11.u32 = ctx.r11.u32 / ctx.r27.u32;
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
	// li r11,6
	ctx.r11.s64 = 6;
	// cmplwi cr6,r30,6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 6, ctx.xer);
	// bgt cr6,0x8268a420
	if (ctx.cr6.gt) goto loc_8268A420;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8268A420:
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f12,f29
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fctidz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// stfd f12,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f12.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8268a474
	if (!ctx.cr6.lt) goto loc_8268A474;
	// cmplwi cr6,r30,6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 6, ctx.xer);
	// ble cr6,0x8268a484
	if (!ctx.cr6.gt) goto loc_8268A484;
	// li r30,6
	ctx.r30.s64 = 6;
	// b 0x8268a484
	goto loc_8268A484;
loc_8268A474:
	// fdivs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_8268A484:
	// lwz r31,420(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// li r5,1408
	ctx.r5.s64 = 1408;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x8268A498;
	sub_82FA7CF0(ctx, base);
	// lwz r11,388(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r6,396(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// li r9,1
	ctx.r9.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r30,r31,652
	ctx.r30.s64 = ctx.r31.s64 + 652;
	// bl 0x82689ef8
	ctx.lr = 0x8268A4C0;
	sub_82689EF8(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// lwz r5,0(r19)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r6,412(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 412);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82689ef8
	ctx.lr = 0x8268A4E0;
	sub_82689EF8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,1348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1348, ctx.r11.u32);
	// addi r9,r27,3
	ctx.r9.s64 = ctx.r27.s64 + 3;
	// stw r10,1360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1360, ctx.r10.u32);
	// clrlwi r8,r18,16
	ctx.r8.u64 = ctx.r18.u32 & 0xFFFF;
	// rlwinm r10,r9,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r5,r27,16,4,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 16) & 0xFFF0000;
	// clrlwi r4,r24,20
	ctx.r4.u64 = ctx.r24.u32 & 0xFFF;
	// clrlwi r30,r15,20
	ctx.r30.u64 = ctx.r15.u32 & 0xFFF;
	// rlwinm r3,r17,16,4,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 16) & 0xFFF0000;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// or r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 | ctx.r4.u64;
	// or r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 | ctx.r30.u64;
	// rlwinm r30,r8,0,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// clrlwi r4,r10,22
	ctx.r4.u64 = ctx.r10.u32 & 0x3FF;
	// rlwinm r9,r18,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 16) & 0xFFFF;
	// subf r7,r20,r14
	ctx.r7.s64 = ctx.r14.s64 - ctx.r20.s64;
	// subf r6,r21,r16
	ctx.r6.s64 = ctx.r16.s64 - ctx.r21.s64;
	// addi r9,r9,31
	ctx.r9.s64 = ctx.r9.s64 + 31;
	// subf r7,r22,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r22.s64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r6,r23,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r23.s64;
	// rlwinm r27,r9,0,0,26
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFE0;
	// lwz r9,648(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 648);
	// addi r26,r10,-1
	ctx.r26.s64 = ctx.r10.s64 + -1;
	// lwz r8,652(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// clrlwi r7,r7,20
	ctx.r7.u64 = ctx.r7.u32 & 0xFFF;
	// stw r5,1356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1356, ctx.r5.u32);
	// clrlwi r25,r22,20
	ctx.r25.u64 = ctx.r22.u32 & 0xFFF;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stw r4,1404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1404, ctx.r4.u32);
	// clrlwi r5,r23,20
	ctx.r5.u64 = ctx.r23.u32 & 0xFFF;
	// stw r3,1352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1352, ctx.r3.u32);
	// rlwimi r26,r8,8,20,23
	ctx.r26.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xF00) | (ctx.r26.u64 & 0xFFFFFFFFFFFFF0FF);
	// stw r11,1332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1332, ctx.r11.u32);
	// clrlwi r6,r6,20
	ctx.r6.u64 = ctx.r6.u32 & 0xFFF;
	// stw r11,1336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1336, ctx.r11.u32);
	// andi. r8,r26,3847
	ctx.r8.u64 = ctx.r26.u64 & 3847;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r27,1340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1340, ctx.r27.u32);
	// stw r8,1364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1364, ctx.r8.u32);
	// cntlzw r4,r28
	ctx.r4.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// stw r30,1344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1344, ctx.r30.u32);
	// lis r3,256
	ctx.r3.s64 = 16777216;
	// stw r27,1320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1320, ctx.r27.u32);
	// rlwinm r8,r4,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// stw r25,1304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1304, ctx.r25.u32);
	// stw r7,1308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1308, ctx.r7.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// stw r5,1312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1312, ctx.r5.u32);
	// stw r6,1316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1316, ctx.r6.u32);
	// slw r8,r9,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// clrlwi r8,r8,6
	ctx.r8.u64 = ctx.r8.u32 & 0x3FFFFFF;
	// lwz r7,1300(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1300);
	// stw r8,1392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1392, ctx.r8.u32);
	// rlwinm r8,r7,5,6,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0x3FFFFE0;
	// stw r8,1376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1376, ctx.r8.u32);
	// stw r11,1372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1372, ctx.r11.u32);
	// lfs f12,1556(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1556);
	ctx.f12.f64 = double(temp.f32);
	// stw r3,1388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1388, ctx.r3.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// lwz r8,652(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r8,1300(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1300);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lfs f0,-24756(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24756);
	ctx.f0.f64 = double(temp.f32);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// lfs f13,952(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 952);
	ctx.f13.f64 = double(temp.f32);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmadds f11,f11,f12,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fadds f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fmadds f11,f11,f13,f30
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f30.f64));
	// fctidz f11,f11
	ctx.f11.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f11.f64));
	// stfd f11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f11.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r11,r11,9,12,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFFE00;
	// stw r11,1380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1380, ctx.r11.u32);
	// clrldi r11,r9,32
	ctx.r11.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// beq cr6,0x8268a6a4
	if (ctx.cr6.eq) goto loc_8268A6A4;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfs f12,1572(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1572);
	ctx.f12.f64 = double(temp.f32);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfs f11,1568(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1568);
	ctx.f11.f64 = double(temp.f32);
	// lfd f10,88(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// fmadds f12,f10,f12,f9
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmadds f11,f10,f11,f9
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f9.f64));
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fmadds f12,f12,f13,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f30.f64));
	// fmadds f0,f0,f13,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f30.f64));
	// fctidz f13,f12
	ctx.f13.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r10,r10,9,13,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x7FE00;
	// rlwinm r11,r11,9,13,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x7FE00;
	// stw r10,1396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1396, ctx.r10.u32);
	// stw r11,1400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1400, ctx.r11.u32);
	// b 0x8268a6e4
	goto loc_8268A6E4;
loc_8268A6A4:
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f11,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmadds f12,f11,f12,f10
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fmadds f0,f0,f13,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f30.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r11,r11,9,13,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x7FE00;
	// stw r11,1396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1396, ctx.r11.u32);
loc_8268A6E4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// lfd f30,-168(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268A6FC"))) PPC_WEAK_FUNC(sub_8268A6FC);
PPC_FUNC_IMPL(__imp__sub_8268A6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268A700"))) PPC_WEAK_FUNC(sub_8268A700);
PPC_FUNC_IMPL(__imp__sub_8268A700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x8268A708;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r9,4(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r8,8(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r7,12(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r7,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bne cr6,0x8268a774
	if (!ctx.cr6.eq) goto loc_8268A774;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8268a774
	if (!ctx.cr6.eq) goto loc_8268A774;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8268a774
	if (!ctx.cr6.eq) goto loc_8268A774;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8268a774
	if (!ctx.cr6.eq) goto loc_8268A774;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
loc_8268A774:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// subf r29,r9,r7
	ctx.r29.s64 = ctx.r7.s64 - ctx.r9.s64;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// bne cr6,0x8268a798
	if (!ctx.cr6.eq) goto loc_8268A798;
	// lwz r28,21952(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 21952);
loc_8268A798:
	// lwz r30,20(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8268a7e0
	if (!ctx.cr6.eq) goto loc_8268A7E0;
	// lwz r11,13992(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13992);
	// mullw r9,r28,r29
	ctx.r9.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r29.s32);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// divwu r30,r9,r10
	ctx.r30.u32 = ctx.r9.u32 / ctx.r10.u32;
	// twllei r10,0
	if (ctx.r10.u32 <= 0) __builtin_debugtrap();
	// bne 0x8268a7dc
	if (!ctx.cr0.eq) goto loc_8268A7DC;
	// bl 0x83179474
	ctx.lr = 0x8268A7C0;
	__imp__VdQueryVideoFlags(ctx, base);
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8268a7dc
	if (!ctx.cr0.eq) goto loc_8268A7DC;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x8268a7dc
	if (ctx.cr6.gt) goto loc_8268A7DC;
	// lwz r11,21956(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 21956);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8268a7e0
	if (!ctx.cr6.gt) goto loc_8268A7E0;
loc_8268A7DC:
	// lwz r30,21956(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 21956);
loc_8268A7E0:
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x8268A7F0;
	sub_82FA77C0(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r28,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r28.u32);
	// stw r30,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r30.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// stw r9,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r9.u32);
	// stw r8,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r8.u32);
	// stw r11,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268A824"))) PPC_WEAK_FUNC(sub_8268A824);
PPC_FUNC_IMPL(__imp__sub_8268A824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268A828"))) PPC_WEAK_FUNC(sub_8268A828);
PPC_FUNC_IMPL(__imp__sub_8268A828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x8268A830;
	__savegprlr_25(ctx, base);
	// stwu r1,-2464(r1)
	ea = -2464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8268a700
	ctx.lr = 0x8268A848;
	sub_8268A700(ctx, base);
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,21960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21960);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// lwz r8,21952(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21952);
	// lwz r6,136(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r5,140(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// subf r9,r9,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r9.s64;
	// subf r5,r4,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r4.s64;
	// beq cr6,0x8268a8a8
	if (ctx.cr6.eq) goto loc_8268A8A8;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8268a88c
	if (ctx.cr6.lt) goto loc_8268A88C;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x8268a88c
	if (ctx.cr6.gt) goto loc_8268A88C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8268A88C:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8268a8a8
	if (ctx.cr6.lt) goto loc_8268A8A8;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x8268a8a8
	if (ctx.cr6.gt) goto loc_8268A8A8;
	// subf r8,r10,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r10.s64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwinm r7,r8,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
loc_8268A8A8:
	// lwz r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r6,21956(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21956);
	// rlwimi r30,r29,16,0,15
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r29.u32, 16) & 0xFFFF0000) | (ctx.r30.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// rlwinm r28,r10,16,0,15
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// rlwimi r5,r9,16,0,15
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r5.u64 & 0xFFFFFFFF0000FFFF);
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// addi r10,r1,172
	ctx.r10.s64 = ctx.r1.s64 + 172;
	// lwz r8,148(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// rlwimi r4,r7,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r7.u32, 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// subf r6,r8,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r8.s64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// clrlwi r29,r8,16
	ctx.r29.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// rlwinm r8,r6,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r1,156
	ctx.r10.s64 = ctx.r1.s64 + 156;
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// addi r11,r1,992
	ctx.r11.s64 = ctx.r1.s64 + 992;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// or r7,r29,r28
	ctx.r7.u64 = ctx.r29.u64 | ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// bl 0x8268a180
	ctx.lr = 0x8268A924;
	sub_8268A180(ctx, base);
	// lis r5,-32768
	ctx.r5.s64 = -2147483648;
	// li r4,800
	ctx.r4.s64 = 800;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x83179524
	ctx.lr = 0x8268A934;
	__imp__RtlFillMemoryUlong(ctx, base);
	// li r4,220
	ctx.r4.s64 = 220;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82675738
	ctx.lr = 0x8268A940;
	sub_82675738(ctx, base);
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,200
	ctx.r7.s64 = 200;
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// lwz r8,140(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// subf r6,r11,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// subf r4,r9,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r9.s64;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r7,r1,992
	ctx.r7.s64 = ctx.r1.s64 + 992;
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// rlwimi r4,r6,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r6.u32, 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// addi r6,r1,172
	ctx.r6.s64 = ctx.r1.s64 + 172;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// rlwimi r25,r11,16,0,15
	ctx.r25.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r25.u64 & 0xFFFFFFFF0000FFFF);
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r9,r1,156
	ctx.r9.s64 = ctx.r1.s64 + 156;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// or r6,r29,r28
	ctx.r6.u64 = ctx.r29.u64 | ctx.r28.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83179514
	ctx.lr = 0x8268A9A8;
	__imp__VdInitializeScalerCommandBuffer(ctx, base);
	// rlwinm r29,r3,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82fa77c0
	ctx.lr = 0x8268A9BC;
	sub_82FA77C0(ctx, base);
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x82676e00
	ctx.lr = 0x8268A9CC;
	sub_82676E00(ctx, base);
	// addi r1,r1,2464
	ctx.r1.s64 = ctx.r1.s64 + 2464;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268A9D4"))) PPC_WEAK_FUNC(sub_8268A9D4);
PPC_FUNC_IMPL(__imp__sub_8268A9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268A9D8"))) PPC_WEAK_FUNC(sub_8268A9D8);
PPC_FUNC_IMPL(__imp__sub_8268A9D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8268A9E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r6,12(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r5,16(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r3,20(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r4,24(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r7,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// stw r6,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r6.u32);
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// bne cr6,0x8268aa38
	if (!ctx.cr6.eq) goto loc_8268AA38;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// b 0x8268aa44
	goto loc_8268AA44;
loc_8268AA38:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
loc_8268AA44:
	// addi r9,r1,108
	ctx.r9.s64 = ctx.r1.s64 + 108;
	// lwz r11,15232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15232);
	// addi r8,r1,124
	ctx.r8.s64 = ctx.r1.s64 + 124;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// beq cr6,0x8268aa94
	if (ctx.cr6.eq) goto loc_8268AA94;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r11,r10,2,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x2;
	// clrlwi r10,r9,19
	ctx.r10.u64 = ctx.r9.u32 & 0x1FFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r9,19,19,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0x1FFF;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r29,r9,r11
	ctx.r29.u64 = ctx.r9.u64 + ctx.r11.u64;
	// b 0x8268aa9c
	goto loc_8268AA9C;
loc_8268AA94:
	// lwz r30,13948(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13948);
	// lwz r29,13952(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13952);
loc_8268AA9C:
	// addi r28,r31,14128
	ctx.r28.s64 = ctx.r31.s64 + 14128;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,56
	ctx.r5.s64 = 56;
	// bl 0x82fa77c0
	ctx.lr = 0x8268AAB0;
	sub_82FA77C0(ctx, base);
	// lbz r11,11070(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11070);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stb r11,11070(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11070, ctx.r11.u8);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268a700
	ctx.lr = 0x8268AAD4;
	sub_8268A700(ctx, base);
	// lwz r11,21952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21952);
	// lwz r10,21956(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21956);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r30,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, ctx.r30.u16);
	// li r5,56
	ctx.r5.s64 = 56;
	// sth r29,146(r1)
	PPC_STORE_U16(ctx.r1.u32 + 146, ctx.r29.u16);
	// sth r11,148(r1)
	PPC_STORE_U16(ctx.r1.u32 + 148, ctx.r11.u16);
	// sth r10,150(r1)
	PPC_STORE_U16(ctx.r1.u32 + 150, ctx.r10.u16);
	// bl 0x82fa77c0
	ctx.lr = 0x8268AAFC;
	sub_82FA77C0(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x831794e4
	ctx.lr = 0x8268AB08;
	__imp__VdCallGraphicsNotificationRoutines(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268AB10"))) PPC_WEAK_FUNC(sub_8268AB10);
PPC_FUNC_IMPL(__imp__sub_8268AB10) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,20720(r10)
	PPC_STORE_U8(ctx.r10.u32 + 20720, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268AB24"))) PPC_WEAK_FUNC(sub_8268AB24);
PPC_FUNC_IMPL(__imp__sub_8268AB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268AB28"))) PPC_WEAK_FUNC(sub_8268AB28);
PPC_FUNC_IMPL(__imp__sub_8268AB28) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,20720(r10)
	PPC_STORE_U8(ctx.r10.u32 + 20720, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268AB3C"))) PPC_WEAK_FUNC(sub_8268AB3C);
PPC_FUNC_IMPL(__imp__sub_8268AB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268AB40"))) PPC_WEAK_FUNC(sub_8268AB40);
PPC_FUNC_IMPL(__imp__sub_8268AB40) {
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
	// bl 0x82fa3918
	ctx.lr = 0x8268AB50;
	sub_82FA3918(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268AB74"))) PPC_WEAK_FUNC(sub_8268AB74);
PPC_FUNC_IMPL(__imp__sub_8268AB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268AB78"))) PPC_WEAK_FUNC(sub_8268AB78);
PPC_FUNC_IMPL(__imp__sub_8268AB78) {
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
	// bl 0x82fa3918
	ctx.lr = 0x8268AB90;
	sub_82FA3918(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,32728
	ctx.r11.u64 = ctx.r11.u64 | 32728;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8268abac
	if (!ctx.cr6.lt) goto loc_8268ABAC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa3918
	ctx.lr = 0x8268ABA8;
	sub_82FA3918(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
loc_8268ABAC:
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,-6988(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6988, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8268ABCC"))) PPC_WEAK_FUNC(sub_8268ABCC);
PPC_FUNC_IMPL(__imp__sub_8268ABCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268ABD0"))) PPC_WEAK_FUNC(sub_8268ABD0);
PPC_FUNC_IMPL(__imp__sub_8268ABD0) {
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
	// lis r31,-31957
	ctx.r31.s64 = -2094333952;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r31,20721
	ctx.r11.s64 = ctx.r31.s64 + 20721;
	// li r5,260
	ctx.r5.s64 = 260;
	// addi r3,r11,7
	ctx.r3.s64 = ctx.r11.s64 + 7;
	// bl 0x82fa5b30
	ctx.lr = 0x8268ABF8;
	sub_82FA5B30(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,20721(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20721, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_8268AC18"))) PPC_WEAK_FUNC(sub_8268AC18);
PPC_FUNC_IMPL(__imp__sub_8268AC18) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,-3721(r10)
	PPC_STORE_U8(ctx.r10.u32 + -3721, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268AC2C"))) PPC_WEAK_FUNC(sub_8268AC2C);
PPC_FUNC_IMPL(__imp__sub_8268AC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268AC30"))) PPC_WEAK_FUNC(sub_8268AC30);
PPC_FUNC_IMPL(__imp__sub_8268AC30) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,-3722(r10)
	PPC_STORE_U8(ctx.r10.u32 + -3722, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268AC44"))) PPC_WEAK_FUNC(sub_8268AC44);
PPC_FUNC_IMPL(__imp__sub_8268AC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268AC48"))) PPC_WEAK_FUNC(sub_8268AC48);
PPC_FUNC_IMPL(__imp__sub_8268AC48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x8268AC50;
	__savegprlr_25(ctx, base);
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r10,11264
	ctx.r9.s64 = ctx.r10.s64 + 11264;
	// addi r29,r11,6
	ctx.r29.s64 = ctx.r11.s64 + 6;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r10,11264(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11264);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lis r27,-32038
	ctx.r27.s64 = -2099642368;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// li r5,54
	ctx.r5.s64 = 54;
	// lhz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,90
	ctx.r3.s64 = ctx.r1.s64 + 90;
	// ori r27,r27,7
	ctx.r27.u64 = ctx.r27.u64 | 7;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// sth r9,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r9.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x8268AC9C;
	sub_82FA7CF0(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32151
	ctx.r10.s64 = -2107047936;
	// addi r9,r11,11276
	ctx.r9.s64 = ctx.r11.s64 + 11276;
	// addi r10,r10,-21744
	ctx.r10.s64 = ctx.r10.s64 + -21744;
	// li r5,51
	ctx.r5.s64 = 51;
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,11276(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11276);
	// addi r3,r1,161
	ctx.r3.s64 = ctx.r1.s64 + 161;
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lbz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stw r10,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// stw r8,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r8.u32);
	// stb r9,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r9.u8);
	// bl 0x82fa7cf0
	ctx.lr = 0x8268ACE0;
	sub_82FA7CF0(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32151
	ctx.r10.s64 = -2107047936;
	// addi r9,r11,11292
	ctx.r9.s64 = ctx.r11.s64 + 11292;
	// addi r10,r10,-21720
	ctx.r10.s64 = ctx.r10.s64 + -21720;
	// li r5,54
	ctx.r5.s64 = 54;
	// stw r10,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,11292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11292);
	// addi r3,r1,226
	ctx.r3.s64 = ctx.r1.s64 + 226;
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lhz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 8);
	// stw r11,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r11.u32);
	// stw r10,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r10.u32);
	// sth r9,224(r1)
	PPC_STORE_U16(ctx.r1.u32 + 224, ctx.r9.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x8268AD1C;
	sub_82FA7CF0(ctx, base);
	// lis r9,-32151
	ctx.r9.s64 = -2107047936;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// li r11,19
	ctx.r11.s64 = 19;
	// addi r8,r9,-21696
	ctx.r8.s64 = ctx.r9.s64 + -21696;
	// addi r10,r10,11304
	ctx.r10.s64 = ctx.r10.s64 + 11304;
	// addi r9,r1,283
	ctx.r9.s64 = ctx.r1.s64 + 283;
	// stw r8,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r8.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8268AD40:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x8268ad40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8268AD40;
	// li r5,45
	ctx.r5.s64 = 45;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,303
	ctx.r3.s64 = ctx.r1.s64 + 303;
	// bl 0x82fa7cf0
	ctx.lr = 0x8268AD5C;
	sub_82FA7CF0(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32151
	ctx.r10.s64 = -2107047936;
	// addi r4,r11,11324
	ctx.r4.s64 = ctx.r11.s64 + 11324;
	// addi r11,r10,-21640
	ctx.r11.s64 = ctx.r10.s64 + -21640;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// li r5,27
	ctx.r5.s64 = 27;
	// stw r11,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r11.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x8268AD7C;
	sub_82FA77C0(ctx, base);
	// li r5,37
	ctx.r5.s64 = 37;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,379
	ctx.r3.s64 = ctx.r1.s64 + 379;
	// bl 0x82fa7cf0
	ctx.lr = 0x8268AD8C;
	sub_82FA7CF0(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32151
	ctx.r10.s64 = -2107047936;
	// addi r4,r11,11352
	ctx.r4.s64 = ctx.r11.s64 + 11352;
	// addi r11,r10,-21552
	ctx.r11.s64 = ctx.r10.s64 + -21552;
	// addi r3,r1,420
	ctx.r3.s64 = ctx.r1.s64 + 420;
	// li r5,25
	ctx.r5.s64 = 25;
	// stw r11,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r11.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x8268ADAC;
	sub_82FA77C0(ctx, base);
	// li r5,39
	ctx.r5.s64 = 39;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,445
	ctx.r3.s64 = ctx.r1.s64 + 445;
	// bl 0x82fa7cf0
	ctx.lr = 0x8268ADBC;
	sub_82FA7CF0(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32151
	ctx.r10.s64 = -2107047936;
	// addi r9,r11,11380
	ctx.r9.s64 = ctx.r11.s64 + 11380;
	// addi r10,r10,-21456
	ctx.r10.s64 = ctx.r10.s64 + -21456;
	// li r5,49
	ctx.r5.s64 = 49;
	// stw r10,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,11380(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11380);
	// addi r3,r1,503
	ctx.r3.s64 = ctx.r1.s64 + 503;
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lhz r7,12(r9)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + 12);
	// lbz r9,14(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 14);
	// stw r11,488(r1)
	PPC_STORE_U32(ctx.r1.u32 + 488, ctx.r11.u32);
	// stw r10,492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 492, ctx.r10.u32);
	// stw r8,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r8.u32);
	// sth r7,500(r1)
	PPC_STORE_U16(ctx.r1.u32 + 500, ctx.r7.u16);
	// stb r9,502(r1)
	PPC_STORE_U8(ctx.r1.u32 + 502, ctx.r9.u8);
	// bl 0x82fa7cf0
	ctx.lr = 0x8268AE08;
	sub_82FA7CF0(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32151
	ctx.r10.s64 = -2107047936;
	// addi r9,r11,11396
	ctx.r9.s64 = ctx.r11.s64 + 11396;
	// addi r10,r10,-21480
	ctx.r10.s64 = ctx.r10.s64 + -21480;
	// li r5,51
	ctx.r5.s64 = 51;
	// stw r10,552(r1)
	PPC_STORE_U32(ctx.r1.u32 + 552, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,11396(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11396);
	// addi r3,r1,569
	ctx.r3.s64 = ctx.r1.s64 + 569;
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lbz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12);
	// stw r11,556(r1)
	PPC_STORE_U32(ctx.r1.u32 + 556, ctx.r11.u32);
	// stw r10,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r10.u32);
	// stw r8,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r8.u32);
	// stb r9,568(r1)
	PPC_STORE_U8(ctx.r1.u32 + 568, ctx.r9.u8);
	// bl 0x82fa7cf0
	ctx.lr = 0x8268AE4C;
	sub_82FA7CF0(ctx, base);
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r11,r11,-21456
	ctx.r11.s64 = ctx.r11.s64 + -21456;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// stw r11,620(r1)
	PPC_STORE_U32(ctx.r1.u32 + 620, ctx.r11.u32);
loc_8268AE60:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8268AE64:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8268ae64
	if (!ctx.cr6.eq) goto loc_8268AE64;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rotlwi r30,r11,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82fa4320
	ctx.lr = 0x8268AE90;
	sub_82FA4320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8268aec8
	if (ctx.cr0.eq) goto loc_8268AEC8;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,68
	ctx.r31.s64 = ctx.r31.s64 + 68;
	// cmplwi cr6,r28,8
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 8, ctx.xer);
	// blt cr6,0x8268ae60
	if (ctx.cr6.lt) goto loc_8268AE60;
loc_8268AEA8:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,4456
	ctx.r4.s64 = ctx.r11.s64 + 4456;
loc_8268AEB0:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82fa5b30
	ctx.lr = 0x8268AEBC;
	sub_82FA5B30(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_8268AEC8:
	// mulli r10,r28,68
	ctx.r10.s64 = ctx.r28.s64 * 68;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268AEE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r27,730
	ctx.r27.s64 = 47841280;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8268aea8
	if (ctx.cr0.eq) goto loc_8268AEA8;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,11412
	ctx.r4.s64 = ctx.r11.s64 + 11412;
	// b 0x8268aeb0
	goto loc_8268AEB0;
}

__attribute__((alias("__imp__sub_8268AEFC"))) PPC_WEAK_FUNC(sub_8268AEFC);
PPC_FUNC_IMPL(__imp__sub_8268AEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268AF00"))) PPC_WEAK_FUNC(sub_8268AF00);
PPC_FUNC_IMPL(__imp__sub_8268AF00) {
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
	// addi r31,r3,23772
	ctx.r31.s64 = ctx.r3.s64 + 23772;
	// lwz r3,24364(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8268af48
	if (ctx.cr6.eq) goto loc_8268AF48;
	// lwz r11,612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 612);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8268af40
	if (!ctx.cr0.eq) goto loc_8268AF40;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x83179334
	ctx.lr = 0x8268AF3C;
	__imp__MmFreePhysicalMemory(ctx, base);
	// b 0x8268af48
	goto loc_8268AF48;
loc_8268AF40:
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// bl 0x82691460
	ctx.lr = 0x8268AF48;
	sub_82691460(ctx, base);
loc_8268AF48:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8268af80
	if (ctx.cr6.eq) goto loc_8268AF80;
	// lwz r11,612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 612);
	// srawi r11,r11,30
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 30;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8268af74
	if (ctx.cr6.lt) goto loc_8268AF74;
	// bne cr6,0x8268af80
	if (!ctx.cr6.eq) goto loc_8268AF80;
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// bl 0x82691460
	ctx.lr = 0x8268AF70;
	sub_82691460(ctx, base);
	// b 0x8268af80
	goto loc_8268AF80;
loc_8268AF74:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x83179334
	ctx.lr = 0x8268AF80;
	__imp__MmFreePhysicalMemory(ctx, base);
loc_8268AF80:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8268afbc
	if (ctx.cr6.eq) goto loc_8268AFBC;
	// lwz r11,612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 612);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r11,r11,30
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 30;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8268afb0
	if (ctx.cr6.lt) goto loc_8268AFB0;
	// bne cr6,0x8268afbc
	if (!ctx.cr6.eq) goto loc_8268AFBC;
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// bl 0x82691460
	ctx.lr = 0x8268AFAC;
	sub_82691460(ctx, base);
	// b 0x8268afbc
	goto loc_8268AFBC;
loc_8268AFB0:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x83179334
	ctx.lr = 0x8268AFBC;
	__imp__MmFreePhysicalMemory(ctx, base);
loc_8268AFBC:
	// li r5,620
	ctx.r5.s64 = 620;
	// lwz r30,616(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 616);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x8268AFD0;
	sub_82FA7CF0(ctx, base);
	// li r11,41
	ctx.r11.s64 = 41;
	// addi r10,r31,20
	ctx.r10.s64 = ctx.r31.s64 + 20;
	// stw r30,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r30.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8268AFE8:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8268afe8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8268AFE8;
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

__attribute__((alias("__imp__sub_8268B008"))) PPC_WEAK_FUNC(sub_8268B008);
PPC_FUNC_IMPL(__imp__sub_8268B008) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7650
	ctx.lr = 0x8268B010;
	__savegprlr_18(ctx, base);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24376(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24376);
	// addi r31,r3,23772
	ctx.r31.s64 = ctx.r3.s64 + 23772;
	// stw r5,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r5.u32);
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r10,r31,372
	ctx.r10.s64 = ctx.r31.s64 + 372;
	// stw r11,24376(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24376, ctx.r11.u32);
	// srawi. r7,r11,29
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 29;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwz r6,36(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// addi r9,r31,368
	ctx.r9.s64 = ctx.r31.s64 + 368;
	// lwz r11,40(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// rlwinm r11,r11,2,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x2;
	// clrlwi r8,r6,19
	ctx.r8.u64 = ctx.r6.u32 & 0x1FFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r6,r6,19,19,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 19) & 0x1FFF;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r6,r8,31
	ctx.r6.s64 = ctx.r8.s64 + 31;
	// sth r8,24140(r3)
	PPC_STORE_U16(ctx.r3.u32 + 24140, ctx.r8.u16);
	// addi r5,r11,31
	ctx.r5.s64 = ctx.r11.s64 + 31;
	// sth r11,24142(r3)
	PPC_STORE_U16(ctx.r3.u32 + 24142, ctx.r11.u16);
	// rlwinm r6,r6,0,16,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFE0;
	// rlwinm r8,r5,0,16,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFE0;
	// sth r6,24144(r3)
	PPC_STORE_U16(ctx.r3.u32 + 24144, ctx.r6.u16);
	// sth r8,24146(r3)
	PPC_STORE_U16(ctx.r3.u32 + 24146, ctx.r8.u16);
	// bne 0x8268b1f8
	if (!ctx.cr0.eq) goto loc_8268B1F8;
	// lhz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// addi r5,r9,27984
	ctx.r5.s64 = ctx.r9.s64 + 27984;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r6,-32231
	ctx.r6.s64 = -2112290816;
	// frsp f10,f0
	ctx.f10.f64 = double(float(ctx.f0.f64));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,-24756(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24756);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r31,408
	ctx.r7.s64 = ctx.r31.s64 + 408;
	// lfs f13,840(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 840);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// lfs f12,848(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 848);
	ctx.f12.f64 = double(temp.f32);
	// li r11,16
	ctx.r11.s64 = 16;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r9,r9,-10560
	ctx.r9.s64 = ctx.r9.s64 + -10560;
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// li r28,32
	ctx.r28.s64 = 32;
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r8,r9,16
	ctx.r8.s64 = ctx.r9.s64 + 16;
	// lfs f11,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r31,440
	ctx.r5.s64 = ctx.r31.s64 + 440;
	// lfs f12,31396(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 31396);
	ctx.f12.f64 = double(temp.f32);
	// addi r6,r31,424
	ctx.r6.s64 = ctx.r31.s64 + 424;
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r29,r9,32
	ctx.r29.s64 = ctx.r9.s64 + 32;
	// fdivs f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r25,r1,96
	ctx.r25.s64 = ctx.r1.s64 + 96;
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lis r3,-32227
	ctx.r3.s64 = -2112028672;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r4,r31,456
	ctx.r4.s64 = ctx.r31.s64 + 456;
	// stvlx v0,0,r7
	ea = ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// addi r27,r3,15584
	ctx.r27.s64 = ctx.r3.s64 + 15584;
	// stvrx v0,r7,r11
	ea = ctx.r7.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// lis r30,-32227
	ctx.r30.s64 = -2112028672;
	// lvlx v13,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r3,r31,472
	ctx.r3.s64 = ctx.r31.s64 + 472;
	// lvrx v0,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor v0,v13,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx v0,0,r6
	ea = ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// addi r26,r30,15568
	ctx.r26.s64 = ctx.r30.s64 + 15568;
	// stvrx v0,r6,r11
	ea = ctx.r6.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// lis r7,-32227
	ctx.r7.s64 = -2112028672;
	// lvrx v13,r11,r8
	temp.u32 = ctx.r11.u32 + ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r30,r31,488
	ctx.r30.s64 = ctx.r31.s64 + 488;
	// lvlx v0,r9,r11
	temp.u32 = ctx.r9.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor v0,v0,v13
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// stvlx v0,0,r5
	ea = ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// addi r24,r7,15552
	ctx.r24.s64 = ctx.r7.s64 + 15552;
	// stvrx v0,r5,r11
	ea = ctx.r5.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// lis r5,-32227
	ctx.r5.s64 = -2112028672;
	// lvlx v0,r9,r28
	temp.u32 = ctx.r9.u32 + ctx.r28.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r31,504
	ctx.r9.s64 = ctx.r31.s64 + 504;
	// lvrx v13,r11,r29
	temp.u32 = ctx.r11.u32 + ctx.r29.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor v0,v0,v13
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// stvlx v0,0,r4
	ea = ctx.r4.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// li r8,12
	ctx.r8.s64 = 12;
	// stvrx v0,r4,r11
	ea = ctx.r4.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// addi r4,r5,15536
	ctx.r4.s64 = ctx.r5.s64 + 15536;
	// lvx128 v0,r0,r27
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r27.u32) & ~0xF), VectorMaskL));
	// li r7,48
	ctx.r7.s64 = 48;
	// stvlx v0,0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// addi r6,r31,520
	ctx.r6.s64 = ctx.r31.s64 + 520;
	// stvrx v0,r3,r11
	ea = ctx.r3.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// lis r3,-32227
	ctx.r3.s64 = -2112028672;
	// lvx128 v0,r0,r26
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r26.u32) & ~0xF), VectorMaskL));
	// addi r5,r31,536
	ctx.r5.s64 = ctx.r31.s64 + 536;
	// stvlx v0,0,r30
	ea = ctx.r30.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// stvrx v0,r30,r11
	ea = ctx.r30.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// lvx128 v13,r0,r24
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r24.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r25
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r25.u32) & ~0xF), VectorMaskL));
	// stvlx v13,0,r9
	ea = ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v13.u8[15 - i]);
	// stvrx v13,r9,r11
	ea = ctx.r9.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v13.u8[i]);
	// addi r9,r3,15520
	ctx.r9.s64 = ctx.r3.s64 + 15520;
	// lvx128 v13,r0,r4
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// stvlx v13,0,r6
	ea = ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v13.u8[15 - i]);
	// addi r4,r31,552
	ctx.r4.s64 = ctx.r31.s64 + 552;
	// stvrx v13,r6,r11
	ea = ctx.r6.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v13.u8[i]);
	// stvlx v0,0,r5
	ea = ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// stvrx v0,r5,r11
	ea = ctx.r5.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvlx v0,0,r4
	ea = ctx.r4.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// stvrx v0,r4,r11
	ea = ctx.r4.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// lhz r11,2(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// lhz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r11,r11,27,5,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFE0;
	// b 0x8268b388
	goto loc_8268B388;
loc_8268B1F8:
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x8268b390
	if (!ctx.cr6.eq) goto loc_8268B390;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// lhz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// addi r9,r9,27984
	ctx.r9.s64 = ctx.r9.s64 + 27984;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// addi r29,r1,96
	ctx.r29.s64 = ctx.r1.s64 + 96;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// lfs f0,32(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// addi r24,r1,112
	ctx.r24.s64 = ctx.r1.s64 + 112;
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r6,r31,408
	ctx.r6.s64 = ctx.r31.s64 + 408;
	// lfs f0,-2340(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// li r11,16
	ctx.r11.s64 = 16;
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r5,r31,424
	ctx.r5.s64 = ctx.r31.s64 + 424;
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r4,r31,440
	ctx.r4.s64 = ctx.r31.s64 + 440;
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// li r26,32
	ctx.r26.s64 = 32;
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lfs f11,848(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 848);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,-24756(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24756);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-31967
	ctx.r9.s64 = -2094989312;
	// lfs f13,31512(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 31512);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r9,r9,-29520
	ctx.r9.s64 = ctx.r9.s64 + -29520;
	// addi r3,r31,456
	ctx.r3.s64 = ctx.r31.s64 + 456;
	// addi r28,r9,16
	ctx.r28.s64 = ctx.r9.s64 + 16;
	// addi r27,r9,32
	ctx.r27.s64 = ctx.r9.s64 + 32;
	// addi r25,r8,15584
	ctx.r25.s64 = ctx.r8.s64 + 15584;
	// addi r30,r31,472
	ctx.r30.s64 = ctx.r31.s64 + 472;
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lis r7,-32227
	ctx.r7.s64 = -2112028672;
	// addi r23,r8,15568
	ctx.r23.s64 = ctx.r8.s64 + 15568;
	// addi r22,r7,15552
	ctx.r22.s64 = ctx.r7.s64 + 15552;
	// lis r21,-32227
	ctx.r21.s64 = -2112028672;
	// li r8,3
	ctx.r8.s64 = 3;
	// li r7,12
	ctx.r7.s64 = 12;
	// addi r21,r21,15536
	ctx.r21.s64 = ctx.r21.s64 + 15536;
	// lis r20,-32227
	ctx.r20.s64 = -2112028672;
	// fdivs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fdivs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lvx128 v0,r0,r29
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r29.u32) & ~0xF), VectorMaskL));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stvlx v0,0,r6
	ea = ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// stvrx v0,r6,r11
	ea = ctx.r6.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// addi r6,r31,520
	ctx.r6.s64 = ctx.r31.s64 + 520;
	// lvlx v13,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx v0,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor v0,v13,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx v0,0,r5
	ea = ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// stvrx v0,r5,r11
	ea = ctx.r5.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// lvlx v0,r9,r11
	temp.u32 = ctx.r9.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx v13,r11,r28
	temp.u32 = ctx.r11.u32 + ctx.r28.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor v0,v0,v13
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// stvlx v0,0,r4
	ea = ctx.r4.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// stvrx v0,r4,r11
	ea = ctx.r4.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// lvlx v0,r9,r26
	temp.u32 = ctx.r9.u32 + ctx.r26.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r31,488
	ctx.r9.s64 = ctx.r31.s64 + 488;
	// lvrx v13,r11,r27
	temp.u32 = ctx.r11.u32 + ctx.r27.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor v0,v0,v13
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// stvlx v0,0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// stvrx v0,r3,r11
	ea = ctx.r3.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// lvx128 v0,r0,r25
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r25.u32) & ~0xF), VectorMaskL));
	// stvlx v0,0,r30
	ea = ctx.r30.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// stvrx v0,r30,r11
	ea = ctx.r30.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// lvx128 v13,r0,r23
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r23.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r24
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r24.u32) & ~0xF), VectorMaskL));
	// stvlx v13,0,r9
	ea = ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v13.u8[15 - i]);
	// stvrx v13,r9,r11
	ea = ctx.r9.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v13.u8[i]);
	// addi r9,r31,504
	ctx.r9.s64 = ctx.r31.s64 + 504;
	// lvx128 v13,r0,r22
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r22.u32) & ~0xF), VectorMaskL));
	// stvlx v13,0,r9
	ea = ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v13.u8[15 - i]);
	// addi r5,r31,536
	ctx.r5.s64 = ctx.r31.s64 + 536;
	// stvrx v13,r9,r11
	ea = ctx.r9.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v13.u8[i]);
	// addi r3,r20,15520
	ctx.r3.s64 = ctx.r20.s64 + 15520;
	// lvx128 v13,r0,r21
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r21.u32) & ~0xF), VectorMaskL));
	// addi r4,r31,552
	ctx.r4.s64 = ctx.r31.s64 + 552;
	// stvlx v13,0,r6
	ea = ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v13.u8[15 - i]);
	// stvrx v13,r6,r11
	ea = ctx.r6.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v13.u8[i]);
	// stvlx v0,0,r5
	ea = ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// stvrx v0,r5,r11
	ea = ctx.r5.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// lvx128 v0,r0,r3
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// stvlx v0,0,r4
	ea = ctx.r4.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// stvrx v0,r4,r11
	ea = ctx.r4.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// lhz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lhz r10,2(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// rlwinm r11,r11,23,9,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7FFFFE;
loc_8268B388:
	// stw r11,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r11.u32);
	// b 0x8268b4e0
	goto loc_8268B4E0;
loc_8268B390:
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bne cr6,0x8268b4d8
	if (!ctx.cr6.eq) goto loc_8268B4D8;
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// li r11,16
	ctx.r11.s64 = 16;
	// addi r10,r10,-29424
	ctx.r10.s64 = ctx.r10.s64 + -29424;
	// addi r8,r31,424
	ctx.r8.s64 = ctx.r31.s64 + 424;
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// addi r6,r31,440
	ctx.r6.s64 = ctx.r31.s64 + 440;
	// addi r4,r10,32
	ctx.r4.s64 = ctx.r10.s64 + 32;
	// lvrx v0,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// li r27,32
	ctx.r27.s64 = 32;
	// lvlx v13,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r3,-32227
	ctx.r3.s64 = -2112028672;
	// vor v0,v13,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// addi r5,r31,456
	ctx.r5.s64 = ctx.r31.s64 + 456;
	// addi r26,r3,15584
	ctx.r26.s64 = ctx.r3.s64 + 15584;
	// addi r3,r31,472
	ctx.r3.s64 = ctx.r31.s64 + 472;
	// lis r30,-32227
	ctx.r30.s64 = -2112028672;
	// stvlx v0,0,r8
	ea = ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// lis r29,-32227
	ctx.r29.s64 = -2112028672;
	// stvrx v0,r8,r11
	ea = ctx.r8.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// addi r25,r30,15504
	ctx.r25.s64 = ctx.r30.s64 + 15504;
	// lvlx v13,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r30,r31,488
	ctx.r30.s64 = ctx.r31.s64 + 488;
	// addi r24,r29,15488
	ctx.r24.s64 = ctx.r29.s64 + 15488;
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// addi r29,r31,504
	ctx.r29.s64 = ctx.r31.s64 + 504;
	// addi r23,r8,15472
	ctx.r23.s64 = ctx.r8.s64 + 15472;
	// addi r28,r31,520
	ctx.r28.s64 = ctx.r31.s64 + 520;
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// mr r20,r11
	ctx.r20.u64 = ctx.r11.u64;
	// addi r22,r8,15456
	ctx.r22.s64 = ctx.r8.s64 + 15456;
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
	// addi r19,r8,15440
	ctx.r19.s64 = ctx.r8.s64 + 15440;
	// li r8,3
	ctx.r8.s64 = 3;
	// lvrx v0,r11,r7
	temp.u32 = ctx.r11.u32 + ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lis r7,-32227
	ctx.r7.s64 = -2112028672;
	// vor v0,v13,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx v0,0,r6
	ea = ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// addi r18,r7,15424
	ctx.r18.s64 = ctx.r7.s64 + 15424;
	// stvrx v0,r6,r11
	ea = ctx.r6.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// li r7,6
	ctx.r7.s64 = 6;
	// lvrx v0,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx v13,r10,r27
	temp.u32 = ctx.r10.u32 + ctx.r27.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor v0,v13,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx v0,0,r5
	ea = ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// addi r10,r31,552
	ctx.r10.s64 = ctx.r31.s64 + 552;
	// stvrx v0,r5,r11
	ea = ctx.r5.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// lvx128 v0,r0,r26
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r26.u32) & ~0xF), VectorMaskL));
	// stvlx v0,0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// stvrx v0,r3,r11
	ea = ctx.r3.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// lvx128 v0,r0,r25
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r25.u32) & ~0xF), VectorMaskL));
	// stvlx v0,0,r30
	ea = ctx.r30.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// stvrx v0,r30,r11
	ea = ctx.r30.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// lvx128 v0,r0,r24
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r24.u32) & ~0xF), VectorMaskL));
	// stvlx v0,0,r29
	ea = ctx.r29.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// stvrx v0,r29,r11
	ea = ctx.r29.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// lvx128 v0,r0,r23
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r23.u32) & ~0xF), VectorMaskL));
	// stvlx v0,0,r28
	ea = ctx.r28.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// stvrx v0,r28,r11
	ea = ctx.r28.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// lvx128 v0,r0,r22
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r22.u32) & ~0xF), VectorMaskL));
	// stvlx v0,0,r10
	ea = ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// stvrx v0,r10,r11
	ea = ctx.r10.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// addi r11,r31,408
	ctx.r11.s64 = ctx.r31.s64 + 408;
	// lvx128 v0,r0,r19
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r19.u32) & ~0xF), VectorMaskL));
	// li r10,48
	ctx.r10.s64 = 48;
	// stvlx v0,0,r11
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// stvrx v0,r11,r20
	ea = ctx.r11.u32 + ctx.r20.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// addi r11,r31,536
	ctx.r11.s64 = ctx.r31.s64 + 536;
	// lvx128 v0,r0,r18
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r18.u32) & ~0xF), VectorMaskL));
	// stvlx v0,0,r11
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// stvrx v0,r11,r20
	ea = ctx.r11.u32 + ctx.r20.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// lhz r11,2(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// addi r6,r11,-48
	ctx.r6.s64 = ctx.r11.s64 + -48;
	// lhz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// addi r11,r11,-80
	ctx.r11.s64 = ctx.r11.s64 + -80;
	// divwu r9,r6,r10
	ctx.r9.u32 = ctx.r6.u32 / ctx.r10.u32;
	// divwu r11,r11,r10
	ctx.r11.u32 = ctx.r11.u32 / ctx.r10.u32;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// b 0x8268b388
	goto loc_8268B388;
loc_8268B4D8:
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8268B4E0:
	// lwz r9,376(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// li r5,260
	ctx.r5.s64 = 260;
	// lwz r4,548(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// mullw r11,r9,r7
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// lwz r10,-6988(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6988);
	// addi r11,r11,511
	ctx.r11.s64 = ctx.r11.s64 + 511;
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// stw r9,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r9.u32);
	// rlwinm r11,r11,23,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0xFFFF;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// sth r11,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r11.u16);
	// addi r11,r11,172
	ctx.r11.s64 = ctx.r11.s64 + 172;
	// rldicr r30,r10,20,63
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 20) & 0xFFFFFFFFFFFFFFFF;
	// rlwinm r25,r11,9,0,22
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFFFFFE00;
	// bl 0x82fa5b30
	ctx.lr = 0x8268B520;
	sub_82FA5B30(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stb r26,387(r1)
	PPC_STORE_U8(ctx.r1.u32 + 387, ctx.r26.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8268B530:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8268b530
	if (!ctx.cr6.eq) goto loc_8268B530;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8268b580
	if (ctx.cr6.lt) goto loc_8268B580;
loc_8268B564:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,92
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 92, ctx.xer);
	// beq cr6,0x8268b580
	if (ctx.cr6.eq) goto loc_8268B580;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8268b564
	if (!ctx.cr6.lt) goto loc_8268B564;
loc_8268B580:
	// stb r26,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r26.u8);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82a83e28
	ctx.lr = 0x8268B598;
	sub_82A83E28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8268b5cc
	if (ctx.cr0.eq) goto loc_8268B5CC;
	// lis r10,640
	ctx.r10.s64 = 41943040;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// add r9,r30,r10
	ctx.r9.u64 = ctx.r30.u64 + ctx.r10.u64;
	// cmpld cr6,r11,r9
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r9.u64, ctx.xer);
	// bge cr6,0x8268b5cc
	if (!ctx.cr6.lt) goto loc_8268B5CC;
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// ble cr6,0x8268b5c8
	if (!ctx.cr6.gt) goto loc_8268B5C8;
	// lis r10,-640
	ctx.r10.s64 = -41943040;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8268b5cc
	goto loc_8268B5CC;
loc_8268B5C8:
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_8268B5CC:
	// addi r11,r25,2048
	ctx.r11.s64 = ctx.r25.s64 + 2048;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// cmpld cr6,r11,r30
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r30.u64, ctx.xer);
	// ble cr6,0x8268b5e8
	if (!ctx.cr6.gt) goto loc_8268B5E8;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8268b754
	goto loc_8268B754;
loc_8268B5E8:
	// lis r11,-17
	ctx.r11.s64 = -1114112;
	// lwz r9,596(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// oris r8,r10,65520
	ctx.r8.u64 = ctx.r10.u64 | 4293918720;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// rotlwi r10,r30,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// divdu r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 / ctx.r8.u64;
	// li r27,-1
	ctx.r27.s64 = -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rlwimi r9,r11,14,12,17
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 14) & 0xFC000) | (ctx.r9.u64 & 0xFFFFFFFFFFF03FFF);
	// rlwinm r11,r9,18,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x3F;
	// stw r9,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r9.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,20,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFF00000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r11.u32);
loc_8268B634:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8268b650
	if (ctx.cr6.eq) goto loc_8268B650;
	// lwz r11,612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 612);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// srawi r11,r11,30
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 30;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8268b654
	if (ctx.cr6.eq) goto loc_8268B654;
loc_8268B650:
	// lwz r29,616(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 616);
loc_8268B654:
	// li r8,4096
	ctx.r8.s64 = 4096;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1028
	ctx.r5.s64 = 1028;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// bl 0x83179564
	ctx.lr = 0x8268B674;
	__imp__MmAllocatePhysicalMemoryEx(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8268b6a8
	if (!ctx.cr0.eq) goto loc_8268B6A8;
	// lis r4,-18048
	ctx.r4.s64 = -1182793728;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82691410
	ctx.lr = 0x8268B688;
	sub_82691410(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8268b698
	if (ctx.cr0.eq) goto loc_8268B698;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x8268b6a8
	goto loc_8268B6A8;
loc_8268B698:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8268b6a8
	if (ctx.cr6.eq) goto loc_8268B6A8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r30,2
	ctx.r30.s64 = 2;
loc_8268B6A8:
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stwx r3,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r3.u32);
	// beq cr6,0x8268b74c
	if (ctx.cr6.eq) goto loc_8268B74C;
	// lwz r11,612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 612);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8268b6cc
	if (!ctx.cr6.eq) goto loc_8268B6CC;
	// rlwimi r11,r30,30,0,1
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 30) & 0xC0000000) | (ctx.r11.u64 & 0xFFFFFFFF3FFFFFFF);
	// b 0x8268b6d0
	goto loc_8268B6D0;
loc_8268B6CC:
	// rlwimi r11,r30,28,2,3
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 28) & 0x30000000) | (ctx.r11.u64 & 0xFFFFFFFFCFFFFFFF);
loc_8268B6D0:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stw r11,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r11.u32);
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 2, ctx.xer);
	// blt cr6,0x8268b634
	if (ctx.cr6.lt) goto loc_8268B634;
	// li r8,4096
	ctx.r8.s64 = 4096;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1536
	ctx.r4.s64 = 1536;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x83179564
	ctx.lr = 0x8268B6FC;
	__imp__MmAllocatePhysicalMemoryEx(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r3.u32);
	// beq 0x8268b714
	if (ctx.cr0.eq) goto loc_8268B714;
	// lwz r11,612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 612);
	// rlwinm r11,r11,0,5,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// b 0x8268b734
	goto loc_8268B734;
loc_8268B714:
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// li r3,1536
	ctx.r3.s64 = 1536;
	// bl 0x82691410
	ctx.lr = 0x8268B720;
	sub_82691410(ctx, base);
	// stw r3,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8268b74c
	if (ctx.cr0.eq) goto loc_8268B74C;
	// lwz r11,612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 612);
	// oris r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 134217728;
loc_8268B734:
	// stw r11,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lbz r11,608(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 608);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stb r11,608(r31)
	PPC_STORE_U8(ctx.r31.u32 + 608, ctx.r11.u8);
	// b 0x8268b754
	goto loc_8268B754;
loc_8268B74C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
loc_8268B754:
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x82fa76a0
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268B75C"))) PPC_WEAK_FUNC(sub_8268B75C);
PPC_FUNC_IMPL(__imp__sub_8268B75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268B760"))) PPC_WEAK_FUNC(sub_8268B760);
PPC_FUNC_IMPL(__imp__sub_8268B760) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,14(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// lwz r8,596(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 596);
	// addi r10,r11,172
	ctx.r10.s64 = ctx.r11.s64 + 172;
	// lwz r11,380(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 380);
	// rlwinm r9,r8,18,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 18) & 0x3F;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r10,r10,9,0,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xFFFFFE00;
	// rlwinm r8,r8,12,26,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0x3F;
	// stw r11,380(r3)
	PPC_STORE_U32(ctx.r3.u32 + 380, ctx.r11.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8268b79c
	if (!ctx.cr6.eq) goto loc_8268B79C;
	// lwz r9,384(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 384);
	// b 0x8268b7a0
	goto loc_8268B7A0;
loc_8268B79C:
	// lis r9,-16
	ctx.r9.s64 = -1048576;
loc_8268B7A0:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8268b7b8
	if (ctx.cr6.lt) goto loc_8268B7B8;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8268B7B8:
	// addi r10,r8,46
	ctx.r10.s64 = ctx.r8.s64 + 46;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u32);
	// lwz r10,596(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 596);
	// rlwinm r11,r10,12,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x3F;
	// rlwinm r9,r10,18,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x3F;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// twllei r9,0
	if (ctx.r9.u32 <= 0) __builtin_debugtrap();
	// divwu r8,r11,r9
	ctx.r8.u32 = ctx.r11.u32 / ctx.r9.u32;
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// rlwimi r10,r11,20,6,11
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 20) & 0x3F00000) | (ctx.r10.u64 & 0xFFFFFFFFFC0FFFFF);
	// rlwinm. r11,r10,0,6,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,596(r3)
	PPC_STORE_U32(ctx.r3.u32 + 596, ctx.r10.u32);
	// bne 0x8268b80c
	if (!ctx.cr0.eq) goto loc_8268B80C;
	// lbz r11,608(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 608);
	// li r10,2048
	ctx.r10.s64 = 2048;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// stw r10,380(r3)
	PPC_STORE_U32(ctx.r3.u32 + 380, ctx.r10.u32);
	// stb r11,608(r3)
	PPC_STORE_U8(ctx.r3.u32 + 608, ctx.r11.u8);
	// blr 
	return;
loc_8268B80C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,380(r3)
	PPC_STORE_U32(ctx.r3.u32 + 380, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268B818"))) PPC_WEAK_FUNC(sub_8268B818);
PPC_FUNC_IMPL(__imp__sub_8268B818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x8268B820;
	__savegprlr_24(ctx, base);
	// stwu r1,-816(r1)
	ea = -816 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,24380(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24380);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r3,23772
	ctx.r30.s64 = ctx.r3.s64 + 23772;
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268b84c
	if (ctx.cr0.eq) goto loc_8268B84C;
loc_8268B83C:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8268bb88
	ctx.lr = 0x8268B844;
	sub_8268BB88(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8268bb7c
	goto loc_8268BB7C;
loc_8268B84C:
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r5,260
	ctx.r5.s64 = 260;
	// addi r25,r11,20728
	ctx.r25.s64 = ctx.r11.s64 + 20728;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82fa5b30
	ctx.lr = 0x8268B864;
	sub_82FA5B30(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stb r26,371(r1)
	PPC_STORE_U8(ctx.r1.u32 + 371, ctx.r26.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8268B874:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8268b874
	if (!ctx.cr6.eq) goto loc_8268B874;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8268b8c4
	if (ctx.cr6.lt) goto loc_8268B8C4;
loc_8268B8A8:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,92
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 92, ctx.xer);
	// beq cr6,0x8268b8c4
	if (ctx.cr6.eq) goto loc_8268B8C4;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8268b8a8
	if (!ctx.cr6.lt) goto loc_8268B8A8;
loc_8268B8C4:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,92
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 92, ctx.xer);
	// bne cr6,0x8268b83c
	if (!ctx.cr6.eq) goto loc_8268B83C;
	// stb r26,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r26.u8);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83179544
	ctx.lr = 0x8268B8E0;
	__imp__RtlInitAnsiString(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r11,-2984
	ctx.r3.s64 = ctx.r11.s64 + -2984;
	// bl 0x83179554
	ctx.lr = 0x8268B8F0;
	__imp__ObCreateSymbolicLink(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8268b83c
	if (ctx.cr0.lt) goto loc_8268B83C;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// addi r5,r11,11420
	ctx.r5.s64 = ctx.r11.s64 + 11420;
	// addi r4,r10,-2320
	ctx.r4.s64 = ctx.r10.s64 + -2320;
	// addi r6,r31,1
	ctx.r6.s64 = ctx.r31.s64 + 1;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x83179384
	ctx.lr = 0x8268B914;
	__imp__sprintf(ctx, base);
	// addi r5,r1,480
	ctx.r5.s64 = ctx.r1.s64 + 480;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8268b008
	ctx.lr = 0x8268B924;
	sub_8268B008(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8268b83c
	if (ctx.cr0.lt) goto loc_8268B83C;
	// li r5,260
	ctx.r5.s64 = 260;
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82fa5b30
	ctx.lr = 0x8268B93C;
	sub_82FA5B30(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stb r26,371(r1)
	PPC_STORE_U8(ctx.r1.u32 + 371, ctx.r26.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8268B948:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8268b948
	if (!ctx.cr6.eq) goto loc_8268B948;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8268b9a8
	if (ctx.cr6.lt) goto loc_8268B9A8;
loc_8268B980:
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,46
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 46, ctx.xer);
	// beq cr6,0x8268b9a8
	if (ctx.cr6.eq) goto loc_8268B9A8;
	// cmpwi cr6,r10,92
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 92, ctx.xer);
	// beq cr6,0x8268b9a8
	if (ctx.cr6.eq) goto loc_8268B9A8;
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8268b980
	if (!ctx.cr6.lt) goto loc_8268B980;
loc_8268B9A8:
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r10,46
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 46, ctx.xer);
	// beq cr6,0x8268b9b8
	if (ctx.cr6.eq) goto loc_8268B9B8;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_8268B9B8:
	// lwz r10,596(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 596);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// rlwinm. r10,r10,0,12,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFC000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r27,r11,11428
	ctx.r27.s64 = ctx.r11.s64 + 11428;
	// beq 0x8268ba98
	if (ctx.cr0.eq) goto loc_8268BA98;
	// addi r28,r30,16
	ctx.r28.s64 = ctx.r30.s64 + 16;
loc_8268B9D4:
	// lbz r11,-24450(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + -24450);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8268b83c
	if (!ctx.cr0.eq) goto loc_8268B83C;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,480
	ctx.r10.s64 = ctx.r1.s64 + 480;
	// subf r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83179384
	ctx.lr = 0x8268BA00;
	__imp__sprintf(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r8,26624
	ctx.r8.s64 = 1744830464;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r4,16384
	ctx.r4.s64 = 1073741824;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82a82d10
	ctx.lr = 0x8268BA20;
	sub_82A82D10(ctx, base);
	// stw r3,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8268b83c
	if (ctx.cr6.eq) goto loc_8268B83C;
	// lwz r11,596(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 596);
	// rlwinm r11,r11,18,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3F;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8268ba60
	if (!ctx.cr6.eq) goto loc_8268BA60;
	// lwz r11,384(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 384);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8268ba54
	if (ctx.cr6.eq) goto loc_8268BA54;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// b 0x8268ba68
	goto loc_8268BA68;
loc_8268BA54:
	// li r11,1
	ctx.r11.s64 = 1;
	// rldicr r11,r11,32,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// b 0x8268ba68
	goto loc_8268BA68;
loc_8268BA60:
	// li r11,0
	ctx.r11.s64 = 0;
	// oris r11,r11,65520
	ctx.r11.u64 = ctx.r11.u64 | 4293918720;
loc_8268BA68:
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82a82a90
	ctx.lr = 0x8268BA7C;
	sub_82A82A90(ctx, base);
	// lwzu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// bl 0x82a82c00
	ctx.lr = 0x8268BA84;
	sub_82A82C00(ctx, base);
	// lwz r11,596(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 596);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rlwinm r11,r11,18,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3F;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8268b9d4
	if (ctx.cr6.lt) goto loc_8268B9D4;
loc_8268BA98:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,480
	ctx.r10.s64 = ctx.r1.s64 + 480;
	// subf r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8268BAA8:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83179384
	ctx.lr = 0x8268BABC;
	__imp__sprintf(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82a837a8
	ctx.lr = 0x8268BAC8;
	sub_82A837A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8268baa8
	if (!ctx.cr0.eq) goto loc_8268BAA8;
	// stw r26,348(r30)
	PPC_STORE_U32(ctx.r30.u32 + 348, ctx.r26.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r26,352(r30)
	PPC_STORE_U32(ctx.r30.u32 + 352, ctx.r26.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r26,356(r30)
	PPC_STORE_U32(ctx.r30.u32 + 356, ctx.r26.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r26,360(r30)
	PPC_STORE_U32(ctx.r30.u32 + 360, ctx.r26.u32);
	// addi r31,r30,348
	ctx.r31.s64 = ctx.r30.s64 + 348;
	// stw r26,364(r30)
	PPC_STORE_U32(ctx.r30.u32 + 364, ctx.r26.u32);
	// bl 0x82a77608
	ctx.lr = 0x8268BAF8;
	sub_82A77608(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,364(r30)
	PPC_STORE_U32(ctx.r30.u32 + 364, ctx.r3.u32);
	// beq 0x8268b83c
	if (ctx.cr0.eq) goto loc_8268B83C;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r26,356(r30)
	PPC_STORE_U32(ctx.r30.u32 + 356, ctx.r26.u32);
	// stw r26,360(r30)
	PPC_STORE_U32(ctx.r30.u32 + 360, ctx.r26.u32);
	// bl 0x82fa7cf0
	ctx.lr = 0x8268BB1C;
	sub_82FA7CF0(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,2048
	ctx.r5.s64 = 2048;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x82a82f08
	ctx.lr = 0x8268BB34;
	sub_82A82F08(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,364(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 364);
	// bl 0x82a77600
	ctx.lr = 0x8268BB40;
	sub_82A77600(ctx, base);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x83179464
	ctx.lr = 0x8268BB48;
	__imp__VdGetCurrentDisplayInformation(ctx, base);
	// li r11,2048
	ctx.r11.s64 = 2048;
	// lbz r10,600(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 600);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,380(r30)
	PPC_STORE_U32(ctx.r30.u32 + 380, ctx.r11.u32);
	// lwz r9,596(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 596);
	// stw r26,584(r30)
	PPC_STORE_U32(ctx.r30.u32 + 584, ctx.r26.u32);
	// rlwinm r9,r9,0,12,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFC0FFFFF;
	// stw r9,596(r30)
	PPC_STORE_U32(ctx.r30.u32 + 596, ctx.r9.u32);
	// lbz r11,389(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 389);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwimi r10,r11,2,24,24
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 2) & 0x80) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF7F);
	// stb r10,600(r30)
	PPC_STORE_U8(ctx.r30.u32 + 600, ctx.r10.u8);
loc_8268BB7C:
	// addi r1,r1,816
	ctx.r1.s64 = ctx.r1.s64 + 816;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268BB84"))) PPC_WEAK_FUNC(sub_8268BB84);
PPC_FUNC_IMPL(__imp__sub_8268BB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268BB88"))) PPC_WEAK_FUNC(sub_8268BB88);
PPC_FUNC_IMPL(__imp__sub_8268BB88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x8268BB90;
	__savegprlr_23(ctx, base);
	// stwu r1,-2320(r1)
	ea = -2320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,24380(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24380);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r31,r3,23772
	ctx.r31.s64 = ctx.r3.s64 + 23772;
	// li r27,0
	ctx.r27.s64 = 0;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8268bf08
	if (ctx.cr0.eq) goto loc_8268BF08;
	// lwz r3,364(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8268bee0
	if (ctx.cr6.eq) goto loc_8268BEE0;
	// rlwinm. r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r28,-1
	ctx.r28.s64 = -1;
	// beq 0x8268bcd0
	if (ctx.cr0.eq) goto loc_8268BCD0;
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268bbd4
	if (ctx.cr0.eq) goto loc_8268BBD4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82a77600
	ctx.lr = 0x8268BBD4;
	sub_82A77600(ctx, base);
loc_8268BBD4:
	// lwz r29,16(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,588(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// bl 0x82677460
	ctx.lr = 0x8268BBE0;
	sub_82677460(ctx, base);
	// lis r8,-31954
	ctx.r8.s64 = -2094137344;
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// addi r8,r8,-512
	ctx.r8.s64 = ctx.r8.s64 + -512;
	// addi r30,r11,-25556
	ctx.r30.s64 = ctx.r11.s64 + -25556;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
loc_8268BBF8:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r11,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8268bbf8
	if (!ctx.cr0.eq) goto loc_8268BBF8;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r10,6144
	ctx.r10.s64 = 6144;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divwu r10,r11,r10
	ctx.r10.u32 = ctx.r11.u32 / ctx.r10.u32;
	// cmplwi cr6,r10,14
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14, ctx.xer);
	// blt cr6,0x8268bc30
	if (ctx.cr6.lt) goto loc_8268BC30;
	// li r10,14
	ctx.r10.s64 = 14;
loc_8268BC30:
	// lwz r11,584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// mulli r9,r10,12
	ctx.r9.s64 = ctx.r10.s64 * 12;
	// lwz r6,596(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// lhz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// lwz r5,380(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r6,12,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 12) & 0x3F;
	// rlwinm r4,r4,2,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x4;
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r7,-25768
	ctx.r7.s64 = -1688731648;
	// lwzx r4,r4,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// rlwinm r24,r6,4,30,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0x3;
	// ori r25,r7,59162
	ctx.r25.u64 = ctx.r7.u64 | 59162;
	// stw r5,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r5.u32);
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
	// stw r27,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r27.u32);
	// rlwinm r23,r9,9,0,22
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0xFFFFFE00;
	// lwzx r3,r8,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// addi r7,r31,348
	ctx.r7.s64 = ctx.r31.s64 + 348;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stwu r25,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r25.u32);
	ctx.r11.u32 = ea;
	// stwu r24,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r24.u32);
	ctx.r11.u32 = ea;
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bl 0x82a82f08
	ctx.lr = 0x8268BCA0;
	sub_82A82F08(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268b760
	ctx.lr = 0x8268BCAC;
	sub_8268B760(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,364(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// bl 0x82a77600
	ctx.lr = 0x8268BCB8;
	sub_82A77600(ctx, base);
	// b 0x8268bcc4
	goto loc_8268BCC4;
loc_8268BCBC:
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x82a77720
	ctx.lr = 0x8268BCC4;
	sub_82A77720(ctx, base);
loc_8268BCC4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,6144
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6144, ctx.xer);
	// bne cr6,0x8268bcbc
	if (!ctx.cr6.eq) goto loc_8268BCBC;
loc_8268BCD0:
	// lwz r11,596(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// rlwinm. r11,r11,0,12,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFC000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268bd48
	if (ctx.cr0.eq) goto loc_8268BD48;
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
loc_8268BCE8:
	// lbz r11,608(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 608);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8268bd18
	if (!ctx.cr0.eq) goto loc_8268BD18;
	// lwz r11,596(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// rlwinm r11,r11,12,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x3F;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8268bd18
	if (ctx.cr6.lt) goto loc_8268BD18;
	// ble cr6,0x8268bd10
	if (!ctx.cr6.gt) goto loc_8268BD10;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// b 0x8268bd1c
	goto loc_8268BD1C;
loc_8268BD10:
	// lwz r4,380(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// b 0x8268bd1c
	goto loc_8268BD1C;
loc_8268BD18:
	// lwz r4,168(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 168);
loc_8268BD1C:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x82a82a90
	ctx.lr = 0x8268BD2C;
	sub_82A82A90(ctx, base);
	// lwzu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// bl 0x82a82c00
	ctx.lr = 0x8268BD34;
	sub_82A82C00(ctx, base);
	// lwz r11,596(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// rlwinm r11,r11,18,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3F;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8268bce8
	if (ctx.cr6.lt) goto loc_8268BCE8;
loc_8268BD48:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83179464
	ctx.lr = 0x8268BD50;
	__imp__VdGetCurrentDisplayInformation(ctx, base);
	// lwz r11,604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 604);
	// srawi. r11,r11,29
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 29;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8268bd68
	if (!ctx.cr0.eq) goto loc_8268BD68;
	// lis r10,21415
	ctx.r10.s64 = 1403453440;
	// ori r10,r10,8884
	ctx.r10.u64 = ctx.r10.u64 | 8884;
	// b 0x8268bd8c
	goto loc_8268BD8C;
loc_8268BD68:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8268bd7c
	if (!ctx.cr6.eq) goto loc_8268BD7C;
	// lis r10,21415
	ctx.r10.s64 = 1403453440;
	// ori r10,r10,8885
	ctx.r10.u64 = ctx.r10.u64 | 8885;
	// b 0x8268bd8c
	goto loc_8268BD8C;
loc_8268BD7C:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8268bd90
	if (!ctx.cr6.eq) goto loc_8268BD90;
	// lis r10,21415
	ctx.r10.s64 = 1403453440;
	// ori r10,r10,8886
	ctx.r10.u64 = ctx.r10.u64 | 8886;
loc_8268BD8C:
	// stw r10,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
loc_8268BD90:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r10.u32);
	// beq cr6,0x8268bdd0
	if (ctx.cr6.eq) goto loc_8268BDD0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8268bdd0
	if (ctx.cr6.eq) goto loc_8268BDD0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8268bdf0
	if (!ctx.cr6.eq) goto loc_8268BDF0;
	// li r10,400
	ctx.r10.s64 = 400;
	// li r11,224
	ctx.r11.s64 = 224;
	// stw r10,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// stw r11,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r11.u32);
	// stw r10,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r10.u32);
	// stw r11,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r11.u32);
	// b 0x8268bdf0
	goto loc_8268BDF0;
loc_8268BDD0:
	// lhz r11,368(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 368);
	// lhz r10,370(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 370);
	// lhz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 168);
	// lhz r8,170(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 170);
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// stw r10,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r10.u32);
	// stw r9,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r9.u32);
	// stw r8,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r8.u32);
loc_8268BDF0:
	// bl 0x83179344
	ctx.lr = 0x8268BDF4;
	__imp__KeQueryPerformanceFrequency(ctx, base);
	// lwz r11,596(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// stw r3,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r3.u32);
	// rlwinm. r8,r11,6,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r27,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r27.u32);
	// rlwinm r10,r11,6,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3F;
	// beq 0x8268be18
	if (ctx.cr0.eq) goto loc_8268BE18;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r9.u32);
loc_8268BE18:
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8268be28
	if (ctx.cr0.eq) goto loc_8268BE28;
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
	// stw r9,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r9.u32);
loc_8268BE28:
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268be38
	if (ctx.cr0.eq) goto loc_8268BE38;
	// lwz r4,592(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 592);
	// b 0x8268be3c
	goto loc_8268BE3C;
loc_8268BE38:
	// addi r4,r26,15408
	ctx.r4.s64 = ctx.r26.s64 + 15408;
loc_8268BE3C:
	// lbz r11,101(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 101);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8268be60
	if (!ctx.cr6.eq) goto loc_8268BE60;
	// ori r11,r9,4
	ctx.r11.u64 = ctx.r9.u64 | 4;
	// stw r11,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
	// bl 0x82680ae8
	ctx.lr = 0x8268BE5C;
	sub_82680AE8(ctx, base);
	// b 0x8268be64
	goto loc_8268BE64;
loc_8268BE60:
	// bl 0x82680a50
	ctx.lr = 0x8268BE64;
	sub_82680A50(ctx, base);
loc_8268BE64:
	// lwz r30,596(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// li r5,56
	ctx.r5.s64 = 56;
	// rlwinm. r11,r30,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r4,r26,14128
	ctx.r4.s64 = ctx.r26.s64 + 14128;
	// bne 0x8268be80
	if (!ctx.cr0.eq) goto loc_8268BE80;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
loc_8268BE80:
	// bl 0x82fa77c0
	ctx.lr = 0x8268BE84;
	sub_82FA77C0(ctx, base);
	// lbz r11,608(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 608);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268bea0
	if (ctx.cr0.eq) goto loc_8268BEA0;
	// rlwinm r10,r30,12,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 12) & 0x3F;
	// lwz r11,380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// stw r10,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r10.u32);
	// b 0x8268bea8
	goto loc_8268BEA8;
loc_8268BEA0:
	// li r11,2048
	ctx.r11.s64 = 2048;
	// stw r27,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r27.u32);
loc_8268BEA8:
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// addi r7,r31,348
	ctx.r7.s64 = ctx.r31.s64 + 348;
	// stw r27,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r27.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r27,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r27.u32);
	// li r5,2048
	ctx.r5.s64 = 2048;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82a82f08
	ctx.lr = 0x8268BECC;
	sub_82A82F08(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,364(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// bl 0x82a77600
	ctx.lr = 0x8268BED8;
	sub_82A77600(ctx, base);
	// lwz r3,364(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// bl 0x82a756a0
	ctx.lr = 0x8268BEE0;
	sub_82A756A0(ctx, base);
loc_8268BEE0:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
loc_8268BEE8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8268bf08
	if (ctx.cr6.eq) goto loc_8268BF08;
	// bl 0x82a756a0
	ctx.lr = 0x8268BEF8;
	sub_82A756A0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,41
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 41, ctx.xer);
	// blt cr6,0x8268bee8
	if (ctx.cr6.lt) goto loc_8268BEE8;
loc_8268BF08:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,2336(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2336);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8268bf2c
	if (ctx.cr6.eq) goto loc_8268BF2C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8268bf58
	if (ctx.cr6.eq) goto loc_8268BF58;
	// b 0x8268bf44
	goto loc_8268BF44;
loc_8268BF2C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,2256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2256);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8268bf58
	if (ctx.cr6.eq) goto loc_8268BF58;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
loc_8268BF44:
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r3,27
	ctx.r3.s64 = 27;
	// addi r4,r10,11436
	ctx.r4.s64 = ctx.r10.s64 + 11436;
	// bctrl 
	ctx.lr = 0x8268BF58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8268BF58:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8268af00
	ctx.lr = 0x8268BF60;
	sub_8268AF00(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-2984
	ctx.r3.s64 = ctx.r11.s64 + -2984;
	// bl 0x83179534
	ctx.lr = 0x8268BF6C;
	__imp__ObDeleteSymbolicLink(ctx, base);
	// lis r8,-31957
	ctx.r8.s64 = -2094333952;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// addi r7,r8,20721
	ctx.r7.s64 = ctx.r8.s64 + 20721;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// stb r27,20721(r8)
	PPC_STORE_U8(ctx.r8.u32 + 20721, ctx.r27.u8);
	// stb r27,-24443(r7)
	PPC_STORE_U8(ctx.r7.u32 + -24443, ctx.r27.u8);
	// stb r27,-24442(r7)
	PPC_STORE_U8(ctx.r7.u32 + -24442, ctx.r27.u8);
	// addi r1,r1,2320
	ctx.r1.s64 = ctx.r1.s64 + 2320;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268BF94"))) PPC_WEAK_FUNC(sub_8268BF94);
PPC_FUNC_IMPL(__imp__sub_8268BF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268BF98"))) PPC_WEAK_FUNC(sub_8268BF98);
PPC_FUNC_IMPL(__imp__sub_8268BF98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x8268BFA0;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r3,23772
	ctx.r30.s64 = ctx.r3.s64 + 23772;
	// bl 0x82668e90
	ctx.lr = 0x8268BFC0;
	sub_82668E90(ctx, base);
	// ld r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// cmpldi cr6,r4,0
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, 0, ctx.xer);
	// beq cr6,0x8268c0e0
	if (ctx.cr6.eq) goto loc_8268C0E0;
	// ld r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// and r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 & ctx.r4.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8268bfec
	if (ctx.cr6.eq) goto loc_8268BFEC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,10560(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10560);
	// bl 0x82670088
	ctx.lr = 0x8268BFE8;
	sub_82670088(ctx, base);
	// std r3,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r3.u64);
loc_8268BFEC:
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// clrldi r10,r11,52
	ctx.r10.u64 = ctx.r11.u64 & 0xFFF;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x8268c01c
	if (ctx.cr6.eq) goto loc_8268C01C;
	// addi r6,r31,10548
	ctx.r6.s64 = ctx.r31.s64 + 10548;
	// li r5,8704
	ctx.r5.s64 = 8704;
	// rldicr r4,r11,52,11
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 52) & 0xFFF0000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82670418
	ctx.lr = 0x8268C010;
	sub_82670418(ctx, base);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// rldicr r11,r11,0,51
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xFFFFFFFFFFFFF000;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_8268C01C:
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// rlwinm r10,r11,0,15,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F000;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x8268c054
	if (ctx.cr6.eq) goto loc_8268C054;
	// addi r6,r31,10528
	ctx.r6.s64 = ctx.r31.s64 + 10528;
	// li r5,8576
	ctx.r5.s64 = 8576;
	// rldicr r4,r11,47,4
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 47) & 0xF800000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82670418
	ctx.lr = 0x8268C040;
	sub_82670418(ctx, base);
	// lis r12,-2
	ctx.r12.s64 = -131072;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ori r12,r12,4095
	ctx.r12.u64 = ctx.r12.u64 | 4095;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_8268C054:
	// lis r12,0
	ctx.r12.s64 = 0;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// rldicr r12,r12,42,21
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 42) & 0xFFFFFC0000000000;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x8268c09c
	if (ctx.cr6.eq) goto loc_8268C09C;
	// addi r6,r31,10368
	ctx.r6.s64 = ctx.r31.s64 + 10368;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// rldicr r4,r11,6,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 6) & 0xFFFF000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82670418
	ctx.lr = 0x8268C084;
	sub_82670418(ctx, base);
	// lis r12,-1
	ctx.r12.s64 = -65536;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ori r12,r12,0
	ctx.r12.u64 = ctx.r12.u64 | 0;
	// rldicr r12,r12,42,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 42) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_8268C09C:
	// lis r12,-32
	ctx.r12.s64 = -2097152;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// clrldi r12,r12,22
	ctx.r12.u64 = ctx.r12.u64 & 0x3FFFFFFFFFF;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x8268c0e0
	if (ctx.cr6.eq) goto loc_8268C0E0;
	// addi r6,r31,10444
	ctx.r6.s64 = ctx.r31.s64 + 10444;
	// li r5,8448
	ctx.r5.s64 = 8448;
	// rldicr r4,r11,22,20
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 22) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82670418
	ctx.lr = 0x8268C0C8;
	sub_82670418(ctx, base);
	// lis r12,-32
	ctx.r12.s64 = -2097152;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ori r12,r12,0
	ctx.r12.u64 = ctx.r12.u64 | 0;
	// rldicr r12,r12,21,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 21) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_8268C0E0:
	// ld r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8268c130
	if (ctx.cr6.eq) goto loc_8268C130;
	// lis r12,31
	ctx.r12.s64 = 2031616;
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// rldicr r12,r12,34,29
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 34) & 0xFFFFFFFC00000000;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x8268c130
	if (ctx.cr6.eq) goto loc_8268C130;
	// addi r6,r31,10596
	ctx.r6.s64 = ctx.r31.s64 + 10596;
	// li r5,8832
	ctx.r5.s64 = 8832;
	// rldicr r4,r11,9,20
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 9) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82670418
	ctx.lr = 0x8268C118;
	sub_82670418(ctx, base);
	// lis r12,-32
	ctx.r12.s64 = -2097152;
	// ld r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// ori r12,r12,0
	ctx.r12.u64 = ctx.r12.u64 | 0;
	// rldicr r12,r12,34,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 34) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
loc_8268C130:
	// ld r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8268c168
	if (ctx.cr6.eq) goto loc_8268C168;
	// clrldi r10,r11,26
	ctx.r10.u64 = ctx.r11.u64 & 0x3FFFFFFFFF;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x8268c168
	if (ctx.cr6.eq) goto loc_8268C168;
	// addi r6,r31,10680
	ctx.r6.s64 = ctx.r31.s64 + 10680;
	// li r5,8960
	ctx.r5.s64 = 8960;
	// rldicr r4,r11,26,37
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 26) & 0xFFFFFFFFFC000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82670418
	ctx.lr = 0x8268C15C;
	sub_82670418(ctx, base);
	// ld r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// rldicr r11,r11,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xFFFFFFC000000000;
	// std r11,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
loc_8268C168:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lwz r10,604(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 604);
	// addi r24,r11,-17868
	ctx.r24.s64 = ctx.r11.s64 + -17868;
	// srawi. r11,r10,29
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 29;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8268c190
	if (!ctx.cr0.eq) goto loc_8268C190;
	// lis r25,1792
	ctx.r25.s64 = 117440512;
	// addi r26,r24,492
	ctx.r26.s64 = ctx.r24.s64 + 492;
	// li r29,525
	ctx.r29.s64 = 525;
	// ori r25,r25,21
	ctx.r25.u64 = ctx.r25.u64 | 21;
	// b 0x8268c1d4
	goto loc_8268C1D4;
loc_8268C190:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8268c1ac
	if (!ctx.cr6.eq) goto loc_8268C1AC;
	// lis r25,1792
	ctx.r25.s64 = 117440512;
	// addi r26,r24,2628
	ctx.r26.s64 = ctx.r24.s64 + 2628;
	// li r29,933
	ctx.r29.s64 = 933;
	// ori r25,r25,19
	ctx.r25.u64 = ctx.r25.u64 | 19;
	// b 0x8268c1d4
	goto loc_8268C1D4;
loc_8268C1AC:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8268c1c8
	if (!ctx.cr6.eq) goto loc_8268C1C8;
	// lis r25,1792
	ctx.r25.s64 = 117440512;
	// addi r26,r24,6420
	ctx.r26.s64 = ctx.r24.s64 + 6420;
	// li r29,210
	ctx.r29.s64 = 210;
	// ori r25,r25,15
	ctx.r25.u64 = ctx.r25.u64 | 15;
	// b 0x8268c1d4
	goto loc_8268C1D4;
loc_8268C1C8:
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r25,80(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8268C1D4:
	// addi r4,r29,5
	ctx.r4.s64 = ctx.r29.s64 + 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82675738
	ctx.lr = 0x8268C1E0;
	sub_82675738(ctx, base);
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// li r10,768
	ctx.r10.s64 = 768;
	// ori r9,r11,15104
	ctx.r9.u64 = ctx.r11.u64 | 15104;
	// addi r11,r29,2
	ctx.r11.s64 = ctx.r29.s64 + 2;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// ori r9,r9,11008
	ctx.r9.u64 = ctx.r9.u64 | 11008;
	// li r22,0
	ctx.r22.s64 = 0;
	// rlwimi r9,r11,16,2,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x3FFF0000) | (ctx.r9.u64 & 0xFFFFFFFFC000FFFF);
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// clrlwi r10,r29,18
	ctx.r10.u64 = ctx.r29.u32 & 0x3FFF;
	// rlwinm r27,r29,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// stwu r22,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r22.u32);
	ctx.r3.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stwu r10,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r29.u32 = ea;
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// bl 0x82fa77c0
	ctx.lr = 0x8268C238;
	sub_82FA77C0(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// add r3,r27,r29
	ctx.r3.u64 = ctx.r27.u64 + ctx.r29.u64;
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8268c254
	if (!ctx.cr6.gt) goto loc_8268C254;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82676e00
	ctx.lr = 0x8268C254;
	sub_82676E00(ctx, base);
loc_8268C254:
	// lis r11,-16368
	ctx.r11.s64 = -1072693248;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r11,r11,11008
	ctx.r11.u64 = ctx.r11.u64 | 11008;
	// li r9,15
	ctx.r9.s64 = 15;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r5,60
	ctx.r5.s64 = 60;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stwu r9,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r29.u32 = ea;
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// bl 0x82fa77c0
	ctx.lr = 0x8268C284;
	sub_82FA77C0(ctx, base);
	// addi r11,r29,60
	ctx.r11.s64 = ctx.r29.s64 + 60;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// oris r9,r25,4096
	ctx.r9.u64 = ctx.r25.u64 | 268435456;
	// ori r10,r10,8576
	ctx.r10.u64 = ctx.r10.u64 | 8576;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r22,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r22.u32);
	ctx.r11.u32 = ea;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8268c2c0
	if (!ctx.cr6.gt) goto loc_8268C2C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82676e00
	ctx.lr = 0x8268C2C0;
	sub_82676E00(ctx, base);
loc_8268C2C0:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,8448
	ctx.r11.u64 = ctx.r11.u64 | 8448;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r8,8851
	ctx.r8.s64 = 8851;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,768
	ctx.r4.s64 = 768;
	// li r29,8978
	ctx.r29.s64 = 8978;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// ori r10,r6,8708
	ctx.r10.u64 = ctx.r6.u64 | 8708;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// lis r27,0
	ctx.r27.s64 = 0;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// ori r11,r27,65535
	ctx.r11.u64 = ctx.r27.u64 | 65535;
	// stwu r22,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r22.u32);
	ctx.r3.u32 = ea;
	// li r26,8205
	ctx.r26.s64 = 8205;
	// li r25,8704
	ctx.r25.s64 = 8704;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// stwu r22,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r22.u32);
	ctx.r3.u32 = ea;
	// mr r24,r22
	ctx.r24.u64 = ctx.r22.u64;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r22,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r22.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// stwu r29,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r26.u32);
	ctx.r3.u32 = ea;
	// stwu r22,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r22.u32);
	ctx.r3.u32 = ea;
	// stwu r25,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r25.u32);
	ctx.r3.u32 = ea;
	// stwu r22,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r22.u32);
	ctx.r3.u32 = ea;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// ble cr6,0x8268c368
	if (!ctx.cr6.gt) goto loc_8268C368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82676e00
	ctx.lr = 0x8268C368;
	sub_82676E00(ctx, base);
loc_8268C368:
	// lis r11,5
	ctx.r11.s64 = 327680;
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r11,r11,18432
	ctx.r11.u64 = ctx.r11.u64 | 18432;
	// addi r29,r30,392
	ctx.r29.s64 = ctx.r30.s64 + 392;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// lhz r10,372(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 372);
	// rlwinm r11,r11,0,22,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3FC;
	// rlwinm r10,r10,17,0,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0xFFC00000;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// ori r11,r11,18434
	ctx.r11.u64 = ctx.r11.u64 | 18434;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lwz r10,32(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// rlwinm r11,r10,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// rlwimi r11,r9,24,1,12
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 24) & 0x7FF80000) | (ctx.r11.u64 & 0xFFFFFFFF8007FFFF);
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lwz r11,44(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// lwz r11,596(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 596);
	// lwz r8,604(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 604);
	// lwz r10,584(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 584);
	// rlwinm r10,r10,2,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x4;
	// rlwinm r26,r11,2,30,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	// lwzx r25,r10,r30
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// clrlwi r23,r26,31
	ctx.r23.u64 = ctx.r26.u32 & 0x1;
	// rlwinm r10,r26,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 31) & 0x1;
	// mulli r11,r23,56
	ctx.r11.s64 = ctx.r23.s64 * 56;
	// addi r11,r11,527
	ctx.r11.s64 = ctx.r11.s64 + 527;
	// mulli r9,r10,1536
	ctx.r9.s64 = ctx.r10.s64 * 1536;
	// rlwinm r10,r11,0,0,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFE00;
	// srawi. r11,r8,29
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 29;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r28,r10,r25
	ctx.r28.u64 = ctx.r10.u64 + ctx.r25.u64;
	// bne 0x8268c434
	if (!ctx.cr0.eq) goto loc_8268C434;
loc_8268C420:
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// andi. r9,r9,49400
	ctx.r9.u64 = ctx.r9.u64 & 49400;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// oris r9,r9,19200
	ctx.r9.u64 = ctx.r9.u64 | 1258291200;
	// ori r9,r9,1536
	ctx.r9.u64 = ctx.r9.u64 | 1536;
	// b 0x8268c454
	goto loc_8268C454;
loc_8268C434:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8268c420
	if (ctx.cr6.eq) goto loc_8268C420;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8268c490
	if (!ctx.cr6.eq) goto loc_8268C490;
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// andi. r9,r9,49400
	ctx.r9.u64 = ctx.r9.u64 & 49400;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// oris r9,r9,19200
	ctx.r9.u64 = ctx.r9.u64 | 1258291200;
	// ori r9,r9,2560
	ctx.r9.u64 = ctx.r9.u64 | 2560;
loc_8268C454:
	// rlwinm r11,r28,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 12) & 0xFFF;
	// lwz r8,388(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 388);
	// rlwinm r10,r28,0,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x1FFFFFFC;
	// stw r9,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r9.u32);
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// lis r7,16384
	ctx.r7.s64 = 1073741824;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r10,75
	ctx.r10.s64 = 75;
	// rlwimi r7,r11,30,2,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 30) & 0x3FFFFFFF) | (ctx.r7.u64 & 0xFFFFFFFFC0000000);
	// lis r11,19200
	ctx.r11.s64 = 1258291200;
	// rlwimi r8,r10,24,0,8
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0xFF800000) | (ctx.r8.u64 & 0xFFFFFFFF007FFFFF);
	// stw r7,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r7.u32);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// stw r8,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r8.u32);
loc_8268C490:
	// li r4,49
	ctx.r4.s64 = 49;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82675738
	ctx.lr = 0x8268C49C;
	sub_82675738(ctx, base);
	// lis r11,47
	ctx.r11.s64 = 3080192;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// ori r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 16384;
	// li r5,192
	ctx.r5.s64 = 192;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x82fa77c0
	ctx.lr = 0x8268C4BC;
	sub_82FA77C0(ctx, base);
	// addi r11,r29,192
	ctx.r11.s64 = ctx.r29.s64 + 192;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lbz r11,608(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 608);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268c4dc
	if (ctx.cr0.eq) goto loc_8268C4DC;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,364(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 364);
	// bl 0x82a77600
	ctx.lr = 0x8268C4DC;
	sub_82A77600(ctx, base);
loc_8268C4DC:
	// lhz r11,14(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 14);
	// lis r10,-31966
	ctx.r10.s64 = -2094923776;
	// rotlwi r11,r11,9
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 9);
	// addi r7,r10,-25556
	ctx.r7.s64 = ctx.r10.s64 + -25556;
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
loc_8268C4F0:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r10,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8268c4f0
	if (!ctx.cr0.eq) goto loc_8268C4F0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r8,6144
	ctx.r8.s64 = 6144;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divwu r11,r11,r8
	ctx.r11.u32 = ctx.r11.u32 / ctx.r8.u32;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// blt cr6,0x8268c52c
	if (ctx.cr6.lt) goto loc_8268C52C;
	// li r24,14
	ctx.r24.s64 = 14;
loc_8268C52C:
	// lwz r11,584(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 584);
	// lis r9,-25768
	ctx.r9.s64 = -1688731648;
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// rlwinm r10,r28,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 12) & 0xFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r8,596(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 596);
	// ori r7,r9,59162
	ctx.r7.u64 = ctx.r9.u64 | 59162;
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm r11,r11,2,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x4;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r8,r8,4,30,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0x3;
	// lwz r5,56(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r28,3
	ctx.r10.u64 = ctx.r28.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplw cr6,r3,r5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r5.u32, ctx.xer);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,10392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10392, ctx.r10.u32);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// stwu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r11.u32 = ea;
	// stwu r24,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r24.u32);
	ctx.r11.u32 = ea;
	// ble cr6,0x8268c598
	if (!ctx.cr6.gt) goto loc_8268C598;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82676e00
	ctx.lr = 0x8268C598;
	sub_82676E00(ctx, base);
loc_8268C598:
	// li r11,8198
	ctx.r11.s64 = 8198;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// stwu r22,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r22.u32);
	ctx.r3.u32 = ea;
	// lwz r11,13904(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13904);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// stw r11,13904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13904, ctx.r11.u32);
	// lwz r29,376(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 376);
loc_8268C5C0:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8268c5d8
	if (!ctx.cr6.gt) goto loc_8268C5D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82676e00
	ctx.lr = 0x8268C5D8;
	sub_82676E00(ctx, base);
loc_8268C5D8:
	// li r11,8450
	ctx.r11.s64 = 8450;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// cmplwi cr6,r29,65535
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 65535, ctx.xer);
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r3.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ble cr6,0x8268c5fc
	if (!ctx.cr6.gt) goto loc_8268C5FC;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,65534
	ctx.r10.u64 = ctx.r10.u64 | 65534;
loc_8268C5FC:
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// li r8,129
	ctx.r8.s64 = 129;
	// ori r9,r9,13825
	ctx.r9.u64 = ctx.r9.u64 | 13825;
	// rlwimi r8,r10,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// subf. r29,r10,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// beq 0x8268c62c
	if (ctx.cr0.eq) goto loc_8268C62C;
	// add r28,r10,r28
	ctx.r28.u64 = ctx.r10.u64 + ctx.r28.u64;
	// b 0x8268c5c0
	goto loc_8268C5C0;
loc_8268C62C:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r22,10392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10392, ctx.r22.u32);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8268c644
	if (!ctx.cr6.gt) goto loc_8268C644;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82676e00
	ctx.lr = 0x8268C644;
	sub_82676E00(ctx, base);
loc_8268C644:
	// li r11,8198
	ctx.r11.s64 = 8198;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r22,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r22.u32);
	ctx.r3.u32 = ea;
	// lwz r10,13904(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13904);
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// stw r10,13904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13904, ctx.r10.u32);
	// ble cr6,0x8268c680
	if (!ctx.cr6.gt) goto loc_8268C680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82676e00
	ctx.lr = 0x8268C67C;
	sub_82676E00(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8268C680:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// li r9,6
	ctx.r9.s64 = 6;
	// ori r10,r10,17920
	ctx.r10.u64 = ctx.r10.u64 | 17920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// oris r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 1048576;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// ld r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// oris r11,r11,65024
	ctx.r11.u64 = ctx.r11.u64 | 4261412864;
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// lwz r29,11036(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11036);
	// lwz r27,588(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 588);
	// stw r29,11056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11056, ctx.r29.u32);
	// bl 0x82676e00
	ctx.lr = 0x8268C6E8;
	sub_82676E00(ctx, base);
	// stw r29,588(r30)
	PPC_STORE_U32(ctx.r30.u32 + 588, ctx.r29.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82668e90
	ctx.lr = 0x8268C700;
	sub_82668E90(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82668e90
	ctx.lr = 0x8268C714;
	sub_82668E90(ctx, base);
	// lwz r11,596(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 596);
	// clrlwi r28,r26,30
	ctx.r28.u64 = ctx.r26.u32 & 0x3;
	// rlwimi r11,r26,28,2,3
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r26.u32, 28) & 0x30000000) | (ctx.r11.u64 & 0xFFFFFFFFCFFFFFFF);
	// addi r29,r25,16
	ctx.r29.s64 = ctx.r25.s64 + 16;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// stw r11,596(r30)
	PPC_STORE_U32(ctx.r30.u32 + 596, ctx.r11.u32);
	// beq cr6,0x8268c744
	if (ctx.cr6.eq) goto loc_8268C744;
	// li r5,56
	ctx.r5.s64 = 56;
	// addi r4,r31,14128
	ctx.r4.s64 = ctx.r31.s64 + 14128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x8268C740;
	sub_82FA77C0(ctx, base);
	// addi r29,r29,56
	ctx.r29.s64 = ctx.r29.s64 + 56;
loc_8268C744:
	// subf r11,r25,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r25.s64;
	// rlwinm. r10,r26,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,511
	ctx.r11.s64 = ctx.r11.s64 + 511;
	// rlwinm r11,r11,0,0,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFE00;
	// add r29,r11,r25
	ctx.r29.u64 = ctx.r11.u64 + ctx.r25.u64;
	// beq 0x8268c794
	if (ctx.cr0.eq) goto loc_8268C794;
	// lbz r11,600(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 600);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,592(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 592);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// beq 0x8268c77c
	if (ctx.cr0.eq) goto loc_8268C77C;
	// bl 0x82680ae8
	ctx.lr = 0x8268C778;
	sub_82680AE8(ctx, base);
	// b 0x8268c780
	goto loc_8268C780;
loc_8268C77C:
	// bl 0x82680a50
	ctx.lr = 0x8268C780;
	sub_82680A50(ctx, base);
loc_8268C780:
	// li r5,1536
	ctx.r5.s64 = 1536;
	// lwz r4,592(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 592);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x8268C790;
	sub_82FA77C0(ctx, base);
	// addi r29,r29,1536
	ctx.r29.s64 = ctx.r29.s64 + 1536;
loc_8268C794:
	// lwz r8,584(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 584);
	// mulli r10,r24,12
	ctx.r10.s64 = ctx.r24.s64 * 12;
	// lhz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 12);
	// lwz r7,596(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 596);
	// lhz r9,14(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 14);
	// lbz r6,608(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 608);
	// rlwinm r8,r8,2,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x4;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r28,26,0,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 26) & 0xFC000000;
	// rlwinm r31,r11,9,0,22
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFFFFFE00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// lwzx r8,r8,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// rlwinm. r6,r6,0,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// clrlwi r11,r10,2
	ctx.r11.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// subf r10,r8,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r8.s64;
	// stw r11,596(r30)
	PPC_STORE_U32(ctx.r30.u32 + 596, ctx.r11.u32);
	// rlwinm r11,r10,23,9,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x7FFFFF;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// sth r11,12(r30)
	PPC_STORE_U16(ctx.r30.u32 + 12, ctx.r11.u16);
	// beq 0x8268c844
	if (ctx.cr0.eq) goto loc_8268C844;
	// lwz r11,380(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 380);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r22,360(r30)
	PPC_STORE_U32(ctx.r30.u32 + 360, ctx.r22.u32);
	// stw r11,356(r30)
	PPC_STORE_U32(ctx.r30.u32 + 356, ctx.r11.u32);
	// bl 0x82677460
	ctx.lr = 0x8268C7F8;
	sub_82677460(ctx, base);
	// lwz r11,584(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 584);
	// addi r7,r30,348
	ctx.r7.s64 = ctx.r30.s64 + 348;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,2,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r11,596(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 596);
	// rlwinm r10,r11,12,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x3F;
	// addi r11,r10,5
	ctx.r11.s64 = ctx.r10.s64 + 5;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x82a82f08
	ctx.lr = 0x8268C82C;
	sub_82A82F08(ctx, base);
	// lbz r11,608(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 608);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stb r11,608(r30)
	PPC_STORE_U8(ctx.r30.u32 + 608, ctx.r11.u8);
	// bl 0x8268b760
	ctx.lr = 0x8268C844;
	sub_8268B760(ctx, base);
loc_8268C844:
	// lbz r10,608(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 608);
	// lwz r11,584(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 584);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r10,608(r30)
	PPC_STORE_U8(ctx.r30.u32 + 608, ctx.r10.u8);
	// stw r11,584(r30)
	PPC_STORE_U32(ctx.r30.u32 + 584, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268C864"))) PPC_WEAK_FUNC(sub_8268C864);
PPC_FUNC_IMPL(__imp__sub_8268C864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268C868"))) PPC_WEAK_FUNC(sub_8268C868);
PPC_FUNC_IMPL(__imp__sub_8268C868) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r11,r11,-3721
	ctx.r11.s64 = ctx.r11.s64 + -3721;
	// lbz r10,24442(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24442);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8268c938
	if (ctx.cr0.eq) goto loc_8268C938;
	// lbz r10,24380(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24380);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8268c914
	if (!ctx.cr0.eq) goto loc_8268C914;
	// bl 0x8268b818
	ctx.lr = 0x8268C898;
	sub_8268B818(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// ori r10,r10,16389
	ctx.r10.u64 = ctx.r10.u64 | 16389;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// addi r5,r9,11456
	ctx.r5.s64 = ctx.r9.s64 + 11456;
	// and r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 & ctx.r10.u64;
	// addi r4,r8,11488
	ctx.r4.s64 = ctx.r8.s64 + 11488;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83179384
	ctx.lr = 0x8268C8C4;
	__imp__sprintf(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,2336(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2336);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8268c8e8
	if (ctx.cr6.eq) goto loc_8268C8E8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8268c938
	if (ctx.cr6.eq) goto loc_8268C938;
	// b 0x8268c900
	goto loc_8268C900;
loc_8268C8E8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,2256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2256);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8268c938
	if (ctx.cr6.eq) goto loc_8268C938;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
loc_8268C900:
	// li r3,27
	ctx.r3.s64 = 27;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bctrl 
	ctx.lr = 0x8268C910;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8268c938
	goto loc_8268C938;
loc_8268C914:
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8268c928
	if (ctx.cr0.eq) goto loc_8268C928;
	// bl 0x8268bb88
	ctx.lr = 0x8268C924;
	sub_8268BB88(ctx, base);
	// b 0x8268c938
	goto loc_8268C938;
loc_8268C928:
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8268c938
	if (ctx.cr0.eq) goto loc_8268C938;
	// bl 0x8268bf98
	ctx.lr = 0x8268C938;
	sub_8268BF98(ctx, base);
loc_8268C938:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268C948"))) PPC_WEAK_FUNC(sub_8268C948);
PPC_FUNC_IMPL(__imp__sub_8268C948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,2396(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2396);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bne cr6,0x8268c96c
	if (!ctx.cr6.eq) goto loc_8268C96C;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_8268C96C:
	// lwz r11,24392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24392);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// rlwinm r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// ori r10,r10,16389
	ctx.r10.u64 = ctx.r10.u64 | 16389;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268C98C"))) PPC_WEAK_FUNC(sub_8268C98C);
PPC_FUNC_IMPL(__imp__sub_8268C98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268C990"))) PPC_WEAK_FUNC(sub_8268C990);
PPC_FUNC_IMPL(__imp__sub_8268C990) {
	PPC_FUNC_PROLOGUE();
	// stw r4,13916(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13916, ctx.r4.u32);
	// sync 
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268C99C"))) PPC_WEAK_FUNC(sub_8268C99C);
PPC_FUNC_IMPL(__imp__sub_8268C99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268C9A0"))) PPC_WEAK_FUNC(sub_8268C9A0);
PPC_FUNC_IMPL(__imp__sub_8268C9A0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,13916(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13916, ctx.r11.u32);
	// sync 
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268C9B0"))) PPC_WEAK_FUNC(sub_8268C9B0);
PPC_FUNC_IMPL(__imp__sub_8268C9B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8268C9B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-2192(r1)
	ea = -2192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x83179584
	ctx.lr = 0x8268C9CC;
	__imp__KeEnterCriticalRegion(ctx, base);
	// lis r28,-32256
	ctx.r28.s64 = -2113929216;
	// lwz r3,2152(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2152);
	// bl 0x831791a4
	ctx.lr = 0x8268C9D8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8268c9e8
	if (ctx.cr6.eq) goto loc_8268C9E8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831795a4
	ctx.lr = 0x8268C9E8;
	__imp__VdRetrainEDRAMWorker(ctx, base);
loc_8268C9E8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,2048
	ctx.r8.s64 = 2048;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,4096
	ctx.r5.s64 = 4096;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83179594
	ctx.lr = 0x8268CA10;
	__imp__VdRetrainEDRAM(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8268ca7c
	if (ctx.cr0.eq) goto loc_8268CA7C;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x8268ca28
	if (!ctx.cr6.eq) goto loc_8268CA28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826773a8
	ctx.lr = 0x8268CA28;
	sub_826773A8(ctx, base);
loc_8268CA28:
	// li r4,4096
	ctx.r4.s64 = 4096;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82675738
	ctx.lr = 0x8268CA34;
	sub_82675738(ctx, base);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// li r8,2048
	ctx.r8.s64 = 2048;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,4096
	ctx.r5.s64 = 4096;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83179594
	ctx.lr = 0x8268CA58;
	__imp__VdRetrainEDRAM(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x826773a8
	ctx.lr = 0x8268CA74;
	sub_826773A8(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x8268ca28
	if (!ctx.cr6.eq) goto loc_8268CA28;
loc_8268CA7C:
	// lwz r3,2152(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2152);
	// bl 0x831791b4
	ctx.lr = 0x8268CA84;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// bl 0x83179574
	ctx.lr = 0x8268CA88;
	__imp__KeLeaveCriticalRegion(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,2192
	ctx.r1.s64 = ctx.r1.s64 + 2192;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268CA94"))) PPC_WEAK_FUNC(sub_8268CA94);
PPC_FUNC_IMPL(__imp__sub_8268CA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268CA98"))) PPC_WEAK_FUNC(sub_8268CA98);
PPC_FUNC_IMPL(__imp__sub_8268CA98) {
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
	// li r10,26
	ctx.r10.s64 = 26;
	// li r9,-1
	ctx.r9.s64 = -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// addi r11,r3,1128
	ctx.r11.s64 = ctx.r3.s64 + 1128;
	// std r9,12248(r3)
	PPC_STORE_U64(ctx.r3.u32 + 12248, ctx.r9.u64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8268CAC8:
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// stwu r10,24(r11)
	ea = 24 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8268cac8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8268CAC8;
	// li r10,18
	ctx.r10.s64 = 18;
	// addi r11,r31,1768
	ctx.r11.s64 = ctx.r31.s64 + 1768;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8268CAE4:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwimi r10,r9,0,30,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFC);
	// stwu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8268cae4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8268CAE4;
	// lis r8,8192
	ctx.r8.s64 = 536870912;
	// lwz r11,10564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10564);
	// lis r6,15
	ctx.r6.s64 = 983040;
	// lwz r7,10568(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10568);
	// ori r8,r8,8192
	ctx.r8.u64 = ctx.r8.u64 | 8192;
	// ori r6,r6,61440
	ctx.r6.u64 = ctx.r6.u64 | 61440;
	// stw r8,10428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10428, ctx.r8.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// stw r6,10708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10708, ctx.r6.u32);
	// lis r5,15
	ctx.r5.s64 = 983040;
	// stw r8,10772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10772, ctx.r8.u32);
	// lis r4,255
	ctx.r4.s64 = 16711680;
	// stw r11,10564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10564, ctx.r11.u32);
	// li r10,14
	ctx.r10.s64 = 14;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r3,8
	ctx.r3.s64 = 8;
	// stw r10,10628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10628, ctx.r10.u32);
	// ori r5,r5,61696
	ctx.r5.u64 = ctx.r5.u64 | 61696;
	// stw r10,10768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10768, ctx.r10.u32);
	// oris r7,r7,1
	ctx.r7.u64 = ctx.r7.u64 | 65536;
	// stw r3,10604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10604, ctx.r3.u32);
	// ori r8,r4,65535
	ctx.r8.u64 = ctx.r4.u64 | 65535;
	// stw r5,10712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10712, ctx.r5.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r9,10580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10580, ctx.r9.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r7,10568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10568, ctx.r7.u32);
	// stw r8,10444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10444, ctx.r8.u32);
	// stw r9,10688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10688, ctx.r9.u32);
	// stw r6,10824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10824, ctx.r6.u32);
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// std r11,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
	// stw r10,11044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11044, ctx.r10.u32);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8268cba4
	if (!ctx.cr6.gt) goto loc_8268CBA4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82676e00
	ctx.lr = 0x8268CBA4;
	sub_82676E00(ctx, base);
loc_8268CBA4:
	// li r11,3329
	ctx.r11.s64 = 3329;
	// lis r10,1024
	ctx.r10.s64 = 67108864;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lis r11,-16382
	ctx.r11.s64 = -1073610752;
	// li r9,129
	ctx.r9.s64 = 129;
	// ori r8,r11,8448
	ctx.r8.u64 = ctx.r11.u64 | 8448;
	// li r11,-1
	ctx.r11.s64 = -1;
	// lis r7,-31956
	ctx.r7.s64 = -2094268416;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lis r5,-16382
	ctx.r5.s64 = -1073610752;
	// li r30,8032
	ctx.r30.s64 = 8032;
	// lwz r11,5792(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 5792);
	// ori r7,r5,8448
	ctx.r7.u64 = ctx.r5.u64 | 8448;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// li r5,130
	ctx.r5.s64 = 130;
	// oris r4,r11,32769
	ctx.r4.u64 = ctx.r11.u64 | 2147549184;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r8,3650
	ctx.r8.s64 = 3650;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// li r9,15
	ctx.r9.s64 = 15;
	// lwz r11,5796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5796);
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stwu r30,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// lwz r10,24392(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24392);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r10,3205
	ctx.r10.s64 = 3205;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bne 0x8268cc3c
	if (!ctx.cr0.eq) goto loc_8268CC3C;
	// li r9,3
	ctx.r9.s64 = 3;
loc_8268CC3C:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r10,r10,1400
	ctx.r10.u64 = ctx.r10.u64 | 1400;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r6,2989
	ctx.r6.s64 = 195887104;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r6,r6,61453
	ctx.r6.u64 = ctx.r6.u64 | 61453;
	// li r4,0
	ctx.r4.s64 = 0;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// stwu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r11.u32 = ea;
	// stwu r5,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r11.u32 = ea;
	// stwu r4,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8268CCA8"))) PPC_WEAK_FUNC(sub_8268CCA8);
PPC_FUNC_IMPL(__imp__sub_8268CCA8) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r11,2392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2392);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// bl 0x831795b4
	ctx.lr = 0x8268CCE4;
	__imp__KeSetCurrentProcessType(ctx, base);
	// lwz r11,848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r3,852(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 852);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268CCF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831795b4
	ctx.lr = 0x8268CCFC;
	__imp__KeSetCurrentProcessType(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// not r8,r30
	ctx.r8.u64 = ~ctx.r30.u64;
	// addi r6,r11,20988
	ctx.r6.s64 = ctx.r11.s64 + 20988;
loc_8268CD08:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r6
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// and r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 & ctx.r10.u64;
	// stwcx. r9,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8268cd08
	if (!ctx.cr0.eq) goto loc_8268CD08;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8268cd44
	if (!ctx.cr6.eq) goto loc_8268CD44;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-7144
	ctx.r3.s64 = ctx.r11.s64 + -7144;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831792b4
	ctx.lr = 0x8268CD44;
	__imp__KeSetEvent(ctx, base);
loc_8268CD44:
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

__attribute__((alias("__imp__sub_8268CD5C"))) PPC_WEAK_FUNC(sub_8268CD5C);
PPC_FUNC_IMPL(__imp__sub_8268CD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268CD60"))) PPC_WEAK_FUNC(sub_8268CD60);
PPC_FUNC_IMPL(__imp__sub_8268CD60) {
	PPC_FUNC_PROLOGUE();
	// li r11,-1
	ctx.r11.s64 = -1;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268CD7C"))) PPC_WEAK_FUNC(sub_8268CD7C);
PPC_FUNC_IMPL(__imp__sub_8268CD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268CD80"))) PPC_WEAK_FUNC(sub_8268CD80);
PPC_FUNC_IMPL(__imp__sub_8268CD80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x8268CD88;
	__savegprlr_21(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r4,r10,4404
	ctx.r4.s64 = ctx.r10.s64 + 4404;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// clrlwi r31,r11,26
	ctx.r31.u64 = ctx.r11.u32 & 0x3F;
	// bl 0x8268fc90
	ctx.lr = 0x8268CDB8;
	sub_8268FC90(ctx, base);
	// li r21,0
	ctx.r21.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x8268cdd0
	if (!ctx.cr6.eq) goto loc_8268CDD0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8268cdd4
	if (!ctx.cr6.eq) goto loc_8268CDD4;
loc_8268CDD0:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_8268CDD4:
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x8268cdf8
	if (!ctx.cr6.eq) goto loc_8268CDF8;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8268cdf0
	if (ctx.cr6.eq) goto loc_8268CDF0;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne cr6,0x8268cdf8
	if (!ctx.cr6.eq) goto loc_8268CDF8;
loc_8268CDF0:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8268cdfc
	goto loc_8268CDFC;
loc_8268CDF8:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_8268CDFC:
	// clrlwi r27,r11,24
	ctx.r27.u64 = ctx.r11.u32 & 0xFF;
	// li r30,-1
	ctx.r30.s64 = -1;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8268ceb4
	if (ctx.cr6.eq) goto loc_8268CEB4;
	// cmpwi cr6,r31,32
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 32, ctx.xer);
	// beq cr6,0x8268cea8
	if (ctx.cr6.eq) goto loc_8268CEA8;
	// ble cr6,0x8268ce58
	if (!ctx.cr6.gt) goto loc_8268CE58;
	// cmpwi cr6,r31,37
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 37, ctx.xer);
	// ble cr6,0x8268ce48
	if (!ctx.cr6.gt) goto loc_8268CE48;
	// cmpwi cr6,r31,62
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 62, ctx.xer);
	// beq cr6,0x8268ce3c
	if (ctx.cr6.eq) goto loc_8268CE3C;
	// cmpwi cr6,r31,63
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 63, ctx.xer);
	// bne cr6,0x8268ce58
	if (!ctx.cr6.eq) goto loc_8268CE58;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r5,r11,13936
	ctx.r5.s64 = ctx.r11.s64 + 13936;
	// b 0x8268cec0
	goto loc_8268CEC0;
loc_8268CE3C:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r5,r11,13928
	ctx.r5.s64 = ctx.r11.s64 + 13928;
	// b 0x8268cec0
	goto loc_8268CEC0;
loc_8268CE48:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r30,r31,-33
	ctx.r30.s64 = ctx.r31.s64 + -33;
	// addi r5,r11,13924
	ctx.r5.s64 = ctx.r11.s64 + 13924;
	// b 0x8268cec0
	goto loc_8268CEC0;
loc_8268CE58:
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// rlwinm. r11,r11,29,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268ce9c
	if (ctx.cr0.eq) goto loc_8268CE9C;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r10,r11,4,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x7;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8268ce80
	if (!ctx.cr6.lt) goto loc_8268CE80;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r5,r11,13944
	ctx.r5.s64 = ctx.r11.s64 + 13944;
	// b 0x8268cebc
	goto loc_8268CEBC;
loc_8268CE80:
	// cmpwi cr6,r31,61
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 61, ctx.xer);
	// bne cr6,0x8268ce9c
	if (!ctx.cr6.eq) goto loc_8268CE9C;
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268ce9c
	if (ctx.cr0.eq) goto loc_8268CE9C;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r5,r11,13948
	ctx.r5.s64 = ctx.r11.s64 + 13948;
	// b 0x8268cec0
	goto loc_8268CEC0;
loc_8268CE9C:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r5,r11,13956
	ctx.r5.s64 = ctx.r11.s64 + 13956;
	// b 0x8268cebc
	goto loc_8268CEBC;
loc_8268CEA8:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r5,r11,13920
	ctx.r5.s64 = ctx.r11.s64 + 13920;
	// b 0x8268cec0
	goto loc_8268CEC0;
loc_8268CEB4:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r5,r11,13960
	ctx.r5.s64 = ctx.r11.s64 + 13960;
loc_8268CEBC:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_8268CEC0:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r4,r11,-24420
	ctx.r4.s64 = ctx.r11.s64 + -24420;
	// bl 0x8268fc90
	ctx.lr = 0x8268CED0;
	sub_8268FC90(ctx, base);
	// clrlwi. r31,r28,24
	ctx.r31.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8268cee8
	if (ctx.cr0.eq) goto loc_8268CEE8;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r4,r11,13964
	ctx.r4.s64 = ctx.r11.s64 + 13964;
	// bl 0x8268fc90
	ctx.lr = 0x8268CEE8;
	sub_8268FC90(ctx, base);
loc_8268CEE8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x8268cf08
	if (!ctx.cr6.eq) goto loc_8268CF08;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x8268cf08
	if (ctx.cr6.eq) goto loc_8268CF08;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r4,r11,13968
	ctx.r4.s64 = ctx.r11.s64 + 13968;
	// bl 0x8268fc90
	ctx.lr = 0x8268CF08;
	sub_8268FC90(ctx, base);
loc_8268CF08:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x8268cf24
	if (ctx.cr6.lt) goto loc_8268CF24;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,26556
	ctx.r4.s64 = ctx.r11.s64 + 26556;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8268fc90
	ctx.lr = 0x8268CF24;
	sub_8268FC90(ctx, base);
loc_8268CF24:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8268cf3c
	if (ctx.cr6.eq) goto loc_8268CF3C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r4,r11,28200
	ctx.r4.s64 = ctx.r11.s64 + 28200;
	// bl 0x8268fc90
	ctx.lr = 0x8268CF3C;
	sub_8268FC90(ctx, base);
loc_8268CF3C:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268cf50
	if (ctx.cr0.eq) goto loc_8268CF50;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,13972
	ctx.r4.s64 = ctx.r11.s64 + 13972;
	// b 0x8268d0e8
	goto loc_8268D0E8;
loc_8268CF50:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x8268cfcc
	if (!ctx.cr6.eq) goto loc_8268CFCC;
	// cmpwi cr6,r24,15
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 15, ctx.xer);
	// beq cr6,0x8268d0f0
	if (ctx.cr6.eq) goto loc_8268D0F0;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r4,r11,-19068
	ctx.r4.s64 = ctx.r11.s64 + -19068;
	// bl 0x8268fc90
	ctx.lr = 0x8268CF70;
	sub_8268FC90(ctx, base);
	// clrlwi. r11,r24,31
	ctx.r11.u64 = ctx.r24.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268cf88
	if (ctx.cr0.eq) goto loc_8268CF88;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r4,r11,13976
	ctx.r4.s64 = ctx.r11.s64 + 13976;
	// bl 0x8268fc90
	ctx.lr = 0x8268CF88;
	sub_8268FC90(ctx, base);
loc_8268CF88:
	// rlwinm. r11,r24,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268cfa0
	if (ctx.cr0.eq) goto loc_8268CFA0;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r4,r11,13980
	ctx.r4.s64 = ctx.r11.s64 + 13980;
	// bl 0x8268fc90
	ctx.lr = 0x8268CFA0;
	sub_8268FC90(ctx, base);
loc_8268CFA0:
	// rlwinm. r11,r24,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268cfb8
	if (ctx.cr0.eq) goto loc_8268CFB8;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r4,r11,13984
	ctx.r4.s64 = ctx.r11.s64 + 13984;
	// bl 0x8268fc90
	ctx.lr = 0x8268CFB8;
	sub_8268FC90(ctx, base);
loc_8268CFB8:
	// rlwinm. r11,r24,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268d0f0
	if (ctx.cr0.eq) goto loc_8268D0F0;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,13988
	ctx.r4.s64 = ctx.r11.s64 + 13988;
	// b 0x8268d0e8
	goto loc_8268D0E8;
loc_8268CFCC:
	// cmpwi cr6,r24,15
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 15, ctx.xer);
	// bne cr6,0x8268cfdc
	if (!ctx.cr6.eq) goto loc_8268CFDC;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x8268d0f0
	if (ctx.cr6.eq) goto loc_8268D0F0;
loc_8268CFDC:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r4,r11,-19068
	ctx.r4.s64 = ctx.r11.s64 + -19068;
	// bl 0x8268fc90
	ctx.lr = 0x8268CFEC;
	sub_8268FC90(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r9,r11,22944
	ctx.r9.s64 = ctx.r11.s64 + 22944;
loc_8268D000:
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// and. r8,r11,r24
	ctx.r8.u64 = ctx.r11.u64 & ctx.r24.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8268d028
	if (ctx.cr0.eq) goto loc_8268D028;
	// and. r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 & ctx.r23.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268d020
	if (ctx.cr0.eq) goto loc_8268D020;
	// li r11,49
	ctx.r11.s64 = 49;
	// b 0x8268d04c
	goto loc_8268D04C;
loc_8268D020:
	// lbzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// b 0x8268d04c
	goto loc_8268D04C;
loc_8268D028:
	// and. r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 & ctx.r23.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268d038
	if (ctx.cr0.eq) goto loc_8268D038;
	// li r11,95
	ctx.r11.s64 = 95;
	// b 0x8268d04c
	goto loc_8268D04C;
loc_8268D038:
	// subfic r11,r22,0
	ctx.xer.ca = ctx.r22.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r22.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,31,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF1;
	// rlwinm r11,r11,0,27,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// addi r11,r11,95
	ctx.r11.s64 = ctx.r11.s64 + 95;
loc_8268D04C:
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// stbx r11,r10,r8
	PPC_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x8268d000
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8268D000;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r8,r1,152
	ctx.r8.s64 = ctx.r1.s64 + 152;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
loc_8268D068:
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// beq cr6,0x8268d0a4
	if (ctx.cr6.eq) goto loc_8268D0A4;
	// cmpwi cr6,r11,49
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 49, ctx.xer);
	// beq cr6,0x8268d0a4
	if (ctx.cr6.eq) goto loc_8268D0A4;
	// cmpwi cr6,r11,95
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 95, ctx.xer);
	// beq cr6,0x8268d094
	if (ctx.cr6.eq) goto loc_8268D094;
	// stb r9,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r9.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_8268D094:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x8268d068
	if (ctx.cr6.lt) goto loc_8268D068;
	// b 0x8268d0a8
	goto loc_8268D0A8;
loc_8268D0A4:
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
loc_8268D0A8:
	// clrlwi. r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268d0bc
	if (ctx.cr0.eq) goto loc_8268D0BC;
	// stb r21,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r21.u8);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// b 0x8268d0e8
	goto loc_8268D0E8;
loc_8268D0BC:
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r21,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r21.u8);
loc_8268D0C4:
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,95
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 95, ctx.xer);
	// bne cr6,0x8268d0e4
	if (!ctx.cr6.eq) goto loc_8268D0E4;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r21,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r21.u8);
	// bgt 0x8268d0c4
	if (ctx.cr0.gt) goto loc_8268D0C4;
loc_8268D0E4:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_8268D0E8:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8268fc90
	ctx.lr = 0x8268D0F0;
	sub_8268FC90(ctx, base);
loc_8268D0F0:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268D0F8"))) PPC_WEAK_FUNC(sub_8268D0F8);
PPC_FUNC_IMPL(__imp__sub_8268D0F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x8268D100;
	__savegprlr_21(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x8268d124
	if (!ctx.cr6.eq) goto loc_8268D124;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8268d134
	if (!ctx.cr6.eq) goto loc_8268D134;
loc_8268D124:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x8268d13c
	if (!ctx.cr6.eq) goto loc_8268D13C;
	// rlwinm. r11,r5,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268d13c
	if (ctx.cr0.eq) goto loc_8268D13C;
loc_8268D134:
	// li r21,1
	ctx.r21.s64 = 1;
	// b 0x8268d140
	goto loc_8268D140;
loc_8268D13C:
	// li r21,0
	ctx.r21.s64 = 0;
loc_8268D140:
	// srawi r11,r5,6
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 6;
	// subfic r10,r30,0
	ctx.xer.ca = ctx.r30.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r30.s64;
	// and r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 & ctx.r30.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cntlzw r8,r30
	ctx.r8.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r11,r10,0,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFC0;
	// rlwinm r10,r8,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// rlwinm r11,r11,0,25,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// clrlwi r27,r7,31
	ctx.r27.u64 = ctx.r7.u32 & 0x1;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// and r23,r10,r6
	ctx.r23.u64 = ctx.r10.u64 & ctx.r6.u64;
	// and r24,r11,r5
	ctx.r24.u64 = ctx.r11.u64 & ctx.r5.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8268d188
	if (ctx.cr6.eq) goto loc_8268D188;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,26552
	ctx.r4.s64 = ctx.r11.s64 + 26552;
	// bl 0x8268fc90
	ctx.lr = 0x8268D188;
	sub_8268FC90(ctx, base);
loc_8268D188:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x8268d19c
	if (!ctx.cr6.eq) goto loc_8268D19C;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x8268d1a0
	if (ctx.cr6.eq) goto loc_8268D1A0;
loc_8268D19C:
	// li r10,1
	ctx.r10.s64 = 1;
loc_8268D1A0:
	// subfic r9,r30,0
	ctx.xer.ca = ctx.r30.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r30.s64;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r26,r11,13912
	ctx.r26.s64 = ctx.r11.s64 + 13912;
	// clrlwi r11,r9,28
	ctx.r11.u64 = ctx.r9.u32 & 0xF;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,99
	ctx.r5.s64 = ctx.r11.s64 + 99;
	// clrlwi r30,r10,24
	ctx.r30.u64 = ctx.r10.u32 & 0xFF;
	// bl 0x8268fc90
	ctx.lr = 0x8268D1C8;
	sub_8268FC90(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r29,r11,13992
	ctx.r29.s64 = ctx.r11.s64 + 13992;
	// beq 0x8268d200
	if (ctx.cr0.eq) goto loc_8268D200;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x8268d1f0
	if (ctx.cr6.eq) goto loc_8268D1F0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fc90
	ctx.lr = 0x8268D1F0;
	sub_8268FC90(ctx, base);
loc_8268D1F0:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,13964
	ctx.r4.s64 = ctx.r11.s64 + 13964;
	// bl 0x8268fc90
	ctx.lr = 0x8268D200;
	sub_8268FC90(ctx, base);
loc_8268D200:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r11,26556
	ctx.r4.s64 = ctx.r11.s64 + 26556;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fc90
	ctx.lr = 0x8268D214;
	sub_8268FC90(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r30,r11,14000
	ctx.r30.s64 = ctx.r11.s64 + 14000;
	// beq cr6,0x8268d230
	if (ctx.cr6.eq) goto loc_8268D230;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fc90
	ctx.lr = 0x8268D230;
	sub_8268FC90(ctx, base);
loc_8268D230:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x8268d258
	if (ctx.cr6.eq) goto loc_8268D258;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x8268d24c
	if (ctx.cr6.eq) goto loc_8268D24C;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,14004
	ctx.r4.s64 = ctx.r11.s64 + 14004;
	// b 0x8268d250
	goto loc_8268D250;
loc_8268D24C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_8268D250:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fc90
	ctx.lr = 0x8268D258;
	sub_8268FC90(ctx, base);
loc_8268D258:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8268d26c
	if (ctx.cr6.eq) goto loc_8268D26C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,28200
	ctx.r4.s64 = ctx.r11.s64 + 28200;
	// b 0x8268d278
	goto loc_8268D278;
loc_8268D26C:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x8268d280
	if (ctx.cr6.eq) goto loc_8268D280;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_8268D278:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fc90
	ctx.lr = 0x8268D280;
	sub_8268FC90(ctx, base);
loc_8268D280:
	// lwz r29,340(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// bge cr6,0x8268d2f4
	if (!ctx.cr6.lt) goto loc_8268D2F4;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-19068
	ctx.r4.s64 = ctx.r11.s64 + -19068;
	// bl 0x8268fc90
	ctx.lr = 0x8268D29C;
	sub_8268FC90(ctx, base);
	// srawi r11,r28,6
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 6;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r30,r10,14008
	ctx.r30.s64 = ctx.r10.s64 + 14008;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x8268fc90
	ctx.lr = 0x8268D2C4;
	sub_8268FC90(ctx, base);
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// ble cr6,0x8268d3bc
	if (!ctx.cr6.gt) goto loc_8268D3BC;
	// lbz r11,351(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 351);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8268d2e8
	if (ctx.cr0.eq) goto loc_8268D2E8;
	// srawi r11,r28,4
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 4;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// b 0x8268d2ec
	goto loc_8268D2EC;
loc_8268D2E8:
	// clrlwi r11,r28,30
	ctx.r11.u64 = ctx.r28.u32 & 0x3;
loc_8268D2EC:
	// lbzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// b 0x8268d3ac
	goto loc_8268D3AC;
loc_8268D2F4:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8268d3bc
	if (ctx.cr6.eq) goto loc_8268D3BC;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-19068
	ctx.r4.s64 = ctx.r11.s64 + -19068;
	// bl 0x8268fc90
	ctx.lr = 0x8268D30C;
	sub_8268FC90(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// srawi r9,r28,2
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r28.s32 >> 2;
	// addi r29,r11,14008
	ctx.r29.s64 = ctx.r11.s64 + 14008;
	// srawi r10,r28,4
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r28.s32 >> 4;
	// srawi r11,r28,6
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 6;
	// clrlwi r30,r28,30
	ctx.r30.u64 = ctx.r28.u32 & 0x3;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// clrlwi r25,r11,30
	ctx.r25.u64 = ctx.r11.u32 & 0x3;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r28,r9,30
	ctx.r28.u64 = ctx.r9.u32 & 0x3;
	// clrlwi r27,r10,30
	ctx.r27.u64 = ctx.r10.u32 & 0x3;
	// lbzx r11,r30,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x8268fc90
	ctx.lr = 0x8268D350;
	sub_8268FC90(ctx, base);
	// cmpw cr6,r28,r30
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x8268d368
	if (!ctx.cr6.eq) goto loc_8268D368;
	// cmpw cr6,r27,r30
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x8268d368
	if (!ctx.cr6.eq) goto loc_8268D368;
	// cmpw cr6,r25,r30
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x8268d3bc
	if (ctx.cr6.eq) goto loc_8268D3BC;
loc_8268D368:
	// lbzx r11,r28,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r29.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x8268fc90
	ctx.lr = 0x8268D37C;
	sub_8268FC90(ctx, base);
	// cmpw cr6,r27,r28
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x8268d38c
	if (!ctx.cr6.eq) goto loc_8268D38C;
	// cmpw cr6,r25,r28
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x8268d3bc
	if (ctx.cr6.eq) goto loc_8268D3BC;
loc_8268D38C:
	// lbzx r11,r27,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r29.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x8268fc90
	ctx.lr = 0x8268D3A0;
	sub_8268FC90(ctx, base);
	// cmpw cr6,r25,r27
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x8268d3bc
	if (ctx.cr6.eq) goto loc_8268D3BC;
	// lbzx r11,r25,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + ctx.r29.u32);
loc_8268D3AC:
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fc90
	ctx.lr = 0x8268D3BC;
	sub_8268FC90(ctx, base);
loc_8268D3BC:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268D3C4"))) PPC_WEAK_FUNC(sub_8268D3C4);
PPC_FUNC_IMPL(__imp__sub_8268D3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268D3C8"))) PPC_WEAK_FUNC(sub_8268D3C8);
PPC_FUNC_IMPL(__imp__sub_8268D3C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x8268D3D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// srawi r11,r4,7
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7F) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 7;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// clrlwi r28,r4,26
	ctx.r28.u64 = ctx.r4.u32 & 0x3F;
	// clrlwi r27,r11,31
	ctx.r27.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8268d3fc
	if (ctx.cr6.eq) goto loc_8268D3FC;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,26552
	ctx.r4.s64 = ctx.r11.s64 + 26552;
	// bl 0x8268fc90
	ctx.lr = 0x8268D3FC;
	sub_8268FC90(ctx, base);
loc_8268D3FC:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r29,r11,14016
	ctx.r29.s64 = ctx.r11.s64 + 14016;
	// beq cr6,0x8268d418
	if (ctx.cr6.eq) goto loc_8268D418;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fc90
	ctx.lr = 0x8268D418;
	sub_8268FC90(ctx, base);
loc_8268D418:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,14020
	ctx.r4.s64 = ctx.r11.s64 + 14020;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fc90
	ctx.lr = 0x8268D42C;
	sub_8268FC90(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,28200
	ctx.r4.s64 = ctx.r11.s64 + 28200;
	// bl 0x8268fc90
	ctx.lr = 0x8268D43C;
	sub_8268FC90(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8268d4e8
	if (ctx.cr6.eq) goto loc_8268D4E8;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-19068
	ctx.r4.s64 = ctx.r11.s64 + -19068;
	// bl 0x8268fc90
	ctx.lr = 0x8268D454;
	sub_8268FC90(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// clrlwi r10,r30,30
	ctx.r10.u64 = ctx.r30.u32 & 0x3;
	// addi r11,r11,14008
	ctx.r11.s64 = ctx.r11.s64 + 14008;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r9,13912
	ctx.r28.s64 = ctx.r9.s64 + 13912;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lbzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x8268fc90
	ctx.lr = 0x8268D47C;
	sub_8268FC90(ctx, base);
	// srawi r11,r30,2
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 2;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// addi r10,r10,14028
	ctx.r10.s64 = ctx.r10.s64 + 14028;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x8268fc90
	ctx.lr = 0x8268D4A0;
	sub_8268FC90(ctx, base);
	// srawi r11,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 4;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// addi r10,r10,14036
	ctx.r10.s64 = ctx.r10.s64 + 14036;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x8268fc90
	ctx.lr = 0x8268D4C4;
	sub_8268FC90(ctx, base);
	// srawi r11,r30,6
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 6;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// addi r10,r10,14044
	ctx.r10.s64 = ctx.r10.s64 + 14044;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x8268fc90
	ctx.lr = 0x8268D4E8;
	sub_8268FC90(ctx, base);
loc_8268D4E8:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8268d4f8
	if (ctx.cr6.eq) goto loc_8268D4F8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x8268d500
	goto loc_8268D500;
loc_8268D4F8:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r4,r11,32570
	ctx.r4.s64 = ctx.r11.s64 + 32570;
loc_8268D500:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fc90
	ctx.lr = 0x8268D508;
	sub_8268FC90(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268D510"))) PPC_WEAK_FUNC(sub_8268D510);
PPC_FUNC_IMPL(__imp__sub_8268D510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm. r11,r8,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8268D524:
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r10,r8,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// slw r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// rlwinm r7,r8,12,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// addic r7,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// subfe r10,r7,r10
	temp.u8 = (~ctx.r7.u32 + ctx.r10.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r7.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r7,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subfe r11,r7,r11
	temp.u8 = (~ctx.r7.u32 + ctx.r11.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r7.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8268d58c
	if (ctx.cr6.lt) goto loc_8268D58C;
	// beq cr6,0x8268d584
	if (ctx.cr6.eq) goto loc_8268D584;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8268d57c
	if (ctx.cr6.lt) goto loc_8268D57C;
	// bne cr6,0x8268d598
	if (!ctx.cr6.eq) goto loc_8268D598;
	// ori r3,r3,8
	ctx.r3.u64 = ctx.r3.u64 | 8;
	// b 0x8268d598
	goto loc_8268D598;
loc_8268D57C:
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// b 0x8268d598
	goto loc_8268D598;
loc_8268D584:
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// b 0x8268d598
	goto loc_8268D598;
loc_8268D58C:
	// rlwinm. r11,r8,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268d598
	if (ctx.cr0.eq) goto loc_8268D598;
	// ori r3,r3,4
	ctx.r3.u64 = ctx.r3.u64 | 4;
loc_8268D598:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x8268d524
	if (ctx.cr6.lt) goto loc_8268D524;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268D5A8"))) PPC_WEAK_FUNC(sub_8268D5A8);
PPC_FUNC_IMPL(__imp__sub_8268D5A8) {
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
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x8268d604
	if (!ctx.cr6.eq) goto loc_8268D604;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8268d5f8
	if (ctx.cr0.eq) goto loc_8268D5F8;
	// bl 0x8268d510
	ctx.lr = 0x8268D5D4;
	sub_8268D510(ctx, base);
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8268d604
	if (!ctx.cr0.eq) goto loc_8268D604;
	// rlwinm. r11,r3,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268d5ec
	if (ctx.cr0.eq) goto loc_8268D5EC;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8268d608
	goto loc_8268D608;
loc_8268D5EC:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x8268d608
	goto loc_8268D608;
loc_8268D5F8:
	// rlwinm. r11,r11,0,12,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq 0x8268d608
	if (ctx.cr0.eq) goto loc_8268D608;
loc_8268D604:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8268D608:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268D618"))) PPC_WEAK_FUNC(sub_8268D618);
PPC_FUNC_IMPL(__imp__sub_8268D618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x8268D620;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// bl 0x8268d5a8
	ctx.lr = 0x8268D640;
	sub_8268D5A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268d660
	if (ctx.cr0.eq) goto loc_8268D660;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,14052
	ctx.r4.s64 = ctx.r11.s64 + 14052;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8268fdf0
	ctx.lr = 0x8268D65C;
	sub_8268FDF0(ctx, base);
	// b 0x8268d9ec
	goto loc_8268D9EC;
loc_8268D660:
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// addi r10,r10,-28624
	ctx.r10.s64 = ctx.r10.s64 + -28624;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// lbzx r27,r11,r10
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// bne cr6,0x8268d6f4
	if (!ctx.cr6.eq) goto loc_8268D6F4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8268d6f4
	if (!ctx.cr0.eq) goto loc_8268D6F4;
	// lbz r11,10(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// lbz r10,9(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8268d6f4
	if (!ctx.cr6.eq) goto loc_8268D6F4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8268d6f4
	if (!ctx.cr0.eq) goto loc_8268D6F4;
	// lbz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// lbz r10,5(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8268d6f4
	if (!ctx.cr6.eq) goto loc_8268D6F4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8268d6ec
	if (ctx.cr6.eq) goto loc_8268D6EC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8268d6f4
	if (!ctx.cr0.eq) goto loc_8268D6F4;
loc_8268D6EC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8268d6f8
	goto loc_8268D6F8;
loc_8268D6F4:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8268D6F8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268d718
	if (ctx.cr0.eq) goto loc_8268D718;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// addi r4,r10,14056
	ctx.r4.s64 = ctx.r10.s64 + 14056;
loc_8268D708:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// li r27,1
	ctx.r27.s64 = 1;
	// clrlwi r5,r11,31
	ctx.r5.u64 = ctx.r11.u32 & 0x1;
	// b 0x8268d7c8
	goto loc_8268D7C8;
loc_8268D718:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,8,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x1F;
	// cmplwi cr6,r10,29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 29, ctx.xer);
	// bne cr6,0x8268d798
	if (!ctx.cr6.eq) goto loc_8268D798;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r7,r8,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// xor r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// rlwinm. r8,r8,0,6,6
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8268d798
	if (!ctx.cr0.eq) goto loc_8268D798;
	// lbz r8,10(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// lbz r7,9(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8268d798
	if (!ctx.cr6.eq) goto loc_8268D798;
	// rotlwi r8,r11,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rlwinm r7,r8,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// xor r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// rlwinm. r8,r8,0,1,1
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8268d798
	if (!ctx.cr0.eq) goto loc_8268D798;
	// lbz r8,6(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// lbz r7,5(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8268d798
	if (!ctx.cr6.eq) goto loc_8268D798;
	// rlwinm r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8268d790
	if (ctx.cr6.eq) goto loc_8268D790;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// xor r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8268d798
	if (!ctx.cr0.eq) goto loc_8268D798;
loc_8268D790:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8268d79c
	goto loc_8268D79C;
loc_8268D798:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8268D79C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268d7b0
	if (ctx.cr0.eq) goto loc_8268D7B0;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// addi r4,r10,14060
	ctx.r4.s64 = ctx.r10.s64 + 14060;
	// b 0x8268d708
	goto loc_8268D708;
loc_8268D7B0:
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-8048
	ctx.r11.s64 = ctx.r11.s64 + -8048;
	// clrlwi r5,r9,31
	ctx.r5.u64 = ctx.r9.u32 & 0x1;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_8268D7C8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8268fdf0
	ctx.lr = 0x8268D7D0;
	sub_8268FDF0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r9,r11,12,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xF;
	// rlwinm r8,r11,18,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
	// rlwinm r7,r11,26,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	// rlwinm r6,r11,17,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1;
	// rlwinm r5,r11,16,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xF;
	// clrlwi r4,r11,26
	ctx.r4.u64 = ctx.r11.u32 & 0x3F;
	// bl 0x8268cd80
	ctx.lr = 0x8268D7F4;
	sub_8268CD80(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r29,r11,-32224
	ctx.r29.s64 = ctx.r11.s64 + -32224;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8268fc90
	ctx.lr = 0x8268D808;
	sub_8268FC90(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8268d828
	if (!ctx.cr0.eq) goto loc_8268D828;
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8268d828
	if (!ctx.cr0.eq) goto loc_8268D828;
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268d828
	if (ctx.cr0.eq) goto loc_8268D828;
	// li r24,1
	ctx.r24.s64 = 1;
loc_8268D828:
	// li r28,4
	ctx.r28.s64 = 4;
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// blt cr6,0x8268d8a4
	if (ctx.cr6.lt) goto loc_8268D8A4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// clrlwi r25,r10,31
	ctx.r25.u64 = ctx.r10.u32 & 0x1;
	// bne 0x8268d86c
	if (!ctx.cr0.eq) goto loc_8268D86C;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x8268d86c
	if (ctx.cr6.eq) goto loc_8268D86C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r6,5(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// rlwinm r5,r11,6,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	// lbz r4,9(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// bl 0x8268d3c8
	ctx.lr = 0x8268D868;
	sub_8268D3C8(ctx, base);
	// b 0x8268d8a4
	goto loc_8268D8A4;
loc_8268D86C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r11,6,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	// rlwinm r8,r10,25,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1;
	// lbz r10,5(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// rlwinm r7,r11,3,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// lbz r5,9(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stb r26,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r26.u8);
	// rlwinm r4,r4,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x8268d0f8
	ctx.lr = 0x8268D8A4;
	sub_8268D0F8(ctx, base);
loc_8268D8A4:
	// cmplwi cr6,r27,2
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 2, ctx.xer);
	// blt cr6,0x8268d948
	if (ctx.cr6.lt) goto loc_8268D948;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8268d8c4
	if (!ctx.cr0.eq) goto loc_8268D8C4;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x8268d8c4
	if (!ctx.cr6.eq) goto loc_8268D8C4;
	// li r25,2
	ctx.r25.s64 = 2;
loc_8268D8C4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8268fc90
	ctx.lr = 0x8268D8D0;
	sub_8268FC90(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8268d900
	if (!ctx.cr0.eq) goto loc_8268D900;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x8268d900
	if (ctx.cr6.eq) goto loc_8268D900;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r6,6(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// rlwinm r5,r11,7,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	// lbz r4,10(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// bl 0x8268d3c8
	ctx.lr = 0x8268D8FC;
	sub_8268D3C8(ctx, base);
	// b 0x8268d948
	goto loc_8268D948;
loc_8268D900:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 2, ctx.xer);
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// beq cr6,0x8268d914
	if (ctx.cr6.eq) goto loc_8268D914;
	// rlwinm r6,r11,2,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
loc_8268D914:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r11,7,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	// rlwinm r8,r10,25,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1;
	// lbz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// rlwinm r7,r11,3,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// lbz r5,10(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// rlwinm r4,r4,2,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x1;
	// stb r26,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r26.u8);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x8268d0f8
	ctx.lr = 0x8268D948;
	sub_8268D0F8(ctx, base);
loc_8268D948:
	// cmplwi cr6,r27,3
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 3, ctx.xer);
	// blt cr6,0x8268d9ec
	if (ctx.cr6.lt) goto loc_8268D9EC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8268d968
	if (!ctx.cr0.eq) goto loc_8268D968;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x8268d968
	if (!ctx.cr6.eq) goto loc_8268D968;
	// li r25,3
	ctx.r25.s64 = 3;
loc_8268D968:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8268fc90
	ctx.lr = 0x8268D974;
	sub_8268FC90(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8268d9a4
	if (!ctx.cr0.eq) goto loc_8268D9A4;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x8268d9a4
	if (ctx.cr6.eq) goto loc_8268D9A4;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r5,r10,8,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0x1;
	// bl 0x8268d3c8
	ctx.lr = 0x8268D9A0;
	sub_8268D3C8(ctx, base);
	// b 0x8268d9ec
	goto loc_8268D9EC;
loc_8268D9A4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r25,3
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 3, ctx.xer);
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// beq cr6,0x8268d9b8
	if (ctx.cr6.eq) goto loc_8268D9B8;
	// rlwinm r6,r11,2,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
loc_8268D9B8:
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r5,r4,24
	ctx.r5.u64 = ctx.r4.u32 & 0xFF;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stb r26,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r26.u8);
	// rlwinm r9,r11,8,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x1;
	// rlwinm r7,r11,3,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// rlwinm r8,r8,25,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 25) & 0x1;
	// rlwinm r4,r4,3,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0x1;
	// bl 0x8268d0f8
	ctx.lr = 0x8268D9EC;
	sub_8268D0F8(ctx, base);
loc_8268D9EC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268D9F4"))) PPC_WEAK_FUNC(sub_8268D9F4);
PPC_FUNC_IMPL(__imp__sub_8268D9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268D9F8"))) PPC_WEAK_FUNC(sub_8268D9F8);
PPC_FUNC_IMPL(__imp__sub_8268D9F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x8268DA00;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r23,r25
	ctx.r23.u64 = ctx.r25.u64;
	// bne 0x8268da34
	if (!ctx.cr0.eq) goto loc_8268DA34;
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8268da34
	if (!ctx.cr0.eq) goto loc_8268DA34;
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268da34
	if (ctx.cr0.eq) goto loc_8268DA34;
	// li r23,1
	ctx.r23.s64 = 1;
loc_8268DA34:
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// blt cr6,0x8268da54
	if (ctx.cr6.lt) goto loc_8268DA54;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bgt cr6,0x8268da54
	if (ctx.cr6.gt) goto loc_8268DA54;
	// li r24,1
	ctx.r24.s64 = 1;
loc_8268DA54:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi. r9,r24,24
	ctx.r9.u64 = ctx.r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r10,r11,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// beq 0x8268da74
	if (ctx.cr0.eq) goto loc_8268DA74;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
loc_8268DA74:
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// li r26,1
	ctx.r26.s64 = 1;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// beq 0x8268dab0
	if (ctx.cr0.eq) goto loc_8268DAB0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,5120
	ctx.r9.s64 = 335544320;
	// rlwinm r8,r11,0,0,5
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFC000000;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8268dab0
	if (!ctx.cr6.eq) goto loc_8268DAB0;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// addi r4,r10,14068
	ctx.r4.s64 = ctx.r10.s64 + 14068;
	// b 0x8268dafc
	goto loc_8268DAFC;
loc_8268DAB0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8268db0c
	if (ctx.cr6.eq) goto loc_8268DB0C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,23552
	ctx.r9.s64 = 1543503872;
	// rlwinm r8,r11,0,0,5
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFC000000;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8268dad8
	if (!ctx.cr6.eq) goto loc_8268DAD8;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// addi r4,r10,14076
	ctx.r4.s64 = ctx.r10.s64 + 14076;
	// b 0x8268dafc
	goto loc_8268DAFC;
loc_8268DAD8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8268db0c
	if (ctx.cr6.eq) goto loc_8268DB0C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,24576
	ctx.r10.s64 = 1610612736;
	// rlwinm r9,r11,0,0,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFC000000;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8268db0c
	if (!ctx.cr6.eq) goto loc_8268DB0C;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// addi r4,r10,14084
	ctx.r4.s64 = ctx.r10.s64 + 14084;
loc_8268DAFC:
	// rlwinm r5,r11,7,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8268fdf0
	ctx.lr = 0x8268DB08;
	sub_8268FDF0(ctx, base);
	// b 0x8268db30
	goto loc_8268DB30;
loc_8268DB0C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r10,r10,-7920
	ctx.r10.s64 = ctx.r10.s64 + -7920;
	// rlwinm r9,r11,8,24,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFC;
	// rlwinm r5,r11,7,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	// lwzx r4,r9,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x8268fdf0
	ctx.lr = 0x8268DB2C;
	sub_8268FDF0(ctx, base);
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
loc_8268DB30:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r6,r11,17,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// rlwinm r7,r11,26,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	// bne 0x8268db44
	if (!ctx.cr0.eq) goto loc_8268DB44;
	// rlwinm r7,r11,18,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
loc_8268DB44:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// clrlwi r4,r11,26
	ctx.r4.u64 = ctx.r11.u32 & 0x3F;
	// bne cr6,0x8268db54
	if (!ctx.cr6.eq) goto loc_8268DB54;
	// rlwinm r4,r11,24,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x3F;
loc_8268DB54:
	// rlwinm r9,r11,16,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xF;
	// rlwinm r8,r11,18,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
	// rlwinm r5,r11,12,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xF;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8268cd80
	ctx.lr = 0x8268DB68;
	sub_8268CD80(ctx, base);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r29,r10,-32224
	ctx.r29.s64 = ctx.r10.s64 + -32224;
	// addi r28,r11,-28528
	ctx.r28.s64 = ctx.r11.s64 + -28528;
	// addi r11,r28,-64
	ctx.r11.s64 = ctx.r28.s64 + -64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r10,6,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x3F;
	// lbzx r30,r10,r11
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi r30,0
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble 0x8268db9c
	if (!ctx.cr0.gt) goto loc_8268DB9C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8268fc90
	ctx.lr = 0x8268DB9C;
	sub_8268FC90(ctx, base);
loc_8268DB9C:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x8268dc84
	if (!ctx.cr6.eq) goto loc_8268DC84;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8268dbb8
	if (!ctx.cr0.eq) goto loc_8268DBB8;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x8268dbe0
	goto loc_8268DBE0;
loc_8268DBB8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8268dbcc
	if (!ctx.cr0.eq) goto loc_8268DBCC;
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x8268dbe0
	goto loc_8268DBE0;
loc_8268DBCC:
	// rlwinm r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// li r10,3
	ctx.r10.s64 = 3;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_8268DBE0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r9,r11,0,2,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8268dc10
	if (!ctx.cr0.eq) goto loc_8268DC10;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x8268dc10
	if (ctx.cr6.eq) goto loc_8268DC10;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r5,r10,8,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0x1;
	// bl 0x8268d3c8
	ctx.lr = 0x8268DC0C;
	sub_8268D3C8(ctx, base);
	// b 0x8268dd7c
	goto loc_8268DD7C;
loc_8268DC10:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268dc20
	if (ctx.cr0.eq) goto loc_8268DC20;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8268dc2c
	goto loc_8268DC2C;
loc_8268DC20:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,6,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3F;
	// lbzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
loc_8268DC2C:
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8268dc40
	if (!ctx.cr6.eq) goto loc_8268DC40;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r6,r10,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// b 0x8268dc4c
	goto loc_8268DC4C;
loc_8268DC40:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r6,r10,2,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
loc_8268DC4C:
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// rlwinm r9,r7,8,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0x1;
	// stb r24,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r24.u8);
	// clrlwi r5,r4,24
	ctx.r5.u64 = ctx.r4.u32 & 0xFF;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// rlwinm r8,r8,25,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 25) & 0x1;
	// rlwinm r7,r7,3,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0x1;
	// rlwinm r4,r4,3,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0x1;
	// bl 0x8268d0f8
	ctx.lr = 0x8268DC80;
	sub_8268D0F8(ctx, base);
	// b 0x8268dd7c
	goto loc_8268DD7C;
loc_8268DC84:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bne cr6,0x8268dd7c
	if (!ctx.cr6.eq) goto loc_8268DD7C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r11,r11,2,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// beq 0x8268dcc8
	if (ctx.cr0.eq) goto loc_8268DCC8;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r10,2,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3;
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// rlwinm r10,r10,1,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x2;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8268dcc8
	if (!ctx.cr6.eq) goto loc_8268DCC8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// b 0x8268dcd4
	goto loc_8268DCD4;
loc_8268DCC8:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r6,r11,2,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
loc_8268DCD4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r5,r11,6,26,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3F;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r8,r11,25,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	// stb r25,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r25.u8);
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// rlwinm r9,r7,8,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0x1;
	// rlwinm r7,r7,3,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0x1;
	// lbzx r11,r5,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r28.u32);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8268d0f8
	ctx.lr = 0x8268DD10;
	sub_8268D0F8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8268fc90
	ctx.lr = 0x8268DD1C;
	sub_8268FC90(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,6,24,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xC0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwimi r7,r8,30,4,4
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 30) & 0x8000000) | (ctx.r7.u64 & 0xFFFFFFFFF7FFFFFF);
	// rlwimi r9,r7,6,30,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r7.u32, 6) & 0x3) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFC);
	// clrlwi r5,r9,26
	ctx.r5.u64 = ctx.r9.u32 & 0x3F;
	// beq 0x8268dd50
	if (ctx.cr0.eq) goto loc_8268DD50;
	// ori r5,r5,128
	ctx.r5.u64 = ctx.r5.u64 | 128;
loc_8268DD50:
	// lbz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r25,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r25.u8);
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8268d0f8
	ctx.lr = 0x8268DD7C;
	sub_8268D0F8(ctx, base);
loc_8268DD7C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268DD84"))) PPC_WEAK_FUNC(sub_8268DD84);
PPC_FUNC_IMPL(__imp__sub_8268DD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268DD88"))) PPC_WEAK_FUNC(sub_8268DD88);
PPC_FUNC_IMPL(__imp__sub_8268DD88) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-32224
	ctx.r4.s64 = ctx.r11.s64 + -32224;
	// bl 0x8268fc90
	ctx.lr = 0x8268DDA8;
	sub_8268FC90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268f9c0
	ctx.lr = 0x8268DDB0;
	sub_8268F9C0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268ddcc
	if (ctx.cr0.eq) goto loc_8268DDCC;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,15260
	ctx.r4.s64 = ctx.r11.s64 + 15260;
	// bl 0x8268fc90
	ctx.lr = 0x8268DDCC;
	sub_8268FC90(ctx, base);
loc_8268DDCC:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,14108
	ctx.r4.s64 = ctx.r11.s64 + 14108;
	// bl 0x8268fc90
	ctx.lr = 0x8268DDDC;
	sub_8268FC90(ctx, base);
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

__attribute__((alias("__imp__sub_8268DDF0"))) PPC_WEAK_FUNC(sub_8268DDF0);
PPC_FUNC_IMPL(__imp__sub_8268DDF0) {
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
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// addi r10,r10,-30212
	ctx.r10.s64 = ctx.r10.s64 + -30212;
	// addi r9,r9,-30204
	ctx.r9.s64 = ctx.r9.s64 + -30204;
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// bne 0x8268de28
	if (!ctx.cr0.eq) goto loc_8268DE28;
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8268de44
	if (ctx.cr6.eq) goto loc_8268DE44;
loc_8268DE28:
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r9,14120
	ctx.r4.s64 = ctx.r9.s64 + 14120;
	// lwzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x8268fc90
	ctx.lr = 0x8268DE44;
	sub_8268FC90(ctx, base);
loc_8268DE44:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268DE54"))) PPC_WEAK_FUNC(sub_8268DE54);
PPC_FUNC_IMPL(__imp__sub_8268DE54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268DE58"))) PPC_WEAK_FUNC(sub_8268DE58);
PPC_FUNC_IMPL(__imp__sub_8268DE58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x8268DE60;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8268deb4
	if (!ctx.cr6.eq) goto loc_8268DEB4;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268dea4
	if (ctx.cr0.eq) goto loc_8268DEA4;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,15172
	ctx.r4.s64 = ctx.r11.s64 + 15172;
	// b 0x8268deac
	goto loc_8268DEAC;
loc_8268DEA4:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,15180
	ctx.r4.s64 = ctx.r11.s64 + 15180;
loc_8268DEAC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fc90
	ctx.lr = 0x8268DEB4;
	sub_8268FC90(ctx, base);
loc_8268DEB4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// clrlwi r5,r11,27
	ctx.r5.u64 = ctx.r11.u32 & 0x1F;
	// bne cr6,0x8268e6fc
	if (!ctx.cr6.eq) goto loc_8268E6FC;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8268e718
	if (ctx.cr6.eq) goto loc_8268E718;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x8268df00
	if (ctx.cr6.eq) goto loc_8268DF00;
	// cmpwi cr6,r5,15
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 15, ctx.xer);
	// ble cr6,0x8268def4
	if (!ctx.cr6.gt) goto loc_8268DEF4;
	// cmpwi cr6,r5,19
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 19, ctx.xer);
	// ble cr6,0x8268df00
	if (!ctx.cr6.gt) goto loc_8268DF00;
	// cmpwi cr6,r5,23
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 23, ctx.xer);
	// ble cr6,0x8268def4
	if (!ctx.cr6.gt) goto loc_8268DEF4;
	// cmpwi cr6,r5,26
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 26, ctx.xer);
	// ble cr6,0x8268df00
	if (!ctx.cr6.gt) goto loc_8268DF00;
loc_8268DEF4:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,14700
	ctx.r4.s64 = ctx.r11.s64 + 14700;
	// b 0x8268e70c
	goto loc_8268E70C;
loc_8268DF00:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// cmplwi cr6,r5,19
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 19, ctx.xer);
	// addi r4,r11,14372
	ctx.r4.s64 = ctx.r11.s64 + 14372;
	// bgt cr6,0x8268df7c
	if (ctx.cr6.gt) goto loc_8268DF7C;
	// beq cr6,0x8268df70
	if (ctx.cr6.eq) goto loc_8268DF70;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// beq cr6,0x8268df58
	if (ctx.cr6.eq) goto loc_8268DF58;
	// cmplwi cr6,r5,16
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 16, ctx.xer);
	// beq cr6,0x8268df4c
	if (ctx.cr6.eq) goto loc_8268DF4C;
	// cmplwi cr6,r5,17
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 17, ctx.xer);
	// beq cr6,0x8268df40
	if (ctx.cr6.eq) goto loc_8268DF40;
	// cmplwi cr6,r5,18
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 18, ctx.xer);
	// bne cr6,0x8268dfb4
	if (!ctx.cr6.eq) goto loc_8268DFB4;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,14388
	ctx.r4.s64 = ctx.r11.s64 + 14388;
	// b 0x8268dfb4
	goto loc_8268DFB4;
loc_8268DF40:
	// lis r10,-31966
	ctx.r10.s64 = -2094923776;
	// addi r10,r10,-25520
	ctx.r10.s64 = ctx.r10.s64 + -25520;
	// b 0x8268df60
	goto loc_8268DF60;
loc_8268DF4C:
	// lis r10,-31966
	ctx.r10.s64 = -2094923776;
	// addi r10,r10,-25536
	ctx.r10.s64 = ctx.r10.s64 + -25536;
	// b 0x8268df60
	goto loc_8268DF60;
loc_8268DF58:
	// lis r10,-31966
	ctx.r10.s64 = -2094923776;
	// addi r10,r10,-25552
	ctx.r10.s64 = ctx.r10.s64 + -25552;
loc_8268DF60:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r11,r11,20,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xC;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x8268dfb4
	goto loc_8268DFB4;
loc_8268DF70:
	// lis r10,-31966
	ctx.r10.s64 = -2094923776;
	// addi r10,r10,-25504
	ctx.r10.s64 = ctx.r10.s64 + -25504;
	// b 0x8268df60
	goto loc_8268DF60;
loc_8268DF7C:
	// cmplwi cr6,r5,24
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 24, ctx.xer);
	// beq cr6,0x8268dfac
	if (ctx.cr6.eq) goto loc_8268DFAC;
	// cmplwi cr6,r5,25
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 25, ctx.xer);
	// beq cr6,0x8268dfa0
	if (ctx.cr6.eq) goto loc_8268DFA0;
	// cmplwi cr6,r5,26
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 26, ctx.xer);
	// bne cr6,0x8268dfb4
	if (!ctx.cr6.eq) goto loc_8268DFB4;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,14432
	ctx.r4.s64 = ctx.r11.s64 + 14432;
	// b 0x8268dfb4
	goto loc_8268DFB4;
loc_8268DFA0:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,14416
	ctx.r4.s64 = ctx.r11.s64 + 14416;
	// b 0x8268dfb4
	goto loc_8268DFB4;
loc_8268DFAC:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,14404
	ctx.r4.s64 = ctx.r11.s64 + 14404;
loc_8268DFB4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fdf0
	ctx.lr = 0x8268DFC0;
	sub_8268FDF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4404
	ctx.r4.s64 = ctx.r11.s64 + 4404;
	// bl 0x8268fc90
	ctx.lr = 0x8268DFD0;
	sub_8268FC90(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r30,r11,13912
	ctx.r30.s64 = ctx.r11.s64 + 13912;
	// addi r28,r10,-8064
	ctx.r28.s64 = ctx.r10.s64 + -8064;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r27,r9,-19068
	ctx.r27.s64 = ctx.r9.s64 + -19068;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r10,19
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 19, ctx.xer);
	// bgt cr6,0x8268e0dc
	if (ctx.cr6.gt) goto loc_8268E0DC;
	// rlwinm. r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r5,r11,20,26,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x3F;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x8268e014
	if (ctx.cr0.eq) goto loc_8268E014;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,14092
	ctx.r4.s64 = ctx.r11.s64 + 14092;
	// b 0x8268e01c
	goto loc_8268E01C;
loc_8268E014:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,14104
	ctx.r4.s64 = ctx.r11.s64 + 14104;
loc_8268E01C:
	// bl 0x8268fc90
	ctx.lr = 0x8268E020;
	sub_8268FC90(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// clrlwi. r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8268e050
	if (!ctx.cr0.eq) goto loc_8268E050;
	// rlwinm r10,r11,0,26,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x38;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bne cr6,0x8268e050
	if (!ctx.cr6.eq) goto loc_8268E050;
	// rlwinm r10,r11,0,23,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C0;
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// bne cr6,0x8268e050
	if (!ctx.cr6.eq) goto loc_8268E050;
	// rlwinm r11,r11,0,20,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE00;
	// cmplwi cr6,r11,1536
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1536, ctx.xer);
	// beq cr6,0x8268e0cc
	if (ctx.cr6.eq) goto loc_8268E0CC;
loc_8268E050:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fc90
	ctx.lr = 0x8268E05C;
	sub_8268FC90(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x8268fc90
	ctx.lr = 0x8268E078;
	sub_8268FC90(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r11,r11,29,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x8268fc90
	ctx.lr = 0x8268E094;
	sub_8268FC90(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r11,r11,26,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x8268fc90
	ctx.lr = 0x8268E0B0;
	sub_8268FC90(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r11,r11,23,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x8268fc90
	ctx.lr = 0x8268E0CC;
	sub_8268FC90(ctx, base);
loc_8268E0CC:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-32224
	ctx.r4.s64 = ctx.r11.s64 + -32224;
	// bl 0x8268fc90
	ctx.lr = 0x8268E0DC;
	sub_8268FC90(ctx, base);
loc_8268E0DC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r5,r11,27,25,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x40;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// rlwinm r11,r11,27,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3F;
	// stb r10,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r10.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// or r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 | ctx.r11.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268d0f8
	ctx.lr = 0x8268E118;
	sub_8268D0F8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fc90
	ctx.lr = 0x8268E124;
	sub_8268FC90(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x8268e184
	if (ctx.cr6.eq) goto loc_8268E184;
	// rlwinm r11,r11,6,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3;
	// cmplwi cr6,r10,18
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 18, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// beq cr6,0x8268e1cc
	if (ctx.cr6.eq) goto loc_8268E1CC;
	// cmplwi cr6,r10,24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 24, ctx.xer);
	// beq cr6,0x8268e1f0
	if (ctx.cr6.eq) goto loc_8268E1F0;
loc_8268E158:
	// bl 0x8268fc90
	ctx.lr = 0x8268E15C;
	sub_8268FC90(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r11,r11,4,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x8268fc90
	ctx.lr = 0x8268E178;
	sub_8268FC90(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,2,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	// b 0x8268e1e0
	goto loc_8268E1E0;
loc_8268E184:
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r10,r10,18,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x3;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x8268e1dc
	if (ctx.cr6.lt) goto loc_8268E1DC;
	// beq cr6,0x8268e1b8
	if (ctx.cr6.eq) goto loc_8268E1B8;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bge cr6,0x8268e1f4
	if (!ctx.cr6.lt) goto loc_8268E1F4;
	// rlwinm r11,r11,6,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// b 0x8268e158
	goto loc_8268E158;
loc_8268E1B8:
	// rlwinm r11,r11,6,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
loc_8268E1CC:
	// bl 0x8268fc90
	ctx.lr = 0x8268E1D0;
	sub_8268FC90(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,4,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x3;
	// b 0x8268e1e0
	goto loc_8268E1E0;
loc_8268E1DC:
	// rlwinm r11,r11,6,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3;
loc_8268E1E0:
	// lbzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
loc_8268E1F0:
	// bl 0x8268fc90
	ctx.lr = 0x8268E1F4;
	sub_8268FC90(ctx, base);
loc_8268E1F4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r10,19
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 19, ctx.xer);
	// bgt cr6,0x8268e218
	if (ctx.cr6.gt) goto loc_8268E218;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// rlwinm r5,r11,12,27,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1F;
	// addi r4,r10,14448
	ctx.r4.s64 = ctx.r10.s64 + 14448;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fc90
	ctx.lr = 0x8268E218;
	sub_8268FC90(ctx, base);
loc_8268E218:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r10,14456
	ctx.r4.s64 = ctx.r10.s64 + 14456;
	// rlwinm r5,r11,13,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268ddf0
	ctx.lr = 0x8268E234;
	sub_8268DDF0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r27,r11,14260
	ctx.r27.s64 = ctx.r11.s64 + 14260;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// lbzx r10,r10,r27
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r27.u32);
	// andi. r10,r10,23
	ctx.r10.u64 = ctx.r10.u64 & 23;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8268e26c
	if (ctx.cr0.eq) goto loc_8268E26C;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,14472
	ctx.r4.s64 = ctx.r10.s64 + 14472;
	// rlwinm r5,r11,7,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268ddf0
	ctx.lr = 0x8268E26C;
	sub_8268DDF0(ctx, base);
loc_8268E26C:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// addi r30,r11,14120
	ctx.r30.s64 = ctx.r11.s64 + 14120;
	// lbzx r11,r10,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r27.u32);
	// andi. r11,r11,19
	ctx.r11.u64 = ctx.r11.u64 & 19;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268e2c8
	if (ctx.cr0.eq) goto loc_8268E2C8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm. r9,r11,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r11,r10,20,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x3;
	// bne 0x8268e2a8
	if (!ctx.cr0.eq) goto loc_8268E2A8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8268e2c8
	if (ctx.cr6.eq) goto loc_8268E2C8;
loc_8268E2A8:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r28,400
	ctx.r10.s64 = ctx.r28.s64 + 400;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r9,14500
	ctx.r5.s64 = ctx.r9.s64 + 14500;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x8268fc90
	ctx.lr = 0x8268E2C8;
	sub_8268FC90(ctx, base);
loc_8268E2C8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// lbzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// andi. r11,r11,19
	ctx.r11.u64 = ctx.r11.u64 & 19;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268e31c
	if (ctx.cr0.eq) goto loc_8268E31C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm. r9,r11,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r11,r10,18,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x3;
	// bne 0x8268e2fc
	if (!ctx.cr0.eq) goto loc_8268E2FC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8268e31c
	if (ctx.cr6.eq) goto loc_8268E31C;
loc_8268E2FC:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r28,416
	ctx.r10.s64 = ctx.r28.s64 + 416;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r9,14512
	ctx.r5.s64 = ctx.r9.s64 + 14512;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x8268fc90
	ctx.lr = 0x8268E31C;
	sub_8268FC90(ctx, base);
loc_8268E31C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// lbzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// andi. r11,r11,19
	ctx.r11.u64 = ctx.r11.u64 & 19;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268e370
	if (ctx.cr0.eq) goto loc_8268E370;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lhz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// rlwinm. r9,r11,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r11,r10,30
	ctx.r11.u64 = ctx.r10.u32 & 0x3;
	// bne 0x8268e350
	if (!ctx.cr0.eq) goto loc_8268E350;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8268e370
	if (ctx.cr6.eq) goto loc_8268E370;
loc_8268E350:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r28,432
	ctx.r10.s64 = ctx.r28.s64 + 432;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r9,14524
	ctx.r5.s64 = ctx.r9.s64 + 14524;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x8268fc90
	ctx.lr = 0x8268E370;
	sub_8268FC90(ctx, base);
loc_8268E370:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// lbzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// andi. r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 & 23;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268e3c4
	if (ctx.cr0.eq) goto loc_8268E3C4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm. r9,r11,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r11,r10,14,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x7;
	// bne 0x8268e3a4
	if (!ctx.cr0.eq) goto loc_8268E3A4;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x8268e3c4
	if (ctx.cr6.eq) goto loc_8268E3C4;
loc_8268E3A4:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r28,448
	ctx.r10.s64 = ctx.r28.s64 + 448;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r9,14536
	ctx.r5.s64 = ctx.r9.s64 + 14536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x8268fc90
	ctx.lr = 0x8268E3C4;
	sub_8268FC90(ctx, base);
loc_8268E3C4:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r11,r11,0,16,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC000;
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// blt cr6,0x8268e428
	if (ctx.cr6.lt) goto loc_8268E428;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// lbzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// andi. r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 & 23;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268e428
	if (ctx.cr0.eq) goto loc_8268E428;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// rlwinm. r9,r11,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r11,r10,30
	ctx.r11.u64 = ctx.r10.u32 & 0x3;
	// bne 0x8268e408
	if (!ctx.cr0.eq) goto loc_8268E408;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8268e428
	if (ctx.cr6.eq) goto loc_8268E428;
loc_8268E408:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r28,480
	ctx.r10.s64 = ctx.r28.s64 + 480;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r9,14548
	ctx.r5.s64 = ctx.r9.s64 + 14548;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x8268fc90
	ctx.lr = 0x8268E428;
	sub_8268FC90(ctx, base);
loc_8268E428:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r11,r11,0,16,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC000;
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// blt cr6,0x8268e48c
	if (ctx.cr6.lt) goto loc_8268E48C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// lbzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// andi. r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 & 23;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268e48c
	if (ctx.cr0.eq) goto loc_8268E48C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm. r9,r11,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r11,r10,6,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x3;
	// bne 0x8268e46c
	if (!ctx.cr0.eq) goto loc_8268E46C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8268e48c
	if (ctx.cr6.eq) goto loc_8268E48C;
loc_8268E46C:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r28,496
	ctx.r10.s64 = ctx.r28.s64 + 496;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r9,14564
	ctx.r5.s64 = ctx.r9.s64 + 14564;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x8268fc90
	ctx.lr = 0x8268E48C;
	sub_8268FC90(ctx, base);
loc_8268E48C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// lbzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// andi. r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 & 23;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268e4c0
	if (ctx.cr0.eq) goto loc_8268E4C0;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r10,14580
	ctx.r4.s64 = ctx.r10.s64 + 14580;
	// rlwinm r5,r11,4,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268ddf0
	ctx.lr = 0x8268E4C0;
	sub_8268DDF0(ctx, base);
loc_8268E4C0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// lbzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// andi. r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 & 23;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268e4f4
	if (ctx.cr0.eq) goto loc_8268E4F4;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,14596
	ctx.r4.s64 = ctx.r10.s64 + 14596;
	// rlwinm r5,r11,3,30,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268ddf0
	ctx.lr = 0x8268E4F4;
	sub_8268DDF0(ctx, base);
loc_8268E4F4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// lbzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// clrlwi. r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268e524
	if (ctx.cr0.eq) goto loc_8268E524;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,14612
	ctx.r4.s64 = ctx.r10.s64 + 14612;
	// clrlwi r5,r11,31
	ctx.r5.u64 = ctx.r11.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268ddf0
	ctx.lr = 0x8268E524;
	sub_8268DDF0(ctx, base);
loc_8268E524:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// lbzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// andi. r11,r11,19
	ctx.r11.u64 = ctx.r11.u64 & 19;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268e59c
	if (ctx.cr0.eq) goto loc_8268E59C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8268e554
	if (!ctx.cr0.eq) goto loc_8268E554;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm. r11,r11,0,23,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FC;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268e59c
	if (ctx.cr0.eq) goto loc_8268E59C;
loc_8268E554:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// rlwinm r11,r11,23,0,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0xFF800000;
	// addi r10,r10,27984
	ctx.r10.s64 = ctx.r10.s64 + 27984;
	// srawi r11,r11,25
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 25;
	// addi r4,r9,14636
	ctx.r4.s64 = ctx.r9.s64 + 14636;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,848(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 848);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x8268fc90
	ctx.lr = 0x8268E59C;
	sub_8268FC90(ctx, base);
loc_8268E59C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// lfs f31,31512(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 31512);
	ctx.f31.f64 = double(temp.f32);
	// lbzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// andi. r11,r11,19
	ctx.r11.u64 = ctx.r11.u64 & 19;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268e610
	if (ctx.cr0.eq) goto loc_8268E610;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8268e5d4
	if (!ctx.cr0.eq) goto loc_8268E5D4;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm. r11,r11,0,11,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F0000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268e610
	if (ctx.cr0.eq) goto loc_8268E610;
loc_8268E5D4:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,11,0,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0xFFFFF800;
	// addi r4,r10,14652
	ctx.r4.s64 = ctx.r10.s64 + 14652;
	// srawi r11,r11,27
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 27;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x8268fc90
	ctx.lr = 0x8268E610;
	sub_8268FC90(ctx, base);
loc_8268E610:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r10,r11,0,16,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC000;
	// cmplwi cr6,r10,16384
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16384, ctx.xer);
	// blt cr6,0x8268e684
	if (ctx.cr6.lt) goto loc_8268E684;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// lbzx r10,r10,r27
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r27.u32);
	// andi. r10,r10,19
	ctx.r10.u64 = ctx.r10.u64 & 19;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8268e684
	if (ctx.cr0.eq) goto loc_8268E684;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r10,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8268e64c
	if (!ctx.cr0.eq) goto loc_8268E64C;
	// rlwinm. r10,r11,0,6,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3E00000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8268e684
	if (ctx.cr0.eq) goto loc_8268E684;
loc_8268E64C:
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// srawi r11,r11,27
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 27;
	// addi r4,r10,14668
	ctx.r4.s64 = ctx.r10.s64 + 14668;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x8268fc90
	ctx.lr = 0x8268E684;
	sub_8268FC90(ctx, base);
loc_8268E684:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r10,r11,0,16,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC000;
	// cmplwi cr6,r10,32768
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32768, ctx.xer);
	// blt cr6,0x8268ec48
	if (ctx.cr6.lt) goto loc_8268EC48;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// lbzx r10,r10,r27
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r27.u32);
	// andi. r10,r10,19
	ctx.r10.u64 = ctx.r10.u64 & 19;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8268ec48
	if (ctx.cr0.eq) goto loc_8268EC48;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r10,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8268e6c0
	if (!ctx.cr0.eq) goto loc_8268E6C0;
	// rlwinm. r10,r11,0,1,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7C000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8268ec48
	if (ctx.cr0.eq) goto loc_8268EC48;
loc_8268E6C0:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// srawi r11,r11,27
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 27;
	// addi r4,r10,14684
	ctx.r4.s64 = ctx.r10.s64 + 14684;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x8268fc90
	ctx.lr = 0x8268E6F8;
	sub_8268FC90(ctx, base);
	// b 0x8268ec48
	goto loc_8268EC48;
loc_8268E6FC:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8268e718
	if (ctx.cr6.eq) goto loc_8268E718;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,14340
	ctx.r4.s64 = ctx.r11.s64 + 14340;
loc_8268E70C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fc90
	ctx.lr = 0x8268E714;
	sub_8268FC90(ctx, base);
	// b 0x8268ec48
	goto loc_8268EC48;
loc_8268E718:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r27,0
	ctx.r27.s64 = 0;
	// rlwinm. r11,r11,2,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r27,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r27.u8);
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// bne 0x8268e774
	if (!ctx.cr0.eq) goto loc_8268E774;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8268e774
	if (!ctx.cr0.eq) goto loc_8268E774;
	// lwz r11,8224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8224);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8268e774
	if (ctx.cr6.eq) goto loc_8268E774;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r3,8228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8228);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bctrl 
	ctx.lr = 0x8268E768;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8268e774
	if (!ctx.cr0.eq) goto loc_8268E774;
	// li r26,1
	ctx.r26.s64 = 1;
loc_8268E774:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x8268e788
	if (!ctx.cr6.eq) goto loc_8268E788;
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x8268e78c
	if (ctx.cr0.eq) goto loc_8268E78C;
loc_8268E788:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8268E78C:
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8268e7a4
	if (ctx.cr6.eq) goto loc_8268E7A4;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,14128
	ctx.r4.s64 = ctx.r11.s64 + 14128;
	// b 0x8268e7c0
	goto loc_8268E7C0;
loc_8268E7A4:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268e7b8
	if (ctx.cr0.eq) goto loc_8268E7B8;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,14140
	ctx.r4.s64 = ctx.r11.s64 + 14140;
	// b 0x8268e7c0
	goto loc_8268E7C0;
loc_8268E7B8:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,14148
	ctx.r4.s64 = ctx.r11.s64 + 14148;
loc_8268E7C0:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fdf0
	ctx.lr = 0x8268E7CC;
	sub_8268FDF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4404
	ctx.r4.s64 = ctx.r11.s64 + 4404;
	// bl 0x8268fc90
	ctx.lr = 0x8268E7DC;
	sub_8268FC90(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm. r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r5,r11,20,26,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x3F;
	// beq 0x8268e7fc
	if (ctx.cr0.eq) goto loc_8268E7FC;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,14092
	ctx.r4.s64 = ctx.r11.s64 + 14092;
	// b 0x8268e804
	goto loc_8268E804;
loc_8268E7FC:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,14104
	ctx.r4.s64 = ctx.r11.s64 + 14104;
loc_8268E804:
	// bl 0x8268fc90
	ctx.lr = 0x8268E808;
	sub_8268FC90(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// clrlwi. r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r28,r10,-8064
	ctx.r28.s64 = ctx.r10.s64 + -8064;
	// bne 0x8268e840
	if (!ctx.cr0.eq) goto loc_8268E840;
	// rlwinm r10,r11,0,26,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x38;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bne cr6,0x8268e840
	if (!ctx.cr6.eq) goto loc_8268E840;
	// rlwinm r10,r11,0,23,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C0;
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// bne cr6,0x8268e840
	if (!ctx.cr6.eq) goto loc_8268E840;
	// rlwinm r11,r11,0,20,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE00;
	// cmplwi cr6,r11,1536
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1536, ctx.xer);
	// beq cr6,0x8268e8c8
	if (ctx.cr6.eq) goto loc_8268E8C8;
loc_8268E840:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-19068
	ctx.r4.s64 = ctx.r11.s64 + -19068;
	// bl 0x8268fc90
	ctx.lr = 0x8268E850;
	sub_8268FC90(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r24,r11,13912
	ctx.r24.s64 = ctx.r11.s64 + 13912;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// lbzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x8268fc90
	ctx.lr = 0x8268E874;
	sub_8268FC90(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// rlwinm r11,r11,29,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x8268fc90
	ctx.lr = 0x8268E890;
	sub_8268FC90(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// rlwinm r11,r11,26,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x8268fc90
	ctx.lr = 0x8268E8AC;
	sub_8268FC90(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// rlwinm r11,r11,23,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x8268fc90
	ctx.lr = 0x8268E8C8;
	sub_8268FC90(ctx, base);
loc_8268E8C8:
	// clrlwi. r24,r30,24
	ctx.r24.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne 0x8268e8d8
	if (!ctx.cr0.eq) goto loc_8268E8D8;
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268e944
	if (ctx.cr0.eq) goto loc_8268E944;
loc_8268E8D8:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-32224
	ctx.r4.s64 = ctx.r11.s64 + -32224;
	// bl 0x8268fc90
	ctx.lr = 0x8268E8E8;
	sub_8268FC90(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r27,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r27.u8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r5,r11,27,25,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x40;
	// rlwinm r11,r11,27,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3F;
	// or r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 | ctx.r11.u64;
	// bl 0x8268d0f8
	ctx.lr = 0x8268E924;
	sub_8268D0F8(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,14160
	ctx.r4.s64 = ctx.r11.s64 + 14160;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,2,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	// lbzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x8268fc90
	ctx.lr = 0x8268E944;
	sub_8268FC90(ctx, base);
loc_8268E944:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8268e974
	if (ctx.cr6.eq) goto loc_8268E974;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r9,r11,12,27,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1F;
	// rlwinm r11,r11,7,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x3;
	// mulli r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 * 3;
	// subfic r9,r9,95
	ctx.xer.ca = ctx.r9.u32 <= 95;
	ctx.r9.s64 = 95 - ctx.r9.s64;
	// addi r4,r10,14164
	ctx.r4.s64 = ctx.r10.s64 + 14164;
	// subf r5,r11,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r11.s64;
	// bl 0x8268fc90
	ctx.lr = 0x8268E974;
	sub_8268FC90(ctx, base);
loc_8268E974:
	// clrlwi. r26,r26,24
	ctx.r26.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq 0x8268e9bc
	if (ctx.cr0.eq) goto loc_8268E9BC;
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// addi r10,r28,824
	ctx.r10.s64 = ctx.r28.s64 + 824;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// rlwinm r8,r11,30,2,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,14172
	ctx.r4.s64 = ctx.r9.s64 + 14172;
	// clrlwi r30,r11,28
	ctx.r30.u64 = ctx.r11.u32 & 0xF;
	// lwzx r5,r8,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// bl 0x8268fc90
	ctx.lr = 0x8268E9A0;
	sub_8268FC90(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8268e9bc
	if (ctx.cr6.eq) goto loc_8268E9BC;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,26556
	ctx.r4.s64 = ctx.r11.s64 + 26556;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fc90
	ctx.lr = 0x8268E9BC;
	sub_8268FC90(ctx, base);
loc_8268E9BC:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// addi r30,r11,-30212
	ctx.r30.s64 = ctx.r11.s64 + -30212;
	// addi r27,r10,-30204
	ctx.r27.s64 = ctx.r10.s64 + -30204;
	// bne cr6,0x8268ea54
	if (!ctx.cr6.eq) goto loc_8268EA54;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8268e9e8
	if (!ctx.cr0.eq) goto loc_8268E9E8;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x8268ea10
	if (!ctx.cr6.eq) goto loc_8268EA10;
loc_8268E9E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268dd88
	ctx.lr = 0x8268E9F0;
	sub_8268DD88(ctx, base);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// beq cr6,0x8268ea00
	if (ctx.cr6.eq) goto loc_8268EA00;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_8268EA00:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,14180
	ctx.r4.s64 = ctx.r11.s64 + 14180;
	// bl 0x8268fc90
	ctx.lr = 0x8268EA10;
	sub_8268FC90(ctx, base);
loc_8268EA10:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8268ea28
	if (!ctx.cr0.eq) goto loc_8268EA28;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268ea54
	if (ctx.cr0.eq) goto loc_8268EA54;
loc_8268EA28:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268dd88
	ctx.lr = 0x8268EA30;
	sub_8268DD88(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8268ea44
	if (!ctx.cr0.eq) goto loc_8268EA44;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_8268EA44:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,14200
	ctx.r4.s64 = ctx.r11.s64 + 14200;
	// bl 0x8268fc90
	ctx.lr = 0x8268EA54;
	sub_8268FC90(ctx, base);
loc_8268EA54:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8268ea6c
	if (!ctx.cr0.eq) goto loc_8268EA6C;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm. r11,r11,0,2,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268ea90
	if (ctx.cr0.eq) goto loc_8268EA90;
loc_8268EA6C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268dd88
	ctx.lr = 0x8268EA74;
	sub_8268DD88(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,14216
	ctx.r4.s64 = ctx.r11.s64 + 14216;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r5,r11,26
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FFFFFF) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 26;
	// bl 0x8268fc90
	ctx.lr = 0x8268EA90;
	sub_8268FC90(ctx, base);
loc_8268EA90:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x8268ec48
	if (!ctx.cr6.eq) goto loc_8268EC48;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,15220
	ctx.r4.s64 = ctx.r11.s64 + 15220;
	// bl 0x8268fd98
	ctx.lr = 0x8268EAA8;
	sub_8268FD98(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8268eac0
	if (!ctx.cr0.eq) goto loc_8268EAC0;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm. r11,r11,0,1,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FFFFF00;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268eae4
	if (ctx.cr0.eq) goto loc_8268EAE4;
loc_8268EAC0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268dd88
	ctx.lr = 0x8268EAC8;
	sub_8268DD88(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,14232
	ctx.r4.s64 = ctx.r11.s64 + 14232;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r5,r11,9
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FF) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 9;
	// bl 0x8268fc90
	ctx.lr = 0x8268EAE4;
	sub_8268FC90(ctx, base);
loc_8268EAE4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8268eafc
	if (!ctx.cr0.eq) goto loc_8268EAFC;
	// lhz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// clrlwi. r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268eb24
	if (ctx.cr0.eq) goto loc_8268EB24;
loc_8268EAFC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268dd88
	ctx.lr = 0x8268EB04;
	sub_8268DD88(ctx, base);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// addi r11,r28,528
	ctx.r11.s64 = ctx.r28.s64 + 528;
	// addi r4,r10,14244
	ctx.r4.s64 = ctx.r10.s64 + 14244;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// rlwinm r10,r10,2,24,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFC;
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x8268fc90
	ctx.lr = 0x8268EB24;
	sub_8268FC90(ctx, base);
loc_8268EB24:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8268eb60
	if (ctx.cr6.eq) goto loc_8268EB60;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8268eb44
	if (!ctx.cr0.eq) goto loc_8268EB44;
	// lbz r11,11(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 11);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8268eb60
	if (ctx.cr0.eq) goto loc_8268EB60;
loc_8268EB44:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268dd88
	ctx.lr = 0x8268EB4C;
	sub_8268DD88(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r5,11(r29)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r29.u32 + 11);
	// addi r4,r11,14260
	ctx.r4.s64 = ctx.r11.s64 + 14260;
	// bl 0x8268fc90
	ctx.lr = 0x8268EB60;
	sub_8268FC90(ctx, base);
loc_8268EB60:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8268eb78
	if (!ctx.cr0.eq) goto loc_8268EB78;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268eba4
	if (ctx.cr0.eq) goto loc_8268EBA4;
loc_8268EB78:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268dd88
	ctx.lr = 0x8268EB80;
	sub_8268DD88(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8268eb94
	if (!ctx.cr0.eq) goto loc_8268EB94;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_8268EB94:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,14272
	ctx.r4.s64 = ctx.r11.s64 + 14272;
	// bl 0x8268fc90
	ctx.lr = 0x8268EBA4;
	sub_8268FC90(ctx, base);
loc_8268EBA4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8268ebbc
	if (!ctx.cr0.eq) goto loc_8268EBBC;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268ebf4
	if (ctx.cr0.eq) goto loc_8268EBF4;
loc_8268EBBC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268dd88
	ctx.lr = 0x8268EBC4;
	sub_8268DD88(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268ebdc
	if (ctx.cr0.eq) goto loc_8268EBDC;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r5,r11,14284
	ctx.r5.s64 = ctx.r11.s64 + 14284;
	// b 0x8268ebe4
	goto loc_8268EBE4;
loc_8268EBDC:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r5,r11,14292
	ctx.r5.s64 = ctx.r11.s64 + 14292;
loc_8268EBE4:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,14304
	ctx.r4.s64 = ctx.r11.s64 + 14304;
	// bl 0x8268fc90
	ctx.lr = 0x8268EBF4;
	sub_8268FC90(ctx, base);
loc_8268EBF4:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8268ec38
	if (ctx.cr6.eq) goto loc_8268EC38;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8268ec14
	if (!ctx.cr0.eq) goto loc_8268EC14;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm. r11,r11,0,2,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x38000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268ec38
	if (ctx.cr0.eq) goto loc_8268EC38;
loc_8268EC14:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268dd88
	ctx.lr = 0x8268EC1C;
	sub_8268DD88(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,14320
	ctx.r4.s64 = ctx.r11.s64 + 14320;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,5,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x7;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x8268fc90
	ctx.lr = 0x8268EC38;
	sub_8268FC90(ctx, base);
loc_8268EC38:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,15204
	ctx.r4.s64 = ctx.r11.s64 + 15204;
	// bl 0x8268fd98
	ctx.lr = 0x8268EC48;
	sub_8268FD98(ctx, base);
loc_8268EC48:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268EC54"))) PPC_WEAK_FUNC(sub_8268EC54);
PPC_FUNC_IMPL(__imp__sub_8268EC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268EC58"))) PPC_WEAK_FUNC(sub_8268EC58);
PPC_FUNC_IMPL(__imp__sub_8268EC58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x8268ec70
	goto loc_8268EC70;
loc_8268EC70:
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x8268EC78;
	__savegprlr_21(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// clrlwi. r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268f52c
	if (ctx.cr0.eq) {
		sub_8268F52C(ctx, base);
		return;
	}
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lbz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// rlwinm r30,r11,20,28,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8268ed5c
	if (ctx.cr0.eq) goto loc_8268ED5C;
	// bl 0x8268fa28
	ctx.lr = 0x8268ECAC;
	sub_8268FA28(ctx, base);
	// rlwinm r11,r22,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r22,27
	ctx.r10.u64 = ctx.r22.u32 & 0x1F;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268ed18
	if (ctx.cr0.eq) goto loc_8268ED18;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268ecec
	if (ctx.cr0.eq) goto loc_8268ECEC;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,14728
	ctx.r4.s64 = ctx.r11.s64 + 14728;
	// bl 0x8268fc90
	ctx.lr = 0x8268ECEC;
	sub_8268FC90(ctx, base);
loc_8268ECEC:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,14736
	ctx.r4.s64 = ctx.r11.s64 + 14736;
	// bl 0x8268fe60
	ctx.lr = 0x8268ECFC;
	sub_8268FE60(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r4,r11,14744
	ctx.r4.s64 = ctx.r11.s64 + 14744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fc90
	ctx.lr = 0x8268ED10;
	sub_8268FC90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268f9c0
	ctx.lr = 0x8268ED18;
	sub_8268F9C0(ctx, base);
loc_8268ED18:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8268ed2c
	if (!ctx.cr0.eq) goto loc_8268ED2C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8268ed5c
	if (ctx.cr6.eq) goto loc_8268ED5C;
loc_8268ED2C:
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268ed5c
	if (ctx.cr0.eq) goto loc_8268ED5C;
	// srawi r11,r22,1
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r22.s32 >> 1;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r9,r22,1
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r22.s32 >> 1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r10,15228
	ctx.r4.s64 = ctx.r10.s64 + 15228;
	// addze r5,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r5.s64 = temp.s64;
	// subf r6,r11,r22
	ctx.r6.s64 = ctx.r22.s64 - ctx.r11.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fc90
	ctx.lr = 0x8268ED5C;
	sub_8268FC90(ctx, base);
loc_8268ED5C:
	// cmplwi cr6,r30,15
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 15, ctx.xer);
	// bgt cr6,0x8268f4e8
	if (ctx.cr6.gt) {
		sub_8268F4E8(ctx, base);
		return;
	}
	// lis r12,-32231
	ctx.r12.s64 = -2112290816;
	// rlwinm r0,r30,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,25688
	ctx.r12.s64 = ctx.r12.s64 + 25688;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32151
	ctx.r12.s64 = -2107047936;
	// addi r12,r12,-4724
	ctx.r12.s64 = ctx.r12.s64 + -4724;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r30.u64) {
	case 0:
		// ERROR: 0x8268ED8C
		return;
	case 1:
		// ERROR: 0x8268EDC8
		return;
	case 2:
		// ERROR: 0x8268EE14
		return;
	case 3:
		// ERROR: 0x8268EE3C
		return;
	case 4:
		// ERROR: 0x8268EEC0
		return;
	case 5:
		// ERROR: 0x8268EEE8
		return;
	case 6:
		// ERROR: 0x8268EF18
		return;
	case 7:
		// ERROR: 0x8268EF48
		return;
	case 8:
		// ERROR: 0x8268F014
		return;
	case 9:
		// ERROR: 0x8268F0D0
		return;
	case 10:
		// ERROR: 0x8268F1D8
		return;
	case 11:
		// ERROR: 0x8268F200
		return;
	case 12:
		// ERROR: 0x8268F374
		return;
	case 13:
		// ERROR: 0x8268F420
		return;
	case 14:
		// ERROR: 0x8268F498
		return;
	case 15:
		// ERROR: 0x8268F4C0
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_8268EC70"))) PPC_WEAK_FUNC(sub_8268EC70);
PPC_FUNC_IMPL(__imp__sub_8268EC70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x8268EC78;
	__savegprlr_21(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// clrlwi. r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268f52c
	if (ctx.cr0.eq) goto loc_8268F52C;
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lbz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// rlwinm r30,r11,20,28,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8268ed5c
	if (ctx.cr0.eq) goto loc_8268ED5C;
	// bl 0x8268fa28
	ctx.lr = 0x8268ECAC;
	sub_8268FA28(ctx, base);
	// rlwinm r11,r22,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r22,27
	ctx.r10.u64 = ctx.r22.u32 & 0x1F;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268ed18
	if (ctx.cr0.eq) goto loc_8268ED18;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268ecec
	if (ctx.cr0.eq) goto loc_8268ECEC;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,14728
	ctx.r4.s64 = ctx.r11.s64 + 14728;
	// bl 0x8268fc90
	ctx.lr = 0x8268ECEC;
	sub_8268FC90(ctx, base);
loc_8268ECEC:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,14736
	ctx.r4.s64 = ctx.r11.s64 + 14736;
	// bl 0x8268fe60
	ctx.lr = 0x8268ECFC;
	sub_8268FE60(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r4,r11,14744
	ctx.r4.s64 = ctx.r11.s64 + 14744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fc90
	ctx.lr = 0x8268ED10;
	sub_8268FC90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268f9c0
	ctx.lr = 0x8268ED18;
	sub_8268F9C0(ctx, base);
loc_8268ED18:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8268ed2c
	if (!ctx.cr0.eq) goto loc_8268ED2C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8268ed5c
	if (ctx.cr6.eq) goto loc_8268ED5C;
loc_8268ED2C:
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268ed5c
	if (ctx.cr0.eq) goto loc_8268ED5C;
	// srawi r11,r22,1
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r22.s32 >> 1;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r9,r22,1
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r22.s32 >> 1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r10,15228
	ctx.r4.s64 = ctx.r10.s64 + 15228;
	// addze r5,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r5.s64 = temp.s64;
	// subf r6,r11,r22
	ctx.r6.s64 = ctx.r22.s64 - ctx.r11.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fc90
	ctx.lr = 0x8268ED5C;
	sub_8268FC90(ctx, base);
loc_8268ED5C:
	// cmplwi cr6,r30,15
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 15, ctx.xer);
	// bgt cr6,0x8268f4e8
	if (ctx.cr6.gt) goto loc_8268F4E8;
	// lis r12,-32231
	ctx.r12.s64 = -2112290816;
	// rlwinm r0,r30,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,25688
	ctx.r12.s64 = ctx.r12.s64 + 25688;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32151
	ctx.r12.s64 = -2107047936;
	// addi r12,r12,-4724
	ctx.r12.s64 = ctx.r12.s64 + -4724;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r30.u64) {
	case 0:
		goto loc_8268ED8C;
	case 1:
		goto loc_8268EDC8;
	case 2:
		goto loc_8268EE14;
	case 3:
		goto loc_8268EE3C;
	case 4:
		goto loc_8268EEC0;
	case 5:
		goto loc_8268EEE8;
	case 6:
		goto loc_8268EF18;
	case 7:
		goto loc_8268EF48;
	case 8:
		goto loc_8268F014;
	case 9:
		goto loc_8268F0D0;
	case 10:
		goto loc_8268F1D8;
	case 11:
		goto loc_8268F200;
	case 12:
		goto loc_8268F374;
	case 13:
		goto loc_8268F420;
	case 14:
		goto loc_8268F498;
	case 15:
		goto loc_8268F4C0;
	default:
		__builtin_unreachable();
	}
loc_8268ED8C:
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8268f84c
	if (ctx.cr0.eq) goto loc_8268F84C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268f84c
	if (ctx.cr0.eq) goto loc_8268F84C;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,14760
	ctx.r4.s64 = ctx.r11.s64 + 14760;
	// bl 0x8268fc90
	ctx.lr = 0x8268EDB4;
	sub_8268FC90(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,14752
	ctx.r4.s64 = ctx.r11.s64 + 14752;
loc_8268EDBC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fe60
	ctx.lr = 0x8268EDC4;
	sub_8268FE60(ctx, base);
	// b 0x8268f84c
	goto loc_8268F84C;
loc_8268EDC8:
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8268f84c
	if (ctx.cr0.eq) goto loc_8268F84C;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,14760
	ctx.r4.s64 = ctx.r11.s64 + 14760;
loc_8268EDDC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fc90
	ctx.lr = 0x8268EDE4;
	sub_8268FC90(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,14768
	ctx.r4.s64 = ctx.r11.s64 + 14768;
loc_8268EDEC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fe60
	ctx.lr = 0x8268EDF4;
	sub_8268FE60(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r5,r11,23,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	// rlwinm r4,r10,17,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0x1;
loc_8268EE08:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fce8
	ctx.lr = 0x8268EE10;
	sub_8268FCE8(ctx, base);
	// b 0x8268f84c
	goto loc_8268F84C;
loc_8268EE14:
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8268f84c
	if (ctx.cr0.eq) goto loc_8268F84C;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,14760
	ctx.r4.s64 = ctx.r11.s64 + 14760;
loc_8268EE28:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fc90
	ctx.lr = 0x8268EE30;
	sub_8268FC90(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,14776
	ctx.r4.s64 = ctx.r11.s64 + 14776;
	// b 0x8268edec
	goto loc_8268EDEC;
loc_8268EE3C:
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8268f84c
	if (ctx.cr0.eq) goto loc_8268F84C;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,14760
	ctx.r4.s64 = ctx.r11.s64 + 14760;
	// bl 0x8268fc90
	ctx.lr = 0x8268EE58;
	sub_8268FC90(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,14784
	ctx.r4.s64 = ctx.r11.s64 + 14784;
loc_8268EE60:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fe60
	ctx.lr = 0x8268EE68;
	sub_8268FE60(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4404
	ctx.r4.s64 = ctx.r11.s64 + 4404;
	// bl 0x8268fc90
	ctx.lr = 0x8268EE78;
	sub_8268FC90(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8268ee94
	if (!ctx.cr0.eq) goto loc_8268EE94;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,14792
	ctx.r4.s64 = ctx.r11.s64 + 14792;
	// bl 0x8268fc90
	ctx.lr = 0x8268EE94;
	sub_8268FC90(ctx, base);
loc_8268EE94:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,14796
	ctx.r4.s64 = ctx.r10.s64 + 14796;
	// rlwinm r5,r11,30,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xFF;
	// bl 0x8268fc90
	ctx.lr = 0x8268EEAC;
	sub_8268FC90(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
loc_8268EEB0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwinm r4,r11,17,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1;
	// b 0x8268ee08
	goto loc_8268EE08;
loc_8268EEC0:
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8268f84c
	if (ctx.cr0.eq) goto loc_8268F84C;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,14760
	ctx.r4.s64 = ctx.r11.s64 + 14760;
	// bl 0x8268fc90
	ctx.lr = 0x8268EEDC;
	sub_8268FC90(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,14800
	ctx.r4.s64 = ctx.r11.s64 + 14800;
	// b 0x8268ee60
	goto loc_8268EE60;
loc_8268EEE8:
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8268f84c
	if (ctx.cr0.eq) goto loc_8268F84C;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268ef0c
	if (ctx.cr0.eq) goto loc_8268EF0C;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,15172
	ctx.r4.s64 = ctx.r11.s64 + 15172;
	// b 0x8268eddc
	goto loc_8268EDDC;
loc_8268EF0C:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,15180
	ctx.r4.s64 = ctx.r11.s64 + 15180;
	// b 0x8268eddc
	goto loc_8268EDDC;
loc_8268EF18:
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8268f84c
	if (ctx.cr0.eq) goto loc_8268F84C;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268ef3c
	if (ctx.cr0.eq) goto loc_8268EF3C;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,15172
	ctx.r4.s64 = ctx.r11.s64 + 15172;
	// b 0x8268ee28
	goto loc_8268EE28;
loc_8268EF3C:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,15180
	ctx.r4.s64 = ctx.r11.s64 + 15180;
	// b 0x8268ee28
	goto loc_8268EE28;
loc_8268EF48:
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8268f84c
	if (ctx.cr0.eq) goto loc_8268F84C;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,14760
	ctx.r4.s64 = ctx.r11.s64 + 14760;
	// bl 0x8268fc90
	ctx.lr = 0x8268EF64;
	sub_8268FC90(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,14808
	ctx.r4.s64 = ctx.r11.s64 + 14808;
	// bl 0x8268fe60
	ctx.lr = 0x8268EF74;
	sub_8268FE60(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4404
	ctx.r4.s64 = ctx.r11.s64 + 4404;
	// bl 0x8268fc90
	ctx.lr = 0x8268EF84;
	sub_8268FC90(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,14816
	ctx.r4.s64 = ctx.r11.s64 + 14816;
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// clrlwi r5,r11,27
	ctx.r5.u64 = ctx.r11.u32 & 0x1F;
	// bl 0x8268fc90
	ctx.lr = 0x8268EF9C;
	sub_8268FC90(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,13908
	ctx.r4.s64 = ctx.r11.s64 + 13908;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// clrlwi r5,r11,19
	ctx.r5.u64 = ctx.r11.u32 & 0x1FFF;
	// bl 0x8268fc90
	ctx.lr = 0x8268EFB4;
	sub_8268FC90(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm. r9,r11,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r11,r10,19,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x1;
	// bne 0x8268efd0
	if (!ctx.cr0.eq) goto loc_8268EFD0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8268effc
	if (ctx.cr6.eq) goto loc_8268EFFC;
loc_8268EFD0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8268efe4
	if (ctx.cr6.eq) goto loc_8268EFE4;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,-30204
	ctx.r5.s64 = ctx.r11.s64 + -30204;
	// b 0x8268efec
	goto loc_8268EFEC;
loc_8268EFE4:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,-30212
	ctx.r5.s64 = ctx.r11.s64 + -30212;
loc_8268EFEC:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,14824
	ctx.r4.s64 = ctx.r11.s64 + 14824;
	// bl 0x8268fc90
	ctx.lr = 0x8268EFFC;
	sub_8268FC90(ctx, base);
loc_8268EFFC:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm. r5,r11,21,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x8268f84c
	if (ctx.cr0.eq) goto loc_8268F84C;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,14836
	ctx.r4.s64 = ctx.r11.s64 + 14836;
	// b 0x8268f520
	goto loc_8268F520;
loc_8268F014:
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8268f84c
	if (ctx.cr0.eq) goto loc_8268F84C;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268f050
	if (ctx.cr0.eq) goto loc_8268F050;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268f044
	if (ctx.cr0.eq) goto loc_8268F044;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,15172
	ctx.r4.s64 = ctx.r11.s64 + 15172;
	// b 0x8268f058
	goto loc_8268F058;
loc_8268F044:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,15180
	ctx.r4.s64 = ctx.r11.s64 + 15180;
	// b 0x8268f058
	goto loc_8268F058;
loc_8268F050:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,14760
	ctx.r4.s64 = ctx.r11.s64 + 14760;
loc_8268F058:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fc90
	ctx.lr = 0x8268F060;
	sub_8268FC90(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,14856
	ctx.r4.s64 = ctx.r11.s64 + 14856;
	// bl 0x8268fe60
	ctx.lr = 0x8268F070;
	sub_8268FE60(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4404
	ctx.r4.s64 = ctx.r11.s64 + 4404;
	// bl 0x8268fc90
	ctx.lr = 0x8268F080;
	sub_8268FC90(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,14816
	ctx.r4.s64 = ctx.r11.s64 + 14816;
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// clrlwi r5,r11,27
	ctx.r5.u64 = ctx.r11.u32 & 0x1F;
	// bl 0x8268fc90
	ctx.lr = 0x8268F098;
	sub_8268FC90(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,13908
	ctx.r4.s64 = ctx.r11.s64 + 13908;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// clrlwi r5,r11,19
	ctx.r5.u64 = ctx.r11.u32 & 0x1FFF;
	// bl 0x8268fc90
	ctx.lr = 0x8268F0B0;
	sub_8268FC90(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268f84c
	if (ctx.cr0.eq) goto loc_8268F84C;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,14864
	ctx.r4.s64 = ctx.r11.s64 + 14864;
loc_8268F0C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fc90
	ctx.lr = 0x8268F0CC;
	sub_8268FC90(ctx, base);
	// b 0x8268f84c
	goto loc_8268F84C;
loc_8268F0D0:
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8268f84c
	if (ctx.cr0.eq) goto loc_8268F84C;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm. r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268f114
	if (ctx.cr0.eq) goto loc_8268F114;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r30,1
	ctx.r30.s64 = 1;
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268f108
	if (ctx.cr0.eq) goto loc_8268F108;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,15172
	ctx.r4.s64 = ctx.r11.s64 + 15172;
	// b 0x8268f11c
	goto loc_8268F11C;
loc_8268F108:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,15180
	ctx.r4.s64 = ctx.r11.s64 + 15180;
	// b 0x8268f11c
	goto loc_8268F11C;
loc_8268F114:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,14760
	ctx.r4.s64 = ctx.r11.s64 + 14760;
loc_8268F11C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fc90
	ctx.lr = 0x8268F124;
	sub_8268FC90(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8268f1a4
	if (!ctx.cr0.eq) goto loc_8268F1A4;
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8268f1a4
	if (!ctx.cr0.eq) goto loc_8268F1A4;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,14892
	ctx.r4.s64 = ctx.r11.s64 + 14892;
	// bl 0x8268fe60
	ctx.lr = 0x8268F148;
	sub_8268FE60(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4404
	ctx.r4.s64 = ctx.r11.s64 + 4404;
	// bl 0x8268fc90
	ctx.lr = 0x8268F158;
	sub_8268FC90(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268f170
	if (ctx.cr0.eq) goto loc_8268F170;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r5,r11,32570
	ctx.r5.s64 = ctx.r11.s64 + 32570;
	// b 0x8268f178
	goto loc_8268F178;
loc_8268F170:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r5,r11,14792
	ctx.r5.s64 = ctx.r11.s64 + 14792;
loc_8268F178:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-24420
	ctx.r4.s64 = ctx.r11.s64 + -24420;
	// bl 0x8268fc90
	ctx.lr = 0x8268F188;
	sub_8268FC90(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,14900
	ctx.r4.s64 = ctx.r11.s64 + 14900;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r5,r11,30,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xFF;
	// bl 0x8268fc90
	ctx.lr = 0x8268F1A0;
	sub_8268FC90(ctx, base);
	// b 0x8268f1c4
	goto loc_8268F1C4;
loc_8268F1A4:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,14884
	ctx.r4.s64 = ctx.r11.s64 + 14884;
	// bl 0x8268fe60
	ctx.lr = 0x8268F1B4;
	sub_8268FE60(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4404
	ctx.r4.s64 = ctx.r11.s64 + 4404;
	// bl 0x8268fc90
	ctx.lr = 0x8268F1C4;
	sub_8268FC90(ctx, base);
loc_8268F1C4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// addi r4,r10,13908
	ctx.r4.s64 = ctx.r10.s64 + 13908;
	// clrlwi r5,r11,19
	ctx.r5.u64 = ctx.r11.u32 & 0x1FFF;
	// b 0x8268f520
	goto loc_8268F520;
loc_8268F1D8:
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8268f84c
	if (ctx.cr0.eq) goto loc_8268F84C;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,14760
	ctx.r4.s64 = ctx.r11.s64 + 14760;
	// bl 0x8268fc90
	ctx.lr = 0x8268F1F4;
	sub_8268FC90(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,14908
	ctx.r4.s64 = ctx.r11.s64 + 14908;
	// b 0x8268edbc
	goto loc_8268EDBC;
loc_8268F200:
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8268f84c
	if (ctx.cr0.eq) goto loc_8268F84C;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm. r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268f244
	if (ctx.cr0.eq) goto loc_8268F244;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r30,1
	ctx.r30.s64 = 1;
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268f238
	if (ctx.cr0.eq) goto loc_8268F238;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,15172
	ctx.r4.s64 = ctx.r11.s64 + 15172;
	// b 0x8268f24c
	goto loc_8268F24C;
loc_8268F238:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,15180
	ctx.r4.s64 = ctx.r11.s64 + 15180;
	// b 0x8268f24c
	goto loc_8268F24C;
loc_8268F244:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,14760
	ctx.r4.s64 = ctx.r11.s64 + 14760;
loc_8268F24C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fc90
	ctx.lr = 0x8268F254;
	sub_8268FC90(ctx, base);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm. r10,r10,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8268f26c
	if (!ctx.cr0.eq) goto loc_8268F26C;
	// clrlwi. r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8268f270
	if (ctx.cr0.eq) goto loc_8268F270;
loc_8268F26C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8268F270:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x8268f29c
	if (ctx.cr0.eq) goto loc_8268F29C;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,14912
	ctx.r4.s64 = ctx.r11.s64 + 14912;
	// bl 0x8268fe60
	ctx.lr = 0x8268F288;
	sub_8268FE60(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4404
	ctx.r4.s64 = ctx.r11.s64 + 4404;
	// bl 0x8268fc90
	ctx.lr = 0x8268F298;
	sub_8268FC90(ctx, base);
	// b 0x8268f300
	goto loc_8268F300;
loc_8268F29C:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,14916
	ctx.r4.s64 = ctx.r11.s64 + 14916;
	// bl 0x8268fe60
	ctx.lr = 0x8268F2A8;
	sub_8268FE60(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4404
	ctx.r4.s64 = ctx.r11.s64 + 4404;
	// bl 0x8268fc90
	ctx.lr = 0x8268F2B8;
	sub_8268FC90(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268f2d0
	if (ctx.cr0.eq) goto loc_8268F2D0;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r5,r11,32570
	ctx.r5.s64 = ctx.r11.s64 + 32570;
	// b 0x8268f2d8
	goto loc_8268F2D8;
loc_8268F2D0:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r5,r11,14792
	ctx.r5.s64 = ctx.r11.s64 + 14792;
loc_8268F2D8:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-24420
	ctx.r4.s64 = ctx.r11.s64 + -24420;
	// bl 0x8268fc90
	ctx.lr = 0x8268F2E8;
	sub_8268FC90(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,14900
	ctx.r4.s64 = ctx.r11.s64 + 14900;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r5,r11,30,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xFF;
	// bl 0x8268fc90
	ctx.lr = 0x8268F300;
	sub_8268FC90(ctx, base);
loc_8268F300:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,13908
	ctx.r4.s64 = ctx.r10.s64 + 13908;
	// clrlwi r5,r11,19
	ctx.r5.u64 = ctx.r11.u32 & 0x1FFF;
	// bl 0x8268fc90
	ctx.lr = 0x8268F318;
	sub_8268FC90(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8268f350
	if (ctx.cr0.eq) goto loc_8268F350;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm. r10,r10,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8268f368
	if (!ctx.cr0.eq) goto loc_8268F368;
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268f350
	if (ctx.cr0.eq) goto loc_8268F350;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,-30212
	ctx.r5.s64 = ctx.r11.s64 + -30212;
loc_8268F340:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,14924
	ctx.r4.s64 = ctx.r11.s64 + 14924;
	// bl 0x8268fc90
	ctx.lr = 0x8268F350;
	sub_8268FC90(ctx, base);
loc_8268F350:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm. r5,r11,21,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x8268f84c
	if (ctx.cr0.eq) goto loc_8268F84C;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,14944
	ctx.r4.s64 = ctx.r11.s64 + 14944;
	// b 0x8268f520
	goto loc_8268F520;
loc_8268F368:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,-30204
	ctx.r5.s64 = ctx.r11.s64 + -30204;
	// b 0x8268f340
	goto loc_8268F340;
loc_8268F374:
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8268f84c
	if (ctx.cr0.eq) goto loc_8268F84C;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,14760
	ctx.r4.s64 = ctx.r11.s64 + 14760;
	// bl 0x8268fc90
	ctx.lr = 0x8268F390;
	sub_8268FC90(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,14964
	ctx.r4.s64 = ctx.r11.s64 + 14964;
	// bl 0x8268fe60
	ctx.lr = 0x8268F3A0;
	sub_8268FE60(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4404
	ctx.r4.s64 = ctx.r11.s64 + 4404;
	// bl 0x8268fc90
	ctx.lr = 0x8268F3B0;
	sub_8268FC90(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// addi r9,r11,-7176
	ctx.r9.s64 = ctx.r11.s64 + -7176;
	// addi r4,r10,-24420
	ctx.r4.s64 = ctx.r10.s64 + -24420;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r30,r11,23,30,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x3;
	// rlwinm r10,r10,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r11,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bl 0x8268fc90
	ctx.lr = 0x8268F3E8;
	sub_8268FC90(ctx, base);
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// bne cr6,0x8268f408
	if (!ctx.cr6.eq) goto loc_8268F408;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,14972
	ctx.r4.s64 = ctx.r10.s64 + 14972;
	// clrlwi r5,r11,29
	ctx.r5.u64 = ctx.r11.u32 & 0x7;
	// bl 0x8268fc90
	ctx.lr = 0x8268F408;
	sub_8268FC90(ctx, base);
loc_8268F408:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268f84c
	if (ctx.cr0.eq) goto loc_8268F84C;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,14976
	ctx.r4.s64 = ctx.r11.s64 + 14976;
	// b 0x8268f0c4
	goto loc_8268F0C4;
loc_8268F420:
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8268f84c
	if (ctx.cr0.eq) goto loc_8268F84C;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,14760
	ctx.r4.s64 = ctx.r11.s64 + 14760;
	// bl 0x8268fc90
	ctx.lr = 0x8268F43C;
	sub_8268FC90(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,14784
	ctx.r4.s64 = ctx.r11.s64 + 14784;
loc_8268F444:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fe60
	ctx.lr = 0x8268F44C;
	sub_8268FE60(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4404
	ctx.r4.s64 = ctx.r11.s64 + 4404;
	// bl 0x8268fc90
	ctx.lr = 0x8268F45C;
	sub_8268FC90(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8268f478
	if (!ctx.cr0.eq) goto loc_8268F478;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,14792
	ctx.r4.s64 = ctx.r11.s64 + 14792;
	// bl 0x8268fc90
	ctx.lr = 0x8268F478;
	sub_8268FC90(ctx, base);
loc_8268F478:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,14796
	ctx.r4.s64 = ctx.r10.s64 + 14796;
	// rlwinm r5,r11,30,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xFF;
	// bl 0x8268fc90
	ctx.lr = 0x8268F490;
	sub_8268FC90(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x8268eeb0
	goto loc_8268EEB0;
loc_8268F498:
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8268f84c
	if (ctx.cr0.eq) goto loc_8268F84C;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,14760
	ctx.r4.s64 = ctx.r11.s64 + 14760;
	// bl 0x8268fc90
	ctx.lr = 0x8268F4B4;
	sub_8268FC90(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,14800
	ctx.r4.s64 = ctx.r11.s64 + 14800;
	// b 0x8268f444
	goto loc_8268F444;
loc_8268F4C0:
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8268f84c
	if (ctx.cr0.eq) goto loc_8268F84C;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,14760
	ctx.r4.s64 = ctx.r11.s64 + 14760;
	// bl 0x8268fc90
	ctx.lr = 0x8268F4DC;
	sub_8268FC90(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,15000
	ctx.r4.s64 = ctx.r11.s64 + 15000;
	// b 0x8268edbc
	goto loc_8268EDBC;
loc_8268F4E8:
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8268f84c
	if (ctx.cr0.eq) goto loc_8268F84C;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,14760
	ctx.r4.s64 = ctx.r11.s64 + 14760;
	// bl 0x8268fc90
	ctx.lr = 0x8268F504;
	sub_8268FC90(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,15008
	ctx.r4.s64 = ctx.r11.s64 + 15008;
	// bl 0x8268fe60
	ctx.lr = 0x8268F514;
	sub_8268FE60(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,15028
	ctx.r4.s64 = ctx.r11.s64 + 15028;
loc_8268F520:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fc90
	ctx.lr = 0x8268F528;
	sub_8268FC90(ctx, base);
	// b 0x8268f84c
	goto loc_8268F84C;
loc_8268F52C:
	// rlwinm. r11,r29,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x6;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268f84c
	if (ctx.cr0.eq) goto loc_8268F84C;
	// lwz r11,8240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8240);
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// bgt cr6,0x8268f544
	if (ctx.cr6.gt) goto loc_8268F544;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_8268F544:
	// rlwinm. r10,r29,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,8240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8240, ctx.r11.u32);
	// rlwinm r21,r29,27,31,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 27) & 0x1;
	// beq 0x8268f5f0
	if (ctx.cr0.eq) goto loc_8268F5F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fa28
	ctx.lr = 0x8268F55C;
	sub_8268FA28(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268f57c
	if (ctx.cr0.eq) goto loc_8268F57C;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r4,r11,15244
	ctx.r4.s64 = ctx.r11.s64 + 15244;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fc90
	ctx.lr = 0x8268F57C;
	sub_8268FC90(ctx, base);
loc_8268F57C:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// clrlwi. r10,r21,24
	ctx.r10.u64 = ctx.r21.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r30,r11,14760
	ctx.r30.s64 = ctx.r11.s64 + 14760;
	// beq 0x8268f5cc
	if (ctx.cr0.eq) goto loc_8268F5CC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fc90
	ctx.lr = 0x8268F598;
	sub_8268FC90(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,15120
	ctx.r4.s64 = ctx.r11.s64 + 15120;
	// bl 0x8268fe60
	ctx.lr = 0x8268F5A8;
	sub_8268FE60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268f9c0
	ctx.lr = 0x8268F5B0;
	sub_8268F9C0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268f5cc
	if (ctx.cr0.eq) goto loc_8268F5CC;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,15260
	ctx.r4.s64 = ctx.r11.s64 + 15260;
	// bl 0x8268fc90
	ctx.lr = 0x8268F5CC;
	sub_8268FC90(ctx, base);
loc_8268F5CC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fc90
	ctx.lr = 0x8268F5D8;
	sub_8268FC90(ctx, base);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// rlwinm r5,r29,28,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 28) & 0x1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268de58
	ctx.lr = 0x8268F5EC;
	sub_8268DE58(ctx, base);
	// b 0x8268f84c
	goto loc_8268F84C;
loc_8268F5F0:
	// rlwinm. r11,r29,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268f84c
	if (ctx.cr0.eq) goto loc_8268F84C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8268d5a8
	ctx.lr = 0x8268F600;
	sub_8268D5A8(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// lis r7,-32227
	ctx.r7.s64 = -2112028672;
	// lis r6,-32227
	ctx.r6.s64 = -2112028672;
	// clrlwi. r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lis r27,-14336
	ctx.r27.s64 = -939524096;
	// addi r25,r11,15260
	ctx.r25.s64 = ctx.r11.s64 + 15260;
	// addi r26,r10,15120
	ctx.r26.s64 = ctx.r10.s64 + 15120;
	// addi r29,r9,15244
	ctx.r29.s64 = ctx.r9.s64 + 15244;
	// addi r24,r8,15180
	ctx.r24.s64 = ctx.r8.s64 + 15180;
	// addi r23,r7,15172
	ctx.r23.s64 = ctx.r7.s64 + 15172;
	// addi r30,r6,14760
	ctx.r30.s64 = ctx.r6.s64 + 14760;
	// beq 0x8268f680
	if (ctx.cr0.eq) goto loc_8268F680;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r10,r11,0,0,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFC000000;
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x8268f674
	if (!ctx.cr6.eq) goto loc_8268F674;
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8268f668
	if (ctx.cr0.eq) goto loc_8268F668;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8268d510
	ctx.lr = 0x8268F65C;
	sub_8268D510(ctx, base);
	// not r11,r3
	ctx.r11.u64 = ~ctx.r3.u64;
	// rlwinm r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// b 0x8268f678
	goto loc_8268F678;
loc_8268F668:
	// rlwinm. r11,r11,0,8,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x8268f678
	if (ctx.cr0.eq) goto loc_8268F678;
loc_8268F674:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8268F678:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268f728
	if (ctx.cr0.eq) goto loc_8268F728;
loc_8268F680:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fa28
	ctx.lr = 0x8268F688;
	sub_8268FA28(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268f6a4
	if (ctx.cr0.eq) goto loc_8268F6A4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fc90
	ctx.lr = 0x8268F6A4;
	sub_8268FC90(ctx, base);
loc_8268F6A4:
	// clrlwi. r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268f6e4
	if (ctx.cr0.eq) goto loc_8268F6E4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fc90
	ctx.lr = 0x8268F6B8;
	sub_8268FC90(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fe60
	ctx.lr = 0x8268F6C4;
	sub_8268FE60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268f9c0
	ctx.lr = 0x8268F6CC;
	sub_8268F9C0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268f6e4
	if (ctx.cr0.eq) goto loc_8268F6E4;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fc90
	ctx.lr = 0x8268F6E4;
	sub_8268FC90(ctx, base);
loc_8268F6E4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fc90
	ctx.lr = 0x8268F6F0;
	sub_8268FC90(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r11,r11,5,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1F;
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x8268f71c
	if (ctx.cr6.lt) goto loc_8268F71C;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bne 0x8268f714
	if (!ctx.cr0.eq) goto loc_8268F714;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_8268F714:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fc90
	ctx.lr = 0x8268F71C;
	sub_8268FC90(ctx, base);
loc_8268F71C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268d618
	ctx.lr = 0x8268F728;
	sub_8268D618(ctx, base);
loc_8268F728:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r10,r11,0,0,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFC000000;
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x8268f760
	if (!ctx.cr6.eq) goto loc_8268F760;
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8268f754
	if (ctx.cr0.eq) goto loc_8268F754;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8268d510
	ctx.lr = 0x8268F748;
	sub_8268D510(ctx, base);
	// not r11,r3
	ctx.r11.u64 = ~ctx.r3.u64;
	// rlwinm r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// b 0x8268f764
	goto loc_8268F764;
loc_8268F754:
	// rlwinm. r11,r11,0,8,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x8268f764
	if (ctx.cr0.eq) goto loc_8268F764;
loc_8268F760:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8268F764:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8268f84c
	if (!ctx.cr0.eq) goto loc_8268F84C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8268d5a8
	ctx.lr = 0x8268F774;
	sub_8268D5A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x8268f7a8
	if (!ctx.cr0.eq) goto loc_8268F7A8;
	// bl 0x8268f9c0
	ctx.lr = 0x8268F784;
	sub_8268F9C0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268f79c
	if (ctx.cr0.eq) goto loc_8268F79C;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fc90
	ctx.lr = 0x8268F79C;
	sub_8268FC90(ctx, base);
loc_8268F79C:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,15040
	ctx.r4.s64 = ctx.r11.s64 + 15040;
	// b 0x8268f80c
	goto loc_8268F80C;
loc_8268F7A8:
	// bl 0x8268fa28
	ctx.lr = 0x8268F7AC;
	sub_8268FA28(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268f7c8
	if (ctx.cr0.eq) goto loc_8268F7C8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fc90
	ctx.lr = 0x8268F7C8;
	sub_8268FC90(ctx, base);
loc_8268F7C8:
	// clrlwi. r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268f808
	if (ctx.cr0.eq) goto loc_8268F808;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fc90
	ctx.lr = 0x8268F7DC;
	sub_8268FC90(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fe60
	ctx.lr = 0x8268F7E8;
	sub_8268FE60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268f9c0
	ctx.lr = 0x8268F7F0;
	sub_8268F9C0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268f808
	if (ctx.cr0.eq) goto loc_8268F808;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fc90
	ctx.lr = 0x8268F808;
	sub_8268FC90(ctx, base);
loc_8268F808:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_8268F80C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fc90
	ctx.lr = 0x8268F814;
	sub_8268FC90(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r11,r11,5,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1F;
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x8268f840
	if (ctx.cr6.lt) goto loc_8268F840;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bne 0x8268f838
	if (!ctx.cr0.eq) goto loc_8268F838;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_8268F838:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fc90
	ctx.lr = 0x8268F840;
	sub_8268FC90(ctx, base);
loc_8268F840:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268d9f8
	ctx.lr = 0x8268F84C;
	sub_8268D9F8(ctx, base);
loc_8268F84C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268f9c0
	ctx.lr = 0x8268F854;
	sub_8268F9C0(ctx, base);
	// lwz r3,8236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268ED8C"))) PPC_WEAK_FUNC(sub_8268ED8C);
PPC_FUNC_IMPL(__imp__sub_8268ED8C) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8268f84c
	if (ctx.cr0.eq) {
		// ERROR 8268F84C
		return;
	}
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268f84c
	if (ctx.cr0.eq) {
		// ERROR 8268F84C
		return;
	}
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,14760
	ctx.r4.s64 = ctx.r11.s64 + 14760;
	// bl 0x8268fc90
	ctx.lr = 0x8268EDB4;
	sub_8268FC90(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,14752
	ctx.r4.s64 = ctx.r11.s64 + 14752;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fe60
	ctx.lr = 0x8268EDC4;
	sub_8268FE60(ctx, base);
	// b 0x8268f84c
	// ERROR 8268F84C
	return;
}

__attribute__((alias("__imp__sub_8268EDC8"))) PPC_WEAK_FUNC(sub_8268EDC8);
PPC_FUNC_IMPL(__imp__sub_8268EDC8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8268f84c
	if (ctx.cr0.eq) {
		// ERROR 8268F84C
		return;
	}
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,14760
	ctx.r4.s64 = ctx.r11.s64 + 14760;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fc90
	ctx.lr = 0x8268EDE4;
	sub_8268FC90(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,14768
	ctx.r4.s64 = ctx.r11.s64 + 14768;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fe60
	ctx.lr = 0x8268EDF4;
	sub_8268FE60(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r5,r11,23,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	// rlwinm r4,r10,17,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fce8
	ctx.lr = 0x8268EE10;
	sub_8268FCE8(ctx, base);
	// b 0x8268f84c
	// ERROR 8268F84C
	return;
}

__attribute__((alias("__imp__sub_8268EE14"))) PPC_WEAK_FUNC(sub_8268EE14);
PPC_FUNC_IMPL(__imp__sub_8268EE14) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8268f84c
	if (ctx.cr0.eq) {
		// ERROR 8268F84C
		return;
	}
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,14760
	ctx.r4.s64 = ctx.r11.s64 + 14760;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fc90
	ctx.lr = 0x8268EE30;
	sub_8268FC90(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,14776
	ctx.r4.s64 = ctx.r11.s64 + 14776;
	// b 0x8268edec
	// ERROR 8268EDEC
	return;
}

__attribute__((alias("__imp__sub_8268EE3C"))) PPC_WEAK_FUNC(sub_8268EE3C);
PPC_FUNC_IMPL(__imp__sub_8268EE3C) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8268f84c
	if (ctx.cr0.eq) {
		// ERROR 8268F84C
		return;
	}
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,14760
	ctx.r4.s64 = ctx.r11.s64 + 14760;
	// bl 0x8268fc90
	ctx.lr = 0x8268EE58;
	sub_8268FC90(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,14784
	ctx.r4.s64 = ctx.r11.s64 + 14784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fe60
	ctx.lr = 0x8268EE68;
	sub_8268FE60(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4404
	ctx.r4.s64 = ctx.r11.s64 + 4404;
	// bl 0x8268fc90
	ctx.lr = 0x8268EE78;
	sub_8268FC90(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8268ee94
	if (!ctx.cr0.eq) goto loc_8268EE94;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,14792
	ctx.r4.s64 = ctx.r11.s64 + 14792;
	// bl 0x8268fc90
	ctx.lr = 0x8268EE94;
	sub_8268FC90(ctx, base);
loc_8268EE94:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,14796
	ctx.r4.s64 = ctx.r10.s64 + 14796;
	// rlwinm r5,r11,30,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xFF;
	// bl 0x8268fc90
	ctx.lr = 0x8268EEAC;
	sub_8268FC90(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwinm r4,r11,17,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1;
	// b 0x8268ee08
	// ERROR 8268EE08
	return;
}

__attribute__((alias("__imp__sub_8268EEC0"))) PPC_WEAK_FUNC(sub_8268EEC0);
PPC_FUNC_IMPL(__imp__sub_8268EEC0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8268f84c
	if (ctx.cr0.eq) {
		// ERROR 8268F84C
		return;
	}
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,14760
	ctx.r4.s64 = ctx.r11.s64 + 14760;
	// bl 0x8268fc90
	ctx.lr = 0x8268EEDC;
	sub_8268FC90(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,14800
	ctx.r4.s64 = ctx.r11.s64 + 14800;
	// b 0x8268ee60
	// ERROR 8268EE60
	return;
}

__attribute__((alias("__imp__sub_8268EEE8"))) PPC_WEAK_FUNC(sub_8268EEE8);
PPC_FUNC_IMPL(__imp__sub_8268EEE8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8268f84c
	if (ctx.cr0.eq) {
		// ERROR 8268F84C
		return;
	}
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268ef0c
	if (ctx.cr0.eq) goto loc_8268EF0C;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,15172
	ctx.r4.s64 = ctx.r11.s64 + 15172;
	// b 0x8268eddc
	// ERROR 8268EDDC
	return;
loc_8268EF0C:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,15180
	ctx.r4.s64 = ctx.r11.s64 + 15180;
	// b 0x8268eddc
	// ERROR 8268EDDC
	return;
}

__attribute__((alias("__imp__sub_8268EF18"))) PPC_WEAK_FUNC(sub_8268EF18);
PPC_FUNC_IMPL(__imp__sub_8268EF18) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8268f84c
	if (ctx.cr0.eq) {
		// ERROR 8268F84C
		return;
	}
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268ef3c
	if (ctx.cr0.eq) goto loc_8268EF3C;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,15172
	ctx.r4.s64 = ctx.r11.s64 + 15172;
	// b 0x8268ee28
	// ERROR 8268EE28
	return;
loc_8268EF3C:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,15180
	ctx.r4.s64 = ctx.r11.s64 + 15180;
	// b 0x8268ee28
	// ERROR 8268EE28
	return;
}

__attribute__((alias("__imp__sub_8268EF48"))) PPC_WEAK_FUNC(sub_8268EF48);
PPC_FUNC_IMPL(__imp__sub_8268EF48) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8268f84c
	if (ctx.cr0.eq) {
		// ERROR 8268F84C
		return;
	}
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,14760
	ctx.r4.s64 = ctx.r11.s64 + 14760;
	// bl 0x8268fc90
	ctx.lr = 0x8268EF64;
	sub_8268FC90(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,14808
	ctx.r4.s64 = ctx.r11.s64 + 14808;
	// bl 0x8268fe60
	ctx.lr = 0x8268EF74;
	sub_8268FE60(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4404
	ctx.r4.s64 = ctx.r11.s64 + 4404;
	// bl 0x8268fc90
	ctx.lr = 0x8268EF84;
	sub_8268FC90(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,14816
	ctx.r4.s64 = ctx.r11.s64 + 14816;
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// clrlwi r5,r11,27
	ctx.r5.u64 = ctx.r11.u32 & 0x1F;
	// bl 0x8268fc90
	ctx.lr = 0x8268EF9C;
	sub_8268FC90(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,13908
	ctx.r4.s64 = ctx.r11.s64 + 13908;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// clrlwi r5,r11,19
	ctx.r5.u64 = ctx.r11.u32 & 0x1FFF;
	// bl 0x8268fc90
	ctx.lr = 0x8268EFB4;
	sub_8268FC90(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm. r9,r11,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r11,r10,19,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x1;
	// bne 0x8268efd0
	if (!ctx.cr0.eq) goto loc_8268EFD0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8268effc
	if (ctx.cr6.eq) goto loc_8268EFFC;
loc_8268EFD0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8268efe4
	if (ctx.cr6.eq) goto loc_8268EFE4;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,-30204
	ctx.r5.s64 = ctx.r11.s64 + -30204;
	// b 0x8268efec
	goto loc_8268EFEC;
loc_8268EFE4:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,-30212
	ctx.r5.s64 = ctx.r11.s64 + -30212;
loc_8268EFEC:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,14824
	ctx.r4.s64 = ctx.r11.s64 + 14824;
	// bl 0x8268fc90
	ctx.lr = 0x8268EFFC;
	sub_8268FC90(ctx, base);
loc_8268EFFC:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm. r5,r11,21,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x8268f84c
	if (ctx.cr0.eq) {
		// ERROR 8268F84C
		return;
	}
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,14836
	ctx.r4.s64 = ctx.r11.s64 + 14836;
	// b 0x8268f520
	// ERROR 8268F520
	return;
}

__attribute__((alias("__imp__sub_8268F014"))) PPC_WEAK_FUNC(sub_8268F014);
PPC_FUNC_IMPL(__imp__sub_8268F014) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8268f84c
	if (ctx.cr0.eq) {
		// ERROR 8268F84C
		return;
	}
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268f050
	if (ctx.cr0.eq) goto loc_8268F050;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268f044
	if (ctx.cr0.eq) goto loc_8268F044;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,15172
	ctx.r4.s64 = ctx.r11.s64 + 15172;
	// b 0x8268f058
	goto loc_8268F058;
loc_8268F044:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,15180
	ctx.r4.s64 = ctx.r11.s64 + 15180;
	// b 0x8268f058
	goto loc_8268F058;
loc_8268F050:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,14760
	ctx.r4.s64 = ctx.r11.s64 + 14760;
loc_8268F058:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fc90
	ctx.lr = 0x8268F060;
	sub_8268FC90(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,14856
	ctx.r4.s64 = ctx.r11.s64 + 14856;
	// bl 0x8268fe60
	ctx.lr = 0x8268F070;
	sub_8268FE60(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4404
	ctx.r4.s64 = ctx.r11.s64 + 4404;
	// bl 0x8268fc90
	ctx.lr = 0x8268F080;
	sub_8268FC90(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,14816
	ctx.r4.s64 = ctx.r11.s64 + 14816;
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// clrlwi r5,r11,27
	ctx.r5.u64 = ctx.r11.u32 & 0x1F;
	// bl 0x8268fc90
	ctx.lr = 0x8268F098;
	sub_8268FC90(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,13908
	ctx.r4.s64 = ctx.r11.s64 + 13908;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// clrlwi r5,r11,19
	ctx.r5.u64 = ctx.r11.u32 & 0x1FFF;
	// bl 0x8268fc90
	ctx.lr = 0x8268F0B0;
	sub_8268FC90(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268f84c
	if (ctx.cr0.eq) {
		// ERROR 8268F84C
		return;
	}
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,14864
	ctx.r4.s64 = ctx.r11.s64 + 14864;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fc90
	ctx.lr = 0x8268F0CC;
	sub_8268FC90(ctx, base);
	// b 0x8268f84c
	// ERROR 8268F84C
	return;
}

__attribute__((alias("__imp__sub_8268F0D0"))) PPC_WEAK_FUNC(sub_8268F0D0);
PPC_FUNC_IMPL(__imp__sub_8268F0D0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8268f84c
	if (ctx.cr0.eq) {
		// ERROR 8268F84C
		return;
	}
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm. r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268f114
	if (ctx.cr0.eq) goto loc_8268F114;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r30,1
	ctx.r30.s64 = 1;
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268f108
	if (ctx.cr0.eq) goto loc_8268F108;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,15172
	ctx.r4.s64 = ctx.r11.s64 + 15172;
	// b 0x8268f11c
	goto loc_8268F11C;
loc_8268F108:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,15180
	ctx.r4.s64 = ctx.r11.s64 + 15180;
	// b 0x8268f11c
	goto loc_8268F11C;
loc_8268F114:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,14760
	ctx.r4.s64 = ctx.r11.s64 + 14760;
loc_8268F11C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fc90
	ctx.lr = 0x8268F124;
	sub_8268FC90(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8268f1a4
	if (!ctx.cr0.eq) goto loc_8268F1A4;
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8268f1a4
	if (!ctx.cr0.eq) goto loc_8268F1A4;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,14892
	ctx.r4.s64 = ctx.r11.s64 + 14892;
	// bl 0x8268fe60
	ctx.lr = 0x8268F148;
	sub_8268FE60(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4404
	ctx.r4.s64 = ctx.r11.s64 + 4404;
	// bl 0x8268fc90
	ctx.lr = 0x8268F158;
	sub_8268FC90(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268f170
	if (ctx.cr0.eq) goto loc_8268F170;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r5,r11,32570
	ctx.r5.s64 = ctx.r11.s64 + 32570;
	// b 0x8268f178
	goto loc_8268F178;
loc_8268F170:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r5,r11,14792
	ctx.r5.s64 = ctx.r11.s64 + 14792;
loc_8268F178:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-24420
	ctx.r4.s64 = ctx.r11.s64 + -24420;
	// bl 0x8268fc90
	ctx.lr = 0x8268F188;
	sub_8268FC90(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,14900
	ctx.r4.s64 = ctx.r11.s64 + 14900;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r5,r11,30,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xFF;
	// bl 0x8268fc90
	ctx.lr = 0x8268F1A0;
	sub_8268FC90(ctx, base);
	// b 0x8268f1c4
	goto loc_8268F1C4;
loc_8268F1A4:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,14884
	ctx.r4.s64 = ctx.r11.s64 + 14884;
	// bl 0x8268fe60
	ctx.lr = 0x8268F1B4;
	sub_8268FE60(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4404
	ctx.r4.s64 = ctx.r11.s64 + 4404;
	// bl 0x8268fc90
	ctx.lr = 0x8268F1C4;
	sub_8268FC90(ctx, base);
loc_8268F1C4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// addi r4,r10,13908
	ctx.r4.s64 = ctx.r10.s64 + 13908;
	// clrlwi r5,r11,19
	ctx.r5.u64 = ctx.r11.u32 & 0x1FFF;
	// b 0x8268f520
	// ERROR 8268F520
	return;
}

__attribute__((alias("__imp__sub_8268F1D8"))) PPC_WEAK_FUNC(sub_8268F1D8);
PPC_FUNC_IMPL(__imp__sub_8268F1D8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8268f84c
	if (ctx.cr0.eq) {
		// ERROR 8268F84C
		return;
	}
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,14760
	ctx.r4.s64 = ctx.r11.s64 + 14760;
	// bl 0x8268fc90
	ctx.lr = 0x8268F1F4;
	sub_8268FC90(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,14908
	ctx.r4.s64 = ctx.r11.s64 + 14908;
	// b 0x8268edbc
	// ERROR 8268EDBC
	return;
}

__attribute__((alias("__imp__sub_8268F200"))) PPC_WEAK_FUNC(sub_8268F200);
PPC_FUNC_IMPL(__imp__sub_8268F200) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8268f84c
	if (ctx.cr0.eq) {
		// ERROR 8268F84C
		return;
	}
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm. r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268f244
	if (ctx.cr0.eq) goto loc_8268F244;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r30,1
	ctx.r30.s64 = 1;
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268f238
	if (ctx.cr0.eq) goto loc_8268F238;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,15172
	ctx.r4.s64 = ctx.r11.s64 + 15172;
	// b 0x8268f24c
	goto loc_8268F24C;
loc_8268F238:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,15180
	ctx.r4.s64 = ctx.r11.s64 + 15180;
	// b 0x8268f24c
	goto loc_8268F24C;
loc_8268F244:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,14760
	ctx.r4.s64 = ctx.r11.s64 + 14760;
loc_8268F24C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fc90
	ctx.lr = 0x8268F254;
	sub_8268FC90(ctx, base);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm. r10,r10,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8268f26c
	if (!ctx.cr0.eq) goto loc_8268F26C;
	// clrlwi. r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8268f270
	if (ctx.cr0.eq) goto loc_8268F270;
loc_8268F26C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8268F270:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x8268f29c
	if (ctx.cr0.eq) goto loc_8268F29C;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,14912
	ctx.r4.s64 = ctx.r11.s64 + 14912;
	// bl 0x8268fe60
	ctx.lr = 0x8268F288;
	sub_8268FE60(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4404
	ctx.r4.s64 = ctx.r11.s64 + 4404;
	// bl 0x8268fc90
	ctx.lr = 0x8268F298;
	sub_8268FC90(ctx, base);
	// b 0x8268f300
	goto loc_8268F300;
loc_8268F29C:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,14916
	ctx.r4.s64 = ctx.r11.s64 + 14916;
	// bl 0x8268fe60
	ctx.lr = 0x8268F2A8;
	sub_8268FE60(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4404
	ctx.r4.s64 = ctx.r11.s64 + 4404;
	// bl 0x8268fc90
	ctx.lr = 0x8268F2B8;
	sub_8268FC90(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268f2d0
	if (ctx.cr0.eq) goto loc_8268F2D0;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r5,r11,32570
	ctx.r5.s64 = ctx.r11.s64 + 32570;
	// b 0x8268f2d8
	goto loc_8268F2D8;
loc_8268F2D0:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r5,r11,14792
	ctx.r5.s64 = ctx.r11.s64 + 14792;
loc_8268F2D8:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-24420
	ctx.r4.s64 = ctx.r11.s64 + -24420;
	// bl 0x8268fc90
	ctx.lr = 0x8268F2E8;
	sub_8268FC90(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,14900
	ctx.r4.s64 = ctx.r11.s64 + 14900;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r5,r11,30,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xFF;
	// bl 0x8268fc90
	ctx.lr = 0x8268F300;
	sub_8268FC90(ctx, base);
loc_8268F300:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,13908
	ctx.r4.s64 = ctx.r10.s64 + 13908;
	// clrlwi r5,r11,19
	ctx.r5.u64 = ctx.r11.u32 & 0x1FFF;
	// bl 0x8268fc90
	ctx.lr = 0x8268F318;
	sub_8268FC90(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8268f350
	if (ctx.cr0.eq) goto loc_8268F350;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm. r10,r10,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8268f368
	if (!ctx.cr0.eq) goto loc_8268F368;
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268f350
	if (ctx.cr0.eq) goto loc_8268F350;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,-30212
	ctx.r5.s64 = ctx.r11.s64 + -30212;
loc_8268F340:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,14924
	ctx.r4.s64 = ctx.r11.s64 + 14924;
	// bl 0x8268fc90
	ctx.lr = 0x8268F350;
	sub_8268FC90(ctx, base);
loc_8268F350:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm. r5,r11,21,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x8268f84c
	if (ctx.cr0.eq) {
		// ERROR 8268F84C
		return;
	}
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,14944
	ctx.r4.s64 = ctx.r11.s64 + 14944;
	// b 0x8268f520
	// ERROR 8268F520
	return;
loc_8268F368:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,-30204
	ctx.r5.s64 = ctx.r11.s64 + -30204;
	// b 0x8268f340
	goto loc_8268F340;
}

__attribute__((alias("__imp__sub_8268F374"))) PPC_WEAK_FUNC(sub_8268F374);
PPC_FUNC_IMPL(__imp__sub_8268F374) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8268f84c
	if (ctx.cr0.eq) {
		// ERROR 8268F84C
		return;
	}
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,14760
	ctx.r4.s64 = ctx.r11.s64 + 14760;
	// bl 0x8268fc90
	ctx.lr = 0x8268F390;
	sub_8268FC90(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,14964
	ctx.r4.s64 = ctx.r11.s64 + 14964;
	// bl 0x8268fe60
	ctx.lr = 0x8268F3A0;
	sub_8268FE60(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4404
	ctx.r4.s64 = ctx.r11.s64 + 4404;
	// bl 0x8268fc90
	ctx.lr = 0x8268F3B0;
	sub_8268FC90(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// addi r9,r11,-7176
	ctx.r9.s64 = ctx.r11.s64 + -7176;
	// addi r4,r10,-24420
	ctx.r4.s64 = ctx.r10.s64 + -24420;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r30,r11,23,30,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x3;
	// rlwinm r10,r10,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r11,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bl 0x8268fc90
	ctx.lr = 0x8268F3E8;
	sub_8268FC90(ctx, base);
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// bne cr6,0x8268f408
	if (!ctx.cr6.eq) goto loc_8268F408;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,14972
	ctx.r4.s64 = ctx.r10.s64 + 14972;
	// clrlwi r5,r11,29
	ctx.r5.u64 = ctx.r11.u32 & 0x7;
	// bl 0x8268fc90
	ctx.lr = 0x8268F408;
	sub_8268FC90(ctx, base);
loc_8268F408:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268f84c
	if (ctx.cr0.eq) {
		// ERROR 8268F84C
		return;
	}
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,14976
	ctx.r4.s64 = ctx.r11.s64 + 14976;
	// b 0x8268f0c4
	// ERROR 8268F0C4
	return;
}

__attribute__((alias("__imp__sub_8268F420"))) PPC_WEAK_FUNC(sub_8268F420);
PPC_FUNC_IMPL(__imp__sub_8268F420) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8268f84c
	if (ctx.cr0.eq) {
		// ERROR 8268F84C
		return;
	}
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,14760
	ctx.r4.s64 = ctx.r11.s64 + 14760;
	// bl 0x8268fc90
	ctx.lr = 0x8268F43C;
	sub_8268FC90(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,14784
	ctx.r4.s64 = ctx.r11.s64 + 14784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fe60
	ctx.lr = 0x8268F44C;
	sub_8268FE60(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4404
	ctx.r4.s64 = ctx.r11.s64 + 4404;
	// bl 0x8268fc90
	ctx.lr = 0x8268F45C;
	sub_8268FC90(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8268f478
	if (!ctx.cr0.eq) goto loc_8268F478;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,14792
	ctx.r4.s64 = ctx.r11.s64 + 14792;
	// bl 0x8268fc90
	ctx.lr = 0x8268F478;
	sub_8268FC90(ctx, base);
loc_8268F478:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,14796
	ctx.r4.s64 = ctx.r10.s64 + 14796;
	// rlwinm r5,r11,30,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xFF;
	// bl 0x8268fc90
	ctx.lr = 0x8268F490;
	sub_8268FC90(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x8268eeb0
	// ERROR 8268EEB0
	return;
}

__attribute__((alias("__imp__sub_8268F498"))) PPC_WEAK_FUNC(sub_8268F498);
PPC_FUNC_IMPL(__imp__sub_8268F498) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8268f84c
	if (ctx.cr0.eq) {
		// ERROR 8268F84C
		return;
	}
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,14760
	ctx.r4.s64 = ctx.r11.s64 + 14760;
	// bl 0x8268fc90
	ctx.lr = 0x8268F4B4;
	sub_8268FC90(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,14800
	ctx.r4.s64 = ctx.r11.s64 + 14800;
	// b 0x8268f444
	// ERROR 8268F444
	return;
}

__attribute__((alias("__imp__sub_8268F4C0"))) PPC_WEAK_FUNC(sub_8268F4C0);
PPC_FUNC_IMPL(__imp__sub_8268F4C0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8268f84c
	if (ctx.cr0.eq) {
		// ERROR 8268F84C
		return;
	}
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,14760
	ctx.r4.s64 = ctx.r11.s64 + 14760;
	// bl 0x8268fc90
	ctx.lr = 0x8268F4DC;
	sub_8268FC90(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,15000
	ctx.r4.s64 = ctx.r11.s64 + 15000;
	// b 0x8268edbc
	// ERROR 8268EDBC
	return;
}

__attribute__((alias("__imp__sub_8268F4E8"))) PPC_WEAK_FUNC(sub_8268F4E8);
PPC_FUNC_IMPL(__imp__sub_8268F4E8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8268f84c
	if (ctx.cr0.eq) {
		// ERROR 8268F84C
		return;
	}
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,14760
	ctx.r4.s64 = ctx.r11.s64 + 14760;
	// bl 0x8268fc90
	ctx.lr = 0x8268F504;
	sub_8268FC90(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,15008
	ctx.r4.s64 = ctx.r11.s64 + 15008;
	// bl 0x8268fe60
	ctx.lr = 0x8268F514;
	sub_8268FE60(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,15028
	ctx.r4.s64 = ctx.r11.s64 + 15028;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fc90
	ctx.lr = 0x8268F528;
	sub_8268FC90(ctx, base);
	// b 0x8268f84c
	// ERROR 8268F84C
	return;
}

__attribute__((alias("__imp__sub_8268F52C"))) PPC_WEAK_FUNC(sub_8268F52C);
PPC_FUNC_IMPL(__imp__sub_8268F52C) {
	PPC_FUNC_PROLOGUE();
	// rlwinm. r11,r29,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x6;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268f84c
	if (ctx.cr0.eq) goto loc_8268F84C;
	// lwz r11,8240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8240);
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// bgt cr6,0x8268f544
	if (ctx.cr6.gt) goto loc_8268F544;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_8268F544:
	// rlwinm. r10,r29,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,8240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8240, ctx.r11.u32);
	// rlwinm r21,r29,27,31,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 27) & 0x1;
	// beq 0x8268f5f0
	if (ctx.cr0.eq) goto loc_8268F5F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fa28
	ctx.lr = 0x8268F55C;
	sub_8268FA28(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268f57c
	if (ctx.cr0.eq) goto loc_8268F57C;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r4,r11,15244
	ctx.r4.s64 = ctx.r11.s64 + 15244;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fc90
	ctx.lr = 0x8268F57C;
	sub_8268FC90(ctx, base);
loc_8268F57C:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// clrlwi. r10,r21,24
	ctx.r10.u64 = ctx.r21.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r30,r11,14760
	ctx.r30.s64 = ctx.r11.s64 + 14760;
	// beq 0x8268f5cc
	if (ctx.cr0.eq) goto loc_8268F5CC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fc90
	ctx.lr = 0x8268F598;
	sub_8268FC90(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,15120
	ctx.r4.s64 = ctx.r11.s64 + 15120;
	// bl 0x8268fe60
	ctx.lr = 0x8268F5A8;
	sub_8268FE60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268f9c0
	ctx.lr = 0x8268F5B0;
	sub_8268F9C0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268f5cc
	if (ctx.cr0.eq) goto loc_8268F5CC;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,15260
	ctx.r4.s64 = ctx.r11.s64 + 15260;
	// bl 0x8268fc90
	ctx.lr = 0x8268F5CC;
	sub_8268FC90(ctx, base);
loc_8268F5CC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fc90
	ctx.lr = 0x8268F5D8;
	sub_8268FC90(ctx, base);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// rlwinm r5,r29,28,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 28) & 0x1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268de58
	ctx.lr = 0x8268F5EC;
	sub_8268DE58(ctx, base);
	// b 0x8268f84c
	goto loc_8268F84C;
loc_8268F5F0:
	// rlwinm. r11,r29,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268f84c
	if (ctx.cr0.eq) goto loc_8268F84C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8268d5a8
	ctx.lr = 0x8268F600;
	sub_8268D5A8(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// lis r7,-32227
	ctx.r7.s64 = -2112028672;
	// lis r6,-32227
	ctx.r6.s64 = -2112028672;
	// clrlwi. r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lis r27,-14336
	ctx.r27.s64 = -939524096;
	// addi r25,r11,15260
	ctx.r25.s64 = ctx.r11.s64 + 15260;
	// addi r26,r10,15120
	ctx.r26.s64 = ctx.r10.s64 + 15120;
	// addi r29,r9,15244
	ctx.r29.s64 = ctx.r9.s64 + 15244;
	// addi r24,r8,15180
	ctx.r24.s64 = ctx.r8.s64 + 15180;
	// addi r23,r7,15172
	ctx.r23.s64 = ctx.r7.s64 + 15172;
	// addi r30,r6,14760
	ctx.r30.s64 = ctx.r6.s64 + 14760;
	// beq 0x8268f680
	if (ctx.cr0.eq) goto loc_8268F680;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r10,r11,0,0,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFC000000;
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x8268f674
	if (!ctx.cr6.eq) goto loc_8268F674;
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8268f668
	if (ctx.cr0.eq) goto loc_8268F668;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8268d510
	ctx.lr = 0x8268F65C;
	sub_8268D510(ctx, base);
	// not r11,r3
	ctx.r11.u64 = ~ctx.r3.u64;
	// rlwinm r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// b 0x8268f678
	goto loc_8268F678;
loc_8268F668:
	// rlwinm. r11,r11,0,8,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x8268f678
	if (ctx.cr0.eq) goto loc_8268F678;
loc_8268F674:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8268F678:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268f728
	if (ctx.cr0.eq) goto loc_8268F728;
loc_8268F680:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fa28
	ctx.lr = 0x8268F688;
	sub_8268FA28(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268f6a4
	if (ctx.cr0.eq) goto loc_8268F6A4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fc90
	ctx.lr = 0x8268F6A4;
	sub_8268FC90(ctx, base);
loc_8268F6A4:
	// clrlwi. r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268f6e4
	if (ctx.cr0.eq) goto loc_8268F6E4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fc90
	ctx.lr = 0x8268F6B8;
	sub_8268FC90(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fe60
	ctx.lr = 0x8268F6C4;
	sub_8268FE60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268f9c0
	ctx.lr = 0x8268F6CC;
	sub_8268F9C0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268f6e4
	if (ctx.cr0.eq) goto loc_8268F6E4;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fc90
	ctx.lr = 0x8268F6E4;
	sub_8268FC90(ctx, base);
loc_8268F6E4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fc90
	ctx.lr = 0x8268F6F0;
	sub_8268FC90(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r11,r11,5,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1F;
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x8268f71c
	if (ctx.cr6.lt) goto loc_8268F71C;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bne 0x8268f714
	if (!ctx.cr0.eq) goto loc_8268F714;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_8268F714:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fc90
	ctx.lr = 0x8268F71C;
	sub_8268FC90(ctx, base);
loc_8268F71C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268d618
	ctx.lr = 0x8268F728;
	sub_8268D618(ctx, base);
loc_8268F728:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r10,r11,0,0,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFC000000;
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x8268f760
	if (!ctx.cr6.eq) goto loc_8268F760;
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8268f754
	if (ctx.cr0.eq) goto loc_8268F754;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8268d510
	ctx.lr = 0x8268F748;
	sub_8268D510(ctx, base);
	// not r11,r3
	ctx.r11.u64 = ~ctx.r3.u64;
	// rlwinm r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// b 0x8268f764
	goto loc_8268F764;
loc_8268F754:
	// rlwinm. r11,r11,0,8,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x8268f764
	if (ctx.cr0.eq) goto loc_8268F764;
loc_8268F760:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8268F764:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8268f84c
	if (!ctx.cr0.eq) goto loc_8268F84C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8268d5a8
	ctx.lr = 0x8268F774;
	sub_8268D5A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x8268f7a8
	if (!ctx.cr0.eq) goto loc_8268F7A8;
	// bl 0x8268f9c0
	ctx.lr = 0x8268F784;
	sub_8268F9C0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268f79c
	if (ctx.cr0.eq) goto loc_8268F79C;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fc90
	ctx.lr = 0x8268F79C;
	sub_8268FC90(ctx, base);
loc_8268F79C:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,15040
	ctx.r4.s64 = ctx.r11.s64 + 15040;
	// b 0x8268f80c
	goto loc_8268F80C;
loc_8268F7A8:
	// bl 0x8268fa28
	ctx.lr = 0x8268F7AC;
	sub_8268FA28(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268f7c8
	if (ctx.cr0.eq) goto loc_8268F7C8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fc90
	ctx.lr = 0x8268F7C8;
	sub_8268FC90(ctx, base);
loc_8268F7C8:
	// clrlwi. r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268f808
	if (ctx.cr0.eq) goto loc_8268F808;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fc90
	ctx.lr = 0x8268F7DC;
	sub_8268FC90(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fe60
	ctx.lr = 0x8268F7E8;
	sub_8268FE60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268f9c0
	ctx.lr = 0x8268F7F0;
	sub_8268F9C0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268f808
	if (ctx.cr0.eq) goto loc_8268F808;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fc90
	ctx.lr = 0x8268F808;
	sub_8268FC90(ctx, base);
loc_8268F808:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_8268F80C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fc90
	ctx.lr = 0x8268F814;
	sub_8268FC90(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r11,r11,5,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1F;
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x8268f840
	if (ctx.cr6.lt) goto loc_8268F840;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bne 0x8268f838
	if (!ctx.cr0.eq) goto loc_8268F838;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_8268F838:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fc90
	ctx.lr = 0x8268F840;
	sub_8268FC90(ctx, base);
loc_8268F840:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268d9f8
	ctx.lr = 0x8268F84C;
	sub_8268D9F8(ctx, base);
loc_8268F84C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268f9c0
	ctx.lr = 0x8268F854;
	sub_8268F9C0(ctx, base);
	// lwz r3,8236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268F860"))) PPC_WEAK_FUNC(sub_8268F860);
PPC_FUNC_IMPL(__imp__sub_8268F860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x8268F868;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// not r10,r8
	ctx.r10.u64 = ~ctx.r8.u64;
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// lis r9,-32151
	ctx.r9.s64 = -2107047936;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// stb r27,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r27.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r10,13(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13, ctx.r10.u8);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// stb r27,8232(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8232, ctx.r27.u8);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// stw r11,8240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8240, ctx.r11.u32);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// stw r11,8236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8236, ctx.r11.u32);
	// addi r10,r9,-1320
	ctx.r10.s64 = ctx.r9.s64 + -1320;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8266dec8
	ctx.lr = 0x8268F8D8;
	sub_8266DEC8(ctx, base);
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r10,r11,-5032
	ctx.r10.s64 = ctx.r11.s64 + -5032;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8266dec8
	ctx.lr = 0x8268F904;
	sub_8266DEC8(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt 0x8268f9b4
	if (ctx.cr0.lt) goto loc_8268F9B4;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r10,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8268f9b4
	if (!ctx.cr0.eq) goto loc_8268F9B4;
	// lwz r11,8240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8240);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mulli r28,r11,12
	ctx.r28.s64 = ctx.r11.s64 * 12;
	// addi r11,r28,12
	ctx.r11.s64 = ctx.r28.s64 + 12;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x8268f9b4
	if (ctx.cr6.gt) goto loc_8268F9B4;
	// rlwinm. r11,r10,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x8268f94c
	if (ctx.cr0.eq) goto loc_8268F94C;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,15072
	ctx.r4.s64 = ctx.r11.s64 + 15072;
	// bl 0x8268fd98
	ctx.lr = 0x8268F948;
	sub_8268FD98(ctx, base);
	// b 0x8268f958
	goto loc_8268F958;
loc_8268F94C:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,5180
	ctx.r4.s64 = ctx.r11.s64 + 5180;
	// bl 0x8268fa88
	ctx.lr = 0x8268F958;
	sub_8268FA88(ctx, base);
loc_8268F958:
	// stb r27,8232(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8232, ctx.r27.u8);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,15220
	ctx.r4.s64 = ctx.r11.s64 + 15220;
	// add r29,r28,r30
	ctx.r29.u64 = ctx.r28.u64 + ctx.r30.u64;
	// bl 0x8268fd98
	ctx.lr = 0x8268F970;
	sub_8268FD98(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,15276
	ctx.r4.s64 = ctx.r11.s64 + 15276;
	// bl 0x8268fc90
	ctx.lr = 0x8268F980;
	sub_8268FC90(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,8(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r4,r11,15048
	ctx.r4.s64 = ctx.r11.s64 + 15048;
	// lwz r6,4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwzx r5,r28,r30
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r30.u32);
	// bl 0x8268fc90
	ctx.lr = 0x8268F99C;
	sub_8268FC90(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,15204
	ctx.r4.s64 = ctx.r11.s64 + 15204;
	// bl 0x8268fd98
	ctx.lr = 0x8268F9AC;
	sub_8268FD98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268f9c0
	ctx.lr = 0x8268F9B4;
	sub_8268F9C0(ctx, base);
loc_8268F9B4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268F9C0"))) PPC_WEAK_FUNC(sub_8268F9C0);
PPC_FUNC_IMPL(__imp__sub_8268F9C0) {
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
	// lbz r11,8232(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8232);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8268fa10
	if (!ctx.cr0.eq) goto loc_8268FA10;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268f9fc
	if (ctx.cr0.eq) goto loc_8268F9FC;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,15072
	ctx.r4.s64 = ctx.r11.s64 + 15072;
	// bl 0x8268fd98
	ctx.lr = 0x8268F9F8;
	sub_8268FD98(ctx, base);
	// b 0x8268fa08
	goto loc_8268FA08;
loc_8268F9FC:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,5180
	ctx.r4.s64 = ctx.r11.s64 + 5180;
	// bl 0x8268fa88
	ctx.lr = 0x8268FA08;
	sub_8268FA88(ctx, base);
loc_8268FA08:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,8232(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8232, ctx.r11.u8);
loc_8268FA10:
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

__attribute__((alias("__imp__sub_8268FA24"))) PPC_WEAK_FUNC(sub_8268FA24);
PPC_FUNC_IMPL(__imp__sub_8268FA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268FA28"))) PPC_WEAK_FUNC(sub_8268FA28);
PPC_FUNC_IMPL(__imp__sub_8268FA28) {
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
	// bl 0x8268f9c0
	ctx.lr = 0x8268FA40;
	sub_8268F9C0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r11,25,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8268fa74
	if (ctx.cr0.eq) goto loc_8268FA74;
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x8268fa68
	if (ctx.cr0.eq) goto loc_8268FA68;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,15072
	ctx.r4.s64 = ctx.r11.s64 + 15072;
	// bl 0x8268fd98
	ctx.lr = 0x8268FA64;
	sub_8268FD98(ctx, base);
	// b 0x8268fa74
	goto loc_8268FA74;
loc_8268FA68:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,15080
	ctx.r4.s64 = ctx.r11.s64 + 15080;
	// bl 0x8268fa88
	ctx.lr = 0x8268FA74;
	sub_8268FA88(ctx, base);
loc_8268FA74:
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

__attribute__((alias("__imp__sub_8268FA88"))) PPC_WEAK_FUNC(sub_8268FA88);
PPC_FUNC_IMPL(__imp__sub_8268FA88) {
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
	// bl 0x8268fb90
	ctx.lr = 0x8268FAC4;
	sub_8268FB90(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268FAD4"))) PPC_WEAK_FUNC(sub_8268FAD4);
PPC_FUNC_IMPL(__imp__sub_8268FAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268FAD8"))) PPC_WEAK_FUNC(sub_8268FAD8);
PPC_FUNC_IMPL(__imp__sub_8268FAD8) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268fb70
	if (ctx.cr0.eq) goto loc_8268FB70;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268fb20
	if (ctx.cr0.eq) goto loc_8268FB20;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r6,r11,15084
	ctx.r6.s64 = ctx.r11.s64 + 15084;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8268fec8
	ctx.lr = 0x8268FB20;
	sub_8268FEC8(ctx, base);
loc_8268FB20:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r11,20,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x8268fb48
	if (ctx.cr6.eq) goto loc_8268FB48;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x8268fb48
	if (ctx.cr6.eq) goto loc_8268FB48;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// beq cr6,0x8268fb48
	if (ctx.cr6.eq) goto loc_8268FB48;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bne cr6,0x8268fb70
	if (!ctx.cr6.eq) goto loc_8268FB70;
loc_8268FB48:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrlwi r8,r10,19
	ctx.r8.u64 = ctx.r10.u32 & 0x1FFF;
	// rlwinm r10,r8,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r8,r8,27
	ctx.r8.u64 = ctx.r8.u32 & 0x1F;
	// slw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
loc_8268FB70:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_8268FB8C"))) PPC_WEAK_FUNC(sub_8268FB8C);
PPC_FUNC_IMPL(__imp__sub_8268FB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268FB90"))) PPC_WEAK_FUNC(sub_8268FB90);
PPC_FUNC_IMPL(__imp__sub_8268FB90) {
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
	// stwu r1,-2160(r1)
	ea = -2160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8268fc74
	if (ctx.cr6.eq) goto loc_8268FC74;
	// lwz r11,8236(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8236);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8268fc74
	if (ctx.cr6.lt) goto loc_8268FC74;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,2048
	ctx.r4.s64 = 2048;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83179444
	ctx.lr = 0x8268FBD0;
	__imp___vsnprintf(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble 0x8268fc74
	if (!ctx.cr0.gt) goto loc_8268FC74;
	// lbz r11,8233(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8233);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8268fc50
	if (ctx.cr0.eq) goto loc_8268FC50;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stb r10,8233(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8233, ctx.r10.u8);
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x8268fc1c
	if (ctx.cr6.eq) goto loc_8268FC1C;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// beq cr6,0x8268fc1c
	if (ctx.cr6.eq) goto loc_8268FC1C;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x8268fc14
	if (ctx.cr6.lt) goto loc_8268FC14;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// ble cr6,0x8268fc1c
	if (!ctx.cr6.gt) goto loc_8268FC1C;
loc_8268FC14:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8268fc20
	goto loc_8268FC20;
loc_8268FC1C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8268FC20:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8268fc50
	if (!ctx.cr0.eq) goto loc_8268FC50;
	// lwz r11,8216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8216);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,8220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8220);
	// addi r4,r10,4404
	ctx.r4.s64 = ctx.r10.s64 + 4404;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268FC44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8268fc50
	if (!ctx.cr0.lt) goto loc_8268FC50;
	// stw r3,8236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8236, ctx.r3.u32);
loc_8268FC50:
	// lwz r11,8216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8216);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,8220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8220);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268FC68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8268fc74
	if (!ctx.cr0.lt) goto loc_8268FC74;
	// stw r3,8236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8236, ctx.r3.u32);
loc_8268FC74:
	// addi r1,r1,2160
	ctx.r1.s64 = ctx.r1.s64 + 2160;
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

__attribute__((alias("__imp__sub_8268FC8C"))) PPC_WEAK_FUNC(sub_8268FC8C);
PPC_FUNC_IMPL(__imp__sub_8268FC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268FC90"))) PPC_WEAK_FUNC(sub_8268FC90);
PPC_FUNC_IMPL(__imp__sub_8268FC90) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stb r11,8232(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8232, ctx.r11.u8);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8268fb90
	ctx.lr = 0x8268FCD4;
	sub_8268FB90(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268FCE4"))) PPC_WEAK_FUNC(sub_8268FCE4);
PPC_FUNC_IMPL(__imp__sub_8268FCE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268FCE8"))) PPC_WEAK_FUNC(sub_8268FCE8);
PPC_FUNC_IMPL(__imp__sub_8268FCE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x8268FCF0;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// rlwinm. r9,r9,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r29,r11,-30212
	ctx.r29.s64 = ctx.r11.s64 + -30212;
	// addi r28,r10,-30204
	ctx.r28.s64 = ctx.r10.s64 + -30204;
	// bne 0x8268fd24
	if (!ctx.cr0.eq) goto loc_8268FD24;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8268fd5c
	if (ctx.cr6.eq) goto loc_8268FD5C;
loc_8268FD24:
	// clrlwi. r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268fd3c
	if (ctx.cr0.eq) goto loc_8268FD3C;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-30056
	ctx.r4.s64 = ctx.r11.s64 + -30056;
	// bl 0x8268fc90
	ctx.lr = 0x8268FD3C;
	sub_8268FC90(ctx, base);
loc_8268FD3C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bne cr6,0x8268fd4c
	if (!ctx.cr6.eq) goto loc_8268FD4C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_8268FD4C:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,15132
	ctx.r4.s64 = ctx.r11.s64 + 15132;
	// bl 0x8268fc90
	ctx.lr = 0x8268FD5C;
	sub_8268FC90(ctx, base);
loc_8268FD5C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8268fd70
	if (!ctx.cr0.eq) goto loc_8268FD70;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x8268fd90
	if (!ctx.cr6.eq) goto loc_8268FD90;
loc_8268FD70:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bne cr6,0x8268fd80
	if (!ctx.cr6.eq) goto loc_8268FD80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_8268FD80:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,15144
	ctx.r4.s64 = ctx.r11.s64 + 15144;
	// bl 0x8268fc90
	ctx.lr = 0x8268FD90;
	sub_8268FC90(ctx, base);
loc_8268FD90:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268FD98"))) PPC_WEAK_FUNC(sub_8268FD98);
PPC_FUNC_IMPL(__imp__sub_8268FD98) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268fdd8
	if (ctx.cr0.eq) goto loc_8268FDD8;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// stb r11,8233(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8233, ctx.r11.u8);
	// addi r4,r10,-24420
	ctx.r4.s64 = ctx.r10.s64 + -24420;
	// bl 0x8268fc90
	ctx.lr = 0x8268FDD0;
	sub_8268FC90(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,8233(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8233, ctx.r11.u8);
loc_8268FDD8:
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

__attribute__((alias("__imp__sub_8268FDEC"))) PPC_WEAK_FUNC(sub_8268FDEC);
PPC_FUNC_IMPL(__imp__sub_8268FDEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268FDF0"))) PPC_WEAK_FUNC(sub_8268FDF0);
PPC_FUNC_IMPL(__imp__sub_8268FDF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8268FDF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r11,15188
	ctx.r4.s64 = ctx.r11.s64 + 15188;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8268fd98
	ctx.lr = 0x8268FE14;
	sub_8268FD98(ctx, base);
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268fe28
	if (ctx.cr0.eq) goto loc_8268FE28;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r6,r11,15196
	ctx.r6.s64 = ctx.r11.s64 + 15196;
	// b 0x8268fe30
	goto loc_8268FE30;
loc_8268FE28:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r6,r11,32570
	ctx.r6.s64 = ctx.r11.s64 + 32570;
loc_8268FE30:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,19420
	ctx.r4.s64 = ctx.r11.s64 + 19420;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268fc90
	ctx.lr = 0x8268FE44;
	sub_8268FC90(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,15204
	ctx.r4.s64 = ctx.r11.s64 + 15204;
	// bl 0x8268fd98
	ctx.lr = 0x8268FE54;
	sub_8268FD98(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268FE5C"))) PPC_WEAK_FUNC(sub_8268FE5C);
PPC_FUNC_IMPL(__imp__sub_8268FE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268FE60"))) PPC_WEAK_FUNC(sub_8268FE60);
PPC_FUNC_IMPL(__imp__sub_8268FE60) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r11,15212
	ctx.r4.s64 = ctx.r11.s64 + 15212;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8268fd98
	ctx.lr = 0x8268FE88;
	sub_8268FD98(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-24420
	ctx.r4.s64 = ctx.r11.s64 + -24420;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8268fc90
	ctx.lr = 0x8268FE9C;
	sub_8268FC90(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,15204
	ctx.r4.s64 = ctx.r11.s64 + 15204;
	// bl 0x8268fd98
	ctx.lr = 0x8268FEAC;
	sub_8268FD98(ctx, base);
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

__attribute__((alias("__imp__sub_8268FEC4"))) PPC_WEAK_FUNC(sub_8268FEC4);
PPC_FUNC_IMPL(__imp__sub_8268FEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268FEC8"))) PPC_WEAK_FUNC(sub_8268FEC8);
PPC_FUNC_IMPL(__imp__sub_8268FEC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8268FED0;
	__savegprlr_29(ctx, base);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r6,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r6.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8268f9c0
	ctx.lr = 0x8268FEF8;
	sub_8268F9C0(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,15220
	ctx.r4.s64 = ctx.r11.s64 + 15220;
	// bl 0x8268fd98
	ctx.lr = 0x8268FF08;
	sub_8268FD98(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,15276
	ctx.r4.s64 = ctx.r11.s64 + 15276;
	// bl 0x8268fc90
	ctx.lr = 0x8268FF18;
	sub_8268FC90(ctx, base);
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x8268ff38
	if (ctx.cr0.eq) goto loc_8268FF38;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,15280
	ctx.r4.s64 = ctx.r11.s64 + 15280;
	// bl 0x8268fc90
	ctx.lr = 0x8268FF34;
	sub_8268FC90(ctx, base);
	// b 0x8268ff5c
	goto loc_8268FF5C;
loc_8268FF38:
	// srawi r11,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 1;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r9,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r30.s32 >> 1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r10,15288
	ctx.r4.s64 = ctx.r10.s64 + 15288;
	// addze r5,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r5.s64 = temp.s64;
	// subf r6,r11,r30
	ctx.r6.s64 = ctx.r30.s64 - ctx.r11.s64;
	// bl 0x8268fc90
	ctx.lr = 0x8268FF5C;
	sub_8268FC90(ctx, base);
loc_8268FF5C:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,15296
	ctx.r4.s64 = ctx.r11.s64 + 15296;
	// bl 0x8268fc90
	ctx.lr = 0x8268FF6C;
	sub_8268FC90(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// lwz r4,204(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x8268fb90
	ctx.lr = 0x8268FF88;
	sub_8268FB90(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,15204
	ctx.r4.s64 = ctx.r11.s64 + 15204;
	// bl 0x8268fd98
	ctx.lr = 0x8268FF98;
	sub_8268FD98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268f9c0
	ctx.lr = 0x8268FFA0;
	sub_8268F9C0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268FFA8"))) PPC_WEAK_FUNC(sub_8268FFA8);
PPC_FUNC_IMPL(__imp__sub_8268FFA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x8268FFB0;
	__savegprlr_25(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-8400(r1)
	ea = -8400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// lwz r10,8484(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 8484);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// clrlwi r11,r10,30
	ctx.r11.u64 = ctx.r10.u32 & 0x3;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8269000c
	if (ctx.cr6.eq) goto loc_8269000C;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x8268fffc
	if (!ctx.cr6.eq) goto loc_8268FFFC;
	// li r31,8
	ctx.r31.s64 = 8;
	// b 0x8269000c
	goto loc_8269000C;
loc_8268FFFC:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8269000c
	if (ctx.cr6.eq) goto loc_8269000C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_8269000C:
	// rlwinm. r11,r10,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82690018
	if (ctx.cr0.eq) goto loc_82690018;
	// ori r31,r31,2
	ctx.r31.u64 = ctx.r31.u64 | 2;
loc_82690018:
	// rlwinm. r11,r10,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82690024
	if (ctx.cr0.eq) goto loc_82690024;
	// ori r31,r31,4
	ctx.r31.u64 = ctx.r31.u64 | 4;
loc_82690024:
	// rlwinm. r11,r10,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82690030
	if (ctx.cr0.eq) goto loc_82690030;
	// ori r31,r31,32
	ctx.r31.u64 = ctx.r31.u64 | 32;
loc_82690030:
	// rlwinm. r11,r10,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8269003c
	if (ctx.cr0.eq) goto loc_8269003C;
	// ori r31,r31,16
	ctx.r31.u64 = ctx.r31.u64 | 16;
loc_8269003C:
	// rlwinm. r11,r10,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82690048
	if (ctx.cr0.eq) goto loc_82690048;
	// ori r31,r31,64
	ctx.r31.u64 = ctx.r31.u64 | 64;
loc_82690048:
	// rlwinm. r11,r10,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82690054
	if (ctx.cr0.eq) goto loc_82690054;
	// ori r31,r31,128
	ctx.r31.u64 = ctx.r31.u64 | 128;
loc_82690054:
	// rlwinm. r11,r10,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82690060
	if (ctx.cr0.eq) goto loc_82690060;
	// ori r31,r31,256
	ctx.r31.u64 = ctx.r31.u64 | 256;
loc_82690060:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826900b4
	if (ctx.cr6.lt) goto loc_826900B4;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82fa7cf0
	ctx.lr = 0x82690078;
	sub_82FA7CF0(ctx, base);
	// lwz r11,8492(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 8492);
	// lwz r10,8500(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 8500);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r26,8304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 8304, ctx.r26.u32);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// stw r25,8308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 8308, ctx.r25.u32);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// stb r9,8313(r1)
	PPC_STORE_U8(ctx.r1.u32 + 8313, ctx.r9.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r11,8296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 8296, ctx.r11.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r10,8300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 8300, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8268f860
	ctx.lr = 0x826900B4;
	sub_8268F860(ctx, base);
loc_826900B4:
	// addi r1,r1,8400
	ctx.r1.s64 = ctx.r1.s64 + 8400;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826900BC"))) PPC_WEAK_FUNC(sub_826900BC);
PPC_FUNC_IMPL(__imp__sub_826900BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826900C0"))) PPC_WEAK_FUNC(sub_826900C0);
PPC_FUNC_IMPL(__imp__sub_826900C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,2572
	ctx.r3.s64 = ctx.r11.s64 + 2572;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826900CC"))) PPC_WEAK_FUNC(sub_826900CC);
PPC_FUNC_IMPL(__imp__sub_826900CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826900D0"))) PPC_WEAK_FUNC(sub_826900D0);
PPC_FUNC_IMPL(__imp__sub_826900D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,2620
	ctx.r3.s64 = ctx.r11.s64 + 2620;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826900DC"))) PPC_WEAK_FUNC(sub_826900DC);
PPC_FUNC_IMPL(__imp__sub_826900DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826900E0"))) PPC_WEAK_FUNC(sub_826900E0);
PPC_FUNC_IMPL(__imp__sub_826900E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r11,r4,24,0,7
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 24) & 0xFF000000) | (ctx.r11.u64 & 0xFFFFFFFF00FFFFFF);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826900F0"))) PPC_WEAK_FUNC(sub_826900F0);
PPC_FUNC_IMPL(__imp__sub_826900F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// lbz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82690130
	if (ctx.cr6.eq) goto loc_82690130;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// subf r7,r6,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r6.s64;
loc_82690110:
	// cmpwi cr6,r9,95
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 95, ctx.xer);
	// beq cr6,0x82690130
	if (ctx.cr6.eq) goto loc_82690130;
	// stbx r10,r7,r11
	PPC_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82690110
	if (!ctx.cr6.eq) goto loc_82690110;
loc_82690130:
	// add r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 + ctx.r8.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stbx r10,r8,r4
	PPC_STORE_U8(ctx.r8.u32 + ctx.r4.u32, ctx.r10.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82690148"))) PPC_WEAK_FUNC(sub_82690148);
PPC_FUNC_IMPL(__imp__sub_82690148) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa764c
	ctx.lr = 0x82690150;
	__savegprlr_17(ctx, base);
	// lis r20,-31966
	ctx.r20.s64 = -2094923776;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r11,r11,15424
	ctx.r11.s64 = ctx.r11.s64 + 15424;
	// lwz r10,-25452(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + -25452);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82690470
	if (!ctx.cr6.eq) goto loc_82690470;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stw r9,1592(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1592, ctx.r9.u32);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stw r10,-25452(r20)
	PPC_STORE_U32(ctx.r20.u32 + -25452, ctx.r10.u32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lfs f13,4888(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4888);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f13,1588(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1588, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,5184(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f10,5180(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 5180);
	ctx.f10.f64 = double(temp.f32);
	// lis r29,-32256
	ctx.r29.s64 = -2113929216;
	// lfs f9,5176(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 5176);
	ctx.f9.f64 = double(temp.f32);
	// addi r26,r8,32570
	ctx.r26.s64 = ctx.r8.s64 + 32570;
	// stfs f0,1604(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1604, temp.u32);
	// lis r31,-32256
	ctx.r31.s64 = -2113929216;
	// lfs f12,5172(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5172);
	ctx.f12.f64 = double(temp.f32);
	// lis r30,-32256
	ctx.r30.s64 = -2113929216;
	// lfs f8,5168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5168);
	ctx.f8.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stfs f0,1652(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1652, temp.u32);
	// addi r6,r6,5156
	ctx.r6.s64 = ctx.r6.s64 + 5156;
	// lfs f11,5152(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 5152);
	ctx.f11.f64 = double(temp.f32);
	// lis r7,-32227
	ctx.r7.s64 = -2112028672;
	// stfs f0,1668(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1668, temp.u32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// stw r6,1632(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1632, ctx.r6.u32);
	// addi r7,r7,-15868
	ctx.r7.s64 = ctx.r7.s64 + -15868;
	// stfs f0,1684(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1684, temp.u32);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// stfs f0,1748(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1748, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f7,5148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 5148);
	ctx.f7.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f6,5144(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 5144);
	ctx.f6.f64 = double(temp.f32);
	// lis r28,-32256
	ctx.r28.s64 = -2113929216;
	// lfs f0,5140(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 5140);
	ctx.f0.f64 = double(temp.f32);
	// lis r27,-32256
	ctx.r27.s64 = -2113929216;
	// stw r7,1616(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1616, ctx.r7.u32);
	// lis r25,-32256
	ctx.r25.s64 = -2113929216;
	// stfs f10,1620(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1620, temp.u32);
	// lis r24,-32256
	ctx.r24.s64 = -2113929216;
	// stfs f9,1636(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1636, temp.u32);
	// lis r23,-32256
	ctx.r23.s64 = -2113929216;
	// stfs f12,1700(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1700, temp.u32);
	// lis r22,-32256
	ctx.r22.s64 = -2113929216;
	// stfs f8,1716(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1716, temp.u32);
	// lis r21,-32256
	ctx.r21.s64 = -2113929216;
	// stfs f7,1732(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1732, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f12,1764(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1764, temp.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stfs f6,1780(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1780, temp.u32);
	// addi r29,r4,5128
	ctx.r29.s64 = ctx.r4.s64 + 5128;
	// stfs f11,1796(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1796, temp.u32);
	// stfs f11,1812(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1812, temp.u32);
	// stw r26,1600(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1600, ctx.r26.u32);
	// stfs f0,1828(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1828, temp.u32);
	// stw r10,1596(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1596, ctx.r10.u32);
	// stw r9,1608(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1608, ctx.r9.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// stw r8,1612(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1612, ctx.r8.u32);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// stw r10,1624(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1624, ctx.r10.u32);
	// addi r28,r28,5112
	ctx.r28.s64 = ctx.r28.s64 + 5112;
	// stw r9,1628(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1628, ctx.r9.u32);
	// addi r27,r27,5104
	ctx.r27.s64 = ctx.r27.s64 + 5104;
	// stw r6,1644(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1644, ctx.r6.u32);
	// addi r25,r25,5096
	ctx.r25.s64 = ctx.r25.s64 + 5096;
	// stw r26,1648(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1648, ctx.r26.u32);
	// addi r24,r24,5084
	ctx.r24.s64 = ctx.r24.s64 + 5084;
	// addi r23,r23,5072
	ctx.r23.s64 = ctx.r23.s64 + 5072;
	// addi r22,r22,5056
	ctx.r22.s64 = ctx.r22.s64 + 5056;
	// addi r21,r21,5048
	ctx.r21.s64 = ctx.r21.s64 + 5048;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,1672(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1672, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,1736(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1736, ctx.r10.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r10,1832(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1832, ctx.r10.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r8,1660(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1660, ctx.r8.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r9,1676(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1676, ctx.r9.u32);
	// addi r10,r10,5028
	ctx.r10.s64 = ctx.r10.s64 + 5028;
	// stw r8,1720(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1720, ctx.r8.u32);
	// lis r20,-32256
	ctx.r20.s64 = -2113929216;
	// stw r9,1740(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1740, ctx.r9.u32);
	// lis r19,-32256
	ctx.r19.s64 = -2113929216;
	// stw r8,1804(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1804, ctx.r8.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r9,1836(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1836, ctx.r9.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r6,1692(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1692, ctx.r6.u32);
	// lis r18,-32256
	ctx.r18.s64 = -2113929216;
	// stw r6,1768(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1768, ctx.r6.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stw r29,1696(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1696, ctx.r29.u32);
	// lis r17,-32256
	ctx.r17.s64 = -2113929216;
	// stw r5,1704(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1704, ctx.r5.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r27,1728(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1728, ctx.r27.u32);
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r28,1712(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1712, ctx.r28.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r5,1784(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1784, ctx.r5.u32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stw r7,1640(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1640, ctx.r7.u32);
	// stfs f13,1924(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1924, temp.u32);
	// stw r4,1656(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1656, ctx.r4.u32);
	// lfs f0,5020(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 5020);
	ctx.f0.f64 = double(temp.f32);
	// stw r7,1688(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1688, ctx.r7.u32);
	// lfs f13,5024(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 5024);
	ctx.f13.f64 = double(temp.f32);
	// stw r4,1708(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1708, ctx.r4.u32);
	// lfs f12,4996(r18)
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 4996);
	ctx.f12.f64 = double(temp.f32);
	// stw r7,1756(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1756, ctx.r7.u32);
	// addi r7,r9,5000
	ctx.r7.s64 = ctx.r9.s64 + 5000;
	// stw r4,1788(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1788, ctx.r4.u32);
	// addi r4,r8,5008
	ctx.r4.s64 = ctx.r8.s64 + 5008;
	// stw r31,1724(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1724, ctx.r31.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,1816(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1816, ctx.r31.u32);
	// lis r31,-32256
	ctx.r31.s64 = -2113929216;
	// stw r30,1752(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1752, ctx.r30.u32);
	// addi r30,r6,4972
	ctx.r30.s64 = ctx.r6.s64 + 4972;
	// stw r10,1840(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1840, ctx.r10.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,1772(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1772, ctx.r29.u32);
	// stw r26,1664(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1664, ctx.r26.u32);
	// addi r29,r5,4948
	ctx.r29.s64 = ctx.r5.s64 + 4948;
	// stw r26,1680(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1680, ctx.r26.u32);
	// lfs f11,4968(r17)
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + 4968);
	ctx.f11.f64 = double(temp.f32);
	// stw r26,1744(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1744, ctx.r26.u32);
	// stfs f13,1844(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1844, temp.u32);
	// stw r27,1820(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1820, ctx.r27.u32);
	// stfs f0,1860(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1860, temp.u32);
	// stw r28,1800(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1800, ctx.r28.u32);
	// stfs f0,1876(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1876, temp.u32);
	// stw r25,1760(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1760, ctx.r25.u32);
	// lis r27,-32256
	ctx.r27.s64 = -2113929216;
	// stw r24,1776(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1776, ctx.r24.u32);
	// lis r26,-32256
	ctx.r26.s64 = -2113929216;
	// stw r23,1792(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1792, ctx.r23.u32);
	// addi r28,r31,4936
	ctx.r28.s64 = ctx.r31.s64 + 4936;
	// stw r22,1808(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1808, ctx.r22.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r21,1824(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1824, ctx.r21.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r7,1856(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1856, ctx.r7.u32);
	// stw r9,1848(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1848, ctx.r9.u32);
	// stw r4,1872(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1872, ctx.r4.u32);
	// stw r8,1852(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1852, ctx.r8.u32);
	// stw r10,1884(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1884, ctx.r10.u32);
	// stw r9,1896(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1896, ctx.r9.u32);
	// stw r30,1888(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1888, ctx.r30.u32);
	// lis r25,-32256
	ctx.r25.s64 = -2113929216;
	// stfs f0,1892(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1892, temp.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// stfs f0,1908(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1908, temp.u32);
	// addi r27,r27,4920
	ctx.r27.s64 = ctx.r27.s64 + 4920;
	// stfs f12,1940(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1940, temp.u32);
	// addi r26,r26,4908
	ctx.r26.s64 = ctx.r26.s64 + 4908;
	// stfs f11,1956(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1956, temp.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stfs f0,1972(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1972, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r6,1864(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1864, ctx.r6.u32);
	// addi r30,r25,4892
	ctx.r30.s64 = ctx.r25.s64 + 4892;
	// stw r5,1868(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1868, ctx.r5.u32);
	// stw r31,1880(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1880, ctx.r31.u32);
	// stw r8,1900(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1900, ctx.r8.u32);
	// stw r10,1948(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1948, ctx.r10.u32);
	// stw r9,1960(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1960, ctx.r9.u32);
	// stw r29,1904(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1904, ctx.r29.u32);
	// stw r7,1912(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1912, ctx.r7.u32);
	// stw r6,1916(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1916, ctx.r6.u32);
	// stw r28,1920(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1920, ctx.r28.u32);
	// stw r5,1928(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1928, ctx.r5.u32);
	// stw r4,1932(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1932, ctx.r4.u32);
	// stw r27,1936(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1936, ctx.r27.u32);
	// stw r31,1944(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1944, ctx.r31.u32);
	// stw r26,1952(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1952, ctx.r26.u32);
	// stw r30,1968(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1968, ctx.r30.u32);
	// stw r10,1964(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1964, ctx.r10.u32);
	// stw r9,1976(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1976, ctx.r9.u32);
	// stw r8,1980(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1980, ctx.r8.u32);
loc_82690470:
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82fa769c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269047C"))) PPC_WEAK_FUNC(sub_8269047C);
PPC_FUNC_IMPL(__imp__sub_8269047C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82690480"))) PPC_WEAK_FUNC(sub_82690480);
PPC_FUNC_IMPL(__imp__sub_82690480) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,45(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 45);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x826904a0
	if (!ctx.cr6.eq) goto loc_826904A0;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_826904A0:
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
	// bne cr6,0x826904c8
	if (!ctx.cr6.eq) goto loc_826904C8;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_826904C8:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x826904e8
	if (!ctx.cr6.eq) goto loc_826904E8;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_826904E8:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826904F8"))) PPC_WEAK_FUNC(sub_826904F8);
PPC_FUNC_IMPL(__imp__sub_826904F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,45(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,45(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 45);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82690544
	if (!ctx.cr6.eq) goto loc_82690544;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r9,45(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8269053c
	if (!ctx.cr6.eq) goto loc_8269053C;
loc_82690528:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,45(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82690528
	if (ctx.cr6.eq) goto loc_82690528;
loc_8269053C:
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82690544:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,45(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8269057c
	if (!ctx.cr6.eq) goto loc_8269057C;
loc_82690554:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8269057c
	if (!ctx.cr6.eq) goto loc_8269057C;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,45(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82690554
	if (ctx.cr6.eq) goto loc_82690554;
loc_8269057C:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82690584"))) PPC_WEAK_FUNC(sub_82690584);
PPC_FUNC_IMPL(__imp__sub_82690584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82690588"))) PPC_WEAK_FUNC(sub_82690588);
PPC_FUNC_IMPL(__imp__sub_82690588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82690590;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826905f0
	if (ctx.cr6.eq) goto loc_826905F0;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_826905A8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826905a8
	if (!ctx.cr6.eq) goto loc_826905A8;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa76f0
	ctx.lr = 0x826905D0;
	sub_82FA76F0(ctx, base);
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826905f0
	if (ctx.cr6.eq) goto loc_826905F0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82fa5590
	ctx.lr = 0x826905E8;
	sub_82FA5590(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,8(r29)
	PPC_STORE_U8(ctx.r29.u32 + 8, ctx.r11.u8);
loc_826905F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826905F8"))) PPC_WEAK_FUNC(sub_826905F8);
PPC_FUNC_IMPL(__imp__sub_826905F8) {
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
	// li r31,0
	ctx.r31.s64 = 0;
loc_82690614:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82690148
	ctx.lr = 0x8269061C;
	sub_82690148(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82fa4460
	ctx.lr = 0x82690628;
	sub_82FA4460(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82690658
	if (ctx.cr6.eq) goto loc_82690658;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,124
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 124, ctx.xer);
	// blt cr6,0x82690614
	if (ctx.cr6.lt) goto loc_82690614;
	// li r3,124
	ctx.r3.s64 = 124;
loc_82690640:
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
loc_82690658:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82690640
	goto loc_82690640;
}

__attribute__((alias("__imp__sub_82690660"))) PPC_WEAK_FUNC(sub_82690660);
PPC_FUNC_IMPL(__imp__sub_82690660) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r31,0
	ctx.r31.s64 = 0;
	// lfs f5,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f5.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f1,f5
	ctx.f1.f64 = ctx.f5.f64;
	// lfs f4,5180(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5180);
	ctx.f4.f64 = double(temp.f32);
loc_82690688:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82690148
	ctx.lr = 0x82690690;
	sub_82690148(ctx, base);
	// lfs f12,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f4
	ctx.cr6.compare(ctx.f12.f64, ctx.f4.f64);
	// beq cr6,0x8269070c
	if (ctx.cr6.eq) goto loc_8269070C;
	// lwz r6,12(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// fmr f0,f5
	ctx.f0.f64 = ctx.f5.f64;
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f13,f5
	ctx.f13.f64 = ctx.f5.f64;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// fadds f12,f12,f1
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f1.f64));
	// blt cr6,0x826906e8
	if (ctx.cr6.lt) goto loc_826906E8;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r7,r6,-1
	ctx.r7.s64 = ctx.r6.s64 + -1;
	// li r11,0
	ctx.r11.s64 = 0;
loc_826906C4:
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// lfs f11,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// blt cr6,0x826906c4
	if (ctx.cr6.lt) goto loc_826906C4;
loc_826906E8:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82690704
	if (!ctx.cr6.lt) goto loc_82690704;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f11,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
loc_82690704:
	// fadds f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fadds f1,f0,f12
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
loc_8269070C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,124
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 124, ctx.xer);
	// blt cr6,0x82690688
	if (ctx.cr6.lt) goto loc_82690688;
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

__attribute__((alias("__imp__sub_8269072C"))) PPC_WEAK_FUNC(sub_8269072C);
PPC_FUNC_IMPL(__imp__sub_8269072C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82690730"))) PPC_WEAK_FUNC(sub_82690730);
PPC_FUNC_IMPL(__imp__sub_82690730) {
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
	// li r31,0
	ctx.r31.s64 = 0;
loc_8269074C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82690148
	ctx.lr = 0x82690754;
	sub_82690148(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_8269075C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82690780
	if (ctx.cr6.eq) goto loc_82690780;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8269075c
	if (ctx.cr6.eq) goto loc_8269075C;
loc_82690780:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x826907b4
	if (ctx.cr6.eq) goto loc_826907B4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,124
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 124, ctx.xer);
	// blt cr6,0x8269074c
	if (ctx.cr6.lt) goto loc_8269074C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5180(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5180);
	ctx.f1.f64 = double(temp.f32);
loc_8269079C:
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
loc_826907B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82690148
	ctx.lr = 0x826907BC;
	sub_82690148(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5180(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5180);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x826907d8
	if (!ctx.cr6.eq) goto loc_826907D8;
	// bl 0x82690660
	ctx.lr = 0x826907D4;
	sub_82690660(ctx, base);
	// b 0x8269079c
	goto loc_8269079C;
loc_826907D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82690148
	ctx.lr = 0x826907E0;
	sub_82690148(ctx, base);
	// lfs f1,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8269079c
	goto loc_8269079C;
}

__attribute__((alias("__imp__sub_826907E8"))) PPC_WEAK_FUNC(sub_826907E8);
PPC_FUNC_IMPL(__imp__sub_826907E8) {
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
	// bl 0x82690148
	ctx.lr = 0x826907F8;
	sub_82690148(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,5180(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5180);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x82690810
	if (!ctx.cr6.eq) goto loc_82690810;
	// bl 0x82690660
	ctx.lr = 0x82690810;
	sub_82690660(ctx, base);
loc_82690810:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82690820"))) PPC_WEAK_FUNC(sub_82690820);
PPC_FUNC_IMPL(__imp__sub_82690820) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82691540
	sub_82691540(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82690828"))) PPC_WEAK_FUNC(sub_82690828);
PPC_FUNC_IMPL(__imp__sub_82690828) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,45(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 45);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82690848
	if (!ctx.cr6.eq) goto loc_82690848;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_82690848:
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
	// bne cr6,0x82690870
	if (!ctx.cr6.eq) goto loc_82690870;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_82690870:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82690890
	if (!ctx.cr6.eq) goto loc_82690890;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_82690890:
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826908A0"))) PPC_WEAK_FUNC(sub_826908A0);
PPC_FUNC_IMPL(__imp__sub_826908A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x826908A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,5612
	ctx.r9.s64 = ctx.r10.s64 + 5612;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// lwz r29,0(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82690920
	if (ctx.cr6.eq) goto loc_82690920;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_826908D8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826908d8
	if (!ctx.cr6.eq) goto loc_826908D8;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fa76f0
	ctx.lr = 0x82690900;
	sub_82FA76F0(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82690920
	if (ctx.cr6.eq) goto loc_82690920;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82fa5590
	ctx.lr = 0x82690918;
	sub_82FA5590(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
loc_82690920:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269092C"))) PPC_WEAK_FUNC(sub_8269092C);
PPC_FUNC_IMPL(__imp__sub_8269092C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82690930"))) PPC_WEAK_FUNC(sub_82690930);
PPC_FUNC_IMPL(__imp__sub_82690930) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,5592
	ctx.r3.s64 = ctx.r11.s64 + 5592;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82690948"))) PPC_WEAK_FUNC(sub_82690948);
PPC_FUNC_IMPL(__imp__sub_82690948) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lbz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,5612
	ctx.r9.s64 = ctx.r11.s64 + 5612;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8269097c
	if (ctx.cr6.eq) goto loc_8269097C;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82fa27a8
	ctx.lr = 0x8269097C;
	sub_82FA27A8(ctx, base);
loc_8269097C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_8269099C"))) PPC_WEAK_FUNC(sub_8269099C);
PPC_FUNC_IMPL(__imp__sub_8269099C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826909A0"))) PPC_WEAK_FUNC(sub_826909A0);
PPC_FUNC_IMPL(__imp__sub_826909A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x826909A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r30,-1
	ctx.r30.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826909e0
	if (!ctx.cr6.eq) goto loc_826909E0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_826909E0:
	// cmpwi cr6,r11,97
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 97, ctx.xer);
	// bne cr6,0x82690a14
	if (!ctx.cr6.eq) goto loc_82690A14;
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r9,105
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 105, ctx.xer);
	// bne cr6,0x82690a14
	if (!ctx.cr6.eq) goto loc_82690A14;
	// lbz r9,2(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// cmplwi cr6,r9,100
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 100, ctx.xer);
	// bne cr6,0x82690a14
	if (!ctx.cr6.eq) goto loc_82690A14;
	// lbz r9,3(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// cmplwi cr6,r9,95
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 95, ctx.xer);
	// bne cr6,0x82690a14
	if (!ctx.cr6.eq) goto loc_82690A14;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// b 0x82690a50
	goto loc_82690A50;
loc_82690A14:
	// cmpwi cr6,r11,65
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 65, ctx.xer);
	// bne cr6,0x82690a8c
	if (!ctx.cr6.eq) goto loc_82690A8C;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,77
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 77, ctx.xer);
	// bne cr6,0x82690a8c
	if (!ctx.cr6.eq) goto loc_82690A8C;
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// cmplwi cr6,r11,73
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 73, ctx.xer);
	// bne cr6,0x82690a8c
	if (!ctx.cr6.eq) goto loc_82690A8C;
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// cmplwi cr6,r11,68
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 68, ctx.xer);
	// bne cr6,0x82690a8c
	if (!ctx.cr6.eq) goto loc_82690A8C;
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,95
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 95, ctx.xer);
	// bne cr6,0x82690a8c
	if (!ctx.cr6.eq) goto loc_82690A8C;
	// addi r11,r31,9
	ctx.r11.s64 = ctx.r31.s64 + 9;
loc_82690A50:
	// li r5,31
	ctx.r5.s64 = 31;
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// bl 0x82fa7cf0
	ctx.lr = 0x82690A68;
	sub_82FA7CF0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// bl 0x826900f0
	ctx.lr = 0x82690A74;
	sub_826900F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826905f8
	ctx.lr = 0x82690A7C;
	sub_826905F8(ctx, base);
	// lis r27,255
	ctx.r27.s64 = 16711680;
	// lwz r31,180(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// rlwinm r28,r3,24,0,7
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFF000000;
	// ori r27,r27,65535
	ctx.r27.u64 = ctx.r27.u64 | 65535;
loc_82690A8C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,5620
	ctx.r4.s64 = ctx.r11.s64 + 5620;
	// bl 0x82fa3928
	ctx.lr = 0x82690A9C;
	sub_82FA3928(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82690b20
	if (ctx.cr6.eq) goto loc_82690B20;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82690AAC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82690aac
	if (!ctx.cr6.eq) goto loc_82690AAC;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82690b1c
	if (ctx.cr6.eq) goto loc_82690B1C;
loc_82690AD0:
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,97
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 97, ctx.xer);
	// blt cr6,0x82690af0
	if (ctx.cr6.lt) goto loc_82690AF0;
	// cmpwi cr6,r11,122
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 122, ctx.xer);
	// bgt cr6,0x82690af0
	if (ctx.cr6.gt) goto loc_82690AF0;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
loc_82690AF0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82690AF8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82690af8
	if (!ctx.cr6.eq) goto loc_82690AF8;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82690ad0
	if (!ctx.cr6.eq) goto loc_82690AD0;
loc_82690B1C:
	// addi r31,r31,10
	ctx.r31.s64 = ctx.r31.s64 + 10;
loc_82690B20:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82690B28:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82690b28
	if (!ctx.cr6.eq) goto loc_82690B28;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82690bb0
	if (ctx.cr6.eq) goto loc_82690BB0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// extsb r8,r29
	ctx.r8.s64 = ctx.r29.s8;
	// addi r9,r11,3864
	ctx.r9.s64 = ctx.r11.s64 + 3864;
loc_82690B58:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r7,r11
	ctx.r7.s64 = ctx.r11.s8;
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x82690bb0
	if (ctx.cr6.eq) goto loc_82690BB0;
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r4,r10,24,8,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// xor r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 ^ ctx.r6.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lwzx r10,r3,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// xor r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r4.u64;
loc_82690B8C:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82690b8c
	if (!ctx.cr6.eq) goto loc_82690B8C;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82690b58
	if (!ctx.cr6.eq) goto loc_82690B58;
loc_82690BB0:
	// and r11,r10,r27
	ctx.r11.u64 = ctx.r10.u64 & ctx.r27.u64;
	// or r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 | ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82690BC0"))) PPC_WEAK_FUNC(sub_82690BC0);
PPC_FUNC_IMPL(__imp__sub_82690BC0) {
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
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82690c1c
	if (ctx.cr6.eq) goto loc_82690C1C;
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82690bf8
	if (ctx.cr6.eq) goto loc_82690BF8;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82fa27a8
	ctx.lr = 0x82690BF8;
	sub_82FA27A8(ctx, base);
loc_82690BF8:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82690c38
	if (ctx.cr6.eq) goto loc_82690C38;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82690588
	ctx.lr = 0x82690C1C;
	sub_82690588(ctx, base);
loc_82690C1C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82690C20:
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
loc_82690C38:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x82690c20
	goto loc_82690C20;
}

__attribute__((alias("__imp__sub_82690C44"))) PPC_WEAK_FUNC(sub_82690C44);
PPC_FUNC_IMPL(__imp__sub_82690C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82690C48"))) PPC_WEAK_FUNC(sub_82690C48);
PPC_FUNC_IMPL(__imp__sub_82690C48) {
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
	// lbz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,5612
	ctx.r9.s64 = ctx.r11.s64 + 5612;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82690c84
	if (ctx.cr6.eq) goto loc_82690C84;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82fa27a8
	ctx.lr = 0x82690C84;
	sub_82FA27A8(ctx, base);
loc_82690C84:
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82690ca8
	if (ctx.cr6.eq) goto loc_82690CA8;
	// bl 0x82691540
	ctx.lr = 0x82690CA4;
	sub_82691540(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82690CA8:
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

__attribute__((alias("__imp__sub_82690CC0"))) PPC_WEAK_FUNC(sub_82690CC0);
PPC_FUNC_IMPL(__imp__sub_82690CC0) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,5612
	ctx.r9.s64 = ctx.r10.s64 + 5612;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// bl 0x82690bc0
	ctx.lr = 0x82690CF0;
	sub_82690BC0(ctx, base);
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

__attribute__((alias("__imp__sub_82690D08"))) PPC_WEAK_FUNC(sub_82690D08);
PPC_FUNC_IMPL(__imp__sub_82690D08) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,5612
	ctx.r9.s64 = ctx.r10.s64 + 5612;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// bl 0x82690bc0
	ctx.lr = 0x82690D38;
	sub_82690BC0(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r7,r8,5612
	ctx.r7.s64 = ctx.r8.s64 + 5612;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_82690D5C"))) PPC_WEAK_FUNC(sub_82690D5C);
PPC_FUNC_IMPL(__imp__sub_82690D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82690D60"))) PPC_WEAK_FUNC(sub_82690D60);
PPC_FUNC_IMPL(__imp__sub_82690D60) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// li r3,48
	ctx.r3.s64 = 48;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// bl 0x82691500
	ctx.lr = 0x82690D88;
	sub_82691500(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82690dd8
	if (ctx.cr6.eq) goto loc_82690DD8;
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
	// stb r11,44(r8)
	PPC_STORE_U8(ctx.r8.u32 + 44, ctx.r11.u8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r11,45(r7)
	PPC_STORE_U8(ctx.r7.u32 + 45, ctx.r11.u8);
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
loc_82690DD8:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826908a0
	ctx.lr = 0x82690DE8;
	sub_826908A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// addi r9,r11,5612
	ctx.r9.s64 = ctx.r11.s64 + 5612;
	// addi r4,r10,10908
	ctx.r4.s64 = ctx.r10.s64 + 10908;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82fa7d90
	ctx.lr = 0x82690E04;
	sub_82FA7D90(ctx, base);
}

__attribute__((alias("__imp__sub_82690E04"))) PPC_WEAK_FUNC(sub_82690E04);
PPC_FUNC_IMPL(__imp__sub_82690E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82690E08"))) PPC_WEAK_FUNC(sub_82690E08);
PPC_FUNC_IMPL(__imp__sub_82690E08) {
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
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// addi r31,r4,4
	ctx.r31.s64 = ctx.r4.s64 + 4;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82690e30
	if (ctx.cr6.lt) goto loc_82690E30;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82691540
	ctx.lr = 0x82690E30;
	sub_82691540(ctx, base);
loc_82690E30:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82690E58"))) PPC_WEAK_FUNC(sub_82690E58);
PPC_FUNC_IMPL(__imp__sub_82690E58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82690E60;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,45(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 45);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r5,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82690e88
	if (ctx.cr6.eq) goto loc_82690E88;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,32172
	ctx.r3.s64 = ctx.r11.s64 + 32172;
	// bl 0x82fa0680
	ctx.lr = 0x82690E88;
	sub_82FA0680(ctx, base);
loc_82690E88:
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x826904f8
	ctx.lr = 0x82690E94;
	sub_826904F8(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lbz r10,45(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r25,196(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// beq cr6,0x82690eb0
	if (ctx.cr6.eq) goto loc_82690EB0;
	// lwz r28,8(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// b 0x82690ed4
	goto loc_82690ED4;
loc_82690EB0:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lbz r9,45(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 45);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82690ec8
	if (ctx.cr6.eq) goto loc_82690EC8;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// b 0x82690ed4
	goto loc_82690ED4;
loc_82690EC8:
	// lwz r28,8(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplw cr6,r25,r26
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82690fc0
	if (!ctx.cr6.eq) goto loc_82690FC0;
loc_82690ED4:
	// lbz r11,45(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 45);
	// lwz r31,4(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82690ee8
	if (!ctx.cr6.eq) goto loc_82690EE8;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_82690EE8:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82690f00
	if (!ctx.cr6.eq) goto loc_82690F00;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// b 0x82690f18
	goto loc_82690F18;
loc_82690F00:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82690f14
	if (!ctx.cr6.eq) goto loc_82690F14;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// b 0x82690f18
	goto loc_82690F18;
loc_82690F14:
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
loc_82690F18:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82690f68
	if (!ctx.cr6.eq) goto loc_82690F68;
	// lbz r11,45(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 45);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82690f3c
	if (ctx.cr6.eq) goto loc_82690F3C;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x82690f64
	goto loc_82690F64;
loc_82690F3C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lbz r8,45(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82690f64
	if (!ctx.cr6.eq) goto loc_82690F64;
loc_82690F50:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,45(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82690f50
	if (ctx.cr6.eq) goto loc_82690F50;
loc_82690F64:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_82690F68:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82691054
	if (!ctx.cr6.eq) goto loc_82691054;
	// lbz r11,45(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 45);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82690f90
	if (ctx.cr6.eq) goto loc_82690F90;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r31,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r31.u32);
	// b 0x82691054
	goto loc_82691054;
loc_82690F90:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lbz r8,45(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82690fb8
	if (!ctx.cr6.eq) goto loc_82690FB8;
loc_82690FA4:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,45(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82690fa4
	if (ctx.cr6.eq) goto loc_82690FA4;
loc_82690FB8:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x82691054
	goto loc_82691054;
loc_82690FC0:
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
	// bne cr6,0x82690fe0
	if (!ctx.cr6.eq) goto loc_82690FE0;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// b 0x82691008
	goto loc_82691008;
loc_82690FE0:
	// lbz r11,45(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 45);
	// lwz r31,4(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82690ff4
	if (!ctx.cr6.eq) goto loc_82690FF4;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_82690FF4:
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
loc_82691008:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82691020
	if (!ctx.cr6.eq) goto loc_82691020;
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// b 0x8269103c
	goto loc_8269103C;
loc_82691020:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82691038
	if (!ctx.cr6.eq) goto loc_82691038;
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// b 0x8269103c
	goto loc_8269103C;
loc_82691038:
	// stw r25,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
loc_8269103C:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// lbz r9,44(r26)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r26.u32 + 44);
	// lbz r10,44(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 44);
	// stb r9,44(r25)
	PPC_STORE_U8(ctx.r25.u32 + 44, ctx.r9.u8);
	// stb r10,44(r26)
	PPC_STORE_U8(ctx.r26.u32 + 44, ctx.r10.u8);
loc_82691054:
	// lbz r11,44(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 44);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x826911ec
	if (!ctx.cr6.eq) goto loc_826911EC;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x826911e8
	if (ctx.cr6.eq) goto loc_826911E8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82691078:
	// lbz r11,44(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 44);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x826911e8
	if (!ctx.cr6.eq) goto loc_826911E8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82691130
	if (!ctx.cr6.eq) goto loc_82691130;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 44);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826910b8
	if (!ctx.cr6.eq) goto loc_826910B8;
	// stb r29,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r29.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r30,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82690828
	ctx.lr = 0x826910B4;
	sub_82690828(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_826910B8:
	// lbz r10,45(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82691184
	if (!ctx.cr6.eq) goto loc_82691184;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 44);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x826910e4
	if (!ctx.cr6.eq) goto loc_826910E4;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,44(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 44);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// beq cr6,0x82691180
	if (ctx.cr6.eq) goto loc_82691180;
loc_826910E4:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,44(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 44);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x8269110c
	if (!ctx.cr6.eq) goto loc_8269110C;
	// stb r29,44(r10)
	PPC_STORE_U8(ctx.r10.u32 + 44, ctx.r29.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r30,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82690480
	ctx.lr = 0x82691108;
	sub_82690480(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_8269110C:
	// lbz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r10.u8);
	// stb r29,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r29.u8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stb r29,44(r9)
	PPC_STORE_U8(ctx.r9.u32 + 44, ctx.r29.u8);
	// bl 0x82690828
	ctx.lr = 0x8269112C;
	sub_82690828(ctx, base);
	// b 0x826911e8
	goto loc_826911E8;
loc_82691130:
	// lbz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 44);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82691154
	if (!ctx.cr6.eq) goto loc_82691154;
	// stb r29,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r29.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r30,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82690480
	ctx.lr = 0x82691150;
	sub_82690480(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82691154:
	// lbz r10,45(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82691184
	if (!ctx.cr6.eq) goto loc_82691184;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 44);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x826911a0
	if (!ctx.cr6.eq) goto loc_826911A0;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,44(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 44);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x826911a0
	if (!ctx.cr6.eq) goto loc_826911A0;
loc_82691180:
	// stb r30,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r30.u8);
loc_82691184:
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
	// bne cr6,0x82691078
	if (!ctx.cr6.eq) goto loc_82691078;
	// b 0x826911e8
	goto loc_826911E8;
loc_826911A0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,44(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 44);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x826911c8
	if (!ctx.cr6.eq) goto loc_826911C8;
	// stb r29,44(r10)
	PPC_STORE_U8(ctx.r10.u32 + 44, ctx.r29.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r30,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82690828
	ctx.lr = 0x826911C4;
	sub_82690828(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_826911C8:
	// lbz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r10.u8);
	// stb r29,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r29.u8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r29,44(r9)
	PPC_STORE_U8(ctx.r9.u32 + 44, ctx.r29.u8);
	// bl 0x82690480
	ctx.lr = 0x826911E8;
	sub_82690480(ctx, base);
loc_826911E8:
	// stb r29,44(r28)
	PPC_STORE_U8(ctx.r28.u32 + 44, ctx.r29.u8);
loc_826911EC:
	// addi r4,r26,12
	ctx.r4.s64 = ctx.r26.s64 + 12;
	// addi r3,r27,13
	ctx.r3.s64 = ctx.r27.s64 + 13;
	// bl 0x82690e08
	ctx.lr = 0x826911F8;
	sub_82690E08(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82691540
	ctx.lr = 0x82691200;
	sub_82691540(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82691214
	if (ctx.cr6.eq) goto loc_82691214;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
loc_82691214:
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

__attribute__((alias("__imp__sub_82691224"))) PPC_WEAK_FUNC(sub_82691224);
PPC_FUNC_IMPL(__imp__sub_82691224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82691228"))) PPC_WEAK_FUNC(sub_82691228);
PPC_FUNC_IMPL(__imp__sub_82691228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82691230;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,45(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 45);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82691284
	if (!ctx.cr6.eq) goto loc_82691284;
	// addi r28,r3,13
	ctx.r28.s64 = ctx.r3.s64 + 13;
loc_82691250:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82691228
	ctx.lr = 0x8269125C;
	sub_82691228(ctx, base);
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82690e08
	ctx.lr = 0x8269126C;
	sub_82690E08(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82691540
	ctx.lr = 0x82691274;
	sub_82691540(ctx, base);
	// lbz r11,45(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 45);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82691250
	if (ctx.cr6.eq) goto loc_82691250;
loc_82691284:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269128C"))) PPC_WEAK_FUNC(sub_8269128C);
PPC_FUNC_IMPL(__imp__sub_8269128C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82691290"))) PPC_WEAK_FUNC(sub_82691290);
PPC_FUNC_IMPL(__imp__sub_82691290) {
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
	// bl 0x82691228
	ctx.lr = 0x826912B0;
	sub_82691228(ctx, base);
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

__attribute__((alias("__imp__sub_826912E4"))) PPC_WEAK_FUNC(sub_826912E4);
PPC_FUNC_IMPL(__imp__sub_826912E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826912E8"))) PPC_WEAK_FUNC(sub_826912E8);
PPC_FUNC_IMPL(__imp__sub_826912E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x826912F0;
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
	// bne cr6,0x8269133c
	if (!ctx.cr6.eq) goto loc_8269133C;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8269133c
	if (!ctx.cr6.eq) goto loc_8269133C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82691290
	ctx.lr = 0x82691324;
	sub_82691290(ctx, base);
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
loc_8269133C:
	// cmplw cr6,r5,r30
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8269136c
	if (ctx.cr6.eq) goto loc_8269136C;
loc_82691344:
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x826904f8
	ctx.lr = 0x82691350;
	sub_826904F8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82690e58
	ctx.lr = 0x82691360;
	sub_82690E58(ctx, base);
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r5,r30
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82691344
	if (!ctx.cr6.eq) goto loc_82691344;
loc_8269136C:
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

__attribute__((alias("__imp__sub_8269137C"))) PPC_WEAK_FUNC(sub_8269137C);
PPC_FUNC_IMPL(__imp__sub_8269137C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82691380"))) PPC_WEAK_FUNC(sub_82691380);
PPC_FUNC_IMPL(__imp__sub_82691380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r23,32728(r26)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32728);
	// lwz r16,5640(0)
	ctx.r16.u64 = PPC_LOAD_U32(5640);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// stw r6,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r6.u32);
	// stw r6,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r6.u32);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x826912e8
	ctx.lr = 0x826913C4;
	sub_826912E8(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82691540
	ctx.lr = 0x826913CC;
	sub_82691540(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
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

__attribute__((alias("__imp__sub_82691388"))) PPC_WEAK_FUNC(sub_82691388);
PPC_FUNC_IMPL(__imp__sub_82691388) {
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
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// stw r6,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r6.u32);
	// stw r6,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r6.u32);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x826912e8
	ctx.lr = 0x826913C4;
	sub_826912E8(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82691540
	ctx.lr = 0x826913CC;
	sub_82691540(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
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

__attribute__((alias("__imp__sub_826913E4"))) PPC_WEAK_FUNC(sub_826913E4);
PPC_FUNC_IMPL(__imp__sub_826913E4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x82690820
	ctx.lr = 0x826913FC;
	sub_82690820(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269140C"))) PPC_WEAK_FUNC(sub_8269140C);
PPC_FUNC_IMPL(__imp__sub_8269140C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82691410"))) PPC_WEAK_FUNC(sub_82691410);
PPC_FUNC_IMPL(__imp__sub_82691410) {
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
	// bl 0x826610f8
	ctx.lr = 0x82691430;
	sub_826610F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82691444;
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

__attribute__((alias("__imp__sub_8269145C"))) PPC_WEAK_FUNC(sub_8269145C);
PPC_FUNC_IMPL(__imp__sub_8269145C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82691460"))) PPC_WEAK_FUNC(sub_82691460);
PPC_FUNC_IMPL(__imp__sub_82691460) {
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
	// bl 0x82661108
	ctx.lr = 0x82691480;
	sub_82661108(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82691494;
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

__attribute__((alias("__imp__sub_826914AC"))) PPC_WEAK_FUNC(sub_826914AC);
PPC_FUNC_IMPL(__imp__sub_826914AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826914B0"))) PPC_WEAK_FUNC(sub_826914B0);
PPC_FUNC_IMPL(__imp__sub_826914B0) {
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
	// bl 0x82661118
	ctx.lr = 0x826914D0;
	sub_82661118(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826914E4;
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

__attribute__((alias("__imp__sub_826914FC"))) PPC_WEAK_FUNC(sub_826914FC);
PPC_FUNC_IMPL(__imp__sub_826914FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82691500"))) PPC_WEAK_FUNC(sub_82691500);
PPC_FUNC_IMPL(__imp__sub_82691500) {
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
	// bl 0x82661128
	ctx.lr = 0x82691518;
	sub_82661128(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82691528;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_8269153C"))) PPC_WEAK_FUNC(sub_8269153C);
PPC_FUNC_IMPL(__imp__sub_8269153C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82691540"))) PPC_WEAK_FUNC(sub_82691540);
PPC_FUNC_IMPL(__imp__sub_82691540) {
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
	// bl 0x82661138
	ctx.lr = 0x82691558;
	sub_82661138(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82691568;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_8269157C"))) PPC_WEAK_FUNC(sub_8269157C);
PPC_FUNC_IMPL(__imp__sub_8269157C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82691580"))) PPC_WEAK_FUNC(sub_82691580);
PPC_FUNC_IMPL(__imp__sub_82691580) {
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
	// bl 0x82661148
	ctx.lr = 0x82691598;
	sub_82661148(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826915A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_826915BC"))) PPC_WEAK_FUNC(sub_826915BC);
PPC_FUNC_IMPL(__imp__sub_826915BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826915C0"))) PPC_WEAK_FUNC(sub_826915C0);
PPC_FUNC_IMPL(__imp__sub_826915C0) {
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
	// bl 0x82661158
	ctx.lr = 0x826915D8;
	sub_82661158(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826915E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_826915FC"))) PPC_WEAK_FUNC(sub_826915FC);
PPC_FUNC_IMPL(__imp__sub_826915FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82691600"))) PPC_WEAK_FUNC(sub_82691600);
PPC_FUNC_IMPL(__imp__sub_82691600) {
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
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// lbz r11,-25448(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -25448);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8269162c
	if (!ctx.cr6.eq) goto loc_8269162C;
	// li r3,1247
	ctx.r3.s64 = 1247;
	// bl 0x82a831c0
	ctx.lr = 0x82691624;
	sub_82A831C0(ctx, base);
	// b 0x82691748
	goto loc_82691748;
	// b 0x82691634
	goto loc_82691634;
loc_8269162C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a831c0
	ctx.lr = 0x82691634;
	sub_82A831C0(ctx, base);
loc_82691634:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82691500
	ctx.lr = 0x8269163C;
	sub_82691500(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82691668
	if (ctx.cr6.eq) goto loc_82691668;
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r4,r11,32570
	ctx.r4.s64 = ctx.r11.s64 + 32570;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82692318
	ctx.lr = 0x82691660;
	sub_82692318(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// b 0x82691670
	goto loc_82691670;
loc_82691668:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_82691670:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r10,-31966
	ctx.r10.s64 = -2094923776;
	// stw r11,-25428(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25428, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// addi r3,r11,-25444
	ctx.r3.s64 = ctx.r11.s64 + -25444;
	// bl 0x82691978
	ctx.lr = 0x82691690;
	sub_82691978(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// addi r3,r11,-25444
	ctx.r3.s64 = ctx.r11.s64 + -25444;
	// bl 0x826a0d38
	ctx.lr = 0x826916A0;
	sub_826A0D38(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// addi r3,r11,-25444
	ctx.r3.s64 = ctx.r11.s64 + -25444;
	// bl 0x826a0d38
	ctx.lr = 0x826916B8;
	sub_826A0D38(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// addi r3,r11,-25444
	ctx.r3.s64 = ctx.r11.s64 + -25444;
	// bl 0x826a0d38
	ctx.lr = 0x826916D0;
	sub_826A0D38(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// addi r3,r11,-25444
	ctx.r3.s64 = ctx.r11.s64 + -25444;
	// bl 0x826a0d38
	ctx.lr = 0x826916E8;
	sub_826A0D38(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// addi r3,r11,-25444
	ctx.r3.s64 = ctx.r11.s64 + -25444;
	// bl 0x826a0d38
	ctx.lr = 0x82691700;
	sub_826A0D38(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// addi r3,r11,-25444
	ctx.r3.s64 = ctx.r11.s64 + -25444;
	// bl 0x826a0d38
	ctx.lr = 0x82691718;
	sub_826A0D38(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// li r10,92
	ctx.r10.s64 = 92;
	// stw r10,-25320(r11)
	PPC_STORE_U32(ctx.r11.u32 + -25320, ctx.r10.u32);
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// addi r11,r11,-25320
	ctx.r11.s64 = ctx.r11.s64 + -25320;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,-25448(r11)
	PPC_STORE_U8(ctx.r11.u32 + -25448, ctx.r10.u8);
loc_82691748:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82691758"))) PPC_WEAK_FUNC(sub_82691758);
PPC_FUNC_IMPL(__imp__sub_82691758) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x826917a0
	ctx.lr = 0x82691774;
	sub_826917A0(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82691788
	if (ctx.cr0.eq) goto loc_82691788;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82691540
	ctx.lr = 0x82691788;
	sub_82691540(ctx, base);
loc_82691788:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269179C"))) PPC_WEAK_FUNC(sub_8269179C);
PPC_FUNC_IMPL(__imp__sub_8269179C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826917A0"))) PPC_WEAK_FUNC(sub_826917A0);
PPC_FUNC_IMPL(__imp__sub_826917A0) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x826923b8
	ctx.lr = 0x826917B8;
	sub_826923B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826917C8"))) PPC_WEAK_FUNC(sub_826917C8);
PPC_FUNC_IMPL(__imp__sub_826917C8) {
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
	// stb r3,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r3.u8);
	// lbz r11,119(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 119);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82691804
	if (!ctx.cr0.gt) goto loc_82691804;
	// lbz r11,119(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 119);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82fa5550
	ctx.lr = 0x826917F0;
	sub_82FA5550(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82691804
	if (ctx.cr0.eq) goto loc_82691804;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x8269180c
	goto loc_8269180C;
loc_82691804:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8269180C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82691820"))) PPC_WEAK_FUNC(sub_82691820);
PPC_FUNC_IMPL(__imp__sub_82691820) {
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
	// sth r3,118(r1)
	PPC_STORE_U16(ctx.r1.u32 + 118, ctx.r3.u16);
	// lhz r3,118(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// bl 0x82fa5b20
	ctx.lr = 0x82691838;
	sub_82FA5B20(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82691848"))) PPC_WEAK_FUNC(sub_82691848);
PPC_FUNC_IMPL(__imp__sub_82691848) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82fa49f0
	ctx.lr = 0x82691870;
	sub_82FA49F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82691880"))) PPC_WEAK_FUNC(sub_82691880);
PPC_FUNC_IMPL(__imp__sub_82691880) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82fa8460
	ctx.lr = 0x826918A8;
	sub_82FA8460(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826918B8"))) PPC_WEAK_FUNC(sub_826918B8);
PPC_FUNC_IMPL(__imp__sub_826918B8) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82fa4370
	ctx.lr = 0x826918E0;
	sub_82FA4370(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826918F0"))) PPC_WEAK_FUNC(sub_826918F0);
PPC_FUNC_IMPL(__imp__sub_826918F0) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82fa85a0
	ctx.lr = 0x82691918;
	sub_82FA85A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82691928"))) PPC_WEAK_FUNC(sub_82691928);
PPC_FUNC_IMPL(__imp__sub_82691928) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82fa3bb8
	ctx.lr = 0x82691940;
	sub_82FA3BB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82691950"))) PPC_WEAK_FUNC(sub_82691950);
PPC_FUNC_IMPL(__imp__sub_82691950) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82fa8690
	ctx.lr = 0x82691968;
	sub_82FA8690(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82691978"))) PPC_WEAK_FUNC(sub_82691978);
PPC_FUNC_IMPL(__imp__sub_82691978) {
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
	// stw r3,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// stw r4,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r4.u32);
	// stw r5,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r5.u32);
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x8269f868
	ctx.lr = 0x826919A0;
	sub_8269F868(ctx, base);
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x826919ec
	if (!ctx.cr6.lt) goto loc_826919EC;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x8269db20
	ctx.lr = 0x826919B8;
	sub_8269DB20(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r11,r1,180
	ctx.r11.s64 = ctx.r1.s64 + 180;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x8269f868
	ctx.lr = 0x826919D0;
	sub_8269F868(ctx, base);
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// subf r5,r3,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r3.s64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82691a70
	ctx.lr = 0x826919E8;
	sub_82691A70(ctx, base);
	// b 0x82691a54
	goto loc_82691A54;
loc_826919EC:
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x8269f868
	ctx.lr = 0x826919F4;
	sub_8269F868(ctx, base);
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x82691a54
	if (!ctx.cr6.lt) goto loc_82691A54;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x8269db20
	ctx.lr = 0x82691A0C;
	sub_8269DB20(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r31,172(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// addi r30,r1,104
	ctx.r30.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x826926a8
	ctx.lr = 0x82691A28;
	sub_826926A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82698aa8
	ctx.lr = 0x82691A38;
	sub_82698AA8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x8269f888
	ctx.lr = 0x82691A54;
	sub_8269F888(ctx, base);
loc_82691A54:
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

__attribute__((alias("__imp__sub_82691A6C"))) PPC_WEAK_FUNC(sub_82691A6C);
PPC_FUNC_IMPL(__imp__sub_82691A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82691A70"))) PPC_WEAK_FUNC(sub_82691A70);
PPC_FUNC_IMPL(__imp__sub_82691A70) {
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
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// stw r6,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r6.u32);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82691aa0
	if (!ctx.cr6.eq) goto loc_82691AA0;
	// b 0x82691e98
	goto loc_82691E98;
loc_82691AA0:
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x82691eb0
	ctx.lr = 0x82691AA8;
	sub_82691EB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x8269f868
	ctx.lr = 0x82691AB4;
	sub_8269F868(ctx, base);
	// subf r11,r3,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r3.s64;
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82691ad0
	if (!ctx.cr6.lt) goto loc_82691AD0;
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x82695570
	ctx.lr = 0x82691ACC;
	sub_82695570(ctx, base);
	// b 0x82691e98
	goto loc_82691E98;
loc_82691AD0:
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x82694348
	ctx.lr = 0x82691AD8;
	sub_82694348(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x8269f868
	ctx.lr = 0x82691AE4;
	sub_8269F868(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82691cfc
	if (!ctx.cr6.lt) goto loc_82691CFC;
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x8269f868
	ctx.lr = 0x82691AFC;
	sub_8269F868(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// add r4,r3,r11
	ctx.r4.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x8269bf58
	ctx.lr = 0x82691B0C;
	sub_8269BF58(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x826949f0
	ctx.lr = 0x82691B24;
	sub_826949F0(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r3,172(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// bl 0x8269d688
	ctx.lr = 0x82691B50;
	sub_8269D688(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x82691ee0
	ctx.lr = 0x82691B70;
	sub_82691EE0(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,156(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x8269c928
	ctx.lr = 0x82691B94;
	sub_8269C928(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x8269c928
	ctx.lr = 0x82691BCC;
	sub_8269C928(ctx, base);
	// b 0x82691c4c
	goto loc_82691C4C;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x82691bf8
	if (!ctx.cr6.gt) goto loc_82691BF8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x8269fc18
	ctx.lr = 0x82691BF8;
	sub_8269FC18(ctx, base);
loc_82691BF8:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82691c38
	if (!ctx.cr6.gt) goto loc_82691C38;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x8269fc18
	ctx.lr = 0x82691C38;
	sub_8269FC18(ctx, base);
loc_82691C38:
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x826987b8
	ctx.lr = 0x82691C4C;
	sub_826987B8(ctx, base);
loc_82691C4C:
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x8269f868
	ctx.lr = 0x82691C54;
	sub_8269F868(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82691cb4
	if (ctx.cr6.eq) goto loc_82691CB4;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x8269fc18
	ctx.lr = 0x82691C88;
	sub_8269FC18(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r5,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 2;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x826987b8
	ctx.lr = 0x82691CB4;
	sub_826987B8(ctx, base);
loc_82691CB4:
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x828b2440
	ctx.lr = 0x82691CBC;
	sub_828B2440(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x82691e98
	goto loc_82691E98;
loc_82691CFC:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,156(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82691e08
	if (!ctx.cr6.lt) goto loc_82691E08;
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,156(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x8269c928
	ctx.lr = 0x82691D4C;
	sub_8269C928(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8269d688
	ctx.lr = 0x82691D54;
	sub_8269D688(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,156(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// subf r5,r11,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x82691ee0
	ctx.lr = 0x82691D84;
	sub_82691EE0(ctx, base);
	// b 0x82691db4
	goto loc_82691DB4;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,156(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x8269fc18
	ctx.lr = 0x82691DB4;
	sub_8269FC18(ctx, base);
loc_82691DB4:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x8269fc58
	ctx.lr = 0x82691DE4;
	sub_8269FC58(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r4,r10,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// bl 0x82691fc0
	ctx.lr = 0x82691E04;
	sub_82691FC0(ctx, base);
	// b 0x82691e98
	goto loc_82691E98;
loc_82691E08:
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf r4,r11,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x8269c928
	ctx.lr = 0x82691E44;
	sub_8269C928(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x8269fc58
	ctx.lr = 0x82691E60;
	sub_8269FC58(ctx, base);
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf r4,r11,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// bl 0x82692020
	ctx.lr = 0x82691E7C;
	sub_82692020(ctx, base);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,156(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// bl 0x82691fc0
	ctx.lr = 0x82691E98;
	sub_82691FC0(ctx, base);
loc_82691E98:
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

__attribute__((alias("__imp__sub_82691EAC"))) PPC_WEAK_FUNC(sub_82691EAC);
PPC_FUNC_IMPL(__imp__sub_82691EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82691EB0"))) PPC_WEAK_FUNC(sub_82691EB0);
PPC_FUNC_IMPL(__imp__sub_82691EB0) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82692d70
	ctx.lr = 0x82691ECC;
	sub_82692D70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82691EDC"))) PPC_WEAK_FUNC(sub_82691EDC);
PPC_FUNC_IMPL(__imp__sub_82691EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82691EE0"))) PPC_WEAK_FUNC(sub_82691EE0);
PPC_FUNC_IMPL(__imp__sub_82691EE0) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// stw r6,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r6.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r6,r11,12
	ctx.r6.s64 = ctx.r11.s64 + 12;
	// lwz r5,140(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x82692070
	ctx.lr = 0x82691F14;
	sub_82692070(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
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

__attribute__((alias("__imp__sub_82691F34"))) PPC_WEAK_FUNC(sub_82691F34);
PPC_FUNC_IMPL(__imp__sub_82691F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82691F38"))) PPC_WEAK_FUNC(sub_82691F38);
PPC_FUNC_IMPL(__imp__sub_82691F38) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x8269e028
	ctx.lr = 0x82691F58;
	sub_8269E028(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82691F6C"))) PPC_WEAK_FUNC(sub_82691F6C);
PPC_FUNC_IMPL(__imp__sub_82691F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82691F70"))) PPC_WEAK_FUNC(sub_82691F70);
PPC_FUNC_IMPL(__imp__sub_82691F70) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82697d28
	ctx.lr = 0x82691F94;
	sub_82697D28(ctx, base);
	// stb r3,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r3.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x826920e0
	ctx.lr = 0x82691FAC;
	sub_826920E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82691FBC"))) PPC_WEAK_FUNC(sub_82691FBC);
PPC_FUNC_IMPL(__imp__sub_82691FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82691FC0"))) PPC_WEAK_FUNC(sub_82691FC0);
PPC_FUNC_IMPL(__imp__sub_82691FC0) {
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
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// lwz r31,148(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x8269d688
	ctx.lr = 0x82691FEC;
	sub_8269D688(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x8269d688
	ctx.lr = 0x82691FF8;
	sub_8269D688(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82692148
	ctx.lr = 0x82692004;
	sub_82692148(ctx, base);
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

__attribute__((alias("__imp__sub_8269201C"))) PPC_WEAK_FUNC(sub_8269201C);
PPC_FUNC_IMPL(__imp__sub_8269201C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82692020"))) PPC_WEAK_FUNC(sub_82692020);
PPC_FUNC_IMPL(__imp__sub_82692020) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82697d28
	ctx.lr = 0x82692044;
	sub_82697D28(ctx, base);
	// stb r3,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r3.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82692190
	ctx.lr = 0x8269205C;
	sub_82692190(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269206C"))) PPC_WEAK_FUNC(sub_8269206C);
PPC_FUNC_IMPL(__imp__sub_8269206C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82692070"))) PPC_WEAK_FUNC(sub_82692070);
PPC_FUNC_IMPL(__imp__sub_82692070) {
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
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// stw r6,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r6.u32);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82697d28
	ctx.lr = 0x8269209C;
	sub_82697D28(ctx, base);
	// stb r3,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r3.u8);
	// lbz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82697f80
	ctx.lr = 0x826920AC;
	sub_82697F80(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r6,156(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r5,148(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// bl 0x82692200
	ctx.lr = 0x826920C8;
	sub_82692200(ctx, base);
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

__attribute__((alias("__imp__sub_826920DC"))) PPC_WEAK_FUNC(sub_826920DC);
PPC_FUNC_IMPL(__imp__sub_826920DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826920E0"))) PPC_WEAK_FUNC(sub_826920E0);
PPC_FUNC_IMPL(__imp__sub_826920E0) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// stb r6,143(r1)
	PPC_STORE_U8(ctx.r1.u32 + 143, ctx.r6.u8);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82fa20f0
	ctx.lr = 0x82692124;
	sub_82FA20F0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
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

__attribute__((alias("__imp__sub_82692144"))) PPC_WEAK_FUNC(sub_82692144);
PPC_FUNC_IMPL(__imp__sub_82692144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82692148"))) PPC_WEAK_FUNC(sub_82692148);
PPC_FUNC_IMPL(__imp__sub_82692148) {
	PPC_FUNC_PROLOGUE();
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// stw r5,36(r1)
	PPC_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// b 0x82692164
	goto loc_82692164;
loc_82692158:
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r11.u32);
loc_82692164:
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r10,28(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82692188
	if (ctx.cr6.eq) goto loc_82692188;
	// lwz r11,36(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x82692158
	goto loc_82692158;
loc_82692188:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269218C"))) PPC_WEAK_FUNC(sub_8269218C);
PPC_FUNC_IMPL(__imp__sub_8269218C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82692190"))) PPC_WEAK_FUNC(sub_82692190);
PPC_FUNC_IMPL(__imp__sub_82692190) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// stb r6,143(r1)
	PPC_STORE_U8(ctx.r1.u32 + 143, ctx.r6.u8);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r11.s64;
	// bl 0x82fa20f0
	ctx.lr = 0x826921E0;
	sub_82FA20F0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82692200"))) PPC_WEAK_FUNC(sub_82692200);
PPC_FUNC_IMPL(__imp__sub_82692200) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// stw r6,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r6.u32);
	// stw r7,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r7.u32);
	// stb r8,159(r1)
	PPC_STORE_U8(ctx.r1.u32 + 159, ctx.r8.u8);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,140(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82692268
	ctx.lr = 0x82692254;
	sub_82692268(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82692264"))) PPC_WEAK_FUNC(sub_82692264);
PPC_FUNC_IMPL(__imp__sub_82692264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82692268"))) PPC_WEAK_FUNC(sub_82692268);
PPC_FUNC_IMPL(__imp__sub_82692268) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// stw r6,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r6.u32);
	// stw r7,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r7.u32);
	// stb r8,159(r1)
	PPC_STORE_U8(ctx.r1.u32 + 159, ctx.r8.u8);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x826922b0
	goto loc_826922B0;
loc_82692298:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
loc_826922B0:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x826922d0
	if (!ctx.cr6.gt) goto loc_826922D0;
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x8269c9f8
	ctx.lr = 0x826922CC;
	sub_8269C9F8(ctx, base);
	// b 0x82692298
	goto loc_82692298;
loc_826922D0:
	// b 0x82692304
	goto loc_82692304;
	// b 0x826922e4
	goto loc_826922E4;
loc_826922D8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_826922E4:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82692304
	if (ctx.cr6.eq) goto loc_82692304;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x8269d950
	ctx.lr = 0x82692300;
	sub_8269D950(ctx, base);
	// b 0x826922d8
	goto loc_826922D8;
loc_82692304:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82692314"))) PPC_WEAK_FUNC(sub_82692314);
PPC_FUNC_IMPL(__imp__sub_82692314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82692318"))) PPC_WEAK_FUNC(sub_82692318);
PPC_FUNC_IMPL(__imp__sub_82692318) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// sth r5,134(r1)
	PPC_STORE_U16(ctx.r1.u32 + 134, ctx.r5.u16);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82692360
	ctx.lr = 0x8269233C;
	sub_82692360(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lhz r10,134(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 134);
	// sth r10,28(r11)
	PPC_STORE_U16(ctx.r11.u32 + 28, ctx.r10.u16);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269235C"))) PPC_WEAK_FUNC(sub_8269235C);
PPC_FUNC_IMPL(__imp__sub_8269235C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82692360"))) PPC_WEAK_FUNC(sub_82692360);
PPC_FUNC_IMPL(__imp__sub_82692360) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8269d688
	ctx.lr = 0x8269237C;
	sub_8269D688(ctx, base);
	// lbz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x826960a0
	ctx.lr = 0x82692388;
	sub_826960A0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82692430
	ctx.lr = 0x82692398;
	sub_82692430(ctx, base);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x826923f0
	ctx.lr = 0x826923A4;
	sub_826923F0(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826923B8"))) PPC_WEAK_FUNC(sub_826923B8);
PPC_FUNC_IMPL(__imp__sub_826923B8) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82692430
	ctx.lr = 0x826923D8;
	sub_82692430(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82692e80
	ctx.lr = 0x826923E0;
	sub_82692E80(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826923F0"))) PPC_WEAK_FUNC(sub_826923F0);
PPC_FUNC_IMPL(__imp__sub_826923F0) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x82fad3f8
	ctx.lr = 0x8269240C;
	sub_82FAD3F8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82692590
	ctx.lr = 0x8269241C;
	sub_82692590(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269242C"))) PPC_WEAK_FUNC(sub_8269242C);
PPC_FUNC_IMPL(__imp__sub_8269242C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82692430"))) PPC_WEAK_FUNC(sub_82692430);
PPC_FUNC_IMPL(__imp__sub_82692430) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stb r4,127(r1)
	PPC_STORE_U8(ctx.r1.u32 + 127, ctx.r4.u8);
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// lbz r11,127(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 127);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82692458
	if (!ctx.cr0.eq) goto loc_82692458;
	// b 0x826924ac
	goto loc_826924AC;
loc_82692458:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x826924ac
	if (ctx.cr6.lt) goto loc_826924AC;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82692490
	if (!ctx.cr6.gt) goto loc_82692490;
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x822400b8
	ctx.lr = 0x82692490;
	sub_822400B8(ctx, base);
loc_82692490:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x826987b8
	ctx.lr = 0x826924AC;
	sub_826987B8(ctx, base);
loc_826924AC:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82692648
	ctx.lr = 0x826924C4;
	sub_82692648(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826924D4"))) PPC_WEAK_FUNC(sub_826924D4);
PPC_FUNC_IMPL(__imp__sub_826924D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826924D8"))) PPC_WEAK_FUNC(sub_826924D8);
PPC_FUNC_IMPL(__imp__sub_826924D8) {
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
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// stb r4,143(r1)
	PPC_STORE_U8(ctx.r1.u32 + 143, ctx.r4.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82692770
	ctx.lr = 0x826924F4;
	sub_82692770(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x826926a8
	ctx.lr = 0x82692504;
	sub_826926A8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8269250C:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x8269db20
	ctx.lr = 0x8269251C;
	sub_8269DB20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8269b738
	ctx.lr = 0x82692528;
	sub_8269B738(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82692580
	if (ctx.cr0.eq) goto loc_82692580;
	// lbz r11,143(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 143);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82692558
	if (ctx.cr0.eq) goto loc_82692558;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826987e8
	ctx.lr = 0x82692548;
	sub_826987E8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82691540
	ctx.lr = 0x82692558;
	sub_82691540(ctx, base);
loc_82692558:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x826926e8
	ctx.lr = 0x82692574;
	sub_826926E8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x8269250c
	goto loc_8269250C;
loc_82692580:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82692590"))) PPC_WEAK_FUNC(sub_82692590);
PPC_FUNC_IMPL(__imp__sub_82692590) {
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
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x826929b0
	ctx.lr = 0x826925BC;
	sub_826929B0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826925ec
	if (ctx.cr0.eq) goto loc_826925EC;
	// lwz r31,148(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82692d28
	ctx.lr = 0x826925D0;
	sub_82692D28(ctx, base);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// subf r5,r3,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r3.s64;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x826927a0
	ctx.lr = 0x826925E8;
	sub_826927A0(ctx, base);
	// b 0x82692630
	goto loc_82692630;
loc_826925EC:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x826928b8
	ctx.lr = 0x826925FC;
	sub_826928B8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8269262c
	if (ctx.cr0.eq) goto loc_8269262C;
	// lwz r31,148(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r30,140(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82692d28
	ctx.lr = 0x82692614;
	sub_82692D28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x822400b8
	ctx.lr = 0x82692620;
	sub_822400B8(ctx, base);
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82692648
	ctx.lr = 0x8269262C;
	sub_82692648(ctx, base);
loc_8269262C:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_82692630:
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

__attribute__((alias("__imp__sub_82692648"))) PPC_WEAK_FUNC(sub_82692648);
PPC_FUNC_IMPL(__imp__sub_82692648) {
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
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82692d28
	ctx.lr = 0x82692680;
	sub_82692D28(ctx, base);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822400c8
	ctx.lr = 0x82692690;
	sub_822400C8(ctx, base);
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

__attribute__((alias("__imp__sub_826926A4"))) PPC_WEAK_FUNC(sub_826926A4);
PPC_FUNC_IMPL(__imp__sub_826926A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826926A8"))) PPC_WEAK_FUNC(sub_826926A8);
PPC_FUNC_IMPL(__imp__sub_826926A8) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r5,124(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x8269bf18
	ctx.lr = 0x826926D0;
	sub_8269BF18(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826926E4"))) PPC_WEAK_FUNC(sub_826926E4);
PPC_FUNC_IMPL(__imp__sub_826926E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826926E8"))) PPC_WEAK_FUNC(sub_826926E8);
PPC_FUNC_IMPL(__imp__sub_826926E8) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82691f70
	ctx.lr = 0x82692718;
	sub_82691F70(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x8269fc18
	ctx.lr = 0x82692734;
	sub_8269FC18(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x8269f1d8
	ctx.lr = 0x82692758;
	sub_8269F1D8(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269276C"))) PPC_WEAK_FUNC(sub_8269276C);
PPC_FUNC_IMPL(__imp__sub_8269276C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82692770"))) PPC_WEAK_FUNC(sub_82692770);
PPC_FUNC_IMPL(__imp__sub_82692770) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x8269e9e0
	ctx.lr = 0x82692788;
	sub_8269E9E0(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269279C"))) PPC_WEAK_FUNC(sub_8269279C);
PPC_FUNC_IMPL(__imp__sub_8269279C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826927A0"))) PPC_WEAK_FUNC(sub_826927A0);
PPC_FUNC_IMPL(__imp__sub_826927A0) {
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
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// stw r6,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r6.u32);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x82692b28
	ctx.lr = 0x826927CC;
	sub_82692B28(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x826927e0
	if (!ctx.cr6.lt) goto loc_826927E0;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82698e08
	ctx.lr = 0x826927E0;
	sub_82698E08(ctx, base);
loc_826927E0:
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x82692b28
	ctx.lr = 0x826927E8;
	sub_82692B28(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8269280c
	if (!ctx.cr6.lt) goto loc_8269280C;
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8269280C:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8269284c
	if (!ctx.cr6.eq) goto loc_8269284C;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lwz r5,31408(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31408);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82692a28
	ctx.lr = 0x82692838;
	sub_82692A28(ctx, base);
	// lwz r5,148(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82692a28
	ctx.lr = 0x82692848;
	sub_82692A28(ctx, base);
	// b 0x82692898
	goto loc_82692898;
loc_8269284C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x826928b8
	ctx.lr = 0x8269285C;
	sub_826928B8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82692898
	if (ctx.cr0.eq) goto loc_82692898;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x82692d28
	ctx.lr = 0x82692870;
	sub_82692D28(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// add r30,r3,r11
	ctx.r30.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82692d28
	ctx.lr = 0x82692880;
	sub_82692D28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x822400b8
	ctx.lr = 0x8269288C;
	sub_822400B8(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82692648
	ctx.lr = 0x82692898;
	sub_82692648(ctx, base);
loc_82692898:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
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

__attribute__((alias("__imp__sub_826928B4"))) PPC_WEAK_FUNC(sub_826928B4);
PPC_FUNC_IMPL(__imp__sub_826928B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826928B8"))) PPC_WEAK_FUNC(sub_826928B8);
PPC_FUNC_IMPL(__imp__sub_826928B8) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// stb r5,135(r1)
	PPC_STORE_U8(ctx.r1.u32 + 135, ctx.r5.u8);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82692b38
	ctx.lr = 0x826928D8;
	sub_82692B38(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x826928ec
	if (!ctx.cr6.lt) goto loc_826928EC;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82698dd8
	ctx.lr = 0x826928EC;
	sub_82698DD8(ctx, base);
loc_826928EC:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82692918
	if (!ctx.cr6.lt) goto loc_82692918;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82692b90
	ctx.lr = 0x82692914;
	sub_82692B90(ctx, base);
	// b 0x82692988
	goto loc_82692988;
loc_82692918:
	// lbz r11,135(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 135);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82692970
	if (ctx.cr0.eq) goto loc_82692970;
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x82692970
	if (!ctx.cr6.lt) goto loc_82692970;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82692950
	if (!ctx.cr6.lt) goto loc_82692950;
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x8269295c
	goto loc_8269295C;
loc_82692950:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8269295C:
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82692430
	ctx.lr = 0x8269296C;
	sub_82692430(ctx, base);
	// b 0x82692988
	goto loc_82692988;
loc_82692970:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82692988
	if (!ctx.cr6.eq) goto loc_82692988;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82692648
	ctx.lr = 0x82692988;
	sub_82692648(ctx, base);
loc_82692988:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// li r10,0
	ctx.r10.s64 = 0;
	// subfc r11,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826929B0"))) PPC_WEAK_FUNC(sub_826929B0);
PPC_FUNC_IMPL(__imp__sub_826929B0) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82692a04
	if (ctx.cr6.eq) goto loc_82692A04;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82692d28
	ctx.lr = 0x826929D8;
	sub_82692D28(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x82692a04
	if (ctx.cr6.lt) goto loc_82692A04;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82692d28
	ctx.lr = 0x826929EC;
	sub_82692D28(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82692a10
	if (ctx.cr6.gt) goto loc_82692A10;
loc_82692A04:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82692a14
	goto loc_82692A14;
	// b 0x82692a14
	goto loc_82692A14;
loc_82692A10:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82692A14:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82692A24"))) PPC_WEAK_FUNC(sub_82692A24);
PPC_FUNC_IMPL(__imp__sub_82692A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82692A28"))) PPC_WEAK_FUNC(sub_82692A28);
PPC_FUNC_IMPL(__imp__sub_82692A28) {
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
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82692a64
	if (!ctx.cr6.lt) goto loc_82692A64;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82698e08
	ctx.lr = 0x82692A64;
	sub_82698E08(ctx, base);
loc_82692A64:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82692a94
	if (!ctx.cr6.lt) goto loc_82692A94;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
loc_82692A94:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82692b0c
	if (!ctx.cr6.gt) goto loc_82692B0C;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// subf r31,r10,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82692d28
	ctx.lr = 0x82692AC0;
	sub_82692D28(ctx, base);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82692d28
	ctx.lr = 0x82692AD8;
	sub_82692D28(ctx, base);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x822400c0
	ctx.lr = 0x82692AEC;
	sub_822400C0(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82692648
	ctx.lr = 0x82692B0C;
	sub_82692648(ctx, base);
loc_82692B0C:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
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

__attribute__((alias("__imp__sub_82692B28"))) PPC_WEAK_FUNC(sub_82692B28);
PPC_FUNC_IMPL(__imp__sub_82692B28) {
	PPC_FUNC_PROLOGUE();
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82692B38"))) PPC_WEAK_FUNC(sub_82692B38);
PPC_FUNC_IMPL(__imp__sub_82692B38) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x82692d70
	ctx.lr = 0x82692B54;
	sub_82692D70(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x82692b70
	if (ctx.cr6.gt) goto loc_82692B70;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x82692b7c
	goto loc_82692B7C;
loc_82692B70:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_82692B7C:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82692B90"))) PPC_WEAK_FUNC(sub_82692B90);
PPC_FUNC_IMPL(__imp__sub_82692B90) {
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
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// ori r11,r11,15
	ctx.r11.u64 = ctx.r11.u64 | 15;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82692b38
	ctx.lr = 0x82692BC0;
	sub_82692B38(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82692bd8
	if (!ctx.cr6.lt) goto loc_82692BD8;
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x82692c5c
	goto loc_82692C5C;
loc_82692BD8:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// li r10,2
	ctx.r10.s64 = 2;
	// divwu r11,r11,r10
	ctx.r11.u32 = ctx.r11.u32 / ctx.r10.u32;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r9,3
	ctx.r9.s64 = 3;
	// divwu r10,r10,r9
	ctx.r10.u32 = ctx.r10.u32 / ctx.r9.u32;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82692c00
	if (ctx.cr6.gt) goto loc_82692C00;
	// b 0x82692c5c
	goto loc_82692C5C;
loc_82692C00:
	// lwz r31,132(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82692b38
	ctx.lr = 0x82692C0C;
	sub_82692B38(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// li r10,2
	ctx.r10.s64 = 2;
	// divwu r11,r11,r10
	ctx.r11.u32 = ctx.r11.u32 / ctx.r10.u32;
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82692c50
	if (ctx.cr6.gt) goto loc_82692C50;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// li r9,2
	ctx.r9.s64 = 2;
	// divwu r10,r10,r9
	ctx.r10.u32 = ctx.r10.u32 / ctx.r9.u32;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x82692c5c
	goto loc_82692C5C;
loc_82692C50:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82692b38
	ctx.lr = 0x82692C58;
	sub_82692B38(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
loc_82692C5C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x82692d80
	ctx.lr = 0x82692C74;
	sub_82692D80(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x82692cb4
	goto loc_82692CB4;
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x82692d80
	ctx.lr = 0x82692C9C;
	sub_82692D80(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x82692cb4
	goto loc_82692CB4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82692430
	ctx.lr = 0x82692CB4;
	sub_82692430(ctx, base);
loc_82692CB4:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82692cdc
	if (!ctx.cr6.gt) goto loc_82692CDC;
	// lwz r31,148(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82692d28
	ctx.lr = 0x82692CCC;
	sub_82692D28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x822400b8
	ctx.lr = 0x82692CDC;
	sub_822400B8(ctx, base);
loc_82692CDC:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82692430
	ctx.lr = 0x82692CEC;
	sub_82692430(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82692648
	ctx.lr = 0x82692D10;
	sub_82692648(ctx, base);
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

__attribute__((alias("__imp__sub_82692D24"))) PPC_WEAK_FUNC(sub_82692D24);
PPC_FUNC_IMPL(__imp__sub_82692D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82692D28"))) PPC_WEAK_FUNC(sub_82692D28);
PPC_FUNC_IMPL(__imp__sub_82692D28) {
	PPC_FUNC_PROLOGUE();
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82692d4c
	if (ctx.cr6.lt) goto loc_82692D4C;
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// b 0x82692d54
	goto loc_82692D54;
loc_82692D4C:
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
loc_82692D54:
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82692D5C"))) PPC_WEAK_FUNC(sub_82692D5C);
PPC_FUNC_IMPL(__imp__sub_82692D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82692D60"))) PPC_WEAK_FUNC(sub_82692D60);
PPC_FUNC_IMPL(__imp__sub_82692D60) {
	PPC_FUNC_PROLOGUE();
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82692D6C"))) PPC_WEAK_FUNC(sub_82692D6C);
PPC_FUNC_IMPL(__imp__sub_82692D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82692D70"))) PPC_WEAK_FUNC(sub_82692D70);
PPC_FUNC_IMPL(__imp__sub_82692D70) {
	PPC_FUNC_PROLOGUE();
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82692D7C"))) PPC_WEAK_FUNC(sub_82692D7C);
PPC_FUNC_IMPL(__imp__sub_82692D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82692D80"))) PPC_WEAK_FUNC(sub_82692D80);
PPC_FUNC_IMPL(__imp__sub_82692D80) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x826a0e20
	ctx.lr = 0x82692DA0;
	sub_826A0E20(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82692DB0"))) PPC_WEAK_FUNC(sub_82692DB0);
PPC_FUNC_IMPL(__imp__sub_82692DB0) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82692de0
	ctx.lr = 0x82692DC8;
	sub_82692DE0(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82692e80
	ctx.lr = 0x82692DD0;
	sub_82692E80(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82692DE0"))) PPC_WEAK_FUNC(sub_82692DE0);
PPC_FUNC_IMPL(__imp__sub_82692DE0) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82692e4c
	if (ctx.cr6.eq) goto loc_82692E4C;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x828b2440
	ctx.lr = 0x82692E08;
	sub_828B2440(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x8269fc18
	ctx.lr = 0x82692E20;
	sub_8269FC18(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r5,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 2;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x826987b8
	ctx.lr = 0x82692E4C;
	sub_826987B8(ctx, base);
loc_82692E4C:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82692E80"))) PPC_WEAK_FUNC(sub_82692E80);
PPC_FUNC_IMPL(__imp__sub_82692E80) {
	PPC_FUNC_PROLOGUE();
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// blr 
	return;
}

