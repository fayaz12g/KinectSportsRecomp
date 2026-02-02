#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82EA58B8"))) PPC_WEAK_FUNC(sub_82EA58B8);
PPC_FUNC_IMPL(__imp__sub_82EA58B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82EA58C0;
	__savegprlr_14(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,412(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 412);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r26,0(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r5,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r5.u32);
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// stw r6,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r6.u32);
	// std r7,336(r1)
	PPC_STORE_U64(ctx.r1.u32 + 336, ctx.r7.u64);
	// mr r19,r8
	ctx.r19.u64 = ctx.r8.u64;
	// mr r14,r9
	ctx.r14.u64 = ctx.r9.u64;
	// stw r25,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r25.u32);
	// mr r17,r10
	ctx.r17.u64 = ctx.r10.u64;
	// mr r20,r10
	ctx.r20.u64 = ctx.r10.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// mr r15,r25
	ctx.r15.u64 = ctx.r25.u64;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ea5914
	if (ctx.cr6.eq) goto loc_82EA5914;
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
loc_82EA5914:
	// lwz r11,460(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ea5924
	if (ctx.cr6.eq) goto loc_82EA5924;
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
loc_82EA5924:
	// lwz r11,40(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 40);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82ea6734
	if (ctx.cr6.eq) goto loc_82EA6734;
	// lwz r11,60(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x82ea5948
	if (!ctx.cr6.gt) goto loc_82EA5948;
	// lwz r11,440(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 440);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82ea6734
	if (ctx.cr6.eq) goto loc_82EA6734;
loc_82EA5948:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r28,396(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lwz r23,380(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// lwz r18,452(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// ori r10,r11,2496
	ctx.r10.u64 = ctx.r11.u64 | 2496;
	// ori r9,r9,2500
	ctx.r9.u64 = ctx.r9.u64 | 2500;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82ea59c4
	if (ctx.cr6.eq) goto loc_82EA59C4;
	// lwzx r11,r24,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ea5994
	if (ctx.cr6.eq) goto loc_82EA5994;
	// cmpdi cr6,r7,0
	ctx.cr6.compare<int64_t>(ctx.r7.s64, 0, ctx.xer);
	// bge cr6,0x82ea5994
	if (!ctx.cr6.lt) goto loc_82EA5994;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq cr6,0x82ea5994
	if (ctx.cr6.eq) goto loc_82EA5994;
	// lwzx r11,r24,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ea59c4
	if (!ctx.cr6.eq) goto loc_82EA59C4;
loc_82EA5994:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x82ea59b4
	if (!ctx.cr6.eq) goto loc_82EA59B4;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x82ea59b4
	if (!ctx.cr6.eq) goto loc_82EA59B4;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r8,212(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82ea59b8
	if (!ctx.cr6.eq) goto loc_82EA59B8;
loc_82EA59B4:
	// stw r25,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r25.u32);
loc_82EA59B8:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
loc_82EA59C4:
	// add r10,r24,r10
	ctx.r10.u64 = ctx.r24.u64 + ctx.r10.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ea59f4
	if (ctx.cr6.eq) goto loc_82EA59F4;
	// cmpdi cr6,r7,0
	ctx.cr6.compare<int64_t>(ctx.r7.s64, 0, ctx.xer);
	// bge cr6,0x82ea59f4
	if (!ctx.cr6.lt) goto loc_82EA59F4;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq cr6,0x82ea59f4
	if (ctx.cr6.eq) goto loc_82EA59F4;
	// lwzx r11,r24,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ea5a00
	if (!ctx.cr6.eq) goto loc_82EA5A00;
loc_82EA59F4:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// add r11,r17,r11
	ctx.r11.u64 = ctx.r17.u64 + ctx.r11.u64;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
loc_82EA5A00:
	// lwz r11,176(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ea5a40
	if (!ctx.cr6.eq) goto loc_82EA5A40;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r9,30168(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 30168);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82ea5a40
	if (!ctx.cr6.gt) goto loc_82EA5A40;
	// lis r29,-32767
	ctx.r29.s64 = -2147418112;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// ori r29,r29,12
	ctx.r29.u64 = ctx.r29.u64 | 12;
	// bne cr6,0x82ea6734
	if (!ctx.cr6.eq) goto loc_82EA6734;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ea5a40
	if (ctx.cr6.eq) goto loc_82EA5A40;
	// cmpdi cr6,r7,0
	ctx.cr6.compare<int64_t>(ctx.r7.s64, 0, ctx.xer);
	// blt cr6,0x82ea6734
	if (ctx.cr6.lt) goto loc_82EA6734;
loc_82EA5A40:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r16,428(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 428);
	// ori r10,r11,1988
	ctx.r10.u64 = ctx.r11.u64 | 1988;
	// lwzx r11,r24,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82ea5a60
	if (!ctx.cr6.eq) goto loc_82EA5A60;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne cr6,0x82ea5a94
	if (!ctx.cr6.eq) goto loc_82EA5A94;
loc_82EA5A60:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ea5aac
	if (!ctx.cr6.eq) goto loc_82EA5AAC;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82ea5aac
	if (ctx.cr6.eq) goto loc_82EA5AAC;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x82ea5a94
	if (!ctx.cr6.eq) goto loc_82EA5A94;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x82ea5a94
	if (!ctx.cr6.eq) goto loc_82EA5A94;
	// lwz r11,24(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ea5aac
	if (ctx.cr6.eq) goto loc_82EA5AAC;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x82ea5aac
	if (ctx.cr6.eq) goto loc_82EA5AAC;
loc_82EA5A94:
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// clrldi r9,r16,32
	ctx.r9.u64 = ctx.r16.u64 & 0xFFFFFFFF;
	// ld r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// mulld r10,r10,r9
	ctx.r10.s64 = ctx.r10.s64 * ctx.r9.s64;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r8,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r8.u64);
loc_82EA5AAC:
	// lwz r11,20(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ea5ac4
	if (!ctx.cr6.eq) goto loc_82EA5AC4;
	// lwz r11,24(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ea5ad8
	if (ctx.cr6.eq) goto loc_82EA5AD8;
loc_82EA5AC4:
	// ld r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// ld r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// cmpd cr6,r10,r11
	ctx.cr6.compare<int64_t>(ctx.r10.s64, ctx.r11.s64, ctx.xer);
	// ble cr6,0x82ea5ad8
	if (!ctx.cr6.gt) goto loc_82EA5AD8;
	// std r11,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r11.u64);
loc_82EA5AD8:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r10,212(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82ea5af4
	if (ctx.cr6.eq) goto loc_82EA5AF4;
	// lwz r11,24(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ea5b04
	if (ctx.cr6.eq) goto loc_82EA5B04;
loc_82EA5AF4:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82ea5b04
	if (ctx.cr6.eq) goto loc_82EA5B04;
	// lwz r30,12(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// b 0x82ea5b44
	goto loc_82EA5B44;
loc_82EA5B04:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ea5b40
	if (ctx.cr6.eq) goto loc_82EA5B40;
	// ld r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// rldicl r9,r11,63,33
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 63) & 0x7FFFFFFF;
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// tdllei r8,0
	if (ctx.r8.u64 <= 0) __builtin_debugtrap();
	// rotldi r11,r6,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u64, 1);
	// divd r4,r6,r8
	ctx.r4.s64 = ctx.r6.s64 / ctx.r8.s64;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// extsw r30,r4
	ctx.r30.s64 = ctx.r4.s32;
	// andc r11,r8,r3
	ctx.r11.u64 = ctx.r8.u64 & ~ctx.r3.u64;
	// tdlgei r11,-1
	if (ctx.r11.u64 >= 4294967295) __builtin_debugtrap();
	// b 0x82ea5b44
	goto loc_82EA5B44;
loc_82EA5B40:
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_82EA5B44:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// extsw r10,r17
	ctx.r10.s64 = ctx.r17.s32;
	// ld r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// mulld r8,r10,r11
	ctx.r8.s64 = ctx.r10.s64 * ctx.r11.s64;
	// subf r10,r8,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r8.s64;
	// std r10,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r10.u64);
	// beq cr6,0x82ea5c64
	if (ctx.cr6.eq) goto loc_82EA5C64;
	// extsw r9,r28
	ctx.r9.s64 = ctx.r28.s32;
	// lwz r8,36(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r6,116(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// mulld r5,r9,r11
	ctx.r5.s64 = ctx.r9.s64 * ctx.r11.s64;
	// subf r4,r5,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r5.s64;
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// std r4,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r4.u64);
	// bne cr6,0x82ea5bcc
	if (!ctx.cr6.eq) goto loc_82EA5BCC;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x82ea5ba0
	if (!ctx.cr6.eq) goto loc_82EA5BA0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x82ea5ba0
	if (!ctx.cr6.eq) goto loc_82EA5BA0;
	// lwz r11,212(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 212);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82ea5bcc
	if (ctx.cr6.eq) goto loc_82EA5BCC;
loc_82EA5BA0:
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82ea4eb8
	ctx.lr = 0x82EA5BC0;
	sub_82EA4EB8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82ea6734
	if (ctx.cr6.lt) goto loc_82EA6734;
loc_82EA5BCC:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// ble cr6,0x82ea5be8
	if (!ctx.cr6.gt) goto loc_82EA5BE8;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// lwz r5,444(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 444);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82ea52d0
	ctx.lr = 0x82EA5BE8;
	sub_82EA52D0(ctx, base);
loc_82EA5BE8:
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// add r20,r17,r28
	ctx.r20.u64 = ctx.r17.u64 + ctx.r28.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82ea5c04
	if (!ctx.cr6.eq) goto loc_82EA5C04;
	// add r20,r20,r23
	ctx.r20.u64 = ctx.r20.u64 + ctx.r23.u64;
	// li r15,-2
	ctx.r15.s64 = -2;
	// b 0x82ea5c08
	goto loc_82EA5C08;
loc_82EA5C04:
	// li r15,-1
	ctx.r15.s64 = -1;
loc_82EA5C08:
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ea5c2c
	if (ctx.cr6.eq) goto loc_82EA5C2C;
	// ld r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 152);
	// clrldi r10,r16,32
	ctx.r10.u64 = ctx.r16.u64 & 0xFFFFFFFF;
	// stw r25,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r25.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,152(r31)
	PPC_STORE_U64(ctx.r31.u32 + 152, ctx.r11.u64);
	// b 0x82ea5c40
	goto loc_82EA5C40;
loc_82EA5C2C:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x82ea5c40
	if (ctx.cr6.eq) goto loc_82EA5C40;
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// add r11,r11,r16
	ctx.r11.u64 = ctx.r11.u64 + ctx.r16.u64;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
loc_82EA5C40:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq cr6,0x82ea5c64
	if (ctx.cr6.eq) goto loc_82EA5C64;
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r9,436(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r8,r11,r16
	ctx.r8.u64 = ctx.r11.u64 + ctx.r16.u64;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r7,124(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// stw r9,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
loc_82EA5C64:
	// lwz r11,20(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// lwz r28,420(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ea5c94
	if (!ctx.cr6.eq) goto loc_82EA5C94;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bge cr6,0x82ea5c94
	if (!ctx.cr6.lt) goto loc_82EA5C94;
	// subf. r11,r20,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r20.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82ea5c94
	if (!ctx.cr0.lt) goto loc_82EA5C94;
	// lis r29,-32764
	ctx.r29.s64 = -2147221504;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// ori r29,r29,3
	ctx.r29.u64 = ctx.r29.u64 | 3;
	// beq cr6,0x82ea6734
	if (ctx.cr6.eq) goto loc_82EA6734;
loc_82EA5C94:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x82ea60d4
	if (!ctx.cr6.gt) goto loc_82EA60D4;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r23,388(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r22,372(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// ori r21,r11,2036
	ctx.r21.u64 = ctx.r11.u64 | 2036;
	// b 0x82ea5cb4
	goto loc_82EA5CB4;
loc_82EA5CB0:
	// lwz r28,420(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
loc_82EA5CB4:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r6,72(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// rlwinm r5,r9,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r7,12(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// lwz r30,396(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// subf r3,r5,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r5.s64;
	// ld r4,336(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 336);
	// subf r8,r6,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r6.s64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// cmpw cr6,r20,r8
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82ea5cf0
	if (ctx.cr6.lt) goto loc_82EA5CF0;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82EA5CF0:
	// srawi r8,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 3;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// add r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82ea5e7c
	if (ctx.cr6.lt) goto loc_82EA5E7C;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x82ea5d8c
	if (ctx.cr6.lt) goto loc_82EA5D8C;
	// lwz r9,12(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// add r10,r20,r28
	ctx.r10.u64 = ctx.r20.u64 + ctx.r28.u64;
	// lwz r8,144(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// srawi r5,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 3;
	// lwz r7,124(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// extsw r9,r8
	ctx.r9.s64 = ctx.r8.s32;
	// ld r8,152(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 152);
	// addze r5,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r5.s64 = temp.s64;
	// lwz r6,120(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// add r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// stw r25,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r25.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// std r10,152(r31)
	PPC_STORE_U64(ctx.r31.u32 + 152, ctx.r10.u64);
	// addi r11,r7,4
	ctx.r11.s64 = ctx.r7.s64 + 4;
	// stw r5,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r5.u32);
	// stw r6,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r6.u32);
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// stw r25,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r25.u32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// stb r25,129(r31)
	PPC_STORE_U8(ctx.r31.u32 + 129, ctx.r25.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82ea4eb8
	ctx.lr = 0x82EA5D7C;
	sub_82EA4EB8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82ea6734
	if (ctx.cr6.lt) goto loc_82EA6734;
	// b 0x82ea5e4c
	goto loc_82EA5E4C;
loc_82EA5D8C:
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ea5dc4
	if (!ctx.cr6.eq) goto loc_82EA5DC4;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82ea4eb8
	ctx.lr = 0x82EA5DB8;
	sub_82EA4EB8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82ea6734
	if (ctx.cr6.lt) goto loc_82EA6734;
loc_82EA5DC4:
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// bne cr6,0x82ea5dfc
	if (!ctx.cr6.eq) goto loc_82EA5DFC;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// bne cr6,0x82ea5dfc
	if (!ctx.cr6.eq) goto loc_82EA5DFC;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82ea5dfc
	if (ctx.cr6.eq) goto loc_82EA5DFC;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// bne cr6,0x82ea5dfc
	if (!ctx.cr6.eq) goto loc_82EA5DFC;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bne cr6,0x82ea5dfc
	if (!ctx.cr6.eq) goto loc_82EA5DFC;
	// cmpw cr6,r20,r30
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x82ea5dfc
	if (!ctx.cr6.lt) goto loc_82EA5DFC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
loc_82EA5DFC:
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// lwz r10,144(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// srawi r7,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 3;
	// lwz r6,116(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// lwz r8,120(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r9,124(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// addze r7,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r7.s64 = temp.s64;
	// ld r10,152(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 152);
	// addi r5,r8,4
	ctx.r5.s64 = ctx.r8.s64 + 4;
	// add r4,r7,r6
	ctx.r4.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stw r25,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r25.u32);
	// addi r3,r9,4
	ctx.r3.s64 = ctx.r9.s64 + 4;
	// stw r5,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r5.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r4,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r4.u32);
	// stw r3,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r3.u32);
	// std r11,152(r31)
	PPC_STORE_U64(ctx.r31.u32 + 152, ctx.r11.u64);
	// stw r25,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r25.u32);
	// stb r25,129(r31)
	PPC_STORE_U8(ctx.r31.u32 + 129, ctx.r25.u8);
loc_82EA5E4C:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,72(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// rlwinm r6,r10,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r7,12(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// subf r5,r9,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r9.s64;
	// subf r11,r8,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r8.s64;
	// add r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 + ctx.r7.u64;
	// cmpw cr6,r20,r10
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82ea5e7c
	if (ctx.cr6.gt) goto loc_82EA5E7C;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_82EA5E7C:
	// extsh r11,r15
	ctx.r11.s64 = ctx.r15.s16;
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// bne cr6,0x82ea5f3c
	if (!ctx.cr6.eq) goto loc_82EA5F3C;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82ea5e94
	if (!ctx.cr6.eq) goto loc_82EA5E94;
	// lwz r27,380(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
loc_82EA5E94:
	// lwz r28,380(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r10.s32, ctx.xer);
	// subf r11,r27,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r27.s64;
	// srawi r9,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 3;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// ble cr6,0x82ea5ed0
	if (!ctx.cr6.gt) goto loc_82EA5ED0;
	// addi r11,r10,7
	ctx.r11.s64 = ctx.r10.s64 + 7;
	// srawi r10,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// addze r8,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82ea5ecc
	if (!ctx.cr6.lt) goto loc_82EA5ECC;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82EA5ECC:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82EA5ED0:
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// add r5,r9,r22
	ctx.r5.u64 = ctx.r9.u64 + ctx.r22.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82ea57c8
	ctx.lr = 0x82EA5EE8;
	sub_82EA57C8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82ea6734
	if (ctx.cr6.lt) goto loc_82EA6734;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// extsw r10,r28
	ctx.r10.s64 = ctx.r28.s32;
	// ld r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// subf. r27,r30,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r30.s64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// mulld r8,r11,r10
	ctx.r8.s64 = ctx.r11.s64 * ctx.r10.s64;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// subf r20,r30,r20
	ctx.r20.s64 = ctx.r20.s64 - ctx.r30.s64;
	// std r7,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r7.u64);
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r6,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r6.u32);
	// bne 0x82ea60c8
	if (!ctx.cr0.eq) goto loc_82EA60C8;
	// lwz r11,380(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// li r15,-1
	ctx.r15.s64 = -1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82ea60c8
	if (!ctx.cr6.eq) goto loc_82EA60C8;
	// stw r25,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r25.u32);
	// b 0x82ea60c8
	goto loc_82EA60C8;
loc_82EA5F3C:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82ea604c
	if (!ctx.cr6.eq) goto loc_82EA604C;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82ea5f50
	if (!ctx.cr6.eq) goto loc_82EA5F50;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
loc_82EA5F50:
	// lwz r11,396(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r10.s32, ctx.xer);
	// subf r9,r27,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r27.s64;
	// srawi r8,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	// addze r28,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r28.s64 = temp.s64;
	// ble cr6,0x82ea5f8c
	if (!ctx.cr6.gt) goto loc_82EA5F8C;
	// addi r11,r10,7
	ctx.r11.s64 = ctx.r10.s64 + 7;
	// srawi r10,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82ea5f88
	if (!ctx.cr6.lt) goto loc_82EA5F88;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82EA5F88:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82EA5F8C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82ea5fb8
	if (ctx.cr6.eq) goto loc_82EA5FB8;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,2500
	ctx.r10.u64 = ctx.r11.u64 | 2500;
	// lwzx r9,r24,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82ea5fb8
	if (ctx.cr6.eq) goto loc_82EA5FB8;
	// lwz r29,64(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// b 0x82ea5fbc
	goto loc_82EA5FBC;
loc_82EA5FB8:
	// lwzx r29,r24,r21
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r21.u32);
loc_82EA5FBC:
	// lwz r11,600(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 600);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ea6008
	if (ctx.cr6.eq) goto loc_82EA6008;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq cr6,0x82ea6008
	if (ctx.cr6.eq) goto loc_82EA6008;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x82ea6008
	if (!ctx.cr6.eq) goto loc_82EA6008;
	// cmpw cr6,r29,r7
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82ea6008
	if (!ctx.cr6.lt) goto loc_82EA6008;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ea68d0
	ctx.lr = 0x82EA5FF0;
	sub_82EA68D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r5,616(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 616);
	// bl 0x82ea6768
	ctx.lr = 0x82EA6000;
	sub_82EA6768(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ea6800
	ctx.lr = 0x82EA6008;
	sub_82EA6800(ctx, base);
loc_82EA6008:
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// add r5,r28,r23
	ctx.r5.u64 = ctx.r28.u64 + ctx.r23.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82ea57c8
	ctx.lr = 0x82EA6020;
	sub_82EA57C8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82ea6734
	if (ctx.cr6.lt) goto loc_82EA6734;
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// subf. r27,r30,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r30.s64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// subf r20,r30,r20
	ctx.r20.s64 = ctx.r20.s64 - ctx.r30.s64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r11.u32);
	// bne 0x82ea60c8
	if (!ctx.cr0.eq) goto loc_82EA60C8;
	// mr r15,r25
	ctx.r15.u64 = ctx.r25.u64;
	// b 0x82ea60c8
	goto loc_82EA60C8;
loc_82EA604C:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82ea6058
	if (!ctx.cr6.eq) goto loc_82EA6058;
	// mr r27,r17
	ctx.r27.u64 = ctx.r17.u64;
loc_82EA6058:
	// subf r11,r27,r17
	ctx.r11.s64 = ctx.r17.s64 - ctx.r27.s64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// srawi r9,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 3;
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r10.s32, ctx.xer);
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// ble cr6,0x82ea6090
	if (!ctx.cr6.gt) goto loc_82EA6090;
	// addi r11,r10,7
	ctx.r11.s64 = ctx.r10.s64 + 7;
	// srawi r10,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// addze r8,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82ea608c
	if (!ctx.cr6.lt) goto loc_82EA608C;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82EA608C:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82EA6090:
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// add r5,r9,r14
	ctx.r5.u64 = ctx.r9.u64 + ctx.r14.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82ea57c8
	ctx.lr = 0x82EA60A8;
	sub_82EA57C8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82ea6734
	if (ctx.cr6.lt) goto loc_82EA6734;
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// subf r27,r30,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r30.s64;
	// subf r20,r30,r20
	ctx.r20.s64 = ctx.r20.s64 - ctx.r30.s64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r11.u32);
loc_82EA60C8:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bgt cr6,0x82ea5cb0
	if (ctx.cr6.gt) goto loc_82EA5CB0;
	// lwz r22,332(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
loc_82EA60D4:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x82ea667c
	if (ctx.cr6.eq) goto loc_82EA667C;
	// lwz r10,20(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82ea6118
	if (ctx.cr6.eq) goto loc_82EA6118;
	// lwz r11,28(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ea6110
	if (!ctx.cr6.eq) goto loc_82EA6110;
	// lwz r11,30248(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 30248);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x82ea6108
	if (!ctx.cr6.gt) goto loc_82EA6108;
	// li r27,2
	ctx.r27.s64 = 2;
	// b 0x82ea6168
	goto loc_82EA6168;
loc_82EA6108:
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// b 0x82ea6168
	goto loc_82EA6168;
loc_82EA6110:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82ea613c
	if (!ctx.cr6.eq) goto loc_82EA613C;
loc_82EA6118:
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ea6140
	if (!ctx.cr6.eq) goto loc_82EA6140;
	// lwz r11,30248(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 30248);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// ble cr6,0x82ea6140
	if (!ctx.cr6.gt) goto loc_82EA6140;
	// addi r27,r11,-8
	ctx.r27.s64 = ctx.r11.s64 + -8;
	// b 0x82ea6168
	goto loc_82EA6168;
loc_82EA613C:
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82EA6140:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82ea6164
	if (!ctx.cr6.eq) goto loc_82EA6164;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ea6164
	if (!ctx.cr6.eq) goto loc_82EA6164;
	// lwz r11,30248(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 30248);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// addi r27,r11,-4
	ctx.r27.s64 = ctx.r11.s64 + -4;
	// bgt cr6,0x82ea6168
	if (ctx.cr6.gt) goto loc_82EA6168;
loc_82EA6164:
	// lwz r27,30248(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 30248);
loc_82EA6168:
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ea61a0
	if (!ctx.cr6.eq) goto loc_82EA61A0;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// ld r8,336(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 336);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82ea4eb8
	ctx.lr = 0x82EA6194;
	sub_82EA4EB8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82ea6734
	if (ctx.cr6.lt) goto loc_82EA6734;
loc_82EA61A0:
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r10,12(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// subf r7,r11,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r11.s64;
	// lwz r8,72(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// rlwinm r6,r7,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r9,r10,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r10.s64;
	// add. r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt 0x82ea6240
	if (ctx.cr0.lt) goto loc_82EA6240;
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// srawi r3,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r10.s32 >> 3;
	// lwz r6,120(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r7,124(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// addze r5,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r5.s64 = temp.s64;
	// ld r8,152(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 152);
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// addi r9,r6,4
	ctx.r9.s64 = ctx.r6.s64 + 4;
	// stw r25,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r25.u32);
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// stw r25,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r25.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// stw r9,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r9.u32);
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// stw r7,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r7.u32);
	// std r6,152(r31)
	PPC_STORE_U64(ctx.r31.u32 + 152, ctx.r6.u64);
	// stb r25,129(r31)
	PPC_STORE_U8(ctx.r31.u32 + 129, ctx.r25.u8);
	// ble cr6,0x82ea6240
	if (!ctx.cr6.gt) goto loc_82EA6240;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// ld r8,336(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 336);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82ea4eb8
	ctx.lr = 0x82EA6234;
	sub_82EA4EB8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82ea6734
	if (ctx.cr6.lt) goto loc_82EA6734;
loc_82EA6240:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// li r28,8
	ctx.r28.s64 = 8;
	// lwz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// subf r4,r11,r7
	ctx.r4.s64 = ctx.r7.s64 - ctx.r11.s64;
	// lwz r9,260(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 260);
	// lwz r8,256(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 256);
	// rlwinm r3,r7,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r7,108(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r30,104(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// mullw r7,r4,r7
	ctx.r7.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r7.s32);
	// ld r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// ld r8,88(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// extsw r9,r6
	ctx.r9.s64 = ctx.r6.s32;
	// subf r3,r3,r5
	ctx.r3.s64 = ctx.r5.s64 - ctx.r3.s64;
	// addi r5,r9,-1
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// clrldi r9,r7,32
	ctx.r9.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// mulld r7,r5,r30
	ctx.r7.s64 = ctx.r5.s64 * ctx.r30.s64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// mulld r4,r7,r30
	ctx.r4.s64 = ctx.r7.s64 * ctx.r30.s64;
	// subf r10,r10,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r10.s64;
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpd cr6,r5,r4
	ctx.cr6.compare<int64_t>(ctx.r5.s64, ctx.r4.s64, ctx.xer);
	// ble cr6,0x82ea62cc
	if (!ctx.cr6.gt) goto loc_82EA62CC;
	// lwz r11,20(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ea62f4
	if (ctx.cr6.eq) goto loc_82EA62F4;
loc_82EA62CC:
	// lwz r11,212(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 212);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ea63dc
	if (ctx.cr6.eq) goto loc_82EA63DC;
	// lbz r11,30144(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 30144);
	// lbz r10,129(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 129);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82ea63dc
	if (!ctx.cr6.eq) goto loc_82EA63DC;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82ea63dc
	if (!ctx.cr6.lt) goto loc_82EA63DC;
loc_82EA62F4:
	// lwz r11,60(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x82ea6348
	if (ctx.cr6.gt) goto loc_82EA6348;
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// slw r11,r28,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r11.u8 & 0x3F));
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82ea6348
	if (!ctx.cr6.gt) goto loc_82EA6348;
	// lis r29,-32767
	ctx.r29.s64 = -2147418112;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// ori r29,r29,12
	ctx.r29.u64 = ctx.r29.u64 | 12;
	// bne cr6,0x82ea6734
	if (!ctx.cr6.eq) goto loc_82EA6734;
	// lwz r23,80(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ea634c
	if (ctx.cr6.eq) goto loc_82EA634C;
	// ld r11,336(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 336);
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// blt cr6,0x82ea6734
	if (ctx.cr6.lt) goto loc_82EA6734;
	// b 0x82ea634c
	goto loc_82EA634C;
loc_82EA6348:
	// lwz r23,80(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82EA634C:
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82ea57c8
	ctx.lr = 0x82EA6364;
	sub_82EA57C8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82ea6734
	if (ctx.cr6.lt) goto loc_82EA6734;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// extsw r10,r30
	ctx.r10.s64 = ctx.r30.s32;
	// ld r7,88(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// mulld r5,r11,r10
	ctx.r5.s64 = ctx.r11.s64 * ctx.r10.s64;
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lwz r9,124(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// ld r10,152(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 152);
	// lwz r6,116(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r8,120(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// subf r3,r5,r7
	ctx.r3.s64 = ctx.r7.s64 - ctx.r5.s64;
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// std r3,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r3.u64);
	// addi r7,r9,4
	ctx.r7.s64 = ctx.r9.s64 + 4;
	// lwz r4,12(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// srawi r3,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 3;
	// stw r7,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r7.u32);
	// addze r7,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r7.s64 = temp.s64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r25,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r25.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// stw r25,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r25.u32);
	// add r11,r7,r6
	ctx.r11.u64 = ctx.r7.u64 + ctx.r6.u64;
	// std r5,152(r31)
	PPC_STORE_U64(ctx.r31.u32 + 152, ctx.r5.u64);
	// stw r8,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r8.u32);
	// stb r25,129(r31)
	PPC_STORE_U8(ctx.r31.u32 + 129, ctx.r25.u8);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// b 0x82ea63e0
	goto loc_82EA63E0;
loc_82EA63DC:
	// lwz r23,80(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82EA63E0:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bne cr6,0x82ea6488
	if (!ctx.cr6.eq) goto loc_82EA6488;
	// lwz r9,412(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 412);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82ea642c
	if (ctx.cr6.eq) goto loc_82EA642C;
	// lwz r8,12(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// lwz r7,68(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// srawi r6,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 3;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rotlwi r11,r7,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// divw r3,r7,r5
	ctx.r3.s32 = ctx.r7.s32 / ctx.r5.s32;
	// andc r7,r5,r4
	ctx.r7.u64 = ctx.r5.u64 & ~ctx.r4.u64;
	// mullw r11,r3,r8
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// twllei r5,0
	if (ctx.r5.u32 <= 0) __builtin_debugtrap();
	// twlgei r7,-1
	if (ctx.r7.u32 >= 4294967295) __builtin_debugtrap();
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
loc_82EA642C:
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// srawi r8,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 3;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rotlwi r10,r9,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addze r6,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r6.s64 = temp.s64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// divw r3,r9,r6
	ctx.r3.s32 = ctx.r9.s32 / ctx.r6.s32;
	// andc r10,r6,r4
	ctx.r10.u64 = ctx.r6.u64 & ~ctx.r4.u64;
	// stw r7,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r7.u32);
	// mullw r8,r3,r6
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r6.s32);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r5,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r5.u32);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// twlgei r10,-1
	if (ctx.r10.u32 >= 4294967295) __builtin_debugtrap();
	// rotlwi r10,r7,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r7.u32);
	// twllei r6,0
	if (ctx.r6.u32 <= 0) __builtin_debugtrap();
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r6,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r6.u32);
loc_82EA6488:
	// lwz r11,404(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ea6550
	if (!ctx.cr6.eq) goto loc_82EA6550;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ea667c
	if (!ctx.cr6.eq) goto loc_82EA667C;
	// lwz r11,28(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ea667c
	if (!ctx.cr6.eq) goto loc_82EA667C;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lhz r11,34(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 34);
	// lwz r9,88(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 88);
	// extsw r8,r27
	ctx.r8.s64 = ctx.r27.s32;
	// ori r6,r10,2256
	ctx.r6.u64 = ctx.r10.u64 | 2256;
	// lwz r7,30532(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + 30532);
	// mullw r5,r11,r9
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// lwz r4,256(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 256);
	// ld r11,30008(r24)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r24.u32 + 30008);
	// ld r3,336(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 336);
	// lhzx r9,r24,r6
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r24.u32 + ctx.r6.u32);
	// divwu r7,r7,r5
	ctx.r7.u32 = ctx.r7.u32 / ctx.r5.u32;
	// twllei r5,0
	if (ctx.r5.u32 <= 0) __builtin_debugtrap();
	// clrldi r10,r7,32
	ctx.r10.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// extsw r6,r4
	ctx.r6.s64 = ctx.r4.s32;
	// mullw r5,r9,r4
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsw r10,r5
	ctx.r10.s64 = ctx.r5.s32;
	// divd r7,r4,r6
	ctx.r7.s64 = ctx.r4.s64 / ctx.r6.s64;
	// rotldi r9,r4,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u64, 1);
	// subf r5,r8,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r8.s64;
	// addi r4,r9,-1
	ctx.r4.s64 = ctx.r9.s64 + -1;
	// mulld r9,r5,r6
	ctx.r9.s64 = ctx.r5.s64 * ctx.r6.s64;
	// andc r8,r6,r4
	ctx.r8.u64 = ctx.r6.u64 & ~ctx.r4.u64;
	// add r7,r10,r3
	ctx.r7.u64 = ctx.r10.u64 + ctx.r3.u64;
	// tdllei r6,0
	if (ctx.r6.u64 <= 0) __builtin_debugtrap();
	// tdlgei r8,-1
	if (ctx.r8.u64 >= 4294967295) __builtin_debugtrap();
	// cmpd cr6,r7,r9
	ctx.cr6.compare<int64_t>(ctx.r7.s64, ctx.r9.s64, ctx.xer);
	// bne cr6,0x82ea667c
	if (!ctx.cr6.eq) goto loc_82EA667C;
	// lwz r10,30024(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 30024);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82ea667c
	if (!ctx.cr6.eq) goto loc_82EA667C;
	// lwz r10,212(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 212);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82ea667c
	if (ctx.cr6.eq) goto loc_82EA667C;
	// lwz r10,30016(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 30016);
	// ld r9,152(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 152);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// cmpd cr6,r9,r7
	ctx.cr6.compare<int64_t>(ctx.r9.s64, ctx.r7.s64, ctx.xer);
	// bgt cr6,0x82ea667c
	if (ctx.cr6.gt) goto loc_82EA667C;
loc_82EA6550:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,12(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// lwz r9,460(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// rotlwi r11,r7,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// divw r6,r7,r8
	ctx.r6.s32 = ctx.r7.s32 / ctx.r8.s32;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// mullw r5,r6,r8
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// subf r3,r5,r7
	ctx.r3.s64 = ctx.r7.s64 - ctx.r5.s64;
	// andc r11,r8,r4
	ctx.r11.u64 = ctx.r8.u64 & ~ctx.r4.u64;
	// twllei r8,0
	if (ctx.r8.u32 <= 0) __builtin_debugtrap();
	// subf r30,r3,r8
	ctx.r30.s64 = ctx.r8.s64 - ctx.r3.s64;
	// twlgei r11,-1
	if (ctx.r11.u32 >= 4294967295) __builtin_debugtrap();
	// beq cr6,0x82ea65a4
	if (ctx.cr6.eq) goto loc_82EA65A4;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82ea65a4
	if (!ctx.cr6.gt) goto loc_82EA65A4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82EA65A4:
	// lwz r11,60(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x82ea65f0
	if (ctx.cr6.gt) goto loc_82EA65F0;
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// slw r11,r28,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r11.u8 & 0x3F));
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82ea65f0
	if (!ctx.cr6.gt) goto loc_82EA65F0;
	// lis r29,-32767
	ctx.r29.s64 = -2147418112;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// ori r29,r29,12
	ctx.r29.u64 = ctx.r29.u64 | 12;
	// bne cr6,0x82ea6734
	if (!ctx.cr6.eq) goto loc_82EA6734;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ea65f0
	if (ctx.cr6.eq) goto loc_82EA65F0;
	// ld r11,336(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 336);
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// blt cr6,0x82ea6734
	if (ctx.cr6.lt) goto loc_82EA6734;
loc_82EA65F0:
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82ea57c8
	ctx.lr = 0x82EA6608;
	sub_82EA57C8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82ea6734
	if (ctx.cr6.lt) goto loc_82EA6734;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// extsw r10,r30
	ctx.r10.s64 = ctx.r30.s32;
	// ld r7,88(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// mulld r5,r11,r10
	ctx.r5.s64 = ctx.r11.s64 * ctx.r10.s64;
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lwz r6,116(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r8,120(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r9,124(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// ld r10,152(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 152);
	// subf r3,r5,r7
	ctx.r3.s64 = ctx.r7.s64 - ctx.r5.s64;
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// std r3,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r3.u64);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lwz r7,12(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// srawi r5,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 3;
	// addze r7,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r7.s64 = temp.s64;
	// stw r8,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r8.u32);
	// addi r4,r9,4
	ctx.r4.s64 = ctx.r9.s64 + 4;
	// stw r25,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r25.u32);
	// add r3,r7,r6
	ctx.r3.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stw r25,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r25.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r4,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r4.u32);
	// stw r3,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r3.u32);
	// std r11,152(r31)
	PPC_STORE_U64(ctx.r31.u32 + 152, ctx.r11.u64);
	// stb r25,129(r31)
	PPC_STORE_U8(ctx.r31.u32 + 129, ctx.r25.u8);
loc_82EA667C:
	// lwz r11,20(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ea6734
	if (!ctx.cr6.eq) goto loc_82EA6734;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ea66c4
	if (ctx.cr6.eq) goto loc_82EA66C4;
	// ld r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// rldicl r10,r11,63,33
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 63) & 0x7FFFFFFF;
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// tdllei r8,0
	if (ctx.r8.u64 <= 0) __builtin_debugtrap();
	// rotldi r11,r7,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u64, 1);
	// divd r6,r7,r8
	ctx.r6.s64 = ctx.r7.s64 / ctx.r8.s64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// extsw r11,r6
	ctx.r11.s64 = ctx.r6.s32;
	// andc r4,r8,r5
	ctx.r4.u64 = ctx.r8.u64 & ~ctx.r5.u64;
	// tdlgei r4,-1
	if (ctx.r4.u64 >= 4294967295) __builtin_debugtrap();
	// b 0x82ea66c8
	goto loc_82EA66C8;
loc_82EA66C4:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82EA66C8:
	// lwz r10,24(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82ea670c
	if (ctx.cr6.eq) goto loc_82EA670C;
	// lwz r10,332(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82ea6704
	if (!ctx.cr6.eq) goto loc_82EA6704;
	// lwz r10,324(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82ea670c
	if (ctx.cr6.eq) goto loc_82EA670C;
	// lwz r10,380(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82ea670c
	if (!ctx.cr6.eq) goto loc_82EA670C;
	// lwz r10,396(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82ea670c
	if (!ctx.cr6.eq) goto loc_82EA670C;
loc_82EA6704:
	// lwz r10,12(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82EA670C:
	// lwz r10,420(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82ea6724
	if (ctx.cr6.lt) goto loc_82EA6724;
	// lwz r10,332(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82ea6734
	if (ctx.cr6.eq) goto loc_82EA6734;
loc_82EA6724:
	// subf. r11,r20,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r20.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82ea6734
	if (!ctx.cr0.lt) goto loc_82EA6734;
	// lis r29,-32764
	ctx.r29.s64 = -2147221504;
	// ori r29,r29,3
	ctx.r29.u64 = ctx.r29.u64 | 3;
loc_82EA6734:
	// lwz r11,20(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ea6758
	if (ctx.cr6.eq) goto loc_82EA6758;
	// lwz r11,36(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ea6758
	if (!ctx.cr6.eq) goto loc_82EA6758;
	// ld r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// std r11,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r11.u64);
loc_82EA6758:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA6760"))) PPC_WEAK_FUNC(sub_82EA6760);
PPC_FUNC_IMPL(__imp__sub_82EA6760) {
	PPC_FUNC_PROLOGUE();
	// b 0x82c71250
	sub_82C71250(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA6764"))) PPC_WEAK_FUNC(sub_82EA6764);
PPC_FUNC_IMPL(__imp__sub_82EA6764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA6768"))) PPC_WEAK_FUNC(sub_82EA6768);
PPC_FUNC_IMPL(__imp__sub_82EA6768) {
	PPC_FUNC_PROLOGUE();
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// slw r9,r11,r5
	ctx.r9.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r5.u8 & 0x3F));
	// andc r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 & ~ctx.r9.u64;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// ble cr6,0x82ea679c
	if (!ctx.cr6.gt) goto loc_82EA679C;
	// subf r11,r5,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r5.s64;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// slw r9,r9,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// xor r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// blr 
	return;
loc_82EA679C:
	// subf r10,r10,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r10.s64;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// srw r7,r9,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// xor r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// subf. r11,r11,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// beq 0x82ea67e8
	if (ctx.cr0.eq) goto loc_82EA67E8;
	// subfic r11,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r11.s64 = 32 - ctx.r11.s64;
	// slw r10,r9,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// blr 
	return;
loc_82EA67E8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA67FC"))) PPC_WEAK_FUNC(sub_82EA67FC);
PPC_FUNC_IMPL(__imp__sub_82EA67FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA6800"))) PPC_WEAK_FUNC(sub_82EA6800);
PPC_FUNC_IMPL(__imp__sub_82EA6800) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// beq cr6,0x82ea68bc
	if (ctx.cr6.eq) goto loc_82EA68BC;
	// subfic r10,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r10.s64 = 32 - ctx.r11.s64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82ea68bc
	if (!ctx.cr6.gt) goto loc_82EA68BC;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// li r8,255
	ctx.r8.s64 = 255;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// subfic r11,r10,8
	ctx.xer.ca = ctx.r10.u32 <= 8;
	ctx.r11.s64 = 8 - ctx.r10.s64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82EA6830:
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// bge cr6,0x82ea6884
	if (!ctx.cr6.lt) goto loc_82EA6884;
	// sraw r7,r8,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r7.s64 = ctx.r8.s32 >> temp.u32;
	// lbz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// slw r4,r7,r11
	ctx.r4.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// lbz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// extsb r6,r5
	ctx.r6.s64 = ctx.r5.s8;
	// extsb r5,r4
	ctx.r5.s64 = ctx.r4.s8;
	// extsb r4,r7
	ctx.r4.s64 = ctx.r7.s8;
	// andc r7,r6,r5
	ctx.r7.u64 = ctx.r6.u64 & ~ctx.r5.u64;
	// and r6,r4,r5
	ctx.r6.u64 = ctx.r4.u64 & ctx.r5.u64;
	// stb r7,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r7.u8);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lbz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// or r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 | ctx.r7.u64;
	// stb r6,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r6.u8);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r4,r9,1
	ctx.r4.s64 = ctx.r9.s64 + 1;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// b 0x82ea6898
	goto loc_82EA6898;
loc_82EA6884:
	// lbz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// stb r7,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r7.u8);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
loc_82EA6898:
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// lwz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// rlwinm r5,r7,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// bdnz 0x82ea6830
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82EA6830;
loc_82EA68BC:
	// li r11,32
	ctx.r11.s64 = 32;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA68D0"))) PPC_WEAK_FUNC(sub_82EA68D0);
PPC_FUNC_IMPL(__imp__sub_82EA68D0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// subfic r11,r5,32
	ctx.xer.ca = ctx.r5.u32 <= 32;
	ctx.r11.s64 = 32 - ctx.r5.s64;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r9,1(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// lbz r8,2(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lbz r7,3(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// lbz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// extsb r5,r6
	ctx.r5.s64 = ctx.r6.s8;
	// rlwimi r9,r5,8,0,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 8) & 0xFFFFFF00) | (ctx.r9.u64 & 0xFFFFFFFF000000FF);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// rlwimi r8,r9,8,0,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFFFFFF00) | (ctx.r8.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r7,r8,8,0,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFFFFFF00) | (ctx.r7.u64 & 0xFFFFFFFF000000FF);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// bne cr6,0x82ea6928
	if (!ctx.cr6.eq) goto loc_82EA6928;
	// li r11,0
	ctx.r11.s64 = 0;
	// rotlwi r10,r7,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// and r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// blr 
	return;
loc_82EA6928:
	// li r10,-1
	ctx.r10.s64 = -1;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// and r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA6940"))) PPC_WEAK_FUNC(sub_82EA6940);
PPC_FUNC_IMPL(__imp__sub_82EA6940) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,32
	ctx.r9.s64 = 32;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA6960"))) PPC_WEAK_FUNC(sub_82EA6960);
PPC_FUNC_IMPL(__imp__sub_82EA6960) {
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
	// li r3,40
	ctx.r3.s64 = 40;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82c71240
	ctx.lr = 0x82EA6984;
	sub_82C71240(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ea69b4
	if (ctx.cr6.eq) goto loc_82EA69B4;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// beq cr6,0x82ea69b4
	if (ctx.cr6.eq) goto loc_82EA69B4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82ea68d0
	ctx.lr = 0x82EA69B4;
	sub_82EA68D0(ctx, base);
loc_82EA69B4:
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

__attribute__((alias("__imp__sub_82EA69CC"))) PPC_WEAK_FUNC(sub_82EA69CC);
PPC_FUNC_IMPL(__imp__sub_82EA69CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA69D0"))) PPC_WEAK_FUNC(sub_82EA69D0);
PPC_FUNC_IMPL(__imp__sub_82EA69D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82EA69D8;
	__savegprlr_27(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// addi r27,r11,-1368
	ctx.r27.s64 = ctx.r11.s64 + -1368;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// lfs f0,24436(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24436);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfd f30,136(r11)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r11.u32 + 136);
	// rlwinm r28,r9,0,1,8
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7F800000;
loc_82EA6A10:
	// rlwinm r11,r30,11,0,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 11) & 0xFFFFF800;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f1,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82fa30a8
	ctx.lr = 0x82EA6A28;
	sub_82FA30A8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r10,r27,16388
	ctx.r10.s64 = ctx.r27.s64 + 16388;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82ea6a10
	if (ctx.cr6.lt) goto loc_82EA6A10;
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,32440
	ctx.r29.s64 = ctx.r11.s64 + 32440;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r31,r29,-16392
	ctx.r31.s64 = ctx.r29.s64 + -16392;
	// lfd f31,128(r11)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 128);
loc_82EA6A5C:
	// rlwinm r11,r30,11,0,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 11) & 0xFFFFF800;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f1,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82fa30a8
	ctx.lr = 0x82EA6A74;
	sub_82FA30A8(ctx, base);
	// addi r11,r29,-16392
	ctx.r11.s64 = ctx.r29.s64 + -16392;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r10,r11,16388
	ctx.r10.s64 = ctx.r11.s64 + 16388;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82ea6a5c
	if (ctx.cr6.lt) goto loc_82EA6A5C;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82EA6A9C:
	// rlwinm r11,r30,23,0,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 23) & 0xFF800000;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f1,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82fa30a8
	ctx.lr = 0x82EA6AB0;
	sub_82FA30A8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r10,r29,1024
	ctx.r10.s64 = ctx.r29.s64 + 1024;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82ea6a9c
	if (ctx.cr6.lt) goto loc_82EA6A9C;
	// addi r31,r27,16392
	ctx.r31.s64 = ctx.r27.s64 + 16392;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82EA6AD4:
	// rlwinm r11,r30,23,0,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 23) & 0xFF800000;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f1,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82fa30a8
	ctx.lr = 0x82EA6AE8;
	sub_82FA30A8(ctx, base);
	// addi r11,r27,16392
	ctx.r11.s64 = ctx.r27.s64 + 16392;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r10,r11,1024
	ctx.r10.s64 = ctx.r11.s64 + 1024;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82ea6ad4
	if (ctx.cr6.lt) goto loc_82EA6AD4;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-64(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA6B18"))) PPC_WEAK_FUNC(sub_82EA6B18);
PPC_FUNC_IMPL(__imp__sub_82EA6B18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82EA6B20;
	__savegprlr_14(ctx, base);
	// lwz r25,0(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,30704(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30704);
	// li r9,1
	ctx.r9.s64 = 1;
	// addis r18,r3,1
	ctx.r18.s64 = ctx.r3.s64 + 65536;
	// lwz r15,30688(r3)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30688);
	// lwz r14,30692(r3)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30692);
	// addi r18,r18,-1660
	ctx.r18.s64 = ctx.r18.s64 + -1660;
	// stw r11,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r11.u32);
	// lwz r8,244(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 244);
	// lwz r22,344(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 344);
	// stw r10,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r10.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r9,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r9.u32);
	// ble cr6,0x82ea6e10
	if (!ctx.cr6.gt) goto loc_82EA6E10;
	// stw r11,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f10,21500(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21500);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,5184(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f11.f64 = double(temp.f32);
loc_82EA6B70:
	// lwz r9,340(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 340);
	// li r19,0
	ctx.r19.s64 = 0;
	// lwz r10,-220(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -220);
	// lwz r8,-216(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -216);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// lwzx r17,r10,r9
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// ble cr6,0x82ea6dcc
	if (!ctx.cr6.gt) goto loc_82EA6DCC;
	// lwz r10,-224(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -224);
	// extsh r23,r11
	ctx.r23.s64 = ctx.r11.s16;
	// mr r24,r22
	ctx.r24.u64 = ctx.r22.u64;
	// subf r21,r22,r15
	ctx.r21.s64 = ctx.r15.s64 - ctx.r22.s64;
	// subf r20,r22,r14
	ctx.r20.s64 = ctx.r14.s64 - ctx.r22.s64;
	// subf r16,r22,r10
	ctx.r16.s64 = ctx.r10.s64 - ctx.r22.s64;
loc_82EA6BA8:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// fmr f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f11.f64;
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// fmr f13,f11
	ctx.f13.f64 = ctx.f11.f64;
	// lwzx r31,r21,r24
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r24.u32);
	// mullw r30,r11,r23
	ctx.r30.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r23.s32);
	// lwzx r27,r20,r24
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r24.u32);
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
	// mullw r26,r23,r10
	ctx.r26.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r10.s32);
	// cmpw cr6,r31,r27
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r27.s32, ctx.xer);
	// bgt cr6,0x82ea6d80
	if (ctx.cr6.gt) goto loc_82EA6D80;
	// subf r11,r31,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r31.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x82ea6cec
	if (ctx.cr6.lt) goto loc_82EA6CEC;
	// lwz r4,344(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 344);
	// addi r28,r27,-1
	ctx.r28.s64 = ctx.r27.s64 + -1;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r18,-8
	ctx.r29.s64 = ctx.r18.s64 + -8;
loc_82EA6BF4:
	// lwz r5,344(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 344);
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpw cr6,r6,r30
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r30.s32, ctx.xer);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// blt cr6,0x82ea6c10
	if (ctx.cr6.lt) goto loc_82EA6C10;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
loc_82EA6C10:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r10,r26
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r26.s32, ctx.xer);
	// bgt cr6,0x82ea6c20
	if (ctx.cr6.gt) goto loc_82EA6C20;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_82EA6C20:
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lwzx r9,r11,r4
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// std r8,-200(r1)
	PPC_STORE_U64(ctx.r1.u32 + -200, ctx.r8.u64);
	// lfd f9,-200(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -200);
	// stw r9,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r9.u32);
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// add r8,r10,r29
	ctx.r8.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// lwzx r9,r10,r5
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// lfsx f6,r10,r29
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	ctx.f6.f64 = double(temp.f32);
	// lwz r5,-208(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -208);
	// subf r5,r5,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r5.s64;
	// extsw r5,r5
	ctx.r5.s64 = ctx.r5.s32;
	// fmuls f3,f7,f6
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// cmpw cr6,r9,r30
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r30.s32, ctx.xer);
	// std r5,-192(r1)
	PPC_STORE_U64(ctx.r1.u32 + -192, ctx.r5.u64);
	// lfd f5,-192(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -192);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f2,f4
	ctx.f2.f64 = double(float(ctx.f4.f64));
	// fdivs f1,f3,f2
	ctx.f1.f64 = double(float(ctx.f3.f64 / ctx.f2.f64));
	// fadds f12,f1,f12
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f12.f64));
	// blt cr6,0x82ea6c8c
	if (ctx.cr6.lt) goto loc_82EA6C8C;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
loc_82EA6C8C:
	// cmpw cr6,r6,r26
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r26.s32, ctx.xer);
	// bgt cr6,0x82ea6c98
	if (ctx.cr6.gt) goto loc_82EA6C98;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
loc_82EA6C98:
	// lwzx r10,r10,r4
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// lfs f9,4(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// subf r8,r7,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r7.s64;
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// std r7,-184(r1)
	PPC_STORE_U64(ctx.r1.u32 + -184, ctx.r7.u64);
	// lfd f8,-184(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -184);
	// std r6,-176(r1)
	PPC_STORE_U64(ctx.r1.u32 + -176, ctx.r6.u64);
	// lfd f7,-176(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// fcfid f6,f8
	ctx.f6.f64 = double(ctx.f8.s64);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// fcfid f4,f7
	ctx.f4.f64 = double(ctx.f7.s64);
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// fmuls f3,f5,f9
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f9.f64));
	// frsp f2,f4
	ctx.f2.f64 = double(float(ctx.f4.f64));
	// fdivs f1,f3,f2
	ctx.f1.f64 = double(float(ctx.f3.f64 / ctx.f2.f64));
	// fadds f13,f1,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// ble cr6,0x82ea6bf4
	if (!ctx.cr6.gt) goto loc_82EA6BF4;
loc_82EA6CEC:
	// cmpw cr6,r31,r27
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r27.s32, ctx.xer);
	// bgt cr6,0x82ea6d6c
	if (ctx.cr6.gt) goto loc_82EA6D6C;
	// lwz r10,344(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 344);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x82ea6d10
	if (ctx.cr6.lt) goto loc_82EA6D10;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82EA6D10:
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpw cr6,r9,r26
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r26.s32, ctx.xer);
	// bgt cr6,0x82ea6d20
	if (ctx.cr6.gt) goto loc_82EA6D20;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
loc_82EA6D20:
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lwz r10,344(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 344);
	// lfsx f0,r11,r18
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r18.u32);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.r8.u64);
	// lfd f9,-168(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r5,r6,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r6.s64;
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.r4.u64);
	// lfd f6,-160(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f7,f0
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fdivs f0,f3,f4
	ctx.f0.f64 = double(float(ctx.f3.f64 / ctx.f4.f64));
loc_82EA6D6C:
	// fadds f13,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// blt cr6,0x82ea6d80
	if (ctx.cr6.lt) goto loc_82EA6D80;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
loc_82EA6D80:
	// cmpwi cr6,r19,5
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 5, ctx.xer);
	// bge cr6,0x82ea6d94
	if (!ctx.cr6.lt) goto loc_82EA6D94;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,2436
	ctx.r10.u64 = ctx.r11.u64 | 2436;
	// b 0x82ea6dac
	goto loc_82EA6DAC;
loc_82EA6D94:
	// addi r11,r17,-5
	ctx.r11.s64 = ctx.r17.s64 + -5;
	// cmpw cr6,r19,r11
	ctx.cr6.compare<int32_t>(ctx.r19.s32, ctx.r11.s32, ctx.xer);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,2444
	ctx.r10.u64 = ctx.r11.u64 | 2444;
	// bge cr6,0x82ea6dac
	if (!ctx.cr6.lt) goto loc_82EA6DAC;
	// ori r10,r11,2440
	ctx.r10.u64 = ctx.r11.u64 | 2440;
loc_82EA6DAC:
	// lfsx f13,r3,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsx f0,r16,r24
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r16.u32 + ctx.r24.u32, temp.u32);
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmpw cr6,r19,r17
	ctx.cr6.compare<int32_t>(ctx.r19.s32, ctx.r17.s32, ctx.xer);
	// blt cr6,0x82ea6ba8
	if (ctx.cr6.lt) goto loc_82EA6BA8;
	// lwz r10,-220(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -220);
loc_82EA6DCC:
	// lwz r11,-212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -212);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,-224(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -224);
	// addi r15,r15,116
	ctx.r15.s64 = ctx.r15.s64 + 116;
	// lwz r8,-216(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -216);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r7,244(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 244);
	// addi r6,r9,116
	ctx.r6.s64 = ctx.r9.s64 + 116;
	// rotlwi r5,r8,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// stw r11,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r11.u32);
	// addi r14,r14,116
	ctx.r14.s64 = ctx.r14.s64 + 116;
	// stw r6,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r6.u32);
	// addi r22,r22,116
	ctx.r22.s64 = ctx.r22.s64 + 116;
	// stw r10,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r10.u32);
	// stw r5,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r5.u32);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82ea6b70
	if (ctx.cr6.lt) goto loc_82EA6B70;
loc_82EA6E10:
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA6E14"))) PPC_WEAK_FUNC(sub_82EA6E14);
PPC_FUNC_IMPL(__imp__sub_82EA6E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA6E18"))) PPC_WEAK_FUNC(sub_82EA6E18);
PPC_FUNC_IMPL(__imp__sub_82EA6E18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x82EA6E20;
	__savegprlr_22(ctx, base);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// lwz r6,344(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 344);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x82ea6e40
	if (ctx.cr6.gt) goto loc_82EA6E40;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r31,r11,28464
	ctx.r31.s64 = ctx.r11.s64 + 28464;
	// b 0x82ea6e48
	goto loc_82EA6E48;
loc_82EA6E40:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r31,r11,-14008
	ctx.r31.s64 = ctx.r11.s64 + -14008;
loc_82EA6E48:
	// lwz r11,244(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 244);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r30,30708(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30708);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82ea7010
	if (!ctx.cr6.gt) goto loc_82EA7010;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f11,19872(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lfs f13,19660(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 19660);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lfs f8,17520(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 17520);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,-14924(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -14924);
	ctx.f9.f64 = double(temp.f32);
	// li r29,0
	ctx.r29.s64 = 0;
	// lfs f10,21500(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 21500);
	ctx.f10.f64 = double(temp.f32);
	// ori r25,r11,2436
	ctx.r25.u64 = ctx.r11.u64 | 2436;
	// ori r26,r10,2444
	ctx.r26.u64 = ctx.r10.u64 | 2444;
	// ori r27,r9,2440
	ctx.r27.u64 = ctx.r9.u64 | 2440;
loc_82EA6EA8:
	// lwz r11,340(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 340);
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82ea6ff4
	if (!ctx.cr6.gt) goto loc_82EA6FF4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// subf r7,r30,r6
	ctx.r7.s64 = ctx.r6.s64 - ctx.r30.s64;
loc_82EA6EC8:
	// lwz r24,0(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r9,r7,r10
	ctx.r9.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lwzx r23,r5,r6
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwzx r8,r7,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// lwz r22,80(r4)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// std r24,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.r24.u64);
	// extsw r24,r23
	ctx.r24.s64 = ctx.r23.s32;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lfd f0,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// std r24,-136(r1)
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.r24.u64);
	// lfd f7,-136(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// fcfid f4,f0
	ctx.f4.f64 = double(ctx.f0.s64);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f2,f4
	ctx.f2.f64 = double(float(ctx.f4.f64));
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// addze r9,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r9.s64 = temp.s64;
	// mullw r8,r9,r22
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r22.s32);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// extsw r9,r8
	ctx.r9.s64 = ctx.r8.s32;
	// std r9,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.r9.u64);
	// lfd f1,-128(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// fcfid f0,f1
	ctx.f0.f64 = double(ctx.f1.s64);
	// fmuls f3,f5,f10
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// frsp f7,f0
	ctx.f7.f64 = double(float(ctx.f0.f64));
	// fdivs f0,f7,f3
	ctx.f0.f64 = double(float(ctx.f7.f64 / ctx.f3.f64));
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// bge cr6,0x82ea6f6c
	if (!ctx.cr6.lt) goto loc_82EA6F6C;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
loc_82EA6F44:
	// lwzu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r8,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.r8.u64);
	// lfd f7,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// fcmpu cr6,f5,f0
	ctx.cr6.compare(ctx.f5.f64, ctx.f0.f64);
	// blt cr6,0x82ea6f44
	if (ctx.cr6.lt) goto loc_82EA6F44;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bgt cr6,0x82ea6f74
	if (ctx.cr6.gt) goto loc_82EA6F74;
loc_82EA6F6C:
	// fmr f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f9.f64;
	// b 0x82ea6fb8
	goto loc_82EA6FB8;
loc_82EA6F74:
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bgt cr6,0x82ea6f9c
	if (ctx.cr6.gt) goto loc_82EA6F9C;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.r8.u64);
	// lfd f0,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// fcfid f7,f0
	ctx.f7.f64 = double(ctx.f0.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmuls f0,f6,f8
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// b 0x82ea6fb8
	goto loc_82EA6FB8;
loc_82EA6F9C:
	// addi r9,r11,-15
	ctx.r9.s64 = ctx.r11.s64 + -15;
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.r8.u64);
	// lfd f0,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// fcfid f7,f0
	ctx.f7.f64 = double(ctx.f0.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmadds f0,f6,f13,f12
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f13.f64 + ctx.f12.f64));
loc_82EA6FB8:
	// fdivs f0,f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f11.f64 / ctx.f0.f64));
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bge cr6,0x82ea6fd0
	if (!ctx.cr6.lt) goto loc_82EA6FD0;
	// lfsx f7,r3,r25
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r25.u32);
	ctx.f7.f64 = double(temp.f32);
	// b 0x82ea6fe4
	goto loc_82EA6FE4;
loc_82EA6FD0:
	// cmpwi cr6,r11,23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 23, ctx.xer);
	// blt cr6,0x82ea6fe0
	if (ctx.cr6.lt) goto loc_82EA6FE0;
	// lfsx f7,r3,r26
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r26.u32);
	ctx.f7.f64 = double(temp.f32);
	// b 0x82ea6fe4
	goto loc_82EA6FE4;
loc_82EA6FE0:
	// lfsx f7,r3,r27
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r27.u32);
	ctx.f7.f64 = double(temp.f32);
loc_82EA6FE4:
	// fmuls f6,f7,f0
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,0(r10)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82ea6ec8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82EA6EC8;
loc_82EA6FF4:
	// lwz r11,244(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 244);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r6,r6,116
	ctx.r6.s64 = ctx.r6.s64 + 116;
	// addi r30,r30,116
	ctx.r30.s64 = ctx.r30.s64 + 116;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82ea6ea8
	if (ctx.cr6.lt) goto loc_82EA6EA8;
loc_82EA7010:
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA7014"))) PPC_WEAK_FUNC(sub_82EA7014);
PPC_FUNC_IMPL(__imp__sub_82EA7014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA7018"))) PPC_WEAK_FUNC(sub_82EA7018);
PPC_FUNC_IMPL(__imp__sub_82EA7018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82EA7020;
	__savegprlr_14(ctx, base);
	// lwz r20,0(r3)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r11,30712(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30712);
	// li r16,1
	ctx.r16.s64 = 1;
	// lwz r18,30688(r3)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30688);
	// mr r15,r26
	ctx.r15.u64 = ctx.r26.u64;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// lwz r17,30692(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30692);
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// lwz r11,340(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 340);
	// lwz r21,344(r20)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r20.u32 + 344);
	// lwz r10,244(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 244);
	// mr r22,r21
	ctx.r22.u64 = ctx.r21.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r7,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r7.u32);
	// ble cr6,0x82ea723c
	if (!ctx.cr6.gt) goto loc_82EA723C;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// stw r26,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r26.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
loc_82EA7070:
	// lwz r11,340(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 340);
	// extsh r10,r16
	ctx.r10.s64 = ctx.r16.s16;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwzx r19,r9,r11
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// ble cr6,0x82ea709c
	if (!ctx.cr6.gt) goto loc_82EA709C;
	// addi r11,r27,-4
	ctx.r11.s64 = ctx.r27.s64 + -4;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82EA708C:
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// stwu r6,12(r11)
	ea = 12 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82ea708c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82EA708C;
loc_82EA709C:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// ble cr6,0x82ea71e4
	if (!ctx.cr6.gt) goto loc_82EA71E4;
	// extsh r24,r10
	ctx.r24.s64 = ctx.r10.s16;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// subf r23,r22,r18
	ctx.r23.s64 = ctx.r18.s64 - ctx.r22.s64;
	// subf r30,r22,r17
	ctx.r30.s64 = ctx.r17.s64 - ctx.r22.s64;
loc_82EA70B4:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r8,r23,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r3.u32);
	// mullw r29,r11,r24
	ctx.r29.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r24.s32);
	// lwzx r5,r30,r3
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r3.u32);
	// mullw r28,r10,r24
	ctx.r28.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r24.s32);
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// bgt cr6,0x82ea71d0
	if (ctx.cr6.gt) goto loc_82EA71D0;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r5,r10,r21
	ctx.r5.u64 = ctx.r10.u64 + ctx.r21.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r31,r25,r27
	ctx.r31.s64 = ctx.r27.s64 - ctx.r25.s64;
	// add r10,r11,r25
	ctx.r10.u64 = ctx.r11.u64 + ctx.r25.u64;
	// add r4,r11,r27
	ctx.r4.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
loc_82EA70F8:
	// lwz r7,4(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmpw cr6,r7,r29
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r29.s32, ctx.xer);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// blt cr6,0x82ea710c
	if (ctx.cr6.lt) goto loc_82EA710C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
loc_82EA710C:
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpw cr6,r9,r28
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r28.s32, ctx.xer);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// bgt cr6,0x82ea7120
	if (ctx.cr6.gt) goto loc_82EA7120;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_82EA7120:
	// lwzx r14,r31,r11
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// subf r10,r10,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r10.s64;
	// subf r9,r9,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r9.s64;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// bge cr6,0x82ea716c
	if (!ctx.cr6.lt) goto loc_82EA716C;
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// stw r26,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r26.u32);
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r7,-176(r1)
	PPC_STORE_U64(ctx.r1.u32 + -176, ctx.r7.u64);
	// lfd f13,-176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// std r9,-184(r1)
	PPC_STORE_U64(ctx.r1.u32 + -184, ctx.r9.u64);
	// lfd f0,-184(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -184);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fdivs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// stfs f8,0(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// b 0x82ea71a8
	goto loc_82EA71A8;
loc_82EA716C:
	// lwz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bge cr6,0x82ea71a8
	if (!ctx.cr6.lt) goto loc_82EA71A8;
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r7,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.r7.u64);
	// lfd f13,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// std r9,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.r9.u64);
	// lfd f0,-168(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fdivs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// stfs f8,4(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_82EA71A8:
	// lwzx r10,r30,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r3.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// addi r4,r4,12
	ctx.r4.s64 = ctx.r4.s64 + 12;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82ea70f8
	if (!ctx.cr6.gt) goto loc_82EA70F8;
	// lwz r9,-192(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r7,-188(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -188);
loc_82EA71D0:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// cmpw cr6,r26,r19
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r19.s32, ctx.xer);
	// blt cr6,0x82ea70b4
	if (ctx.cr6.lt) goto loc_82EA70B4;
	// li r26,0
	ctx.r26.s64 = 0;
loc_82EA71E4:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82ea720c
	if (!ctx.cr6.gt) goto loc_82EA720C;
	// addi r11,r27,8
	ctx.r11.s64 = ctx.r27.s64 + 8;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82EA71F4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x82ea7204
	if (!ctx.cr6.lt) goto loc_82EA7204;
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
loc_82EA7204:
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bdnz 0x82ea71f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82EA71F4;
loc_82EA720C:
	// lwz r11,244(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 244);
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r18,r18,116
	ctx.r18.s64 = ctx.r18.s64 + 116;
	// addi r17,r17,116
	ctx.r17.s64 = ctx.r17.s64 + 116;
	// stw r9,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r9.u32);
	// addi r22,r22,116
	ctx.r22.s64 = ctx.r22.s64 + 116;
	// addi r27,r27,348
	ctx.r27.s64 = ctx.r27.s64 + 348;
	// addi r25,r25,348
	ctx.r25.s64 = ctx.r25.s64 + 348;
	// rotlwi r16,r16,1
	ctx.r16.u64 = __builtin_rotateleft32(ctx.r16.u32, 1);
	// cmpw cr6,r15,r11
	ctx.cr6.compare<int32_t>(ctx.r15.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82ea7070
	if (ctx.cr6.lt) goto loc_82EA7070;
loc_82EA723C:
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA7240"))) PPC_WEAK_FUNC(sub_82EA7240);
PPC_FUNC_IMPL(__imp__sub_82EA7240) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82EA7248;
	__savegprlr_27(ctx, base);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addis r8,r3,1
	ctx.r8.s64 = ctx.r3.s64 + 65536;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r8,r8,-1548
	ctx.r8.s64 = ctx.r8.s64 + -1548;
	// addis r5,r3,1
	ctx.r5.s64 = ctx.r3.s64 + 65536;
	// lwz r11,80(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// addi r5,r5,-1660
	ctx.r5.s64 = ctx.r5.s64 + -1660;
	// lwz r10,252(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 252);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lwz r7,340(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 340);
	// extsw r6,r10
	ctx.r6.s64 = ctx.r10.s32;
	// std r9,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.r9.u64);
	// lfd f0,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// std r6,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.r6.u64);
	// lfd f13,-128(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// stw r29,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r29.u32);
	// addi r10,r6,-1
	ctx.r10.s64 = ctx.r6.s64 + -1;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fdivs f5,f9,f10
	ctx.f5.f64 = double(float(ctx.f9.f64 / ctx.f10.f64));
	// blt cr6,0x82ea72f8
	if (ctx.cr6.lt) goto loc_82EA72F8;
	// lis r31,-32246
	ctx.r31.s64 = -2113273856;
	// lwz r7,344(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 344);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,172(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
loc_82EA72C0:
	// lwzx r31,r9,r7
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// extsw r31,r31
	ctx.r31.s64 = ctx.r31.s32;
	// std r31,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.r31.u64);
	// lfd f13,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f5
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x82ea72f4
	if (!ctx.cr6.gt) goto loc_82EA72F4;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// bge 0x82ea72c0
	if (!ctx.cr0.lt) goto loc_82EA72C0;
	// b 0x82ea72f8
	goto loc_82EA72F8;
loc_82EA72F4:
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
loc_82EA72F8:
	// addis r8,r3,1
	ctx.r8.s64 = ctx.r3.s64 + 65536;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r8,r8,-1544
	ctx.r8.s64 = ctx.r8.s64 + -1544;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r29,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r29.u32);
	// blt cr6,0x82ea7358
	if (ctx.cr6.lt) goto loc_82EA7358;
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// lwz r9,344(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 344);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,168(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
loc_82EA7320:
	// lwzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// extsw r7,r7
	ctx.r7.s64 = ctx.r7.s32;
	// std r7,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.r7.u64);
	// lfd f13,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f5
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x82ea7354
	if (!ctx.cr6.gt) goto loc_82EA7354;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// bge 0x82ea7320
	if (!ctx.cr0.lt) goto loc_82EA7320;
	// b 0x82ea7358
	goto loc_82EA7358;
loc_82EA7354:
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
loc_82EA7358:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82ea737c
	if (!ctx.cr6.gt) goto loc_82EA737C;
	// addi r11,r5,-4
	ctx.r11.s64 = ctx.r5.s64 + -4;
	// lis r10,16256
	ctx.r10.s64 = 1065353216;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82ea737c
	if (ctx.cr6.eq) goto loc_82EA737C;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_82EA7374:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82ea7374
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82EA7374;
loc_82EA737C:
	// addis r30,r3,1
	ctx.r30.s64 = ctx.r3.s64 + 65536;
	// addi r30,r30,2388
	ctx.r30.s64 = ctx.r30.s64 + 2388;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ea79f0
	if (ctx.cr6.eq) goto loc_82EA79F0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lfs f13,48(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// lfs f0,13584(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13584);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// fsubs f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f13,-9888(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -9888);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,164(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 164);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-6180(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -6180);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,160(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 160);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,156(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f12,f9,f13,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fmadds f11,f9,f11,f10
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x82ea73dc
	if (!ctx.cr6.lt) goto loc_82EA73DC;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
loc_82EA73DC:
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lfs f6,24436(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f6.f64 = double(temp.f32);
	// fadds f0,f12,f6
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f6.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x82ea73f4
	if (!ctx.cr6.gt) goto loc_82EA73F4;
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
loc_82EA73F4:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82ea763c
	if (!ctx.cr6.gt) goto loc_82EA763C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r31,-32256
	ctx.r31.s64 = -2113929216;
	// lfs f9,-19516(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -19516);
	ctx.f9.f64 = double(temp.f32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lfs f10,11976(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11976);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,152(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 152);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,18796(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 18796);
	ctx.f7.f64 = double(temp.f32);
	// lfs f4,5184(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 5184);
	ctx.f4.f64 = double(temp.f32);
loc_82EA7428:
	// lwz r11,344(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 344);
	// fmr f0,f4
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f4.f64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82ea7600
	if (!ctx.cr6.lt) goto loc_82EA7600;
	// subf r11,r10,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x82ea75c0
	if (ctx.cr6.lt) goto loc_82EA75C0;
	// addi r7,r9,-7
	ctx.r7.s64 = ctx.r9.s64 + -7;
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
loc_82EA7458:
	// extsw r31,r10
	ctx.r31.s64 = ctx.r10.s32;
	// std r31,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.r31.u64);
	// lfd f13,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// fcfid f3,f13
	ctx.f3.f64 = double(ctx.f13.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// fmuls f13,f2,f5
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f5.f64));
	// fcmpu cr6,f13,f7
	ctx.cr6.compare(ctx.f13.f64, ctx.f7.f64);
	// bgt cr6,0x82ea76d4
	if (ctx.cr6.gt) goto loc_82EA76D4;
	// fmadds f0,f13,f8,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 + ctx.f0.f64));
loc_82EA747C:
	// fadds f0,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
loc_82EA7480:
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
	// extsw r31,r31
	ctx.r31.s64 = ctx.r31.s32;
	// std r31,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.r31.u64);
	// lfd f13,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// fcfid f3,f13
	ctx.f3.f64 = double(ctx.f13.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// fmuls f13,f2,f5
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f5.f64));
	// fcmpu cr6,f13,f7
	ctx.cr6.compare(ctx.f13.f64, ctx.f7.f64);
	// bgt cr6,0x82ea7708
	if (ctx.cr6.gt) goto loc_82EA7708;
	// fmadds f0,f13,f8,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 + ctx.f0.f64));
loc_82EA74A8:
	// fadds f0,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
loc_82EA74AC:
	// extsw r31,r11
	ctx.r31.s64 = ctx.r11.s32;
	// std r31,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.r31.u64);
	// lfd f13,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// fcfid f3,f13
	ctx.f3.f64 = double(ctx.f13.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// fmuls f13,f2,f5
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f5.f64));
	// fcmpu cr6,f13,f7
	ctx.cr6.compare(ctx.f13.f64, ctx.f7.f64);
	// bgt cr6,0x82ea773c
	if (ctx.cr6.gt) goto loc_82EA773C;
	// fmadds f0,f13,f8,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 + ctx.f0.f64));
loc_82EA74D0:
	// fadds f0,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
loc_82EA74D4:
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// extsw r31,r31
	ctx.r31.s64 = ctx.r31.s32;
	// std r31,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.r31.u64);
	// lfd f13,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// fcfid f3,f13
	ctx.f3.f64 = double(ctx.f13.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// fmuls f13,f2,f5
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f5.f64));
	// fcmpu cr6,f13,f7
	ctx.cr6.compare(ctx.f13.f64, ctx.f7.f64);
	// bgt cr6,0x82ea7770
	if (ctx.cr6.gt) goto loc_82EA7770;
	// fmadds f0,f13,f8,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 + ctx.f0.f64));
loc_82EA74FC:
	// fadds f0,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
loc_82EA7500:
	// addi r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 2;
	// extsw r31,r31
	ctx.r31.s64 = ctx.r31.s32;
	// std r31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.r31.u64);
	// lfd f13,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// fcfid f3,f13
	ctx.f3.f64 = double(ctx.f13.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// fmuls f13,f2,f5
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f5.f64));
	// fcmpu cr6,f13,f7
	ctx.cr6.compare(ctx.f13.f64, ctx.f7.f64);
	// bgt cr6,0x82ea77a4
	if (ctx.cr6.gt) goto loc_82EA77A4;
	// fmadds f0,f13,f8,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 + ctx.f0.f64));
loc_82EA7528:
	// fadds f0,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
loc_82EA752C:
	// addi r31,r11,3
	ctx.r31.s64 = ctx.r11.s64 + 3;
	// extsw r31,r31
	ctx.r31.s64 = ctx.r31.s32;
	// std r31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.r31.u64);
	// lfd f13,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// fcfid f3,f13
	ctx.f3.f64 = double(ctx.f13.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// fmuls f13,f2,f5
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f5.f64));
	// fcmpu cr6,f13,f7
	ctx.cr6.compare(ctx.f13.f64, ctx.f7.f64);
	// bgt cr6,0x82ea77d8
	if (ctx.cr6.gt) goto loc_82EA77D8;
	// fmadds f0,f13,f8,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 + ctx.f0.f64));
loc_82EA7554:
	// fadds f0,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
loc_82EA7558:
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// extsw r31,r31
	ctx.r31.s64 = ctx.r31.s32;
	// std r31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.r31.u64);
	// lfd f13,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// fcfid f3,f13
	ctx.f3.f64 = double(ctx.f13.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// fmuls f13,f2,f5
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f5.f64));
	// fcmpu cr6,f13,f7
	ctx.cr6.compare(ctx.f13.f64, ctx.f7.f64);
	// bgt cr6,0x82ea780c
	if (ctx.cr6.gt) goto loc_82EA780C;
	// fmadds f0,f13,f8,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 + ctx.f0.f64));
loc_82EA7580:
	// fadds f0,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
loc_82EA7584:
	// addi r31,r11,5
	ctx.r31.s64 = ctx.r11.s64 + 5;
	// extsw r31,r31
	ctx.r31.s64 = ctx.r31.s32;
	// std r31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.r31.u64);
	// lfd f13,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// fcfid f3,f13
	ctx.f3.f64 = double(ctx.f13.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// fmuls f13,f2,f5
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f5.f64));
	// fcmpu cr6,f13,f7
	ctx.cr6.compare(ctx.f13.f64, ctx.f7.f64);
	// bgt cr6,0x82ea7840
	if (ctx.cr6.gt) goto loc_82EA7840;
	// fmadds f0,f13,f8,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 + ctx.f0.f64));
loc_82EA75AC:
	// fadds f0,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
loc_82EA75B0:
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82ea7458
	if (ctx.cr6.lt) goto loc_82EA7458;
loc_82EA75C0:
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82ea7600
	if (!ctx.cr6.lt) goto loc_82EA7600;
	// subf r11,r10,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r10.s64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82EA75D0:
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// std r11,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.r11.u64);
	// lfd f13,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// fcfid f3,f13
	ctx.f3.f64 = double(ctx.f13.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// fmuls f13,f2,f5
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f5.f64));
	// fcmpu cr6,f13,f7
	ctx.cr6.compare(ctx.f13.f64, ctx.f7.f64);
	// bgt cr6,0x82ea7874
	if (ctx.cr6.gt) goto loc_82EA7874;
	// fmadds f0,f13,f8,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 + ctx.f0.f64));
loc_82EA75F4:
	// fadds f0,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
loc_82EA75F8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82ea75d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82EA75D0;
loc_82EA7600:
	// lwz r11,344(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 344);
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r7,r9,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r9.s64;
	// extsw r11,r7
	ctx.r11.s64 = ctx.r7.s32;
	// std r11,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.r11.u64);
	// lfd f13,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// fcfid f3,f13
	ctx.f3.f64 = double(ctx.f13.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// fdivs f1,f0,f2
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f2.f64));
	// stfsx f1,r8,r5
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r5.u32, temp.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x82ea7428
	if (!ctx.cr0.eq) goto loc_82EA7428;
loc_82EA763C:
	// lwz r11,244(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 244);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82ea79f0
	if (!ctx.cr6.gt) goto loc_82EA79F0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r28,-32247
	ctx.r28.s64 = -2113339392;
	// lis r27,-32247
	ctx.r27.s64 = -2113339392;
	// lfs f9,148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	ctx.f9.f64 = double(temp.f32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lfs f10,-23500(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23500);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,-7824(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -7824);
	ctx.f11.f64 = double(temp.f32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lfs f12,11508(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 11508);
	ctx.f12.f64 = double(temp.f32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lfs f7,13484(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 13484);
	ctx.f7.f64 = double(temp.f32);
	// ori r31,r11,44100
	ctx.r31.u64 = ctx.r11.u64 | 44100;
	// lfs f8,13528(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 13528);
	ctx.f8.f64 = double(temp.f32);
loc_82EA768C:
	// lwz r9,340(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 340);
	// lwz r11,30672(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30672);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 + ctx.r11.u64;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// lwzx r11,r9,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bne cr6,0x82ea78a8
	if (!ctx.cr6.eq) goto loc_82EA78A8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82ea79d8
	if (!ctx.cr6.gt) goto loc_82EA79D8;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// lis r9,16256
	ctx.r9.s64 = 1065353216;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ea79d8
	if (ctx.cr6.eq) goto loc_82EA79D8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82EA76C8:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82ea76c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82EA76C8;
	// b 0x82ea79d8
	goto loc_82EA79D8;
loc_82EA76D4:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x82ea76e4
	if (ctx.cr6.gt) goto loc_82EA76E4;
	// fadds f0,f0,f6
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f6.f64));
	// b 0x82ea7480
	goto loc_82EA7480;
loc_82EA76E4:
	// fcmpu cr6,f13,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bgt cr6,0x82ea747c
	if (ctx.cr6.gt) goto loc_82EA747C;
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fsubs f3,f11,f12
	ctx.f3.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fmuls f2,f13,f9
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fdivs f1,f2,f3
	ctx.f1.f64 = double(float(ctx.f2.f64 / ctx.f3.f64));
	// fsubs f13,f6,f1
	ctx.f13.f64 = double(float(ctx.f6.f64 - ctx.f1.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// b 0x82ea7480
	goto loc_82EA7480;
loc_82EA7708:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x82ea7718
	if (ctx.cr6.gt) goto loc_82EA7718;
	// fadds f0,f0,f6
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f6.f64));
	// b 0x82ea74ac
	goto loc_82EA74AC;
loc_82EA7718:
	// fcmpu cr6,f13,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bgt cr6,0x82ea74a8
	if (ctx.cr6.gt) goto loc_82EA74A8;
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fsubs f3,f11,f12
	ctx.f3.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fmuls f2,f13,f9
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fdivs f1,f2,f3
	ctx.f1.f64 = double(float(ctx.f2.f64 / ctx.f3.f64));
	// fsubs f13,f6,f1
	ctx.f13.f64 = double(float(ctx.f6.f64 - ctx.f1.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// b 0x82ea74ac
	goto loc_82EA74AC;
loc_82EA773C:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x82ea774c
	if (ctx.cr6.gt) goto loc_82EA774C;
	// fadds f0,f0,f6
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f6.f64));
	// b 0x82ea74d4
	goto loc_82EA74D4;
loc_82EA774C:
	// fcmpu cr6,f13,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bgt cr6,0x82ea74d0
	if (ctx.cr6.gt) goto loc_82EA74D0;
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fsubs f3,f11,f12
	ctx.f3.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fmuls f2,f13,f9
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fdivs f1,f2,f3
	ctx.f1.f64 = double(float(ctx.f2.f64 / ctx.f3.f64));
	// fsubs f13,f6,f1
	ctx.f13.f64 = double(float(ctx.f6.f64 - ctx.f1.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// b 0x82ea74d4
	goto loc_82EA74D4;
loc_82EA7770:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x82ea7780
	if (ctx.cr6.gt) goto loc_82EA7780;
	// fadds f0,f0,f6
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f6.f64));
	// b 0x82ea7500
	goto loc_82EA7500;
loc_82EA7780:
	// fcmpu cr6,f13,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bgt cr6,0x82ea74fc
	if (ctx.cr6.gt) goto loc_82EA74FC;
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fsubs f3,f11,f12
	ctx.f3.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fmuls f2,f13,f9
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fdivs f1,f2,f3
	ctx.f1.f64 = double(float(ctx.f2.f64 / ctx.f3.f64));
	// fsubs f13,f6,f1
	ctx.f13.f64 = double(float(ctx.f6.f64 - ctx.f1.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// b 0x82ea7500
	goto loc_82EA7500;
loc_82EA77A4:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x82ea77b4
	if (ctx.cr6.gt) goto loc_82EA77B4;
	// fadds f0,f0,f6
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f6.f64));
	// b 0x82ea752c
	goto loc_82EA752C;
loc_82EA77B4:
	// fcmpu cr6,f13,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bgt cr6,0x82ea7528
	if (ctx.cr6.gt) goto loc_82EA7528;
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fsubs f3,f11,f12
	ctx.f3.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fmuls f2,f13,f9
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fdivs f1,f2,f3
	ctx.f1.f64 = double(float(ctx.f2.f64 / ctx.f3.f64));
	// fsubs f13,f6,f1
	ctx.f13.f64 = double(float(ctx.f6.f64 - ctx.f1.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// b 0x82ea752c
	goto loc_82EA752C;
loc_82EA77D8:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x82ea77e8
	if (ctx.cr6.gt) goto loc_82EA77E8;
	// fadds f0,f0,f6
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f6.f64));
	// b 0x82ea7558
	goto loc_82EA7558;
loc_82EA77E8:
	// fcmpu cr6,f13,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bgt cr6,0x82ea7554
	if (ctx.cr6.gt) goto loc_82EA7554;
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fsubs f3,f11,f12
	ctx.f3.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fmuls f2,f13,f9
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fdivs f1,f2,f3
	ctx.f1.f64 = double(float(ctx.f2.f64 / ctx.f3.f64));
	// fsubs f13,f6,f1
	ctx.f13.f64 = double(float(ctx.f6.f64 - ctx.f1.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// b 0x82ea7558
	goto loc_82EA7558;
loc_82EA780C:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x82ea781c
	if (ctx.cr6.gt) goto loc_82EA781C;
	// fadds f0,f0,f6
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f6.f64));
	// b 0x82ea7584
	goto loc_82EA7584;
loc_82EA781C:
	// fcmpu cr6,f13,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bgt cr6,0x82ea7580
	if (ctx.cr6.gt) goto loc_82EA7580;
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fsubs f3,f11,f12
	ctx.f3.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fmuls f2,f13,f9
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fdivs f1,f2,f3
	ctx.f1.f64 = double(float(ctx.f2.f64 / ctx.f3.f64));
	// fsubs f13,f6,f1
	ctx.f13.f64 = double(float(ctx.f6.f64 - ctx.f1.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// b 0x82ea7584
	goto loc_82EA7584;
loc_82EA7840:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x82ea7850
	if (ctx.cr6.gt) goto loc_82EA7850;
	// fadds f0,f0,f6
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f6.f64));
	// b 0x82ea75b0
	goto loc_82EA75B0;
loc_82EA7850:
	// fcmpu cr6,f13,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bgt cr6,0x82ea75ac
	if (ctx.cr6.gt) goto loc_82EA75AC;
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fsubs f3,f11,f12
	ctx.f3.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fmuls f2,f13,f9
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fdivs f1,f2,f3
	ctx.f1.f64 = double(float(ctx.f2.f64 / ctx.f3.f64));
	// fsubs f13,f6,f1
	ctx.f13.f64 = double(float(ctx.f6.f64 - ctx.f1.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// b 0x82ea75b0
	goto loc_82EA75B0;
loc_82EA7874:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x82ea7884
	if (ctx.cr6.gt) goto loc_82EA7884;
	// fadds f0,f0,f6
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f6.f64));
	// b 0x82ea75f8
	goto loc_82EA75F8;
loc_82EA7884:
	// fcmpu cr6,f13,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bgt cr6,0x82ea75f4
	if (ctx.cr6.gt) goto loc_82EA75F4;
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fsubs f3,f11,f12
	ctx.f3.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fmuls f2,f13,f9
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fdivs f1,f2,f3
	ctx.f1.f64 = double(float(ctx.f2.f64 / ctx.f3.f64));
	// fsubs f13,f6,f1
	ctx.f13.f64 = double(float(ctx.f6.f64 - ctx.f1.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// b 0x82ea75f8
	goto loc_82EA75F8;
loc_82EA78A8:
	// lwz r9,80(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// cmpw cr6,r9,r31
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x82ea79b4
	if (ctx.cr6.lt) goto loc_82EA79B4;
	// lfs f0,48(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f8
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// ble cr6,0x82ea79b4
	if (!ctx.cr6.gt) goto loc_82EA79B4;
	// fcmpu cr6,f0,f7
	ctx.cr6.compare(ctx.f0.f64, ctx.f7.f64);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// ble cr6,0x82ea7940
	if (!ctx.cr6.gt) goto loc_82EA7940;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82ea79d8
	if (!ctx.cr6.gt) goto loc_82EA79D8;
	// extsw r28,r11
	ctx.r28.s64 = ctx.r11.s32;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// std r28,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.r28.u64);
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
	// std r8,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.r8.u64);
	// lfd f13,-64(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// fcfid f4,f13
	ctx.f4.f64 = double(ctx.f13.s64);
	// lfd f0,-56(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// fcfid f5,f0
	ctx.f5.f64 = double(ctx.f0.s64);
	// frsp f0,f4
	ctx.f0.f64 = double(float(ctx.f4.f64));
	// frsp f13,f5
	ctx.f13.f64 = double(float(ctx.f5.f64));
loc_82EA7904:
	// extsw r10,r9
	ctx.r10.s64 = ctx.r9.s32;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// std r10,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.r10.u64);
	// lfd f5,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fadds f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f0.f64));
	// fadds f1,f2,f6
	ctx.f1.f64 = double(float(ctx.f2.f64 + ctx.f6.f64));
	// fsubs f5,f1,f13
	ctx.f5.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// fmuls f4,f5,f12
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// fdivs f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 / ctx.f0.f64));
	// fadds f2,f3,f11
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f11.f64));
	// stfsu f2,4(r11)
	temp.f32 = float(ctx.f2.f64);
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82ea7904
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82EA7904;
	// b 0x82ea79d8
	goto loc_82EA79D8;
loc_82EA7940:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82ea79d8
	if (!ctx.cr6.gt) goto loc_82EA79D8;
	// extsw r28,r11
	ctx.r28.s64 = ctx.r11.s32;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// std r28,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.r28.u64);
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
	// std r8,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.r8.u64);
	// lfd f13,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// fcfid f4,f13
	ctx.f4.f64 = double(ctx.f13.s64);
	// lfd f0,-80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// fcfid f5,f0
	ctx.f5.f64 = double(ctx.f0.s64);
	// frsp f0,f4
	ctx.f0.f64 = double(float(ctx.f4.f64));
	// frsp f13,f5
	ctx.f13.f64 = double(float(ctx.f5.f64));
loc_82EA7978:
	// extsw r10,r9
	ctx.r10.s64 = ctx.r9.s32;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// std r10,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.r10.u64);
	// lfd f5,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fadds f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f0.f64));
	// fadds f1,f2,f6
	ctx.f1.f64 = double(float(ctx.f2.f64 + ctx.f6.f64));
	// fsubs f5,f1,f13
	ctx.f5.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// fmuls f4,f5,f10
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// fdivs f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 / ctx.f0.f64));
	// fadds f2,f3,f9
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f9.f64));
	// stfsu f2,4(r11)
	temp.f32 = float(ctx.f2.f64);
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82ea7978
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82EA7978;
	// b 0x82ea79d8
	goto loc_82EA79D8;
loc_82EA79B4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82ea79d8
	if (!ctx.cr6.gt) goto loc_82EA79D8;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// lis r9,16384
	ctx.r9.s64 = 1073741824;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ea79d8
	if (ctx.cr6.eq) goto loc_82EA79D8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82EA79D0:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82ea79d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82EA79D0;
loc_82EA79D8:
	// lwz r11,244(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 244);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r7,r7,116
	ctx.r7.s64 = ctx.r7.s64 + 116;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82ea768c
	if (ctx.cr6.lt) goto loc_82EA768C;
loc_82EA79F0:
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA79F4"))) PPC_WEAK_FUNC(sub_82EA79F4);
PPC_FUNC_IMPL(__imp__sub_82EA79F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA79F8"))) PPC_WEAK_FUNC(sub_82EA79F8);
PPC_FUNC_IMPL(__imp__sub_82EA79F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7654
	ctx.lr = 0x82EA7A00;
	__savegprlr_19(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,0(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lwz r28,30688(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30688);
	// li r21,0
	ctx.r21.s64 = 0;
	// lwz r26,30692(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30692);
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// lwz r11,340(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 340);
	// lwz r10,256(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 256);
	// lwz r29,344(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 344);
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82c71240
	ctx.lr = 0x82EA7A34;
	sub_82C71240(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82ea7a50
	if (!ctx.cr6.eq) goto loc_82EA7A50;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82fa76a4
	__restgprlr_19(ctx, base);
	return;
loc_82EA7A50:
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82ea7ab0
	if (!ctx.cr6.gt) goto loc_82EA7AB0;
	// lwz r11,344(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 344);
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// add r10,r21,r11
	ctx.r10.u64 = ctx.r21.u64 + ctx.r11.u64;
loc_82EA7A68:
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82ea7a9c
	if (!ctx.cr6.lt) goto loc_82EA7A9C;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r19
	ctx.r11.u64 = ctx.r11.u64 + ctx.r19.u64;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
loc_82EA7A80:
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r11,344(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 344);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmpw cr6,r31,r6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82ea7a80
	if (ctx.cr6.lt) goto loc_82EA7A80;
loc_82EA7A9C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r8,r30
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r30.s32, ctx.xer);
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// blt cr6,0x82ea7a68
	if (ctx.cr6.lt) goto loc_82EA7A68;
loc_82EA7AB0:
	// lwz r11,244(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 244);
	// li r20,1
	ctx.r20.s64 = 1;
	// mr r24,r21
	ctx.r24.u64 = ctx.r21.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82ea7bb4
	if (!ctx.cr6.gt) goto loc_82EA7BB4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// addi r25,r29,4
	ctx.r25.s64 = ctx.r29.s64 + 4;
	// subfic r30,r29,-4
	ctx.xer.ca = ctx.r29.u32 <= 4294967292;
	ctx.r30.s64 = -4 - ctx.r29.s64;
	// li r23,29
	ctx.r23.s64 = 29;
loc_82EA7ADC:
	// lwz r11,340(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 340);
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// lwzx r10,r28,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82ea7b8c
	if (!ctx.cr6.gt) goto loc_82EA7B8C;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// subf r29,r5,r26
	ctx.r29.s64 = ctx.r26.s64 - ctx.r5.s64;
loc_82EA7AFC:
	// stwx r21,r29,r3
	PPC_STORE_U32(ctx.r29.u32 + ctx.r3.u32, ctx.r21.u32);
	// stw r23,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r23.u32);
	// lwz r10,-4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + -4);
	// mullw r7,r10,r4
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mullw r9,r11,r4
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82ea7b70
	if (!ctx.cr6.lt) goto loc_82EA7B70;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r30,r6
	ctx.r10.u64 = ctx.r30.u64 + ctx.r6.u64;
	// add r11,r11,r19
	ctx.r11.u64 = ctx.r11.u64 + ctx.r19.u64;
loc_82EA7B28:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r8,r10,r26
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82ea7b3c
	if (ctx.cr6.lt) goto loc_82EA7B3C;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_82EA7B3C:
	// stwx r9,r10,r26
	PPC_STORE_U32(ctx.r10.u32 + ctx.r26.u32, ctx.r9.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r8,r10,r5
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x82ea7b54
	if (ctx.cr6.gt) goto loc_82EA7B54;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_82EA7B54:
	// stwx r9,r10,r5
	PPC_STORE_U32(ctx.r10.u32 + ctx.r5.u32, ctx.r9.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mullw r8,r9,r4
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82ea7b28
	if (ctx.cr6.lt) goto loc_82EA7B28;
loc_82EA7B70:
	// lwz r11,340(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 340);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// lwzx r10,r28,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82ea7afc
	if (ctx.cr6.lt) goto loc_82EA7AFC;
loc_82EA7B8C:
	// lwz r11,244(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 244);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r26,r26,116
	ctx.r26.s64 = ctx.r26.s64 + 116;
	// addi r30,r30,-116
	ctx.r30.s64 = ctx.r30.s64 + -116;
	// addi r25,r25,116
	ctx.r25.s64 = ctx.r25.s64 + 116;
	// addi r5,r5,116
	ctx.r5.s64 = ctx.r5.s64 + 116;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// rotlwi r4,r4,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82ea7adc
	if (ctx.cr6.lt) goto loc_82EA7ADC;
loc_82EA7BB4:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82ea7240
	ctx.lr = 0x82EA7BBC;
	sub_82EA7240(ctx, base);
	// bl 0x82ea6b18
	ctx.lr = 0x82EA7BC0;
	sub_82EA6B18(ctx, base);
	// bl 0x82ea6e18
	ctx.lr = 0x82EA7BC4;
	sub_82EA6E18(ctx, base);
	// bl 0x82ea7018
	ctx.lr = 0x82EA7BC8;
	sub_82EA7018(ctx, base);
	// lwz r11,244(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 244);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82ea7db8
	if (!ctx.cr6.gt) goto loc_82EA7DB8;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addis r4,r22,1
	ctx.r4.s64 = ctx.r22.s64 + 65536;
	// addis r3,r22,1
	ctx.r3.s64 = ctx.r22.s64 + 65536;
	// addis r31,r22,1
	ctx.r31.s64 = ctx.r22.s64 + 65536;
	// lfs f11,-6352(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -6352);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,19692(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 19692);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r4,-1540
	ctx.r4.s64 = ctx.r4.s64 + -1540;
	// lfs f13,-8020(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -8020);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r3,-1536
	ctx.r3.s64 = ctx.r3.s64 + -1536;
	// addi r31,r31,-1532
	ctx.r31.s64 = ctx.r31.s64 + -1532;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
loc_82EA7C10:
	// slw r9,r20,r5
	ctx.r9.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r20.u32 << (ctx.r5.u8 & 0x3F));
	// lwz r10,80(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 80);
	// extsw r29,r9
	ctx.r29.s64 = ctx.r9.s32;
	// lwz r7,252(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 252);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// lwz r30,340(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 340);
	// std r29,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r29.u64);
	// lfd f9,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// extsw r8,r7
	ctx.r8.s64 = ctx.r7.s32;
	// lwz r28,0(r4)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f10,88(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lwzx r8,r11,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// fcfid f7,f0
	ctx.f7.f64 = double(ctx.f0.s64);
	// lwz r9,344(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 344);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// stwx r8,r11,r28
	PPC_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r8.u32);
	// fcfid f6,f10
	ctx.f6.f64 = double(ctx.f10.s64);
	// add r7,r6,r9
	ctx.r7.u64 = ctx.r6.u64 + ctx.r9.u64;
	// lwz r9,340(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 340);
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// frsp f3,f6
	ctx.f3.f64 = double(float(ctx.f6.f64));
	// fmuls f2,f5,f4
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// fdivs f0,f2,f3
	ctx.f0.f64 = double(float(ctx.f2.f64 / ctx.f3.f64));
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82ea7cd0
	if (!ctx.cr6.gt) goto loc_82EA7CD0;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
loc_82EA7C90:
	// lwz r30,0(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// extsw r30,r30
	ctx.r30.s64 = ctx.r30.s32;
	// std r30,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r30.u64);
	// lfd f10,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fcmpu cr6,f7,f13
	ctx.cr6.compare(ctx.f7.f64, ctx.f13.f64);
	// bgt cr6,0x82ea7cc8
	if (ctx.cr6.gt) goto loc_82EA7CC8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82ea7c90
	if (ctx.cr6.lt) goto loc_82EA7C90;
	// b 0x82ea7cd0
	goto loc_82EA7CD0;
loc_82EA7CC8:
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
loc_82EA7CD0:
	// lwz r9,340(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 340);
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stwx r9,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// lwz r8,340(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 340);
	// lwzx r8,r11,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82ea7d38
	if (!ctx.cr6.gt) goto loc_82EA7D38;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_82EA7CF8:
	// lwz r30,0(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// extsw r30,r30
	ctx.r30.s64 = ctx.r30.s32;
	// std r30,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r30.u64);
	// lfd f10,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fcmpu cr6,f7,f12
	ctx.cr6.compare(ctx.f7.f64, ctx.f12.f64);
	// bgt cr6,0x82ea7d30
	if (ctx.cr6.gt) goto loc_82EA7D30;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82ea7cf8
	if (ctx.cr6.lt) goto loc_82EA7CF8;
	// b 0x82ea7d38
	goto loc_82EA7D38;
loc_82EA7D30:
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
loc_82EA7D38:
	// lwz r9,340(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 340);
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stwx r9,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// lwz r8,340(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 340);
	// lwzx r8,r11,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82ea7da0
	if (!ctx.cr6.gt) goto loc_82EA7DA0;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_82EA7D60:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// extsw r7,r7
	ctx.r7.s64 = ctx.r7.s32;
	// std r7,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r7.u64);
	// lfd f10,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fcmpu cr6,f7,f11
	ctx.cr6.compare(ctx.f7.f64, ctx.f11.f64);
	// bgt cr6,0x82ea7d98
	if (ctx.cr6.gt) goto loc_82EA7D98;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82ea7d60
	if (ctx.cr6.lt) goto loc_82EA7D60;
	// b 0x82ea7da0
	goto loc_82EA7DA0;
loc_82EA7D98:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
loc_82EA7DA0:
	// lwz r10,244(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 244);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r6,r6,116
	ctx.r6.s64 = ctx.r6.s64 + 116;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82ea7c10
	if (ctx.cr6.lt) goto loc_82EA7C10;
loc_82EA7DB8:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82c71250
	ctx.lr = 0x82EA7DC0;
	sub_82C71250(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82fa76a4
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA7DCC"))) PPC_WEAK_FUNC(sub_82EA7DCC);
PPC_FUNC_IMPL(__imp__sub_82EA7DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA7DD0"))) PPC_WEAK_FUNC(sub_82EA7DD0);
PPC_FUNC_IMPL(__imp__sub_82EA7DD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82EA7DD8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r25,r3,1
	ctx.r25.s64 = ctx.r3.s64 + 65536;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r25,r25,2256
	ctx.r25.s64 = ctx.r25.s64 + 2256;
	// addi r27,r3,30956
	ctx.r27.s64 = ctx.r3.s64 + 30956;
	// li r26,0
	ctx.r26.s64 = 0;
	// lhz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 0);
	// addic. r10,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r10.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x82ea7e78
	if (!ctx.cr0.gt) goto loc_82EA7E78;
	// lhz r11,34(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 34);
loc_82EA7E04:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82ea7e64
	if (!ctx.cr6.gt) goto loc_82EA7E64;
loc_82EA7E10:
	// lhz r11,34(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 34);
	// li r5,112
	ctx.r5.s64 = 112;
	// lwz r8,228(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mullw r11,r11,r26
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r26.s32);
	// lwz r9,30680(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 30680);
	// lwz r10,30684(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 30684);
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mullw r6,r7,r8
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// mulli r11,r6,112
	ctx.r11.s64 = ctx.r6.s64 * 112;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82EA7E44;
	sub_82FA77C0(ctx, base);
	// li r5,112
	ctx.r5.s64 = 112;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82EA7E54;
	sub_82FA77C0(ctx, base);
	// lhz r11,34(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 34);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82ea7e10
	if (ctx.cr6.lt) goto loc_82EA7E10;
loc_82EA7E64:
	// lhz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 0);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r26,r10
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82ea7e04
	if (ctx.cr6.lt) goto loc_82EA7E04;
loc_82EA7E78:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA7E80"))) PPC_WEAK_FUNC(sub_82EA7E80);
PPC_FUNC_IMPL(__imp__sub_82EA7E80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82EA7E88;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82fa8cf0
	ctx.lr = 0x82EA7E90;
	__savefpr_14(ctx, base);
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r14,0(r3)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lwz r25,30724(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30724);
	// ori r9,r11,2388
	ctx.r9.u64 = ctx.r11.u64 | 2388;
	// addis r15,r3,1
	ctx.r15.s64 = ctx.r3.s64 + 65536;
	// addis r18,r3,1
	ctx.r18.s64 = ctx.r3.s64 + 65536;
	// lwz r8,80(r14)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r14.u32 + 80);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lwz r7,252(r14)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r14.u32 + 252);
	// lfs f12,13600(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 13600);
	ctx.f12.f64 = double(temp.f32);
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// lwz r5,340(r14)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r14.u32 + 340);
	// extsw r4,r7
	ctx.r4.s64 = ctx.r7.s32;
	// lwzx r8,r3,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// lwz r24,344(r14)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r14.u32 + 344);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// lwz r19,0(r5)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// stfs f12,168(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r15,r15,-1416
	ctx.r15.s64 = ctx.r15.s64 + -1416;
	// addi r18,r18,-1304
	ctx.r18.s64 = ctx.r18.s64 + -1304;
	// addi r22,r3,30844
	ctx.r22.s64 = ctx.r3.s64 + 30844;
	// addi r20,r3,30956
	ctx.r20.s64 = ctx.r3.s64 + 30956;
	// addi r29,r3,31068
	ctx.r29.s64 = ctx.r3.s64 + 31068;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fdivs f0,f8,f9
	ctx.f0.f64 = double(float(ctx.f8.f64 / ctx.f9.f64));
	// beq cr6,0x82ea7f50
	if (ctx.cr6.eq) goto loc_82EA7F50;
	// lfs f13,48(r14)
	temp.u32 = PPC_LOAD_U32(ctx.r14.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x82ea7f50
	if (ctx.cr6.gt) goto loc_82EA7F50;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lfs f12,13584(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13584);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x82ea7f48
	if (!ctx.cr6.gt) goto loc_82EA7F48;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ea7f50
	if (!ctx.cr6.eq) goto loc_82EA7F50;
loc_82EA7F48:
	// li r21,0
	ctx.r21.s64 = 0;
	// b 0x82ea7f54
	goto loc_82EA7F54;
loc_82EA7F50:
	// mr r21,r28
	ctx.r21.u64 = ctx.r28.u64;
loc_82EA7F54:
	// addi r11,r19,-2
	ctx.r11.s64 = ctx.r19.s64 + -2;
	// mr r16,r19
	ctx.r16.u64 = ctx.r19.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82ea7fd4
	if (ctx.cr6.lt) goto loc_82EA7FD4;
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r24
	ctx.r9.u64 = ctx.r9.u64 + ctx.r24.u64;
	// lfs f13,-8780(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -8780);
	ctx.f13.f64 = double(temp.f32);
loc_82EA7F78:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lfd f12,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fcmpu cr6,f9,f13
	ctx.cr6.compare(ctx.f9.f64, ctx.f13.f64);
	// bgt cr6,0x82ea7fc0
	if (ctx.cr6.gt) goto loc_82EA7FC0;
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r6.u64);
	// lfd f12,112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fcmpu cr6,f9,f13
	ctx.cr6.compare(ctx.f9.f64, ctx.f13.f64);
	// bge cr6,0x82ea7fd0
	if (!ctx.cr6.lt) goto loc_82EA7FD0;
loc_82EA7FC0:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// bge 0x82ea7f78
	if (!ctx.cr0.lt) goto loc_82EA7F78;
	// b 0x82ea7fd4
	goto loc_82EA7FD4;
loc_82EA7FD0:
	// mr r16,r10
	ctx.r16.u64 = ctx.r10.u64;
loc_82EA7FD4:
	// mr r17,r19
	ctx.r17.u64 = ctx.r19.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82ea804c
	if (ctx.cr6.lt) goto loc_82EA804C;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + ctx.r24.u64;
	// lfs f13,256(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 256);
	ctx.f13.f64 = double(temp.f32);
loc_82EA7FF0:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f12,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fcmpu cr6,f9,f13
	ctx.cr6.compare(ctx.f9.f64, ctx.f13.f64);
	// bgt cr6,0x82ea8038
	if (ctx.cr6.gt) goto loc_82EA8038;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// std r7,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r7.u64);
	// lfd f12,112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fcmpu cr6,f9,f13
	ctx.cr6.compare(ctx.f9.f64, ctx.f13.f64);
	// bge cr6,0x82ea8048
	if (!ctx.cr6.lt) goto loc_82EA8048;
loc_82EA8038:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// bge 0x82ea7ff0
	if (!ctx.cr0.lt) goto loc_82EA7FF0;
	// b 0x82ea804c
	goto loc_82EA804C;
loc_82EA8048:
	// mr r17,r11
	ctx.r17.u64 = ctx.r11.u64;
loc_82EA804C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// lis r5,-32228
	ctx.r5.s64 = -2112094208;
	// lfs f0,-9860(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -9860);
	ctx.f0.f64 = double(temp.f32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lfs f14,24436(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24436);
	ctx.f14.f64 = double(temp.f32);
	// lfd f13,22080(r9)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + 22080);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lfd f12,248(r7)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r7.u32 + 248);
	// addi r27,r14,256
	ctx.r27.s64 = ctx.r14.s64 + 256;
	// lfs f11,240(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 240);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,-23580(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -23580);
	ctx.f10.f64 = double(temp.f32);
	// lfs f15,21500(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 21500);
	ctx.f15.f64 = double(temp.f32);
	// stfs f0,30720(r23)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r23.u32 + 30720, temp.u32);
	// stfs f14,152(r1)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfd f13,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f13.u64);
	// stfd f12,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f12.u64);
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f10,120(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// beq cr6,0x82ea8288
	if (ctx.cr6.eq) goto loc_82EA8288;
	// lwz r10,256(r14)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r14.u32 + 256);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82ea82b4
	if (!ctx.cr6.gt) goto loc_82EA82B4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// lis r6,-32248
	ctx.r6.s64 = -2113404928;
	// lfd f20,22480(r11)
	ctx.f20.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22480);
	// lfd f25,30056(r10)
	ctx.f25.u64 = PPC_LOAD_U64(ctx.r10.u32 + 30056);
	// lis r5,-32246
	ctx.r5.s64 = -2113273856;
	// lfd f26,232(r9)
	ctx.f26.u64 = PPC_LOAD_U64(ctx.r9.u32 + 232);
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// lfd f27,30048(r8)
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r8.u32 + 30048);
	// lis r3,-32246
	ctx.r3.s64 = -2113273856;
	// lfd f28,30040(r7)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r7.u32 + 30040);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f29,-6788(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -6788);
	ctx.f29.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lfs f30,224(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 224);
	ctx.f30.f64 = double(temp.f32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lfs f23,220(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 220);
	ctx.f23.f64 = double(temp.f32);
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// lfs f16,216(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	ctx.f16.f64 = double(temp.f32);
	// lis r6,-32247
	ctx.r6.s64 = -2113339392;
	// lfs f24,212(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	ctx.f24.f64 = double(temp.f32);
	// lfs f17,5848(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5848);
	ctx.f17.f64 = double(temp.f32);
	// addi r30,r25,-4
	ctx.r30.s64 = ctx.r25.s64 + -4;
	// lfs f18,208(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 208);
	ctx.f18.f64 = double(temp.f32);
	// lfs f19,-3104(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -3104);
	ctx.f19.f64 = double(temp.f32);
	// lfs f21,13604(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 13604);
	ctx.f21.f64 = double(temp.f32);
	// lfs f22,13484(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 13484);
	ctx.f22.f64 = double(temp.f32);
loc_82EA8134:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// extsw r10,r31
	ctx.r10.s64 = ctx.r31.s32;
	// lfs f13,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// std r10,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r10.u64);
	// lfd f12,144(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfs f0,48(r14)
	temp.u32 = PPC_LOAD_U32(ctx.r14.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,256(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// lwz r8,80(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// fcmpu cr6,f0,f22
	ctx.cr6.compare(ctx.f0.f64, ctx.f22.f64);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// std r7,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r7.u64);
	// lfd f9,160(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// std r6,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r6.u64);
	// lfd f8,176(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// fcfid f6,f9
	ctx.f6.f64 = double(ctx.f9.s64);
	// frsp f5,f7
	ctx.f5.f64 = double(float(ctx.f7.f64));
	// frsp f4,f6
	ctx.f4.f64 = double(float(ctx.f6.f64));
	// fmuls f3,f5,f10
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// fmuls f2,f4,f15
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f15.f64));
	// fmuls f1,f3,f13
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fdivs f31,f1,f2
	ctx.f31.f64 = double(float(ctx.f1.f64 / ctx.f2.f64));
	// ble cr6,0x82ea8200
	if (!ctx.cr6.gt) goto loc_82EA8200;
	// fcmpu cr6,f0,f21
	ctx.cr6.compare(ctx.f0.f64, ctx.f21.f64);
	// ble cr6,0x82ea81ac
	if (!ctx.cr6.gt) goto loc_82EA81AC;
	// fmr f13,f19
	ctx.f13.f64 = ctx.f19.f64;
	// b 0x82ea81b0
	goto loc_82EA81B0;
loc_82EA81AC:
	// fmr f13,f18
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f18.f64;
loc_82EA81B0:
	// fcmpu cr6,f0,f21
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f21.f64);
	// ble cr6,0x82ea81c0
	if (!ctx.cr6.gt) goto loc_82EA81C0;
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82ea81c4
	goto loc_82EA81C4;
loc_82EA81C0:
	// fmr f0,f17
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f17.f64;
loc_82EA81C4:
	// fcmpu cr6,f31,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f13.f64);
	// bgt cr6,0x82ea81d4
	if (ctx.cr6.gt) goto loc_82EA81D4;
	// fmr f0,f24
	ctx.f0.f64 = ctx.f24.f64;
	// b 0x82ea825c
	goto loc_82EA825C;
loc_82EA81D4:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x82ea81e4
	if (ctx.cr6.lt) goto loc_82EA81E4;
	// fmr f0,f16
	ctx.f0.f64 = ctx.f16.f64;
	// b 0x82ea825c
	goto loc_82EA825C;
loc_82EA81E4:
	// fsubs f12,f31,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f31.f64 - ctx.f13.f64));
	// fsubs f11,f0,f31
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fsubs f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fmuls f9,f12,f23
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f23.f64));
	// fmsubs f8,f11,f24,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f24.f64 - ctx.f9.f64));
	// fdivs f0,f8,f10
	ctx.f0.f64 = double(float(ctx.f8.f64 / ctx.f10.f64));
	// b 0x82ea825c
	goto loc_82EA825C;
loc_82EA8200:
	// lfs f0,30720(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 30720);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x82ea8210
	if (ctx.cr6.gt) goto loc_82EA8210;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_82EA8210:
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x82ea8220
	if (ctx.cr6.lt) goto loc_82EA8220;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_82EA8220:
	// fsubs f0,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmuls f1,f13,f29
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// bl 0x82fa4be8
	ctx.lr = 0x82EA8230;
	sub_82FA4BE8(ctx, base);
	// fmul f14,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f14.f64 = ctx.f1.f64 * ctx.f28.f64;
	// lfd f2,88(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82fa30a8
	ctx.lr = 0x82EA8240;
	sub_82FA30A8(ctx, base);
	// fnmsub f14,f1,f27,f14
	ctx.fpscr.disableFlushMode();
	ctx.f14.f64 = -(ctx.f1.f64 * ctx.f27.f64 - ctx.f14.f64);
	// fmr f2,f26
	ctx.f2.f64 = ctx.f26.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82fa30a8
	ctx.lr = 0x82EA8250;
	sub_82FA30A8(ctx, base);
	// fnmsub f12,f1,f25,f14
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = -(ctx.f1.f64 * ctx.f25.f64 - ctx.f14.f64);
	// lfs f14,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f14.f64 = double(temp.f32);
	// frsp f0,f12
	ctx.f0.f64 = double(float(ctx.f12.f64));
loc_82EA825C:
	// lfd f1,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fmul f2,f0,f20
	ctx.f2.f64 = ctx.f0.f64 * ctx.f20.f64;
	// bl 0x82fa30a8
	ctx.lr = 0x82EA8268;
	sub_82FA30A8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfsu f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r30.u32 = ea;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r10,256(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82ea8134
	if (ctx.cr6.lt) goto loc_82EA8134;
	// b 0x82ea82b4
	goto loc_82EA82B4;
loc_82EA8288:
	// lwz r9,256(r14)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r14.u32 + 256);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82ea82b4
	if (!ctx.cr6.gt) goto loc_82EA82B4;
	// addi r10,r25,-4
	ctx.r10.s64 = ctx.r25.s64 + -4;
loc_82EA829C:
	// stfsu f14,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f14.f64);
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// lwz r9,0(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r8,256(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 256);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82ea829c
	if (ctx.cr6.lt) goto loc_82EA829C;
loc_82EA82B4:
	// lwz r11,244(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 244);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x82ea83a8
	if (!ctx.cr6.gt) goto loc_82EA83A8;
	// li r4,4
	ctx.r4.s64 = 4;
loc_82EA82C8:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// slw r9,r28,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r8.u8 & 0x3F));
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lwz r6,30728(r23)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r23.u32 + 30728);
	// divw r7,r11,r9
	ctx.r7.s32 = ctx.r11.s32 / ctx.r9.s32;
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// twllei r9,0
	if (ctx.r9.u32 <= 0) __builtin_debugtrap();
	// andc r3,r9,r5
	ctx.r3.u64 = ctx.r9.u64 & ~ctx.r5.u64;
	// lwzx r5,r4,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// twlgei r3,-1
	if (ctx.r3.u32 >= 4294967295) __builtin_debugtrap();
	// blt cr6,0x82ea8360
	if (ctx.cr6.lt) goto loc_82EA8360;
	// addi r6,r7,-3
	ctx.r6.s64 = ctx.r7.s64 + -3;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r5,-4
	ctx.r9.s64 = ctx.r5.s64 + -4;
loc_82EA8308:
	// slw r3,r11,r8
	ctx.r3.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r8.u8 & 0x3F));
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r10,-1
	ctx.r31.s64 = ctx.r10.s64 + -1;
	// slw r30,r10,r8
	ctx.r30.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
	// lfsx f0,r3,r25
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r25.u32);
	ctx.f0.f64 = double(temp.f32);
	// slw r3,r31,r8
	ctx.r3.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r8.u8 & 0x3F));
	// stfs f0,4(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r30,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r10,1
	ctx.r30.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// slw r30,r30,r8
	ctx.r30.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r8.u8 & 0x3F));
	// lfsx f13,r3,r25
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r25.u32);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f13,8(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfsx f12,r31,r25
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	ctx.f12.f64 = double(temp.f32);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// stfs f12,12(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// lfsx f11,r3,r25
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r25.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfsu f11,16(r9)
	temp.f32 = float(ctx.f11.f64);
	ea = 16 + ctx.r9.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// blt cr6,0x82ea8308
	if (ctx.cr6.lt) goto loc_82EA8308;
loc_82EA8360:
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82ea8394
	if (!ctx.cr6.lt) goto loc_82EA8394;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r11,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r11.s64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82EA837C:
	// slw r9,r11,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r8.u8 & 0x3F));
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfsx f0,r7,r25
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r25.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsu f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82ea837c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82EA837C;
loc_82EA8394:
	// lwz r11,244(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 244);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82ea82c8
	if (ctx.cr6.lt) goto loc_82EA82C8;
loc_82EA83A8:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r9,240(r14)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r14.u32 + 240);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// srawi r6,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 1;
	// lfs f26,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f26.f64 = double(temp.f32);
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// extsh r26,r5
	ctx.r26.s64 = ctx.r5.s16;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// cmpw cr6,r26,r9
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82ea8580
	if (ctx.cr6.lt) goto loc_82EA8580;
	// addi r28,r24,4
	ctx.r28.s64 = ctx.r24.s64 + 4;
loc_82EA83D8:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x82ea83f4
	if (!ctx.cr6.gt) goto loc_82EA83F4;
loc_82EA83E4:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// srw r11,r10,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x82ea83e4
	if (ctx.cr6.gt) goto loc_82EA83E4;
loc_82EA83F4:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// ble cr6,0x82ea8410
	if (!ctx.cr6.gt) goto loc_82EA8410;
loc_82EA8400:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r10,r8,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bgt cr6,0x82ea8400
	if (ctx.cr6.gt) goto loc_82EA8400;
loc_82EA8410:
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r11.s64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r4,15958
	ctx.r9.s64 = ctx.r4.s64 + 15958;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r8,r23
	PPC_STORE_U32(ctx.r8.u32 + ctx.r23.u32, ctx.r29.u32);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// sraw r6,r3,r4
	temp.u32 = ctx.r4.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r3.s32 < 0) & (((ctx.r3.s32 >> temp.u32) << temp.u32) != ctx.r3.s32);
	ctx.r6.s64 = ctx.r3.s32 >> temp.u32;
	// slw r5,r6,r4
	ctx.r5.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r4.u8 & 0x3F));
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82ea8568
	if (!ctx.cr6.gt) goto loc_82EA8568;
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r31,r10,r4
	ctx.r31.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r4.u8 & 0x3F));
loc_82EA8450:
	// sraw r10,r11,r4
	temp.u32 = ctx.r4.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r10.s64 = ctx.r11.s32 >> temp.u32;
	// slw r9,r10,r4
	ctx.r9.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r4.u8 & 0x3F));
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// bge cr6,0x82ea84e0
	if (!ctx.cr6.lt) goto loc_82EA84E0;
loc_82EA8468:
	// fmr f13,f26
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f26.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f12,f26
	ctx.f12.f64 = ctx.f26.f64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// fmr f11,f26
	ctx.f11.f64 = ctx.f26.f64;
	// blt cr6,0x82ea84a4
	if (ctx.cr6.lt) goto loc_82EA84A4;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// addi r9,r7,-4
	ctx.r9.s64 = ctx.r7.s64 + -4;
loc_82EA8488:
	// lfs f10,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// lfsu f0,8(r9)
	ea = 8 + ctx.r9.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f10,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f13.f64));
	// fmadds f12,f0,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f12.f64));
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82ea8488
	if (ctx.cr6.lt) goto loc_82EA8488;
loc_82EA84A4:
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82ea84b8
	if (!ctx.cr6.lt) goto loc_82EA84B8;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r9,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
loc_82EA84B8:
	// fadds f0,f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// fadds f13,f0,f11
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f13,0(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// blt cr6,0x82ea8468
	if (ctx.cr6.lt) goto loc_82EA8468;
loc_82EA84E0:
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// fmr f13,f26
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f26.f64;
	// fmr f12,f26
	ctx.f12.f64 = ctx.f26.f64;
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f11,f26
	ctx.f11.f64 = ctx.f26.f64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x82ea8520
	if (ctx.cr6.lt) goto loc_82EA8520;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// addi r8,r7,-4
	ctx.r8.s64 = ctx.r7.s64 + -4;
loc_82EA8504:
	// lfs f10,4(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// lfsu f0,8(r8)
	ea = 8 + ctx.r8.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f10,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f13.f64));
	// fmadds f12,f0,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f12.f64));
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82ea8504
	if (ctx.cr6.lt) goto loc_82EA8504;
loc_82EA8520:
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82ea8534
	if (!ctx.cr6.lt) goto loc_82EA8534;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r9,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
loc_82EA8534:
	// fadds f0,f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// fadds f13,f0,f11
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f13,0(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// sraw r9,r3,r4
	temp.u32 = ctx.r4.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r3.s32 < 0) & (((ctx.r3.s32 >> temp.u32) << temp.u32) != ctx.r3.s32);
	ctx.r9.s64 = ctx.r3.s32 >> temp.u32;
	// slw r5,r9,r4
	ctx.r5.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r4.u8 & 0x3F));
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82ea8450
	if (ctx.cr6.lt) goto loc_82EA8450;
loc_82EA8568:
	// extsh r11,r26
	ctx.r11.s64 = ctx.r26.s16;
	// lwz r9,240(r14)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r14.u32 + 240);
	// srawi r26,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r26.s64 = ctx.r11.s32 >> 1;
	// extsh r8,r26
	ctx.r8.s64 = ctx.r26.s16;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82ea83d8
	if (!ctx.cr6.lt) goto loc_82EA83D8;
loc_82EA8580:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r19,4
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 4, ctx.xer);
	// lfs f0,11556(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11556);
	ctx.f0.f64 = double(temp.f32);
	// blt cr6,0x82ea87a8
	if (ctx.cr6.lt) goto loc_82EA87A8;
	// addi r7,r23,30732
	ctx.r7.s64 = ctx.r23.s64 + 30732;
	// addi r8,r19,-3
	ctx.r8.s64 = ctx.r19.s64 + -3;
	// addi r10,r7,-4
	ctx.r10.s64 = ctx.r7.s64 + -4;
	// addi r11,r24,4
	ctx.r11.s64 = ctx.r24.s64 + 4;
	// subf r7,r24,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r24.s64;
loc_82EA85A8:
	// lwz r6,0(r23)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r5,-4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// extsw r3,r5
	ctx.r3.s64 = ctx.r5.s32;
	// extsw r5,r4
	ctx.r5.s64 = ctx.r4.s32;
	// lwz r4,80(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 80);
	// lwz r6,256(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 256);
	// std r5,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r5.u64);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r3,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r3.u64);
	// lfd f10,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// std r5,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// lfd f4,152(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// lfd f13,176(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// std r3,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r3.u64);
	// lfd f12,160(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f8,f12
	ctx.f8.f64 = double(ctx.f12.s64);
	// frsp f7,f11
	ctx.f7.f64 = double(float(ctx.f11.f64));
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// fadds f2,f6,f7
	ctx.f2.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// frsp f1,f3
	ctx.f1.f64 = double(float(ctx.f3.f64));
	// fmuls f13,f2,f5
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f5.f64));
	// fmuls f12,f1,f15
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f15.f64));
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fdivs f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 / ctx.f12.f64));
	// stfs f10,4(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,0(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// std r5,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r5.u64);
	// lwz r6,256(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 256);
	// std r3,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r3.u64);
	// lfd f8,184(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// lwz r5,80(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r4.u64);
	// lfd f4,216(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// lfd f9,192(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f6,f8
	ctx.f6.f64 = double(ctx.f8.s64);
	// fcfid f7,f9
	ctx.f7.f64 = double(ctx.f9.s64);
	// extsw r3,r6
	ctx.r3.s64 = ctx.r6.s32;
	// std r3,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r3.u64);
	// lfd f5,200(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// fcfid f12,f5
	ctx.f12.f64 = double(ctx.f5.s64);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f2,f7
	ctx.f2.f64 = double(float(ctx.f7.f64));
	// frsp f1,f6
	ctx.f1.f64 = double(float(ctx.f6.f64));
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// frsp f13,f3
	ctx.f13.f64 = double(float(ctx.f3.f64));
	// fadds f11,f2,f1
	ctx.f11.f64 = double(float(ctx.f2.f64 + ctx.f1.f64));
	// fmuls f8,f10,f15
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f15.f64));
	// fmuls f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fdivs f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 / ctx.f8.f64));
	// stfsx f6,r7,r11
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, temp.u32);
	// lwz r5,0(r23)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// lwz r4,80(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 80);
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// std r3,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r3.u64);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r3.u64);
	// lfd f13,208(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// lfd f5,232(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 232);
	// std r6,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r6.u64);
	// lfd f3,224(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// fcfid f1,f3
	ctx.f1.f64 = double(ctx.f3.s64);
	// frsp f2,f4
	ctx.f2.f64 = double(float(ctx.f4.f64));
	// frsp f11,f1
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fadds f10,f2,f11
	ctx.f10.f64 = double(float(ctx.f2.f64 + ctx.f11.f64));
	// lwz r6,256(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 256);
	// frsp f9,f12
	ctx.f9.f64 = double(float(ctx.f12.f64));
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// std r5,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r5.u64);
	// lfd f8,240(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 240);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// fmuls f6,f10,f9
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// frsp f5,f7
	ctx.f5.f64 = double(float(ctx.f7.f64));
	// fmuls f4,f6,f0
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f3,f5,f15
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f15.f64));
	// fdivs f2,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 / ctx.f3.f64));
	// stfs f2,12(r10)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// lfd f13,136(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// lwz r4,0(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// std r3,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r3.u64);
	// lfd f1,128(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// lwz r6,256(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 256);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r5.u64);
	// lfd f10,96(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f1
	ctx.f11.f64 = double(ctx.f1.s64);
	// lwz r3,80(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// extsw r4,r3
	ctx.r4.s64 = ctx.r3.s32;
	// frsp f7,f12
	ctx.f7.f64 = double(float(ctx.f12.f64));
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// frsp f5,f11
	ctx.f5.f64 = double(float(ctx.f11.f64));
	// fcfid f6,f8
	ctx.f6.f64 = double(ctx.f8.s64);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f3,f6
	ctx.f3.f64 = double(float(ctx.f6.f64));
	// fadds f2,f7,f5
	ctx.f2.f64 = double(float(ctx.f7.f64 + ctx.f5.f64));
	// frsp f4,f9
	ctx.f4.f64 = double(float(ctx.f9.f64));
	// fmuls f13,f2,f3
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f3.f64));
	// fmuls f1,f4,f15
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f15.f64));
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fdivs f11,f12,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 / ctx.f1.f64));
	// stfsu f11,16(r10)
	temp.f32 = float(ctx.f11.f64);
	ea = 16 + ctx.r10.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// blt cr6,0x82ea85a8
	if (ctx.cr6.lt) goto loc_82EA85A8;
loc_82EA87A8:
	// cmpw cr6,r9,r19
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r19.s32, ctx.xer);
	// bge cr6,0x82ea884c
	if (!ctx.cr6.lt) goto loc_82EA884C;
	// subf r8,r9,r19
	ctx.r8.s64 = ctx.r19.s64 - ctx.r9.s64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r23,30732
	ctx.r10.s64 = ctx.r23.s64 + 30732;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// subf r10,r24,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r24.s64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82EA87C8:
	// lwz r6,0(r23)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// lwz r4,80(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 80);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// extsw r9,r4
	ctx.r9.s64 = ctx.r4.s32;
	// lwz r3,256(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 256);
	// std r5,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r5.u64);
	// lfd f12,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r9,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r9.u64);
	// lfd f9,136(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// extsw r8,r3
	ctx.r8.s64 = ctx.r3.s32;
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r8.u64);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// frsp f4,f10
	ctx.f4.f64 = double(float(ctx.f10.f64));
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f5,f11
	ctx.f5.f64 = double(float(ctx.f11.f64));
	// frsp f3,f8
	ctx.f3.f64 = double(float(ctx.f8.f64));
	// lfd f7,128(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// fadds f1,f4,f5
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// frsp f2,f6
	ctx.f2.f64 = double(float(ctx.f6.f64));
	// fmuls f12,f1,f3
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f3.f64));
	// fmuls f13,f2,f15
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f15.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fdivs f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 / ctx.f13.f64));
	// stfsx f10,r11,r10
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82ea87c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82EA87C8;
loc_82EA884C:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// ble cr6,0x82ea8934
	if (!ctx.cr6.gt) goto loc_82EA8934;
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// addi r9,r1,256
	ctx.r9.s64 = ctx.r1.s64 + 256;
	// subf r5,r11,r24
	ctx.r5.s64 = ctx.r24.s64 - ctx.r11.s64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
loc_82EA8864:
	// add r10,r5,r9
	ctx.r10.u64 = ctx.r5.u64 + ctx.r9.u64;
	// lwzx r6,r5,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// stfs f26,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82ea8904
	if (!ctx.cr6.lt) goto loc_82EA8904;
	// subf r10,r6,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r6.s64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x82ea88d4
	if (ctx.cr6.lt) goto loc_82EA88D4;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r8,-3
	ctx.r7.s64 = ctx.r8.s64 + -3;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_82EA889C:
	// lfs f13,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// lfsu f0,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f0,f0
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f9,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f13,f13,f10
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f7,f12,f12,f8
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f8.f64));
	// fmadds f6,f11,f11,f7
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f7.f64));
	// fadds f5,f6,f9
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f9.f64));
	// stfs f5,0(r9)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// blt cr6,0x82ea889c
	if (ctx.cr6.lt) goto loc_82EA889C;
loc_82EA88D4:
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82ea8904
	if (!ctx.cr6.lt) goto loc_82EA8904;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r25
	ctx.r11.u64 = ctx.r10.u64 + ctx.r25.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82EA88F0:
	// lfs f13,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfsu f0,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f0.f64 = double(temp.f32);
	// fmadds f12,f0,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,0(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// bdnz 0x82ea88f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82EA88F0;
loc_82EA8904:
	// subf r11,r6,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r6.s64;
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fdivs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// stfs f10,0(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x82ea8864
	if (!ctx.cr0.eq) goto loc_82EA8864;
loc_82EA8934:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x82ea89e0
	if (ctx.cr6.eq) goto loc_82EA89E0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r19,4
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 4, ctx.xer);
	// blt cr6,0x82ea89a8
	if (ctx.cr6.lt) goto loc_82EA89A8;
	// addi r11,r1,260
	ctx.r11.s64 = ctx.r1.s64 + 260;
	// addi r7,r1,256
	ctx.r7.s64 = ctx.r1.s64 + 256;
	// addi r6,r1,260
	ctx.r6.s64 = ctx.r1.s64 + 260;
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// addi r8,r19,-3
	ctx.r8.s64 = ctx.r19.s64 + -3;
	// addi r11,r22,8
	ctx.r11.s64 = ctx.r22.s64 + 8;
	// subf r7,r22,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r22.s64;
	// subf r6,r22,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r22.s64;
loc_82EA8968:
	// lfs f0,12(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fdivs f12,f14,f0
	ctx.f12.f64 = double(float(ctx.f14.f64 / ctx.f0.f64));
	// lfsx f13,r7,r11
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f11,r6,r11
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f10,f14,f13
	ctx.f10.f64 = double(float(ctx.f14.f64 / ctx.f13.f64));
	// lfsu f0,16(r9)
	ea = 16 + ctx.r9.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	ctx.f0.f64 = double(temp.f32);
	// fdivs f9,f14,f11
	ctx.f9.f64 = double(float(ctx.f14.f64 / ctx.f11.f64));
	// fdivs f8,f14,f0
	ctx.f8.f64 = double(float(ctx.f14.f64 / ctx.f0.f64));
	// stfs f12,-8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// stfs f8,-4(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// stfs f10,0(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f9,4(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// blt cr6,0x82ea8968
	if (ctx.cr6.lt) goto loc_82EA8968;
loc_82EA89A8:
	// cmpw cr6,r10,r19
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r19.s32, ctx.xer);
	// bge cr6,0x82ea8a98
	if (!ctx.cr6.lt) goto loc_82EA8A98;
	// subf r9,r10,r19
	ctx.r9.s64 = ctx.r19.s64 - ctx.r10.s64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,256
	ctx.r8.s64 = ctx.r1.s64 + 256;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// subf r10,r22,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r22.s64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82EA89C8:
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f13,f14,f0
	ctx.f13.f64 = double(float(ctx.f14.f64 / ctx.f0.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82ea89c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82EA89C8;
	// b 0x82ea8a98
	goto loc_82EA8A98;
loc_82EA89E0:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// ble cr6,0x82ea8a98
	if (!ctx.cr6.gt) goto loc_82EA8A98;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mtctr r19
	ctx.ctr.u64 = ctx.r19.u64;
	// subf r5,r24,r22
	ctx.r5.s64 = ctx.r22.s64 - ctx.r24.s64;
loc_82EA89F4:
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// fmr f0,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f26.f64;
	// lwz r9,4(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// fmr f13,f26
	ctx.f13.f64 = ctx.f26.f64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// fmr f11,f26
	ctx.f11.f64 = ctx.f26.f64;
	// cmpw cr6,r6,r9
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82ea8a64
	if (!ctx.cr6.lt) goto loc_82EA8A64;
	// subf r10,r6,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r6.s64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x82ea8a4c
	if (ctx.cr6.lt) goto loc_82EA8A4C;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_82EA8A30:
	// lfs f10,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lfsu f12,8(r10)
	ea = 8 + ctx.r10.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82ea8a30
	if (ctx.cr6.lt) goto loc_82EA8A30;
loc_82EA8A4C:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82ea8a5c
	if (!ctx.cr6.lt) goto loc_82EA8A5C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f11,r11,r25
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	ctx.f11.f64 = double(temp.f32);
loc_82EA8A5C:
	// fadds f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fadds f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
loc_82EA8A64:
	// subf r11,r6,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r6.s64;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fdivs f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 / ctx.f12.f64));
	// fmuls f10,f11,f11
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmuls f9,f10,f10
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fdivs f8,f14,f9
	ctx.f8.f64 = double(float(ctx.f14.f64 / ctx.f9.f64));
	// stfsx f8,r5,r7
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r7.u32, temp.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bdnz 0x82ea89f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82EA89F4;
loc_82EA8A98:
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82EA8AA8;
	sub_82FA7CF0(ctx, base);
	// lfd f25,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f25.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// ble cr6,0x82ea8b30
	if (!ctx.cr6.gt) goto loc_82EA8B30;
	// addi r11,r23,30732
	ctx.r11.s64 = ctx.r23.s64 + 30732;
	// lfs f27,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f27.f64 = double(temp.f32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lfs f28,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f28.f64 = double(temp.f32);
	// subf r29,r20,r11
	ctx.r29.s64 = ctx.r11.s64 - ctx.r20.s64;
	// lfd f29,88(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// lfd f31,30032(r10)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r10.u32 + 30032);
	// lfs f30,-24084(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24084);
	ctx.f30.f64 = double(temp.f32);
loc_82EA8AE0:
	// lfsx f0,r29,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f27
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// lfs f0,30720(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 30720);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x82ea8af8
	if (!ctx.cr6.lt) goto loc_82EA8AF8;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_82EA8AF8:
	// fcmpu cr6,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f28.f64);
	// ble cr6,0x82ea8b04
	if (!ctx.cr6.gt) goto loc_82EA8B04;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
loc_82EA8B04:
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// bl 0x82fa30a8
	ctx.lr = 0x82EA8B0C;
	sub_82FA30A8(ctx, base);
	// fmul f2,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64 * ctx.f31.f64;
	// fmr f1,f25
	ctx.f1.f64 = ctx.f25.f64;
	// bl 0x82fa30a8
	ctx.lr = 0x82EA8B18;
	sub_82FA30A8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// fmuls f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82ea8ae0
	if (!ctx.cr0.eq) goto loc_82EA8AE0;
loc_82EA8B30:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// ble cr6,0x82ea8c84
	if (!ctx.cr6.gt) goto loc_82EA8C84;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f24,168(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f24.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// lfs f28,204(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	ctx.f28.f64 = double(temp.f32);
	// addi r25,r23,30732
	ctx.r25.s64 = ctx.r23.s64 + 30732;
	// lfs f30,25288(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 25288);
	ctx.f30.f64 = double(temp.f32);
	// li r26,0
	ctx.r26.s64 = 0;
	// lfs f31,-1568(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -1568);
	ctx.f31.f64 = double(temp.f32);
	// mr r27,r18
	ctx.r27.u64 = ctx.r18.u64;
	// lfs f29,-16424(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -16424);
	ctx.f29.f64 = double(temp.f32);
	// subf r24,r18,r15
	ctx.r24.s64 = ctx.r15.s64 - ctx.r18.s64;
	// lfs f27,200(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 200);
	ctx.f27.f64 = double(temp.f32);
loc_82EA8B78:
	// extsw r11,r29
	ctx.r11.s64 = ctx.r29.s32;
	// fmr f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f25.f64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f2,f12,f27
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f27.f64));
	// bl 0x82fa30a8
	ctx.lr = 0x82EA8B98;
	sub_82FA30A8(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfsx f11,r24,r27
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r24.u32 + ctx.r27.u32, temp.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// addi r28,r27,-112
	ctx.r28.s64 = ctx.r27.s64 + -112;
loc_82EA8BAC:
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x82ea8c54
	if (ctx.cr6.lt) goto loc_82EA8C54;
	// lfs f0,48(r14)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r14.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f24
	ctx.cr6.compare(ctx.f0.f64, ctx.f24.f64);
	// ble cr6,0x82ea8c1c
	if (!ctx.cr6.gt) goto loc_82EA8C1C;
	// cmpw cr6,r29,r16
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r16.s32, ctx.xer);
	// blt cr6,0x82ea8bd4
	if (ctx.cr6.lt) goto loc_82EA8BD4;
	// cmpw cr6,r29,r17
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r17.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82ea8bd8
	if (!ctx.cr6.gt) goto loc_82EA8BD8;
loc_82EA8BD4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82EA8BD8:
	// extsw r10,r30
	ctx.r10.s64 = ctx.r30.s32;
	// fmr f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f25.f64;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r10,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r10.u64);
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f12,136(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// fnmsubs f9,f11,f29,f31
	ctx.f9.f64 = double(float(-(ctx.f11.f64 * ctx.f29.f64 - ctx.f31.f64)));
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fmuls f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// fmuls f2,f7,f30
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f30.f64));
	// bl 0x82fa30a8
	ctx.lr = 0x82EA8C14;
	sub_82FA30A8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// b 0x82ea8c58
	goto loc_82EA8C58;
loc_82EA8C1C:
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// lfs f0,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f13,f28,f0
	ctx.f13.f64 = double(float(ctx.f28.f64 / ctx.f0.f64));
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// fmr f1,f25
	ctx.f1.f64 = ctx.f25.f64;
	// fsubs f12,f31,f13
	ctx.f12.f64 = double(float(ctx.f31.f64 - ctx.f13.f64));
	// lfd f11,128(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f8,f12,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fmuls f2,f8,f30
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f30.f64));
	// bl 0x82fa30a8
	ctx.lr = 0x82EA8C4C;
	sub_82FA30A8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// b 0x82ea8c58
	goto loc_82EA8C58;
loc_82EA8C54:
	// fmr f0,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f26.f64;
loc_82EA8C58:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stfsu f0,112(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	ea = 112 + ctx.r28.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r28.u32 = ea;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r19
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r19.s32, ctx.xer);
	// blt cr6,0x82ea8bac
	if (ctx.cr6.lt) goto loc_82EA8BAC;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmpw cr6,r29,r19
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r19.s32, ctx.xer);
	// blt cr6,0x82ea8b78
	if (ctx.cr6.lt) goto loc_82EA8B78;
loc_82EA8C84:
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// ble cr6,0x82ea8e24
	if (!ctx.cr6.gt) goto loc_82EA8E24;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addis r26,r23,1
	ctx.r26.s64 = ctx.r23.s64 + 65536;
	// li r29,0
	ctx.r29.s64 = 0;
	// lfd f27,192(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r11.u32 + 192);
	// addi r26,r26,-1532
	ctx.r26.s64 = ctx.r26.s64 + -1532;
	// lfd f28,184(r10)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r10.u32 + 184);
	// mr r27,r15
	ctx.r27.u64 = ctx.r15.u64;
	// lfd f29,22528(r9)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r9.u32 + 22528);
loc_82EA8CB8:
	// fmr f31,f26
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f26.f64;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_82EA8CC4:
	// cmpw cr6,r28,r31
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x82ea8cd4
	if (!ctx.cr6.lt) goto loc_82EA8CD4;
	// lfs f30,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
	// b 0x82ea8ce0
	goto loc_82EA8CE0;
loc_82EA8CD4:
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f30,r10,r18
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r18.u32);
	ctx.f30.f64 = double(temp.f32);
loc_82EA8CE0:
	// fmr f2,f28
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f28.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82fa30a8
	ctx.lr = 0x82EA8CEC;
	sub_82FA30A8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r19
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r19.s32, ctx.xer);
	// fmadds f31,f0,f30,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 + ctx.f31.f64));
	// blt cr6,0x82ea8cc4
	if (ctx.cr6.lt) goto loc_82EA8CC4;
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82fa30a8
	ctx.lr = 0x82EA8D10;
	sub_82FA30A8(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfsu f0,4(r26)
	temp.f32 = float(ctx.f0.f64);
	ea = 4 + ctx.r26.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r26.u32 = ea;
	// addi r27,r27,-4
	ctx.r27.s64 = ctx.r27.s64 + -4;
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// cmpw cr6,r28,r19
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r19.s32, ctx.xer);
	// blt cr6,0x82ea8cb8
	if (ctx.cr6.lt) goto loc_82EA8CB8;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// ble cr6,0x82ea8e24
	if (!ctx.cr6.gt) goto loc_82EA8E24;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r15
	ctx.r31.u64 = ctx.r15.u64;
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
loc_82EA8D44:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// cmpwi cr6,r19,4
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 4, ctx.xer);
	// blt cr6,0x82ea8ddc
	if (ctx.cr6.lt) goto loc_82EA8DDC;
	// addi r5,r10,16058
	ctx.r5.s64 = ctx.r10.s64 + 16058;
	// addi r4,r19,-3
	ctx.r4.s64 = ctx.r19.s64 + -3;
	// addi r3,r5,3
	ctx.r3.s64 = ctx.r5.s64 + 3;
loc_82EA8D64:
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r8,r5,r11
	ctx.r8.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r18
	ctx.r9.u64 = ctx.r9.u64 + ctx.r18.u64;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r28,r8,16059
	ctx.r28.s64 = ctx.r8.s64 + 16059;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// stfsx f0,r6,r23
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r23.u32, temp.u32);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r8,16060
	ctx.r8.s64 = ctx.r8.s64 + 16060;
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r28,r28,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r6,3
	ctx.r6.s64 = ctx.r6.s64 + 3;
	// add r27,r3,r11
	ctx.r27.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f13,r28,r23
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r28.u32 + ctx.r23.u32, temp.u32);
	// rlwinm r27,r27,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r7,r18
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r18.u32);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfsx f12,r8,r23
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r23.u32, temp.u32);
	// lfsx f11,r6,r18
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r18.u32);
	ctx.f11.f64 = double(temp.f32);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// stfsx f11,r27,r23
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r27.u32 + ctx.r23.u32, temp.u32);
	// blt cr6,0x82ea8d64
	if (ctx.cr6.lt) goto loc_82EA8D64;
loc_82EA8DDC:
	// cmpw cr6,r11,r19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r19.s32, ctx.xer);
	// bge cr6,0x82ea8e10
	if (!ctx.cr6.lt) goto loc_82EA8E10;
	// subf r8,r11,r19
	ctx.r8.s64 = ctx.r19.s64 - ctx.r11.s64;
	// addi r9,r10,16058
	ctx.r9.s64 = ctx.r10.s64 + 16058;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82EA8DF0:
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfsx f0,r6,r18
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r18.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r5,r23
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r23.u32, temp.u32);
	// bdnz 0x82ea8df0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82EA8DF0;
loc_82EA8E10:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
	// bne 0x82ea8d44
	if (!ctx.cr0.eq) goto loc_82EA8D44;
loc_82EA8E24:
	// lwz r9,244(r14)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r14.u32 + 244);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82ea8f3c
	if (!ctx.cr6.gt) goto loc_82EA8F3C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// li r24,1
	ctx.r24.s64 = 1;
	// lfs f29,18896(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18896);
	ctx.f29.f64 = double(temp.f32);
	// ori r25,r7,1832
	ctx.r25.u64 = ctx.r7.u64 | 1832;
	// lfs f30,180(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 180);
	ctx.f30.f64 = double(temp.f32);
	// lfs f28,21496(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21496);
	ctx.f28.f64 = double(temp.f32);
loc_82EA8E58:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82ea8f30
	if (!ctx.cr6.gt) goto loc_82EA8F30;
	// add r26,r23,r25
	ctx.r26.u64 = ctx.r23.u64 + ctx.r25.u64;
loc_82EA8E68:
	// lwz r10,240(r14)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r14.u32 + 240);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x82ea8e88
	if (!ctx.cr6.gt) goto loc_82EA8E88;
loc_82EA8E78:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r8,r10,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bgt cr6,0x82ea8e78
	if (ctx.cr6.gt) goto loc_82EA8E78;
loc_82EA8E88:
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r8,80(r14)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r14.u32 + 80);
	// add r7,r11,r27
	ctx.r7.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r6,0(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// slw r10,r24,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r10.u8 & 0x3F));
	// slw r11,r24,r7
	ctx.r11.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r7.u8 & 0x3F));
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsw r4,r8
	ctx.r4.s64 = ctx.r8.s32;
	// extsw r3,r5
	ctx.r3.s64 = ctx.r5.s32;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// mullw r11,r9,r29
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r29.s32);
	// std r3,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r3.u64);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r6
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fdivs f0,f9,f10
	ctx.f0.f64 = double(float(ctx.f9.f64 / ctx.f10.f64));
	// ble cr6,0x82ea8f20
	if (!ctx.cr6.gt) goto loc_82EA8F20;
	// addi r11,r23,30732
	ctx.r11.s64 = ctx.r23.s64 + 30732;
	// fmuls f31,f0,f28
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// subf r28,r31,r11
	ctx.r28.s64 = ctx.r11.s64 - ctx.r31.s64;
loc_82EA8EF8:
	// lfsx f0,r28,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f13,f30,f0
	ctx.f13.f64 = double(float(ctx.f30.f64 / ctx.f0.f64));
	// fadds f12,f13,f29
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f29.f64));
	// fdivs f1,f31,f12
	ctx.f1.f64 = double(float(ctx.f31.f64 / ctx.f12.f64));
	// bl 0x82fa4be8
	ctx.lr = 0x82EA8F0C;
	sub_82FA4BE8(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfs f11,0(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82ea8ef8
	if (!ctx.cr0.eq) goto loc_82EA8EF8;
loc_82EA8F20:
	// lwz r9,244(r14)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r14.u32 + 244);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82ea8e68
	if (ctx.cr6.lt) goto loc_82EA8E68;
loc_82EA8F30:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpw cr6,r27,r9
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82ea8e58
	if (ctx.cr6.lt) goto loc_82EA8E58;
loc_82EA8F3C:
	// bl 0x82ea69d0
	ctx.lr = 0x82EA8F40;
	sub_82EA69D0(ctx, base);
	// bl 0x82ea9610
	ctx.lr = 0x82EA8F44;
	sub_82EA9610(ctx, base);
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82fa8d3c
	ctx.lr = 0x82EA8F50;
	__restfpr_14(ctx, base);
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA8F54"))) PPC_WEAK_FUNC(sub_82EA8F54);
PPC_FUNC_IMPL(__imp__sub_82EA8F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA8F58"))) PPC_WEAK_FUNC(sub_82EA8F58);
PPC_FUNC_IMPL(__imp__sub_82EA8F58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa764c
	ctx.lr = 0x82EA8F60;
	__savegprlr_17(ctx, base);
	// stfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r19,0(r3)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// mr r17,r8
	ctx.r17.u64 = ctx.r8.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r10,256(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 256);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r10,r10,r6
	ctx.r10.s32 = ctx.r10.s32 / ctx.r6.s32;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// twllei r6,0
	if (ctx.r6.u32 <= 0) __builtin_debugtrap();
	// andc r8,r6,r9
	ctx.r8.u64 = ctx.r6.u64 & ~ctx.r9.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// twlgei r8,-1
	if (ctx.r8.u32 >= 4294967295) __builtin_debugtrap();
	// ble cr6,0x82ea8fbc
	if (!ctx.cr6.gt) goto loc_82EA8FBC;
loc_82EA8FAC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x82ea8fac
	if (ctx.cr6.gt) goto loc_82EA8FAC;
loc_82EA8FBC:
	// mullw r9,r6,r6
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r6.s32);
	// lhz r10,110(r19)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r19.u32 + 110);
	// lwz r8,30728(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 30728);
	// lwz r21,304(r19)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r19.u32 + 304);
	// lwz r20,308(r19)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r19.u32 + 308);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// addi r6,r10,-16
	ctx.r6.s64 = ctx.r10.s64 + -16;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r4,r6,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r3,-32246
	ctx.r3.s64 = -2113273856;
	// slw r10,r5,r4
	ctx.r10.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r4.u8 & 0x3F));
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// lfs f0,260(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	ctx.f0.f64 = double(temp.f32);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f12
	ctx.f9.f64 = double(float(ctx.f12.f64));
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// lfs f13,24436(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 24436);
	ctx.f13.f64 = double(temp.f32);
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r27,r8,r6
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// li r18,0
	ctx.r18.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// fdivs f31,f13,f6
	ctx.f31.f64 = double(float(ctx.f13.f64 / ctx.f6.f64));
	// bl 0x82fa7cf0
	ctx.lr = 0x82EA9044;
	sub_82FA7CF0(ctx, base);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// ble cr6,0x82ea909c
	if (!ctx.cr6.gt) goto loc_82EA909C;
	// rlwinm r11,r21,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_82EA9058:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x82ea9074
	if (!ctx.cr6.gt) goto loc_82EA9074;
	// addic. r21,r21,-1
	ctx.xer.ca = ctx.r21.u32 > 0;
	ctx.r21.s64 = ctx.r21.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bgt 0x82ea9058
	if (ctx.cr0.gt) goto loc_82EA9058;
	// b 0x82ea909c
	goto loc_82EA909C;
loc_82EA9074:
	// addi r11,r29,3
	ctx.r11.s64 = ctx.r29.s64 + 3;
	// rlwinm r10,r21,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r9,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 2;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// lwzx r18,r10,r20
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r20.u32);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, ctx.xer);
	// blt cr6,0x82ea9098
	if (ctx.cr6.lt) goto loc_82EA9098;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_82EA9098:
	// stwx r11,r10,r20
	PPC_STORE_U32(ctx.r10.u32 + ctx.r20.u32, ctx.r11.u32);
loc_82EA909C:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,2388
	ctx.r10.u64 = ctx.r11.u64 | 2388;
	// lwzx r9,r24,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82ea91cc
	if (!ctx.cr6.eq) goto loc_82EA91CC;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// ble cr6,0x82ea942c
	if (!ctx.cr6.gt) goto loc_82EA942C;
	// addi r11,r29,3
	ctx.r11.s64 = ctx.r29.s64 + 3;
	// addi r6,r20,4
	ctx.r6.s64 = ctx.r20.s64 + 4;
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f10,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f10.f64 = double(temp.f32);
loc_82EA90D8:
	// lwz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmpw cr6,r7,r4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82ea90e8
	if (ctx.cr6.lt) goto loc_82EA90E8;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
loc_82EA90E8:
	// lwz r11,40(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 40);
	// fmr f11,f10
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f10.f64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82ea910c
	if (!ctx.cr6.eq) goto loc_82EA910C;
	// lbzx r11,r5,r17
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r17.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82ea910c
	if (!ctx.cr6.eq) goto loc_82EA910C;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// b 0x82ea91a4
	goto loc_82EA91A4;
loc_82EA910C:
	// fmr f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f10.f64;
	// cmpw cr6,r31,r7
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r7.s32, ctx.xer);
	// fmr f13,f10
	ctx.f13.f64 = ctx.f10.f64;
	// bge cr6,0x82ea919c
	if (!ctx.cr6.lt) goto loc_82EA919C;
	// subf r11,r31,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r31.s64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x82ea9174
	if (ctx.cr6.lt) goto loc_82EA9174;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r7,-1
	ctx.r9.s64 = ctx.r7.s64 + -1;
	// add r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// subf r8,r28,r26
	ctx.r8.s64 = ctx.r26.s64 - ctx.r28.s64;
loc_82EA9144:
	// lfs f9,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f9.f64 = double(temp.f32);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// lfsx f8,r8,r11
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lfsu f12,8(r10)
	ea = 8 + ctx.r10.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	ctx.f12.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fsubs f5,f12,f9
	ctx.f5.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// fmadds f13,f6,f6,f13
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f13.f64));
	// fmadds f0,f5,f5,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f0.f64));
	// blt cr6,0x82ea9144
	if (ctx.cr6.lt) goto loc_82EA9144;
loc_82EA9174:
	// cmpw cr6,r31,r7
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82ea9194
	if (!ctx.cr6.lt) goto loc_82EA9194;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lfsx f11,r11,r28
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f12,r11,r26
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fmuls f11,f9,f9
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
loc_82EA9194:
	// fadds f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fadds f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
loc_82EA919C:
	// fmuls f0,f11,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_82EA91A4:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r5,r21
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r21.s32, ctx.xer);
	// blt cr6,0x82ea90d8
	if (ctx.cr6.lt) goto loc_82EA90D8;
	// rlwinm r11,r21,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r18,r11,r20
	PPC_STORE_U32(ctx.r11.u32 + ctx.r20.u32, ctx.r18.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x82fa769c
	__restgprlr_17(ctx, base);
	return;
loc_82EA91CC:
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// ble cr6,0x82ea942c
	if (!ctx.cr6.gt) goto loc_82EA942C;
	// addi r11,r29,3
	ctx.r11.s64 = ctx.r29.s64 + 3;
	// addi r3,r20,4
	ctx.r3.s64 = ctx.r20.s64 + 4;
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// rlwinm r23,r9,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lfs f11,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f11.f64 = double(temp.f32);
	// ori r22,r10,1968
	ctx.r22.u64 = ctx.r10.u64 | 1968;
	// ori r29,r9,1972
	ctx.r29.u64 = ctx.r9.u64 | 1972;
loc_82EA9204:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// blt cr6,0x82ea9218
	if (ctx.cr6.lt) goto loc_82EA9218;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
loc_82EA9218:
	// lwz r11,40(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 40);
	// fmr f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f11.f64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82ea923c
	if (!ctx.cr6.eq) goto loc_82EA923C;
	// lbzx r11,r25,r17
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + ctx.r17.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82ea923c
	if (!ctx.cr6.eq) goto loc_82EA923C;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// b 0x82ea9418
	goto loc_82EA9418;
loc_82EA923C:
	// lwzx r11,r24,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r22.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ea9360
	if (ctx.cr6.eq) goto loc_82EA9360;
	// lwzx r10,r24,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r29.u32);
	// subf r11,r31,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r31.s64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// blt cr6,0x82ea9260
	if (ctx.cr6.lt) goto loc_82EA9260;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
loc_82EA9260:
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f13,f11
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f11.f64;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82ea9298
	if (!ctx.cr6.gt) goto loc_82EA9298;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// twllei r7,0
	if (ctx.r7.u32 <= 0) __builtin_debugtrap();
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r4,r10,r7
	ctx.r4.s32 = ctx.r10.s32 / ctx.r7.s32;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// andc r8,r7,r9
	ctx.r8.u64 = ctx.r7.u64 & ~ctx.r9.u64;
	// twlgei r8,-1
	if (ctx.r8.u32 >= 4294967295) __builtin_debugtrap();
loc_82EA9298:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// fmr f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f11.f64;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// cmpw cr6,r31,r5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x82ea92ec
	if (!ctx.cr6.lt) goto loc_82EA92EC;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r28,r26
	ctx.r9.s64 = ctx.r26.s64 - ctx.r28.s64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// subf r8,r28,r27
	ctx.r8.s64 = ctx.r27.s64 - ctx.r28.s64;
loc_82EA92BC:
	// lfsx f12,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// fsubs f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfsx f8,r8,r11
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// fmuls f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// fmadds f0,f7,f7,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f0.f64));
	// beq 0x82ea9328
	if (ctx.cr0.eq) goto loc_82EA9328;
	// cmpw cr6,r31,r5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82ea92bc
	if (ctx.cr6.lt) goto loc_82EA92BC;
loc_82EA92EC:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82ea9328
	if (ctx.cr6.eq) goto loc_82EA9328;
	// subf r11,r10,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r10.s64;
	// extsw r10,r7
	ctx.r10.s64 = ctx.r7.s32;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f10,88(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fcfid f7,f10
	ctx.f7.f64 = double(ctx.f10.s64);
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// frsp f5,f7
	ctx.f5.f64 = double(float(ctx.f7.f64));
	// fdivs f0,f6,f5
	ctx.f0.f64 = double(float(ctx.f6.f64 / ctx.f5.f64));
loc_82EA9328:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82ea9334
	if (!ctx.cr6.lt) goto loc_82EA9334;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_82EA9334:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bgt cr6,0x82ea9298
	if (ctx.cr6.gt) goto loc_82EA9298;
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// fmuls f0,f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fmuls f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f9,0(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// b 0x82ea9418
	goto loc_82EA9418;
loc_82EA9360:
	// fmr f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f11.f64;
	// cmpw cr6,r31,r5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r5.s32, ctx.xer);
	// fmr f13,f11
	ctx.f13.f64 = ctx.f11.f64;
	// bge cr6,0x82ea9410
	if (!ctx.cr6.lt) goto loc_82EA9410;
	// subf r11,r31,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r31.s64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x82ea93e0
	if (ctx.cr6.lt) goto loc_82EA93E0;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r5,-1
	ctx.r9.s64 = ctx.r5.s64 + -1;
	// add r8,r11,r28
	ctx.r8.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r11,r8,4
	ctx.r11.s64 = ctx.r8.s64 + 4;
	// subf r8,r28,r26
	ctx.r8.s64 = ctx.r26.s64 - ctx.r28.s64;
	// subf r7,r28,r27
	ctx.r7.s64 = ctx.r27.s64 - ctx.r28.s64;
	// subf r6,r27,r26
	ctx.r6.s64 = ctx.r26.s64 - ctx.r27.s64;
loc_82EA939C:
	// lfsx f10,r6,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	ctx.f10.f64 = double(temp.f32);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// lfs f9,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f9.f64 = double(temp.f32);
	// lfsx f8,r8,r11
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f10,f9
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// fsubs f5,f8,f6
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f6.f64));
	// lfs f4,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfsx f3,r7,r11
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f3.f64 = double(temp.f32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// fmuls f2,f7,f4
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f4.f64));
	// fmuls f1,f5,f3
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f3.f64));
	// fmadds f0,f2,f2,f0
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f2.f64 + ctx.f0.f64));
	// fmadds f13,f1,f1,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f1.f64 + ctx.f13.f64));
	// blt cr6,0x82ea939c
	if (ctx.cr6.lt) goto loc_82EA939C;
loc_82EA93E0:
	// cmpw cr6,r31,r5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x82ea9408
	if (!ctx.cr6.lt) goto loc_82EA9408;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lfsx f12,r11,r26
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f10,r11,r28
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfsx f8,r11,r27
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// fmuls f12,f7,f7
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
loc_82EA9408:
	// fadds f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fadds f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
loc_82EA9410:
	// fmuls f0,f12,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_82EA9418:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r25,r21
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r21.s32, ctx.xer);
	// blt cr6,0x82ea9204
	if (ctx.cr6.lt) goto loc_82EA9204;
loc_82EA942C:
	// rlwinm r11,r21,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r18,r11,r20
	PPC_STORE_U32(ctx.r11.u32 + ctx.r20.u32, ctx.r18.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x82fa769c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA9440"))) PPC_WEAK_FUNC(sub_82EA9440);
PPC_FUNC_IMPL(__imp__sub_82EA9440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82EA9448;
	__savegprlr_24(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// blt cr6,0x82ea9518
	if (ctx.cr6.lt) goto loc_82EA9518;
	// addi r29,r7,-3
	ctx.r29.s64 = ctx.r7.s64 + -3;
	// addi r30,r3,-16
	ctx.r30.s64 = ctx.r3.s64 + -16;
	// addi r9,r4,12
	ctx.r9.s64 = ctx.r4.s64 + 12;
	// addi r10,r6,8
	ctx.r10.s64 = ctx.r6.s64 + 8;
	// addi r11,r5,4
	ctx.r11.s64 = ctx.r5.s64 + 4;
	// subf r28,r5,r3
	ctx.r28.s64 = ctx.r3.s64 - ctx.r5.s64;
	// subf r8,r5,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r5.s64;
	// subf r27,r5,r4
	ctx.r27.s64 = ctx.r4.s64 - ctx.r5.s64;
	// subf r26,r6,r3
	ctx.r26.s64 = ctx.r3.s64 - ctx.r6.s64;
	// subf r25,r6,r4
	ctx.r25.s64 = ctx.r4.s64 - ctx.r6.s64;
	// subf r24,r4,r3
	ctx.r24.s64 = ctx.r3.s64 - ctx.r4.s64;
loc_82EA9480:
	// lfs f0,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lfs f13,-8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfsu f12,16(r30)
	temp.f32 = float(ctx.f12.f64);
	ea = 16 + ctx.r30.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r30.u32 = ea;
	// lfs f11,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// lfs f10,-8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// stfs f9,-12(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + -12, temp.u32);
	// lfsx f8,r8,r11
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// stfsx f6,r28,r11
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r28.u32 + ctx.r11.u32, temp.u32);
	// lfs f5,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfsx f4,r8,r11
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// stfsx f3,r27,r11
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r27.u32 + ctx.r11.u32, temp.u32);
	// lfs f2,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f2,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 + ctx.f1.f64));
	// stfsx f0,r26,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + ctx.r10.u32, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// stfsx f11,r25,r10
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r25.u32 + ctx.r10.u32, temp.u32);
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stfsx f8,r9,r24
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r24.u32, temp.u32);
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lfs f6,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// stfs f5,0(r9)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// blt cr6,0x82ea9480
	if (ctx.cr6.lt) goto loc_82EA9480;
loc_82EA9518:
	// cmpw cr6,r31,r7
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82ea9564
	if (!ctx.cr6.lt) goto loc_82EA9564;
	// subf r7,r31,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r31.s64;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r5,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r5.s64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// subf r10,r5,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r5.s64;
	// subf r8,r5,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r5.s64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82EA953C:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfsx f12,r9,r11
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f10,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// stfsx f9,r8,r11
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82ea953c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82EA953C;
loc_82EA9564:
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA9568"))) PPC_WEAK_FUNC(sub_82EA9568);
PPC_FUNC_IMPL(__imp__sub_82EA9568) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// lwz r9,52(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 52);
	// slw r10,r3,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r11,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 6;
	// lwzx r7,r8,r6
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82ea95b8
	if (ctx.cr6.lt) goto loc_82EA95B8;
loc_82EA9594:
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r7,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x82ea9594
	if (!ctx.cr6.lt) goto loc_82EA9594;
loc_82EA95B8:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r3,56(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 56);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// ble cr6,0x82ea95f8
	if (!ctx.cr6.gt) goto loc_82EA95F8;
	// addi r10,r9,-7
	ctx.r10.s64 = ctx.r9.s64 + -7;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r9,-6
	ctx.r7.s64 = ctx.r9.s64 + -6;
	// slw r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sraw r3,r6,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	ctx.r3.s64 = ctx.r6.s32 >> temp.u32;
	// b 0x82ea9600
	goto loc_82EA9600;
loc_82EA95F8:
	// subfic r10,r9,6
	ctx.xer.ca = ctx.r9.u32 <= 6;
	ctx.r10.s64 = 6 - ctx.r9.s64;
	// slw r3,r11,r10
	ctx.r3.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
loc_82EA9600:
	// cmpw cr6,r3,r5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r5.s32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA9610"))) PPC_WEAK_FUNC(sub_82EA9610);
PPC_FUNC_IMPL(__imp__sub_82EA9610) {
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
	// lis r11,-31959
	ctx.r11.s64 = -2094465024;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r11,-32072
	ctx.r11.s64 = ctx.r11.s64 + -32072;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f31,-27108(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27108);
	ctx.f31.f64 = double(temp.f32);
	// lfd f30,22080(r11)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22080);
loc_82EA964C:
	// clrldi r11,r31,32
	ctx.r11.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f2,f12,f31
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// bl 0x82fa30a8
	ctx.lr = 0x82EA966C;
	sub_82FA30A8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfsu f11,4(r30)
	temp.f32 = float(ctx.f11.f64);
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r30.u32 = ea;
	// cmplwi cr6,r31,258
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 258, ctx.xer);
	// blt cr6,0x82ea964c
	if (ctx.cr6.lt) goto loc_82EA964C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
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

__attribute__((alias("__imp__sub_82EA96A0"))) PPC_WEAK_FUNC(sub_82EA96A0);
PPC_FUNC_IMPL(__imp__sub_82EA96A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,30664(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30664);
	// lwz r9,92(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	// cmpwi cr6,r11,257
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 257, ctx.xer);
	// lwz r8,36(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// ble cr6,0x82ea96c8
	if (!ctx.cr6.gt) goto loc_82EA96C8;
	// li r11,257
	ctx.r11.s64 = 257;
loc_82EA96C8:
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lwz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r10,-32072
	ctx.r11.s64 = ctx.r10.s64 + -32072;
	// li r3,0
	ctx.r3.s64 = 0;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lwz r7,316(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 316);
	// lis r31,-32246
	ctx.r31.s64 = -2113273856;
	// lis r30,-32233
	ctx.r30.s64 = -2112421888;
	// lfsx f13,r5,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// stw r3,212(r4)
	PPC_STORE_U32(ctx.r4.u32 + 212, ctx.r3.u32);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r11,r10,15312
	ctx.r11.s64 = ctx.r10.s64 + 15312;
	// addi r10,r31,544
	ctx.r10.s64 = ctx.r31.s64 + 544;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lfs f0,24436(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24436);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f12,-32(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// lvx128 v61,r0,r11
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v62,r0,r10
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vor128 v63,v61,v61
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_load_si128((__m128i*)ctx.v61.u8));
	// stfs f12,-28(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// stfs f12,-24(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// stfs f12,-20(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -20, temp.u32);
	// lwz r5,56(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// std r11,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r11.u64);
	// lfd f11,-48(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// stfs f9,-48(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// stfs f9,-44(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// stfs f9,-40(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -40, temp.u32);
	// stfs f9,-36(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -36, temp.u32);
	// ble cr6,0x82ea97a4
	if (!ctx.cr6.gt) goto loc_82EA97A4;
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r10,r1,-32
	ctx.r10.s64 = ctx.r1.s64 + -32;
	// lvx128 v60,r0,r10
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
loc_82EA9774:
	// lvx128 v59,r9,r11
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v58,v59,v60
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v58.f32, _mm_mul_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v60.f32)));
	// vrfin128 v57,v58
	_mm_store_ps(ctx.v57.f32, _mm_round_ps(_mm_load_ps(ctx.v58.f32), _MM_FROUND_TO_NEAREST_INT | _MM_FROUND_NO_EXC));
	// vandc128 v56,v57,v62
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v57.u8)));
	// vcmpgtfp128 v55,v57,v61
	_mm_store_ps(ctx.v55.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v61.f32)));
	// vcfpsxws128 v54,v56,0
	_mm_store_si128((__m128i*)ctx.v54.s32, _mm_vctsxs(_mm_load_ps(ctx.v56.f32)));
	// vmaxfp128 v63,v56,v63
	_mm_store_ps(ctx.v63.f32, _mm_max_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v63.f32)));
	// vand128 v53,v55,v62
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)ctx.v62.u8)));
	// vor128 v52,v54,v53
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)ctx.v53.u8)));
	// stvx128 v52,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x82ea9774
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82EA9774;
loc_82EA97A4:
	// addi r11,r1,-48
	ctx.r11.s64 = ctx.r1.s64 + -48;
	// lvx128 v51,r0,r11
	simd::store_shuffled(ctx.v51, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vcmpgtfp128. v50,v63,v51
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v50.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v51.f32)));
	ctx.cr6.setFromMask(_mm_load_ps(ctx.v50.f32), 0xF);
	// beq cr6,0x82ea97cc
	if (ctx.cr6.eq) goto loc_82EA97CC;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,30660(r6)
	PPC_STORE_U32(ctx.r6.u32 + 30660, ctx.r11.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82EA97CC:
	// lwz r6,184(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 184);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r3,-4(r6)
	PPC_STORE_U32(ctx.r6.u32 + -4, ctx.r3.u32);
	// ble cr6,0x82ea9844
	if (!ctx.cr6.gt) goto loc_82EA9844;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82EA97F0:
	// lwz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82ea9804
	if (!ctx.cr6.eq) goto loc_82EA9804;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// b 0x82ea981c
	goto loc_82EA981C;
loc_82EA9804:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82EA981C:
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bdnz 0x82ea97f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82EA97F0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82ea9844
	if (ctx.cr6.eq) goto loc_82EA9844;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stwx r9,r8,r6
	PPC_STORE_U32(ctx.r8.u32 + ctx.r6.u32, ctx.r9.u32);
	// stwx r3,r7,r6
	PPC_STORE_U32(ctx.r7.u32 + ctx.r6.u32, ctx.r3.u32);
loc_82EA9844:
	// stw r10,-4(r6)
	PPC_STORE_U32(ctx.r6.u32 + -4, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r5,212(r4)
	PPC_STORE_U32(ctx.r4.u32 + 212, ctx.r5.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA985C"))) PPC_WEAK_FUNC(sub_82EA985C);
PPC_FUNC_IMPL(__imp__sub_82EA985C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA9860"))) PPC_WEAK_FUNC(sub_82EA9860);
PPC_FUNC_IMPL(__imp__sub_82EA9860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa764c
	ctx.lr = 0x82EA9868;
	__savegprlr_17(ctx, base);
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x82fa8d24
	ctx.lr = 0x82EA9870;
	__savefpr_27(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// lwz r11,30664(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30664);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// lwz r21,92(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	// lwz r23,184(r4)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r4.u32 + 184);
	// cmpwi cr6,r11,257
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 257, ctx.xer);
	// lwz r18,152(r30)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// lwz r25,144(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// lwz r22,36(r30)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// ble cr6,0x82ea98a4
	if (!ctx.cr6.gt) goto loc_82EA98A4;
	// li r11,257
	ctx.r11.s64 = 257;
loc_82EA98A4:
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lhz r9,118(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 118);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,0(r20)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// addi r7,r10,-32072
	ctx.r7.s64 = ctx.r10.s64 + -32072;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32233
	ctx.r5.s64 = -2112421888;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r19,56(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lfsx f28,r8,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	ctx.f28.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f31,11556(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 11556);
	ctx.f31.f64 = double(temp.f32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// fmuls f29,f28,f31
	ctx.f29.f64 = double(float(ctx.f28.f64 * ctx.f31.f64));
	// lfs f0,24436(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24436);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fdivs f30,f0,f28
	ctx.f30.f64 = double(float(ctx.f0.f64 / ctx.f28.f64));
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// fadds f27,f29,f28
	ctx.f27.f64 = double(float(ctx.f29.f64 + ctx.f28.f64));
	// bl 0x82fa7cf0
	ctx.lr = 0x82EA98FC;
	sub_82FA7CF0(ctx, base);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r9,256(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// rotlwi r11,r9,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// bgt cr6,0x82ea99b4
	if (ctx.cr6.gt) goto loc_82EA99B4;
	// lwz r8,224(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// divw r11,r9,r8
	ctx.r11.s32 = ctx.r9.s32 / ctx.r8.s32;
	// andc r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 & ~ctx.r7.u64;
	// twllei r8,0
	if (ctx.r8.u32 <= 0) __builtin_debugtrap();
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// twlgei r6,-1
	if (ctx.r6.u32 >= 4294967295) __builtin_debugtrap();
	// ble cr6,0x82ea9944
	if (!ctx.cr6.gt) goto loc_82EA9944;
loc_82EA9934:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srw r9,r11,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x82ea9934
	if (ctx.cr6.gt) goto loc_82EA9934;
loc_82EA9944:
	// lwz r9,344(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// mulli r10,r10,116
	ctx.r10.s64 = ctx.r10.s64 * 116;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82ea996c
	if (!ctx.cr6.gt) goto loc_82EA996C;
loc_82EA995C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srw r9,r11,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x82ea995c
	if (ctx.cr6.gt) goto loc_82EA995C;
loc_82EA996C:
	// lhz r11,118(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 118);
	// lwz r9,224(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// rlwinm r7,r9,12,0,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFFFF000;
	// rlwinm r6,r8,12,0,19
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0xFFFFF000;
	// rotlwi r11,r7,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// rotlwi r10,r6,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// andc r11,r8,r5
	ctx.r11.u64 = ctx.r8.u64 & ~ctx.r5.u64;
	// andc r10,r9,r4
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r4.u64;
	// divw r30,r7,r8
	ctx.r30.s32 = ctx.r7.s32 / ctx.r8.s32;
	// twllei r8,0
	if (ctx.r8.u32 <= 0) __builtin_debugtrap();
	// twlgei r11,-1
	if (ctx.r11.u32 >= 4294967295) __builtin_debugtrap();
	// divw r26,r6,r9
	ctx.r26.s32 = ctx.r6.s32 / ctx.r9.s32;
	// twllei r9,0
	if (ctx.r9.u32 <= 0) __builtin_debugtrap();
	// twlgei r10,-1
	if (ctx.r10.u32 >= 4294967295) __builtin_debugtrap();
	// b 0x82ea9a18
	goto loc_82EA9A18;
loc_82EA99B4:
	// lhz r8,118(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 118);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// divw r11,r9,r7
	ctx.r11.s32 = ctx.r9.s32 / ctx.r7.s32;
	// andc r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 & ~ctx.r6.u64;
	// twllei r7,0
	if (ctx.r7.u32 <= 0) __builtin_debugtrap();
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// twlgei r5,-1
	if (ctx.r5.u32 >= 4294967295) __builtin_debugtrap();
	// ble cr6,0x82ea99e8
	if (!ctx.cr6.gt) goto loc_82EA99E8;
loc_82EA99D8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srw r9,r11,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x82ea99d8
	if (ctx.cr6.gt) goto loc_82EA99D8;
loc_82EA99E8:
	// lwz r9,344(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// mulli r10,r10,116
	ctx.r10.s64 = ctx.r10.s64 * 116;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82ea9a10
	if (!ctx.cr6.gt) goto loc_82EA9A10;
loc_82EA9A00:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srw r9,r11,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x82ea9a00
	if (ctx.cr6.gt) goto loc_82EA9A00;
loc_82EA9A10:
	// li r30,4096
	ctx.r30.s64 = 4096;
	// li r26,4096
	ctx.r26.s64 = 4096;
loc_82EA9A18:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r27,212(r24)
	PPC_STORE_U32(ctx.r24.u32 + 212, ctx.r27.u32);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// stw r27,-4(r23)
	PPC_STORE_U32(ctx.r23.u32 + -4, ctx.r27.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// lfs f12,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f12.f64 = double(temp.f32);
loc_82EA9A34:
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r9,r5,r30
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r30.s32);
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// srawi r11,r9,12
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 12;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82ea9a60
	if (ctx.cr6.lt) goto loc_82EA9A60;
loc_82EA9A50:
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82ea9a50
	if (!ctx.cr6.lt) goto loc_82EA9A50;
loc_82EA9A60:
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// mullw r11,r10,r26
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r26.s32);
	// addi r9,r11,4095
	ctx.r9.s64 = ctx.r11.s64 + 4095;
	// srawi r6,r9,12
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 12;
	// cmpw cr6,r6,r22
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r22.s32, ctx.xer);
	// ble cr6,0x82ea9a80
	if (!ctx.cr6.gt) goto loc_82EA9A80;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
loc_82EA9A80:
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// lfsx f0,r11,r18
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r18.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f0,f28
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// bge cr6,0x82ea9bb8
	if (!ctx.cr6.lt) goto loc_82EA9BB8;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r25
	ctx.r8.u64 = ctx.r11.u64 + ctx.r25.u64;
	// add r11,r10,r23
	ctx.r11.u64 = ctx.r10.u64 + ctx.r23.u64;
	// subf r4,r25,r21
	ctx.r4.s64 = ctx.r21.s64 - ctx.r25.s64;
loc_82EA9AA8:
	// lfsx f13,r4,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// fabs f0,f13
	ctx.f0.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x82ea9ac0
	if (!ctx.cr6.lt) goto loc_82EA9AC0;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x82ea9ba8
	goto loc_82EA9BA8;
loc_82EA9AC0:
	// fcmpu cr6,f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// bge cr6,0x82ea9b0c
	if (!ctx.cr6.lt) goto loc_82EA9B0C;
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// bgt cr6,0x82ea9ad8
	if (ctx.cr6.gt) goto loc_82EA9AD8;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_82EA9AD8:
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// beq cr6,0x82ea9b00
	if (ctx.cr6.eq) goto loc_82EA9B00;
	// stfs f11,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// b 0x82ea9ba4
	goto loc_82EA9BA4;
loc_82EA9B00:
	// fneg f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// b 0x82ea9ba4
	goto loc_82EA9BA4;
loc_82EA9B0C:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// bgt cr6,0x82ea9b1c
	if (ctx.cr6.gt) goto loc_82EA9B1C;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
loc_82EA9B1C:
	// fmuls f0,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82ea9b3c
	if (!ctx.cr6.lt) goto loc_82EA9B3C;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82ea9b4c
	goto loc_82EA9B4C;
loc_82EA9B3C:
	// fadds f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82EA9B4C:
	// cmpw cr6,r10,r19
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r19.s32, ctx.xer);
	// bgt cr6,0x82ea9bfc
	if (ctx.cr6.gt) goto loc_82EA9BFC;
	// or r17,r10,r9
	ctx.r17.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// stwu r17,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r17.u32);
	ctx.r11.u32 = ea;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// beq cr6,0x82ea9b84
	if (ctx.cr6.eq) goto loc_82EA9B84;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// b 0x82ea9b94
	goto loc_82EA9B94;
loc_82EA9B84:
	// neg r10,r10
	ctx.r10.s64 = -ctx.r10.s64;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
loc_82EA9B94:
	// fcfid f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// fmuls f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// stfs f9,0(r8)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
loc_82EA9BA4:
	// stw r31,212(r24)
	PPC_STORE_U32(ctx.r24.u32 + 212, ctx.r31.u32);
loc_82EA9BA8:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82ea9aa8
	if (ctx.cr6.lt) goto loc_82EA9AA8;
loc_82EA9BB8:
	// cmpw cr6,r5,r22
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r22.s32, ctx.xer);
	// blt cr6,0x82ea9a34
	if (ctx.cr6.lt) goto loc_82EA9A34;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82ea9be0
	if (ctx.cr6.eq) goto loc_82EA9BE0;
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// stwx r28,r10,r23
	PPC_STORE_U32(ctx.r10.u32 + ctx.r23.u32, ctx.r28.u32);
	// stwx r27,r9,r23
	PPC_STORE_U32(ctx.r9.u32 + ctx.r23.u32, ctx.r27.u32);
loc_82EA9BE0:
	// lwz r11,184(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 184);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r29,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r29.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x82fa8d70
	ctx.lr = 0x82EA9BF8;
	__restfpr_27(ctx, base);
	// b 0x82fa769c
	__restgprlr_17(ctx, base);
	return;
loc_82EA9BFC:
	// stw r31,30660(r20)
	PPC_STORE_U32(ctx.r20.u32 + 30660, ctx.r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x82fa8d70
	ctx.lr = 0x82EA9C10;
	__restfpr_27(ctx, base);
	// b 0x82fa769c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA9C14"))) PPC_WEAK_FUNC(sub_82EA9C14);
PPC_FUNC_IMPL(__imp__sub_82EA9C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA9C18"))) PPC_WEAK_FUNC(sub_82EA9C18);
PPC_FUNC_IMPL(__imp__sub_82EA9C18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7650
	ctx.lr = 0x82EA9C20;
	__savegprlr_18(ctx, base);
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x82fa8d24
	ctx.lr = 0x82EA9C28;
	__savefpr_27(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// lwz r10,30664(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30664);
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// lwz r18,92(r4)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	// cmpwi cr6,r10,257
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 257, ctx.xer);
	// lwz r23,36(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// ble cr6,0x82ea9c50
	if (!ctx.cr6.gt) goto loc_82EA9C50;
	// li r10,257
	ctx.r10.s64 = 257;
loc_82EA9C50:
	// lis r9,-31959
	ctx.r9.s64 = -2094465024;
	// lwz r30,188(r22)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r22.u32 + 188);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,0(r20)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// addi r6,r9,-32072
	ctx.r6.s64 = ctx.r9.s64 + -32072;
	// lwz r25,144(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r21,184(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + 184);
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// lwz r24,152(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// rlwinm r5,r23,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r26,-4(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r19,56(r7)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r7.u32 + 56);
	// lfsx f31,r8,r6
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	ctx.f31.f64 = double(temp.f32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lfs f30,11556(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11556);
	ctx.f30.f64 = double(temp.f32);
	// li r29,0
	ctx.r29.s64 = 0;
	// fmuls f29,f31,f30
	ctx.f29.f64 = double(float(ctx.f31.f64 * ctx.f30.f64));
	// lfs f0,24436(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24436);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f28,f0,f31
	ctx.f28.f64 = double(float(ctx.f0.f64 / ctx.f31.f64));
	// li r27,0
	ctx.r27.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// fadds f27,f29,f31
	ctx.f27.f64 = double(float(ctx.f29.f64 + ctx.f31.f64));
	// bl 0x82fa7cf0
	ctx.lr = 0x82EA9CB8;
	sub_82FA7CF0(ctx, base);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x82ea9e34
	if (!ctx.cr6.gt) goto loc_82EA9E34;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// addi r6,r30,-8
	ctx.r6.s64 = ctx.r30.s64 + -8;
	// lfs f12,5184(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f12.f64 = double(temp.f32);
loc_82EA9CD0:
	// lwzu r10,8(r6)
	ea = 8 + ctx.r6.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r6.u32 = ea;
	// addi r26,r26,-2
	ctx.r26.s64 = ctx.r26.s64 + -2;
	// add r7,r10,r29
	ctx.r7.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r31,r10,r31
	ctx.r31.u64 = ctx.r10.u64 + ctx.r31.u64;
	// cmpw cr6,r7,r23
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x82ea9e18
	if (!ctx.cr6.lt) goto loc_82EA9E18;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r9,r18
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r18.u32);
	ctx.f13.f64 = double(temp.f32);
	// fabs f0,f13
	ctx.f0.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x82ea9d08
	if (!ctx.cr6.lt) goto loc_82EA9D08;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x82ea9e04
	goto loc_82EA9E04;
loc_82EA9D08:
	// fcmpu cr6,f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// bge cr6,0x82ea9d5c
	if (!ctx.cr6.lt) goto loc_82EA9D5C;
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x82ea9d38
	if (!ctx.cr6.gt) goto loc_82EA9D38;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// lfsx f0,r9,r24
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r24.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfsx f13,r9,r25
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r25.u32, temp.u32);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// b 0x82ea9df0
	goto loc_82EA9DF0;
loc_82EA9D38:
	// fneg f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfsx f13,r9,r24
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r24.u32);
	ctx.f13.f64 = double(temp.f32);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsx f11,r9,r25
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r25.u32, temp.u32);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// b 0x82ea9df0
	goto loc_82EA9DF0;
loc_82EA9D5C:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// lis r8,-32768
	ctx.r8.s64 = -2147483648;
	// bgt cr6,0x82ea9d6c
	if (ctx.cr6.gt) goto loc_82EA9D6C;
	// li r8,0
	ctx.r8.s64 = 0;
loc_82EA9D6C:
	// fmuls f0,f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82ea9d8c
	if (!ctx.cr6.lt) goto loc_82EA9D8C;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82ea9d9c
	goto loc_82EA9D9C;
loc_82EA9D8C:
	// fadds f0,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82EA9D9C:
	// cmpw cr6,r10,r19
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r19.s32, ctx.xer);
	// bgt cr6,0x82ea9e50
	if (ctx.cr6.gt) goto loc_82EA9E50;
	// lfsx f0,r9,r24
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r24.u32);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// beq cr6,0x82ea9dc4
	if (ctx.cr6.eq) goto loc_82EA9DC4;
	// extsw r5,r10
	ctx.r5.s64 = ctx.r10.s32;
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// b 0x82ea9dd4
	goto loc_82EA9DD4;
loc_82EA9DC4:
	// neg r5,r10
	ctx.r5.s64 = -ctx.r10.s64;
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r4.u64);
	// lfd f13,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
loc_82EA9DD4:
	// fcfid f11,f13
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(ctx.f13.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfsx f9,r9,r25
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r25.u32, temp.u32);
	// or r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
loc_82EA9DF0:
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82EA9E04:
	// addi r29,r7,1
	ctx.r29.s64 = ctx.r7.s64 + 1;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bgt cr6,0x82ea9cd0
	if (ctx.cr6.gt) goto loc_82EA9CD0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82ea9e34
	if (ctx.cr6.eq) goto loc_82EA9E34;
loc_82EA9E18:
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
	// stwx r31,r10,r21
	PPC_STORE_U32(ctx.r10.u32 + ctx.r21.u32, ctx.r31.u32);
	// stwx r8,r9,r21
	PPC_STORE_U32(ctx.r9.u32 + ctx.r21.u32, ctx.r8.u32);
loc_82EA9E34:
	// stw r27,212(r22)
	PPC_STORE_U32(ctx.r22.u32 + 212, ctx.r27.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r28,-4(r21)
	PPC_STORE_U32(ctx.r21.u32 + -4, ctx.r28.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x82fa8d70
	ctx.lr = 0x82EA9E4C;
	__restfpr_27(ctx, base);
	// b 0x82fa76a0
	__restgprlr_18(ctx, base);
	return;
loc_82EA9E50:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,30660(r20)
	PPC_STORE_U32(ctx.r20.u32 + 30660, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x82fa8d70
	ctx.lr = 0x82EA9E68;
	__restfpr_27(ctx, base);
	// b 0x82fa76a0
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA9E6C"))) PPC_WEAK_FUNC(sub_82EA9E6C);
PPC_FUNC_IMPL(__imp__sub_82EA9E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA9E70"))) PPC_WEAK_FUNC(sub_82EA9E70);
PPC_FUNC_IMPL(__imp__sub_82EA9E70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82EA9E78;
	__savegprlr_26(ctx, base);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,30664(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30664);
	// lwz r26,92(r4)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	// cmpwi cr6,r11,257
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 257, ctx.xer);
	// lwz r27,36(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// ble cr6,0x82ea9e98
	if (!ctx.cr6.gt) goto loc_82EA9E98;
	// li r11,257
	ctx.r11.s64 = 257;
loc_82EA9E98:
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lwz r9,188(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 188);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r10,-32072
	ctx.r3.s64 = ctx.r10.s64 + -32072;
	// lwz r30,184(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 184);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r31,-32233
	ctx.r31.s64 = -2112421888;
	// lwz r5,-4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r28,56(r7)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r7.u32 + 56);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfsx f13,r8,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	ctx.f13.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f11,11556(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11556);
	ctx.f11.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// fmuls f10,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfs f0,24436(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24436);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// fadds f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// ble cr6,0x82ea9ff0
	if (!ctx.cr6.gt) goto loc_82EA9FF0;
	// addi r31,r9,-8
	ctx.r31.s64 = ctx.r9.s64 + -8;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lfs f12,5184(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5184);
	ctx.f12.f64 = double(temp.f32);
loc_82EA9F00:
	// lwzu r9,8(r31)
	ea = 8 + ctx.r31.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// addi r5,r5,-2
	ctx.r5.s64 = ctx.r5.s64 + -2;
	// add r3,r9,r7
	ctx.r3.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpw cr6,r3,r27
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x82ea9fd4
	if (!ctx.cr6.lt) goto loc_82EA9FD4;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r9,r26
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r26.u32);
	ctx.f13.f64 = double(temp.f32);
	// fabs f0,f13
	ctx.f0.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bge cr6,0x82ea9f38
	if (!ctx.cr6.lt) goto loc_82EA9F38;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// b 0x82ea9fc0
	goto loc_82EA9FC0;
loc_82EA9F38:
	// fcmpu cr6,f0,f8
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// bge cr6,0x82ea9f58
	if (!ctx.cr6.lt) goto loc_82EA9F58;
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// bgt cr6,0x82ea9f50
	if (ctx.cr6.gt) goto loc_82EA9F50;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82EA9F50:
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// b 0x82ea9fa4
	goto loc_82EA9FA4;
loc_82EA9F58:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// lis r7,-32768
	ctx.r7.s64 = -2147483648;
	// bgt cr6,0x82ea9f68
	if (ctx.cr6.gt) goto loc_82EA9F68;
	// li r7,0
	ctx.r7.s64 = 0;
loc_82EA9F68:
	// fmuls f0,f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82ea9f88
	if (!ctx.cr6.lt) goto loc_82EA9F88;
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f13.u64);
	// lwz r9,-60(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -60);
	// b 0x82ea9f98
	goto loc_82EA9F98;
loc_82EA9F88:
	// fadds f0,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f13.u64);
	// lwz r9,-60(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -60);
loc_82EA9F98:
	// cmpw cr6,r9,r28
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r28.s32, ctx.xer);
	// bgt cr6,0x82eaa000
	if (ctx.cr6.gt) goto loc_82EAA000;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
loc_82EA9FA4:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
loc_82EA9FC0:
	// addi r7,r3,1
	ctx.r7.s64 = ctx.r3.s64 + 1;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bgt cr6,0x82ea9f00
	if (ctx.cr6.gt) goto loc_82EA9F00;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82ea9ff0
	if (ctx.cr6.eq) goto loc_82EA9FF0;
loc_82EA9FD4:
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stwx r10,r9,r30
	PPC_STORE_U32(ctx.r9.u32 + ctx.r30.u32, ctx.r10.u32);
	// stwx r5,r7,r30
	PPC_STORE_U32(ctx.r7.u32 + ctx.r30.u32, ctx.r5.u32);
loc_82EA9FF0:
	// stw r6,212(r4)
	PPC_STORE_U32(ctx.r4.u32 + 212, ctx.r6.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r8,-4(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4, ctx.r8.u32);
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
loc_82EAA000:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,30660(r29)
	PPC_STORE_U32(ctx.r29.u32 + 30660, ctx.r11.u32);
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAA010"))) PPC_WEAK_FUNC(sub_82EAA010);
PPC_FUNC_IMPL(__imp__sub_82EAA010) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82EAA018;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82fa8d24
	ctx.lr = 0x82EAA020;
	__savefpr_27(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r17,r4
	ctx.r17.u64 = ctx.r4.u64;
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r18,4(r4)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// lwz r9,64(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// li r5,112
	ctx.r5.s64 = 112;
	// lwz r14,176(r4)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r4.u32 + 176);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r24,20(r17)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20);
	// mr r19,r31
	ctx.r19.u64 = ctx.r31.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// lwz r25,16(r17)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16);
	// lwz r22,56(r17)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r17.u32 + 56);
	// mr r20,r31
	ctx.r20.u64 = ctx.r31.u64;
	// lwz r21,172(r17)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r17.u32 + 172);
	// stw r6,428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 428, ctx.r6.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r18,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r18.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bl 0x82fa7cf0
	ctx.lr = 0x82EAA084;
	sub_82FA7CF0(ctx, base);
	// lwz r11,224(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 224);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// lhz r5,118(r17)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r17.u32 + 118);
	// rlwinm r7,r11,6,0,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// rotlwi r9,r7,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// divw r10,r7,r4
	ctx.r10.s32 = ctx.r7.s32 / ctx.r4.s32;
	// addi r6,r9,-1
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// twllei r4,0
	if (ctx.r4.u32 <= 0) __builtin_debugtrap();
	// stw r10,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
	// andc r3,r4,r6
	ctx.r3.u64 = ctx.r4.u64 & ~ctx.r6.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// twlgei r3,-1
	if (ctx.r3.u32 >= 4294967295) __builtin_debugtrap();
	// ble cr6,0x82eaa0d4
	if (!ctx.cr6.gt) goto loc_82EAA0D4;
loc_82EAA0C0:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// srw r9,r10,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r8.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x82eaa0c0
	if (ctx.cr6.gt) goto loc_82EAA0C0;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
loc_82EAA0D4:
	// lwz r10,256(r15)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r15.u32 + 256);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// stw r8,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r8.u32);
	// twllei r11,0
	if (ctx.r11.u32 <= 0) __builtin_debugtrap();
	// rotlwi r8,r10,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r10,r10,r11
	ctx.r10.s32 = ctx.r10.s32 / ctx.r11.s32;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// andc r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 & ~ctx.r8.u64;
	// twlgei r7,-1
	if (ctx.r7.u32 >= 4294967295) __builtin_debugtrap();
	// ble cr6,0x82eaa110
	if (!ctx.cr6.gt) goto loc_82EAA110;
loc_82EAA100:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// srw r11,r10,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x82eaa100
	if (ctx.cr6.gt) goto loc_82EAA100;
loc_82EAA110:
	// lwz r11,344(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 344);
	// mulli r9,r9,116
	ctx.r9.s64 = ctx.r9.s64 * 116;
	// add r16,r9,r11
	ctx.r16.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x82eaa138
	if (!ctx.cr6.gt) goto loc_82EAA138;
loc_82EAA128:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x82eaa128
	if (ctx.cr6.gt) goto loc_82EAA128;
loc_82EAA138:
	// lwz r10,340(r15)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r15.u32 + 340);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,308(r15)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r15.u32 + 308);
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// ld r28,168(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwzx r29,r9,r10
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// rldicr r8,r29,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r29,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r29.u32);
	// bl 0x82c85af8
	ctx.lr = 0x82EAA170;
	sub_82C85AF8(ctx, base);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r5,264(r15)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r15.u32 + 264);
	// rldicr r8,r29,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82ea9568
	ctx.lr = 0x82EAA18C;
	sub_82EA9568(ctx, base);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bgt cr6,0x82eaa1ac
	if (ctx.cr6.gt) goto loc_82EAA1AC;
loc_82EAA19C:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82eaa19c
	if (!ctx.cr6.gt) goto loc_82EAA19C;
loc_82EAA1AC:
	// lwz r23,80(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82eaa288
	if (!ctx.cr6.gt) goto loc_82EAA288;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f28,0(r15)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	ctx.f28.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r8,25
	ctx.r8.s64 = 1638400;
	// lis r7,15470
	ctx.r7.s64 = 1013841920;
	// lfd f29,22080(r11)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22080);
	// addi r30,r15,540
	ctx.r30.s64 = ctx.r15.s64 + 540;
	// lfs f30,-9836(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -9836);
	ctx.f30.f64 = double(temp.f32);
	// rlwinm r26,r23,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f31,13432(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 13432);
	ctx.f31.f64 = double(temp.f32);
	// addi r29,r22,-4
	ctx.r29.s64 = ctx.r22.s64 + -4;
	// ori r27,r8,26125
	ctx.r27.u64 = ctx.r8.u64 | 26125;
	// ori r28,r7,62303
	ctx.r28.u64 = ctx.r7.u64 | 62303;
loc_82EAA1F0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mullw r8,r11,r27
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r27.s32);
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// add r6,r8,r28
	ctx.r6.u64 = ctx.r8.u64 + ctx.r28.u64;
	// srawi r11,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 2;
	// stw r6,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r6.u32);
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r5,r9,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lfs f0,292(r15)
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + 292);
	ctx.f0.f64 = double(temp.f32);
	// lwzx r4,r26,r18
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r18.u32);
	// extsw r3,r5
	ctx.r3.s64 = ctx.r5.s32;
	// subf r11,r7,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r7.s64;
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r10.u64);
	// lfd f12,120(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fmuls f2,f9,f30
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f30.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// fmuls f27,f7,f0
	ctx.f27.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// bl 0x82fa30a8
	ctx.lr = 0x82EAA264;
	sub_82FA30A8(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// fmuls f5,f6,f27
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f27.f64));
	// fmul f4,f5,f28
	ctx.f4.f64 = ctx.f5.f64 * ctx.f28.f64;
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// stfsu f3,4(r29)
	temp.f32 = float(ctx.f3.f64);
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r29.u32 = ea;
	// lwz r9,264(r15)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r15.u32 + 264);
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82eaa1f0
	if (ctx.cr6.lt) goto loc_82EAA1F0;
loc_82EAA288:
	// lwz r5,404(r15)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r15.u32 + 404);
	// li r18,1
	ctx.r18.s64 = 1;
	// cmpw cr6,r31,r5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x82eaa50c
	if (!ctx.cr6.lt) goto loc_82EAA50C;
	// lwz r29,92(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// ld r28,168(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// lwz r26,88(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r27,176(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
loc_82EAA2A8:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// rldicr r8,r27,32,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r27.u64, 32) & 0xFFFFFFFF00000000;
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ea9568
	ctx.lr = 0x82EAA2C0;
	sub_82EA9568(ctx, base);
	// lwz r23,80(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82c7d9d8
	ctx.lr = 0x82EAA2D8;
	sub_82C7D9D8(ctx, base);
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x82eaa4ac
	if (!ctx.cr6.lt) goto loc_82EAA4AC;
	// subf r11,r31,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x82eaa43c
	if (ctx.cr6.lt) goto loc_82EAA43C;
	// addi r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 2;
	// addi r9,r20,2
	ctx.r9.s64 = ctx.r20.s64 + 2;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r4,r22,4
	ctx.xer.ca = ctx.r22.u32 <= 4;
	ctx.r4.s64 = 4 - ctx.r22.s64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// addi r6,r30,-3
	ctx.r6.s64 = ctx.r30.s64 + -3;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r10,r10,r22
	ctx.r10.u64 = ctx.r10.u64 + ctx.r22.u64;
	// subfic r5,r22,-8
	ctx.xer.ca = ctx.r22.u32 <= 4294967288;
	ctx.r5.s64 = -8 - ctx.r22.s64;
loc_82EAA314:
	// lwz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// add r9,r5,r10
	ctx.r9.u64 = ctx.r5.u64 + ctx.r10.u64;
	// lwz r3,360(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 360);
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// std r8,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r8.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfsx f11,r9,r3
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fmuls f9,f10,f1
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// stfs f9,-8(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + -8, temp.u32);
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82eaa358
	if (ctx.cr6.eq) goto loc_82EAA358;
	// rlwinm r8,r19,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r18,r8,r14
	PPC_STORE_U32(ctx.r8.u32 + ctx.r14.u32, ctx.r18.u32);
loc_82EAA358:
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r8,360(r21)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r21.u32 + 360);
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lfd f13,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lfs f0,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// fmuls f9,f10,f1
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// stfs f9,-4(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// lwz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82eaa39c
	if (ctx.cr6.eq) goto loc_82EAA39C;
	// rlwinm r9,r19,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r18,r9,r14
	PPC_STORE_U32(ctx.r9.u32 + ctx.r14.u32, ctx.r18.u32);
loc_82EAA39C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,360(r21)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r21.u32 + 360);
	// extsw r3,r9
	ctx.r3.s64 = ctx.r9.s32;
	// std r3,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r3.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfsx f11,r7,r8
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fmuls f9,f10,f1
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// stfs f9,0(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82eaa3dc
	if (ctx.cr6.eq) goto loc_82EAA3DC;
	// rlwinm r9,r19,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r18,r9,r14
	PPC_STORE_U32(ctx.r9.u32 + ctx.r14.u32, ctx.r18.u32);
loc_82EAA3DC:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r8,r4,r10
	ctx.r8.u64 = ctx.r4.u64 + ctx.r10.u64;
	// lwz r3,360(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 360);
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r9,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r9.u64);
	// lfd f13,136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lfsx f0,r8,r3
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// fadds f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// fmuls f9,f10,f1
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// stfs f9,4(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82eaa420
	if (ctx.cr6.eq) goto loc_82EAA420;
	// rlwinm r9,r19,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r18,r9,r14
	PPC_STORE_U32(ctx.r9.u32 + ctx.r14.u32, ctx.r18.u32);
loc_82EAA420:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r20,r20,4
	ctx.r20.s64 = ctx.r20.s64 + 4;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmpw cr6,r31,r6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82eaa314
	if (ctx.cr6.lt) goto loc_82EAA314;
loc_82EAA43C:
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x82eaa4ac
	if (!ctx.cr6.lt) goto loc_82EAA4AC;
	// subf r11,r31,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	// rlwinm r10,r20,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r20,r11,r20
	ctx.r20.u64 = ctx.r11.u64 + ctx.r20.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82EAA460:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,360(r21)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r21.u32 + 360);
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// std r7,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r7.u64);
	// lfsx f0,r9,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfd f13,144(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fadds f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// fmuls f9,f10,f1
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// stfsx f9,r9,r22
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r22.u32, temp.u32);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82eaa4a0
	if (ctx.cr6.eq) goto loc_82EAA4A0;
	// rlwinm r11,r19,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r18,r11,r14
	PPC_STORE_U32(ctx.r11.u32 + ctx.r14.u32, ctx.r18.u32);
loc_82EAA4A0:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82eaa460
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82EAA460;
loc_82EAA4AC:
	// addi r11,r23,1
	ctx.r11.s64 = ctx.r23.s64 + 1;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 1;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r7,r9,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r6,r8,r16
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r16.u32);
	// srawi r5,r7,6
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3F) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 6;
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82eaa4d8
	if (ctx.cr6.lt) goto loc_82EAA4D8;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
loc_82EAA4D8:
	// addi r11,r19,1
	ctx.r11.s64 = ctx.r19.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82eaa500
	if (ctx.cr6.lt) goto loc_82EAA500;
loc_82EAA4F0:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82eaa4f0
	if (!ctx.cr6.lt) goto loc_82EAA4F0;
loc_82EAA500:
	// lwz r5,404(r15)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r15.u32 + 404);
	// cmpw cr6,r31,r5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82eaa2a8
	if (ctx.cr6.lt) goto loc_82EAA2A8;
loc_82EAA50C:
	// lwz r5,268(r15)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r15.u32 + 268);
	// cmpw cr6,r31,r5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x82eaa9b4
	if (!ctx.cr6.lt) goto loc_82EAA9B4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// subf r24,r25,r24
	ctx.r24.s64 = ctx.r24.s64 - ctx.r25.s64;
	// addi r27,r11,28216
	ctx.r27.s64 = ctx.r11.s64 + 28216;
	// addi r26,r10,27928
	ctx.r26.s64 = ctx.r10.s64 + 27928;
loc_82EAA52C:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lbzx r10,r11,r19
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r19.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82eaa740
	if (!ctx.cr6.eq) goto loc_82EAA740;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r10,r19,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r28,r11,4
	ctx.r28.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// blt cr6,0x82eaa560
	if (ctx.cr6.lt) goto loc_82EAA560;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
loc_82EAA560:
	// lwz r11,428(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 428);
	// stwx r18,r10,r14
	PPC_STORE_U32(ctx.r10.u32 + ctx.r14.u32, ctx.r18.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82eaa734
	if (!ctx.cr6.eq) goto loc_82EAA734;
	// lwzx r3,r24,r25
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r25.u32);
	// bl 0x82c77a88
	ctx.lr = 0x82EAA578;
	sub_82C77A88(ctx, base);
	// lfs f0,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// bge cr6,0x82eaa738
	if (!ctx.cr6.lt) goto loc_82EAA738;
	// ld r29,168(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// rlwinm r11,r23,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
loc_82EAA590:
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// subf. r11,r9,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt 0x82eaa5e4
	if (ctx.cr0.gt) goto loc_82EAA5E4;
	// cmpwi cr6,r11,-72
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -72, ctx.xer);
	// bge cr6,0x82eaa5b0
	if (!ctx.cr6.lt) goto loc_82EAA5B0;
	// li r11,-71
	ctx.r11.s64 = -71;
loc_82EAA5B0:
	// neg r10,r11
	ctx.r10.s64 = -ctx.r11.s64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r8,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 2;
	// subf r7,r9,r26
	ctx.r7.s64 = ctx.r26.s64 - ctx.r9.s64;
	// slw r6,r18,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r18.u32 << (ctx.r8.u8 & 0x3F));
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// lfs f0,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// std r5,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r5.u64);
	// lfd f12,144(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fdivs f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// b 0x82eaa61c
	goto loc_82EAA61C;
loc_82EAA5E4:
	// cmpwi cr6,r11,62
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 62, ctx.xer);
	// blt cr6,0x82eaa5f0
	if (ctx.cr6.lt) goto loc_82EAA5F0;
	// li r11,62
	ctx.r11.s64 = 62;
loc_82EAA5F0:
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r9,r18,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r18.u32 << (ctx.r10.u8 & 0x3F));
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// add r7,r11,r27
	ctx.r7.u64 = ctx.r11.u64 + ctx.r27.u64;
	// std r8,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r8.u64);
	// lfd f12,136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// lfs f0,-4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
loc_82EAA61C:
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// fmuls f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// rldicr r8,r11,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ea9568
	ctx.lr = 0x82EAA640;
	sub_82EA9568(ctx, base);
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x82eaa6f0
	if (!ctx.cr6.lt) goto loc_82EAA6F0;
	// subf r11,r31,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r31.s64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x82eaa6c0
	if (ctx.cr6.lt) goto loc_82EAA6C0;
	// addi r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 2;
	// lwz r9,360(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 360);
	// subfic r7,r22,4
	ctx.xer.ca = ctx.r22.u32 <= 4;
	ctx.r7.s64 = 4 - ctx.r22.s64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r3,-3
	ctx.r6.s64 = ctx.r3.s64 + -3;
	// subfic r5,r22,-8
	ctx.xer.ca = ctx.r22.u32 <= 4294967288;
	ctx.r5.s64 = -8 - ctx.r22.s64;
	// add r11,r10,r22
	ctx.r11.u64 = ctx.r10.u64 + ctx.r22.u64;
loc_82EAA670:
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r31,r6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r6.s32, ctx.xer);
	// lfs f12,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,-8(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// lfs f10,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f9,-4(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfsx f8,r9,r10
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f8.f64 = double(temp.f32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f7,0(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsx f6,r4,r7
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f5,4(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// blt cr6,0x82eaa670
	if (ctx.cr6.lt) goto loc_82EAA670;
loc_82EAA6C0:
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x82eaa6f0
	if (!ctx.cr6.lt) goto loc_82EAA6F0;
	// subf r10,r31,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r31.s64;
	// lwz r9,360(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 360);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r10,r31
	ctx.r31.u64 = ctx.r10.u64 + ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82EAA6DC:
	// lfsx f12,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfsx f11,r11,r22
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r22.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82eaa6dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82EAA6DC;
loc_82EAA6F0:
	// lwz r23,80(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r23,1
	ctx.r9.s64 = ctx.r23.s64 + 1;
	// slw r8,r11,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r6,r8,6
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3F) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 6;
	// lwzx r5,r7,r16
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r16.u32);
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82eaa720
	if (ctx.cr6.lt) goto loc_82EAA720;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
loc_82EAA720:
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// rlwinm r11,r23,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x82eaa590
	if (ctx.cr6.lt) goto loc_82EAA590;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// b 0x82eaa95c
	goto loc_82EAA95C;
loc_82EAA734:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82EAA738:
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// b 0x82eaa95c
	goto loc_82EAA95C;
loc_82EAA740:
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ld r7,168(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// rldicr r8,r11,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ea9568
	ctx.lr = 0x82EAA75C;
	sub_82EA9568(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r29,r19,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// add r11,r29,r10
	ctx.r11.u64 = ctx.r29.u64 + ctx.r10.u64;
	// addi r28,r11,4
	ctx.r28.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82eaa780
	if (!ctx.cr6.gt) goto loc_82EAA780;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82EAA780:
	// lwz r23,80(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// bl 0x82c7d9d8
	ctx.lr = 0x82EAA794;
	sub_82C7D9D8(ctx, base);
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x82eaa95c
	if (!ctx.cr6.lt) goto loc_82EAA95C;
	// subf r11,r31,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x82eaa8ec
	if (ctx.cr6.lt) goto loc_82EAA8EC;
	// addi r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 2;
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r8,r20,2
	ctx.r8.s64 = ctx.r20.s64 + 2;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r4,r22,4
	ctx.xer.ca = ctx.r22.u32 <= 4;
	ctx.r4.s64 = 4 - ctx.r22.s64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// addi r6,r30,-3
	ctx.r6.s64 = ctx.r30.s64 + -3;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r22
	ctx.r10.u64 = ctx.r10.u64 + ctx.r22.u64;
	// subfic r5,r22,-8
	ctx.xer.ca = ctx.r22.u32 <= 4294967288;
	ctx.r5.s64 = -8 - ctx.r22.s64;
loc_82EAA7D4:
	// lwz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// add r9,r10,r5
	ctx.r9.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lwz r3,360(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 360);
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// std r8,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r8.u64);
	// lfsx f0,r9,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfd f13,128(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fadds f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// fmuls f9,f10,f1
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// stfs f9,-8(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + -8, temp.u32);
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82eaa814
	if (ctx.cr6.eq) goto loc_82EAA814;
	// stwx r18,r29,r14
	PPC_STORE_U32(ctx.r29.u32 + ctx.r14.u32, ctx.r18.u32);
loc_82EAA814:
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r8,360(r21)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r21.u32 + 360);
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// std r3,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r3.u64);
	// lfd f13,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lfs f0,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// fmuls f9,f10,f1
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// stfs f9,-4(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// lwz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82eaa854
	if (ctx.cr6.eq) goto loc_82EAA854;
	// stwx r18,r29,r14
	PPC_STORE_U32(ctx.r29.u32 + ctx.r14.u32, ctx.r18.u32);
loc_82EAA854:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,360(r21)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r21.u32 + 360);
	// extsw r3,r9
	ctx.r3.s64 = ctx.r9.s32;
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfsx f11,r7,r8
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fmuls f9,f10,f1
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// stfs f9,0(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82eaa890
	if (ctx.cr6.eq) goto loc_82EAA890;
	// stwx r18,r29,r14
	PPC_STORE_U32(ctx.r29.u32 + ctx.r14.u32, ctx.r18.u32);
loc_82EAA890:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lwz r3,360(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 360);
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r9,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r9.u64);
	// lfsx f0,r8,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfd f13,152(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fadds f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// fmuls f9,f10,f1
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// stfs f9,4(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82eaa8d0
	if (ctx.cr6.eq) goto loc_82EAA8D0;
	// stwx r18,r29,r14
	PPC_STORE_U32(ctx.r29.u32 + ctx.r14.u32, ctx.r18.u32);
loc_82EAA8D0:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r20,r20,4
	ctx.r20.s64 = ctx.r20.s64 + 4;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmpw cr6,r31,r6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82eaa7d4
	if (ctx.cr6.lt) goto loc_82EAA7D4;
loc_82EAA8EC:
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x82eaa95c
	if (!ctx.cr6.lt) goto loc_82EAA95C;
	// subf r11,r31,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r10,r20,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r20,r11,r20
	ctx.r20.u64 = ctx.r11.u64 + ctx.r20.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82EAA914:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,360(r21)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r21.u32 + 360);
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// std r7,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r7.u64);
	// lfsx f11,r9,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfd f0,160(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fadds f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fmuls f9,f10,f1
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// stfsx f9,r9,r22
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r22.u32, temp.u32);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82eaa950
	if (ctx.cr6.eq) goto loc_82EAA950;
	// stwx r18,r29,r14
	PPC_STORE_U32(ctx.r29.u32 + ctx.r14.u32, ctx.r18.u32);
loc_82EAA950:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82eaa914
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82EAA914;
loc_82EAA95C:
	// addi r11,r23,1
	ctx.r11.s64 = ctx.r23.s64 + 1;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 1;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r7,r9,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r6,r8,r16
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r16.u32);
	// srawi r5,r7,6
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3F) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 6;
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82eaa988
	if (ctx.cr6.lt) goto loc_82EAA988;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
loc_82EAA988:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82eaa9a8
	if (ctx.cr6.lt) goto loc_82EAA9A8;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82EAA998:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82eaa998
	if (!ctx.cr6.lt) goto loc_82EAA998;
loc_82EAA9A8:
	// lwz r5,268(r15)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r15.u32 + 268);
	// cmpw cr6,r31,r5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82eaa52c
	if (ctx.cr6.lt) goto loc_82EAA52C;
loc_82EAA9B4:
	// lhz r11,118(r17)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r17.u32 + 118);
	// extsh r30,r11
	ctx.r30.s64 = ctx.r11.s16;
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x82eaaab8
	if (!ctx.cr6.lt) goto loc_82EAAAB8;
	// rlwinm r11,r23,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r8,r5,-1
	ctx.r8.s64 = ctx.r5.s64 + -1;
	// add r10,r11,r16
	ctx.r10.u64 = ctx.r11.u64 + ctx.r16.u64;
	// slw r7,r8,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r6,r11,r16
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r16.u32);
	// srawi r11,r7,6
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 6;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82eaa9f8
	if (!ctx.cr6.lt) goto loc_82EAA9F8;
loc_82EAA9E8:
	// lwzu r9,-4(r10)
	ea = -4 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r23,r23,-1
	ctx.r23.s64 = ctx.r23.s64 + -1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82eaa9e8
	if (ctx.cr6.lt) goto loc_82EAA9E8;
loc_82EAA9F8:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82c7d9d8
	ctx.lr = 0x82EAAA08;
	sub_82C7D9D8(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// subf r10,r31,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r31.s64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// lfs f0,30064(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30064);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// blt cr6,0x82eaaa8c
	if (ctx.cr6.lt) goto loc_82EAAA8C;
	// addi r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 2;
	// lwz r9,360(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 360);
	// subfic r7,r22,4
	ctx.xer.ca = ctx.r22.u32 <= 4;
	ctx.r7.s64 = 4 - ctx.r22.s64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r30,-3
	ctx.r6.s64 = ctx.r30.s64 + -3;
	// subfic r5,r22,-8
	ctx.xer.ca = ctx.r22.u32 <= 4294967288;
	ctx.r5.s64 = -8 - ctx.r22.s64;
	// add r11,r10,r22
	ctx.r11.u64 = ctx.r10.u64 + ctx.r22.u64;
loc_82EAAA3C:
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r31,r6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r6.s32, ctx.xer);
	// lfs f13,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,-8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// lfs f11,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,-4(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfsx f9,r10,r9
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f9.f64 = double(temp.f32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,0(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsx f7,r4,r7
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,4(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// blt cr6,0x82eaaa3c
	if (ctx.cr6.lt) goto loc_82EAAA3C;
loc_82EAAA8C:
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x82eaaab8
	if (!ctx.cr6.lt) goto loc_82EAAAB8;
	// subf r9,r31,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r31.s64;
	// lwz r10,360(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 360);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82EAAAA4:
	// lfsx f13,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsx f12,r11,r22
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r22.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82eaaaa4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82EAAAA4;
loc_82EAAAB8:
	// lwz r11,304(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 304);
	// addic. r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x82eaab14
	if (ctx.cr0.lt) goto loc_82EAAB14;
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,268(r15)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r15.u32 + 268);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_82EAAAD4:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82eaaaec
	if (ctx.cr6.lt) goto loc_82EAAAEC;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82eaab0c
	if (ctx.cr6.lt) goto loc_82EAAB0C;
loc_82EAAAEC:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bge 0x82eaaad4
	if (!ctx.cr0.lt) goto loc_82EAAAD4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82fa8d70
	ctx.lr = 0x82EAAB08;
	__restfpr_27(ctx, base);
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
loc_82EAAB0C:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r18,r11,r14
	PPC_STORE_U32(ctx.r11.u32 + ctx.r14.u32, ctx.r18.u32);
loc_82EAAB14:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82fa8d70
	ctx.lr = 0x82EAAB24;
	__restfpr_27(ctx, base);
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAAB28"))) PPC_WEAK_FUNC(sub_82EAAB28);
PPC_FUNC_IMPL(__imp__sub_82EAAB28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7654
	ctx.lr = 0x82EAAB30;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r20,184(r4)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 184);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// ori r9,r10,2284
	ctx.r9.u64 = ctx.r10.u64 | 2284;
	// lwz r31,196(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 196);
	// lwz r21,200(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + 200);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r19,204(r4)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r4.u32 + 204);
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r8,60(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwzx r26,r3,r9
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// bgt cr6,0x82eaaccc
	if (ctx.cr6.gt) goto loc_82EAACCC;
	// lwz r11,-4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + -4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82eaaccc
	if (!ctx.cr6.gt) goto loc_82EAACCC;
	// addis r22,r3,1
	ctx.r22.s64 = ctx.r3.s64 + 65536;
	// addi r24,r20,4
	ctx.r24.s64 = ctx.r20.s64 + 4;
	// addi r22,r22,2032
	ctx.r22.s64 = ctx.r22.s64 + 2032;
loc_82EAAB84:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r29,-4(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + -4);
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// clrlwi r30,r11,1
	ctx.r30.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// rlwinm r28,r10,1,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82eaabc8
	if (!ctx.cr6.eq) goto loc_82EAABC8;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82eaabbc
	if (ctx.cr6.eq) goto loc_82EAABBC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82ea6768
	ctx.lr = 0x82EAABBC;
	sub_82EA6768(ctx, base);
loc_82EAABBC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// b 0x82eaacb8
	goto loc_82EAACB8;
loc_82EAABC8:
	// cmpw cr6,r30,r19
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r19.s32, ctx.xer);
	// bgt cr6,0x82eaac44
	if (ctx.cr6.gt) goto loc_82EAAC44;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// addi r10,r30,2
	ctx.r10.s64 = ctx.r30.s64 + 2;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r7,r9,r21
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r21.u32);
	// lhzx r6,r8,r21
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r21.u32);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// subf r4,r11,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r11.s64;
	// cmpw cr6,r29,r4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x82eaac44
	if (!ctx.cr6.lt) goto loc_82EAAC44;
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82eaac34
	if (ctx.cr6.eq) goto loc_82EAAC34;
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82ea6768
	ctx.lr = 0x82EAAC24;
	sub_82EA6768(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82ea6768
	ctx.lr = 0x82EAAC34;
	sub_82EA6768(ctx, base);
loc_82EAAC34:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r10,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// b 0x82eaacb0
	goto loc_82EAACB0;
loc_82EAAC44:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82eaac98
	if (ctx.cr6.eq) goto loc_82EAAC98;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82ea6768
	ctx.lr = 0x82EAAC60;
	sub_82EA6768(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,52(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// bl 0x82ea6768
	ctx.lr = 0x82EAAC74;
	sub_82EA6768(ctx, base);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,248(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 248);
	// bl 0x82ea6768
	ctx.lr = 0x82EAAC88;
	sub_82EA6768(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82ea6768
	ctx.lr = 0x82EAAC98;
	sub_82EA6768(ctx, base);
loc_82EAAC98:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,248(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82EAACB0:
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
loc_82EAACB8:
	// lwz r11,-4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + -4);
	// addi r23,r23,2
	ctx.r23.s64 = ctx.r23.s64 + 2;
	// addi r24,r24,8
	ctx.r24.s64 = ctx.r24.s64 + 8;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82eaab84
	if (ctx.cr6.lt) goto loc_82EAAB84;
loc_82EAACCC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76a4
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAACD8"))) PPC_WEAK_FUNC(sub_82EAACD8);
PPC_FUNC_IMPL(__imp__sub_82EAACD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa764c
	ctx.lr = 0x82EAACE0;
	__savegprlr_17(ctx, base);
	// stfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f30.u64);
	// stfd f31,-136(r1)
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r22,r27,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r26,r11,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r22,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r22.s64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// lwz r9,316(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lfs f30,5184(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f30.f64 = double(temp.f32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// addi r20,r9,-1
	ctx.r20.s64 = ctx.r9.s64 + -1;
	// bl 0x82fa77c0
	ctx.lr = 0x82EAAD40;
	sub_82FA77C0(ctx, base);
	// subf r11,r22,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r22.s64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r22,r11,4
	ctx.r22.s64 = ctx.r11.s64 + 4;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82EAAD58;
	sub_82FA77C0(ctx, base);
	// stfs f30,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x82eaaea8
	if (!ctx.cr6.gt) goto loc_82EAAEA8;
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// addi r21,r27,-1
	ctx.r21.s64 = ctx.r27.s64 + -1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r19,r11,-16
	ctx.r19.s64 = ctx.r11.s64 + -16;
loc_82EAAD78:
	// lfs f12,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmr f13,f30
	ctx.f13.f64 = ctx.f30.f64;
	// fmuls f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// cmpwi cr6,r21,2
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 2, ctx.xer);
	// blt cr6,0x82eaae38
	if (ctx.cr6.lt) goto loc_82EAAE38;
	// addi r10,r21,-2
	ctx.r10.s64 = ctx.r21.s64 + -2;
	// subf r8,r21,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r21.s64;
	// rlwinm r9,r10,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r10,r21,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r7,r8,-1
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// add r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r6,r10,r29
	ctx.r6.u64 = ctx.r10.u64 + ctx.r29.u64;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r17,r9,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// rlwinm r18,r21,2,0,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r10,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r10.s64;
	// addi r7,r8,8
	ctx.r7.s64 = ctx.r8.s64 + 8;
	// addi r9,r6,-4
	ctx.r9.s64 = ctx.r6.s64 + -4;
	// add r8,r5,r28
	ctx.r8.u64 = ctx.r5.u64 + ctx.r28.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// subf r6,r18,r31
	ctx.r6.s64 = ctx.r31.s64 - ctx.r18.s64;
	// subf r5,r29,r30
	ctx.r5.s64 = ctx.r30.s64 - ctx.r29.s64;
	// subf r11,r17,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r17.s64;
loc_82EAADE8:
	// lfs f8,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfsu f12,-8(r7)
	ea = -8 + ctx.r7.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r7.u32 = ea;
	ctx.f12.f64 = double(temp.f32);
	// lfs f7,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f8,f7
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// stfs f6,4(r10)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfsx f4,r5,r9
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	ctx.f4.f64 = double(temp.f32);
	// lfsu f11,8(r8)
	ea = 8 + ctx.r8.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	ctx.f11.f64 = double(temp.f32);
	// lfs f3,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f3
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f3.f64));
	// fmsubs f9,f9,f12,f5
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 - ctx.f5.f64));
	// lfsu f12,8(r6)
	ea = 8 + ctx.r6.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r6.u32 = ea;
	ctx.f12.f64 = double(temp.f32);
	// fmsubs f8,f4,f11,f1
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f11.f64 - ctx.f1.f64));
	// stfsu f12,8(r10)
	temp.f32 = float(ctx.f12.f64);
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// fadds f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// addi r9,r9,-8
	ctx.r9.s64 = ctx.r9.s64 + -8;
	// fadds f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// bdnz 0x82eaade8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82EAADE8;
loc_82EAAE38:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82eaae74
	if (!ctx.cr6.gt) goto loc_82EAAE74;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r11,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r11.s64;
	// subf r8,r10,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r10.s64;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r10,r29
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r10,r30
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f12,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// lfsx f7,r7,r28
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r28.u32);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,0(r8)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// fmsubs f5,f7,f11,f8
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 - ctx.f8.f64));
	// fadds f10,f5,f10
	ctx.f10.f64 = double(float(ctx.f5.f64 + ctx.f10.f64));
loc_82EAAE74:
	// fadds f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// and r11,r4,r20
	ctx.r11.u64 = ctx.r4.u64 & ctx.r20.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fadds f13,f0,f10
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// stfs f13,-4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// fmadds f31,f13,f13,f31
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f31.f64));
	// bne cr6,0x82eaae9c
	if (!ctx.cr6.eq) goto loc_82EAAE9C;
	// stfsu f31,16(r19)
	temp.f32 = float(ctx.f31.f64);
	ea = 16 + ctx.r19.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r19.u32 = ea;
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
loc_82EAAE9C:
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// cmpw cr6,r4,r25
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x82eaad78
	if (ctx.cr6.lt) goto loc_82EAAD78;
loc_82EAAEA8:
	// subf r11,r27,r25
	ctx.r11.s64 = ctx.r25.s64 - ctx.r27.s64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82EAAEC4;
	sub_82FA77C0(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82EAAED4;
	sub_82FA77C0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x82fa769c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAAEE4"))) PPC_WEAK_FUNC(sub_82EAAEE4);
PPC_FUNC_IMPL(__imp__sub_82EAAEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAAEE8"))) PPC_WEAK_FUNC(sub_82EAAEE8);
PPC_FUNC_IMPL(__imp__sub_82EAAEE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x82EAAEF0;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,388(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// lwz r29,404(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// lwz r30,420(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r28,428(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 428);
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// lwz r27,412(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 412);
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// lwz r8,324(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// lwz r7,316(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// bl 0x82eaacd8
	ctx.lr = 0x82EAAF48;
	sub_82EAACD8(ctx, base);
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r8,340(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r7,332(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r6,276(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82eaacd8
	ctx.lr = 0x82EAAF78;
	sub_82EAACD8(ctx, base);
	// addi r11,r29,8
	ctx.r11.s64 = ctx.r29.s64 + 8;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// lwz r8,356(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r7,348(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r6,292(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,284(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82eaacd8
	ctx.lr = 0x82EAAFA8;
	sub_82EAACD8(ctx, base);
	// lwz r10,30256(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 30256);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82eaafe4
	if (!ctx.cr6.eq) goto loc_82EAAFE4;
	// addi r11,r29,12
	ctx.r11.s64 = ctx.r29.s64 + 12;
	// lwz r8,372(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// lwz r7,364(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r6,308(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,300(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82eaacd8
	ctx.lr = 0x82EAAFE4;
	sub_82EAACD8(ctx, base);
loc_82EAAFE4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAAFEC"))) PPC_WEAK_FUNC(sub_82EAAFEC);
PPC_FUNC_IMPL(__imp__sub_82EAAFEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAAFF0"))) PPC_WEAK_FUNC(sub_82EAAFF0);
PPC_FUNC_IMPL(__imp__sub_82EAAFF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82EAAFF8;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82eab070
	if (!ctx.cr6.eq) goto loc_82EAB070;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82eab1cc
	if (!ctx.cr6.gt) goto loc_82EAB1CC;
	// addi r27,r5,-4
	ctx.r27.s64 = ctx.r5.s64 + -4;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
loc_82EAB024:
	// lwz r11,524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhz r5,110(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 110);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAB040;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfsu f12,4(r27)
	temp.f32 = float(ctx.f12.f64);
	ea = 4 + ctx.r27.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r27.u32 = ea;
	// lhz r11,34(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 34);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bne 0x82eab024
	if (!ctx.cr0.eq) goto loc_82EAB024;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_82EAB070:
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// blt cr6,0x82eab174
	if (ctx.cr6.lt) goto loc_82EAB174;
	// addi r3,r6,-3
	ctx.r3.s64 = ctx.r6.s64 + -3;
	// addi r11,r5,-4
	ctx.r11.s64 = ctx.r5.s64 + -4;
loc_82EAB088:
	// lhz r8,110(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 110);
	// rlwinm r7,r30,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r4,r8,-1
	ctx.r4.s64 = ctx.r8.s64 + -1;
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// slw r8,r10,r4
	ctx.r8.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r4.u8 & 0x3F));
	// extsw r4,r8
	ctx.r4.s64 = ctx.r8.s32;
	// lfsx f0,r7,r29
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r29.u32);
	ctx.f0.f64 = double(temp.f32);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lhz r7,110(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 110);
	// addi r8,r7,-1
	ctx.r8.s64 = ctx.r7.s64 + -1;
	// slw r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
	// lhz r8,34(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 34);
	// extsw r4,r7
	ctx.r4.s64 = ctx.r7.s32;
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// lfd f9,88(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// lfsx f6,r7,r29
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r29.u32);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// stfs f5,8(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lhz r7,110(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 110);
	// addi r4,r7,-1
	ctx.r4.s64 = ctx.r7.s64 + -1;
	// slw r7,r10,r4
	ctx.r7.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r4.u8 & 0x3F));
	// lhz r4,34(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 34);
	// extsw r7,r7
	ctx.r7.s64 = ctx.r7.s32;
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f4,96(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// lfsx f1,r4,r29
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r29.u32);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f2,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f1.f64));
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lhz r7,110(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 110);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// slw r7,r10,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r7.u8 & 0x3F));
	// lhz r4,34(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 34);
	// extsw r7,r7
	ctx.r7.s64 = ctx.r7.s32;
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// std r7,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// lfd f13,104(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lfsx f10,r4,r29
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r29.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// stfsu f9,16(r11)
	temp.f32 = float(ctx.f9.f64);
	ea = 16 + ctx.r11.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// lhz r7,34(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 34);
	// add r30,r7,r8
	ctx.r30.u64 = ctx.r7.u64 + ctx.r8.u64;
	// blt cr6,0x82eab088
	if (ctx.cr6.lt) goto loc_82EAB088;
loc_82EAB174:
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82eab1cc
	if (!ctx.cr6.lt) goto loc_82EAB1CC;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r9,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r9.s64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82EAB190:
	// lhz r9,110(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 110);
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// slw r6,r10,r7
	ctx.r6.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r7.u8 & 0x3F));
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// lfsx f0,r8,r29
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r29.u32);
	ctx.f0.f64 = double(temp.f32);
	// std r5,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r5.u64);
	// lfd f13,104(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfsu f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// lhz r9,34(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 34);
	// add r30,r9,r30
	ctx.r30.u64 = ctx.r9.u64 + ctx.r30.u64;
	// bdnz 0x82eab190
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82EAB190;
loc_82EAB1CC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAB1D4"))) PPC_WEAK_FUNC(sub_82EAB1D4);
PPC_FUNC_IMPL(__imp__sub_82EAB1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAB1D8"))) PPC_WEAK_FUNC(sub_82EAB1D8);
PPC_FUNC_IMPL(__imp__sub_82EAB1D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82eab1ec
	if (!ctx.cr6.eq) goto loc_82EAB1EC;
	// li r5,100
	ctx.r5.s64 = 100;
loc_82EAB1EC:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// ori r6,r10,2476
	ctx.r6.u64 = ctx.r10.u64 | 2476;
	// ori r3,r8,2480
	ctx.r3.u64 = ctx.r8.u64 | 2480;
	// li r7,1
	ctx.r7.s64 = 1;
	// cmplwi cr6,r5,85
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 85, ctx.xer);
	// stwx r4,r11,r6
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r4.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stwx r5,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r5.u32);
	// blt cr6,0x82eab280
	if (ctx.cr6.lt) goto loc_82EAB280;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r8,80(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	// ori r4,r10,44100
	ctx.r4.u64 = ctx.r10.u64 | 44100;
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82eab240
	if (ctx.cr6.lt) goto loc_82EAB240;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lfs f13,48(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,13604(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 13604);
	ctx.f0.f64 = double(temp.f32);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82eab244
	if (ctx.cr6.gt) goto loc_82EAB244;
loc_82EAB240:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_82EAB244:
	// lis r8,1
	ctx.r8.s64 = 65536;
	// ori r4,r8,1948
	ctx.r4.u64 = ctx.r8.u64 | 1948;
	// stwx r10,r11,r4
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r10.u32);
	// lwz r3,60(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82eab26c
	if (!ctx.cr6.eq) goto loc_82EAB26C;
	// lwz r10,30160(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30160);
	// cmpwi cr6,r10,40
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 40, ctx.xer);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// ble cr6,0x82eab270
	if (!ctx.cr6.gt) goto loc_82EAB270;
loc_82EAB26C:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_82EAB270:
	// lis r8,1
	ctx.r8.s64 = 65536;
	// ori r4,r8,1964
	ctx.r4.u64 = ctx.r8.u64 | 1964;
	// stwx r10,r11,r4
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r10.u32);
	// b 0x82eab298
	goto loc_82EAB298;
loc_82EAB280:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// ori r4,r10,1948
	ctx.r4.u64 = ctx.r10.u64 | 1948;
	// ori r3,r8,1964
	ctx.r3.u64 = ctx.r8.u64 | 1964;
	// stwx r6,r11,r4
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r6.u32);
	// stwx r6,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r6.u32);
loc_82EAB298:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// cmplwi cr6,r5,100
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 100, ctx.xer);
	// ori r4,r10,1968
	ctx.r4.u64 = ctx.r10.u64 | 1968;
	// blt cr6,0x82eab2fc
	if (ctx.cr6.lt) goto loc_82EAB2FC;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// stwx r7,r11,r4
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r7.u32);
	// lfs f0,48(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,13600(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 13600);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82eab2c8
	if (!ctx.cr6.gt) goto loc_82EAB2C8;
	// li r8,8
	ctx.r8.s64 = 8;
	// b 0x82eab2e0
	goto loc_82EAB2E0;
loc_82EAB2C8:
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,16
	ctx.r8.s64 = 16;
	// lfs f13,13584(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 13584);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82eab2e0
	if (ctx.cr6.gt) goto loc_82EAB2E0;
	// li r8,32
	ctx.r8.s64 = 32;
loc_82EAB2E0:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r4,r10,1972
	ctx.r4.u64 = ctx.r10.u64 | 1972;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// stwx r8,r11,r4
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r8.u32);
	// ori r8,r10,1984
	ctx.r8.u64 = ctx.r10.u64 | 1984;
	// stwx r6,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r6.u32);
	// b 0x82eab30c
	goto loc_82EAB30C;
loc_82EAB2FC:
	// lis r8,1
	ctx.r8.s64 = 65536;
	// stwx r6,r11,r4
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r6.u32);
	// ori r3,r8,1984
	ctx.r3.u64 = ctx.r8.u64 | 1984;
	// stwx r7,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r7.u32);
loc_82EAB30C:
	// cmplwi cr6,r5,100
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 100, ctx.xer);
	// blt cr6,0x82eab388
	if (ctx.cr6.lt) goto loc_82EAB388;
loc_82EAB314:
	// lis r10,1
	ctx.r10.s64 = 65536;
loc_82EAB318:
	// ori r8,r10,2388
	ctx.r8.u64 = ctx.r10.u64 | 2388;
	// stwx r7,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r7.u32);
	// lwz r5,60(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// ble cr6,0x82eab35c
	if (!ctx.cr6.gt) goto loc_82EAB35C;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r8,r10,1960
	ctx.r8.u64 = ctx.r10.u64 | 1960;
	// lwzx r5,r11,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82eab35c
	if (!ctx.cr6.eq) goto loc_82EAB35C;
	// lhz r10,34(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 34);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x82eab35c
	if (ctx.cr6.eq) goto loc_82EAB35C;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,2312
	ctx.r9.u64 = ctx.r10.u64 | 2312;
	// stwx r6,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r6.u32);
	// b 0x82eab368
	goto loc_82EAB368;
loc_82EAB35C:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,2312
	ctx.r9.u64 = ctx.r10.u64 | 2312;
	// stwx r7,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r7.u32);
loc_82EAB368:
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r7,r9,1856
	ctx.r7.u64 = ctx.r9.u64 | 1856;
	// ori r8,r10,1980
	ctx.r8.u64 = ctx.r10.u64 | 1980;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r6,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r6.u32);
	// stwx r6,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r6.u32);
	// blr 
	return;
loc_82EAB388:
	// cmplwi cr6,r5,85
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 85, ctx.xer);
	// bge cr6,0x82eab314
	if (!ctx.cr6.lt) goto loc_82EAB314;
	// cmplwi cr6,r5,70
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 70, ctx.xer);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// bge cr6,0x82eab318
	if (!ctx.cr6.lt) goto loc_82EAB318;
	// cmplwi cr6,r5,65
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 65, ctx.xer);
	// ori r8,r10,2496
	ctx.r8.u64 = ctx.r10.u64 | 2496;
	// blt cr6,0x82eab434
	if (ctx.cr6.lt) goto loc_82EAB434;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82eab434
	if (!ctx.cr6.eq) goto loc_82EAB434;
	// lwzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82eab434
	if (!ctx.cr6.eq) goto loc_82EAB434;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r8,r10,2388
	ctx.r8.u64 = ctx.r10.u64 | 2388;
	// stwx r7,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r7.u32);
	// lwz r5,60(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// ble cr6,0x82eab408
	if (!ctx.cr6.gt) goto loc_82EAB408;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r8,r10,1960
	ctx.r8.u64 = ctx.r10.u64 | 1960;
	// lwzx r5,r11,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82eab408
	if (!ctx.cr6.eq) goto loc_82EAB408;
	// lhz r10,34(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 34);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x82eab408
	if (ctx.cr6.eq) goto loc_82EAB408;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,2312
	ctx.r9.u64 = ctx.r10.u64 | 2312;
	// stwx r6,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r6.u32);
	// b 0x82eab414
	goto loc_82EAB414;
loc_82EAB408:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,2312
	ctx.r9.u64 = ctx.r10.u64 | 2312;
	// stwx r7,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r7.u32);
loc_82EAB414:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r8,r10,1856
	ctx.r8.u64 = ctx.r10.u64 | 1856;
	// ori r5,r9,1980
	ctx.r5.u64 = ctx.r9.u64 | 1980;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r7,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r7.u32);
	// stwx r6,r11,r5
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r6.u32);
	// blr 
	return;
loc_82EAB434:
	// cmplwi cr6,r5,55
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 55, ctx.xer);
	// blt cr6,0x82eab4f0
	if (ctx.cr6.lt) goto loc_82EAB4F0;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// ori r4,r5,2388
	ctx.r4.u64 = ctx.r5.u64 | 2388;
	// addic r3,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// subfe r5,r3,r10
	temp.u8 = (~ctx.r3.u32 + ctx.r10.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r3.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stwx r5,r11,r4
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r5.u32);
	// lwz r4,60(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// ble cr6,0x82eab490
	if (!ctx.cr6.gt) goto loc_82EAB490;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// ori r4,r5,1960
	ctx.r4.u64 = ctx.r5.u64 | 1960;
	// lwzx r3,r11,r4
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82eab490
	if (!ctx.cr6.eq) goto loc_82EAB490;
	// lhz r9,34(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 34);
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// beq cr6,0x82eab490
	if (ctx.cr6.eq) goto loc_82EAB490;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r5,r9,2312
	ctx.r5.u64 = ctx.r9.u64 | 2312;
	// stwx r6,r11,r5
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r6.u32);
	// b 0x82eab49c
	goto loc_82EAB49C;
loc_82EAB490:
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r5,r9,2312
	ctx.r5.u64 = ctx.r9.u64 | 2312;
	// stwx r7,r11,r5
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r7.u32);
loc_82EAB49C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82eab4c0
	if (!ctx.cr6.eq) goto loc_82EAB4C0;
	// lwzx r9,r11,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82eab4c0
	if (!ctx.cr6.eq) goto loc_82EAB4C0;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r8,r9,1856
	ctx.r8.u64 = ctx.r9.u64 | 1856;
	// stwx r7,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r7.u32);
	// b 0x82eab4cc
	goto loc_82EAB4CC;
loc_82EAB4C0:
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r8,r9,1856
	ctx.r8.u64 = ctx.r9.u64 | 1856;
	// stwx r6,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r6.u32);
loc_82EAB4CC:
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// li r7,2
	ctx.r7.s64 = 2;
	// subfe r6,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// ori r5,r8,1980
	ctx.r5.u64 = ctx.r8.u64 | 1980;
	// and r4,r6,r7
	ctx.r4.u64 = ctx.r6.u64 & ctx.r7.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r4,r11,r5
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r4.u32);
	// blr 
	return;
loc_82EAB4F0:
	// cmplwi cr6,r5,50
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 50, ctx.xer);
	// blt cr6,0x82eab5ac
	if (ctx.cr6.lt) goto loc_82EAB5AC;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// ori r4,r5,2388
	ctx.r4.u64 = ctx.r5.u64 | 2388;
	// addic r3,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// subfe r5,r3,r10
	temp.u8 = (~ctx.r3.u32 + ctx.r10.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r3.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stwx r5,r11,r4
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r5.u32);
	// lwz r4,60(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// ble cr6,0x82eab54c
	if (!ctx.cr6.gt) goto loc_82EAB54C;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// ori r4,r5,1960
	ctx.r4.u64 = ctx.r5.u64 | 1960;
	// lwzx r3,r11,r4
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82eab54c
	if (!ctx.cr6.eq) goto loc_82EAB54C;
	// lhz r9,34(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 34);
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// beq cr6,0x82eab54c
	if (ctx.cr6.eq) goto loc_82EAB54C;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r5,r9,2312
	ctx.r5.u64 = ctx.r9.u64 | 2312;
	// stwx r6,r11,r5
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r6.u32);
	// b 0x82eab558
	goto loc_82EAB558;
loc_82EAB54C:
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r5,r9,2312
	ctx.r5.u64 = ctx.r9.u64 | 2312;
	// stwx r7,r11,r5
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r7.u32);
loc_82EAB558:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82eab58c
	if (!ctx.cr6.eq) goto loc_82EAB58C;
	// lwzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82eab58c
	if (!ctx.cr6.eq) goto loc_82EAB58C;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r9,r10,1856
	ctx.r9.u64 = ctx.r10.u64 | 1856;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// stwx r7,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r7.u32);
	// ori r9,r10,1980
	ctx.r9.u64 = ctx.r10.u64 | 1980;
	// stwx r7,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r7.u32);
	// blr 
	return;
loc_82EAB58C:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r9,r10,1856
	ctx.r9.u64 = ctx.r10.u64 | 1856;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// stwx r6,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r6.u32);
	// ori r9,r10,1980
	ctx.r9.u64 = ctx.r10.u64 | 1980;
	// stwx r7,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r7.u32);
	// blr 
	return;
loc_82EAB5AC:
	// cmplwi cr6,r5,35
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 35, ctx.xer);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// blt cr6,0x82eab5fc
	if (ctx.cr6.lt) goto loc_82EAB5FC;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// ori r3,r9,2388
	ctx.r3.u64 = ctx.r9.u64 | 2388;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// ori r9,r8,2312
	ctx.r9.u64 = ctx.r8.u64 | 2312;
	// addic r8,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// ori r5,r5,1980
	ctx.r5.u64 = ctx.r5.u64 | 1980;
	// ori r4,r4,1856
	ctx.r4.u64 = ctx.r4.u64 | 1856;
	// subfe r10,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// li r8,3
	ctx.r8.s64 = 3;
	// stwx r10,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r8,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u32);
	// stwx r7,r11,r5
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r7.u32);
	// stwx r6,r11,r4
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r6.u32);
	// blr 
	return;
loc_82EAB5FC:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r10,2388
	ctx.r4.u64 = ctx.r10.u64 | 2388;
	// ori r10,r9,2312
	ctx.r10.u64 = ctx.r9.u64 | 2312;
	// ori r9,r8,1980
	ctx.r9.u64 = ctx.r8.u64 | 1980;
	// ori r8,r5,1856
	ctx.r8.u64 = ctx.r5.u64 | 1856;
	// li r5,5
	ctx.r5.s64 = 5;
	// stwx r6,r11,r4
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r6.u32);
	// stwx r5,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r5.u32);
	// stwx r7,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r7.u32);
	// stwx r6,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAB62C"))) PPC_WEAK_FUNC(sub_82EAB62C);
PPC_FUNC_IMPL(__imp__sub_82EAB62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAB630"))) PPC_WEAK_FUNC(sub_82EAB630);
PPC_FUNC_IMPL(__imp__sub_82EAB630) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lhz r11,34(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 34);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r5,-68
	ctx.r11.s64 = ctx.r5.s64 + -68;
	// addi r10,r4,-68
	ctx.r10.s64 = ctx.r4.s64 + -68;
loc_82EAB64C:
	// lwz r7,296(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// extsh r9,r6
	ctx.r9.s64 = ctx.r6.s16;
	// stw r7,296(r10)
	PPC_STORE_U32(ctx.r10.u32 + 296, ctx.r7.u32);
	// lfs f0,368(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 368);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,368(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 368, temp.u32);
	// lfs f13,372(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 372);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,372(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 372, temp.u32);
	// lfs f12,376(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 376);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,376(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 376, temp.u32);
	// lfs f11,380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 380);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,380(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 380, temp.u32);
	// lfsu f0,464(r11)
	ea = 464 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f0.f64 = double(temp.f32);
	// stfsu f0,464(r10)
	temp.f32 = float(ctx.f0.f64);
	ea = 464 + ctx.r10.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// lhz r4,34(r8)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r8.u32 + 34);
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82eab64c
	if (ctx.cr6.lt) goto loc_82EAB64C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAB694"))) PPC_WEAK_FUNC(sub_82EAB694);
PPC_FUNC_IMPL(__imp__sub_82EAB694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAB698"))) PPC_WEAK_FUNC(sub_82EAB698);
PPC_FUNC_IMPL(__imp__sub_82EAB698) {
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
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addis r5,r3,1
	ctx.r5.s64 = ctx.r3.s64 + 65536;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r5,2340
	ctx.r5.s64 = ctx.r5.s64 + 2340;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// bl 0x82c74bc0
	ctx.lr = 0x82EAB6C8;
	sub_82C74BC0(ctx, base);
	// addis r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 65536;
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r5,r5,2342
	ctx.r5.s64 = ctx.r5.s64 + 2342;
	// bl 0x82c74bc0
	ctx.lr = 0x82EAB6DC;
	sub_82C74BC0(ctx, base);
	// addis r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 65536;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// addi r5,r5,2344
	ctx.r5.s64 = ctx.r5.s64 + 2344;
	// bl 0x82c74bc0
	ctx.lr = 0x82EAB6F0;
	sub_82C74BC0(ctx, base);
	// addis r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 65536;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// addi r5,r5,2346
	ctx.r5.s64 = ctx.r5.s64 + 2346;
	// bl 0x82c74bc0
	ctx.lr = 0x82EAB704;
	sub_82C74BC0(ctx, base);
	// addis r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 65536;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// addi r5,r5,2348
	ctx.r5.s64 = ctx.r5.s64 + 2348;
	// bl 0x82c74bc0
	ctx.lr = 0x82EAB718;
	sub_82C74BC0(ctx, base);
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

__attribute__((alias("__imp__sub_82EAB730"))) PPC_WEAK_FUNC(sub_82EAB730);
PPC_FUNC_IMPL(__imp__sub_82EAB730) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,4200
	ctx.r11.s64 = ctx.r11.s64 + 4200;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82eab778
	if (ctx.cr6.eq) goto loc_82EAB778;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAB774;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_82EAB778:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eab788
	if (ctx.cr6.eq) goto loc_82EAB788;
	// bl 0x82e8ee18
	ctx.lr = 0x82EAB788;
	sub_82E8EE18(ctx, base);
loc_82EAB788:
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82EAB7A4"))) PPC_WEAK_FUNC(sub_82EAB7A4);
PPC_FUNC_IMPL(__imp__sub_82EAB7A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAB7A8"))) PPC_WEAK_FUNC(sub_82EAB7A8);
PPC_FUNC_IMPL(__imp__sub_82EAB7A8) {
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
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_82EAB7BC:
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
	// bne 0x82eab7bc
	if (!ctx.cr0.eq) goto loc_82EAB7BC;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82eab804
	if (!ctx.cr6.eq) goto loc_82EAB804;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAB804;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EAB804:
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

__attribute__((alias("__imp__sub_82EAB81C"))) PPC_WEAK_FUNC(sub_82EAB81C);
PPC_FUNC_IMPL(__imp__sub_82EAB81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAB820"))) PPC_WEAK_FUNC(sub_82EAB820);
PPC_FUNC_IMPL(__imp__sub_82EAB820) {
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
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82eab844
	if (!ctx.cr6.eq) goto loc_82EAB844;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82eab8e0
	goto loc_82EAB8E0;
loc_82EAB844:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r11,21920
	ctx.r10.s64 = ctx.r11.s64 + 21920;
	// stw r31,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r31.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r9,r4,16
	ctx.r9.s64 = ctx.r4.s64 + 16;
loc_82EAB85C:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82eab87c
	if (!ctx.cr0.eq) goto loc_82EAB87C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82eab85c
	if (!ctx.cr6.eq) goto loc_82EAB85C;
loc_82EAB87C:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82eab8c8
	if (ctx.cr0.eq) goto loc_82EAB8C8;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,4652
	ctx.r10.s64 = ctx.r10.s64 + 4652;
	// addi r8,r4,16
	ctx.r8.s64 = ctx.r4.s64 + 16;
loc_82EAB894:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eab8b4
	if (!ctx.cr0.eq) goto loc_82EAB8B4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82eab894
	if (!ctx.cr6.eq) goto loc_82EAB894;
loc_82EAB8B4:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82eab8c8
	if (ctx.cr0.eq) goto loc_82EAB8C8;
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// ori r31,r31,16386
	ctx.r31.u64 = ctx.r31.u64 | 16386;
	// b 0x82eab8dc
	goto loc_82EAB8DC;
loc_82EAB8C8:
	// stw r3,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAB8DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EAB8DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82EAB8E0:
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

__attribute__((alias("__imp__sub_82EAB8F4"))) PPC_WEAK_FUNC(sub_82EAB8F4);
PPC_FUNC_IMPL(__imp__sub_82EAB8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAB8F8"))) PPC_WEAK_FUNC(sub_82EAB8F8);
PPC_FUNC_IMPL(__imp__sub_82EAB8F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eab918
	if (ctx.cr6.eq) goto loc_82EAB918;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_82EAB918:
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14011
	ctx.r3.u64 = ctx.r3.u64 | 14011;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAB924"))) PPC_WEAK_FUNC(sub_82EAB924);
PPC_FUNC_IMPL(__imp__sub_82EAB924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAB928"))) PPC_WEAK_FUNC(sub_82EAB928);
PPC_FUNC_IMPL(__imp__sub_82EAB928) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82eab93c
	if (!ctx.cr6.eq) goto loc_82EAB93C;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16387
	ctx.r3.u64 = ctx.r3.u64 | 16387;
	// blr 
	return;
loc_82EAB93C:
	// ld r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// li r3,0
	ctx.r3.s64 = 0;
	// std r11,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAB94C"))) PPC_WEAK_FUNC(sub_82EAB94C);
PPC_FUNC_IMPL(__imp__sub_82EAB94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAB950"))) PPC_WEAK_FUNC(sub_82EAB950);
PPC_FUNC_IMPL(__imp__sub_82EAB950) {
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
	// beq cr6,0x82eab994
	if (ctx.cr6.eq) goto loc_82EAB994;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAB990;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82eab99c
	goto loc_82EAB99C;
loc_82EAB994:
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14011
	ctx.r3.u64 = ctx.r3.u64 | 14011;
loc_82EAB99C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82eab9a8
	if (ctx.cr6.lt) goto loc_82EAB9A8;
	// std r30,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r30.u64);
loc_82EAB9A8:
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

__attribute__((alias("__imp__sub_82EAB9C0"))) PPC_WEAK_FUNC(sub_82EAB9C0);
PPC_FUNC_IMPL(__imp__sub_82EAB9C0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82eab9d8
	if (ctx.cr6.eq) goto loc_82EAB9D8;
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// li r3,0
	ctx.r3.s64 = 0;
	// std r11,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r11.u64);
	// blr 
	return;
loc_82EAB9D8:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16387
	ctx.r3.u64 = ctx.r3.u64 | 16387;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAB9E4"))) PPC_WEAK_FUNC(sub_82EAB9E4);
PPC_FUNC_IMPL(__imp__sub_82EAB9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAB9E8"))) PPC_WEAK_FUNC(sub_82EAB9E8);
PPC_FUNC_IMPL(__imp__sub_82EAB9E8) {
	PPC_FUNC_PROLOGUE();
	// ld r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// cmpld cr6,r4,r11
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r11.u64, ctx.xer);
	// ble cr6,0x82eaba00
	if (!ctx.cr6.gt) goto loc_82EABA00;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_82EABA00:
	// std r4,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r4.u64);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EABA0C"))) PPC_WEAK_FUNC(sub_82EABA0C);
PPC_FUNC_IMPL(__imp__sub_82EABA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EABA10"))) PPC_WEAK_FUNC(sub_82EABA10);
PPC_FUNC_IMPL(__imp__sub_82EABA10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82EABA18;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82eaba38
	if (!ctx.cr6.eq) goto loc_82EABA38;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16387
	ctx.r3.u64 = ctx.r3.u64 | 16387;
	// b 0x82eabaac
	goto loc_82EABAAC;
loc_82EABA38:
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eaba58
	if (!ctx.cr6.eq) goto loc_82EABA58;
loc_82EABA4C:
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14011
	ctx.r3.u64 = ctx.r3.u64 | 14011;
	// b 0x82eabaac
	goto loc_82EABAAC;
loc_82EABA58:
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EABA74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eabaac
	if (ctx.cr0.lt) goto loc_82EABAAC;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r10,r11
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, ctx.xer);
	// blt cr6,0x82eaba4c
	if (ctx.cr6.lt) goto loc_82EABA4C;
	// ld r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmpld cr6,r9,r11
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r11.u64, ctx.xer);
	// bge cr6,0x82eabaa4
	if (!ctx.cr6.lt) goto loc_82EABAA4;
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// b 0x82eabaac
	goto loc_82EABAAC;
loc_82EABAA4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82EABAAC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EABAB4"))) PPC_WEAK_FUNC(sub_82EABAB4);
PPC_FUNC_IMPL(__imp__sub_82EABAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EABAB8"))) PPC_WEAK_FUNC(sub_82EABAB8);
PPC_FUNC_IMPL(__imp__sub_82EABAB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82EABAC0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82eabae8
	if (!ctx.cr6.eq) goto loc_82EABAE8;
loc_82EABADC:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16387
	ctx.r3.u64 = ctx.r3.u64 | 16387;
	// b 0x82eabc30
	goto loc_82EABC30;
loc_82EABAE8:
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
	// beq cr6,0x82eabc2c
	if (ctx.cr6.eq) goto loc_82EABC2C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82eabadc
	if (ctx.cr6.eq) goto loc_82EABADC;
	// std r27,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r27.u64);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EABB1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eabc30
	if (ctx.cr0.lt) goto loc_82EABC30;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// ble cr6,0x82eabb40
	if (!ctx.cr6.gt) goto loc_82EABB40;
loc_82EABB34:
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14011
	ctx.r3.u64 = ctx.r3.u64 | 14011;
	// b 0x82eabc30
	goto loc_82EABC30;
loc_82EABB40:
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmpld cr6,r9,r10
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r10.u64, ctx.xer);
	// ble cr6,0x82eabb68
	if (!ctx.cr6.gt) goto loc_82EABB68;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// subf. r30,r11,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82eabb68
	if (!ctx.cr0.eq) goto loc_82EABB68;
loc_82EABB60:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// b 0x82eabc18
	goto loc_82EABC18;
loc_82EABB68:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EABB88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82eabb60
	if (!ctx.cr0.lt) goto loc_82EABB60;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EABBA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eabc30
	if (ctx.cr0.lt) goto loc_82EABC30;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eabb34
	if (ctx.cr6.eq) goto loc_82EABB34;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EABBDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82eabb60
	if (!ctx.cr0.lt) goto loc_82EABB60;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// ld r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,96(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EABC10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eabc30
	if (ctx.cr0.lt) goto loc_82EABC30;
loc_82EABC18:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// ld r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// b 0x82eabc30
	goto loc_82EABC30;
loc_82EABC2C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EABC30:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EABC38"))) PPC_WEAK_FUNC(sub_82EABC38);
PPC_FUNC_IMPL(__imp__sub_82EABC38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82EABC40;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82eabc68
	if (!ctx.cr6.eq) goto loc_82EABC68;
loc_82EABC5C:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16387
	ctx.r3.u64 = ctx.r3.u64 | 16387;
	// b 0x82eabd6c
	goto loc_82EABD6C;
loc_82EABC68:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82eabd68
	if (ctx.cr6.eq) goto loc_82EABD68;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82eabc5c
	if (ctx.cr6.eq) goto loc_82EABC5C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EABCA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eabcb0
	if (ctx.cr0.lt) goto loc_82EABCB0;
loc_82EABCA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82eabd3c
	goto loc_82EABD3C;
loc_82EABCB0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EABCC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eabd6c
	if (ctx.cr0.lt) goto loc_82EABD6C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EABCE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eabd6c
	if (ctx.cr0.lt) goto loc_82EABD6C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EABD0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82eabca8
	if (!ctx.cr0.lt) goto loc_82EABCA8;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EABD34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eabd6c
	if (ctx.cr0.lt) goto loc_82EABD6C;
loc_82EABD3C:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ld r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// ld r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpld cr6,r10,r9
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r9.u64, ctx.xer);
	// ble cr6,0x82eabd58
	if (!ctx.cr6.gt) goto loc_82EABD58;
	// std r10,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r10.u64);
loc_82EABD58:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// b 0x82eabd6c
	goto loc_82EABD6C;
loc_82EABD68:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EABD6C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EABD74"))) PPC_WEAK_FUNC(sub_82EABD74);
PPC_FUNC_IMPL(__imp__sub_82EABD74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EABD78"))) PPC_WEAK_FUNC(sub_82EABD78);
PPC_FUNC_IMPL(__imp__sub_82EABD78) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82eabd8c
	if (!ctx.cr6.eq) goto loc_82EABD8C;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16387
	ctx.r3.u64 = ctx.r3.u64 | 16387;
	// blr 
	return;
loc_82EABD8C:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82eabda8
	if (ctx.cr6.eq) goto loc_82EABDA8;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x82eabda8
	if (ctx.cr6.eq) goto loc_82EABDA8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_82EABDA8:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82eabdbc
	if (!ctx.cr6.eq) goto loc_82EABDBC;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x82eabdcc
	goto loc_82EABDCC;
loc_82EABDBC:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x82eabdcc
	if (!ctx.cr6.eq) goto loc_82EABDCC;
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
loc_82EABDCC:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82EABDE0"))) PPC_WEAK_FUNC(sub_82EABDE0);
PPC_FUNC_IMPL(__imp__sub_82EABDE0) {
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
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82eabe18
	if (!ctx.cr6.eq) goto loc_82EABE18;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EABE10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eabe44
	if (ctx.cr0.lt) goto loc_82EABE44;
loc_82EABE18:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eabe30
	if (!ctx.cr6.eq) goto loc_82EABE30;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14011
	ctx.r3.u64 = ctx.r3.u64 | 14011;
	// b 0x82eabe44
	goto loc_82EABE44;
loc_82EABE30:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EABE44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EABE44:
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

__attribute__((alias("__imp__sub_82EABE58"))) PPC_WEAK_FUNC(sub_82EABE58);
PPC_FUNC_IMPL(__imp__sub_82EABE58) {
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
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EABE7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eabeb0
	if (ctx.cr0.lt) goto loc_82EABEB0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eabe9c
	if (!ctx.cr6.eq) goto loc_82EABE9C;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14011
	ctx.r3.u64 = ctx.r3.u64 | 14011;
	// b 0x82eabeb0
	goto loc_82EABEB0;
loc_82EABE9C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EABEB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EABEB0:
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

__attribute__((alias("__imp__sub_82EABEC4"))) PPC_WEAK_FUNC(sub_82EABEC4);
PPC_FUNC_IMPL(__imp__sub_82EABEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EABEC8"))) PPC_WEAK_FUNC(sub_82EABEC8);
PPC_FUNC_IMPL(__imp__sub_82EABEC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82EABED0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82eabef4
	if (!ctx.cr6.eq) goto loc_82EABEF4;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16387
	ctx.r3.u64 = ctx.r3.u64 | 16387;
	// b 0x82eabf60
	goto loc_82EABF60;
loc_82EABEF4:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EABF14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x82eabf5c
	if (ctx.cr0.lt) goto loc_82EABF5C;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r29,r11
	ctx.cr6.compare<uint64_t>(ctx.r29.u64, ctx.r11.u64, ctx.xer);
	// ble cr6,0x82eabf34
	if (!ctx.cr6.gt) goto loc_82EABF34;
	// lis r28,-16371
	ctx.r28.s64 = -1072889856;
	// ori r28,r28,14011
	ctx.r28.u64 = ctx.r28.u64 | 14011;
	// b 0x82eabf5c
	goto loc_82EABF5C;
loc_82EABF34:
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EABF4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r29,16(r30)
	PPC_STORE_U64(ctx.r30.u32 + 16, ctx.r29.u64);
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// std r11,32(r30)
	PPC_STORE_U64(ctx.r30.u32 + 32, ctx.r11.u64);
loc_82EABF5C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82EABF60:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EABF68"))) PPC_WEAK_FUNC(sub_82EABF68);
PPC_FUNC_IMPL(__imp__sub_82EABF68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82EABF70;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eac078
	if (ctx.cr6.eq) goto loc_82EAC078;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eabfc4
	if (!ctx.cr6.eq) goto loc_82EABFC4;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e8edd0
	ctx.lr = 0x82EABFAC;
	sub_82E8EDD0(ctx, base);
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82eabfc4
	if (!ctx.cr0.eq) goto loc_82EABFC4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82eac080
	goto loc_82EAC080;
loc_82EABFC4:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82eabfec
	if (!ctx.cr6.eq) goto loc_82EABFEC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EABFE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eac080
	if (ctx.cr0.lt) goto loc_82EAC080;
loc_82EABFEC:
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// std r28,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r28.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAC00C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eac080
	if (ctx.cr0.lt) goto loc_82EAC080;
	// lwz r30,40(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// ble cr6,0x82eac034
	if (!ctx.cr6.gt) goto loc_82EAC034;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rotlwi r10,r29,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r29.u32, 0);
	// subf r30,r10,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_82EAC034:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,56(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r11,96(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAC060;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eac080
	if (ctx.cr0.lt) goto loc_82EAC080;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// std r29,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r29.u64);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82eac080
	if (ctx.cr6.eq) goto loc_82EAC080;
loc_82EAC078:
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14011
	ctx.r3.u64 = ctx.r3.u64 | 14011;
loc_82EAC080:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAC088"))) PPC_WEAK_FUNC(sub_82EAC088);
PPC_FUNC_IMPL(__imp__sub_82EAC088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82EAC090;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eac0ac
	if (!ctx.cr6.eq) goto loc_82EAC0AC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82eac174
	goto loc_82EAC174;
loc_82EAC0AC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eac0c4
	if (!ctx.cr6.eq) goto loc_82EAC0C4;
loc_82EAC0B8:
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14011
	ctx.r3.u64 = ctx.r3.u64 | 14011;
	// b 0x82eac174
	goto loc_82EAC174;
loc_82EAC0C4:
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// std r29,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r29.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAC0E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eac174
	if (ctx.cr0.lt) goto loc_82EAC174;
	// lwz r30,40(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// ld r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 48);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// cmpld cr6,r10,r9
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r9.u64, ctx.xer);
	// ble cr6,0x82eac110
	if (!ctx.cr6.gt) goto loc_82EAC110;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// subf r30,r10,r9
	ctx.r30.s64 = ctx.r9.s64 - ctx.r10.s64;
loc_82EAC110:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ld r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAC12C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eac174
	if (ctx.cr0.lt) goto loc_82EAC174;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAC158;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eac174
	if (ctx.cr0.lt) goto loc_82EAC174;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82eac0b8
	if (!ctx.cr6.eq) goto loc_82EAC0B8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
loc_82EAC174:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAC17C"))) PPC_WEAK_FUNC(sub_82EAC17C);
PPC_FUNC_IMPL(__imp__sub_82EAC17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAC180"))) PPC_WEAK_FUNC(sub_82EAC180);
PPC_FUNC_IMPL(__imp__sub_82EAC180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82EAC188;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82eac1b0
	if (!ctx.cr6.eq) goto loc_82EAC1B0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16387
	ctx.r3.u64 = ctx.r3.u64 | 16387;
	// b 0x82eac21c
	goto loc_82EAC21C;
loc_82EAC1B0:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82eac218
	if (ctx.cr6.eq) goto loc_82EAC218;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82eac218
	if (ctx.cr6.eq) goto loc_82EAC218;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAC1E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82eac224
	if (ctx.cr0.eq) goto loc_82EAC224;
	// ld r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 48);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// ld r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82EAC214;
	sub_82FA77C0(ctx, base);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
loc_82EAC218:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EAC21C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_82EAC224:
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14015
	ctx.r3.u64 = ctx.r3.u64 | 14015;
	// b 0x82eac21c
	goto loc_82EAC21C;
}

__attribute__((alias("__imp__sub_82EAC230"))) PPC_WEAK_FUNC(sub_82EAC230);
PPC_FUNC_IMPL(__imp__sub_82EAC230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82EAC238;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82eac260
	if (!ctx.cr6.eq) goto loc_82EAC260;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16387
	ctx.r3.u64 = ctx.r3.u64 | 16387;
	// b 0x82eac2d0
	goto loc_82EAC2D0;
loc_82EAC260:
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
	// beq cr6,0x82eac2cc
	if (ctx.cr6.eq) goto loc_82EAC2CC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82eac2cc
	if (ctx.cr6.eq) goto loc_82EAC2CC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAC294;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82eac2d8
	if (ctx.cr0.eq) goto loc_82EAC2D8;
	// ld r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 48);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// ld r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82EAC2C4;
	sub_82FA77C0(ctx, base);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// stw r27,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r27.u32);
loc_82EAC2CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EAC2D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_82EAC2D8:
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14015
	ctx.r3.u64 = ctx.r3.u64 | 14015;
	// b 0x82eac2d0
	goto loc_82EAC2D0;
}

__attribute__((alias("__imp__sub_82EAC2E4"))) PPC_WEAK_FUNC(sub_82EAC2E4);
PPC_FUNC_IMPL(__imp__sub_82EAC2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAC2E8"))) PPC_WEAK_FUNC(sub_82EAC2E8);
PPC_FUNC_IMPL(__imp__sub_82EAC2E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82EAC2F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAC328;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eac390
	if (ctx.cr0.lt) goto loc_82EAC390;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAC348;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eac390
	if (ctx.cr0.lt) goto loc_82EAC390;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAC370;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eac390
	if (ctx.cr0.lt) goto loc_82EAC390;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAC390;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EAC390:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAC398"))) PPC_WEAK_FUNC(sub_82EAC398);
PPC_FUNC_IMPL(__imp__sub_82EAC398) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eac3cc
	if (ctx.cr6.eq) goto loc_82EAC3CC;
	// ld r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 48);
	// cmpld cr6,r4,r11
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r11.u64, ctx.xer);
	// blt cr6,0x82eac3cc
	if (ctx.cr6.lt) goto loc_82EAC3CC;
	// lwz r9,40(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// clrldi r10,r5,32
	ctx.r10.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// cmpld cr6,r10,r11
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_82EAC3CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAC3D4"))) PPC_WEAK_FUNC(sub_82EAC3D4);
PPC_FUNC_IMPL(__imp__sub_82EAC3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAC3D8"))) PPC_WEAK_FUNC(sub_82EAC3D8);
PPC_FUNC_IMPL(__imp__sub_82EAC3D8) {
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
	// bl 0x82eab730
	ctx.lr = 0x82EAC3F8;
	sub_82EAB730(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eac410
	if (ctx.cr0.eq) goto loc_82EAC410;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82eac410
	if (ctx.cr6.eq) goto loc_82EAC410;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8ee18
	ctx.lr = 0x82EAC410;
	sub_82E8EE18(ctx, base);
loc_82EAC410:
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

__attribute__((alias("__imp__sub_82EAC42C"))) PPC_WEAK_FUNC(sub_82EAC42C);
PPC_FUNC_IMPL(__imp__sub_82EAC42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAC430"))) PPC_WEAK_FUNC(sub_82EAC430);
PPC_FUNC_IMPL(__imp__sub_82EAC430) {
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
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r9,4200
	ctx.r9.s64 = ctx.r9.s64 + 4200;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r8,1000
	ctx.r8.s64 = 1000;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// stw r8,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r8.u32);
	// std r7,48(r3)
	PPC_STORE_U64(ctx.r3.u32 + 48, ctx.r7.u64);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r10,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r10.u32);
	// bl 0x82eabec8
	ctx.lr = 0x82EAC490;
	sub_82EABEC8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82eac49c
	if (ctx.cr6.eq) goto loc_82EAC49C;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
loc_82EAC49C:
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

__attribute__((alias("__imp__sub_82EAC4B8"))) PPC_WEAK_FUNC(sub_82EAC4B8);
PPC_FUNC_IMPL(__imp__sub_82EAC4B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82EAC4C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eac568
	if (ctx.cr6.eq) goto loc_82EAC568;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82eac568
	if (ctx.cr6.eq) goto loc_82EAC568;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r27,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r27.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,64
	ctx.r3.s64 = 64;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// bl 0x82e8edd0
	ctx.lr = 0x82EAC508;
	sub_82E8EDD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eac528
	if (ctx.cr0.eq) goto loc_82EAC528;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82eac430
	ctx.lr = 0x82EAC520;
	sub_82EAC430(ctx, base);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82eac52c
	goto loc_82EAC52C;
loc_82EAC528:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82EAC52C:
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82eac544
	if (!ctx.cr6.eq) goto loc_82EAC544;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82eac570
	goto loc_82EAC570;
loc_82EAC544:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bge cr6,0x82eac560
	if (!ctx.cr6.lt) goto loc_82EAC560;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAC55C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
loc_82EAC560:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x82eac570
	goto loc_82EAC570;
loc_82EAC568:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16387
	ctx.r3.u64 = ctx.r3.u64 | 16387;
loc_82EAC570:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAC578"))) PPC_WEAK_FUNC(sub_82EAC578);
PPC_FUNC_IMPL(__imp__sub_82EAC578) {
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
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// sth r4,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r4.u16);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,4336
	ctx.r10.s64 = ctx.r10.s64 + 4336;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// stw r7,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r7.u32);
	// std r8,48(r3)
	PPC_STORE_U64(ctx.r3.u32 + 48, ctx.r8.u64);
	// stw r9,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r9.u32);
	// std r11,64(r3)
	PPC_STORE_U64(ctx.r3.u32 + 64, ctx.r11.u64);
	// std r11,72(r3)
	PPC_STORE_U64(ctx.r3.u32 + 72, ctx.r11.u64);
	// std r11,80(r3)
	PPC_STORE_U64(ctx.r3.u32 + 80, ctx.r11.u64);
	// beq cr6,0x82eac614
	if (ctx.cr6.eq) goto loc_82EAC614;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAC614;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EAC614:
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

__attribute__((alias("__imp__sub_82EAC62C"))) PPC_WEAK_FUNC(sub_82EAC62C);
PPC_FUNC_IMPL(__imp__sub_82EAC62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAC630"))) PPC_WEAK_FUNC(sub_82EAC630);
PPC_FUNC_IMPL(__imp__sub_82EAC630) {
	PPC_FUNC_PROLOGUE();
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14002
	ctx.r3.u64 = ctx.r3.u64 | 14002;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAC63C"))) PPC_WEAK_FUNC(sub_82EAC63C);
PPC_FUNC_IMPL(__imp__sub_82EAC63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAC640"))) PPC_WEAK_FUNC(sub_82EAC640);
PPC_FUNC_IMPL(__imp__sub_82EAC640) {
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
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r11,4336
	ctx.r11.s64 = ctx.r11.s64 + 4336;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82eac684
	if (ctx.cr6.eq) goto loc_82EAC684;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAC67C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_82EAC684:
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

__attribute__((alias("__imp__sub_82EAC698"))) PPC_WEAK_FUNC(sub_82EAC698);
PPC_FUNC_IMPL(__imp__sub_82EAC698) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82eac6c8
	if (!ctx.cr6.eq) goto loc_82EAC6C8;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16387
	ctx.r3.u64 = ctx.r3.u64 | 16387;
	// b 0x82eac6fc
	goto loc_82EAC6FC;
loc_82EAC6C8:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// beq cr6,0x82eac6e8
	if (ctx.cr6.eq) goto loc_82EAC6E8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAC6E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EAC6E8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82eac6f8
	if (ctx.cr6.eq) goto loc_82EAC6F8;
	// ld r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 48);
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
loc_82EAC6F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EAC6FC:
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

__attribute__((alias("__imp__sub_82EAC714"))) PPC_WEAK_FUNC(sub_82EAC714);
PPC_FUNC_IMPL(__imp__sub_82EAC714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAC718"))) PPC_WEAK_FUNC(sub_82EAC718);
PPC_FUNC_IMPL(__imp__sub_82EAC718) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82eac748
	if (!ctx.cr6.eq) goto loc_82EAC748;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16387
	ctx.r3.u64 = ctx.r3.u64 | 16387;
	// b 0x82eac7b0
	goto loc_82EAC7B0;
loc_82EAC748:
	// ld r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 72);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// ble cr6,0x82eac760
	if (!ctx.cr6.gt) goto loc_82EAC760;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,18000
	ctx.r3.u64 = ctx.r3.u64 | 18000;
	// b 0x82eac7b0
	goto loc_82EAC7B0;
loc_82EAC760:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eac784
	if (ctx.cr6.eq) goto loc_82EAC784;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAC77C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_82EAC784:
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAC79C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAC7B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EAC7B0:
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

__attribute__((alias("__imp__sub_82EAC7C8"))) PPC_WEAK_FUNC(sub_82EAC7C8);
PPC_FUNC_IMPL(__imp__sub_82EAC7C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82EAC7D0;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82eac7f0
	if (!ctx.cr6.eq) goto loc_82EAC7F0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16387
	ctx.r3.u64 = ctx.r3.u64 | 16387;
	// b 0x82eac90c
	goto loc_82EAC90C;
loc_82EAC7F0:
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// std r27,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r27.u64);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAC814;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eac908
	if (ctx.cr0.lt) goto loc_82EAC908;
	// li r10,-1
	ctx.r10.s64 = -1;
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// ble cr6,0x82eac83c
	if (!ctx.cr6.gt) goto loc_82EAC83C;
	// lis r31,-16371
	ctx.r31.s64 = -1072889856;
	// ori r31,r31,14011
	ctx.r31.u64 = ctx.r31.u64 | 14011;
	// b 0x82eac908
	goto loc_82EAC908;
loc_82EAC83C:
	// rotlwi r29,r11,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e8edd0
	ctx.lr = 0x82EAC858;
	sub_82E8EDD0(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x82eac86c
	if (!ctx.cr0.eq) goto loc_82EAC86C;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x82eac908
	goto loc_82EAC908;
loc_82EAC86C:
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAC890;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eac900
	if (ctx.cr0.lt) goto loc_82EAC900;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82eac8f8
	if (!ctx.cr6.eq) goto loc_82EAC8F8;
	// lwz r3,44(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 44);
	// ld r4,48(r26)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r26.u32 + 48);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAC8BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eac900
	if (ctx.cr0.lt) goto loc_82EAC900;
	// lwz r3,44(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 44);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAC8E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eac900
	if (ctx.cr0.lt) goto loc_82EAC900;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82eac900
	if (ctx.cr6.eq) goto loc_82EAC900;
loc_82EAC8F8:
	// lis r31,-16371
	ctx.r31.s64 = -1072889856;
	// ori r31,r31,14011
	ctx.r31.u64 = ctx.r31.u64 | 14011;
loc_82EAC900:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e8ee18
	ctx.lr = 0x82EAC908;
	sub_82E8EE18(ctx, base);
loc_82EAC908:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82EAC90C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAC914"))) PPC_WEAK_FUNC(sub_82EAC914);
PPC_FUNC_IMPL(__imp__sub_82EAC914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAC918"))) PPC_WEAK_FUNC(sub_82EAC918);
PPC_FUNC_IMPL(__imp__sub_82EAC918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82EAC920;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82eac948
	if (!ctx.cr6.eq) goto loc_82EAC948;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16387
	ctx.r3.u64 = ctx.r3.u64 | 16387;
	// b 0x82eacad8
	goto loc_82EACAD8;
loc_82EAC948:
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// lhz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82eac964
	if (ctx.cr6.eq) goto loc_82EAC964;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14003
	ctx.r3.u64 = ctx.r3.u64 | 14003;
	// b 0x82eacad8
	goto loc_82EACAD8;
loc_82EAC964:
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// std r27,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r27.u64);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAC988;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82eacad4
	if (ctx.cr0.lt) goto loc_82EACAD4;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAC9AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82eacad4
	if (ctx.cr0.lt) goto loc_82EACAD4;
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// ble cr6,0x82eaca5c
	if (!ctx.cr6.gt) goto loc_82EACA5C;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// ld r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 72);
	// divdu r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 / ctx.r9.u64;
	// tdllei r9,0
	if (ctx.r9.u64 <= 0) __builtin_debugtrap();
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmpld cr6,r9,r10
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r10.u64, ctx.xer);
	// ble cr6,0x82eaca5c
	if (!ctx.cr6.gt) goto loc_82EACA5C;
	// ld r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 80);
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// ble cr6,0x82eaca5c
	if (!ctx.cr6.gt) goto loc_82EACA5C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// cmpldi cr6,r29,0
	ctx.cr6.compare<uint64_t>(ctx.r29.u64, 0, ctx.xer);
	// ble cr6,0x82eaca54
	if (!ctx.cr6.gt) goto loc_82EACA54;
loc_82EACA00:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 72);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EACA18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82eacad4
	if (ctx.cr0.lt) goto loc_82EACAD4;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82eaca48
	if (ctx.cr6.eq) goto loc_82EACA48;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EACA40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82eacad4
	if (ctx.cr0.lt) goto loc_82EACAD4;
loc_82EACA48:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpld cr6,r28,r29
	ctx.cr6.compare<uint64_t>(ctx.r28.u64, ctx.r29.u64, ctx.xer);
	// blt cr6,0x82eaca00
	if (ctx.cr6.lt) goto loc_82EACA00;
loc_82EACA54:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82eacad4
	if (ctx.cr6.lt) goto loc_82EACAD4;
loc_82EACA5C:
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EACA84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82eacad4
	if (ctx.cr0.lt) goto loc_82EACAD4;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82eacaa4
	if (ctx.cr6.eq) goto loc_82EACAA4;
	// ld r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r11,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r11.u64);
loc_82EACAA4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EACAB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eacad4
	if (ctx.cr0.eq) goto loc_82EACAD4;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82eac918
	ctx.lr = 0x82EACAD0;
	sub_82EAC918(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82EACAD4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82EACAD8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EACAE0"))) PPC_WEAK_FUNC(sub_82EACAE0);
PPC_FUNC_IMPL(__imp__sub_82EACAE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82EACAE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 72);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpld cr6,r4,r11
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r11.u64, ctx.xer);
	// bge cr6,0x82eacb0c
	if (!ctx.cr6.lt) goto loc_82EACB0C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82eacb70
	goto loc_82EACB70;
loc_82EACB0C:
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmpld cr6,r11,r29
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r29.u64, ctx.xer);
	// bge cr6,0x82eacb70
	if (!ctx.cr6.lt) goto loc_82EACB70;
loc_82EACB1C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EACB34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eacb70
	if (ctx.cr0.lt) goto loc_82EACB70;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82eacb64
	if (ctx.cr6.eq) goto loc_82EACB64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EACB5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eacb70
	if (ctx.cr0.lt) goto loc_82EACB70;
loc_82EACB64:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpld cr6,r30,r29
	ctx.cr6.compare<uint64_t>(ctx.r30.u64, ctx.r29.u64, ctx.xer);
	// blt cr6,0x82eacb1c
	if (ctx.cr6.lt) goto loc_82EACB1C;
loc_82EACB70:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EACB78"))) PPC_WEAK_FUNC(sub_82EACB78);
PPC_FUNC_IMPL(__imp__sub_82EACB78) {
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
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r5,20(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// lwz r4,24(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r11,r11,1552
	ctx.r11.s64 = ctx.r11.s64 + 1552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r6,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// stw r5,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r5.u32);
	// stw r4,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r4.u32);
loc_82EACBC8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eacbe8
	if (!ctx.cr0.eq) goto loc_82EACBE8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82eacbc8
	if (!ctx.cr6.eq) goto loc_82EACBC8;
loc_82EACBE8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eacc10
	if (!ctx.cr0.eq) goto loc_82EACC10;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 72);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EACC08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eacc54
	if (ctx.cr0.lt) goto loc_82EACC54;
loc_82EACC10:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EACC24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82eacc50
	if (ctx.cr0.lt) goto loc_82EACC50;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EACC40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eacc50
	if (ctx.cr0.eq) goto loc_82EACC50;
	// bl 0x82eacb78
	ctx.lr = 0x82EACC4C;
	sub_82EACB78(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
loc_82EACC50:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82EACC54:
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

__attribute__((alias("__imp__sub_82EACC6C"))) PPC_WEAK_FUNC(sub_82EACC6C);
PPC_FUNC_IMPL(__imp__sub_82EACC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EACC70"))) PPC_WEAK_FUNC(sub_82EACC70);
PPC_FUNC_IMPL(__imp__sub_82EACC70) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82eacca0
	if (!ctx.cr6.eq) goto loc_82EACCA0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16387
	ctx.r3.u64 = ctx.r3.u64 | 16387;
	// b 0x82eacd0c
	goto loc_82EACD0C;
loc_82EACCA0:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EACCB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eacd0c
	if (ctx.cr0.lt) goto loc_82EACD0C;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EACCE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eacd0c
	if (ctx.cr0.lt) goto loc_82EACD0C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82eacd04
	if (ctx.cr6.eq) goto loc_82EACD04;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14011
	ctx.r3.u64 = ctx.r3.u64 | 14011;
	// b 0x82eacd0c
	goto loc_82EACD0C;
loc_82EACD04:
	// lwbrx r11,0,r30
	ctx.r11.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r30.u32));
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82EACD0C:
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

__attribute__((alias("__imp__sub_82EACD24"))) PPC_WEAK_FUNC(sub_82EACD24);
PPC_FUNC_IMPL(__imp__sub_82EACD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EACD28"))) PPC_WEAK_FUNC(sub_82EACD28);
PPC_FUNC_IMPL(__imp__sub_82EACD28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82EACD30;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// addi r6,r10,28192
	ctx.r6.s64 = ctx.r10.s64 + 28192;
	// addi r5,r5,1552
	ctx.r5.s64 = ctx.r5.s64 + 1552;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82eac578
	ctx.lr = 0x82EACD64;
	sub_82EAC578(ctx, base);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// addi r10,r10,4388
	ctx.r10.s64 = ctx.r10.s64 + 4388;
	// stw r29,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r29.u32);
	// sth r11,96(r31)
	PPC_STORE_U16(ctx.r31.u32 + 96, ctx.r11.u16);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// std r11,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r11.u64);
	// beq cr6,0x82eacda0
	if (ctx.cr6.eq) goto loc_82EACDA0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EACDA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EACDA0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EACDAC"))) PPC_WEAK_FUNC(sub_82EACDAC);
PPC_FUNC_IMPL(__imp__sub_82EACDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EACDB0"))) PPC_WEAK_FUNC(sub_82EACDB0);
PPC_FUNC_IMPL(__imp__sub_82EACDB0) {
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
	// lwz r3,88(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r11,4388
	ctx.r11.s64 = ctx.r11.s64 + 4388;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82eacdf4
	if (ctx.cr6.eq) goto loc_82EACDF4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EACDEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
loc_82EACDF4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eac640
	ctx.lr = 0x82EACDFC;
	sub_82EAC640(ctx, base);
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

__attribute__((alias("__imp__sub_82EACE10"))) PPC_WEAK_FUNC(sub_82EACE10);
PPC_FUNC_IMPL(__imp__sub_82EACE10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eace28
	if (!ctx.cr6.eq) goto loc_82EACE28;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14011
	ctx.r3.u64 = ctx.r3.u64 | 14011;
	// blr 
	return;
loc_82EACE28:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82eace3c
	if (!ctx.cr6.eq) goto loc_82EACE3C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_82EACE3C:
	// lwz r3,88(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mulli r11,r4,10000
	ctx.r11.s64 = ctx.r4.s64 * 10000;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrldi r4,r11,32
	ctx.r4.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lwz r11,76(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82EACE58"))) PPC_WEAK_FUNC(sub_82EACE58);
PPC_FUNC_IMPL(__imp__sub_82EACE58) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82eace80
	if (!ctx.cr6.eq) goto loc_82EACE80;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16387
	ctx.r3.u64 = ctx.r3.u64 | 16387;
	// b 0x82eacee8
	goto loc_82EACEE8;
loc_82EACE80:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,88(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82eacea0
	if (!ctx.cr6.eq) goto loc_82EACEA0;
loc_82EACE94:
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14011
	ctx.r3.u64 = ctx.r3.u64 | 14011;
	// b 0x82eacee8
	goto loc_82EACEE8;
loc_82EACEA0:
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,88(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EACEBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eacee8
	if (ctx.cr0.lt) goto loc_82EACEE8;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,10000
	ctx.r10.s64 = 10000;
	// li r9,-1
	ctx.r9.s64 = -1;
	// divdu r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 / ctx.r10.u64;
	// clrldi r10,r9,32
	ctx.r10.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// bgt cr6,0x82eace94
	if (ctx.cr6.gt) goto loc_82EACE94;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82EACEE8:
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

__attribute__((alias("__imp__sub_82EACEFC"))) PPC_WEAK_FUNC(sub_82EACEFC);
PPC_FUNC_IMPL(__imp__sub_82EACEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EACF00"))) PPC_WEAK_FUNC(sub_82EACF00);
PPC_FUNC_IMPL(__imp__sub_82EACF00) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,88(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// b 0x82eac7c8
	sub_82EAC7C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EACF08"))) PPC_WEAK_FUNC(sub_82EACF08);
PPC_FUNC_IMPL(__imp__sub_82EACF08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82EACF10;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82eacf30
	if (!ctx.cr6.eq) goto loc_82EACF30;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16387
	ctx.r3.u64 = ctx.r3.u64 | 16387;
	// b 0x82eacfbc
	goto loc_82EACFBC;
loc_82EACF30:
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r30,0
	ctx.r30.s64 = 0;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r30,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r30.u64);
	// cmpld cr6,r4,r11
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r11.u64, ctx.xer);
	// ble cr6,0x82eacf54
	if (!ctx.cr6.gt) goto loc_82EACF54;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,15005
	ctx.r3.u64 = ctx.r3.u64 | 15005;
	// b 0x82eacfbc
	goto loc_82EACFBC;
loc_82EACF54:
	// std r30,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r30.u64);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// rotlwi r4,r4,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EACF78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eacfbc
	if (ctx.cr0.lt) goto loc_82EACFBC;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EACF9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eacfbc
	if (ctx.cr0.lt) goto loc_82EACFBC;
	// ld r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 48);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r11.u64);
loc_82EACFBC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EACFC4"))) PPC_WEAK_FUNC(sub_82EACFC4);
PPC_FUNC_IMPL(__imp__sub_82EACFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EACFC8"))) PPC_WEAK_FUNC(sub_82EACFC8);
PPC_FUNC_IMPL(__imp__sub_82EACFC8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82eacfe8
	if (ctx.cr6.eq) goto loc_82EACFE8;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82eacfe8
	if (ctx.cr6.eq) goto loc_82EACFE8;
	// lwz r11,15(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 15);
	// li r3,0
	ctx.r3.s64 = 0;
	// std r11,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r11.u64);
	// blr 
	return;
loc_82EACFE8:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16387
	ctx.r3.u64 = ctx.r3.u64 | 16387;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EACFF4"))) PPC_WEAK_FUNC(sub_82EACFF4);
PPC_FUNC_IMPL(__imp__sub_82EACFF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EACFF8"))) PPC_WEAK_FUNC(sub_82EACFF8);
PPC_FUNC_IMPL(__imp__sub_82EACFF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82EAD000;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 72);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpld cr6,r4,r11
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r11.u64, ctx.xer);
	// ble cr6,0x82ead024
	if (!ctx.cr6.gt) goto loc_82EAD024;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14002
	ctx.r3.u64 = ctx.r3.u64 | 14002;
	// b 0x82ead134
	goto loc_82EAD134;
loc_82EAD024:
	// blt cr6,0x82ead04c
	if (ctx.cr6.lt) goto loc_82EAD04C;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// rotlwi r11,r30,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAD044;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ead120
	if (ctx.cr0.lt) goto loc_82EAD120;
loc_82EAD04C:
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// std r29,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r29.u64);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAD074;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ead120
	if (ctx.cr0.lt) goto loc_82EAD120;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAD094;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ead120
	if (ctx.cr0.lt) goto loc_82EAD120;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// ld r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 64);
	// li r5,4
	ctx.r5.s64 = 4;
	// tdllei r11,0
	if (ctx.r11.u64 <= 0) __builtin_debugtrap();
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// divdu r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 / ctx.r11.u64;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rlwinm r10,r11,8,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// rlwimi r10,r11,24,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 24) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r10,r11,8,8,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFF0000) | (ctx.r10.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r10,r11,24,0,7
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 24) & 0xFF000000) | (ctx.r10.u64 & 0xFFFFFFFF00FFFFFF);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAD0E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ead120
	if (ctx.cr0.lt) goto loc_82EAD120;
	// lhz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 96);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r5,2
	ctx.r5.s64 = 2;
	// rlwinm r10,r11,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwimi r10,r11,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAD120;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EAD120:
	// ld r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 72);
	// cmpld cr6,r30,r11
	ctx.cr6.compare<uint64_t>(ctx.r30.u64, ctx.r11.u64, ctx.xer);
	// blt cr6,0x82ead134
	if (ctx.cr6.lt) goto loc_82EAD134;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r11,72(r31)
	PPC_STORE_U64(ctx.r31.u32 + 72, ctx.r11.u64);
loc_82EAD134:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAD13C"))) PPC_WEAK_FUNC(sub_82EAD13C);
PPC_FUNC_IMPL(__imp__sub_82EAD13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAD140"))) PPC_WEAK_FUNC(sub_82EAD140);
PPC_FUNC_IMPL(__imp__sub_82EAD140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82EAD148;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r9,r5,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFF;
	// ld r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 72);
	// li r11,-1
	ctx.r11.s64 = -1;
	// rlwimi r9,r5,8,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// sth r9,182(r1)
	PPC_STORE_U16(ctx.r1.u32 + 182, ctx.r9.u16);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82ead258
	if (ctx.cr6.gt) goto loc_82EAD258;
loc_82EAD17C:
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// ble cr6,0x82ead258
	if (!ctx.cr6.gt) goto loc_82EAD258;
	// std r28,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r28.u64);
	// addi r29,r10,-1
	ctx.r29.s64 = ctx.r10.s64 + -1;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAD1AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ead258
	if (ctx.cr0.lt) goto loc_82EAD258;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAD1CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ead258
	if (ctx.cr0.lt) goto loc_82EAD258;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAD1F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ead258
	if (ctx.cr0.lt) goto loc_82EAD258;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r10,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// rlwimi r11,r10,24,16,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0xFF00) | (ctx.r11.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r11,r10,8,8,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF0000) | (ctx.r11.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r11,r10,24,0,7
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0xFF000000) | (ctx.r11.u64 & 0xFFFFFFFF00FFFFFF);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82ead24c
	if (!ctx.cr6.eq) goto loc_82EAD24C;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,182
	ctx.r4.s64 = ctx.r1.s64 + 182;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAD240;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ead258
	if (ctx.cr0.lt) goto loc_82EAD258;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82EAD24C:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82ead17c
	if (!ctx.cr6.lt) goto loc_82EAD17C;
loc_82EAD258:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAD260"))) PPC_WEAK_FUNC(sub_82EAD260);
PPC_FUNC_IMPL(__imp__sub_82EAD260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82EAD268;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// lwz r9,196(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// bl 0x82eac578
	ctx.lr = 0x82EAD294;
	sub_82EAC578(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// li r10,3000
	ctx.r10.s64 = 3000;
	// stw r29,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r29.u32);
	// addi r11,r11,4440
	ctx.r11.s64 = ctx.r11.s64 + 4440;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82ead2cc
	if (ctx.cr6.eq) goto loc_82EAD2CC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAD2CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EAD2CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAD2D8"))) PPC_WEAK_FUNC(sub_82EAD2D8);
PPC_FUNC_IMPL(__imp__sub_82EAD2D8) {
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
	// lwz r3,88(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r11,4440
	ctx.r11.s64 = ctx.r11.s64 + 4440;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82ead31c
	if (ctx.cr6.eq) goto loc_82EAD31C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAD314;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
loc_82EAD31C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eac640
	ctx.lr = 0x82EAD324;
	sub_82EAC640(ctx, base);
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

__attribute__((alias("__imp__sub_82EAD338"))) PPC_WEAK_FUNC(sub_82EAD338);
PPC_FUNC_IMPL(__imp__sub_82EAD338) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82ead34c
	if (!ctx.cr6.eq) goto loc_82EAD34C;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16387
	ctx.r3.u64 = ctx.r3.u64 | 16387;
	// blr 
	return;
loc_82EAD34C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ead36c
	if (!ctx.cr6.eq) goto loc_82EAD36C;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14011
	ctx.r3.u64 = ctx.r3.u64 | 14011;
	// blr 
	return;
loc_82EAD36C:
	// lwz r3,88(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82EAD380"))) PPC_WEAK_FUNC(sub_82EAD380);
PPC_FUNC_IMPL(__imp__sub_82EAD380) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82ead3a0
	if (!ctx.cr6.eq) goto loc_82EAD3A0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16387
	ctx.r3.u64 = ctx.r3.u64 | 16387;
	// b 0x82ead3c4
	goto loc_82EAD3C4;
loc_82EAD3A0:
	// lwz r3,88(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// beq cr6,0x82ead3c0
	if (ctx.cr6.eq) goto loc_82EAD3C0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAD3C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EAD3C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EAD3C4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAD3D4"))) PPC_WEAK_FUNC(sub_82EAD3D4);
PPC_FUNC_IMPL(__imp__sub_82EAD3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAD3D8"))) PPC_WEAK_FUNC(sub_82EAD3D8);
PPC_FUNC_IMPL(__imp__sub_82EAD3D8) {
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
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAD404;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ead44c
	if (ctx.cr0.lt) goto loc_82EAD44C;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// rlwinm r9,r11,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// rlwimi r9,r11,24,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 24) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// rlwimi r9,r11,8,8,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFF0000) | (ctx.r9.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r9,r11,24,0,7
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 24) & 0xFF000000) | (ctx.r9.u64 & 0xFFFFFFFF00FFFFFF);
	// stw r9,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAD44C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EAD44C:
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

__attribute__((alias("__imp__sub_82EAD460"))) PPC_WEAK_FUNC(sub_82EAD460);
PPC_FUNC_IMPL(__imp__sub_82EAD460) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82EAD468;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// std r27,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r27.u64);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAD494;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ead568
	if (ctx.cr0.lt) goto loc_82EAD568;
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// cmpld cr6,r30,r11
	ctx.cr6.compare<uint64_t>(ctx.r30.u64, ctx.r11.u64, ctx.xer);
	// ble cr6,0x82ead568
	if (!ctx.cr6.gt) goto loc_82EAD568;
	// sth r27,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r27.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,88(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAD4C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ead568
	if (ctx.cr0.lt) goto loc_82EAD568;
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// rotlwi r10,r30,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// subf r28,r11,r10
	ctx.r28.s64 = ctx.r10.s64 - ctx.r11.s64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e8edd0
	ctx.lr = 0x82EAD4F4;
	sub_82E8EDD0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82ead508
	if (!ctx.cr0.eq) goto loc_82EAD508;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x82ead568
	goto loc_82EAD568;
loc_82EAD508:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82EAD518;
	sub_82FA7CF0(ctx, base);
	// lwz r3,44(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAD530;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ead560
	if (ctx.cr0.lt) goto loc_82EAD560;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r3,44(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAD55C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82EAD560:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e8ee18
	ctx.lr = 0x82EAD568;
	sub_82E8EE18(ctx, base);
loc_82EAD568:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAD574"))) PPC_WEAK_FUNC(sub_82EAD574);
PPC_FUNC_IMPL(__imp__sub_82EAD574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAD578"))) PPC_WEAK_FUNC(sub_82EAD578);
PPC_FUNC_IMPL(__imp__sub_82EAD578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82EAD580;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82ead5a0
	if (!ctx.cr6.eq) goto loc_82EAD5A0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82ead5d8
	goto loc_82EAD5D8;
loc_82EAD5A0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ld r28,64(r31)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r31.u32 + 64);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAD5BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAD5D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EAD5D8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAD5E0"))) PPC_WEAK_FUNC(sub_82EAD5E0);
PPC_FUNC_IMPL(__imp__sub_82EAD5E0) {
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
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ead60c
	if (!ctx.cr6.eq) goto loc_82EAD60C;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14002
	ctx.r3.u64 = ctx.r3.u64 | 14002;
	// b 0x82ead678
	goto loc_82EAD678;
loc_82EAD60C:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,56(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAD62C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ead678
	if (ctx.cr0.lt) goto loc_82EAD678;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ead648
	if (!ctx.cr6.eq) goto loc_82EAD648;
	// li r11,500
	ctx.r11.s64 = 500;
	// b 0x82ead670
	goto loc_82EAD670;
loc_82EAD648:
	// li r10,10240
	ctx.r10.s64 = 10240;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// oris r10,r10,61035
	ctx.r10.u64 = ctx.r10.u64 | 3999989760;
	// li r9,-1
	ctx.r9.s64 = -1;
	// tdllei r11,0
	if (ctx.r11.u64 <= 0) __builtin_debugtrap();
	// divdu r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 / ctx.r11.u64;
	// clrldi r10,r9,32
	ctx.r10.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// ble cr6,0x82ead670
	if (!ctx.cr6.gt) goto loc_82EAD670;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82EAD670:
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EAD678:
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

__attribute__((alias("__imp__sub_82EAD68C"))) PPC_WEAK_FUNC(sub_82EAD68C);
PPC_FUNC_IMPL(__imp__sub_82EAD68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAD690"))) PPC_WEAK_FUNC(sub_82EAD690);
PPC_FUNC_IMPL(__imp__sub_82EAD690) {
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
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// addi r6,r9,1552
	ctx.r6.s64 = ctx.r9.s64 + 1552;
	// addi r7,r7,28208
	ctx.r7.s64 = ctx.r7.s64 + 28208;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82ead260
	ctx.lr = 0x82EAD6D4;
	sub_82EAD260(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,4568
	ctx.r11.s64 = ctx.r11.s64 + 4568;
	// stw r10,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82EAD704"))) PPC_WEAK_FUNC(sub_82EAD704);
PPC_FUNC_IMPL(__imp__sub_82EAD704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAD708"))) PPC_WEAK_FUNC(sub_82EAD708);
PPC_FUNC_IMPL(__imp__sub_82EAD708) {
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
	// lwz r3,104(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r11,4568
	ctx.r11.s64 = ctx.r11.s64 + 4568;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82ead748
	if (ctx.cr6.eq) goto loc_82EAD748;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAD748;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EAD748:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,4504
	ctx.r11.s64 = ctx.r11.s64 + 4504;
	// stw r10,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82ead2d8
	ctx.lr = 0x82EAD764;
	sub_82EAD2D8(ctx, base);
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

__attribute__((alias("__imp__sub_82EAD778"))) PPC_WEAK_FUNC(sub_82EAD778);
PPC_FUNC_IMPL(__imp__sub_82EAD778) {
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
	// lwz r3,104(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ead7b4
	if (ctx.cr6.eq) goto loc_82EAD7B4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAD7B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EAD7B4:
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82EAD7D4"))) PPC_WEAK_FUNC(sub_82EAD7D4);
PPC_FUNC_IMPL(__imp__sub_82EAD7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAD7D8"))) PPC_WEAK_FUNC(sub_82EAD7D8);
PPC_FUNC_IMPL(__imp__sub_82EAD7D8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82ead81c
	if (ctx.cr6.eq) goto loc_82EAD81C;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82ead81c
	if (ctx.cr6.eq) goto loc_82EAD81C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// lwz r11,2(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 2);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ead814
	if (ctx.cr6.eq) goto loc_82EAD814;
	// lwz r11,7(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 7);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ead814
	if (!ctx.cr6.eq) goto loc_82EAD814;
	// li r11,1
	ctx.r11.s64 = 1;
	// std r4,64(r3)
	PPC_STORE_U64(ctx.r3.u32 + 64, ctx.r4.u64);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
loc_82EAD814:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82EAD81C:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16387
	ctx.r3.u64 = ctx.r3.u64 | 16387;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAD828"))) PPC_WEAK_FUNC(sub_82EAD828);
PPC_FUNC_IMPL(__imp__sub_82EAD828) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82ead858
	if (!ctx.cr6.eq) goto loc_82EAD858;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16387
	ctx.r3.u64 = ctx.r3.u64 | 16387;
	// b 0x82ead8a0
	goto loc_82EAD8A0;
loc_82EAD858:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAD87C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ead8a0
	if (ctx.cr0.lt) goto loc_82EAD8A0;
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// li r10,8000
	ctx.r10.s64 = 8000;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,0
	ctx.r3.s64 = 0;
	// mulld r11,r9,r11
	ctx.r11.s64 = ctx.r9.s64 * ctx.r11.s64;
	// divdu r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 / ctx.r10.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82EAD8A0:
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

__attribute__((alias("__imp__sub_82EAD8B8"))) PPC_WEAK_FUNC(sub_82EAD8B8);
PPC_FUNC_IMPL(__imp__sub_82EAD8B8) {
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
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// addi r6,r9,-7280
	ctx.r6.s64 = ctx.r9.s64 + -7280;
	// addi r7,r7,28224
	ctx.r7.s64 = ctx.r7.s64 + 28224;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82ead260
	ctx.lr = 0x82EAD8FC;
	sub_82EAD260(ctx, base);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r10,r10,4632
	ctx.r10.s64 = ctx.r10.s64 + 4632;
	// stb r11,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r11.u8);
	// li r8,-1
	ctx.r8.s64 = -1;
	// std r9,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r9.u64);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r11,114(r31)
	PPC_STORE_U16(ctx.r31.u32 + 114, ctx.r11.u16);
	// std r11,120(r31)
	PPC_STORE_U64(ctx.r31.u32 + 120, ctx.r11.u64);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// sth r8,128(r31)
	PPC_STORE_U16(ctx.r31.u32 + 128, ctx.r8.u16);
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

__attribute__((alias("__imp__sub_82EAD948"))) PPC_WEAK_FUNC(sub_82EAD948);
PPC_FUNC_IMPL(__imp__sub_82EAD948) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82ead968
	if (ctx.cr6.eq) goto loc_82EAD968;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82ead968
	if (ctx.cr6.eq) goto loc_82EAD968;
	// ld r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 104);
	// li r3,0
	ctx.r3.s64 = 0;
	// std r11,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r11.u64);
	// blr 
	return;
loc_82EAD968:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16387
	ctx.r3.u64 = ctx.r3.u64 | 16387;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAD974"))) PPC_WEAK_FUNC(sub_82EAD974);
PPC_FUNC_IMPL(__imp__sub_82EAD974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAD978"))) PPC_WEAK_FUNC(sub_82EAD978);
PPC_FUNC_IMPL(__imp__sub_82EAD978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82EAD980;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82eada88
	if (ctx.cr6.eq) goto loc_82EADA88;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82eada88
	if (ctx.cr6.eq) goto loc_82EADA88;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAD9C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eada90
	if (ctx.cr0.lt) goto loc_82EADA90;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ead9e0
	if (!ctx.cr6.eq) goto loc_82EAD9E0;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14011
	ctx.r3.u64 = ctx.r3.u64 | 14011;
	// b 0x82eada90
	goto loc_82EADA90;
loc_82EAD9E0:
	// stw r30,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
	// ld r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 120);
	// cmpld cr6,r11,r28
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r28.u64, ctx.xer);
	// beq cr6,0x82ead9fc
	if (ctx.cr6.eq) goto loc_82EAD9FC;
	// li r11,-1
	ctx.r11.s64 = -1;
	// std r28,120(r31)
	PPC_STORE_U64(ctx.r31.u32 + 120, ctx.r28.u64);
	// sth r11,128(r31)
	PPC_STORE_U16(ctx.r31.u32 + 128, ctx.r11.u16);
loc_82EAD9FC:
	// lwz r11,7(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eada14
	if (!ctx.cr6.eq) goto loc_82EADA14;
	// lhz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 128);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,128(r31)
	PPC_STORE_U16(ctx.r31.u32 + 128, ctx.r11.u16);
loc_82EADA14:
	// lbz r11,6(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 6);
	// lbz r9,112(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 112);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82eada44
	if (ctx.cr6.eq) goto loc_82EADA44;
	// stb r11,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r11.u8);
	// lwz r11,7(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eada44
	if (!ctx.cr6.eq) goto loc_82EADA44;
	// ld r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 104);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r11,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r11.u64);
loc_82EADA44:
	// ld r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 104);
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// divdu r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 / ctx.r10.u64;
	// tdllei r10,0
	if (ctx.r10.u64 <= 0) __builtin_debugtrap();
	// mulld r10,r9,r10
	ctx.r10.s64 = ctx.r9.s64 * ctx.r10.s64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bne cr6,0x82eada90
	if (!ctx.cr6.eq) goto loc_82EADA90;
	// lwz r11,7(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eada90
	if (!ctx.cr6.eq) goto loc_82EADA90;
	// lhz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 128);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r28,64(r31)
	PPC_STORE_U64(ctx.r31.u32 + 64, ctx.r28.u64);
	// sth r11,114(r31)
	PPC_STORE_U16(ctx.r31.u32 + 114, ctx.r11.u16);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// b 0x82eada90
	goto loc_82EADA90;
loc_82EADA88:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16387
	ctx.r3.u64 = ctx.r3.u64 | 16387;
loc_82EADA90:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EADA98"))) PPC_WEAK_FUNC(sub_82EADA98);
PPC_FUNC_IMPL(__imp__sub_82EADA98) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82eadac8
	if (!ctx.cr6.eq) goto loc_82EADAC8;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16387
	ctx.r3.u64 = ctx.r3.u64 | 16387;
	// b 0x82eadb38
	goto loc_82EADB38;
loc_82EADAC8:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eadb38
	if (ctx.cr6.eq) goto loc_82EADB38;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EADAF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eadb38
	if (ctx.cr0.lt) goto loc_82EADB38;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eadb18
	if (!ctx.cr6.eq) goto loc_82EADB18;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14011
	ctx.r3.u64 = ctx.r3.u64 | 14011;
	// b 0x82eadb38
	goto loc_82EADB38;
loc_82EADB18:
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lwz r9,116(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// mulld r11,r10,r11
	ctx.r11.s64 = ctx.r10.s64 * ctx.r11.s64;
	// rldicr r10,r9,3,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u64, 3) & 0xFFFFFFFFFFFFFFFF;
	// divdu r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 / ctx.r10.u64;
	// tdllei r10,0
	if (ctx.r10.u64 <= 0) __builtin_debugtrap();
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82EADB38:
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

__attribute__((alias("__imp__sub_82EADB50"))) PPC_WEAK_FUNC(sub_82EADB50);
PPC_FUNC_IMPL(__imp__sub_82EADB50) {
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
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// addi r6,r9,-7264
	ctx.r6.s64 = ctx.r9.s64 + -7264;
	// addi r7,r7,28240
	ctx.r7.s64 = ctx.r7.s64 + 28240;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82ead260
	ctx.lr = 0x82EADB94;
	sub_82EAD260(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,4696
	ctx.r11.s64 = ctx.r11.s64 + 4696;
	// std r10,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r10.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82EADBC4"))) PPC_WEAK_FUNC(sub_82EADBC4);
PPC_FUNC_IMPL(__imp__sub_82EADBC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EADBC8"))) PPC_WEAK_FUNC(sub_82EADBC8);
PPC_FUNC_IMPL(__imp__sub_82EADBC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82EADBD0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82eadbf8
	if (!ctx.cr6.eq) goto loc_82EADBF8;
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// ori r30,r30,16387
	ctx.r30.u64 = ctx.r30.u64 | 16387;
	// b 0x82eadcbc
	goto loc_82EADCBC;
loc_82EADBF8:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// std r29,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r29.u64);
	// beq cr6,0x82eadc0c
	if (ctx.cr6.eq) goto loc_82EADC0C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// std r11,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
loc_82EADC0C:
	// std r29,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r29.u64);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EADC2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82eadca0
	if (ctx.cr0.lt) goto loc_82EADCA0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eacc70
	ctx.lr = 0x82EADC44;
	sub_82EACC70(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82eadca0
	if (ctx.cr0.lt) goto loc_82EADCA0;
	// std r29,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r29.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EADC6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lhz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EADC88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82eadca0
	if (ctx.cr0.lt) goto loc_82EADCA0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// ld r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r11.u64);
loc_82EADCA0:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eadcbc
	if (ctx.cr6.eq) goto loc_82EADCBC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EADCBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EADCBC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EADCC8"))) PPC_WEAK_FUNC(sub_82EADCC8);
PPC_FUNC_IMPL(__imp__sub_82EADCC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82EADCD0;
	__savegprlr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r28,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r28.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// rotlwi r24,r11,0
	ctx.r24.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r3,88(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// rldicl r10,r4,32,32
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// clrlwi r23,r10,16
	ctx.r23.u64 = ctx.r10.u32 & 0xFFFF;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EADD14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eadf2c
	if (ctx.cr0.lt) goto loc_82EADF2C;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r30,-1
	ctx.r30.s64 = -1;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eadf20
	if (ctx.cr6.eq) goto loc_82EADF20;
loc_82EADD34:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eadd50
	if (ctx.cr6.eq) goto loc_82EADD50;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EADD4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
loc_82EADD50:
	// lwz r3,88(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EADD6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eadf2c
	if (ctx.cr0.lt) goto loc_82EADF2C;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eadf08
	if (ctx.cr6.eq) goto loc_82EADF08;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EADD94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eadf2c
	if (ctx.cr0.lt) goto loc_82EADF2C;
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// clrlwi r10,r23,16
	ctx.r10.u64 = ctx.r23.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82eadf04
	if (!ctx.cr6.eq) goto loc_82EADF04;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EADDC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eadf2c
	if (ctx.cr0.lt) goto loc_82EADF2C;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eadf04
	if (ctx.cr6.eq) goto loc_82EADF04;
	// std r28,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r28.u64);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r3,88(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EADDF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eadf2c
	if (ctx.cr0.lt) goto loc_82EADF2C;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,88(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EADE1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eadf2c
	if (ctx.cr0.lt) goto loc_82EADF2C;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// ld r10,48(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 48);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r30,r11,r9
	ctx.r30.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82eacc70
	ctx.lr = 0x82EADE48;
	sub_82EACC70(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eadf2c
	if (ctx.cr0.lt) goto loc_82EADF2C;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EADE68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eadf2c
	if (ctx.cr0.lt) goto loc_82EADF2C;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82eacc70
	ctx.lr = 0x82EADE94;
	sub_82EACC70(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eadf2c
	if (ctx.cr0.lt) goto loc_82EADF2C;
	// std r30,0(r25)
	PPC_STORE_U64(ctx.r25.u32 + 0, ctx.r30.u64);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eadec4
	if (ctx.cr6.eq) goto loc_82EADEC4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EADEC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r28.u32);
loc_82EADEC4:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// beq cr6,0x82eadee8
	if (ctx.cr6.eq) goto loc_82EADEE8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EADEE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82EADEE8:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eadf08
	if (ctx.cr6.lt) goto loc_82EADF08;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82eadf18
	if (!ctx.cr6.gt) goto loc_82EADF18;
	// b 0x82eadf08
	goto loc_82EADF08;
loc_82EADF04:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82EADF08:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eadd34
	if (ctx.cr6.lt) goto loc_82EADD34;
loc_82EADF18:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x82eadf30
	if (!ctx.cr6.eq) goto loc_82EADF30;
loc_82EADF20:
	// lis r31,-16371
	ctx.r31.s64 = -1072889856;
	// ori r31,r31,15005
	ctx.r31.u64 = ctx.r31.u64 | 15005;
	// b 0x82eadf30
	goto loc_82EADF30;
loc_82EADF2C:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82EADF30:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eadf48
	if (ctx.cr6.eq) goto loc_82EADF48;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EADF48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EADF48:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EADF54"))) PPC_WEAK_FUNC(sub_82EADF54);
PPC_FUNC_IMPL(__imp__sub_82EADF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EADF58"))) PPC_WEAK_FUNC(sub_82EADF58);
PPC_FUNC_IMPL(__imp__sub_82EADF58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82EADF60;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// rotlwi r28,r4,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82eae040
	if (ctx.cr6.eq) goto loc_82EAE040;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82eae040
	if (ctx.cr6.eq) goto loc_82EAE040;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EADFA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eae048
	if (ctx.cr0.lt) goto loc_82EAE048;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EADFC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eae048
	if (ctx.cr0.lt) goto loc_82EAE048;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eae020
	if (ctx.cr6.eq) goto loc_82EAE020;
loc_82EADFE0:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82eacc70
	ctx.lr = 0x82EADFF0;
	sub_82EACC70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eae048
	if (ctx.cr0.lt) goto loc_82EAE048;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82eae038
	if (ctx.cr6.eq) goto loc_82EAE038;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// blt cr6,0x82eae020
	if (ctx.cr6.lt) goto loc_82EAE020;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// blt cr6,0x82eadfe0
	if (ctx.cr6.lt) goto loc_82EADFE0;
loc_82EAE020:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82eae02c
	if (!ctx.cr6.eq) goto loc_82EAE02C;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82EAE02C:
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14037
	ctx.r3.u64 = ctx.r3.u64 | 14037;
	// b 0x82eae048
	goto loc_82EAE048;
loc_82EAE038:
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// b 0x82eae048
	goto loc_82EAE048;
loc_82EAE040:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82EAE048:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAE050"))) PPC_WEAK_FUNC(sub_82EAE050);
PPC_FUNC_IMPL(__imp__sub_82EAE050) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82eae064
	if (!ctx.cr6.eq) goto loc_82EAE064;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16387
	ctx.r3.u64 = ctx.r3.u64 | 16387;
	// blr 
	return;
loc_82EAE064:
	// ld r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 104);
	// li r3,0
	ctx.r3.s64 = 0;
	// std r11,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAE074"))) PPC_WEAK_FUNC(sub_82EAE074);
PPC_FUNC_IMPL(__imp__sub_82EAE074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAE078"))) PPC_WEAK_FUNC(sub_82EAE078);
PPC_FUNC_IMPL(__imp__sub_82EAE078) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82eae0b0
	if (ctx.cr6.eq) goto loc_82EAE0B0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82eae0b0
	if (ctx.cr6.eq) goto loc_82EAE0B0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// lwz r11,7(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 7);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eae0a8
	if (!ctx.cr6.eq) goto loc_82EAE0A8;
	// li r11,1
	ctx.r11.s64 = 1;
	// std r4,64(r3)
	PPC_STORE_U64(ctx.r3.u32 + 64, ctx.r4.u64);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
loc_82EAE0A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82EAE0B0:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16387
	ctx.r3.u64 = ctx.r3.u64 | 16387;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAE0BC"))) PPC_WEAK_FUNC(sub_82EAE0BC);
PPC_FUNC_IMPL(__imp__sub_82EAE0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAE0C0"))) PPC_WEAK_FUNC(sub_82EAE0C0);
PPC_FUNC_IMPL(__imp__sub_82EAE0C0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82eae0d4
	if (!ctx.cr6.eq) goto loc_82EAE0D4;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16387
	ctx.r3.u64 = ctx.r3.u64 | 16387;
	// blr 
	return;
loc_82EAE0D4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAE0E4"))) PPC_WEAK_FUNC(sub_82EAE0E4);
PPC_FUNC_IMPL(__imp__sub_82EAE0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAE0E8"))) PPC_WEAK_FUNC(sub_82EAE0E8);
PPC_FUNC_IMPL(__imp__sub_82EAE0E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82EAE0F0;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82eae224
	if (ctx.cr6.eq) goto loc_82EAE224;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82eae224
	if (ctx.cr6.eq) goto loc_82EAE224;
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// lhz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82eae134
	if (ctx.cr6.eq) goto loc_82EAE134;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14003
	ctx.r3.u64 = ctx.r3.u64 | 14003;
	// b 0x82eae22c
	goto loc_82EAE22C;
loc_82EAE134:
	// ld r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 80);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// ble cr6,0x82eae1c4
	if (!ctx.cr6.gt) goto loc_82EAE1C4;
	// ld r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 72);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// ble cr6,0x82eae1c4
	if (!ctx.cr6.gt) goto loc_82EAE1C4;
	// std r29,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r29.u64);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAE174;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eae22c
	if (ctx.cr0.lt) goto loc_82EAE22C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAE194;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eae22c
	if (ctx.cr0.lt) goto loc_82EAE22C;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82eae1c4
	if (ctx.cr6.eq) goto loc_82EAE1C4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAE1BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eae22c
	if (ctx.cr0.lt) goto loc_82EAE22C;
loc_82EAE1C4:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAE1EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eae22c
	if (ctx.cr0.lt) goto loc_82EAE22C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82eae22c
	if (ctx.cr6.eq) goto loc_82EAE22C;
	// lhz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// lwz r9,2(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2);
	// ld r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 80);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r10,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r10.u64);
	// std r11,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r11.u64);
	// b 0x82eae22c
	goto loc_82EAE22C;
loc_82EAE224:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16387
	ctx.r3.u64 = ctx.r3.u64 | 16387;
loc_82EAE22C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAE234"))) PPC_WEAK_FUNC(sub_82EAE234);
PPC_FUNC_IMPL(__imp__sub_82EAE234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAE238"))) PPC_WEAK_FUNC(sub_82EAE238);
PPC_FUNC_IMPL(__imp__sub_82EAE238) {
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
	// bl 0x82eac640
	ctx.lr = 0x82EAE258;
	sub_82EAC640(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eae270
	if (ctx.cr0.eq) goto loc_82EAE270;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82eae270
	if (ctx.cr6.eq) goto loc_82EAE270;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8ee18
	ctx.lr = 0x82EAE270;
	sub_82E8EE18(ctx, base);
loc_82EAE270:
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

__attribute__((alias("__imp__sub_82EAE28C"))) PPC_WEAK_FUNC(sub_82EAE28C);
PPC_FUNC_IMPL(__imp__sub_82EAE28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAE290"))) PPC_WEAK_FUNC(sub_82EAE290);
PPC_FUNC_IMPL(__imp__sub_82EAE290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82EAE298;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwz r6,20(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lwz r5,24(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// addi r11,r11,1552
	ctx.r11.s64 = ctx.r11.s64 + 1552;
	// stw r8,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r6.u32);
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r5,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r5.u32);
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_82EAE2F8:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r7,r6,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r6.s64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x82eae318
	if (!ctx.cr0.eq) goto loc_82EAE318;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82eae2f8
	if (!ctx.cr6.eq) goto loc_82EAE2F8;
loc_82EAE318:
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82eae32c
	if (ctx.cr0.eq) goto loc_82EAE32C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// b 0x82eae39c
	goto loc_82EAE39C;
loc_82EAE32C:
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// cmpldi cr6,r29,0
	ctx.cr6.compare<uint64_t>(ctx.r29.u64, 0, ctx.xer);
	// ble cr6,0x82eae3a0
	if (!ctx.cr6.gt) goto loc_82EAE3A0;
loc_82EAE338:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r28,r30,r29
	ctx.r28.s64 = ctx.r29.s64 - ctx.r30.s64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAE35C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eae3a0
	if (ctx.cr0.lt) goto loc_82EAE3A0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eacc70
	ctx.lr = 0x82EAE374;
	sub_82EACC70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eae3a0
	if (ctx.cr0.lt) goto loc_82EAE3A0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x82eae398
	if (!ctx.cr6.eq) goto loc_82EAE398;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpld cr6,r30,r29
	ctx.cr6.compare<uint64_t>(ctx.r30.u64, ctx.r29.u64, ctx.xer);
	// blt cr6,0x82eae338
	if (ctx.cr6.lt) goto loc_82EAE338;
	// b 0x82eae3a0
	goto loc_82EAE3A0;
loc_82EAE398:
	// mulld r11,r28,r26
	ctx.r11.s64 = ctx.r28.s64 * ctx.r26.s64;
loc_82EAE39C:
	// std r11,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.r11.u64);
loc_82EAE3A0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAE3A8"))) PPC_WEAK_FUNC(sub_82EAE3A8);
PPC_FUNC_IMPL(__imp__sub_82EAE3A8) {
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
	// bl 0x82eacdb0
	ctx.lr = 0x82EAE3C8;
	sub_82EACDB0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eae3e0
	if (ctx.cr0.eq) goto loc_82EAE3E0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82eae3e0
	if (ctx.cr6.eq) goto loc_82EAE3E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8ee18
	ctx.lr = 0x82EAE3E0;
	sub_82E8EE18(ctx, base);
loc_82EAE3E0:
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

__attribute__((alias("__imp__sub_82EAE3FC"))) PPC_WEAK_FUNC(sub_82EAE3FC);
PPC_FUNC_IMPL(__imp__sub_82EAE3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAE400"))) PPC_WEAK_FUNC(sub_82EAE400);
PPC_FUNC_IMPL(__imp__sub_82EAE400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82EAE408;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82eae434
	if (!ctx.cr6.eq) goto loc_82EAE434;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16387
	ctx.r3.u64 = ctx.r3.u64 | 16387;
	// b 0x82eae5ec
	goto loc_82EAE5EC;
loc_82EAE434:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r25,-1
	ctx.r25.s64 = -1;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// std r29,0(r26)
	PPC_STORE_U64(ctx.r26.u32 + 0, ctx.r29.u64);
	// beq cr6,0x82eae44c
	if (ctx.cr6.eq) goto loc_82EAE44C;
	// std r25,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r25.u64);
loc_82EAE44C:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eae5e4
	if (ctx.cr6.eq) goto loc_82EAE5E4;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eae5e4
	if (ctx.cr6.eq) goto loc_82EAE5E4;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAE480;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eae5ec
	if (ctx.cr0.lt) goto loc_82EAE5EC;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eae5e4
	if (ctx.cr6.eq) goto loc_82EAE5E4;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// li r10,-1
	ctx.r10.s64 = -1;
	// divdu r30,r30,r11
	ctx.r30.u64 = ctx.r30.u64 / ctx.r11.u64;
	// tdllei r11,0
	if (ctx.r11.u64 <= 0) __builtin_debugtrap();
	// clrldi r11,r10,32
	ctx.r11.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// cmpld cr6,r30,r11
	ctx.cr6.compare<uint64_t>(ctx.r30.u64, ctx.r11.u64, ctx.xer);
	// ble cr6,0x82eae4bc
	if (!ctx.cr6.gt) goto loc_82EAE4BC;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,15005
	ctx.r3.u64 = ctx.r3.u64 | 15005;
	// b 0x82eae5ec
	goto loc_82EAE5EC;
loc_82EAE4BC:
	// std r29,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r29.u64);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAE4E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eae5ec
	if (ctx.cr0.lt) goto loc_82EAE5EC;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x82eacc70
	ctx.lr = 0x82EAE4FC;
	sub_82EACC70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eae5ec
	if (ctx.cr0.lt) goto loc_82EAE5EC;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82eae548
	if (!ctx.cr6.eq) goto loc_82EAE548;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mulld r11,r11,r5
	ctx.r11.s64 = ctx.r11.s64 * ctx.r5.s64;
	// std r11,0(r26)
	PPC_STORE_U64(ctx.r26.u32 + 0, ctx.r11.u64);
	// beq cr6,0x82eae5ec
	if (ctx.cr6.eq) goto loc_82EAE5EC;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mulli r11,r11,10000
	ctx.r11.s64 = ctx.r11.s64 * 10000;
	// clrldi r6,r11,32
	ctx.r6.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eae290
	ctx.lr = 0x82EAE544;
	sub_82EAE290(ctx, base);
	// b 0x82eae5ec
	goto loc_82EAE5EC;
loc_82EAE548:
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAE564;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eae5ec
	if (ctx.cr0.lt) goto loc_82EAE5EC;
	// b 0x82eae5a4
	goto loc_82EAE5A4;
loc_82EAE570:
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,6
	ctx.r4.s64 = ctx.r11.s64 + 6;
	// std r4,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r4.u64);
	// bl 0x82eacc70
	ctx.lr = 0x82EAE58C;
	sub_82EACC70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eae5bc
	if (ctx.cr0.lt) goto loc_82EAE5BC;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82eae5b8
	if (!ctx.cr6.eq) goto loc_82EAE5B8;
loc_82EAE5A4:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpld cr6,r30,r11
	ctx.cr6.compare<uint64_t>(ctx.r30.u64, ctx.r11.u64, ctx.xer);
	// blt cr6,0x82eae570
	if (ctx.cr6.lt) goto loc_82EAE570;
	// b 0x82eae5bc
	goto loc_82EAE5BC;
loc_82EAE5B8:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82EAE5BC:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpld cr6,r30,r11
	ctx.cr6.compare<uint64_t>(ctx.r30.u64, ctx.r11.u64, ctx.xer);
	// blt cr6,0x82eae5d0
	if (ctx.cr6.lt) goto loc_82EAE5D0;
	// std r25,0(r26)
	PPC_STORE_U64(ctx.r26.u32 + 0, ctx.r25.u64);
	// b 0x82eae5ec
	goto loc_82EAE5EC;
loc_82EAE5D0:
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mulld r11,r10,r11
	ctx.r11.s64 = ctx.r10.s64 * ctx.r11.s64;
	// std r11,0(r26)
	PPC_STORE_U64(ctx.r26.u32 + 0, ctx.r11.u64);
	// b 0x82eae5ec
	goto loc_82EAE5EC;
loc_82EAE5E4:
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14011
	ctx.r3.u64 = ctx.r3.u64 | 14011;
loc_82EAE5EC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAE5F4"))) PPC_WEAK_FUNC(sub_82EAE5F4);
PPC_FUNC_IMPL(__imp__sub_82EAE5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAE5F8"))) PPC_WEAK_FUNC(sub_82EAE5F8);
PPC_FUNC_IMPL(__imp__sub_82EAE5F8) {
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
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// divdu r10,r4,r11
	ctx.r10.u64 = ctx.r4.u64 / ctx.r11.u64;
	// tdllei r11,0
	if (ctx.r11.u64 <= 0) __builtin_debugtrap();
	// mulld r11,r10,r11
	ctx.r11.s64 = ctx.r10.s64 * ctx.r11.s64;
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// ble cr6,0x82eae63c
	if (!ctx.cr6.gt) goto loc_82EAE63C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82eae6e4
	goto loc_82EAE6E4;
loc_82EAE63C:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82eae6dc
	if (ctx.cr6.eq) goto loc_82EAE6DC;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82eae6dc
	if (ctx.cr6.eq) goto loc_82EAE6DC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// lwz r11,2(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 2);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82eae6d4
	if (ctx.cr6.eq) goto loc_82EAE6D4;
	// lwz r11,7(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 7);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eae680
	if (!ctx.cr6.eq) goto loc_82EAE680;
	// li r11,1
	ctx.r11.s64 = 1;
	// std r30,64(r31)
	PPC_STORE_U64(ctx.r31.u32 + 64, ctx.r30.u64);
	// sth r11,96(r31)
	PPC_STORE_U16(ctx.r31.u32 + 96, ctx.r11.u16);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// b 0x82eae6d0
	goto loc_82EAE6D0;
loc_82EAE680:
	// ld r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 104);
	// cmpld cr6,r30,r11
	ctx.cr6.compare<uint64_t>(ctx.r30.u64, ctx.r11.u64, ctx.xer);
	// beq cr6,0x82eae698
	if (ctx.cr6.eq) goto loc_82EAE698;
	// lhz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 96);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,96(r31)
	PPC_STORE_U16(ctx.r31.u32 + 96, ctx.r11.u16);
loc_82EAE698:
	// lwz r11,27(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 27);
	// lwz r10,7(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 7);
	// lwz r9,11(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 11);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82eae6d0
	if (!ctx.cr6.eq) goto loc_82EAE6D0;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 64);
	// tdllei r11,0
	if (ctx.r11.u64 <= 0) __builtin_debugtrap();
	// lhz r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 96);
	// divdu r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 / ctx.r11.u64;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82ead140
	ctx.lr = 0x82EAE6D0;
	sub_82EAD140(ctx, base);
loc_82EAE6D0:
	// std r30,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r30.u64);
loc_82EAE6D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82eae6e4
	goto loc_82EAE6E4;
loc_82EAE6DC:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16387
	ctx.r3.u64 = ctx.r3.u64 | 16387;
loc_82EAE6E4:
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

__attribute__((alias("__imp__sub_82EAE6FC"))) PPC_WEAK_FUNC(sub_82EAE6FC);
PPC_FUNC_IMPL(__imp__sub_82EAE6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAE700"))) PPC_WEAK_FUNC(sub_82EAE700);
PPC_FUNC_IMPL(__imp__sub_82EAE700) {
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
	// bl 0x82ead2d8
	ctx.lr = 0x82EAE720;
	sub_82EAD2D8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eae738
	if (ctx.cr0.eq) goto loc_82EAE738;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82eae738
	if (ctx.cr6.eq) goto loc_82EAE738;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8ee18
	ctx.lr = 0x82EAE738;
	sub_82E8EE18(ctx, base);
loc_82EAE738:
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

__attribute__((alias("__imp__sub_82EAE754"))) PPC_WEAK_FUNC(sub_82EAE754);
PPC_FUNC_IMPL(__imp__sub_82EAE754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAE758"))) PPC_WEAK_FUNC(sub_82EAE758);
PPC_FUNC_IMPL(__imp__sub_82EAE758) {
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
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-7264
	ctx.r11.s64 = ctx.r11.s64 + -7264;
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
loc_82EAE77C:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82eae79c
	if (!ctx.cr0.eq) goto loc_82EAE79C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82eae77c
	if (!ctx.cr6.eq) goto loc_82EAE77C;
loc_82EAE79C:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82eae7b8
	if (ctx.cr0.eq) goto loc_82EAE7B8;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82eae7b8
	if (!ctx.cr6.eq) goto loc_82EAE7B8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82eae80c
	goto loc_82EAE80C;
loc_82EAE7B8:
	// ld r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 72);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// ble cr6,0x82eae7d0
	if (!ctx.cr6.gt) goto loc_82EAE7D0;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,18000
	ctx.r3.u64 = ctx.r3.u64 | 18000;
	// b 0x82eae80c
	goto loc_82EAE80C;
loc_82EAE7D0:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eae7e8
	if (!ctx.cr6.eq) goto loc_82EAE7E8;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14011
	ctx.r3.u64 = ctx.r3.u64 | 14011;
	// b 0x82eae80c
	goto loc_82EAE80C;
loc_82EAE7E8:
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAE7FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eae80c
	if (ctx.cr0.lt) goto loc_82EAE80C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ead5e0
	ctx.lr = 0x82EAE80C;
	sub_82EAD5E0(ctx, base);
loc_82EAE80C:
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

__attribute__((alias("__imp__sub_82EAE820"))) PPC_WEAK_FUNC(sub_82EAE820);
PPC_FUNC_IMPL(__imp__sub_82EAE820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7658
	ctx.lr = 0x82EAE828;
	__savegprlr_20(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,88(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
	// mr r21,r27
	ctx.r21.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAE86C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eaea94
	if (ctx.cr0.lt) goto loc_82EAEA94;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r24,r29
	ctx.r24.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82eaea48
	if (!ctx.cr6.lt) goto loc_82EAEA48;
loc_82EAE884:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eae8a4
	if (ctx.cr6.eq) goto loc_82EAE8A4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAE8A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
loc_82EAE8A4:
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// std r27,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r27.u64);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// std r27,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r27.u64);
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAE8D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eaea94
	if (ctx.cr0.lt) goto loc_82EAEA94;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eaeac8
	if (ctx.cr6.eq) goto loc_82EAEAC8;
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,80(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAE904;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eaea94
	if (ctx.cr0.lt) goto loc_82EAEA94;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rotlwi r11,r25,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r25.u32, 0);
	// ld r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r28,r10,r11
	ctx.r28.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r11,36(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAE934;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eaea94
	if (ctx.cr0.lt) goto loc_82EAEA94;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82eaea38
	if (!ctx.cr6.lt) goto loc_82EAEA38;
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAE964;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eaea94
	if (ctx.cr0.lt) goto loc_82EAEA94;
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAE984;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eaea94
	if (ctx.cr0.lt) goto loc_82EAEA94;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// ld r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 48);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// ld r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r28,r8
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r8.u32, ctx.xer);
	// add r26,r11,r9
	ctx.r26.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bge cr6,0x82eaea34
	if (!ctx.cr6.lt) goto loc_82EAEA34;
loc_82EAE9AC:
	// std r27,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r27.u64);
	// addi r7,r1,120
	ctx.r7.s64 = ctx.r1.s64 + 120;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lhz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAE9D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eaea94
	if (ctx.cr0.lt) goto loc_82EAEA94;
	// ld r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r29,r11,r26
	ctx.r29.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82ead460
	ctx.lr = 0x82EAE9F4;
	sub_82EAD460(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eaea94
	if (ctx.cr0.lt) goto loc_82EAEA94;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82eacc70
	ctx.lr = 0x82EAEA0C;
	sub_82EACC70(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eaea94
	if (ctx.cr0.lt) goto loc_82EAEA94;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// bne cr6,0x82eaeabc
	if (!ctx.cr6.eq) goto loc_82EAEABC;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eae9ac
	if (ctx.cr6.lt) goto loc_82EAE9AC;
loc_82EAEA34:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
loc_82EAEA38:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eae884
	if (ctx.cr6.lt) goto loc_82EAE884;
loc_82EAEA48:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82EAEA4C:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82eaea98
	if (ctx.cr6.lt) goto loc_82EAEA98;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x82eaead4
	if (ctx.cr6.eq) goto loc_82EAEAD4;
	// std r27,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r27.u64);
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lhz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAEA7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eaea94
	if (ctx.cr0.lt) goto loc_82EAEA94;
	// ld r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// clrldi r11,r22,32
	ctx.r11.u64 = ctx.r22.u64 & 0xFFFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,0(r20)
	PPC_STORE_U64(ctx.r20.u32 + 0, ctx.r11.u64);
loc_82EAEA94:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82EAEA98:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eaeab0
	if (ctx.cr6.eq) goto loc_82EAEAB0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAEAB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EAEAB0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82fa76a8
	__restgprlr_20(ctx, base);
	return;
loc_82EAEABC:
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
	// li r21,1
	ctx.r21.s64 = 1;
	// b 0x82eaea48
	goto loc_82EAEA48;
loc_82EAEAC8:
	// lis r31,-16371
	ctx.r31.s64 = -1072889856;
	// ori r31,r31,14011
	ctx.r31.u64 = ctx.r31.u64 | 14011;
	// b 0x82eaea4c
	goto loc_82EAEA4C;
loc_82EAEAD4:
	// li r11,-1
	ctx.r11.s64 = -1;
	// std r11,0(r20)
	PPC_STORE_U64(ctx.r20.u32 + 0, ctx.r11.u64);
	// b 0x82eaea98
	goto loc_82EAEA98;
}

__attribute__((alias("__imp__sub_82EAEAE0"))) PPC_WEAK_FUNC(sub_82EAEAE0);
PPC_FUNC_IMPL(__imp__sub_82EAEAE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82EAEAE8;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82eaeb18
	if (!ctx.cr6.eq) goto loc_82EAEB18;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16387
	ctx.r3.u64 = ctx.r3.u64 | 16387;
	// b 0x82eaece0
	goto loc_82EAECE0;
loc_82EAEB18:
	// li r29,0
	ctx.r29.s64 = 0;
	// std r29,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.r29.u64);
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eaeb38
	if (!ctx.cr6.eq) goto loc_82EAEB38;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14011
	ctx.r3.u64 = ctx.r3.u64 | 14011;
	// b 0x82eaece0
	goto loc_82EAECE0;
loc_82EAEB38:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAEB5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eaecc0
	if (ctx.cr0.lt) goto loc_82EAECC0;
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mulld r4,r11,r28
	ctx.r4.s64 = ctx.r11.s64 * ctx.r28.s64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAEB88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eaecc0
	if (ctx.cr0.lt) goto loc_82EAECC0;
	// std r29,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r29.u64);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAEBB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eaecc0
	if (ctx.cr0.lt) goto loc_82EAECC0;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAEBD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eaecc0
	if (ctx.cr0.lt) goto loc_82EAECC0;
	// std r29,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r29.u64);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAEBFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eaecc0
	if (ctx.cr0.lt) goto loc_82EAECC0;
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// li r10,-1
	ctx.r10.s64 = -1;
	// subf r9,r11,r28
	ctx.r9.s64 = ctx.r28.s64 - ctx.r11.s64;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// cmpld cr6,r9,r10
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r10.u64, ctx.xer);
	// ble cr6,0x82eaec28
	if (!ctx.cr6.gt) goto loc_82EAEC28;
	// lis r31,-16371
	ctx.r31.s64 = -1072889856;
	// ori r31,r31,15002
	ctx.r31.u64 = ctx.r31.u64 | 15002;
	// b 0x82eaecc0
	goto loc_82EAECC0;
loc_82EAEC28:
	// std r29,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r29.u64);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rotlwi r10,r28,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r28.u32, 0);
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// lhz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// subf r4,r11,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAEC58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eaecc0
	if (ctx.cr0.lt) goto loc_82EAECC0;
	// ld r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 48);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// ld r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ld r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// std r4,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.r4.u64);
	// bl 0x82ead460
	ctx.lr = 0x82EAEC88;
	sub_82EAD460(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eaecc0
	if (ctx.cr0.lt) goto loc_82EAECC0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82eaecb0
	if (ctx.cr6.eq) goto loc_82EAECB0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r3,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAECB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EAECB0:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82eaecc0
	if (ctx.cr6.eq) goto loc_82EAECC0;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
loc_82EAECC0:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eaecdc
	if (ctx.cr6.eq) goto loc_82EAECDC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAECDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EAECDC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82EAECE0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAECE8"))) PPC_WEAK_FUNC(sub_82EAECE8);
PPC_FUNC_IMPL(__imp__sub_82EAECE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82EAECF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 64);
	// li r10,-1
	ctx.r10.s64 = -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// subf r9,r5,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r5.s64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmpld cr6,r9,r10
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r10.u64, ctx.xer);
	// bgt cr6,0x82eaed24
	if (ctx.cr6.gt) goto loc_82EAED24;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rotlwi r10,r5,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf r30,r10,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r10.s64;
	// b 0x82eaed28
	goto loc_82EAED28;
loc_82EAED24:
	// li r30,-1
	ctx.r30.s64 = -1;
loc_82EAED28:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,36(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAED4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eaed78
	if (ctx.cr0.lt) goto loc_82EAED78;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ead3d8
	ctx.lr = 0x82EAED64;
	sub_82EAD3D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eaed78
	if (ctx.cr0.lt) goto loc_82EAED78;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82eaed78
	if (ctx.cr6.eq) goto loc_82EAED78;
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
loc_82EAED78:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAED80"))) PPC_WEAK_FUNC(sub_82EAED80);
PPC_FUNC_IMPL(__imp__sub_82EAED80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82EAED88;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82eaeda8
	if (!ctx.cr6.eq) goto loc_82EAEDA8;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16387
	ctx.r3.u64 = ctx.r3.u64 | 16387;
	// b 0x82eaeec4
	goto loc_82EAEEC4;
loc_82EAEDA8:
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// std r28,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r28.u64);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAEDCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eaeec0
	if (ctx.cr0.lt) goto loc_82EAEEC0;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAEDF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eaeec0
	if (ctx.cr0.lt) goto loc_82EAEEC0;
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
	ctx.lr = 0x82EAEE10;
	sub_82E8EDD0(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne 0x82eaee24
	if (!ctx.cr0.eq) goto loc_82EAEE24;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x82eaeec0
	goto loc_82EAEEC0;
loc_82EAEE24:
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAEE48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eaeeb8
	if (ctx.cr0.lt) goto loc_82EAEEB8;
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 48);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82ead460
	ctx.lr = 0x82EAEE64;
	sub_82EAD460(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eaeeb8
	if (ctx.cr0.lt) goto loc_82EAEEB8;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 48);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAEE8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eaeeb8
	if (ctx.cr0.lt) goto loc_82EAEEB8;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAEEB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82EAEEB8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e8ee18
	ctx.lr = 0x82EAEEC0;
	sub_82E8EE18(ctx, base);
loc_82EAEEC0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82EAEEC4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAEECC"))) PPC_WEAK_FUNC(sub_82EAEECC);
PPC_FUNC_IMPL(__imp__sub_82EAEECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAEED0"))) PPC_WEAK_FUNC(sub_82EAEED0);
PPC_FUNC_IMPL(__imp__sub_82EAEED0) {
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
	// bl 0x82ead708
	ctx.lr = 0x82EAEEF0;
	sub_82EAD708(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eaef08
	if (ctx.cr0.eq) goto loc_82EAEF08;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82eaef08
	if (ctx.cr6.eq) goto loc_82EAEF08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8ee18
	ctx.lr = 0x82EAEF08;
	sub_82E8EE18(ctx, base);
loc_82EAEF08:
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

__attribute__((alias("__imp__sub_82EAEF24"))) PPC_WEAK_FUNC(sub_82EAEF24);
PPC_FUNC_IMPL(__imp__sub_82EAEF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAEF28"))) PPC_WEAK_FUNC(sub_82EAEF28);
PPC_FUNC_IMPL(__imp__sub_82EAEF28) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,4504
	ctx.r11.s64 = ctx.r11.s64 + 4504;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82ead2d8
	ctx.lr = 0x82EAEF54;
	sub_82EAD2D8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eaef64
	if (ctx.cr0.eq) goto loc_82EAEF64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8ee18
	ctx.lr = 0x82EAEF64;
	sub_82E8EE18(ctx, base);
loc_82EAEF64:
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

__attribute__((alias("__imp__sub_82EAEF80"))) PPC_WEAK_FUNC(sub_82EAEF80);
PPC_FUNC_IMPL(__imp__sub_82EAEF80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82EAEF88;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82eaece8
	ctx.lr = 0x82EAEF98;
	sub_82EAECE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eaefe0
	if (ctx.cr0.lt) goto loc_82EAEFE0;
	// li r11,0
	ctx.r11.s64 = 0;
	// lhz r29,114(r31)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r31.u32 + 114);
	// li r8,0
	ctx.r8.s64 = 0;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,255
	ctx.r5.s64 = 255;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eaeae0
	ctx.lr = 0x82EAEFC8;
	sub_82EAEAE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eaefe0
	if (ctx.cr0.lt) goto loc_82EAEFE0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ead3d8
	ctx.lr = 0x82EAEFE0;
	sub_82EAD3D8(ctx, base);
loc_82EAEFE0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAEFE8"))) PPC_WEAK_FUNC(sub_82EAEFE8);
PPC_FUNC_IMPL(__imp__sub_82EAEFE8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,4696
	ctx.r11.s64 = ctx.r11.s64 + 4696;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82ead2d8
	ctx.lr = 0x82EAF014;
	sub_82EAD2D8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eaf024
	if (ctx.cr0.eq) goto loc_82EAF024;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8ee18
	ctx.lr = 0x82EAF024;
	sub_82E8EE18(ctx, base);
loc_82EAF024:
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

__attribute__((alias("__imp__sub_82EAF040"))) PPC_WEAK_FUNC(sub_82EAF040);
PPC_FUNC_IMPL(__imp__sub_82EAF040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82EAF048;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82eaf078
	if (!ctx.cr6.eq) goto loc_82EAF078;
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// ori r31,r31,16387
	ctx.r31.u64 = ctx.r31.u64 | 16387;
	// b 0x82eaf15c
	goto loc_82EAF15C;
loc_82EAF078:
	// std r26,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.r26.u64);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82eadcc8
	ctx.lr = 0x82EAF090;
	sub_82EADCC8(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eaf140
	if (ctx.cr0.lt) goto loc_82EAF140;
	// ld r25,96(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82eadf58
	ctx.lr = 0x82EAF0B8;
	sub_82EADF58(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eaf140
	if (ctx.cr0.lt) goto loc_82EAF140;
	// std r26,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r26.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAF0DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAF0FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eaf140
	if (ctx.cr0.lt) goto loc_82EAF140;
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r4,r11,r25
	ctx.r4.u64 = ctx.r11.u64 + ctx.r25.u64;
	// std r4,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.r4.u64);
	// bl 0x82ead460
	ctx.lr = 0x82EAF118;
	sub_82EAD460(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eaf140
	if (ctx.cr0.lt) goto loc_82EAF140;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82eaf140
	if (ctx.cr6.eq) goto loc_82EAF140;
	// stw r29,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r29.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAF140;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EAF140:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82eaf15c
	if (ctx.cr6.eq) goto loc_82EAF15C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAF15C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EAF15C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAF168"))) PPC_WEAK_FUNC(sub_82EAF168);
PPC_FUNC_IMPL(__imp__sub_82EAF168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82EAF170;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82eaf1a0
	if (!ctx.cr6.eq) goto loc_82EAF1A0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16387
	ctx.r3.u64 = ctx.r3.u64 | 16387;
	// b 0x82eaf328
	goto loc_82EAF328;
loc_82EAF1A0:
	// li r29,0
	ctx.r29.s64 = 0;
	// std r29,0(r26)
	PPC_STORE_U64(ctx.r26.u32 + 0, ctx.r29.u64);
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eaf320
	if (ctx.cr6.eq) goto loc_82EAF320;
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eaf320
	if (ctx.cr6.eq) goto loc_82EAF320;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82eaf1d0
	if (ctx.cr6.eq) goto loc_82EAF1D0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// std r11,0(r24)
	PPC_STORE_U64(ctx.r24.u32 + 0, ctx.r11.u64);
loc_82EAF1D0:
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAF1F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eaf318
	if (ctx.cr0.lt) goto loc_82EAF318;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eaf214
	if (!ctx.cr6.eq) goto loc_82EAF214;
	// lis r31,-16371
	ctx.r31.s64 = -1072889856;
	// ori r31,r31,14011
	ctx.r31.u64 = ctx.r31.u64 | 14011;
	// b 0x82eaf318
	goto loc_82EAF318;
loc_82EAF214:
	// std r29,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r29.u64);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// divdu r28,r28,r11
	ctx.r28.u64 = ctx.r28.u64 / ctx.r11.u64;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// tdllei r11,0
	if (ctx.r11.u64 <= 0) __builtin_debugtrap();
	// bl 0x82eaeae0
	ctx.lr = 0x82EAF240;
	sub_82EAEAE0(ctx, base);
	// lwz r25,88(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eaf2fc
	if (ctx.cr0.lt) goto loc_82EAF2FC;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x82eacc70
	ctx.lr = 0x82EAF260;
	sub_82EACC70(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eaf2fc
	if (ctx.cr0.lt) goto loc_82EAF2FC;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82eaf298
	if (ctx.cr6.eq) goto loc_82EAF298;
	// cmpwi cr6,r27,3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 3, ctx.xer);
	// bne cr6,0x82eaf298
	if (!ctx.cr6.eq) goto loc_82EAF298;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r4,r28,1
	ctx.r4.s64 = ctx.r28.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82eae820
	ctx.lr = 0x82EAF294;
	sub_82EAE820(ctx, base);
	// b 0x82eaf2f8
	goto loc_82EAF2F8;
loc_82EAF298:
	// std r29,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r29.u64);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lhz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAF2BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eaf2fc
	if (ctx.cr0.lt) goto loc_82EAF2FC;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// ld r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// add r11,r5,r10
	ctx.r11.u64 = ctx.r5.u64 + ctx.r10.u64;
	// std r11,0(r26)
	PPC_STORE_U64(ctx.r26.u32 + 0, ctx.r11.u64);
	// beq cr6,0x82eaf2fc
	if (ctx.cr6.eq) goto loc_82EAF2FC;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mulli r11,r11,10000
	ctx.r11.s64 = ctx.r11.s64 * 10000;
	// clrldi r6,r11,32
	ctx.r6.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82eae290
	ctx.lr = 0x82EAF2F8;
	sub_82EAE290(ctx, base);
loc_82EAF2F8:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82EAF2FC:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82eaf318
	if (ctx.cr6.eq) goto loc_82EAF318;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAF318;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EAF318:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82eaf328
	goto loc_82EAF328;
loc_82EAF320:
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14011
	ctx.r3.u64 = ctx.r3.u64 | 14011;
loc_82EAF328:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAF330"))) PPC_WEAK_FUNC(sub_82EAF330);
PPC_FUNC_IMPL(__imp__sub_82EAF330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82EAF338;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r4,88(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// bl 0x82eac7c8
	ctx.lr = 0x82EAF350;
	sub_82EAC7C8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eaf424
	if (ctx.cr0.lt) goto loc_82EAF424;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAF374;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eaf424
	if (ctx.cr0.lt) goto loc_82EAF424;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eaf3f4
	if (ctx.cr6.eq) goto loc_82EAF3F4;
loc_82EAF38C:
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAF3A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eaf424
	if (ctx.cr0.lt) goto loc_82EAF424;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82eaed80
	ctx.lr = 0x82EAF3BC;
	sub_82EAED80(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eaf424
	if (ctx.cr0.lt) goto loc_82EAF424;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eaf3e4
	if (ctx.cr6.eq) goto loc_82EAF3E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAF3E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
loc_82EAF3E4:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eaf38c
	if (ctx.cr6.lt) goto loc_82EAF38C;
loc_82EAF3F4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAF408;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eaf424
	if (ctx.cr0.eq) goto loc_82EAF424;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAF420;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82EAF424:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eaf440
	if (ctx.cr6.eq) goto loc_82EAF440;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAF440;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EAF440:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAF44C"))) PPC_WEAK_FUNC(sub_82EAF44C);
PPC_FUNC_IMPL(__imp__sub_82EAF44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAF450"))) PPC_WEAK_FUNC(sub_82EAF450);
PPC_FUNC_IMPL(__imp__sub_82EAF450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82EAF458;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAF47C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x82eaeae0
	ctx.lr = 0x82EAF498;
	sub_82EAEAE0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAF4A0"))) PPC_WEAK_FUNC(sub_82EAF4A0);
PPC_FUNC_IMPL(__imp__sub_82EAF4A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82EAF4A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82eaf4c8
	if (!ctx.cr6.eq) goto loc_82EAF4C8;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16387
	ctx.r3.u64 = ctx.r3.u64 | 16387;
	// b 0x82eaf540
	goto loc_82EAF540;
loc_82EAF4C8:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAF4EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eaf520
	if (ctx.cr0.lt) goto loc_82EAF520;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82eaed80
	ctx.lr = 0x82EAF500;
	sub_82EAED80(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eaf520
	if (ctx.cr0.lt) goto loc_82EAF520;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAF520;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EAF520:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eaf53c
	if (ctx.cr6.eq) goto loc_82EAF53C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAF53C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EAF53C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82EAF540:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAF548"))) PPC_WEAK_FUNC(sub_82EAF548);
PPC_FUNC_IMPL(__imp__sub_82EAF548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82EAF550;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r24,-1
	ctx.r24.s64 = -1;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// std r26,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r26.u64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// bl 0x82eadcc8
	ctx.lr = 0x82EAF57C;
	sub_82EADCC8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bge 0x82eaf63c
	if (!ctx.cr0.lt) goto loc_82EAF63C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82eaf4a0
	ctx.lr = 0x82EAF590;
	sub_82EAF4A0(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eaf7e4
	if (ctx.cr0.lt) goto loc_82EAF7E4;
	// std r26,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r26.u64);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAF5BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eaf7e4
	if (ctx.cr0.lt) goto loc_82EAF7E4;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAF5E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eaf7e4
	if (ctx.cr0.lt) goto loc_82EAF7E4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ead578
	ctx.lr = 0x82EAF5F4;
	sub_82EAD578(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eaf7e4
	if (ctx.cr0.lt) goto loc_82EAF7E4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rldicl r10,r25,32,32
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u64, 32) & 0xFFFFFFFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAF618;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eaf7e4
	if (ctx.cr0.lt) goto loc_82EAF7E4;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// ld r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 48);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r27,r11,r9
	ctx.r27.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x82eaf67c
	goto loc_82EAF67C;
loc_82EAF63C:
	// ld r27,88(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82eadf58
	ctx.lr = 0x82EAF658;
	sub_82EADF58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82eaf710
	if (!ctx.cr0.lt) goto loc_82EAF710;
	// lis r11,-16371
	ctx.r11.s64 = -1072889856;
	// ori r11,r11,14037
	ctx.r11.u64 = ctx.r11.u64 | 14037;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82eaf7e0
	if (!ctx.cr6.eq) goto loc_82EAF7E0;
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// beq cr6,0x82eaf7e0
	if (ctx.cr6.eq) goto loc_82EAF7E0;
loc_82EAF67C:
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAF698;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eaf7e4
	if (ctx.cr0.lt) goto loc_82EAF7E4;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rotlwi r5,r25,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r25.u32, 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mullw r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// add r4,r11,r27
	ctx.r4.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x82ead3d8
	ctx.lr = 0x82EAF6BC;
	sub_82EAD3D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eaf7e4
	if (ctx.cr0.lt) goto loc_82EAF7E4;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAF6E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eaf7e4
	if (ctx.cr0.lt) goto loc_82EAF7E4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAF704;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eaf7e4
	if (ctx.cr0.lt) goto loc_82EAF7E4;
	// b 0x82eaf714
	goto loc_82EAF714;
loc_82EAF710:
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82EAF714:
	// std r26,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r26.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bctrl 
	ctx.lr = 0x82EAF730;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lhz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAF750;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eaf7e4
	if (ctx.cr0.lt) goto loc_82EAF7E4;
	// std r26,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r26.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r28,r11,r27
	ctx.r28.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAF77C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lhz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAF798;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eaf7e4
	if (ctx.cr0.lt) goto loc_82EAF7E4;
	// ld r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 64);
	// li r9,-1
	ctx.r9.s64 = -1;
	// ld r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpld cr6,r8,r9
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r9.u64, ctx.xer);
	// bgt cr6,0x82eaf7cc
	if (ctx.cr6.gt) goto loc_82EAF7CC;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// subf r5,r10,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_82EAF7CC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ead3d8
	ctx.lr = 0x82EAF7D8;
	sub_82EAD3D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82eaf7e4
	goto loc_82EAF7E4;
loc_82EAF7E0:
	// li r31,1
	ctx.r31.s64 = 1;
loc_82EAF7E4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82eaf800
	if (ctx.cr6.eq) goto loc_82EAF800;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAF800;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EAF800:
	// ld r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 72);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r11,72(r30)
	PPC_STORE_U64(ctx.r30.u32 + 72, ctx.r11.u64);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAF818"))) PPC_WEAK_FUNC(sub_82EAF818);
PPC_FUNC_IMPL(__imp__sub_82EAF818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82EAF820;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAF848;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// bl 0x82eaf168
	ctx.lr = 0x82EAF864;
	sub_82EAF168(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAF86C"))) PPC_WEAK_FUNC(sub_82EAF86C);
PPC_FUNC_IMPL(__imp__sub_82EAF86C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAF870"))) PPC_WEAK_FUNC(sub_82EAF870);
PPC_FUNC_IMPL(__imp__sub_82EAF870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82EAF878;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 72);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bne cr6,0x82eaf894
	if (!ctx.cr6.eq) goto loc_82EAF894;
	// bl 0x82ead5e0
	ctx.lr = 0x82EAF894;
	sub_82EAD5E0(ctx, base);
loc_82EAF894:
	// ld r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 72);
	// cmpld cr6,r27,r11
	ctx.cr6.compare<uint64_t>(ctx.r27.u64, ctx.r11.u64, ctx.xer);
	// ble cr6,0x82eaf8ac
	if (!ctx.cr6.gt) goto loc_82EAF8AC;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14002
	ctx.r3.u64 = ctx.r3.u64 | 14002;
	// b 0x82eafb14
	goto loc_82EAFB14;
loc_82EAF8AC:
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAF8D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eafae0
	if (ctx.cr0.lt) goto loc_82EAFAE0;
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mulld r4,r11,r27
	ctx.r4.s64 = ctx.r11.s64 * ctx.r27.s64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAF8FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82eaf968
	if (!ctx.cr0.lt) goto loc_82EAF968;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAF920;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eafae0
	if (ctx.cr0.lt) goto loc_82EAFAE0;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eaf954
	if (ctx.cr6.eq) goto loc_82EAF954;
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAF950;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82eaf960
	goto loc_82EAF960;
loc_82EAF954:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82eaf4a0
	ctx.lr = 0x82EAF960;
	sub_82EAF4A0(ctx, base);
loc_82EAF960:
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eafae0
	if (ctx.cr0.lt) goto loc_82EAFAE0;
loc_82EAF968:
	// std r28,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r28.u64);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAF988;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eafae0
	if (ctx.cr0.lt) goto loc_82EAFAE0;
	// ld r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// li r10,-1
	ctx.r10.s64 = -1;
	// subf r9,r11,r27
	ctx.r9.s64 = ctx.r27.s64 - ctx.r11.s64;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// cmpld cr6,r9,r10
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r10.u64, ctx.xer);
	// blt cr6,0x82eaf9b4
	if (ctx.cr6.lt) goto loc_82EAF9B4;
	// lis r31,-16371
	ctx.r31.s64 = -1072889856;
	// ori r31,r31,14011
	ctx.r31.u64 = ctx.r31.u64 | 14011;
	// b 0x82eafae0
	goto loc_82EAFAE0;
loc_82EAF9B4:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// rotlwi r9,r27,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r27.u32, 0);
	// subf r29,r11,r9
	ctx.r29.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82eafa08
	if (ctx.cr6.lt) goto loc_82EAFA08;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eaf9ec
	if (ctx.cr6.eq) goto loc_82EAF9EC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAF9E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
loc_82EAF9EC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82eaf4a0
	ctx.lr = 0x82EAF9F8;
	sub_82EAF4A0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eafae0
	if (ctx.cr0.lt) goto loc_82EAFAE0;
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// subf r29,r11,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r11.s64;
loc_82EAFA08:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82eafa24
	if (!ctx.cr6.eq) goto loc_82EAFA24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82ead578
	ctx.lr = 0x82EAFA1C;
	sub_82EAD578(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eafae0
	if (ctx.cr0.lt) goto loc_82EAFAE0;
loc_82EAFA24:
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAFA40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eafae0
	if (ctx.cr0.lt) goto loc_82EAFAE0;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eafa74
	if (ctx.cr6.lt) goto loc_82EAFA74;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r29,1
	ctx.r4.s64 = ctx.r29.s64 + 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAFA6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eafae0
	if (ctx.cr0.lt) goto loc_82EAFAE0;
loc_82EAFA74:
	// std r28,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r28.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAFA94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lhz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAFAB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eafae0
	if (ctx.cr0.lt) goto loc_82EAFAE0;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAFADC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82EAFAE0:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eafafc
	if (ctx.cr6.eq) goto loc_82EAFAFC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAFAFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EAFAFC:
	// ld r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 72);
	// cmpld cr6,r27,r11
	ctx.cr6.compare<uint64_t>(ctx.r27.u64, ctx.r11.u64, ctx.xer);
	// blt cr6,0x82eafb10
	if (ctx.cr6.lt) goto loc_82EAFB10;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r11,72(r30)
	PPC_STORE_U64(ctx.r30.u32 + 72, ctx.r11.u64);
loc_82EAFB10:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82EAFB14:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAFB1C"))) PPC_WEAK_FUNC(sub_82EAFB1C);
PPC_FUNC_IMPL(__imp__sub_82EAFB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAFB20"))) PPC_WEAK_FUNC(sub_82EAFB20);
PPC_FUNC_IMPL(__imp__sub_82EAFB20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82EAFB28;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82eaf818
	ctx.lr = 0x82EAFB44;
	sub_82EAF818(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82eafb7c
	if (!ctx.cr0.lt) goto loc_82EAFB7C;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eafb7c
	if (ctx.cr6.eq) goto loc_82EAFB7C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAFB7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EAFB7C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAFB84"))) PPC_WEAK_FUNC(sub_82EAFB84);
PPC_FUNC_IMPL(__imp__sub_82EAFB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAFB88"))) PPC_WEAK_FUNC(sub_82EAFB88);
PPC_FUNC_IMPL(__imp__sub_82EAFB88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAFBB4"))) PPC_WEAK_FUNC(sub_82EAFBB4);
PPC_FUNC_IMPL(__imp__sub_82EAFBB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAFBB8"))) PPC_WEAK_FUNC(sub_82EAFBB8);
PPC_FUNC_IMPL(__imp__sub_82EAFBB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82EAFBC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eafc04
	if (ctx.cr6.eq) goto loc_82EAFC04;
loc_82EAFBDC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eafc04
	if (ctx.cr6.lt) goto loc_82EAFC04;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eafc5c
	if (ctx.cr6.lt) goto loc_82EAFC5C;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// lwz r31,100(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82eafbdc
	if (!ctx.cr6.eq) goto loc_82EAFBDC;
loc_82EAFC04:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82eafca4
	if (ctx.cr6.eq) goto loc_82EAFCA4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAFC28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eafc9c
	if (ctx.cr0.lt) goto loc_82EAFC9C;
	// li r11,20
	ctx.r11.s64 = 20;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// divwu r11,r30,r11
	ctx.r11.u32 = ctx.r30.u32 / ctx.r11.u32;
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// beq cr6,0x82eafc54
	if (ctx.cr6.eq) goto loc_82EAFC54;
	// stw r11,100(r29)
	PPC_STORE_U32(ctx.r29.u32 + 100, ctx.r11.u32);
loc_82EAFC54:
	// stw r31,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r31.u32);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82EAFC5C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,-31972
	ctx.r9.s64 = -2095316992;
	// li r3,0
	ctx.r3.s64 = 0;
	// subf r10,r11,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
	// addi r9,r9,-27208
	ctx.r9.s64 = ctx.r9.s64 + -27208;
	// rlwinm r11,r10,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r8,r10,29
	ctx.r8.u64 = ctx.r10.u32 & 0x7;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r7,r10,5
	ctx.r7.s64 = ctx.r10.s64 + 5;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// lbz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stb r9,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r9.u8);
	// stwx r28,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r28.u32);
loc_82EAFC9C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_82EAFCA4:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x82eafc9c
	goto loc_82EAFC9C;
}

__attribute__((alias("__imp__sub_82EAFCB0"))) PPC_WEAK_FUNC(sub_82EAFCB0);
PPC_FUNC_IMPL(__imp__sub_82EAFCB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eafcc8
	if (!ctx.cr6.eq) goto loc_82EAFCC8;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14006
	ctx.r3.u64 = ctx.r3.u64 | 14006;
	// blr 
	return;
loc_82EAFCC8:
	// lwz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,30
	ctx.r11.s64 = ctx.r11.s64 + 30;
	// beq cr6,0x82eafce0
	if (ctx.cr6.eq) goto loc_82EAFCE0;
	// std r11,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r11.u64);
loc_82EAFCE0:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82eafcec
	if (ctx.cr6.eq) goto loc_82EAFCEC;
	// std r11,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r11.u64);
loc_82EAFCEC:
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAFCF8"))) PPC_WEAK_FUNC(sub_82EAFCF8);
PPC_FUNC_IMPL(__imp__sub_82EAFCF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eafd10
	if (!ctx.cr6.eq) goto loc_82EAFD10;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14006
	ctx.r3.u64 = ctx.r3.u64 | 14006;
	// blr 
	return;
loc_82EAFD10:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82eafd24
	if (!ctx.cr6.eq) goto loc_82EAFD24;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_82EAFD24:
	// lwz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAFD34"))) PPC_WEAK_FUNC(sub_82EAFD34);
PPC_FUNC_IMPL(__imp__sub_82EAFD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAFD38"))) PPC_WEAK_FUNC(sub_82EAFD38);
PPC_FUNC_IMPL(__imp__sub_82EAFD38) {
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
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82eafd5c
	if (ctx.cr6.eq) goto loc_82EAFD5C;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_82EAFD5C:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eafbb8
	ctx.lr = 0x82EAFD6C;
	sub_82EAFBB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eafd80
	if (ctx.cr0.lt) goto loc_82EAFD80;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
loc_82EAFD80:
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

__attribute__((alias("__imp__sub_82EAFD9C"))) PPC_WEAK_FUNC(sub_82EAFD9C);
PPC_FUNC_IMPL(__imp__sub_82EAFD9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAFDA0"))) PPC_WEAK_FUNC(sub_82EAFDA0);
PPC_FUNC_IMPL(__imp__sub_82EAFDA0) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82eafdb8
	if (!ctx.cr6.eq) goto loc_82EAFDB8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_82EAFDB8:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82eafde8
	goto loc_82EAFDE8;
loc_82EAFDCC:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eafde4
	if (ctx.cr6.lt) goto loc_82EAFDE4;
	// addi r9,r11,20
	ctx.r9.s64 = ctx.r11.s64 + 20;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82eafdf4
	if (ctx.cr6.lt) goto loc_82EAFDF4;
loc_82EAFDE4:
	// lwz r10,100(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
loc_82EAFDE8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82eafdcc
	if (!ctx.cr6.eq) goto loc_82EAFDCC;
	// blr 
	return;
loc_82EAFDF4:
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// lis r8,-31972
	ctx.r8.s64 = -2095316992;
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r8,r8,-27208
	ctx.r8.s64 = ctx.r8.s64 + -27208;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// clrlwi r7,r11,29
	ctx.r7.u64 = ctx.r11.u32 & 0x7;
	// lbz r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 16);
	// lbzx r8,r7,r8
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// and. r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAFE34"))) PPC_WEAK_FUNC(sub_82EAFE34);
PPC_FUNC_IMPL(__imp__sub_82EAFE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAFE38"))) PPC_WEAK_FUNC(sub_82EAFE38);
PPC_FUNC_IMPL(__imp__sub_82EAFE38) {
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
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eafe5c
	if (!ctx.cr6.eq) goto loc_82EAFE5C;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14006
	ctx.r3.u64 = ctx.r3.u64 | 14006;
	// b 0x82eafea8
	goto loc_82EAFEA8;
loc_82EAFE5C:
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// blt cr6,0x82eafe78
	if (ctx.cr6.lt) goto loc_82EAFE78;
	// cmpwi cr6,r5,255
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 255, ctx.xer);
	// beq cr6,0x82eafe78
	if (ctx.cr6.eq) goto loc_82EAFE78;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82eafea8
	goto loc_82EAFEA8;
loc_82EAFE78:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// sth r4,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r4.u16);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r3,76
	ctx.r3.s64 = ctx.r3.s64 + 76;
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82eafd38
	ctx.lr = 0x82EAFE94;
	sub_82EAFD38(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lis r10,-32761
	ctx.r10.s64 = -2147024896;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// ori r10,r10,14
	ctx.r10.u64 = ctx.r10.u64 | 14;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_82EAFEA8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAFEB8"))) PPC_WEAK_FUNC(sub_82EAFEB8);
PPC_FUNC_IMPL(__imp__sub_82EAFEB8) {
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
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eafee4
	if (!ctx.cr6.eq) goto loc_82EAFEE4;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14006
	ctx.r3.u64 = ctx.r3.u64 | 14006;
	// b 0x82eafefc
	goto loc_82EAFEFC;
loc_82EAFEE4:
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e954e8
	ctx.lr = 0x82EAFEF0;
	sub_82E954E8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
loc_82EAFEFC:
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

__attribute__((alias("__imp__sub_82EAFF10"))) PPC_WEAK_FUNC(sub_82EAFF10);
PPC_FUNC_IMPL(__imp__sub_82EAFF10) {
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
	// bl 0x82e95af0
	ctx.lr = 0x82EAFF28;
	sub_82E95AF0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r11,4756
	ctx.r9.s64 = ctx.r11.s64 + 4756;
	// addi r10,r10,9000
	ctx.r10.s64 = ctx.r10.s64 + 9000;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r10,r10,20320
	ctx.r10.s64 = ctx.r10.s64 + 20320;
	// sth r11,92(r31)
	PPC_STORE_U16(ctx.r31.u32 + 92, ctx.r11.u16);
	// addi r8,r9,27968
	ctx.r8.s64 = ctx.r9.s64 + 27968;
	// stb r11,94(r31)
	PPC_STORE_U8(ctx.r31.u32 + 94, ctx.r11.u8);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// addi r10,r31,76
	ctx.r10.s64 = ctx.r31.s64 + 76;
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// lwz r10,27968(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 27968);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// lwz r10,12(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82EAFFB8"))) PPC_WEAK_FUNC(sub_82EAFFB8);
PPC_FUNC_IMPL(__imp__sub_82EAFFB8) {
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
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r11,r11,4756
	ctx.r11.s64 = ctx.r11.s64 + 4756;
	// addi r10,r10,9000
	ctx.r10.s64 = ctx.r10.s64 + 9000;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x82f727f8
	ctx.lr = 0x82EAFFEC;
	sub_82F727F8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// addi r11,r11,20320
	ctx.r11.s64 = ctx.r11.s64 + 20320;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eb0010
	if (!ctx.cr6.eq) goto loc_82EB0010;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e954e8
	ctx.lr = 0x82EB0010;
	sub_82E954E8(ctx, base);
loc_82EB0010:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e95e10
	ctx.lr = 0x82EB0018;
	sub_82E95E10(ctx, base);
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

__attribute__((alias("__imp__sub_82EB002C"))) PPC_WEAK_FUNC(sub_82EB002C);
PPC_FUNC_IMPL(__imp__sub_82EB002C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB0030"))) PPC_WEAK_FUNC(sub_82EB0030);
PPC_FUNC_IMPL(__imp__sub_82EB0030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82EB0038;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eb005c
	if (!ctx.cr6.eq) goto loc_82EB005C;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14006
	ctx.r3.u64 = ctx.r3.u64 | 14006;
	// b 0x82eb01cc
	goto loc_82EB01CC;
loc_82EB005C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82eb0070
	if (!ctx.cr6.eq) goto loc_82EB0070;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82eb01cc
	goto loc_82EB01CC;
loc_82EB0070:
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r26,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r26.u32);
	// lwz r31,64(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmplwi cr6,r31,30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 30, ctx.xer);
	// bge cr6,0x82eb0098
	if (!ctx.cr6.lt) goto loc_82EB0098;
	// li r11,30
	ctx.r11.s64 = 30;
loc_82EB0088:
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// ori r3,r3,14001
	ctx.r3.u64 = ctx.r3.u64 | 14001;
	// b 0x82eb01cc
	goto loc_82EB01CC;
loc_82EB0098:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82eafeb8
	ctx.lr = 0x82EB00A0;
	sub_82EAFEB8(ctx, base);
	// addi r29,r30,40
	ctx.r29.s64 = ctx.r30.s64 + 40;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82e95128
	ctx.lr = 0x82EB00B0;
	sub_82E95128(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// bl 0x82e951b0
	ctx.lr = 0x82EB00BC;
	sub_82E951B0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r30,72
	ctx.r3.s64 = ctx.r30.s64 + 72;
	// bl 0x82e97908
	ctx.lr = 0x82EB00C8;
	sub_82E97908(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb01cc
	if (ctx.cr0.lt) goto loc_82EB01CC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// sth r26,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r26.u16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e95240
	ctx.lr = 0x82EB00E0;
	sub_82E95240(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb01cc
	if (ctx.cr0.lt) goto loc_82EB01CC;
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// li r27,30
	ctx.r27.s64 = 30;
	// rotlwi r11,r10,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// addi r11,r11,30
	ctx.r11.s64 = ctx.r11.s64 + 30;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb0088
	if (ctx.cr6.lt) goto loc_82EB0088;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eb018c
	if (ctx.cr6.eq) goto loc_82EB018C;
loc_82EB0110:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// sth r26,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r26.u16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r26,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r26.u16);
	// bl 0x82e95240
	ctx.lr = 0x82EB0124;
	sub_82E95240(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb01cc
	if (ctx.cr0.lt) goto loc_82EB01CC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// bl 0x82e95240
	ctx.lr = 0x82EB0138;
	sub_82E95240(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb01cc
	if (ctx.cr0.lt) goto loc_82EB01CC;
	// lhz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82eb0160
	if (ctx.cr6.lt) goto loc_82EB0160;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x82eb0160
	if (ctx.cr6.eq) goto loc_82EB0160;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
loc_82EB0160:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r30,76
	ctx.r3.s64 = ctx.r30.s64 + 76;
	// bl 0x82eafd38
	ctx.lr = 0x82EB0170;
	sub_82EAFD38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82eb01bc
	if (ctx.cr0.eq) goto loc_82EB01BC;
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r31,r11,16
	ctx.r31.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82eb0110
	if (ctx.cr6.lt) goto loc_82EB0110;
loc_82EB018C:
	// stw r27,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB01A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmpld cr6,r3,r11
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, ctx.r11.u64, ctx.xer);
	// beq cr6,0x82eb01c8
	if (ctx.cr6.eq) goto loc_82EB01C8;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,15002
	ctx.r3.u64 = ctx.r3.u64 | 15002;
	// b 0x82eb01cc
	goto loc_82EB01CC;
loc_82EB01BC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82eb01cc
	goto loc_82EB01CC;
loc_82EB01C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EB01CC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB01D4"))) PPC_WEAK_FUNC(sub_82EB01D4);
PPC_FUNC_IMPL(__imp__sub_82EB01D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB01D8"))) PPC_WEAK_FUNC(sub_82EB01D8);
PPC_FUNC_IMPL(__imp__sub_82EB01D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82EB01E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eb020c
	if (!ctx.cr6.eq) goto loc_82EB020C;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14006
	ctx.r3.u64 = ctx.r3.u64 | 14006;
	// b 0x82eb03a8
	goto loc_82EB03A8;
loc_82EB020C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82eb03a0
	if (ctx.cr6.eq) goto loc_82EB03A0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82eb0224
	if (ctx.cr6.eq) goto loc_82EB0224;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82eb03a0
	if (ctx.cr6.eq) goto loc_82EB03A0;
loc_82EB0224:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB0240;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// ld r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// blt cr6,0x82eb0260
	if (ctx.cr6.lt) goto loc_82EB0260;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,15002
	ctx.r3.u64 = ctx.r3.u64 | 15002;
	// b 0x82eb03a8
	goto loc_82EB03A8;
loc_82EB0260:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x82eb027c
	if (!ctx.cr6.gt) goto loc_82EB027C;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14001
	ctx.r3.u64 = ctx.r3.u64 | 14001;
	// b 0x82eb03a8
	goto loc_82EB03A8;
loc_82EB027C:
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// lhz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// lhz r9,22(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 22);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// rlwinm r8,r10,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// ld r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// rlwinm r6,r9,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// rlwimi r8,r10,8,16,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r8.u64 & 0xFFFFFFFFFFFF00FF);
	// lwbrx r11,0,r11
	ctx.r11.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r11.u32));
	// rlwimi r6,r9,8,16,23
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF00) | (ctx.r6.u64 & 0xFFFFFFFFFFFF00FF);
	// sth r8,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r8.u16);
	// li r5,16
	ctx.r5.s64 = 16;
	// sth r6,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, ctx.r6.u16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r7,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x82EB02C0;
	sub_82FA77C0(ctx, base);
	// ld r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// addi r8,r31,72
	ctx.r8.s64 = ctx.r31.s64 + 72;
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r7,r10,8,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// rlwimi r7,r10,24,16,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwinm r6,r9,8,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF;
	// rlwimi r7,r10,8,8,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF0000) | (ctx.r7.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r6,r9,24,16,23
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 24) & 0xFF00) | (ctx.r6.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r7,r10,24,0,7
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0xFF000000) | (ctx.r7.u64 & 0xFFFFFFFF00FFFFFF);
	// rlwimi r6,r9,8,8,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF0000) | (ctx.r6.u64 & 0xFFFFFFFFFF00FFFF);
	// clrldi r10,r7,32
	ctx.r10.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// rlwimi r6,r9,24,0,7
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 24) & 0xFF000000) | (ctx.r6.u64 & 0xFFFFFFFF00FFFFFF);
	// rldimi r10,r6,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// std r10,16(r30)
	PPC_STORE_U64(ctx.r30.u32 + 16, ctx.r10.u64);
	// lwbrx r10,0,r8
	ctx.r10.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r8.u32));
	// stwu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// lwz r10,180(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwinm r9,r10,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// rlwimi r9,r10,8,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// sthu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// lwz r10,180(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r30,r11,2
	ctx.r30.s64 = ctx.r11.s64 + 2;
	// ble cr6,0x82eb0398
	if (!ctx.cr6.gt) goto loc_82EB0398;
	// addi r28,r31,76
	ctx.r28.s64 = ctx.r31.s64 + 76;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82EB0338:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82eafda0
	ctx.lr = 0x82EB0348;
	sub_82EAFDA0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r10,r11,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// rlwimi r10,r11,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// sth r10,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r10.u16);
	// bl 0x82eafda0
	ctx.lr = 0x82EB036C;
	sub_82EAFDA0(ctx, base);
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// clrlwi r29,r11,16
	ctx.r29.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lhz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// rlwinm r10,r11,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// rlwimi r10,r11,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// sthu r10,2(r30)
	ea = 2 + ctx.r30.u32;
	PPC_STORE_U16(ea, ctx.r10.u16);
	ctx.r30.u32 = ea;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// blt cr6,0x82eb0338
	if (ctx.cr6.lt) goto loc_82EB0338;
loc_82EB0398:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82eb03a8
	goto loc_82EB03A8;
loc_82EB03A0:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82EB03A8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB03B0"))) PPC_WEAK_FUNC(sub_82EB03B0);
PPC_FUNC_IMPL(__imp__sub_82EB03B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eb03c8
	if (!ctx.cr6.eq) goto loc_82EB03C8;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14006
	ctx.r3.u64 = ctx.r3.u64 | 14006;
	// blr 
	return;
loc_82EB03C8:
	// ld r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82eb03d8
	if (ctx.cr6.eq) goto loc_82EB03D8;
	// std r11,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r11.u64);
loc_82EB03D8:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82eb03e4
	if (ctx.cr6.eq) goto loc_82EB03E4;
	// std r11,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r11.u64);
loc_82EB03E4:
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB03F0"))) PPC_WEAK_FUNC(sub_82EB03F0);
PPC_FUNC_IMPL(__imp__sub_82EB03F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82EB03F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eb041c
	if (!ctx.cr6.eq) goto loc_82EB041C;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14006
	ctx.r3.u64 = ctx.r3.u64 | 14006;
	// b 0x82eb04f4
	goto loc_82EB04F4;
loc_82EB041C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82eb0430
	if (!ctx.cr6.eq) goto loc_82EB0430;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82eb04f4
	goto loc_82EB04F4;
loc_82EB0430:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r28,64(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r28,24
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 24, ctx.xer);
	// bge cr6,0x82eb0458
	if (!ctx.cr6.lt) goto loc_82EB0458;
	// li r11,24
	ctx.r11.s64 = 24;
loc_82EB0448:
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// ori r3,r3,14001
	ctx.r3.u64 = ctx.r3.u64 | 14001;
	// b 0x82eb04f4
	goto loc_82EB04F4;
loc_82EB0458:
	// addi r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 + 40;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e95128
	ctx.lr = 0x82EB0468;
	sub_82E95128(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e951b0
	ctx.lr = 0x82EB0474;
	sub_82E951B0(ctx, base);
	// li r10,-1
	ctx.r10.s64 = -1;
	// ld r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// ble cr6,0x82eb0494
	if (!ctx.cr6.gt) goto loc_82EB0494;
loc_82EB0488:
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,15002
	ctx.r3.u64 = ctx.r3.u64 | 15002;
	// b 0x82eb04f4
	goto loc_82EB04F4;
loc_82EB0494:
	// cmpldi cr6,r11,24
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 24, ctx.xer);
	// blt cr6,0x82eb0488
	if (ctx.cr6.lt) goto loc_82EB0488;
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r9,r11,-24
	ctx.r9.s64 = ctx.r11.s64 + -24;
	// cmpld cr6,r10,r9
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r9.u64, ctx.xer);
	// blt cr6,0x82eb0448
	if (ctx.cr6.lt) goto loc_82EB0448;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x82f23538
	ctx.lr = 0x82EB04BC;
	sub_82F23538(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb04f4
	if (ctx.cr0.lt) goto loc_82EB04F4;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r11,r11,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r11.s64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB04E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpld cr6,r3,r11
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, ctx.r11.u64, ctx.xer);
	// bne cr6,0x82eb0488
	if (!ctx.cr6.eq) goto loc_82EB0488;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EB04F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB04FC"))) PPC_WEAK_FUNC(sub_82EB04FC);
PPC_FUNC_IMPL(__imp__sub_82EB04FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB0500"))) PPC_WEAK_FUNC(sub_82EB0500);
PPC_FUNC_IMPL(__imp__sub_82EB0500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82EB0508;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eb0534
	if (!ctx.cr6.eq) goto loc_82EB0534;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14006
	ctx.r3.u64 = ctx.r3.u64 | 14006;
	// b 0x82eb0644
	goto loc_82EB0644;
loc_82EB0534:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82eb063c
	if (ctx.cr6.eq) goto loc_82EB063C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82eb054c
	if (ctx.cr6.eq) goto loc_82EB054C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82eb063c
	if (ctx.cr6.eq) goto loc_82EB063C;
loc_82EB054C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB0568;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// blt cr6,0x82eb0588
	if (ctx.cr6.lt) goto loc_82EB0588;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,15002
	ctx.r3.u64 = ctx.r3.u64 | 15002;
	// b 0x82eb0644
	goto loc_82EB0644;
loc_82EB0588:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x82eb05a4
	if (!ctx.cr6.gt) goto loc_82EB05A4;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14001
	ctx.r3.u64 = ctx.r3.u64 | 14001;
	// b 0x82eb0644
	goto loc_82EB0644;
loc_82EB05A4:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82EB05B4;
	sub_82FA7CF0(ctx, base);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// lhz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lhz r9,22(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 22);
	// li r5,16
	ctx.r5.s64 = 16;
	// rlwinm r8,r10,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// ld r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// rlwinm r7,r9,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// rlwimi r8,r10,8,16,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r8.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r7,r9,8,16,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// sth r8,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r8.u16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sth r7,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r7.u16);
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lwbrx r11,0,r11
	ctx.r11.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r11.u32));
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x82EB05F8;
	sub_82FA77C0(ctx, base);
	// ld r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// li r3,0
	ctx.r3.s64 = 0;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r9,r11,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// rlwimi r9,r11,24,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 24) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwinm r8,r10,8,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// rlwimi r9,r11,8,8,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFF0000) | (ctx.r9.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r8,r10,24,16,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0xFF00) | (ctx.r8.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r9,r11,24,0,7
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 24) & 0xFF000000) | (ctx.r9.u64 & 0xFFFFFFFF00FFFFFF);
	// rlwimi r8,r10,8,8,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF0000) | (ctx.r8.u64 & 0xFFFFFFFFFF00FFFF);
	// clrldi r11,r9,32
	ctx.r11.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// rlwimi r8,r10,24,0,7
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0xFF000000) | (ctx.r8.u64 & 0xFFFFFFFF00FFFFFF);
	// rldimi r11,r8,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// std r11,16(r30)
	PPC_STORE_U64(ctx.r30.u32 + 16, ctx.r11.u64);
	// b 0x82eb0644
	goto loc_82EB0644;
loc_82EB063C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82EB0644:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB064C"))) PPC_WEAK_FUNC(sub_82EB064C);
PPC_FUNC_IMPL(__imp__sub_82EB064C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB0650"))) PPC_WEAK_FUNC(sub_82EB0650);
PPC_FUNC_IMPL(__imp__sub_82EB0650) {
	PPC_FUNC_PROLOGUE();
	// cmpldi cr6,r4,24
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, 24, ctx.xer);
	// bge cr6,0x82eb0664
	if (!ctx.cr6.lt) goto loc_82EB0664;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_82EB0664:
	// std r4,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r4.u64);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB0670"))) PPC_WEAK_FUNC(sub_82EB0670);
PPC_FUNC_IMPL(__imp__sub_82EB0670) {
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
	// bl 0x82e95af0
	ctx.lr = 0x82EB0688;
	sub_82E95AF0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// addi r8,r11,28144
	ctx.r8.s64 = ctx.r11.s64 + 28144;
	// addi r10,r10,4804
	ctx.r10.s64 = ctx.r10.s64 + 4804;
	// addi r9,r9,9000
	ctx.r9.s64 = ctx.r9.s64 + 9000;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// lwz r11,28144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28144);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82EB06E8"))) PPC_WEAK_FUNC(sub_82EB06E8);
PPC_FUNC_IMPL(__imp__sub_82EB06E8) {
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
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r11,r11,4804
	ctx.r11.s64 = ctx.r11.s64 + 4804;
	// addi r10,r10,9000
	ctx.r10.s64 = ctx.r10.s64 + 9000;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x82f727f8
	ctx.lr = 0x82EB071C;
	sub_82F727F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e95e10
	ctx.lr = 0x82EB0724;
	sub_82E95E10(ctx, base);
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

__attribute__((alias("__imp__sub_82EB0738"))) PPC_WEAK_FUNC(sub_82EB0738);
PPC_FUNC_IMPL(__imp__sub_82EB0738) {
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
	// bl 0x82eb06e8
	ctx.lr = 0x82EB0758;
	sub_82EB06E8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb0770
	if (ctx.cr0.eq) goto loc_82EB0770;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82eb0770
	if (ctx.cr6.eq) goto loc_82EB0770;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8ee18
	ctx.lr = 0x82EB0770;
	sub_82E8EE18(ctx, base);
loc_82EB0770:
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

__attribute__((alias("__imp__sub_82EB078C"))) PPC_WEAK_FUNC(sub_82EB078C);
PPC_FUNC_IMPL(__imp__sub_82EB078C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB0790"))) PPC_WEAK_FUNC(sub_82EB0790);
PPC_FUNC_IMPL(__imp__sub_82EB0790) {
	PPC_FUNC_PROLOGUE();
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB079C"))) PPC_WEAK_FUNC(sub_82EB079C);
PPC_FUNC_IMPL(__imp__sub_82EB079C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB07A0"))) PPC_WEAK_FUNC(sub_82EB07A0);
PPC_FUNC_IMPL(__imp__sub_82EB07A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82ebc008
	sub_82EBC008(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB07A4"))) PPC_WEAK_FUNC(sub_82EB07A4);
PPC_FUNC_IMPL(__imp__sub_82EB07A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB07A8"))) PPC_WEAK_FUNC(sub_82EB07A8);
PPC_FUNC_IMPL(__imp__sub_82EB07A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82EB07B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82eb07fc
	if (ctx.cr6.eq) goto loc_82EB07FC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb07fc
	if (ctx.cr6.eq) goto loc_82EB07FC;
	// bl 0x82ebc128
	ctx.lr = 0x82EB07D4;
	sub_82EBC128(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb0804
	if (ctx.cr0.lt) goto loc_82EB0804;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// clrlwi r10,r29,16
	ctx.r10.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82eb0804
	if (ctx.cr6.eq) goto loc_82EB0804;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ebd1e8
	ctx.lr = 0x82EB07F8;
	sub_82EBD1E8(ctx, base);
	// b 0x82eb0804
	goto loc_82EB0804;
loc_82EB07FC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82EB0804:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB080C"))) PPC_WEAK_FUNC(sub_82EB080C);
PPC_FUNC_IMPL(__imp__sub_82EB080C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB0810"))) PPC_WEAK_FUNC(sub_82EB0810);
PPC_FUNC_IMPL(__imp__sub_82EB0810) {
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
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r11,4852
	ctx.r11.s64 = ctx.r11.s64 + 4852;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82eb0854
	if (ctx.cr6.eq) goto loc_82EB0854;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB084C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
loc_82EB0854:
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

__attribute__((alias("__imp__sub_82EB0868"))) PPC_WEAK_FUNC(sub_82EB0868);
PPC_FUNC_IMPL(__imp__sub_82EB0868) {
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
	// lwz r3,472(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 472);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB0890;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb08cc
	if (ctx.cr0.lt) goto loc_82EB08CC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,472(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB08CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EB08CC:
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

__attribute__((alias("__imp__sub_82EB08E0"))) PPC_WEAK_FUNC(sub_82EB08E0);
PPC_FUNC_IMPL(__imp__sub_82EB08E0) {
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
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// ld r11,464(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 464);
	// mulli r10,r10,10000
	ctx.r10.s64 = ctx.r10.s64 * 10000;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// ble cr6,0x82eb0910
	if (!ctx.cr6.gt) goto loc_82EB0910;
	// subf r31,r10,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_82EB0910:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x82e80720
	ctx.lr = 0x82EB0924;
	sub_82E80720(ctx, base);
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmpld cr6,r3,r31
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, ctx.r31.u64, ctx.xer);
	// bgt cr6,0x82eb0940
	if (ctx.cr6.gt) goto loc_82EB0940;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82EB0940:
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

__attribute__((alias("__imp__sub_82EB0954"))) PPC_WEAK_FUNC(sub_82EB0954);
PPC_FUNC_IMPL(__imp__sub_82EB0954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB0958"))) PPC_WEAK_FUNC(sub_82EB0958);
PPC_FUNC_IMPL(__imp__sub_82EB0958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82EB0960;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// ld r30,24(r4)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r4.u32 + 24);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,472(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 472);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB0998;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb09d4
	if (ctx.cr0.lt) goto loc_82EB09D4;
	// lhz r11,90(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 90);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82eb09b8
	if (ctx.cr0.eq) goto loc_82EB09B8;
	// ld r11,480(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 480);
	// cmpld cr6,r30,r11
	ctx.cr6.compare<uint64_t>(ctx.r30.u64, ctx.r11.u64, ctx.xer);
	// bge cr6,0x82eb09bc
	if (!ctx.cr6.lt) goto loc_82EB09BC;
loc_82EB09B8:
	// std r30,480(r31)
	PPC_STORE_U64(ctx.r31.u32 + 480, ctx.r30.u64);
loc_82EB09BC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,472(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB09D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EB09D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB09DC"))) PPC_WEAK_FUNC(sub_82EB09DC);
PPC_FUNC_IMPL(__imp__sub_82EB09DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB09E0"))) PPC_WEAK_FUNC(sub_82EB09E0);
PPC_FUNC_IMPL(__imp__sub_82EB09E0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,472(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 472);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r6,52(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbz r5,34(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 34);
	// lhz r4,32(r4)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r4.u32 + 32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB0A18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82eb0a28
	if (!ctx.cr0.lt) goto loc_82EB0A28;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82eb0a3c
	goto loc_82EB0A3C;
loc_82EB0A28:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,17
	ctx.r10.s64 = 17;
	// subfc r11,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
loc_82EB0A3C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB0A4C"))) PPC_WEAK_FUNC(sub_82EB0A4C);
PPC_FUNC_IMPL(__imp__sub_82EB0A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB0A50"))) PPC_WEAK_FUNC(sub_82EB0A50);
PPC_FUNC_IMPL(__imp__sub_82EB0A50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82EB0A58;
	__savegprlr_28(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,472(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 472);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// sth r31,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r31.u16);
	// std r31,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r31.u64);
	// std r31,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r31.u64);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB0A90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82eb0b5c
	if (ctx.cr0.lt) goto loc_82EB0B5C;
	// lhz r11,106(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 106);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82eb0b5c
	if (ctx.cr0.eq) goto loc_82EB0B5C;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r28,r11,-6624
	ctx.r28.s64 = ctx.r11.s64 + -6624;
loc_82EB0AAC:
	// li r5,293
	ctx.r5.s64 = 293;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82fa7cf0
	ctx.lr = 0x82EB0ABC;
	sub_82FA7CF0(ctx, base);
	// lwz r3,472(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 472);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB0AD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82eb0b5c
	if (ctx.cr0.lt) goto loc_82EB0B5C;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// lbz r6,118(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 118);
	// lwz r5,127(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 127);
	// lhz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// bl 0x82e7f310
	ctx.lr = 0x82EB0AFC;
	sub_82E7F310(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82eb0b5c
	if (ctx.cr0.lt) goto loc_82EB0B5C;
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r9,r11,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwimi r9,r11,8,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// sth r9,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r9.u16);
	// beq cr6,0x82eb0b44
	if (ctx.cr6.eq) goto loc_82EB0B44;
	// lwz r3,472(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 472);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB0B44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EB0B44:
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// lhz r10,106(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 106);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r31,r11,16
	ctx.r31.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82eb0aac
	if (ctx.cr6.lt) goto loc_82EB0AAC;
loc_82EB0B5C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB0B68"))) PPC_WEAK_FUNC(sub_82EB0B68);
PPC_FUNC_IMPL(__imp__sub_82EB0B68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82EB0B70;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82eb0a50
	ctx.lr = 0x82EB0B8C;
	sub_82EB0A50(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eb0c04
	if (ctx.cr0.lt) goto loc_82EB0C04;
	// lwz r3,472(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 472);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB0BAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eb0c04
	if (ctx.cr0.lt) goto loc_82EB0C04;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB0BCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eb0c04
	if (ctx.cr0.lt) goto loc_82EB0C04;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB0BEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eb0c04
	if (ctx.cr0.lt) goto loc_82EB0C04;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82e7f608
	ctx.lr = 0x82EB0C00;
	sub_82E7F608(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82EB0C04:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb0c20
	if (ctx.cr6.eq) goto loc_82EB0C20;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB0C20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EB0C20:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB0C2C"))) PPC_WEAK_FUNC(sub_82EB0C2C);
PPC_FUNC_IMPL(__imp__sub_82EB0C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB0C30"))) PPC_WEAK_FUNC(sub_82EB0C30);
PPC_FUNC_IMPL(__imp__sub_82EB0C30) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
loc_82EB0C34:
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
	// bne 0x82eb0c34
	if (!ctx.cr0.eq) goto loc_82EB0C34;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB0C54"))) PPC_WEAK_FUNC(sub_82EB0C54);
PPC_FUNC_IMPL(__imp__sub_82EB0C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB0C58"))) PPC_WEAK_FUNC(sub_82EB0C58);
PPC_FUNC_IMPL(__imp__sub_82EB0C58) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
loc_82EB0C5C:
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
	// bne 0x82eb0c5c
	if (!ctx.cr0.eq) goto loc_82EB0C5C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82EB0CA0"))) PPC_WEAK_FUNC(sub_82EB0CA0);
PPC_FUNC_IMPL(__imp__sub_82EB0CA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB0CA4"))) PPC_WEAK_FUNC(sub_82EB0CA4);
PPC_FUNC_IMPL(__imp__sub_82EB0CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB0CA8"))) PPC_WEAK_FUNC(sub_82EB0CA8);
PPC_FUNC_IMPL(__imp__sub_82EB0CA8) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82eb0cd8
	if (!ctx.cr6.eq) goto loc_82EB0CD8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82eb0d10
	goto loc_82EB0D10;
loc_82EB0CD8:
	// li r5,293
	ctx.r5.s64 = 293;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82EB0CE8;
	sub_82FA7CF0(ctx, base);
	// lhz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 32);
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// stw r11,2(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2, ctx.r11.u32);
	// lbz r11,34(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 34);
	// stb r11,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r11.u8);
	// ld r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// stw r11,15(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15, ctx.r11.u32);
loc_82EB0D10:
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

__attribute__((alias("__imp__sub_82EB0D28"))) PPC_WEAK_FUNC(sub_82EB0D28);
PPC_FUNC_IMPL(__imp__sub_82EB0D28) {
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
	// lis r3,-32234
	ctx.r3.s64 = -2112487424;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r30,r31,44
	ctx.r30.s64 = ctx.r31.s64 + 44;
	// std r6,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r6.u64);
	// addi r6,r3,4864
	ctx.r6.s64 = ctx.r3.s64 + 4864;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r4,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r4.u32);
	// std r5,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r5.u64);
	// sth r7,32(r31)
	PPC_STORE_U16(ctx.r31.u32 + 32, ctx.r7.u16);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stb r8,34(r31)
	PPC_STORE_U8(ctx.r31.u32 + 34, ctx.r8.u8);
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB0D98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB0DB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82EB0DD4"))) PPC_WEAK_FUNC(sub_82EB0DD4);
PPC_FUNC_IMPL(__imp__sub_82EB0DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB0DD8"))) PPC_WEAK_FUNC(sub_82EB0DD8);
PPC_FUNC_IMPL(__imp__sub_82EB0DD8) {
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
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82eb0e08
	if (!ctx.cr6.eq) goto loc_82EB0E08;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16387
	ctx.r3.u64 = ctx.r3.u64 | 16387;
	// b 0x82eb0ee4
	goto loc_82EB0EE4;
loc_82EB0E08:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lbz r5,34(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 34);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// lwz r6,52(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB0E34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb0ee4
	if (ctx.cr0.lt) goto loc_82EB0EE4;
	// li r5,293
	ctx.r5.s64 = 293;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82fa7cf0
	ctx.lr = 0x82EB0E4C;
	sub_82FA7CF0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb0ca8
	ctx.lr = 0x82EB0E58;
	sub_82EB0CA8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb0ee4
	if (ctx.cr0.lt) goto loc_82EB0EE4;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r4,r1,107
	ctx.r4.s64 = ctx.r1.s64 + 107;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r11,103(r1)
	PPC_STORE_U32(ctx.r1.u32 + 103, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB0E80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb0ee4
	if (ctx.cr0.lt) goto loc_82EB0EE4;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r10,123(r1)
	PPC_STORE_U32(ctx.r1.u32 + 123, ctx.r10.u32);
	// bge cr6,0x82eb0ea0
	if (!ctx.cr6.lt) goto loc_82EB0EA0;
	// stw r11,123(r1)
	PPC_STORE_U32(ctx.r1.u32 + 123, ctx.r11.u32);
loc_82EB0EA0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r5,52(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB0EC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb0ee4
	if (ctx.cr0.lt) goto loc_82EB0EE4;
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r11,123(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 123);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_82EB0EE4:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
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

__attribute__((alias("__imp__sub_82EB0EFC"))) PPC_WEAK_FUNC(sub_82EB0EFC);
PPC_FUNC_IMPL(__imp__sub_82EB0EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB0F00"))) PPC_WEAK_FUNC(sub_82EB0F00);
PPC_FUNC_IMPL(__imp__sub_82EB0F00) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82eb0f28
	if (ctx.cr6.eq) goto loc_82EB0F28;
	// stw r30,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r30.u32);
loc_82EB0F28:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb0f40
	if (!ctx.cr6.gt) goto loc_82EB0F40;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14011
	ctx.r3.u64 = ctx.r3.u64 | 14011;
	// b 0x82eb0fa0
	goto loc_82EB0FA0;
loc_82EB0F40:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82eb0f58
	if (!ctx.cr6.eq) goto loc_82EB0F58;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14002
	ctx.r3.u64 = ctx.r3.u64 | 14002;
	// b 0x82eb0fa0
	goto loc_82EB0FA0;
loc_82EB0F58:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82eb0f7c
	if (ctx.cr6.eq) goto loc_82EB0F7C;
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb0f7c
	if (ctx.cr6.eq) goto loc_82EB0F7C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB0F7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EB0F7C:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb0f9c
	if (ctx.cr6.eq) goto loc_82EB0F9C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB0F98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
loc_82EB0F9C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EB0FA0:
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

__attribute__((alias("__imp__sub_82EB0FB8"))) PPC_WEAK_FUNC(sub_82EB0FB8);
PPC_FUNC_IMPL(__imp__sub_82EB0FB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82EB0FC0;
	__savegprlr_27(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82eb0fe0
	if (!ctx.cr6.eq) goto loc_82EB0FE0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82eb10b0
	goto loc_82EB10B0;
loc_82EB0FE0:
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lbz r5,34(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 34);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// lwz r6,52(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB100C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82eb10ac
	if (ctx.cr0.lt) goto loc_82EB10AC;
	// lwz r28,56(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x82eb1030
	if (!ctx.cr6.lt) goto loc_82EB1030;
	// lis r30,-16371
	ctx.r30.s64 = -1072889856;
	// ori r30,r30,14005
	ctx.r30.u64 = ctx.r30.u64 | 14005;
	// b 0x82eb10ac
	goto loc_82EB10AC;
loc_82EB1030:
	// li r5,293
	ctx.r5.s64 = 293;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82fa7cf0
	ctx.lr = 0x82EB1040;
	sub_82FA7CF0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb0ca8
	ctx.lr = 0x82EB104C;
	sub_82EB0CA8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82eb10ac
	if (ctx.cr0.lt) goto loc_82EB10AC;
	// stw r28,107(r1)
	PPC_STORE_U32(ctx.r1.u32 + 107, ctx.r28.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r28,123(r1)
	PPC_STORE_U32(ctx.r1.u32 + 123, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r27,103(r1)
	PPC_STORE_U32(ctx.r1.u32 + 103, ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r5,52(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB1080;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82eb10ac
	if (ctx.cr0.lt) goto loc_82EB10AC;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r27,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r27.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb10ac
	if (ctx.cr6.eq) goto loc_82EB10AC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB10A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r27,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r27.u32);
loc_82EB10AC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82EB10B0:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB10B8"))) PPC_WEAK_FUNC(sub_82EB10B8);
PPC_FUNC_IMPL(__imp__sub_82EB10B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82eb10e0
	if (!ctx.cr6.gt) goto loc_82EB10E0;
loc_82EB10C8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eb10e8
	if (ctx.cr6.eq) goto loc_82EB10E8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82eb10c8
	if (ctx.cr6.lt) goto loc_82EB10C8;
loc_82EB10E0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eb10f0
	if (!ctx.cr6.eq) goto loc_82EB10F0;
loc_82EB10E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82EB10F0:
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// std r10,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r10.u64);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB1108"))) PPC_WEAK_FUNC(sub_82EB1108);
PPC_FUNC_IMPL(__imp__sub_82EB1108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82EB1110;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a831b0
	ctx.lr = 0x82EB111C;
	sub_82A831B0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eb117c
	if (ctx.cr6.eq) goto loc_82EB117C;
	// addi r29,r31,12
	ctx.r29.s64 = ctx.r31.s64 + 12;
loc_82EB1130:
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r5,r29
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r29.u32, ctx.xer);
	// lwz r30,0(r5)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// beq cr6,0x82eb116c
	if (ctx.cr6.eq) goto loc_82EB116C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82eb1160
	if (!ctx.cr6.gt) goto loc_82EB1160;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_82EB1154:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82eb1154
	if (ctx.cr6.lt) goto loc_82EB1154;
loc_82EB1160:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a81d88
	ctx.lr = 0x82EB116C;
	sub_82A81D88(ctx, base);
loc_82EB116C:
	// rotlwi r11,r30,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eb1130
	if (!ctx.cr6.eq) goto loc_82EB1130;
loc_82EB117C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB1184"))) PPC_WEAK_FUNC(sub_82EB1184);
PPC_FUNC_IMPL(__imp__sub_82EB1184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB1188"))) PPC_WEAK_FUNC(sub_82EB1188);
PPC_FUNC_IMPL(__imp__sub_82EB1188) {
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
	// bl 0x82eb0810
	ctx.lr = 0x82EB11A8;
	sub_82EB0810(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb11c0
	if (ctx.cr0.eq) goto loc_82EB11C0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82eb11c0
	if (ctx.cr6.eq) goto loc_82EB11C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8ee18
	ctx.lr = 0x82EB11C0;
	sub_82E8EE18(ctx, base);
loc_82EB11C0:
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

__attribute__((alias("__imp__sub_82EB11DC"))) PPC_WEAK_FUNC(sub_82EB11DC);
PPC_FUNC_IMPL(__imp__sub_82EB11DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB11E0"))) PPC_WEAK_FUNC(sub_82EB11E0);
PPC_FUNC_IMPL(__imp__sub_82EB11E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82EB11E8;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82eb1208
	if (!ctx.cr6.eq) goto loc_82EB1208;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16387
	ctx.r3.u64 = ctx.r3.u64 | 16387;
	// b 0x82eb12bc
	goto loc_82EB12BC;
loc_82EB1208:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// std r28,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r28.u64);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_82EB1224:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82eb12a0
	if (!ctx.cr6.lt) goto loc_82EB12A0;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x82eb10b8
	ctx.lr = 0x82EB1244;
	sub_82EB10B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82eb12ec
	if (ctx.cr0.eq) goto loc_82EB12EC;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,472(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 472);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r6,52(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lbz r5,34(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 34);
	// lhz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB1278;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt 0x82eb12b8
	if (ctx.cr0.lt) goto loc_82EB12B8;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82eb12c4
	if (ctx.cr6.eq) goto loc_82EB12C4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eb12e4
	if (ctx.cr6.eq) goto loc_82EB12E4;
loc_82EB1298:
	// stw r29,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r29.u32);
	// li r28,1
	ctx.r28.s64 = 1;
loc_82EB12A0:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt cr6,0x82eb12b8
	if (ctx.cr6.lt) goto loc_82EB12B8;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x82eb12b8
	if (!ctx.cr6.eq) goto loc_82EB12B8;
	// lis r26,-16371
	ctx.r26.s64 = -1072889856;
	// ori r26,r26,14005
	ctx.r26.u64 = ctx.r26.u64 | 14005;
loc_82EB12B8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82EB12BC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
loc_82EB12C4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB12D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x82eb1298
	if (!ctx.cr6.lt) goto loc_82EB1298;
loc_82EB12E4:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// b 0x82eb1224
	goto loc_82EB1224;
loc_82EB12EC:
	// lis r26,-32768
	ctx.r26.s64 = -2147483648;
	// ori r26,r26,65535
	ctx.r26.u64 = ctx.r26.u64 | 65535;
	// b 0x82eb12b8
	goto loc_82EB12B8;
}

__attribute__((alias("__imp__sub_82EB12F8"))) PPC_WEAK_FUNC(sub_82EB12F8);
PPC_FUNC_IMPL(__imp__sub_82EB12F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82EB1300;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,472(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 472);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB1334;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb13b8
	if (ctx.cr0.lt) goto loc_82EB13B8;
	// ld r30,480(r31)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r31.u32 + 480);
	// li r11,10000
	ctx.r11.s64 = 10000;
	// lwz r3,472(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// divdu r29,r30,r11
	ctx.r29.u64 = ctx.r30.u64 / ctx.r11.u64;
	// divdu r28,r27,r11
	ctx.r28.u64 = ctx.r27.u64 / ctx.r11.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// sth r28,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r28.u16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB136C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb13b8
	if (ctx.cr0.lt) goto loc_82EB13B8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb0b68
	ctx.lr = 0x82EB1384;
	sub_82EB0B68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb13b8
	if (ctx.cr0.lt) goto loc_82EB13B8;
	// ld r10,488(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 488);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r29,504(r31)
	PPC_STORE_U64(ctx.r31.u32 + 504, ctx.r29.u64);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// std r28,520(r31)
	PPC_STORE_U64(ctx.r31.u32 + 520, ctx.r28.u64);
	// stw r11,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r11.u32);
	// std r10,488(r31)
	PPC_STORE_U64(ctx.r31.u32 + 488, ctx.r10.u64);
	// bl 0x82eb0868
	ctx.lr = 0x82EB13B8;
	sub_82EB0868(ctx, base);
loc_82EB13B8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB13C0"))) PPC_WEAK_FUNC(sub_82EB13C0);
PPC_FUNC_IMPL(__imp__sub_82EB13C0) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82eb13ec
	if (!ctx.cr6.eq) goto loc_82EB13EC;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82eb144c
	goto loc_82EB144C;
loc_82EB13EC:
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82eb1408
	goto loc_82EB1408;
loc_82EB13F4:
	// beq cr6,0x82eb140c
	if (ctx.cr6.eq) goto loc_82EB140C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB1408;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EB1408:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
loc_82EB140C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB1424;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bge 0x82eb13f4
	if (!ctx.cr0.lt) goto loc_82EB13F4;
	// beq cr6,0x82eb1448
	if (ctx.cr6.eq) goto loc_82EB1448;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB1448;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EB1448:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EB144C:
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

__attribute__((alias("__imp__sub_82EB1464"))) PPC_WEAK_FUNC(sub_82EB1464);
PPC_FUNC_IMPL(__imp__sub_82EB1464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB1468"))) PPC_WEAK_FUNC(sub_82EB1468);
PPC_FUNC_IMPL(__imp__sub_82EB1468) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,4864
	ctx.r11.s64 = ctx.r11.s64 + 4864;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82eb0810
	ctx.lr = 0x82EB1494;
	sub_82EB0810(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb14a4
	if (ctx.cr0.eq) goto loc_82EB14A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8ee18
	ctx.lr = 0x82EB14A4;
	sub_82E8EE18(ctx, base);
loc_82EB14A4:
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

__attribute__((alias("__imp__sub_82EB14C0"))) PPC_WEAK_FUNC(sub_82EB14C0);
PPC_FUNC_IMPL(__imp__sub_82EB14C0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82eb14e4
	if (ctx.cr6.eq) goto loc_82EB14E4;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_82EB14E4:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,68
	ctx.r3.s64 = ctx.r3.s64 + 68;
	// bl 0x82e96600
	ctx.lr = 0x82EB14F4;
	sub_82E96600(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82eb1548
	if (ctx.cr0.eq) goto loc_82EB1548;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82eb1524
	if (ctx.cr6.eq) goto loc_82EB1524;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x82eb1540
	if (ctx.cr6.eq) goto loc_82EB1540;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB1524;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EB1524:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb1540
	if (ctx.cr6.eq) goto loc_82EB1540;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB1540;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EB1540:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82eb1550
	goto loc_82EB1550;
loc_82EB1548:
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14002
	ctx.r3.u64 = ctx.r3.u64 | 14002;
loc_82EB1550:
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

__attribute__((alias("__imp__sub_82EB1564"))) PPC_WEAK_FUNC(sub_82EB1564);
PPC_FUNC_IMPL(__imp__sub_82EB1564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

