#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82E88CE0"))) PPC_WEAK_FUNC(sub_82E88CE0);
PPC_FUNC_IMPL(__imp__sub_82E88CE0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82e87108
	sub_82E87108(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E88CE8"))) PPC_WEAK_FUNC(sub_82E88CE8);
PPC_FUNC_IMPL(__imp__sub_82E88CE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x82E88CF0;
	__savegprlr_22(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// bne cr6,0x82e88d28
	if (!ctx.cr6.eq) goto loc_82E88D28;
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// ori r31,r31,16387
	ctx.r31.u64 = ctx.r31.u64 | 16387;
	// b 0x82e89150
	goto loc_82E89150;
loc_82E88D28:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82fad1c8
	ctx.lr = 0x82E88D38;
	sub_82FAD1C8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82e89150
	if (ctx.cr6.eq) goto loc_82E89150;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e89150
	if (ctx.cr6.eq) goto loc_82E89150;
	// addi r31,r3,1
	ctx.r31.s64 = ctx.r3.s64 + 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8edd0
	ctx.lr = 0x82E88D64;
	sub_82E8EDD0(ctx, base);
	// mr. r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne 0x82e88d78
	if (!ctx.cr0.eq) goto loc_82E88D78;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x82e89150
	goto loc_82E89150;
loc_82E88D78:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82fad1c8
	ctx.lr = 0x82E88D88;
	sub_82FAD1C8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82e8edd0
	ctx.lr = 0x82E88DA0;
	sub_82E8EDD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e88dc0
	if (ctx.cr0.eq) goto loc_82E88DC0;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r26.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// b 0x82e88dc4
	goto loc_82E88DC4;
loc_82E88DC0:
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_82E88DC4:
	// stw r10,184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 184, ctx.r10.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82e88ddc
	if (!ctx.cr6.eq) goto loc_82E88DDC;
loc_82E88DD0:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x82e89148
	goto loc_82E89148;
loc_82E88DDC:
	// addi r3,r30,188
	ctx.r3.s64 = ctx.r30.s64 + 188;
	// bl 0x82e6fa60
	ctx.lr = 0x82E88DE4;
	sub_82E6FA60(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82e89148
	if (ctx.cr0.lt) goto loc_82E89148;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e87560
	ctx.lr = 0x82E88DF4;
	sub_82E87560(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82e89148
	if (ctx.cr0.lt) goto loc_82E89148;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// ori r24,r11,87
	ctx.r24.u64 = ctx.r11.u64 | 87;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// beq cr6,0x82e88e38
	if (ctx.cr6.eq) goto loc_82E88E38;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// beq cr6,0x82e88e30
	if (ctx.cr6.eq) goto loc_82E88E30;
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 3, ctx.xer);
	// beq cr6,0x82e88e28
	if (ctx.cr6.eq) goto loc_82E88E28;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// b 0x82e88e40
	goto loc_82E88E40;
loc_82E88E28:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// b 0x82e88e3c
	goto loc_82E88E3C;
loc_82E88E30:
	// lis r11,16384
	ctx.r11.s64 = 1073741824;
	// b 0x82e88e3c
	goto loc_82E88E3C;
loc_82E88E38:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
loc_82E88E3C:
	// stw r11,168(r30)
	PPC_STORE_U32(ctx.r30.u32 + 168, ctx.r11.u32);
loc_82E88E40:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82e89148
	if (ctx.cr6.lt) goto loc_82E89148;
	// li r11,5
	ctx.r11.s64 = 5;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// stw r11,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r11.u32);
	// beq cr6,0x82e88e64
	if (ctx.cr6.eq) goto loc_82E88E64;
	// lwz r10,168(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// oris r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 65536;
	// stw r10,168(r30)
	PPC_STORE_U32(ctx.r30.u32 + 168, ctx.r10.u32);
loc_82E88E64:
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// blt cr6,0x82e88ea8
	if (ctx.cr6.lt) goto loc_82E88EA8;
	// beq cr6,0x82e88ea0
	if (ctx.cr6.eq) goto loc_82E88EA0;
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 3, ctx.xer);
	// blt cr6,0x82e88eac
	if (ctx.cr6.lt) goto loc_82E88EAC;
	// beq cr6,0x82e88e98
	if (ctx.cr6.eq) goto loc_82E88E98;
	// cmplwi cr6,r29,5
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 5, ctx.xer);
	// blt cr6,0x82e88e90
	if (ctx.cr6.lt) goto loc_82E88E90;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// b 0x82e88eb0
	goto loc_82E88EB0;
loc_82E88E90:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82e88eac
	goto loc_82E88EAC;
loc_82E88E98:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82e88eac
	goto loc_82E88EAC;
loc_82E88EA0:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82e88eac
	goto loc_82E88EAC;
loc_82E88EA8:
	// li r11,3
	ctx.r11.s64 = 3;
loc_82E88EAC:
	// stw r11,176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 176, ctx.r11.u32);
loc_82E88EB0:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82e89148
	if (ctx.cr6.lt) goto loc_82E89148;
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// stw r11,180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 180, ctx.r11.u32);
	// bne cr6,0x82e88ed4
	if (!ctx.cr6.eq) goto loc_82E88ED4;
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// stw r11,180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 180, ctx.r11.u32);
loc_82E88ED4:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x82e88ee8
	if (ctx.cr6.eq) goto loc_82E88EE8;
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// stw r11,180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 180, ctx.r11.u32);
loc_82E88EE8:
	// clrlwi. r11,r27,31
	ctx.r11.u64 = ctx.r27.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e88f08
	if (ctx.cr0.eq) goto loc_82E88F08;
	// lwz r10,168(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// rlwinm. r10,r10,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e88f08
	if (ctx.cr0.eq) goto loc_82E88F08;
	// lwz r10,180(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// stw r10,180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 180, ctx.r10.u32);
loc_82E88F08:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e88f30
	if (ctx.cr6.eq) goto loc_82E88F30;
	// lwz r10,168(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e88f28
	if (ctx.cr0.eq) goto loc_82E88F28;
	// lwz r10,180(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// oris r10,r10,8192
	ctx.r10.u64 = ctx.r10.u64 | 536870912;
	// stw r10,180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 180, ctx.r10.u32);
loc_82E88F28:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e88f3c
	if (!ctx.cr6.eq) goto loc_82E88F3C;
loc_82E88F30:
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// oris r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 134217728;
	// stw r11,180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 180, ctx.r11.u32);
loc_82E88F3C:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x82e88f50
	if (ctx.cr6.eq) goto loc_82E88F50;
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stw r11,180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 180, ctx.r11.u32);
loc_82E88F50:
	// stw r26,164(r30)
	PPC_STORE_U32(ctx.r30.u32 + 164, ctx.r26.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82a8f140
	ctx.lr = 0x82E88F64;
	sub_82A8F140(ctx, base);
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e88fc4
	if (!ctx.cr0.eq) goto loc_82E88FC4;
	// bl 0x82a78478
	ctx.lr = 0x82E88F74;
	sub_82A78478(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt 0x82e88f84
	if (ctx.cr0.gt) goto loc_82E88F84;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82e88f8c
	goto loc_82E88F8C;
loc_82E88F84:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// or r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 | ctx.r29.u64;
loc_82E88F8C:
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82e88fb8
	if (!ctx.cr6.eq) goto loc_82E88FB8;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// std r26,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r26.u64);
	// std r26,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r26.u64);
	// std r26,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r26.u64);
	// std r26,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r26.u64);
	// stw r26,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r26.u32);
	// b 0x82e88fe8
	goto loc_82E88FE8;
loc_82E88FB8:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82e89148
	if (ctx.cr6.lt) goto loc_82E89148;
	// b 0x82e88fe8
	goto loc_82E88FE8;
loc_82E88FC4:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r10,-7392
	ctx.r4.s64 = ctx.r10.s64 + -7392;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E88FE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E88FE8:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r10,-7408
	ctx.r4.s64 = ctx.r10.s64 + -7408;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E89008;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82e89148
	if (ctx.cr0.lt) goto loc_82E89148;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e8902c
	if (ctx.cr0.eq) goto loc_82E8902C;
	// lwz r11,164(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stw r11,164(r30)
	PPC_STORE_U32(ctx.r30.u32 + 164, ctx.r11.u32);
	// b 0x82e89098
	goto loc_82E89098;
loc_82E8902C:
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,180(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r7,176(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r5,172(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// lwz r4,168(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// bl 0x82a82d10
	ctx.lr = 0x82E8904C;
	sub_82A82D10(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// stw r3,156(r30)
	PPC_STORE_U32(ctx.r30.u32 + 156, ctx.r3.u32);
	// bne cr6,0x82e8907c
	if (!ctx.cr6.eq) goto loc_82E8907C;
	// bl 0x82a78478
	ctx.lr = 0x82E8905C;
	sub_82A78478(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt 0x82e8906c
	if (ctx.cr0.gt) goto loc_82E8906C;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82e89074
	goto loc_82E89074;
loc_82E8906C:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// or r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 | ctx.r29.u64;
loc_82E89074:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82e89148
	if (ctx.cr6.lt) goto loc_82E89148;
loc_82E8907C:
	// lwz r11,164(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// lwz r3,156(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// rlwinm r11,r11,0,27,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r11,164(r30)
	PPC_STORE_U32(ctx.r30.u32 + 164, ctx.r11.u32);
	// bl 0x82ea3d40
	ctx.lr = 0x82E89090;
	sub_82EA3D40(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82e89148
	if (ctx.cr0.lt) goto loc_82E89148;
loc_82E89098:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82fa3bb8
	ctx.lr = 0x82E890A0;
	sub_82FA3BB8(ctx, base);
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// addi r31,r3,1
	ctx.r31.s64 = ctx.r3.s64 + 1;
	// ori r29,r11,65535
	ctx.r29.u64 = ctx.r11.u64 | 65535;
	// rlwinm r3,r31,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x82e890bc
	if (!ctx.cr6.gt) goto loc_82E890BC;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82E890BC:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e8edd0
	ctx.lr = 0x82E890D0;
	sub_82E8EDD0(ctx, base);
	// stw r3,148(r30)
	PPC_STORE_U32(ctx.r30.u32 + 148, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e88dd0
	if (ctx.cr0.eq) goto loc_82E88DD0;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x82e890ec
	if (!ctx.cr6.gt) goto loc_82E890EC;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// b 0x82e890f8
	goto loc_82E890F8;
loc_82E890EC:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a99330
	ctx.lr = 0x82E890F8;
	sub_82A99330(ctx, base);
loc_82E890F8:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82e89148
	if (ctx.cr6.lt) goto loc_82E89148;
	// lwz r11,168(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// li r10,512
	ctx.r10.s64 = 512;
	// stw r22,160(r30)
	PPC_STORE_U32(ctx.r30.u32 + 160, ctx.r22.u32);
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 192, ctx.r10.u32);
	// beq 0x82e89128
	if (ctx.cr0.eq) goto loc_82E89128;
	// lwz r10,164(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,164(r30)
	PPC_STORE_U32(ctx.r30.u32 + 164, ctx.r10.u32);
loc_82E89128:
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e8913c
	if (ctx.cr0.eq) goto loc_82E8913C;
	// lwz r11,164(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,164(r30)
	PPC_STORE_U32(ctx.r30.u32 + 164, ctx.r11.u32);
loc_82E8913C:
	// lwz r11,164(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,164(r30)
	PPC_STORE_U32(ctx.r30.u32 + 164, ctx.r11.u32);
loc_82E89148:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82e8ee18
	ctx.lr = 0x82E89150;
	sub_82E8EE18(ctx, base);
loc_82E89150:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8915C"))) PPC_WEAK_FUNC(sub_82E8915C);
PPC_FUNC_IMPL(__imp__sub_82E8915C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E89160"))) PPC_WEAK_FUNC(sub_82E89160);
PPC_FUNC_IMPL(__imp__sub_82E89160) {
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
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,24112
	ctx.r11.s64 = ctx.r11.s64 + 24112;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82e8ee58
	ctx.lr = 0x82E89190;
	sub_82E8EE58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// bl 0x82ea0c90
	ctx.lr = 0x82E891AC;
	sub_82EA0C90(ctx, base);
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

__attribute__((alias("__imp__sub_82E891C8"))) PPC_WEAK_FUNC(sub_82E891C8);
PPC_FUNC_IMPL(__imp__sub_82E891C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82E891D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,4
	ctx.r28.s64 = ctx.r3.s64 + 4;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82e8f128
	ctx.lr = 0x82E891F4;
	sub_82E8F128(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e887b8
	ctx.lr = 0x82E89200;
	sub_82E887B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e89324
	if (ctx.cr0.eq) goto loc_82E89324;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82e89324
	if (!ctx.cr6.eq) goto loc_82E89324;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x82e89314
	if (ctx.cr6.eq) goto loc_82E89314;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// beq cr6,0x82e89250
	if (ctx.cr6.eq) goto loc_82E89250;
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// beq cr6,0x82e89304
	if (ctx.cr6.eq) goto loc_82E89304;
	// cmplwi cr6,r11,21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// beq cr6,0x82e892f4
	if (ctx.cr6.eq) goto loc_82E892F4;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// beq cr6,0x82e892e0
	if (ctx.cr6.eq) goto loc_82E892E0;
	// cmplwi cr6,r11,72
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 72, ctx.xer);
	// beq cr6,0x82e892ac
	if (ctx.cr6.eq) goto loc_82E892AC;
	// cmplwi cr6,r11,4113
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4113, ctx.xer);
	// beq cr6,0x82e89258
	if (ctx.cr6.eq) goto loc_82E89258;
loc_82E89250:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82e89328
	goto loc_82E89328;
loc_82E89258:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82e89324
	if (!ctx.cr6.eq) goto loc_82E89324;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82e892a0
	if (ctx.cr0.eq) goto loc_82E892A0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82E89280:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82e892a0
	if (!ctx.cr0.eq) goto loc_82E892A0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82e89280
	if (!ctx.cr6.eq) goto loc_82E89280;
loc_82E892A0:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
loc_82E892A4:
	// beq 0x82e89250
	if (ctx.cr0.eq) goto loc_82E89250;
	// b 0x82e89324
	goto loc_82E89324;
loc_82E892AC:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_82E892B8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82e892d8
	if (!ctx.cr0.eq) goto loc_82E892D8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82e892b8
	if (!ctx.cr6.eq) goto loc_82E892B8;
loc_82E892D8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// b 0x82e892a4
	goto loc_82E892A4;
loc_82E892E0:
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x82fa4e60
	ctx.lr = 0x82E892EC;
	sub_82FA4E60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// b 0x82e892a4
	goto loc_82E892A4;
loc_82E892F4:
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// ld r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// b 0x82e89320
	goto loc_82E89320;
loc_82E89304:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// b 0x82e89320
	goto loc_82E89320;
loc_82E89314:
	// lfd f0,8(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// lfd f13,8(r31)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
loc_82E89320:
	// beq cr6,0x82e89250
	if (ctx.cr6.eq) goto loc_82E89250;
loc_82E89324:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E89328:
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e8f250
	ctx.lr = 0x82E89338;
	sub_82E8F250(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E89344"))) PPC_WEAK_FUNC(sub_82E89344);
PPC_FUNC_IMPL(__imp__sub_82E89344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E89348"))) PPC_WEAK_FUNC(sub_82E89348);
PPC_FUNC_IMPL(__imp__sub_82E89348) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82e88868
	sub_82E88868(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E89358"))) PPC_WEAK_FUNC(sub_82E89358);
PPC_FUNC_IMPL(__imp__sub_82E89358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82E89360;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82e8f128
	ctx.lr = 0x82E89384;
	sub_82E8F128(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e887b8
	ctx.lr = 0x82E89390;
	sub_82E887B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e893bc
	if (ctx.cr0.eq) goto loc_82E893BC;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// bne cr6,0x82e893b0
	if (!ctx.cr6.eq) goto loc_82E893B0;
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// std r11,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r11.u64);
	// b 0x82e893c4
	goto loc_82E893C4;
loc_82E893B0:
	// lis r29,-16371
	ctx.r29.s64 = -1072889856;
	// ori r29,r29,14013
	ctx.r29.u64 = ctx.r29.u64 | 14013;
	// b 0x82e893c4
	goto loc_82E893C4;
loc_82E893BC:
	// lis r29,-16371
	ctx.r29.s64 = -1072889856;
	// ori r29,r29,14054
	ctx.r29.u64 = ctx.r29.u64 | 14054;
loc_82E893C4:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e8f250
	ctx.lr = 0x82E893D0;
	sub_82E8F250(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E893DC"))) PPC_WEAK_FUNC(sub_82E893DC);
PPC_FUNC_IMPL(__imp__sub_82E893DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E893E0"))) PPC_WEAK_FUNC(sub_82E893E0);
PPC_FUNC_IMPL(__imp__sub_82E893E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82E893E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82e8f128
	ctx.lr = 0x82E8940C;
	sub_82E8F128(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e887b8
	ctx.lr = 0x82E89418;
	sub_82E887B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e89444
	if (ctx.cr0.eq) goto loc_82E89444;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x82e89438
	if (!ctx.cr6.eq) goto loc_82E89438;
	// lfd f0,8(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// stfd f0,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.f0.u64);
	// b 0x82e8944c
	goto loc_82E8944C;
loc_82E89438:
	// lis r29,-16371
	ctx.r29.s64 = -1072889856;
	// ori r29,r29,14013
	ctx.r29.u64 = ctx.r29.u64 | 14013;
	// b 0x82e8944c
	goto loc_82E8944C;
loc_82E89444:
	// lis r29,-16371
	ctx.r29.s64 = -1072889856;
	// ori r29,r29,14054
	ctx.r29.u64 = ctx.r29.u64 | 14054;
loc_82E8944C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e8f250
	ctx.lr = 0x82E89458;
	sub_82E8F250(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E89464"))) PPC_WEAK_FUNC(sub_82E89464);
PPC_FUNC_IMPL(__imp__sub_82E89464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E89468"))) PPC_WEAK_FUNC(sub_82E89468);
PPC_FUNC_IMPL(__imp__sub_82E89468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82E89470;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,4
	ctx.r27.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// bl 0x82e8f128
	ctx.lr = 0x82E8949C;
	sub_82E8F128(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e887b8
	ctx.lr = 0x82E894A8;
	sub_82E887B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e89500
	if (ctx.cr0.eq) goto loc_82E89500;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,4113
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4113, ctx.xer);
	// bne cr6,0x82e894f4
	if (!ctx.cr6.eq) goto loc_82E894F4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82e894cc
	if (ctx.cr6.eq) goto loc_82E894CC;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82E894CC:
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r5,r29
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x82e894e4
	if (!ctx.cr6.gt) goto loc_82E894E4;
	// lis r26,-32761
	ctx.r26.s64 = -2147024896;
	// ori r26,r26,122
	ctx.r26.u64 = ctx.r26.u64 | 122;
	// b 0x82e89508
	goto loc_82E89508;
loc_82E894E4:
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82E894F0;
	sub_82FA77C0(ctx, base);
	// b 0x82e89508
	goto loc_82E89508;
loc_82E894F4:
	// lis r26,-16371
	ctx.r26.s64 = -1072889856;
	// ori r26,r26,14013
	ctx.r26.u64 = ctx.r26.u64 | 14013;
	// b 0x82e89508
	goto loc_82E89508;
loc_82E89500:
	// lis r26,-16371
	ctx.r26.s64 = -1072889856;
	// ori r26,r26,14054
	ctx.r26.u64 = ctx.r26.u64 | 14054;
loc_82E89508:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e8f250
	ctx.lr = 0x82E89514;
	sub_82E8F250(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E89520"))) PPC_WEAK_FUNC(sub_82E89520);
PPC_FUNC_IMPL(__imp__sub_82E89520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82E89528;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82e8f128
	ctx.lr = 0x82E89548;
	sub_82E8F128(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ea0d68
	ctx.lr = 0x82E89554;
	sub_82EA0D68(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82e8956c
	if (!ctx.cr0.eq) goto loc_82E8956C;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x82e89578
	goto loc_82E89578;
loc_82E8956C:
	// li r11,21
	ctx.r11.s64 = 21;
	// std r29,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r29.u64);
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
loc_82E89578:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e8f250
	ctx.lr = 0x82E89584;
	sub_82E8F250(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E89590"))) PPC_WEAK_FUNC(sub_82E89590);
PPC_FUNC_IMPL(__imp__sub_82E89590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82E89598;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r25,r3,4
	ctx.r25.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x82e8f128
	ctx.lr = 0x82E895B8;
	sub_82E8F128(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ea0d68
	ctx.lr = 0x82E895C4;
	sub_82EA0D68(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// li r26,0
	ctx.r26.s64 = 0;
	// beq 0x82e89624
	if (ctx.cr0.eq) goto loc_82E89624;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82fa3bb8
	ctx.lr = 0x82E895D8;
	sub_82FA3BB8(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// li r10,-1
	ctx.r10.s64 = -1;
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82e895f8
	if (ctx.cr6.lt) goto loc_82E895F8;
	// lis r26,-32761
	ctx.r26.s64 = -2147024896;
	// ori r26,r26,87
	ctx.r26.u64 = ctx.r26.u64 | 87;
	// b 0x82e89644
	goto loc_82E89644;
loc_82E895F8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e8e030
	ctx.lr = 0x82E89600;
	sub_82E8E030(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82e89630
	if (!ctx.cr0.eq) goto loc_82E89630;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E89624;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E89624:
	// lis r26,-32761
	ctx.r26.s64 = -2147024896;
	// ori r26,r26,14
	ctx.r26.u64 = ctx.r26.u64 | 14;
	// b 0x82e89644
	goto loc_82E89644;
loc_82E89630:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82E8963C;
	sub_82FA77C0(ctx, base);
	// li r11,31
	ctx.r11.s64 = 31;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
loc_82E89644:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82e8f250
	ctx.lr = 0x82E89650;
	sub_82E8F250(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8965C"))) PPC_WEAK_FUNC(sub_82E8965C);
PPC_FUNC_IMPL(__imp__sub_82E8965C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E89660"))) PPC_WEAK_FUNC(sub_82E89660);
PPC_FUNC_IMPL(__imp__sub_82E89660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82E89668;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82e8f128
	ctx.lr = 0x82E89688;
	sub_82E8F128(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ea0d68
	ctx.lr = 0x82E89694;
	sub_82EA0D68(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82e896ac
	if (!ctx.cr0.eq) goto loc_82E896AC;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x82e896d4
	goto loc_82E896D4;
loc_82E896AC:
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// beq cr6,0x82e896d4
	if (ctx.cr6.eq) goto loc_82E896D4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E896D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E896D4:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e8f250
	ctx.lr = 0x82E896E0;
	sub_82E8F250(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E896EC"))) PPC_WEAK_FUNC(sub_82E896EC);
PPC_FUNC_IMPL(__imp__sub_82E896EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E896F0"))) PPC_WEAK_FUNC(sub_82E896F0);
PPC_FUNC_IMPL(__imp__sub_82E896F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82E896F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e89160
	ctx.lr = 0x82E89710;
	sub_82E89160(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r11,r11,24400
	ctx.r11.s64 = ctx.r11.s64 + 24400;
	// addi r10,r10,24384
	ctx.r10.s64 = ctx.r10.s64 + 24384;
	// addi r9,r9,24248
	ctx.r9.s64 = ctx.r9.s64 + 24248;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// bl 0x82e8ee58
	ctx.lr = 0x82E89744;
	sub_82E8EE58(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,512
	ctx.r10.s64 = 512;
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// stw r30,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r30.u32);
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// stw r30,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r30.u32);
	// stw r10,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r10.u32);
	// stw r9,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r9.u32);
	// std r30,200(r31)
	PPC_STORE_U64(ctx.r31.u32 + 200, ctx.r30.u64);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E89798"))) PPC_WEAK_FUNC(sub_82E89798);
PPC_FUNC_IMPL(__imp__sub_82E89798) {
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
	// bl 0x82e88be0
	ctx.lr = 0x82E897B8;
	sub_82E88BE0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e897d0
	if (ctx.cr0.eq) goto loc_82E897D0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82e897d0
	if (ctx.cr6.eq) goto loc_82E897D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8ee18
	ctx.lr = 0x82E897D0;
	sub_82E8EE18(ctx, base);
loc_82E897D0:
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

__attribute__((alias("__imp__sub_82E897EC"))) PPC_WEAK_FUNC(sub_82E897EC);
PPC_FUNC_IMPL(__imp__sub_82E897EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E897F0"))) PPC_WEAK_FUNC(sub_82E897F0);
PPC_FUNC_IMPL(__imp__sub_82E897F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82E897F8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82e89824
	if (!ctx.cr6.eq) goto loc_82E89824;
loc_82E89818:
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// ori r30,r30,16387
	ctx.r30.u64 = ctx.r30.u64 | 16387;
	// b 0x82e898e4
	goto loc_82E898E4;
loc_82E89824:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82e89818
	if (ctx.cr6.eq) goto loc_82E89818;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,208
	ctx.r3.s64 = 208;
	// bl 0x82e8edd0
	ctx.lr = 0x82E89850;
	sub_82E8EDD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e8986c
	if (ctx.cr0.eq) goto loc_82E8986C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e896f0
	ctx.lr = 0x82E89860;
	sub_82E896F0(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82e89870
	goto loc_82E89870;
loc_82E8986C:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82E89870:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82e89884
	if (!ctx.cr6.eq) goto loc_82E89884;
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// b 0x82e898e4
	goto loc_82E898E4;
loc_82E89884:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82e898cc
	if (ctx.cr6.lt) goto loc_82E898CC;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88ce8
	ctx.lr = 0x82E898A8;
	sub_82E88CE8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82e898cc
	if (ctx.cr0.lt) goto loc_82E898CC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E898C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// b 0x82e898e4
	goto loc_82E898E4;
loc_82E898CC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E898E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E898E4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E898F0"))) PPC_WEAK_FUNC(sub_82E898F0);
PPC_FUNC_IMPL(__imp__sub_82E898F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82e897f0
	sub_82E897F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E898F4"))) PPC_WEAK_FUNC(sub_82E898F4);
PPC_FUNC_IMPL(__imp__sub_82E898F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E898F8"))) PPC_WEAK_FUNC(sub_82E898F8);
PPC_FUNC_IMPL(__imp__sub_82E898F8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// lis r8,22349
	ctx.r8.s64 = 1464664064;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r9,24508
	ctx.r7.s64 = ctx.r9.s64 + 24508;
	// li r6,1
	ctx.r6.s64 = 1;
	// lfd f0,22472(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 22472);
	// ori r5,r8,22065
	ctx.r5.u64 = ctx.r8.u64 | 22065;
	// stfd f0,544(r3)
	PPC_STORE_U64(ctx.r3.u32 + 544, ctx.f0.u64);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r11.u32);
	// stw r11,264(r3)
	PPC_STORE_U32(ctx.r3.u32 + 264, ctx.r11.u32);
	// stw r11,280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 280, ctx.r11.u32);
	// stw r11,284(r3)
	PPC_STORE_U32(ctx.r3.u32 + 284, ctx.r11.u32);
	// stw r11,488(r3)
	PPC_STORE_U32(ctx.r3.u32 + 488, ctx.r11.u32);
	// stw r11,492(r3)
	PPC_STORE_U32(ctx.r3.u32 + 492, ctx.r11.u32);
	// stw r11,496(r3)
	PPC_STORE_U32(ctx.r3.u32 + 496, ctx.r11.u32);
	// stw r11,500(r3)
	PPC_STORE_U32(ctx.r3.u32 + 500, ctx.r11.u32);
	// stw r11,504(r3)
	PPC_STORE_U32(ctx.r3.u32 + 504, ctx.r11.u32);
	// stw r11,508(r3)
	PPC_STORE_U32(ctx.r3.u32 + 508, ctx.r11.u32);
	// stw r11,512(r3)
	PPC_STORE_U32(ctx.r3.u32 + 512, ctx.r11.u32);
	// stw r11,516(r3)
	PPC_STORE_U32(ctx.r3.u32 + 516, ctx.r11.u32);
	// stw r11,520(r3)
	PPC_STORE_U32(ctx.r3.u32 + 520, ctx.r11.u32);
	// stw r11,524(r3)
	PPC_STORE_U32(ctx.r3.u32 + 524, ctx.r11.u32);
	// stw r11,528(r3)
	PPC_STORE_U32(ctx.r3.u32 + 528, ctx.r11.u32);
	// stw r11,532(r3)
	PPC_STORE_U32(ctx.r3.u32 + 532, ctx.r11.u32);
	// stw r11,536(r3)
	PPC_STORE_U32(ctx.r3.u32 + 536, ctx.r11.u32);
	// stw r11,540(r3)
	PPC_STORE_U32(ctx.r3.u32 + 540, ctx.r11.u32);
	// stb r11,552(r3)
	PPC_STORE_U8(ctx.r3.u32 + 552, ctx.r11.u8);
	// stw r11,556(r3)
	PPC_STORE_U32(ctx.r3.u32 + 556, ctx.r11.u32);
	// stw r11,560(r3)
	PPC_STORE_U32(ctx.r3.u32 + 560, ctx.r11.u32);
	// stw r11,564(r3)
	PPC_STORE_U32(ctx.r3.u32 + 564, ctx.r11.u32);
	// stw r11,568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 568, ctx.r11.u32);
	// stw r11,580(r3)
	PPC_STORE_U32(ctx.r3.u32 + 580, ctx.r11.u32);
	// stw r11,584(r3)
	PPC_STORE_U32(ctx.r3.u32 + 584, ctx.r11.u32);
	// stw r11,588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 588, ctx.r11.u32);
	// stw r6,592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 592, ctx.r6.u32);
	// stw r11,596(r3)
	PPC_STORE_U32(ctx.r3.u32 + 596, ctx.r11.u32);
	// stw r11,600(r3)
	PPC_STORE_U32(ctx.r3.u32 + 600, ctx.r11.u32);
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r4,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r4.u32);
	// stw r11,604(r3)
	PPC_STORE_U32(ctx.r3.u32 + 604, ctx.r11.u32);
	// stw r11,1120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1120, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E899D4"))) PPC_WEAK_FUNC(sub_82E899D4);
PPC_FUNC_IMPL(__imp__sub_82E899D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E899D8"))) PPC_WEAK_FUNC(sub_82E899D8);
PPC_FUNC_IMPL(__imp__sub_82E899D8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,22358
	ctx.r10.s64 = 1465253888;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r9,r10,17201
	ctx.r9.u64 = ctx.r10.u64 | 17201;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82e89a08
	if (!ctx.cr6.eq) goto loc_82E89A08;
	// lis r10,22349
	ctx.r10.s64 = 1464664064;
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r8,r10,22081
	ctx.r8.u64 = ctx.r10.u64 | 22081;
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// stw r8,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// blr 
	return;
loc_82E89A08:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r4,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r4.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E89A18"))) PPC_WEAK_FUNC(sub_82E89A18);
PPC_FUNC_IMPL(__imp__sub_82E89A18) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x82ec2700
	sub_82EC2700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E89A20"))) PPC_WEAK_FUNC(sub_82E89A20);
PPC_FUNC_IMPL(__imp__sub_82E89A20) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82e89a58
	if (ctx.cr6.eq) goto loc_82E89A58;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e89a58
	if (ctx.cr6.eq) goto loc_82E89A58;
	// lwz r11,224(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 224);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e89a50
	if (ctx.cr6.eq) goto loc_82E89A50;
	// lwz r11,108(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 108);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82E89A50:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82E89A58:
	// lis r10,-31972
	ctx.r10.s64 = -2095316992;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r9,24512
	ctx.r4.s64 = ctx.r9.s64 + 24512;
	// lwz r3,-28724(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28724);
	// b 0x822d6f30
	sub_822D6F30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E89A78"))) PPC_WEAK_FUNC(sub_82E89A78);
PPC_FUNC_IMPL(__imp__sub_82E89A78) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82e89ab0
	if (ctx.cr6.eq) goto loc_82E89AB0;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e89ab0
	if (ctx.cr6.eq) goto loc_82E89AB0;
	// lwz r11,208(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 208);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e89aa8
	if (ctx.cr6.eq) goto loc_82E89AA8;
	// lwz r11,60(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82E89AA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82E89AB0:
	// lis r10,-31972
	ctx.r10.s64 = -2095316992;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r9,24532
	ctx.r4.s64 = ctx.r9.s64 + 24532;
	// lwz r3,-28724(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28724);
	// b 0x822d6f30
	sub_822D6F30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E89AD0"))) PPC_WEAK_FUNC(sub_82E89AD0);
PPC_FUNC_IMPL(__imp__sub_82E89AD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82E89AD8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82e89b30
	if (ctx.cr6.eq) goto loc_82E89B30;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e89b30
	if (ctx.cr6.eq) goto loc_82E89B30;
	// lwz r11,152(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 152);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e89c28
	if (ctx.cr6.eq) goto loc_82E89C28;
	// lwz r11,156(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e89c28
	if (ctx.cr6.eq) goto loc_82E89C28;
	// lwz r11,40(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r10,44(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_82E89B30:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r28,-31972
	ctx.r28.s64 = -2095316992;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r10,24576
	ctx.r4.s64 = ctx.r10.s64 + 24576;
	// lwz r3,-28724(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -28724);
	// bl 0x822d6f30
	ctx.lr = 0x82E89B54;
	sub_822D6F30(ctx, base);
	// lwz r11,-28724(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -28724);
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r9,24552
	ctx.r4.s64 = ctx.r9.s64 + 24552;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x822d6f30
	ctx.lr = 0x82E89B70;
	sub_822D6F30(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82e89c28
	if (ctx.cr6.eq) goto loc_82E89C28;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e89c28
	if (ctx.cr6.eq) goto loc_82E89C28;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e89c28
	if (ctx.cr6.eq) goto loc_82E89C28;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e89c28
	if (ctx.cr6.eq) goto loc_82E89C28;
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 8, ctx.xer);
	// rlwinm r10,r11,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bne cr6,0x82e89bbc
	if (!ctx.cr6.eq) goto loc_82E89BBC;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// rlwinm r10,r11,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// b 0x82e89bc4
	goto loc_82E89BC4;
loc_82E89BBC:
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// rlwinm r10,r11,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
loc_82E89BC4:
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82e89be4
	if (ctx.cr6.lt) goto loc_82E89BE4;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// ble cr6,0x82e89be8
	if (!ctx.cr6.gt) goto loc_82E89BE8;
	// li r11,8192
	ctx.r11.s64 = 8192;
	// b 0x82e89be8
	goto loc_82E89BE8;
loc_82E89BE4:
	// li r11,16
	ctx.r11.s64 = 16;
loc_82E89BE8:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x82e89c14
	if (ctx.cr6.lt) goto loc_82E89C14;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// ble cr6,0x82e89c18
	if (!ctx.cr6.gt) goto loc_82E89C18;
	// li r11,8192
	ctx.r11.s64 = 8192;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_82E89C14:
	// li r11,32
	ctx.r11.s64 = 32;
loc_82E89C18:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_82E89C28:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E89C34"))) PPC_WEAK_FUNC(sub_82E89C34);
PPC_FUNC_IMPL(__imp__sub_82E89C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E89C38"))) PPC_WEAK_FUNC(sub_82E89C38);
PPC_FUNC_IMPL(__imp__sub_82E89C38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82E89C40;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r11,520(r3)
	PPC_STORE_U32(ctx.r3.u32 + 520, ctx.r11.u32);
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// stw r11,516(r3)
	PPC_STORE_U32(ctx.r3.u32 + 516, ctx.r11.u32);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// addi r27,r3,520
	ctx.r27.s64 = ctx.r3.s64 + 520;
	// addi r30,r3,516
	ctx.r30.s64 = ctx.r3.s64 + 516;
	// cmpwi cr6,r4,8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 8, ctx.xer);
	// beq cr6,0x82e89c88
	if (ctx.cr6.eq) goto loc_82E89C88;
	// cmpwi cr6,r4,7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 7, ctx.xer);
	// bne cr6,0x82e89d6c
	if (!ctx.cr6.eq) goto loc_82E89D6C;
loc_82E89C88:
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e89ad0
	ctx.lr = 0x82E89CA0;
	sub_82E89AD0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e89d00
	if (ctx.cr6.eq) goto loc_82E89D00;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82e89cc8
	if (!ctx.cr6.lt) goto loc_82E89CC8;
	// stw r9,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r9.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x82e89ccc
	goto loc_82E89CCC;
loc_82E89CC8:
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_82E89CCC:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82e89cf0
	if (!ctx.cr6.lt) goto loc_82E89CF0;
	// stw r9,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r9.u32);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
loc_82E89CF0:
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
loc_82E89D00:
	// cmpwi cr6,r29,7
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 7, ctx.xer);
	// bne cr6,0x82e89d6c
	if (!ctx.cr6.eq) goto loc_82E89D6C;
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 2, ctx.xer);
	// beq cr6,0x82e89d6c
	if (ctx.cr6.eq) goto loc_82E89D6C;
	// clrldi r11,r25,32
	ctx.r11.u64 = ctx.r25.u64 & 0xFFFFFFFF;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mullw r7,r10,r9
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// clrldi r6,r7,32
	ctx.r6.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// fmul f12,f13,f31
	ctx.f12.f64 = ctx.f13.f64 * ctx.f31.f64;
	// lfd f0,-15528(r8)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r8.u32 + -15528);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// fdiv f9,f12,f10
	ctx.f9.f64 = ctx.f12.f64 / ctx.f10.f64;
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// bge cr6,0x82e89d6c
	if (!ctx.cr6.lt) goto loc_82E89D6C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r11.u32);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
loc_82E89D6C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E89D78"))) PPC_WEAK_FUNC(sub_82E89D78);
PPC_FUNC_IMPL(__imp__sub_82E89D78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e89db0
	if (ctx.cr6.eq) goto loc_82E89DB0;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,2124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82e89db0
	if (!ctx.cr6.eq) goto loc_82E89DB0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82e89da4
	if (ctx.cr6.eq) goto loc_82E89DA4;
	// mulli r11,r8,10000
	ctx.r11.s64 = ctx.r8.s64 * 10000;
	// std r11,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
loc_82E89DA4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82E89DB0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E89DBC"))) PPC_WEAK_FUNC(sub_82E89DBC);
PPC_FUNC_IMPL(__imp__sub_82E89DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E89DC0"))) PPC_WEAK_FUNC(sub_82E89DC0);
PPC_FUNC_IMPL(__imp__sub_82E89DC0) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82fa4108
	ctx.lr = 0x82E89DE0;
	sub_82FA4108(ctx, base);
	// clrlwi r8,r3,30
	ctx.r8.u64 = ctx.r3.u32 & 0x3;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// ble cr6,0x82e89e0c
	if (!ctx.cr6.gt) goto loc_82E89E0C;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82E89DF8:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r9,r10,r30
	PPC_STORE_U8(ctx.r10.u32 + ctx.r30.u32, ctx.r9.u8);
	// bdnz 0x82e89df8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82E89DF8;
loc_82E89E0C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
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

__attribute__((alias("__imp__sub_82E89E30"))) PPC_WEAK_FUNC(sub_82E89E30);
PPC_FUNC_IMPL(__imp__sub_82E89E30) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x82ec0760
	ctx.lr = 0x82E89E44;
	sub_82EC0760(ctx, base);
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

__attribute__((alias("__imp__sub_82E89E58"))) PPC_WEAK_FUNC(sub_82E89E58);
PPC_FUNC_IMPL(__imp__sub_82E89E58) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x82ec0a18
	sub_82EC0A18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E89E60"))) PPC_WEAK_FUNC(sub_82E89E60);
PPC_FUNC_IMPL(__imp__sub_82E89E60) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r3,2792(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2792);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E89E6C"))) PPC_WEAK_FUNC(sub_82E89E6C);
PPC_FUNC_IMPL(__imp__sub_82E89E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E89E70"))) PPC_WEAK_FUNC(sub_82E89E70);
PPC_FUNC_IMPL(__imp__sub_82E89E70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,2272(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2272);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,2280(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2280);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E89E8C"))) PPC_WEAK_FUNC(sub_82E89E8C);
PPC_FUNC_IMPL(__imp__sub_82E89E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E89E90"))) PPC_WEAK_FUNC(sub_82E89E90);
PPC_FUNC_IMPL(__imp__sub_82E89E90) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,2272(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2272);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,2284(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2284);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E89EAC"))) PPC_WEAK_FUNC(sub_82E89EAC);
PPC_FUNC_IMPL(__imp__sub_82E89EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E89EB0"))) PPC_WEAK_FUNC(sub_82E89EB0);
PPC_FUNC_IMPL(__imp__sub_82E89EB0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,560(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 560);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82e89ef4
	if (ctx.cr6.eq) goto loc_82E89EF4;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r5,r9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x82e89ef4
	if (ctx.cr6.gt) goto loc_82E89EF4;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge cr6,0x82e89ee4
	if (!ctx.cr6.lt) goto loc_82E89EE4;
	// lwz r9,568(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 568);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82e89ef0
	if (!ctx.cr6.eq) goto loc_82E89EF0;
loc_82E89EE4:
	// lwz r10,568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 568);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 568, ctx.r10.u32);
loc_82E89EF0:
	// b 0x82eceba8
	sub_82ECEBA8(ctx, base);
	return;
loc_82E89EF4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E89F00"))) PPC_WEAK_FUNC(sub_82E89F00);
PPC_FUNC_IMPL(__imp__sub_82E89F00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82E89F08;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r11,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r11.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r11.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// stw r11,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r11.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// lwz r10,568(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 568);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x82e8a01c
	if (ctx.cr6.lt) goto loc_82E8A01C;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge cr6,0x82e89f60
	if (!ctx.cr6.lt) goto loc_82E89F60;
	// lwz r9,56(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// addi r30,r10,-2
	ctx.r30.s64 = ctx.r10.s64 + -2;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82e89f60
	if (!ctx.cr6.eq) goto loc_82E89F60;
	// addi r30,r10,-1
	ctx.r30.s64 = ctx.r10.s64 + -1;
loc_82E89F60:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,564(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 564);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// bl 0x82ecf900
	ctx.lr = 0x82E89F74;
	sub_82ECF900(ctx, base);
	// addi r27,r30,-1
	ctx.r27.s64 = ctx.r30.s64 + -1;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt cr6,0x82e89fe8
	if (ctx.cr6.lt) goto loc_82E89FE8;
	// li r25,1
	ctx.r25.s64 = 1;
loc_82E89F8C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,564(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 564);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82ecf900
	ctx.lr = 0x82E89F9C;
	sub_82ECF900(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82e89fac
	if (ctx.cr6.eq) goto loc_82E89FAC;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x82e89fcc
	if (!ctx.cr6.eq) goto loc_82E89FCC;
loc_82E89FAC:
	// subf r11,r29,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r29.s64;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bne cr6,0x82e89fcc
	if (!ctx.cr6.eq) goto loc_82E89FCC;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82E89FCC:
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x82e89fe0
	if (!ctx.cr6.eq) goto loc_82E89FE0;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82e89fe0
	if (!ctx.cr6.eq) goto loc_82E89FE0;
	// stw r25,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r25.u32);
loc_82E89FE0:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge 0x82e89f8c
	if (!ctx.cr0.lt) goto loc_82E89F8C;
loc_82E89FE8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82e8a01c
	if (ctx.cr6.lt) goto loc_82E8A01C;
loc_82E89FF0:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,564(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 564);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ecf900
	ctx.lr = 0x82E8A000;
	sub_82ECF900(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82e8a01c
	if (!ctx.cr6.eq) goto loc_82E8A01C;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bge 0x82e89ff0
	if (!ctx.cr0.lt) goto loc_82E89FF0;
loc_82E8A01C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8A024"))) PPC_WEAK_FUNC(sub_82E8A024);
PPC_FUNC_IMPL(__imp__sub_82E8A024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8A028"))) PPC_WEAK_FUNC(sub_82E8A028);
PPC_FUNC_IMPL(__imp__sub_82E8A028) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,560(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 560);
	// bl 0x82eceac8
	ctx.lr = 0x82E8A048;
	sub_82ECEAC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e8a068
	if (!ctx.cr6.eq) goto loc_82E8A068;
	// li r3,-100
	ctx.r3.s64 = -100;
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
loc_82E8A068:
	// lwz r11,568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82E8A08C"))) PPC_WEAK_FUNC(sub_82E8A08C);
PPC_FUNC_IMPL(__imp__sub_82E8A08C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8A090"))) PPC_WEAK_FUNC(sub_82E8A090);
PPC_FUNC_IMPL(__imp__sub_82E8A090) {
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
	// lwz r3,560(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 560);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e8a0cc
	if (ctx.cr6.eq) goto loc_82E8A0CC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82e8a0cc
	if (ctx.cr6.gt) goto loc_82E8A0CC;
	// bl 0x82ecec78
	ctx.lr = 0x82E8A0C4;
	sub_82ECEC78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e8a0d4
	if (!ctx.cr6.eq) goto loc_82E8A0D4;
loc_82E8A0CC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82E8A0D4:
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

__attribute__((alias("__imp__sub_82E8A0E8"))) PPC_WEAK_FUNC(sub_82E8A0E8);
PPC_FUNC_IMPL(__imp__sub_82E8A0E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r4,31104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 31104, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8A0F4"))) PPC_WEAK_FUNC(sub_82E8A0F4);
PPC_FUNC_IMPL(__imp__sub_82E8A0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8A0F8"))) PPC_WEAK_FUNC(sub_82E8A0F8);
PPC_FUNC_IMPL(__imp__sub_82E8A0F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r3,31104(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31104);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8A104"))) PPC_WEAK_FUNC(sub_82E8A104);
PPC_FUNC_IMPL(__imp__sub_82E8A104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8A108"))) PPC_WEAK_FUNC(sub_82E8A108);
PPC_FUNC_IMPL(__imp__sub_82E8A108) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82E8A110;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,22101
	ctx.r10.s64 = 1448411136;
	// lwz r11,16(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r9,r10,22857
	ctx.r9.u64 = ctx.r10.u64 | 22857;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82e8a2c4
	if (ctx.cr6.eq) goto loc_82E8A2C4;
	// lis r10,12338
	ctx.r10.s64 = 808583168;
	// ori r8,r10,13385
	ctx.r8.u64 = ctx.r10.u64 | 13385;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82e8a2c4
	if (ctx.cr6.eq) goto loc_82E8A2C4;
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e8a264
	if (!ctx.cr6.eq) goto loc_82E8A264;
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r29,r3,100
	ctx.r29.s64 = ctx.r3.s64 + 100;
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r11,r6,-4
	ctx.r11.s64 = ctx.r6.s64 + -4;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r10,r29,-4
	ctx.r10.s64 = ctx.r29.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82E8A174:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82e8a174
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82E8A174;
	// li r11,40
	ctx.r11.s64 = 40;
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r9,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r9.u32);
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// sth r10,114(r31)
	PPC_STORE_U16(ctx.r31.u32 + 114, ctx.r10.u16);
	// stw r7,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r7.u32);
	// sth r28,112(r31)
	PPC_STORE_U16(ctx.r31.u32 + 112, ctx.r28.u16);
	// stw r8,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r8.u32);
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mullw r11,r6,r5
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r11,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 1;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// beq cr6,0x82e8a1d8
	if (ctx.cr6.eq) goto loc_82E8A1D8;
	// bl 0x82f54e58
	ctx.lr = 0x82E8A1D8;
	sub_82F54E58(ctx, base);
loc_82E8A1D8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// bne cr6,0x82e8a1f4
	if (!ctx.cr6.eq) goto loc_82E8A1F4;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// li r7,2
	ctx.r7.s64 = 2;
	// beq cr6,0x82e8a1f8
	if (ctx.cr6.eq) goto loc_82E8A1F8;
loc_82E8A1F4:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82E8A1F8:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ed7458
	ctx.lr = 0x82E8A20C;
	sub_82ED7458(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r3,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e8a260
	if (ctx.cr6.eq) goto loc_82E8A260;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82e8a254
	if (ctx.cr6.eq) goto loc_82E8A254;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82e8a254
	if (ctx.cr6.eq) goto loc_82E8A254;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82e8a254
	if (ctx.cr6.eq) goto loc_82E8A254;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82e8a248
	if (!ctx.cr6.eq) goto loc_82E8A248;
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_82E8A248:
	// li r3,-100
	ctx.r3.s64 = -100;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_82E8A254:
	// li r3,-2
	ctx.r3.s64 = -2;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_82E8A260:
	// stw r28,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r28.u32);
loc_82E8A264:
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r10,r27,8
	ctx.r10.s64 = ctx.r27.s64 + 8;
	// addi r11,r31,96
	ctx.r11.s64 = ctx.r31.s64 + 96;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82E8A278:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82e8a278
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82E8A278;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// bne cr6,0x82e8a2a0
	if (!ctx.cr6.eq) goto loc_82E8A2A0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// li r6,2
	ctx.r6.s64 = 2;
	// beq cr6,0x82e8a2a4
	if (ctx.cr6.eq) goto loc_82E8A2A4;
loc_82E8A2A0:
	// li r6,0
	ctx.r6.s64 = 0;
loc_82E8A2A4:
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// bl 0x82ed73b8
	ctx.lr = 0x82E8A2B8;
	sub_82ED73B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_82E8A2C4:
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r10,r27,8
	ctx.r10.s64 = ctx.r27.s64 + 8;
	// addi r11,r30,-4
	ctx.r11.s64 = ctx.r30.s64 + -4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82E8A2D8:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82e8a2d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82E8A2D8;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x82fa77c0
	ctx.lr = 0x82E8A2F4;
	sub_82FA77C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8A300"))) PPC_WEAK_FUNC(sub_82E8A300);
PPC_FUNC_IMPL(__imp__sub_82E8A300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7658
	ctx.lr = 0x82E8A308;
	__savegprlr_20(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82e8a330
	if (!ctx.cr6.eq) goto loc_82E8A330;
	// lwz r11,512(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 512);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e8a330
	if (ctx.cr6.eq) goto loc_82E8A330;
	// li r6,1
	ctx.r6.s64 = 1;
loc_82E8A330:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82e8a348
	if (!ctx.cr6.eq) goto loc_82E8A348;
	// lwz r11,512(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e8a348
	if (ctx.cr6.eq) goto loc_82E8A348;
	// li r7,1
	ctx.r7.s64 = 1;
loc_82E8A348:
	// lis r5,22349
	ctx.r5.s64 = 1464664064;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// ori r4,r5,22081
	ctx.r4.u64 = ctx.r5.u64 | 22081;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82e8a394
	if (ctx.cr6.eq) goto loc_82E8A394;
	// lis r5,30573
	ctx.r5.s64 = 2003632128;
	// ori r4,r5,30305
	ctx.r4.u64 = ctx.r5.u64 | 30305;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82e8a394
	if (ctx.cr6.eq) goto loc_82E8A394;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e8a394
	if (!ctx.cr6.eq) goto loc_82E8A394;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82ebfe20
	ctx.lr = 0x82E8A388;
	sub_82EBFE20(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82fa76a8
	__restgprlr_20(ctx, base);
	return;
loc_82E8A394:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r11.u8);
	// lwz r5,540(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82e8a3f8
	if (!ctx.cr6.eq) goto loc_82E8A3F8;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r5,2124(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82e8a3c0
	if (!ctx.cr6.eq) goto loc_82E8A3C0;
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r11,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r11.u8);
loc_82E8A3C0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r5,2272(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2272);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82e8a3dc
	if (!ctx.cr6.eq) goto loc_82E8A3DC;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// ori r5,r11,4
	ctx.r5.u64 = ctx.r11.u64 | 4;
	// stb r5,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r5.u8);
loc_82E8A3DC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r5,28492(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28492);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82e8a3f8
	if (!ctx.cr6.eq) goto loc_82E8A3F8;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// ori r5,r11,32
	ctx.r5.u64 = ctx.r11.u64 | 32;
	// stb r5,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r5.u8);
loc_82E8A3F8:
	// lbz r11,407(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 407);
	// addi r29,r28,1
	ctx.r29.s64 = ctx.r28.s64 + 1;
	// lbz r27,399(r1)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r1.u32 + 399);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lbz r26,391(r1)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r1.u32 + 391);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r25,380(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// lwz r24,372(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r23,364(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r22,356(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r21,348(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r20,340(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stb r11,151(r1)
	PPC_STORE_U8(ctx.r1.u32 + 151, ctx.r11.u8);
	// stb r27,143(r1)
	PPC_STORE_U8(ctx.r1.u32 + 143, ctx.r27.u8);
	// stb r26,135(r1)
	PPC_STORE_U8(ctx.r1.u32 + 135, ctx.r26.u8);
	// stw r25,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r25.u32);
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// stw r23,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// stw r22,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// stw r21,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r21.u32);
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// bl 0x82ec3f30
	ctx.lr = 0x82E8A454;
	sub_82EC3F30(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,2112(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2112);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x82e8a498
	if (!ctx.cr6.eq) goto loc_82E8A498;
	// lwz r9,2104(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2104);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82e8a498
	if (ctx.cr6.eq) goto loc_82E8A498;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82e8a498
	if (!ctx.cr6.gt) goto loc_82E8A498;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82E8A48C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e8a48c
	if (ctx.cr6.lt) goto loc_82E8A48C;
loc_82E8A498:
	// lwz r11,2100(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2100);
	// lis r4,9356
	ctx.r4.s64 = 613154816;
	// addi r10,r11,108
	ctx.r10.s64 = ctx.r11.s64 + 108;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x82691410
	ctx.lr = 0x82E8A4B8;
	sub_82691410(ctx, base);
	// stw r3,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e8a4d0
	if (!ctx.cr6.eq) goto loc_82E8A4D0;
	// li r3,-100
	ctx.r3.s64 = -100;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82fa76a8
	__restgprlr_20(ctx, base);
	return;
loc_82E8A4D0:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,48(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e8a4e8
	if (!ctx.cr6.eq) goto loc_82E8A4E8;
	// addi r4,r28,5
	ctx.r4.s64 = ctx.r28.s64 + 5;
loc_82E8A4E8:
	// bl 0x82fa77c0
	ctx.lr = 0x82E8A4EC;
	sub_82FA77C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82fa76a8
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8A4F8"))) PPC_WEAK_FUNC(sub_82E8A4F8);
PPC_FUNC_IMPL(__imp__sub_82E8A4F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82E8A500;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// bl 0x82ec0c18
	ctx.lr = 0x82E8A520;
	sub_82EC0C18(ctx, base);
	// lis r9,9356
	ctx.r9.s64 = 613154816;
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// ori r24,r9,32768
	ctx.r24.u64 = ctx.r9.u64 | 32768;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82691410
	ctx.lr = 0x82E8A540;
	sub_82691410(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e8a6a4
	if (ctx.cr6.eq) goto loc_82E8A6A4;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e8a5f4
	if (!ctx.cr6.eq) goto loc_82E8A5F4;
	// lis r11,-31972
	ctx.r11.s64 = -2095316992;
	// lbz r10,-28728(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -28728);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e8a5a0
	if (ctx.cr6.eq) goto loc_82E8A5A0;
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// lwz r11,-2056(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2056);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e8a5a0
	if (!ctx.cr6.gt) goto loc_82E8A5A0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,76(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82ed7ea0
	ctx.lr = 0x82E8A59C;
	sub_82ED7EA0(ctx, base);
	// b 0x82e8a5a8
	goto loc_82E8A5A8;
loc_82E8A5A0:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82e8a620
	if (ctx.cr6.eq) goto loc_82E8A620;
loc_82E8A5A8:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r7,64(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,88(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x82ed7f50
	ctx.lr = 0x82E8A5C0;
	sub_82ED7F50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e8a698
	if (!ctx.cr6.eq) goto loc_82E8A698;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x82fa77c0
	ctx.lr = 0x82E8A5E0;
	sub_82FA77C0(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// b 0x82e8a620
	goto loc_82E8A620;
loc_82E8A5F4:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82e8a620
	if (ctx.cr6.eq) goto loc_82E8A620;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r7,64(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r6,88(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ed7f50
	ctx.lr = 0x82E8A614;
	sub_82ED7F50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e8a698
	if (!ctx.cr6.eq) goto loc_82E8A698;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82E8A620:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82ec2700
	ctx.lr = 0x82E8A628;
	sub_82EC2700(ctx, base);
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// beq cr6,0x82e8a6b0
	if (ctx.cr6.eq) goto loc_82E8A6B0;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e8a65c
	if (!ctx.cr6.eq) goto loc_82E8A65C;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e8a65c
	if (!ctx.cr6.eq) goto loc_82E8A65C;
	// lwz r11,536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e8a65c
	if (!ctx.cr6.eq) goto loc_82E8A65C;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82e8a6b0
	if (ctx.cr6.eq) goto loc_82E8A6B0;
loc_82E8A65C:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ed7998
	ctx.lr = 0x82E8A690;
	sub_82ED7998(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e8a75c
	if (ctx.cr6.eq) goto loc_82E8A75C;
loc_82E8A698:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82691460
	ctx.lr = 0x82E8A6A4;
	sub_82691460(ctx, base);
loc_82E8A6A4:
	// li r3,-100
	ctx.r3.s64 = -100;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
loc_82E8A6B0:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82ec0a18
	ctx.lr = 0x82E8A6B8;
	sub_82EC0A18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e8a75c
	if (ctx.cr6.eq) goto loc_82E8A75C;
	// lis r11,22349
	ctx.r11.s64 = 1464664064;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// ori r9,r11,22081
	ctx.r9.u64 = ctx.r11.u64 | 22081;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82e8a75c
	if (!ctx.cr6.eq) goto loc_82E8A75C;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82e8a75c
	if (!ctx.cr6.eq) goto loc_82E8A75C;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82691410
	ctx.lr = 0x82E8A6F0;
	sub_82691410(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r30,2792(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2792);
	// add r31,r30,r26
	ctx.r31.u64 = ctx.r30.u64 + ctx.r26.u64;
	// subf r5,r30,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r30.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82E8A710;
	sub_82FA77C0(ctx, base);
	// li r9,12
	ctx.r9.s64 = 12;
	// li r8,1
	ctx.r8.s64 = 1;
	// stbx r25,r30,r26
	PPC_STORE_U8(ctx.r30.u32 + ctx.r26.u32, ctx.r25.u8);
	// stb r25,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r25.u8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stb r8,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r8.u8);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stb r9,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r9.u8);
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// subf r5,r30,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r30.s64;
	// bl 0x82fa77c0
	ctx.lr = 0x82E8A73C;
	sub_82FA77C0(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// stw r6,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r6.u32);
	// beq cr6,0x82e8a75c
	if (ctx.cr6.eq) goto loc_82E8A75C;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82691460
	ctx.lr = 0x82E8A75C;
	sub_82691460(ctx, base);
loc_82E8A75C:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82691460
	ctx.lr = 0x82E8A768;
	sub_82691460(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8A774"))) PPC_WEAK_FUNC(sub_82E8A774);
PPC_FUNC_IMPL(__imp__sub_82E8A774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8A778"))) PPC_WEAK_FUNC(sub_82E8A778);
PPC_FUNC_IMPL(__imp__sub_82E8A778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82E8A780;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,552(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 552);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r4,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r4.u64);
	// std r5,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r5.u64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// std r6,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r6.u64);
	// lwz r28,264(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// std r7,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r7.u64);
	// beq cr6,0x82e8a828
	if (ctx.cr6.eq) goto loc_82E8A828;
	// lwz r3,232(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e8a9e0
	if (!ctx.cr6.eq) goto loc_82E8A9E0;
	// lwz r11,220(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e8a9e0
	if (!ctx.cr6.eq) goto loc_82E8A9E0;
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82e8a7d4
	if (!ctx.cr6.eq) goto loc_82E8A7D4;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_82E8A7D4:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82e8a828
	if (!ctx.cr6.gt) goto loc_82E8A828;
	// lwz r11,568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// addi r4,r11,-2
	ctx.r4.s64 = ctx.r11.s64 + -2;
	// bl 0x82ecf900
	ctx.lr = 0x82E8A7F4;
	sub_82ECF900(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82e8a828
	if (!ctx.cr6.eq) goto loc_82E8A828;
loc_82E8A7FC:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82e8a828
	if (ctx.cr6.eq) goto loc_82E8A828;
	// lwz r11,568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// addi r4,r11,-2
	ctx.r4.s64 = ctx.r11.s64 + -2;
	// bl 0x82ecf900
	ctx.lr = 0x82E8A820;
	sub_82ECF900(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x82e8a7fc
	if (ctx.cr6.eq) goto loc_82E8A7FC;
loc_82E8A828:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e8a9dc
	if (ctx.cr6.eq) goto loc_82E8A9DC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,560(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// lwz r11,568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// lfd f0,22472(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 22472);
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// stfd f0,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e8a9dc
	if (ctx.cr6.eq) goto loc_82E8A9DC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82e8a9dc
	if (ctx.cr6.gt) goto loc_82E8A9DC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82ecec78
	ctx.lr = 0x82E8A878;
	sub_82ECEC78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e8a9dc
	if (ctx.cr6.eq) goto loc_82E8A9DC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8a9dc
	if (ctx.cr6.eq) goto loc_82E8A9DC;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// li r27,1
	ctx.r27.s64 = 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82e8a8b8
	if (!ctx.cr6.eq) goto loc_82E8A8B8;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82ec3ed8
	ctx.lr = 0x82E8A8AC;
	sub_82EC3ED8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r27,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r27.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82E8A8B8:
	// lwz r10,568(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r5,r10,-2
	ctx.r5.s64 = ctx.r10.s64 + -2;
	// bl 0x82e8a090
	ctx.lr = 0x82E8A8D0;
	sub_82E8A090(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8a9dc
	if (ctx.cr6.eq) goto loc_82E8A9DC;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82e8a904
	if (!ctx.cr6.eq) goto loc_82E8A904;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82ec3ed8
	ctx.lr = 0x82E8A8F8;
	sub_82EC3ED8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r27,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r27.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82E8A904:
	// lwz r10,568(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r5,r10,-3
	ctx.r5.s64 = ctx.r10.s64 + -3;
	// bl 0x82e8a090
	ctx.lr = 0x82E8A91C;
	sub_82E8A090(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8a9dc
	if (ctx.cr6.eq) goto loc_82E8A9DC;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82e8a950
	if (!ctx.cr6.eq) goto loc_82E8A950;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82ec3ed8
	ctx.lr = 0x82E8A944;
	sub_82EC3ED8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r27,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r27.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82E8A950:
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// lwz r28,4(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f05298
	ctx.lr = 0x82E8A96C;
	sub_82F05298(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82f05298
	ctx.lr = 0x82E8A984;
	sub_82F05298(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82f05298
	ctx.lr = 0x82E8A99C;
	sub_82F05298(ctx, base);
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f05298
	ctx.lr = 0x82E8A9B4;
	sub_82F05298(ctx, base);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// li r28,0
	ctx.r28.s64 = 0;
	// lfd f12,104(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fadd f11,f13,f0
	ctx.f11.f64 = ctx.f13.f64 + ctx.f0.f64;
	// lfd f10,112(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fadd f9,f10,f12
	ctx.f9.f64 = ctx.f10.f64 + ctx.f12.f64;
	// fcmpu cr6,f11,f9
	ctx.cr6.compare(ctx.f11.f64, ctx.f9.f64);
	// blt cr6,0x82e8a9dc
	if (ctx.cr6.lt) goto loc_82E8A9DC;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_82E8A9DC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82E8A9E0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8A9E8"))) PPC_WEAK_FUNC(sub_82E8A9E8);
PPC_FUNC_IMPL(__imp__sub_82E8A9E8) {
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
	// lwz r3,560(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 560);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e8aa68
	if (ctx.cr6.eq) goto loc_82E8AA68;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82e8aa68
	if (ctx.cr0.lt) goto loc_82E8AA68;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82ecec78
	ctx.lr = 0x82E8AA20;
	sub_82ECEC78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e8aa68
	if (ctx.cr6.eq) goto loc_82E8AA68;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8aa68
	if (ctx.cr6.eq) goto loc_82E8AA68;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	// bl 0x82ecf848
	ctx.lr = 0x82E8AA40;
	sub_82ECF848(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e8aa68
	if (!ctx.cr6.eq) goto loc_82E8AA68;
	// lwz r3,564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	// bl 0x82ed0460
	ctx.lr = 0x82E8AA50;
	sub_82ED0460(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_82E8AA68:
	// li r3,-100
	ctx.r3.s64 = -100;
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

__attribute__((alias("__imp__sub_82E8AA80"))) PPC_WEAK_FUNC(sub_82E8AA80);
PPC_FUNC_IMPL(__imp__sub_82E8AA80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82E8AA88;
	__savegprlr_14(ctx, base);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,452(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 452);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r6,572(r1)
	PPC_STORE_U32(ctx.r1.u32 + 572, ctx.r6.u32);
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// stw r7,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r7.u32);
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// stw r10,604(r1)
	PPC_STORE_U32(ctx.r1.u32 + 604, ctx.r10.u32);
	// mr r18,r8
	ctx.r18.u64 = ctx.r8.u64;
	// mr r15,r9
	ctx.r15.u64 = ctx.r9.u64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82e8aadc
	if (ctx.cr6.gt) goto loc_82E8AADC;
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r10,r3,444
	ctx.r10.s64 = ctx.r3.s64 + 444;
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82E8AAD0:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82e8aad0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82E8AAD0;
loc_82E8AADC:
	// lwz r11,500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bgt cr6,0x82e8aaf0
	if (ctx.cr6.gt) goto loc_82E8AAF0;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r11,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r11.u32);
loc_82E8AAF0:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r16,0
	ctx.r16.s64 = 0;
	// ld r17,616(r1)
	ctx.r17.u64 = PPC_LOAD_U64(ctx.r1.u32 + 616);
	// lwz r14,612(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e8ab7c
	if (ctx.cr6.eq) goto loc_82E8AB7C;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// bl 0x82ed0a80
	ctx.lr = 0x82E8AB18;
	sub_82ED0A80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e8ab7c
	if (ctx.cr6.eq) goto loc_82E8AB7C;
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e8ab7c
	if (!ctx.cr6.eq) goto loc_82E8AB7C;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82ed08e8
	ctx.lr = 0x82E8AB34;
	sub_82ED08E8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82e8ab48
	if (!ctx.cr6.eq) goto loc_82E8AB48;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r11.u32);
	// b 0x82e8ab6c
	goto loc_82E8AB6C;
loc_82E8AB48:
	// lwz r11,516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82e8ab6c
	if (!ctx.cr6.eq) goto loc_82E8AB6C;
	// lwz r11,520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82e8ab6c
	if (!ctx.cr6.eq) goto loc_82E8AB6C;
	// stw r16,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r16.u32);
loc_82E8AB6C:
	// lwz r5,496(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	// lwz r4,508(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82ec0a78
	ctx.lr = 0x82E8AB7C;
	sub_82EC0A78(ctx, base);
loc_82E8AB7C:
	// lwz r24,716(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
	// lis r11,9356
	ctx.r11.s64 = 613154816;
	// lwz r19,628(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 628);
	// ori r25,r11,32768
	ctx.r25.u64 = ctx.r11.u64 | 32768;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x82e8ae7c
	if (!ctx.cr6.eq) goto loc_82E8AE7C;
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e8ac74
	if (ctx.cr6.eq) goto loc_82E8AC74;
	// lwz r11,488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	// addi r29,r31,488
	ctx.r29.s64 = ctx.r31.s64 + 488;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e8ac74
	if (!ctx.cr6.eq) goto loc_82E8AC74;
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// lwz r6,520(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,516(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f1b0d8
	ctx.lr = 0x82E8ABCC;
	sub_82F1B0D8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e8abe4
	if (!ctx.cr6.eq) goto loc_82E8ABE4;
loc_82E8ABD8:
	// li r3,-100
	ctx.r3.s64 = -100;
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
loc_82E8ABE4:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,516(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lhz r11,14(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 14);
	// lwz r9,520(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// bne cr6,0x82e8ac1c
	if (!ctx.cr6.eq) goto loc_82E8AC1C;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// addi r8,r11,31
	ctx.r8.s64 = ctx.r11.s64 + 31;
	// rlwinm r7,r8,0,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFE0;
	// srawi r6,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 3;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// mullw r4,r5,r9
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// stw r4,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r4.u32);
	// b 0x82e8ac2c
	goto loc_82E8AC2C;
loc_82E8AC1C:
	// mullw r8,r11,r10
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// mullw r7,r8,r9
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// rlwinm r6,r7,29,3,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r6,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r6.u32);
loc_82E8AC2C:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,500(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	// bl 0x82691410
	ctx.lr = 0x82E8AC38;
	sub_82691410(ctx, base);
	// stw r3,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e8abd8
	if (ctx.cr6.eq) goto loc_82E8ABD8;
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r10,r31,444
	ctx.r10.s64 = ctx.r31.s64 + 444;
	// addi r11,r30,-4
	ctx.r11.s64 = ctx.r30.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82E8AC54:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82e8ac54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82E8AC54;
	// lwz r11,516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// lwz r10,520(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// stw r11,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r11.u32);
	// stw r10,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r10.u32);
	// b 0x82e8add8
	goto loc_82E8ADD8;
loc_82E8AC74:
	// lwz r11,496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e8ade0
	if (ctx.cr6.eq) goto loc_82E8ADE0;
	// lwz r11,488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	// addi r26,r31,488
	ctx.r26.s64 = ctx.r31.s64 + 488;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e8ad00
	if (!ctx.cr6.eq) goto loc_82E8AD00;
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f1b0d8
	ctx.lr = 0x82E8ACAC;
	sub_82F1B0D8(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8abd8
	if (ctx.cr6.eq) goto loc_82E8ABD8;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r11,492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r3,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r3.u32);
	// bne cr6,0x82e8ace0
	if (!ctx.cr6.eq) goto loc_82E8ACE0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82691410
	ctx.lr = 0x82E8ACD4;
	sub_82691410(ctx, base);
	// stw r3,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e8abd8
	if (ctx.cr6.eq) goto loc_82E8ABD8;
loc_82E8ACE0:
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r10,r31,444
	ctx.r10.s64 = ctx.r31.s64 + 444;
	// addi r11,r30,-4
	ctx.r11.s64 = ctx.r30.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82E8ACF0:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82e8acf0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82E8ACF0;
	// b 0x82e8ade0
	goto loc_82E8ADE0;
loc_82E8AD00:
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// bl 0x82ed0a80
	ctx.lr = 0x82E8AD10;
	sub_82ED0A80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e8ade0
	if (ctx.cr6.eq) goto loc_82E8ADE0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82ed1dc0
	ctx.lr = 0x82E8AD20;
	sub_82ED1DC0(ctx, base);
	// addi r28,r31,516
	ctx.r28.s64 = ctx.r31.s64 + 516;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r29,r31,520
	ctx.r29.s64 = ctx.r31.s64 + 520;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r21,516(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// lwz r27,520(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// bl 0x82ed10d8
	ctx.lr = 0x82E8AD40;
	sub_82ED10D8(ctx, base);
	// lwz r6,516(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// cmplw cr6,r21,r6
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x82e8ad58
	if (!ctx.cr6.eq) goto loc_82E8AD58;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e8ade0
	if (ctx.cr6.eq) goto loc_82E8ADE0;
loc_82E8AD58:
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x82f1a9f0
	ctx.lr = 0x82E8AD6C;
	sub_82F1A9F0(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lhz r9,14(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 14);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bne cr6,0x82e8ada4
	if (!ctx.cr6.eq) goto loc_82E8ADA4;
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// addi r8,r9,31
	ctx.r8.s64 = ctx.r9.s64 + 31;
	// rlwinm r7,r8,0,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFE0;
	// srawi r6,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 3;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// mullw r4,r5,r11
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// stw r4,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r4.u32);
	// b 0x82e8adb4
	goto loc_82E8ADB4;
loc_82E8ADA4:
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// mullw r7,r8,r10
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// rlwinm r6,r7,29,3,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r6,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r6.u32);
loc_82E8ADB4:
	// li r7,10
	ctx.r7.s64 = 10;
	// addi r8,r31,444
	ctx.r8.s64 = ctx.r31.s64 + 444;
	// addi r9,r30,-4
	ctx.r9.s64 = ctx.r30.s64 + -4;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82E8ADC4:
	// lwzu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x82e8adc4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82E8ADC4;
	// stw r10,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r10.u32);
	// stw r11,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r11.u32);
loc_82E8ADD8:
	// lwz r9,500(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	// stw r9,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r9.u32);
loc_82E8ADE0:
	// lwz r3,488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e8ae38
	if (ctx.cr6.eq) goto loc_82E8AE38;
	// lwz r11,516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82e8ae0c
	if (!ctx.cr6.eq) goto loc_82E8AE0C;
	// lwz r11,520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82e8ae38
	if (ctx.cr6.eq) goto loc_82E8AE38;
loc_82E8AE0C:
	// addi r9,r1,252
	ctx.r9.s64 = ctx.r1.s64 + 252;
	// lwz r8,500(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// lwz r7,492(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// bl 0x82f1aa70
	ctx.lr = 0x82E8AE28;
	sub_82F1AA70(ctx, base);
	// addi r21,r31,448
	ctx.r21.s64 = ctx.r31.s64 + 448;
	// lwz r27,492(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// mr r20,r27
	ctx.r20.u64 = ctx.r27.u64;
	// b 0x82e8ae40
	goto loc_82E8AE40;
loc_82E8AE38:
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// mr r21,r30
	ctx.r21.u64 = ctx.r30.u64;
loc_82E8AE40:
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r31,448
	ctx.r5.s64 = ctx.r31.s64 + 448;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f12ec8
	ctx.lr = 0x82E8AE54;
	sub_82F12EC8(ctx, base);
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e8ae6c
	if (!ctx.cr6.eq) goto loc_82E8AE6C;
	// lwz r11,496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e8aebc
	if (ctx.cr6.eq) goto loc_82E8AEBC;
loc_82E8AE6C:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82f18410
	ctx.lr = 0x82E8AE78;
	sub_82F18410(ctx, base);
	// b 0x82e8aebc
	goto loc_82E8AEBC;
loc_82E8AE7C:
	// lwz r11,488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8aeb0
	if (ctx.cr6.eq) goto loc_82E8AEB0;
	// lwz r11,516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82e8aea8
	if (!ctx.cr6.eq) goto loc_82E8AEA8;
	// lwz r11,520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82e8aeb0
	if (ctx.cr6.eq) goto loc_82E8AEB0;
loc_82E8AEA8:
	// addi r21,r31,448
	ctx.r21.s64 = ctx.r31.s64 + 448;
	// b 0x82e8aeb4
	goto loc_82E8AEB4;
loc_82E8AEB0:
	// mr r21,r30
	ctx.r21.u64 = ctx.r30.u64;
loc_82E8AEB4:
	// lwz r20,192(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r27,192(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
loc_82E8AEBC:
	// lwz r11,580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// addi r30,r1,272
	ctx.r30.s64 = ctx.r1.s64 + 272;
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e8b034
	if (!ctx.cr6.gt) goto loc_82E8B034;
	// lwz r10,584(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82e8b034
	if (!ctx.cr6.lt) goto loc_82E8B034;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x82e8b034
	if (ctx.cr6.eq) goto loc_82E8B034;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82e8b034
	if (ctx.cr6.eq) goto loc_82E8B034;
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r10,r1,204
	ctx.r10.s64 = ctx.r1.s64 + 204;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82E8AF00:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82e8af00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82E8AF00;
	// lwz r11,216(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lis r10,12338
	ctx.r10.s64 = 808583168;
	// lwz r9,212(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// li r8,12
	ctx.r8.s64 = 12;
	// lwz r7,592(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 592);
	// li r6,1
	ctx.r6.s64 = 1;
	// mullw r29,r11,r9
	ctx.r29.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// sth r8,222(r1)
	PPC_STORE_U16(ctx.r1.u32 + 222, ctx.r8.u16);
	// sth r6,220(r1)
	PPC_STORE_U16(ctx.r1.u32 + 220, ctx.r6.u16);
	// srawi r28,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r28.s64 = ctx.r29.s32 >> 1;
	// ori r5,r10,13385
	ctx.r5.u64 = ctx.r10.u64 | 13385;
	// add r3,r28,r29
	ctx.r3.u64 = ctx.r28.u64 + ctx.r29.u64;
	// stw r5,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r5.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r3,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r3.u32);
	// beq cr6,0x82e8aff0
	if (ctx.cr6.eq) goto loc_82E8AFF0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82691410
	ctx.lr = 0x82E8AF54;
	sub_82691410(ctx, base);
	// stw r3,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r3.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,20(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + 20);
	// bl 0x82691410
	ctx.lr = 0x82E8AF64;
	sub_82691410(ctx, base);
	// lwz r11,596(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r3,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r3.u32);
	// beq cr6,0x82e8abd8
	if (ctx.cr6.eq) goto loc_82E8ABD8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e8abd8
	if (ctx.cr6.eq) goto loc_82E8ABD8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82E8AF8C;
	sub_82FA7CF0(ctx, base);
	// lwz r11,596(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82E8AFA0;
	sub_82FA7CF0(ctx, base);
	// lwz r11,600(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 600);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,596(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r9,216(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lwz r8,212(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// stw r16,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r16.u32);
	// stw r16,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r16.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82f13030
	ctx.lr = 0x82E8AFD4;
	sub_82F13030(ctx, base);
	// lwz r3,596(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e8afec
	if (ctx.cr6.eq) goto loc_82E8AFEC;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82691460
	ctx.lr = 0x82E8AFE8;
	sub_82691460(ctx, base);
	// stw r16,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r16.u32);
loc_82E8AFEC:
	// lwz r30,192(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
loc_82E8AFF0:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r5,20(r15)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r15.u32 + 20);
	// lwz r4,600(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 600);
	// bl 0x82fa77c0
	ctx.lr = 0x82E8B000;
	sub_82FA77C0(ctx, base);
	// lwz r11,580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// lwz r10,584(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82e8b030
	if (!ctx.cr6.eq) goto loc_82E8B030;
	// lwz r3,600(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 600);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e8b030
	if (ctx.cr6.eq) goto loc_82E8B030;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82691460
	ctx.lr = 0x82E8B028;
	sub_82691460(ctx, base);
	// stw r16,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r16.u32);
	// lwz r30,192(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
loc_82E8B030:
	// stw r16,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r16.u32);
loc_82E8B034:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x82e8b314
	if (ctx.cr6.eq) goto loc_82E8B314;
	// lwz r11,568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82e8b074
	if (ctx.cr6.gt) goto loc_82E8B074;
loc_82E8B048:
	// lwz r11,724(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 724);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r16,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r16.u32);
	// stw r16,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r16.u32);
	// stw r16,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r16.u32);
	// stw r16,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r16.u32);
	// stw r16,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r16.u32);
	// stw r16,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r16.u32);
	// stw r16,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r16.u32);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
loc_82E8B074:
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82e8b0c4
	if (!ctx.cr6.eq) goto loc_82E8B0C4;
	// bl 0x82e8a090
	ctx.lr = 0x82E8B090;
	sub_82E8A090(ctx, base);
	// lwz r30,192(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82e8b0b0
	if (ctx.cr6.eq) goto loc_82E8B0B0;
	// lwz r11,568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// ld r17,48(r30)
	ctx.r17.u64 = PPC_LOAD_U64(ctx.r30.u32 + 48);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r11.u32);
	// b 0x82e8b204
	goto loc_82E8B204;
loc_82E8B0B0:
	// lwz r11,568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// mr r17,r16
	ctx.r17.u64 = ctx.r16.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r11.u32);
	// b 0x82e8b204
	goto loc_82E8B204;
loc_82E8B0C4:
	// bl 0x82e89eb0
	ctx.lr = 0x82E8B0C8;
	sub_82E89EB0(ctx, base);
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e8b130
	if (ctx.cr6.eq) goto loc_82E8B130;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8b0f8
	if (ctx.cr6.eq) goto loc_82E8B0F8;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82691460
	ctx.lr = 0x82E8B0EC;
	sub_82691460(ctx, base);
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// stw r16,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r16.u32);
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
loc_82E8B0F8:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8b11c
	if (ctx.cr6.eq) goto loc_82E8B11C;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82691460
	ctx.lr = 0x82E8B110;
	sub_82691460(ctx, base);
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// stw r16,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r16.u32);
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
loc_82E8B11C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e8b130
	if (ctx.cr6.eq) goto loc_82E8B130;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82691460
	ctx.lr = 0x82E8B12C;
	sub_82691460(ctx, base);
	// stw r16,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r16.u32);
loc_82E8B130:
	// lbz r11,552(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 552);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8b14c
	if (ctx.cr6.eq) goto loc_82E8B14C;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e89f00
	ctx.lr = 0x82E8B14C;
	sub_82E89F00(ctx, base);
loc_82E8B14C:
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// bne cr6,0x82e8b2b0
	if (!ctx.cr6.eq) goto loc_82E8B2B0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x82e8b048
	if (ctx.cr6.lt) goto loc_82E8B048;
	// lwz r11,232(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r5,216(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// ld r6,224(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// bl 0x82e8a778
	ctx.lr = 0x82E8B180;
	sub_82E8A778(ctx, base);
	// lwz r11,568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// stw r3,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r3.u32);
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addic. r9,r10,-2
	ctx.xer.ca = ctx.r10.u32 > 1;
	ctx.r9.s64 = ctx.r10.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x82e8b19c
	if (!ctx.cr0.lt) goto loc_82E8B19C;
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// stw r10,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r10.u32);
loc_82E8B19C:
	// addi r5,r11,-2
	ctx.r5.s64 = ctx.r11.s64 + -2;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8a090
	ctx.lr = 0x82E8B1AC;
	sub_82E8A090(ctx, base);
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r4,588(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// ld r17,48(r11)
	ctx.r17.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// bl 0x82ebfd68
	ctx.lr = 0x82E8B1C0;
	sub_82EBFD68(ctx, base);
	// lwz r10,568(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwz r9,588(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r11,r9,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r9.s64;
	// addi r5,r11,-2
	ctx.r5.s64 = ctx.r11.s64 + -2;
	// bl 0x82e8a090
	ctx.lr = 0x82E8B1DC;
	sub_82E8A090(ctx, base);
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e8b200
	if (!ctx.cr6.gt) goto loc_82E8B200;
	// lwz r10,568(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r5,r11,-2
	ctx.r5.s64 = ctx.r11.s64 + -2;
	// bl 0x82e89f00
	ctx.lr = 0x82E8B200;
	sub_82E89F00(ctx, base);
loc_82E8B200:
	// lwz r30,192(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
loc_82E8B204:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8b270
	if (ctx.cr6.eq) goto loc_82E8B270;
	// lbz r10,31536(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 31536);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x82e8b270
	if (!ctx.cr6.gt) goto loc_82E8B270;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,31552(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31552);
	// bl 0x82f0f950
	ctx.lr = 0x82E8B228;
	sub_82F0F950(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r3,31552(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31552);
	// lwz r5,100(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82E8B24C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r6,192(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r3,31552(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 31552);
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8B26C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r30,192(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
loc_82E8B270:
	// lwz r11,724(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 724);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r20,0(r30)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r21,r30,8
	ctx.r21.s64 = ctx.r30.s64 + 8;
	// lwz r18,56(r30)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// lwz r23,60(r30)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// lwz r26,64(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// lwz r19,68(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lwz r22,72(r30)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// lwz r24,76(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// lwz r25,80(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// lwz r27,84(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// lwz r28,88(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// lwz r29,92(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82e8b724
	goto loc_82E8B724;
loc_82E8B2B0:
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-2
	ctx.r5.s64 = ctx.r11.s64 + -2;
	// bl 0x82e8a090
	ctx.lr = 0x82E8B2C0;
	sub_82E8A090(ctx, base);
	// lwz r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e8abd8
	if (ctx.cr6.eq) goto loc_82E8ABD8;
	// lwz r11,568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r17,48(r10)
	ctx.r17.u64 = PPC_LOAD_U64(ctx.r10.u32 + 48);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// bl 0x82e8a090
	ctx.lr = 0x82E8B2E4;
	sub_82E8A090(ctx, base);
	// lwz r11,568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// bl 0x82e89f00
	ctx.lr = 0x82E8B2F8;
	sub_82E89F00(ctx, base);
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r30,192(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// ble cr6,0x82e8b204
	if (!ctx.cr6.gt) goto loc_82E8B204;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r11.u32);
	// b 0x82e8b204
	goto loc_82E8B204;
loc_82E8B314:
	// lwz r11,580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e8b704
	if (ctx.cr6.eq) goto loc_82E8B704;
	// lwz r3,560(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e8abd8
	if (ctx.cr6.eq) goto loc_82E8ABD8;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// blt cr6,0x82e8abd8
	if (ctx.cr6.lt) goto loc_82E8ABD8;
	// lwz r10,568(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82e8b350
	if (!ctx.cr6.eq) goto loc_82E8B350;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// stw r11,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r11.u32);
loc_82E8B350:
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// bl 0x82eceba8
	ctx.lr = 0x82E8B35C;
	sub_82ECEBA8(ctx, base);
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8abd8
	if (ctx.cr6.eq) goto loc_82E8ABD8;
	// stw r16,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r16.u32);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// lwz r30,708(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x82e8a108
	ctx.lr = 0x82E8B388;
	sub_82E8A108(ctx, base);
	// lwz r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r11,644(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 644);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r17,48(r10)
	PPC_STORE_U64(ctx.r10.u32 + 48, ctx.r17.u64);
	// lwz r9,684(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 684);
	// lwz r5,192(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// stw r18,56(r5)
	PPC_STORE_U32(ctx.r5.u32 + 56, ctx.r18.u32);
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// stw r11,60(r4)
	PPC_STORE_U32(ctx.r4.u32 + 60, ctx.r11.u32);
	// lwz r8,636(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 636);
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// stw r9,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r9.u32);
	// lwz r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r7,652(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 652);
	// stw r19,68(r10)
	PPC_STORE_U32(ctx.r10.u32 + 68, ctx.r19.u32);
	// lwz r9,192(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r6,676(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 676);
	// stw r8,72(r9)
	PPC_STORE_U32(ctx.r9.u32 + 72, ctx.r8.u32);
	// lwz r8,692(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 692);
	// lwz r5,192(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// stw r7,76(r5)
	PPC_STORE_U32(ctx.r5.u32 + 76, ctx.r7.u32);
	// lwz r4,700(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 700);
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// stw r6,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r6.u32);
	// lwz r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// stw r8,84(r10)
	PPC_STORE_U32(ctx.r10.u32 + 84, ctx.r8.u32);
	// lwz r9,192(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// stw r4,88(r9)
	PPC_STORE_U32(ctx.r9.u32 + 88, ctx.r4.u32);
	// lwz r8,192(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// stw r30,92(r8)
	PPC_STORE_U32(ctx.r8.u32 + 92, ctx.r30.u32);
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82e8a028
	ctx.lr = 0x82E8B408;
	sub_82E8A028(ctx, base);
	// lbz r7,552(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 552);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82e8b41c
	if (ctx.cr6.eq) goto loc_82E8B41C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8a9e8
	ctx.lr = 0x82E8B41C;
	sub_82E8A9E8(ctx, base);
loc_82E8B41C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8b464
	if (ctx.cr6.eq) goto loc_82E8B464;
	// lbz r10,31536(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 31536);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x82e8b464
	if (!ctx.cr6.gt) goto loc_82E8B464;
	// lwz r3,31552(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31552);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82E8B45C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,192(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// stw r3,100(r8)
	PPC_STORE_U32(ctx.r8.u32 + 100, ctx.r3.u32);
loc_82E8B464:
	// lwz r11,580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// lwz r11,584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82e8b490
	if (!ctx.cr6.lt) goto loc_82E8B490;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r11.u32);
	// stw r16,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r16.u32);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
loc_82E8B490:
	// lbz r11,552(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 552);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8b4ac
	if (ctx.cr6.eq) goto loc_82E8B4AC;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e89f00
	ctx.lr = 0x82E8B4AC;
	sub_82E89F00(ctx, base);
loc_82E8B4AC:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e8b4ec
	if (!ctx.cr6.eq) goto loc_82E8B4EC;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82ec0a50
	ctx.lr = 0x82E8B4C0;
	sub_82EC0A50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e8b4ec
	if (!ctx.cr6.eq) goto loc_82E8B4EC;
	// lwz r11,568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r11,-1
	ctx.r29.s64 = ctx.r11.s64 + -1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82e8a090
	ctx.lr = 0x82E8B4E0;
	sub_82E8A090(ctx, base);
	// lwz r30,192(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// ld r17,48(r30)
	ctx.r17.u64 = PPC_LOAD_U64(ctx.r30.u32 + 48);
	// b 0x82e8b5f0
	goto loc_82E8B5F0;
loc_82E8B4EC:
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// addi r5,r11,-2
	ctx.r5.s64 = ctx.r11.s64 + -2;
	// bne cr6,0x82e8b5a4
	if (!ctx.cr6.eq) goto loc_82E8B5A4;
	// bl 0x82e8a090
	ctx.lr = 0x82E8B50C;
	sub_82E8A090(ctx, base);
	// lwz r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r11,232(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r5,216(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// ld r6,224(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// ld r17,48(r10)
	ctx.r17.u64 = PPC_LOAD_U64(ctx.r10.u32 + 48);
	// bl 0x82e8a778
	ctx.lr = 0x82E8B530;
	sub_82E8A778(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r9,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r9.u32);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// bl 0x82ebfd68
	ctx.lr = 0x82E8B544;
	sub_82EBFD68(ctx, base);
	// lwz r8,56(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82e8b57c
	if (!ctx.cr6.eq) goto loc_82E8B57C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// bl 0x82e8a090
	ctx.lr = 0x82E8B564;
	sub_82E8A090(ctx, base);
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r29,r16
	ctx.r29.u64 = ctx.r16.u64;
	// ld r17,48(r11)
	ctx.r17.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// b 0x82e8b58c
	goto loc_82E8B58C;
loc_82E8B57C:
	// lwz r10,588(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r29,r11,-2
	ctx.r29.s64 = ctx.r11.s64 + -2;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_82E8B58C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8a090
	ctx.lr = 0x82E8B594;
	sub_82E8A090(ctx, base);
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e8b5ec
	if (!ctx.cr6.gt) goto loc_82E8B5EC;
	// b 0x82e8b5dc
	goto loc_82E8B5DC;
loc_82E8B5A4:
	// bl 0x82e8a090
	ctx.lr = 0x82E8B5A8;
	sub_82E8A090(ctx, base);
	// lwz r11,568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r29,r11,-1
	ctx.r29.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// ld r17,48(r11)
	ctx.r17.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// bl 0x82e8a090
	ctx.lr = 0x82E8B5C8;
	sub_82E8A090(ctx, base);
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e8b5dc
	if (!ctx.cr6.gt) goto loc_82E8B5DC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r11.u32);
loc_82E8B5DC:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e89f00
	ctx.lr = 0x82E8B5EC;
	sub_82E89F00(ctx, base);
loc_82E8B5EC:
	// lwz r30,192(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
loc_82E8B5F0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8b6d0
	if (ctx.cr6.eq) goto loc_82E8B6D0;
	// lbz r10,31536(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 31536);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x82e8b6d0
	if (!ctx.cr6.gt) goto loc_82E8B6D0;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,31552(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31552);
	// bl 0x82f0f950
	ctx.lr = 0x82E8B614;
	sub_82F0F950(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r3,31552(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31552);
	// lwz r5,100(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82E8B638;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82e8b6ac
	if (!ctx.cr6.gt) goto loc_82E8B6AC;
	// addi r28,r29,1
	ctx.r28.s64 = ctx.r29.s64 + 1;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82E8B648:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// lbz r11,31536(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 31536);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82e8b660
	if (ctx.cr6.lt) goto loc_82E8B660;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82E8B660:
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82e8b6ac
	if (!ctx.cr6.lt) goto loc_82E8B6AC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,248
	ctx.r4.s64 = ctx.r1.s64 + 248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8a090
	ctx.lr = 0x82E8B678;
	sub_82E8A090(ctx, base);
	// lwz r11,248(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8b6a4
	if (ctx.cr6.eq) goto loc_82E8B6A4;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,100(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r3,31552(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31552);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82E8B6A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E8B6A4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// b 0x82e8b648
	goto loc_82E8B648;
loc_82E8B6AC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r3,31552(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31552);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82E8B6CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r30,192(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
loc_82E8B6D0:
	// lwz r20,0(r30)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r21,r30,8
	ctx.r21.s64 = ctx.r30.s64 + 8;
	// lwz r18,56(r30)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// lwz r23,60(r30)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// lwz r26,64(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// lwz r19,68(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lwz r22,72(r30)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// lwz r24,76(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// lwz r25,80(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// lwz r27,84(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// lwz r28,88(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// lwz r29,92(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// b 0x82e8b724
	goto loc_82E8B724;
loc_82E8B704:
	// lwz r29,708(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r28,700(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 700);
	// lwz r27,692(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 692);
	// lwz r26,684(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 684);
	// lwz r25,676(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 676);
	// lwz r24,652(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 652);
	// lwz r23,644(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 644);
	// lwz r22,636(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 636);
loc_82E8B724:
	// lwz r11,668(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 668);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8b738
	if (ctx.cr6.eq) goto loc_82E8B738;
	// mulli r10,r17,10000
	ctx.r10.s64 = ctx.r17.s64 * 10000;
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
loc_82E8B738:
	// lwz r11,732(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8b760
	if (ctx.cr6.eq) goto loc_82E8B760;
	// lwz r10,580(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82e8b75c
	if (ctx.cr6.eq) goto loc_82E8B75C;
	// ld r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 48);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// b 0x82e8b760
	goto loc_82E8B760;
loc_82E8B75C:
	// std r17,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r17.u64);
loc_82E8B760:
	// lbz r11,552(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 552);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8b788
	if (ctx.cr6.eq) goto loc_82E8B788;
	// lwz r11,232(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// ld r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// ld r5,216(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// ld r6,224(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// bl 0x82ecad58
	ctx.lr = 0x82E8B788;
	sub_82ECAD58(ctx, base);
loc_82E8B788:
	// lwz r11,556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e8b7dc
	if (ctx.cr6.eq) goto loc_82E8B7DC;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// addi r5,r11,-2
	ctx.r5.s64 = ctx.r11.s64 + -2;
	// beq cr6,0x82e8b7b4
	if (ctx.cr6.eq) goto loc_82E8B7B4;
	// addi r5,r11,-3
	ctx.r5.s64 = ctx.r11.s64 + -3;
loc_82E8B7B4:
	// bl 0x82e8a090
	ctx.lr = 0x82E8B7B8;
	sub_82E8A090(ctx, base);
	// lwz r11,568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x82e8b7d0
	if (!ctx.cr6.lt) goto loc_82E8B7D0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82e8b7d8
	goto loc_82E8B7D8;
loc_82E8B7D0:
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82E8B7D8:
	// bl 0x82ec3ed0
	ctx.lr = 0x82E8B7DC;
	sub_82EC3ED0(ctx, base);
loc_82E8B7DC:
	// stw r26,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r26.u32);
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
	// stw r18,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r18.u32);
	// mr r8,r15
	ctx.r8.u64 = ctx.r15.u64;
	// stw r27,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r27.u32);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// stw r25,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r25.u32);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// stw r28,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r28.u32);
	// lwz r11,740(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 740);
	// lwz r28,660(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 660);
	// lwz r30,580(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 580);
	// lwz r26,572(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 572);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r9,604(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 604);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r19,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r19.u32);
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// stw r22,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r22.u32);
	// stw r29,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r29.u32);
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// stw r23,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r23.u32);
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// std r17,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r17.u64);
	// bl 0x82ece450
	ctx.lr = 0x82E8B844;
	sub_82ECE450(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e8b978
	if (!ctx.cr6.eq) goto loc_82E8B978;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r10,22349
	ctx.r10.s64 = 1464664064;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lis r7,30573
	ctx.r7.s64 = 2003632128;
	// ori r10,r10,22081
	ctx.r10.u64 = ctx.r10.u64 | 22081;
	// ori r9,r7,30305
	ctx.r9.u64 = ctx.r7.u64 | 30305;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r6,7568(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7568);
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// beq cr6,0x82e8b8e0
	if (ctx.cr6.eq) goto loc_82E8B8E0;
	// lis r8,22349
	ctx.r8.s64 = 1464664064;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// ori r7,r8,22067
	ctx.r7.u64 = ctx.r8.u64 | 22067;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82e8b8c8
	if (ctx.cr6.eq) goto loc_82E8B8C8;
	// lis r8,30573
	ctx.r8.s64 = 2003632128;
	// ori r7,r8,30259
	ctx.r7.u64 = ctx.r8.u64 | 30259;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82e8b8c8
	if (ctx.cr6.eq) goto loc_82E8B8C8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82e8b8a8
	if (ctx.cr6.eq) goto loc_82E8B8A8;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82e8b8e0
	if (!ctx.cr6.eq) goto loc_82E8B8E0;
loc_82E8B8A8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e8b8e0
	if (!ctx.cr6.eq) goto loc_82E8B8E0;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r8,242
	ctx.r8.s64 = 242;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stb r8,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r8.u8);
	// b 0x82e8b8e0
	goto loc_82E8B8E0;
loc_82E8B8C8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x82e8b8e0
	if (ctx.cr6.gt) goto loc_82E8B8E0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stb r16,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r16.u8);
loc_82E8B8E0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e8b8fc
	if (!ctx.cr6.gt) goto loc_82E8B8FC;
	// lis r8,-31959
	ctx.r8.s64 = -2094465024;
	// lwz r11,-30888(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30888);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-30888(r8)
	PPC_STORE_U32(ctx.r8.u32 + -30888, ctx.r11.u32);
loc_82E8B8FC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82e8b91c
	if (ctx.cr6.eq) goto loc_82E8B91C;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82e8b91c
	if (ctx.cr6.eq) goto loc_82E8B91C;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e8b95c
	if (ctx.cr6.eq) goto loc_82E8B95C;
loc_82E8B91C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e8b974
	if (!ctx.cr6.gt) goto loc_82E8B974;
	// lwz r11,528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e8b944
	if (ctx.cr6.eq) goto loc_82E8B944;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e89dc0
	ctx.lr = 0x82E8B944;
	sub_82E89DC0(ctx, base);
loc_82E8B944:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8a4f8
	ctx.lr = 0x82E8B954;
	sub_82E8A4F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e8b978
	if (!ctx.cr6.eq) goto loc_82E8B978;
loc_82E8B95C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e8b974
	if (!ctx.cr6.gt) goto loc_82E8B974;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_82E8B974:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E8B978:
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8B980"))) PPC_WEAK_FUNC(sub_82E8B980);
PPC_FUNC_IMPL(__imp__sub_82E8B980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82E8B988;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,560(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 560);
	// lis r11,9356
	ctx.r11.s64 = 613154816;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r29,r11,32768
	ctx.r29.u64 = ctx.r11.u64 | 32768;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e8ba5c
	if (ctx.cr6.eq) goto loc_82E8BA5C;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82eceba8
	ctx.lr = 0x82E8B9B4;
	sub_82ECEBA8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e8ba38
	if (ctx.cr6.eq) goto loc_82E8BA38;
loc_82E8B9C0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8b9e4
	if (ctx.cr6.eq) goto loc_82E8B9E4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82691460
	ctx.lr = 0x82E8B9D8;
	sub_82691460(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82E8B9E4:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8ba08
	if (ctx.cr6.eq) goto loc_82E8BA08;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82691460
	ctx.lr = 0x82E8B9FC;
	sub_82691460(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82E8BA08:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e8ba1c
	if (ctx.cr6.eq) goto loc_82E8BA1C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82691460
	ctx.lr = 0x82E8BA18;
	sub_82691460(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
loc_82E8BA1C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,560(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 560);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82eceba8
	ctx.lr = 0x82E8BA2C;
	sub_82ECEBA8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e8b9c0
	if (!ctx.cr6.eq) goto loc_82E8B9C0;
loc_82E8BA38:
	// lwz r31,560(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 560);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82e8ba5c
	if (ctx.cr6.eq) goto loc_82E8BA5C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ecef00
	ctx.lr = 0x82E8BA4C;
	sub_82ECEF00(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691460
	ctx.lr = 0x82E8BA58;
	sub_82691460(ctx, base);
	// stw r30,560(r28)
	PPC_STORE_U32(ctx.r28.u32 + 560, ctx.r30.u32);
loc_82E8BA5C:
	// lwz r31,564(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 564);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82e8ba80
	if (ctx.cr6.eq) goto loc_82E8BA80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ed03d0
	ctx.lr = 0x82E8BA70;
	sub_82ED03D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691460
	ctx.lr = 0x82E8BA7C;
	sub_82691460(ctx, base);
	// stw r30,564(r28)
	PPC_STORE_U32(ctx.r28.u32 + 564, ctx.r30.u32);
loc_82E8BA80:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8BA88"))) PPC_WEAK_FUNC(sub_82E8BA88);
PPC_FUNC_IMPL(__imp__sub_82E8BA88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82E8BA90;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lis r11,9356
	ctx.r11.s64 = 613154816;
	// li r29,0
	ctx.r29.s64 = 0;
	// ori r28,r11,32768
	ctx.r28.u64 = ctx.r11.u64 | 32768;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e8babc
	if (ctx.cr6.eq) goto loc_82E8BABC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82691460
	ctx.lr = 0x82E8BAB8;
	sub_82691460(ctx, base);
	// stw r29,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r29.u32);
loc_82E8BABC:
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e8bad4
	if (ctx.cr6.eq) goto loc_82E8BAD4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82691460
	ctx.lr = 0x82E8BAD0;
	sub_82691460(ctx, base);
	// stw r29,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r29.u32);
loc_82E8BAD4:
	// lwz r3,492(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e8baec
	if (ctx.cr6.eq) goto loc_82E8BAEC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82691460
	ctx.lr = 0x82E8BAE8;
	sub_82691460(ctx, base);
	// stw r29,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r29.u32);
loc_82E8BAEC:
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e8bafc
	if (ctx.cr6.eq) goto loc_82E8BAFC;
	// bl 0x82f54e58
	ctx.lr = 0x82E8BAFC;
	sub_82F54E58(ctx, base);
loc_82E8BAFC:
	// lwz r3,488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e8bb0c
	if (ctx.cr6.eq) goto loc_82E8BB0C;
	// bl 0x82f19638
	ctx.lr = 0x82E8BB0C;
	sub_82F19638(ctx, base);
loc_82E8BB0C:
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82e8bb30
	if (ctx.cr6.eq) goto loc_82E8BB30;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ec5578
	ctx.lr = 0x82E8BB20;
	sub_82EC5578(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82691460
	ctx.lr = 0x82E8BB2C;
	sub_82691460(ctx, base);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
loc_82E8BB30:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8b980
	ctx.lr = 0x82E8BB38;
	sub_82E8B980(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8BB40"))) PPC_WEAK_FUNC(sub_82E8BB40);
PPC_FUNC_IMPL(__imp__sub_82E8BB40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82E8BB48;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r11,9356
	ctx.r11.s64 = 613154816;
	// stw r26,568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 568, ctx.r26.u32);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// ori r28,r11,32768
	ctx.r28.u64 = ctx.r11.u64 | 32768;
	// stw r26,572(r30)
	PPC_STORE_U32(ctx.r30.u32 + 572, ctx.r26.u32);
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r26,576(r30)
	PPC_STORE_U32(ctx.r30.u32 + 576, ctx.r26.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x82691410
	ctx.lr = 0x82E8BB7C;
	sub_82691410(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e8bb94
	if (ctx.cr6.eq) goto loc_82E8BB94;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82ecee00
	ctx.lr = 0x82E8BB90;
	sub_82ECEE00(ctx, base);
	// b 0x82e8bb98
	goto loc_82E8BB98;
loc_82E8BB94:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82E8BB98:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,560(r30)
	PPC_STORE_U32(ctx.r30.u32 + 560, ctx.r3.u32);
	// bne cr6,0x82e8bbb4
	if (!ctx.cr6.eq) goto loc_82E8BBB4;
	// li r11,-3
	ctx.r11.s64 = -3;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_82E8BBB4:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e8bc60
	if (!ctx.cr6.eq) goto loc_82E8BC60;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x82e8bcc0
	if (!ctx.cr6.gt) goto loc_82E8BCC0;
loc_82E8BBCC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x82691410
	ctx.lr = 0x82E8BBD8;
	sub_82691410(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e8bc58
	if (ctx.cr6.eq) goto loc_82E8BC58;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,272(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// bl 0x82691410
	ctx.lr = 0x82E8BBF0;
	sub_82691410(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// beq cr6,0x82e8bc74
	if (ctx.cr6.eq) goto loc_82E8BC74;
	// lwz r11,272(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// srawi r3,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 4;
	// bl 0x82691410
	ctx.lr = 0x82E8BC0C;
	sub_82691410(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e8bc70
	if (ctx.cr6.eq) goto loc_82E8BC70;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,560(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 560);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82eceac8
	ctx.lr = 0x82E8BC28;
	sub_82ECEAC8(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x82e8bbcc
	if (ctx.cr6.lt) goto loc_82E8BBCC;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x82e8bcc0
	if (!ctx.cr6.gt) goto loc_82E8BCC0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,176
	ctx.r3.s64 = 176;
	// bl 0x82691410
	ctx.lr = 0x82E8BC48;
	sub_82691410(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e8bc8c
	if (ctx.cr6.eq) goto loc_82E8BC8C;
	// bl 0x82ecf6d0
	ctx.lr = 0x82E8BC54;
	sub_82ECF6D0(ctx, base);
	// b 0x82e8bc90
	goto loc_82E8BC90;
loc_82E8BC58:
	// li r11,-3
	ctx.r11.s64 = -3;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_82E8BC60:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e8b980
	ctx.lr = 0x82E8BC68;
	sub_82E8B980(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_82E8BC70:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82E8BC74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691460
	ctx.lr = 0x82E8BC7C;
	sub_82691460(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e8b980
	ctx.lr = 0x82E8BC84;
	sub_82E8B980(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_82E8BC8C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82E8BC90:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,564(r30)
	PPC_STORE_U32(ctx.r30.u32 + 564, ctx.r3.u32);
	// beq cr6,0x82e8bc60
	if (ctx.cr6.eq) goto loc_82E8BC60;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r6,28(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r5,32(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// bl 0x82ed01e0
	ctx.lr = 0x82E8BCAC;
	sub_82ED01E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e8bc60
	if (!ctx.cr6.eq) goto loc_82E8BC60;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 564);
	// bl 0x82ecfc48
	ctx.lr = 0x82E8BCC0;
	sub_82ECFC48(ctx, base);
loc_82E8BCC0:
	// stw r26,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8BCCC"))) PPC_WEAK_FUNC(sub_82E8BCCC);
PPC_FUNC_IMPL(__imp__sub_82E8BCCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8BCD0"))) PPC_WEAK_FUNC(sub_82E8BCD0);
PPC_FUNC_IMPL(__imp__sub_82E8BCD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82E8BCD8;
	__savegprlr_14(ctx, base);
	// stfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -176, ctx.f29.u64);
	// stfd f30,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r22,756(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 756);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r5,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r5.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f29,f1
	ctx.f29.f64 = ctx.f1.f64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// std r10,568(r1)
	PPC_STORE_U64(ctx.r1.u32 + 568, ctx.r10.u64);
	// lfd f0,22472(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22472);
	// stw r6,540(r1)
	PPC_STORE_U32(ctx.r1.u32 + 540, ctx.r6.u32);
	// fmr f31,f3
	ctx.f31.f64 = ctx.f3.f64;
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// stw r22,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r22.u32);
	// beq cr6,0x82e8bd30
	if (ctx.cr6.eq) goto loc_82E8BD30;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82e8bd3c
	if (!ctx.cr6.eq) goto loc_82E8BD3C;
loc_82E8BD30:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x82e8bd3c
	if (ctx.cr6.gt) goto loc_82E8BD3C;
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
loc_82E8BD3C:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x82e8bd5c
	if (ctx.cr6.eq) goto loc_82E8BD5C;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x82e8c36c
	if (ctx.cr6.eq) goto loc_82E8C36C;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// beq cr6,0x82e8c36c
	if (ctx.cr6.eq) goto loc_82E8C36C;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// beq cr6,0x82e8c36c
	if (ctx.cr6.eq) goto loc_82E8C36C;
loc_82E8BD5C:
	// lwz r28,604(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 604);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r23,596(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// stw r27,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r27.u32);
	// stw r25,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r25.u32);
	// beq cr6,0x82e8bd8c
	if (ctx.cr6.eq) goto loc_82E8BD8C;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x82e8bd8c
	if (ctx.cr6.eq) goto loc_82E8BD8C;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// bne cr6,0x82e8bd9c
	if (!ctx.cr6.eq) goto loc_82E8BD9C;
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x82e8bd9c
	if (!ctx.cr6.gt) goto loc_82E8BD9C;
loc_82E8BD8C:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82e8c36c
	if (ctx.cr6.eq) goto loc_82E8C36C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82e8c36c
	if (ctx.cr6.eq) goto loc_82E8C36C;
loc_82E8BD9C:
	// lwz r26,732(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 732);
	// stw r28,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r28.u32);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x82e8bdb0
	if (!ctx.cr6.eq) goto loc_82E8BDB0;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
loc_82E8BDB0:
	// lwz r24,740(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 740);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x82e8bdc0
	if (!ctx.cr6.eq) goto loc_82E8BDC0;
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
loc_82E8BDC0:
	// lwz r20,612(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// li r29,0
	ctx.r29.s64 = 0;
	// stfd f29,544(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 544, ctx.f29.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// stw r29,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r29.u32);
	// stw r29,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r29.u32);
	// stw r20,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r20.u32);
	// bl 0x82e8ba88
	ctx.lr = 0x82E8BDE4;
	sub_82E8BA88(ctx, base);
	// lis r10,22349
	ctx.r10.s64 = 1464664064;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// ori r9,r10,22067
	ctx.r9.u64 = ctx.r10.u64 | 22067;
	// stw r29,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r29.u32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82e8be68
	if (ctx.cr6.eq) goto loc_82E8BE68;
	// lis r10,30573
	ctx.r10.s64 = 2003632128;
	// ori r9,r10,30259
	ctx.r9.u64 = ctx.r10.u64 | 30259;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82e8be68
	if (ctx.cr6.eq) goto loc_82E8BE68;
	// lis r10,22349
	ctx.r10.s64 = 1464664064;
	// ori r9,r10,22081
	ctx.r9.u64 = ctx.r10.u64 | 22081;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82e8be54
	if (ctx.cr6.eq) goto loc_82E8BE54;
	// lis r10,30573
	ctx.r10.s64 = 2003632128;
	// ori r9,r10,30305
	ctx.r9.u64 = ctx.r10.u64 | 30305;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82e8be54
	if (ctx.cr6.eq) goto loc_82E8BE54;
	// lis r10,22349
	ctx.r10.s64 = 1464664064;
	// ori r9,r10,22098
	ctx.r9.u64 = ctx.r10.u64 | 22098;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82e8be4c
	if (ctx.cr6.eq) goto loc_82E8BE4C;
	// lis r10,30573
	ctx.r10.s64 = 2003632128;
	// ori r9,r10,30322
	ctx.r9.u64 = ctx.r10.u64 | 30322;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82e8c36c
	if (!ctx.cr6.eq) goto loc_82E8C36C;
loc_82E8BE4C:
	// li r21,7
	ctx.r21.s64 = 7;
	// b 0x82e8be6c
	goto loc_82E8BE6C;
loc_82E8BE54:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r21,r11,7
	ctx.r21.s64 = ctx.r11.s64 + 7;
	// b 0x82e8be6c
	goto loc_82E8BE6C;
loc_82E8BE68:
	// li r21,6
	ctx.r21.s64 = 6;
loc_82E8BE6C:
	// lwz r11,284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// lwz r19,748(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 748);
	// stw r21,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r21.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// sth r29,462(r31)
	PPC_STORE_U16(ctx.r31.u32 + 462, ctx.r29.u16);
	// stw r29,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r29.u32);
	// stw r29,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r29.u32);
	// stw r29,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r29.u32);
	// stw r29,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r29.u32);
	// sth r29,460(r31)
	PPC_STORE_U16(ctx.r31.u32 + 460, ctx.r29.u16);
	// stw r29,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r29.u32);
	// stw r29,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r29.u32);
	// stw r29,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r29.u32);
	// stw r29,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r29.u32);
	// stw r29,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r29.u32);
	// stw r29,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r29.u32);
	// bne cr6,0x82e8bebc
	if (!ctx.cr6.eq) goto loc_82E8BEBC;
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e8bee8
	if (ctx.cr6.eq) goto loc_82E8BEE8;
loc_82E8BEBC:
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// addi r7,r1,540
	ctx.r7.s64 = ctx.r1.s64 + 540;
	// addi r6,r1,532
	ctx.r6.s64 = ctx.r1.s64 + 532;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e89c38
	ctx.lr = 0x82E8BEE0;
	sub_82E89C38(ctx, base);
	// lwz r25,540(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 540);
	// lwz r27,532(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 532);
loc_82E8BEE8:
	// li r18,1
	ctx.r18.s64 = 1;
	// cmplw cr6,r27,r26
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82e8befc
	if (!ctx.cr6.eq) goto loc_82E8BEFC;
	// cmplw cr6,r25,r24
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x82e8bf00
	if (ctx.cr6.eq) goto loc_82E8BF00;
loc_82E8BEFC:
	// stw r18,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r18.u32);
loc_82E8BF00:
	// lis r4,9356
	ctx.r4.s64 = 613154816;
	// li r3,31568
	ctx.r3.s64 = 31568;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x82691410
	ctx.lr = 0x82E8BF10;
	sub_82691410(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e8c02c
	if (ctx.cr6.eq) goto loc_82E8C02C;
	// lwz r11,284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// addi r11,r31,288
	ctx.r11.s64 = ctx.r31.s64 + 288;
	// beq cr6,0x82e8bf2c
	if (ctx.cr6.eq) goto loc_82E8BF2C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82E8BF2C:
	// lwz r20,588(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 588);
	// addi r9,r27,15
	ctx.r9.s64 = ctx.r27.s64 + 15;
	// lwz r10,716(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// rlwinm r6,r9,0,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r19,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r19.u32);
	// addi r9,r1,272
	ctx.r9.s64 = ctx.r1.s64 + 272;
	// stw r24,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r24.u32);
	// stw r26,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r26.u32);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// stw r20,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r20.u32);
	// addi r8,r25,15
	ctx.r8.s64 = ctx.r25.s64 + 15;
	// stw r22,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r22.u32);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// stw r6,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r6.u32);
	// rlwinm r26,r8,0,0,27
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r10,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r10.u32);
	// addi r8,r1,304
	ctx.r8.s64 = ctx.r1.s64 + 304;
	// stw r9,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r9.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r29,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r29.u32);
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// std r31,296(r1)
	PPC_STORE_U64(ctx.r1.u32 + 296, ctx.r31.u64);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lwz r10,708(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// lwz r30,700(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 700);
	// lwz r24,684(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 684);
	// lwz r22,676(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 676);
	// lwz r21,668(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 668);
	// lwz r19,660(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 660);
	// lwz r18,652(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 652);
	// lwz r17,644(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 644);
	// lwz r16,628(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 628);
	// lwz r15,620(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 620);
	// lwz r14,580(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 580);
	// lwz r20,612(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// ld r31,568(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 568);
	// lwz r9,284(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// stw r29,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r29.u32);
	// stw r26,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r26.u32);
	// stw r10,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r10.u32);
	// stw r11,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r11.u32);
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r24,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r24.u32);
	// stw r22,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r22.u32);
	// stw r21,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r21.u32);
	// stw r19,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r19.u32);
	// stw r18,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r18.u32);
	// stw r17,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r17.u32);
	// stw r16,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r16.u32);
	// stw r15,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r15.u32);
	// stw r20,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r20.u32);
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r28.u32);
	// stw r23,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r23.u32);
	// stw r14,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r14.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// std r31,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r31.u64);
	// bl 0x82ec71e0
	ctx.lr = 0x82E8C018;
	sub_82EC71E0(ctx, base);
	// lwz r21,276(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// li r18,1
	ctx.r18.s64 = 1;
	// lwz r19,748(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 748);
	// ld r31,296(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 296);
	// b 0x82e8c030
	goto loc_82E8C030;
loc_82E8C02C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82E8C030:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// beq cr6,0x82e8c34c
	if (ctx.cr6.eq) goto loc_82E8C34C;
	// lwz r11,272(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e8c34c
	if (!ctx.cr6.eq) goto loc_82E8C34C;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e8c068
	if (ctx.cr6.eq) goto loc_82E8C068;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x82e8c068
	if (!ctx.cr6.eq) goto loc_82E8C068;
	// stw r18,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r18.u32);
	// stw r18,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r18.u32);
loc_82E8C068:
	// lwz r5,496(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	// lwz r4,508(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82ec0a78
	ctx.lr = 0x82E8C078;
	sub_82EC0A78(ctx, base);
	// lwz r5,524(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// lwz r4,504(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82ec0a88
	ctx.lr = 0x82E8C088;
	sub_82EC0A88(ctx, base);
	// stw r27,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r27.u32);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// stw r25,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r25.u32);
	// addi r4,r1,276
	ctx.r4.s64 = ctx.r1.s64 + 276;
	// stw r29,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r29.u32);
	// bl 0x82e89a78
	ctx.lr = 0x82E8C0A8;
	sub_82E89A78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e8c0c4
	if (ctx.cr6.eq) goto loc_82E8C0C4;
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// neg r10,r11
	ctx.r10.s64 = -ctx.r11.s64;
	// andc r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
loc_82E8C0C4:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e8c0d8
	if (ctx.cr6.eq) goto loc_82E8C0D8;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82ec3f18
	ctx.lr = 0x82E8C0D8;
	sub_82EC3F18(ctx, base);
loc_82E8C0D8:
	// cmpwi cr6,r21,8
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 8, ctx.xer);
	// beq cr6,0x82e8c0e8
	if (ctx.cr6.eq) goto loc_82E8C0E8;
	// cmpwi cr6,r21,7
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 7, ctx.xer);
	// bne cr6,0x82e8c114
	if (!ctx.cr6.eq) goto loc_82E8C114;
loc_82E8C0E8:
	// li r11,72
	ctx.r11.s64 = 72;
	// li r10,176
	ctx.r10.s64 = 176;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// lis r4,9356
	ctx.r4.s64 = 613154816;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// li r3,176
	ctx.r3.s64 = 176;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x82691410
	ctx.lr = 0x82E8C108;
	sub_82691410(ctx, base);
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e8c36c
	if (ctx.cr6.eq) goto loc_82E8C36C;
loc_82E8C114:
	// lwz r11,692(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 692);
	// addi r10,r25,15
	ctx.r10.s64 = ctx.r25.s64 + 15;
	// lwz r8,636(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 636);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r11,r27,15
	ctx.r11.s64 = ctx.r27.s64 + 15;
	// rlwinm r9,r11,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// beq cr6,0x82e8c184
	if (ctx.cr6.eq) goto loc_82E8C184;
	// rlwinm r7,r10,0,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// lis r6,0
	ctx.r6.s64 = 0;
	// mullw r11,r9,r7
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ori r9,r6,32768
	ctx.r9.u64 = ctx.r6.u64 | 32768;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// bge cr6,0x82e8c158
	if (!ctx.cr6.lt) goto loc_82E8C158;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82E8C158:
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82e8c170
	if (!ctx.cr6.gt) goto loc_82E8C170;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// b 0x82e8c1a8
	goto loc_82E8C1A8;
loc_82E8C170:
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82e8c17c
	if (!ctx.cr6.lt) goto loc_82E8C17C;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
loc_82E8C17C:
	// stw r4,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r4.u32);
	// b 0x82e8c1a8
	goto loc_82E8C1A8;
loc_82E8C184:
	// rlwinm r8,r10,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// mullw r11,r9,r8
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// bge cr6,0x82e8c1a4
	if (!ctx.cr6.lt) goto loc_82E8C1A4;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
loc_82E8C1A4:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_82E8C1A8:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82ebed50
	ctx.lr = 0x82E8C1B0;
	sub_82EBED50(ctx, base);
	// mullw r11,r27,r25
	ctx.r11.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r25.s32);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stw r29,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r29.u32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r9.u32);
	// beq cr6,0x82e8c1d4
	if (ctx.cr6.eq) goto loc_82E8C1D4;
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// b 0x82e8c1f8
	goto loc_82E8C1F8;
loc_82E8C1D4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r30,2124(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x82e8c1ec
	if (!ctx.cr6.lt) goto loc_82E8C1EC;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// b 0x82e8c1f8
	goto loc_82E8C1F8;
loc_82E8C1EC:
	// cmpwi cr6,r30,7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 7, ctx.xer);
	// ble cr6,0x82e8c1f8
	if (!ctx.cr6.gt) goto loc_82E8C1F8;
	// li r30,7
	ctx.r30.s64 = 7;
loc_82E8C1F8:
	// stw r30,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r30.u32);
	// clrlwi r4,r30,29
	ctx.r4.u64 = ctx.r30.u32 & 0x7;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82ebfd68
	ctx.lr = 0x82E8C208;
	sub_82EBFD68(ctx, base);
	// cmpwi cr6,r20,4
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 4, ctx.xer);
	// blt cr6,0x82e8c21c
	if (ctx.cr6.lt) goto loc_82E8C21C;
	// li r11,6
	ctx.r11.s64 = 6;
	// stb r11,552(r31)
	PPC_STORE_U8(ctx.r31.u32 + 552, ctx.r11.u8);
	// b 0x82e8c220
	goto loc_82E8C220;
loc_82E8C21C:
	// stb r29,552(r31)
	PPC_STORE_U8(ctx.r31.u32 + 552, ctx.r29.u8);
loc_82E8C220:
	// cmpwi cr6,r21,8
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 8, ctx.xer);
	// beq cr6,0x82e8c240
	if (ctx.cr6.eq) goto loc_82E8C240;
	// cmpwi cr6,r21,6
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 6, ctx.xer);
	// beq cr6,0x82e8c240
	if (ctx.cr6.eq) goto loc_82E8C240;
	// cmpwi cr6,r21,7
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 7, ctx.xer);
	// beq cr6,0x82e8c240
	if (ctx.cr6.eq) goto loc_82E8C240;
	// stw r29,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r29.u32);
	// b 0x82e8c2c8
	goto loc_82E8C2C8;
loc_82E8C240:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82e8c258
	if (!ctx.cr6.gt) goto loc_82E8C258;
	// addic. r11,r30,2
	ctx.xer.ca = ctx.r30.u32 > 4294967293;
	ctx.r11.s64 = ctx.r30.s64 + 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82e8c258
	if (!ctx.cr0.gt) goto loc_82E8C258;
	// stw r11,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r11.u32);
	// b 0x82e8c25c
	goto loc_82E8C25C;
loc_82E8C258:
	// stw r29,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r29.u32);
loc_82E8C25C:
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lbz r11,31536(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 31536);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82e8c2c8
	if (!ctx.cr6.gt) goto loc_82E8C2C8;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82e8c278
	if (!ctx.cr6.gt) goto loc_82E8C278;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_82E8C278:
	// lwz r10,580(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82e8c2ac
	if (!ctx.cr6.lt) goto loc_82E8C2AC;
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// ble cr6,0x82e8c2a8
	if (!ctx.cr6.gt) goto loc_82E8C2A8;
	// subfic r10,r30,17
	ctx.xer.ca = ctx.r30.u32 <= 17;
	ctx.r10.s64 = 17 - ctx.r30.s64;
	// li r11,18
	ctx.r11.s64 = 18;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bge cr6,0x82e8c2a4
	if (!ctx.cr6.lt) goto loc_82E8C2A4;
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
loc_82E8C2A4:
	// stb r10,31536(r9)
	PPC_STORE_U8(ctx.r9.u32 + 31536, ctx.r10.u8);
loc_82E8C2A8:
	// stw r11,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r11.u32);
loc_82E8C2AC:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lbz r7,31536(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 31536);
	// lwz r3,31552(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31552);
	// bl 0x82f11d88
	ctx.lr = 0x82E8C2C8;
	sub_82F11D88(ctx, base);
loc_82E8C2C8:
	// stw r29,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r29.u32);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// addi r4,r1,280
	ctx.r4.s64 = ctx.r1.s64 + 280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e89a20
	ctx.lr = 0x82E8C2DC;
	sub_82E89A20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e8c2f8
	if (ctx.cr6.eq) goto loc_82E8C2F8;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8c2f8
	if (ctx.cr6.eq) goto loc_82E8C2F8;
	// lwz r10,280(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// stw r10,31540(r11)
	PPC_STORE_U32(ctx.r11.u32 + 31540, ctx.r10.u32);
loc_82E8C2F8:
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// lwz r5,580(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8bb40
	ctx.lr = 0x82E8C308;
	sub_82E8BB40(ctx, base);
	// lwz r11,288(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e8c36c
	if (!ctx.cr6.eq) goto loc_82E8C36C;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e8c36c
	if (ctx.cr6.eq) goto loc_82E8C36C;
	// lwz r11,272(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e8c36c
	if (!ctx.cr6.eq) goto loc_82E8C36C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82ec0dc8
	ctx.lr = 0x82E8C334;
	sub_82EC0DC8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
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
loc_82E8C34C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8ba88
	ctx.lr = 0x82E8C354;
	sub_82E8BA88(ctx, base);
	// lwz r3,272(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
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
loc_82E8C36C:
	// li r3,-100
	ctx.r3.s64 = -100;
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
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

__attribute__((alias("__imp__sub_82E8C384"))) PPC_WEAK_FUNC(sub_82E8C384);
PPC_FUNC_IMPL(__imp__sub_82E8C384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8C388"))) PPC_WEAK_FUNC(sub_82E8C388);
PPC_FUNC_IMPL(__imp__sub_82E8C388) {
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
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,24508
	ctx.r10.s64 = ctx.r11.s64 + 24508;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82e8ba88
	ctx.lr = 0x82E8C3B4;
	sub_82E8BA88(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82e8c3d4
	if (ctx.cr6.eq) goto loc_82E8C3D4;
	// lis r4,9356
	ctx.r4.s64 = 613154816;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x82691460
	ctx.lr = 0x82E8C3D0;
	sub_82691460(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82E8C3D4:
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

__attribute__((alias("__imp__sub_82E8C3EC"))) PPC_WEAK_FUNC(sub_82E8C3EC);
PPC_FUNC_IMPL(__imp__sub_82E8C3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8C3F0"))) PPC_WEAK_FUNC(sub_82E8C3F0);
PPC_FUNC_IMPL(__imp__sub_82E8C3F0) {
	PPC_FUNC_PROLOGUE();
	// lis r9,12889
	ctx.r9.s64 = 844693504;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// ori r8,r9,21849
	ctx.r8.u64 = ctx.r9.u64 | 21849;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82e8c410
	if (!ctx.cr6.eq) goto loc_82E8C410;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E8C410:
	// lis r9,12849
	ctx.r9.s64 = 842072064;
	// ori r8,r9,22105
	ctx.r8.u64 = ctx.r9.u64 | 22105;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82e8c424
	if (!ctx.cr6.eq) goto loc_82E8C424;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
loc_82E8C424:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8c434
	if (ctx.cr6.eq) goto loc_82E8C434;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82E8C434:
	// lhz r11,14(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 14);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8C448"))) PPC_WEAK_FUNC(sub_82E8C448);
PPC_FUNC_IMPL(__imp__sub_82E8C448) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,22101
	ctx.r11.s64 = 1448411136;
	// lis r10,12338
	ctx.r10.s64 = 808583168;
	// ori r8,r11,22857
	ctx.r8.u64 = ctx.r11.u64 | 22857;
	// lis r6,12849
	ctx.r6.s64 = 842072064;
	// lis r5,14677
	ctx.r5.s64 = 961871872;
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// ori r7,r10,13385
	ctx.r7.u64 = ctx.r10.u64 | 13385;
	// ori r6,r6,22105
	ctx.r6.u64 = ctx.r6.u64 | 22105;
	// ori r5,r5,22105
	ctx.r5.u64 = ctx.r5.u64 | 22105;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82e8c548
	if (ctx.cr6.eq) goto loc_82E8C548;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82e8c548
	if (ctx.cr6.eq) goto loc_82E8C548;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82e8c548
	if (ctx.cr6.eq) goto loc_82E8C548;
	// lis r10,12593
	ctx.r10.s64 = 825294848;
	// ori r4,r10,22094
	ctx.r4.u64 = ctx.r10.u64 | 22094;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82e8c548
	if (ctx.cr6.eq) goto loc_82E8C548;
	// lis r10,12849
	ctx.r10.s64 = 842072064;
	// ori r4,r10,22094
	ctx.r4.u64 = ctx.r10.u64 | 22094;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82e8c548
	if (ctx.cr6.eq) goto loc_82E8C548;
	// lis r10,22068
	ctx.r10.s64 = 1446248448;
	// ori r4,r10,12592
	ctx.r4.u64 = ctx.r10.u64 | 12592;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82e8c548
	if (ctx.cr6.eq) goto loc_82E8C548;
	// lis r10,12889
	ctx.r10.s64 = 844693504;
	// ori r4,r10,21849
	ctx.r4.u64 = ctx.r10.u64 | 21849;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82e8c548
	if (ctx.cr6.eq) goto loc_82E8C548;
	// lis r10,22870
	ctx.r10.s64 = 1498808320;
	// ori r4,r10,22869
	ctx.r4.u64 = ctx.r10.u64 | 22869;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82e8c548
	if (ctx.cr6.eq) goto loc_82E8C548;
	// lis r10,21849
	ctx.r10.s64 = 1431896064;
	// ori r4,r10,22105
	ctx.r4.u64 = ctx.r10.u64 | 22105;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82e8c548
	if (ctx.cr6.eq) goto loc_82E8C548;
	// lis r10,16729
	ctx.r10.s64 = 1096351744;
	// ori r4,r10,21846
	ctx.r4.u64 = ctx.r10.u64 | 21846;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82e8c548
	if (ctx.cr6.eq) goto loc_82E8C548;
	// lis r10,20529
	ctx.r10.s64 = 1345388544;
	// ori r4,r10,13401
	ctx.r4.u64 = ctx.r10.u64 | 13401;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82e8c548
	if (ctx.cr6.eq) goto loc_82E8C548;
	// lis r10,21553
	ctx.r10.s64 = 1412497408;
	// ori r4,r10,13401
	ctx.r4.u64 = ctx.r10.u64 | 13401;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82e8c548
	if (ctx.cr6.eq) goto loc_82E8C548;
	// lis r10,21554
	ctx.r10.s64 = 1412562944;
	// ori r4,r10,13401
	ctx.r4.u64 = ctx.r10.u64 | 13401;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82e8c548
	if (ctx.cr6.eq) goto loc_82E8C548;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82e8c548
	if (ctx.cr6.eq) goto loc_82E8C548;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8c548
	if (ctx.cr6.eq) goto loc_82E8C548;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82e8c548
	if (ctx.cr6.eq) goto loc_82E8C548;
loc_82E8C540:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_82E8C548:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82e8c570
	if (ctx.cr6.eq) goto loc_82E8C570;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82e8c570
	if (ctx.cr6.eq) goto loc_82E8C570;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82e8c570
	if (ctx.cr6.eq) goto loc_82E8C570;
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_82E8C570:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8c580
	if (ctx.cr6.eq) goto loc_82E8C580;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82e8c5a4
	if (!ctx.cr6.eq) goto loc_82E8C5A4;
loc_82E8C580:
	// lhz r9,14(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 14);
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// beq cr6,0x82e8c5a4
	if (ctx.cr6.eq) goto loc_82E8C5A4;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// beq cr6,0x82e8c5a4
	if (ctx.cr6.eq) goto loc_82E8C5A4;
	// cmplwi cr6,r9,24
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 24, ctx.xer);
	// beq cr6,0x82e8c5a4
	if (ctx.cr6.eq) goto loc_82E8C5A4;
	// cmplwi cr6,r9,32
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32, ctx.xer);
	// bne cr6,0x82e8c540
	if (!ctx.cr6.eq) goto loc_82E8C540;
loc_82E8C5A4:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82e8c5b4
	if (!ctx.cr6.eq) goto loc_82E8C5B4;
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
loc_82E8C5B4:
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82e8c5d8
	if (!ctx.cr6.eq) goto loc_82E8C5D8;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82e8c5d8
	if (ctx.cr6.eq) goto loc_82E8C5D8;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82e8c5d8
	if (ctx.cr6.eq) goto loc_82E8C5D8;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// li r3,5
	ctx.r3.s64 = 5;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82E8C5D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8C5E0"))) PPC_WEAK_FUNC(sub_82E8C5E0);
PPC_FUNC_IMPL(__imp__sub_82E8C5E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82E8C5E8;
	__savegprlr_23(ctx, base);
	// lwz r25,14628(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14628);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// lwz r31,14524(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14524);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// mullw r10,r25,r7
	ctx.r10.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r7.s32);
	// lwz r30,14500(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14500);
	// lwz r7,14532(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14532);
	// lwz r29,14504(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14504);
	// lwz r28,14508(r9)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14508);
	// srawi r27,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r27.s64 = ctx.r10.s32 >> 2;
	// mullw r31,r31,r11
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r11.s32);
	// addze r11,r27
	temp.s64 = ctx.r27.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r27.u32;
	ctx.r11.s64 = temp.s64;
	// add r7,r31,r7
	ctx.r7.u64 = ctx.r31.u64 + ctx.r7.u64;
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// add r30,r29,r11
	ctx.r30.u64 = ctx.r29.u64 + ctx.r11.u64;
	// srawi r31,r25,1
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r25.s32 >> 1;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// addze r26,r31
	temp.s64 = ctx.r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r31.u32;
	ctx.r26.s64 = temp.s64;
	// add r29,r7,r3
	ctx.r29.u64 = ctx.r7.u64 + ctx.r3.u64;
	// add r31,r10,r4
	ctx.r31.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r28,r30,r5
	ctx.r28.u64 = ctx.r30.u64 + ctx.r5.u64;
	// add r27,r11,r6
	ctx.r27.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r25,r25,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// ble 0x82e8c77c
	if (!ctx.cr0.gt) goto loc_82E8C77C;
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// lwz r4,14476(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14476);
	// neg r24,r25
	ctx.r24.s64 = -ctx.r25.s64;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// subfic r30,r31,-2
	ctx.xer.ca = ctx.r31.u32 <= 4294967294;
	ctx.r30.s64 = -2 - ctx.r31.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82E8C664:
	// lwz r11,14524(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14524);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lwz r10,14628(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14628);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r7,r10,r31
	ctx.r7.u64 = ctx.r10.u64 + ctx.r31.u64;
	// ble cr6,0x82e8c760
	if (!ctx.cr6.gt) goto loc_82E8C760;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r10,r31,2
	ctx.r10.s64 = ctx.r31.s64 + 2;
	// addi r5,r28,-2
	ctx.r5.s64 = ctx.r28.s64 + -2;
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// addi r6,r27,3
	ctx.r6.s64 = ctx.r27.s64 + 3;
	// subf r3,r27,r28
	ctx.r3.s64 = ctx.r28.s64 - ctx.r27.s64;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
loc_82E8C698:
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r4,3(r5)
	PPC_STORE_U8(ctx.r5.u32 + 3, ctx.r4.u8);
	// stb r4,2(r5)
	PPC_STORE_U8(ctx.r5.u32 + 2, ctx.r4.u8);
	// lbz r4,2(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stb r4,-2(r10)
	PPC_STORE_U8(ctx.r10.u32 + -2, ctx.r4.u8);
	// lbz r4,3(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stb r4,-2(r6)
	PPC_STORE_U8(ctx.r6.u32 + -2, ctx.r4.u8);
	// stb r4,-3(r6)
	PPC_STORE_U8(ctx.r6.u32 + -3, ctx.r4.u8);
	// lbz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// stb r4,-1(r10)
	PPC_STORE_U8(ctx.r10.u32 + -1, ctx.r4.u8);
	// lbz r4,5(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// stbx r4,r3,r6
	PPC_STORE_U8(ctx.r3.u32 + ctx.r6.u32, ctx.r4.u8);
	// stbu r4,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U8(ea, ctx.r4.u8);
	ctx.r5.u32 = ea;
	// lbz r4,6(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// stb r4,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r4.u8);
	// lbz r4,7(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// stb r4,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r4.u8);
	// stb r4,-1(r6)
	PPC_STORE_U8(ctx.r6.u32 + -1, ctx.r4.u8);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// lbz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// stb r4,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r4.u8);
	// lbz r4,9(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// stb r4,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r4.u8);
	// lbz r4,10(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// stb r4,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r4.u8);
	// lbz r4,11(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// stb r4,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r4.u8);
	// lbzu r4,12(r11)
	ea = 12 + ctx.r11.u32;
	ctx.r4.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stb r4,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r4.u8);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lbz r4,2(r8)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r8.u32 + 2);
	// add r23,r30,r10
	ctx.r23.u64 = ctx.r30.u64 + ctx.r10.u64;
	// stb r4,1(r7)
	PPC_STORE_U8(ctx.r7.u32 + 1, ctx.r4.u8);
	// lbz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r8.u32 + 4);
	// stb r4,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r4.u8);
	// lbz r4,6(r8)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r8.u32 + 6);
	// stb r4,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r4.u8);
	// lbz r4,8(r8)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r8.u32 + 8);
	// stb r4,4(r7)
	PPC_STORE_U8(ctx.r7.u32 + 4, ctx.r4.u8);
	// lbz r4,9(r8)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r8.u32 + 9);
	// stb r4,5(r7)
	PPC_STORE_U8(ctx.r7.u32 + 5, ctx.r4.u8);
	// lbz r4,10(r8)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r8.u32 + 10);
	// stb r4,6(r7)
	PPC_STORE_U8(ctx.r7.u32 + 6, ctx.r4.u8);
	// lbz r4,11(r8)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r8.u32 + 11);
	// stb r4,7(r7)
	PPC_STORE_U8(ctx.r7.u32 + 7, ctx.r4.u8);
	// lbzu r4,12(r8)
	ea = 12 + ctx.r8.u32;
	ctx.r4.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// stbu r4,8(r7)
	ea = 8 + ctx.r7.u32;
	PPC_STORE_U8(ea, ctx.r4.u8);
	ctx.r7.u32 = ea;
	// lwz r4,14476(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14476);
	// cmpw cr6,r23,r4
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82e8c698
	if (ctx.cr6.lt) goto loc_82E8C698;
loc_82E8C760:
	// lwz r11,14528(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14528);
	// add r31,r25,r31
	ctx.r31.u64 = ctx.r25.u64 + ctx.r31.u64;
	// add r30,r24,r30
	ctx.r30.u64 = ctx.r24.u64 + ctx.r30.u64;
	// add r29,r29,r11
	ctx.r29.u64 = ctx.r29.u64 + ctx.r11.u64;
	// add r28,r26,r28
	ctx.r28.u64 = ctx.r26.u64 + ctx.r28.u64;
	// add r27,r26,r27
	ctx.r27.u64 = ctx.r26.u64 + ctx.r27.u64;
	// bdnz 0x82e8c664
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82E8C664;
loc_82E8C77C:
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8C780"))) PPC_WEAK_FUNC(sub_82E8C780);
PPC_FUNC_IMPL(__imp__sub_82E8C780) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82E8C788;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,244(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// lwz r11,14476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14476);
	// lwz r9,14512(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14512);
	// mullw r29,r28,r11
	ctx.r29.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r11.s32);
	// srawi r11,r29,2
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 2;
	// mullw r9,r9,r28
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r28.s32);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r27,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r27.s64 = ctx.r9.s32 >> 2;
	// add r30,r9,r3
	ctx.r30.u64 = ctx.r9.u64 + ctx.r3.u64;
	// addze r9,r27
	temp.s64 = ctx.r27.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r27.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r3,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r28.s32 >> 1;
	// add r28,r9,r4
	ctx.r28.u64 = ctx.r9.u64 + ctx.r4.u64;
	// addze r4,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r4.s64 = temp.s64;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// add r27,r9,r5
	ctx.r27.u64 = ctx.r9.u64 + ctx.r5.u64;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r29,r29,r6
	ctx.r29.u64 = ctx.r29.u64 + ctx.r6.u64;
	// add r26,r11,r7
	ctx.r26.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r25,r11,r8
	ctx.r25.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82e8c864
	if (!ctx.cr6.lt) goto loc_82E8C864;
	// subf r24,r4,r10
	ctx.r24.s64 = ctx.r10.s64 - ctx.r4.s64;
loc_82E8C7E8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,14476(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14476);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82E8C7F8;
	sub_82FA77C0(ctx, base);
	// lwz r5,14476(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14476);
	// lwz r11,14512(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14512);
	// add r29,r5,r29
	ctx.r29.u64 = ctx.r5.u64 + ctx.r29.u64;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82E8C814;
	sub_82FA77C0(ctx, base);
	// lwz r11,14512(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14512);
	// lwz r10,14476(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14476);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,14484(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14484);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r29,r29,r10
	ctx.r29.u64 = ctx.r29.u64 + ctx.r10.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82E8C834;
	sub_82FA77C0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,14484(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14484);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82E8C844;
	sub_82FA77C0(ctx, base);
	// lwz r10,14520(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14520);
	// lwz r11,14484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14484);
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// add r28,r10,r28
	ctx.r28.u64 = ctx.r10.u64 + ctx.r28.u64;
	// add r27,r10,r27
	ctx.r27.u64 = ctx.r10.u64 + ctx.r27.u64;
	// add r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r25,r11,r25
	ctx.r25.u64 = ctx.r11.u64 + ctx.r25.u64;
	// bne 0x82e8c7e8
	if (!ctx.cr0.eq) goto loc_82E8C7E8;
loc_82E8C864:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8C86C"))) PPC_WEAK_FUNC(sub_82E8C86C);
PPC_FUNC_IMPL(__imp__sub_82E8C86C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8C870"))) PPC_WEAK_FUNC(sub_82E8C870);
PPC_FUNC_IMPL(__imp__sub_82E8C870) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82E8C878;
	__savegprlr_14(ctx, base);
	// lwz r27,14628(r9)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14628);
	// subf r28,r7,r8
	ctx.r28.s64 = ctx.r8.s64 - ctx.r7.s64;
	// lwz r26,14476(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14476);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// mullw r10,r27,r7
	ctx.r10.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r7.s32);
	// lwz r8,14524(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14524);
	// lwz r7,14532(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14532);
	// lwz r31,14500(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14500);
	// lwz r30,14504(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14504);
	// lwz r29,14508(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14508);
	// lwz r25,14684(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14684);
	// srawi r24,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r24.s64 = ctx.r10.s32 >> 2;
	// mullw r8,r8,r11
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// subf r23,r26,r27
	ctx.r23.s64 = ctx.r27.s64 - ctx.r26.s64;
	// addze r11,r24
	temp.s64 = ctx.r24.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r24.u32;
	ctx.r11.s64 = temp.s64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r27,r27,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r23,r23,1
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x1) != 0);
	ctx.r23.s64 = ctx.r23.s32 >> 1;
	// add r7,r30,r11
	ctx.r7.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// add r24,r8,r3
	ctx.r24.u64 = ctx.r8.u64 + ctx.r3.u64;
	// subf r22,r26,r27
	ctx.r22.s64 = ctx.r27.s64 - ctx.r26.s64;
	// addze r23,r23
	temp.s64 = ctx.r23.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r23.u32;
	ctx.r23.s64 = temp.s64;
	// stw r24,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r24.u32);
	// add r4,r10,r4
	ctx.r4.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stw r22,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r22.u32);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// stw r23,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r23.u32);
	// add r10,r7,r5
	ctx.r10.u64 = ctx.r7.u64 + ctx.r5.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// beq cr6,0x82e8cd04
	if (ctx.cr6.eq) goto loc_82E8CD04;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82e8cf9c
	if (!ctx.cr6.gt) goto loc_82E8CF9C;
	// addi r7,r28,-1
	ctx.r7.s64 = ctx.r28.s64 + -1;
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// stw r5,36(r1)
	PPC_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// addi r10,r7,1
	ctx.r10.s64 = ctx.r7.s64 + 1;
	// rotlwi r8,r26,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r26.u32, 0);
	// stw r3,44(r1)
	PPC_STORE_U32(ctx.r1.u32 + 44, ctx.r3.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82E8C924:
	// lwz r10,14628(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14628);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,14524(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14524);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r6,r11,r24
	ctx.r6.u64 = ctx.r11.u64 + ctx.r24.u64;
	// stw r10,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r10.u32);
	// ble cr6,0x82e8cba0
	if (!ctx.cr6.gt) goto loc_82E8CBA0;
	// addi r11,r24,-2
	ctx.r11.s64 = ctx.r24.s64 + -2;
	// addi r10,r6,-2
	ctx.r10.s64 = ctx.r6.s64 + -2;
loc_82E8C94C:
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r28,6(r10)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// addi r3,r8,2079
	ctx.r3.s64 = ctx.r8.s64 + 2079;
	// lbz r31,2(r10)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// addi r25,r28,2079
	ctx.r25.s64 = ctx.r28.s64 + 2079;
	// lbz r6,3(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// rlwinm r27,r3,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm r25,r25,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r23,3(r10)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// addi r29,r31,2079
	ctx.r29.s64 = ctx.r31.s64 + 2079;
	// lbz r5,6(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// addi r19,r6,1311
	ctx.r19.s64 = ctx.r6.s64 + 1311;
	// lbz r22,7(r10)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r21,4(r10)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// lwzx r27,r27,r9
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r9.u32);
	// addi r14,r8,1823
	ctx.r14.s64 = ctx.r8.s64 + 1823;
	// lwzx r25,r25,r9
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r9.u32);
	// addi r6,r6,1055
	ctx.r6.s64 = ctx.r6.s64 + 1055;
	// lbz r26,7(r11)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// rlwinm r14,r14,2,0,29
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzu r3,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r3.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r20,r29,r9
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// stw r27,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r27.u32);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// stw r25,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r25.u32);
	// addi r23,r5,2079
	ctx.r23.s64 = ctx.r5.s64 + 2079;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// lbzu r24,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r24.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// rlwinm r17,r23,2,0,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// std r11,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.r11.u64);
	// stw r20,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r20.u32);
	// rlwinm r20,r19,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
	// addi r21,r30,1311
	ctx.r21.s64 = ctx.r30.s64 + 1311;
	// addi r22,r3,543
	ctx.r22.s64 = ctx.r3.s64 + 543;
	// addi r18,r27,1311
	ctx.r18.s64 = ctx.r27.s64 + 1311;
	// lwzx r23,r20,r9
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r9.u32);
	// addi r16,r26,1311
	ctx.r16.s64 = ctx.r26.s64 + 1311;
	// rlwinm r20,r21,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r21,r17,r9
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r17.u32 + ctx.r9.u32);
	// addi r15,r25,543
	ctx.r15.s64 = ctx.r25.s64 + 543;
	// rlwinm r22,r22,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r16,r16,2,0,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r18,r18,2,0,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r17,r24,543
	ctx.r17.s64 = ctx.r24.s64 + 543;
	// lwzx r20,r20,r9
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r9.u32);
	// rlwinm r15,r15,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r17,r17,2,0,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r22,r22,r9
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r9.u32);
	// addi r19,r29,543
	ctx.r19.s64 = ctx.r29.s64 + 543;
	// lwzx r18,r18,r9
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r18.u32 + ctx.r9.u32);
	// addi r28,r28,1823
	ctx.r28.s64 = ctx.r28.s64 + 1823;
	// lwz r8,-192(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// rlwinm r19,r19,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r6,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r6.u32);
	// add r8,r8,r23
	ctx.r8.u64 = ctx.r8.u64 + ctx.r23.u64;
	// lwz r23,-184(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + -184);
	// lwzx r6,r16,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r16.u32 + ctx.r9.u32);
	// lwz r11,-188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -188);
	// stw r17,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r17.u32);
	// lwzx r17,r15,r9
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r15.u32 + ctx.r9.u32);
	// lwz r16,-184(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -184);
	// stw r23,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r23.u32);
	// add r23,r21,r22
	ctx.r23.u64 = ctx.r21.u64 + ctx.r22.u64;
	// lwz r15,-188(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + -188);
	// add r21,r15,r18
	ctx.r21.u64 = ctx.r15.u64 + ctx.r18.u64;
	// lwz r15,-192(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// add r22,r11,r20
	ctx.r22.u64 = ctx.r11.u64 + ctx.r20.u64;
	// lwzx r19,r19,r9
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + ctx.r9.u32);
	// add r6,r23,r6
	ctx.r6.u64 = ctx.r23.u64 + ctx.r6.u64;
	// lwzx r16,r16,r9
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + ctx.r9.u32);
	// add r23,r22,r17
	ctx.r23.u64 = ctx.r22.u64 + ctx.r17.u64;
	// add r8,r8,r19
	ctx.r8.u64 = ctx.r8.u64 + ctx.r19.u64;
	// lwzx r19,r14,r9
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r14.u32 + ctx.r9.u32);
	// add r21,r21,r16
	ctx.r21.u64 = ctx.r21.u64 + ctx.r16.u64;
	// srawi r8,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 16;
	// lwzx r20,r15,r9
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r15.u32 + ctx.r9.u32);
	// addi r27,r27,1055
	ctx.r27.s64 = ctx.r27.s64 + 1055;
	// rlwinm r28,r28,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r27,r27,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r24,r24,287
	ctx.r24.s64 = ctx.r24.s64 + 287;
	// addi r18,r30,1055
	ctx.r18.s64 = ctx.r30.s64 + 1055;
	// addi r29,r29,287
	ctx.r29.s64 = ctx.r29.s64 + 287;
	// lwzx r30,r28,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
	// rlwinm r28,r24,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r22,r31,1823
	ctx.r22.s64 = ctx.r31.s64 + 1823;
	// lwzx r31,r27,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r9.u32);
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r24,r18,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r25,287
	ctx.r27.s64 = ctx.r25.s64 + 287;
	// rlwinm r25,r22,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r22,r5,1823
	ctx.r22.s64 = ctx.r5.s64 + 1823;
	// lwzx r5,r28,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
	// addi r3,r3,287
	ctx.r3.s64 = ctx.r3.s64 + 287;
	// lwzx r28,r29,r9
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// rlwinm r18,r27,2,0,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r27,r24,r9
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r9.u32);
	// rlwinm r24,r3,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r26,1055
	ctx.r29.s64 = ctx.r26.s64 + 1055;
	// lwzx r25,r25,r9
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r9.u32);
	// add r3,r30,r31
	ctx.r3.u64 = ctx.r30.u64 + ctx.r31.u64;
	// rlwinm r26,r22,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// add r22,r19,r20
	ctx.r22.u64 = ctx.r19.u64 + ctx.r20.u64;
	// lwzx r31,r18,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r18.u32 + ctx.r9.u32);
	// add r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 + ctx.r5.u64;
	// lwzx r30,r24,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r9.u32);
	// rlwinm r20,r29,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r25,r27
	ctx.r5.u64 = ctx.r25.u64 + ctx.r27.u64;
	// srawi r6,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 16;
	// add r27,r22,r28
	ctx.r27.u64 = ctx.r22.u64 + ctx.r28.u64;
	// lwzx r28,r26,r9
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r9.u32);
	// srawi r29,r23,16
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0xFFFF) != 0);
	ctx.r29.s64 = ctx.r23.s32 >> 16;
	// srawi r23,r21,16
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0xFFFF) != 0);
	ctx.r23.s64 = ctx.r21.s32 >> 16;
	// lwzx r26,r20,r9
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r9.u32);
	// add r31,r5,r31
	ctx.r31.u64 = ctx.r5.u64 + ctx.r31.u64;
	// srawi r27,r27,16
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xFFFF) != 0);
	ctx.r27.s64 = ctx.r27.s32 >> 16;
	// srawi r3,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 16;
	// add r5,r28,r30
	ctx.r5.u64 = ctx.r28.u64 + ctx.r30.u64;
	// add r3,r27,r3
	ctx.r3.u64 = ctx.r27.u64 + ctx.r3.u64;
	// add r30,r5,r26
	ctx.r30.u64 = ctx.r5.u64 + ctx.r26.u64;
	// srawi r31,r31,16
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFFFF) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 16;
	// add r5,r23,r29
	ctx.r5.u64 = ctx.r23.u64 + ctx.r29.u64;
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
	// srawi r30,r30,16
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFFFF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 16;
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r5,r3,r30
	ctx.r5.u64 = ctx.r3.u64 + ctx.r30.u64;
	// lwz r3,44(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 44);
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// addi r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 2;
	// lwz r5,36(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// srawi r6,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 2;
	// srawi r8,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// stbu r6,1(r5)
	ea = 1 + ctx.r5.u32;
	PPC_STORE_U8(ea, ctx.r6.u8);
	ctx.r5.u32 = ea;
	// stbu r8,1(r3)
	ea = 1 + ctx.r3.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r3.u32 = ea;
	// lwz r8,14476(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14476);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// stw r3,44(r1)
	PPC_STORE_U32(ctx.r1.u32 + 44, ctx.r3.u32);
	// ld r11,-168(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// stw r5,36(r1)
	PPC_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// blt cr6,0x82e8c94c
	if (ctx.cr6.lt) goto loc_82E8C94C;
	// lwz r24,20(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r22,-180(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + -180);
	// lwz r23,-176(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + -176);
loc_82E8CBA0:
	// lwz r11,14524(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14524);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r10,r11,r24
	ctx.r10.u64 = ctx.r11.u64 + ctx.r24.u64;
	// ble cr6,0x82e8ccdc
	if (!ctx.cr6.gt) goto loc_82E8CCDC;
	// lwz r8,-172(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -172);
	// addi r11,r24,-3
	ctx.r11.s64 = ctx.r24.s64 + -3;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// addi r7,r8,-1
	ctx.r7.s64 = ctx.r8.s64 + -1;
loc_82E8CBC4:
	// lbz r31,3(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// lbz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r29,5(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// addi r31,r31,1567
	ctx.r31.s64 = ctx.r31.s64 + 1567;
	// addi r30,r8,799
	ctx.r30.s64 = ctx.r8.s64 + 799;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r8,31
	ctx.r8.s64 = ctx.r8.s64 + 31;
	// rlwinm r29,r8,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r31,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lwzx r31,r30,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// lwzx r31,r29,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// srawi r8,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 16;
	// stb r8,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r8.u8);
	// lbz r31,7(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r30,9(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// addi r30,r30,31
	ctx.r30.s64 = ctx.r30.s64 + 31;
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzu r8,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addi r29,r31,1567
	ctx.r29.s64 = ctx.r31.s64 + 1567;
	// addi r8,r8,799
	ctx.r8.s64 = ctx.r8.s64 + 799;
	// lwzx r31,r30,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r8,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r30,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// lwzx r30,r29,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// srawi r8,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 16;
	// stb r8,1(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1, ctx.r8.u8);
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// lbz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// lbz r8,5(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// lbz r30,6(r10)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// addi r30,r30,31
	ctx.r30.s64 = ctx.r30.s64 + 31;
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r31,1567
	ctx.r31.s64 = ctx.r31.s64 + 1567;
	// addi r8,r8,799
	ctx.r8.s64 = ctx.r8.s64 + 799;
	// rlwinm r29,r31,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r8,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r30,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// lwzx r8,r29,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// lwzx r30,r28,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// srawi r8,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 16;
	// stb r8,1(r7)
	PPC_STORE_U8(ctx.r7.u32 + 1, ctx.r8.u8);
	// lbz r31,9(r10)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + 9);
	// lbz r30,10(r10)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r10.u32 + 10);
	// addi r30,r30,31
	ctx.r30.s64 = ctx.r30.s64 + 31;
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// addi r29,r31,799
	ctx.r29.s64 = ctx.r31.s64 + 799;
	// addi r8,r8,1567
	ctx.r8.s64 = ctx.r8.s64 + 1567;
	// lwzx r31,r30,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwzx r30,r30,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// srawi r8,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 16;
	// stbu r8,2(r7)
	ea = 2 + ctx.r7.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r7.u32 = ea;
	// lwz r8,14476(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14476);
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82e8cbc4
	if (ctx.cr6.lt) goto loc_82E8CBC4;
loc_82E8CCDC:
	// lwz r11,14528(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14528);
	// add r5,r23,r5
	ctx.r5.u64 = ctx.r23.u64 + ctx.r5.u64;
	// add r3,r23,r3
	ctx.r3.u64 = ctx.r23.u64 + ctx.r3.u64;
	// add r24,r11,r24
	ctx.r24.u64 = ctx.r11.u64 + ctx.r24.u64;
	// stw r5,36(r1)
	PPC_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// add r4,r22,r4
	ctx.r4.u64 = ctx.r22.u64 + ctx.r4.u64;
	// stw r3,44(r1)
	PPC_STORE_U32(ctx.r1.u32 + 44, ctx.r3.u32);
	// stw r24,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r24.u32);
	// bdnz 0x82e8c924
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82E8C924;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
loc_82E8CD04:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82e8cf9c
	if (!ctx.cr6.gt) goto loc_82E8CF9C;
	// addi r7,r28,-1
	ctx.r7.s64 = ctx.r28.s64 + -1;
	// lwz r8,14476(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14476);
	// addi r27,r10,-1
	ctx.r27.s64 = ctx.r10.s64 + -1;
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r26,r11,-1
	ctx.r26.s64 = ctx.r11.s64 + -1;
	// addi r10,r7,1
	ctx.r10.s64 = ctx.r7.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82E8CD28:
	// lwz r11,14628(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14628);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r25,r11,r4
	ctx.r25.u64 = ctx.r11.u64 + ctx.r4.u64;
	// ble cr6,0x82e8ce48
	if (!ctx.cr6.gt) goto loc_82E8CE48;
	// addi r11,r24,-2
	ctx.r11.s64 = ctx.r24.s64 + -2;
loc_82E8CD40:
	// lbz r31,2(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lbz r3,3(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r8,7(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// addi r29,r31,2079
	ctx.r29.s64 = ctx.r31.s64 + 2079;
	// lbz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// addi r28,r3,1311
	ctx.r28.s64 = ctx.r3.s64 + 1311;
	// lbz r5,6(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// addi r17,r3,1055
	ctx.r17.s64 = ctx.r3.s64 + 1055;
	// lbzu r6,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addi r30,r7,543
	ctx.r30.s64 = ctx.r7.s64 + 543;
	// addi r20,r5,2079
	ctx.r20.s64 = ctx.r5.s64 + 2079;
	// addi r21,r6,543
	ctx.r21.s64 = ctx.r6.s64 + 543;
	// addi r19,r6,287
	ctx.r19.s64 = ctx.r6.s64 + 287;
	// rlwinm r6,r29,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r28,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r5,1823
	ctx.r5.s64 = ctx.r5.s64 + 1823;
	// addi r18,r31,1823
	ctx.r18.s64 = ctx.r31.s64 + 1823;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r20,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// lwzx r28,r29,r9
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// rlwinm r31,r21,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r21,r8,1311
	ctx.r21.s64 = ctx.r8.s64 + 1311;
	// rlwinm r29,r19,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r20,r8,1055
	ctx.r20.s64 = ctx.r8.s64 + 1055;
	// lwzx r8,r5,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r3,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// rlwinm r19,r18,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r31,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r7,r7,287
	ctx.r7.s64 = ctx.r7.s64 + 287;
	// rlwinm r18,r17,2,0,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r29,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// rlwinm r21,r21,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r20,r20,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r30,r9
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// rlwinm r17,r7,2,0,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r19,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r19.u32 + ctx.r9.u32);
	// add r6,r6,r28
	ctx.r6.u64 = ctx.r6.u64 + ctx.r28.u64;
	// lwzx r30,r18,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r18.u32 + ctx.r9.u32);
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
	// lwzx r31,r21,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r9.u32);
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lwzx r5,r20,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r9.u32);
	// add r29,r6,r29
	ctx.r29.u64 = ctx.r6.u64 + ctx.r29.u64;
	// lwzx r6,r17,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r17.u32 + ctx.r9.u32);
	// add r7,r7,r30
	ctx.r7.u64 = ctx.r7.u64 + ctx.r30.u64;
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
	// add r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r31,r7,r6
	ctx.r31.u64 = ctx.r7.u64 + ctx.r6.u64;
	// srawi r8,r29,16
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r29.s32 >> 16;
	// srawi r7,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r3.s32 >> 16;
	// srawi r6,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 16;
	// srawi r5,r31,16
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r31.s32 >> 16;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r8,r6,r5
	ctx.r8.u64 = ctx.r6.u64 + ctx.r5.u64;
	// addi r3,r7,1
	ctx.r3.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// srawi r6,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r3.s32 >> 1;
	// stbu r7,1(r27)
	ea = 1 + ctx.r27.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r27.u32 = ea;
	// stbu r6,1(r26)
	ea = 1 + ctx.r26.u32;
	PPC_STORE_U8(ea, ctx.r6.u8);
	ctx.r26.u32 = ea;
	// lwz r8,14476(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14476);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82e8cd40
	if (ctx.cr6.lt) goto loc_82E8CD40;
loc_82E8CE48:
	// lwz r11,14524(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14524);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r10,r11,r24
	ctx.r10.u64 = ctx.r11.u64 + ctx.r24.u64;
	// ble cr6,0x82e8cf84
	if (!ctx.cr6.gt) goto loc_82E8CF84;
	// addi r11,r24,-4
	ctx.r11.s64 = ctx.r24.s64 + -4;
	// addi r7,r25,-1
	ctx.r7.s64 = ctx.r25.s64 + -1;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_82E8CE68:
	// lbz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// lbz r5,5(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r31,6(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// addi r3,r8,1567
	ctx.r3.s64 = ctx.r8.s64 + 1567;
	// addi r5,r5,799
	ctx.r5.s64 = ctx.r5.s64 + 799;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r8,31
	ctx.r8.s64 = ctx.r8.s64 + 31;
	// rlwinm r31,r8,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r3,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// lwzx r5,r5,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lwzx r5,r31,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// add r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 + ctx.r5.u64;
	// srawi r3,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 16;
	// stb r3,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r3.u8);
	// lbz r8,9(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// lbz r5,10(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// addi r3,r5,31
	ctx.r3.s64 = ctx.r5.s64 + 31;
	// rlwinm r5,r3,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r8,799
	ctx.r3.s64 = ctx.r8.s64 + 799;
	// lbzu r8,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addi r8,r8,1567
	ctx.r8.s64 = ctx.r8.s64 + 1567;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r5,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwzx r3,r3,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 + ctx.r5.u64;
	// srawi r3,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 16;
	// stb r3,1(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1, ctx.r3.u8);
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// lbz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// lbz r8,6(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// addi r8,r8,31
	ctx.r8.s64 = ctx.r8.s64 + 31;
	// rlwinm r31,r8,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r3,5(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// addi r5,r5,1567
	ctx.r5.s64 = ctx.r5.s64 + 1567;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r8,799
	ctx.r8.s64 = ctx.r8.s64 + 799;
	// lwzx r5,r31,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// rlwinm r31,r8,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r3,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// lwzx r3,r31,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 + ctx.r5.u64;
	// srawi r3,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 16;
	// stb r3,1(r7)
	PPC_STORE_U8(ctx.r7.u32 + 1, ctx.r3.u8);
	// lbz r5,9(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 9);
	// lbz r3,10(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 10);
	// addi r3,r3,31
	ctx.r3.s64 = ctx.r3.s64 + 31;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// addi r31,r5,799
	ctx.r31.s64 = ctx.r5.s64 + 799;
	// addi r8,r8,1567
	ctx.r8.s64 = ctx.r8.s64 + 1567;
	// lwzx r5,r3,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r31,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwzx r3,r3,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 + ctx.r5.u64;
	// srawi r3,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 16;
	// stbu r3,2(r7)
	ea = 2 + ctx.r7.u32;
	PPC_STORE_U8(ea, ctx.r3.u8);
	ctx.r7.u32 = ea;
	// lwz r8,14476(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14476);
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82e8ce68
	if (ctx.cr6.lt) goto loc_82E8CE68;
loc_82E8CF84:
	// lwz r11,14528(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14528);
	// add r4,r22,r4
	ctx.r4.u64 = ctx.r22.u64 + ctx.r4.u64;
	// add r27,r23,r27
	ctx.r27.u64 = ctx.r23.u64 + ctx.r27.u64;
	// add r24,r11,r24
	ctx.r24.u64 = ctx.r11.u64 + ctx.r24.u64;
	// add r26,r23,r26
	ctx.r26.u64 = ctx.r23.u64 + ctx.r26.u64;
	// bdnz 0x82e8cd28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82E8CD28;
loc_82E8CF9C:
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8CFA0"))) PPC_WEAK_FUNC(sub_82E8CFA0);
PPC_FUNC_IMPL(__imp__sub_82E8CFA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7654
	ctx.lr = 0x82E8CFA8;
	__savegprlr_19(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// lwz r6,14628(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14628);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lwz r5,14524(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14524);
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// mullw r9,r6,r7
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// lwz r27,14504(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14504);
	// lwz r28,14500(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14500);
	// lwz r26,14508(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14508);
	// lwz r23,14688(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14688);
	// srawi r11,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 2;
	// subf r10,r7,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r7.s64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// lwz r8,14532(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14532);
	// mullw r7,r5,r7
	ctx.r7.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r7,r27,r11
	ctx.r7.u64 = ctx.r27.u64 + ctx.r11.u64;
	// add r9,r28,r9
	ctx.r9.u64 = ctx.r28.u64 + ctx.r9.u64;
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// add r21,r8,r3
	ctx.r21.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r4,r9,r4
	ctx.r4.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r23,r7,r25
	ctx.r23.u64 = ctx.r7.u64 + ctx.r25.u64;
	// add r22,r11,r24
	ctx.r22.u64 = ctx.r11.u64 + ctx.r24.u64;
	// beq cr6,0x82e8d0c8
	if (ctx.cr6.eq) goto loc_82E8D0C8;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,14476(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14476);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82f1cc40
	ctx.lr = 0x82E8D034;
	sub_82F1CC40(ctx, base);
	// lwz r11,14516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14516);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r7,14524(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14524);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r8,14680(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14680);
	// stb r4,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r4.u8);
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r4,r21,1
	ctx.r4.s64 = ctx.r21.s64 + 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r3,r21,3
	ctx.r3.s64 = ctx.r21.s64 + 3;
	// lwz r28,14512(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14512);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// bl 0x82f1b140
	ctx.lr = 0x82E8D078;
	sub_82F1B140(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r10.u8);
	// lwz r7,14524(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14524);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// lwz r8,14680(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14680);
	// add r11,r7,r21
	ctx.r11.u64 = ctx.r7.u64 + ctx.r21.u64;
	// lwz r29,14516(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14516);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// lwz r31,14512(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14512);
	// add r6,r8,r22
	ctx.r6.u64 = ctx.r8.u64 + ctx.r22.u64;
	// add r5,r8,r23
	ctx.r5.u64 = ctx.r8.u64 + ctx.r23.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r11,3
	ctx.r3.s64 = ctx.r11.s64 + 3;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// bl 0x82f1b140
	ctx.lr = 0x82E8D0C0;
	sub_82F1B140(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82fa76a4
	__restgprlr_19(ctx, base);
	return;
loc_82E8D0C8:
	// srawi. r11,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r20,r5,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r19,r6,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// ble 0x82e8d240
	if (!ctx.cr0.gt) goto loc_82E8D240;
	// lwz r9,14476(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14476);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// srawi r28,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r28.s64 = ctx.r9.s32 >> 1;
loc_82E8D0E4:
	// lwz r11,14524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14524);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r9,14628(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14628);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// add r7,r11,r21
	ctx.r7.u64 = ctx.r11.u64 + ctx.r21.u64;
	// lwz r3,14680(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14680);
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r25,r11,r7
	ctx.r25.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r30,r3,r23
	ctx.r30.u64 = ctx.r3.u64 + ctx.r23.u64;
	// add r24,r11,r25
	ctx.r24.u64 = ctx.r11.u64 + ctx.r25.u64;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r3,r3,r22
	ctx.r3.u64 = ctx.r3.u64 + ctx.r22.u64;
	// ble cr6,0x82e8d228
	if (!ctx.cr6.gt) goto loc_82E8D228;
	// addi r26,r3,-1
	ctx.r26.s64 = ctx.r3.s64 + -1;
	// addi r27,r30,-1
	ctx.r27.s64 = ctx.r30.s64 + -1;
	// addi r29,r9,-1
	ctx.r29.s64 = ctx.r9.s64 + -1;
	// addi r30,r5,-1
	ctx.r30.s64 = ctx.r5.s64 + -1;
	// addi r3,r8,-1
	ctx.r3.s64 = ctx.r8.s64 + -1;
	// addi r11,r21,-3
	ctx.r11.s64 = ctx.r21.s64 + -3;
	// addi r5,r4,-1
	ctx.r5.s64 = ctx.r4.s64 + -1;
	// addi r8,r24,-3
	ctx.r8.s64 = ctx.r24.s64 + -3;
	// addi r9,r25,-3
	ctx.r9.s64 = ctx.r25.s64 + -3;
	// addi r7,r7,-3
	ctx.r7.s64 = ctx.r7.s64 + -3;
loc_82E8D144:
	// lbz r28,3(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stb r28,1(r5)
	PPC_STORE_U8(ctx.r5.u32 + 1, ctx.r28.u8);
	// lbz r28,3(r7)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r7.u32 + 3);
	// stb r28,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r28.u8);
	// lbz r28,3(r9)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r28,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r28.u8);
	// lbz r28,3(r8)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r8.u32 + 3);
	// stb r28,1(r29)
	PPC_STORE_U8(ctx.r29.u32 + 1, ctx.r28.u8);
	// lbz r28,5(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// stbu r28,2(r5)
	ea = 2 + ctx.r5.u32;
	PPC_STORE_U8(ea, ctx.r28.u8);
	ctx.r5.u32 = ea;
	// lbz r28,5(r7)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r7.u32 + 5);
	// stbu r28,2(r3)
	ea = 2 + ctx.r3.u32;
	PPC_STORE_U8(ea, ctx.r28.u8);
	ctx.r3.u32 = ea;
	// lbz r28,5(r9)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// stbu r28,2(r30)
	ea = 2 + ctx.r30.u32;
	PPC_STORE_U8(ea, ctx.r28.u8);
	ctx.r30.u32 = ea;
	// lbz r28,5(r8)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r8.u32 + 5);
	// stbu r28,2(r29)
	ea = 2 + ctx.r29.u32;
	PPC_STORE_U8(ea, ctx.r28.u8);
	ctx.r29.u32 = ea;
	// lbz r24,6(r9)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// lbz r28,6(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
	// rotlwi r28,r28,1
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r28.u32, 1);
	// add r28,r25,r28
	ctx.r28.u64 = ctx.r25.u64 + ctx.r28.u64;
	// add r28,r28,r24
	ctx.r28.u64 = ctx.r28.u64 + ctx.r24.u64;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// srawi r28,r28,2
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 2;
	// stbx r28,r6,r23
	PPC_STORE_U8(ctx.r6.u32 + ctx.r23.u32, ctx.r28.u8);
	// lbz r24,6(r7)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r7.u32 + 6);
	// lbz r28,6(r8)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r8.u32 + 6);
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
	// rotlwi r28,r28,1
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r28.u32, 1);
	// add r28,r25,r28
	ctx.r28.u64 = ctx.r25.u64 + ctx.r28.u64;
	// add r28,r28,r24
	ctx.r28.u64 = ctx.r28.u64 + ctx.r24.u64;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// srawi r28,r28,2
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 2;
	// stbu r28,1(r27)
	ea = 1 + ctx.r27.u32;
	PPC_STORE_U8(ea, ctx.r28.u8);
	ctx.r27.u32 = ea;
	// lbzu r25,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r25.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// lbzu r28,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r28.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// mr r24,r28
	ctx.r24.u64 = ctx.r28.u64;
	// rotlwi r28,r28,1
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r28.u32, 1);
	// add r28,r24,r28
	ctx.r28.u64 = ctx.r24.u64 + ctx.r28.u64;
	// add r28,r28,r25
	ctx.r28.u64 = ctx.r28.u64 + ctx.r25.u64;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// srawi r28,r28,2
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 2;
	// stbx r28,r6,r22
	PPC_STORE_U8(ctx.r6.u32 + ctx.r22.u32, ctx.r28.u8);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// lbzu r25,4(r7)
	ea = 4 + ctx.r7.u32;
	ctx.r25.u64 = PPC_LOAD_U8(ea);
	ctx.r7.u32 = ea;
	// lbzu r28,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r28.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// mr r24,r28
	ctx.r24.u64 = ctx.r28.u64;
	// rotlwi r28,r28,1
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r28.u32, 1);
	// add r28,r24,r28
	ctx.r28.u64 = ctx.r24.u64 + ctx.r28.u64;
	// add r28,r28,r25
	ctx.r28.u64 = ctx.r28.u64 + ctx.r25.u64;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// srawi r28,r28,2
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 2;
	// stbu r28,1(r26)
	ea = 1 + ctx.r26.u32;
	PPC_STORE_U8(ea, ctx.r28.u8);
	ctx.r26.u32 = ea;
	// lwz r28,14476(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14476);
	// srawi r28,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 1;
	// cmpw cr6,r6,r28
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82e8d144
	if (ctx.cr6.lt) goto loc_82E8D144;
loc_82E8D228:
	// lwz r11,14628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14628);
	// add r21,r20,r21
	ctx.r21.u64 = ctx.r20.u64 + ctx.r21.u64;
	// add r4,r19,r4
	ctx.r4.u64 = ctx.r19.u64 + ctx.r4.u64;
	// add r23,r11,r23
	ctx.r23.u64 = ctx.r11.u64 + ctx.r23.u64;
	// add r22,r11,r22
	ctx.r22.u64 = ctx.r11.u64 + ctx.r22.u64;
	// bdnz 0x82e8d0e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82E8D0E4;
loc_82E8D240:
	// clrlwi r11,r10,30
	ctx.r11.u64 = ctx.r10.u32 & 0x3;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82e8d2e4
	if (!ctx.cr6.eq) goto loc_82E8D2E4;
	// lwz r8,14476(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14476);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,14524(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14524);
	// lwz r11,14628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14628);
	// rlwinm r7,r8,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// add r10,r10,r21
	ctx.r10.u64 = ctx.r10.u64 + ctx.r21.u64;
	// add r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82e8d2e4
	if (!ctx.cr6.gt) goto loc_82E8D2E4;
	// addi r7,r8,-1
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// addi r11,r21,-3
	ctx.r11.s64 = ctx.r21.s64 + -3;
	// addi r8,r4,-1
	ctx.r8.s64 = ctx.r4.s64 + -1;
	// addi r10,r10,-3
	ctx.r10.s64 = ctx.r10.s64 + -3;
loc_82E8D280:
	// lbz r6,3(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stb r6,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r6.u8);
	// lbz r5,3(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// stb r5,1(r7)
	PPC_STORE_U8(ctx.r7.u32 + 1, ctx.r5.u8);
	// lbz r4,5(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// stbu r4,2(r8)
	ea = 2 + ctx.r8.u32;
	PPC_STORE_U8(ea, ctx.r4.u8);
	ctx.r8.u32 = ea;
	// lbz r3,5(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// stbu r3,2(r7)
	ea = 2 + ctx.r7.u32;
	PPC_STORE_U8(ea, ctx.r3.u8);
	ctx.r7.u32 = ea;
	// lbz r6,6(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r5,6(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// addi r4,r6,1
	ctx.r4.s64 = ctx.r6.s64 + 1;
	// srawi r3,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 1;
	// stbx r3,r9,r23
	PPC_STORE_U8(ctx.r9.u32 + ctx.r23.u32, ctx.r3.u8);
	// lbzu r5,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r5.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// lbzu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// addi r5,r6,1
	ctx.r5.s64 = ctx.r6.s64 + 1;
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// stbx r4,r9,r22
	PPC_STORE_U8(ctx.r9.u32 + ctx.r22.u32, ctx.r4.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r6,14476(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14476);
	// srawi r5,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 1;
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82e8d280
	if (ctx.cr6.lt) goto loc_82E8D280;
loc_82E8D2E4:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82fa76a4
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8D2EC"))) PPC_WEAK_FUNC(sub_82E8D2EC);
PPC_FUNC_IMPL(__imp__sub_82E8D2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8D2F0"))) PPC_WEAK_FUNC(sub_82E8D2F0);
PPC_FUNC_IMPL(__imp__sub_82E8D2F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82E8D2F8;
	__savegprlr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r23,14628(r9)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14628);
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r5,14524(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14524);
	// mullw r10,r23,r7
	ctx.r10.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r7.s32);
	// lwz r9,14532(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14532);
	// lwz r29,14504(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14504);
	// lwz r26,14508(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14508);
	// lwz r24,14684(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14684);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// subf r25,r7,r8
	ctx.r25.s64 = ctx.r8.s64 - ctx.r7.s64;
	// lwz r7,14500(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14500);
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// srawi r11,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 2;
	// mullw r8,r5,r30
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r30.s32);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r8,r7,r10
	ctx.r8.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r10,r29,r11
	ctx.r10.u64 = ctx.r29.u64 + ctx.r11.u64;
	// srawi r7,r23,1
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r23.s32 >> 1;
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// add r29,r9,r3
	ctx.r29.u64 = ctx.r9.u64 + ctx.r3.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addze r24,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r24.s64 = temp.s64;
	// add r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r27,r10,r27
	ctx.r27.u64 = ctx.r10.u64 + ctx.r27.u64;
	// add r26,r11,r6
	ctx.r26.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r3,r23,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// beq cr6,0x82e8d414
	if (ctx.cr6.eq) goto loc_82E8D414;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,14476(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14476);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// lwz r6,14628(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14628);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f1cc40
	ctx.lr = 0x82E8D394;
	sub_82F1CC40(ctx, base);
	// lwz r10,14688(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14688);
	// lwz r8,14680(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14680);
	// li r9,4
	ctx.r9.s64 = 4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r7,14524(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14524);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r3,r29,1
	ctx.r3.s64 = ctx.r29.s64 + 1;
	// beq cr6,0x82e8d3ec
	if (ctx.cr6.eq) goto loc_82E8D3EC;
	// lwz r11,14516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14516);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r25,14512(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14512);
	// stb r4,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r4.u8);
	// addi r4,r29,3
	ctx.r4.s64 = ctx.r29.s64 + 3;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// bl 0x82f1b140
	ctx.lr = 0x82E8D3E4;
	sub_82F1B140(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
loc_82E8D3EC:
	// lwz r4,14484(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14484);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// addi r4,r29,3
	ctx.r4.s64 = ctx.r29.s64 + 3;
	// bl 0x82f1cce8
	ctx.lr = 0x82E8D40C;
	sub_82F1CCE8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
loc_82E8D414:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x82e8d4d8
	if (!ctx.cr6.gt) goto loc_82E8D4D8;
	// addi r11,r25,-1
	ctx.r11.s64 = ctx.r25.s64 + -1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82E8D42C:
	// lwz r9,14524(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14524);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,14628(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14628);
	// lwz r6,14484(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14484);
	// add r7,r9,r29
	ctx.r7.u64 = ctx.r9.u64 + ctx.r29.u64;
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82e8d470
	if (!ctx.cr6.gt) goto loc_82E8D470;
	// addi r10,r29,-1
	ctx.r10.s64 = ctx.r29.s64 + -1;
loc_82E8D450:
	// lbz r9,2(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// stbx r9,r11,r27
	PPC_STORE_U8(ctx.r11.u32 + ctx.r27.u32, ctx.r9.u8);
	// lbzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbx r9,r11,r26
	PPC_STORE_U8(ctx.r11.u32 + ctx.r26.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r6,14484(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14484);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82e8d450
	if (ctx.cr6.lt) goto loc_82E8D450;
loc_82E8D470:
	// lwz r10,14476(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14476);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82e8d4c0
	if (!ctx.cr6.gt) goto loc_82E8D4C0;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r9,r7,-2
	ctx.r9.s64 = ctx.r7.s64 + -2;
	// addi r6,r4,1
	ctx.r6.s64 = ctx.r4.s64 + 1;
	// addi r10,r29,-2
	ctx.r10.s64 = ctx.r29.s64 + -2;
loc_82E8D490:
	// lbz r7,2(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// stbx r7,r11,r4
	PPC_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r7.u8);
	// lbzu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbx r7,r6,r11
	PPC_STORE_U8(ctx.r6.u32 + ctx.r11.u32, ctx.r7.u8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lbz r5,2(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r5,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r5.u8);
	// lbzu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// stbu r7,2(r8)
	ea = 2 + ctx.r8.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r8.u32 = ea;
	// lwz r7,14476(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14476);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82e8d490
	if (ctx.cr6.lt) goto loc_82E8D490;
loc_82E8D4C0:
	// lwz r11,14528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14528);
	// add r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r27,r24,r27
	ctx.r27.u64 = ctx.r24.u64 + ctx.r27.u64;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r26,r24,r26
	ctx.r26.u64 = ctx.r24.u64 + ctx.r26.u64;
	// bdnz 0x82e8d42c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82E8D42C;
loc_82E8D4D8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8D4E0"))) PPC_WEAK_FUNC(sub_82E8D4E0);
PPC_FUNC_IMPL(__imp__sub_82E8D4E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,16729
	ctx.r11.s64 = 1096351744;
	// lis r8,22101
	ctx.r8.s64 = 1448411136;
	// ori r10,r11,21846
	ctx.r10.u64 = ctx.r11.u64 | 21846;
	// lis r7,12338
	ctx.r7.s64 = 808583168;
	// ori r30,r8,22857
	ctx.r30.u64 = ctx.r8.u64 | 22857;
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// ori r4,r7,13385
	ctx.r4.u64 = ctx.r7.u64 | 13385;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82e8d9fc
	if (ctx.cr6.gt) goto loc_82E8D9FC;
	// beq cr6,0x82e8d980
	if (ctx.cr6.eq) goto loc_82E8D980;
	// lis r10,12849
	ctx.r10.s64 = 842072064;
	// ori r10,r10,22094
	ctx.r10.u64 = ctx.r10.u64 | 22094;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82e8d7c0
	if (ctx.cr6.gt) goto loc_82E8D7C0;
	// beq cr6,0x82e8d72c
	if (ctx.cr6.eq) goto loc_82E8D72C;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x82e8d6a8
	if (ctx.cr6.gt) goto loc_82E8D6A8;
	// beq cr6,0x82e8dc60
	if (ctx.cr6.eq) goto loc_82E8DC60;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8d544
	if (ctx.cr6.eq) goto loc_82E8D544;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82e8db38
	if (!ctx.cr6.eq) goto loc_82E8DB38;
loc_82E8D544:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,22101
	ctx.r10.s64 = 1448411136;
	// ori r8,r10,22857
	ctx.r8.u64 = ctx.r10.u64 | 22857;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82e8d574
	if (ctx.cr6.eq) goto loc_82E8D574;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82e8d574
	if (ctx.cr6.eq) goto loc_82E8D574;
	// lis r10,12849
	ctx.r10.s64 = 842072064;
	// ori r8,r10,22105
	ctx.r8.u64 = ctx.r10.u64 | 22105;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82e8db38
	if (!ctx.cr6.eq) goto loc_82E8DB38;
loc_82E8D574:
	// lhz r11,14(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 14);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bne cr6,0x82e8d5c4
	if (!ctx.cr6.eq) goto loc_82E8D5C4;
	// lwz r11,14652(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14652);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82e8d5a8
	if (!ctx.cr6.eq) goto loc_82E8D5A8;
	// lis r11,-32117
	ctx.r11.s64 = -2104819712;
	// addi r10,r11,9280
	ctx.r10.s64 = ctx.r11.s64 + 9280;
	// stw r10,14708(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14708, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82E8D5A8:
	// lis r11,-32023
	ctx.r11.s64 = -2098659328;
	// addi r10,r11,-14224
	ctx.r10.s64 = ctx.r11.s64 + -14224;
	// stw r10,14708(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14708, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82E8D5C4:
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bne cr6,0x82e8d610
	if (!ctx.cr6.eq) goto loc_82E8D610;
	// lwz r11,14652(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14652);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82e8d5f4
	if (!ctx.cr6.eq) goto loc_82E8D5F4;
	// lis r11,-32117
	ctx.r11.s64 = -2104819712;
	// addi r10,r11,9280
	ctx.r10.s64 = ctx.r11.s64 + 9280;
	// stw r10,14708(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14708, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82E8D5F4:
	// lis r11,-32117
	ctx.r11.s64 = -2104819712;
	// addi r10,r11,9280
	ctx.r10.s64 = ctx.r11.s64 + 9280;
	// stw r10,14708(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14708, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82E8D610:
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x82e8d65c
	if (!ctx.cr6.eq) goto loc_82E8D65C;
	// lwz r11,14652(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14652);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82e8d640
	if (!ctx.cr6.eq) goto loc_82E8D640;
	// lis r11,-32117
	ctx.r11.s64 = -2104819712;
	// addi r10,r11,9280
	ctx.r10.s64 = ctx.r11.s64 + 9280;
	// stw r10,14708(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14708, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82E8D640:
	// lis r11,-32117
	ctx.r11.s64 = -2104819712;
	// addi r10,r11,9280
	ctx.r10.s64 = ctx.r11.s64 + 9280;
	// stw r10,14708(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14708, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82E8D65C:
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x82e8db38
	if (!ctx.cr6.eq) goto loc_82E8DB38;
	// lwz r11,14652(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14652);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82e8d68c
	if (!ctx.cr6.eq) goto loc_82E8D68C;
	// lis r11,-32117
	ctx.r11.s64 = -2104819712;
	// addi r10,r11,9280
	ctx.r10.s64 = ctx.r11.s64 + 9280;
	// stw r10,14708(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14708, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82E8D68C:
	// lis r11,-32117
	ctx.r11.s64 = -2104819712;
	// addi r10,r11,9280
	ctx.r10.s64 = ctx.r11.s64 + 9280;
	// stw r10,14708(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14708, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82E8D6A8:
	// lis r10,12593
	ctx.r10.s64 = 825294848;
	// ori r9,r10,22094
	ctx.r9.u64 = ctx.r10.u64 | 22094;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82e8db38
	if (!ctx.cr6.eq) goto loc_82E8DB38;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,22101
	ctx.r10.s64 = 1448411136;
	// ori r9,r10,22857
	ctx.r9.u64 = ctx.r10.u64 | 22857;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82e8d6e8
	if (ctx.cr6.eq) goto loc_82E8D6E8;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82e8d6e8
	if (ctx.cr6.eq) goto loc_82E8D6E8;
	// lis r10,12849
	ctx.r10.s64 = 842072064;
	// ori r9,r10,22105
	ctx.r9.u64 = ctx.r10.u64 | 22105;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82e8db38
	if (!ctx.cr6.eq) goto loc_82E8DB38;
loc_82E8D6E8:
	// lwz r11,14652(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14652);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82e8d710
	if (!ctx.cr6.eq) goto loc_82E8D710;
	// lis r11,-32117
	ctx.r11.s64 = -2104819712;
	// addi r10,r11,9280
	ctx.r10.s64 = ctx.r11.s64 + 9280;
	// stw r10,14712(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14712, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82E8D710:
	// lis r11,-32117
	ctx.r11.s64 = -2104819712;
	// addi r10,r11,9280
	ctx.r10.s64 = ctx.r11.s64 + 9280;
	// stw r10,14712(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14712, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82E8D72C:
	// lwz r11,14612(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14612);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e8d76c
	if (ctx.cr6.eq) goto loc_82E8D76C;
	// lwz r9,14512(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14512);
	// lwz r8,14600(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14600);
	// lwz r7,14516(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14516);
	// mullw r11,r8,r9
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// lwz r10,14596(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14596);
	// srawi r6,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 1;
	// mullw r8,r7,r9
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// addze r9,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r9.s64 = temp.s64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r5,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r5.u32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r4,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r4.u32);
loc_82E8D76C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,22101
	ctx.r10.s64 = 1448411136;
	// ori r9,r10,22857
	ctx.r9.u64 = ctx.r10.u64 | 22857;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82e8d7a4
	if (ctx.cr6.eq) goto loc_82E8D7A4;
	// lis r10,12338
	ctx.r10.s64 = 808583168;
	// ori r9,r10,13385
	ctx.r9.u64 = ctx.r10.u64 | 13385;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82e8d7a4
	if (ctx.cr6.eq) goto loc_82E8D7A4;
	// lis r10,12849
	ctx.r10.s64 = 842072064;
	// ori r9,r10,22105
	ctx.r9.u64 = ctx.r10.u64 | 22105;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82e8db38
	if (!ctx.cr6.eq) goto loc_82E8DB38;
loc_82E8D7A4:
	// lis r11,-32117
	ctx.r11.s64 = -2104819712;
	// addi r10,r11,9280
	ctx.r10.s64 = ctx.r11.s64 + 9280;
	// stw r10,14712(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14712, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82E8D7C0:
	// lis r10,12849
	ctx.r10.s64 = 842072064;
	// ori r10,r10,22105
	ctx.r10.u64 = ctx.r10.u64 | 22105;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82e8d8d0
	if (ctx.cr6.eq) goto loc_82E8D8D0;
	// lis r9,12889
	ctx.r9.s64 = 844693504;
	// ori r8,r9,21849
	ctx.r8.u64 = ctx.r9.u64 | 21849;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82e8d85c
	if (ctx.cr6.eq) goto loc_82E8D85C;
	// lis r10,14677
	ctx.r10.s64 = 961871872;
	// ori r9,r10,22105
	ctx.r9.u64 = ctx.r10.u64 | 22105;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82e8db38
	if (!ctx.cr6.eq) goto loc_82E8DB38;
	// lwz r11,14652(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14652);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82e8d818
	if (!ctx.cr6.eq) goto loc_82E8D818;
	// lis r11,-32117
	ctx.r11.s64 = -2104819712;
	// addi r10,r11,9280
	ctx.r10.s64 = ctx.r11.s64 + 9280;
	// stw r10,14712(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14712, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82E8D818:
	// lwz r11,14612(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14612);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e8d840
	if (ctx.cr6.eq) goto loc_82E8D840;
	// lis r11,-32117
	ctx.r11.s64 = -2104819712;
	// addi r10,r11,9280
	ctx.r10.s64 = ctx.r11.s64 + 9280;
	// stw r10,14712(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14712, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82E8D840:
	// lis r11,-32117
	ctx.r11.s64 = -2104819712;
	// addi r10,r11,9280
	ctx.r10.s64 = ctx.r11.s64 + 9280;
	// stw r10,14712(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14712, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82E8D85C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r9,22101
	ctx.r9.s64 = 1448411136;
	// ori r8,r9,22857
	ctx.r8.u64 = ctx.r9.u64 | 22857;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82e8d88c
	if (ctx.cr6.eq) goto loc_82E8D88C;
	// lis r9,12338
	ctx.r9.s64 = 808583168;
	// ori r8,r9,13385
	ctx.r8.u64 = ctx.r9.u64 | 13385;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82e8d88c
	if (ctx.cr6.eq) goto loc_82E8D88C;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82e8db38
	if (!ctx.cr6.eq) goto loc_82E8DB38;
loc_82E8D88C:
	// lwz r11,14652(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14652);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82e8d8b4
	if (!ctx.cr6.eq) goto loc_82E8D8B4;
	// lis r11,-32117
	ctx.r11.s64 = -2104819712;
	// addi r10,r11,9280
	ctx.r10.s64 = ctx.r11.s64 + 9280;
	// stw r10,14708(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14708, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82E8D8B4:
	// lis r11,-32023
	ctx.r11.s64 = -2098659328;
	// addi r10,r11,-11536
	ctx.r10.s64 = ctx.r11.s64 + -11536;
	// stw r10,14708(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14708, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82E8D8D0:
	// lwz r4,14612(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14612);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82e8d934
	if (ctx.cr6.eq) goto loc_82E8D934;
	// lwz r11,14512(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14512);
	// lwz r10,14600(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14600);
	// lwz r9,14516(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14516);
	// mullw r8,r10,r11
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// lwz r7,14596(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14596);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// srawi r6,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 2;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r10,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r5,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 1;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addze r9,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r6,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 2;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addze r6,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r6.s64 = temp.s64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// add r7,r5,r11
	ctx.r7.u64 = ctx.r5.u64 + ctx.r11.u64;
	// stw r8,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r8.u32);
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r7,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r7.u32);
	// stw r6,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r6.u32);
loc_82E8D934:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,22101
	ctx.r10.s64 = 1448411136;
	// ori r9,r10,22857
	ctx.r9.u64 = ctx.r10.u64 | 22857;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82e8d95c
	if (ctx.cr6.eq) goto loc_82E8D95C;
	// lis r10,12338
	ctx.r10.s64 = 808583168;
	// ori r9,r10,13385
	ctx.r9.u64 = ctx.r10.u64 | 13385;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82e8db38
	if (!ctx.cr6.eq) goto loc_82E8DB38;
loc_82E8D95C:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82e8dd10
	if (ctx.cr6.eq) goto loc_82E8DD10;
	// lis r11,-32023
	ctx.r11.s64 = -2098659328;
	// addi r10,r11,-14464
	ctx.r10.s64 = ctx.r11.s64 + -14464;
	// stw r10,14712(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14712, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82E8D980:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,22101
	ctx.r10.s64 = 1448411136;
	// ori r9,r10,22857
	ctx.r9.u64 = ctx.r10.u64 | 22857;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82e8d9b8
	if (ctx.cr6.eq) goto loc_82E8D9B8;
	// lis r10,12338
	ctx.r10.s64 = 808583168;
	// ori r9,r10,13385
	ctx.r9.u64 = ctx.r10.u64 | 13385;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82e8d9b8
	if (ctx.cr6.eq) goto loc_82E8D9B8;
	// lis r10,12849
	ctx.r10.s64 = 842072064;
	// ori r9,r10,22105
	ctx.r9.u64 = ctx.r10.u64 | 22105;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82e8db38
	if (!ctx.cr6.eq) goto loc_82E8DB38;
loc_82E8D9B8:
	// lwz r11,14652(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14652);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82e8d9e0
	if (!ctx.cr6.eq) goto loc_82E8D9E0;
	// lis r11,-32117
	ctx.r11.s64 = -2104819712;
	// addi r10,r11,9280
	ctx.r10.s64 = ctx.r11.s64 + 9280;
	// stw r10,14708(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14708, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82E8D9E0:
	// lis r11,-32117
	ctx.r11.s64 = -2104819712;
	// addi r10,r11,9280
	ctx.r10.s64 = ctx.r11.s64 + 9280;
	// stw r10,14708(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14708, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82E8D9FC:
	// lis r10,21849
	ctx.r10.s64 = 1431896064;
	// ori r10,r10,22105
	ctx.r10.u64 = ctx.r10.u64 | 22105;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82e8dbc4
	if (ctx.cr6.gt) goto loc_82E8DBC4;
	// beq cr6,0x82e8db48
	if (ctx.cr6.eq) goto loc_82E8DB48;
	// lis r10,20529
	ctx.r10.s64 = 1345388544;
	// ori r9,r10,13401
	ctx.r9.u64 = ctx.r10.u64 | 13401;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82e8daf4
	if (ctx.cr6.eq) goto loc_82E8DAF4;
	// lis r10,21553
	ctx.r10.s64 = 1412497408;
	// ori r9,r10,13401
	ctx.r9.u64 = ctx.r10.u64 | 13401;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82e8daa0
	if (ctx.cr6.eq) goto loc_82E8DAA0;
	// lis r10,21554
	ctx.r10.s64 = 1412562944;
	// ori r9,r10,13401
	ctx.r9.u64 = ctx.r10.u64 | 13401;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82e8db38
	if (!ctx.cr6.eq) goto loc_82E8DB38;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,22101
	ctx.r10.s64 = 1448411136;
	// ori r9,r10,22857
	ctx.r9.u64 = ctx.r10.u64 | 22857;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82e8da78
	if (ctx.cr6.eq) goto loc_82E8DA78;
	// lis r10,12338
	ctx.r10.s64 = 808583168;
	// ori r9,r10,13385
	ctx.r9.u64 = ctx.r10.u64 | 13385;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82e8da78
	if (ctx.cr6.eq) goto loc_82E8DA78;
	// lis r10,12849
	ctx.r10.s64 = 842072064;
	// ori r9,r10,22105
	ctx.r9.u64 = ctx.r10.u64 | 22105;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82e8db38
	if (!ctx.cr6.eq) goto loc_82E8DB38;
loc_82E8DA78:
	// lwz r11,14652(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14652);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82e8db38
	if (ctx.cr6.eq) goto loc_82E8DB38;
	// lis r11,-32117
	ctx.r11.s64 = -2104819712;
	// addi r10,r11,9280
	ctx.r10.s64 = ctx.r11.s64 + 9280;
	// stw r10,14708(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14708, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82E8DAA0:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,22101
	ctx.r10.s64 = 1448411136;
	// ori r9,r10,22857
	ctx.r9.u64 = ctx.r10.u64 | 22857;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82e8dad8
	if (ctx.cr6.eq) goto loc_82E8DAD8;
	// lis r10,12338
	ctx.r10.s64 = 808583168;
	// ori r9,r10,13385
	ctx.r9.u64 = ctx.r10.u64 | 13385;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82e8dad8
	if (ctx.cr6.eq) goto loc_82E8DAD8;
	// lis r10,12849
	ctx.r10.s64 = 842072064;
	// ori r9,r10,22105
	ctx.r9.u64 = ctx.r10.u64 | 22105;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82e8db38
	if (!ctx.cr6.eq) goto loc_82E8DB38;
loc_82E8DAD8:
	// lis r11,-32023
	ctx.r11.s64 = -2098659328;
	// addi r10,r11,-14880
	ctx.r10.s64 = ctx.r11.s64 + -14880;
	// stw r10,14708(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14708, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82E8DAF4:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,22101
	ctx.r10.s64 = 1448411136;
	// ori r9,r10,22857
	ctx.r9.u64 = ctx.r10.u64 | 22857;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82e8db2c
	if (ctx.cr6.eq) goto loc_82E8DB2C;
	// lis r10,12338
	ctx.r10.s64 = 808583168;
	// ori r9,r10,13385
	ctx.r9.u64 = ctx.r10.u64 | 13385;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82e8db2c
	if (ctx.cr6.eq) goto loc_82E8DB2C;
	// lis r10,12849
	ctx.r10.s64 = 842072064;
	// ori r9,r10,22105
	ctx.r9.u64 = ctx.r10.u64 | 22105;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82e8db38
	if (!ctx.cr6.eq) goto loc_82E8DB38;
loc_82E8DB2C:
	// lwz r11,14652(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14652);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82e8dad8
	if (!ctx.cr6.eq) goto loc_82E8DAD8;
loc_82E8DB38:
	// li r3,5
	ctx.r3.s64 = 5;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82E8DB48:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,22101
	ctx.r10.s64 = 1448411136;
	// ori r9,r10,22857
	ctx.r9.u64 = ctx.r10.u64 | 22857;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82e8db80
	if (ctx.cr6.eq) goto loc_82E8DB80;
	// lis r10,12338
	ctx.r10.s64 = 808583168;
	// ori r9,r10,13385
	ctx.r9.u64 = ctx.r10.u64 | 13385;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82e8db80
	if (ctx.cr6.eq) goto loc_82E8DB80;
	// lis r10,12849
	ctx.r10.s64 = 842072064;
	// ori r9,r10,22105
	ctx.r9.u64 = ctx.r10.u64 | 22105;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82e8db38
	if (!ctx.cr6.eq) goto loc_82E8DB38;
loc_82E8DB80:
	// lwz r11,14652(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14652);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82e8dba8
	if (!ctx.cr6.eq) goto loc_82E8DBA8;
	// lis r11,-32023
	ctx.r11.s64 = -2098659328;
	// addi r10,r11,-12384
	ctx.r10.s64 = ctx.r11.s64 + -12384;
	// stw r10,14708(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14708, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82E8DBA8:
	// lis r11,-32117
	ctx.r11.s64 = -2104819712;
	// addi r10,r11,9280
	ctx.r10.s64 = ctx.r11.s64 + 9280;
	// stw r10,14708(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14708, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82E8DBC4:
	// lis r10,22068
	ctx.r10.s64 = 1446248448;
	// ori r9,r10,12592
	ctx.r9.u64 = ctx.r10.u64 | 12592;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82e8dd2c
	if (ctx.cr6.eq) goto loc_82E8DD2C;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82e8dc60
	if (ctx.cr6.eq) goto loc_82E8DC60;
	// lis r10,22870
	ctx.r10.s64 = 1498808320;
	// ori r9,r10,22869
	ctx.r9.u64 = ctx.r10.u64 | 22869;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82e8db38
	if (!ctx.cr6.eq) goto loc_82E8DB38;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82e8dc1c
	if (ctx.cr6.eq) goto loc_82E8DC1C;
	// lis r10,12338
	ctx.r10.s64 = 808583168;
	// ori r9,r10,13385
	ctx.r9.u64 = ctx.r10.u64 | 13385;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82e8dc1c
	if (ctx.cr6.eq) goto loc_82E8DC1C;
	// lis r10,12849
	ctx.r10.s64 = 842072064;
	// ori r9,r10,22105
	ctx.r9.u64 = ctx.r10.u64 | 22105;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82e8db38
	if (!ctx.cr6.eq) goto loc_82E8DB38;
loc_82E8DC1C:
	// lwz r11,14652(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14652);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82e8dc44
	if (!ctx.cr6.eq) goto loc_82E8DC44;
	// lis r11,-32117
	ctx.r11.s64 = -2104819712;
	// addi r10,r11,9280
	ctx.r10.s64 = ctx.r11.s64 + 9280;
	// stw r10,14708(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14708, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82E8DC44:
	// lis r11,-32117
	ctx.r11.s64 = -2104819712;
	// addi r10,r11,9280
	ctx.r10.s64 = ctx.r11.s64 + 9280;
	// stw r10,14708(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14708, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82E8DC60:
	// lwz r31,14612(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14612);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82e8dcc4
	if (ctx.cr6.eq) goto loc_82E8DCC4;
	// lwz r11,14512(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14512);
	// lwz r10,14600(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14600);
	// lwz r9,14516(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14516);
	// mullw r7,r10,r11
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// lwz r8,14596(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14596);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// srawi r6,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 2;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r10,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r5,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 1;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addze r9,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r5,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 2;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addze r5,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r5.s64 = temp.s64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// add r7,r6,r11
	ctx.r7.u64 = ctx.r6.u64 + ctx.r11.u64;
	// stw r8,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r8.u32);
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r7,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r7.u32);
	// stw r6,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r6.u32);
loc_82E8DCC4:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82e8dcec
	if (ctx.cr6.eq) goto loc_82E8DCEC;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82e8dcec
	if (ctx.cr6.eq) goto loc_82E8DCEC;
	// lis r10,12849
	ctx.r10.s64 = 842072064;
	// ori r9,r10,22105
	ctx.r9.u64 = ctx.r10.u64 | 22105;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82e8db38
	if (!ctx.cr6.eq) goto loc_82E8DB38;
loc_82E8DCEC:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82e8dd10
	if (ctx.cr6.eq) goto loc_82E8DD10;
	// lis r11,-32023
	ctx.r11.s64 = -2098659328;
	// addi r10,r11,-14464
	ctx.r10.s64 = ctx.r11.s64 + -14464;
	// stw r10,14712(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14712, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82E8DD10:
	// lis r11,-32014
	ctx.r11.s64 = -2098069504;
	// addi r10,r11,-13552
	ctx.r10.s64 = ctx.r11.s64 + -13552;
	// stw r10,14712(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14712, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82E8DD2C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,22101
	ctx.r10.s64 = 1448411136;
	// ori r9,r10,22857
	ctx.r9.u64 = ctx.r10.u64 | 22857;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82e8dd64
	if (ctx.cr6.eq) goto loc_82E8DD64;
	// lis r10,12338
	ctx.r10.s64 = 808583168;
	// ori r9,r10,13385
	ctx.r9.u64 = ctx.r10.u64 | 13385;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82e8dd64
	if (ctx.cr6.eq) goto loc_82E8DD64;
	// lis r10,12849
	ctx.r10.s64 = 842072064;
	// ori r9,r10,22105
	ctx.r9.u64 = ctx.r10.u64 | 22105;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82e8db38
	if (!ctx.cr6.eq) goto loc_82E8DB38;
loc_82E8DD64:
	// lwz r11,14652(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14652);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82e8db38
	if (ctx.cr6.eq) goto loc_82E8DB38;
	// lis r11,-32117
	ctx.r11.s64 = -2104819712;
	// addi r10,r11,9280
	ctx.r10.s64 = ctx.r11.s64 + 9280;
	// stw r10,14708(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14708, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8DD8C"))) PPC_WEAK_FUNC(sub_82E8DD8C);
PPC_FUNC_IMPL(__imp__sub_82E8DD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8DD90"))) PPC_WEAK_FUNC(sub_82E8DD90);
PPC_FUNC_IMPL(__imp__sub_82E8DD90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82E8DD98;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r7,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r7.u64);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// std r8,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r8.u64);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e8e024
	if (ctx.cr6.eq) goto loc_82E8E024;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82e8e01c
	if (ctx.cr6.eq) goto loc_82E8E01C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82e8e01c
	if (ctx.cr6.eq) goto loc_82E8E01C;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82e8e01c
	if (ctx.cr6.eq) goto loc_82E8E01C;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r11,9356
	ctx.r11.s64 = 613154816;
	// stw r29,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r29.u32);
	// li r3,1064
	ctx.r3.s64 = 1064;
	// ori r30,r11,32768
	ctx.r30.u64 = ctx.r11.u64 | 32768;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82691410
	ctx.lr = 0x82E8DDF4;
	sub_82691410(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e8de10
	if (!ctx.cr6.eq) goto loc_82E8DE10;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_82E8DE10:
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,1064
	ctx.r3.s64 = 1064;
	// bl 0x82691410
	ctx.lr = 0x82E8DE20;
	sub_82691410(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e8de4c
	if (!ctx.cr6.eq) goto loc_82E8DE4C;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82691460
	ctx.lr = 0x82E8DE40;
	sub_82691460(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_82E8DE4C:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// li r5,40
	ctx.r5.s64 = 40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e8de70
	if (!ctx.cr6.eq) goto loc_82E8DE70;
	// lhz r10,14(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + 14);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bne cr6,0x82e8de70
	if (!ctx.cr6.eq) goto loc_82E8DE70;
	// li r5,1064
	ctx.r5.s64 = 1064;
	// b 0x82e8de7c
	goto loc_82E8DE7C;
loc_82E8DE70:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82e8de7c
	if (!ctx.cr6.eq) goto loc_82E8DE7C;
	// li r5,52
	ctx.r5.s64 = 52;
loc_82E8DE7C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82fa77c0
	ctx.lr = 0x82E8DE88;
	sub_82FA77C0(ctx, base);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// li r5,40
	ctx.r5.s64 = 40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e8deac
	if (!ctx.cr6.eq) goto loc_82E8DEAC;
	// lhz r10,14(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 14);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bne cr6,0x82e8deac
	if (!ctx.cr6.eq) goto loc_82E8DEAC;
	// li r5,1064
	ctx.r5.s64 = 1064;
	// b 0x82e8deb8
	goto loc_82E8DEB8;
loc_82E8DEAC:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82e8deb8
	if (!ctx.cr6.eq) goto loc_82E8DEB8;
	// li r5,52
	ctx.r5.s64 = 52;
loc_82E8DEB8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82fa77c0
	ctx.lr = 0x82E8DEC4;
	sub_82FA77C0(ctx, base);
	// stw r29,14548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14548, ctx.r29.u32);
	// addi r30,r31,14596
	ctx.r30.s64 = ctx.r31.s64 + 14596;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f1d6a8
	ctx.lr = 0x82E8DED8;
	sub_82F1D6A8(ctx, base);
	// cmpwi cr6,r26,4
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 4, ctx.xer);
	// stw r29,14464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14464, ctx.r29.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// beq cr6,0x82e8deec
	if (ctx.cr6.eq) goto loc_82E8DEEC;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82E8DEEC:
	// stw r11,14652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14652, ctx.r11.u32);
	// stw r29,14668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14668, ctx.r29.u32);
	// stw r29,14672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14672, ctx.r29.u32);
	// stw r29,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r29.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e8df48
	if (!ctx.cr6.eq) goto loc_82E8DF48;
	// lwz r11,14600(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14600);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e8df48
	if (!ctx.cr6.eq) goto loc_82E8DF48;
	// lwz r11,14604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14604);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e8df48
	if (!ctx.cr6.eq) goto loc_82E8DF48;
	// lwz r11,14608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14608);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e8df48
	if (!ctx.cr6.eq) goto loc_82E8DF48;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// stw r11,14604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14604, ctx.r11.u32);
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// stw r7,14608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14608, ctx.r7.u32);
loc_82E8DF48:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82e8df8c
	if (!ctx.cr6.eq) goto loc_82E8DF8C;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// xor r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// subf r6,r8,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r8.s64;
	// subf r5,r9,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r9.s64;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x82e8df8c
	if (!ctx.cr6.eq) goto loc_82E8DF8C;
	// stw r29,14612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14612, ctx.r29.u32);
	// b 0x82e8df94
	goto loc_82E8DF94;
loc_82E8DF8C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,14612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14612, ctx.r11.u32);
loc_82E8DF94:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8dfa8
	if (ctx.cr6.eq) goto loc_82E8DFA8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82e8dfc8
	if (!ctx.cr6.eq) goto loc_82E8DFC8;
loc_82E8DFA8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f1b7e8
	ctx.lr = 0x82E8DFB0;
	sub_82F1B7E8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82f1be58
	ctx.lr = 0x82E8DFBC;
	sub_82F1BE58(ctx, base);
	// stw r3,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e8e024
	if (!ctx.cr6.eq) goto loc_82E8E024;
loc_82E8DFC8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8c448
	ctx.lr = 0x82E8DFD0;
	sub_82E8C448(ctx, base);
	// stw r3,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e8e024
	if (!ctx.cr6.eq) goto loc_82E8E024;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f1bf78
	ctx.lr = 0x82E8DFE4;
	sub_82F1BF78(ctx, base);
	// stw r3,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e8e024
	if (!ctx.cr6.eq) goto loc_82E8E024;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f1d0e0
	ctx.lr = 0x82E8DFF8;
	sub_82F1D0E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8d4e0
	ctx.lr = 0x82E8E000;
	sub_82E8D4E0(ctx, base);
	// stw r3,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e8e024
	if (!ctx.cr6.eq) goto loc_82E8E024;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f1c9f0
	ctx.lr = 0x82E8E014;
	sub_82F1C9F0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_82E8E01C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_82E8E024:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8E02C"))) PPC_WEAK_FUNC(sub_82E8E02C);
PPC_FUNC_IMPL(__imp__sub_82E8E02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8E030"))) PPC_WEAK_FUNC(sub_82E8E030);
PPC_FUNC_IMPL(__imp__sub_82E8E030) {
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
	// bl 0x82a831b0
	ctx.lr = 0x82E8E048;
	sub_82A831B0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82a81490
	ctx.lr = 0x82E8E054;
	sub_82A81490(ctx, base);
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

__attribute__((alias("__imp__sub_82E8E068"))) PPC_WEAK_FUNC(sub_82E8E068);
PPC_FUNC_IMPL(__imp__sub_82E8E068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82E8E070;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82e8e0c0
	if (ctx.cr6.eq) goto loc_82E8E0C0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e8e0c0
	if (ctx.cr6.eq) goto loc_82E8E0C0;
	// lis r11,-32765
	ctx.r11.s64 = -2147287040;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// ori r30,r11,87
	ctx.r30.u64 = ctx.r11.u64 | 87;
loc_82E8E09C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8e180
	ctx.lr = 0x82E8E0A8;
	sub_82E8E180(ctx, base);
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x82e8e0b4
	if (!ctx.cr6.eq) goto loc_82E8E0B4;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
loc_82E8E0B4:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// bne 0x82e8e09c
	if (!ctx.cr0.eq) goto loc_82E8E09C;
loc_82E8E0C0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8E0CC"))) PPC_WEAK_FUNC(sub_82E8E0CC);
PPC_FUNC_IMPL(__imp__sub_82E8E0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8E0D0"))) PPC_WEAK_FUNC(sub_82E8E0D0);
PPC_FUNC_IMPL(__imp__sub_82E8E0D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82E8E0D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82e8e030
	ctx.lr = 0x82E8E0EC;
	sub_82E8E030(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82e8e108
	if (ctx.cr0.eq) goto loc_82E8E108;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82E8E104;
	sub_82FA77C0(ctx, base);
	// b 0x82e8e11c
	goto loc_82E8E11C;
loc_82E8E108:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82e8e11c
	if (ctx.cr6.eq) goto loc_82E8E11C;
	// lis r11,-32765
	ctx.r11.s64 = -2147287040;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82E8E11C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8E128"))) PPC_WEAK_FUNC(sub_82E8E128);
PPC_FUNC_IMPL(__imp__sub_82E8E128) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82e8e148
	if (ctx.cr6.lt) goto loc_82E8E148;
	// cmpwi cr6,r4,31
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 31, ctx.xer);
	// bgt cr6,0x82e8e148
	if (ctx.cr6.gt) goto loc_82E8E148;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,24600
	ctx.r11.s64 = ctx.r11.s64 + 24600;
	// lbzx r3,r4,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// blr 
	return;
loc_82E8E148:
	// cmpwi cr6,r4,64
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 64, ctx.xer);
	// blt cr6,0x82e8e16c
	if (ctx.cr6.lt) goto loc_82E8E16C;
	// cmpwi cr6,r4,73
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 73, ctx.xer);
	// bgt cr6,0x82e8e16c
	if (ctx.cr6.gt) goto loc_82E8E16C;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,24632
	ctx.r11.s64 = ctx.r11.s64 + 24632;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lbz r3,-64(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + -64);
	// blr 
	return;
loc_82E8E16C:
	// cmpwi cr6,r4,4095
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4095, ctx.xer);
	// li r3,8
	ctx.r3.s64 = 8;
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r3,32
	ctx.r3.s64 = 32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8E180"))) PPC_WEAK_FUNC(sub_82E8E180);
PPC_FUNC_IMPL(__imp__sub_82E8E180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82E8E188;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// bne cr6,0x82e8e1a8
	if (!ctx.cr6.eq) goto loc_82E8E1A8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e8e22c
	goto loc_82E8E22C;
loc_82E8E1A8:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,72
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 72, ctx.xer);
	// bgt cr6,0x82e8e2e0
	if (ctx.cr6.gt) goto loc_82E8E2E0;
	// beq cr6,0x82e8e2d8
	if (ctx.cr6.eq) goto loc_82E8E2D8;
	// cmpwi cr6,r11,65
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 65, ctx.xer);
	// bgt cr6,0x82e8e260
	if (ctx.cr6.gt) goto loc_82E8E260;
	// beq cr6,0x82e8e320
	if (ctx.cr6.eq) goto loc_82E8E320;
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// bgt cr6,0x82e8e248
	if (ctx.cr6.gt) goto loc_82E8E248;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bge cr6,0x82e8e220
	if (!ctx.cr6.lt) goto loc_82E8E220;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82e8e1fc
	if (ctx.cr6.lt) goto loc_82E8E1FC;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// ble cr6,0x82e8e220
	if (!ctx.cr6.gt) goto loc_82E8E220;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x82e8e234
	if (ctx.cr6.eq) goto loc_82E8E234;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// ble cr6,0x82e8e1fc
	if (!ctx.cr6.gt) goto loc_82E8E1FC;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// ble cr6,0x82e8e220
	if (!ctx.cr6.gt) goto loc_82E8E220;
loc_82E8E1FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8317a860
	ctx.lr = 0x82E8E204;
	sub_8317A860(ctx, base);
	// lis r11,-32766
	ctx.r11.s64 = -2147352576;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82e8e220
	if (!ctx.cr6.eq) goto loc_82E8E220;
	// lis r27,-32765
	ctx.r27.s64 = -2147287040;
	// ori r27,r27,87
	ctx.r27.u64 = ctx.r27.u64 | 87;
loc_82E8E220:
	// std r28,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r28.u64);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// std r28,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r28.u64);
loc_82E8E22C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_82E8E234:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e8e220
	if (ctx.cr6.eq) goto loc_82E8E220;
	// bl 0x82f1d790
	ctx.lr = 0x82E8E244;
	sub_82F1D790(ctx, base);
	// b 0x82e8e220
	goto loc_82E8E220;
loc_82E8E248:
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// blt cr6,0x82e8e1fc
	if (ctx.cr6.lt) goto loc_82E8E1FC;
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// ble cr6,0x82e8e2d8
	if (!ctx.cr6.gt) goto loc_82E8E2D8;
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// b 0x82e8e42c
	goto loc_82E8E42C;
loc_82E8E260:
	// cmpwi cr6,r11,66
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 66, ctx.xer);
	// beq cr6,0x82e8e2ac
	if (ctx.cr6.eq) goto loc_82E8E2AC;
	// cmpwi cr6,r11,67
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 67, ctx.xer);
	// beq cr6,0x82e8e2ac
	if (ctx.cr6.eq) goto loc_82E8E2AC;
	// cmpwi cr6,r11,68
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 68, ctx.xer);
	// beq cr6,0x82e8e2ac
	if (ctx.cr6.eq) goto loc_82E8E2AC;
	// cmpwi cr6,r11,69
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 69, ctx.xer);
	// beq cr6,0x82e8e2ac
	if (ctx.cr6.eq) goto loc_82E8E2AC;
	// cmpwi cr6,r11,70
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 70, ctx.xer);
	// beq cr6,0x82e8e320
	if (ctx.cr6.eq) goto loc_82E8E320;
	// cmpwi cr6,r11,71
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 71, ctx.xer);
	// bne cr6,0x82e8e1fc
	if (!ctx.cr6.eq) goto loc_82E8E1FC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8e220
	if (ctx.cr6.eq) goto loc_82E8E220;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_82E8E2A0:
	// bl 0x82e8ee18
	ctx.lr = 0x82E8E2A4;
	sub_82E8EE18(ctx, base);
loc_82E8E2A4:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x82e8e32c
	goto loc_82E8E32C;
loc_82E8E2AC:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e8e220
	if (ctx.cr6.eq) goto loc_82E8E220;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82e8e32c
	if (!ctx.cr6.eq) goto loc_82E8E32C;
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8E2D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82e8e220
	goto loc_82E8E220;
loc_82E8E2D8:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x82e8e324
	goto loc_82E8E324;
loc_82E8E2E0:
	// cmpwi cr6,r11,4117
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4117, ctx.xer);
	// bgt cr6,0x82e8e3f8
	if (ctx.cr6.gt) goto loc_82E8E3F8;
	// cmpwi cr6,r11,4112
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4112, ctx.xer);
	// bge cr6,0x82e8e50c
	if (!ctx.cr6.lt) goto loc_82E8E50C;
	// cmpwi cr6,r11,4104
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4104, ctx.xer);
	// bgt cr6,0x82e8e3c0
	if (ctx.cr6.gt) goto loc_82E8E3C0;
	// beq cr6,0x82e8e370
	if (ctx.cr6.eq) goto loc_82E8E370;
	// cmpwi cr6,r11,73
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 73, ctx.xer);
	// beq cr6,0x82e8e334
	if (ctx.cr6.eq) goto loc_82E8E334;
	// cmpwi cr6,r11,4095
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4095, ctx.xer);
	// beq cr6,0x82e8e320
	if (ctx.cr6.eq) goto loc_82E8E320;
	// cmpwi cr6,r11,4097
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4097, ctx.xer);
	// ble cr6,0x82e8e1fc
	if (!ctx.cr6.gt) goto loc_82E8E1FC;
	// cmpwi cr6,r11,4103
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4103, ctx.xer);
	// ble cr6,0x82e8e50c
	if (!ctx.cr6.gt) goto loc_82E8E50C;
	// b 0x82e8e1fc
	goto loc_82E8E1FC;
loc_82E8E320:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_82E8E324:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e8e220
	if (ctx.cr6.eq) goto loc_82E8E220;
loc_82E8E32C:
	// bl 0x82e8ee18
	ctx.lr = 0x82E8E330;
	sub_82E8EE18(ctx, base);
	// b 0x82e8e220
	goto loc_82E8E220;
loc_82E8E334:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8e220
	if (ctx.cr6.eq) goto loc_82E8E220;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e8e2a4
	if (ctx.cr6.eq) goto loc_82E8E2A4;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82e8e2a0
	if (!ctx.cr6.eq) goto loc_82E8E2A0;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8E36C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82e8e2a4
	goto loc_82E8E2A4;
loc_82E8E370:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8e50c
	if (ctx.cr6.eq) goto loc_82E8E50C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e8e50c
	if (!ctx.cr6.gt) goto loc_82E8E50C;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82E8E390:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e8e3a8
	if (ctx.cr6.eq) goto loc_82E8E3A8;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82f1d790
	ctx.lr = 0x82E8E3A8;
	sub_82F1D790(ctx, base);
loc_82E8E3A8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e8e390
	if (ctx.cr6.lt) goto loc_82E8E390;
	// b 0x82e8e50c
	goto loc_82E8E50C;
loc_82E8E3C0:
	// cmpwi cr6,r11,4106
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4106, ctx.xer);
	// blt cr6,0x82e8e1fc
	if (ctx.cr6.lt) goto loc_82E8E1FC;
	// cmpwi cr6,r11,4107
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4107, ctx.xer);
	// ble cr6,0x82e8e50c
	if (!ctx.cr6.gt) goto loc_82E8E50C;
	// cmpwi cr6,r11,4108
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4108, ctx.xer);
	// bne cr6,0x82e8e1fc
	if (!ctx.cr6.eq) goto loc_82E8E1FC;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82e8e50c
	if (ctx.cr6.eq) goto loc_82E8E50C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82e8e068
	ctx.lr = 0x82E8E3F0;
	sub_82E8E068(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x82e8e50c
	goto loc_82E8E50C;
loc_82E8E3F8:
	// cmpwi cr6,r11,4126
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4126, ctx.xer);
	// blt cr6,0x82e8e1fc
	if (ctx.cr6.lt) goto loc_82E8E1FC;
	// cmpwi cr6,r11,4127
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4127, ctx.xer);
	// ble cr6,0x82e8e4cc
	if (!ctx.cr6.gt) goto loc_82E8E4CC;
	// cmpwi cr6,r11,4160
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4160, ctx.xer);
	// beq cr6,0x82e8e50c
	if (ctx.cr6.eq) goto loc_82E8E50C;
	// cmpwi cr6,r11,4167
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4167, ctx.xer);
	// beq cr6,0x82e8e484
	if (ctx.cr6.eq) goto loc_82E8E484;
	// cmpwi cr6,r11,4168
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4168, ctx.xer);
	// beq cr6,0x82e8e50c
	if (ctx.cr6.eq) goto loc_82E8E50C;
	// cmpwi cr6,r11,8191
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8191, ctx.xer);
	// beq cr6,0x82e8e434
	if (ctx.cr6.eq) goto loc_82E8E434;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
loc_82E8E42C:
	// bne cr6,0x82e8e1fc
	if (!ctx.cr6.eq) goto loc_82E8E1FC;
	// b 0x82e8e220
	goto loc_82E8E220;
loc_82E8E434:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8e50c
	if (ctx.cr6.eq) goto loc_82E8E50C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e8e50c
	if (!ctx.cr6.gt) goto loc_82E8E50C;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82E8E454:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e8e46c
	if (ctx.cr6.eq) goto loc_82E8E46C;
	// bl 0x82e8ee18
	ctx.lr = 0x82E8E46C;
	sub_82E8EE18(ctx, base);
loc_82E8E46C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e8e454
	if (ctx.cr6.lt) goto loc_82E8E454;
	// b 0x82e8e50c
	goto loc_82E8E50C;
loc_82E8E484:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8e50c
	if (ctx.cr6.eq) goto loc_82E8E50C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e8e50c
	if (!ctx.cr6.gt) goto loc_82E8E50C;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82E8E4A4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82e8ee18
	ctx.lr = 0x82E8E4B4;
	sub_82E8EE18(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e8e4a4
	if (ctx.cr6.lt) goto loc_82E8E4A4;
	// b 0x82e8e50c
	goto loc_82E8E50C;
loc_82E8E4CC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8e50c
	if (ctx.cr6.eq) goto loc_82E8E50C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e8e50c
	if (!ctx.cr6.gt) goto loc_82E8E50C;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82E8E4EC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x82e8ee18
	ctx.lr = 0x82E8E4F8;
	sub_82E8EE18(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e8e4ec
	if (ctx.cr6.lt) goto loc_82E8E4EC;
loc_82E8E50C:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// b 0x82e8e32c
	goto loc_82E8E32C;
}

__attribute__((alias("__imp__sub_82E8E514"))) PPC_WEAK_FUNC(sub_82E8E514);
PPC_FUNC_IMPL(__imp__sub_82E8E514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8E518"))) PPC_WEAK_FUNC(sub_82E8E518);
PPC_FUNC_IMPL(__imp__sub_82E8E518) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82e8e180
	sub_82E8E180(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8E520"))) PPC_WEAK_FUNC(sub_82E8E520);
PPC_FUNC_IMPL(__imp__sub_82E8E520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82E8E528;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// ld r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// lhz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r3,r8,-2048
	ctx.r3.s64 = ctx.r8.s64 + -2048;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// rlwinm r4,r31,0,20,18
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// bl 0x82e8e128
	ctx.lr = 0x82E8E568;
	sub_82E8E128(ctx, base);
	// rlwinm. r11,r3,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r29,r3,24
	ctx.r29.u64 = ctx.r3.u32 & 0xFF;
	// beq 0x82e8e594
	if (ctx.cr0.eq) goto loc_82E8E594;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// std r26,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r26.u64);
	// std r26,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r26.u64);
	// bl 0x8317a9a8
	ctx.lr = 0x82E8E58C;
	sub_8317A9A8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// b 0x82e8ed3c
	goto loc_82E8ED3C;
loc_82E8E594:
	// rlwinm. r11,r31,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e8e8c8
	if (!ctx.cr0.eq) goto loc_82E8E8C8;
	// rlwinm. r11,r29,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e8edac
	if (!ctx.cr0.eq) goto loc_82E8EDAC;
	// li r30,-1
	ctx.r30.s64 = -1;
	// cmplwi cr6,r31,68
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 68, ctx.xer);
	// bgt cr6,0x82e8e6cc
	if (ctx.cr6.gt) goto loc_82E8E6CC;
	// beq cr6,0x82e8e6ac
	if (ctx.cr6.eq) goto loc_82E8E6AC;
	// cmplwi cr6,r31,8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 8, ctx.xer);
	// beq cr6,0x82e8e690
	if (ctx.cr6.eq) goto loc_82E8E690;
	// cmplwi cr6,r31,30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 30, ctx.xer);
	// beq cr6,0x82e8e65c
	if (ctx.cr6.eq) goto loc_82E8E65C;
	// cmplwi cr6,r31,31
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 31, ctx.xer);
	// beq cr6,0x82e8e614
	if (ctx.cr6.eq) goto loc_82E8E614;
	// cmplwi cr6,r31,65
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 65, ctx.xer);
	// beq cr6,0x82e8e89c
	if (ctx.cr6.eq) goto loc_82E8E89C;
	// cmplwi cr6,r31,66
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 66, ctx.xer);
	// beq cr6,0x82e8e6ac
	if (ctx.cr6.eq) goto loc_82E8E6AC;
	// cmplwi cr6,r31,67
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 67, ctx.xer);
	// bne cr6,0x82e8e6fc
	if (!ctx.cr6.eq) goto loc_82E8E6FC;
loc_82E8E5E4:
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e8edac
	if (ctx.cr6.eq) goto loc_82E8EDAC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8E600;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E8E600:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82e8edac
	if (!ctx.cr6.eq) goto loc_82E8EDAC;
loc_82E8E608:
	// lis r25,-32765
	ctx.r25.s64 = -2147287040;
	// ori r25,r25,8
	ctx.r25.u64 = ctx.r25.u64 | 8;
	// b 0x82e8ed54
	goto loc_82E8ED54;
loc_82E8E614:
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e8edac
	if (ctx.cr6.eq) goto loc_82E8EDAC;
	// bl 0x82fa3bb8
	ctx.lr = 0x82E8E624;
	sub_82FA3BB8(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// lwz r29,8(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_82E8E630:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e8e030
	ctx.lr = 0x82E8E638;
	sub_82E8E030(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82e8e650
	if (ctx.cr0.eq) goto loc_82E8E650;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82E8E648:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82E8E650;
	sub_82FA77C0(ctx, base);
loc_82E8E650:
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
loc_82E8E654:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// b 0x82e8e600
	goto loc_82E8E600;
loc_82E8E65C:
	// lwz r29,8(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82e8edac
	if (ctx.cr6.eq) goto loc_82E8EDAC;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82E8E66C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82e8e66c
	if (!ctx.cr6.eq) goto loc_82E8E66C;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// b 0x82e8e630
	goto loc_82E8E630;
loc_82E8E690:
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e8edac
	if (ctx.cr6.eq) goto loc_82E8EDAC;
	// bl 0x82f1d748
	ctx.lr = 0x82E8E6A0;
	sub_82F1D748(ctx, base);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82e8e600
	goto loc_82E8E600;
loc_82E8E6AC:
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e8edac
	if (ctx.cr6.eq) goto loc_82E8EDAC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8E6C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82e8edac
	goto loc_82E8EDAC;
loc_82E8E6CC:
	// cmplwi cr6,r31,69
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 69, ctx.xer);
	// beq cr6,0x82e8e5e4
	if (ctx.cr6.eq) goto loc_82E8E5E4;
	// cmplwi cr6,r31,70
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 70, ctx.xer);
	// beq cr6,0x82e8e89c
	if (ctx.cr6.eq) goto loc_82E8E89C;
	// cmplwi cr6,r31,71
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 71, ctx.xer);
	// beq cr6,0x82e8e7d4
	if (ctx.cr6.eq) goto loc_82E8E7D4;
	// cmplwi cr6,r31,72
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 72, ctx.xer);
	// beq cr6,0x82e8e7ac
	if (ctx.cr6.eq) goto loc_82E8E7AC;
	// cmplwi cr6,r31,73
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 73, ctx.xer);
	// beq cr6,0x82e8e740
	if (ctx.cr6.eq) goto loc_82E8E740;
	// cmplwi cr6,r31,4095
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4095, ctx.xer);
	// beq cr6,0x82e8e708
	if (ctx.cr6.eq) goto loc_82E8E708;
loc_82E8E6FC:
	// lis r25,-32765
	ctx.r25.s64 = -2147287040;
	// ori r25,r25,87
	ctx.r25.u64 = ctx.r25.u64 | 87;
	// b 0x82e8ed54
	goto loc_82E8ED54;
loc_82E8E708:
	// lwz r29,12(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82e8edac
	if (ctx.cr6.eq) goto loc_82E8EDAC;
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82E8E71C:
	// bl 0x82e8e030
	ctx.lr = 0x82E8E720;
	sub_82E8E030(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82e8e738
	if (ctx.cr0.eq) goto loc_82E8E738;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82E8E738;
	sub_82FA77C0(ctx, base);
loc_82E8E738:
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// b 0x82e8e654
	goto loc_82E8E654;
loc_82E8E740:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8edac
	if (ctx.cr6.eq) goto loc_82E8EDAC;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82e8e030
	ctx.lr = 0x82E8E754;
	sub_82E8E030(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82e8e768
	if (!ctx.cr0.eq) goto loc_82E8E768;
	// lis r25,-32761
	ctx.r25.s64 = -2147024896;
	// ori r25,r25,14
	ctx.r25.u64 = ctx.r25.u64 | 14;
	// b 0x82e8ed54
	goto loc_82E8ED54;
loc_82E8E768:
	// li r11,5
	ctx.r11.s64 = 5;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r9,r31,-4
	ctx.r9.s64 = ctx.r31.s64 + -4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82E8E77C:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82e8e77c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82E8E77C;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e8e7a4
	if (ctx.cr6.eq) goto loc_82E8E7A4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8E7A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E8E7A4:
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// b 0x82e8edac
	goto loc_82E8EDAC;
loc_82E8E7AC:
	// lwz r30,8(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82e8edac
	if (ctx.cr6.eq) goto loc_82E8EDAC;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82e8e030
	ctx.lr = 0x82E8E7C0;
	sub_82E8E030(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82e8e650
	if (ctx.cr0.eq) goto loc_82E8E650;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// b 0x82e8e648
	goto loc_82E8E648;
loc_82E8E7D4:
	// lwz r30,8(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82e8edac
	if (ctx.cr6.eq) goto loc_82E8EDAC;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82e8e030
	ctx.lr = 0x82E8E7E8;
	sub_82E8E030(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82e8e800
	if (ctx.cr0.eq) goto loc_82E8E800;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82E8E800;
	sub_82FA77C0(ctx, base);
loc_82E8E800:
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82e8e608
	if (ctx.cr6.eq) goto loc_82E8E608;
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82e8e830
	if (!ctx.cr6.eq) goto loc_82E8E830;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r9,r9,-4
	ctx.xer.ca = ctx.r9.u32 > 3;
	ctx.r9.s64 = ctx.r9.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82e8e83c
	if (!ctx.cr0.eq) goto loc_82E8E83C;
loc_82E8E830:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x82e8e854
	if (!ctx.cr6.lt) goto loc_82E8E854;
loc_82E8E83C:
	// lis r25,-32765
	ctx.r25.s64 = -2147287040;
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// ori r25,r25,87
	ctx.r25.u64 = ctx.r25.u64 | 87;
	// bl 0x82e8ee18
	ctx.lr = 0x82E8E84C;
	sub_82E8EE18(ctx, base);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// b 0x82e8ed54
	goto loc_82E8ED54;
loc_82E8E854:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e8e600
	if (ctx.cr6.eq) goto loc_82E8E600;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r29,8(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e8e030
	ctx.lr = 0x82E8E874;
	sub_82E8E030(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82e8e88c
	if (ctx.cr0.eq) goto loc_82E8E88C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82E8E88C;
	sub_82FA77C0(ctx, base);
loc_82E8E88C:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// b 0x82e8e600
	goto loc_82E8E600;
loc_82E8E89C:
	// lwz r29,12(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82e8e8bc
	if (!ctx.cr6.eq) goto loc_82E8E8BC;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e8e6fc
	if (!ctx.cr6.eq) goto loc_82E8E6FC;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82e8edac
	if (ctx.cr6.eq) goto loc_82E8EDAC;
loc_82E8E8BC:
	// lwz r30,8(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82e8e71c
	goto loc_82E8E71C;
loc_82E8E8C8:
	// clrlwi. r10,r29,27
	ctx.r10.u64 = ctx.r29.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e8e6fc
	if (ctx.cr0.eq) goto loc_82E8E6FC;
	// lwz r30,12(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82e8ed34
	if (ctx.cr6.eq) goto loc_82E8ED34;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8ed34
	if (ctx.cr6.eq) goto loc_82E8ED34;
	// mullw r31,r11,r10
	ctx.r31.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8e030
	ctx.lr = 0x82E8E8F4;
	sub_82E8E030(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x82e8e90c
	if (ctx.cr0.eq) goto loc_82E8E90C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82E8E90C;
	sub_82FA77C0(ctx, base);
loc_82E8E90C:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82e8e608
	if (ctx.cr6.eq) goto loc_82E8E608;
	// rlwinm. r11,r29,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e8edac
	if (!ctx.cr0.eq) goto loc_82E8EDAC;
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,4104
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4104, ctx.xer);
	// beq cr6,0x82e8ea44
	if (ctx.cr6.eq) goto loc_82E8EA44;
	// cmplwi cr6,r11,4108
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4108, ctx.xer);
	// beq cr6,0x82e8ea0c
	if (ctx.cr6.eq) goto loc_82E8EA0C;
	// cmplwi cr6,r11,4125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4125, ctx.xer);
	// ble cr6,0x82e8ea00
	if (!ctx.cr6.gt) goto loc_82E8EA00;
	// cmplwi cr6,r11,4127
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4127, ctx.xer);
	// ble cr6,0x82e8e9cc
	if (!ctx.cr6.gt) goto loc_82E8E9CC;
	// cmplwi cr6,r11,4167
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4167, ctx.xer);
	// beq cr6,0x82e8e994
	if (ctx.cr6.eq) goto loc_82E8E994;
	// cmplwi cr6,r11,8191
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8191, ctx.xer);
	// bne cr6,0x82e8ea00
	if (!ctx.cr6.eq) goto loc_82E8EA00;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8ea74
	if (ctx.cr6.eq) goto loc_82E8EA74;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_82E8E96C:
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stwx r26,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r26.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// lwz r8,108(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// blt cr6,0x82e8e96c
	if (ctx.cr6.lt) goto loc_82E8E96C;
	// b 0x82e8ea74
	goto loc_82E8EA74;
loc_82E8E994:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8ea74
	if (ctx.cr6.eq) goto loc_82E8EA74;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
loc_82E8E9A8:
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// stw r26,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r26.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// lwz r8,108(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// blt cr6,0x82e8e9a8
	if (ctx.cr6.lt) goto loc_82E8E9A8;
	// b 0x82e8ea74
	goto loc_82E8EA74;
loc_82E8E9CC:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8ea74
	if (ctx.cr6.eq) goto loc_82E8EA74;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
loc_82E8E9E0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r26,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r26.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r8,108(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e8e9e0
	if (ctx.cr6.lt) goto loc_82E8E9E0;
	// b 0x82e8ea74
	goto loc_82E8EA74;
loc_82E8EA00:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e8ee18
	ctx.lr = 0x82E8EA08;
	sub_82E8EE18(ctx, base);
	// b 0x82e8e6fc
	goto loc_82E8E6FC;
loc_82E8EA0C:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8ea74
	if (ctx.cr6.eq) goto loc_82E8EA74;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
loc_82E8EA20:
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r11,r9,r8
	PPC_STORE_U16(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u16);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// lwz r8,108(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e8ea20
	if (ctx.cr6.lt) goto loc_82E8EA20;
	// b 0x82e8ea74
	goto loc_82E8EA74;
loc_82E8EA44:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8ea74
	if (ctx.cr6.eq) goto loc_82E8EA74;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
loc_82E8EA58:
	// stwx r26,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r26.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// lwz r8,108(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// blt cr6,0x82e8ea58
	if (ctx.cr6.lt) goto loc_82E8EA58;
loc_82E8EA74:
	// lhz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// cmplwi cr6,r10,4104
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4104, ctx.xer);
	// beq cr6,0x82e8ecdc
	if (ctx.cr6.eq) goto loc_82E8ECDC;
	// cmplwi cr6,r10,4108
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4108, ctx.xer);
	// beq cr6,0x82e8ec94
	if (ctx.cr6.eq) goto loc_82E8EC94;
	// cmplwi cr6,r10,4126
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4126, ctx.xer);
	// beq cr6,0x82e8ec18
	if (ctx.cr6.eq) goto loc_82E8EC18;
	// cmplwi cr6,r10,4127
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4127, ctx.xer);
	// beq cr6,0x82e8eba8
	if (ctx.cr6.eq) goto loc_82E8EBA8;
	// cmplwi cr6,r10,4167
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4167, ctx.xer);
	// beq cr6,0x82e8eb24
	if (ctx.cr6.eq) goto loc_82E8EB24;
	// cmplwi cr6,r10,8191
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8191, ctx.xer);
	// bne cr6,0x82e8ea00
	if (!ctx.cr6.eq) goto loc_82E8EA00;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8edac
	if (ctx.cr6.eq) goto loc_82E8EDAC;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82E8EAB8:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8eb0c
	if (ctx.cr6.eq) goto loc_82E8EB0C;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// stwx r11,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u32);
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82e8e0d0
	ctx.lr = 0x82E8EAF0;
	sub_82E8E0D0(ctx, base);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r25,80(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// bne cr6,0x82e8ed44
	if (!ctx.cr6.eq) goto loc_82E8ED44;
	// lwz r8,108(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_82E8EB0C:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e8eab8
	if (ctx.cr6.lt) goto loc_82E8EAB8;
	// b 0x82e8ed3c
	goto loc_82E8ED3C;
loc_82E8EB24:
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8edac
	if (ctx.cr6.eq) goto loc_82E8EDAC;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82E8EB34:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82e8eb5c
	if (!ctx.cr6.eq) goto loc_82E8EB5C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e8e6fc
	if (!ctx.cr0.eq) goto loc_82E8E6FC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e8eb90
	if (ctx.cr6.eq) goto loc_82E8EB90;
loc_82E8EB5C:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r3,r10,-4
	ctx.r3.s64 = ctx.r10.s64 + -4;
	// bl 0x82e8e0d0
	ctx.lr = 0x82E8EB78;
	sub_82E8E0D0(ctx, base);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r25,80(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// bne cr6,0x82e8ed44
	if (!ctx.cr6.eq) goto loc_82E8ED44;
loc_82E8EB90:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e8eb34
	if (ctx.cr6.lt) goto loc_82E8EB34;
	// b 0x82e8ed3c
	goto loc_82E8ED3C;
loc_82E8EBA8:
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8edac
	if (ctx.cr6.eq) goto loc_82E8EDAC;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82E8EBB8:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8ec00
	if (ctx.cr6.eq) goto loc_82E8EC00;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwzx r29,r31,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fa3bb8
	ctx.lr = 0x82E8EBD8;
	sub_82FA3BB8(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82e8e0d0
	ctx.lr = 0x82E8EBEC;
	sub_82E8E0D0(ctx, base);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r25,80(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// stwx r3,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r3.u32);
	// bne cr6,0x82e8ed44
	if (!ctx.cr6.eq) goto loc_82E8ED44;
loc_82E8EC00:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e8ebb8
	if (ctx.cr6.lt) goto loc_82E8EBB8;
	// b 0x82e8ed3c
	goto loc_82E8ED3C;
loc_82E8EC18:
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8edac
	if (ctx.cr6.eq) goto loc_82E8EDAC;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82E8EC28:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e8ec7c
	if (ctx.cr6.eq) goto loc_82E8EC7C;
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82E8EC40:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82e8ec40
	if (!ctx.cr6.eq) goto loc_82E8EC40;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// bl 0x82e8e0d0
	ctx.lr = 0x82E8EC68;
	sub_82E8E0D0(ctx, base);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r25,80(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// stwx r3,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r3.u32);
	// bne cr6,0x82e8ed44
	if (!ctx.cr6.eq) goto loc_82E8ED44;
loc_82E8EC7C:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e8ec28
	if (ctx.cr6.lt) goto loc_82E8EC28;
	// b 0x82e8ed3c
	goto loc_82E8ED3C;
loc_82E8EC94:
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8edac
	if (ctx.cr6.eq) goto loc_82E8EDAC;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// b 0x82e8ecac
	goto loc_82E8ECAC;
loc_82E8ECA8:
	// lwz r8,108(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_82E8ECAC:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// add r3,r31,r8
	ctx.r3.u64 = ctx.r31.u64 + ctx.r8.u64;
	// add r4,r31,r11
	ctx.r4.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x82e8e520
	ctx.lr = 0x82E8ECBC;
	sub_82E8E520(ctx, base);
	// mr. r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne 0x82e8ed44
	if (!ctx.cr0.eq) goto loc_82E8ED44;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e8eca8
	if (ctx.cr6.lt) goto loc_82E8ECA8;
	// b 0x82e8edac
	goto loc_82E8EDAC;
loc_82E8ECDC:
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8edac
	if (ctx.cr6.eq) goto loc_82E8EDAC;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82E8ECEC:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e8ed1c
	if (ctx.cr6.eq) goto loc_82E8ED1C;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82f1d748
	ctx.lr = 0x82E8ED04;
	sub_82F1D748(ctx, base);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stwx r3,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8e608
	if (ctx.cr6.eq) goto loc_82E8E608;
loc_82E8ED1C:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e8ecec
	if (ctx.cr6.lt) goto loc_82E8ECEC;
	// b 0x82e8edac
	goto loc_82E8EDAC;
loc_82E8ED34:
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
loc_82E8ED3C:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x82e8edac
	if (ctx.cr6.eq) goto loc_82E8EDAC;
loc_82E8ED44:
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,87
	ctx.r11.u64 = ctx.r11.u64 | 87;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82e8eda4
	if (ctx.cr6.eq) goto loc_82E8EDA4;
loc_82E8ED54:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_82E8ED60:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82e8ed80
	if (!ctx.cr0.eq) goto loc_82E8ED80;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82e8ed60
	if (!ctx.cr6.eq) goto loc_82E8ED60;
loc_82E8ED80:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82e8ed98
	if (!ctx.cr0.eq) goto loc_82E8ED98;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// std r26,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r26.u64);
	// std r26,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r26.u64);
	// b 0x82e8eda4
	goto loc_82E8EDA4;
loc_82E8ED98:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8e180
	ctx.lr = 0x82E8EDA4;
	sub_82E8E180(ctx, base);
loc_82E8EDA4:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt cr6,0x82e8edc0
	if (ctx.cr6.lt) goto loc_82E8EDC0;
loc_82E8EDAC:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r10,0(r24)
	PPC_STORE_U64(ctx.r24.u32 + 0, ctx.r10.u64);
	// std r11,8(r24)
	PPC_STORE_U64(ctx.r24.u32 + 8, ctx.r11.u64);
loc_82E8EDC0:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8EDCC"))) PPC_WEAK_FUNC(sub_82E8EDCC);
PPC_FUNC_IMPL(__imp__sub_82E8EDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8EDD0"))) PPC_WEAK_FUNC(sub_82E8EDD0);
PPC_FUNC_IMPL(__imp__sub_82E8EDD0) {
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
	// bl 0x82a831b0
	ctx.lr = 0x82E8EDF0;
	sub_82A831B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82a81490
	ctx.lr = 0x82E8EDFC;
	sub_82A81490(ctx, base);
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

__attribute__((alias("__imp__sub_82E8EE14"))) PPC_WEAK_FUNC(sub_82E8EE14);
PPC_FUNC_IMPL(__imp__sub_82E8EE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8EE18"))) PPC_WEAK_FUNC(sub_82E8EE18);
PPC_FUNC_IMPL(__imp__sub_82E8EE18) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e8ee44
	if (ctx.cr6.eq) goto loc_82E8EE44;
	// bl 0x82a831b0
	ctx.lr = 0x82E8EE38;
	sub_82A831B0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82a81d88
	ctx.lr = 0x82E8EE44;
	sub_82A81D88(ctx, base);
loc_82E8EE44:
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

__attribute__((alias("__imp__sub_82E8EE58"))) PPC_WEAK_FUNC(sub_82E8EE58);
PPC_FUNC_IMPL(__imp__sub_82E8EE58) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// bl 0x83179224
	ctx.lr = 0x82E8EE90;
	__imp__RtlInitializeCriticalSectionAndSpinCount(ctx, base);
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a833d0
	ctx.lr = 0x82E8EEA8;
	sub_82A833D0(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a833d0
	ctx.lr = 0x82E8EEC4;
	sub_82A833D0(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82E8EEE0"))) PPC_WEAK_FUNC(sub_82E8EEE0);
PPC_FUNC_IMPL(__imp__sub_82E8EEE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82E8EEE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82a74720
	ctx.lr = 0x82E8EEF8;
	sub_82A74720(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831791a4
	ctx.lr = 0x82E8EF04;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82e8ef50
	if (ctx.cr6.eq) goto loc_82E8EF50;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e8ef3c
	if (!ctx.cr6.eq) goto loc_82E8EF3C;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e8ef3c
	if (!ctx.cr6.eq) goto loc_82E8EF3C;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bgt cr6,0x82e8ef3c
	if (ctx.cr6.gt) goto loc_82E8EF3C;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e8ef50
	if (!ctx.cr6.gt) goto loc_82E8EF50;
loc_82E8EF3C:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x82e8ef68
	goto loc_82E8EF68;
loc_82E8EF50:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82e8ef68
	if (!ctx.cr6.eq) goto loc_82E8EF68;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
loc_82E8EF68:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831791b4
	ctx.lr = 0x82E8EF70;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82e8efa0
	if (ctx.cr6.eq) goto loc_82E8EFA0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82a77600
	ctx.lr = 0x82E8EF84;
	sub_82A77600(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831791a4
	ctx.lr = 0x82E8EF8C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// bl 0x831791b4
	ctx.lr = 0x82E8EFA0;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82E8EFA0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8EFAC"))) PPC_WEAK_FUNC(sub_82E8EFAC);
PPC_FUNC_IMPL(__imp__sub_82E8EFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8EFB0"))) PPC_WEAK_FUNC(sub_82E8EFB0);
PPC_FUNC_IMPL(__imp__sub_82E8EFB0) {
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
	// bl 0x831791a4
	ctx.lr = 0x82E8EFD0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bgt cr6,0x82e8eff8
	if (ctx.cr6.gt) goto loc_82E8EFF8;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bgt cr6,0x82e8eff8
	if (ctx.cr6.gt) goto loc_82E8EFF8;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// b 0x82e8f008
	goto loc_82E8F008;
loc_82E8EFF8:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_82E8F008:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831791b4
	ctx.lr = 0x82E8F010;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82e8f024
	if (ctx.cr6.eq) goto loc_82E8F024;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82a77600
	ctx.lr = 0x82E8F024;
	sub_82A77600(ctx, base);
loc_82E8F024:
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

__attribute__((alias("__imp__sub_82E8F040"))) PPC_WEAK_FUNC(sub_82E8F040);
PPC_FUNC_IMPL(__imp__sub_82E8F040) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e8f07c
	if (!ctx.cr6.gt) goto loc_82E8F07C;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r9,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r9.u32);
	// stw r10,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// blr 
	return;
loc_82E8F07C:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e8f0b4
	if (!ctx.cr6.gt) goto loc_82E8F0B4;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r9.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// blr 
	return;
loc_82E8F0B4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8F0C4"))) PPC_WEAK_FUNC(sub_82E8F0C4);
PPC_FUNC_IMPL(__imp__sub_82E8F0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8F0C8"))) PPC_WEAK_FUNC(sub_82E8F0C8);
PPC_FUNC_IMPL(__imp__sub_82E8F0C8) {
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
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e8f0f8
	if (ctx.cr6.eq) goto loc_82E8F0F8;
	// bl 0x82a756a0
	ctx.lr = 0x82E8F0F4;
	sub_82A756A0(ctx, base);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
loc_82E8F0F8:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e8f10c
	if (ctx.cr6.eq) goto loc_82E8F10C;
	// bl 0x82a756a0
	ctx.lr = 0x82E8F108;
	sub_82A756A0(ctx, base);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
loc_82E8F10C:
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

__attribute__((alias("__imp__sub_82E8F124"))) PPC_WEAK_FUNC(sub_82E8F124);
PPC_FUNC_IMPL(__imp__sub_82E8F124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8F128"))) PPC_WEAK_FUNC(sub_82E8F128);
PPC_FUNC_IMPL(__imp__sub_82E8F128) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82e8f134
	if (ctx.cr6.eq) goto loc_82E8F134;
	// b 0x82e8eee0
	sub_82E8EEE0(ctx, base);
	return;
loc_82E8F134:
	// b 0x82e8efb0
	sub_82E8EFB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8F138"))) PPC_WEAK_FUNC(sub_82E8F138);
PPC_FUNC_IMPL(__imp__sub_82E8F138) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x831791a4
	ctx.lr = 0x82E8F160;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bne 0x82e8f188
	if (!ctx.cr0.eq) goto loc_82E8F188;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8f040
	ctx.lr = 0x82E8F184;
	sub_82E8F040(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82E8F188:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831791b4
	ctx.lr = 0x82E8F190;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82e8f1a8
	if (ctx.cr6.eq) goto loc_82E8F1A8;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a83468
	ctx.lr = 0x82E8F1A8;
	sub_82A83468(ctx, base);
loc_82E8F1A8:
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

__attribute__((alias("__imp__sub_82E8F1C4"))) PPC_WEAK_FUNC(sub_82E8F1C4);
PPC_FUNC_IMPL(__imp__sub_82E8F1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8F1C8"))) PPC_WEAK_FUNC(sub_82E8F1C8);
PPC_FUNC_IMPL(__imp__sub_82E8F1C8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x831791a4
	ctx.lr = 0x82E8F1F0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// bne 0x82e8f214
	if (!ctx.cr0.eq) goto loc_82E8F214;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8f040
	ctx.lr = 0x82E8F210;
	sub_82E8F040(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82E8F214:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831791b4
	ctx.lr = 0x82E8F21C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82e8f234
	if (ctx.cr6.eq) goto loc_82E8F234;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a83468
	ctx.lr = 0x82E8F234;
	sub_82A83468(ctx, base);
loc_82E8F234:
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

__attribute__((alias("__imp__sub_82E8F250"))) PPC_WEAK_FUNC(sub_82E8F250);
PPC_FUNC_IMPL(__imp__sub_82E8F250) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82e8f25c
	if (ctx.cr6.eq) goto loc_82E8F25C;
	// b 0x82e8f138
	sub_82E8F138(ctx, base);
	return;
loc_82E8F25C:
	// b 0x82e8f1c8
	sub_82E8F1C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8F260"))) PPC_WEAK_FUNC(sub_82E8F260);
PPC_FUNC_IMPL(__imp__sub_82E8F260) {
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
	// bne cr6,0x82e8f284
	if (!ctx.cr6.eq) goto loc_82E8F284;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82e8f3ec
	goto loc_82E8F3EC;
loc_82E8F284:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r11,27076
	ctx.r10.s64 = ctx.r11.s64 + 27076;
	// stw r31,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r31.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r9,r4,16
	ctx.r9.s64 = ctx.r4.s64 + 16;
loc_82E8F29C:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82e8f2bc
	if (!ctx.cr0.eq) goto loc_82E8F2BC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82e8f29c
	if (!ctx.cr6.eq) goto loc_82E8F29C;
loc_82E8F2BC:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82e8f3d0
	if (ctx.cr0.eq) goto loc_82E8F3D0;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,21728
	ctx.r10.s64 = ctx.r10.s64 + 21728;
	// addi r8,r4,16
	ctx.r8.s64 = ctx.r4.s64 + 16;
loc_82E8F2D4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82e8f2f4
	if (!ctx.cr0.eq) goto loc_82E8F2F4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82e8f2d4
	if (!ctx.cr6.eq) goto loc_82E8F2D4;
loc_82E8F2F4:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82e8f3d0
	if (ctx.cr0.eq) goto loc_82E8F3D0;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,4652
	ctx.r10.s64 = ctx.r10.s64 + 4652;
	// addi r8,r4,16
	ctx.r8.s64 = ctx.r4.s64 + 16;
loc_82E8F30C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82e8f32c
	if (!ctx.cr0.eq) goto loc_82E8F32C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82e8f30c
	if (!ctx.cr6.eq) goto loc_82E8F30C;
loc_82E8F32C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82e8f3d0
	if (ctx.cr0.eq) goto loc_82E8F3D0;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,26900
	ctx.r10.s64 = ctx.r10.s64 + 26900;
	// addi r8,r4,16
	ctx.r8.s64 = ctx.r4.s64 + 16;
loc_82E8F344:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82e8f364
	if (!ctx.cr0.eq) goto loc_82E8F364;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82e8f344
	if (!ctx.cr6.eq) goto loc_82E8F344;
loc_82E8F364:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82e8f384
	if (!ctx.cr0.eq) goto loc_82E8F384;
	// addi r11,r3,76
	ctx.r11.s64 = ctx.r3.s64 + 76;
loc_82E8F370:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e8f37c
	if (!ctx.cr6.eq) goto loc_82E8F37C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82E8F37C:
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// b 0x82e8f3d4
	goto loc_82E8F3D4;
loc_82E8F384:
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,8100
	ctx.r10.s64 = ctx.r10.s64 + 8100;
	// addi r8,r4,16
	ctx.r8.s64 = ctx.r4.s64 + 16;
loc_82E8F394:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82e8f3b4
	if (!ctx.cr0.eq) goto loc_82E8F3B4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82e8f394
	if (!ctx.cr6.eq) goto loc_82E8F394;
loc_82E8F3B4:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82e8f3c4
	if (!ctx.cr0.eq) goto loc_82E8F3C4;
	// addi r11,r3,80
	ctx.r11.s64 = ctx.r3.s64 + 80;
	// b 0x82e8f370
	goto loc_82E8F370;
loc_82E8F3C4:
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// ori r31,r31,16386
	ctx.r31.u64 = ctx.r31.u64 | 16386;
	// b 0x82e8f3e8
	goto loc_82E8F3E8;
loc_82E8F3D0:
	// stw r3,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
loc_82E8F3D4:
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8F3E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E8F3E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82E8F3EC:
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

__attribute__((alias("__imp__sub_82E8F400"))) PPC_WEAK_FUNC(sub_82E8F400);
PPC_FUNC_IMPL(__imp__sub_82E8F400) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,84
	ctx.r11.s64 = ctx.r3.s64 + 84;
loc_82E8F404:
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
	// bne 0x82e8f404
	if (!ctx.cr0.eq) goto loc_82E8F404;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8F428"))) PPC_WEAK_FUNC(sub_82E8F428);
PPC_FUNC_IMPL(__imp__sub_82E8F428) {
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
	// addi r11,r3,84
	ctx.r11.s64 = ctx.r3.s64 + 84;
loc_82E8F43C:
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
	// bne 0x82e8f43c
	if (!ctx.cr0.eq) goto loc_82E8F43C;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82e8f480
	if (!ctx.cr6.eq) goto loc_82E8F480;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e8f480
	if (ctx.cr6.eq) goto loc_82E8F480;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8F480;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E8F480:
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

__attribute__((alias("__imp__sub_82E8F498"))) PPC_WEAK_FUNC(sub_82E8F498);
PPC_FUNC_IMPL(__imp__sub_82E8F498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82E8F4A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,100
	ctx.r28.s64 = ctx.r3.s64 + 100;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r30,-16371
	ctx.r30.s64 = -1072889856;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// ori r30,r30,14002
	ctx.r30.u64 = ctx.r30.u64 | 14002;
	// bl 0x82e8eee0
	ctx.lr = 0x82E8F4C0;
	sub_82E8EEE0(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8f4e8
	if (ctx.cr6.eq) goto loc_82E8F4E8;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8F4E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82E8F4E8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e8f138
	ctx.lr = 0x82E8F4F0;
	sub_82E8F138(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8F4FC"))) PPC_WEAK_FUNC(sub_82E8F4FC);
PPC_FUNC_IMPL(__imp__sub_82E8F4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8F500"))) PPC_WEAK_FUNC(sub_82E8F500);
PPC_FUNC_IMPL(__imp__sub_82E8F500) {
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
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8eee0
	ctx.lr = 0x82E8F524;
	sub_82E8EEE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r31,92(r30)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r30.u32 + 92);
	// bl 0x82e8f138
	ctx.lr = 0x82E8F530;
	sub_82E8F138(ctx, base);
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

__attribute__((alias("__imp__sub_82E8F54C"))) PPC_WEAK_FUNC(sub_82E8F54C);
PPC_FUNC_IMPL(__imp__sub_82E8F54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8F550"))) PPC_WEAK_FUNC(sub_82E8F550);
PPC_FUNC_IMPL(__imp__sub_82E8F550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82E8F558;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82e8eee0
	ctx.lr = 0x82E8F570;
	sub_82E8EEE0(ctx, base);
	// sth r29,92(r30)
	PPC_STORE_U16(ctx.r30.u32 + 92, ctx.r29.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8f138
	ctx.lr = 0x82E8F57C;
	sub_82E8F138(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8F588"))) PPC_WEAK_FUNC(sub_82E8F588);
PPC_FUNC_IMPL(__imp__sub_82E8F588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82E8F590;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82e8f5b0
	if (!ctx.cr6.eq) goto loc_82E8F5B0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82e8f5e8
	goto loc_82E8F5E8;
loc_82E8F5B0:
	// addi r30,r31,100
	ctx.r30.s64 = ctx.r31.s64 + 100;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e8eee0
	ctx.lr = 0x82E8F5BC;
	sub_82E8EEE0(ctx, base);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// beq cr6,0x82e8f5dc
	if (ctx.cr6.eq) goto loc_82E8F5DC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8F5DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E8F5DC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e8f138
	ctx.lr = 0x82E8F5E4;
	sub_82E8F138(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E8F5E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8F5F0"))) PPC_WEAK_FUNC(sub_82E8F5F0);
PPC_FUNC_IMPL(__imp__sub_82E8F5F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82E8F5F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,100
	ctx.r28.s64 = ctx.r3.s64 + 100;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e8eee0
	ctx.lr = 0x82E8F610;
	sub_82E8EEE0(ctx, base);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e8f634
	if (ctx.cr6.eq) goto loc_82E8F634;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8F630;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
loc_82E8F634:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82e8f658
	if (ctx.cr6.eq) goto loc_82E8F658;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8F654;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82e8f65c
	goto loc_82E8F65C;
loc_82E8F658:
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
loc_82E8F65C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e8f138
	ctx.lr = 0x82E8F664;
	sub_82E8F138(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8F670"))) PPC_WEAK_FUNC(sub_82E8F670);
PPC_FUNC_IMPL(__imp__sub_82E8F670) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E8F684"))) PPC_WEAK_FUNC(sub_82E8F684);
PPC_FUNC_IMPL(__imp__sub_82E8F684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8F688"))) PPC_WEAK_FUNC(sub_82E8F688);
PPC_FUNC_IMPL(__imp__sub_82E8F688) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E8F69C"))) PPC_WEAK_FUNC(sub_82E8F69C);
PPC_FUNC_IMPL(__imp__sub_82E8F69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8F6A0"))) PPC_WEAK_FUNC(sub_82E8F6A0);
PPC_FUNC_IMPL(__imp__sub_82E8F6A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E8F6B4"))) PPC_WEAK_FUNC(sub_82E8F6B4);
PPC_FUNC_IMPL(__imp__sub_82E8F6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8F6B8"))) PPC_WEAK_FUNC(sub_82E8F6B8);
PPC_FUNC_IMPL(__imp__sub_82E8F6B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E8F6CC"))) PPC_WEAK_FUNC(sub_82E8F6CC);
PPC_FUNC_IMPL(__imp__sub_82E8F6CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8F6D0"))) PPC_WEAK_FUNC(sub_82E8F6D0);
PPC_FUNC_IMPL(__imp__sub_82E8F6D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E8F6E4"))) PPC_WEAK_FUNC(sub_82E8F6E4);
PPC_FUNC_IMPL(__imp__sub_82E8F6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8F6E8"))) PPC_WEAK_FUNC(sub_82E8F6E8);
PPC_FUNC_IMPL(__imp__sub_82E8F6E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82E8F6F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r3,88
	ctx.r30.s64 = ctx.r3.s64 + 88;
	// lwz r3,88(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e8f720
	if (ctx.cr6.eq) goto loc_82E8F720;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8F71C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
loc_82E8F720:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e6fa60
	ctx.lr = 0x82E8F728;
	sub_82E6FA60(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82e8f768
	if (ctx.cr0.lt) goto loc_82E8F768;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// sth r29,92(r31)
	PPC_STORE_U16(ctx.r31.u32 + 92, ctx.r29.u16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e8f754
	if (ctx.cr6.eq) goto loc_82E8F754;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8F750;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
loc_82E8F754:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8F768;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E8F768:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8F774"))) PPC_WEAK_FUNC(sub_82E8F774);
PPC_FUNC_IMPL(__imp__sub_82E8F774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8F778"))) PPC_WEAK_FUNC(sub_82E8F778);
PPC_FUNC_IMPL(__imp__sub_82E8F778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82E8F780;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82e8fb0c
	if (ctx.cr6.eq) goto loc_82E8FB0C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82e8fb0c
	if (ctx.cr6.eq) goto loc_82E8FB0C;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82e8fb0c
	if (ctx.cr6.eq) goto loc_82E8FB0C;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r31,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r31.u64);
	// std r31,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r31.u64);
	// std r31,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r31.u64);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// sth r31,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r31.u16);
	// sth r31,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r31.u16);
	// bl 0x82e9a160
	ctx.lr = 0x82E8F7EC;
	sub_82E9A160(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82e8fa60
	if (ctx.cr0.lt) goto loc_82E8FA60;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8F80C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82e8fa60
	if (ctx.cr0.lt) goto loc_82E8FA60;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r5,r11,28608
	ctx.r5.s64 = ctx.r11.s64 + 28608;
	// addi r4,r10,27952
	ctx.r4.s64 = ctx.r10.s64 + 27952;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// bl 0x82e96e80
	ctx.lr = 0x82E8F830;
	sub_82E96E80(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82e8fa60
	if (ctx.cr0.lt) goto loc_82E8FA60;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,28544
	ctx.r4.s64 = ctx.r11.s64 + 28544;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8F858;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82e8fa60
	if (ctx.cr0.lt) goto loc_82E8FA60;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r30,r11,28048
	ctx.r30.s64 = ctx.r11.s64 + 28048;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8F888;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82e8fa60
	if (ctx.cr0.lt) goto loc_82E8FA60;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82e8fa60
	if (ctx.cr6.lt) goto loc_82E8FA60;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8F8BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82e8fa60
	if (ctx.cr0.lt) goto loc_82E8FA60;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e8fa60
	if (ctx.cr6.eq) goto loc_82E8FA60;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82f1f0b0
	ctx.lr = 0x82E8F8E4;
	sub_82F1F0B0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82e8fa60
	if (ctx.cr0.lt) goto loc_82E8FA60;
	// lhz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e8fa60
	if (ctx.cr0.eq) goto loc_82E8FA60;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r27,r11,27188
	ctx.r27.s64 = ctx.r11.s64 + 27188;
loc_82E8F904:
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e8f914
	if (ctx.cr6.eq) goto loc_82E8F914;
	// bl 0x82e8ee18
	ctx.lr = 0x82E8F914;
	sub_82E8EE18(ctx, base);
loc_82E8F914:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e8f928
	if (ctx.cr6.eq) goto loc_82E8F928;
	// bl 0x82e8ee18
	ctx.lr = 0x82E8F928;
	sub_82E8EE18(ctx, base);
loc_82E8F928:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r31,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r31.u64);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// std r31,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r31.u64);
	// std r31,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r31.u64);
	// bl 0x82f1f188
	ctx.lr = 0x82E8F954;
	sub_82F1F188(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82e8fa60
	if (ctx.cr0.lt) goto loc_82E8FA60;
	// lhz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 120);
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82e8f97c
	if (!ctx.cr6.gt) goto loc_82E8F97C;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82E8F97C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e8edd0
	ctx.lr = 0x82E8F990;
	sub_82E8EDD0(ctx, base);
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e8fa58
	if (ctx.cr0.eq) goto loc_82E8FA58;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e8edd0
	ctx.lr = 0x82E8F9B4;
	sub_82E8EDD0(ctx, base);
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e8fa58
	if (ctx.cr0.eq) goto loc_82E8FA58;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f1f188
	ctx.lr = 0x82E8F9D8;
	sub_82F1F188(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82e8fa60
	if (ctx.cr0.lt) goto loc_82E8FA60;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x82fa6640
	ctx.lr = 0x82E8F9EC;
	sub_82FA6640(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e8fa10
	if (!ctx.cr0.eq) goto loc_82E8FA10;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82e8fa10
	if (!ctx.cr6.eq) goto loc_82E8FA10;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// b 0x82e8fa3c
	goto loc_82E8FA3C;
loc_82E8FA10:
	// addi r3,r27,28
	ctx.r3.s64 = ctx.r27.s64 + 28;
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x82fa6640
	ctx.lr = 0x82E8FA1C;
	sub_82FA6640(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e8fa3c
	if (!ctx.cr0.eq) goto loc_82E8FA3C;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82e8fa3c
	if (!ctx.cr6.eq) goto loc_82E8FA3C;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_82E8FA3C:
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// lhz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82e8f904
	if (ctx.cr6.lt) goto loc_82E8F904;
	// b 0x82e8fa60
	goto loc_82E8FA60;
loc_82E8FA58:
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,14
	ctx.r29.u64 = ctx.r29.u64 | 14;
loc_82E8FA60:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e8fa80
	if (ctx.cr6.eq) goto loc_82E8FA80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8FA7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
loc_82E8FA80:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e8faa0
	if (ctx.cr6.eq) goto loc_82E8FAA0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8FA9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
loc_82E8FAA0:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e8fac0
	if (ctx.cr6.eq) goto loc_82E8FAC0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8FABC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
loc_82E8FAC0:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e8fae0
	if (ctx.cr6.eq) goto loc_82E8FAE0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8FADC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
loc_82E8FAE0:
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e8faf0
	if (ctx.cr6.eq) goto loc_82E8FAF0;
	// bl 0x82e8ee18
	ctx.lr = 0x82E8FAF0;
	sub_82E8EE18(ctx, base);
loc_82E8FAF0:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e8fb04
	if (ctx.cr6.eq) goto loc_82E8FB04;
	// bl 0x82e8ee18
	ctx.lr = 0x82E8FB04;
	sub_82E8EE18(ctx, base);
loc_82E8FB04:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82e8fb14
	goto loc_82E8FB14;
loc_82E8FB0C:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16387
	ctx.r3.u64 = ctx.r3.u64 | 16387;
loc_82E8FB14:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8FB1C"))) PPC_WEAK_FUNC(sub_82E8FB1C);
PPC_FUNC_IMPL(__imp__sub_82E8FB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8FB20"))) PPC_WEAK_FUNC(sub_82E8FB20);
PPC_FUNC_IMPL(__imp__sub_82E8FB20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82E8FB28;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82e8fb48
	if (!ctx.cr6.eq) goto loc_82E8FB48;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16387
	ctx.r3.u64 = ctx.r3.u64 | 16387;
	// b 0x82e8fcf4
	goto loc_82E8FCF4;
loc_82E8FB48:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r11,1552
	ctx.r8.s64 = ctx.r11.s64 + 1552;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r7,-1
	ctx.r7.s64 = -1;
	// lwz r11,1552(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1552);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// sth r26,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r26.u16);
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r5,8(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// sth r7,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r7.u16);
	// stw r6,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r6.u32);
	// stw r5,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r5.u32);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// stw r8,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r8.u32);
	// lwz r11,164(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 164);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8FB9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82e8fcf0
	if (ctx.cr0.lt) goto loc_82E8FCF0;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8FBBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82e8fcf0
	if (ctx.cr0.lt) goto loc_82E8FCF0;
	// lhz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e8fcf0
	if (ctx.cr0.eq) goto loc_82E8FCF0;
loc_82E8FBD4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8FBFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x82e8fc14
	if (!ctx.cr0.lt) goto loc_82E8FC14;
	// lis r11,-16371
	ctx.r11.s64 = -1072889856;
	// ori r11,r11,14001
	ctx.r11.u64 = ctx.r11.u64 | 14001;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82e8fcf0
	if (!ctx.cr6.eq) goto loc_82E8FCF0;
loc_82E8FC14:
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82e8fc78
	if (ctx.cr6.eq) goto loc_82E8FC78;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x82e8edd0
	ctx.lr = 0x82E8FC38;
	sub_82E8EDD0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82e8fcd8
	if (ctx.cr0.eq) goto loc_82E8FCD8;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8FC68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82e8fce0
	if (ctx.cr0.lt) goto loc_82E8FCE0;
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82e8fc7c
	goto loc_82E8FC7C;
loc_82E8FC78:
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_82E8FC7C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lhz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8FCA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82e8fcb4
	if (ctx.cr6.eq) goto loc_82E8FCB4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e8ee18
	ctx.lr = 0x82E8FCB4;
	sub_82E8EE18(ctx, base);
loc_82E8FCB4:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82e8fcf0
	if (ctx.cr6.lt) goto loc_82E8FCF0;
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// lhz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r29,r11,16
	ctx.r29.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82e8fbd4
	if (ctx.cr6.lt) goto loc_82E8FBD4;
	// b 0x82e8fcf0
	goto loc_82E8FCF0;
loc_82E8FCD8:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
loc_82E8FCE0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82e8fcf0
	if (ctx.cr6.eq) goto loc_82E8FCF0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e8ee18
	ctx.lr = 0x82E8FCF0;
	sub_82E8EE18(ctx, base);
loc_82E8FCF0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82E8FCF4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8FCFC"))) PPC_WEAK_FUNC(sub_82E8FCFC);
PPC_FUNC_IMPL(__imp__sub_82E8FCFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8FD00"))) PPC_WEAK_FUNC(sub_82E8FD00);
PPC_FUNC_IMPL(__imp__sub_82E8FD00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82E8FD08;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// addi r4,r10,-5472
	ctx.r4.s64 = ctx.r10.s64 + -5472;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8FD40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82e8fe2c
	if (ctx.cr0.lt) goto loc_82E8FE2C;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8fe2c
	if (ctx.cr6.eq) goto loc_82E8FE2C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8FD68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82e8fe2c
	if (ctx.cr6.eq) goto loc_82E8FE2C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r26,r11,1552
	ctx.r26.s64 = ctx.r11.s64 + 1552;
loc_82E8FD84:
	// cmplwi cr6,r29,22
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 22, ctx.xer);
	// blt cr6,0x82e8fe2c
	if (ctx.cr6.lt) goto loc_82E8FE2C;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r8,4(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r7,8(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// bl 0x82e777d8
	ctx.lr = 0x82E8FDC0;
	sub_82E777D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r29,r29,-22
	ctx.r29.s64 = ctx.r29.s64 + -22;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lwz r10,160(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 160);
	// addi r28,r11,4
	ctx.r28.s64 = ctx.r11.s64 + 4;
	// rlwinm r6,r9,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwbrx r11,0,r11
	ctx.r11.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r11.u32));
	// rlwimi r6,r9,8,16,23
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF00) | (ctx.r6.u64 & 0xFFFFFFFFFFFF00FF);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// subfc r10,r11,r29
	ctx.xer.ca = ctx.r29.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r29.s64 - ctx.r11.s64;
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// subf r10,r9,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r9.s64;
	// and r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 & ctx.r11.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82E8FE14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt 0x82e8fe2c
	if (ctx.cr0.lt) goto loc_82E8FE2C;
	// add r11,r31,r28
	ctx.r11.u64 = ctx.r31.u64 + ctx.r28.u64;
	// subf. r29,r31,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r31.s64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne 0x82e8fd84
	if (!ctx.cr0.eq) goto loc_82E8FD84;
loc_82E8FE2C:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82e8ee18
	ctx.lr = 0x82E8FE34;
	sub_82E8EE18(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// bge cr6,0x82e8fe54
	if (!ctx.cr6.lt) goto loc_82E8FE54;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8FE54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E8FE54:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8FE60"))) PPC_WEAK_FUNC(sub_82E8FE60);
PPC_FUNC_IMPL(__imp__sub_82E8FE60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82E8FE68;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82e8fe88
	if (!ctx.cr6.eq) goto loc_82E8FE88;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16387
	ctx.r3.u64 = ctx.r3.u64 | 16387;
	// b 0x82e90048
	goto loc_82E90048;
loc_82E8FE88:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r25,r11,1552
	ctx.r25.s64 = ctx.r11.s64 + 1552;
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// lwz r10,164(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 164);
	// ori r27,r11,65535
	ctx.r27.u64 = ctx.r11.u64 | 65535;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r7,4(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// sth r26,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r26.u16);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// sth r27,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r27.u16);
	// stw r8,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r8.u32);
	// bctrl 
	ctx.lr = 0x82E8FEE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82e90044
	if (ctx.cr0.lt) goto loc_82E90044;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82e97f48
	ctx.lr = 0x82E8FEFC;
	sub_82E97F48(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82e90044
	if (ctx.cr0.lt) goto loc_82E90044;
	// lhz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e90044
	if (ctx.cr0.eq) goto loc_82E90044;
loc_82E8FF14:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r8,4(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r7,8(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// sth r27,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r27.u16);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// beq cr6,0x82e8ff54
	if (ctx.cr6.eq) goto loc_82E8FF54;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e8ee18
	ctx.lr = 0x82E8FF54;
	sub_82E8EE18(ctx, base);
loc_82E8FF54:
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82e98c78
	ctx.lr = 0x82E8FF70;
	sub_82E98C78(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x82e8ff88
	if (!ctx.cr0.lt) goto loc_82E8FF88;
	// lis r11,-16371
	ctx.r11.s64 = -1072889856;
	// ori r11,r11,14001
	ctx.r11.u64 = ctx.r11.u64 | 14001;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82e90044
	if (!ctx.cr6.eq) goto loc_82E90044;
loc_82E8FF88:
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82e8ffe0
	if (ctx.cr6.eq) goto loc_82E8FFE0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x82e8edd0
	ctx.lr = 0x82E8FFAC;
	sub_82E8EDD0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82e9002c
	if (ctx.cr0.eq) goto loc_82E9002C;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82e98c78
	ctx.lr = 0x82E8FFD0;
	sub_82E98C78(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82e90034
	if (ctx.cr0.lt) goto loc_82E90034;
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82e8ffe4
	goto loc_82E8FFE4;
loc_82E8FFE0:
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_82E8FFE4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E90008;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82e90034
	if (ctx.cr0.lt) goto loc_82E90034;
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// lhz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r29,r11,16
	ctx.r29.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82e8ff14
	if (ctx.cr6.lt) goto loc_82E8FF14;
	// b 0x82e90034
	goto loc_82E90034;
loc_82E9002C:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
loc_82E90034:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82e90044
	if (ctx.cr6.eq) goto loc_82E90044;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e8ee18
	ctx.lr = 0x82E90044;
	sub_82E8EE18(ctx, base);
loc_82E90044:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82E90048:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E90050"))) PPC_WEAK_FUNC(sub_82E90050);
PPC_FUNC_IMPL(__imp__sub_82E90050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82E90058;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82e9019c
	if (ctx.cr6.eq) goto loc_82E9019C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82e9019c
	if (ctx.cr6.eq) goto loc_82E9019C;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82e9019c
	if (ctx.cr6.eq) goto loc_82E9019C;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stw r31,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r31.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// stw r31,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r31.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r10,21808
	ctx.r4.s64 = ctx.r10.s64 + 21808;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r31,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r31.u64);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// std r31,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r31.u64);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E900C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82e90108
	if (ctx.cr0.lt) goto loc_82E90108;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E900DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r10,r10,65280
	ctx.r10.u64 = ctx.r10.u64 | 65280;
	// rlwinm r9,r11,0,1,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FFFFF00;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82e90100
	if (!ctx.cr6.eq) goto loc_82E90100;
	// lis r28,-16371
	ctx.r28.s64 = -1072889856;
	// ori r28,r28,15008
	ctx.r28.u64 = ctx.r28.u64 | 15008;
	// b 0x82e9014c
	goto loc_82E9014C;
loc_82E90100:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x82e90148
	goto loc_82E90148;
loc_82E90108:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r10,21824
	ctx.r4.s64 = ctx.r10.s64 + 21824;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E90128;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82e9014c
	if (ctx.cr0.lt) goto loc_82E9014C;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E90144;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 136);
loc_82E90148:
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82E9014C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e9016c
	if (ctx.cr6.eq) goto loc_82E9016C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E90168;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
loc_82E9016C:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e9018c
	if (ctx.cr6.eq) goto loc_82E9018C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E90188;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
loc_82E9018C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8e518
	ctx.lr = 0x82E90194;
	sub_82E8E518(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x82e901a4
	goto loc_82E901A4;
loc_82E9019C:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16387
	ctx.r3.u64 = ctx.r3.u64 | 16387;
loc_82E901A4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E901AC"))) PPC_WEAK_FUNC(sub_82E901AC);
PPC_FUNC_IMPL(__imp__sub_82E901AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E901B0"))) PPC_WEAK_FUNC(sub_82E901B0);
PPC_FUNC_IMPL(__imp__sub_82E901B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82E901B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e901f8
	if (!ctx.cr6.gt) goto loc_82E901F8;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82E901D4:
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x82e8e518
	ctx.lr = 0x82E901E4;
	sub_82E8E518(ctx, base);
	// lwz r11,72(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e901d4
	if (ctx.cr6.lt) goto loc_82E901D4;
loc_82E901F8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E9020C"))) PPC_WEAK_FUNC(sub_82E9020C);
PPC_FUNC_IMPL(__imp__sub_82E9020C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E90210"))) PPC_WEAK_FUNC(sub_82E90210);
PPC_FUNC_IMPL(__imp__sub_82E90210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82E90218;
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
	// beq cr6,0x82e9025c
	if (ctx.cr6.eq) goto loc_82E9025C;
loc_82E90234:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e9025c
	if (ctx.cr6.lt) goto loc_82E9025C;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e902b4
	if (ctx.cr6.lt) goto loc_82E902B4;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// lwz r31,100(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82e90234
	if (!ctx.cr6.eq) goto loc_82E90234;
loc_82E9025C:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82e902fc
	if (ctx.cr6.eq) goto loc_82E902FC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E90280;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82e902f4
	if (ctx.cr0.lt) goto loc_82E902F4;
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
	// beq cr6,0x82e902ac
	if (ctx.cr6.eq) goto loc_82E902AC;
	// stw r11,100(r29)
	PPC_STORE_U32(ctx.r29.u32 + 100, ctx.r11.u32);
loc_82E902AC:
	// stw r31,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r31.u32);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82E902B4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,-31972
	ctx.r9.s64 = -2095316992;
	// li r3,0
	ctx.r3.s64 = 0;
	// subf r10,r11,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
	// addi r9,r9,-28720
	ctx.r9.s64 = ctx.r9.s64 + -28720;
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
loc_82E902F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_82E902FC:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x82e902f4
	goto loc_82E902F4;
}

__attribute__((alias("__imp__sub_82E90308"))) PPC_WEAK_FUNC(sub_82E90308);
PPC_FUNC_IMPL(__imp__sub_82E90308) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82e9031c
	if (!ctx.cr6.eq) goto loc_82E9031C;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16387
	ctx.r3.u64 = ctx.r3.u64 | 16387;
	// blr 
	return;
loc_82E9031C:
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E9032C"))) PPC_WEAK_FUNC(sub_82E9032C);
PPC_FUNC_IMPL(__imp__sub_82E9032C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E90330"))) PPC_WEAK_FUNC(sub_82E90330);
PPC_FUNC_IMPL(__imp__sub_82E90330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82E90338;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r28,r11,-6656
	ctx.r28.s64 = ctx.r11.s64 + -6656;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,64(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E9037C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r27,r11,-6640
	ctx.r27.s64 = ctx.r11.s64 + -6640;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// lwz r11,64(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E903A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x82e903c4
	if (!ctx.cr6.eq) goto loc_82E903C4;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e90450
	if (ctx.cr6.eq) goto loc_82E90450;
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82e90434
	goto loc_82E90434;
loc_82E903C4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e903dc
	if (!ctx.cr6.eq) goto loc_82E903DC;
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82e90438
	goto loc_82E90438;
loc_82E903DC:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r29,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r29.u64);
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// bl 0x82e90050
	ctx.lr = 0x82E903FC;
	sub_82E90050(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82e90450
	if (ctx.cr0.lt) goto loc_82E90450;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r6,12
	ctx.r6.s64 = 12;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E90424;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82e90450
	if (ctx.cr0.lt) goto loc_82E90450;
	// li r6,12
	ctx.r6.s64 = 12;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_82E90434:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_82E90438:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E9044C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82E90450:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82e8ee18
	ctx.lr = 0x82E90458;
	sub_82E8EE18(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82e8ee18
	ctx.lr = 0x82E90464;
	sub_82E8EE18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E90470"))) PPC_WEAK_FUNC(sub_82E90470);
PPC_FUNC_IMPL(__imp__sub_82E90470) {
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
	// addi r11,r11,27296
	ctx.r11.s64 = ctx.r11.s64 + 27296;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82e901b0
	ctx.lr = 0x82E90494;
	sub_82E901B0(ctx, base);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e904a4
	if (ctx.cr6.eq) goto loc_82E904A4;
	// bl 0x82e8ee18
	ctx.lr = 0x82E904A4;
	sub_82E8EE18(ctx, base);
loc_82E904A4:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// bl 0x82e8f0c8
	ctx.lr = 0x82E904B8;
	sub_82E8F0C8(ctx, base);
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

__attribute__((alias("__imp__sub_82E904CC"))) PPC_WEAK_FUNC(sub_82E904CC);
PPC_FUNC_IMPL(__imp__sub_82E904CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E904D0"))) PPC_WEAK_FUNC(sub_82E904D0);
PPC_FUNC_IMPL(__imp__sub_82E904D0) {
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
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82e8f128
	ctx.lr = 0x82E904F8;
	sub_82E8F128(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e901b0
	ctx.lr = 0x82E90500;
	sub_82E901B0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8f250
	ctx.lr = 0x82E9050C;
	sub_82E8F250(ctx, base);
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

__attribute__((alias("__imp__sub_82E90528"))) PPC_WEAK_FUNC(sub_82E90528);
PPC_FUNC_IMPL(__imp__sub_82E90528) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x82e8f128
	ctx.lr = 0x82E90540;
	sub_82E8F128(ctx, base);
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

__attribute__((alias("__imp__sub_82E90554"))) PPC_WEAK_FUNC(sub_82E90554);
PPC_FUNC_IMPL(__imp__sub_82E90554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E90558"))) PPC_WEAK_FUNC(sub_82E90558);
PPC_FUNC_IMPL(__imp__sub_82E90558) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x82e8f250
	ctx.lr = 0x82E90570;
	sub_82E8F250(ctx, base);
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

__attribute__((alias("__imp__sub_82E90584"))) PPC_WEAK_FUNC(sub_82E90584);
PPC_FUNC_IMPL(__imp__sub_82E90584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E90588"))) PPC_WEAK_FUNC(sub_82E90588);
PPC_FUNC_IMPL(__imp__sub_82E90588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82E90590;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r26,r3,4
	ctx.r26.s64 = ctx.r3.s64 + 4;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// bl 0x82e8f128
	ctx.lr = 0x82E905B8;
	sub_82E8F128(ctx, base);
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e905d0
	if (ctx.cr6.lt) goto loc_82E905D0;
	// lis r27,-32761
	ctx.r27.s64 = -2147024896;
	// ori r27,r27,87
	ctx.r27.u64 = ctx.r27.u64 | 87;
	// b 0x82e9061c
	goto loc_82E9061C;
loc_82E905D0:
	// lwz r10,64(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// rlwinm r11,r29,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// beq cr6,0x82e9061c
	if (ctx.cr6.eq) goto loc_82E9061C;
	// lwz r10,64(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x82e8e520
	ctx.lr = 0x82E90618;
	sub_82E8E520(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_82E9061C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e8f250
	ctx.lr = 0x82E90628;
	sub_82E8F250(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E90634"))) PPC_WEAK_FUNC(sub_82E90634);
PPC_FUNC_IMPL(__imp__sub_82E90634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E90638"))) PPC_WEAK_FUNC(sub_82E90638);
PPC_FUNC_IMPL(__imp__sub_82E90638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82E90640;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82e8f128
	ctx.lr = 0x82E9065C;
	sub_82E8F128(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ea0e40
	ctx.lr = 0x82E90668;
	sub_82EA0E40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8f250
	ctx.lr = 0x82E90678;
	sub_82E8F250(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E90684"))) PPC_WEAK_FUNC(sub_82E90684);
PPC_FUNC_IMPL(__imp__sub_82E90684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E90688"))) PPC_WEAK_FUNC(sub_82E90688);
PPC_FUNC_IMPL(__imp__sub_82E90688) {
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
	// beq cr6,0x82e906ac
	if (ctx.cr6.eq) goto loc_82E906AC;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_82E906AC:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e90210
	ctx.lr = 0x82E906BC;
	sub_82E90210(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82e906d0
	if (ctx.cr0.lt) goto loc_82E906D0;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
loc_82E906D0:
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

__attribute__((alias("__imp__sub_82E906EC"))) PPC_WEAK_FUNC(sub_82E906EC);
PPC_FUNC_IMPL(__imp__sub_82E906EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E906F0"))) PPC_WEAK_FUNC(sub_82E906F0);
PPC_FUNC_IMPL(__imp__sub_82E906F0) {
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
	// bl 0x82e90470
	ctx.lr = 0x82E90710;
	sub_82E90470(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e90728
	if (ctx.cr0.eq) goto loc_82E90728;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82e90728
	if (ctx.cr6.eq) goto loc_82E90728;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8ee18
	ctx.lr = 0x82E90728;
	sub_82E8EE18(ctx, base);
loc_82E90728:
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

__attribute__((alias("__imp__sub_82E90744"))) PPC_WEAK_FUNC(sub_82E90744);
PPC_FUNC_IMPL(__imp__sub_82E90744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E90748"))) PPC_WEAK_FUNC(sub_82E90748);
PPC_FUNC_IMPL(__imp__sub_82E90748) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82e90760
	if (!ctx.cr6.eq) goto loc_82E90760;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_82E90760:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82e907ec
	if (ctx.cr6.eq) goto loc_82E907EC;
loc_82E90774:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e9078c
	if (ctx.cr6.lt) goto loc_82E9078C;
	// addi r9,r11,20
	ctx.r9.s64 = ctx.r11.s64 + 20;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82e907b4
	if (ctx.cr6.lt) goto loc_82E907B4;
loc_82E9078C:
	// lwz r10,100(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82e90774
	if (!ctx.cr6.eq) goto loc_82E90774;
loc_82E90798:
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
loc_82E907A8:
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82E907B4:
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// lis r7,-31972
	ctx.r7.s64 = -2095316992;
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r7,r7,-28720
	ctx.r7.s64 = ctx.r7.s64 + -28720;
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
	// beq 0x82e90798
	if (ctx.cr0.eq) goto loc_82E90798;
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x82e907a8
	goto loc_82E907A8;
loc_82E907EC:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E907F8"))) PPC_WEAK_FUNC(sub_82E907F8);
PPC_FUNC_IMPL(__imp__sub_82E907F8) {
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
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r11,r11,27528
	ctx.r11.s64 = ctx.r11.s64 + 27528;
	// addi r10,r10,27504
	ctx.r10.s64 = ctx.r10.s64 + 27504;
	// addi r9,r9,27472
	ctx.r9.s64 = ctx.r9.s64 + 27472;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r9.u32);
	// bl 0x82e8f6e8
	ctx.lr = 0x82E90834;
	sub_82E8F6E8(ctx, base);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e90858
	if (ctx.cr6.eq) goto loc_82E90858;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E90850;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
loc_82E90858:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lwz r10,164(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// addi r11,r11,28904
	ctx.r11.s64 = ctx.r11.s64 + 28904;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// bne cr6,0x82e9087c
	if (!ctx.cr6.eq) goto loc_82E9087C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e6b440
	ctx.lr = 0x82E9087C;
	sub_82E6B440(ctx, base);
loc_82E9087C:
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x82e8f0c8
	ctx.lr = 0x82E90884;
	sub_82E8F0C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e90470
	ctx.lr = 0x82E9088C;
	sub_82E90470(ctx, base);
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

__attribute__((alias("__imp__sub_82E908A0"))) PPC_WEAK_FUNC(sub_82E908A0);
PPC_FUNC_IMPL(__imp__sub_82E908A0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-76
	ctx.r3.s64 = ctx.r3.s64 + -76;
	// b 0x82e8f260
	sub_82E8F260(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E908A8"))) PPC_WEAK_FUNC(sub_82E908A8);
PPC_FUNC_IMPL(__imp__sub_82E908A8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-80
	ctx.r3.s64 = ctx.r3.s64 + -80;
	// b 0x82e8f260
	sub_82E8F260(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E908B0"))) PPC_WEAK_FUNC(sub_82E908B0);
PPC_FUNC_IMPL(__imp__sub_82E908B0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-76
	ctx.r3.s64 = ctx.r3.s64 + -76;
	// b 0x82e8f428
	sub_82E8F428(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E908B8"))) PPC_WEAK_FUNC(sub_82E908B8);
PPC_FUNC_IMPL(__imp__sub_82E908B8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-80
	ctx.r3.s64 = ctx.r3.s64 + -80;
	// b 0x82e8f428
	sub_82E8F428(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E908C0"))) PPC_WEAK_FUNC(sub_82E908C0);
PPC_FUNC_IMPL(__imp__sub_82E908C0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-76
	ctx.r3.s64 = ctx.r3.s64 + -76;
	// b 0x82e8f400
	sub_82E8F400(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E908C8"))) PPC_WEAK_FUNC(sub_82E908C8);
PPC_FUNC_IMPL(__imp__sub_82E908C8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-80
	ctx.r3.s64 = ctx.r3.s64 + -80;
	// b 0x82e8f400
	sub_82E8F400(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E908D0"))) PPC_WEAK_FUNC(sub_82E908D0);
PPC_FUNC_IMPL(__imp__sub_82E908D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82E908D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82e908f8
	if (!ctx.cr6.eq) goto loc_82E908F8;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16387
	ctx.r3.u64 = ctx.r3.u64 | 16387;
	// b 0x82e90a74
	goto loc_82E90A74;
loc_82E908F8:
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r4,r10,24884
	ctx.r4.s64 = ctx.r10.s64 + 24884;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E90920;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82e90a34
	if (ctx.cr0.lt) goto loc_82E90A34;
	// addi r29,r30,-76
	ctx.r29.s64 = ctx.r30.s64 + -76;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e8f6e8
	ctx.lr = 0x82E90934;
	sub_82E8F6E8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82e90a34
	if (ctx.cr0.lt) goto loc_82E90A34;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E90958;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82e90a34
	if (ctx.cr0.lt) goto loc_82E90A34;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e90974
	if (ctx.cr6.eq) goto loc_82E90974;
	// cmplwi cr6,r11,127
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 127, ctx.xer);
	// ble cr6,0x82e90980
	if (!ctx.cr6.gt) goto loc_82E90980;
loc_82E90974:
	// lis r31,-16371
	ctx.r31.s64 = -1072889856;
	// ori r31,r31,18009
	ctx.r31.u64 = ctx.r31.u64 | 18009;
	// b 0x82e90a34
	goto loc_82E90A34;
loc_82E90980:
	// sth r11,16(r30)
	PPC_STORE_U16(ctx.r30.u32 + 16, ctx.r11.u16);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E9099C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82e90a34
	if (ctx.cr0.lt) goto loc_82E90A34;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r31,r30,20
	ctx.r31.s64 = ctx.r30.s64 + 20;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E909C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82e909ec
	if (!ctx.cr0.lt) goto loc_82E909EC;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E909E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82e90a34
	if (ctx.cr0.lt) goto loc_82E90A34;
loc_82E909EC:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E90A04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82e90a34
	if (ctx.cr0.lt) goto loc_82E90A34;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e8fd00
	ctx.lr = 0x82E90A14;
	sub_82E8FD00(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82e90a34
	if (ctx.cr0.lt) goto loc_82E90A34;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e90330
	ctx.lr = 0x82E90A24;
	sub_82E90330(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x82e90a34
	if (!ctx.cr0.lt) goto loc_82E90A34;
	// lis r31,-16371
	ctx.r31.s64 = -1072889856;
	// ori r31,r31,18008
	ctx.r31.u64 = ctx.r31.u64 | 18008;
loc_82E90A34:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e90a54
	if (ctx.cr6.eq) goto loc_82E90A54;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E90A50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
loc_82E90A54:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e90a70
	if (ctx.cr6.eq) goto loc_82E90A70;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E90A70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E90A70:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82E90A74:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E90A7C"))) PPC_WEAK_FUNC(sub_82E90A7C);
PPC_FUNC_IMPL(__imp__sub_82E90A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E90A80"))) PPC_WEAK_FUNC(sub_82E90A80);
PPC_FUNC_IMPL(__imp__sub_82E90A80) {
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
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,27296
	ctx.r11.s64 = ctx.r11.s64 + 27296;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82e8ee58
	ctx.lr = 0x82E90AB0;
	sub_82E8EE58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// bl 0x82ea0c90
	ctx.lr = 0x82E90ACC;
	sub_82EA0C90(ctx, base);
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

__attribute__((alias("__imp__sub_82E90AE8"))) PPC_WEAK_FUNC(sub_82E90AE8);
PPC_FUNC_IMPL(__imp__sub_82E90AE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82E90AF0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82e8f128
	ctx.lr = 0x82E90B14;
	sub_82E8F128(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e887b8
	ctx.lr = 0x82E90B20;
	sub_82E887B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e90b34
	if (ctx.cr0.eq) goto loc_82E90B34;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x82e90b3c
	goto loc_82E90B3C;
loc_82E90B34:
	// lis r28,-16371
	ctx.r28.s64 = -1072889856;
	// ori r28,r28,14054
	ctx.r28.u64 = ctx.r28.u64 | 14054;
loc_82E90B3C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e8f250
	ctx.lr = 0x82E90B48;
	sub_82E8F250(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E90B54"))) PPC_WEAK_FUNC(sub_82E90B54);
PPC_FUNC_IMPL(__imp__sub_82E90B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E90B58"))) PPC_WEAK_FUNC(sub_82E90B58);
PPC_FUNC_IMPL(__imp__sub_82E90B58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82E90B60;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82e8f128
	ctx.lr = 0x82E90B84;
	sub_82E8F128(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e887b8
	ctx.lr = 0x82E90B90;
	sub_82E887B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e90bbc
	if (ctx.cr0.eq) goto loc_82E90BBC;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,4113
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4113, ctx.xer);
	// bne cr6,0x82e90bb0
	if (!ctx.cr6.eq) goto loc_82E90BB0;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x82e90bc4
	goto loc_82E90BC4;
loc_82E90BB0:
	// lis r29,-16371
	ctx.r29.s64 = -1072889856;
	// ori r29,r29,14013
	ctx.r29.u64 = ctx.r29.u64 | 14013;
	// b 0x82e90bc4
	goto loc_82E90BC4;
loc_82E90BBC:
	// lis r29,-16371
	ctx.r29.s64 = -1072889856;
	// ori r29,r29,14054
	ctx.r29.u64 = ctx.r29.u64 | 14054;
loc_82E90BC4:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e8f250
	ctx.lr = 0x82E90BD0;
	sub_82E8F250(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E90BDC"))) PPC_WEAK_FUNC(sub_82E90BDC);
PPC_FUNC_IMPL(__imp__sub_82E90BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E90BE0"))) PPC_WEAK_FUNC(sub_82E90BE0);
PPC_FUNC_IMPL(__imp__sub_82E90BE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82E90BE8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r28,r3,4
	ctx.r28.s64 = ctx.r3.s64 + 4;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x82e8f128
	ctx.lr = 0x82E90C14;
	sub_82E8F128(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e887b8
	ctx.lr = 0x82E90C20;
	sub_82E887B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e90c70
	if (ctx.cr0.eq) goto loc_82E90C70;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bne cr6,0x82e90c64
	if (!ctx.cr6.eq) goto loc_82E90C64;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e90c64
	if (ctx.cr6.eq) goto loc_82E90C64;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E90C5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82e90c78
	goto loc_82E90C78;
loc_82E90C64:
	// lis r31,-16371
	ctx.r31.s64 = -1072889856;
	// ori r31,r31,14013
	ctx.r31.u64 = ctx.r31.u64 | 14013;
	// b 0x82e90c78
	goto loc_82E90C78;
loc_82E90C70:
	// lis r31,-16371
	ctx.r31.s64 = -1072889856;
	// ori r31,r31,14054
	ctx.r31.u64 = ctx.r31.u64 | 14054;
loc_82E90C78:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e8f250
	ctx.lr = 0x82E90C84;
	sub_82E8F250(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E90C90"))) PPC_WEAK_FUNC(sub_82E90C90);
PPC_FUNC_IMPL(__imp__sub_82E90C90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82E90C98;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r26,r3,4
	ctx.r26.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82e8f128
	ctx.lr = 0x82E90CB8;
	sub_82E8F128(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ea0d68
	ctx.lr = 0x82E90CC4;
	sub_82EA0D68(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// li r27,0
	ctx.r27.s64 = 0;
	// beq 0x82e90cfc
	if (ctx.cr0.eq) goto loc_82E90CFC;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82e8e030
	ctx.lr = 0x82E90CD8;
	sub_82E8E030(ctx, base);
	// stw r3,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82e90d08
	if (!ctx.cr0.eq) goto loc_82E90D08;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E90CFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E90CFC:
	// lis r27,-32761
	ctx.r27.s64 = -2147024896;
	// ori r27,r27,14
	ctx.r27.u64 = ctx.r27.u64 | 14;
	// b 0x82e90d30
	goto loc_82E90D30;
loc_82E90D08:
	// li r11,72
	ctx.r11.s64 = 72;
	// sth r11,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
loc_82E90D30:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e8f250
	ctx.lr = 0x82E90D3C;
	sub_82E8F250(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E90D48"))) PPC_WEAK_FUNC(sub_82E90D48);
PPC_FUNC_IMPL(__imp__sub_82E90D48) {
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
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// sth r30,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r30.u16);
	// stb r30,18(r31)
	PPC_STORE_U8(ctx.r31.u32 + 18, ctx.r30.u8);
	// bl 0x82fa7cf0
	ctx.lr = 0x82E90D84;
	sub_82FA7CF0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,28904
	ctx.r11.s64 = ctx.r11.s64 + 28904;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
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

__attribute__((alias("__imp__sub_82E90DC4"))) PPC_WEAK_FUNC(sub_82E90DC4);
PPC_FUNC_IMPL(__imp__sub_82E90DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E90DC8"))) PPC_WEAK_FUNC(sub_82E90DC8);
PPC_FUNC_IMPL(__imp__sub_82E90DC8) {
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
	// blt cr6,0x82e90dfc
	if (ctx.cr6.lt) goto loc_82E90DFC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e90e18
	goto loc_82E90E18;
loc_82E90DFC:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82e90748
	ctx.lr = 0x82E90E04;
	sub_82E90748(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82e90e10
	if (!ctx.cr0.lt) goto loc_82E90E10;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_82E90E10:
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
loc_82E90E18:
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

__attribute__((alias("__imp__sub_82E90E30"))) PPC_WEAK_FUNC(sub_82E90E30);
PPC_FUNC_IMPL(__imp__sub_82E90E30) {
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
	// bl 0x82e907f8
	ctx.lr = 0x82E90E50;
	sub_82E907F8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e90e68
	if (ctx.cr0.eq) goto loc_82E90E68;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82e90e68
	if (ctx.cr6.eq) goto loc_82E90E68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8ee18
	ctx.lr = 0x82E90E68;
	sub_82E8EE18(ctx, base);
loc_82E90E68:
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

__attribute__((alias("__imp__sub_82E90E84"))) PPC_WEAK_FUNC(sub_82E90E84);
PPC_FUNC_IMPL(__imp__sub_82E90E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E90E88"))) PPC_WEAK_FUNC(sub_82E90E88);
PPC_FUNC_IMPL(__imp__sub_82E90E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82E90E90;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82e90a80
	ctx.lr = 0x82E90EA8;
	sub_82E90A80(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,27528
	ctx.r11.s64 = ctx.r11.s64 + 27528;
	// addi r10,r10,27504
	ctx.r10.s64 = ctx.r10.s64 + 27504;
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// addi r9,r9,27472
	ctx.r9.s64 = ctx.r9.s64 + 27472;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// sth r30,92(r31)
	PPC_STORE_U16(ctx.r31.u32 + 92, ctx.r30.u16);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// bl 0x82e8ee58
	ctx.lr = 0x82E90EE8;
	sub_82E8EE58(ctx, base);
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x82e90d48
	ctx.lr = 0x82E90EF0;
	sub_82E90D48(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82e90f28
	if (ctx.cr6.lt) goto loc_82E90F28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8f6e8
	ctx.lr = 0x82E90F04;
	sub_82E8F6E8(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// beq cr6,0x82e90f28
	if (ctx.cr6.eq) goto loc_82E90F28;
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E90F28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E90F28:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E90F34"))) PPC_WEAK_FUNC(sub_82E90F34);
PPC_FUNC_IMPL(__imp__sub_82E90F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E90F38"))) PPC_WEAK_FUNC(sub_82E90F38);
PPC_FUNC_IMPL(__imp__sub_82E90F38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82E90F40;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82e90f68
	if (!ctx.cr6.eq) goto loc_82E90F68;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82e91078
	goto loc_82E91078;
loc_82E90F68:
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// addi r27,r29,100
	ctx.r27.s64 = ctx.r29.s64 + 100;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e8eee0
	ctx.lr = 0x82E90F78;
	sub_82E8EEE0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,268
	ctx.r3.s64 = 268;
	// bl 0x82e8edd0
	ctx.lr = 0x82E90F90;
	sub_82E8EDD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e90fb0
	if (ctx.cr0.eq) goto loc_82E90FB0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// bl 0x82e90e88
	ctx.lr = 0x82E90FA4;
	sub_82E90E88(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82e90fb4
	goto loc_82E90FB4;
loc_82E90FB0:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82E90FB4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82e90fc8
	if (!ctx.cr6.eq) goto loc_82E90FC8;
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// b 0x82e9106c
	goto loc_82E9106C;
loc_82E90FC8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82e91054
	if (ctx.cr6.lt) goto loc_82E91054;
	// lhz r11,92(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 92);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r5,r29,80
	ctx.r5.s64 = ctx.r29.s64 + 80;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r10,1552
	ctx.r3.s64 = ctx.r10.s64 + 1552;
	// sth r11,92(r31)
	PPC_STORE_U16(ctx.r31.u32 + 92, ctx.r11.u16);
	// bl 0x82f1f848
	ctx.lr = 0x82E90FEC;
	sub_82F1F848(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82e91054
	if (ctx.cr0.lt) goto loc_82E91054;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ea0e40
	ctx.lr = 0x82E91000;
	sub_82EA0E40(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82e91054
	if (ctx.cr0.lt) goto loc_82E91054;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e90330
	ctx.lr = 0x82E91010;
	sub_82E90330(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82e91054
	if (ctx.cr0.lt) goto loc_82E91054;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e8fb20
	ctx.lr = 0x82E91024;
	sub_82E8FB20(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82e91054
	if (ctx.cr0.lt) goto loc_82E91054;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r10,27076
	ctx.r4.s64 = ctx.r10.s64 + 27076;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E9104C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82e9106c
	if (!ctx.cr0.lt) goto loc_82E9106C;
loc_82E91054:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E9106C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E9106C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e8f138
	ctx.lr = 0x82E91074;
	sub_82E8F138(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82E91078:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E91080"))) PPC_WEAK_FUNC(sub_82E91080);
PPC_FUNC_IMPL(__imp__sub_82E91080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82E91088;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82e910b0
	if (!ctx.cr6.eq) goto loc_82E910B0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82e9114c
	goto loc_82E9114C;
loc_82E910B0:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,268
	ctx.r3.s64 = 268;
	// bl 0x82e8edd0
	ctx.lr = 0x82E910C8;
	sub_82E8EDD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e910e8
	if (ctx.cr0.eq) goto loc_82E910E8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82e90e88
	ctx.lr = 0x82E910DC;
	sub_82E90E88(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82e910ec
	goto loc_82E910EC;
loc_82E910E8:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82E910EC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82e91100
	if (!ctx.cr6.eq) goto loc_82E91100;
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// b 0x82e91148
	goto loc_82E91148;
loc_82E91100:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82e91130
	if (ctx.cr6.lt) goto loc_82E91130;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r10,27076
	ctx.r4.s64 = ctx.r10.s64 + 27076;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E91128;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82e91148
	if (!ctx.cr0.lt) goto loc_82E91148;
loc_82E91130:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E91148;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E91148:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82E9114C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E91154"))) PPC_WEAK_FUNC(sub_82E91154);
PPC_FUNC_IMPL(__imp__sub_82E91154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E91158"))) PPC_WEAK_FUNC(sub_82E91158);
PPC_FUNC_IMPL(__imp__sub_82E91158) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82E91160;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82e91188
	if (ctx.cr6.eq) goto loc_82E91188;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82e91194
	if (!ctx.cr6.eq) goto loc_82E91194;
loc_82E91188:
	// lis r27,-32768
	ctx.r27.s64 = -2147483648;
	// ori r27,r27,16387
	ctx.r27.u64 = ctx.r27.u64 | 16387;
	// b 0x82e91264
	goto loc_82E91264;
loc_82E91194:
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e911b0
	if (ctx.cr6.lt) goto loc_82E911B0;
	// lis r27,-16371
	ctx.r27.s64 = -1072889856;
	// ori r27,r27,14015
	ctx.r27.u64 = ctx.r27.u64 | 14015;
	// b 0x82e91264
	goto loc_82E91264;
loc_82E911B0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,160
	ctx.r3.s64 = ctx.r3.s64 + 160;
	// bl 0x82e90dc8
	ctx.lr = 0x82E911BC;
	sub_82E90DC8(ctx, base);
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
	// bne 0x82e911dc
	if (!ctx.cr0.eq) goto loc_82E911DC;
	// lis r27,-16371
	ctx.r27.s64 = -1072889856;
	// ori r27,r27,14011
	ctx.r27.u64 = ctx.r27.u64 | 14011;
	// b 0x82e91264
	goto loc_82E91264;
loc_82E911DC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// lhz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 16);
	// sth r10,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r10.u16);
	// beq cr6,0x82e91264
	if (ctx.cr6.eq) goto loc_82E91264;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82e9122c
	if (!ctx.cr6.eq) goto loc_82E9122C;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82e9123c
	if (!ctx.cr6.gt) goto loc_82E9123C;
	// lis r27,-32761
	ctx.r27.s64 = -2147024896;
	// ori r27,r27,87
	ctx.r27.u64 = ctx.r27.u64 | 87;
	// b 0x82e91264
	goto loc_82E91264;
loc_82E9122C:
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82e91250
	if (!ctx.cr6.lt) goto loc_82E91250;
loc_82E9123C:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lis r27,-16371
	ctx.r27.s64 = -1072889856;
	// ori r27,r27,14001
	ctx.r27.u64 = ctx.r27.u64 | 14001;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x82e91264
	goto loc_82E91264;
loc_82E91250:
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,20(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x82fa77c0
	ctx.lr = 0x82E91264;
	sub_82FA77C0(ctx, base);
loc_82E91264:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E91270"))) PPC_WEAK_FUNC(sub_82E91270);
PPC_FUNC_IMPL(__imp__sub_82E91270) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x82E91278;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r23,0
	ctx.r23.s64 = 0;
	// std r4,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r4.u64);
	// clrlwi r11,r6,16
	ctx.r11.u64 = ctx.r6.u32 & 0xFFFF;
	// std r5,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r5.u64);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// mr r22,r23
	ctx.r22.u64 = ctx.r23.u64;
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// ble cr6,0x82e912c0
	if (!ctx.cr6.gt) goto loc_82E912C0;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x82e912c0
	if (ctx.cr6.eq) goto loc_82E912C0;
	// lis r22,-32761
	ctx.r22.s64 = -2147024896;
	// ori r22,r22,87
	ctx.r22.u64 = ctx.r22.u64 | 87;
	// b 0x82e91460
	goto loc_82E91460;
loc_82E912C0:
	// lwz r11,264(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e91348
	if (!ctx.cr6.gt) goto loc_82E91348;
	// addi r28,r29,160
	ctx.r28.s64 = ctx.r29.s64 + 160;
loc_82E912D4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e90dc8
	ctx.lr = 0x82E912E4;
	sub_82E90DC8(ctx, base);
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
	// beq 0x82e9132c
	if (ctx.cr0.eq) goto loc_82E9132C;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r8,r31,16
	ctx.r8.s64 = ctx.r31.s64 + 16;
loc_82E91304:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82e91324
	if (!ctx.cr0.eq) goto loc_82E91324;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82e91304
	if (!ctx.cr6.eq) goto loc_82E91304;
loc_82E91324:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82e91340
	if (ctx.cr0.eq) goto loc_82E91340;
loc_82E9132C:
	// lwz r11,264(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e912d4
	if (ctx.cr6.lt) goto loc_82E912D4;
loc_82E91340:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82e913a8
	if (!ctx.cr6.eq) goto loc_82E913A8;
loc_82E91348:
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
	ctx.lr = 0x82E91360;
	sub_82E8EDD0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82e91374
	if (!ctx.cr0.eq) goto loc_82E91374;
	// lis r22,-32761
	ctx.r22.s64 = -2147024896;
	// ori r22,r22,14
	ctx.r22.u64 = ctx.r22.u64 | 14;
	// b 0x82e91460
	goto loc_82E91460;
loc_82E91374:
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82E91384;
	sub_82FA7CF0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r29,160
	ctx.r3.s64 = ctx.r29.s64 + 160;
	// bl 0x82e90688
	ctx.lr = 0x82E91394;
	sub_82E90688(ctx, base);
	// mr. r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne 0x82e913a8
	if (!ctx.cr0.eq) goto loc_82E913A8;
	// lis r22,-32761
	ctx.r22.s64 = -2147024896;
	// ori r22,r22,14
	ctx.r22.u64 = ctx.r22.u64 | 14;
	// b 0x82e9143c
	goto loc_82E9143C;
loc_82E913A8:
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// sth r27,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r27.u16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x82e913e0
	if (ctx.cr6.eq) goto loc_82E913E0;
	// bl 0x82e8ee18
	ctx.lr = 0x82E913E0;
	sub_82E8EE18(ctx, base);
loc_82E913E0:
	// stw r23,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r23.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// stw r23,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r23.u32);
	// beq cr6,0x82e91430
	if (ctx.cr6.eq) goto loc_82E91430;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e8edd0
	ctx.lr = 0x82E91408;
	sub_82E8EDD0(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82e91420
	if (!ctx.cr0.eq) goto loc_82E91420;
	// lis r22,-32761
	ctx.r22.s64 = -2147024896;
	// ori r22,r22,14
	ctx.r22.u64 = ctx.r22.u64 | 14;
	// b 0x82e91434
	goto loc_82E91434;
loc_82E91420:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82E9142C;
	sub_82FA77C0(ctx, base);
	// stw r26,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r26.u32);
loc_82E91430:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_82E91434:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x82e91460
	if (!ctx.cr6.eq) goto loc_82E91460;
loc_82E9143C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82e91460
	if (ctx.cr6.eq) goto loc_82E91460;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e91454
	if (ctx.cr6.eq) goto loc_82E91454;
	// bl 0x82e8ee18
	ctx.lr = 0x82E91454;
	sub_82E8EE18(ctx, base);
loc_82E91454:
	// stw r23,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r23.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8ee18
	ctx.lr = 0x82E91460;
	sub_82E8EE18(ctx, base);
loc_82E91460:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E9146C"))) PPC_WEAK_FUNC(sub_82E9146C);
PPC_FUNC_IMPL(__imp__sub_82E9146C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E91470"))) PPC_WEAK_FUNC(sub_82E91470);
PPC_FUNC_IMPL(__imp__sub_82E91470) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82E91478;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e914e8
	if (!ctx.cr6.gt) goto loc_82E914E8;
	// addi r28,r3,160
	ctx.r28.s64 = ctx.r3.s64 + 160;
loc_82E91498:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e90dc8
	ctx.lr = 0x82E914A8;
	sub_82E90DC8(ctx, base);
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
	// beq 0x82e914d8
	if (ctx.cr0.eq) goto loc_82E914D8;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e914cc
	if (ctx.cr6.eq) goto loc_82E914CC;
	// bl 0x82e8ee18
	ctx.lr = 0x82E914CC;
	sub_82E8EE18(ctx, base);
loc_82E914CC:
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8ee18
	ctx.lr = 0x82E914D8;
	sub_82E8EE18(ctx, base);
loc_82E914D8:
	// lwz r11,264(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e91498
	if (ctx.cr6.lt) goto loc_82E91498;
loc_82E914E8:
	// addi r3,r29,160
	ctx.r3.s64 = ctx.r29.s64 + 160;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e6b440
	ctx.lr = 0x82E914F4;
	sub_82E6B440(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r27,264(r29)
	PPC_STORE_U32(ctx.r29.u32 + 264, ctx.r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E91504"))) PPC_WEAK_FUNC(sub_82E91504);
PPC_FUNC_IMPL(__imp__sub_82E91504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E91508"))) PPC_WEAK_FUNC(sub_82E91508);
PPC_FUNC_IMPL(__imp__sub_82E91508) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x82E91510;
	__savegprlr_22(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82e91538
	if (!ctx.cr6.eq) goto loc_82E91538;
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// ori r31,r31,16387
	ctx.r31.u64 = ctx.r31.u64 | 16387;
	// b 0x82e916e8
	goto loc_82E916E8;
loc_82E91538:
	// lwz r11,264(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e916e8
	if (ctx.cr6.eq) goto loc_82E916E8;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r26,160
	ctx.r30.s64 = ctx.r26.s64 + 160;
loc_82E9154C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e90dc8
	ctx.lr = 0x82E9155C;
	sub_82E90DC8(ctx, base);
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
	// beq 0x82e915c4
	if (ctx.cr0.eq) goto loc_82E915C4;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r11,r11,22
	ctx.r11.s64 = ctx.r11.s64 + 22;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x82e915c4
	if (ctx.cr6.lt) goto loc_82E915C4;
	// lwz r10,264(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 264);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82e9154c
	if (ctx.cr6.lt) goto loc_82E9154C;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82e8edd0
	ctx.lr = 0x82E915B0;
	sub_82E8EDD0(ctx, base);
	// mr. r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne 0x82e915d0
	if (!ctx.cr0.eq) goto loc_82E915D0;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x82e916e8
	goto loc_82E916E8;
loc_82E915C4:
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// ori r31,r31,65535
	ctx.r31.u64 = ctx.r31.u64 | 65535;
	// b 0x82e916e8
	goto loc_82E916E8;
loc_82E915D0:
	// lwz r11,264(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 264);
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e916b8
	if (!ctx.cr6.gt) goto loc_82E916B8;
	// addi r23,r26,160
	ctx.r23.s64 = ctx.r26.s64 + 160;
loc_82E915EC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82e90dc8
	ctx.lr = 0x82E915FC;
	sub_82E90DC8(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and. r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82e91700
	if (ctx.cr0.eq) goto loc_82E91700;
	// cmplwi cr6,r27,22
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 22, ctx.xer);
	// blt cr6,0x82e916f4
	if (ctx.cr6.lt) goto loc_82E916F4;
	// lhz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lhz r10,6(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// li r5,16
	ctx.r5.s64 = 16;
	// lwbrx r8,0,r30
	ctx.r8.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r30.u32));
	// rlwinm r9,r11,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// rlwinm r7,r10,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// ld r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// rlwimi r9,r11,8,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r7,r10,8,16,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// sth r9,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r9.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// sth r7,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, ctx.r7.u16);
	// std r6,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r6.u64);
	// bl 0x82fa77c0
	ctx.lr = 0x82E91658;
	sub_82FA77C0(ctx, base);
	// lhz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 16);
	// addi r29,r30,20
	ctx.r29.s64 = ctx.r30.s64 + 20;
	// rlwinm r10,r11,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// addi r27,r27,-22
	ctx.r27.s64 = ctx.r27.s64 + -22;
	// rlwimi r10,r11,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// sthu r10,16(r31)
	ea = 16 + ctx.r31.u32;
	PPC_STORE_U16(ea, ctx.r10.u16);
	ctx.r31.u32 = ea;
	// lwbrx r11,0,r29
	ctx.r11.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r29.u32));
	// stwu r11,2(r31)
	ea = 2 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r31.u32 = ea;
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r27,r5
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82e916f4
	if (ctx.cr6.lt) goto loc_82E916F4;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82e9169c
	if (ctx.cr6.eq) goto loc_82E9169C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x82fa77c0
	ctx.lr = 0x82E9169C;
	sub_82FA77C0(ctx, base);
loc_82E9169C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwz r10,264(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 264);
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// subf r27,r11,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r11.s64;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82e915ec
	if (ctx.cr6.lt) goto loc_82E915EC;
loc_82E916B8:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r4,r10,-5472
	ctx.r4.s64 = ctx.r10.s64 + -5472;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E916DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82E916E0:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82e8ee18
	ctx.lr = 0x82E916E8;
	sub_82E8EE18(ctx, base);
loc_82E916E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
loc_82E916F4:
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// ori r31,r31,65535
	ctx.r31.u64 = ctx.r31.u64 | 65535;
	// b 0x82e916e0
	goto loc_82E916E0;
loc_82E91700:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x82e916e0
	goto loc_82E916E0;
}

__attribute__((alias("__imp__sub_82E9170C"))) PPC_WEAK_FUNC(sub_82E9170C);
PPC_FUNC_IMPL(__imp__sub_82E9170C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E91710"))) PPC_WEAK_FUNC(sub_82E91710);
PPC_FUNC_IMPL(__imp__sub_82E91710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82E91718;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,24
	ctx.r27.s64 = ctx.r3.s64 + 24;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82e8eee0
	ctx.lr = 0x82E91730;
	sub_82E8EEE0(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82e91754
	if (!ctx.cr6.eq) goto loc_82E91754;
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// ori r30,r30,16387
	ctx.r30.u64 = ctx.r30.u64 | 16387;
loc_82E91740:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e8f138
	ctx.lr = 0x82E91748;
	sub_82E8F138(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_82E91754:
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// addi r5,r31,20
	ctx.r5.s64 = ctx.r31.s64 + 20;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lhz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// bl 0x82f20290
	ctx.lr = 0x82E91774;
	sub_82F20290(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82e917d4
	if (ctx.cr0.lt) goto loc_82E917D4;
	// addi r31,r31,-76
	ctx.r31.s64 = ctx.r31.s64 + -76;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E91798;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82e917d4
	if (ctx.cr0.lt) goto loc_82E917D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82e91508
	ctx.lr = 0x82E917AC;
	sub_82E91508(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82e917d4
	if (ctx.cr0.lt) goto loc_82E917D4;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// beq cr6,0x82e91740
	if (ctx.cr6.eq) goto loc_82E91740;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E917D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E917D4:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e91740
	if (ctx.cr6.eq) goto loc_82E91740;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E917F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// b 0x82e91740
	goto loc_82E91740;
}

__attribute__((alias("__imp__sub_82E917F8"))) PPC_WEAK_FUNC(sub_82E917F8);
PPC_FUNC_IMPL(__imp__sub_82E917F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x82E91800;
	__savegprlr_22(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
	// bl 0x82e9fe70
	ctx.lr = 0x82E91834;
	sub_82E9FE70(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82e91cec
	if (ctx.cr0.lt) goto loc_82E91CEC;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_82E9184C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82e9186c
	if (!ctx.cr0.eq) goto loc_82E9186C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82e9184c
	if (!ctx.cr6.eq) goto loc_82E9184C;
loc_82E9186C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82e918f8
	if (!ctx.cr0.eq) goto loc_82E918F8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e9a1a0
	ctx.lr = 0x82E9187C;
	sub_82E9A1A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e9a1c0
	ctx.lr = 0x82E91888;
	sub_82E9A1C0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r10,r11,22368
	ctx.r10.s64 = ctx.r11.s64 + 22368;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ld r3,22368(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22368);
	// ld r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// bl 0x82e648c8
	ctx.lr = 0x82E918A4;
	sub_82E648C8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82e91cec
	if (ctx.cr0.lt) goto loc_82E91CEC;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82e918c8
	if (!ctx.cr6.eq) goto loc_82E918C8;
	// lhz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e918c8
	if (ctx.cr0.eq) goto loc_82E918C8;
	// sth r22,16(r30)
	PPC_STORE_U16(ctx.r30.u32 + 16, ctx.r22.u16);
loc_82E918C8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f202d8
	ctx.lr = 0x82E918D4;
	sub_82F202D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82e91cec
	if (ctx.cr0.lt) goto loc_82E91CEC;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82E918E0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r4,r11,21792
	ctx.r4.s64 = ctx.r11.s64 + 21792;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82e91ce0
	goto loc_82E91CE0;
loc_82E918F8:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-16824
	ctx.r11.s64 = ctx.r11.s64 + -16824;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_82E91908:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82e91928
	if (!ctx.cr0.eq) goto loc_82E91928;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82e91908
	if (!ctx.cr6.eq) goto loc_82E91908;
loc_82E91928:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82e91af0
	if (!ctx.cr0.eq) goto loc_82E91AF0;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82e9a1a0
	ctx.lr = 0x82E91944;
	sub_82E9A1A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e9a1c0
	ctx.lr = 0x82E91950;
	sub_82E9A1C0(ctx, base);
	// cmplwi cr6,r3,11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 11, ctx.xer);
	// bge cr6,0x82e91964
	if (!ctx.cr6.lt) goto loc_82E91964;
loc_82E91958:
	// lis r31,-16371
	ctx.r31.s64 = -1072889856;
	// ori r31,r31,15002
	ctx.r31.u64 = ctx.r31.u64 | 15002;
	// b 0x82e91cec
	goto loc_82E91CEC;
loc_82E91964:
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// addi r10,r3,-11
	ctx.r10.s64 = ctx.r3.s64 + -11;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e91958
	if (ctx.cr0.eq) goto loc_82E91958;
	// lwz r11,11(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11);
	// addi r29,r31,11
	ctx.r29.s64 = ctx.r31.s64 + 11;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82e91958
	if (!ctx.cr6.eq) goto loc_82E91958;
	// cmplwi cr6,r11,40
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 40, ctx.xer);
	// blt cr6,0x82e91958
	if (ctx.cr6.lt) goto loc_82E91958;
	// li r30,88
	ctx.r30.s64 = 88;
	// ble cr6,0x82e919a0
	if (!ctx.cr6.gt) goto loc_82E919A0;
	// addi r30,r11,48
	ctx.r30.s64 = ctx.r11.s64 + 48;
	// cmplwi cr6,r30,88
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 88, ctx.xer);
	// blt cr6,0x82e91958
	if (ctx.cr6.lt) goto loc_82E91958;
loc_82E919A0:
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
	ctx.lr = 0x82E919B8;
	sub_82E8EDD0(ctx, base);
	// mr. r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne 0x82e919cc
	if (!ctx.cr0.eq) goto loc_82E919CC;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x82e91cec
	goto loc_82E91CEC;
loc_82E919CC:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82E919DC;
	sub_82FA7CF0(ctx, base);
	// stw r22,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r22.u32);
	// stw r22,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r22.u32);
	// rotlwi r10,r22,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r22.u32, 0);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r11,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r11.u32);
	// rotlwi r11,r22,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r22.u32, 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,12(r25)
	PPC_STORE_U32(ctx.r25.u32 + 12, ctx.r9.u32);
	// lwz r9,8(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// lwz r8,12(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// stw r11,16(r25)
	PPC_STORE_U32(ctx.r25.u32 + 16, ctx.r11.u32);
	// stw r10,20(r25)
	PPC_STORE_U32(ctx.r25.u32 + 20, ctx.r10.u32);
	// stw r27,32(r25)
	PPC_STORE_U32(ctx.r25.u32 + 32, ctx.r27.u32);
	// stw r9,24(r25)
	PPC_STORE_U32(ctx.r25.u32 + 24, ctx.r9.u32);
	// stw r8,28(r25)
	PPC_STORE_U32(ctx.r25.u32 + 28, ctx.r8.u32);
	// stw r22,36(r25)
	PPC_STORE_U32(ctx.r25.u32 + 36, ctx.r22.u32);
	// beq cr6,0x82e91a44
	if (ctx.cr6.eq) goto loc_82E91A44;
	// std r22,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r22.u64);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e97aa8
	ctx.lr = 0x82E91A34;
	sub_82E97AA8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82e91cec
	if (ctx.cr0.lt) goto loc_82E91CEC;
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// b 0x82e91a68
	goto loc_82E91A68;
loc_82E91A44:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,18928
	ctx.r11.u64 = ctx.r11.u64 | 18928;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82e91a60
	if (!ctx.cr6.gt) goto loc_82E91A60;
	// lis r11,5
	ctx.r11.s64 = 327680;
	// ori r11,r11,5653
	ctx.r11.u64 = ctx.r11.u64 | 5653;
	// b 0x82e91a68
	goto loc_82E91A68;
loc_82E91A60:
	// lis r11,10
	ctx.r11.s64 = 655360;
	// ori r11,r11,11306
	ctx.r11.u64 = ctx.r11.u64 | 11306;
loc_82E91A68:
	// std r11,40(r25)
	PPC_STORE_U64(ctx.r25.u32 + 40, ctx.r11.u64);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r25,48
	ctx.r3.s64 = ctx.r25.s64 + 48;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82fa77c0
	ctx.lr = 0x82E91A7C;
	sub_82FA77C0(ctx, base);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82e8f778
	ctx.lr = 0x82E91A90;
	sub_82E8F778(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82e91cec
	if (ctx.cr0.lt) goto loc_82E91CEC;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r10,r11,22336
	ctx.r10.s64 = ctx.r11.s64 + 22336;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// ld r3,22336(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22336);
	// ld r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// bl 0x82e648c8
	ctx.lr = 0x82E91AB4;
	sub_82E648C8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82e91cec
	if (ctx.cr0.lt) goto loc_82E91CEC;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,2
	ctx.r7.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82e6aa28
	ctx.lr = 0x82E91AE0;
	sub_82E6AA28(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82e91cec
	if (ctx.cr0.lt) goto loc_82E91CEC;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82e918e0
	goto loc_82E918E0;
loc_82E91AF0:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-16776
	ctx.r11.s64 = ctx.r11.s64 + -16776;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_82E91B00:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82e91b20
	if (!ctx.cr0.eq) goto loc_82E91B20;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82e91b00
	if (!ctx.cr6.eq) goto loc_82E91B00;
loc_82E91B20:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82e91b44
	if (!ctx.cr0.eq) goto loc_82E91B44;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82e6a800
	ctx.lr = 0x82E91B30;
	sub_82E6A800(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82e91cec
	if (ctx.cr0.lt) goto loc_82E91CEC;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r5,r11,23376
	ctx.r5.s64 = ctx.r11.s64 + 23376;
	// b 0x82e91ccc
	goto loc_82E91CCC;
loc_82E91B44:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,28496
	ctx.r11.s64 = ctx.r11.s64 + 28496;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_82E91B54:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82e91b74
	if (!ctx.cr0.eq) goto loc_82E91B74;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82e91b54
	if (!ctx.cr6.eq) goto loc_82E91B54;
loc_82E91B74:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82e91bf0
	if (!ctx.cr0.eq) goto loc_82E91BF0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e9a1a0
	ctx.lr = 0x82E91B84;
	sub_82E9A1A0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// addi r11,r11,1552
	ctx.r11.s64 = ctx.r11.s64 + 1552;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
loc_82E91B94:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82e91bb4
	if (!ctx.cr0.eq) goto loc_82E91BB4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82e91b94
	if (!ctx.cr6.eq) goto loc_82E91B94;
loc_82E91BB4:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bne 0x82e91bd8
	if (!ctx.cr0.eq) goto loc_82E91BD8;
	// bl 0x82e6a800
	ctx.lr = 0x82E91BC4;
	sub_82E6A800(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82e91cec
	if (ctx.cr0.lt) goto loc_82E91CEC;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r5,r11,23440
	ctx.r5.s64 = ctx.r11.s64 + 23440;
	// b 0x82e91ccc
	goto loc_82E91CCC;
loc_82E91BD8:
	// bl 0x82e6a800
	ctx.lr = 0x82E91BDC;
	sub_82E6A800(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82e91cec
	if (ctx.cr0.lt) goto loc_82E91CEC;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r5,r11,23408
	ctx.r5.s64 = ctx.r11.s64 + 23408;
	// b 0x82e91ccc
	goto loc_82E91CCC;
loc_82E91BF0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,28512
	ctx.r11.s64 = ctx.r11.s64 + 28512;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_82E91C00:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82e91c20
	if (!ctx.cr0.eq) goto loc_82E91C20;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82e91c00
	if (!ctx.cr6.eq) goto loc_82E91C00;
loc_82E91C20:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82e91c44
	if (!ctx.cr0.eq) goto loc_82E91C44;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82e6a800
	ctx.lr = 0x82E91C30;
	sub_82E6A800(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82e91cec
	if (ctx.cr0.lt) goto loc_82E91CEC;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r5,r11,23424
	ctx.r5.s64 = ctx.r11.s64 + 23424;
	// b 0x82e91ccc
	goto loc_82E91CCC;
loc_82E91C44:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-16792
	ctx.r11.s64 = ctx.r11.s64 + -16792;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_82E91C54:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82e91c74
	if (!ctx.cr0.eq) goto loc_82E91C74;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82e91c54
	if (!ctx.cr6.eq) goto loc_82E91C54;
loc_82E91C74:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82e91cb4
	if (ctx.cr0.eq) goto loc_82E91CB4;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-16808
	ctx.r11.s64 = ctx.r11.s64 + -16808;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_82E91C8C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82e91cac
	if (!ctx.cr0.eq) goto loc_82E91CAC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82e91c8c
	if (!ctx.cr6.eq) goto loc_82E91C8C;
loc_82E91CAC:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82e91cec
	if (!ctx.cr0.eq) goto loc_82E91CEC;
loc_82E91CB4:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82e6a800
	ctx.lr = 0x82E91CBC;
	sub_82E6A800(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82e91cec
	if (ctx.cr0.lt) goto loc_82E91CEC;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r5,r11,23392
	ctx.r5.s64 = ctx.r11.s64 + 23392;
loc_82E91CCC:
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r4,r10,22512
	ctx.r4.s64 = ctx.r10.s64 + 22512;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
loc_82E91CE0:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E91CE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82E91CEC:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e91d0c
	if (ctx.cr6.eq) goto loc_82E91D0C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E91D08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
loc_82E91D0C:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e91d2c
	if (ctx.cr6.eq) goto loc_82E91D2C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E91D28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
loc_82E91D2C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82e91d3c
	if (ctx.cr6.eq) goto loc_82E91D3C;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82e8ee18
	ctx.lr = 0x82E91D3C;
	sub_82E8EE18(ctx, base);
loc_82E91D3C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E91D48"))) PPC_WEAK_FUNC(sub_82E91D48);
PPC_FUNC_IMPL(__imp__sub_82E91D48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7658
	ctx.lr = 0x82E91D50;
	__savegprlr_20(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// bl 0x82e90a80
	ctx.lr = 0x82E91D70;
	sub_82E90A80(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,27528
	ctx.r11.s64 = ctx.r11.s64 + 27528;
	// addi r10,r10,27504
	ctx.r10.s64 = ctx.r10.s64 + 27504;
	// stw r30,84(r28)
	PPC_STORE_U32(ctx.r28.u32 + 84, ctx.r30.u32);
	// addi r9,r9,27472
	ctx.r9.s64 = ctx.r9.s64 + 27472;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// stw r10,76(r28)
	PPC_STORE_U32(ctx.r28.u32 + 76, ctx.r10.u32);
	// addi r3,r28,100
	ctx.r3.s64 = ctx.r28.s64 + 100;
	// stw r9,80(r28)
	PPC_STORE_U32(ctx.r28.u32 + 80, ctx.r9.u32);
	// addi r29,r28,92
	ctx.r29.s64 = ctx.r28.s64 + 92;
	// stw r30,88(r28)
	PPC_STORE_U32(ctx.r28.u32 + 88, ctx.r30.u32);
	// addi r20,r28,96
	ctx.r20.s64 = ctx.r28.s64 + 96;
	// sth r30,92(r28)
	PPC_STORE_U16(ctx.r28.u32 + 92, ctx.r30.u16);
	// stw r30,96(r28)
	PPC_STORE_U32(ctx.r28.u32 + 96, ctx.r30.u32);
	// bl 0x82e8ee58
	ctx.lr = 0x82E91DB8;
	sub_82E8EE58(ctx, base);
	// addi r3,r28,160
	ctx.r3.s64 = ctx.r28.s64 + 160;
	// bl 0x82e90d48
	ctx.lr = 0x82E91DC0;
	sub_82E90D48(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82e92300
	if (ctx.cr6.lt) goto loc_82E92300;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e8f6e8
	ctx.lr = 0x82E91DD4;
	sub_82E8F6E8(ctx, base);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// bne cr6,0x82e91df0
	if (!ctx.cr6.eq) goto loc_82E91DF0;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,87
	ctx.r11.u64 = ctx.r11.u64 | 87;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82e92300
	goto loc_82E92300;
loc_82E91DF0:
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// bl 0x82e9a160
	ctx.lr = 0x82E91E0C;
	sub_82E9A160(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82e92284
	if (ctx.cr0.lt) goto loc_82E92284;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82e91e5c
	if (ctx.cr6.eq) goto loc_82E91E5C;
	// sth r30,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r30.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82e97a80
	ctx.lr = 0x82E91E30;
	sub_82E97A80(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82e91e4c
	if (ctx.cr0.lt) goto loc_82E91E4C;
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82e91e5c
	if (ctx.cr6.eq) goto loc_82E91E5C;
loc_82E91E4C:
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,87
	ctx.r11.u64 = ctx.r11.u64 | 87;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82e92284
	goto loc_82E92284;
loc_82E91E5C:
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82ea0058
	ctx.lr = 0x82E91E6C;
	sub_82EA0058(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82e92284
	if (ctx.cr0.lt) goto loc_82E92284;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lwz r5,124(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,-5488
	ctx.r4.s64 = ctx.r11.s64 + -5488;
	// bl 0x82ea0fa0
	ctx.lr = 0x82E91E8C;
	sub_82EA0FA0(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82e92284
	if (ctx.cr0.lt) goto loc_82E92284;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// beq cr6,0x82e91f4c
	if (ctx.cr6.eq) goto loc_82E91F4C;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82e979e0
	ctx.lr = 0x82E91EC4;
	sub_82E979E0(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82e92284
	if (ctx.cr0.lt) goto loc_82E92284;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82e97968
	ctx.lr = 0x82E91EDC;
	sub_82E97968(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82e92284
	if (ctx.cr0.lt) goto loc_82E92284;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82e97a08
	ctx.lr = 0x82E91EF4;
	sub_82E97A08(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82e92284
	if (ctx.cr0.lt) goto loc_82E92284;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82e97990
	ctx.lr = 0x82E91F0C;
	sub_82E97990(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82e92284
	if (ctx.cr0.lt) goto loc_82E92284;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82e97a30
	ctx.lr = 0x82E91F24;
	sub_82E97A30(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82e92284
	if (ctx.cr0.lt) goto loc_82E92284;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82e979b8
	ctx.lr = 0x82E91F3C;
	sub_82E979B8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82e92284
	if (ctx.cr0.lt) goto loc_82E92284;
	// b 0x82e921d0
	goto loc_82E921D0;
loc_82E91F4C:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E91F64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82e92284
	if (ctx.cr0.lt) goto loc_82E92284;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r5,r11,28608
	ctx.r5.s64 = ctx.r11.s64 + 28608;
	// addi r4,r10,27952
	ctx.r4.s64 = ctx.r10.s64 + 27952;
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// bl 0x82e96e80
	ctx.lr = 0x82E91F8C;
	sub_82E96E80(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82e92284
	if (ctx.cr0.lt) goto loc_82E92284;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lhz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x82e96f90
	ctx.lr = 0x82E91FAC;
	sub_82E96F90(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82e92284
	if (ctx.cr0.lt) goto loc_82E92284;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addi r9,r11,1552
	ctx.r9.s64 = ctx.r11.s64 + 1552;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r11,1552(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1552);
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// mr r24,r30
	ctx.r24.u64 = ctx.r30.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r9,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// bl 0x82e9fe70
	ctx.lr = 0x82E91FF8;
	sub_82E9FE70(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82e92284
	if (ctx.cr0.lt) goto loc_82E92284;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addi r11,r11,-16824
	ctx.r11.s64 = ctx.r11.s64 + -16824;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_82E92014:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82e92034
	if (!ctx.cr0.eq) goto loc_82E92034;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82e92014
	if (!ctx.cr6.eq) goto loc_82E92014;
loc_82E92034:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82e921b4
	if (!ctx.cr0.eq) goto loc_82E921B4;
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// addi r4,r11,28544
	ctx.r4.s64 = ctx.r11.s64 + 28544;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E9205C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82e92284
	if (ctx.cr0.lt) goto loc_82E92284;
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,24
	ctx.r4.s64 = ctx.r11.s64 + 24;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E9208C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82e92198
	if (ctx.cr0.lt) goto loc_82E92198;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x82f1e150
	ctx.lr = 0x82E920A8;
	sub_82F1E150(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82e92198
	if (ctx.cr0.lt) goto loc_82E92198;
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e92198
	if (ctx.cr0.eq) goto loc_82E92198;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e92198
	if (ctx.cr6.eq) goto loc_82E92198;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r27,r11,27264
	ctx.r27.s64 = ctx.r11.s64 + 27264;
loc_82E920D4:
	// li r11,48
	ctx.r11.s64 = 48;
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// sth r11,152(r1)
	PPC_STORE_U16(ctx.r1.u32 + 152, ctx.r11.u16);
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stw r10,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// stw r9,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82f1ee18
	ctx.lr = 0x82E92104;
	sub_82F1EE18(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82e92180
	if (ctx.cr0.lt) goto loc_82E92180;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82e92180
	if (!ctx.cr6.eq) goto loc_82E92180;
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e92180
	if (ctx.cr6.eq) goto loc_82E92180;
	// addi r4,r27,-20
	ctx.r4.s64 = ctx.r27.s64 + -20;
	// bl 0x82fa6640
	ctx.lr = 0x82E92130;
	sub_82FA6640(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e9214c
	if (!ctx.cr0.eq) goto loc_82E9214C;
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// li r25,1
	ctx.r25.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x82e92178
	goto loc_82E92178;
loc_82E9214C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// bl 0x82fa6640
	ctx.lr = 0x82E92158;
	sub_82FA6640(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e92170
	if (!ctx.cr0.eq) goto loc_82E92170;
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// li r24,1
	ctx.r24.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_82E92170:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x82e92180
	if (ctx.cr6.eq) goto loc_82E92180;
loc_82E92178:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x82e92198
	if (!ctx.cr6.eq) goto loc_82E92198;
loc_82E92180:
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
	// blt cr6,0x82e920d4
	if (ctx.cr6.lt) goto loc_82E920D4;
loc_82E92198:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// beq cr6,0x82e921b4
	if (ctx.cr6.eq) goto loc_82E921B4;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x82e921b4
	if (ctx.cr6.eq) goto loc_82E921B4;
	// stw r21,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r21.u32);
	// b 0x82e921c8
	goto loc_82E921C8;
loc_82E921B4:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rotlwi r11,r21,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r21.u32, 0);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_82E921C8:
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
loc_82E921D0:
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e917f8
	ctx.lr = 0x82E921E8;
	sub_82E917F8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82e92284
	if (ctx.cr0.lt) goto loc_82E92284;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r6,12
	ctx.r6.s64 = 12;
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r4,r10,-6656
	ctx.r4.s64 = ctx.r10.s64 + -6656;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stw r9,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// stw r8,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r8.u32);
	// bl 0x82e6cd68
	ctx.lr = 0x82E92224;
	sub_82E6CD68(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82e92284
	if (ctx.cr0.lt) goto loc_82E92284;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r6,12
	ctx.r6.s64 = 12;
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r4,r10,-6640
	ctx.r4.s64 = ctx.r10.s64 + -6640;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stw r9,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// stw r8,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r8.u32);
	// bl 0x82e6cd68
	ctx.lr = 0x82E92260;
	sub_82E6CD68(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82e92284
	if (ctx.cr0.lt) goto loc_82E92284;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82e92284
	if (ctx.cr6.eq) goto loc_82E92284;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e8fe60
	ctx.lr = 0x82E92280;
	sub_82E8FE60(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82E92284:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e922a4
	if (ctx.cr6.eq) goto loc_82E922A4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E922A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
loc_82E922A4:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e922c4
	if (ctx.cr6.eq) goto loc_82E922C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E922C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
loc_82E922C4:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e922e4
	if (ctx.cr6.eq) goto loc_82E922E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E922E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
loc_82E922E4:
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e92300
	if (ctx.cr6.eq) goto loc_82E92300;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E92300;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E92300:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x82fa76a8
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E9230C"))) PPC_WEAK_FUNC(sub_82E9230C);
PPC_FUNC_IMPL(__imp__sub_82E9230C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E92310"))) PPC_WEAK_FUNC(sub_82E92310);
PPC_FUNC_IMPL(__imp__sub_82E92310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82E92318;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82e92348
	if (!ctx.cr6.eq) goto loc_82E92348;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82e923ec
	goto loc_82E923EC;
loc_82E92348:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,268
	ctx.r3.s64 = 268;
	// bl 0x82e8edd0
	ctx.lr = 0x82E92360;
	sub_82E8EDD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e92388
	if (ctx.cr0.eq) goto loc_82E92388;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82e91d48
	ctx.lr = 0x82E9237C;
	sub_82E91D48(ctx, base);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82e9238c
	goto loc_82E9238C;
loc_82E92388:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82E9238C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82e923a0
	if (!ctx.cr6.eq) goto loc_82E923A0;
	// lis r28,-32761
	ctx.r28.s64 = -2147024896;
	// ori r28,r28,14
	ctx.r28.u64 = ctx.r28.u64 | 14;
	// b 0x82e923e8
	goto loc_82E923E8;
loc_82E923A0:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x82e923d0
	if (ctx.cr6.lt) goto loc_82E923D0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r10,27076
	ctx.r4.s64 = ctx.r10.s64 + 27076;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E923C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bge 0x82e923e8
	if (!ctx.cr0.lt) goto loc_82E923E8;
loc_82E923D0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E923E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E923E8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82E923EC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E923F4"))) PPC_WEAK_FUNC(sub_82E923F4);
PPC_FUNC_IMPL(__imp__sub_82E923F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E923F8"))) PPC_WEAK_FUNC(sub_82E923F8);
PPC_FUNC_IMPL(__imp__sub_82E923F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82E92400;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bne cr6,0x82e92438
	if (!ctx.cr6.eq) goto loc_82E92438;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,87
	ctx.r11.u64 = ctx.r11.u64 | 87;
loc_82E92430:
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x82e9248c
	goto loc_82E9248C;
loc_82E92438:
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// rlwinm r3,r30,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82e92450
	if (!ctx.cr6.gt) goto loc_82E92450;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82E92450:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e8edd0
	ctx.lr = 0x82E92464;
	sub_82E8EDD0(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82e9247c
	if (!ctx.cr0.eq) goto loc_82E9247C;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// b 0x82e92430
	goto loc_82E92430;
loc_82E9247C:
	// rlwinm r5,r30,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fa7cf0
	ctx.lr = 0x82E92488;
	sub_82FA7CF0(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_82E9248C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E92498"))) PPC_WEAK_FUNC(sub_82E92498);
PPC_FUNC_IMPL(__imp__sub_82E92498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82E924A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82e924e0
	if (!ctx.cr6.lt) goto loc_82E924E0;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,87
	ctx.r11.u64 = ctx.r11.u64 | 87;
loc_82E924D8:
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x82e92544
	goto loc_82E92544;
loc_82E924E0:
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82e924f8
	if (!ctx.cr6.gt) goto loc_82E924F8;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82E924F8:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e8edd0
	ctx.lr = 0x82E9250C;
	sub_82E8EDD0(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82e92524
	if (!ctx.cr0.eq) goto loc_82E92524;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// b 0x82e924d8
	goto loc_82E924D8;
loc_82E92524:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82fa77c0
	ctx.lr = 0x82E92534;
	sub_82FA77C0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82E92544:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E92550"))) PPC_WEAK_FUNC(sub_82E92550);
PPC_FUNC_IMPL(__imp__sub_82E92550) {
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
	// bne cr6,0x82e92574
	if (!ctx.cr6.eq) goto loc_82E92574;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82e92610
	goto loc_82E92610;
loc_82E92574:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r11,27092
	ctx.r10.s64 = ctx.r11.s64 + 27092;
	// stw r31,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r31.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r9,r4,16
	ctx.r9.s64 = ctx.r4.s64 + 16;
loc_82E9258C:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82e925ac
	if (!ctx.cr0.eq) goto loc_82E925AC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82e9258c
	if (!ctx.cr6.eq) goto loc_82E9258C;
loc_82E925AC:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82e925f8
	if (ctx.cr0.eq) goto loc_82E925F8;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,4652
	ctx.r10.s64 = ctx.r10.s64 + 4652;
	// addi r8,r4,16
	ctx.r8.s64 = ctx.r4.s64 + 16;
loc_82E925C4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82e925e4
	if (!ctx.cr0.eq) goto loc_82E925E4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82e925c4
	if (!ctx.cr6.eq) goto loc_82E925C4;
loc_82E925E4:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82e925f8
	if (ctx.cr0.eq) goto loc_82E925F8;
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// ori r31,r31,16386
	ctx.r31.u64 = ctx.r31.u64 | 16386;
	// b 0x82e9260c
	goto loc_82E9260C;
loc_82E925F8:
	// stw r3,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E9260C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E9260C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82E92610:
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

__attribute__((alias("__imp__sub_82E92624"))) PPC_WEAK_FUNC(sub_82E92624);
PPC_FUNC_IMPL(__imp__sub_82E92624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E92628"))) PPC_WEAK_FUNC(sub_82E92628);
PPC_FUNC_IMPL(__imp__sub_82E92628) {
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
loc_82E9263C:
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
	// bne 0x82e9263c
	if (!ctx.cr0.eq) goto loc_82E9263C;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82e92680
	if (!ctx.cr6.eq) goto loc_82E92680;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e92680
	if (ctx.cr6.eq) goto loc_82E92680;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E92680;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E92680:
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

__attribute__((alias("__imp__sub_82E92698"))) PPC_WEAK_FUNC(sub_82E92698);
PPC_FUNC_IMPL(__imp__sub_82E92698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82E926A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,-6560
	ctx.r11.s64 = ctx.r11.s64 + -6560;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
loc_82E926BC:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82e926dc
	if (!ctx.cr0.eq) goto loc_82E926DC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82e926bc
	if (!ctx.cr6.eq) goto loc_82E926BC;
loc_82E926DC:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82e92798
	if (ctx.cr0.eq) goto loc_82E92798;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r11,r11,-6544
	ctx.r11.s64 = ctx.r11.s64 + -6544;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_82E926F4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82e92714
	if (!ctx.cr0.eq) goto loc_82E92714;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82e926f4
	if (!ctx.cr6.eq) goto loc_82E926F4;
loc_82E92714:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82e92798
	if (ctx.cr0.eq) goto loc_82E92798;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r11,r11,-6528
	ctx.r11.s64 = ctx.r11.s64 + -6528;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_82E9272C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82e9274c
	if (!ctx.cr0.eq) goto loc_82E9274C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82e9272c
	if (!ctx.cr6.eq) goto loc_82E9272C;
loc_82E9274C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82e92798
	if (ctx.cr0.eq) goto loc_82E92798;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r11,r11,-6512
	ctx.r11.s64 = ctx.r11.s64 + -6512;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_82E92764:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82e92784
	if (!ctx.cr0.eq) goto loc_82E92784;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82e92764
	if (!ctx.cr6.eq) goto loc_82E92764;
loc_82E92784:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82e92798
	if (ctx.cr0.eq) goto loc_82E92798;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82e927d0
	goto loc_82E927D0;
loc_82E92798:
	// addi r30,r29,8
	ctx.r30.s64 = ctx.r29.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e8eee0
	ctx.lr = 0x82E927A4;
	sub_82E8EEE0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,68(r29)
	PPC_STORE_U32(ctx.r29.u32 + 68, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,76(r29)
	PPC_STORE_U32(ctx.r29.u32 + 76, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,80(r29)
	PPC_STORE_U32(ctx.r29.u32 + 80, ctx.r11.u32);
	// bl 0x82e8f138
	ctx.lr = 0x82E927CC;
	sub_82E8F138(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E927D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E927D8"))) PPC_WEAK_FUNC(sub_82E927D8);
PPC_FUNC_IMPL(__imp__sub_82E927D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82E927E0;
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
	// bne cr6,0x82e92800
	if (!ctx.cr6.eq) goto loc_82E92800;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82e92820
	goto loc_82E92820;
loc_82E92800:
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8eee0
	ctx.lr = 0x82E9280C;
	sub_82E8EEE0(ctx, base);
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x82e8f138
	ctx.lr = 0x82E9281C;
	sub_82E8F138(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E92820:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E92828"))) PPC_WEAK_FUNC(sub_82E92828);
PPC_FUNC_IMPL(__imp__sub_82E92828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82E92830;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82e9285c
	if (!ctx.cr6.eq) goto loc_82E9285C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82e92920
	goto loc_82E92920;
loc_82E9285C:
	// lwz r27,0(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r25,r30,8
	ctx.r25.s64 = ctx.r30.s64 + 8;
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82e8eee0
	ctx.lr = 0x82E92870;
	sub_82E8EEE0(ctx, base);
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x82e92888
	if (ctx.cr6.gt) goto loc_82E92888;
	// lis r26,-32761
	ctx.r26.s64 = -2147024896;
	// ori r26,r26,87
	ctx.r26.u64 = ctx.r26.u64 | 87;
	// b 0x82e92914
	goto loc_82E92914;
loc_82E92888:
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82e928e0
	if (!ctx.cr6.lt) goto loc_82E928E0;
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e928f8
	if (ctx.cr6.eq) goto loc_82E928F8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82e92914
	if (ctx.cr6.eq) goto loc_82E92914;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82e928ec
	if (!ctx.cr6.lt) goto loc_82E928EC;
	// rlwinm r5,r27,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82fa77c0
	ctx.lr = 0x82E928D4;
	sub_82FA77C0(ctx, base);
	// lis r26,-16371
	ctx.r26.s64 = -1072889856;
	// ori r26,r26,14001
	ctx.r26.u64 = ctx.r26.u64 | 14001;
	// b 0x82e92914
	goto loc_82E92914;
loc_82E928E0:
	// lis r26,-32768
	ctx.r26.s64 = -2147483648;
	// ori r26,r26,65535
	ctx.r26.u64 = ctx.r26.u64 | 65535;
	// b 0x82e92914
	goto loc_82E92914;
loc_82E928EC:
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82fa77c0
	ctx.lr = 0x82E928F4;
	sub_82FA77C0(ctx, base);
	// b 0x82e92914
	goto loc_82E92914;
loc_82E928F8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// beq cr6,0x82e92914
	if (ctx.cr6.eq) goto loc_82E92914;
	// rlwinm r5,r27,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82E92914;
	sub_82FA7CF0(ctx, base);
loc_82E92914:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82e8f138
	ctx.lr = 0x82E9291C;
	sub_82E8F138(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82E92920:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E92928"))) PPC_WEAK_FUNC(sub_82E92928);
PPC_FUNC_IMPL(__imp__sub_82E92928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82E92930;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r26,r3,8
	ctx.r26.s64 = ctx.r3.s64 + 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// bl 0x82e8eee0
	ctx.lr = 0x82E92950;
	sub_82E8EEE0(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x82e92968
	if (ctx.cr6.gt) goto loc_82E92968;
loc_82E9295C:
	// lis r27,-32761
	ctx.r27.s64 = -2147024896;
	// ori r27,r27,87
	ctx.r27.u64 = ctx.r27.u64 | 87;
	// b 0x82e92a90
	goto loc_82E92A90;
loc_82E92968:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82e92998
	if (!ctx.cr6.lt) goto loc_82E92998;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r7,127
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 127, ctx.xer);
	// blt cr6,0x82e929a4
	if (ctx.cr6.lt) goto loc_82E929A4;
	// lis r27,-16371
	ctx.r27.s64 = -1072889856;
	// ori r27,r27,14002
	ctx.r27.u64 = ctx.r27.u64 | 14002;
	// b 0x82e92a90
	goto loc_82E92A90;
loc_82E92998:
	// lis r27,-32768
	ctx.r27.s64 = -2147483648;
	// ori r27,r27,65535
	ctx.r27.u64 = ctx.r27.u64 | 65535;
	// b 0x82e92a90
	goto loc_82E92A90;
loc_82E929A4:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82e929dc
	if (ctx.cr6.eq) goto loc_82E929DC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r9,r28,16
	ctx.r9.u64 = ctx.r28.u32 & 0xFFFF;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E929BC:
	// lhzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82e9295c
	if (ctx.cr6.eq) goto loc_82E9295C;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82e929bc
	if (ctx.cr6.lt) goto loc_82E929BC;
loc_82E929DC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82e92998
	if (ctx.cr6.gt) goto loc_82E92998;
	// bne cr6,0x82e92a74
	if (!ctx.cr6.eq) goto loc_82E92A74;
	// mulli r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 * 3;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// ori r11,r10,65535
	ctx.r11.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r29,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82e92a10
	if (!ctx.cr6.gt) goto loc_82E92A10;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82E92A10:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e8edd0
	ctx.lr = 0x82E92A24;
	sub_82E8EDD0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82e92a38
	if (!ctx.cr0.eq) goto loc_82E92A38;
	// lis r27,-32761
	ctx.r27.s64 = -2147024896;
	// ori r27,r27,14
	ctx.r27.u64 = ctx.r27.u64 | 14;
	// b 0x82e92a90
	goto loc_82E92A90;
loc_82E92A38:
	// rlwinm r5,r29,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82E92A48;
	sub_82FA7CF0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82fa77c0
	ctx.lr = 0x82E92A5C;
	sub_82FA77C0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e92a6c
	if (ctx.cr6.eq) goto loc_82E92A6C;
	// bl 0x82e8ee18
	ctx.lr = 0x82E92A6C;
	sub_82E8EE18(ctx, base);
loc_82E92A6C:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
loc_82E92A74:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r28,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r28.u16);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82E92A90:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e8f138
	ctx.lr = 0x82E92A98;
	sub_82E8F138(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E92AA4"))) PPC_WEAK_FUNC(sub_82E92AA4);
PPC_FUNC_IMPL(__imp__sub_82E92AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E92AA8"))) PPC_WEAK_FUNC(sub_82E92AA8);
PPC_FUNC_IMPL(__imp__sub_82E92AA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82E92AB0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,8
	ctx.r27.s64 = ctx.r3.s64 + 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82e8eee0
	ctx.lr = 0x82E92AD0;
	sub_82E8EEE0(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x82e92b30
	if (!ctx.cr6.gt) goto loc_82E92B30;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82e92b4c
	if (!ctx.cr6.lt) goto loc_82E92B4C;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82e92b30
	if (!ctx.cr6.gt) goto loc_82E92B30;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r9,r29,16
	ctx.r9.u64 = ctx.r29.u32 & 0xFFFF;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_82E92B10:
	// lhzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82e92b58
	if (ctx.cr6.eq) goto loc_82E92B58;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82e92b10
	if (ctx.cr6.lt) goto loc_82E92B10;
loc_82E92B30:
	// lis r28,-32761
	ctx.r28.s64 = -2147024896;
	// ori r28,r28,87
	ctx.r28.u64 = ctx.r28.u64 | 87;
loc_82E92B38:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e8f138
	ctx.lr = 0x82E92B40;
	sub_82E8F138(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_82E92B4C:
	// lis r28,-32768
	ctx.r28.s64 = -2147483648;
	// ori r28,r28,65535
	ctx.r28.u64 = ctx.r28.u64 | 65535;
	// b 0x82e92b38
	goto loc_82E92B38;
loc_82E92B58:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82e92b84
	if (!ctx.cr6.gt) goto loc_82E92B84;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r4,r3,2
	ctx.r4.s64 = ctx.r3.s64 + 2;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82fa20f0
	ctx.lr = 0x82E92B84;
	sub_82FA20F0(ctx, base);
loc_82E92B84:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// sthx r28,r9,r10
	PPC_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r28.u16);
	// b 0x82e92b38
	goto loc_82E92B38;
}

__attribute__((alias("__imp__sub_82E92BA0"))) PPC_WEAK_FUNC(sub_82E92BA0);
PPC_FUNC_IMPL(__imp__sub_82E92BA0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e92bcc
	if (ctx.cr6.eq) goto loc_82E92BCC;
	// bl 0x82e8ee18
	ctx.lr = 0x82E92BCC;
	sub_82E8EE18(ctx, base);
loc_82E92BCC:
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi. r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// beq 0x82e92be8
	if (ctx.cr0.eq) goto loc_82E92BE8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8ee18
	ctx.lr = 0x82E92BE8;
	sub_82E8EE18(ctx, base);
loc_82E92BE8:
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

__attribute__((alias("__imp__sub_82E92C04"))) PPC_WEAK_FUNC(sub_82E92C04);
PPC_FUNC_IMPL(__imp__sub_82E92C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E92C08"))) PPC_WEAK_FUNC(sub_82E92C08);
PPC_FUNC_IMPL(__imp__sub_82E92C08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82E92C10;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r25,r3,8
	ctx.r25.s64 = ctx.r3.s64 + 8;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// bl 0x82e8eee0
	ctx.lr = 0x82E92C30;
	sub_82E8EEE0(ctx, base);
	// lwz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// cmplwi cr6,r11,127
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 127, ctx.xer);
	// blt cr6,0x82e92c48
	if (ctx.cr6.lt) goto loc_82E92C48;
	// lis r30,-16371
	ctx.r30.s64 = -1072889856;
	// ori r30,r30,14002
	ctx.r30.u64 = ctx.r30.u64 | 14002;
	// b 0x82e92d14
	goto loc_82E92D14;
loc_82E92C48:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82e8edd0
	ctx.lr = 0x82E92C60;
	sub_82E8EDD0(ctx, base);
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ori r27,r11,14
	ctx.r27.u64 = ctx.r11.u64 | 14;
	// beq 0x82e92cc0
	if (ctx.cr0.eq) goto loc_82E92CC0;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82e8edd0
	ctx.lr = 0x82E92C94;
	sub_82E8EDD0(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82e92ca8
	if (!ctx.cr0.eq) goto loc_82E92CA8;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// b 0x82e92cc4
	goto loc_82E92CC4;
loc_82E92CA8:
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fa7cf0
	ctx.lr = 0x82E92CB4;
	sub_82FA7CF0(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82e92cc4
	goto loc_82E92CC4;
loc_82E92CC0:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82E92CC4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82e92cd4
	if (!ctx.cr6.eq) goto loc_82E92CD4;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// b 0x82e92d14
	goto loc_82E92D14;
loc_82E92CD4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82e92d08
	if (ctx.cr6.lt) goto loc_82E92D08;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r3,r29,84
	ctx.r3.s64 = ctx.r29.s64 + 84;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e92cf0
	if (ctx.cr6.eq) goto loc_82E92CF0;
	// lwz r28,4(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_82E92CF0:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82f20578
	ctx.lr = 0x82E92CFC;
	sub_82F20578(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e92d28
	if (!ctx.cr0.eq) goto loc_82E92D28;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_82E92D08:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e92ba0
	ctx.lr = 0x82E92D14;
	sub_82E92BA0(ctx, base);
loc_82E92D14:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82e8f138
	ctx.lr = 0x82E92D1C;
	sub_82E8F138(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_82E92D28:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82e92d14
	if (ctx.cr6.eq) goto loc_82E92D14;
	// stw r28,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r28.u32);
	// b 0x82e92d14
	goto loc_82E92D14;
}

__attribute__((alias("__imp__sub_82E92D38"))) PPC_WEAK_FUNC(sub_82E92D38);
PPC_FUNC_IMPL(__imp__sub_82E92D38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82E92D40;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82e92d60
	if (!ctx.cr6.eq) goto loc_82E92D60;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16387
	ctx.r3.u64 = ctx.r3.u64 | 16387;
	// b 0x82e9310c
	goto loc_82E9310C;
loc_82E92D60:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r11,1552
	ctx.r8.s64 = ctx.r11.s64 + 1552;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,1552(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1552);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// stw r6,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r6.u32);
	// stw r8,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r8.u32);
	// bctrl 
	ctx.lr = 0x82E92DA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82e93108
	if (ctx.cr0.lt) goto loc_82E93108;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,27936
	ctx.r11.s64 = ctx.r11.s64 + 27936;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_82E92DBC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82e92ddc
	if (!ctx.cr0.eq) goto loc_82E92DDC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82e92dbc
	if (!ctx.cr6.eq) goto loc_82E92DBC;
loc_82E92DDC:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82e92e60
	if (ctx.cr0.eq) goto loc_82E92E60;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,28112
	ctx.r11.s64 = ctx.r11.s64 + 28112;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_82E92DF4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82e92e14
	if (!ctx.cr0.eq) goto loc_82E92E14;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82e92df4
	if (!ctx.cr6.eq) goto loc_82E92DF4;
loc_82E92E14:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82e92e60
	if (ctx.cr0.eq) goto loc_82E92E60;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,28128
	ctx.r11.s64 = ctx.r11.s64 + 28128;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_82E92E2C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82e92e4c
	if (!ctx.cr0.eq) goto loc_82E92E4C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82e92e2c
	if (!ctx.cr6.eq) goto loc_82E92E2C;
loc_82E92E4C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82e92e60
	if (ctx.cr0.eq) goto loc_82E92E60;
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,87
	ctx.r30.u64 = ctx.r30.u64 | 87;
	// b 0x82e93108
	goto loc_82E93108;
loc_82E92E60:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82f20658
	ctx.lr = 0x82E92E6C;
	sub_82F20658(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82e93108
	if (ctx.cr0.lt) goto loc_82E93108;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,28352
	ctx.r11.s64 = ctx.r11.s64 + 28352;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_82E92E84:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82e92ea4
	if (!ctx.cr0.eq) goto loc_82E92EA4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82e92e84
	if (!ctx.cr6.eq) goto loc_82E92E84;
loc_82E92EA4:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82e92ed8
	if (!ctx.cr0.eq) goto loc_82E92ED8;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// addi r10,r11,-6560
	ctx.r10.s64 = ctx.r11.s64 + -6560;
	// lwz r11,-6560(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6560);
loc_82E92EBC:
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// b 0x82e92f90
	goto loc_82E92F90;
loc_82E92ED8:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,28368
	ctx.r11.s64 = ctx.r11.s64 + 28368;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_82E92EE8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82e92f08
	if (!ctx.cr0.eq) goto loc_82E92F08;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82e92ee8
	if (!ctx.cr6.eq) goto loc_82E92EE8;
loc_82E92F08:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82e92f24
	if (!ctx.cr0.eq) goto loc_82E92F24;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// addi r10,r11,-6544
	ctx.r10.s64 = ctx.r11.s64 + -6544;
	// lwz r11,-6544(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6544);
	// b 0x82e92ebc
	goto loc_82E92EBC;
loc_82E92F24:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,28384
	ctx.r11.s64 = ctx.r11.s64 + 28384;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_82E92F34:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82e92f54
	if (!ctx.cr0.eq) goto loc_82E92F54;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82e92f34
	if (!ctx.cr6.eq) goto loc_82E92F34;
loc_82E92F54:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// bne 0x82e92f70
	if (!ctx.cr0.eq) goto loc_82E92F70;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r10,r11,-6512
	ctx.r10.s64 = ctx.r11.s64 + -6512;
	// lwz r11,-6512(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6512);
	// b 0x82e92ebc
	goto loc_82E92EBC;
loc_82E92F70:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// stw r9,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r9.u32);
	// stw r8,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r8.u32);
loc_82E92F90:
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// sth r26,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r26.u16);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82f208b0
	ctx.lr = 0x82E92FA8;
	sub_82F208B0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82e93108
	if (ctx.cr0.lt) goto loc_82E93108;
	// addi r27,r31,84
	ctx.r27.s64 = ctx.r31.s64 + 84;
	// lhz r4,82(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82f203e0
	ctx.lr = 0x82E92FC4;
	sub_82F203E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e92fd8
	if (!ctx.cr0.eq) goto loc_82E92FD8;
loc_82E92FCC:
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// b 0x82e93108
	goto loc_82E93108;
loc_82E92FD8:
	// lhz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// sth r26,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r26.u16);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e930ec
	if (ctx.cr0.eq) goto loc_82E930EC;
loc_82E92FF0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82f21360
	ctx.lr = 0x82E93000;
	sub_82F21360(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// blt 0x82e93108
	if (ctx.cr0.lt) goto loc_82E93108;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82e8edd0
	ctx.lr = 0x82E93024;
	sub_82E8EDD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e93044
	if (ctx.cr0.eq) goto loc_82E93044;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lhz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// bl 0x82e923f8
	ctx.lr = 0x82E93038;
	sub_82E923F8(ctx, base);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82e93048
	goto loc_82E93048;
loc_82E93044:
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82E93048:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82e92fcc
	if (ctx.cr6.eq) goto loc_82E92FCC;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82e930f4
	if (ctx.cr6.lt) goto loc_82E930F4;
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e930ac
	if (ctx.cr0.eq) goto loc_82E930AC;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_82E93074:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82f213f0
	ctx.lr = 0x82E9308C;
	sub_82F213F0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82e930f4
	if (ctx.cr0.lt) goto loc_82E930F4;
	// addi r10,r28,1
	ctx.r10.s64 = ctx.r28.s64 + 1;
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// clrlwi r5,r10,16
	ctx.r5.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e93074
	if (ctx.cr6.lt) goto loc_82E93074;
loc_82E930AC:
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82e930e4
	if (!ctx.cr6.lt) goto loc_82E930E4;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r29,r11,16
	ctx.r29.u64 = ctx.r11.u32 & 0xFFFF;
	// stwx r31,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r31.u32);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// lhz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e92ff0
	if (ctx.cr6.lt) goto loc_82E92FF0;
	// b 0x82e930ec
	goto loc_82E930EC;
loc_82E930E4:
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
loc_82E930EC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x82e93108
	if (!ctx.cr6.lt) goto loc_82E93108;
loc_82E930F4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82e93108
	if (ctx.cr6.eq) goto loc_82E93108;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e92ba0
	ctx.lr = 0x82E93108;
	sub_82E92BA0(ctx, base);
loc_82E93108:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82E9310C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E93114"))) PPC_WEAK_FUNC(sub_82E93114);
PPC_FUNC_IMPL(__imp__sub_82E93114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E93118"))) PPC_WEAK_FUNC(sub_82E93118);
PPC_FUNC_IMPL(__imp__sub_82E93118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82E93120;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e93178
	if (!ctx.cr6.gt) goto loc_82E93178;
	// addi r28,r3,84
	ctx.r28.s64 = ctx.r3.s64 + 84;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82E93140:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82e93164
	if (!ctx.cr6.lt) goto loc_82E93164;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e93164
	if (ctx.cr6.eq) goto loc_82E93164;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82e92ba0
	ctx.lr = 0x82E93164;
	sub_82E92BA0(ctx, base);
loc_82E93164:
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e93140
	if (ctx.cr6.lt) goto loc_82E93140;
loc_82E93178:
	// addi r3,r30,84
	ctx.r3.s64 = ctx.r30.s64 + 84;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f203e0
	ctx.lr = 0x82E93188;
	sub_82F203E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E93194"))) PPC_WEAK_FUNC(sub_82E93194);
PPC_FUNC_IMPL(__imp__sub_82E93194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E93198"))) PPC_WEAK_FUNC(sub_82E93198);
PPC_FUNC_IMPL(__imp__sub_82E93198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82E931A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,27704
	ctx.r11.s64 = ctx.r11.s64 + 27704;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e8ee58
	ctx.lr = 0x82E931C8;
	sub_82E8EE58(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// addi r10,r11,-6512
	ctx.r10.s64 = ctx.r11.s64 + -6512;
	// lwz r11,-6512(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6512);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bl 0x82f203b0
	ctx.lr = 0x82E931F8;
	sub_82F203B0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82e93208
	if (ctx.cr6.lt) goto loc_82E93208;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
loc_82E93208:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E93214"))) PPC_WEAK_FUNC(sub_82E93214);
PPC_FUNC_IMPL(__imp__sub_82E93214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E93218"))) PPC_WEAK_FUNC(sub_82E93218);
PPC_FUNC_IMPL(__imp__sub_82E93218) {
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
	// addi r11,r11,27704
	ctx.r11.s64 = ctx.r11.s64 + 27704;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82e93118
	ctx.lr = 0x82E9323C;
	sub_82E93118(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82f203c8
	ctx.lr = 0x82E93244;
	sub_82F203C8(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82e8f0c8
	ctx.lr = 0x82E9324C;
	sub_82E8F0C8(ctx, base);
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

__attribute__((alias("__imp__sub_82E93260"))) PPC_WEAK_FUNC(sub_82E93260);
PPC_FUNC_IMPL(__imp__sub_82E93260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82E93268;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,8
	ctx.r28.s64 = ctx.r3.s64 + 8;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82e8eee0
	ctx.lr = 0x82E93284;
	sub_82E8EEE0(ctx, base);
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x82e9329c
	if (ctx.cr6.gt) goto loc_82E9329C;
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,87
	ctx.r29.u64 = ctx.r29.u64 | 87;
	// b 0x82e932e8
	goto loc_82E932E8;
loc_82E9329C:
	// addi r30,r30,84
	ctx.r30.s64 = ctx.r30.s64 + 84;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82e932e0
	if (!ctx.cr6.lt) goto loc_82E932E0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e932e0
	if (ctx.cr6.eq) goto loc_82E932E0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82e92ba0
	ctx.lr = 0x82E932C8;
	sub_82E92BA0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f205c8
	ctx.lr = 0x82E932D8;
	sub_82F205C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e932e8
	if (!ctx.cr0.eq) goto loc_82E932E8;
loc_82E932E0:
	// lis r29,-32768
	ctx.r29.s64 = -2147483648;
	// ori r29,r29,65535
	ctx.r29.u64 = ctx.r29.u64 | 65535;
loc_82E932E8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e8f138
	ctx.lr = 0x82E932F0;
	sub_82E8F138(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E932FC"))) PPC_WEAK_FUNC(sub_82E932FC);
PPC_FUNC_IMPL(__imp__sub_82E932FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E93300"))) PPC_WEAK_FUNC(sub_82E93300);
PPC_FUNC_IMPL(__imp__sub_82E93300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x82E93308;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82e93330
	if (!ctx.cr6.eq) goto loc_82E93330;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82e934f0
	goto loc_82E934F0;
loc_82E93330:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r22,r31,8
	ctx.r22.s64 = ctx.r31.s64 + 8;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82e8eee0
	ctx.lr = 0x82E93344;
	sub_82E8EEE0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x82e8edd0
	ctx.lr = 0x82E9335C;
	sub_82E8EDD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e93378
	if (ctx.cr0.eq) goto loc_82E93378;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e93198
	ctx.lr = 0x82E9336C;
	sub_82E93198(ctx, base);
	// lwz r24,80(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x82e9337c
	goto loc_82E9337C;
loc_82E93378:
	// li r27,0
	ctx.r27.s64 = 0;
loc_82E9337C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82e93390
	if (!ctx.cr6.eq) goto loc_82E93390;
	// lis r24,-32761
	ctx.r24.s64 = -2147024896;
	// ori r24,r24,14
	ctx.r24.u64 = ctx.r24.u64 | 14;
	// b 0x82e934e4
	goto loc_82E934E4;
loc_82E93390:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// blt cr6,0x82e934cc
	if (ctx.cr6.lt) goto loc_82E934CC;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r25,r27,84
	ctx.r25.s64 = ctx.r27.s64 + 84;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// addi r10,r27,68
	ctx.r10.s64 = ctx.r27.s64 + 68;
	// stw r11,68(r27)
	PPC_STORE_U32(ctx.r27.u32 + 68, ctx.r11.u32);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r11,72(r27)
	PPC_STORE_U32(ctx.r27.u32 + 72, ctx.r11.u32);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// stw r11,76(r27)
	PPC_STORE_U32(ctx.r27.u32 + 76, ctx.r11.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r11,80(r27)
	PPC_STORE_U32(ctx.r27.u32 + 80, ctx.r11.u32);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x82f203e0
	ctx.lr = 0x82E933D4;
	sub_82F203E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e933e8
	if (!ctx.cr0.eq) goto loc_82E933E8;
loc_82E933DC:
	// lis r24,-32761
	ctx.r24.s64 = -2147024896;
	// ori r24,r24,14
	ctx.r24.u64 = ctx.r24.u64 | 14;
	// b 0x82e934cc
	goto loc_82E934CC;
loc_82E933E8:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e9349c
	if (!ctx.cr6.gt) goto loc_82E9349C;
	// addi r26,r31,84
	ctx.r26.s64 = ctx.r31.s64 + 84;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82E93400:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82e93488
	if (!ctx.cr6.lt) goto loc_82E93488;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,12
	ctx.r3.s64 = 12;
	// lwzx r29,r30,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x82e8edd0
	ctx.lr = 0x82E9342C;
	sub_82E8EDD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e93448
	if (ctx.cr0.eq) goto loc_82E93448;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82e92498
	ctx.lr = 0x82E93440;
	sub_82E92498(ctx, base);
	// lwz r24,80(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82e9344c
	goto loc_82E9344C;
loc_82E93448:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E9344C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e933dc
	if (ctx.cr6.eq) goto loc_82E933DC;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// blt cr6,0x82e934cc
	if (ctx.cr6.lt) goto loc_82E934CC;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82e93494
	if (!ctx.cr6.lt) goto loc_82E93494;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stwx r3,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r3.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e93400
	if (ctx.cr6.lt) goto loc_82E93400;
	// b 0x82e9349c
	goto loc_82E9349C;
loc_82E93488:
	// lis r24,-32768
	ctx.r24.s64 = -2147483648;
	// ori r24,r24,65535
	ctx.r24.u64 = ctx.r24.u64 | 65535;
	// b 0x82e934cc
	goto loc_82E934CC;
loc_82E93494:
	// lis r24,-32768
	ctx.r24.s64 = -2147483648;
	// ori r24,r24,65535
	ctx.r24.u64 = ctx.r24.u64 | 65535;
loc_82E9349C:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// blt cr6,0x82e934cc
	if (ctx.cr6.lt) goto loc_82E934CC;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r4,r10,27092
	ctx.r4.s64 = ctx.r10.s64 + 27092;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E934C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bge 0x82e934e4
	if (!ctx.cr0.lt) goto loc_82E934E4;
loc_82E934CC:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E934E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E934E4:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82e8f138
	ctx.lr = 0x82E934EC;
	sub_82E8F138(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_82E934F0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E934F8"))) PPC_WEAK_FUNC(sub_82E934F8);
PPC_FUNC_IMPL(__imp__sub_82E934F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82E93500;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,27704
	ctx.r11.s64 = ctx.r11.s64 + 27704;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82e8ee58
	ctx.lr = 0x82E9352C;
	sub_82E8EE58(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// addi r10,r11,-6512
	ctx.r10.s64 = ctx.r11.s64 + -6512;
	// lwz r11,-6512(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6512);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bl 0x82f203b0
	ctx.lr = 0x82E9355C;
	sub_82F203B0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82e93580
	if (ctx.cr6.lt) goto loc_82E93580;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82e93580
	if (ctx.cr6.eq) goto loc_82E93580;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e92d38
	ctx.lr = 0x82E9357C;
	sub_82E92D38(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
loc_82E93580:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E9358C"))) PPC_WEAK_FUNC(sub_82E9358C);
PPC_FUNC_IMPL(__imp__sub_82E9358C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E93590"))) PPC_WEAK_FUNC(sub_82E93590);
PPC_FUNC_IMPL(__imp__sub_82E93590) {
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
	// bl 0x82e93218
	ctx.lr = 0x82E935B0;
	sub_82E93218(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e935c8
	if (ctx.cr0.eq) goto loc_82E935C8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82e935c8
	if (ctx.cr6.eq) goto loc_82E935C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8ee18
	ctx.lr = 0x82E935C8;
	sub_82E8EE18(ctx, base);
loc_82E935C8:
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

__attribute__((alias("__imp__sub_82E935E4"))) PPC_WEAK_FUNC(sub_82E935E4);
PPC_FUNC_IMPL(__imp__sub_82E935E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E935E8"))) PPC_WEAK_FUNC(sub_82E935E8);
PPC_FUNC_IMPL(__imp__sub_82E935E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82E935F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82e93618
	if (!ctx.cr6.eq) goto loc_82E93618;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82e936b8
	goto loc_82E936B8;
loc_82E93618:
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x82e8edd0
	ctx.lr = 0x82E93634;
	sub_82E8EDD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e93654
	if (ctx.cr0.eq) goto loc_82E93654;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82e934f8
	ctx.lr = 0x82E93648;
	sub_82E934F8(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82e93658
	goto loc_82E93658;
loc_82E93654:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82E93658:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82e9366c
	if (!ctx.cr6.eq) goto loc_82E9366C;
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// b 0x82e936b4
	goto loc_82E936B4;
loc_82E9366C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82e9369c
	if (ctx.cr6.lt) goto loc_82E9369C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r10,27092
	ctx.r4.s64 = ctx.r10.s64 + 27092;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E93694;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82e936b4
	if (!ctx.cr0.lt) goto loc_82E936B4;
loc_82E9369C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E936B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E936B4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82E936B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E936C0"))) PPC_WEAK_FUNC(sub_82E936C0);
PPC_FUNC_IMPL(__imp__sub_82E936C0) {
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
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r11,27764
	ctx.r11.s64 = ctx.r11.s64 + 27764;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82e936f0
	if (ctx.cr6.eq) goto loc_82E936F0;
	// bl 0x82e8ee18
	ctx.lr = 0x82E936F0;
	sub_82E8EE18(ctx, base);
loc_82E936F0:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// bl 0x82e8f0c8
	ctx.lr = 0x82E93700;
	sub_82E8F0C8(ctx, base);
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

__attribute__((alias("__imp__sub_82E93714"))) PPC_WEAK_FUNC(sub_82E93714);
PPC_FUNC_IMPL(__imp__sub_82E93714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E93718"))) PPC_WEAK_FUNC(sub_82E93718);
PPC_FUNC_IMPL(__imp__sub_82E93718) {
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
	// bne cr6,0x82e9373c
	if (!ctx.cr6.eq) goto loc_82E9373C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82e937d8
	goto loc_82E937D8;
loc_82E9373C:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r11,4320
	ctx.r10.s64 = ctx.r11.s64 + 4320;
	// stw r31,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r31.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r9,r4,16
	ctx.r9.s64 = ctx.r4.s64 + 16;
loc_82E93754:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82e93774
	if (!ctx.cr0.eq) goto loc_82E93774;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82e93754
	if (!ctx.cr6.eq) goto loc_82E93754;
loc_82E93774:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82e937c0
	if (ctx.cr0.eq) goto loc_82E937C0;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,4652
	ctx.r10.s64 = ctx.r10.s64 + 4652;
	// addi r8,r4,16
	ctx.r8.s64 = ctx.r4.s64 + 16;
loc_82E9378C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82e937ac
	if (!ctx.cr0.eq) goto loc_82E937AC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82e9378c
	if (!ctx.cr6.eq) goto loc_82E9378C;
loc_82E937AC:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82e937c0
	if (ctx.cr0.eq) goto loc_82E937C0;
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// ori r31,r31,16386
	ctx.r31.u64 = ctx.r31.u64 | 16386;
	// b 0x82e937d4
	goto loc_82E937D4;
loc_82E937C0:
	// stw r3,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E937D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E937D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82E937D8:
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

__attribute__((alias("__imp__sub_82E937EC"))) PPC_WEAK_FUNC(sub_82E937EC);
PPC_FUNC_IMPL(__imp__sub_82E937EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E937F0"))) PPC_WEAK_FUNC(sub_82E937F0);
PPC_FUNC_IMPL(__imp__sub_82E937F0) {
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
loc_82E93804:
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
	// bne 0x82e93804
	if (!ctx.cr0.eq) goto loc_82E93804;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82e93848
	if (!ctx.cr6.eq) goto loc_82E93848;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e93848
	if (ctx.cr6.eq) goto loc_82E93848;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E93848;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E93848:
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

__attribute__((alias("__imp__sub_82E93860"))) PPC_WEAK_FUNC(sub_82E93860);
PPC_FUNC_IMPL(__imp__sub_82E93860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82E93868;
	__savegprlr_29(ctx, base);
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
	// bne cr6,0x82e93888
	if (!ctx.cr6.eq) goto loc_82E93888;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82e938c0
	goto loc_82E938C0;
loc_82E93888:
	// addi r29,r30,8
	ctx.r29.s64 = ctx.r30.s64 + 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e8eee0
	ctx.lr = 0x82E93894;
	sub_82E8EEE0(ctx, base);
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x82e8f138
	ctx.lr = 0x82E938BC;
	sub_82E8F138(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E938C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E938C8"))) PPC_WEAK_FUNC(sub_82E938C8);
PPC_FUNC_IMPL(__imp__sub_82E938C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82E938D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,23504
	ctx.r11.s64 = ctx.r11.s64 + 23504;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
loc_82E938EC:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82e9390c
	if (!ctx.cr0.eq) goto loc_82E9390C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82e938ec
	if (!ctx.cr6.eq) goto loc_82E938EC;
loc_82E9390C:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82e93958
	if (ctx.cr0.eq) goto loc_82E93958;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r11,r11,23520
	ctx.r11.s64 = ctx.r11.s64 + 23520;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_82E93924:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82e93944
	if (!ctx.cr0.eq) goto loc_82E93944;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82e93924
	if (!ctx.cr6.eq) goto loc_82E93924;
loc_82E93944:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82e93958
	if (ctx.cr0.eq) goto loc_82E93958;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82e93990
	goto loc_82E93990;
loc_82E93958:
	// addi r30,r29,8
	ctx.r30.s64 = ctx.r29.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e8eee0
	ctx.lr = 0x82E93964;
	sub_82E8EEE0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,68(r29)
	PPC_STORE_U32(ctx.r29.u32 + 68, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,76(r29)
	PPC_STORE_U32(ctx.r29.u32 + 76, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,80(r29)
	PPC_STORE_U32(ctx.r29.u32 + 80, ctx.r11.u32);
	// bl 0x82e8f138
	ctx.lr = 0x82E9398C;
	sub_82E8F138(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E93990:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E93998"))) PPC_WEAK_FUNC(sub_82E93998);
PPC_FUNC_IMPL(__imp__sub_82E93998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82E939A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82e939cc
	if (!ctx.cr6.eq) goto loc_82E939CC;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82e939cc
	if (!ctx.cr6.eq) goto loc_82E939CC;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82e93a04
	goto loc_82E93A04;
loc_82E939CC:
	// addi r29,r30,8
	ctx.r29.s64 = ctx.r30.s64 + 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e8eee0
	ctx.lr = 0x82E939D8;
	sub_82E8EEE0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82e939e8
	if (ctx.cr6.eq) goto loc_82E939E8;
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82E939E8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82e939f8
	if (ctx.cr6.eq) goto loc_82E939F8;
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82E939F8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e8f138
	ctx.lr = 0x82E93A00;
	sub_82E8F138(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E93A04:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E93A0C"))) PPC_WEAK_FUNC(sub_82E93A0C);
PPC_FUNC_IMPL(__imp__sub_82E93A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E93A10"))) PPC_WEAK_FUNC(sub_82E93A10);
PPC_FUNC_IMPL(__imp__sub_82E93A10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82E93A18;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82e8eee0
	ctx.lr = 0x82E93A34;
	sub_82E8EEE0(ctx, base);
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r28,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r28.u32);
	// bl 0x82e8f138
	ctx.lr = 0x82E93A44;
	sub_82E8F138(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E93A50"))) PPC_WEAK_FUNC(sub_82E93A50);
PPC_FUNC_IMPL(__imp__sub_82E93A50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82E93A58;
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
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82e93a80
	if (!ctx.cr6.eq) goto loc_82E93A80;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82e93b04
	goto loc_82E93B04;
loc_82E93A80:
	// addi r27,r31,8
	ctx.r27.s64 = ctx.r31.s64 + 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e8eee0
	ctx.lr = 0x82E93A8C;
	sub_82E8EEE0(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82e93af8
	if (ctx.cr6.eq) goto loc_82E93AF8;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e93ae8
	if (ctx.cr6.lt) goto loc_82E93AE8;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82fa77c0
	ctx.lr = 0x82E93ABC;
	sub_82FA77C0(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82e93af8
	if (!ctx.cr6.gt) goto loc_82E93AF8;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r10,r10,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r10.s64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82fa7cf0
	ctx.lr = 0x82E93AE4;
	sub_82FA7CF0(ctx, base);
	// b 0x82e93af8
	goto loc_82E93AF8;
loc_82E93AE8:
	// rlwinm r5,r30,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82fa77c0
	ctx.lr = 0x82E93AF0;
	sub_82FA77C0(ctx, base);
	// lis r26,-16371
	ctx.r26.s64 = -1072889856;
	// ori r26,r26,14001
	ctx.r26.u64 = ctx.r26.u64 | 14001;
loc_82E93AF8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e8f138
	ctx.lr = 0x82E93B00;
	sub_82E8F138(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82E93B04:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E93B0C"))) PPC_WEAK_FUNC(sub_82E93B0C);
PPC_FUNC_IMPL(__imp__sub_82E93B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E93B10"))) PPC_WEAK_FUNC(sub_82E93B10);
PPC_FUNC_IMPL(__imp__sub_82E93B10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82E93B18;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,127
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 127, ctx.xer);
	// blt cr6,0x82e93b40
	if (ctx.cr6.lt) goto loc_82E93B40;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14002
	ctx.r3.u64 = ctx.r3.u64 | 14002;
	// b 0x82e93c6c
	goto loc_82E93C6C;
loc_82E93B40:
	// addi r27,r31,8
	ctx.r27.s64 = ctx.r31.s64 + 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e8eee0
	ctx.lr = 0x82E93B4C;
	sub_82E8EEE0(ctx, base);
	// lwz r7,92(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82e93b88
	if (ctx.cr6.eq) goto loc_82E93B88;
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// clrlwi r9,r28,16
	ctx.r9.u64 = ctx.r28.u32 & 0xFFFF;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E93B68:
	// lhzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82e93be8
	if (ctx.cr6.eq) goto loc_82E93BE8;
	// lwz r6,92(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82e93b68
	if (ctx.cr6.lt) goto loc_82E93B68;
loc_82E93B88:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e93c44
	if (ctx.cr6.lt) goto loc_82E93C44;
	// mulli r11,r7,3
	ctx.r11.s64 = ctx.r7.s64 * 3;
	// rlwinm r29,r11,31,1,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r29,10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 10, ctx.xer);
	// blt cr6,0x82e93ba8
	if (ctx.cr6.lt) goto loc_82E93BA8;
	// li r29,10
	ctx.r29.s64 = 10;
loc_82E93BA8:
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// rlwinm r3,r29,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82e93bc0
	if (!ctx.cr6.gt) goto loc_82E93BC0;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82E93BC0:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e8edd0
	ctx.lr = 0x82E93BD4;
	sub_82E8EDD0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82e93bf4
	if (!ctx.cr0.eq) goto loc_82E93BF4;
	// lis r26,-32761
	ctx.r26.s64 = -2147024896;
	// ori r26,r26,14
	ctx.r26.u64 = ctx.r26.u64 | 14;
	// b 0x82e93c60
	goto loc_82E93C60;
loc_82E93BE8:
	// lis r26,-32761
	ctx.r26.s64 = -2147024896;
	// ori r26,r26,87
	ctx.r26.u64 = ctx.r26.u64 | 87;
	// b 0x82e93c60
	goto loc_82E93C60;
loc_82E93BF4:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82fa77c0
	ctx.lr = 0x82E93C08;
	sub_82FA77C0(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82e93c2c
	if (!ctx.cr6.gt) goto loc_82E93C2C;
	// subf r10,r11,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r11.s64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82E93C2C;
	sub_82FA7CF0(ctx, base);
loc_82E93C2C:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e93c3c
	if (ctx.cr6.eq) goto loc_82E93C3C;
	// bl 0x82e8ee18
	ctx.lr = 0x82E93C3C;
	sub_82E8EE18(ctx, base);
loc_82E93C3C:
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
loc_82E93C44:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r28,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r28.u16);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
loc_82E93C60:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e8f138
	ctx.lr = 0x82E93C68;
	sub_82E8F138(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82E93C6C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E93C74"))) PPC_WEAK_FUNC(sub_82E93C74);
PPC_FUNC_IMPL(__imp__sub_82E93C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E93C78"))) PPC_WEAK_FUNC(sub_82E93C78);
PPC_FUNC_IMPL(__imp__sub_82E93C78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82E93C80;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e93ca8
	if (!ctx.cr6.eq) goto loc_82E93CA8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82e93d04
	goto loc_82E93D04;
loc_82E93CA8:
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e8eee0
	ctx.lr = 0x82E93CB4;
	sub_82E8EEE0(ctx, base);
	// lwz r7,92(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82e93cf0
	if (ctx.cr6.eq) goto loc_82E93CF0;
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// clrlwi r8,r30,16
	ctx.r8.u64 = ctx.r30.u32 & 0xFFFF;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_82E93CD0:
	// lhzx r6,r10,r9
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82e93d0c
	if (ctx.cr6.eq) goto loc_82E93D0C;
	// lwz r6,92(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82e93cd0
	if (ctx.cr6.lt) goto loc_82E93CD0;
loc_82E93CF0:
	// lis r28,-32761
	ctx.r28.s64 = -2147024896;
	// ori r28,r28,87
	ctx.r28.u64 = ctx.r28.u64 | 87;
loc_82E93CF8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e8f138
	ctx.lr = 0x82E93D00;
	sub_82E8F138(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82E93D04:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_82E93D0C:
	// addi r10,r7,-1
	ctx.r10.s64 = ctx.r7.s64 + -1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82e93d34
	if (!ctx.cr6.gt) goto loc_82E93D34;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r11,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r11.s64;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r4,r3,2
	ctx.r4.s64 = ctx.r3.s64 + 2;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82fa20f0
	ctx.lr = 0x82E93D34;
	sub_82FA20F0(ctx, base);
loc_82E93D34:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// sthx r28,r9,r10
	PPC_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r28.u16);
	// b 0x82e93cf8
	goto loc_82E93CF8;
}

__attribute__((alias("__imp__sub_82E93D50"))) PPC_WEAK_FUNC(sub_82E93D50);
PPC_FUNC_IMPL(__imp__sub_82E93D50) {
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
	// bl 0x82e936c0
	ctx.lr = 0x82E93D70;
	sub_82E936C0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e93d88
	if (ctx.cr0.eq) goto loc_82E93D88;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82e93d88
	if (ctx.cr6.eq) goto loc_82E93D88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8ee18
	ctx.lr = 0x82E93D88;
	sub_82E8EE18(ctx, base);
loc_82E93D88:
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

__attribute__((alias("__imp__sub_82E93DA4"))) PPC_WEAK_FUNC(sub_82E93DA4);
PPC_FUNC_IMPL(__imp__sub_82E93DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E93DA8"))) PPC_WEAK_FUNC(sub_82E93DA8);
PPC_FUNC_IMPL(__imp__sub_82E93DA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82E93DB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,27764
	ctx.r11.s64 = ctx.r11.s64 + 27764;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82e8ee58
	ctx.lr = 0x82E93DD8;
	sub_82E8EE58(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,23504
	ctx.r10.s64 = ctx.r11.s64 + 23504;
	// lwz r11,23504(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23504);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E93E24"))) PPC_WEAK_FUNC(sub_82E93E24);
PPC_FUNC_IMPL(__imp__sub_82E93E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E93E28"))) PPC_WEAK_FUNC(sub_82E93E28);
PPC_FUNC_IMPL(__imp__sub_82E93E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82E93E30;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82e93e58
	if (!ctx.cr6.eq) goto loc_82E93E58;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82e93fa8
	goto loc_82E93FA8;
loc_82E93E58:
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// addi r27,r30,8
	ctx.r27.s64 = ctx.r30.s64 + 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e8eee0
	ctx.lr = 0x82E93E68;
	sub_82E8EEE0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x82e8edd0
	ctx.lr = 0x82E93E80;
	sub_82E8EDD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e93e9c
	if (ctx.cr0.eq) goto loc_82E93E9C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e93da8
	ctx.lr = 0x82E93E90;
	sub_82E93DA8(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82e93ea0
	goto loc_82E93EA0;
loc_82E93E9C:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82E93EA0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82e93eb4
	if (!ctx.cr6.eq) goto loc_82E93EB4;
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,14
	ctx.r29.u64 = ctx.r29.u64 | 14;
	// b 0x82e93f9c
	goto loc_82E93F9C;
loc_82E93EB4:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x82e93f84
	if (ctx.cr6.lt) goto loc_82E93F84;
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// addi r9,r30,68
	ctx.r9.s64 = ctx.r30.s64 + 68;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// addi r9,r31,68
	ctx.r9.s64 = ctx.r31.s64 + 68;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// lwz r11,92(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// lwz r11,92(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// lwz r11,92(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x82e93f20
	if (!ctx.cr6.gt) goto loc_82E93F20;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82E93F20:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e8edd0
	ctx.lr = 0x82E93F34;
	sub_82E8EDD0(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82e93f4c
	if (!ctx.cr0.eq) goto loc_82E93F4C;
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,14
	ctx.r29.u64 = ctx.r29.u64 | 14;
	// b 0x82e93f84
	goto loc_82E93F84;
loc_82E93F4C:
	// lwz r11,92(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// lwz r4,100(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82fa77c0
	ctx.lr = 0x82E93F5C;
	sub_82FA77C0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,4320
	ctx.r4.s64 = ctx.r11.s64 + 4320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E93F7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge 0x82e93f9c
	if (!ctx.cr0.lt) goto loc_82E93F9C;
loc_82E93F84:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E93F9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E93F9C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e8f138
	ctx.lr = 0x82E93FA4;
	sub_82E8F138(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82E93FA8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E93FB0"))) PPC_WEAK_FUNC(sub_82E93FB0);
PPC_FUNC_IMPL(__imp__sub_82E93FB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82E93FB8;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,27764
	ctx.r11.s64 = ctx.r11.s64 + 27764;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x82e8ee58
	ctx.lr = 0x82E93FE4;
	sub_82E8EE58(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r28,r11,23504
	ctx.r28.s64 = ctx.r11.s64 + 23504;
	// addi r11,r10,1552
	ctx.r11.s64 = ctx.r10.s64 + 1552;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r30,r31,68
	ctx.r30.s64 = ctx.r31.s64 + 68;
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r25,r31,84
	ctx.r25.s64 = ctx.r31.s64 + 84;
	// addi r24,r31,88
	ctx.r24.s64 = ctx.r31.s64 + 88;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// stw r7,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r7.u32);
	// lwz r7,4(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// lwz r7,8(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// stw r7,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r7.u32);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// stw r29,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r29.u32);
	// stw r29,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r29.u32);
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// stw r29,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,1552(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1552);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// stw r7,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r7.u32);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r11.u32);
	// beq cr6,0x82e94284
	if (ctx.cr6.eq) goto loc_82E94284;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E9407C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82e94284
	if (ctx.cr0.lt) goto loc_82E94284;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,27856
	ctx.r11.s64 = ctx.r11.s64 + 27856;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_82E94098:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82e940b8
	if (!ctx.cr0.eq) goto loc_82E940B8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82e94098
	if (!ctx.cr6.eq) goto loc_82E94098;
loc_82E940B8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82e940d0
	if (ctx.cr0.eq) goto loc_82E940D0;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,87
	ctx.r11.u64 = ctx.r11.u64 | 87;
loc_82E940C8:
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// b 0x82e94284
	goto loc_82E94284;
loc_82E940D0:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82f22360
	ctx.lr = 0x82E940DC;
	sub_82F22360(ctx, base);
	// stw r3,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82e94284
	if (ctx.cr0.lt) goto loc_82E94284;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,28400
	ctx.r11.s64 = ctx.r11.s64 + 28400;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_82E940F8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82e94118
	if (!ctx.cr0.eq) goto loc_82E94118;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82e940f8
	if (!ctx.cr6.eq) goto loc_82E940F8;
loc_82E94118:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82e94140
	if (!ctx.cr0.eq) goto loc_82E94140;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// b 0x82e941c0
	goto loc_82E941C0;
loc_82E94140:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,28416
	ctx.r11.s64 = ctx.r11.s64 + 28416;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_82E94150:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82e94170
	if (!ctx.cr0.eq) goto loc_82E94170;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82e94150
	if (!ctx.cr6.eq) goto loc_82E94150;
loc_82E94170:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82e941a0
	if (!ctx.cr0.eq) goto loc_82E941A0;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r10,r11,23520
	ctx.r10.s64 = ctx.r11.s64 + 23520;
	// lwz r11,23520(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23520);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// b 0x82e941c0
	goto loc_82E941C0;
loc_82E941A0:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// stw r8,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
loc_82E941C0:
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82f223c0
	ctx.lr = 0x82E941D4;
	sub_82F223C0(ctx, base);
	// stw r3,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82e94284
	if (ctx.cr0.lt) goto loc_82E94284;
	// sth r29,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r29.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82f224d0
	ctx.lr = 0x82E941F0;
	sub_82F224D0(ctx, base);
	// stw r3,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82e94284
	if (ctx.cr0.lt) goto loc_82E94284;
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
	ctx.lr = 0x82E94218;
	sub_82E8EDD0(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82e94230
	if (!ctx.cr0.eq) goto loc_82E94230;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// b 0x82e940c8
	goto loc_82E940C8;
loc_82E94230:
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// beq 0x82e94284
	if (ctx.cr0.eq) goto loc_82E94284;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_82E9424C:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82f22a48
	ctx.lr = 0x82E94260;
	sub_82F22A48(ctx, base);
	// stw r3,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82e94284
	if (ctx.cr0.lt) goto loc_82E94284;
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e9424c
	if (ctx.cr6.lt) goto loc_82E9424C;
loc_82E94284:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r29.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E94294"))) PPC_WEAK_FUNC(sub_82E94294);
PPC_FUNC_IMPL(__imp__sub_82E94294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E94298"))) PPC_WEAK_FUNC(sub_82E94298);
PPC_FUNC_IMPL(__imp__sub_82E94298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82E942A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82e942c8
	if (!ctx.cr6.eq) goto loc_82E942C8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82e94368
	goto loc_82E94368;
loc_82E942C8:
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x82e8edd0
	ctx.lr = 0x82E942E4;
	sub_82E8EDD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e94304
	if (ctx.cr0.eq) goto loc_82E94304;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82e93fb0
	ctx.lr = 0x82E942F8;
	sub_82E93FB0(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82e94308
	goto loc_82E94308;
loc_82E94304:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82E94308:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82e9431c
	if (!ctx.cr6.eq) goto loc_82E9431C;
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// b 0x82e94364
	goto loc_82E94364;
loc_82E9431C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82e9434c
	if (ctx.cr6.lt) goto loc_82E9434C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r10,4320
	ctx.r4.s64 = ctx.r10.s64 + 4320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E94344;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82e94364
	if (!ctx.cr0.lt) goto loc_82E94364;
loc_82E9434C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E94364;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E94364:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82E94368:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E94370"))) PPC_WEAK_FUNC(sub_82E94370);
PPC_FUNC_IMPL(__imp__sub_82E94370) {
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
	// bne cr6,0x82e94394
	if (!ctx.cr6.eq) goto loc_82E94394;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82e94430
	goto loc_82E94430;
loc_82E94394:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r11,27108
	ctx.r10.s64 = ctx.r11.s64 + 27108;
	// stw r31,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r31.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r9,r4,16
	ctx.r9.s64 = ctx.r4.s64 + 16;
loc_82E943AC:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82e943cc
	if (!ctx.cr0.eq) goto loc_82E943CC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82e943ac
	if (!ctx.cr6.eq) goto loc_82E943AC;
loc_82E943CC:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82e94418
	if (ctx.cr0.eq) goto loc_82E94418;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,4652
	ctx.r10.s64 = ctx.r10.s64 + 4652;
	// addi r8,r4,16
	ctx.r8.s64 = ctx.r4.s64 + 16;
loc_82E943E4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82e94404
	if (!ctx.cr0.eq) goto loc_82E94404;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82e943e4
	if (!ctx.cr6.eq) goto loc_82E943E4;
loc_82E94404:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82e94418
	if (ctx.cr0.eq) goto loc_82E94418;
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// ori r31,r31,16386
	ctx.r31.u64 = ctx.r31.u64 | 16386;
	// b 0x82e9442c
	goto loc_82E9442C;
loc_82E94418:
	// stw r3,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E9442C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E9442C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82E94430:
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

__attribute__((alias("__imp__sub_82E94444"))) PPC_WEAK_FUNC(sub_82E94444);
PPC_FUNC_IMPL(__imp__sub_82E94444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E94448"))) PPC_WEAK_FUNC(sub_82E94448);
PPC_FUNC_IMPL(__imp__sub_82E94448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82E94450;
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
	// beq cr6,0x82e94494
	if (ctx.cr6.eq) goto loc_82E94494;
loc_82E9446C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e94494
	if (ctx.cr6.lt) goto loc_82E94494;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e944ec
	if (ctx.cr6.lt) goto loc_82E944EC;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// lwz r31,100(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82e9446c
	if (!ctx.cr6.eq) goto loc_82E9446C;
loc_82E94494:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82e94534
	if (ctx.cr6.eq) goto loc_82E94534;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E944B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82e9452c
	if (ctx.cr0.lt) goto loc_82E9452C;
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
	// beq cr6,0x82e944e4
	if (ctx.cr6.eq) goto loc_82E944E4;
	// stw r11,100(r29)
	PPC_STORE_U32(ctx.r29.u32 + 100, ctx.r11.u32);
loc_82E944E4:
	// stw r31,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r31.u32);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82E944EC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,-31972
	ctx.r9.s64 = -2095316992;
	// li r3,0
	ctx.r3.s64 = 0;
	// subf r10,r11,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
	// addi r9,r9,-27296
	ctx.r9.s64 = ctx.r9.s64 + -27296;
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
loc_82E9452C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_82E94534:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x82e9452c
	goto loc_82E9452C;
}

__attribute__((alias("__imp__sub_82E94540"))) PPC_WEAK_FUNC(sub_82E94540);
PPC_FUNC_IMPL(__imp__sub_82E94540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82E94548;
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
	// bne cr6,0x82e94568
	if (!ctx.cr6.eq) goto loc_82E94568;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82e94588
	goto loc_82E94588;
loc_82E94568:
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8eee0
	ctx.lr = 0x82E94574;
	sub_82E8EEE0(ctx, base);
	// lwz r11,172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x82e8f138
	ctx.lr = 0x82E94584;
	sub_82E8F138(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E94588:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E94590"))) PPC_WEAK_FUNC(sub_82E94590);
PPC_FUNC_IMPL(__imp__sub_82E94590) {
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
	// beq cr6,0x82e945b4
	if (ctx.cr6.eq) goto loc_82E945B4;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_82E945B4:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e94448
	ctx.lr = 0x82E945C4;
	sub_82E94448(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82e945d8
	if (ctx.cr0.lt) goto loc_82E945D8;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
loc_82E945D8:
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

__attribute__((alias("__imp__sub_82E945F4"))) PPC_WEAK_FUNC(sub_82E945F4);
PPC_FUNC_IMPL(__imp__sub_82E945F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

