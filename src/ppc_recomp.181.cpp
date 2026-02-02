#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82A03D48"))) PPC_WEAK_FUNC(sub_82A03D48);
PPC_FUNC_IMPL(__imp__sub_82A03D48) {
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
	// lis r4,8348
	ctx.r4.s64 = 547094528;
	// li r3,56
	ctx.r3.s64 = 56;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82691410
	ctx.lr = 0x82A03D6C;
	sub_82691410(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// stw r3,12080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12080, ctx.r3.u32);
	// beq cr6,0x82a03df4
	if (ctx.cr6.eq) goto loc_82A03DF4;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A03D8C;
	sub_82FA7CF0(ctx, base);
	// lwz r11,12080(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12080);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// lis r7,6690
	ctx.r7.s64 = 438435840;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r7,r7,88
	ctx.r7.u64 = ctx.r7.u64 | 88;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,240
	ctx.r4.s64 = 240;
	// li r3,320
	ctx.r3.s64 = 320;
	// bl 0x82af41e0
	ctx.lr = 0x82A03DD4;
	sub_82AF41E0(ctx, base);
	// lis r4,-21348
	ctx.r4.s64 = -1399062528;
	// bl 0x82a3df10
	ctx.lr = 0x82A03DDC;
	sub_82A3DF10(ctx, base);
	// lwz r11,12080(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12080);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r11,12080(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12080);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82a03e00
	if (!ctx.cr6.eq) goto loc_82A03E00;
loc_82A03DF4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82a03e0c
	goto loc_82A03E0C;
loc_82A03E00:
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82af44c8
	ctx.lr = 0x82A03E08;
	sub_82AF44C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82A03E0C:
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

__attribute__((alias("__imp__sub_82A03E24"))) PPC_WEAK_FUNC(sub_82A03E24);
PPC_FUNC_IMPL(__imp__sub_82A03E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A03E28"))) PPC_WEAK_FUNC(sub_82A03E28);
PPC_FUNC_IMPL(__imp__sub_82A03E28) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x83178d24
	ctx.lr = 0x82A03E48;
	__imp__XamXStudioRequest(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82a03e78
	if (ctx.cr6.lt) goto loc_82A03E78;
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// lis r8,-31975
	ctx.r8.s64 = -2095513600;
	// addi r7,r11,5208
	ctx.r7.s64 = ctx.r11.s64 + 5208;
	// addi r6,r8,-12524
	ctx.r6.s64 = ctx.r8.s64 + -12524;
loc_82A03E60:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r6
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r7,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82a03e60
	if (!ctx.cr0.eq) goto loc_82A03E60;
loc_82A03E78:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A03E88"))) PPC_WEAK_FUNC(sub_82A03E88);
PPC_FUNC_IMPL(__imp__sub_82A03E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82A03E90;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,770
	ctx.r3.s64 = 770;
	// bl 0x83178d24
	ctx.lr = 0x82A03EA0;
	__imp__XamXStudioRequest(ctx, base);
	// bl 0x82a775e8
	ctx.lr = 0x82A03EA4;
	sub_82A775E8(ctx, base);
	// bl 0x82a0ab28
	ctx.lr = 0x82A03EA8;
	sub_82A0AB28(ctx, base);
	// bl 0x82a0a900
	ctx.lr = 0x82A03EAC;
	sub_82A0A900(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a03ed0
	if (ctx.cr6.eq) goto loc_82A03ED0;
	// bl 0x82a13998
	ctx.lr = 0x82A03EC8;
	sub_82A13998(ctx, base);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
loc_82A03ED0:
	// lwz r11,10912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10912);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a03ee8
	if (ctx.cr6.eq) goto loc_82A03EE8;
	// bl 0x82a137f8
	ctx.lr = 0x82A03EE0;
	sub_82A137F8(ctx, base);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r27,10912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10912, ctx.r27.u32);
loc_82A03EE8:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a03fb4
	if (ctx.cr6.eq) goto loc_82A03FB4;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r30,r11,-12452
	ctx.r30.s64 = ctx.r11.s64 + -12452;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A03F04;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// sync 
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x83179644
	ctx.lr = 0x82A03F1C;
	__imp__NtSetEvent(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x831792b4
	ctx.lr = 0x82A03F2C;
	__imp__KeSetEvent(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x831792b4
	ctx.lr = 0x82A03F3C;
	__imp__KeSetEvent(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A03F44;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a03f68
	if (ctx.cr6.eq) goto loc_82A03F68;
	// lis r11,-90
	ctx.r11.s64 = -5898240;
	// ori r10,r11,38865
	ctx.r10.u64 = ctx.r11.u64 | 38865;
	// rldicr r9,r10,10,53
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 10) & 0xFFFFFFFFFFFFFC00;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// b 0x82a03f74
	goto loc_82A03F74;
loc_82A03F68:
	// lis r11,-153
	ctx.r11.s64 = -10027008;
	// ori r10,r11,27008
	ctx.r10.u64 = ctx.r11.u64 | 27008;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
loc_82A03F74:
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x83179414
	ctx.lr = 0x82A03F8C;
	__imp__KeWaitForSingleObject(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x83179424
	ctx.lr = 0x82A03F94;
	__imp__ObDereferenceObject(ctx, base);
	// stw r27,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r27.u32);
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A03FAC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A03FB4;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82A03FB4:
	// bl 0x82a10b18
	ctx.lr = 0x82A03FB8;
	sub_82A10B18(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a03fcc
	if (ctx.cr6.eq) goto loc_82A03FCC;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r27,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r27.u32);
loc_82A03FCC:
	// bl 0x82a03710
	ctx.lr = 0x82A03FD0;
	sub_82A03710(ctx, base);
	// bl 0x82a03428
	ctx.lr = 0x82A03FD4;
	sub_82A03428(ctx, base);
	// bl 0x82a01e20
	ctx.lr = 0x82A03FD8;
	sub_82A01E20(ctx, base);
	// lwz r3,11072(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11072);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a03ff4
	if (ctx.cr6.eq) goto loc_82A03FF4;
	// lis r4,-21348
	ctx.r4.s64 = -1399062528;
	// bl 0x82691460
	ctx.lr = 0x82A03FEC;
	sub_82691460(ctx, base);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r27,11072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11072, ctx.r27.u32);
loc_82A03FF4:
	// lwz r3,11128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a04010
	if (ctx.cr6.eq) goto loc_82A04010;
	// lis r4,-21348
	ctx.r4.s64 = -1399062528;
	// bl 0x82691460
	ctx.lr = 0x82A04008;
	sub_82691460(ctx, base);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r27,11128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11128, ctx.r27.u32);
loc_82A04010:
	// lwz r3,11184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11184);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0402c
	if (ctx.cr6.eq) goto loc_82A0402C;
	// lis r4,-21348
	ctx.r4.s64 = -1399062528;
	// bl 0x82691460
	ctx.lr = 0x82A04024;
	sub_82691460(ctx, base);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r27,11184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11184, ctx.r27.u32);
loc_82A0402C:
	// li r29,6
	ctx.r29.s64 = 6;
	// addi r30,r31,10600
	ctx.r30.s64 = ctx.r31.s64 + 10600;
loc_82A04034:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a04050
	if (ctx.cr6.eq) goto loc_82A04050;
	// bl 0x82a093b8
	ctx.lr = 0x82A04044;
	sub_82A093B8(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83179424
	ctx.lr = 0x82A0404C;
	__imp__ObDereferenceObject(ctx, base);
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
loc_82A04050:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82a04034
	if (!ctx.cr0.eq) goto loc_82A04034;
	// lwz r3,10624(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10624);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a04074
	if (ctx.cr6.eq) goto loc_82A04074;
	// bl 0x83179424
	ctx.lr = 0x82A0406C;
	__imp__ObDereferenceObject(ctx, base);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r27,10624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10624, ctx.r27.u32);
loc_82A04074:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x83179634
	ctx.lr = 0x82A0407C;
	__imp__NtClose(ctx, base);
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// std r27,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r27.u64);
	// stw r27,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r27.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// std r27,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r27.u64);
	// bl 0x83178d74
	ctx.lr = 0x82A04098;
	__imp__XamGetActiveDashAppInfo(ctx, base);
	// ld r11,10544(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 10544);
	// lis r9,-31963
	ctx.r9.s64 = -2094727168;
	// rlwinm r8,r11,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// lwz r30,23632(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 23632);
	// lwz r29,104(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// ld r28,96(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// beq cr6,0x82a040e8
	if (ctx.cr6.eq) goto loc_82A040E8;
	// bl 0x83178d64
	ctx.lr = 0x82A040BC;
	__imp__XamGetCurrentTitleId(ctx, base);
	// lis r8,8274
	ctx.r8.s64 = 542244864;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// ori r8,r8,21504
	ctx.r8.u64 = ctx.r8.u64 | 21504;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r31,10536
	ctx.r3.s64 = ctx.r31.s64 + 10536;
	// bl 0x83179614
	ctx.lr = 0x82A040E8;
	__imp__EtxProducerLog(ctx, base);
loc_82A040E8:
	// addi r3,r31,10536
	ctx.r3.s64 = ctx.r31.s64 + 10536;
	// bl 0x83179624
	ctx.lr = 0x82A040F0;
	__imp__EtxProducerUnregister(ctx, base);
	// bl 0x82a0adf8
	ctx.lr = 0x82A040F4;
	sub_82A0ADF8(ctx, base);
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// lis r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r5,59856
	ctx.r5.u64 = ctx.r5.u64 | 59856;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r27,29308(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29308, ctx.r27.u32);
	// bl 0x82fa7cf0
	ctx.lr = 0x82A04114;
	sub_82FA7CF0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0411C"))) PPC_WEAK_FUNC(sub_82A0411C);
PPC_FUNC_IMPL(__imp__sub_82A0411C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A04120"))) PPC_WEAK_FUNC(sub_82A04120);
PPC_FUNC_IMPL(__imp__sub_82A04120) {
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
	// add r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 + ctx.r5.u64;
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// li r7,4096
	ctx.r7.s64 = 4096;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82662c60
	ctx.lr = 0x82A04160;
	sub_82662C60(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82662d30
	ctx.lr = 0x82A0416C;
	sub_82662D30(ctx, base);
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

__attribute__((alias("__imp__sub_82A04180"))) PPC_WEAK_FUNC(sub_82A04180);
PPC_FUNC_IMPL(__imp__sub_82A04180) {
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
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82662c60
	ctx.lr = 0x82A041A8;
	sub_82662C60(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82662d30
	ctx.lr = 0x82A041B4;
	sub_82662D30(ctx, base);
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

__attribute__((alias("__imp__sub_82A041C8"))) PPC_WEAK_FUNC(sub_82A041C8);
PPC_FUNC_IMPL(__imp__sub_82A041C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A041D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,29312
	ctx.r30.s64 = ctx.r11.s64 + 29312;
	// addi r3,r30,12272
	ctx.r3.s64 = ctx.r30.s64 + 12272;
	// bl 0x83179274
	ctx.lr = 0x82A041E8;
	__imp__KfAcquireSpinLock(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82a041fc
	if (ctx.cr6.eq) goto loc_82A041FC;
	// stw r31,12280(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12280, ctx.r31.u32);
loc_82A041FC:
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r10,r30,12264
	ctx.r10.s64 = ctx.r30.s64 + 12264;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82A04208:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a04224
	if (ctx.cr6.eq) goto loc_82A04224;
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82a04224
	if (!ctx.cr6.eq) goto loc_82A04224;
	// stw r31,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r31.u32);
loc_82A04224:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82a04208
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A04208;
	// sync 
	// lwz r11,12264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a0424c
	if (!ctx.cr6.eq) goto loc_82A0424C;
	// lwz r11,12268(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a0424c
	if (!ctx.cr6.eq) goto loc_82A0424C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82A0424C:
	// addi r3,r30,12272
	ctx.r3.s64 = ctx.r30.s64 + 12272;
	// bl 0x83179294
	ctx.lr = 0x82A04254;
	__imp__KfReleaseSpinLock(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A04260"))) PPC_WEAK_FUNC(sub_82A04260);
PPC_FUNC_IMPL(__imp__sub_82A04260) {
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
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// addi r10,r31,12264
	ctx.r10.s64 = ctx.r31.s64 + 12264;
	// lwz r11,12292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12292);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82a0437c
	if (!ctx.cr6.eq) goto loc_82A0437C;
	// bl 0x82a01c38
	ctx.lr = 0x82A04298;
	sub_82A01C38(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0437c
	if (ctx.cr6.eq) goto loc_82A0437C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82a018d8
	ctx.lr = 0x82A042AC;
	sub_82A018D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82a0436c
	if (ctx.cr6.eq) goto loc_82A0436C;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// addi r8,r11,40
	ctx.r8.s64 = ctx.r11.s64 + 40;
	// addi r10,r10,-5724
	ctx.r10.s64 = ctx.r10.s64 + -5724;
loc_82A042C4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82a042e4
	if (!ctx.cr0.eq) goto loc_82A042E4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82a042c4
	if (!ctx.cr6.eq) goto loc_82A042C4;
loc_82A042E4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82a04318
	if (ctx.cr6.eq) goto loc_82A04318;
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// addi r10,r10,-5728
	ctx.r10.s64 = ctx.r10.s64 + -5728;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82A04300:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82a04300
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A04300;
	// bl 0x82a014b8
	ctx.lr = 0x82A04310;
	sub_82A014B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a041c8
	ctx.lr = 0x82A04318;
	sub_82A041C8(ctx, base);
loc_82A04318:
	// addi r3,r31,12272
	ctx.r3.s64 = ctx.r31.s64 + 12272;
	// bl 0x83179274
	ctx.lr = 0x82A04320;
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r11,12284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12284);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a04364
	if (ctx.cr6.eq) goto loc_82A04364;
	// lwz r11,12280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12280);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a04364
	if (!ctx.cr6.eq) goto loc_82A04364;
	// lwz r11,12292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12292);
	// addi r10,r31,12264
	ctx.r10.s64 = ctx.r31.s64 + 12264;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r30.u32);
	// lwz r11,12292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12292);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// clrlwi r11,r8,31
	ctx.r11.u64 = ctx.r8.u32 & 0x1;
	// stw r11,12292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12292, ctx.r11.u32);
	// sync 
	// li r30,0
	ctx.r30.s64 = 0;
loc_82A04364:
	// addi r3,r31,12272
	ctx.r3.s64 = ctx.r31.s64 + 12272;
	// bl 0x83179294
	ctx.lr = 0x82A0436C;
	__imp__KfReleaseSpinLock(ctx, base);
loc_82A0436C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a0437c
	if (ctx.cr6.eq) goto loc_82A0437C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a01ce0
	ctx.lr = 0x82A0437C;
	sub_82A01CE0(ctx, base);
loc_82A0437C:
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

__attribute__((alias("__imp__sub_82A04394"))) PPC_WEAK_FUNC(sub_82A04394);
PPC_FUNC_IMPL(__imp__sub_82A04394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A04398"))) PPC_WEAK_FUNC(sub_82A04398);
PPC_FUNC_IMPL(__imp__sub_82A04398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r11,r11,29312
	ctx.r11.s64 = ctx.r11.s64 + 29312;
	// lwz r10,2164(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2164);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82a043bc
	if (!ctx.cr6.eq) goto loc_82A043BC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82A043BC:
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,59552
	ctx.r9.u64 = ctx.r10.u64 | 59552;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r8,r9,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82a043f0
	if (ctx.cr6.eq) goto loc_82A043F0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r10,59548
	ctx.r8.u64 = ctx.r10.u64 | 59548;
	// ori r7,r9,59552
	ctx.r7.u64 = ctx.r9.u64 | 59552;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r9,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r9.u32);
	// b 0x82a0442c
	goto loc_82A0442C;
loc_82A043F0:
	// ori r7,r10,59548
	ctx.r7.u64 = ctx.r10.u64 | 59548;
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r6,r8,59548
	ctx.r6.u64 = ctx.r8.u64 | 59548;
	// lwzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r5,r10,0,0,0
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// stwx r10,r11,r6
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r10.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82a04424
	if (ctx.cr6.eq) goto loc_82A04424;
	// lis r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r8,r9,59548
	ctx.r8.u64 = ctx.r9.u64 | 59548;
	// stwx r10,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
loc_82A04424:
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r9,59552
	ctx.r8.u64 = ctx.r9.u64 | 59552;
loc_82A0442C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r10,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82a3dc40
	sub_82A3DC40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A04444"))) PPC_WEAK_FUNC(sub_82A04444);
PPC_FUNC_IMPL(__imp__sub_82A04444) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A04448"))) PPC_WEAK_FUNC(sub_82A04448);
PPC_FUNC_IMPL(__imp__sub_82A04448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A04450;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// ori r9,r10,59552
	ctx.r9.u64 = ctx.r10.u64 | 59552;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r8,10528(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10528);
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// rlwinm r28,r11,0,0,0
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// beq cr6,0x82a044cc
	if (ctx.cr6.eq) goto loc_82A044CC;
	// lwz r11,2188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2188);
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a044a4
	if (ctx.cr6.eq) goto loc_82A044A4;
	// bl 0x82a3df00
	ctx.lr = 0x82A04494;
	sub_82A3DF00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82a044bc
	if (!ctx.cr6.eq) goto loc_82A044BC;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82a044b4
	goto loc_82A044B4;
loc_82A044A4:
	// bl 0x82a3df00
	ctx.lr = 0x82A044A8;
	sub_82A3DF00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82a044bc
	if (ctx.cr6.eq) goto loc_82A044BC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A044B4:
	// bl 0x82a3def0
	ctx.lr = 0x82A044B8;
	sub_82A3DEF0(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
loc_82A044BC:
	// bl 0x82a3df00
	ctx.lr = 0x82A044C0;
	sub_82A3DF00(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,11244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11244, ctx.r3.u32);
	// stw r11,10528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10528, ctx.r11.u32);
loc_82A044CC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// beq cr6,0x82a044f8
	if (ctx.cr6.eq) goto loc_82A044F8;
	// bl 0x829ff3a0
	ctx.lr = 0x82A044E0;
	sub_829FF3A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82a044f8
	if (!ctx.cr6.eq) goto loc_82A044F8;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x82a044f8
	if (!ctx.cr6.eq) goto loc_82A044F8;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82a044fc
	if (ctx.cr6.eq) goto loc_82A044FC;
loc_82A044F8:
	// bl 0x82a04398
	ctx.lr = 0x82A044FC;
	sub_82A04398(ctx, base);
loc_82A044FC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// beq cr6,0x82a04518
	if (ctx.cr6.eq) goto loc_82A04518;
	// bl 0x829ff3a0
	ctx.lr = 0x82A04510;
	sub_829FF3A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82a0451c
	if (ctx.cr6.eq) goto loc_82A0451C;
loc_82A04518:
	// bl 0x82a137a0
	ctx.lr = 0x82A0451C;
	sub_82A137A0(ctx, base);
loc_82A0451C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A04524"))) PPC_WEAK_FUNC(sub_82A04524);
PPC_FUNC_IMPL(__imp__sub_82A04524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A04528"))) PPC_WEAK_FUNC(sub_82A04528);
PPC_FUNC_IMPL(__imp__sub_82A04528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r10,6
	ctx.r10.s64 = 6;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r7,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r7.u32);
	// lfs f12,23856(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 23856);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r7,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r7.u32);
	// fmr f11,f12
	ctx.f11.f64 = ctx.f12.f64;
	// lfs f10,21420(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21420);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,5184(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f9.f64 = double(temp.f32);
loc_82A0455C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82a045ec
	if (ctx.cr6.eq) goto loc_82A045EC;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// vspltisw128 v62,0
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_set1_epi32(int(0x0)));
	// addi r6,r1,-32
	ctx.r6.s64 = ctx.r1.s64 + -32;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r5,r1,-32
	ctx.r5.s64 = ctx.r1.s64 + -32;
	// addi r3,r1,-16
	ctx.r3.s64 = ctx.r1.s64 + -16;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// lvx128 v61,r0,r9
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v61,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f9,-28(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// lvx128 v63,r0,r5
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v60,v63,v63
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v60.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v63.f32), 0xEF));
	// vrsqrtefp128 v59,v60
	_mm_store_ps(ctx.v59.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v60.f32))));
	// vor128 v13,v60,v60
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v60.u8));
	// vcmpeqfp128 v12,v60,v62
	_mm_store_ps(ctx.v12.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v62.f32)));
	// vmulfp128 v0,v60,v59
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v59.f32)));
	// vsel v12,v0,v13,v12
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// stvx128 v12,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// bne cr6,0x82a045bc
	if (!ctx.cr6.eq) goto loc_82A045BC;
	// fsubs f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
loc_82A045BC:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82a045dc
	if (!ctx.cr6.lt) goto loc_82A045DC;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82A045DC:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x82a045ec
	if (!ctx.cr6.lt) goto loc_82A045EC;
	// stw r10,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r10.u32);
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
loc_82A045EC:
	// addi r11,r11,448
	ctx.r11.s64 = ctx.r11.s64 + 448;
	// bdnz 0x82a0455c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A0455C;
	// addi r11,r1,-48
	ctx.r11.s64 = ctx.r1.s64 + -48;
	// stw r7,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r7.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A04610"))) PPC_WEAK_FUNC(sub_82A04610);
PPC_FUNC_IMPL(__imp__sub_82A04610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82A04618;
	__savegprlr_25(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,15636(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15636);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0463c
	if (ctx.cr6.eq) goto loc_82A0463C;
	// lwz r27,120(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// b 0x82a04640
	goto loc_82A04640;
loc_82A0463C:
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
loc_82A04640:
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r28,r11,-12580
	ctx.r28.s64 = ctx.r11.s64 + -12580;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A04650;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// li r25,1
	ctx.r25.s64 = 1;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// lwz r11,10652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10652);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0469c
	if (ctx.cr6.eq) goto loc_82A0469C;
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// bne cr6,0x82a0469c
	if (!ctx.cr6.eq) goto loc_82A0469C;
	// lwz r11,15636(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15636);
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r4,r31,1856
	ctx.r4.s64 = ctx.r31.s64 + 1856;
	// addi r3,r11,108
	ctx.r3.s64 = ctx.r11.s64 + 108;
	// bl 0x83179654
	ctx.lr = 0x82A04684;
	__imp__RtlCompareMemory(ctx, base);
	// cmplwi cr6,r3,12
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 12, ctx.xer);
	// bne cr6,0x82a0469c
	if (!ctx.cr6.eq) goto loc_82A0469C;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// stw r25,10660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10660, ctx.r25.u32);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stw r26,10656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10656, ctx.r26.u32);
loc_82A0469C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A046A4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mftb r11
	ctx.r11.u64 = __rdtsc();
	// stw r11,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a046e4
	if (ctx.cr6.eq) goto loc_82A046E4;
	// lwz r11,11240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11240);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r28,r11,4
	ctx.r28.s64 = ctx.r11.s64 + 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82662c60
	ctx.lr = 0x82A046D8;
	sub_82662C60(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82662d30
	ctx.lr = 0x82A046E4;
	sub_82662D30(ctx, base);
loc_82A046E4:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r27,r10,53248
	ctx.r27.u64 = ctx.r10.u64 | 53248;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a04790
	if (ctx.cr6.eq) goto loc_82A04790;
	// lwz r10,15632(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15632);
	// ld r9,80(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 80);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r8,15632(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15632);
	// lwz r6,72(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r6,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r6.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a0472c
	if (!ctx.cr6.eq) goto loc_82A0472C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a04770
	if (ctx.cr6.eq) goto loc_82A04770;
loc_82A0472C:
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r11,11240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11240);
	// lwz r3,100(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82a74f08
	ctx.lr = 0x82A04744;
	sub_82A74F08(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r28,r11,48
	ctx.r28.s64 = ctx.r11.s64 + 48;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82662c60
	ctx.lr = 0x82A04764;
	sub_82662C60(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82662d30
	ctx.lr = 0x82A04770;
	sub_82662D30(ctx, base);
loc_82A04770:
	// lwz r11,15632(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15632);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r9,92(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// stw r9,112(r10)
	PPC_STORE_U32(ctx.r10.u32 + 112, ctx.r9.u32);
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x82a0a3a0
	ctx.lr = 0x82A0478C;
	sub_82A0A3A0(ctx, base);
	// stw r26,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r26.u32);
loc_82A04790:
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a04854
	if (ctx.cr6.eq) goto loc_82A04854;
	// lwz r11,11244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11244);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a04814
	if (ctx.cr6.eq) goto loc_82A04814;
	// lwz r11,12080(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12080);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,100(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82a74f08
	ctx.lr = 0x82A047BC;
	sub_82A74F08(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r28,r11,48
	ctx.r28.s64 = ctx.r11.s64 + 48;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82662c60
	ctx.lr = 0x82A047DC;
	sub_82662C60(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82662d30
	ctx.lr = 0x82A047E8;
	sub_82662D30(ctx, base);
	// lwz r11,12080(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12080);
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r28,r11,4
	ctx.r28.s64 = ctx.r11.s64 + 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82662c60
	ctx.lr = 0x82A04808;
	sub_82662C60(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82662d30
	ctx.lr = 0x82A04814;
	sub_82662D30(ctx, base);
loc_82A04814:
	// lwz r11,15632(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15632);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// ld r9,80(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 80);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,15632(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15632);
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r6,72(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// stw r6,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r6.u32);
	// lwz r5,15632(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15632);
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r11,92(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 92);
	// stw r11,112(r4)
	PPC_STORE_U32(ctx.r4.u32 + 112, ctx.r11.u32);
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82a0a3a0
	ctx.lr = 0x82A04850;
	sub_82A0A3A0(ctx, base);
	// stw r26,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r26.u32);
loc_82A04854:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a048dc
	if (ctx.cr6.eq) goto loc_82A048DC;
	// lwz r10,15632(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15632);
	// li r5,15360
	ctx.r5.s64 = 15360;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r9,92(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// stw r9,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r9.u32);
	// lwz r8,15632(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15632);
	// lwz r7,24(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// ld r6,80(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + 80);
	// std r6,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r6.u64);
	// lwz r3,15632(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15632);
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r3,100(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 100);
	// bl 0x82a74f08
	ctx.lr = 0x82A048A0;
	sub_82A74F08(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r28,r11,48
	ctx.r28.s64 = ctx.r11.s64 + 48;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82662c60
	ctx.lr = 0x82A048C0;
	sub_82662C60(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82662d30
	ctx.lr = 0x82A048CC;
	sub_82662D30(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x82a0a3a0
	ctx.lr = 0x82A048D8;
	sub_82A0A3A0(ctx, base);
	// stw r26,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r26.u32);
loc_82A048DC:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a04924
	if (ctx.cr6.eq) goto loc_82A04924;
	// lwz r10,15632(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15632);
	// li r3,1
	ctx.r3.s64 = 1;
	// ld r9,80(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 80);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r8,15632(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15632);
	// lwz r7,12(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r6,72(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// stw r6,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r6.u32);
	// lwz r5,15632(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15632);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r11,92(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 92);
	// stw r11,112(r4)
	PPC_STORE_U32(ctx.r4.u32 + 112, ctx.r11.u32);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82a0a3a0
	ctx.lr = 0x82A04920;
	sub_82A0A3A0(ctx, base);
	// stw r26,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r26.u32);
loc_82A04924:
	// lwz r11,15636(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15636);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a04c60
	if (ctx.cr6.eq) goto loc_82A04C60;
	// lwz r10,15632(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15632);
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// stw r9,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r9.u32);
	// lwz r11,10660(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10660);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a049bc
	if (!ctx.cr6.eq) goto loc_82A049BC;
	// lwz r10,15636(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15636);
	// li r7,16
	ctx.r7.s64 = 16;
	// lwz r11,10676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10676);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// ld r9,80(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 80);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r8,15636(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15636);
	// lwz r11,10676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10676);
	// lwz r3,72(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// stw r3,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r3.u32);
	// lwz r11,10676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10676);
	// lwz r10,15636(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15636);
	// addi r9,r10,108
	ctx.r9.s64 = ctx.r10.s64 + 108;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r10,r11,36
	ctx.r10.s64 = ctx.r11.s64 + 36;
	// stw r8,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r8.u32);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r3,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r3.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// lwz r11,10676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10676);
	// addi r28,r11,48
	ctx.r28.s64 = ctx.r11.s64 + 48;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82662c60
	ctx.lr = 0x82A049B0;
	sub_82662C60(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82662d30
	ctx.lr = 0x82A049BC;
	sub_82662D30(ctx, base);
loc_82A049BC:
	// addi r9,r31,10908
	ctx.r9.s64 = ctx.r31.s64 + 10908;
loc_82A049C0:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// bne cr6,0x82a049e4
	if (!ctx.cr6.eq) goto loc_82A049E4;
	// stwcx. r26,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r26.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82a049c0
	if (!ctx.cr0.eq) goto loc_82A049C0;
	// b 0x82a049ec
	goto loc_82A049EC;
loc_82A049E4:
	// stwcx. r11,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82A049EC:
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a04ab8
	if (!ctx.cr6.eq) goto loc_82A04AB8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a04a24
	if (!ctx.cr6.eq) goto loc_82A04A24;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a04a24
	if (!ctx.cr6.eq) goto loc_82A04A24;
	// lwz r11,11248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11248);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a04a38
	if (ctx.cr6.eq) goto loc_82A04A38;
	// lwz r11,12080(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12080);
	// b 0x82a04a28
	goto loc_82A04A28;
loc_82A04A24:
	// lwz r11,11240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11240);
loc_82A04A28:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,10876(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10876);
	// bl 0x82a74f08
	ctx.lr = 0x82A04A38;
	sub_82A74F08(ctx, base);
loc_82A04A38:
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r28,r11,-12552
	ctx.r28.s64 = ctx.r11.s64 + -12552;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A04A48;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r26,10904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10904, ctx.r26.u32);
	// lwz r11,10900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10900);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a04ab0
	if (ctx.cr6.eq) goto loc_82A04AB0;
	// lwz r8,15636(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15636);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// ld r11,80(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 80);
	// std r11,10688(r31)
	PPC_STORE_U64(ctx.r31.u32 + 10688, ctx.r11.u64);
	// lwz r7,15636(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15636);
	// lwz r11,72(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 72);
	// stw r11,10696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10696, ctx.r11.u32);
	// lwz r11,15636(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15636);
	// lwz r6,108(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// stw r6,10704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10704, ctx.r6.u32);
	// lwz r8,112(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// stw r8,10708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10708, ctx.r8.u32);
	// lwz r7,116(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// stw r26,10896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10896, ctx.r26.u32);
	// stw r26,10900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10900, ctx.r26.u32);
	// stw r7,10712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10712, ctx.r7.u32);
	// bl 0x831792b4
	ctx.lr = 0x82A04AB0;
	__imp__KeSetEvent(ctx, base);
loc_82A04AB0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A04AB8;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82A04AB8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a04b88
	if (ctx.cr6.eq) goto loc_82A04B88;
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a04b88
	if (ctx.cr6.eq) goto loc_82A04B88;
	// lwz r10,15636(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15636);
	// lwz r9,92(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// stw r9,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r9.u32);
	// lwz r8,15636(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15636);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// ld r6,80(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + 80);
	// std r6,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r6.u64);
	// lwz r5,15632(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15632);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,72(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 72);
	// stw r3,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r3.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r26,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r26.u32);
	// lwz r10,15636(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15636);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r8,r9,0,23,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82a04b2c
	if (ctx.cr6.eq) goto loc_82A04B2C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
loc_82A04B2C:
	// lwz r10,15636(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15636);
	// li r3,2
	ctx.r3.s64 = 2;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,108(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// stw r9,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// lwz r8,112(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// stw r8,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r8.u32);
	// lwz r7,116(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	// stw r7,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r7.u32);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82a0a3a0
	ctx.lr = 0x82A04B58;
	sub_82A0A3A0(ctx, base);
	// lwz r3,1596(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1596);
	// addi r6,r31,1840
	ctx.r6.s64 = ctx.r31.s64 + 1840;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r3,r11
	ctx.r5.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r4,r5,6,0,25
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0xFFFFFFC0;
	// lwzx r11,r4,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a04b84
	if (!ctx.cr6.eq) goto loc_82A04B84;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x82a08e18
	ctx.lr = 0x82A04B84;
	sub_82A08E18(ctx, base);
loc_82A04B84:
	// stw r26,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r26.u32);
loc_82A04B88:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a04c08
	if (ctx.cr6.eq) goto loc_82A04C08;
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a04c08
	if (ctx.cr6.eq) goto loc_82A04C08;
	// lwz r10,15632(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15632);
	// li r3,3
	ctx.r3.s64 = 3;
	// lwz r9,92(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// stw r9,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r9.u32);
	// lwz r8,15636(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15636);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ld r6,80(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + 80);
	// std r6,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r6.u64);
	// lwz r5,15632(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15632);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,72(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 72);
	// stw r11,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r11.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r26,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r26.u32);
	// lwz r10,15636(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15636);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,108(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// stw r9,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// lwz r8,112(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// stw r8,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r8.u32);
	// lwz r7,116(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	// stw r7,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r7.u32);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82a0a3a0
	ctx.lr = 0x82A04C04;
	sub_82A0A3A0(ctx, base);
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
loc_82A04C08:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a04c60
	if (ctx.cr6.eq) goto loc_82A04C60;
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// rlwinm r9,r10,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a04c60
	if (ctx.cr6.eq) goto loc_82A04C60;
	// lwz r10,15636(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15636);
	// li r3,5
	ctx.r3.s64 = 5;
	// lwz r9,92(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// stw r9,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r9.u32);
	// lwz r8,15636(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15636);
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// ld r6,80(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + 80);
	// std r6,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r6.u64);
	// lwz r5,15636(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15636);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,72(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 72);
	// stw r11,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r11.u32);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82a0a3a0
	ctx.lr = 0x82A04C5C;
	sub_82A0A3A0(ctx, base);
	// stw r26,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r26.u32);
loc_82A04C60:
	// lwz r11,1148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a04c84
	if (!ctx.cr6.eq) goto loc_82A04C84;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,50
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 50, ctx.xer);
	// beq cr6,0x82a04c84
	if (ctx.cr6.eq) goto loc_82A04C84;
	// lwz r4,15632(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15632);
	// lwz r3,15636(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15636);
	// bl 0x82a028d8
	ctx.lr = 0x82A04C84;
	sub_82A028D8(ctx, base);
loc_82A04C84:
	// mftb r11
	ctx.r11.u64 = __rdtsc();
	// stw r11,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r11.u32);
	// lwz r9,15632(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15632);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a04d10
	if (ctx.cr6.eq) goto loc_82A04D10;
	// lwz r11,11240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a04d10
	if (ctx.cr6.eq) goto loc_82A04D10;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a04d10
	if (ctx.cr6.eq) goto loc_82A04D10;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// li r9,56
	ctx.r9.s64 = 56;
	// stw r26,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r26.u32);
	// li r8,21076
	ctx.r8.s64 = 21076;
	// stw r25,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r25.u32);
	// li r7,768
	ctx.r7.s64 = 768;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// stw r8,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// ld r6,80(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 80);
	// li r3,5136
	ctx.r3.s64 = 5136;
	// lwz r5,72(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// lwz r11,112(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// lwz r10,116(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	// stw r26,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r26.u32);
	// stw r26,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r26.u32);
	// stw r5,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r5.u32);
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// std r6,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r6.u64);
	// stw r10,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
	// stw r27,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r27.u32);
	// stw r7,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r7.u32);
	// bl 0x83178d24
	ctx.lr = 0x82A04D10;
	__imp__XamXStudioRequest(ctx, base);
loc_82A04D10:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A04D18"))) PPC_WEAK_FUNC(sub_82A04D18);
PPC_FUNC_IMPL(__imp__sub_82A04D18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82A04D20;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-1760(r1)
	ea = -1760 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,2196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2196);
	// lwz r10,11244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11244);
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,2192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2192, ctx.r11.u32);
	// beq cr6,0x82a04d60
	if (ctx.cr6.eq) goto loc_82A04D60;
	// bl 0x82a437d0
	ctx.lr = 0x82A04D54;
	sub_82A437D0(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,928
	ctx.r3.s64 = ctx.r1.s64 + 928;
	// bl 0x82a42778
	ctx.lr = 0x82A04D60;
	sub_82A42778(ctx, base);
loc_82A04D60:
	// lwz r11,11248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11248);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a04dc4
	if (ctx.cr6.eq) goto loc_82A04DC4;
	// li r5,800
	ctx.r5.s64 = 800;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A04D7C;
	sub_82FA7CF0(ctx, base);
	// lwz r11,15632(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15632);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,928
	ctx.r4.s64 = ctx.r1.s64 + 928;
	// li r5,768
	ctx.r5.s64 = 768;
	// ld r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 80);
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x82A04DA0;
	sub_82FA77C0(ctx, base);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,1
	ctx.r3.s64 = 1;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r11,r7,1
	ctx.r11.u64 = ctx.r7.u64 ^ 1;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// bl 0x82a0aa88
	ctx.lr = 0x82A04DC4;
	sub_82A0AA88(ctx, base);
loc_82A04DC4:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82a04ddc
	if (ctx.cr6.eq) goto loc_82A04DDC;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a05144
	if (!ctx.cr6.eq) goto loc_82A05144;
loc_82A04DDC:
	// lwz r11,2192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2192);
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mulli r10,r11,2784
	ctx.r10.s64 = ctx.r11.s64 * 2784;
	// stvx128 v63,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r31,2208
	ctx.r11.s64 = ctx.r31.s64 + 2208;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r30,r28,32
	ctx.r30.s64 = ctx.r28.s64 + 32;
	// bne cr6,0x82a04e28
	if (!ctx.cr6.eq) goto loc_82A04E28;
	// lwz r11,11240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11240);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,928
	ctx.r6.s64 = ctx.r1.s64 + 928;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// addi r4,r11,60
	ctx.r4.s64 = ctx.r11.s64 + 60;
	// addi r3,r29,15392
	ctx.r3.s64 = ctx.r29.s64 + 15392;
	// bl 0x82a3dd08
	ctx.lr = 0x82A04E24;
	sub_82A3DD08(ctx, base);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82A04E28:
	// lwz r11,7952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7952);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a04e64
	if (!ctx.cr6.eq) goto loc_82A04E64;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a04e64
	if (!ctx.cr6.eq) goto loc_82A04E64;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r4,r11,-5980
	ctx.r4.s64 = ctx.r11.s64 + -5980;
	// beq cr6,0x82a04e5c
	if (ctx.cr6.eq) goto loc_82A04E5C;
	// addi r3,r29,15392
	ctx.r3.s64 = ctx.r29.s64 + 15392;
	// bl 0x82a03848
	ctx.lr = 0x82A04E58;
	sub_82A03848(ctx, base);
	// b 0x82a04e64
	goto loc_82A04E64;
loc_82A04E5C:
	// addi r3,r30,48
	ctx.r3.s64 = ctx.r30.s64 + 48;
	// bl 0x82a04528
	ctx.lr = 0x82A04E64;
	sub_82A04528(ctx, base);
loc_82A04E64:
	// lwz r11,11240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11240);
	// lwz r10,15632(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15632);
	// addi r3,r10,72
	ctx.r3.s64 = ctx.r10.s64 + 72;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82a0a3a8
	ctx.lr = 0x82A04E78;
	sub_82A0A3A8(ctx, base);
	// lwz r11,2164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2164);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a04e94
	if (!ctx.cr6.eq) goto loc_82A04E94;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a05144
	if (!ctx.cr6.eq) goto loc_82A05144;
loc_82A04E94:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r9,r10,0,31,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// lfs f31,5184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x82a04ef4
	if (!ctx.cr6.eq) goto loc_82A04EF4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a04ef4
	if (ctx.cr6.eq) goto loc_82A04EF4;
	// bl 0x82a00298
	ctx.lr = 0x82A04EC8;
	sub_82A00298(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stvx128 v1,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82a04efc
	if (ctx.cr6.eq) goto loc_82A04EFC;
	// li r11,48
	ctx.r11.s64 = 48;
	// stvx128 v1,r28,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r28.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// b 0x82a04efc
	goto loc_82A04EFC;
loc_82A04EF4:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v1,r0,r11
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
loc_82A04EFC:
	// li r11,16
	ctx.r11.s64 = 16;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// stvx128 v1,r30,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,-23580(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23580);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,28(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 28, temp.u32);
	// bl 0x82a00150
	ctx.lr = 0x82A04F20;
	sub_82A00150(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a04f40
	if (ctx.cr6.eq) goto loc_82A04F40;
	// addi r5,r29,15392
	ctx.r5.s64 = ctx.r29.s64 + 15392;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r30,48
	ctx.r3.s64 = ctx.r30.s64 + 48;
	// bl 0x82a0b730
	ctx.lr = 0x82A04F3C;
	sub_82A0B730(ctx, base);
	// b 0x82a05018
	goto loc_82A05018;
loc_82A04F40:
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a04f64
	if (ctx.cr6.eq) goto loc_82A04F64;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// ori r9,r11,59548
	ctx.r9.u64 = ctx.r11.u64 | 59548;
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r8.u32);
loc_82A04F64:
	// lwz r11,496(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 496);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a04f88
	if (ctx.cr6.eq) goto loc_82A04F88;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,500(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 500);
	// ori r9,r11,59548
	ctx.r9.u64 = ctx.r11.u64 | 59548;
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,500(r30)
	PPC_STORE_U32(ctx.r30.u32 + 500, ctx.r8.u32);
loc_82A04F88:
	// lwz r11,944(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 944);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a04fac
	if (ctx.cr6.eq) goto loc_82A04FAC;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,948(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 948);
	// ori r9,r11,59548
	ctx.r9.u64 = ctx.r11.u64 | 59548;
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,948(r30)
	PPC_STORE_U32(ctx.r30.u32 + 948, ctx.r8.u32);
loc_82A04FAC:
	// lwz r11,1392(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a04fd0
	if (ctx.cr6.eq) goto loc_82A04FD0;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,1396(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1396);
	// ori r9,r11,59548
	ctx.r9.u64 = ctx.r11.u64 | 59548;
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,1396(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1396, ctx.r8.u32);
loc_82A04FD0:
	// lwz r11,1840(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1840);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a04ff4
	if (ctx.cr6.eq) goto loc_82A04FF4;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,1844(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1844);
	// ori r9,r11,59548
	ctx.r9.u64 = ctx.r11.u64 | 59548;
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,1844(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1844, ctx.r8.u32);
loc_82A04FF4:
	// lwz r11,2288(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a05018
	if (ctx.cr6.eq) goto loc_82A05018;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,2292(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2292);
	// ori r9,r11,59548
	ctx.r9.u64 = ctx.r11.u64 | 59548;
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,2292(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2292, ctx.r8.u32);
loc_82A05018:
	// lwz r11,15632(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15632);
	// ld r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 80);
	// std r10,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r10.u64);
	// lwz r9,15632(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15632);
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// stw r8,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a05048
	if (ctx.cr6.eq) goto loc_82A05048;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// b 0x82a0505c
	goto loc_82A0505C;
loc_82A05048:
	// bl 0x82a3df00
	ctx.lr = 0x82A0504C;
	sub_82A3DF00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82a05060
	if (ctx.cr6.eq) goto loc_82A05060;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
loc_82A0505C:
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
loc_82A05060:
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 ^ 1;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// lwz r11,10632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10632);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a0508c
	if (ctx.cr6.eq) goto loc_82A0508C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a12910
	ctx.lr = 0x82A0508C;
	sub_82A12910(ctx, base);
loc_82A0508C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a0b0c0
	ctx.lr = 0x82A05094;
	sub_82A0B0C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a0b0a0
	ctx.lr = 0x82A0509C;
	sub_82A0B0A0(ctx, base);
	// lwz r3,1596(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1596);
	// addi r10,r31,1840
	ctx.r10.s64 = ctx.r31.s64 + 1840;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r8,r9,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x82a050d0
	if (!ctx.cr6.eq) goto loc_82A050D0;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a050d0
	if (!ctx.cr6.eq) goto loc_82A050D0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a08e80
	ctx.lr = 0x82A050D0;
	sub_82A08E80(ctx, base);
loc_82A050D0:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a050e4
	if (ctx.cr6.eq) goto loc_82A050E4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a13ac8
	ctx.lr = 0x82A050E4;
	sub_82A13AC8(ctx, base);
loc_82A050E4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a050fc
	if (ctx.cr6.eq) goto loc_82A050FC;
	// addi r4,r29,15392
	ctx.r4.s64 = ctx.r29.s64 + 15392;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a0b970
	ctx.lr = 0x82A050FC;
	sub_82A0B970(ctx, base);
loc_82A050FC:
	// lwz r11,15632(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15632);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// stw r10,2768(r28)
	PPC_STORE_U32(ctx.r28.u32 + 2768, ctx.r10.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// stw r9,72(r27)
	PPC_STORE_U32(ctx.r27.u32 + 72, ctx.r9.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82a0af50
	ctx.lr = 0x82A05118;
	sub_82A0AF50(ctx, base);
	// lwz r11,10660(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10660);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a05134
	if (!ctx.cr6.eq) goto loc_82A05134;
	// li r5,2736
	ctx.r5.s64 = 2736;
	// lwz r3,10668(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10668);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a75220
	ctx.lr = 0x82A05134;
	sub_82A75220(ctx, base);
loc_82A05134:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a13dd8
	ctx.lr = 0x82A0513C;
	sub_82A13DD8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a13678
	ctx.lr = 0x82A05144;
	sub_82A13678(ctx, base);
loc_82A05144:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a05174
	if (!ctx.cr6.eq) goto loc_82A05174;
	// lwz r10,2192(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2192);
	// addi r9,r31,2240
	ctx.r9.s64 = ctx.r31.s64 + 2240;
	// lwz r11,11240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11240);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mulli r10,r10,2784
	ctx.r10.s64 = ctx.r10.s64 * 2784;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bl 0x82a13cd0
	ctx.lr = 0x82A05174;
	sub_82A13CD0(ctx, base);
loc_82A05174:
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r30,r11,-12580
	ctx.r30.s64 = ctx.r11.s64 + -12580;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A05184;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r3,10652(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10652);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a051b8
	if (ctx.cr6.eq) goto loc_82A051B8;
	// lwz r11,10660(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10660);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a051b8
	if (!ctx.cr6.eq) goto loc_82A051B8;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,10664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10664, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831792b4
	ctx.lr = 0x82A051B0;
	__imp__KeSetEvent(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,10652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10652, ctx.r11.u32);
loc_82A051B8:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,10660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10660, ctx.r11.u32);
	// bl 0x831791b4
	ctx.lr = 0x82A051C8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,1760
	ctx.r1.s64 = ctx.r1.s64 + 1760;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A051D4"))) PPC_WEAK_FUNC(sub_82A051D4);
PPC_FUNC_IMPL(__imp__sub_82A051D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A051D8"))) PPC_WEAK_FUNC(sub_82A051D8);
PPC_FUNC_IMPL(__imp__sub_82A051D8) {
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
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4352(r1)
	ea = -4352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,11
	ctx.r11.s64 = 11;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r9,-12524(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12524);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82A0520C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82a053e4
	if (ctx.cr6.lt) goto loc_82A053E4;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// li r5,40
	ctx.r5.s64 = 40;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,10992
	ctx.r3.s64 = ctx.r31.s64 + 10992;
	// bl 0x82a75988
	ctx.lr = 0x82A0522C;
	sub_82A75988(ctx, base);
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,11032
	ctx.r3.s64 = ctx.r31.s64 + 11032;
	// bl 0x82a75988
	ctx.lr = 0x82A0523C;
	sub_82A75988(ctx, base);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// lfd f13,128(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lfd f12,136(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lfd f11,144(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// lfd f10,152(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// lfd f9,160(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// lfd f8,168(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// lfd f7,176(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// lfd f6,184(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// frsp f7,f7
	ctx.f7.f64 = double(float(ctx.f7.f64));
	// lfd f5,192(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// frsp f6,f6
	ctx.f6.f64 = double(float(ctx.f6.f64));
	// lfd f4,200(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// frsp f5,f5
	ctx.f5.f64 = double(float(ctx.f5.f64));
	// lfd f3,208(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// frsp f4,f4
	ctx.f4.f64 = double(float(ctx.f4.f64));
	// frsp f3,f3
	ctx.f3.f64 = double(float(ctx.f3.f64));
	// stfs f0,11008(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11008, temp.u32);
	// stfs f13,11012(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11012, temp.u32);
	// li r5,16384
	ctx.r5.s64 = 16384;
	// stfs f12,11016(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11016, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f11,11020(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11020, temp.u32);
	// lwz r3,11072(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11072);
	// stfs f10,11024(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11024, temp.u32);
	// stfs f9,11028(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11028, temp.u32);
	// stfs f8,11048(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11048, temp.u32);
	// stfs f7,11052(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11052, temp.u32);
	// stfs f6,11056(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11056, temp.u32);
	// stfs f5,11060(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11060, temp.u32);
	// stfs f4,11064(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11064, temp.u32);
	// stfs f3,11068(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11068, temp.u32);
	// bl 0x82a75988
	ctx.lr = 0x82A052DC;
	sub_82A75988(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfd f2,216(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// lhz r7,4324(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 4324);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lfd f0,-26608(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -26608);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// fmul f1,f2,f0
	ctx.f1.f64 = ctx.f2.f64 * ctx.f0.f64;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// rldicr r5,r7,22,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u64, 22) & 0xFFFFFFFFFFFFFFFF;
	// fctidz f0,f1
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
loc_82A05314:
	// lhz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82a05370
	if (ctx.cr6.eq) goto loc_82A05370;
	// cmplwi cr6,r7,8192
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 8192, ctx.xer);
	// bge cr6,0x82a05370
	if (!ctx.cr6.lt) goto loc_82A05370;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82a05354
	if (!ctx.cr6.lt) goto loc_82A05354;
	// subf r30,r10,r7
	ctx.r30.s64 = ctx.r7.s64 - ctx.r10.s64;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_82A05344:
	// lwz r10,11072(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11072);
	// sthx r9,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x82a05344
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A05344;
loc_82A05354:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// rldicl r7,r8,20,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 20) & 0xFFFFFFFFF;
	// rldicr r7,r7,0,41
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 0) & 0xFFFFFFFFFFC00000;
	// subf r11,r5,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r5.s64;
	// mulld r9,r11,r4
	ctx.r9.s64 = ctx.r11.s64 * ctx.r4.s64;
	// sradi r7,r9,40
	ctx.xer.ca = (ctx.r9.s64 < 0) & ((ctx.r9.u64 & 0xFFFFFFFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s64 >> 40;
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
loc_82A05370:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// cmplwi cr6,r8,2048
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2048, ctx.xer);
	// blt cr6,0x82a05314
	if (ctx.cr6.lt) goto loc_82A05314;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r11,2048
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2048, ctx.xer);
	// bge cr6,0x82a053a8
	if (!ctx.cr6.lt) goto loc_82A053A8;
	// subfic r10,r11,2048
	ctx.xer.ca = ctx.r11.u32 <= 2048;
	ctx.r10.s64 = 2048 - ctx.r11.s64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82A05398:
	// lwz r10,11072(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11072);
	// sthx r9,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x82a05398
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A05398;
loc_82A053A8:
	// li r11,8192
	ctx.r11.s64 = 8192;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r7,4096
	ctx.r7.s64 = 4096;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,11076
	ctx.r3.s64 = ctx.r31.s64 + 11076;
	// bl 0x82662c60
	ctx.lr = 0x82A053D4;
	sub_82662C60(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,11076
	ctx.r3.s64 = ctx.r31.s64 + 11076;
	// bl 0x82662d30
	ctx.lr = 0x82A053E0;
	sub_82662D30(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A053E4:
	// addi r1,r1,4352
	ctx.r1.s64 = ctx.r1.s64 + 4352;
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

__attribute__((alias("__imp__sub_82A053FC"))) PPC_WEAK_FUNC(sub_82A053FC);
PPC_FUNC_IMPL(__imp__sub_82A053FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A05400"))) PPC_WEAK_FUNC(sub_82A05400);
PPC_FUNC_IMPL(__imp__sub_82A05400) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A05408;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82fa8d08
	ctx.lr = 0x82A05410;
	__savefpr_20(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4704(r1)
	ea = -4704 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,14
	ctx.r11.s64 = 14;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// stw r11,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r11.u32);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// lwz r9,-12524(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12524);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82A05434;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82a059e4
	if (ctx.cr6.lt) goto loc_82A059E4;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,11072(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11072);
	// bl 0x82a75988
	ctx.lr = 0x82A05454;
	sub_82A75988(ctx, base);
	// li r29,8192
	ctx.r29.s64 = 8192;
	// lhz r4,4552(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 4552);
	// li r8,640
	ctx.r8.s64 = 640;
	// lhz r3,4554(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 4554);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lfd f0,4544(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 4544);
	// divwu r9,r4,r8
	ctx.r9.u32 = ctx.r4.u32 / ctx.r8.u32;
	// lfd f12,4568(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 4568);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfd f11,4536(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 4536);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// lfd f13,4560(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 4560);
	// std r3,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r3.u64);
	// lfd f10,160(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// std r8,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r8.u64);
	// lfd f8,160(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// lfd f26,22528(r7)
	ctx.f26.u64 = PPC_LOAD_U64(ctx.r7.u32 + 22528);
	// li r30,0
	ctx.r30.s64 = 0;
	// lfd f10,-26568(r9)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r9.u32 + -26568);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// fmul f6,f7,f9
	ctx.f6.f64 = ctx.f7.f64 * ctx.f9.f64;
	// fmul f5,f6,f0
	ctx.f5.f64 = ctx.f6.f64 * ctx.f0.f64;
	// fdiv f0,f26,f5
	ctx.f0.f64 = ctx.f26.f64 / ctx.f5.f64;
	// fmul f4,f0,f9
	ctx.f4.f64 = ctx.f0.f64 * ctx.f9.f64;
	// fmul f3,f0,f9
	ctx.f3.f64 = ctx.f0.f64 * ctx.f9.f64;
	// fmul f12,f4,f12
	ctx.f12.f64 = ctx.f4.f64 * ctx.f12.f64;
	// fmul f11,f3,f11
	ctx.f11.f64 = ctx.f3.f64 * ctx.f11.f64;
loc_82A054D4:
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lwz r9,11072(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11072);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r8,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r8.u64);
	// lfd f9,160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// fmul f7,f8,f0
	ctx.f7.f64 = ctx.f8.f64 * ctx.f0.f64;
	// fsub f6,f7,f11
	ctx.f6.f64 = ctx.f7.f64 - ctx.f11.f64;
	// fdiv f5,f6,f7
	ctx.f5.f64 = ctx.f6.f64 / ctx.f7.f64;
	// fmadd f4,f5,f12,f13
	ctx.f4.f64 = ctx.f5.f64 * ctx.f12.f64 + ctx.f13.f64;
	// fmul f3,f4,f10
	ctx.f3.f64 = ctx.f4.f64 * ctx.f10.f64;
	// fctiwz f2,f3
	ctx.f2.s64 = (ctx.f3.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f3.f64));
	// stfd f2,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.f2.u64);
	// lhz r7,158(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 158);
	// sthx r7,r10,r9
	PPC_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r7.u16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bdnz 0x82a054d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A054D4;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// li r8,-32768
	ctx.r8.s64 = -32768;
loc_82A05528:
	// lwz r11,11184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11184);
	// lhzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,8191
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8191, ctx.xer);
	// ble cr6,0x82a0553c
	if (!ctx.cr6.gt) goto loc_82A0553C;
	// li r11,8191
	ctx.r11.s64 = 8191;
loc_82A0553C:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,4000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4000, ctx.xer);
	// bge cr6,0x82a0556c
	if (!ctx.cr6.lt) goto loc_82A0556C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0556c
	if (ctx.cr6.eq) goto loc_82A0556C;
	// lwz r11,11072(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11072);
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,11128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11128);
	// lhzx r6,r7,r11
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r11.u32);
	// sthx r6,r9,r10
	PPC_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r6.u16);
	// b 0x82a05574
	goto loc_82A05574;
loc_82A0556C:
	// lwz r11,11128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11128);
	// sthx r8,r9,r11
	PPC_STORE_U16(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u16);
loc_82A05574:
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// bdnz 0x82a05528
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A05528;
	// stw r30,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r30.u32);
	// li r7,4096
	ctx.r7.s64 = 4096;
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// stw r29,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r29.u32);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// stw r30,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,11076
	ctx.r3.s64 = ctx.r31.s64 + 11076;
	// bl 0x82662c60
	ctx.lr = 0x82A055A4;
	sub_82662C60(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,11076
	ctx.r3.s64 = ctx.r31.s64 + 11076;
	// bl 0x82662d30
	ctx.lr = 0x82A055B0;
	sub_82662D30(ctx, base);
	// stw r30,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r30.u32);
	// stw r30,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r30.u32);
	// li r7,4096
	ctx.r7.s64 = 4096;
	// stw r29,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r29.u32);
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// stw r30,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r30.u32);
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,11132
	ctx.r3.s64 = ctx.r31.s64 + 11132;
	// bl 0x82662c60
	ctx.lr = 0x82A055D8;
	sub_82662C60(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,11132
	ctx.r3.s64 = ctx.r31.s64 + 11132;
	// bl 0x82662d30
	ctx.lr = 0x82A055E4;
	sub_82662D30(ctx, base);
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// li r7,4096
	ctx.r7.s64 = 4096;
	// stw r29,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r29.u32);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// stw r30,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r30.u32);
	// addi r5,r1,248
	ctx.r5.s64 = ctx.r1.s64 + 248;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,11188
	ctx.r3.s64 = ctx.r31.s64 + 11188;
	// bl 0x82662c60
	ctx.lr = 0x82A0560C;
	sub_82662C60(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,11188
	ctx.r3.s64 = ctx.r31.s64 + 11188;
	// bl 0x82662d30
	ctx.lr = 0x82A05618;
	sub_82662D30(ctx, base);
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// lwz r5,328(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// addi r8,r1,280
	ctx.r8.s64 = ctx.r1.s64 + 280;
	// lwz r4,316(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// extsw r8,r3
	ctx.r8.s64 = ctx.r3.s32;
	// std r11,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r11.u64);
	// lfd f0,152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// std r10,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r10.u64);
	// lfd f13,160(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// std r8,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r8.u64);
	// lfd f12,152(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// addi r7,r1,264
	ctx.r7.s64 = ctx.r1.s64 + 264;
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// fcfid f7,f0
	ctx.f7.f64 = double(ctx.f0.s64);
	// lwz r9,324(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// lwz r5,332(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// extsw r4,r9
	ctx.r4.s64 = ctx.r9.s32;
	// lwz r3,388(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r11,380(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// rlwinm r10,r5,13,0,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 13) & 0xFFFFE000;
	// std r4,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r4.u64);
	// rlwinm r4,r3,11,0,20
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 11) & 0xFFFFF800;
	// lwz r9,416(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// rlwinm r3,r11,11,0,20
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0xFFFFF800;
	// lfd f11,152(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// srawi r11,r10,13
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 13;
	// lwz r8,400(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lwz r5,396(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// srawi r9,r4,11
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FF) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 11;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// rlwinm r8,r8,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// srawi r7,r3,11
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FF) != 0);
	ctx.r7.s64 = ctx.r3.s32 >> 11;
	// rlwinm r6,r5,5,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// srawi r5,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 5;
	// srawi r4,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 5;
	// srawi r3,r6,5
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 5;
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// extsw r8,r3
	ctx.r8.s64 = ctx.r3.s32;
	// extsw r4,r11
	ctx.r4.s64 = ctx.r11.s32;
	// std r10,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r10.u64);
	// std r8,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r8.u64);
	// lfd f5,160(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// std r4,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r4.u64);
	// lfd f4,168(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// lfd f6,152(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// extsw r3,r7
	ctx.r3.s64 = ctx.r7.s32;
	// fcfid f6,f6
	ctx.f6.f64 = double(ctx.f6.s64);
	// std r6,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r6.u64);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// std r3,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r3.u64);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// extsw r9,r5
	ctx.r9.s64 = ctx.r5.s32;
	// fcfid f12,f4
	ctx.f12.f64 = double(ctx.f4.s64);
	// fcfid f5,f5
	ctx.f5.f64 = double(ctx.f5.s64);
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// lfd f30,-26576(r11)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r11.u32 + -26576);
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// lfd f29,-26584(r10)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r10.u32 + -26584);
	// fmul f25,f8,f30
	ctx.f25.f64 = ctx.f8.f64 * ctx.f30.f64;
	// fmul f24,f9,f30
	ctx.f24.f64 = ctx.f9.f64 * ctx.f30.f64;
	// fmul f23,f10,f29
	ctx.f23.f64 = ctx.f10.f64 * ctx.f29.f64;
	// lfd f27,17864(r8)
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r8.u32 + 17864);
	// fmul f22,f7,f29
	ctx.f22.f64 = ctx.f7.f64 * ctx.f29.f64;
	// lfd f28,-26592(r7)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r7.u32 + -26592);
	// lfd f31,-26600(r6)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r6.u32 + -26600);
	// fmul f6,f6,f31
	ctx.f6.f64 = ctx.f6.f64 * ctx.f31.f64;
	// fmul f10,f12,f27
	ctx.f10.f64 = ctx.f12.f64 * ctx.f27.f64;
	// fmul f5,f5,f31
	ctx.f5.f64 = ctx.f5.f64 * ctx.f31.f64;
	// fmr f4,f22
	ctx.f4.f64 = ctx.f22.f64;
	// lfd f3,144(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// std r9,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r9.u64);
	// lfd f2,152(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f11,f3
	ctx.f11.f64 = double(ctx.f3.s64);
	// lfd f1,144(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f0,f1
	ctx.f0.f64 = double(ctx.f1.s64);
	// fcfid f13,f2
	ctx.f13.f64 = double(ctx.f2.s64);
	// fmul f7,f0,f31
	ctx.f7.f64 = ctx.f0.f64 * ctx.f31.f64;
	// fmr f1,f25
	ctx.f1.f64 = ctx.f25.f64;
	// fmr f2,f24
	ctx.f2.f64 = ctx.f24.f64;
	// fmr f3,f23
	ctx.f3.f64 = ctx.f23.f64;
	// fmul f9,f11,f28
	ctx.f9.f64 = ctx.f11.f64 * ctx.f28.f64;
	// fmul f8,f13,f28
	ctx.f8.f64 = ctx.f13.f64 * ctx.f28.f64;
	// bl 0x82a01f50
	ctx.lr = 0x82A057A4;
	sub_82A01F50(ctx, base);
	// lwz r5,340(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r4,344(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// lwz r3,348(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r10,352(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// extsw r9,r4
	ctx.r9.s64 = ctx.r4.s32;
	// lwz r7,392(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 392);
	// extsw r8,r3
	ctx.r8.s64 = ctx.r3.s32;
	// std r11,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r11.u64);
	// lfd f4,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// lwz r6,384(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// rlwinm r5,r10,13,0,18
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0xFFFFE000;
	// std r9,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r9.u64);
	// lfd f3,144(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// rlwinm r3,r7,11,0,20
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 11) & 0xFFFFF800;
	// std r8,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r8.u64);
	// rlwinm r10,r6,11,0,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 11) & 0xFFFFF800;
	// lfd f2,144(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// srawi r8,r5,13
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1FFF) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 13;
	// lwz r4,424(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 424);
	// lwz r11,408(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 408);
	// srawi r7,r3,11
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FF) != 0);
	ctx.r7.s64 = ctx.r3.s32 >> 11;
	// lwz r9,404(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// lwz r6,336(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// fcfid f0,f3
	ctx.f0.f64 = double(ctx.f3.s64);
	// extsw r3,r7
	ctx.r3.s64 = ctx.r7.s32;
	// fcfid f1,f4
	ctx.f1.f64 = double(ctx.f4.s64);
	// std r5,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r5.u64);
	// extsw r8,r6
	ctx.r8.s64 = ctx.r6.s32;
	// rlwinm r7,r4,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// lfd f13,144(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// rlwinm r6,r11,5,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// std r3,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r3.u64);
	// srawi r5,r10,11
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FF) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 11;
	// std r8,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r8.u64);
	// srawi r3,r7,5
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 5;
	// lfd f9,168(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// srawi r11,r6,5
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 5;
	// lfd f12,144(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// rlwinm r4,r9,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// fcfid f11,f2
	ctx.f11.f64 = double(ctx.f2.s64);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// srawi r10,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 5;
	// std r8,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r8.u64);
	// extsw r9,r5
	ctx.r9.s64 = ctx.r5.s32;
	// fmul f20,f0,f29
	ctx.f20.f64 = ctx.f0.f64 * ctx.f29.f64;
	// extsw r8,r3
	ctx.r8.s64 = ctx.r3.s32;
	// fcfid f6,f9
	ctx.f6.f64 = double(ctx.f9.s64);
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// std r9,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r9.u64);
	// std r8,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r8.u64);
	// lfd f10,144(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// lfd f5,152(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// std r7,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r7.u64);
	// lfd f0,176(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// fmul f21,f1,f30
	ctx.f21.f64 = ctx.f1.f64 * ctx.f30.f64;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// stw r6,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r6.u32);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// fcfid f1,f12
	ctx.f1.f64 = double(ctx.f12.s64);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// lfd f4,160(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// fmul f29,f11,f29
	ctx.f29.f64 = ctx.f11.f64 * ctx.f29.f64;
	// addi r11,r1,248
	ctx.r11.s64 = ctx.r1.s64 + 248;
	// fcfid f11,f4
	ctx.f11.f64 = double(ctx.f4.s64);
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// fcfid f8,f10
	ctx.f8.f64 = double(ctx.f10.s64);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// fcfid f12,f5
	ctx.f12.f64 = double(ctx.f5.s64);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// fmul f30,f6,f30
	ctx.f30.f64 = ctx.f6.f64 * ctx.f30.f64;
	// fcfid f5,f0
	ctx.f5.f64 = double(ctx.f0.s64);
	// fmul f9,f1,f28
	ctx.f9.f64 = ctx.f1.f64 * ctx.f28.f64;
	// fmr f4,f29
	ctx.f4.f64 = ctx.f29.f64;
	// fmr f3,f20
	ctx.f3.f64 = ctx.f20.f64;
	// fmr f2,f21
	ctx.f2.f64 = ctx.f21.f64;
	// fmul f10,f13,f27
	ctx.f10.f64 = ctx.f13.f64 * ctx.f27.f64;
	// fmul f6,f11,f31
	ctx.f6.f64 = ctx.f11.f64 * ctx.f31.f64;
	// fmul f7,f8,f31
	ctx.f7.f64 = ctx.f8.f64 * ctx.f31.f64;
	// fmul f8,f12,f28
	ctx.f8.f64 = ctx.f12.f64 * ctx.f28.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// fmul f5,f5,f31
	ctx.f5.f64 = ctx.f5.f64 * ctx.f31.f64;
	// bl 0x82a01f50
	ctx.lr = 0x82A05908;
	sub_82A01F50(ctx, base);
	// lfd f4,272(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 272);
	// frsp f0,f25
	ctx.f0.f64 = double(float(ctx.f25.f64));
	// lfd f3,288(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 288);
	// fadd f2,f4,f26
	ctx.f2.f64 = ctx.f4.f64 + ctx.f26.f64;
	// lfd f5,176(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// frsp f13,f24
	ctx.f13.f64 = double(float(ctx.f24.f64));
	// lfd f1,264(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 264);
	// frsp f12,f23
	ctx.f12.f64 = double(float(ctx.f23.f64));
	// lfd f8,280(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 280);
	// frsp f11,f22
	ctx.f11.f64 = double(float(ctx.f22.f64));
	// lfd f7,192(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// fadd f31,f5,f26
	ctx.f31.f64 = ctx.f5.f64 + ctx.f26.f64;
	// lfd f6,224(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// frsp f10,f3
	ctx.f10.f64 = double(float(ctx.f3.f64));
	// lfd f4,144(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// lfd f28,208(r1)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// frsp f9,f1
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// lfd f3,248(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// lfd f1,256(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 256);
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// lfd f27,240(r1)
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r1.u32 + 240);
	// frsp f7,f7
	ctx.f7.f64 = double(float(ctx.f7.f64));
	// frsp f6,f6
	ctx.f6.f64 = double(float(ctx.f6.f64));
	// stfs f0,10992(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10992, temp.u32);
	// frsp f5,f30
	ctx.f5.f64 = double(float(ctx.f30.f64));
	// stfs f13,10996(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10996, temp.u32);
	// stfs f12,11000(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11000, temp.u32);
	// frsp f0,f21
	ctx.f0.f64 = double(float(ctx.f21.f64));
	// stfs f11,11004(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11004, temp.u32);
	// frsp f13,f20
	ctx.f13.f64 = double(float(ctx.f20.f64));
	// stfs f10,11008(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11008, temp.u32);
	// frsp f12,f29
	ctx.f12.f64 = double(float(ctx.f29.f64));
	// stfs f9,11012(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11012, temp.u32);
	// frsp f11,f2
	ctx.f11.f64 = double(float(ctx.f2.f64));
	// stfs f8,11016(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11016, temp.u32);
	// frsp f10,f4
	ctx.f10.f64 = double(float(ctx.f4.f64));
	// stfs f7,11020(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11020, temp.u32);
	// frsp f9,f28
	ctx.f9.f64 = double(float(ctx.f28.f64));
	// stfs f6,11024(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11024, temp.u32);
	// frsp f8,f3
	ctx.f8.f64 = double(float(ctx.f3.f64));
	// stfs f5,11032(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11032, temp.u32);
	// frsp f7,f1
	ctx.f7.f64 = double(float(ctx.f1.f64));
	// frsp f6,f27
	ctx.f6.f64 = double(float(ctx.f27.f64));
	// stfs f0,11036(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11036, temp.u32);
	// frsp f5,f31
	ctx.f5.f64 = double(float(ctx.f31.f64));
	// stfs f13,11040(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11040, temp.u32);
	// stfs f12,11044(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11044, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f11,11028(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11028, temp.u32);
	// stfs f10,11048(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11048, temp.u32);
	// stfs f9,11052(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11052, temp.u32);
	// stfs f8,11056(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11056, temp.u32);
	// stfs f7,11060(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11060, temp.u32);
	// stfs f6,11064(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11064, temp.u32);
	// stfs f5,11068(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11068, temp.u32);
loc_82A059E4:
	// addi r1,r1,4704
	ctx.r1.s64 = ctx.r1.s64 + 4704;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82fa8d54
	ctx.lr = 0x82A059F0;
	__restfpr_20(ctx, base);
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A059F4"))) PPC_WEAK_FUNC(sub_82A059F4);
PPC_FUNC_IMPL(__imp__sub_82A059F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A059F8"))) PPC_WEAK_FUNC(sub_82A059F8);
PPC_FUNC_IMPL(__imp__sub_82A059F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82A05A00;
	__savegprlr_27(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// li r11,24
	ctx.r11.s64 = 24;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// li r28,8192
	ctx.r28.s64 = 8192;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lis r30,-31975
	ctx.r30.s64 = -2095513600;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,11184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11184);
	// lwz r10,-12524(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12524);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A05A40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82a05a78
	if (!ctx.cr6.lt) goto loc_82A05A78;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// rlwinm r9,r29,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
loc_82A05A58:
	// lwz r8,11184(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11184);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r11,r9,r8
	PPC_STORE_U16(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u16);
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x82a05a58
	if (ctx.cr6.lt) goto loc_82A05A58;
loc_82A05A78:
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// li r7,4096
	ctx.r7.s64 = 4096;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,11188
	ctx.r3.s64 = ctx.r31.s64 + 11188;
	// bl 0x82662c60
	ctx.lr = 0x82A05AA0;
	sub_82662C60(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,11188
	ctx.r3.s64 = ctx.r31.s64 + 11188;
	// bl 0x82662d30
	ctx.lr = 0x82A05AAC;
	sub_82662D30(ctx, base);
	// li r11,33
	ctx.r11.s64 = 33;
	// stw r27,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r27.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// lwz r10,-12524(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12524);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A05AC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,13
	ctx.r9.s64 = 13;
	// lwz r8,-12524(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12524);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82A05AE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82a05b08
	if (ctx.cr6.lt) goto loc_82A05B08;
	// lbz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// blt cr6,0x82a05b08
	if (ctx.cr6.lt) goto loc_82A05B08;
	// lbz r10,133(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 133);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x82a05b08
	if (ctx.cr6.lt) goto loc_82A05B08;
	// bl 0x82a05400
	ctx.lr = 0x82A05B04;
	sub_82A05400(ctx, base);
	// b 0x82a05b0c
	goto loc_82A05B0C;
loc_82A05B08:
	// bl 0x82a051d8
	ctx.lr = 0x82A05B0C;
	sub_82A051D8(ctx, base);
loc_82A05B0C:
	// li r10,10
	ctx.r10.s64 = 10;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// addi r11,r11,-5728
	ctx.r11.s64 = ctx.r11.s64 + -5728;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82A05B24:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a05b24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A05B24;
	// bl 0x82a04398
	ctx.lr = 0x82A05B30;
	sub_82A04398(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A05B3C"))) PPC_WEAK_FUNC(sub_82A05B3C);
PPC_FUNC_IMPL(__imp__sub_82A05B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A05B40"))) PPC_WEAK_FUNC(sub_82A05B40);
PPC_FUNC_IMPL(__imp__sub_82A05B40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82A05B48;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// lwz r10,-12524(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12524);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A05B74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// blt cr6,0x82a05dbc
	if (ctx.cr6.lt) goto loc_82A05DBC;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a05dbc
	if (ctx.cr6.eq) goto loc_82A05DBC;
	// bdz 0x82a05dbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82A05DBC;
	// bdz 0x82a05bb4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82A05BB4;
	// bdz 0x82a05dd4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82A05DD4;
	// bdz 0x82a05bbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82A05BBC;
	// bdz 0x82a05dd4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82A05DD4;
	// bdz 0x82a05ddc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82A05DDC;
	// bdz 0x82a05ddc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82A05DDC;
	// b 0x82a05dbc
	goto loc_82A05DBC;
loc_82A05BB4:
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x82a05db8
	goto loc_82A05DB8;
loc_82A05BBC:
	// li r28,1
	ctx.r28.s64 = 1;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82a05dbc
	if (ctx.cr6.eq) goto loc_82A05DBC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,27
	ctx.r10.s64 = 27;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r9,r11,27,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x2;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// ori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 | 1;
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// bl 0x82a02220
	ctx.lr = 0x82A05BE8;
	sub_82A02220(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x829fd668
	ctx.lr = 0x82A05BF0;
	sub_829FD668(ctx, base);
	// bl 0x829fefc8
	ctx.lr = 0x82A05BF4;
	sub_829FEFC8(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x82a05dbc
	if (ctx.cr6.lt) goto loc_82A05DBC;
	// bl 0x82a059f8
	ctx.lr = 0x82A05C00;
	sub_82A059F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82a05dbc
	if (ctx.cr6.lt) goto loc_82A05DBC;
	// stw r30,1368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1368, ctx.r30.u32);
	// addi r3,r31,1368
	ctx.r3.s64 = ctx.r31.s64 + 1368;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bl 0x83179274
	ctx.lr = 0x82A05C18;
	__imp__KfAcquireSpinLock(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r31,1072
	ctx.r3.s64 = ctx.r31.s64 + 1072;
	// bl 0x82a020e0
	ctx.lr = 0x82A05C24;
	sub_82A020E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82a05dac
	if (ctx.cr6.lt) goto loc_82A05DAC;
	// lwz r11,1104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a05dac
	if (ctx.cr6.eq) goto loc_82A05DAC;
	// lis r5,-31964
	ctx.r5.s64 = -2094792704;
	// lwz r11,1120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1120);
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// lwz r9,1124(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1124);
	// lis r3,21
	ctx.r3.s64 = 1376256;
	// lwz r6,1112(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1112);
	// ori r10,r4,28266
	ctx.r10.u64 = ctx.r4.u64 | 28266;
	// lwz r8,1072(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1072);
	// ori r4,r3,15410
	ctx.r4.u64 = ctx.r3.u64 | 15410;
	// stw r30,1204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1204, ctx.r30.u32);
	// lwz r5,29300(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29300);
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r11,r6,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r6.s64;
	// stw r10,1156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1156, ctx.r10.u32);
	// addis r9,r3,127
	ctx.r9.s64 = ctx.r3.s64 + 8323072;
	// lwz r7,1092(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1092);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r8,1164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1164, ctx.r8.u32);
	// addi r9,r9,10258
	ctx.r9.s64 = ctx.r9.s64 + 10258;
	// stw r8,1168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1168, ctx.r8.u32);
	// stw r5,1152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1152, ctx.r5.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// lis r5,-1119
	ctx.r5.s64 = -73334784;
	// stw r9,1188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1188, ctx.r9.u32);
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r11,1160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1160, ctx.r11.u32);
	// ori r5,r5,1450
	ctx.r5.u64 = ctx.r5.u64 | 1450;
	// stw r7,1216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1216, ctx.r7.u32);
	// stw r6,1196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1196, ctx.r6.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r5,1200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1200, ctx.r5.u32);
	// addi r3,r31,1156
	ctx.r3.s64 = ctx.r31.s64 + 1156;
	// stw r7,1220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1220, ctx.r7.u32);
	// lis r7,-1119
	ctx.r7.s64 = -73334784;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stw r4,1148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1148, ctx.r4.u32);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stw r9,1240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1240, ctx.r9.u32);
	// addi r27,r31,1260
	ctx.r27.s64 = ctx.r31.s64 + 1260;
	// stw r30,1364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1364, ctx.r30.u32);
	// ori r7,r7,1450
	ctx.r7.u64 = ctx.r7.u64 | 1450;
	// stw r30,1136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1136, ctx.r30.u32);
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r10,1128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1128, ctx.r10.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r7,1252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1252, ctx.r7.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r8,1248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1248, ctx.r8.u32);
	// li r5,52
	ctx.r5.s64 = 52;
	// stw r30,1420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1420, ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r10,1208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1208, ctx.r10.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r10,1396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1396, ctx.r10.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r30,1256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1256, ctx.r30.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stw r30,1380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1380, ctx.r30.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stw r30,1372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1372, ctx.r30.u32);
	// stw r11,1400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1400, ctx.r11.u32);
	// stw r11,1212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1212, ctx.r11.u32);
	// stw r30,1376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1376, ctx.r30.u32);
	// stw r30,1384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1384, ctx.r30.u32);
	// stw r30,1424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1424, ctx.r30.u32);
	// stw r10,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r10.u32);
	// stw r11,1416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1416, ctx.r11.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x82A05D48;
	sub_82FA77C0(ctx, base);
	// li r11,13
	ctx.r11.s64 = 13;
	// addi r9,r31,1308
	ctx.r9.s64 = ctx.r31.s64 + 1308;
	// addi r10,r31,1204
	ctx.r10.s64 = ctx.r31.s64 + 1204;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82A05D58:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82a05d58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A05D58;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,1092(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1092);
	// addi r8,r31,1072
	ctx.r8.s64 = ctx.r31.s64 + 1072;
	// lwz r4,1072(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1072);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82a027f8
	ctx.lr = 0x82A05D80;
	sub_82A027F8(ctx, base);
	// sync 
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82a05dac
	if (ctx.cr6.lt) goto loc_82A05DAC;
	// mftb r11
	ctx.r11.u64 = __rdtsc();
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,1184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1184, ctx.r11.u32);
	// stw r10,1192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1192, ctx.r10.u32);
	// stw r9,1244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1244, ctx.r9.u32);
	// stw r11,1236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1236, ctx.r11.u32);
loc_82A05DAC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,1368
	ctx.r3.s64 = ctx.r31.s64 + 1368;
	// bl 0x83179294
	ctx.lr = 0x82A05DB8;
	__imp__KfReleaseSpinLock(ctx, base);
loc_82A05DB8:
	// li r30,1
	ctx.r30.s64 = 1;
loc_82A05DBC:
	// stw r28,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r28.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// sync 
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_82A05DD4:
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x82a05dbc
	goto loc_82A05DBC;
}

__attribute__((alias("__imp__sub_82A05DDC"))) PPC_WEAK_FUNC(sub_82A05DDC);
PPC_FUNC_IMPL(__imp__sub_82A05DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A05DE0"))) PPC_WEAK_FUNC(sub_82A05DE0);
PPC_FUNC_IMPL(__imp__sub_82A05DE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// lwz r10,-12524(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12524);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A05E10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82a05e64
	if (ctx.cr6.lt) goto loc_82A05E64;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a05e64
	if (ctx.cr6.eq) goto loc_82A05E64;
	// bdz 0x82a05e64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82A05E64;
	// bdz 0x82a05e44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82A05E44;
	// bdz 0x82a05e44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82A05E44;
	// bdz 0x82a05e64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82A05E64;
	// bdz 0x82a05e64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82A05E64;
	// bdz 0x82a05e44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82A05E44;
	// bdnz 0x82a05e64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A05E64;
loc_82A05E44:
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r9,r10,29312
	ctx.r9.s64 = ctx.r10.s64 + 29312;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r31,128(r9)
	PPC_STORE_U32(ctx.r9.u32 + 128, ctx.r31.u32);
	// bl 0x82a02220
	ctx.lr = 0x82A05E64;
	sub_82A02220(ctx, base);
loc_82A05E64:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A05E78"))) PPC_WEAK_FUNC(sub_82A05E78);
PPC_FUNC_IMPL(__imp__sub_82A05E78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x82A05E80;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r24,r27
	ctx.r24.u64 = ctx.r27.u64;
	// lwz r11,12212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12212);
	// lwz r26,1128(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1128);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12212, ctx.r11.u32);
	// mftb r11
	ctx.r11.u64 = __rdtsc();
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// rotlwi r25,r11,0
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x83179274
	ctx.lr = 0x82A05EC0;
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r30,16(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
	// stw r22,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r22.u32);
	// blt cr6,0x82a05f10
	if (ctx.cr6.lt) goto loc_82A05F10;
	// lis r11,9
	ctx.r11.s64 = 589824;
	// ori r10,r11,24576
	ctx.r10.u64 = ctx.r11.u64 | 24576;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82a05f10
	if (ctx.cr6.eq) goto loc_82A05F10;
	// lis r11,6
	ctx.r11.s64 = 393216;
	// ori r10,r11,29184
	ctx.r10.u64 = ctx.r11.u64 | 29184;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82a05f04
	if (!ctx.cr6.eq) goto loc_82A05F04;
	// li r11,128
	ctx.r11.s64 = 128;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x82a05f10
	goto loc_82A05F10;
loc_82A05F04:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// ori r10,r11,518
	ctx.r10.u64 = ctx.r11.u64 | 518;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
loc_82A05F10:
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r25,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r25.u32);
	// stw r26,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r26.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r11.u32);
	// blt cr6,0x82a06030
	if (ctx.cr6.lt) goto loc_82A06030;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// li r3,4100
	ctx.r3.s64 = 4100;
	// bl 0x83178d24
	ctx.lr = 0x82A05F40;
	__imp__XamXStudioRequest(ctx, base);
	// rlwinm r10,r3,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// and r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ctx.r9.u64;
	// beq cr6,0x82a05f9c
	if (ctx.cr6.eq) goto loc_82A05F9C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r10,0,30,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r10,0,26,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r7,32
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 32, ctx.xer);
	// bne cr6,0x82a05f80
	if (!ctx.cr6.eq) goto loc_82A05F80;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82A05F80:
	// rlwinm r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a05f90
	if (!ctx.cr6.eq) goto loc_82A05F90;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
loc_82A05F90:
	// lwz r11,12208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12208);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12208, ctx.r11.u32);
loc_82A05F9C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r9,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bne cr6,0x82a05fbc
	if (!ctx.cr6.eq) goto loc_82A05FBC;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82A05FBC:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82a05fd0
	if (ctx.cr6.eq) goto loc_82A05FD0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ori r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 | 32;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_82A05FD0:
	// clrlwi r11,r9,30
	ctx.r11.u64 = ctx.r9.u32 & 0x3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a05fe8
	if (ctx.cr6.eq) goto loc_82A05FE8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ori r10,r11,64
	ctx.r10.u64 = ctx.r11.u64 | 64;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_82A05FE8:
	// lwz r10,12224(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12224);
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82a06010
	if (ctx.cr6.eq) goto loc_82A06010;
	// lwz r9,72(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// lwz r11,12220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12220);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,12220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12220, ctx.r11.u32);
loc_82A06010:
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// stw r11,12224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12224, ctx.r11.u32);
	// sync 
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x831792b4
	ctx.lr = 0x82A0602C;
	__imp__KeSetEvent(ctx, base);
	// b 0x82a06050
	goto loc_82A06050;
loc_82A06030:
	// lwz r11,12216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12216);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12216, ctx.r11.u32);
	// bl 0x82a05b40
	ctx.lr = 0x82A06044;
	sub_82A05B40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82a06050
	if (ctx.cr6.eq) goto loc_82A06050;
	// mr r24,r30
	ctx.r24.u64 = ctx.r30.u64;
loc_82A06050:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x83179294
	ctx.lr = 0x82A0605C;
	__imp__KfReleaseSpinLock(ctx, base);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82a0606c
	if (ctx.cr6.eq) goto loc_82A0606C;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82a022a0
	ctx.lr = 0x82A0606C;
	sub_82A022A0(ctx, base);
loc_82A0606C:
	// addi r9,r31,148
	ctx.r9.s64 = ctx.r31.s64 + 148;
loc_82A06070:
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
	// bne 0x82a06070
	if (!ctx.cr0.eq) goto loc_82A06070;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a060a8
	if (!ctx.cr6.eq) goto loc_82A060A8;
	// sync 
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,1472
	ctx.r3.s64 = ctx.r31.s64 + 1472;
	// bl 0x831792b4
	ctx.lr = 0x82A060A8;
	__imp__KeSetEvent(ctx, base);
loc_82A060A8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A060B0"))) PPC_WEAK_FUNC(sub_82A060B0);
PPC_FUNC_IMPL(__imp__sub_82A060B0) {
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
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x83179274
	ctx.lr = 0x82A060D8;
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a06104
	if (ctx.cr6.eq) goto loc_82A06104;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// rlwimi r10,r9,1,29,30
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 1) & 0x6) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF9);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
loc_82A06104:
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x83179294
	ctx.lr = 0x82A0610C;
	__imp__KfReleaseSpinLock(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a0618c
	if (ctx.cr6.eq) goto loc_82A0618C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a0618c
	if (ctx.cr6.eq) goto loc_82A0618C;
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// lis r10,9
	ctx.r10.s64 = 589824;
	// lis r9,6
	ctx.r9.s64 = 393216;
	// ori r31,r10,24576
	ctx.r31.u64 = ctx.r10.u64 | 24576;
	// li r8,30
	ctx.r8.s64 = 30;
	// ori r7,r9,29184
	ctx.r7.u64 = ctx.r9.u64 | 29184;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// lis r5,-31975
	ctx.r5.s64 = -2095513600;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// lwz r4,-12524(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + -12524);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x82A0616C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82a061a8
	if (ctx.cr6.lt) goto loc_82A061A8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82a061a8
	if (!ctx.cr6.eq) goto loc_82A061A8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r11,0,25,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_82A0618C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82A06190:
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
loc_82A061A8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a02500
	ctx.lr = 0x82A061B0;
	sub_82A02500(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a06190
	goto loc_82A06190;
}

__attribute__((alias("__imp__sub_82A061B8"))) PPC_WEAK_FUNC(sub_82A061B8);
PPC_FUNC_IMPL(__imp__sub_82A061B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A061C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,29312
	ctx.r30.s64 = ctx.r11.s64 + 29312;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r3,r30,144
	ctx.r3.s64 = ctx.r30.s64 + 144;
	// bl 0x83179274
	ctx.lr = 0x82A061DC;
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82a06204
	if (!ctx.cr6.eq) goto loc_82A06204;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a02568
	ctx.lr = 0x82A06200;
	sub_82A02568(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82A06204:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r30,144
	ctx.r3.s64 = ctx.r30.s64 + 144;
	// bl 0x83179294
	ctx.lr = 0x82A06210;
	__imp__KfReleaseSpinLock(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0621C"))) PPC_WEAK_FUNC(sub_82A0621C);
PPC_FUNC_IMPL(__imp__sub_82A0621C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A06220"))) PPC_WEAK_FUNC(sub_82A06220);
PPC_FUNC_IMPL(__imp__sub_82A06220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7658
	ctx.lr = 0x82A06228;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r11,12232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12232);
	// lwz r28,1128(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1128);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12232, ctx.r11.u32);
	// mftb r11
	ctx.r11.u64 = __rdtsc();
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r3,4100
	ctx.r3.s64 = 4100;
	// rotlwi r27,r11,0
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x83178d24
	ctx.lr = 0x82A06274;
	__imp__XamXStudioRequest(ctx, base);
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// li r25,0
	ctx.r25.s64 = 0;
	// and r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 & ctx.r9.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// clrlwi r23,r7,31
	ctx.r23.u64 = ctx.r7.u32 & 0x1;
	// li r26,0
	ctx.r26.s64 = 0;
	// bl 0x83179274
	ctx.lr = 0x82A0629C;
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r30,16(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lis r4,-31964
	ctx.r4.s64 = -2094792704;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r20,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r20.u32);
	// rlwinm r5,r6,0,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r5,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r5.u32);
	// blt cr6,0x82a062d8
	if (ctx.cr6.lt) goto loc_82A062D8;
	// lwz r11,29284(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29284);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a062d8
	if (ctx.cr6.eq) goto loc_82A062D8;
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// ori r10,r11,518
	ctx.r10.u64 = ctx.r11.u64 | 518;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
loc_82A062D8:
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r27,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r27.u32);
	// stw r28,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r28.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r11.u32);
	// blt cr6,0x82a06454
	if (ctx.cr6.lt) goto loc_82A06454;
	// lwz r11,2036(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2036);
	// lwz r6,1592(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1592);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a0630c
	if (!ctx.cr6.eq) goto loc_82A0630C;
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// beq cr6,0x82a0642c
	if (ctx.cr6.eq) goto loc_82A0642C;
loc_82A0630C:
	// lwz r11,1604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1604);
	// li r26,1
	ctx.r26.s64 = 1;
	// lwz r10,1596(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1596);
	// lwz r7,1600(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1600);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82a06388
	if (!ctx.cr6.eq) goto loc_82A06388;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x82a06388
	if (!ctx.cr6.eq) goto loc_82A06388;
	// lwz r8,1616(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1616);
	// lwz r11,1640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1640);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82a0638c
	if (!ctx.cr6.eq) goto loc_82A0638C;
	// lwz r9,1620(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1620);
	// lwz r11,1644(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1644);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82a0638c
	if (!ctx.cr6.eq) goto loc_82A0638C;
	// lwz r10,1624(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1624);
	// lwz r11,1648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1648);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82a0638c
	if (!ctx.cr6.eq) goto loc_82A0638C;
	// lwz r11,1628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1628);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82a0638c
	if (!ctx.cr6.eq) goto loc_82A0638C;
	// lwz r11,1632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1632);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82a0638c
	if (!ctx.cr6.eq) goto loc_82A0638C;
	// lwz r11,1636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1636);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82a06390
	if (ctx.cr6.eq) goto loc_82A06390;
	// b 0x82a0638c
	goto loc_82A0638C;
loc_82A06388:
	// li r25,1
	ctx.r25.s64 = 1;
loc_82A0638C:
	// li r24,1
	ctx.r24.s64 = 1;
loc_82A06390:
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// beq cr6,0x82a0642c
	if (ctx.cr6.eq) goto loc_82A0642C;
	// lwz r11,2040(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2040);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2040, ctx.r11.u32);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x82a063f0
	if (!ctx.cr6.lt) goto loc_82A063F0;
	// lbz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 52);
	// subf r9,r6,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r6.s64;
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bge cr6,0x82a063c8
	if (!ctx.cr6.lt) goto loc_82A063C8;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82a06434
	if (ctx.cr6.eq) goto loc_82A06434;
loc_82A063C8:
	// lwz r10,1628(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1628);
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r9,1632(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1632);
	// lwz r8,1636(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1636);
	// stw r11,1592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1592, ctx.r11.u32);
	// stw r7,1596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1596, ctx.r7.u32);
	// stw r10,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r10.u32);
	// stw r9,1620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1620, ctx.r9.u32);
	// stw r8,1624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1624, ctx.r8.u32);
	// b 0x82a0642c
	goto loc_82A0642C;
loc_82A063F0:
	// lwz r9,1628(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1628);
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r8,1632(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1632);
	// lwz r6,1636(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1636);
	// lwz r10,2036(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2036);
	// stw r11,1592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1592, ctx.r11.u32);
	// stw r7,1596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1596, ctx.r7.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r9.u32);
	// stw r8,1620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1620, ctx.r8.u32);
	// stw r6,1624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1624, ctx.r6.u32);
	// bne cr6,0x82a0642c
	if (!ctx.cr6.eq) goto loc_82A0642C;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r24,0
	ctx.r24.s64 = 0;
loc_82A0642C:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x82a06454
	if (!ctx.cr6.eq) goto loc_82A06454;
loc_82A06434:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x82a06450
	if (!ctx.cr6.eq) goto loc_82A06450;
	// lwz r11,1596(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1596);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a06454
	if (!ctx.cr6.eq) goto loc_82A06454;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82a06454
	if (ctx.cr6.eq) goto loc_82A06454;
loc_82A06450:
	// mr r22,r30
	ctx.r22.u64 = ctx.r30.u64;
loc_82A06454:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82a06548
	if (ctx.cr6.lt) goto loc_82A06548;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x82a06538
	if (!ctx.cr6.eq) goto loc_82A06538;
	// lwz r11,1616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1616);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// stw r11,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r11.u32);
	// lwz r10,1620(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1620);
	// stw r10,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r10.u32);
	// lwz r9,1624(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1624);
	// stw r9,116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 116, ctx.r9.u32);
	// lwz r11,1596(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1596);
	// stw r11,120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 120, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ori r10,r11,256
	ctx.r10.u64 = ctx.r11.u64 | 256;
	// bne cr6,0x82a0649c
	if (!ctx.cr6.eq) goto loc_82A0649C;
	// rlwinm r10,r11,0,24,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
loc_82A0649C:
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r11,684(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 684);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a064dc
	if (ctx.cr6.eq) goto loc_82A064DC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,30,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r11,684(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 684);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r8,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82a064d0
	if (!ctx.cr6.eq) goto loc_82A064D0;
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
loc_82A064D0:
	// lwz r11,12228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12228);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12228, ctx.r11.u32);
loc_82A064DC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r30,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r30.u32);
	// lwz r10,12244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12244);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82a06510
	if (ctx.cr6.eq) goto loc_82A06510;
	// lwz r9,72(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// lwz r11,12240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12240);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,12240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12240, ctx.r11.u32);
loc_82A06510:
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r9,29284(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29284);
	// stw r11,12244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12244, ctx.r11.u32);
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r4,r3,r9
	ctx.r4.u64 = ctx.r3.u64 + ctx.r9.u64;
	// bl 0x82680e48
	ctx.lr = 0x82A06534;
	sub_82680E48(ctx, base);
	// b 0x82a06574
	goto loc_82A06574;
loc_82A06538:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82a06548
	if (ctx.cr6.lt) goto loc_82A06548;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82a06574
	if (ctx.cr6.eq) goto loc_82A06574;
loc_82A06548:
	// lwz r11,12236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12236);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12236, ctx.r11.u32);
	// bl 0x82a05b40
	ctx.lr = 0x82A0655C;
	sub_82A05B40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82a0656c
	if (ctx.cr6.eq) goto loc_82A0656C;
	// mr r22,r30
	ctx.r22.u64 = ctx.r30.u64;
	// b 0x82a06574
	goto loc_82A06574;
loc_82A0656C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
loc_82A06574:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x83179294
	ctx.lr = 0x82A06580;
	__imp__KfReleaseSpinLock(ctx, base);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82a06590
	if (ctx.cr6.eq) goto loc_82A06590;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82a02568
	ctx.lr = 0x82A06590;
	sub_82A02568(ctx, base);
loc_82A06590:
	// addi r9,r31,680
	ctx.r9.s64 = ctx.r31.s64 + 680;
loc_82A06594:
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
	// bne 0x82a06594
	if (!ctx.cr0.eq) goto loc_82A06594;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a065cc
	if (!ctx.cr6.eq) goto loc_82A065CC;
	// sync 
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,1472
	ctx.r3.s64 = ctx.r31.s64 + 1472;
	// bl 0x831792b4
	ctx.lr = 0x82A065CC;
	__imp__KeSetEvent(ctx, base);
loc_82A065CC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76a8
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A065D4"))) PPC_WEAK_FUNC(sub_82A065D4);
PPC_FUNC_IMPL(__imp__sub_82A065D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A065D8"))) PPC_WEAK_FUNC(sub_82A065D8);
PPC_FUNC_IMPL(__imp__sub_82A065D8) {
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
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// lwz r11,1104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a06674
	if (ctx.cr6.eq) goto loc_82A06674;
	// addi r3,r31,1368
	ctx.r3.s64 = ctx.r31.s64 + 1368;
	// bl 0x83179274
	ctx.lr = 0x82A0660C;
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r11,1112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1112);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a0662c
	if (ctx.cr6.eq) goto loc_82A0662C;
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// addis r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -262144;
	// addi r9,r9,-12856
	ctx.r9.s64 = ctx.r9.s64 + -12856;
	// b 0x82a06638
	goto loc_82A06638;
loc_82A0662C:
	// lis r10,21
	ctx.r10.s64 = 1376256;
	// ori r9,r10,15410
	ctx.r9.u64 = ctx.r10.u64 | 15410;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
loc_82A06638:
	// lwz r11,1372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1372);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a06658
	if (!ctx.cr6.eq) goto loc_82A06658;
	// lwz r11,1420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1420);
	// addi r10,r31,1388
	ctx.r10.s64 = ctx.r31.s64 + 1388;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,1372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1372, ctx.r11.u32);
loc_82A06658:
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,1372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1372);
	// addi r3,r31,1368
	ctx.r3.s64 = ctx.r31.s64 + 1368;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r10,1148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1148, ctx.r10.u32);
	// bl 0x83179294
	ctx.lr = 0x82A06674;
	__imp__KfReleaseSpinLock(ctx, base);
loc_82A06674:
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

__attribute__((alias("__imp__sub_82A0668C"))) PPC_WEAK_FUNC(sub_82A0668C);
PPC_FUNC_IMPL(__imp__sub_82A0668C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A06690"))) PPC_WEAK_FUNC(sub_82A06690);
PPC_FUNC_IMPL(__imp__sub_82A06690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82A06698;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// lwz r11,10668(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10668);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a068ac
	if (!ctx.cr6.eq) goto loc_82A068AC;
	// lwz r11,10672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10672);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a068ac
	if (!ctx.cr6.eq) goto loc_82A068AC;
	// lwz r11,10676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10676);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a068ac
	if (!ctx.cr6.eq) goto loc_82A068AC;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r24,r11,-12452
	ctx.r24.s64 = ctx.r11.s64 + -12452;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A066D8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r4,8348
	ctx.r4.s64 = 547094528;
	// li r3,2736
	ctx.r3.s64 = 2736;
	// bl 0x82691410
	ctx.lr = 0x82A066E4;
	sub_82691410(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a06890
	if (ctx.cr6.eq) goto loc_82A06890;
	// stw r3,10668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10668, ctx.r3.u32);
	// lis r4,8348
	ctx.r4.s64 = 547094528;
	// li r3,120
	ctx.r3.s64 = 120;
	// bl 0x82691410
	ctx.lr = 0x82A06700;
	sub_82691410(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a06890
	if (ctx.cr6.eq) goto loc_82A06890;
	// lis r4,8348
	ctx.r4.s64 = 547094528;
	// li r3,120
	ctx.r3.s64 = 120;
	// bl 0x82691410
	ctx.lr = 0x82A06718;
	sub_82691410(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a06890
	if (ctx.cr6.eq) goto loc_82A06890;
	// li r5,2736
	ctx.r5.s64 = 2736;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A06734;
	sub_82FA7CF0(ctx, base);
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A06744;
	sub_82FA7CF0(ctx, base);
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A06754;
	sub_82FA7CF0(ctx, base);
	// lis r3,2
	ctx.r3.s64 = 131072;
	// lis r4,-21348
	ctx.r4.s64 = -1399062528;
	// ori r3,r3,53248
	ctx.r3.u64 = ctx.r3.u64 | 53248;
	// bl 0x82a3df10
	ctx.lr = 0x82A06764;
	sub_82A3DF10(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,100(r28)
	PPC_STORE_U32(ctx.r28.u32 + 100, ctx.r3.u32);
	// beq cr6,0x82a06890
	if (ctx.cr6.eq) goto loc_82A06890;
	// lis r7,6690
	ctx.r7.s64 = 438435840;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r25,1
	ctx.r25.s64 = 1;
	// li r27,-1
	ctx.r27.s64 = -1;
	// stw r29,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r29.u32);
	// addi r26,r28,48
	ctx.r26.s64 = ctx.r28.s64 + 48;
	// stw r25,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r25.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// ori r7,r7,88
	ctx.r7.u64 = ctx.r7.u64 | 88;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,240
	ctx.r4.s64 = 240;
	// li r3,320
	ctx.r3.s64 = 320;
	// bl 0x82af41e0
	ctx.lr = 0x82A067C4;
	sub_82AF41E0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,100(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// bl 0x82af44c8
	ctx.lr = 0x82A067D0;
	sub_82AF44C8(ctx, base);
	// stw r26,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r26.u32);
	// stw r28,10672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10672, ctx.r28.u32);
	// lis r3,18
	ctx.r3.s64 = 1179648;
	// lis r4,-21348
	ctx.r4.s64 = -1399062528;
	// ori r3,r3,49152
	ctx.r3.u64 = ctx.r3.u64 | 49152;
	// bl 0x82a3df10
	ctx.lr = 0x82A067E8;
	sub_82A3DF10(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r3.u32);
	// beq cr6,0x82a06890
	if (ctx.cr6.eq) goto loc_82A06890;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r25,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r25.u32);
	// lis r3,-31964
	ctx.r3.s64 = -2094792704;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// lis r7,10280
	ctx.r7.s64 = 673710080;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// addi r28,r30,48
	ctx.r28.s64 = ctx.r30.s64 + 48;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// lwz r4,29292(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29292);
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r7,r7,32434
	ctx.r7.u64 = ctx.r7.u64 | 32434;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,29296(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 29296);
	// bl 0x82af41e0
	ctx.lr = 0x82A06848;
	sub_82AF41E0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,100(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// bl 0x82af44c8
	ctx.lr = 0x82A06854;
	sub_82AF44C8(ctx, base);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// addi r9,r31,10644
	ctx.r9.s64 = ctx.r31.s64 + 10644;
	// stw r28,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r28.u32);
	// addi r11,r31,10644
	ctx.r11.s64 = ctx.r31.s64 + 10644;
	// stb r25,10636(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10636, ctx.r25.u8);
	// stw r30,10676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10676, ctx.r30.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r29,10640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10640, ctx.r29.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r9,10644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10644, ctx.r9.u32);
	// stw r11,10648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10648, ctx.r11.u32);
	// bl 0x831791b4
	ctx.lr = 0x82A06884;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
loc_82A06890:
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// ori r29,r29,14
	ctx.r29.u64 = ctx.r29.u64 | 14;
	// bl 0x831791b4
	ctx.lr = 0x82A068A0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
loc_82A068AC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,1247
	ctx.r3.u64 = ctx.r3.u64 | 1247;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A068BC"))) PPC_WEAK_FUNC(sub_82A068BC);
PPC_FUNC_IMPL(__imp__sub_82A068BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A068C0"))) PPC_WEAK_FUNC(sub_82A068C0);
PPC_FUNC_IMPL(__imp__sub_82A068C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7648
	ctx.lr = 0x82A068C8;
	__savegprlr_16(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// li r17,0
	ctx.r17.s64 = 0;
	// addi r30,r11,29312
	ctx.r30.s64 = ctx.r11.s64 + 29312;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r23,r17
	ctx.r23.u64 = ctx.r17.u64;
	// mr r24,r17
	ctx.r24.u64 = ctx.r17.u64;
	// li r16,1
	ctx.r16.s64 = 1;
	// lwz r11,12276(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12276);
	// mr r29,r17
	ctx.r29.u64 = ctx.r17.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a0696c
	if (!ctx.cr6.eq) goto loc_82A0696C;
	// addi r3,r30,12272
	ctx.r3.s64 = ctx.r30.s64 + 12272;
	// bl 0x83179274
	ctx.lr = 0x82A06900;
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r11,12288(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12288);
	// addi r10,r30,12264
	ctx.r10.s64 = ctx.r30.s64 + 12264;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwzx r24,r9,r10
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82a06964
	if (ctx.cr6.eq) goto loc_82A06964;
	// lwz r11,52(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a06964
	if (!ctx.cr6.eq) goto loc_82A06964;
	// addi r9,r30,12256
	ctx.r9.s64 = ctx.r30.s64 + 12256;
loc_82A0692C:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r17,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r17.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82a0692c
	if (!ctx.cr0.eq) goto loc_82A0692C;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a06964
	if (ctx.cr6.eq) goto loc_82A06964;
	// mftb r11
	ctx.r11.u64 = __rdtsc();
	// stw r11,1136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1136, ctx.r11.u32);
	// lwz r29,28(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28);
	// stw r23,52(r24)
	PPC_STORE_U32(ctx.r24.u32 + 52, ctx.r23.u32);
	// stw r16,12276(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12276, ctx.r16.u32);
loc_82A06964:
	// addi r3,r30,12272
	ctx.r3.s64 = ctx.r30.s64 + 12272;
	// bl 0x83179294
	ctx.lr = 0x82A0696C;
	__imp__KfReleaseSpinLock(ctx, base);
loc_82A0696C:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,10
	ctx.r3.s64 = 10;
	// std r17,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r17.u64);
	// stw r17,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r17.u32);
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// bl 0x82a3de38
	ctx.lr = 0x82A0698C;
	sub_82A3DE38(ctx, base);
	// mr r19,r17
	ctx.r19.u64 = ctx.r17.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82a06ac4
	if (ctx.cr6.eq) goto loc_82A06AC4;
	// bl 0x82a02488
	ctx.lr = 0x82A0699C;
	sub_82A02488(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,15636(r23)
	PPC_STORE_U32(ctx.r23.u32 + 15636, ctx.r3.u32);
	// beq cr6,0x82a06a08
	if (ctx.cr6.eq) goto loc_82A06A08;
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a069dc
	if (!ctx.cr6.eq) goto loc_82A069DC;
	// lwz r11,10656(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10656);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a069cc
	if (!ctx.cr6.eq) goto loc_82A069CC;
	// bl 0x82a061b8
	ctx.lr = 0x82A069C4;
	sub_82A061B8(ctx, base);
	// stw r17,15636(r23)
	PPC_STORE_U32(ctx.r23.u32 + 15636, ctx.r17.u32);
	// b 0x82a06a08
	goto loc_82A06A08;
loc_82A069CC:
	// rlwinm r11,r29,0,31,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF9;
	// rlwinm r11,r11,0,24,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// ori r29,r11,512
	ctx.r29.u64 = ctx.r11.u64 | 512;
	// b 0x82a06a08
	goto loc_82A06A08;
loc_82A069DC:
	// lwz r11,10904(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10904);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a06a08
	if (ctx.cr6.eq) goto loc_82A06A08;
	// ori r29,r29,1024
	ctx.r29.u64 = ctx.r29.u64 | 1024;
	// addi r9,r30,10908
	ctx.r9.s64 = ctx.r30.s64 + 10908;
loc_82A069F0:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r16,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r16.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82a069f0
	if (!ctx.cr0.eq) goto loc_82A069F0;
loc_82A06A08:
	// lwz r10,15632(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 15632);
	// addi r22,r23,15360
	ctx.r22.s64 = ctx.r23.s64 + 15360;
	// lwz r9,15640(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 15640);
	// lwz r11,15636(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 15636);
	// rlwinm r21,r9,30,2,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r8,104(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// rlwinm r20,r8,29,3,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// beq cr6,0x82a06a44
	if (ctx.cr6.eq) goto loc_82A06A44;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// rlwinm r10,r10,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// rlwinm r19,r11,30,2,31
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// b 0x82a06a4c
	goto loc_82A06A4C;
loc_82A06A44:
	// rlwinm r29,r29,0,31,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF9;
	// rlwinm r29,r29,0,24,22
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
loc_82A06A4C:
	// rlwinm r11,r29,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x200;
	// lwz r25,32(r24)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// mr r26,r17
	ctx.r26.u64 = ctx.r17.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a06a64
	if (!ctx.cr6.eq) goto loc_82A06A64;
	// lwz r26,36(r24)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r24.u32 + 36);
loc_82A06A64:
	// rlwinm r11,r29,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x20;
	// lwz r31,40(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 40);
	// lwz r28,44(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + 44);
	// lwz r27,48(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a06a98
	if (ctx.cr6.eq) goto loc_82A06A98;
	// bl 0x83179674
	ctx.lr = 0x82A06A80;
	__imp__KeSaveFloatingPointState(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a06a94
	if (!ctx.cr6.eq) goto loc_82A06A94;
	// addi r3,r23,15392
	ctx.r3.s64 = ctx.r23.s64 + 15392;
	// bl 0x82a3dda8
	ctx.lr = 0x82A06A94;
	sub_82A3DDA8(ctx, base);
loc_82A06A94:
	// bl 0x83179664
	ctx.lr = 0x82A06A98;
	__imp__KeRestoreFloatingPointState(ctx, base);
loc_82A06A98:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82a3e148
	ctx.lr = 0x82A06AC0;
	sub_82A3E148(ctx, base);
	// stw r29,28(r24)
	PPC_STORE_U32(ctx.r24.u32 + 28, ctx.r29.u32);
loc_82A06AC4:
	// mr r8,r17
	ctx.r8.u64 = ctx.r17.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82a06b00
	if (ctx.cr6.eq) goto loc_82A06B00;
	// lwz r11,15576(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 15576);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a06ae0
	if (ctx.cr6.eq) goto loc_82A06AE0;
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
loc_82A06AE0:
	// lwz r11,15580(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 15580);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a06af0
	if (ctx.cr6.eq) goto loc_82A06AF0;
	// ori r8,r8,2
	ctx.r8.u64 = ctx.r8.u64 | 2;
loc_82A06AF0:
	// lwz r11,15584(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 15584);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a06b00
	if (ctx.cr6.eq) goto loc_82A06B00;
	// ori r8,r8,4
	ctx.r8.u64 = ctx.r8.u64 | 4;
loc_82A06B00:
	// rlwinm r11,r18,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,0
	ctx.r10.s64 = 0;
	// add r9,r18,r11
	ctx.r9.u64 = ctx.r18.u64 + ctx.r11.u64;
	// ori r7,r10,59852
	ctx.r7.u64 = ctx.r10.u64 | 59852;
	// subfic r6,r29,0
	ctx.xer.ca = ctx.r29.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r29.s64;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r30,12296
	ctx.r10.s64 = ctx.r30.s64 + 12296;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwzx r11,r30,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// add r31,r9,r10
	ctx.r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r3,r29,0,26,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x20;
	// and r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 & ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// beq cr6,0x82a06b4c
	if (ctx.cr6.eq) goto loc_82A06B4C;
	// lwz r11,11240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11240);
	// addi r11,r11,236
	ctx.r11.s64 = ctx.r11.s64 + 236;
	// b 0x82a06b50
	goto loc_82A06B50;
loc_82A06B4C:
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
loc_82A06B50:
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// subfic r10,r29,0
	ctx.xer.ca = ctx.r29.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r29.s64;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r11,12084(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12084);
	// and r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 & ctx.r11.u64;
	// stw r6,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r6.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// bne cr6,0x82a06b7c
	if (!ctx.cr6.eq) goto loc_82A06B7C;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82A06B7C:
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a017b0
	ctx.lr = 0x82A06B88;
	sub_82A017B0(ctx, base);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82a06b98
	if (ctx.cr6.eq) goto loc_82A06B98;
	// mftb r11
	ctx.r11.u64 = __rdtsc();
	// stw r11,56(r24)
	PPC_STORE_U32(ctx.r24.u32 + 56, ctx.r11.u32);
loc_82A06B98:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,11
	ctx.r3.s64 = 11;
	// std r17,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r17.u64);
	// stw r17,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r17.u32);
	// stw r17,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r17.u32);
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// bl 0x82a3de38
	ctx.lr = 0x82A06BC0;
	sub_82A3DE38(ctx, base);
	// sync 
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82fa7698
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A06BCC"))) PPC_WEAK_FUNC(sub_82A06BCC);
PPC_FUNC_IMPL(__imp__sub_82A06BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A06BD0"))) PPC_WEAK_FUNC(sub_82A06BD0);
PPC_FUNC_IMPL(__imp__sub_82A06BD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82A06BD8;
	__savegprlr_27(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// addi r9,r31,12296
	ctx.r9.s64 = ctx.r31.s64 + 12296;
	// lwz r11,12536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12536);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r11,r9
	ctx.r29.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r30,44(r29)
	PPC_STORE_U32(ctx.r29.u32 + 44, ctx.r30.u32);
	// sync 
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,8
	ctx.r3.s64 = 8;
	// std r30,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r30.u64);
	// stw r30,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r30.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x82a3de38
	ctx.lr = 0x82A06C34;
	sub_82A3DE38(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x8266edf8
	ctx.lr = 0x82A06C3C;
	sub_8266EDF8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x826792f8
	ctx.lr = 0x82A06C48;
	sub_826792F8(ctx, base);
	// lis r9,-32096
	ctx.r9.s64 = -2103443456;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,12536(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12536);
	// addi r5,r9,26816
	ctx.r5.s64 = ctx.r9.s64 + 26816;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x826775c0
	ctx.lr = 0x82A06C60;
	sub_826775C0(ctx, base);
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82668e90
	ctx.lr = 0x82A06C74;
	sub_82668E90(ctx, base);
	// addi r8,r1,152
	ctx.r8.s64 = ctx.r1.s64 + 152;
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// std r30,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r30.u64);
	// std r30,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r30.u64);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lis r6,24576
	ctx.r6.s64 = 1610612736;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// std r30,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r30.u64);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// std r30,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r30.u64);
	// std r30,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r30.u64);
	// std r30,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r30.u64);
	// std r30,16(r8)
	PPC_STORE_U64(ctx.r8.u32 + 16, ctx.r30.u64);
	// std r30,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r30.u64);
	// std r30,24(r8)
	PPC_STORE_U64(ctx.r8.u32 + 24, ctx.r30.u64);
	// std r30,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r30.u64);
	// bl 0x8267c7c0
	ctx.lr = 0x82A06CBC;
	sub_8267C7C0(ctx, base);
	// lis r10,-32096
	ctx.r10.s64 = -2103443456;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r5,r10,5912
	ctx.r5.s64 = ctx.r10.s64 + 5912;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826775c0
	ctx.lr = 0x82A06CD4;
	sub_826775C0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a06cec
	if (!ctx.cr6.eq) goto loc_82A06CEC;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a06d30
	if (ctx.cr6.eq) goto loc_82A06D30;
loc_82A06CEC:
	// addi r7,r29,12
	ctx.r7.s64 = ctx.r29.s64 + 12;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lis r6,24576
	ctx.r6.s64 = 1610612736;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x8267c7c0
	ctx.lr = 0x82A06D04;
	sub_8267C7C0(ctx, base);
	// addi r27,r29,16
	ctx.r27.s64 = ctx.r29.s64 + 16;
	// li r28,3
	ctx.r28.s64 = 3;
loc_82A06D0C:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lis r6,24576
	ctx.r6.s64 = 1610612736;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x8267c7c0
	ctx.lr = 0x82A06D24;
	sub_8267C7C0(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// bne 0x82a06d0c
	if (!ctx.cr0.eq) goto loc_82A06D0C;
loc_82A06D30:
	// lwz r11,11244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11244);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a06d54
	if (ctx.cr6.eq) goto loc_82A06D54;
	// addi r7,r29,36
	ctx.r7.s64 = ctx.r29.s64 + 36;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lis r6,24576
	ctx.r6.s64 = 1610612736;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x8267c7c0
	ctx.lr = 0x82A06D54;
	sub_8267C7C0(ctx, base);
loc_82A06D54:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a017b0
	ctx.lr = 0x82A06D5C;
	sub_82A017B0(ctx, base);
	// lwz r11,12536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12536);
	// lis r10,-13108
	ctx.r10.s64 = -859045888;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// ori r9,r10,52429
	ctx.r9.u64 = ctx.r10.u64 | 52429;
	// li r6,0
	ctx.r6.s64 = 0;
	// mulhwu r8,r11,r9
	ctx.r8.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// rlwinm r10,r8,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// stw r11,12536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12536, ctx.r11.u32);
	// bl 0x82668e90
	ctx.lr = 0x82A06D98;
	sub_82668E90(ctx, base);
	// lis r5,-32096
	ctx.r5.s64 = -2103443456;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r5,r5,5976
	ctx.r5.s64 = ctx.r5.s64 + 5976;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826775c0
	ctx.lr = 0x82A06DB0;
	sub_826775C0(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x82677428
	ctx.lr = 0x82A06DB8;
	sub_82677428(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r5,12
	ctx.r5.s64 = 12;
	// lwz r10,12536(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12536);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r3,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r3.u32);
	// li r3,9
	ctx.r3.s64 = 9;
	// std r30,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r30.u64);
	// stw r30,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r30.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x82a3de38
	ctx.lr = 0x82A06DEC;
	sub_82A3DE38(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A06DF4"))) PPC_WEAK_FUNC(sub_82A06DF4);
PPC_FUNC_IMPL(__imp__sub_82A06DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A06DF8"))) PPC_WEAK_FUNC(sub_82A06DF8);
PPC_FUNC_IMPL(__imp__sub_82A06DF8) {
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
	// lwz r3,15632(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15632);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a06e28
	if (ctx.cr6.eq) goto loc_82A06E28;
	// bl 0x82a02500
	ctx.lr = 0x82A06E24;
	sub_82A02500(ctx, base);
	// stw r30,15632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15632, ctx.r30.u32);
loc_82A06E28:
	// lwz r3,15636(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15636);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a06e3c
	if (ctx.cr6.eq) goto loc_82A06E3C;
	// bl 0x82a061b8
	ctx.lr = 0x82A06E38;
	sub_82A061B8(ctx, base);
	// stw r30,15636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15636, ctx.r30.u32);
loc_82A06E3C:
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// li r10,15664
	ctx.r10.s64 = 15664;
	// addi r11,r11,29312
	ctx.r11.s64 = ctx.r11.s64 + 29312;
	// addi r9,r11,12544
	ctx.r9.s64 = ctx.r11.s64 + 12544;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// subf r8,r9,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r9.s64;
	// addi r7,r11,-6000
	ctx.r7.s64 = ctx.r11.s64 + -6000;
	// divw r6,r8,r10
	ctx.r6.s32 = ctx.r8.s32 / ctx.r10.s32;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r5,r7
	PPC_STORE_U32(ctx.r5.u32 + ctx.r7.u32, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82A06E7C"))) PPC_WEAK_FUNC(sub_82A06E7C);
PPC_FUNC_IMPL(__imp__sub_82A06E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A06E80"))) PPC_WEAK_FUNC(sub_82A06E80);
PPC_FUNC_IMPL(__imp__sub_82A06E80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A06E88;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A06EA8;
	sub_82FA7CF0(ctx, base);
	// li r5,384
	ctx.r5.s64 = 384;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,688
	ctx.r3.s64 = ctx.r31.s64 + 688;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A06EB8;
	sub_82FA7CF0(ctx, base);
	// lis r3,37
	ctx.r3.s64 = 2424832;
	// lis r4,-29506
	ctx.r4.s64 = -1933705216;
	// ori r3,r3,32768
	ctx.r3.u64 = ctx.r3.u64 | 32768;
	// bl 0x82a3df10
	ctx.lr = 0x82A06EC8;
	sub_82A3DF10(ctx, base);
	// stw r3,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a06ee4
	if (!ctx.cr6.eq) goto loc_82A06EE4;
loc_82A06ED4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_82A06EE4:
	// lis r11,4
	ctx.r11.s64 = 262144;
	// addi r7,r31,1540
	ctx.r7.s64 = ctx.r31.s64 + 1540;
	// ori r28,r11,45056
	ctx.r28.u64 = ctx.r11.u64 | 45056;
	// lis r6,6690
	ctx.r6.s64 = 438435840;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r6,r6,90
	ctx.r6.u64 = ctx.r6.u64 | 90;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82af4258
	ctx.lr = 0x82A06F28;
	sub_82AF4258(ctx, base);
	// addi r3,r31,1540
	ctx.r3.s64 = ctx.r31.s64 + 1540;
	// lwz r4,140(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// bl 0x82af44c8
	ctx.lr = 0x82A06F34;
	sub_82AF44C8(ctx, base);
	// li r8,5
	ctx.r8.s64 = 5;
	// lis r5,-32096
	ctx.r5.s64 = -2103443456;
	// stw r8,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r8.u32);
	// lis r6,9
	ctx.r6.s64 = 589824;
	// stw r30,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r30.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r8,r5,24184
	ctx.r8.s64 = ctx.r5.s64 + 24184;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r9,r31,168
	ctx.r9.s64 = ctx.r31.s64 + 168;
	// stw r8,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r8.u32);
	// ori r11,r6,24576
	ctx.r11.u64 = ctx.r6.u64 | 24576;
	// stw r7,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r7.u32);
	// stw r9,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r9.u32);
	// lis r10,18
	ctx.r10.s64 = 1179648;
	// addi r9,r31,240
	ctx.r9.s64 = ctx.r31.s64 + 240;
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// li r7,5
	ctx.r7.s64 = 5;
	// stw r11,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r11.u32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// stw r9,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r9.u32);
	// lis r4,-32096
	ctx.r4.s64 = -2103443456;
	// stw r7,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r7.u32);
	// addi r8,r31,296
	ctx.r8.s64 = ctx.r31.s64 + 296;
	// stw r11,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
	// ori r10,r10,49152
	ctx.r10.u64 = ctx.r10.u64 | 49152;
	// stw r11,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r11.u32);
	// addi r7,r4,24184
	ctx.r7.s64 = ctx.r4.s64 + 24184;
	// stw r8,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r8.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stw r7,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r7.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lis r4,28
	ctx.r4.s64 = 1835008;
	// stw r9,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r9.u32);
	// addi r9,r31,368
	ctx.r9.s64 = ctx.r31.s64 + 368;
	// stw r8,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r8.u32);
	// li r7,5
	ctx.r7.s64 = 5;
	// ori r6,r4,8192
	ctx.r6.u64 = ctx.r4.u64 | 8192;
	// stw r9,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r9.u32);
	// stw r7,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r7.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r10,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r10.u32);
	// add r7,r10,r6
	ctx.r7.u64 = ctx.r10.u64 + ctx.r6.u64;
	// stw r10,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r10.u32);
	// addi r10,r31,424
	ctx.r10.s64 = ctx.r31.s64 + 424;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lis r4,-32096
	ctx.r4.s64 = -2103443456;
	// stw r9,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r9.u32);
	// stw r10,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r10.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r9,r4,24184
	ctx.r9.s64 = ctx.r4.s64 + 24184;
	// stw r8,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r8.u32);
	// addi r10,r31,496
	ctx.r10.s64 = ctx.r31.s64 + 496;
	// stw r7,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r7.u32);
	// stw r9,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r9.u32);
	// lis r3,-32096
	ctx.r3.s64 = -2103443456;
	// stw r5,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r5.u32);
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r10,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r10.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r9,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r9.u32);
	// stw r11,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r11.u32);
	// addi r9,r3,24184
	ctx.r9.s64 = ctx.r3.s64 + 24184;
	// stw r10,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r10.u32);
	// addi r10,r31,624
	ctx.r10.s64 = ctx.r31.s64 + 624;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r8,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r8.u32);
	// stw r10,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r8,r31,552
	ctx.r8.s64 = ctx.r31.s64 + 552;
	// stw r9,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r9.u32);
	// stb r10,1472(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1472, ctx.r10.u8);
	// addi r11,r31,1480
	ctx.r11.s64 = ctx.r31.s64 + 1480;
	// addi r10,r31,1480
	ctx.r10.s64 = ctx.r31.s64 + 1480;
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r30,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r30.u32);
	// stw r30,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r30.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r6,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r6.u32);
	// stw r8,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r8.u32);
	// stw r7,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r7.u32);
	// stw r11,1480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1480, ctx.r11.u32);
	// stw r10,1484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1484, ctx.r10.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// beq cr6,0x82a0723c
	if (ctx.cr6.eq) goto loc_82A0723C;
	// lis r8,-31964
	ctx.r8.s64 = -2094792704;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-31964
	ctx.r9.s64 = -2094792704;
	// li r10,480
	ctx.r10.s64 = 480;
	// rlwinm r7,r11,0,25,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,640
	ctx.r11.s64 = 640;
	// stw r10,29292(r8)
	PPC_STORE_U32(ctx.r8.u32 + 29292, ctx.r10.u32);
	// lis r8,-31964
	ctx.r8.s64 = -2094792704;
	// stw r11,29296(r9)
	PPC_STORE_U32(ctx.r9.u32 + 29296, ctx.r11.u32);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r10,r11,29288
	ctx.r10.s64 = ctx.r11.s64 + 29288;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r9,29280(r8)
	PPC_STORE_U32(ctx.r8.u32 + 29280, ctx.r9.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// bne cr6,0x82a070d8
	if (!ctx.cr6.eq) goto loc_82A070D8;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82A070D8:
	// lis r29,-31964
	ctx.r29.s64 = -2094792704;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// mullw r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// stw r11,29284(r29)
	PPC_STORE_U32(ctx.r29.u32 + 29284, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r4,-29506
	ctx.r4.s64 = -1933705216;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82a3df10
	ctx.lr = 0x82A070F8;
	sub_82A3DF10(ctx, base);
	// stw r3,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a06ed4
	if (ctx.cr6.eq) goto loc_82A06ED4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a07120
	if (ctx.cr6.eq) goto loc_82A07120;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,22528
	ctx.r11.u64 = ctx.r11.u64 | 22528;
	// b 0x82a07128
	goto loc_82A07128;
loc_82A07120:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,11264
	ctx.r11.u64 = ctx.r11.u64 | 11264;
loc_82A07128:
	// addi r8,r31,1488
	ctx.r8.s64 = ctx.r31.s64 + 1488;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// lis r6,6690
	ctx.r6.s64 = 438435840;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r6,r6,134
	ctx.r6.u64 = ctx.r6.u64 | 134;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bl 0x82af4258
	ctx.lr = 0x82A07164;
	sub_82AF4258(ctx, base);
	// addi r3,r31,1488
	ctx.r3.s64 = ctx.r31.s64 + 1488;
	// lwz r4,136(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// bl 0x82af44c8
	ctx.lr = 0x82A07170;
	sub_82AF44C8(ctx, base);
	// li r10,5
	ctx.r10.s64 = 5;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r10,696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 696, ctx.r10.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 792, ctx.r30.u32);
	// lis r8,-32096
	ctx.r8.s64 = -2103443456;
	// stw r9,720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 720, ctx.r9.u32);
	// addi r11,r31,688
	ctx.r11.s64 = ctx.r31.s64 + 688;
	// addi r10,r8,25120
	ctx.r10.s64 = ctx.r8.s64 + 25120;
	// stw r11,712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 712, ctx.r11.u32);
	// addi r9,r31,760
	ctx.r9.s64 = ctx.r31.s64 + 760;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r10,716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 716, ctx.r10.u32);
	// lis r7,-32096
	ctx.r7.s64 = -2103443456;
	// stw r9,736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 736, ctx.r9.u32);
	// stw r11,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r11.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r31,816
	ctx.r9.s64 = ctx.r31.s64 + 816;
	// addi r11,r7,25120
	ctx.r11.s64 = ctx.r7.s64 + 25120;
	// stw r10,848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 848, ctx.r10.u32);
	// stw r9,840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 840, ctx.r9.u32);
	// addi r10,r31,888
	ctx.r10.s64 = ctx.r31.s64 + 888;
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r11,844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 844, ctx.r11.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r10,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r10.u32);
	// lis r6,-32096
	ctx.r6.s64 = -2103443456;
	// stw r9,952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 952, ctx.r9.u32);
	// addi r10,r31,944
	ctx.r10.s64 = ctx.r31.s64 + 944;
	// stw r11,976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 976, ctx.r11.u32);
	// addi r9,r6,25120
	ctx.r9.s64 = ctx.r6.s64 + 25120;
	// lwz r11,29284(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 29284);
	// addi r8,r31,1016
	ctx.r8.s64 = ctx.r31.s64 + 1016;
	// stw r10,968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 968, ctx.r10.u32);
	// stw r9,972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 972, ctx.r9.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// stw r8,992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 992, ctx.r8.u32);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r9.u32);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 728, ctx.r11.u32);
	// stw r8,916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 916, ctx.r8.u32);
	// stw r7,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r7.u32);
	// stw r10,788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 788, ctx.r10.u32);
	// stw r10,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r10.u32);
	// stw r11,920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 920, ctx.r11.u32);
	// stw r11,856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 856, ctx.r11.u32);
	// stw r11,984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 984, ctx.r11.u32);
	// stw r8,852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 852, ctx.r8.u32);
	// stw r7,980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 980, ctx.r7.u32);
loc_82A0723C:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0724C"))) PPC_WEAK_FUNC(sub_82A0724C);
PPC_FUNC_IMPL(__imp__sub_82A0724C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A07250"))) PPC_WEAK_FUNC(sub_82A07250);
PPC_FUNC_IMPL(__imp__sub_82A07250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x82A07258;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// li r23,0
	ctx.r23.s64 = 0;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// lis r24,-31964
	ctx.r24.s64 = -2094792704;
	// lwz r11,1152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1152);
	// lwz r25,1136(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a0728c
	if (ctx.cr6.eq) goto loc_82A0728C;
	// lwz r11,29300(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 29300);
	// li r28,1
	ctx.r28.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a07290
	if (ctx.cr6.eq) goto loc_82A07290;
loc_82A0728C:
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
loc_82A07290:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a072c8
	if (!ctx.cr6.eq) goto loc_82A072C8;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// stw r23,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// stw r23,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r23.u32);
	// bl 0x8267db00
	ctx.lr = 0x82A072C0;
	sub_8267DB00(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_82A072C8:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x8267b0b8
	ctx.lr = 0x82A072D0;
	sub_8267B0B8(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82665330
	ctx.lr = 0x82A072E0;
	sub_82665330(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r3,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// sync 
	// lis r26,-32768
	ctx.r26.s64 = -2147483648;
	// cmplw cr6,r3,r26
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x82a07308
	if (ctx.cr6.eq) goto loc_82A07308;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x8267b0c0
	ctx.lr = 0x82A07300;
	sub_8267B0C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82a0730c
	goto loc_82A0730C;
loc_82A07308:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82A0730C:
	// lwz r11,1104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0759c
	if (ctx.cr6.eq) goto loc_82A0759C;
	// addi r3,r31,1368
	ctx.r3.s64 = ctx.r31.s64 + 1368;
	// bl 0x83179274
	ctx.lr = 0x82A07320;
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r10,1208(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1208);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82a0733c
	if (ctx.cr6.eq) goto loc_82A0733C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1148, ctx.r11.u32);
	// b 0x82a07348
	goto loc_82A07348;
loc_82A0733C:
	// lwz r11,1148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a0740c
	if (ctx.cr6.eq) goto loc_82A0740C;
loc_82A07348:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82a07590
	if (ctx.cr6.eq) goto loc_82A07590;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a07590
	if (ctx.cr6.eq) goto loc_82A07590;
	// subf r11,r29,r25
	ctx.r11.s64 = ctx.r25.s64 - ctx.r29.s64;
	// subf r9,r25,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r25.s64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82a0736c
	if (!ctx.cr6.lt) goto loc_82A0736C;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_82A0736C:
	// divwu r11,r9,r10
	ctx.r11.u32 = ctx.r9.u32 / ctx.r10.u32;
	// twllei r10,0
	if (ctx.r10.u32 <= 0) __builtin_debugtrap();
	// mullw r8,r11,r10
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// subf r11,r8,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r8.s64;
	// cmplwi cr6,r11,50000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 50000, ctx.xer);
	// blt cr6,0x82a07394
	if (ctx.cr6.lt) goto loc_82A07394;
	// addis r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -65536;
	// addi r8,r8,15536
	ctx.r8.s64 = ctx.r8.s64 + 15536;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82a073b4
	if (!ctx.cr6.gt) goto loc_82A073B4;
loc_82A07394:
	// rlwinm r11,r10,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r29,1140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1140, ctx.r29.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stw r23,1148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1148, ctx.r23.u32);
	// subf r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	// stw r11,1144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1144, ctx.r11.u32);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x82a07410
	goto loc_82A07410;
loc_82A073B4:
	// rlwinm r11,r10,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// twllei r10,0
	if (ctx.r10.u32 <= 0) __builtin_debugtrap();
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// divwu r7,r9,r10
	ctx.r7.u32 = ctx.r9.u32 / ctx.r10.u32;
	// mullw r6,r7,r10
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// cmplwi cr6,r9,50000
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 50000, ctx.xer);
	// blt cr6,0x82a073dc
	if (ctx.cr6.lt) goto loc_82A073DC;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82a073f4
	if (!ctx.cr6.gt) goto loc_82A073F4;
loc_82A073DC:
	// subf r9,r11,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r11.s64;
	// stw r29,1144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1144, ctx.r29.u32);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// stw r23,1148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1148, ctx.r23.u32);
	// stw r9,1140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1140, ctx.r9.u32);
	// b 0x82a07410
	goto loc_82A07410;
loc_82A073F4:
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// lwz r9,1140(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1140);
	// stw r23,1148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1148, ctx.r23.u32);
	// stw r11,1144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1144, ctx.r11.u32);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x82a07410
	goto loc_82A07410;
loc_82A0740C:
	// lwz r9,1140(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1140);
loc_82A07410:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82a07468
	if (ctx.cr6.eq) goto loc_82A07468;
	// lwz r11,1372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1372);
	// addi r10,r31,1388
	ctx.r10.s64 = ctx.r31.s64 + 1388;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,1420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1420);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bne cr6,0x82a07434
	if (!ctx.cr6.eq) goto loc_82A07434;
	// xori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 ^ 8;
loc_82A07434:
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,1376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1376);
	// addi r10,r31,1404
	ctx.r10.s64 = ctx.r31.s64 + 1404;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,1424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1424);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bne cr6,0x82a07454
	if (!ctx.cr6.eq) goto loc_82A07454;
	// xori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 ^ 8;
loc_82A07454:
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r31,1072
	ctx.r3.s64 = ctx.r31.s64 + 1072;
	// bl 0x82a033a0
	ctx.lr = 0x82A07460;
	sub_82A033A0(ctx, base);
	// lwz r10,1208(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1208);
	// lwz r9,1140(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1140);
loc_82A07468:
	// lwz r11,29300(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 29300);
	// cmplw cr6,r27,r26
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r26.u32, ctx.xer);
	// stw r11,1152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1152, ctx.r11.u32);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// bne cr6,0x82a07480
	if (!ctx.cr6.eq) goto loc_82A07480;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82A07480:
	// subf r8,r11,r29
	ctx.r8.s64 = ctx.r29.s64 - ctx.r11.s64;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82a07494
	if (!ctx.cr6.lt) goto loc_82A07494;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_82A07494:
	// divwu r11,r8,r10
	ctx.r11.u32 = ctx.r8.u32 / ctx.r10.u32;
	// lis r7,3
	ctx.r7.s64 = 196608;
	// mullw r6,r11,r10
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// ori r11,r7,3392
	ctx.r11.u64 = ctx.r7.u64 | 3392;
	// subf r7,r6,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r6.s64;
	// twllei r10,0
	if (ctx.r10.u32 <= 0) __builtin_debugtrap();
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82a074c0
	if (ctx.cr6.lt) goto loc_82A074C0;
	// subf r6,r11,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x82a074cc
	if (!ctx.cr6.gt) goto loc_82A074CC;
loc_82A074C0:
	// stw r29,1140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1140, ctx.r29.u32);
	// stw r29,1128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1128, ctx.r29.u32);
	// b 0x82a0752c
	goto loc_82A0752C;
loc_82A074CC:
	// rlwinm r7,r10,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// add r4,r7,r8
	ctx.r4.u64 = ctx.r7.u64 + ctx.r8.u64;
	// twllei r10,0
	if (ctx.r10.u32 <= 0) __builtin_debugtrap();
	// divwu r3,r4,r10
	ctx.r3.u32 = ctx.r4.u32 / ctx.r10.u32;
	// mullw r11,r3,r10
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82a074f8
	if (ctx.cr6.lt) goto loc_82A074F8;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x82a0752c
	if (!ctx.cr6.gt) goto loc_82A0752C;
loc_82A074F8:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r8,r9,r29
	ctx.r8.s64 = ctx.r29.s64 - ctx.r9.s64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r6,r7,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x82a07524
	if (!ctx.cr6.gt) goto loc_82A07524;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stw r29,1140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1140, ctx.r29.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stw r11,1144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1144, ctx.r11.u32);
	// b 0x82a07528
	goto loc_82A07528;
loc_82A07524:
	// stw r29,1144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1144, ctx.r29.u32);
loc_82A07528:
	// stw r9,1128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1128, ctx.r9.u32);
loc_82A0752C:
	// lwz r11,1372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1372);
	// stw r29,1132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1132, ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a07560
	if (ctx.cr6.eq) goto loc_82A07560;
	// lwz r10,1380(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1380);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a07560
	if (!ctx.cr6.eq) goto loc_82A07560;
	// lwz r9,1420(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1420);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// stw r11,1380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1380, ctx.r11.u32);
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// stw r23,1372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1372, ctx.r23.u32);
	// stw r9,1420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1420, ctx.r9.u32);
loc_82A07560:
	// lwz r11,1376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1376);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a07590
	if (ctx.cr6.eq) goto loc_82A07590;
	// lwz r10,1384(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1384);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a07590
	if (!ctx.cr6.eq) goto loc_82A07590;
	// lwz r9,1424(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1424);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// stw r11,1384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1384, ctx.r11.u32);
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// stw r23,1376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1376, ctx.r23.u32);
	// stw r9,1424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1424, ctx.r9.u32);
loc_82A07590:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r31,1368
	ctx.r3.s64 = ctx.r31.s64 + 1368;
	// bl 0x83179294
	ctx.lr = 0x82A0759C;
	__imp__KfReleaseSpinLock(ctx, base);
loc_82A0759C:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,59852
	ctx.r10.u64 = ctx.r11.u64 | 59852;
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a075bc
	if (ctx.cr6.eq) goto loc_82A075BC;
	// bl 0x82a06bd0
	ctx.lr = 0x82A075B4;
	sub_82A06BD0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
loc_82A075BC:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x831792b4
	ctx.lr = 0x82A075CC;
	__imp__KeSetEvent(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A075D4"))) PPC_WEAK_FUNC(sub_82A075D4);
PPC_FUNC_IMPL(__imp__sub_82A075D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A075D8"))) PPC_WEAK_FUNC(sub_82A075D8);
PPC_FUNC_IMPL(__imp__sub_82A075D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82a07250
	sub_82A07250(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A075DC"))) PPC_WEAK_FUNC(sub_82A075DC);
PPC_FUNC_IMPL(__imp__sub_82A075DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A075E0"))) PPC_WEAK_FUNC(sub_82A075E0);
PPC_FUNC_IMPL(__imp__sub_82A075E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A075E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82a01b98
	ctx.lr = 0x82A075F0;
	sub_82A01B98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a077a8
	if (ctx.cr6.eq) goto loc_82A077A8;
	// bl 0x82a060b0
	ctx.lr = 0x82A07600;
	sub_82A060B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,15632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15632, ctx.r3.u32);
	// beq cr6,0x82a077a0
	if (ctx.cr6.eq) goto loc_82A077A0;
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// rotlwi r10,r3,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r9,15644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15644, ctx.r9.u32);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r30,r11,29312
	ctx.r30.s64 = ctx.r11.s64 + 29312;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r7,r8,0,25,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82a07668
	if (!ctx.cr6.eq) goto loc_82A07668;
	// lwz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a07654
	if (!ctx.cr6.eq) goto loc_82A07654;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,156(r30)
	PPC_STORE_U32(ctx.r30.u32 + 156, ctx.r11.u32);
	// lwz r11,15632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15632);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// stw r11,152(r30)
	PPC_STORE_U32(ctx.r30.u32 + 152, ctx.r11.u32);
	// b 0x82a07658
	goto loc_82A07658;
loc_82A07654:
	// lwz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
loc_82A07658:
	// lwz r10,15632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15632);
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// stw r8,72(r10)
	PPC_STORE_U32(ctx.r10.u32 + 72, ctx.r8.u32);
loc_82A07668:
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a07688
	if (!ctx.cr6.eq) goto loc_82A07688;
	// lwz r11,15632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15632);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r9,32
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32, ctx.xer);
	// bne cr6,0x82a07694
	if (!ctx.cr6.eq) goto loc_82A07694;
loc_82A07688:
	// bl 0x82a059f8
	ctx.lr = 0x82A0768C;
	sub_82A059F8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
loc_82A07694:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a076ac
	if (!ctx.cr6.eq) goto loc_82A076AC;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a0776c
	if (ctx.cr6.eq) goto loc_82A0776C;
loc_82A076AC:
	// lwz r3,15632(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15632);
	// bl 0x82a04448
	ctx.lr = 0x82A076B4;
	sub_82A04448(ctx, base);
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r29,r11,-12608
	ctx.r29.s64 = ctx.r11.s64 + -12608;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A076C4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// beq cr6,0x82a076dc
	if (ctx.cr6.eq) goto loc_82A076DC;
	// addi r11,r11,-5972
	ctx.r11.s64 = ctx.r11.s64 + -5972;
	// b 0x82a076e0
	goto loc_82A076E0;
loc_82A076DC:
	// addi r11,r11,-5980
	ctx.r11.s64 = ctx.r11.s64 + -5980;
loc_82A076E0:
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x831791b4
	ctx.lr = 0x82A076F0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r4,11184(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a07754
	if (ctx.cr6.eq) goto loc_82A07754;
	// lwz r11,11240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11240);
	// addi r9,r31,15392
	ctx.r9.s64 = ctx.r31.s64 + 15392;
	// lwz r7,15632(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15632);
	// addi r8,r31,15360
	ctx.r8.s64 = ctx.r31.s64 + 15360;
	// lwz r10,15640(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15640);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// lwz r3,100(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 100);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82a3dc88
	ctx.lr = 0x82A0772C;
	sub_82A3DC88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a00a48
	ctx.lr = 0x82A07734;
	sub_82A00A48(ctx, base);
	// lwz r11,11240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11240);
	// lwz r10,15640(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15640);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r3,19200
	ctx.r4.s64 = ctx.r3.s64 + 19200;
	// bl 0x82680e48
	ctx.lr = 0x82A07750;
	sub_82680E48(ctx, base);
	// b 0x82a0776c
	goto loc_82A0776C;
loc_82A07754:
	// lwz r11,15632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15632);
	// addi r5,r31,15392
	ctx.r5.s64 = ctx.r31.s64 + 15392;
	// lwz r3,100(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// bl 0x82a3de48
	ctx.lr = 0x82A07764;
	sub_82A3DE48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a00a48
	ctx.lr = 0x82A0776C;
	sub_82A00A48(ctx, base);
loc_82A0776C:
	// lwz r10,15632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15632);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// lwz r10,104(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addis r4,r3,9
	ctx.r4.s64 = ctx.r3.s64 + 589824;
	// addi r4,r4,24576
	ctx.r4.s64 = ctx.r4.s64 + 24576;
	// bl 0x82680e48
	ctx.lr = 0x82A0778C;
	sub_82680E48(ctx, base);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,15648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15648, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_82A077A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a06df8
	ctx.lr = 0x82A077A8;
	sub_82A06DF8(ctx, base);
loc_82A077A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A077B4"))) PPC_WEAK_FUNC(sub_82A077B4);
PPC_FUNC_IMPL(__imp__sub_82A077B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A077B8"))) PPC_WEAK_FUNC(sub_82A077B8);
PPC_FUNC_IMPL(__imp__sub_82A077B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7654
	ctx.lr = 0x82A077C0;
	__savegprlr_19(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// li r25,1
	ctx.r25.s64 = 1;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// lis r10,-5
	ctx.r10.s64 = -327680;
	// lis r9,20053
	ctx.r9.s64 = 1314193408;
	// stw r25,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r25.u32);
	// stw r27,12284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12284, ctx.r27.u32);
	// ori r19,r10,27680
	ctx.r19.u64 = ctx.r10.u64 | 27680;
	// li r22,-1
	ctx.r22.s64 = -1;
	// li r23,15664
	ctx.r23.s64 = 15664;
	// ori r21,r9,18720
	ctx.r21.u64 = ctx.r9.u64 | 18720;
	// addi r20,r11,-12452
	ctx.r20.s64 = ctx.r11.s64 + -12452;
loc_82A07800:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_82A07804:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a07874
	if (!ctx.cr6.eq) goto loc_82A07874;
loc_82A07810:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a07874
	if (!ctx.cr6.eq) goto loc_82A07874;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82a05b40
	ctx.lr = 0x82A07824;
	sub_82A05B40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82a07860
	if (!ctx.cr6.eq) goto loc_82A07860;
	// std r19,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r19.u64);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83179684
	ctx.lr = 0x82A07844;
	__imp__NtWaitForSingleObjectEx(ctx, base);
	// cmpwi cr6,r3,258
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 258, ctx.xer);
	// bne cr6,0x82a07860
	if (!ctx.cr6.eq) goto loc_82A07860;
	// bl 0x82a0afe8
	ctx.lr = 0x82A07850;
	sub_82A0AFE8(ctx, base);
	// bl 0x82a098a8
	ctx.lr = 0x82A07854;
	sub_82A098A8(ctx, base);
	// bl 0x829ff2a0
	ctx.lr = 0x82A07858;
	sub_829FF2A0(ctx, base);
	// bl 0x82a0aa08
	ctx.lr = 0x82A0785C;
	sub_82A0AA08(ctx, base);
	// bl 0x82a13580
	ctx.lr = 0x82A07860;
	sub_82A13580(ctx, base);
loc_82A07860:
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// stw r25,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r25.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82a07810
	if (ctx.cr6.eq) goto loc_82A07810;
loc_82A07874:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a07f90
	if (!ctx.cr6.eq) goto loc_82A07F90;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82a07898
	if (!ctx.cr6.eq) goto loc_82A07898;
	// bl 0x82a02388
	ctx.lr = 0x82A0788C;
	sub_82A02388(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82a07804
	if (ctx.cr6.lt) goto loc_82A07804;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_82A07898:
	// bl 0x82a02650
	ctx.lr = 0x82A0789C;
	sub_82A02650(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82a07804
	if (ctx.cr6.lt) goto loc_82A07804;
	// li r10,10
	ctx.r10.s64 = 10;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// addi r11,r11,-5728
	ctx.r11.s64 = ctx.r11.s64 + -5728;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82A078B8:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a078b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A078B8;
	// stw r27,12280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12280, ctx.r27.u32);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r27,2196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2196, ctx.r27.u32);
	// addi r11,r31,12208
	ctx.r11.s64 = ctx.r31.s64 + 12208;
	// std r27,12208(r31)
	PPC_STORE_U64(ctx.r31.u32 + 12208, ctx.r27.u64);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// std r27,12216(r31)
	PPC_STORE_U64(ctx.r31.u32 + 12216, ctx.r27.u64);
	// stw r27,12224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12224, ctx.r27.u32);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// stw r27,12228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12228, ctx.r27.u32);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// stw r27,12232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12232, ctx.r27.u32);
	// addi r11,r31,12228
	ctx.r11.s64 = ctx.r31.s64 + 12228;
	// stw r27,12236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12236, ctx.r27.u32);
	// stw r27,12240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12240, ctx.r27.u32);
	// stw r27,12244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12244, ctx.r27.u32);
	// stw r27,12248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12248, ctx.r27.u32);
	// stw r25,12284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12284, ctx.r25.u32);
	// stw r27,12252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12252, ctx.r27.u32);
	// stw r22,12224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12224, ctx.r22.u32);
	// stw r22,12244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12244, ctx.r22.u32);
	// sync 
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r4,r11,30168
	ctx.r4.s64 = ctx.r11.s64 + 30168;
	// bl 0x8268c990
	ctx.lr = 0x82A07928;
	sub_8268C990(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a0af50
	ctx.lr = 0x82A07930;
	sub_82A0AF50(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a0aa88
	ctx.lr = 0x82A0793C;
	sub_82A0AA88(ctx, base);
	// bl 0x82a09760
	ctx.lr = 0x82A07940;
	sub_82A09760(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a134f8
	ctx.lr = 0x82A07948;
	sub_82A134F8(ctx, base);
	// lwz r11,10632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10632);
	// addi r10,r31,72
	ctx.r10.s64 = ctx.r31.s64 + 72;
	// addi r9,r31,88
	ctx.r9.s64 = ctx.r31.s64 + 88;
	// addi r8,r31,56
	ctx.r8.s64 = ctx.r31.s64 + 56;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r7,r31,104
	ctx.r7.s64 = ctx.r31.s64 + 104;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// beq cr6,0x82a07978
	if (ctx.cr6.eq) goto loc_82A07978;
	// bl 0x82a0d538
	ctx.lr = 0x82A07978;
	sub_82A0D538(ctx, base);
loc_82A07978:
	// mr r24,r27
	ctx.r24.u64 = ctx.r27.u64;
loc_82A0797C:
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x831795f4
	ctx.lr = 0x82A079A0;
	__imp__KeWaitForMultipleObjects(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwzx r30,r11,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bne cr6,0x82a079cc
	if (!ctx.cr6.eq) goto loc_82A079CC;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a079cc
	if (!ctx.cr6.eq) goto loc_82A079CC;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// b 0x82a079f0
	goto loc_82A079F0;
loc_82A079CC:
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// stw r27,12284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12284, ctx.r27.u32);
	// sync 
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82a041c8
	ctx.lr = 0x82A079E0;
	sub_82A041C8(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x8268c9a0
	ctx.lr = 0x82A079E8;
	sub_8268C9A0(ctx, base);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x82677460
	ctx.lr = 0x82A079F0;
	sub_82677460(ctx, base);
loc_82A079F0:
	// addi r11,r31,56
	ctx.r11.s64 = ctx.r31.s64 + 56;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82a07b2c
	if (!ctx.cr6.eq) goto loc_82A07B2C;
	// lwz r11,12252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12252);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12252, ctx.r11.u32);
	// beq cr6,0x82a07d08
	if (ctx.cr6.eq) goto loc_82A07D08;
	// lwz r11,12276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12276);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a07a30
	if (!ctx.cr6.eq) goto loc_82A07A30;
	// bl 0x82a075e0
	ctx.lr = 0x82A07A24;
	sub_82A075E0(ctx, base);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82a07a34
	goto loc_82A07A34;
loc_82A07A30:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82A07A34:
	// stw r11,12260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12260, ctx.r11.u32);
	// bl 0x82a04260
	ctx.lr = 0x82A07A3C;
	sub_82A04260(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a07d08
	if (ctx.cr6.eq) goto loc_82A07D08;
	// addi r9,r31,12256
	ctx.r9.s64 = ctx.r31.s64 + 12256;
loc_82A07A48:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r30,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r30.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82a07a48
	if (!ctx.cr0.eq) goto loc_82A07A48;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a07d08
	if (ctx.cr6.eq) goto loc_82A07D08;
	// lwz r29,15632(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15632);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82a07ab4
	if (ctx.cr6.eq) goto loc_82A07AB4;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x83179274
	ctx.lr = 0x82A07A80;
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82a07aa4
	if (!ctx.cr6.eq) goto loc_82A07AA4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a022a0
	ctx.lr = 0x82A07AA4;
	sub_82A022A0(ctx, base);
loc_82A07AA4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x83179294
	ctx.lr = 0x82A07AB0;
	__imp__KfReleaseSpinLock(ctx, base);
	// stw r27,15632(r30)
	PPC_STORE_U32(ctx.r30.u32 + 15632, ctx.r27.u32);
loc_82A07AB4:
	// lwz r29,15636(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15636);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82a07afc
	if (ctx.cr6.eq) goto loc_82A07AFC;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x83179274
	ctx.lr = 0x82A07AC8;
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82a07aec
	if (!ctx.cr6.eq) goto loc_82A07AEC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a02568
	ctx.lr = 0x82A07AEC;
	sub_82A02568(ctx, base);
loc_82A07AEC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x83179294
	ctx.lr = 0x82A07AF8;
	__imp__KfReleaseSpinLock(ctx, base);
	// stw r27,15636(r30)
	PPC_STORE_U32(ctx.r30.u32 + 15636, ctx.r27.u32);
loc_82A07AFC:
	// addi r10,r31,12544
	ctx.r10.s64 = ctx.r31.s64 + 12544;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// subf r9,r10,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r10.s64;
	// addi r8,r11,-6000
	ctx.r8.s64 = ctx.r11.s64 + -6000;
	// divw r7,r9,r23
	ctx.r7.s32 = ctx.r9.s32 / ctx.r23.s32;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r6,r8
	PPC_STORE_U32(ctx.r6.u32 + ctx.r8.u32, ctx.r27.u32);
	// lwz r11,12248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12248);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12248, ctx.r11.u32);
	// sync 
	// b 0x82a07d08
	goto loc_82A07D08;
loc_82A07B2C:
	// addi r11,r31,72
	ctx.r11.s64 = ctx.r31.s64 + 72;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82a07b90
	if (!ctx.cr6.eq) goto loc_82A07B90;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A07B40;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,12288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12288);
	// addi r10,r31,12264
	ctx.r10.s64 = ctx.r31.s64 + 12264;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r9,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a07b80
	if (ctx.cr6.eq) goto loc_82A07B80;
	// lwz r3,52(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a07b80
	if (ctx.cr6.eq) goto loc_82A07B80;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x82a07b70
	if (ctx.cr6.eq) goto loc_82A07B70;
	// bl 0x82a04610
	ctx.lr = 0x82A07B70;
	sub_82A04610(ctx, base);
loc_82A07B70:
	// bl 0x82a09810
	ctx.lr = 0x82A07B74;
	sub_82A09810(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A07B7C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x82a07d08
	goto loc_82A07D08;
loc_82A07B80:
	// bl 0x82a09760
	ctx.lr = 0x82A07B84;
	sub_82A09760(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A07B8C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x82a07d08
	goto loc_82A07D08;
loc_82A07B90:
	// addi r11,r31,88
	ctx.r11.s64 = ctx.r31.s64 + 88;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82a07cdc
	if (!ctx.cr6.eq) goto loc_82A07CDC;
	// lwz r11,12288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12288);
	// addi r10,r31,12264
	ctx.r10.s64 = ctx.r31.s64 + 12264;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r9,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a07c60
	if (ctx.cr6.eq) goto loc_82A07C60;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a07c60
	if (ctx.cr6.eq) goto loc_82A07C60;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x82a07bf0
	if (ctx.cr6.eq) goto loc_82A07BF0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a04d18
	ctx.lr = 0x82A07BD4;
	sub_82A04D18(ctx, base);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// stw r27,12276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12276, ctx.r27.u32);
	// sync 
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a015d8
	ctx.lr = 0x82A07BE8;
	sub_82A015D8(ctx, base);
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// bl 0x82a06df8
	ctx.lr = 0x82A07BF0;
	sub_82A06DF8(ctx, base);
loc_82A07BF0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a01ce0
	ctx.lr = 0x82A07BF8;
	sub_82A01CE0(ctx, base);
	// lwz r3,10624(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10624);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a07c24
	if (ctx.cr6.eq) goto loc_82A07C24;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82a07c18
	if (!ctx.cr6.eq) goto loc_82A07C18;
	// lwz r11,10628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10628);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a07c24
	if (!ctx.cr6.eq) goto loc_82A07C24;
loc_82A07C18:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831792b4
	ctx.lr = 0x82A07C24;
	__imp__KeSetEvent(ctx, base);
loc_82A07C24:
	// addi r3,r31,12272
	ctx.r3.s64 = ctx.r31.s64 + 12272;
	// bl 0x83179274
	ctx.lr = 0x82A07C2C;
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r11,12288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12288);
	// addi r10,r31,12264
	ctx.r10.s64 = ctx.r31.s64 + 12264;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r27.u32);
	// lwz r11,12288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12288);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// clrlwi r11,r8,31
	ctx.r11.u64 = ctx.r8.u32 & 0x1;
	// stw r11,12288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12288, ctx.r11.u32);
	// sync 
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,12272
	ctx.r3.s64 = ctx.r31.s64 + 12272;
	// bl 0x83179294
	ctx.lr = 0x82A07C5C;
	__imp__KfReleaseSpinLock(ctx, base);
	// b 0x82a07c7c
	goto loc_82A07C7C;
loc_82A07C60:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a0af50
	ctx.lr = 0x82A07C68;
	sub_82A0AF50(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a0aa88
	ctx.lr = 0x82A07C74;
	sub_82A0AA88(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a134f8
	ctx.lr = 0x82A07C7C;
	sub_82A134F8(ctx, base);
loc_82A07C7C:
	// lwz r11,12260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12260);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a07d08
	if (ctx.cr6.eq) goto loc_82A07D08;
	// bl 0x82a075e0
	ctx.lr = 0x82A07C8C;
	sub_82A075E0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a07cd0
	if (ctx.cr6.eq) goto loc_82A07CD0;
	// addi r9,r31,12256
	ctx.r9.s64 = ctx.r31.s64 + 12256;
loc_82A07C98:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r3,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r3.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82a07c98
	if (!ctx.cr0.eq) goto loc_82A07C98;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a07cd0
	if (ctx.cr6.eq) goto loc_82A07CD0;
	// bl 0x82a06df8
	ctx.lr = 0x82A07CC0;
	sub_82A06DF8(ctx, base);
	// lwz r11,12248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12248);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12248, ctx.r11.u32);
	// sync 
loc_82A07CD0:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r27,12260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12260, ctx.r27.u32);
	// b 0x82a07d08
	goto loc_82A07D08;
loc_82A07CDC:
	// addi r11,r31,104
	ctx.r11.s64 = ctx.r31.s64 + 104;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82a07d08
	if (!ctx.cr6.eq) goto loc_82A07D08;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a0af50
	ctx.lr = 0x82A07CF0;
	sub_82A0AF50(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a0aa88
	ctx.lr = 0x82A07CFC;
	sub_82A0AA88(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a134f8
	ctx.lr = 0x82A07D04;
	sub_82A134F8(ctx, base);
	// bl 0x82a09760
	ctx.lr = 0x82A07D08;
	sub_82A09760(ctx, base);
loc_82A07D08:
	// lwz r11,12284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a07d20
	if (ctx.cr6.eq) goto loc_82A07D20;
	// lwz r11,12280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12280);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a07e04
	if (ctx.cr6.eq) goto loc_82A07E04;
loc_82A07D20:
	// addi r9,r31,12256
	ctx.r9.s64 = ctx.r31.s64 + 12256;
loc_82A07D24:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r27,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r27.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82a07d24
	if (!ctx.cr0.eq) goto loc_82A07D24;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a07e04
	if (ctx.cr6.eq) goto loc_82A07E04;
	// lwz r29,15632(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15632);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82a07d90
	if (ctx.cr6.eq) goto loc_82A07D90;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x83179274
	ctx.lr = 0x82A07D5C;
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82a07d80
	if (!ctx.cr6.eq) goto loc_82A07D80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a022a0
	ctx.lr = 0x82A07D80;
	sub_82A022A0(ctx, base);
loc_82A07D80:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x83179294
	ctx.lr = 0x82A07D8C;
	__imp__KfReleaseSpinLock(ctx, base);
	// stw r27,15632(r30)
	PPC_STORE_U32(ctx.r30.u32 + 15632, ctx.r27.u32);
loc_82A07D90:
	// lwz r29,15636(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15636);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82a07dd8
	if (ctx.cr6.eq) goto loc_82A07DD8;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x83179274
	ctx.lr = 0x82A07DA4;
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82a07dc8
	if (!ctx.cr6.eq) goto loc_82A07DC8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a02568
	ctx.lr = 0x82A07DC8;
	sub_82A02568(ctx, base);
loc_82A07DC8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x83179294
	ctx.lr = 0x82A07DD4;
	__imp__KfReleaseSpinLock(ctx, base);
	// stw r27,15636(r30)
	PPC_STORE_U32(ctx.r30.u32 + 15636, ctx.r27.u32);
loc_82A07DD8:
	// addi r10,r31,12544
	ctx.r10.s64 = ctx.r31.s64 + 12544;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// subf r9,r10,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r10.s64;
	// addi r8,r11,-6000
	ctx.r8.s64 = ctx.r11.s64 + -6000;
	// divw r7,r9,r23
	ctx.r7.s32 = ctx.r9.s32 / ctx.r23.s32;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r6,r8
	PPC_STORE_U32(ctx.r6.u32 + ctx.r8.u32, ctx.r27.u32);
	// lwz r11,12248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12248);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12248, ctx.r11.u32);
	// sync 
loc_82A07E04:
	// mftb r8
	ctx.r8.u64 = __rdtsc();
	// sradi r7,r8,32
	ctx.xer.ca = (ctx.r8.s64 < 0) & ((ctx.r8.u64 & 0xFFFFFFFF) != 0);
	ctx.r7.s64 = ctx.r8.s64 >> 32;
	// stb r25,12091(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12091, ctx.r25.u8);
	// li r5,120
	ctx.r5.s64 = 120;
	// stb r25,12090(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12090, ctx.r25.u8);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r7,12092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12092, ctx.r7.u32);
	// addi r4,r31,12088
	ctx.r4.s64 = ctx.r31.s64 + 12088;
	// stw r8,12096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12096, ctx.r8.u32);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// bl 0x82a83cd8
	ctx.lr = 0x82A07E34;
	sub_82A83CD8(ctx, base);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x82a0797c
	if (!ctx.cr6.eq) goto loc_82A0797C;
	// addi r3,r31,12272
	ctx.r3.s64 = ctx.r31.s64 + 12272;
	// bl 0x83179274
	ctx.lr = 0x82A07E44;
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r11,12264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12264);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a07e64
	if (!ctx.cr6.eq) goto loc_82A07E64;
	// lwz r11,12268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12268);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a07e68
	if (ctx.cr6.eq) goto loc_82A07E68;
loc_82A07E64:
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_82A07E68:
	// addi r3,r31,12272
	ctx.r3.s64 = ctx.r31.s64 + 12272;
	// bl 0x83179294
	ctx.lr = 0x82A07E70;
	__imp__KfReleaseSpinLock(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a07e84
	if (!ctx.cr6.eq) goto loc_82A07E84;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82a07eac
	if (ctx.cr6.eq) goto loc_82A07EAC;
loc_82A07E84:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a07e98
	if (!ctx.cr6.eq) goto loc_82A07E98;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82a07ee0
	if (ctx.cr6.eq) goto loc_82A07EE0;
loc_82A07E98:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x831792b4
	ctx.lr = 0x82A07EA8;
	__imp__KeSetEvent(ctx, base);
	// b 0x82a0797c
	goto loc_82A0797C;
loc_82A07EAC:
	// addi r9,r31,12256
	ctx.r9.s64 = ctx.r31.s64 + 12256;
loc_82A07EB0:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r27,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r27.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82a07eb0
	if (!ctx.cr0.eq) goto loc_82A07EB0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a07ed8
	if (ctx.cr6.eq) goto loc_82A07ED8;
	// bl 0x82a06df8
	ctx.lr = 0x82A07ED8;
	sub_82A06DF8(ctx, base);
loc_82A07ED8:
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
	// b 0x82a07f0c
	goto loc_82A07F0C;
loc_82A07EE0:
	// addi r9,r31,12256
	ctx.r9.s64 = ctx.r31.s64 + 12256;
loc_82A07EE4:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r27,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r27.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82a07ee4
	if (!ctx.cr0.eq) goto loc_82A07EE4;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a07f0c
	if (ctx.cr6.eq) goto loc_82A07F0C;
	// bl 0x82a06df8
	ctx.lr = 0x82A07F0C;
	sub_82A06DF8(ctx, base);
loc_82A07F0C:
	// stw r27,12284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12284, ctx.r27.u32);
	// sync 
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x8268c9a0
	ctx.lr = 0x82A07F1C;
	sub_8268C9A0(ctx, base);
	// bl 0x82a05de0
	ctx.lr = 0x82A07F20;
	sub_82A05DE0(ctx, base);
loc_82A07F20:
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a07f38
	if (!ctx.cr6.eq) goto loc_82A07F38;
	// lwz r11,680(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 680);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a07f54
	if (ctx.cr6.eq) goto loc_82A07F54;
loc_82A07F38:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r31,1472
	ctx.r3.s64 = ctx.r31.s64 + 1472;
	// bl 0x83179414
	ctx.lr = 0x82A07F50;
	__imp__KeWaitForSingleObject(ctx, base);
	// b 0x82a07f20
	goto loc_82A07F20;
loc_82A07F54:
	// bl 0x82a09498
	ctx.lr = 0x82A07F58;
	sub_82A09498(ctx, base);
	// bl 0x82a0abd8
	ctx.lr = 0x82A07F5C;
	sub_82A0ABD8(ctx, base);
	// bl 0x82a0a998
	ctx.lr = 0x82A07F60;
	sub_82A0A998(ctx, base);
	// bl 0x82a13600
	ctx.lr = 0x82A07F64;
	sub_82A13600(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a134f8
	ctx.lr = 0x82A07F6C;
	sub_82A134F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a0aa88
	ctx.lr = 0x82A07F78;
	sub_82A0AA88(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a0af50
	ctx.lr = 0x82A07F80;
	sub_82A0AF50(ctx, base);
	// bl 0x82a09760
	ctx.lr = 0x82A07F84;
	sub_82A09760(ctx, base);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x82a07f94
	if (!ctx.cr6.eq) goto loc_82A07F94;
	// b 0x82a07800
	goto loc_82A07800;
loc_82A07F90:
	// bl 0x82a05de0
	ctx.lr = 0x82A07F94;
	sub_82A05DE0(ctx, base);
loc_82A07F94:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x82677460
	ctx.lr = 0x82A07F9C;
	sub_82677460(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a07fac
	if (ctx.cr6.eq) goto loc_82A07FAC;
	// bl 0x82a3dbc0
	ctx.lr = 0x82A07FAC;
	sub_82A3DBC0(ctx, base);
loc_82A07FAC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a07fd4
	if (ctx.cr6.eq) goto loc_82A07FD4;
	// bl 0x82a427a8
	ctx.lr = 0x82A07FBC;
	sub_82A427A8(ctx, base);
	// lwz r3,12084(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12084);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a07fd4
	if (ctx.cr6.eq) goto loc_82A07FD4;
	// bl 0x8266eed8
	ctx.lr = 0x82A07FCC;
	sub_8266EED8(ctx, base);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r27,12084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12084, ctx.r27.u32);
loc_82A07FD4:
	// bl 0x829ff248
	ctx.lr = 0x82A07FD8;
	sub_829FF248(ctx, base);
	// bl 0x82a03c50
	ctx.lr = 0x82A07FDC;
	sub_82A03C50(ctx, base);
	// bl 0x82a013e8
	ctx.lr = 0x82A07FE0;
	sub_82A013E8(ctx, base);
	// bl 0x82a3e028
	ctx.lr = 0x82A07FE4;
	sub_82A3E028(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82fa76a4
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A07FF0"))) PPC_WEAK_FUNC(sub_82A07FF0);
PPC_FUNC_IMPL(__imp__sub_82A07FF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82A07FF8;
	__savegprlr_14(ctx, base);
	// stwu r1,-832(r1)
	ea = -832 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r12,13311
	ctx.r12.s64 = 872349696;
	// stw r5,868(r1)
	PPC_STORE_U32(ctx.r1.u32 + 868, ctx.r5.u32);
	// li r26,0
	ctx.r26.s64 = 0;
	// ori r12,r12,33556
	ctx.r12.u64 = ctx.r12.u64 | 33556;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// and r11,r3,r12
	ctx.r11.u64 = ctx.r3.u64 & ctx.r12.u64;
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// mr r21,r26
	ctx.r21.u64 = ctx.r26.u64;
	// mr r20,r26
	ctx.r20.u64 = ctx.r26.u64;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// beq cr6,0x82a08044
	if (ctx.cr6.eq) goto loc_82A08044;
loc_82A08034:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,832
	ctx.r1.s64 = ctx.r1.s64 + 832;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
loc_82A08044:
	// rlwinm r11,r22,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a08068
	if (ctx.cr6.eq) goto loc_82A08068;
	// clrlwi r10,r22,28
	ctx.r10.u64 = ctx.r22.u32 & 0xF;
	// rlwinm r10,r10,0,31,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF9;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a08034
	if (!ctx.cr6.eq) goto loc_82A08034;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a08034
	if (!ctx.cr6.eq) goto loc_82A08034;
loc_82A08068:
	// rlwinm r11,r22,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x8;
	// li r19,1
	ctx.r19.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a08088
	if (!ctx.cr6.eq) goto loc_82A08088;
	// clrlwi r11,r22,31
	ctx.r11.u64 = ctx.r22.u32 & 0x1;
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0808c
	if (ctx.cr6.eq) goto loc_82A0808C;
loc_82A08088:
	// mr r24,r19
	ctx.r24.u64 = ctx.r19.u64;
loc_82A0808C:
	// rlwinm r11,r22,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a080a4
	if (!ctx.cr6.eq) goto loc_82A080A4;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x82a080a4
	if (!ctx.cr6.eq) goto loc_82A080A4;
	// mr r24,r19
	ctx.r24.u64 = ctx.r19.u64;
loc_82A080A4:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r22,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x2000;
	// rlwinm r16,r11,27,31,31
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a080bc
	if (ctx.cr6.eq) goto loc_82A080BC;
	// mr r21,r19
	ctx.r21.u64 = ctx.r19.u64;
loc_82A080BC:
	// rlwinm r11,r22,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a080cc
	if (ctx.cr6.eq) goto loc_82A080CC;
	// mr r20,r19
	ctx.r20.u64 = ctx.r19.u64;
loc_82A080CC:
	// rlwinm r11,r22,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x8000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a080ec
	if (ctx.cr6.eq) goto loc_82A080EC;
	// li r12,8201
	ctx.r12.s64 = 8201;
	// and r11,r22,r12
	ctx.r11.u64 = ctx.r22.u64 & ctx.r12.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a08034
	if (ctx.cr6.eq) goto loc_82A08034;
	// mr r27,r19
	ctx.r27.u64 = ctx.r19.u64;
loc_82A080EC:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x82a0810c
	if (ctx.cr6.eq) goto loc_82A0810C;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// bne cr6,0x82a08034
	if (!ctx.cr6.eq) goto loc_82A08034;
	// bl 0x82c463a0
	ctx.lr = 0x82A08100;
	sub_82C463A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82a0810c
	if (ctx.cr6.eq) goto loc_82A0810C;
	// mr r21,r19
	ctx.r21.u64 = ctx.r19.u64;
loc_82A0810C:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82a08034
	if (ctx.cr6.eq) goto loc_82A08034;
	// cmpwi cr6,r18,-1
	ctx.cr6.compare<int32_t>(ctx.r18.s32, -1, ctx.xer);
	// bne cr6,0x82a08124
	if (!ctx.cr6.eq) goto loc_82A08124;
	// li r18,5
	ctx.r18.s64 = 5;
	// b 0x82a0812c
	goto loc_82A0812C;
loc_82A08124:
	// cmplwi cr6,r18,6
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 6, ctx.xer);
	// bge cr6,0x82a08034
	if (!ctx.cr6.lt) goto loc_82A08034;
loc_82A0812C:
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// bne cr6,0x82a081a4
	if (!ctx.cr6.eq) goto loc_82A081A4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82fa5590
	ctx.lr = 0x82A08144;
	sub_82FA5590(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82a08034
	if (!ctx.cr6.eq) goto loc_82A08034;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r5,-12464(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12464);
	// bl 0x82fa85a0
	ctx.lr = 0x82A08160;
	sub_82FA85A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82a08034
	if (!ctx.cr6.eq) goto loc_82A08034;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x82a081a4
	if (ctx.cr6.eq) goto loc_82A081A4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82fa5590
	ctx.lr = 0x82A08180;
	sub_82FA5590(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82a08034
	if (!ctx.cr6.eq) goto loc_82A08034;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// lwz r5,-12456(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12456);
	// bl 0x82fa85a0
	ctx.lr = 0x82A0819C;
	sub_82FA85A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82a08034
	if (!ctx.cr6.eq) goto loc_82A08034;
loc_82A081A4:
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r15,r11,-12520
	ctx.r15.s64 = ctx.r11.s64 + -12520;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A081B4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r17,-31964
	ctx.r17.s64 = -2094792704;
	// lwz r11,29308(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 29308);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a08994
	if (!ctx.cr6.eq) goto loc_82A08994;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// lis r5,0
	ctx.r5.s64 = 0;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// ori r5,r5,59856
	ctx.r5.u64 = ctx.r5.u64 | 59856;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A081E0;
	sub_82FA7CF0(ctx, base);
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r4,r11,-13008
	ctx.r4.s64 = ctx.r11.s64 + -13008;
	// addi r3,r10,-27332
	ctx.r3.s64 = ctx.r10.s64 + -27332;
	// addi r8,r31,10536
	ctx.r8.s64 = ctx.r31.s64 + 10536;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x83179604
	ctx.lr = 0x82A08204;
	__imp__EtxProducerRegister(ctx, base);
	// li r23,-1
	ctx.r23.s64 = -1;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r18,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r18.u32);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// stw r23,1592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1592, ctx.r23.u32);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stw r26,1596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1596, ctx.r26.u32);
	// stw r26,1600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1600, ctx.r26.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stw r26,1604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1604, ctx.r26.u32);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// stw r22,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r22.u32);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// stw r26,1608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1608, ctx.r26.u32);
	// addi r30,r31,1656
	ctx.r30.s64 = ctx.r31.s64 + 1656;
	// stw r19,1612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1612, ctx.r19.u32);
	// li r29,2
	ctx.r29.s64 = 2;
	// stw r26,2036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2036, ctx.r26.u32);
	// b 0x82a0825c
	goto loc_82A0825C;
loc_82A08258:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82A0825C:
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// addi r5,r30,92
	ctx.r5.s64 = ctx.r30.s64 + 92;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r14,r10,27,31,31
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// bl 0x829fd270
	ctx.lr = 0x82A08274;
	sub_829FD270(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x829fd270
	ctx.lr = 0x82A08284;
	sub_829FD270(ctx, base);
	// stw r26,184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 184, ctx.r26.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,192
	ctx.r30.s64 = ctx.r30.s64 + 192;
	// bne 0x82a08258
	if (!ctx.cr0.eq) goto loc_82A08258;
	// lwz r11,1664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1664);
	// lwz r10,1668(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1668);
	// lwz r9,1672(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1672);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// stw r11,1640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1640, ctx.r11.u32);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// stw r10,1644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1644, ctx.r10.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// stw r9,1648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1648, ctx.r9.u32);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// stw r11,1628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1628, ctx.r11.u32);
	// stw r10,1632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1632, ctx.r10.u32);
	// stw r9,1636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1636, ctx.r9.u32);
	// stw r11,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r11.u32);
	// stw r10,1620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1620, ctx.r10.u32);
	// stw r9,1624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1624, ctx.r9.u32);
	// bl 0x82a03e28
	ctx.lr = 0x82A082E4;
	sub_82A03E28(ctx, base);
	// addi r9,r31,2176
	ctx.r9.s64 = ctx.r31.s64 + 2176;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// stb r19,2168(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2168, ctx.r19.u8);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stw r9,2176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2176, ctx.r9.u32);
	// addi r11,r31,2176
	ctx.r11.s64 = ctx.r31.s64 + 2176;
	// stw r26,2172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2172, ctx.r26.u32);
	// addi r10,r31,11268
	ctx.r10.s64 = ctx.r31.s64 + 11268;
	// stb r26,11260(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11260, ctx.r26.u8);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// stw r11,2180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2180, ctx.r11.u32);
	// stw r10,11272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11272, ctx.r10.u32);
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// addi r11,r31,11268
	ctx.r11.s64 = ctx.r31.s64 + 11268;
	// stw r26,11264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11264, ctx.r26.u32);
	// addi r10,r31,64
	ctx.r10.s64 = ctx.r31.s64 + 64;
	// stb r19,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r19.u8);
	// addi r9,r31,64
	ctx.r9.s64 = ctx.r31.s64 + 64;
	// stw r11,11268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11268, ctx.r11.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r9,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r9.u32);
	// addi r9,r31,80
	ctx.r9.s64 = ctx.r31.s64 + 80;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stw r26,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r26.u32);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// stb r19,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r19.u8);
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// stw r26,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r26.u32);
	// addi r10,r31,96
	ctx.r10.s64 = ctx.r31.s64 + 96;
	// stb r19,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r19.u8);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// addi r11,r31,96
	ctx.r11.s64 = ctx.r31.s64 + 96;
	// stw r26,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r26.u32);
	// addi r10,r31,112
	ctx.r10.s64 = ctx.r31.s64 + 112;
	// stb r19,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r19.u8);
	// addi r9,r31,112
	ctx.r9.s64 = ctx.r31.s64 + 112;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r26,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r26.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r9,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// bl 0x831796c4
	ctx.lr = 0x82A083B4;
	__imp__NtCreateEvent(ctx, base);
	// lis r28,-32761
	ctx.r28.s64 = -2147024896;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82a083e4
	if (!ctx.cr6.lt) goto loc_82A083E4;
	// bl 0x831795c4
	ctx.lr = 0x82A083C4;
	__imp__RtlNtStatusToDosError(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x82a083d4
	if (ctx.cr6.gt) goto loc_82A083D4;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// b 0x82a083dc
	goto loc_82A083DC;
loc_82A083D4:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// or r25,r11,r28
	ctx.r25.u64 = ctx.r11.u64 | ctx.r28.u64;
loc_82A083DC:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt cr6,0x82a088e0
	if (ctx.cr6.lt) goto loc_82A088E0;
loc_82A083E4:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// bne cr6,0x82a08408
	if (!ctx.cr6.eq) goto loc_82A08408;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82a08408
	if (!ctx.cr6.eq) goto loc_82A08408;
	// rlwinm r11,r22,0,25,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x7E;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// rlwinm r11,r11,0,30,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFC3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0840c
	if (ctx.cr6.eq) goto loc_82A0840C;
loc_82A08408:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
loc_82A0840C:
	// bl 0x82a06e80
	ctx.lr = 0x82A08410;
	sub_82A06E80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82a08434
	if (!ctx.cr6.lt) goto loc_82A08434;
	// bl 0x831795c4
	ctx.lr = 0x82A0841C;
	__imp__RtlNtStatusToDosError(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x82a0842c
	if (ctx.cr6.gt) goto loc_82A0842C;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// b 0x82a08434
	goto loc_82A08434;
loc_82A0842C:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// or r25,r11,r28
	ctx.r25.u64 = ctx.r11.u64 | ctx.r28.u64;
loc_82A08434:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt cr6,0x82a088e0
	if (ctx.cr6.lt) goto loc_82A088E0;
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// li r9,129
	ctx.r9.s64 = 129;
	// addi r7,r11,30648
	ctx.r7.s64 = ctx.r11.s64 + 30648;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,24
	ctx.r5.s64 = ctx.r31.s64 + 24;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x831796b4
	ctx.lr = 0x82A08460;
	__imp__ExCreateThread(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82a08488
	if (ctx.cr6.lt) goto loc_82A08488;
	// li r4,17
	ctx.r4.s64 = 17;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x831793d4
	ctx.lr = 0x82A08474;
	__imp__KeSetBasePriorityThread(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// slw r4,r19,r18
	ctx.r4.u64 = ctx.r18.u8 & 0x20 ? 0 : (ctx.r19.u32 << (ctx.r18.u8 & 0x3F));
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x831796a4
	ctx.lr = 0x82A08484;
	__imp__KeSetAffinityThread(ctx, base);
	// b 0x82a084a4
	goto loc_82A084A4;
loc_82A08488:
	// bl 0x831795c4
	ctx.lr = 0x82A0848C;
	__imp__RtlNtStatusToDosError(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x82a0849c
	if (ctx.cr6.gt) goto loc_82A0849C;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// b 0x82a084a4
	goto loc_82A084A4;
loc_82A0849C:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// or r25,r11,r28
	ctx.r25.u64 = ctx.r11.u64 | ctx.r28.u64;
loc_82A084A4:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt cr6,0x82a088e0
	if (ctx.cr6.lt) goto loc_82A088E0;
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// bl 0x8268c948
	ctx.lr = 0x82A084B4;
	sub_8268C948(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82a088e0
	if (ctx.cr6.lt) goto loc_82A088E0;
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// bne cr6,0x82a085a0
	if (!ctx.cr6.eq) goto loc_82A085A0;
	// bl 0x82a03998
	ctx.lr = 0x82A084CC;
	sub_82A03998(ctx, base);
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82A084E4:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a084e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A084E4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt cr6,0x82a08590
	if (ctx.cr6.lt) goto loc_82A08590;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// lwz r11,11240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11240);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r7,r11,60
	ctx.r7.s64 = ctx.r11.s64 + 60;
	// addi r6,r11,116
	ctx.r6.s64 = ctx.r11.s64 + 116;
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// addi r5,r11,236
	ctx.r5.s64 = ctx.r11.s64 + 236;
	// stw r7,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// lwz r10,29304(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29304);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r4,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r4.u32);
	// stw r6,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r6.u32);
	// stw r5,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r5.u32);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// bl 0x82a3e020
	ctx.lr = 0x82A08540;
	sub_82A3E020(ctx, base);
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// subf. r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a08568
	if (ctx.cr0.eq) goto loc_82A08568;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82a08578
	if (!ctx.cr6.eq) goto loc_82A08578;
	// lis r3,-31999
	ctx.r3.s64 = -2097086464;
	// ori r3,r3,15
	ctx.r3.u64 = ctx.r3.u64 | 15;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// b 0x82a085a0
	goto loc_82A085A0;
loc_82A08568:
	// lis r3,-31999
	ctx.r3.s64 = -2097086464;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// b 0x82a085a0
	goto loc_82A085A0;
loc_82A08578:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a08588
	if (!ctx.cr6.eq) goto loc_82A08588;
	// stw r19,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r19.u32);
	// b 0x82a085a0
	goto loc_82A085A0;
loc_82A08588:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x82a08598
	if (ctx.cr6.gt) goto loc_82A08598;
loc_82A08590:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// b 0x82a085a0
	goto loc_82A085A0;
loc_82A08598:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// or r25,r11,r28
	ctx.r25.u64 = ctx.r11.u64 | ctx.r28.u64;
loc_82A085A0:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt cr6,0x82a088e0
	if (ctx.cr6.lt) goto loc_82A088E0;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x82a08654
	if (ctx.cr6.eq) goto loc_82A08654;
	// lwz r11,11240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a085d0
	if (!ctx.cr6.eq) goto loc_82A085D0;
	// bl 0x82a03d48
	ctx.lr = 0x82A085C0;
	sub_82A03D48(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82a088e0
	if (ctx.cr6.lt) goto loc_82A088E0;
	// lwz r11,12080(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12080);
loc_82A085D0:
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a085ec
	if (!ctx.cr6.eq) goto loc_82A085EC;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r30,r11,-26560
	ctx.r30.s64 = ctx.r11.s64 + -26560;
	// b 0x82a085f0
	goto loc_82A085F0;
loc_82A085EC:
	// addi r30,r1,416
	ctx.r30.s64 = ctx.r1.s64 + 416;
loc_82A085F0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a78410
	ctx.lr = 0x82A085F8;
	sub_82A78410(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82a0860c
	if (!ctx.cr6.eq) goto loc_82A0860C;
	// lis r25,-31999
	ctx.r25.s64 = -2097086464;
	// ori r25,r25,13
	ctx.r25.u64 = ctx.r25.u64 | 13;
	// b 0x82a088e0
	goto loc_82A088E0;
loc_82A0860C:
	// not r11,r22
	ctx.r11.u64 = ~ctx.r22.u64;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r6,r31,12084
	ctx.r6.s64 = ctx.r31.s64 + 12084;
	// rlwinm r7,r11,19,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82a43138
	ctx.lr = 0x82A08628;
	sub_82A43138(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a0863c
	if (!ctx.cr6.eq) goto loc_82A0863C;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// stw r19,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r19.u32);
	// b 0x82a08654
	goto loc_82A08654;
loc_82A0863C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x82a0864c
	if (ctx.cr6.gt) goto loc_82A0864C;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// b 0x82a08654
	goto loc_82A08654;
loc_82A0864C:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// or r25,r11,r28
	ctx.r25.u64 = ctx.r11.u64 | ctx.r28.u64;
loc_82A08654:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt cr6,0x82a088e0
	if (ctx.cr6.lt) goto loc_82A088E0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x82a08678
	if (ctx.cr6.eq) goto loc_82A08678;
	// bl 0x82a138c0
	ctx.lr = 0x82A08668;
	sub_82A138C0(ctx, base);
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_82A08678:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt cr6,0x82a088e0
	if (ctx.cr6.lt) goto loc_82A088E0;
	// addi r10,r1,116
	ctx.r10.s64 = ctx.r1.s64 + 116;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// rlwinm r9,r22,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r26,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r26.u32);
	// stw r26,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r26.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// beq cr6,0x82a086ac
	if (ctx.cr6.eq) goto loc_82A086AC;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// b 0x82a086c0
	goto loc_82A086C0;
loc_82A086AC:
	// rlwinm r11,r22,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a086c4
	if (ctx.cr6.eq) goto loc_82A086C4;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// ori r10,r11,256
	ctx.r10.u64 = ctx.r11.u64 | 256;
loc_82A086C0:
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
loc_82A086C4:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82a3e1b0
	ctx.lr = 0x82A086CC;
	sub_82A3E1B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a086ec
	if (ctx.cr6.eq) goto loc_82A086EC;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x82a086e4
	if (ctx.cr6.gt) goto loc_82A086E4;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// b 0x82a086ec
	goto loc_82A086EC;
loc_82A086E4:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// or r25,r11,r28
	ctx.r25.u64 = ctx.r11.u64 | ctx.r28.u64;
loc_82A086EC:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt cr6,0x82a088e0
	if (ctx.cr6.lt) goto loc_82A088E0;
	// lis r4,-21348
	ctx.r4.s64 = -1399062528;
	// li r3,16384
	ctx.r3.s64 = 16384;
	// bl 0x82a3df10
	ctx.lr = 0x82A08700;
	sub_82A3DF10(ctx, base);
	// stw r3,11072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11072, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a08718
	if (!ctx.cr6.eq) goto loc_82A08718;
	// lis r25,-32761
	ctx.r25.s64 = -2147024896;
	// ori r25,r25,14
	ctx.r25.u64 = ctx.r25.u64 | 14;
	// b 0x82a088e0
	goto loc_82A088E0;
loc_82A08718:
	// lis r6,6690
	ctx.r6.s64 = 438435840;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// addi r11,r31,11076
	ctx.r11.s64 = ctx.r31.s64 + 11076;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r6,r6,43608
	ctx.r6.u64 = ctx.r6.u64 | 43608;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,8192
	ctx.r3.s64 = 8192;
	// bl 0x82af4258
	ctx.lr = 0x82A08750;
	sub_82AF4258(ctx, base);
	// addi r3,r31,11076
	ctx.r3.s64 = ctx.r31.s64 + 11076;
	// lwz r4,11072(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11072);
	// bl 0x82af44c8
	ctx.lr = 0x82A0875C;
	sub_82AF44C8(ctx, base);
	// lis r4,-21348
	ctx.r4.s64 = -1399062528;
	// li r3,16384
	ctx.r3.s64 = 16384;
	// bl 0x82a3df10
	ctx.lr = 0x82A08768;
	sub_82A3DF10(ctx, base);
	// stw r3,11128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11128, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a08780
	if (!ctx.cr6.eq) goto loc_82A08780;
	// lis r25,-32761
	ctx.r25.s64 = -2147024896;
	// ori r25,r25,14
	ctx.r25.u64 = ctx.r25.u64 | 14;
	// b 0x82a088e0
	goto loc_82A088E0;
loc_82A08780:
	// lis r6,6690
	ctx.r6.s64 = 438435840;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// addi r11,r31,11132
	ctx.r11.s64 = ctx.r31.s64 + 11132;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r6,r6,43608
	ctx.r6.u64 = ctx.r6.u64 | 43608;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,8192
	ctx.r3.s64 = 8192;
	// bl 0x82af4258
	ctx.lr = 0x82A087B8;
	sub_82AF4258(ctx, base);
	// addi r3,r31,11132
	ctx.r3.s64 = ctx.r31.s64 + 11132;
	// lwz r4,11128(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11128);
	// bl 0x82af44c8
	ctx.lr = 0x82A087C4;
	sub_82AF44C8(ctx, base);
	// lis r4,-21348
	ctx.r4.s64 = -1399062528;
	// li r3,16384
	ctx.r3.s64 = 16384;
	// bl 0x82a3df10
	ctx.lr = 0x82A087D0;
	sub_82A3DF10(ctx, base);
	// stw r3,11184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11184, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a087e8
	if (!ctx.cr6.eq) goto loc_82A087E8;
	// lis r25,-32761
	ctx.r25.s64 = -2147024896;
	// ori r25,r25,14
	ctx.r25.u64 = ctx.r25.u64 | 14;
	// b 0x82a088e0
	goto loc_82A088E0;
loc_82A087E8:
	// addi r11,r31,11188
	ctx.r11.s64 = ctx.r31.s64 + 11188;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// lis r6,6690
	ctx.r6.s64 = 438435840;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r6,r6,88
	ctx.r6.u64 = ctx.r6.u64 | 88;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,8192
	ctx.r3.s64 = 8192;
	// bl 0x82af4258
	ctx.lr = 0x82A08820;
	sub_82AF4258(ctx, base);
	// addi r3,r31,11188
	ctx.r3.s64 = ctx.r31.s64 + 11188;
	// lwz r4,11184(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11184);
	// bl 0x82af44c8
	ctx.lr = 0x82A0882C;
	sub_82AF44C8(ctx, base);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// rlwinm r9,r26,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
loc_82A08838:
	// lwz r8,11184(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11184);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r11,r9,r8
	PPC_STORE_U16(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u16);
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x82a08838
	if (ctx.cr6.lt) goto loc_82A08838;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,11188
	ctx.r3.s64 = ctx.r31.s64 + 11188;
	// bl 0x82a04120
	ctx.lr = 0x82A08868;
	sub_82A04120(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82a13c80
	ctx.lr = 0x82A08870;
	sub_82A13C80(ctx, base);
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq cr6,0x82a088e0
	if (ctx.cr6.eq) goto loc_82A088E0;
	// bl 0x82a06690
	ctx.lr = 0x82A0887C;
	sub_82A06690(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82a088e0
	if (ctx.cr6.lt) goto loc_82A088E0;
	// rlwinm r11,r22,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x1000;
	// li r30,19
	ctx.r30.s64 = 19;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0889c
	if (ctx.cr6.eq) goto loc_82A0889C;
	// li r30,83
	ctx.r30.s64 = 83;
loc_82A0889C:
	// rlwinm r11,r22,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a088ac
	if (ctx.cr6.eq) goto loc_82A088AC;
	// ori r30,r30,256
	ctx.r30.u64 = ctx.r30.u64 | 256;
loc_82A088AC:
	// bl 0x82a3df00
	ctx.lr = 0x82A088B0;
	sub_82A3DF00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82a088bc
	if (ctx.cr6.eq) goto loc_82A088BC;
	// ori r30,r30,128
	ctx.r30.u64 = ctx.r30.u64 | 128;
loc_82A088BC:
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// lwz r5,868(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 868);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a13400
	ctx.lr = 0x82A088CC;
	sub_82A13400(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82a088e0
	if (ctx.cr6.lt) goto loc_82A088E0;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// stw r19,10632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10632, ctx.r19.u32);
loc_82A088E0:
	// bl 0x82a00200
	ctx.lr = 0x82A088E4;
	sub_82A00200(ctx, base);
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// std r26,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r26.u64);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// std r26,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r26.u64);
	// bl 0x83178d74
	ctx.lr = 0x82A088F8;
	__imp__XamGetActiveDashAppInfo(ctx, base);
	// lis r30,-31963
	ctx.r30.s64 = -2094727168;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// lwz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// addi r3,r31,10536
	ctx.r3.s64 = ctx.r31.s64 + 10536;
	// lwz r6,23632(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23632);
	// xor r9,r6,r22
	ctx.r9.u64 = ctx.r6.u64 ^ ctx.r22.u64;
	// and r8,r9,r22
	ctx.r8.u64 = ctx.r9.u64 & ctx.r22.u64;
	// and r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 & ctx.r6.u64;
	// bl 0x82a037b0
	ctx.lr = 0x82A08924;
	sub_82A037B0(ctx, base);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt cr6,0x82a08950
	if (ctx.cr6.lt) goto loc_82A08950;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a05b40
	ctx.lr = 0x82A08934;
	sub_82A05B40(ctx, base);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// stw r22,23632(r30)
	PPC_STORE_U32(ctx.r30.u32 + 23632, ctx.r22.u32);
	// stw r19,29308(r17)
	PPC_STORE_U32(ctx.r17.u32 + 29308, ctx.r19.u32);
	// sync 
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x83179694
	ctx.lr = 0x82A0894C;
	__imp__KeResumeThread(ctx, base);
	// b 0x82a08964
	goto loc_82A08964;
loc_82A08950:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a08960
	if (ctx.cr6.eq) goto loc_82A08960;
	// bl 0x83179694
	ctx.lr = 0x82A08960;
	__imp__KeResumeThread(ctx, base);
loc_82A08960:
	// bl 0x82a03e88
	ctx.lr = 0x82A08964;
	sub_82A03E88(ctx, base);
loc_82A08964:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt cr6,0x82a0899c
	if (ctx.cr6.lt) goto loc_82A0899C;
	// stw r22,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r22.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r18,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r18.u32);
	// li r3,769
	ctx.r3.s64 = 769;
	// bl 0x83178d24
	ctx.lr = 0x82A08980;
	__imp__XamXStudioRequest(ctx, base);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A08988;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,832
	ctx.r1.s64 = ctx.r1.s64 + 832;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
loc_82A08994:
	// lis r25,-32761
	ctx.r25.s64 = -2147024896;
	// ori r25,r25,1247
	ctx.r25.u64 = ctx.r25.u64 | 1247;
loc_82A0899C:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A089A4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,832
	ctx.r1.s64 = ctx.r1.s64 + 832;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A089B0"))) PPC_WEAK_FUNC(sub_82A089B0);
PPC_FUNC_IMPL(__imp__sub_82A089B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x82A089B8;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r3,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x200;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// li r25,2
	ctx.r25.s64 = 2;
	// li r24,2
	ctx.r24.s64 = 2;
	// li r22,2
	ctx.r22.s64 = 2;
	// li r21,2
	ctx.r21.s64 = 2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a089f0
	if (ctx.cr6.eq) goto loc_82A089F0;
loc_82A089E0:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
loc_82A089F0:
	// rlwinm r27,r31,0,18,18
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82a08a08
	if (ctx.cr6.eq) goto loc_82A08A08;
	// bl 0x82c463a0
	ctx.lr = 0x82A08A00;
	sub_82C463A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82a089e0
	if (ctx.cr6.eq) goto loc_82A089E0;
loc_82A08A08:
	// rlwinm r7,r31,0,28,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// addi r30,r11,-26216
	ctx.r30.s64 = ctx.r11.s64 + -26216;
	// addi r26,r10,-26236
	ctx.r26.s64 = ctx.r10.s64 + -26236;
	// addi r28,r9,-26252
	ctx.r28.s64 = ctx.r9.s64 + -26252;
	// addi r29,r8,-26264
	ctx.r29.s64 = ctx.r8.s64 + -26264;
	// bne cr6,0x82a08a4c
	if (!ctx.cr6.eq) goto loc_82A08A4C;
	// clrlwi r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a08a4c
	if (!ctx.cr6.eq) goto loc_82A08A4C;
	// rlwinm r11,r31,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a08ab8
	if (!ctx.cr6.eq) goto loc_82A08AB8;
loc_82A08A4C:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,-26288
	ctx.r5.s64 = ctx.r11.s64 + -26288;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,67
	ctx.r6.s64 = 67;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x83178d94
	ctx.lr = 0x82A08A70;
	__imp__XamContentOpenFile(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a08ab8
	if (ctx.cr6.eq) goto loc_82A08AB8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,-26312
	ctx.r5.s64 = ctx.r11.s64 + -26312;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,67
	ctx.r6.s64 = 67;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x83178d94
	ctx.lr = 0x82A08AA0;
	__imp__XamContentOpenFile(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a08ab8
	if (ctx.cr6.eq) goto loc_82A08AB8;
	// lis r31,-31999
	ctx.r31.s64 = -2097086464;
	// ori r31,r31,13
	ctx.r31.u64 = ctx.r31.u64 | 13;
	// b 0x82a08c40
	goto loc_82A08C40;
loc_82A08AB8:
	// rlwinm r11,r31,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a08b30
	if (!ctx.cr6.eq) goto loc_82A08B30;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,-26340
	ctx.r5.s64 = ctx.r11.s64 + -26340;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,67
	ctx.r6.s64 = 67;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x83178d94
	ctx.lr = 0x82A08AE8;
	__imp__XamContentOpenFile(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a08b30
	if (ctx.cr6.eq) goto loc_82A08B30;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,-26368
	ctx.r5.s64 = ctx.r11.s64 + -26368;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,67
	ctx.r6.s64 = 67;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x83178d94
	ctx.lr = 0x82A08B18;
	__imp__XamContentOpenFile(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a08b30
	if (ctx.cr6.eq) goto loc_82A08B30;
	// lis r31,-31999
	ctx.r31.s64 = -2097086464;
	// ori r31,r31,13
	ctx.r31.u64 = ctx.r31.u64 | 13;
	// b 0x82a08c40
	goto loc_82A08C40;
loc_82A08B30:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82a08ba4
	if (ctx.cr6.eq) goto loc_82A08BA4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r11,-26396
	ctx.r5.s64 = ctx.r11.s64 + -26396;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,67
	ctx.r6.s64 = 67;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x83178d94
	ctx.lr = 0x82A08B5C;
	__imp__XamContentOpenFile(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a08ba4
	if (ctx.cr6.eq) goto loc_82A08BA4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r11,-26424
	ctx.r5.s64 = ctx.r11.s64 + -26424;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,67
	ctx.r6.s64 = 67;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x83178d94
	ctx.lr = 0x82A08B8C;
	__imp__XamContentOpenFile(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a08ba4
	if (ctx.cr6.eq) goto loc_82A08BA4;
	// lis r31,-31999
	ctx.r31.s64 = -2097086464;
	// ori r31,r31,13
	ctx.r31.u64 = ctx.r31.u64 | 13;
	// b 0x82a08c40
	goto loc_82A08C40;
loc_82A08BA4:
	// rlwinm r11,r31,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x8000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a08c1c
	if (ctx.cr6.eq) goto loc_82A08C1C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r5,r11,-26460
	ctx.r5.s64 = ctx.r11.s64 + -26460;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,67
	ctx.r6.s64 = 67;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x83178d94
	ctx.lr = 0x82A08BD4;
	__imp__XamContentOpenFile(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a08c1c
	if (ctx.cr6.eq) goto loc_82A08C1C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r5,r11,-26492
	ctx.r5.s64 = ctx.r11.s64 + -26492;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,67
	ctx.r6.s64 = 67;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x83178d94
	ctx.lr = 0x82A08C04;
	__imp__XamContentOpenFile(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a08c1c
	if (ctx.cr6.eq) goto loc_82A08C1C;
	// lis r31,-31999
	ctx.r31.s64 = -2097086464;
	// ori r31,r31,13
	ctx.r31.u64 = ctx.r31.u64 | 13;
	// b 0x82a08c40
	goto loc_82A08C40;
loc_82A08C1C:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r6,r11,-26508
	ctx.r6.s64 = ctx.r11.s64 + -26508;
	// addi r5,r10,-26524
	ctx.r5.s64 = ctx.r10.s64 + -26524;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a07ff0
	ctx.lr = 0x82A08C3C;
	sub_82A07FF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82A08C40:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82a08c54
	if (!ctx.cr6.eq) goto loc_82A08C54;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83178d84
	ctx.lr = 0x82A08C54;
	__imp__XamContentClose(ctx, base);
loc_82A08C54:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x82a08c68
	if (!ctx.cr6.eq) goto loc_82A08C68;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83178d84
	ctx.lr = 0x82A08C68;
	__imp__XamContentClose(ctx, base);
loc_82A08C68:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x82a08c7c
	if (!ctx.cr6.eq) goto loc_82A08C7C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83178d84
	ctx.lr = 0x82A08C7C;
	__imp__XamContentClose(ctx, base);
loc_82A08C7C:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// bne cr6,0x82a08c90
	if (!ctx.cr6.eq) goto loc_82A08C90;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83178d84
	ctx.lr = 0x82A08C90;
	__imp__XamContentClose(ctx, base);
loc_82A08C90:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A08C9C"))) PPC_WEAK_FUNC(sub_82A08C9C);
PPC_FUNC_IMPL(__imp__sub_82A08C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A08CA0"))) PPC_WEAK_FUNC(sub_82A08CA0);
PPC_FUNC_IMPL(__imp__sub_82A08CA0) {
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
loc_82A08CB4:
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
	// bne 0x82a08cb4
	if (!ctx.cr0.eq) goto loc_82A08CB4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a08cf4
	if (!ctx.cr6.eq) goto loc_82A08CF4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A08CF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A08CF4:
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

__attribute__((alias("__imp__sub_82A08D0C"))) PPC_WEAK_FUNC(sub_82A08D0C);
PPC_FUNC_IMPL(__imp__sub_82A08D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A08D10"))) PPC_WEAK_FUNC(sub_82A08D10);
PPC_FUNC_IMPL(__imp__sub_82A08D10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r11,r11,23656
	ctx.r11.s64 = ctx.r11.s64 + 23656;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// mulli r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 * 48;
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82a14740
	sub_82A14740(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A08D3C"))) PPC_WEAK_FUNC(sub_82A08D3C);
PPC_FUNC_IMPL(__imp__sub_82A08D3C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A08D40"))) PPC_WEAK_FUNC(sub_82A08D40);
PPC_FUNC_IMPL(__imp__sub_82A08D40) {
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
	// bl 0x82a15bf0
	ctx.lr = 0x82A08D60;
	sub_82A15BF0(ctx, base);
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// mulli r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 * 48;
	// addi r10,r10,23656
	ctx.r10.s64 = ctx.r10.s64 + 23656;
	// addi r10,r10,44
	ctx.r10.s64 = ctx.r10.s64 + 44;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a08d94
	if (!ctx.cr6.eq) goto loc_82A08D94;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a15650
	ctx.lr = 0x82A08D90;
	sub_82A15650(ctx, base);
	// b 0x82a08da0
	goto loc_82A08DA0;
loc_82A08D94:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a14708
	ctx.lr = 0x82A08D9C;
	sub_82A14708(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A08DA0:
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

__attribute__((alias("__imp__sub_82A08DB8"))) PPC_WEAK_FUNC(sub_82A08DB8);
PPC_FUNC_IMPL(__imp__sub_82A08DB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// mulli r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 * 48;
	// addi r11,r11,23656
	ctx.r11.s64 = ctx.r11.s64 + 23656;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r11,20
	ctx.r8.s64 = ctx.r11.s64 + 20;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lfs f13,5184(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5184);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f0,r10,r8
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,23392(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 23392);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82a08df4
	if (!ctx.cr6.gt) goto loc_82A08DF4;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// lfs f13,24436(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24436);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
loc_82A08DF4:
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
	// b 0x82a15d20
	sub_82A15D20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A08E14"))) PPC_WEAK_FUNC(sub_82A08E14);
PPC_FUNC_IMPL(__imp__sub_82A08E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A08E18"))) PPC_WEAK_FUNC(sub_82A08E18);
PPC_FUNC_IMPL(__imp__sub_82A08E18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// mulli r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 * 48;
	// addi r11,r11,23656
	ctx.r11.s64 = ctx.r11.s64 + 23656;
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a08e40
	if (!ctx.cr6.eq) goto loc_82A08E40;
	// lis r3,-31999
	ctx.r3.s64 = -2097086464;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// blr 
	return;
loc_82A08E40:
	// b 0x82a15748
	sub_82A15748(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A08E44"))) PPC_WEAK_FUNC(sub_82A08E44);
PPC_FUNC_IMPL(__imp__sub_82A08E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A08E48"))) PPC_WEAK_FUNC(sub_82A08E48);
PPC_FUNC_IMPL(__imp__sub_82A08E48) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82a08e5c
	if (!ctx.cr6.eq) goto loc_82A08E5C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_82A08E5C:
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// mulli r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 * 48;
	// addi r11,r11,23656
	ctx.r11.s64 = ctx.r11.s64 + 23656;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A08E7C"))) PPC_WEAK_FUNC(sub_82A08E7C);
PPC_FUNC_IMPL(__imp__sub_82A08E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A08E80"))) PPC_WEAK_FUNC(sub_82A08E80);
PPC_FUNC_IMPL(__imp__sub_82A08E80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// mulli r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 * 48;
	// addi r11,r11,23656
	ctx.r11.s64 = ctx.r11.s64 + 23656;
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82a14af0
	sub_82A14AF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A08EA0"))) PPC_WEAK_FUNC(sub_82A08EA0);
PPC_FUNC_IMPL(__imp__sub_82A08EA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A08EA4"))) PPC_WEAK_FUNC(sub_82A08EA4);
PPC_FUNC_IMPL(__imp__sub_82A08EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A08EA8"))) PPC_WEAK_FUNC(sub_82A08EA8);
PPC_FUNC_IMPL(__imp__sub_82A08EA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// mulli r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 * 48;
	// addi r11,r11,23656
	ctx.r11.s64 = ctx.r11.s64 + 23656;
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a08ed0
	if (!ctx.cr6.eq) goto loc_82A08ED0;
	// lis r3,-31999
	ctx.r3.s64 = -2097086464;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// blr 
	return;
loc_82A08ED0:
	// b 0x82a153c0
	sub_82A153C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A08ED4"))) PPC_WEAK_FUNC(sub_82A08ED4);
PPC_FUNC_IMPL(__imp__sub_82A08ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A08ED8"))) PPC_WEAK_FUNC(sub_82A08ED8);
PPC_FUNC_IMPL(__imp__sub_82A08ED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A08EE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r10,23656
	ctx.r10.s64 = ctx.r10.s64 + 23656;
	// mulli r8,r3,48
	ctx.r8.s64 = ctx.r3.s64 * 48;
	// addi r10,r10,44
	ctx.r10.s64 = ctx.r10.s64 + 44;
	// lwzx r3,r8,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a08f10
	if (!ctx.cr6.eq) goto loc_82A08F10;
	// lis r3,-31999
	ctx.r3.s64 = -2097086464;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// b 0x82a08f3c
	goto loc_82A08F3C;
loc_82A08F10:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x82a14ae8
	ctx.lr = 0x82A08F3C;
	sub_82A14AE8(ctx, base);
loc_82A08F3C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A08F44"))) PPC_WEAK_FUNC(sub_82A08F44);
PPC_FUNC_IMPL(__imp__sub_82A08F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A08F48"))) PPC_WEAK_FUNC(sub_82A08F48);
PPC_FUNC_IMPL(__imp__sub_82A08F48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// mulli r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 * 48;
	// addi r11,r11,23656
	ctx.r11.s64 = ctx.r11.s64 + 23656;
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a08f70
	if (!ctx.cr6.eq) goto loc_82A08F70;
	// lis r3,-31999
	ctx.r3.s64 = -2097086464;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// blr 
	return;
loc_82A08F70:
	// b 0x82a14580
	sub_82A14580(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A08F74"))) PPC_WEAK_FUNC(sub_82A08F74);
PPC_FUNC_IMPL(__imp__sub_82A08F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A08F78"))) PPC_WEAK_FUNC(sub_82A08F78);
PPC_FUNC_IMPL(__imp__sub_82A08F78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// mulli r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 * 48;
	// addi r11,r11,23656
	ctx.r11.s64 = ctx.r11.s64 + 23656;
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a08fa0
	if (!ctx.cr6.eq) goto loc_82A08FA0;
	// lis r3,-31999
	ctx.r3.s64 = -2097086464;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// blr 
	return;
loc_82A08FA0:
	// b 0x82a14f40
	sub_82A14F40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A08FA4"))) PPC_WEAK_FUNC(sub_82A08FA4);
PPC_FUNC_IMPL(__imp__sub_82A08FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A08FA8"))) PPC_WEAK_FUNC(sub_82A08FA8);
PPC_FUNC_IMPL(__imp__sub_82A08FA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A08FB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r31,r1,128
	ctx.r31.s64 = ctx.r1.s64 + 128;
	// lwz r30,4(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// addi r11,r11,23656
	ctx.r11.s64 = ctx.r11.s64 + 23656;
	// lwz r29,8(r8)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mulli r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 * 48;
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// lfs f0,5184(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a0900c
	if (!ctx.cr6.eq) goto loc_82A0900C;
	// lis r3,-31999
	ctx.r3.s64 = -2097086464;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// b 0x82a0902c
	goto loc_82A0902C;
loc_82A0900C:
	// lbz r11,263(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 263);
	// addi r31,r1,112
	ctx.r31.s64 = ctx.r1.s64 + 112;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stb r11,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r11.u8);
	// bl 0x82a144b8
	ctx.lr = 0x82A0902C;
	sub_82A144B8(ctx, base);
loc_82A0902C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A09034"))) PPC_WEAK_FUNC(sub_82A09034);
PPC_FUNC_IMPL(__imp__sub_82A09034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A09038"))) PPC_WEAK_FUNC(sub_82A09038);
PPC_FUNC_IMPL(__imp__sub_82A09038) {
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
	// mulli r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 * 48;
	// addi r11,r11,23656
	ctx.r11.s64 = ctx.r11.s64 + 23656;
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a0906c
	if (!ctx.cr6.eq) goto loc_82A0906C;
	// lis r3,-31999
	ctx.r3.s64 = -2097086464;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// b 0x82a09074
	goto loc_82A09074;
loc_82A0906C:
	// bl 0x82a149f0
	ctx.lr = 0x82A09070;
	sub_82A149F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A09074:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A09084"))) PPC_WEAK_FUNC(sub_82A09084);
PPC_FUNC_IMPL(__imp__sub_82A09084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A09088"))) PPC_WEAK_FUNC(sub_82A09088);
PPC_FUNC_IMPL(__imp__sub_82A09088) {
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
	// mulli r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 * 48;
	// addi r11,r11,23656
	ctx.r11.s64 = ctx.r11.s64 + 23656;
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a090bc
	if (!ctx.cr6.eq) goto loc_82A090BC;
	// lis r3,-31999
	ctx.r3.s64 = -2097086464;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// b 0x82a090c4
	goto loc_82A090C4;
loc_82A090BC:
	// bl 0x82a14588
	ctx.lr = 0x82A090C0;
	sub_82A14588(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A090C4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A090D4"))) PPC_WEAK_FUNC(sub_82A090D4);
PPC_FUNC_IMPL(__imp__sub_82A090D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A090D8"))) PPC_WEAK_FUNC(sub_82A090D8);
PPC_FUNC_IMPL(__imp__sub_82A090D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// mulli r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 * 48;
	// addi r11,r11,23656
	ctx.r11.s64 = ctx.r11.s64 + 23656;
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a090f8
	if (ctx.cr6.eq) goto loc_82A090F8;
	// b 0x82a14c20
	sub_82A14C20(ctx, base);
	return;
loc_82A090F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A09100"))) PPC_WEAK_FUNC(sub_82A09100);
PPC_FUNC_IMPL(__imp__sub_82A09100) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// mulli r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 * 48;
	// addi r11,r11,23656
	ctx.r11.s64 = ctx.r11.s64 + 23656;
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a09120
	if (ctx.cr6.eq) goto loc_82A09120;
	// b 0x82a14c28
	sub_82A14C28(ctx, base);
	return;
loc_82A09120:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A09128"))) PPC_WEAK_FUNC(sub_82A09128);
PPC_FUNC_IMPL(__imp__sub_82A09128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// mulli r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 * 48;
	// addi r11,r11,23656
	ctx.r11.s64 = ctx.r11.s64 + 23656;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stwx r4,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A09140"))) PPC_WEAK_FUNC(sub_82A09140);
PPC_FUNC_IMPL(__imp__sub_82A09140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// mulli r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 * 48;
	// addi r11,r11,23656
	ctx.r11.s64 = ctx.r11.s64 + 23656;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0915C"))) PPC_WEAK_FUNC(sub_82A0915C);
PPC_FUNC_IMPL(__imp__sub_82A0915C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A09160"))) PPC_WEAK_FUNC(sub_82A09160);
PPC_FUNC_IMPL(__imp__sub_82A09160) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f0,-23728(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23728);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x82a0919c
	if (ctx.cr6.gt) goto loc_82A0919C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f0,-27880(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27880);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82a0919c
	if (ctx.cr6.lt) goto loc_82A0919C;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// mulli r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 * 48;
	// addi r11,r11,23656
	ctx.r11.s64 = ctx.r11.s64 + 23656;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stfsx f1,r10,r11
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// blr 
	return;
loc_82A0919C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A091A8"))) PPC_WEAK_FUNC(sub_82A091A8);
PPC_FUNC_IMPL(__imp__sub_82A091A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// mulli r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 * 48;
	// addi r11,r11,23656
	ctx.r11.s64 = ctx.r11.s64 + 23656;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A091C4"))) PPC_WEAK_FUNC(sub_82A091C4);
PPC_FUNC_IMPL(__imp__sub_82A091C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A091C8"))) PPC_WEAK_FUNC(sub_82A091C8);
PPC_FUNC_IMPL(__imp__sub_82A091C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x82a091f8
	if (ctx.cr6.lt) goto loc_82A091F8;
	// beq cr6,0x82a091f0
	if (ctx.cr6.eq) goto loc_82A091F0;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// blt cr6,0x82a091e8
	if (ctx.cr6.lt) goto loc_82A091E8;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82a091fc
	goto loc_82A091FC;
loc_82A091E8:
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x82a091fc
	goto loc_82A091FC;
loc_82A091F0:
	// li r11,15
	ctx.r11.s64 = 15;
	// b 0x82a091fc
	goto loc_82A091FC;
loc_82A091F8:
	// li r11,30
	ctx.r11.s64 = 30;
loc_82A091FC:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r11,r10,23656
	ctx.r11.s64 = ctx.r10.s64 + 23656;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// mulli r9,r3,48
	ctx.r9.s64 = ctx.r3.s64 * 48;
	// lfs f0,24436(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24436);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfsx f0,r9,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A09234"))) PPC_WEAK_FUNC(sub_82A09234);
PPC_FUNC_IMPL(__imp__sub_82A09234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A09238"))) PPC_WEAK_FUNC(sub_82A09238);
PPC_FUNC_IMPL(__imp__sub_82A09238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82A09240;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31963
	ctx.r31.s64 = -2094727168;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r11,23648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23648);
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a09298
	if (!ctx.cr6.eq) goto loc_82A09298;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-26196
	ctx.r3.s64 = ctx.r11.s64 + -26196;
	// bl 0x82a7f320
	ctx.lr = 0x82A09274;
	sub_82A7F320(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a0928c
	if (ctx.cr0.eq) goto loc_82A0928C;
	// li r4,2271
	ctx.r4.s64 = 2271;
	// bl 0x82a7f398
	ctx.lr = 0x82A09284;
	sub_82A7F398(ctx, base);
	// stw r3,23648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23648, ctx.r3.u32);
	// b 0x82a09290
	goto loc_82A09290;
loc_82A0928C:
	// lwz r3,23648(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23648);
loc_82A09290:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a092bc
	if (ctx.cr6.eq) goto loc_82A092BC;
loc_82A09298:
	// lwz r11,23648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23648);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A092B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82a092c4
	goto loc_82A092C4;
loc_82A092BC:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
loc_82A092C4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A092CC"))) PPC_WEAK_FUNC(sub_82A092CC);
PPC_FUNC_IMPL(__imp__sub_82A092CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A092D0"))) PPC_WEAK_FUNC(sub_82A092D0);
PPC_FUNC_IMPL(__imp__sub_82A092D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,60
	ctx.r9.s64 = 60;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f11,-26200(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -26200);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,24436(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24436);
	ctx.f10.f64 = double(temp.f32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f12,-27880(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -27880);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,-26204(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26204);
	ctx.f9.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f13,-23728(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -23728);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5184(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
loc_82A09318:
	// li r9,5
	ctx.r9.s64 = 5;
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// stfs f12,16(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// stfs f11,20(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// stfs f10,24(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f9,36(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stwu r10,48(r11)
	ea = 48 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a09318
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A09318;
	// stw r10,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A09358"))) PPC_WEAK_FUNC(sub_82A09358);
PPC_FUNC_IMPL(__imp__sub_82A09358) {
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
	// bl 0x82a08db8
	ctx.lr = 0x82A09374;
	sub_82A08DB8(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// mulli r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 * 48;
	// addi r11,r11,23656
	ctx.r11.s64 = ctx.r11.s64 + 23656;
	// addi r30,r11,44
	ctx.r30.s64 = ctx.r11.s64 + 44;
	// lwzx r3,r31,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0939c
	if (ctx.cr6.eq) goto loc_82A0939C;
	// bl 0x82a08ca0
	ctx.lr = 0x82A09394;
	sub_82A08CA0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
loc_82A0939C:
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

__attribute__((alias("__imp__sub_82A093B4"))) PPC_WEAK_FUNC(sub_82A093B4);
PPC_FUNC_IMPL(__imp__sub_82A093B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A093B8"))) PPC_WEAK_FUNC(sub_82A093B8);
PPC_FUNC_IMPL(__imp__sub_82A093B8) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a09430
	if (ctx.cr6.eq) goto loc_82A09430;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a093e8
	if (ctx.cr6.eq) goto loc_82A093E8;
	// bl 0x83179424
	ctx.lr = 0x82A093E8;
	__imp__ObDereferenceObject(ctx, base);
loc_82A093E8:
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a09404
	if (ctx.cr6.eq) goto loc_82A09404;
	// lis r4,-29506
	ctx.r4.s64 = -1933705216;
	// bl 0x82691460
	ctx.lr = 0x82A09404;
	sub_82691460(ctx, base);
loc_82A09404:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0941c
	if (ctx.cr6.eq) goto loc_82A0941C;
	// lis r4,8348
	ctx.r4.s64 = 547094528;
	// bl 0x82691460
	ctx.lr = 0x82A09418;
	sub_82691460(ctx, base);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
loc_82A0941C:
	// li r5,124
	ctx.r5.s64 = 124;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A0942C;
	sub_82FA7CF0(ctx, base);
	// sync 
loc_82A09430:
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

__attribute__((alias("__imp__sub_82A09448"))) PPC_WEAK_FUNC(sub_82A09448);
PPC_FUNC_IMPL(__imp__sub_82A09448) {
	PPC_FUNC_PROLOGUE();
	// lwz r7,24(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82a09484
	if (ctx.cr6.eq) goto loc_82A09484;
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r11,0
	ctx.r11.s64 = 0;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_82A09464:
	// lwz r8,108(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 108);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x82a0948c
	if (ctx.cr6.eq) goto loc_82A0948C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,120
	ctx.r11.s64 = ctx.r11.s64 + 120;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// blt cr6,0x82a09464
	if (ctx.cr6.lt) goto loc_82A09464;
loc_82A09484:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A0948C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A09494"))) PPC_WEAK_FUNC(sub_82A09494);
PPC_FUNC_IMPL(__imp__sub_82A09494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A09498"))) PPC_WEAK_FUNC(sub_82A09498);
PPC_FUNC_IMPL(__imp__sub_82A09498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82A094A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r27,r11,-12452
	ctx.r27.s64 = ctx.r11.s64 + -12452;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A094B4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// li r28,6
	ctx.r28.s64 = 6;
	// addi r11,r11,29312
	ctx.r11.s64 = ctx.r11.s64 + 29312;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r11,10600
	ctx.r30.s64 = ctx.r11.s64 + 10600;
loc_82A094C8:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a09530
	if (ctx.cr6.eq) goto loc_82A09530;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a09518
	if (ctx.cr6.eq) goto loc_82A09518;
	// stw r29,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r29.u32);
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x82a04180
	ctx.lr = 0x82A094EC;
	sub_82A04180(ctx, base);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r31,36
	ctx.r11.s64 = ctx.r31.s64 + 36;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// lwz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r6,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r6.u32);
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
loc_82A09518:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831793b4
	ctx.lr = 0x82A09520;
	__imp__KeResetEvent(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a09530
	if (ctx.cr6.eq) goto loc_82A09530;
	// bl 0x831793b4
	ctx.lr = 0x82A09530;
	__imp__KeResetEvent(ctx, base);
loc_82A09530:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82a094c8
	if (!ctx.cr0.eq) goto loc_82A094C8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A09544;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0954C"))) PPC_WEAK_FUNC(sub_82A0954C);
PPC_FUNC_IMPL(__imp__sub_82A0954C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A09550"))) PPC_WEAK_FUNC(sub_82A09550);
PPC_FUNC_IMPL(__imp__sub_82A09550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A09558;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,-12452
	ctx.r30.s64 = ctx.r11.s64 + -12452;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A09574;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,29312
	ctx.r11.s64 = ctx.r11.s64 + 29312;
	// addi r9,r11,10600
	ctx.r9.s64 = ctx.r11.s64 + 10600;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a095d4
	if (ctx.cr6.eq) goto loc_82A095D4;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82a095d4
	if (!ctx.cr6.eq) goto loc_82A095D4;
	// lwz r31,36(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// addi r10,r11,36
	ctx.r10.s64 = ctx.r11.s64 + 36;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82a095c0
	if (ctx.cr6.eq) goto loc_82A095C0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// b 0x82a095cc
	goto loc_82A095CC;
loc_82A095C0:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r31,32(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
loc_82A095CC:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
loc_82A095D4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A095DC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A095E8"))) PPC_WEAK_FUNC(sub_82A095E8);
PPC_FUNC_IMPL(__imp__sub_82A095E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A095F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r11,-12452
	ctx.r29.s64 = ctx.r11.s64 + -12452;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A0960C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,29312
	ctx.r11.s64 = ctx.r11.s64 + 29312;
	// addi r9,r11,10600
	ctx.r9.s64 = ctx.r11.s64 + 10600;
	// lwzx r30,r10,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a09650
	if (ctx.cr6.eq) goto loc_82A09650;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// bl 0x82a04180
	ctx.lr = 0x82A09638;
	sub_82A04180(ctx, base);
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// addi r11,r30,36
	ctx.r11.s64 = ctx.r30.s64 + 36;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// stw r31,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r31.u32);
loc_82A09650:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A09658;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A09660"))) PPC_WEAK_FUNC(sub_82A09660);
PPC_FUNC_IMPL(__imp__sub_82A09660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A09668;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-12452
	ctx.r30.s64 = ctx.r11.s64 + -12452;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A09684;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,29312
	ctx.r11.s64 = ctx.r11.s64 + 29312;
	// addi r9,r11,10600
	ctx.r9.s64 = ctx.r11.s64 + 10600;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82a096ac
	if (ctx.cr6.eq) goto loc_82A096AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a09550
	ctx.lr = 0x82A096A8;
	sub_82A09550(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82A096AC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A096B4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A096C0"))) PPC_WEAK_FUNC(sub_82A096C0);
PPC_FUNC_IMPL(__imp__sub_82A096C0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-12452
	ctx.r30.s64 = ctx.r11.s64 + -12452;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A096E8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,29312
	ctx.r11.s64 = ctx.r11.s64 + 29312;
	// addi r9,r11,10600
	ctx.r9.s64 = ctx.r11.s64 + 10600;
	// lwzx r31,r10,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a0973c
	if (ctx.cr6.eq) goto loc_82A0973C;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r10,r11,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a0973c
	if (!ctx.cr6.eq) goto loc_82A0973C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831792b4
	ctx.lr = 0x82A09724;
	__imp__KeSetEvent(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0973c
	if (ctx.cr6.eq) goto loc_82A0973C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831792b4
	ctx.lr = 0x82A0973C;
	__imp__KeSetEvent(ctx, base);
loc_82A0973C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A09744;
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

__attribute__((alias("__imp__sub_82A0975C"))) PPC_WEAK_FUNC(sub_82A0975C);
PPC_FUNC_IMPL(__imp__sub_82A0975C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A09760"))) PPC_WEAK_FUNC(sub_82A09760);
PPC_FUNC_IMPL(__imp__sub_82A09760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A09768;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r28,r11,-12452
	ctx.r28.s64 = ctx.r11.s64 + -12452;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A0977C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r29,r11,29312
	ctx.r29.s64 = ctx.r11.s64 + 29312;
	// addi r30,r29,10600
	ctx.r30.s64 = ctx.r29.s64 + 10600;
loc_82A09788:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a097cc
	if (ctx.cr6.eq) goto loc_82A097CC;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r10,r11,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a097cc
	if (!ctx.cr6.eq) goto loc_82A097CC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831792b4
	ctx.lr = 0x82A097B4;
	__imp__KeSetEvent(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a097cc
	if (ctx.cr6.eq) goto loc_82A097CC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831792b4
	ctx.lr = 0x82A097CC;
	__imp__KeSetEvent(ctx, base);
loc_82A097CC:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r11,r29,10624
	ctx.r11.s64 = ctx.r29.s64 + 10624;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82a09788
	if (ctx.cr6.lt) goto loc_82A09788;
	// lwz r11,10628(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10628);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a09800
	if (!ctx.cr6.eq) goto loc_82A09800;
	// lwz r3,10624(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10624);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a09800
	if (ctx.cr6.eq) goto loc_82A09800;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831792b4
	ctx.lr = 0x82A09800;
	__imp__KeSetEvent(ctx, base);
loc_82A09800:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A09808;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A09810"))) PPC_WEAK_FUNC(sub_82A09810);
PPC_FUNC_IMPL(__imp__sub_82A09810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A09818;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r28,r11,-12452
	ctx.r28.s64 = ctx.r11.s64 + -12452;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A0982C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r29,r11,29312
	ctx.r29.s64 = ctx.r11.s64 + 29312;
	// addi r30,r29,10600
	ctx.r30.s64 = ctx.r29.s64 + 10600;
loc_82A09838:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a09888
	if (ctx.cr6.eq) goto loc_82A09888;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a09888
	if (!ctx.cr6.eq) goto loc_82A09888;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r10,r11,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a09888
	if (!ctx.cr6.eq) goto loc_82A09888;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831792b4
	ctx.lr = 0x82A09870;
	__imp__KeSetEvent(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a09888
	if (ctx.cr6.eq) goto loc_82A09888;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831792b4
	ctx.lr = 0x82A09888;
	__imp__KeSetEvent(ctx, base);
loc_82A09888:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r11,r29,10624
	ctx.r11.s64 = ctx.r29.s64 + 10624;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82a09838
	if (ctx.cr6.lt) goto loc_82A09838;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A098A0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A098A8"))) PPC_WEAK_FUNC(sub_82A098A8);
PPC_FUNC_IMPL(__imp__sub_82A098A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A098B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r28,r11,-12452
	ctx.r28.s64 = ctx.r11.s64 + -12452;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A098C4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r29,r11,29312
	ctx.r29.s64 = ctx.r11.s64 + 29312;
	// addi r30,r29,10600
	ctx.r30.s64 = ctx.r29.s64 + 10600;
loc_82A098D0:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a09904
	if (ctx.cr6.eq) goto loc_82A09904;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831792b4
	ctx.lr = 0x82A098EC;
	__imp__KeSetEvent(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a09904
	if (ctx.cr6.eq) goto loc_82A09904;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831792b4
	ctx.lr = 0x82A09904;
	__imp__KeSetEvent(ctx, base);
loc_82A09904:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r11,r29,10624
	ctx.r11.s64 = ctx.r29.s64 + 10624;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82a098d0
	if (ctx.cr6.lt) goto loc_82A098D0;
	// lwz r3,10624(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10624);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0992c
	if (ctx.cr6.eq) goto loc_82A0992C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831792b4
	ctx.lr = 0x82A0992C;
	__imp__KeSetEvent(ctx, base);
loc_82A0992C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A09934;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0993C"))) PPC_WEAK_FUNC(sub_82A0993C);
PPC_FUNC_IMPL(__imp__sub_82A0993C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A09940"))) PPC_WEAK_FUNC(sub_82A09940);
PPC_FUNC_IMPL(__imp__sub_82A09940) {
	PPC_FUNC_PROLOGUE();
	// lis r4,8348
	ctx.r4.s64 = 547094528;
	// b 0x82691410
	sub_82691410(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A09948"))) PPC_WEAK_FUNC(sub_82A09948);
PPC_FUNC_IMPL(__imp__sub_82A09948) {
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
	// bl 0x83179244
	ctx.lr = 0x82A09960;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82a09974
	if (!ctx.cr6.eq) goto loc_82A09974;
	// lis r4,8348
	ctx.r4.s64 = 547094528;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691460
	ctx.lr = 0x82A09974;
	sub_82691460(ctx, base);
loc_82A09974:
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

__attribute__((alias("__imp__sub_82A09988"))) PPC_WEAK_FUNC(sub_82A09988);
PPC_FUNC_IMPL(__imp__sub_82A09988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x82A09990;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a099e4
	if (!ctx.cr6.eq) goto loc_82A099E4;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a099d8
	if (!ctx.cr6.eq) goto loc_82A099D8;
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
loc_82A099D8:
	// ori r3,r3,1167
	ctx.r3.u64 = ctx.r3.u64 | 1167;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
loc_82A099E4:
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r29,r6,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// subfic r30,r11,639
	ctx.xer.ca = ctx.r11.u32 <= 639;
	ctx.r30.s64 = 639 - ctx.r11.s64;
	// extsh r23,r29
	ctx.r23.s64 = ctx.r29.s16;
	// extsh r22,r30
	ctx.r22.s64 = ctx.r30.s16;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r31,10992
	ctx.r3.s64 = ctx.r31.s64 + 10992;
	// bl 0x82a01ea8
	ctx.lr = 0x82A09A08;
	sub_82A01EA8(ctx, base);
	// lwz r11,11072(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11072);
	// rlwinm r10,r27,30,18,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 30) & 0x3FFE;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// addi r3,r31,11032
	ctx.r3.s64 = ctx.r31.s64 + 11032;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lhzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// srawi r6,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 4;
	// subfic r11,r6,639
	ctx.xer.ca = ctx.r6.u32 <= 639;
	ctx.r11.s64 = 639 - ctx.r6.s64;
	// subf r10,r30,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r30.s64;
	// subf r31,r9,r10
	ctx.r31.s64 = ctx.r10.s64 - ctx.r9.s64;
	// bl 0x82a01ea8
	ctx.lr = 0x82A09A44;
	sub_82A01EA8(ctx, base);
	// fctiwz f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// beq cr6,0x82a09a88
	if (ctx.cr6.eq) goto loc_82A09A88;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82a09a88
	if (!ctx.cr6.eq) goto loc_82A09A88;
	// addi r10,r31,-160
	ctx.r10.s64 = ctx.r31.s64 + -160;
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r8,r11,-120
	ctx.r8.s64 = ctx.r11.s64 + -120;
	// lwz r7,8(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r31,r9,r6
	ctx.r31.s64 = ctx.r6.s64 - ctx.r9.s64;
	// subf r11,r7,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r7.s64;
loc_82A09A88:
	// stw r31,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r31.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A09A9C"))) PPC_WEAK_FUNC(sub_82A09A9C);
PPC_FUNC_IMPL(__imp__sub_82A09A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A09AA0"))) PPC_WEAK_FUNC(sub_82A09AA0);
PPC_FUNC_IMPL(__imp__sub_82A09AA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82A09AA8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a09acc
	if (!ctx.cr6.eq) goto loc_82A09ACC;
loc_82A09ABC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_82A09ACC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82a09abc
	if (ctx.cr6.eq) goto loc_82A09ABC;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r11,-12492
	ctx.r4.s64 = ctx.r11.s64 + -12492;
	// bl 0x83179404
	ctx.lr = 0x82A09AF0;
	__imp__ObReferenceObjectByHandle(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82a09b14
	if (!ctx.cr6.lt) goto loc_82A09B14;
	// bl 0x831795c4
	ctx.lr = 0x82A09AFC;
	__imp__RtlNtStatusToDosError(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82a09dc0
	if (!ctx.cr6.gt) goto loc_82A09DC0;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r11,32775
	ctx.r3.u64 = ctx.r11.u64 | 2147942400;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_82A09B14:
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// lis r9,-31999
	ctx.r9.s64 = -2097086464;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// lis r8,-32768
	ctx.r8.s64 = -2147483648;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// ori r26,r9,4
	ctx.r26.u64 = ctx.r9.u64 | 4;
	// ori r25,r8,10
	ctx.r25.u64 = ctx.r8.u64 | 10;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// addi r27,r10,-12452
	ctx.r27.s64 = ctx.r10.s64 + -12452;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a09d6c
	if (ctx.cr6.eq) goto loc_82A09D6C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r9,r10,0,15,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a09b88
	if (ctx.cr6.eq) goto loc_82A09B88;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x82a09b68
	if (ctx.cr6.eq) goto loc_82A09B68;
	// cmplwi cr6,r30,8000
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 8000, ctx.xer);
	// ble cr6,0x82a09b88
	if (!ctx.cr6.gt) goto loc_82A09B88;
loc_82A09B68:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a09b84
	if (ctx.cr6.eq) goto loc_82A09B84;
	// lis r30,0
	ctx.r30.s64 = 0;
	// ori r30,r30,60000
	ctx.r30.u64 = ctx.r30.u64 | 60000;
	// b 0x82a09b88
	goto loc_82A09B88;
loc_82A09B84:
	// li r30,8000
	ctx.r30.s64 = 8000;
loc_82A09B88:
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x82a09ba4
	if (ctx.cr6.eq) goto loc_82A09BA4;
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// mulli r10,r11,-10000
	ctx.r10.s64 = ctx.r11.s64 * -10000;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
loc_82A09BA4:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x83179414
	ctx.lr = 0x82A09BB4;
	__imp__KeWaitForSingleObject(ctx, base);
	// cmpwi cr6,r3,258
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 258, ctx.xer);
	// beq cr6,0x82a09d64
	if (ctx.cr6.eq) goto loc_82A09D64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A09BC4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,120(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a09be8
	if (!ctx.cr6.eq) goto loc_82A09BE8;
	// lis r29,-31999
	ctx.r29.s64 = -2097086464;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ori r29,r29,11
	ctx.r29.u64 = ctx.r29.u64 | 11;
	// bl 0x831791b4
	ctx.lr = 0x82A09BE4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x82a09d74
	goto loc_82A09D74;
loc_82A09BE8:
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a09d0c
	if (ctx.cr6.eq) goto loc_82A09D0C;
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82a09c18
	if (!ctx.cr6.eq) goto loc_82A09C18;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A09C14;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x82a09d74
	goto loc_82A09D74;
loc_82A09C18:
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r29,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r29.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// addi r10,r31,10600
	ctx.r10.s64 = ctx.r31.s64 + 10600;
	// stw r8,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r8.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82A09C34:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82a09c54
	if (ctx.cr6.eq) goto loc_82A09C54;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r7,r31,10624
	ctx.r7.s64 = ctx.r31.s64 + 10624;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82a09c34
	if (ctx.cr6.lt) goto loc_82A09C34;
loc_82A09C54:
	// mftb r10
	ctx.r10.u64 = __rdtsc();
	// lwz r8,112(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// rotlwi r7,r10,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r6,15
	ctx.r6.s64 = 983040;
	// subf r5,r8,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r8.s64;
	// ori r4,r6,16960
	ctx.r4.u64 = ctx.r6.u64 | 16960;
	// clrldi r10,r5,32
	ctx.r10.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// lis r3,762
	ctx.r3.s64 = 49938432;
	// mulld r7,r10,r4
	ctx.r7.s64 = ctx.r10.s64 * ctx.r4.s64;
	// ori r8,r3,61568
	ctx.r8.u64 = ctx.r3.u64 | 61568;
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// divd r6,r7,r8
	ctx.r6.s64 = ctx.r7.s64 / ctx.r8.s64;
	// rotlwi r10,r6,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// bgt cr6,0x82a09cc8
	if (ctx.cr6.gt) goto loc_82A09CC8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82a09cbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82A09CBC;
	// bdzf 4*cr6+eq,0x82a09cac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82A09CAC;
	// bdzf 4*cr6+eq,0x82a09cc4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82A09CC4;
	// bne cr6,0x82a09cb4
	if (!ctx.cr6.eq) goto loc_82A09CB4;
	// stw r10,12188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12188, ctx.r10.u32);
	// b 0x82a09cc8
	goto loc_82A09CC8;
loc_82A09CAC:
	// stw r10,12184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12184, ctx.r10.u32);
	// b 0x82a09cc8
	goto loc_82A09CC8;
loc_82A09CB4:
	// stw r10,12192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12192, ctx.r10.u32);
	// b 0x82a09cc8
	goto loc_82A09CC8;
loc_82A09CBC:
	// stw r10,12200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12200, ctx.r10.u32);
	// b 0x82a09cc8
	goto loc_82A09CC8;
loc_82A09CC4:
	// stw r10,12196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12196, ctx.r10.u32);
loc_82A09CC8:
	// stw r29,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r29.u32);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r8,48(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stw r7,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r7.u32);
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// bl 0x831791b4
	ctx.lr = 0x82A09D08;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x82a09d74
	goto loc_82A09D74;
loc_82A09D0C:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a09d2c
	if (!ctx.cr6.eq) goto loc_82A09D2C;
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ori r29,r29,1167
	ctx.r29.u64 = ctx.r29.u64 | 1167;
	// bl 0x831791b4
	ctx.lr = 0x82A09D28;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x82a09d74
	goto loc_82A09D74;
loc_82A09D2C:
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// rlwinm r10,r11,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a09d50
	if (ctx.cr6.eq) goto loc_82A09D50;
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ori r29,r29,1167
	ctx.r29.u64 = ctx.r29.u64 | 1167;
	// bl 0x831791b4
	ctx.lr = 0x82A09D4C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x82a09d74
	goto loc_82A09D74;
loc_82A09D50:
	// lis r29,-31999
	ctx.r29.s64 = -2097086464;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ori r29,r29,1
	ctx.r29.u64 = ctx.r29.u64 | 1;
	// bl 0x831791b4
	ctx.lr = 0x82A09D60;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x82a09d74
	goto loc_82A09D74;
loc_82A09D64:
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// b 0x82a09d74
	goto loc_82A09D74;
loc_82A09D6C:
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,1167
	ctx.r29.u64 = ctx.r29.u64 | 1167;
loc_82A09D74:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A09D7C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// cmpw cr6,r29,r26
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r26.s32, ctx.xer);
	// beq cr6,0x82a09dac
	if (ctx.cr6.eq) goto loc_82A09DAC;
	// cmpw cr6,r29,r25
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r25.s32, ctx.xer);
	// beq cr6,0x82a09dac
	if (ctx.cr6.eq) goto loc_82A09DAC;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x831793b4
	ctx.lr = 0x82A09D94;
	__imp__KeResetEvent(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a09dac
	if (ctx.cr6.eq) goto loc_82A09DAC;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x831793b4
	ctx.lr = 0x82A09DAC;
	__imp__KeResetEvent(ctx, base);
loc_82A09DAC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A09DB4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83179424
	ctx.lr = 0x82A09DBC;
	__imp__ObDereferenceObject(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82A09DC0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A09DC8"))) PPC_WEAK_FUNC(sub_82A09DC8);
PPC_FUNC_IMPL(__imp__sub_82A09DC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A09DD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a09df0
	if (!ctx.cr6.eq) goto loc_82A09DF0;
loc_82A09DE0:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_82A09DF0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a09de0
	if (ctx.cr6.eq) goto loc_82A09DE0;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-12492
	ctx.r4.s64 = ctx.r11.s64 + -12492;
	// bl 0x83179404
	ctx.lr = 0x82A09E10;
	__imp__ObReferenceObjectByHandle(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82a09e34
	if (!ctx.cr6.lt) goto loc_82A09E34;
	// bl 0x831795c4
	ctx.lr = 0x82A09E1C;
	__imp__RtlNtStatusToDosError(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82a09f0c
	if (!ctx.cr6.gt) goto loc_82A09F0C;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r11,32775
	ctx.r3.u64 = ctx.r11.u64 | 2147942400;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_82A09E34:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r31,-8
	ctx.r31.s64 = ctx.r31.s64 + -8;
	// li r11,120
	ctx.r11.s64 = 120;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// subf r8,r10,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r10.s64;
	// divw r7,r8,r11
	ctx.r7.s32 = ctx.r8.s32 / ctx.r11.s32;
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82a09efc
	if (!ctx.cr6.lt) goto loc_82A09EFC;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r29,r11,-12452
	ctx.r29.s64 = ctx.r11.s64 + -12452;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A09E68;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a09ed8
	if (!ctx.cr6.eq) goto loc_82A09ED8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// bl 0x82a04180
	ctx.lr = 0x82A09E90;
	sub_82A04180(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r31,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r31.u32);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// stw r8,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r8.u32);
	// bl 0x831791b4
	ctx.lr = 0x82A09EC4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83179424
	ctx.lr = 0x82A09ECC;
	__imp__ObDereferenceObject(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_82A09ED8:
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r30,r30,87
	ctx.r30.u64 = ctx.r30.u64 | 87;
	// bl 0x831791b4
	ctx.lr = 0x82A09EE8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83179424
	ctx.lr = 0x82A09EF0;
	__imp__ObDereferenceObject(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_82A09EFC:
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,87
	ctx.r30.u64 = ctx.r30.u64 | 87;
	// bl 0x83179424
	ctx.lr = 0x82A09F08;
	__imp__ObDereferenceObject(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82A09F0C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A09F14"))) PPC_WEAK_FUNC(sub_82A09F14);
PPC_FUNC_IMPL(__imp__sub_82A09F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A09F18"))) PPC_WEAK_FUNC(sub_82A09F18);
PPC_FUNC_IMPL(__imp__sub_82A09F18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x82A09F20;
	__savegprlr_21(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mulli r10,r4,28
	ctx.r10.s64 = ctx.r4.s64 * 28;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r11,r11,-25576
	ctx.r11.s64 = ctx.r11.s64 + -25576;
	// li r5,124
	ctx.r5.s64 = 124;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A09F5C;
	sub_82FA7CF0(ctx, base);
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// lis r4,8348
	ctx.r4.s64 = 547094528;
	// mulli r3,r28,120
	ctx.r3.s64 = ctx.r28.s64 * 120;
	// bl 0x82691410
	ctx.lr = 0x82A09F6C;
	sub_82691410(ctx, base);
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// beq cr6,0x82a09f84
	if (ctx.cr6.eq) goto loc_82A09F84;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// mr r22,r27
	ctx.r22.u64 = ctx.r27.u64;
	// bne cr6,0x82a09f88
	if (!ctx.cr6.eq) goto loc_82A09F88;
loc_82A09F84:
	// li r22,1
	ctx.r22.s64 = 1;
loc_82A09F88:
	// addic r11,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r11.s64 = ctx.r22.s64 + -1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// subfe r11,r11,r22
	temp.u8 = (~ctx.r11.u32 + ctx.r22.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r22.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r22.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bne cr6,0x82a09fac
	if (!ctx.cr6.eq) goto loc_82A09FAC;
loc_82A09F9C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
loc_82A09FAC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r4,-29506
	ctx.r4.s64 = -1933705216;
	// mullw r3,r28,r11
	ctx.r3.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r11.s32);
	// bl 0x82a013e0
	ctx.lr = 0x82A09FBC;
	sub_82A013E0(ctx, base);
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a09f9c
	if (ctx.cr6.eq) goto loc_82A09F9C;
	// li r25,-1
	ctx.r25.s64 = -1;
	// lwz r8,16(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r30,r31,64
	ctx.r30.s64 = ctx.r31.s64 + 64;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x82af4398
	ctx.lr = 0x82A0A00C;
	sub_82AF4398(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x82af44c8
	ctx.lr = 0x82A0A018;
	sub_82AF44C8(ctx, base);
	// addi r26,r31,36
	ctx.r26.s64 = ctx.r31.s64 + 36;
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// stw r26,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r26.u32);
	// stw r26,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r26.u32);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r27,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r27.u32);
	// ble cr6,0x82a0a15c
	if (!ctx.cr6.gt) goto loc_82A0A15C;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_82A0A048:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r24,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r24.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r7,r30,r11
	ctx.r7.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r23,24(r7)
	PPC_STORE_U32(ctx.r7.u32 + 24, ctx.r23.u32);
	// lwz r7,60(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mullw r11,r28,r4
	ctx.r11.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r4.s32);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r7,12(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// divwu r11,r3,r7
	ctx.r11.u32 = ctx.r3.u32 / ctx.r7.u32;
	// twllei r7,0
	if (ctx.r7.u32 <= 0) __builtin_debugtrap();
	// mullw r7,r11,r28
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// stw r7,104(r4)
	PPC_STORE_U32(ctx.r4.u32 + 104, ctx.r7.u32);
	// lwz r7,20(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82af41e0
	ctx.lr = 0x82A0A0E0;
	sub_82AF41E0(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// lwz r4,100(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// bl 0x82af44c8
	ctx.lr = 0x82A0A0F4;
	sub_82AF44C8(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r27,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r27.u32);
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x82a04180
	ctx.lr = 0x82A0A118;
	sub_82A04180(ctx, base);
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stwx r9,r30,r8
	PPC_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r9.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r7,r30,r11
	ctx.r7.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r26,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r26.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r6,r30,r11
	ctx.r6.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r6,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r6.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r5,r30,r11
	ctx.r5.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r5,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r5.u32);
	// addi r30,r30,120
	ctx.r30.s64 = ctx.r30.s64 + 120;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplw cr6,r28,r4
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82a0a048
	if (ctx.cr6.lt) goto loc_82A0A048;
loc_82A0A15C:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x82a0a180
	if (ctx.cr6.eq) goto loc_82A0A180;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,12(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mullw r8,r10,r11
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// divwu r7,r8,r9
	ctx.r7.u32 = ctx.r8.u32 / ctx.r9.u32;
	// twllei r9,0
	if (ctx.r9.u32 <= 0) __builtin_debugtrap();
	// stw r7,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r7.u32);
loc_82A0A180:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r21,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r21.u32);
	// sync 
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0A1AC"))) PPC_WEAK_FUNC(sub_82A0A1AC);
PPC_FUNC_IMPL(__imp__sub_82A0A1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0A1B0"))) PPC_WEAK_FUNC(sub_82A0A1B0);
PPC_FUNC_IMPL(__imp__sub_82A0A1B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82A0A1B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// bl 0x82a09448
	ctx.lr = 0x82A0A1CC;
	sub_82A09448(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82a041c8
	ctx.lr = 0x82A0A1D8;
	sub_82A041C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82a0a1e8
	if (!ctx.cr6.eq) goto loc_82A0A1E8;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82a0a27c
	if (ctx.cr6.eq) goto loc_82A0A27C;
loc_82A0A1E8:
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r29,r11,-12452
	ctx.r29.s64 = ctx.r11.s64 + -12452;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A0A1F8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x82677460
	ctx.lr = 0x82A0A208;
	sub_82677460(ctx, base);
loc_82A0A208:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A0A210;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a09448
	ctx.lr = 0x82A0A218;
	sub_82A09448(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r31,12272
	ctx.r3.s64 = ctx.r31.s64 + 12272;
	// bl 0x83179274
	ctx.lr = 0x82A0A224;
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r11,12264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12264);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a0a244
	if (!ctx.cr6.eq) goto loc_82A0A244;
	// lwz r11,12268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12268);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0a248
	if (ctx.cr6.eq) goto loc_82A0A248;
loc_82A0A244:
	// li r30,1
	ctx.r30.s64 = 1;
loc_82A0A248:
	// addi r3,r31,12272
	ctx.r3.s64 = ctx.r31.s64 + 12272;
	// bl 0x83179294
	ctx.lr = 0x82A0A250;
	__imp__KfReleaseSpinLock(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82a0a260
	if (!ctx.cr6.eq) goto loc_82A0A260;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82a0a27c
	if (ctx.cr6.eq) goto loc_82A0A27C;
loc_82A0A260:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A0A268;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x831792b4
	ctx.lr = 0x82A0A278;
	__imp__KeSetEvent(ctx, base);
	// b 0x82a0a208
	goto loc_82A0A208;
loc_82A0A27C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0A284"))) PPC_WEAK_FUNC(sub_82A0A284);
PPC_FUNC_IMPL(__imp__sub_82A0A284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0A288"))) PPC_WEAK_FUNC(sub_82A0A288);
PPC_FUNC_IMPL(__imp__sub_82A0A288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82A0A290;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r27,r11,-12452
	ctx.r27.s64 = ctx.r11.s64 + -12452;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A0A2AC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r11,29312
	ctx.r28.s64 = ctx.r11.s64 + 29312;
	// addi r9,r28,10600
	ctx.r9.s64 = ctx.r28.s64 + 10600;
	// lwzx r31,r10,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a0a38c
	if (ctx.cr6.eq) goto loc_82A0A38C;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0a310
	if (ctx.cr6.eq) goto loc_82A0A310;
	// stw r29,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r29.u32);
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x82a04180
	ctx.lr = 0x82A0A2E4;
	sub_82A04180(ctx, base);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r31,36
	ctx.r11.s64 = ctx.r31.s64 + 36;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// lwz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r6,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r6.u32);
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
loc_82A0A310:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a0a368
	if (!ctx.cr6.eq) goto loc_82A0A368;
	// lwz r11,132(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 132);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r10,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r10.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// bl 0x831792b4
	ctx.lr = 0x82A0A340;
	__imp__KeSetEvent(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0a38c
	if (ctx.cr6.eq) goto loc_82A0A38C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831792b4
	ctx.lr = 0x82A0A358;
	__imp__KeSetEvent(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A0A360;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_82A0A368:
	// stw r29,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r29.u32);
	// addi r3,r30,48
	ctx.r3.s64 = ctx.r30.s64 + 48;
	// bl 0x82a04180
	ctx.lr = 0x82A0A374;
	sub_82A04180(ctx, base);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r31,36
	ctx.r11.s64 = ctx.r31.s64 + 36;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
loc_82A0A38C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A0A394;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0A39C"))) PPC_WEAK_FUNC(sub_82A0A39C);
PPC_FUNC_IMPL(__imp__sub_82A0A39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0A3A0"))) PPC_WEAK_FUNC(sub_82A0A3A0);
PPC_FUNC_IMPL(__imp__sub_82A0A3A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82a0a288
	sub_82A0A288(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0A3A4"))) PPC_WEAK_FUNC(sub_82A0A3A4);
PPC_FUNC_IMPL(__imp__sub_82A0A3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0A3A8"))) PPC_WEAK_FUNC(sub_82A0A3A8);
PPC_FUNC_IMPL(__imp__sub_82A0A3A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A0A3B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,-12452
	ctx.r29.s64 = ctx.r11.s64 + -12452;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A0A3CC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r11,r11,29312
	ctx.r11.s64 = ctx.r11.s64 + 29312;
	// lwz r10,10660(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10660);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82a0a44c
	if (!ctx.cr6.eq) goto loc_82A0A44C;
	// lwz r10,2164(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2164);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82a0a3fc
	if (!ctx.cr6.eq) goto loc_82A0A3FC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a0a44c
	if (!ctx.cr6.eq) goto loc_82A0A44C;
loc_82A0A3FC:
	// lwz r10,10672(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10672);
	// li r8,1
	ctx.r8.s64 = 1;
	// ld r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ori r5,r5,53248
	ctx.r5.u64 = ctx.r5.u64 | 53248;
	// std r7,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r7.u64);
	// lwz r10,10672(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10672);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r6,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r6.u32);
	// lwz r10,10672(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10672);
	// stw r8,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r8.u32);
	// lwz r10,10672(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10672);
	// stw r9,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r9.u32);
	// lwz r10,10672(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10672);
	// stw r9,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r9.u32);
	// lwz r11,10672(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10672);
	// lwz r3,100(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// bl 0x82a74f08
	ctx.lr = 0x82A0A44C;
	sub_82A74F08(ctx, base);
loc_82A0A44C:
	// sync 
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A0A458;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0A460"))) PPC_WEAK_FUNC(sub_82A0A460);
PPC_FUNC_IMPL(__imp__sub_82A0A460) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82A0A468;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x83179244
	ctx.lr = 0x82A0A478;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82a0a570
	if (!ctx.cr6.eq) goto loc_82A0A570;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// bne cr6,0x82a0a570
	if (!ctx.cr6.eq) goto loc_82A0A570;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r29,r11,-12452
	ctx.r29.s64 = ctx.r11.s64 + -12452;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A0A498;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// addi r11,r31,10600
	ctx.r11.s64 = ctx.r31.s64 + 10600;
loc_82A0A4AC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82a0a4cc
	if (ctx.cr6.eq) goto loc_82A0A4CC;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r31,10624
	ctx.r10.s64 = ctx.r31.s64 + 10624;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82a0a4ac
	if (ctx.cr6.lt) goto loc_82A0A4AC;
loc_82A0A4CC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A0A4D4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// beq cr6,0x82a0a570
	if (ctx.cr6.eq) goto loc_82A0A570;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A0A4E4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a0a1b0
	ctx.lr = 0x82A0A4EC;
	sub_82A0A1B0(ctx, base);
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// bgt cr6,0x82a0a544
	if (ctx.cr6.gt) goto loc_82A0A544;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82a0a530
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82A0A530;
	// bdzf 4*cr6+eq,0x82a0a518
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82A0A518;
	// bdzf 4*cr6+eq,0x82a0a53c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82A0A53C;
	// bne cr6,0x82a0a524
	if (!ctx.cr6.eq) goto loc_82A0A524;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r28,12188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12188, ctx.r28.u32);
	// b 0x82a0a544
	goto loc_82A0A544;
loc_82A0A518:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r28,12184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12184, ctx.r28.u32);
	// b 0x82a0a544
	goto loc_82A0A544;
loc_82A0A524:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r28,12192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12192, ctx.r28.u32);
	// b 0x82a0a544
	goto loc_82A0A544;
loc_82A0A530:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r28,12200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12200, ctx.r28.u32);
	// b 0x82a0a544
	goto loc_82A0A544;
loc_82A0A53C:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r28,12196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12196, ctx.r28.u32);
loc_82A0A544:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a093b8
	ctx.lr = 0x82A0A54C;
	sub_82A093B8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83179424
	ctx.lr = 0x82A0A554;
	__imp__ObDereferenceObject(ctx, base);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r31,10600
	ctx.r10.s64 = ctx.r31.s64 + 10600;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stwx r28,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r28.u32);
	// bl 0x831791b4
	ctx.lr = 0x82A0A568;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r28,12280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12280, ctx.r28.u32);
	// sync 
loc_82A0A570:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0A578"))) PPC_WEAK_FUNC(sub_82A0A578);
PPC_FUNC_IMPL(__imp__sub_82A0A578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82A0A580;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82a0a618
	if (ctx.cr6.eq) goto loc_82A0A618;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a0a618
	if (ctx.cr6.eq) goto loc_82A0A618;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82a0a618
	if (!ctx.cr6.eq) goto loc_82A0A618;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a0a5d0
	if (ctx.cr6.eq) goto loc_82A0A5D0;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a0a5d0
	if (ctx.cr6.eq) goto loc_82A0A5D0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a0a618
	if (!ctx.cr6.eq) goto loc_82A0A618;
loc_82A0A5D0:
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r25,r11,-12520
	ctx.r25.s64 = ctx.r11.s64 + -12520;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A0A5E0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82a09988
	ctx.lr = 0x82A0A600;
	sub_82A09988(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A0A60C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_82A0A618:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0A628"))) PPC_WEAK_FUNC(sub_82A0A628);
PPC_FUNC_IMPL(__imp__sub_82A0A628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82A0A630;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	ctx.r25.s64 = 0;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-12492
	ctx.r3.s64 = ctx.r11.s64 + -12492;
	// li r5,124
	ctx.r5.s64 = 124;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x831796d4
	ctx.lr = 0x82A0A66C;
	__imp__ObCreateObject(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82a0a684
	if (!ctx.cr6.lt) goto loc_82A0A684;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_82A0A684:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a09f18
	ctx.lr = 0x82A0A6A0;
	sub_82A09F18(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82a0a6bc
	if (ctx.cr6.lt) goto loc_82A0A6BC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_82A0A6BC:
	// stw r25,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r25.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a093b8
	ctx.lr = 0x82A0A6C8;
	sub_82A093B8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83179424
	ctx.lr = 0x82A0A6D0;
	__imp__ObDereferenceObject(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0A6DC"))) PPC_WEAK_FUNC(sub_82A0A6DC);
PPC_FUNC_IMPL(__imp__sub_82A0A6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0A6E0"))) PPC_WEAK_FUNC(sub_82A0A6E0);
PPC_FUNC_IMPL(__imp__sub_82A0A6E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x82A0A6E8;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82a0a8ec
	if (ctx.cr6.eq) goto loc_82A0A8EC;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82a0a8ec
	if (ctx.cr6.eq) goto loc_82A0A8EC;
	// cmplwi cr6,r6,48
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 48, ctx.xer);
	// bgt cr6,0x82a0a8ec
	if (ctx.cr6.gt) goto loc_82A0A8EC;
	// cmplwi cr6,r3,9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 9, ctx.xer);
	// bge cr6,0x82a0a8ec
	if (!ctx.cr6.lt) goto loc_82A0A8EC;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31964
	ctx.r9.s64 = -2094792704;
	// addi r11,r11,-25720
	ctx.r11.s64 = ctx.r11.s64 + -25720;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// addi r30,r9,29312
	ctx.r30.s64 = ctx.r9.s64 + 29312;
	// lwz r9,29312(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29312);
	// lwzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// and r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 & ctx.r9.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82a0a760
	if (!ctx.cr6.eq) goto loc_82A0A760;
	// lis r3,-31999
	ctx.r3.s64 = -2097086464;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
loc_82A0A760:
	// rlwinm r9,r26,0,16,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFFFFFFFEFFFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82a0a8ec
	if (!ctx.cr6.eq) goto loc_82A0A8EC;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpw cr6,r28,r8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82a0a8ec
	if (!ctx.cr6.eq) goto loc_82A0A8EC;
	// lis r9,-31975
	ctx.r9.s64 = -2095513600;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r22,r9,-12452
	ctx.r22.s64 = ctx.r9.s64 + -12452;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A0A790;
	__imp__RtlEnterCriticalSection(ctx, base);
	// rlwinm r25,r31,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r24,r30,10600
	ctx.r24.s64 = ctx.r30.s64 + 10600;
	// lwzx r11,r25,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r24.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a0a8d0
	if (!ctx.cr6.eq) goto loc_82A0A8D0;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r27,2
	ctx.r4.s64 = ctx.r27.s64 + 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a0a628
	ctx.lr = 0x82A0A7C4;
	sub_82A0A628(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82a0a8a4
	if (ctx.cr6.lt) goto loc_82A0A8A4;
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82a0a814
	if (ctx.cr6.eq) goto loc_82A0A814;
	// addi r5,r30,16
	ctx.r5.s64 = ctx.r30.s64 + 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83179404
	ctx.lr = 0x82A0A7F0;
	__imp__ObReferenceObjectByHandle(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82a0a814
	if (!ctx.cr6.lt) goto loc_82A0A814;
	// bl 0x831795c4
	ctx.lr = 0x82A0A7FC;
	__imp__RtlNtStatusToDosError(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x82a0a80c
	if (ctx.cr6.gt) goto loc_82A0A80C;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82a0a814
	goto loc_82A0A814;
loc_82A0A80C:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// or r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 | ctx.r29.u64;
loc_82A0A814:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82a0a8a4
	if (ctx.cr6.lt) goto loc_82A0A8A4;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831796e4
	ctx.lr = 0x82A0A828;
	__imp__ObOpenObjectByPointer(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82a0a84c
	if (!ctx.cr6.lt) goto loc_82A0A84C;
	// bl 0x831795c4
	ctx.lr = 0x82A0A834;
	__imp__RtlNtStatusToDosError(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x82a0a844
	if (ctx.cr6.gt) goto loc_82A0A844;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82a0a84c
	goto loc_82A0A84C;
loc_82A0A844:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// or r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 | ctx.r29.u64;
loc_82A0A84C:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82a0a8a4
	if (ctx.cr6.lt) goto loc_82A0A8A4;
	// stwx r30,r25,r24
	PPC_STORE_U32(ctx.r25.u32 + ctx.r24.u32, ctx.r30.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm r10,r11,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a0a8d8
	if (!ctx.cr6.eq) goto loc_82A0A8D8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831792b4
	ctx.lr = 0x82A0A878;
	__imp__KeSetEvent(ctx, base);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0a8d8
	if (ctx.cr6.eq) goto loc_82A0A8D8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831792b4
	ctx.lr = 0x82A0A890;
	__imp__KeSetEvent(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A0A898;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
loc_82A0A8A4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a0a8d8
	if (ctx.cr6.eq) goto loc_82A0A8D8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a093b8
	ctx.lr = 0x82A0A8B4;
	sub_82A093B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83179424
	ctx.lr = 0x82A0A8BC;
	__imp__ObDereferenceObject(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A0A8C4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
loc_82A0A8D0:
	// lis r31,-31999
	ctx.r31.s64 = -2097086464;
	// ori r31,r31,3
	ctx.r31.u64 = ctx.r31.u64 | 3;
loc_82A0A8D8:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A0A8E0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
loc_82A0A8EC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0A8FC"))) PPC_WEAK_FUNC(sub_82A0A8FC);
PPC_FUNC_IMPL(__imp__sub_82A0A8FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0A900"))) PPC_WEAK_FUNC(sub_82A0A900);
PPC_FUNC_IMPL(__imp__sub_82A0A900) {
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
	// addi r30,r11,-12396
	ctx.r30.s64 = ctx.r11.s64 + -12396;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A0A924;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// lwz r11,11248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11248);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a0a974
	if (!ctx.cr6.eq) goto loc_82A0A974;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,11248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11248, ctx.r11.u32);
	// stw r10,11244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11244, ctx.r10.u32);
	// sync 
	// lwz r3,11256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11256);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0a974
	if (ctx.cr6.eq) goto loc_82A0A974;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831792b4
	ctx.lr = 0x82A0A964;
	__imp__KeSetEvent(ctx, base);
	// lwz r3,11256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11256);
	// bl 0x83179424
	ctx.lr = 0x82A0A96C;
	__imp__ObDereferenceObject(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,11256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11256, ctx.r11.u32);
loc_82A0A974:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A0A97C;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_82A0A998"))) PPC_WEAK_FUNC(sub_82A0A998);
PPC_FUNC_IMPL(__imp__sub_82A0A998) {
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
	// addi r30,r11,-12396
	ctx.r30.s64 = ctx.r11.s64 + -12396;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A0A9BC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r10,29312
	ctx.r31.s64 = ctx.r10.s64 + 29312;
	// addi r3,r31,11260
	ctx.r3.s64 = ctx.r31.s64 + 11260;
	// stw r11,11280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11280, ctx.r11.u32);
	// bl 0x831793b4
	ctx.lr = 0x82A0A9D4;
	__imp__KeResetEvent(ctx, base);
	// lwz r3,11256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11256);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0a9e4
	if (ctx.cr6.eq) goto loc_82A0A9E4;
	// bl 0x831793b4
	ctx.lr = 0x82A0A9E4;
	__imp__KeResetEvent(ctx, base);
loc_82A0A9E4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A0A9EC;
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

__attribute__((alias("__imp__sub_82A0AA04"))) PPC_WEAK_FUNC(sub_82A0AA04);
PPC_FUNC_IMPL(__imp__sub_82A0AA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0AA08"))) PPC_WEAK_FUNC(sub_82A0AA08);
PPC_FUNC_IMPL(__imp__sub_82A0AA08) {
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
	// addi r30,r11,-12396
	ctx.r30.s64 = ctx.r11.s64 + -12396;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A0AA2C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// lwz r11,11248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11248);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a0aa68
	if (!ctx.cr6.eq) goto loc_82A0AA68;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,11260
	ctx.r3.s64 = ctx.r31.s64 + 11260;
	// bl 0x831792b4
	ctx.lr = 0x82A0AA50;
	__imp__KeSetEvent(ctx, base);
	// lwz r3,11256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11256);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0aa68
	if (ctx.cr6.eq) goto loc_82A0AA68;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831792b4
	ctx.lr = 0x82A0AA68;
	__imp__KeSetEvent(ctx, base);
loc_82A0AA68:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A0AA70;
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

__attribute__((alias("__imp__sub_82A0AA88"))) PPC_WEAK_FUNC(sub_82A0AA88);
PPC_FUNC_IMPL(__imp__sub_82A0AA88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A0AA90;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r28,r11,-12396
	ctx.r28.s64 = ctx.r11.s64 + -12396;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A0AAAC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// lwz r11,11248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11248);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a0ab14
	if (!ctx.cr6.eq) goto loc_82A0AB14;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82a0aadc
	if (ctx.cr6.eq) goto loc_82A0AADC;
	// li r5,800
	ctx.r5.s64 = 800;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,11280
	ctx.r3.s64 = ctx.r31.s64 + 11280;
	// bl 0x82a75220
	ctx.lr = 0x82A0AAD8;
	sub_82A75220(ctx, base);
	// b 0x82a0aaec
	goto loc_82A0AAEC;
loc_82A0AADC:
	// lwz r11,11252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11252);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a0ab14
	if (!ctx.cr6.eq) goto loc_82A0AB14;
loc_82A0AAEC:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,11260
	ctx.r3.s64 = ctx.r31.s64 + 11260;
	// bl 0x831792b4
	ctx.lr = 0x82A0AAFC;
	__imp__KeSetEvent(ctx, base);
	// lwz r3,11256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11256);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0ab14
	if (ctx.cr6.eq) goto loc_82A0AB14;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831792b4
	ctx.lr = 0x82A0AB14;
	__imp__KeSetEvent(ctx, base);
loc_82A0AB14:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A0AB1C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0AB24"))) PPC_WEAK_FUNC(sub_82A0AB24);
PPC_FUNC_IMPL(__imp__sub_82A0AB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0AB28"))) PPC_WEAK_FUNC(sub_82A0AB28);
PPC_FUNC_IMPL(__imp__sub_82A0AB28) {
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
	// addi r30,r11,-12368
	ctx.r30.s64 = ctx.r11.s64 + -12368;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A0AB4C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// lwz r11,2164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2164);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a0abac
	if (!ctx.cr6.eq) goto loc_82A0ABAC;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,2164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2164, ctx.r11.u32);
	// stw r10,7952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7952, ctx.r10.u32);
	// sync 
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,2168
	ctx.r3.s64 = ctx.r31.s64 + 2168;
	// bl 0x831792b4
	ctx.lr = 0x82A0AB84;
	__imp__KeSetEvent(ctx, base);
	// lwz r3,2184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2184);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0abac
	if (ctx.cr6.eq) goto loc_82A0ABAC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831792b4
	ctx.lr = 0x82A0AB9C;
	__imp__KeSetEvent(ctx, base);
	// lwz r3,2184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2184);
	// bl 0x83179424
	ctx.lr = 0x82A0ABA4;
	__imp__ObDereferenceObject(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2184, ctx.r11.u32);
loc_82A0ABAC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A0ABB4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,12204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12204, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82A0ABD8"))) PPC_WEAK_FUNC(sub_82A0ABD8);
PPC_FUNC_IMPL(__imp__sub_82A0ABD8) {
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
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r31,r11,-12368
	ctx.r31.s64 = ctx.r11.s64 + -12368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A0ABF8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r9,-31964
	ctx.r9.s64 = -2094792704;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r9,29312
	ctx.r11.s64 = ctx.r9.s64 + 29312;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r11,2168
	ctx.r3.s64 = ctx.r11.s64 + 2168;
	// stw r10,2208(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2208, ctx.r10.u32);
	// stw r9,4992(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4992, ctx.r9.u32);
	// bl 0x831793b4
	ctx.lr = 0x82A0AC18;
	__imp__KeResetEvent(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A0AC20;
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

__attribute__((alias("__imp__sub_82A0AC34"))) PPC_WEAK_FUNC(sub_82A0AC34);
PPC_FUNC_IMPL(__imp__sub_82A0AC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0AC38"))) PPC_WEAK_FUNC(sub_82A0AC38);
PPC_FUNC_IMPL(__imp__sub_82A0AC38) {
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
	// li r11,2736
	ctx.r11.s64 = 2736;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r10,21076
	ctx.r10.s64 = 21076;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82a0ac74
	if (!ctx.cr6.eq) goto loc_82A0AC74;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x82a0ac78
	goto loc_82A0AC78;
loc_82A0AC74:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82A0AC78:
	// stw r4,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// li r3,5122
	ctx.r3.s64 = 5122;
	// bl 0x83178d24
	ctx.lr = 0x82A0AC8C;
	__imp__XamXStudioRequest(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0AC9C"))) PPC_WEAK_FUNC(sub_82A0AC9C);
PPC_FUNC_IMPL(__imp__sub_82A0AC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0ACA0"))) PPC_WEAK_FUNC(sub_82A0ACA0);
PPC_FUNC_IMPL(__imp__sub_82A0ACA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A0ACA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a0acc8
	if (!ctx.cr6.eq) goto loc_82A0ACC8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_82A0ACC8:
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// lwz r11,2164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2164);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a0acec
	if (!ctx.cr6.eq) goto loc_82A0ACEC;
	// lis r3,-31999
	ctx.r3.s64 = -2097086464;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_82A0ACEC:
	// lwz r11,7952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7952);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a0ad08
	if (!ctx.cr6.eq) goto loc_82A0AD08;
	// lis r3,-31999
	ctx.r3.s64 = -2097086464;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_82A0AD08:
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r29,r11,-12608
	ctx.r29.s64 = ctx.r11.s64 + -12608;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A0AD18;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a0ad88
	if (!ctx.cr6.eq) goto loc_82A0AD88;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ori r9,r10,59548
	ctx.r9.u64 = ctx.r10.u64 | 59548;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwzx r10,r31,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bne cr6,0x82a0ad44
	if (!ctx.cr6.eq) goto loc_82A0AD44;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A0AD44:
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r9,59556
	ctx.r8.u64 = ctx.r9.u64 | 59556;
	// stwx r11,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bne cr6,0x82a0ad64
	if (!ctx.cr6.eq) goto loc_82A0AD64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A0AD64:
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r9,r10,59560
	ctx.r9.u64 = ctx.r10.u64 | 59560;
	// li r30,0
	ctx.r30.s64 = 0;
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x831791b4
	ctx.lr = 0x82A0AD7C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_82A0AD88:
	// lis r30,-31999
	ctx.r30.s64 = -2097086464;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r30,r30,11
	ctx.r30.u64 = ctx.r30.u64 | 11;
	// bl 0x831791b4
	ctx.lr = 0x82A0AD98;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0ADA4"))) PPC_WEAK_FUNC(sub_82A0ADA4);
PPC_FUNC_IMPL(__imp__sub_82A0ADA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0ADA8"))) PPC_WEAK_FUNC(sub_82A0ADA8);
PPC_FUNC_IMPL(__imp__sub_82A0ADA8) {
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
	// lis r30,-31963
	ctx.r30.s64 = -2094727168;
loc_82A0ADC4:
	// lwz r11,23764(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23764);
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x82a15d88
	ctx.lr = 0x82A0ADD0;
	sub_82A15D88(ctx, base);
	// addi r31,r31,1280
	ctx.r31.s64 = ctx.r31.s64 + 1280;
	// cmplwi cr6,r31,7680
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 7680, ctx.xer);
	// blt cr6,0x82a0adc4
	if (ctx.cr6.lt) goto loc_82A0ADC4;
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

__attribute__((alias("__imp__sub_82A0ADF4"))) PPC_WEAK_FUNC(sub_82A0ADF4);
PPC_FUNC_IMPL(__imp__sub_82A0ADF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0ADF8"))) PPC_WEAK_FUNC(sub_82A0ADF8);
PPC_FUNC_IMPL(__imp__sub_82A0ADF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r11,23764
	ctx.r7.s64 = ctx.r11.s64 + 23764;
loc_82A0AE04:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r8,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82a0ae04
	if (!ctx.cr0.eq) goto loc_82A0AE04;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r4,8348
	ctx.r4.s64 = 547094528;
	// b 0x82691460
	sub_82691460(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0AE30"))) PPC_WEAK_FUNC(sub_82A0AE30);
PPC_FUNC_IMPL(__imp__sub_82A0AE30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0AE34"))) PPC_WEAK_FUNC(sub_82A0AE34);
PPC_FUNC_IMPL(__imp__sub_82A0AE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0AE38"))) PPC_WEAK_FUNC(sub_82A0AE38);
PPC_FUNC_IMPL(__imp__sub_82A0AE38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82A0AE40;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,29308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29308);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a0ae68
	if (!ctx.cr6.eq) goto loc_82A0AE68;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_82A0AE68:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfs f0,11556(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11556);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-27108(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27108);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-25408(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25408);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bne cr6,0x82a0aea4
	if (!ctx.cr6.eq) goto loc_82A0AEA4;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
loc_82A0AEA4:
	// lis r28,-31963
	ctx.r28.s64 = -2094727168;
	// lwz r11,23764(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 23764);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a0aed4
	if (!ctx.cr6.eq) goto loc_82A0AED4;
	// lis r4,8348
	ctx.r4.s64 = 547094528;
	// li r3,7680
	ctx.r3.s64 = 7680;
	// bl 0x82691410
	ctx.lr = 0x82A0AEC0;
	sub_82691410(ctx, base);
	// stw r3,23764(r28)
	PPC_STORE_U32(ctx.r28.u32 + 23764, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0aee4
	if (ctx.cr6.eq) goto loc_82A0AEE4;
	// bl 0x82a0ada8
	ctx.lr = 0x82A0AED0;
	sub_82A0ADA8(ctx, base);
	// lwz r11,23764(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 23764);
loc_82A0AED4:
	// li r27,0
	ctx.r27.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r29,48
	ctx.r29.s64 = ctx.r29.s64 + 48;
	// b 0x82a0aefc
	goto loc_82A0AEFC;
loc_82A0AEE4:
	// lis r27,-32761
	ctx.r27.s64 = -2147024896;
	// ori r27,r27,14
	ctx.r27.u64 = ctx.r27.u64 | 14;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_82A0AEF8:
	// lwz r11,23764(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 23764);
loc_82A0AEFC:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82a0af2c
	if (!ctx.cr6.eq) goto loc_82A0AF2C;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lfs f5,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// add r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lfs f4,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a15d98
	ctx.lr = 0x82A0AF28;
	sub_82A15D98(ctx, base);
	// b 0x82a0af34
	goto loc_82A0AF34;
loc_82A0AF2C:
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x82a15d88
	ctx.lr = 0x82A0AF34;
	sub_82A15D88(ctx, base);
loc_82A0AF34:
	// addi r31,r31,1280
	ctx.r31.s64 = ctx.r31.s64 + 1280;
	// addi r29,r29,448
	ctx.r29.s64 = ctx.r29.s64 + 448;
	// cmplwi cr6,r31,7680
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 7680, ctx.xer);
	// blt cr6,0x82a0aef8
	if (ctx.cr6.lt) goto loc_82A0AEF8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0AF50"))) PPC_WEAK_FUNC(sub_82A0AF50);
PPC_FUNC_IMPL(__imp__sub_82A0AF50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A0AF58;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r11,-12368
	ctx.r29.s64 = ctx.r11.s64 + -12368;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A0AF70;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// lwz r11,2164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2164);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a0afd4
	if (!ctx.cr6.eq) goto loc_82A0AFD4;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82a0af9c
	if (ctx.cr6.eq) goto loc_82A0AF9C;
	// lwz r11,2192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2192);
	// stw r11,2196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2196, ctx.r11.u32);
	// sync 
	// b 0x82a0afac
	goto loc_82A0AFAC;
loc_82A0AF9C:
	// lwz r11,2188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2188);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a0afd4
	if (!ctx.cr6.eq) goto loc_82A0AFD4;
loc_82A0AFAC:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,2168
	ctx.r3.s64 = ctx.r31.s64 + 2168;
	// bl 0x831792b4
	ctx.lr = 0x82A0AFBC;
	__imp__KeSetEvent(ctx, base);
	// lwz r3,2184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2184);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0afd4
	if (ctx.cr6.eq) goto loc_82A0AFD4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831792b4
	ctx.lr = 0x82A0AFD4;
	__imp__KeSetEvent(ctx, base);
loc_82A0AFD4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A0AFDC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0AFE4"))) PPC_WEAK_FUNC(sub_82A0AFE4);
PPC_FUNC_IMPL(__imp__sub_82A0AFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0AFE8"))) PPC_WEAK_FUNC(sub_82A0AFE8);
PPC_FUNC_IMPL(__imp__sub_82A0AFE8) {
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
	// addi r30,r11,-12368
	ctx.r30.s64 = ctx.r11.s64 + -12368;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A0B00C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// lwz r11,2164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2164);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a0b048
	if (!ctx.cr6.eq) goto loc_82A0B048;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,2168
	ctx.r3.s64 = ctx.r31.s64 + 2168;
	// bl 0x831792b4
	ctx.lr = 0x82A0B030;
	__imp__KeSetEvent(ctx, base);
	// lwz r3,2184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2184);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0b048
	if (ctx.cr6.eq) goto loc_82A0B048;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831792b4
	ctx.lr = 0x82A0B048;
	__imp__KeSetEvent(ctx, base);
loc_82A0B048:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A0B050;
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

__attribute__((alias("__imp__sub_82A0B068"))) PPC_WEAK_FUNC(sub_82A0B068);
PPC_FUNC_IMPL(__imp__sub_82A0B068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r9,23760(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23760);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a0b090
	if (ctx.cr6.eq) goto loc_82A0B090;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0b090
	if (ctx.cr6.eq) goto loc_82A0B090;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_82A0B090:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,23760(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23760, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0B09C"))) PPC_WEAK_FUNC(sub_82A0B09C);
PPC_FUNC_IMPL(__imp__sub_82A0B09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0B0A0"))) PPC_WEAK_FUNC(sub_82A0B0A0);
PPC_FUNC_IMPL(__imp__sub_82A0B0A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r11,23760(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23760);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82A0B0B8"))) PPC_WEAK_FUNC(sub_82A0B0B8);
PPC_FUNC_IMPL(__imp__sub_82A0B0B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0B0BC"))) PPC_WEAK_FUNC(sub_82A0B0BC);
PPC_FUNC_IMPL(__imp__sub_82A0B0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0B0C0"))) PPC_WEAK_FUNC(sub_82A0B0C0);
PPC_FUNC_IMPL(__imp__sub_82A0B0C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,2736
	ctx.r11.s64 = 2736;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// li r10,21076
	ctx.r10.s64 = 21076;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// std r9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// li r3,5121
	ctx.r3.s64 = 5121;
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// bl 0x83178d24
	ctx.lr = 0x82A0B10C;
	__imp__XamXStudioRequest(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0B11C"))) PPC_WEAK_FUNC(sub_82A0B11C);
PPC_FUNC_IMPL(__imp__sub_82A0B11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0B120"))) PPC_WEAK_FUNC(sub_82A0B120);
PPC_FUNC_IMPL(__imp__sub_82A0B120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82A0B128;
	__savegprlr_14(ctx, base);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r10,604(r1)
	PPC_STORE_U32(ctx.r1.u32 + 604, ctx.r10.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// stw r3,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r3.u32);
	// stw r6,572(r1)
	PPC_STORE_U32(ctx.r1.u32 + 572, ctx.r6.u32);
	// stw r7,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r7.u32);
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// stw r8,588(r1)
	PPC_STORE_U32(ctx.r1.u32 + 588, ctx.r8.u32);
	// stw r9,596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 596, ctx.r9.u32);
	// beq cr6,0x82a0b2fc
	if (ctx.cr6.eq) goto loc_82A0B2FC;
	// bl 0x83178d64
	ctx.lr = 0x82A0B160;
	__imp__XamGetCurrentTitleId(ctx, base);
	// lhz r10,814(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 814);
	// lhz r11,822(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 822);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// ld r7,824(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 824);
	// lhz r5,806(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 806);
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// stw r4,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r4.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// stw r6,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r6.u32);
	// lhz r5,798(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 798);
	// lis r8,8274
	ctx.r8.s64 = 542244864;
	// std r7,368(r1)
	PPC_STORE_U64(ctx.r1.u32 + 368, ctx.r7.u64);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r11,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r11.u32);
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// lwz r6,836(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 836);
	// ori r8,r8,21504
	ctx.r8.u64 = ctx.r8.u64 | 21504;
	// lhz r31,766(r1)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r1.u32 + 766);
	// lhz r30,750(r1)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r1.u32 + 750);
	// lbz r29,735(r1)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + 735);
	// lbz r28,727(r1)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r1.u32 + 727);
	// lwz r27,756(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 756);
	// lwz r26,740(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 740);
	// lhz r4,790(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 790);
	// lhz r3,782(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 782);
	// lhz r5,774(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 774);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lbz r25,719(r1)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r1.u32 + 719);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// lbz r24,711(r1)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r1.u32 + 711);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// lbz r23,703(r1)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r1.u32 + 703);
	// stw r6,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r6.u32);
	// li r6,100
	ctx.r6.s64 = 100;
	// stw r11,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r11.u32);
	// lwz r19,356(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// stw r9,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r9.u32);
	// lwz r20,352(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// ld r17,368(r1)
	ctx.r17.u64 = PPC_LOAD_U64(ctx.r1.u32 + 368);
	// lwz r16,360(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	// stw r10,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r10.u32);
	// stw r8,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r8.u32);
	// stw r7,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r7.u32);
	// stw r4,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r4.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r3,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r3.u32);
	// stw r5,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r5.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r31,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r31.u32);
	// stw r27,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r27.u32);
	// stw r30,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r30.u32);
	// stw r26,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r26.u32);
	// stw r29,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r29.u32);
	// stw r28,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r28.u32);
	// lbz r22,695(r1)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r1.u32 + 695);
	// lbz r21,687(r1)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r1.u32 + 687);
	// lbz r18,679(r1)
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r1.u32 + 679);
	// lbz r15,671(r1)
	ctx.r15.u64 = PPC_LOAD_U8(ctx.r1.u32 + 671);
	// lbz r14,663(r1)
	ctx.r14.u64 = PPC_LOAD_U8(ctx.r1.u32 + 663);
	// lbz r10,655(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 655);
	// lbz r9,647(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 647);
	// lhz r8,638(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 638);
	// lwz r7,628(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 628);
	// lwz r11,620(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 620);
	// lwz r31,612(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// lwz r30,604(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 604);
	// lwz r29,596(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// lwz r28,588(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 588);
	// lwz r27,580(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 580);
	// lwz r26,572(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 572);
	// lwz r3,548(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// std r17,336(r1)
	PPC_STORE_U64(ctx.r1.u32 + 336, ctx.r17.u64);
	// stw r20,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r20.u32);
	// stw r19,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r19.u32);
	// stw r16,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r16.u32);
	// stw r25,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r25.u32);
	// stw r24,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r24.u32);
	// stw r23,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r23.u32);
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// stw r9,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
	// stw r8,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// stw r7,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r7.u32);
	// lwz r10,360(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	// lwz r9,356(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r8,352(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// lwz r7,368(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// stw r22,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r22.u32);
	// stw r21,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r21.u32);
	// stw r18,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r18.u32);
	// stw r15,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r15.u32);
	// stw r14,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r14.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// bl 0x83179614
	ctx.lr = 0x82A0B2F4;
	__imp__EtxProducerLog(ctx, base);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
loc_82A0B2FC:
	// lis r3,16389
	ctx.r3.s64 = 1074069504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0B30C"))) PPC_WEAK_FUNC(sub_82A0B30C);
PPC_FUNC_IMPL(__imp__sub_82A0B30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0B310"))) PPC_WEAK_FUNC(sub_82A0B310);
PPC_FUNC_IMPL(__imp__sub_82A0B310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82A0B318;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,29312(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29312);
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// rlwinm r11,r11,0,22,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F8;
	// rlwinm r11,r11,0,28,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE0F;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a0b35c
	if (!ctx.cr6.eq) goto loc_82A0B35C;
	// lis r3,-31999
	ctx.r3.s64 = -2097086464;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
loc_82A0B35C:
	// rlwinm r11,r30,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFF8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0b378
	if (ctx.cr6.eq) goto loc_82A0B378;
loc_82A0B368:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
loc_82A0B378:
	// rlwinm r26,r30,0,29,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82a0b390
	if (ctx.cr6.eq) goto loc_82A0B390;
	// bl 0x82c463a0
	ctx.lr = 0x82A0B388;
	sub_82C463A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82a0b368
	if (ctx.cr6.eq) goto loc_82A0B368;
loc_82A0B390:
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r28,r11,-12368
	ctx.r28.s64 = ctx.r11.s64 + -12368;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A0B3A0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,2164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2164);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a0b430
	if (!ctx.cr6.eq) goto loc_82A0B430;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82a0b3dc
	if (ctx.cr6.eq) goto loc_82A0B3DC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r31,2184
	ctx.r5.s64 = ctx.r31.s64 + 2184;
	// lwz r4,2068(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2068);
	// bl 0x83179404
	ctx.lr = 0x82A0B3C8;
	__imp__ObReferenceObjectByHandle(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82a0b3dc
	if (!ctx.cr6.lt) goto loc_82A0B3DC;
	// lis r24,-32761
	ctx.r24.s64 = -2147024896;
	// ori r24,r24,87
	ctx.r24.u64 = ctx.r24.u64 | 87;
	// b 0x82a0b438
	goto loc_82A0B438;
loc_82A0B3DC:
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,7776
	ctx.r3.s64 = ctx.r31.s64 + 7776;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A0B3EC;
	sub_82FA7CF0(ctx, base);
	// li r5,5568
	ctx.r5.s64 = 5568;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,2208
	ctx.r3.s64 = ctx.r31.s64 + 2208;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A0B3FC;
	sub_82FA7CF0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r10,r30,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	// stw r11,2164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2164, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a0b418
	if (ctx.cr6.eq) goto loc_82A0B418;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// stw r11,7952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7952, ctx.r11.u32);
loc_82A0B418:
	// stw r30,2188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2188, ctx.r30.u32);
	// sync 
	// stw r11,10528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10528, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a0af50
	ctx.lr = 0x82A0B42C;
	sub_82A0AF50(ctx, base);
	// b 0x82a0b438
	goto loc_82A0B438;
loc_82A0B430:
	// lis r24,-32761
	ctx.r24.s64 = -2147024896;
	// ori r24,r24,1247
	ctx.r24.u64 = ctx.r24.u64 | 1247;
loc_82A0B438:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A0B440;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82a0b46c
	if (ctx.cr6.eq) goto loc_82A0B46C;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r30,r11,-12608
	ctx.r30.s64 = ctx.r11.s64 + -12608;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A0B458;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r25,-5980(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5980, ctx.r25.u32);
	// stw r25,-5976(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5976, ctx.r25.u32);
	// bl 0x831791b4
	ctx.lr = 0x82A0B46C;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82A0B46C:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// blt cr6,0x82a0b4a4
	if (ctx.cr6.lt) goto loc_82A0B4A4;
	// lwz r11,10632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10632);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a0b4a4
	if (ctx.cr6.eq) goto loc_82A0B4A4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82a0b49c
	if (!ctx.cr6.eq) goto loc_82A0B49C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0b4a0
	if (ctx.cr6.eq) goto loc_82A0B4A0;
loc_82A0B49C:
	// li r3,128
	ctx.r3.s64 = 128;
loc_82A0B4A0:
	// bl 0x82a10b68
	ctx.lr = 0x82A0B4A4;
	sub_82A10B68(ctx, base);
loc_82A0B4A4:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0B4B0"))) PPC_WEAK_FUNC(sub_82A0B4B0);
PPC_FUNC_IMPL(__imp__sub_82A0B4B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82A0B4B8;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82a0b4d8
	if (!ctx.cr6.eq) goto loc_82A0B4D8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
loc_82A0B4D8:
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// addi r28,r11,-12368
	ctx.r28.s64 = ctx.r11.s64 + -12368;
	// ori r27,r10,10
	ctx.r27.u64 = ctx.r10.u64 | 10;
	// lwz r11,2164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2164);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a0b694
	if (ctx.cr6.eq) goto loc_82A0B694;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a0b688
	if (ctx.cr6.eq) goto loc_82A0B688;
	// lwz r11,2188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2188);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82a0b550
	if (ctx.cr6.eq) goto loc_82A0B550;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82a0b530
	if (ctx.cr6.eq) goto loc_82A0B530;
	// cmplwi cr6,r3,8000
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8000, ctx.xer);
	// ble cr6,0x82a0b550
	if (!ctx.cr6.gt) goto loc_82A0B550;
loc_82A0B530:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0b54c
	if (ctx.cr6.eq) goto loc_82A0B54C;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,60000
	ctx.r3.u64 = ctx.r3.u64 | 60000;
	// b 0x82a0b550
	goto loc_82A0B550;
loc_82A0B54C:
	// li r3,8000
	ctx.r3.s64 = 8000;
loc_82A0B550:
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82a0b56c
	if (ctx.cr6.eq) goto loc_82A0B56C;
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// mulli r10,r11,-10000
	ctx.r10.s64 = ctx.r11.s64 * -10000;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
loc_82A0B56C:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r31,2168
	ctx.r3.s64 = ctx.r31.s64 + 2168;
	// bl 0x83179414
	ctx.lr = 0x82A0B580;
	__imp__KeWaitForSingleObject(ctx, base);
	// cmpwi cr6,r3,258
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 258, ctx.xer);
	// beq cr6,0x82a0b680
	if (ctx.cr6.eq) goto loc_82A0B680;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A0B590;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,2196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2196);
	// addi r10,r31,2208
	ctx.r10.s64 = ctx.r31.s64 + 2208;
	// mulli r11,r11,2784
	ctx.r11.s64 = ctx.r11.s64 * 2784;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a0b5fc
	if (!ctx.cr6.eq) goto loc_82A0B5FC;
	// li r5,2736
	ctx.r5.s64 = 2736;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a75220
	ctx.lr = 0x82A0B5BC;
	sub_82A75220(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// mftb r11
	ctx.r11.u64 = __rdtsc();
	// lwz r10,2768(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2768);
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lis r8,15
	ctx.r8.s64 = 983040;
	// subf r7,r10,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r10.s64;
	// ori r6,r8,16960
	ctx.r6.u64 = ctx.r8.u64 | 16960;
	// lis r5,762
	ctx.r5.s64 = 49938432;
	// clrldi r4,r7,32
	ctx.r4.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// ori r3,r5,61568
	ctx.r3.u64 = ctx.r5.u64 | 61568;
	// mulld r11,r4,r6
	ctx.r11.s64 = ctx.r4.s64 * ctx.r6.s64;
	// divd r10,r11,r3
	ctx.r10.s64 = ctx.r11.s64 / ctx.r3.s64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,12204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12204, ctx.r10.u32);
	// bl 0x831791b4
	ctx.lr = 0x82A0B5F8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x82a0b6a0
	goto loc_82A0B6A0;
loc_82A0B5FC:
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82a0b620
	if (!ctx.cr6.eq) goto loc_82A0B620;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ori r10,r11,1167
	ctx.r10.u64 = ctx.r11.u64 | 1167;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x831791b4
	ctx.lr = 0x82A0B61C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x82a0b6a0
	goto loc_82A0B6A0;
loc_82A0B620:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82a0b640
	if (!ctx.cr6.eq) goto loc_82A0B640;
	// lis r11,-31999
	ctx.r11.s64 = -2097086464;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ori r10,r11,11
	ctx.r10.u64 = ctx.r11.u64 | 11;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x831791b4
	ctx.lr = 0x82A0B63C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x82a0b6a0
	goto loc_82A0B6A0;
loc_82A0B640:
	// lwz r11,2188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2188);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0b668
	if (ctx.cr6.eq) goto loc_82A0B668;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ori r10,r11,1167
	ctx.r10.u64 = ctx.r11.u64 | 1167;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x831791b4
	ctx.lr = 0x82A0B664;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x82a0b6a0
	goto loc_82A0B6A0;
loc_82A0B668:
	// lis r11,-31999
	ctx.r11.s64 = -2097086464;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x831791b4
	ctx.lr = 0x82A0B67C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x82a0b6a0
	goto loc_82A0B6A0;
loc_82A0B680:
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// b 0x82a0b6a0
	goto loc_82A0B6A0;
loc_82A0B688:
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r10,r11,1167
	ctx.r10.u64 = ctx.r11.u64 | 1167;
	// b 0x82a0b69c
	goto loc_82A0B69C;
loc_82A0B694:
	// lis r11,-31999
	ctx.r11.s64 = -2097086464;
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
loc_82A0B69C:
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_82A0B6A0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A0B6A8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x82a0b6cc
	if (ctx.cr6.eq) goto loc_82A0B6CC;
	// lwz r3,2184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2184);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0b6c4
	if (ctx.cr6.eq) goto loc_82A0B6C4;
	// bl 0x831793b4
	ctx.lr = 0x82A0B6C4;
	__imp__KeResetEvent(ctx, base);
loc_82A0B6C4:
	// addi r3,r31,2168
	ctx.r3.s64 = ctx.r31.s64 + 2168;
	// bl 0x831793b4
	ctx.lr = 0x82A0B6CC;
	__imp__KeResetEvent(ctx, base);
loc_82A0B6CC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A0B6D4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82a0b6f4
	if (ctx.cr6.lt) goto loc_82A0B6F4;
	// lwz r11,10632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10632);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a0b6f4
	if (ctx.cr6.eq) goto loc_82A0B6F4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a0d480
	ctx.lr = 0x82A0B6F4;
	sub_82A0D480(ctx, base);
loc_82A0B6F4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a0ac38
	ctx.lr = 0x82A0B700;
	sub_82A0AC38(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82a0b720
	if (ctx.cr6.lt) goto loc_82A0B720;
	// lwz r11,10632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10632);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a0b720
	if (ctx.cr6.eq) goto loc_82A0B720;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a129a8
	ctx.lr = 0x82A0B720;
	sub_82A129A8(ctx, base);
loc_82A0B720:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0B72C"))) PPC_WEAK_FUNC(sub_82A0B72C);
PPC_FUNC_IMPL(__imp__sub_82A0B72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0B730"))) PPC_WEAK_FUNC(sub_82A0B730);
PPC_FUNC_IMPL(__imp__sub_82A0B730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82A0B738;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,2688
	ctx.r5.s64 = 2688;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a75988
	ctx.lr = 0x82A0B754;
	sub_82A75988(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// addi r7,r29,136
	ctx.r7.s64 = ctx.r29.s64 + 136;
	// addi r6,r29,16
	ctx.r6.s64 = ctx.r29.s64 + 16;
	// li r4,12
	ctx.r4.s64 = 12;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r8,r11,29312
	ctx.r8.s64 = ctx.r11.s64 + 29312;
loc_82A0B77C:
	// lwz r11,-24(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a0b7dc
	if (!ctx.cr6.eq) goto loc_82A0B7DC;
	// stw r5,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r5.u32);
	// lvx128 v63,r0,r6
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r10,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0b7b4
	if (ctx.cr6.eq) goto loc_82A0B7B4;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r3,r9,59548
	ctx.r3.u64 = ctx.r9.u64 | 59548;
	// lwzx r9,r8,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// b 0x82a0b7b8
	goto loc_82A0B7B8;
loc_82A0B7B4:
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
loc_82A0B7B8:
	// lis r3,0
	ctx.r3.s64 = 0;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// ori r9,r3,59552
	ctx.r9.u64 = ctx.r3.u64 | 59552;
	// lwzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82a0b7dc
	if (ctx.cr6.gt) goto loc_82A0B7DC;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r3,r9,59552
	ctx.r3.u64 = ctx.r9.u64 | 59552;
	// stwx r11,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r11.u32);
loc_82A0B7DC:
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// addi r10,r10,448
	ctx.r10.s64 = ctx.r10.s64 + 448;
	// bdnz 0x82a0b77c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A0B77C;
	// li r24,2
	ctx.r24.s64 = 2;
	// addi r27,r29,208
	ctx.r27.s64 = ctx.r29.s64 + 208;
	// mr r23,r24
	ctx.r23.u64 = ctx.r24.u64;
loc_82A0B7F8:
	// lwz r11,-24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a0b954
	if (!ctx.cr6.eq) goto loc_82A0B954;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// addi r29,r11,-1
	ctx.r29.s64 = ctx.r11.s64 + -1;
	// mulli r11,r29,448
	ctx.r11.s64 = ctx.r29.s64 * 448;
	// stwx r24,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r24.u32);
	// add r28,r11,r31
	ctx.r28.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82A0B81C:
	// li r5,320
	ctx.r5.s64 = 320;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r28,32
	ctx.r3.s64 = ctx.r28.s64 + 32;
	// bl 0x82a75220
	ctx.lr = 0x82A0B82C;
	sub_82A75220(ctx, base);
	// li r5,80
	ctx.r5.s64 = 80;
	// addi r4,r26,328
	ctx.r4.s64 = ctx.r26.s64 + 328;
	// addi r3,r28,352
	ctx.r3.s64 = ctx.r28.s64 + 352;
	// bl 0x82a75220
	ctx.lr = 0x82A0B83C;
	sub_82A75220(ctx, base);
	// lwz r11,324(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 324);
	// stw r11,432(r28)
	PPC_STORE_U32(ctx.r28.u32 + 432, ctx.r11.u32);
	// bl 0x82a3df00
	ctx.lr = 0x82A0B848;
	sub_82A3DF00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82a0b94c
	if (ctx.cr6.eq) goto loc_82A0B94C;
	// mulli r11,r29,28
	ctx.r11.s64 = ctx.r29.s64 * 28;
	// vspltisw128 v62,0
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_set1_epi32(int(0x0)));
	// mulli r10,r29,112
	ctx.r10.s64 = ctx.r29.s64 * 112;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// addi r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 + 12;
	// stvx128 v62,r8,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// rlwinm r4,r9,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r3,r10,12
	ctx.r3.s64 = ctx.r10.s64 + 12;
	// stwx r30,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r30.u32);
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,13
	ctx.r8.s64 = ctx.r11.s64 + 13;
	// rlwinm r7,r5,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r6,r10,13
	ctx.r6.s64 = ctx.r10.s64 + 13;
	// stvx128 v62,r4,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// rlwinm r5,r3,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r8,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// stwx r30,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r30.u32);
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r11,14
	ctx.r4.s64 = ctx.r11.s64 + 14;
	// stvx128 v62,r7,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r10,14
	ctx.r9.s64 = ctx.r10.s64 + 14;
	// stwx r30,r5,r31
	PPC_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r30.u32);
	// addi r7,r11,15
	ctx.r7.s64 = ctx.r11.s64 + 15;
	// stvx128 v62,r3,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// rlwinm r6,r4,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r5,r10,15
	ctx.r5.s64 = ctx.r10.s64 + 15;
	// stwx r30,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r30.u32);
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// rlwinm r9,r7,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// stvx128 v62,r6,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// rlwinm r7,r5,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r3,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// stwx r30,r4,r31
	PPC_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r30.u32);
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r11,17
	ctx.r6.s64 = ctx.r11.s64 + 17;
	// stvx128 v62,r9,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r4,r10,17
	ctx.r4.s64 = ctx.r10.s64 + 17;
	// stwx r30,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r30.u32);
	// addi r9,r11,18
	ctx.r9.s64 = ctx.r11.s64 + 18;
	// stvx128 v62,r5,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32 + ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// rlwinm r8,r6,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r7,r10,18
	ctx.r7.s64 = ctx.r10.s64 + 18;
	// stwx r30,r3,r31
	PPC_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r30.u32);
	// rlwinm r6,r4,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r11,19
	ctx.r5.s64 = ctx.r11.s64 + 19;
	// rlwinm r4,r9,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r3,r10,19
	ctx.r3.s64 = ctx.r10.s64 + 19;
	// stvx128 v62,r8,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// stwx r30,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r30.u32);
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stvx128 v62,r4,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwx r30,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r30.u32);
	// stvx128 v62,r10,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwx r30,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r30.u32);
loc_82A0B94C:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne 0x82a0b81c
	if (!ctx.cr0.eq) goto loc_82A0B81C;
loc_82A0B954:
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r26,r26,416
	ctx.r26.s64 = ctx.r26.s64 + 416;
	// bne 0x82a0b7f8
	if (!ctx.cr0.eq) goto loc_82A0B7F8;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0B96C"))) PPC_WEAK_FUNC(sub_82A0B96C);
PPC_FUNC_IMPL(__imp__sub_82A0B96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0B970"))) PPC_WEAK_FUNC(sub_82A0B970);
PPC_FUNC_IMPL(__imp__sub_82A0B970) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa764c
	ctx.lr = 0x82A0B978;
	__savegprlr_17(ctx, base);
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// li r19,0
	ctx.r19.s64 = 0;
	// addi r4,r4,160
	ctx.r4.s64 = ctx.r4.s64 + 160;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
	// lwz r10,7872(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7872);
	// addi r8,r31,7780
	ctx.r8.s64 = ctx.r31.s64 + 7780;
	// lhz r9,7912(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 7912);
	// addi r5,r29,48
	ctx.r5.s64 = ctx.r29.s64 + 48;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// stw r11,7872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7872, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// sth r10,7912(r31)
	PPC_STORE_U16(ctx.r31.u32 + 7912, ctx.r10.u16);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r24,6
	ctx.r24.s64 = 6;
	// li r20,32
	ctx.r20.s64 = 32;
	// li r21,-4
	ctx.r21.s64 = -4;
	// li r22,28
	ctx.r22.s64 = 28;
	// lfs f13,5184(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f13.f64 = double(temp.f32);
	// li r23,60
	ctx.r23.s64 = 60;
	// li r25,64
	ctx.r25.s64 = 64;
	// li r26,288
	ctx.r26.s64 = 288;
	// li r27,224
	ctx.r27.s64 = 224;
	// addi r30,r11,11556
	ctx.r30.s64 = ctx.r11.s64 + 11556;
loc_82A0B9E8:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82a0bc70
	if (!ctx.cr6.eq) goto loc_82A0BC70;
	// li r11,4
	ctx.r11.s64 = 4;
	// lwz r9,432(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 432);
	// lwz r7,7888(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7888);
	// addi r10,r5,356
	ctx.r10.s64 = ctx.r5.s64 + 356;
	// or r28,r9,r28
	ctx.r28.u64 = ctx.r9.u64 | ctx.r28.u64;
	// lwz r9,7892(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7892);
	// lwz r6,7884(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7884);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82A0BA14:
	// lwz r11,-4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82a0ba2c
	if (!ctx.cr6.eq) goto loc_82A0BA2C;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stw r6,7884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7884, ctx.r6.u32);
	// b 0x82a0ba48
	goto loc_82A0BA48;
loc_82A0BA2C:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a0ba40
	if (!ctx.cr6.eq) goto loc_82A0BA40;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stw r7,7888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7888, ctx.r7.u32);
	// b 0x82a0ba48
	goto loc_82A0BA48;
loc_82A0BA40:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,7892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7892, ctx.r9.u32);
loc_82A0BA48:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82a0ba60
	if (!ctx.cr6.eq) goto loc_82A0BA60;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stw r6,7884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7884, ctx.r6.u32);
	// b 0x82a0ba7c
	goto loc_82A0BA7C;
loc_82A0BA60:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a0ba74
	if (!ctx.cr6.eq) goto loc_82A0BA74;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stw r7,7888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7888, ctx.r7.u32);
	// b 0x82a0ba7c
	goto loc_82A0BA7C;
loc_82A0BA74:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,7892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7892, ctx.r9.u32);
loc_82A0BA7C:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82a0ba94
	if (!ctx.cr6.eq) goto loc_82A0BA94;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stw r6,7884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7884, ctx.r6.u32);
	// b 0x82a0bab0
	goto loc_82A0BAB0;
loc_82A0BA94:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a0baa8
	if (!ctx.cr6.eq) goto loc_82A0BAA8;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stw r7,7888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7888, ctx.r7.u32);
	// b 0x82a0bab0
	goto loc_82A0BAB0;
loc_82A0BAA8:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,7892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7892, ctx.r9.u32);
loc_82A0BAB0:
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82a0bac8
	if (!ctx.cr6.eq) goto loc_82A0BAC8;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stw r6,7884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7884, ctx.r6.u32);
	// b 0x82a0bae4
	goto loc_82A0BAE4;
loc_82A0BAC8:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a0badc
	if (!ctx.cr6.eq) goto loc_82A0BADC;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stw r7,7888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7888, ctx.r7.u32);
	// b 0x82a0bae4
	goto loc_82A0BAE4;
loc_82A0BADC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,7892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7892, ctx.r9.u32);
loc_82A0BAE4:
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82a0bafc
	if (!ctx.cr6.eq) goto loc_82A0BAFC;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stw r6,7884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7884, ctx.r6.u32);
	// b 0x82a0bb18
	goto loc_82A0BB18;
loc_82A0BAFC:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a0bb10
	if (!ctx.cr6.eq) goto loc_82A0BB10;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stw r7,7888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7888, ctx.r7.u32);
	// b 0x82a0bb18
	goto loc_82A0BB18;
loc_82A0BB10:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,7892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7892, ctx.r9.u32);
loc_82A0BB18:
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// bdnz 0x82a0ba14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A0BA14;
	// addi r10,r1,416
	ctx.r10.s64 = ctx.r1.s64 + 416;
	// lhz r9,7912(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 7912);
	// lvx128 v63,r5,r20
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r20.u32) & ~0xF), VectorMaskL));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bne cr6,0x82a0bb48
	if (!ctx.cr6.eq) goto loc_82A0BB48;
	// stvx128 v63,r8,r21
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r21.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r8,r22
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r22.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r8,r23
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r23.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82a0bbc0
	goto loc_82A0BBC0;
loc_82A0BB48:
	// lfs f12,-4(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,416(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82a0bb5c
	if (!ctx.cr6.lt) goto loc_82A0BB5C;
	// stfs f0,-4(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + -4, temp.u32);
loc_82A0BB5C:
	// lfs f12,-4(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82a0bb6c
	if (!ctx.cr6.gt) goto loc_82A0BB6C;
	// stfs f0,28(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 28, temp.u32);
loc_82A0BB6C:
	// lfs f12,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,420(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82a0bb80
	if (!ctx.cr6.lt) goto loc_82A0BB80;
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
loc_82A0BB80:
	// lfs f12,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82a0bb90
	if (!ctx.cr6.gt) goto loc_82A0BB90;
	// stfs f0,32(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 32, temp.u32);
loc_82A0BB90:
	// lfs f12,4(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,424(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 424);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82a0bba4
	if (!ctx.cr6.lt) goto loc_82A0BBA4;
	// stfs f0,4(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
loc_82A0BBA4:
	// lfs f12,4(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82a0bbb4
	if (!ctx.cr6.gt) goto loc_82A0BBB4;
	// stfs f0,36(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 36, temp.u32);
loc_82A0BBB4:
	// lvx128 v62,r8,r23
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r23.u32) & ~0xF), VectorMaskL));
	// vaddfp128 v61,v62,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v61.f32, _mm_add_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v63.f32)));
	// stvx128 v61,r8,r23
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r23.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82A0BBC0:
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r10,148(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 148);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a0bbe0
	if (ctx.cr6.eq) goto loc_82A0BBE0;
	// stfs f13,136(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 136, temp.u32);
	// stw r11,148(r8)
	PPC_STORE_U32(ctx.r8.u32 + 148, ctx.r11.u32);
	// stfs f13,140(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 140, temp.u32);
	// stw r19,144(r8)
	PPC_STORE_U32(ctx.r8.u32 + 144, ctx.r19.u32);
loc_82A0BBE0:
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// vspltisw128 v60,1
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_set1_epi32(int(0x1)));
	// lfs f12,136(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// vspltisw128 v59,0
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_set1_epi32(int(0x0)));
	// fadds f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f11,136(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 136, temp.u32);
	// lvlx128 v58,r0,r30
	temp.u32 = ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r10,r1,400
	ctx.r10.s64 = ctx.r1.s64 + 400;
	// lvx128 v57,r5,r25
	simd::store_shuffled(ctx.v57, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r25.u32) & ~0xF), VectorMaskL));
	// vcsxwfp128 v10,v60,1
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v60.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3F000000)))));
	// lvx128 v56,r5,r26
	simd::store_shuffled(ctx.v56, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r26.u32) & ~0xF), VectorMaskL));
	// lwz r11,144(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 144);
	// lvx128 v55,r5,r27
	simd::store_shuffled(ctx.v55, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r27.u32) & ~0xF), VectorMaskL));
	// vaddfp128 v54,v55,v56
	_mm_store_ps(ctx.v54.f32, _mm_add_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v56.f32)));
	// vspltw128 v53,v58,0
	_mm_store_si128((__m128i*)ctx.v53.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), 0xFF));
	// lfs f10,140(r8)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 140);
	ctx.f10.f64 = double(temp.f32);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// stw r9,144(r8)
	PPC_STORE_U32(ctx.r8.u32 + 144, ctx.r9.u32);
	// vmulfp128 v52,v54,v53
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v52.f32, _mm_mul_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v53.f32)));
	// vsubfp128 v51,v57,v52
	_mm_store_ps(ctx.v51.f32, _mm_sub_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v52.f32)));
	// vmsum3fp128 v50,v51,v51
	_mm_store_ps(ctx.v50.f32, _mm_dp_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v51.f32), 0xEF));
	// vrsqrtefp128 v0,v50
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v50.f32))));
	// vor128 v11,v50,v50
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v50.u8));
	// vmulfp128 v13,v50,v10
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v10.f32)));
	// vcmpeqfp128 v9,v50,v59
	_mm_store_ps(ctx.v9.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v59.f32)));
	// vmulfp128 v12,v0,v0
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v10,v13,v12,v10
	_mm_store_ps(ctx.v10.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v10.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v10,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v0,v50,v0
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v0.f32)));
	// vsel v13,v0,v11,v9
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v11.u8))));
	// stvx128 v13,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f9,400(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stfs f8,140(r8)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r8.u32 + 140, temp.u32);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
loc_82A0BC70:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r5,r5,448
	ctx.r5.s64 = ctx.r5.s64 + 448;
	// bne 0x82a0b9e8
	if (!ctx.cr0.eq) goto loc_82A0B9E8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0bce4
	if (ctx.cr6.eq) goto loc_82A0BCE4;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r31,7872
	ctx.r11.s64 = ctx.r31.s64 + 7872;
	// clrlwi r9,r28,30
	ctx.r9.u64 = ctx.r28.u32 & 0x3;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// stwx r8,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// beq cr6,0x82a0bcb4
	if (ctx.cr6.eq) goto loc_82A0BCB4;
	// lwz r11,7896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7896);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,7896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7896, ctx.r11.u32);
loc_82A0BCB4:
	// rlwinm r11,r28,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0bccc
	if (ctx.cr6.eq) goto loc_82A0BCCC;
	// lwz r11,7900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7900);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,7900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7900, ctx.r11.u32);
loc_82A0BCCC:
	// rlwinm r11,r28,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0bce4
	if (ctx.cr6.eq) goto loc_82A0BCE4;
	// lwz r11,7904(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7904);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,7904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7904, ctx.r11.u32);
loc_82A0BCE4:
	// addi r6,r29,16
	ctx.r6.s64 = ctx.r29.s64 + 16;
	// vspltisw128 v49,0
	_mm_store_si128((__m128i*)ctx.v49.u32, _mm_set1_epi32(int(0x0)));
	// vpermwi128 v48,v49,24
	_mm_store_si128((__m128i*)ctx.v48.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v49.u32), 0xE7));
	// lvx128 v47,r0,r6
	simd::store_shuffled(ctx.v47, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v46,v47,24
	_mm_store_si128((__m128i*)ctx.v46.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v47.u32), 0xE7));
	// vcmpeqfp128. v45,v46,v48
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v45.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v46.f32), _mm_load_ps(ctx.v48.f32)));
	ctx.cr6.setFromMask(_mm_load_ps(ctx.v45.f32), 0xF);
	// blt cr6,0x82a0bd0c
	if (ctx.cr6.lt) goto loc_82A0BD0C;
	// lwz r11,7908(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7908);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,7908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7908, ctx.r11.u32);
loc_82A0BD0C:
	// lis r10,-28254
	ctx.r10.s64 = -1851654144;
	// lwz r11,7872(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7872);
	// ori r9,r10,46021
	ctx.r9.u64 = ctx.r10.u64 | 46021;
	// mulhwu r8,r11,r9
	ctx.r8.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// rlwinm r7,r8,21,11,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 21) & 0x1FFFFF;
	// mulli r5,r7,3600
	ctx.r5.s64 = ctx.r7.s64 * 3600;
	// subf. r4,r5,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r5.s64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82a0c124
	if (!ctx.cr0.eq) goto loc_82A0C124;
	// lhz r5,7912(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 7912);
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// addi r4,r1,334
	ctx.r4.s64 = ctx.r1.s64 + 334;
	// sth r19,332(r1)
	PPC_STORE_U16(ctx.r1.u32 + 332, ctx.r19.u16);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r19,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r19.u32);
	// addi r7,r1,340
	ctx.r7.s64 = ctx.r1.s64 + 340;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// std r5,344(r1)
	PPC_STORE_U64(ctx.r1.u32 + 344, ctx.r5.u64);
	// lfd f13,344(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 344);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f0,24436(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24436);
	ctx.f0.f64 = double(temp.f32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// sth r19,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r19.u16);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r19,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r19.u32);
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// lfs f12,-9880(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -9880);
	ctx.f12.f64 = double(temp.f32);
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// addi r7,r1,332
	ctx.r7.s64 = ctx.r1.s64 + 332;
	// lfs f9,-8020(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -8020);
	ctx.f9.f64 = double(temp.f32);
	// addi r8,r1,336
	ctx.r8.s64 = ctx.r1.s64 + 336;
	// addi r11,r31,7840
	ctx.r11.s64 = ctx.r31.s64 + 7840;
	// fdivs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// lfs f11,-25404(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -25404);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,-24084(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -24084);
	ctx.f0.f64 = double(temp.f32);
loc_82A0BD9C:
	// lfs f13,-64(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -64);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x82a0bdb0
	if (!ctx.cr6.lt) goto loc_82A0BDB0;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// b 0x82a0bdbc
	goto loc_82A0BDBC;
loc_82A0BDB0:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82a0bdbc
	if (!ctx.cr6.gt) goto loc_82A0BDBC;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_82A0BDBC:
	// fadds f8,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// addi r9,r1,330
	ctx.r9.s64 = ctx.r1.s64 + 330;
	// lfs f13,-32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// fmuls f7,f8,f11
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fctidz f6,f7
	ctx.f6.s64 = (ctx.f7.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f7.f64));
	// stfd f6,344(r1)
	PPC_STORE_U64(ctx.r1.u32 + 344, ctx.f6.u64);
	// lbz r5,351(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 351);
	// stbx r5,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r5.u8);
	// bge cr6,0x82a0bdec
	if (!ctx.cr6.lt) goto loc_82A0BDEC;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// b 0x82a0bdf8
	goto loc_82A0BDF8;
loc_82A0BDEC:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82a0bdf8
	if (!ctx.cr6.gt) goto loc_82A0BDF8;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_82A0BDF8:
	// fadds f8,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f13,f7,f10
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// addi r9,r1,328
	ctx.r9.s64 = ctx.r1.s64 + 328;
	// fmuls f6,f8,f11
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// fctidz f5,f6
	ctx.f5.s64 = (ctx.f6.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f6.f64));
	// stfd f5,344(r1)
	PPC_STORE_U64(ctx.r1.u32 + 344, ctx.f5.u64);
	// lbz r5,351(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 351);
	// stbx r5,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r5.u8);
	// bge cr6,0x82a0be2c
	if (!ctx.cr6.lt) goto loc_82A0BE2C;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// b 0x82a0be38
	goto loc_82A0BE38;
loc_82A0BE2C:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82a0be38
	if (!ctx.cr6.gt) goto loc_82A0BE38;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_82A0BE38:
	// fadds f8,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// addi r9,r1,326
	ctx.r9.s64 = ctx.r1.s64 + 326;
	// lfs f13,-56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -56);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// fmuls f7,f8,f11
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fctidz f6,f7
	ctx.f6.s64 = (ctx.f7.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f7.f64));
	// stfd f6,344(r1)
	PPC_STORE_U64(ctx.r1.u32 + 344, ctx.f6.u64);
	// lbz r5,351(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 351);
	// stbx r5,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r5.u8);
	// bge cr6,0x82a0be68
	if (!ctx.cr6.lt) goto loc_82A0BE68;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// b 0x82a0be74
	goto loc_82A0BE74;
loc_82A0BE68:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82a0be74
	if (!ctx.cr6.gt) goto loc_82A0BE74;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_82A0BE74:
	// fadds f8,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// addi r9,r1,320
	ctx.r9.s64 = ctx.r1.s64 + 320;
	// lfs f13,-24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// fmuls f7,f8,f11
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fctidz f6,f7
	ctx.f6.s64 = (ctx.f7.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f7.f64));
	// stfd f6,344(r1)
	PPC_STORE_U64(ctx.r1.u32 + 344, ctx.f6.u64);
	// lbz r5,351(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 351);
	// stbx r5,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r5.u8);
	// bge cr6,0x82a0bea4
	if (!ctx.cr6.lt) goto loc_82A0BEA4;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// b 0x82a0beb0
	goto loc_82A0BEB0;
loc_82A0BEA4:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82a0beb0
	if (!ctx.cr6.gt) goto loc_82A0BEB0;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_82A0BEB0:
	// fadds f8,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f13,f7,f10
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// addi r9,r1,324
	ctx.r9.s64 = ctx.r1.s64 + 324;
	// fmuls f6,f8,f11
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// fctidz f5,f6
	ctx.f5.s64 = (ctx.f6.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f6.f64));
	// stfd f5,344(r1)
	PPC_STORE_U64(ctx.r1.u32 + 344, ctx.f5.u64);
	// lbz r5,351(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 351);
	// stbx r5,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r5.u8);
	// bge cr6,0x82a0bee4
	if (!ctx.cr6.lt) goto loc_82A0BEE4;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// b 0x82a0bef0
	goto loc_82A0BEF0;
loc_82A0BEE4:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82a0bef0
	if (!ctx.cr6.gt) goto loc_82A0BEF0;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_82A0BEF0:
	// fadds f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// addi r5,r1,322
	ctx.r5.s64 = ctx.r1.s64 + 322;
	// lwz r9,84(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// fmuls f8,f13,f11
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fctidz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f8.f64));
	// stfd f7,344(r1)
	PPC_STORE_U64(ctx.r1.u32 + 344, ctx.f7.u64);
	// lbz r4,351(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 351);
	// stbx r4,r10,r5
	PPC_STORE_U8(ctx.r10.u32 + ctx.r5.u32, ctx.r4.u8);
	// beq cr6,0x82a0bf60
	if (ctx.cr6.eq) goto loc_82A0BF60;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// lfs f13,76(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// lfs f8,80(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// std r9,352(r1)
	PPC_STORE_U64(ctx.r1.u32 + 352, ctx.r9.u64);
	// lfd f6,352(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 352);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// fdivs f3,f13,f4
	ctx.f3.f64 = double(float(ctx.f13.f64 / ctx.f4.f64));
	// fdivs f2,f7,f4
	ctx.f2.f64 = double(float(ctx.f7.f64 / ctx.f4.f64));
	// fctidz f1,f3
	ctx.f1.s64 = (ctx.f3.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f3.f64));
	// stfd f1,344(r1)
	PPC_STORE_U64(ctx.r1.u32 + 344, ctx.f1.u64);
	// fctidz f13,f2
	ctx.f13.s64 = (ctx.f2.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f2.f64));
	// lwz r5,348(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// stfd f13,344(r1)
	PPC_STORE_U64(ctx.r1.u32 + 344, ctx.f13.u64);
	// lhz r4,350(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 350);
	// sth r4,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, ctx.r4.u16);
	// stw r5,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r5.u32);
loc_82A0BF60:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// bdnz 0x82a0bd9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A0BD9C;
	// addi r11,r1,424
	ctx.r11.s64 = ctx.r1.s64 + 424;
	// std r19,416(r1)
	PPC_STORE_U64(ctx.r1.u32 + 416, ctx.r19.u64);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f13,20(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,28(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// lfs f12,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f7,f10,f9
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// lfs f11,24(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// std r19,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r19.u64);
	// lfs f0,-7576(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -7576);
	ctx.f0.f64 = double(temp.f32);
	// lfs f8,32(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f5,f13,f0
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f6,36(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f3,f12,f0
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f4,40(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f2,f11,f0
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f1,f8,f0
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f13,f6,f0
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f12,f4,f0
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fctiwz f11,f7
	ctx.f11.s64 = (ctx.f7.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f7.f64));
	// stfd f11,352(r1)
	PPC_STORE_U64(ctx.r1.u32 + 352, ctx.f11.u64);
	// lhz r30,358(r1)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r1.u32 + 358);
	// fctiwz f10,f5
	ctx.f10.s64 = (ctx.f5.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f5.f64));
	// stfd f10,400(r1)
	PPC_STORE_U64(ctx.r1.u32 + 400, ctx.f10.u64);
	// fctiwz f9,f3
	ctx.f9.s64 = (ctx.f3.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f3.f64));
	// stfd f9,344(r1)
	PPC_STORE_U64(ctx.r1.u32 + 344, ctx.f9.u64);
	// fctiwz f8,f2
	ctx.f8.s64 = (ctx.f2.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f2.f64));
	// stfd f8,360(r1)
	PPC_STORE_U64(ctx.r1.u32 + 360, ctx.f8.u64);
	// fctiwz f7,f1
	ctx.f7.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f7,368(r1)
	PPC_STORE_U64(ctx.r1.u32 + 368, ctx.f7.u64);
	// fctiwz f6,f13
	ctx.f6.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f6,376(r1)
	PPC_STORE_U64(ctx.r1.u32 + 376, ctx.f6.u64);
	// fctiwz f5,f12
	ctx.f5.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfd f5,384(r1)
	PPC_STORE_U64(ctx.r1.u32 + 384, ctx.f5.u64);
	// lhz r29,350(r1)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r1.u32 + 350);
	// lhz r28,366(r1)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r1.u32 + 366);
	// lhz r27,374(r1)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r1.u32 + 374);
	// lhz r26,382(r1)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r1.u32 + 382);
	// lhz r25,390(r1)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r1.u32 + 390);
	// lhz r24,406(r1)
	ctx.r24.u64 = PPC_LOAD_U16(ctx.r1.u32 + 406);
	// bl 0x83178d74
	ctx.lr = 0x82A0C01C;
	__imp__XamGetActiveDashAppInfo(ctx, base);
	// lhz r11,334(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 334);
	// addi r3,r31,10536
	ctx.r3.s64 = ctx.r31.s64 + 10536;
	// lwz r23,340(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lhz r22,332(r1)
	ctx.r22.u64 = PPC_LOAD_U16(ctx.r1.u32 + 332);
	// lwz r21,336(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// lbz r20,323(r1)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r1.u32 + 323);
	// sth r11,238(r1)
	PPC_STORE_U16(ctx.r1.u32 + 238, ctx.r11.u16);
	// lbz r19,325(r1)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r1.u32 + 325);
	// sth r25,294(r1)
	PPC_STORE_U16(ctx.r1.u32 + 294, ctx.r25.u16);
	// sth r26,286(r1)
	PPC_STORE_U16(ctx.r1.u32 + 286, ctx.r26.u16);
	// sth r27,278(r1)
	PPC_STORE_U16(ctx.r1.u32 + 278, ctx.r27.u16);
	// sth r30,270(r1)
	PPC_STORE_U16(ctx.r1.u32 + 270, ctx.r30.u16);
	// sth r28,262(r1)
	PPC_STORE_U16(ctx.r1.u32 + 262, ctx.r28.u16);
	// sth r29,246(r1)
	PPC_STORE_U16(ctx.r1.u32 + 246, ctx.r29.u16);
	// lwz r10,7896(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7896);
	// lwz r9,7892(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7892);
	// lwz r8,7888(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7888);
	// lwz r7,7884(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7884);
	// lwz r6,7880(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7880);
	// lwz r5,7876(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7876);
	// lhz r11,7912(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 7912);
	// lwz r4,7872(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7872);
	// lbz r18,321(r1)
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r1.u32 + 321);
	// lbz r17,320(r1)
	ctx.r17.u64 = PPC_LOAD_U8(ctx.r1.u32 + 320);
	// lwz r27,424(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 424);
	// sth r11,110(r1)
	PPC_STORE_U16(ctx.r1.u32 + 110, ctx.r11.u16);
	// ld r26,416(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + 416);
	// lwz r30,7908(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7908);
	// lwz r29,7904(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7904);
	// lwz r28,7900(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7900);
	// lbz r11,327(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 327);
	// lbz r25,329(r1)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r1.u32 + 329);
	// sth r24,254(r1)
	PPC_STORE_U16(ctx.r1.u32 + 254, ctx.r24.u16);
	// stw r23,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r23.u32);
	// sth r22,222(r1)
	PPC_STORE_U16(ctx.r1.u32 + 222, ctx.r22.u16);
	// stw r21,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r21.u32);
	// stb r20,207(r1)
	PPC_STORE_U8(ctx.r1.u32 + 207, ctx.r20.u8);
	// stb r19,199(r1)
	PPC_STORE_U8(ctx.r1.u32 + 199, ctx.r19.u8);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// lbz r24,331(r1)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r1.u32 + 331);
	// lbz r23,322(r1)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r1.u32 + 322);
	// lbz r22,324(r1)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r1.u32 + 324);
	// lbz r21,326(r1)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r1.u32 + 326);
	// lbz r20,328(r1)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r1.u32 + 328);
	// lbz r19,330(r1)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r1.u32 + 330);
	// stb r11,183(r1)
	PPC_STORE_U8(ctx.r1.u32 + 183, ctx.r11.u8);
	// stb r17,143(r1)
	PPC_STORE_U8(ctx.r1.u32 + 143, ctx.r17.u8);
	// stb r18,191(r1)
	PPC_STORE_U8(ctx.r1.u32 + 191, ctx.r18.u8);
	// stb r25,175(r1)
	PPC_STORE_U8(ctx.r1.u32 + 175, ctx.r25.u8);
	// stb r24,167(r1)
	PPC_STORE_U8(ctx.r1.u32 + 167, ctx.r24.u8);
	// stb r23,159(r1)
	PPC_STORE_U8(ctx.r1.u32 + 159, ctx.r23.u8);
	// stb r22,151(r1)
	PPC_STORE_U8(ctx.r1.u32 + 151, ctx.r22.u8);
	// stw r27,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r27.u32);
	// std r26,296(r1)
	PPC_STORE_U64(ctx.r1.u32 + 296, ctx.r26.u64);
	// stb r21,135(r1)
	PPC_STORE_U8(ctx.r1.u32 + 135, ctx.r21.u8);
	// stb r20,127(r1)
	PPC_STORE_U8(ctx.r1.u32 + 127, ctx.r20.u8);
	// stb r19,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r19.u8);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82a0b120
	ctx.lr = 0x82A0C10C;
	sub_82A0B120(ctx, base);
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,7776
	ctx.r3.s64 = ctx.r31.s64 + 7776;
	// lwz r30,7872(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7872);
	// bl 0x82a75988
	ctx.lr = 0x82A0C120;
	sub_82A75988(ctx, base);
	// stw r30,7872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7872, ctx.r30.u32);
loc_82A0C124:
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// b 0x82fa769c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0C12C"))) PPC_WEAK_FUNC(sub_82A0C12C);
PPC_FUNC_IMPL(__imp__sub_82A0C12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0C130"))) PPC_WEAK_FUNC(sub_82A0C130);
PPC_FUNC_IMPL(__imp__sub_82A0C130) {
	PPC_FUNC_PROLOGUE();
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0C13C"))) PPC_WEAK_FUNC(sub_82A0C13C);
PPC_FUNC_IMPL(__imp__sub_82A0C13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0C140"))) PPC_WEAK_FUNC(sub_82A0C140);
PPC_FUNC_IMPL(__imp__sub_82A0C140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r3,r11,23768
	ctx.r3.s64 = ctx.r11.s64 + 23768;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0C14C"))) PPC_WEAK_FUNC(sub_82A0C14C);
PPC_FUNC_IMPL(__imp__sub_82A0C14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0C150"))) PPC_WEAK_FUNC(sub_82A0C150);
PPC_FUNC_IMPL(__imp__sub_82A0C150) {
	PPC_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,2524
	ctx.r11.s64 = ctx.r3.s64 + 2524;
loc_82A0C158:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82a0c17c
	if (ctx.cr6.eq) goto loc_82A0C17C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x82a0c158
	if (ctx.cr6.lt) goto loc_82A0C158;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A0C17C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0C184"))) PPC_WEAK_FUNC(sub_82A0C184);
PPC_FUNC_IMPL(__imp__sub_82A0C184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0C188"))) PPC_WEAK_FUNC(sub_82A0C188);
PPC_FUNC_IMPL(__imp__sub_82A0C188) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,2348
	ctx.r10.s64 = ctx.r3.s64 + 2348;
loc_82A0C190:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82a0c1b4
	if (ctx.cr6.eq) goto loc_82A0C1B4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x82a0c190
	if (ctx.cr6.lt) goto loc_82A0C190;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A0C1B4:
	// mulli r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 * 88;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,2336
	ctx.r3.s64 = ctx.r11.s64 + 2336;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0C1C4"))) PPC_WEAK_FUNC(sub_82A0C1C4);
PPC_FUNC_IMPL(__imp__sub_82A0C1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0C1C8"))) PPC_WEAK_FUNC(sub_82A0C1C8);
PPC_FUNC_IMPL(__imp__sub_82A0C1C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82a0c1d8
	if (!ctx.cr6.eq) goto loc_82A0C1D8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A0C1D8:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,19102
	ctx.r11.u64 = ctx.r11.u64 | 19102;
	// lbzx r11,r3,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82a0c1f4
	if (ctx.cr0.eq) goto loc_82A0C1F4;
loc_82A0C1EC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82A0C1F4:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,19108
	ctx.r11.u64 = ctx.r11.u64 | 19108;
	// lwzx r11,r3,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a0c1ec
	if (!ctx.cr6.eq) goto loc_82A0C1EC;
	// addi r10,r3,2348
	ctx.r10.s64 = ctx.r3.s64 + 2348;
loc_82A0C20C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82a0c238
	if (ctx.cr6.eq) goto loc_82A0C238;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x82a0c20c
	if (ctx.cr6.lt) goto loc_82A0C20C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A0C22C:
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
loc_82A0C238:
	// mulli r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 * 88;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,2336
	ctx.r11.s64 = ctx.r11.s64 + 2336;
	// b 0x82a0c22c
	goto loc_82A0C22C;
}

__attribute__((alias("__imp__sub_82A0C248"))) PPC_WEAK_FUNC(sub_82A0C248);
PPC_FUNC_IMPL(__imp__sub_82A0C248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r5,28
	ctx.r5.s64 = 28;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// addis r6,r11,9
	ctx.r6.s64 = ctx.r11.s64 + 589824;
	// addi r6,r6,-2656
	ctx.r6.s64 = ctx.r6.s64 + -2656;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mulli r9,r10,36
	ctx.r9.s64 = ctx.r10.s64 * 36;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addis r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 589824;
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// addi r11,r11,-2652
	ctx.r11.s64 = ctx.r11.s64 + -2652;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// b 0x82a75220
	sub_82A75220(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0C294"))) PPC_WEAK_FUNC(sub_82A0C294);
PPC_FUNC_IMPL(__imp__sub_82A0C294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0C298"))) PPC_WEAK_FUNC(sub_82A0C298);
PPC_FUNC_IMPL(__imp__sub_82A0C298) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r7,16
	ctx.r11.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplwi cr6,r11,6400
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6400, ctx.xer);
	// blt cr6,0x82a0c2b4
	if (ctx.cr6.lt) goto loc_82A0C2B4;
	// cmpwi cr6,r11,32007
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32007, ctx.xer);
	// bge cr6,0x82a0c2bc
	if (!ctx.cr6.lt) goto loc_82A0C2BC;
	// cmplwi cr6,r11,6400
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6400, ctx.xer);
	// bge cr6,0x82a0c2c0
	if (!ctx.cr6.lt) goto loc_82A0C2C0;
loc_82A0C2B4:
	// li r11,6400
	ctx.r11.s64 = 6400;
	// b 0x82a0c2c0
	goto loc_82A0C2C0;
loc_82A0C2BC:
	// li r11,32007
	ctx.r11.s64 = 32007;
loc_82A0C2C0:
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x82a09988
	sub_82A09988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0C2C8"))) PPC_WEAK_FUNC(sub_82A0C2C8);
PPC_FUNC_IMPL(__imp__sub_82A0C2C8) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82a82d10
	ctx.lr = 0x82A0C2FC;
	sub_82A82D10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82a0c314
	if (!ctx.cr6.eq) goto loc_82A0C314;
	// lis r31,-31999
	ctx.r31.s64 = -2097086464;
	// ori r31,r31,15
	ctx.r31.u64 = ctx.r31.u64 | 15;
	// b 0x82a0c3a4
	goto loc_82A0C3A4;
loc_82A0C314:
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a75988
	ctx.lr = 0x82A0C324;
	sub_82A75988(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,127
	ctx.r5.s64 = 127;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a83030
	ctx.lr = 0x82A0C33C;
	sub_82A83030(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82a0c34c
	if (!ctx.cr0.eq) goto loc_82A0C34C;
	// lis r31,-31999
	ctx.r31.s64 = -2097086464;
	// ori r31,r31,15
	ctx.r31.u64 = ctx.r31.u64 | 15;
loc_82A0C34C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a756a0
	ctx.lr = 0x82A0C354;
	sub_82A756A0(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82a0c3a4
	if (ctx.cr6.lt) goto loc_82A0C3A4;
	// li r11,-1
	ctx.r11.s64 = -1;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r10,-25400
	ctx.r4.s64 = ctx.r10.s64 + -25400;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82fa6b58
	ctx.lr = 0x82A0C388;
	sub_82FA6B58(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82a0c39c
	if (!ctx.cr6.eq) goto loc_82A0C39C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82a0c3a4
	if (ctx.cr6.eq) goto loc_82A0C3A4;
loc_82A0C39C:
	// lis r31,-31999
	ctx.r31.s64 = -2097086464;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
loc_82A0C3A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
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

__attribute__((alias("__imp__sub_82A0C3C0"))) PPC_WEAK_FUNC(sub_82A0C3C0);
PPC_FUNC_IMPL(__imp__sub_82A0C3C0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0c434
	if (ctx.cr6.eq) goto loc_82A0C434;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82A0C3CC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a0c3cc
	if (!ctx.cr6.eq) goto loc_82A0C3CC;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,80(r4)
	PPC_STORE_U32(ctx.r4.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// bge cr6,0x82a0c434
	if (!ctx.cr6.lt) goto loc_82A0C434;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0c434
	if (ctx.cr6.eq) goto loc_82A0C434;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
loc_82A0C400:
	// lbzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x82a0c434
	if (!ctx.cr6.lt) goto loc_82A0C434;
	// lwz r11,80(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82a0c400
	if (ctx.cr6.lt) goto loc_82A0C400;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A0C434:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0C440"))) PPC_WEAK_FUNC(sub_82A0C440);
PPC_FUNC_IMPL(__imp__sub_82A0C440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A0C448;
	__savegprlr_29(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r7,120
	ctx.r7.s64 = 120;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r30,r4,8
	ctx.r30.s64 = ctx.r4.s64 + 8;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r29,r4,4
	ctx.r29.s64 = ctx.r4.s64 + 4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r4,20
	ctx.r10.s64 = ctx.r4.s64 + 20;
	// addi r9,r4,12
	ctx.r9.s64 = ctx.r4.s64 + 12;
	// addi r8,r4,16
	ctx.r8.s64 = ctx.r4.s64 + 16;
	// addi r4,r11,-25388
	ctx.r4.s64 = ctx.r11.s64 + -25388;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82fa6b58
	ctx.lr = 0x82A0C48C;
	sub_82FA6B58(ctx, base);
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// beq cr6,0x82a0c4a0
	if (ctx.cr6.eq) goto loc_82A0C4A0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82a0c55c
	goto loc_82A0C55C;
loc_82A0C4A0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// mulli r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 * 3;
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// mulli r11,r9,100
	ctx.r11.s64 = ctx.r9.s64 * 100;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mulli r11,r7,100
	ctx.r11.s64 = ctx.r7.s64 * 100;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r30,r8,-30056
	ctx.r30.s64 = ctx.r8.s64 + -30056;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82fa8460
	ctx.lr = 0x82A0C4E4;
	sub_82FA8460(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82fa8460
	ctx.lr = 0x82A0C4F8;
	sub_82FA8460(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82fa8460
	ctx.lr = 0x82A0C50C;
	sub_82FA8460(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a0c3c0
	ctx.lr = 0x82A0C520;
	sub_82A0C3C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a0c55c
	if (ctx.cr0.lt) goto loc_82A0C55C;
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a0c3c0
	ctx.lr = 0x82A0C534;
	sub_82A0C3C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a0c55c
	if (ctx.cr0.lt) goto loc_82A0C55C;
	// addi r4,r31,196
	ctx.r4.s64 = ctx.r31.s64 + 196;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x82a0c3c0
	ctx.lr = 0x82A0C548;
	sub_82A0C3C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a0c55c
	if (ctx.cr0.lt) goto loc_82A0C55C;
	// addi r4,r31,280
	ctx.r4.s64 = ctx.r31.s64 + 280;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82a0c3c0
	ctx.lr = 0x82A0C55C;
	sub_82A0C3C0(ctx, base);
loc_82A0C55C:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0C564"))) PPC_WEAK_FUNC(sub_82A0C564);
PPC_FUNC_IMPL(__imp__sub_82A0C564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0C568"))) PPC_WEAK_FUNC(sub_82A0C568);
PPC_FUNC_IMPL(__imp__sub_82A0C568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A0C570;
	__savegprlr_29(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,120
	ctx.r11.s64 = 120;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r4,257
	ctx.r4.s64 = 257;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82a842f0
	ctx.lr = 0x82A0C5A0;
	sub_82A842F0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82a0c5bc
	if (ctx.cr0.lt) goto loc_82A0C5BC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a0c440
	ctx.lr = 0x82A0C5B4;
	sub_82A0C440(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82a0c5cc
	if (!ctx.cr0.lt) goto loc_82A0C5CC;
loc_82A0C5BC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a0c440
	ctx.lr = 0x82A0C5C8;
	sub_82A0C440(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82A0C5CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0C5D8"))) PPC_WEAK_FUNC(sub_82A0C5D8);
PPC_FUNC_IMPL(__imp__sub_82A0C5D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82A0C5E0;
	__savegprlr_23(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
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
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A0C600;
	sub_82FA7CF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r5,r11,-25296
	ctx.r5.s64 = ctx.r11.s64 + -25296;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// li r6,10
	ctx.r6.s64 = 10;
	// li r4,257
	ctx.r4.s64 = 257;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82a842f0
	ctx.lr = 0x82A0C620;
	sub_82A842F0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r30,r31,20
	ctx.r30.s64 = ctx.r31.s64 + 20;
	// addi r25,r11,-25320
	ctx.r25.s64 = ctx.r11.s64 + -25320;
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// addi r28,r31,12
	ctx.r28.s64 = ctx.r31.s64 + 12;
	// addi r27,r31,8
	ctx.r27.s64 = ctx.r31.s64 + 8;
	// addi r26,r31,4
	ctx.r26.s64 = ctx.r31.s64 + 4;
	// addi r24,r31,32
	ctx.r24.s64 = ctx.r31.s64 + 32;
	// addi r23,r31,28
	ctx.r23.s64 = ctx.r31.s64 + 28;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82fa6b58
	ctx.lr = 0x82A0C670;
	sub_82FA6B58(ctx, base);
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// beq cr6,0x82a0c6a8
	if (ctx.cr6.eq) goto loc_82A0C6A8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// addi r3,r11,-25352
	ctx.r3.s64 = ctx.r11.s64 + -25352;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82fa6b58
	ctx.lr = 0x82A0C6A8;
	sub_82FA6B58(ctx, base);
loc_82A0C6A8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// mulli r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 * 3;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r5,r10,-25364
	ctx.r5.s64 = ctx.r10.s64 + -25364;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// li r6,12
	ctx.r6.s64 = 12;
	// li r4,257
	ctx.r4.s64 = 257;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82a842f0
	ctx.lr = 0x82A0C6D4;
	sub_82A842F0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// addi r30,r11,26556
	ctx.r30.s64 = ctx.r11.s64 + 26556;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82fa6b58
	ctx.lr = 0x82A0C6F0;
	sub_82FA6B58(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82a0c70c
	if (ctx.cr6.eq) goto loc_82A0C70C;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,-23432
	ctx.r3.s64 = ctx.r11.s64 + -23432;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82fa6b58
	ctx.lr = 0x82A0C70C;
	sub_82FA6B58(ctx, base);
loc_82A0C70C:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0C714"))) PPC_WEAK_FUNC(sub_82A0C714);
PPC_FUNC_IMPL(__imp__sub_82A0C714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0C718"))) PPC_WEAK_FUNC(sub_82A0C718);
PPC_FUNC_IMPL(__imp__sub_82A0C718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82A0C720;
	__savegprlr_25(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
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
	ctx.lr = 0x82A0C748;
	sub_82FA7CF0(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82A0C74C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a0c74c
	if (!ctx.cr6.eq) goto loc_82A0C74C;
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
	ctx.lr = 0x82A0C784;
	sub_82A842F0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// addi r26,r11,-25284
	ctx.r26.s64 = ctx.r11.s64 + -25284;
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
	ctx.lr = 0x82A0C7BC;
	sub_82FA6B58(ctx, base);
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// beq cr6,0x82a0c7e4
	if (ctx.cr6.eq) goto loc_82A0C7E4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
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
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82fa6b58
	ctx.lr = 0x82A0C7E4;
	sub_82FA6B58(ctx, base);
loc_82A0C7E4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82a0c804
	if (ctx.cr6.gt) goto loc_82A0C804;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82a0c84c
	if (!ctx.cr6.gt) goto loc_82A0C84C;
loc_82A0C804:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
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
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82fa6b58
	ctx.lr = 0x82A0C824;
	sub_82FA6B58(ctx, base);
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// beq cr6,0x82a0c84c
	if (ctx.cr6.eq) goto loc_82A0C84C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
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
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82fa6b58
	ctx.lr = 0x82A0C84C;
	sub_82FA6B58(ctx, base);
loc_82A0C84C:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0C854"))) PPC_WEAK_FUNC(sub_82A0C854);
PPC_FUNC_IMPL(__imp__sub_82A0C854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0C858"))) PPC_WEAK_FUNC(sub_82A0C858);
PPC_FUNC_IMPL(__imp__sub_82A0C858) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r4,r11,-25156
	ctx.r4.s64 = ctx.r11.s64 + -25156;
	// addi r3,r10,-25172
	ctx.r3.s64 = ctx.r10.s64 + -25172;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82a0c718
	ctx.lr = 0x82A0C884;
	sub_82A0C718(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r5,r31,40
	ctx.r5.s64 = ctx.r31.s64 + 40;
	// addi r4,r11,-25188
	ctx.r4.s64 = ctx.r11.s64 + -25188;
	// addi r3,r10,-25208
	ctx.r3.s64 = ctx.r10.s64 + -25208;
	// bl 0x82a0c718
	ctx.lr = 0x82A0C89C;
	sub_82A0C718(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r5,r31,60
	ctx.r5.s64 = ctx.r31.s64 + 60;
	// addi r4,r11,-25224
	ctx.r4.s64 = ctx.r11.s64 + -25224;
	// addi r3,r10,-25240
	ctx.r3.s64 = ctx.r10.s64 + -25240;
	// bl 0x82a0c718
	ctx.lr = 0x82A0C8B4;
	sub_82A0C718(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r5,r31,20
	ctx.r5.s64 = ctx.r31.s64 + 20;
	// addi r4,r11,-25252
	ctx.r4.s64 = ctx.r11.s64 + -25252;
	// addi r3,r10,-25268
	ctx.r3.s64 = ctx.r10.s64 + -25268;
	// bl 0x82a0c718
	ctx.lr = 0x82A0C8CC;
	sub_82A0C718(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// or r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 | ctx.r9.u64;
	// lwz r8,60(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// and. r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// or r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 | ctx.r10.u64;
	// or r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 | ctx.r8.u64;
	// addi r7,r7,-8191
	ctx.r7.s64 = ctx.r7.s64 + -8191;
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// bne 0x82a0c928
	if (!ctx.cr0.eq) goto loc_82A0C928;
	// and. r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x82a0c928
	if (!ctx.cr0.eq) goto loc_82A0C928;
	// and. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a0c928
	if (!ctx.cr0.eq) goto loc_82A0C928;
	// and. r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a0c928
	if (!ctx.cr0.eq) goto loc_82A0C928;
	// and. r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a0c928
	if (!ctx.cr0.eq) goto loc_82A0C928;
	// and. r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x82a0c92c
	if (ctx.cr0.eq) goto loc_82A0C92C;
loc_82A0C928:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A0C92C:
	// clrlwi. r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82a0c944
	if (ctx.cr0.eq) goto loc_82A0C944;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a0c944
	if (ctx.cr0.eq) goto loc_82A0C944;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a0c94c
	goto loc_82A0C94C;
loc_82A0C944:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82A0C94C:
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

__attribute__((alias("__imp__sub_82A0C960"))) PPC_WEAK_FUNC(sub_82A0C960);
PPC_FUNC_IMPL(__imp__sub_82A0C960) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,224
	ctx.r11.s64 = ctx.r4.s64 + 224;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,328
	ctx.r11.s64 = ctx.r11.s64 + 328;
loc_82A0C974:
	// lwz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82a0c98c
	if (!ctx.cr6.eq) goto loc_82A0C98C;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x82a0c9a0
	if (ctx.cr6.eq) goto loc_82A0C9A0;
loc_82A0C98C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,352
	ctx.r11.s64 = ctx.r11.s64 + 352;
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// blt cr6,0x82a0c974
	if (ctx.cr6.lt) goto loc_82A0C974;
	// blr 
	return;
loc_82A0C9A0:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82a0c9ac
	if (ctx.cr6.eq) goto loc_82A0C9AC;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
loc_82A0C9AC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0C9B4"))) PPC_WEAK_FUNC(sub_82A0C9B4);
PPC_FUNC_IMPL(__imp__sub_82A0C9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0C9B8"))) PPC_WEAK_FUNC(sub_82A0C9B8);
PPC_FUNC_IMPL(__imp__sub_82A0C9B8) {
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
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// li r4,3
	ctx.r4.s64 = 3;
	// addis r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 131072;
	// addi r3,r3,19120
	ctx.r3.s64 = ctx.r3.s64 + 19120;
	// bl 0x83179414
	ctx.lr = 0x82A0C9F0;
	__imp__KeWaitForSingleObject(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82a0ca08
	if (!ctx.cr0.eq) goto loc_82A0CA08;
	// bl 0x82a74720
	ctx.lr = 0x82A0C9FC;
	sub_82A74720(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// stw r3,24036(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24036, ctx.r3.u32);
	// b 0x82a0ca14
	goto loc_82A0CA14;
loc_82A0CA08:
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24036(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24036, ctx.r11.u32);
loc_82A0CA14:
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

__attribute__((alias("__imp__sub_82A0CA2C"))) PPC_WEAK_FUNC(sub_82A0CA2C);
PPC_FUNC_IMPL(__imp__sub_82A0CA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0CA30"))) PPC_WEAK_FUNC(sub_82A0CA30);
PPC_FUNC_IMPL(__imp__sub_82A0CA30) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// lis r9,-31963
	ctx.r9.s64 = -2094727168;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,24036(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24036, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,24028(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24028);
	// addis r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 131072;
	// addi r3,r3,19120
	ctx.r3.s64 = ctx.r3.s64 + 19120;
	// b 0x831796f4
	__imp__KeReleaseMutant(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0CA5C"))) PPC_WEAK_FUNC(sub_82A0CA5C);
PPC_FUNC_IMPL(__imp__sub_82A0CA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0CA60"))) PPC_WEAK_FUNC(sub_82A0CA60);
PPC_FUNC_IMPL(__imp__sub_82A0CA60) {
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
	// bl 0x831791c4
	ctx.lr = 0x82A0CA78;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// li r11,256
	ctx.r11.s64 = 256;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A0CA98;
	sub_82FA7CF0(ctx, base);
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

__attribute__((alias("__imp__sub_82A0CAAC"))) PPC_WEAK_FUNC(sub_82A0CAAC);
PPC_FUNC_IMPL(__imp__sub_82A0CAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0CAB0"))) PPC_WEAK_FUNC(sub_82A0CAB0);
PPC_FUNC_IMPL(__imp__sub_82A0CAB0) {
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
	// beq cr6,0x82a0cae0
	if (ctx.cr6.eq) goto loc_82A0CAE0;
	// lis r4,8349
	ctx.r4.s64 = 547160064;
	// bl 0x82691460
	ctx.lr = 0x82A0CAD8;
	sub_82691460(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82A0CAE0:
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

__attribute__((alias("__imp__sub_82A0CAF4"))) PPC_WEAK_FUNC(sub_82A0CAF4);
PPC_FUNC_IMPL(__imp__sub_82A0CAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0CAF8"))) PPC_WEAK_FUNC(sub_82A0CAF8);
PPC_FUNC_IMPL(__imp__sub_82A0CAF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82A0CB00;
	__savegprlr_14(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// stfs f1,548(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 548, temp.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrldi r11,r11,63
	ctx.r11.u64 = ctx.r11.u64 & 0x1;
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
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82a0cc28
	if (ctx.cr6.eq) goto loc_82A0CC28;
	// bl 0x83178d64
	ctx.lr = 0x82A0CB3C;
	__imp__XamGetCurrentTitleId(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r9,676(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 676);
	// clrlwi r10,r28,16
	ctx.r10.u64 = ctx.r28.u32 & 0xFFFF;
	// ld r8,664(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 664);
	// clrlwi r24,r24,24
	ctx.r24.u64 = ctx.r24.u32 & 0xFF;
	// lwz r5,652(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 652);
	// clrlwi r26,r26,24
	ctx.r26.u64 = ctx.r26.u32 & 0xFF;
	// lwz r4,644(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 644);
	// li r6,98
	ctx.r6.s64 = 98;
	// lwz r3,636(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 636);
	// lbz r11,663(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 663);
	// stw r9,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r9.u32);
	// clrlwi r9,r29,24
	ctx.r9.u64 = ctx.r29.u32 & 0xFF;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// std r8,264(r1)
	PPC_STORE_U64(ctx.r1.u32 + 264, ctx.r8.u64);
	// stw r5,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r5.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stw r11,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r4,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r4.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r11,543(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 543);
	// lbz r31,535(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 535);
	// lbz r30,527(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 527);
	// lbz r29,519(r1)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + 519);
	// lwz r28,628(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 628);
	// lwz r23,620(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 620);
	// lwz r22,612(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// lwz r21,604(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 604);
	// lwz r20,596(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// lwz r19,588(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 588);
	// lwz r18,580(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 580);
	// lwz r17,572(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 572);
	// lwz r16,564(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 564);
	// lwz r15,556(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 556);
	// lwz r14,548(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// stw r28,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r28.u32);
	// stw r23,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r23.u32);
	// stw r22,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r22.u32);
	// stw r21,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r21.u32);
	// stw r20,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r20.u32);
	// stw r19,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r19.u32);
	// stw r18,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r18.u32);
	// stw r17,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r17.u32);
	// stw r16,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r16.u32);
	// stw r15,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r15.u32);
	// stw r14,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r14.u32);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r24,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x83179614
	ctx.lr = 0x82A0CC24;
	__imp__EtxProducerLog(ctx, base);
	// b 0x82a0cc30
	goto loc_82A0CC30;
loc_82A0CC28:
	// lis r3,16389
	ctx.r3.s64 = 1074069504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
loc_82A0CC30:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0CC38"))) PPC_WEAK_FUNC(sub_82A0CC38);
PPC_FUNC_IMPL(__imp__sub_82A0CC38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82A0CC40;
	__savegprlr_14(ctx, base);
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// stfs f1,676(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 676, temp.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r7,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r7.u32);
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// stw r9,628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 628, ctx.r9.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82a0ce54
	if (ctx.cr6.eq) goto loc_82A0CE54;
	// bl 0x83178d64
	ctx.lr = 0x82A0CC7C;
	__imp__XamGetCurrentTitleId(ctx, base);
	// lbz r11,847(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 847);
	// lbz r10,839(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 839);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// ld r9,848(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 848);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r8,831(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 831);
	// li r5,4
	ctx.r5.s64 = 4;
	// lbz r4,823(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 823);
	// clrlwi r26,r26,24
	ctx.r26.u64 = ctx.r26.u32 & 0xFF;
	// lbz r6,815(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 815);
	// clrlwi r27,r27,24
	ctx.r27.u64 = ctx.r27.u32 & 0xFF;
	// lbz r24,807(r1)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r1.u32 + 807);
	// lbz r23,791(r1)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r1.u32 + 791);
	// ld r25,792(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + 792);
	// stw r10,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r10.u32);
	// clrlwi r10,r28,16
	ctx.r10.u64 = ctx.r28.u32 & 0xFFFF;
	// stw r11,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r11.u32);
	// std r9,384(r1)
	PPC_STORE_U64(ctx.r1.u32 + 384, ctx.r9.u64);
	// clrlwi r9,r29,24
	ctx.r9.u64 = ctx.r29.u32 & 0xFF;
	// stw r8,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r8.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stw r4,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r4.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r6,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r6.u32);
	// li r6,112
	ctx.r6.s64 = 112;
	// std r25,376(r1)
	PPC_STORE_U64(ctx.r1.u32 + 376, ctx.r25.u64);
	// stw r24,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r24.u32);
	// stw r23,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r23.u32);
	// lbz r28,647(r1)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r1.u32 + 647);
	// lbz r30,663(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 663);
	// lbz r29,655(r1)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + 655);
	// std r8,392(r1)
	PPC_STORE_U64(ctx.r1.u32 + 392, ctx.r8.u64);
	// lwz r11,860(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 860);
	// lwz r25,780(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 780);
	// stw r7,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r7.u32);
	// stw r6,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r6.u32);
	// std r5,400(r1)
	PPC_STORE_U64(ctx.r1.u32 + 400, ctx.r5.u64);
	// lbz r31,671(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 671);
	// lwz r24,772(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 772);
	// lwz r17,340(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r19,336(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// stw r10,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r10.u32);
	// stw r9,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r9.u32);
	// ld r18,384(r1)
	ctx.r18.u64 = PPC_LOAD_U64(ctx.r1.u32 + 384);
	// lwz r16,344(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// lwz r15,348(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r14,352(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// ld r10,376(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 376);
	// lwz r9,356(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r8,360(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	// stw r4,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, ctx.r4.u32);
	// stw r3,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r3.u32);
	// stw r28,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r28.u32);
	// stw r29,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r29.u32);
	// stw r30,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r30.u32);
	// lwz r23,764(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 764);
	// lwz r22,756(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 756);
	// lwz r21,748(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 748);
	// lwz r20,740(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 740);
	// lwz r7,732(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 732);
	// lwz r6,724(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 724);
	// lwz r5,716(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
	// lwz r4,708(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r3,700(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 700);
	// lwz r28,692(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 692);
	// lwz r29,684(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 684);
	// lwz r30,676(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 676);
	// stw r26,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r26.u32);
	// stw r27,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r27.u32);
	// stw r11,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r11.u32);
	// std r18,320(r1)
	PPC_STORE_U64(ctx.r1.u32 + 320, ctx.r18.u64);
	// stw r19,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r19.u32);
	// stw r17,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r17.u32);
	// stw r16,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r16.u32);
	// stw r15,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r15.u32);
	// stw r14,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r14.u32);
	// stw r9,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r9.u32);
	// std r10,264(r1)
	PPC_STORE_U64(ctx.r1.u32 + 264, ctx.r10.u64);
	// stw r8,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r8.u32);
	// stw r25,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r25.u32);
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// rotlwi r11,r26,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r26.u32, 0);
	// lwz r31,352(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// stw r7,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r7.u32);
	// stw r6,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r6.u32);
	// stw r5,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r5.u32);
	// stw r4,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r4.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// lwz r31,348(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// stw r3,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r3.u32);
	// stw r24,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r24.u32);
	// stw r23,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r23.u32);
	// lwz r27,628(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 628);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// lwz r26,356(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r25,612(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// lwz r31,344(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// lwz r10,340(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r9,336(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// ld r8,392(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 392);
	// lwz r7,364(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r6,368(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// ld r5,400(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 400);
	// lwz r4,376(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 376);
	// lwz r3,384(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// stw r22,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r22.u32);
	// stw r21,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r21.u32);
	// stw r20,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r20.u32);
	// stw r28,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r28.u32);
	// stw r29,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r29.u32);
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// bl 0x83179614
	ctx.lr = 0x82A0CE50;
	__imp__EtxProducerLog(ctx, base);
	// b 0x82a0ce5c
	goto loc_82A0CE5C;
loc_82A0CE54:
	// lis r3,16389
	ctx.r3.s64 = 1074069504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
loc_82A0CE5C:
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0CE64"))) PPC_WEAK_FUNC(sub_82A0CE64);
PPC_FUNC_IMPL(__imp__sub_82A0CE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0CE68"))) PPC_WEAK_FUNC(sub_82A0CE68);
PPC_FUNC_IMPL(__imp__sub_82A0CE68) {
	PPC_FUNC_PROLOGUE();
	// mullw r11,r4,r4
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r4.s32);
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82a0cec8
	if (!ctx.cr6.gt) goto loc_82A0CEC8;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A0CE98:
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mullw r9,r11,r9
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stwx r9,r6,r10
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82a0ce98
	if (ctx.cr6.lt) goto loc_82A0CE98;
loc_82A0CEC8:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0CEDC"))) PPC_WEAK_FUNC(sub_82A0CEDC);
PPC_FUNC_IMPL(__imp__sub_82A0CEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0CEE0"))) PPC_WEAK_FUNC(sub_82A0CEE0);
PPC_FUNC_IMPL(__imp__sub_82A0CEE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r10,16
	ctx.r10.s64 = 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r11,r3,68
	ctx.r11.s64 = ctx.r3.s64 + 68;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82A0CEF4:
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r8,r10,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r6.u8 & 0x3F));
	// and. r10,r8,r5
	ctx.r10.u64 = ctx.r8.u64 & ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82a0cf54
	if (ctx.cr0.eq) goto loc_82A0CF54;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// and. r10,r8,r4
	ctx.r10.u64 = ctx.r8.u64 & ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r31,-64(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -64);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r31,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r9,-64(r11)
	PPC_STORE_U32(ctx.r11.u32 + -64, ctx.r9.u32);
	// beq 0x82a0cf2c
	if (ctx.cr0.eq) goto loc_82A0CF2C;
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// stw r9,-64(r11)
	PPC_STORE_U32(ctx.r11.u32 + -64, ctx.r9.u32);
loc_82A0CF2C:
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r9,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r8,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// subfe r10,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82a0cf54
	if (ctx.cr6.eq) goto loc_82A0CF54;
	// ori r10,r7,1
	ctx.r10.u64 = ctx.r7.u64 | 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82A0CF54:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82a0cef4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A0CEF4;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0CF68"))) PPC_WEAK_FUNC(sub_82A0CF68);
PPC_FUNC_IMPL(__imp__sub_82A0CF68) {
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
	// bl 0x82a16660
	ctx.lr = 0x82A0CF80;
	sub_82A16660(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// li r5,132
	ctx.r5.s64 = 132;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,7980
	ctx.r3.s64 = ctx.r3.s64 + 7980;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A0CF94;
	sub_82FA7CF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a16370
	ctx.lr = 0x82A0CF9C;
	sub_82A16370(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r10,-2
	ctx.r10.s64 = -2;
	// ori r11,r11,7976
	ctx.r11.u64 = ctx.r11.u64 | 7976;
	// stwx r10,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82A0CFC0"))) PPC_WEAK_FUNC(sub_82A0CFC0);
PPC_FUNC_IMPL(__imp__sub_82A0CFC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82A0CFC8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,19120
	ctx.r5.u64 = ctx.r5.u64 | 19120;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A0CFE0;
	sub_82FA7CF0(ctx, base);
	// addi r30,r27,2704
	ctx.r30.s64 = ctx.r27.s64 + 2704;
	// li r31,2
	ctx.r31.s64 = 2;
loc_82A0CFE8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a0cf68
	ctx.lr = 0x82A0CFF0;
	sub_82A0CF68(ctx, base);
	// addis r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 65536;
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,8112
	ctx.r30.s64 = ctx.r30.s64 + 8112;
	// bne 0x82a0cfe8
	if (!ctx.cr0.eq) goto loc_82A0CFE8;
	// addi r30,r27,2408
	ctx.r30.s64 = ctx.r27.s64 + 2408;
	// li r28,2
	ctx.r28.s64 = 2;
	// li r31,-2
	ctx.r31.s64 = -2;
	// li r26,254
	ctx.r26.s64 = 254;
	// li r29,-1
	ctx.r29.s64 = -1;
loc_82A0D014:
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,-72
	ctx.r3.s64 = ctx.r30.s64 + -72;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A0D024;
	sub_82FA7CF0(ctx, base);
	// stw r31,-12(r30)
	PPC_STORE_U32(ctx.r30.u32 + -12, ctx.r31.u32);
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// stw r29,-36(r30)
	PPC_STORE_U32(ctx.r30.u32 + -36, ctx.r29.u32);
	// stw r29,-52(r30)
	PPC_STORE_U32(ctx.r30.u32 + -52, ctx.r29.u32);
	// addi r30,r30,88
	ctx.r30.s64 = ctx.r30.s64 + 88;
	// bne 0x82a0d014
	if (!ctx.cr0.eq) goto loc_82A0D014;
	// addi r30,r27,2584
	ctx.r30.s64 = ctx.r27.s64 + 2584;
	// li r28,2
	ctx.r28.s64 = 2;
loc_82A0D050:
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,-72
	ctx.r3.s64 = ctx.r30.s64 + -72;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A0D060;
	sub_82FA7CF0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r31,-12(r30)
	PPC_STORE_U32(ctx.r30.u32 + -12, ctx.r31.u32);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// stw r29,-36(r30)
	PPC_STORE_U32(ctx.r30.u32 + -36, ctx.r29.u32);
	// stw r29,-52(r30)
	PPC_STORE_U32(ctx.r30.u32 + -52, ctx.r29.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// addi r30,r30,96
	ctx.r30.s64 = ctx.r30.s64 + 96;
	// bne 0x82a0d050
	if (!ctx.cr0.eq) goto loc_82A0D050;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r27,-16
	ctx.r11.s64 = ctx.r27.s64 + -16;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82A0D098:
	// stwu r26,28(r11)
	ea = 28 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r26.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a0d098
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A0D098;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r27,192
	ctx.r11.s64 = ctx.r27.s64 + 192;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82A0D0AC:
	// stwu r29,352(r11)
	ea = 352 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a0d0ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A0D0AC;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0D0BC"))) PPC_WEAK_FUNC(sub_82A0D0BC);
PPC_FUNC_IMPL(__imp__sub_82A0D0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0D0C0"))) PPC_WEAK_FUNC(sub_82A0D0C0);
PPC_FUNC_IMPL(__imp__sub_82A0D0C0) {
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
	// lis r31,-31963
	ctx.r31.s64 = -2094727168;
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// addis r3,r11,9
	ctx.r3.s64 = ctx.r11.s64 + 589824;
	// addi r3,r3,-2396
	ctx.r3.s64 = ctx.r3.s64 + -2396;
	// bl 0x831793b4
	ctx.lr = 0x82A0D0E4;
	__imp__KeResetEvent(ctx, base);
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// li r5,0
	ctx.r5.s64 = 0;
	// addis r3,r11,9
	ctx.r3.s64 = ctx.r11.s64 + 589824;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,-2412
	ctx.r3.s64 = ctx.r3.s64 + -2412;
	// bl 0x831792b4
	ctx.lr = 0x82A0D0FC;
	__imp__KeSetEvent(ctx, base);
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

__attribute__((alias("__imp__sub_82A0D110"))) PPC_WEAK_FUNC(sub_82A0D110);
PPC_FUNC_IMPL(__imp__sub_82A0D110) {
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
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// ori r10,r10,63156
	ctx.r10.u64 = ctx.r10.u64 | 63156;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a81490
	ctx.lr = 0x82A0D144;
	sub_82A81490(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82A0D160"))) PPC_WEAK_FUNC(sub_82A0D160);
PPC_FUNC_IMPL(__imp__sub_82A0D160) {
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
	// lis r10,6553
	ctx.r10.s64 = 429457408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r10,39321
	ctx.r10.u64 = ctx.r10.u64 | 39321;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82a0d198
	if (ctx.cr6.gt) goto loc_82A0D198;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82a0d1ac
	if (!ctx.cr6.eq) goto loc_82A0D1AC;
loc_82A0D198:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_82A0D1AC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bl 0x82a78340
	ctx.lr = 0x82A0D1C0;
	sub_82A78340(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82A0D1F0"))) PPC_WEAK_FUNC(sub_82A0D1F0);
PPC_FUNC_IMPL(__imp__sub_82A0D1F0) {
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
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lwz r11,24032(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24032);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0d240
	if (ctx.cr6.eq) goto loc_82A0D240;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82A0D240;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A0D240:
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

__attribute__((alias("__imp__sub_82A0D254"))) PPC_WEAK_FUNC(sub_82A0D254);
PPC_FUNC_IMPL(__imp__sub_82A0D254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0D258"))) PPC_WEAK_FUNC(sub_82A0D258);
PPC_FUNC_IMPL(__imp__sub_82A0D258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A0D260;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// lwz r11,24032(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24032);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0d2bc
	if (ctx.cr6.eq) goto loc_82A0D2BC;
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// lwz r28,252(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r30,28(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82A0D2BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A0D2BC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0D2C4"))) PPC_WEAK_FUNC(sub_82A0D2C4);
PPC_FUNC_IMPL(__imp__sub_82A0D2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0D2C8"))) PPC_WEAK_FUNC(sub_82A0D2C8);
PPC_FUNC_IMPL(__imp__sub_82A0D2C8) {
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
	// addis r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 65536;
	// li r5,2004
	ctx.r5.s64 = 2004;
	// addi r10,r10,-25456
	ctx.r10.s64 = ctx.r10.s64 + -25456;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// bge cr6,0x82a0d330
	if (!ctx.cr6.lt) goto loc_82A0D330;
	// lis r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// ori r9,r9,40084
	ctx.r9.u64 = ctx.r9.u64 | 40084;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// li r8,20
	ctx.r8.s64 = 20;
	// lwzx r10,r3,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// divwu r10,r11,r8
	ctx.r10.u32 = ctx.r11.u32 / ctx.r8.u32;
	// mulli r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 * 20;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mulli r11,r11,2004
	ctx.r11.s64 = ctx.r11.s64 * 2004;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82A0D328;
	sub_82FA77C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82a0d368
	goto loc_82A0D368;
loc_82A0D330:
	// addis r31,r3,1
	ctx.r31.s64 = ctx.r3.s64 + 65536;
	// addi r31,r31,-25452
	ctx.r31.s64 = ctx.r31.s64 + -25452;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r11,2004
	ctx.r11.s64 = ctx.r11.s64 * 2004;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82A0D348;
	sub_82FA77C0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// divwu r10,r11,r10
	ctx.r10.u32 = ctx.r11.u32 / ctx.r10.u32;
	// mulli r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 * 20;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82A0D368:
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

__attribute__((alias("__imp__sub_82A0D37C"))) PPC_WEAK_FUNC(sub_82A0D37C);
PPC_FUNC_IMPL(__imp__sub_82A0D37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0D380"))) PPC_WEAK_FUNC(sub_82A0D380);
PPC_FUNC_IMPL(__imp__sub_82A0D380) {
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
	// lwz r11,28480(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28480);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,1424
	ctx.r5.s64 = 1424;
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// bge cr6,0x82a0d3dc
	if (!ctx.cr6.lt) goto loc_82A0D3DC;
	// lwz r10,28496(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28496);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r9,20
	ctx.r9.s64 = 20;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,28480(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28480, ctx.r11.u32);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// divwu r10,r11,r9
	ctx.r10.u32 = ctx.r11.u32 / ctx.r9.u32;
	// mulli r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 * 20;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mulli r11,r11,1424
	ctx.r11.s64 = ctx.r11.s64 * 1424;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82A0D3D4;
	sub_82FA77C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82a0d40c
	goto loc_82A0D40C;
loc_82A0D3DC:
	// lwz r11,28496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28496);
	// mulli r11,r11,1424
	ctx.r11.s64 = ctx.r11.s64 * 1424;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82A0D3EC;
	sub_82FA77C0(ctx, base);
	// lwz r11,28496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28496);
	// li r10,20
	ctx.r10.s64 = 20;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// divwu r10,r11,r10
	ctx.r10.u32 = ctx.r11.u32 / ctx.r10.u32;
	// mulli r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 * 20;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,28496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28496, ctx.r11.u32);
loc_82A0D40C:
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

__attribute__((alias("__imp__sub_82A0D420"))) PPC_WEAK_FUNC(sub_82A0D420);
PPC_FUNC_IMPL(__imp__sub_82A0D420) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A0D428;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// ori r11,r11,40080
	ctx.r11.u64 = ctx.r11.u64 | 40080;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stwx r5,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r5.u32);
	// beq cr6,0x82a0d474
	if (ctx.cr6.eq) goto loc_82A0D474;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r6,-4
	ctx.r29.s64 = ctx.r6.s64 + -4;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
loc_82A0D450:
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
	ctx.lr = 0x82A0D468;
	sub_82FA77C0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,2004
	ctx.r30.s64 = ctx.r30.s64 + 2004;
	// bne 0x82a0d450
	if (!ctx.cr0.eq) goto loc_82A0D450;
loc_82A0D474:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0D47C"))) PPC_WEAK_FUNC(sub_82A0D47C);
PPC_FUNC_IMPL(__imp__sub_82A0D47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0D480"))) PPC_WEAK_FUNC(sub_82A0D480);
PPC_FUNC_IMPL(__imp__sub_82A0D480) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A0D488;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31963
	ctx.r30.s64 = -2094727168;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,24028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24028);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0d530
	if (ctx.cr6.eq) goto loc_82A0D530;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0c9b8
	ctx.lr = 0x82A0D4A8;
	sub_82A0C9B8(ctx, base);
	// lwz r31,24028(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24028);
	// bl 0x82a74720
	ctx.lr = 0x82A0D4B0;
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
	// beq cr6,0x82a0d50c
	if (ctx.cr6.eq) goto loc_82A0D50C;
	// addi r6,r7,544
	ctx.r6.s64 = ctx.r7.s64 + 544;
	// addi r8,r28,56
	ctx.r8.s64 = ctx.r28.s64 + 56;
	// li r5,6
	ctx.r5.s64 = 6;
loc_82A0D4DC:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r4,-4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// bl 0x82a0c1c8
	ctx.lr = 0x82A0D4E8;
	sub_82A0C1C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,-4
	ctx.r11.s64 = -4;
	// bne 0x82a0d4f8
	if (!ctx.cr0.eq) goto loc_82A0D4F8;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
loc_82A0D4F8:
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r8,r8,448
	ctx.r8.s64 = ctx.r8.s64 + 448;
	// addi r6,r6,352
	ctx.r6.s64 = ctx.r6.s64 + 352;
	// bne 0x82a0d4dc
	if (!ctx.cr0.eq) goto loc_82A0D4DC;
loc_82A0D50C:
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
	ctx.lr = 0x82A0D530;
	__imp__KeReleaseMutant(ctx, base);
loc_82A0D530:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0D538"))) PPC_WEAK_FUNC(sub_82A0D538);
PPC_FUNC_IMPL(__imp__sub_82A0D538) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A0D540;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31963
	ctx.r31.s64 = -2094727168;
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0d5e4
	if (ctx.cr6.eq) goto loc_82A0D5E4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0c9b8
	ctx.lr = 0x82A0D55C;
	sub_82A0C9B8(ctx, base);
	// lwz r29,24028(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// bl 0x82a74720
	ctx.lr = 0x82A0D564;
	sub_82A74720(ctx, base);
	// lis r30,-31963
	ctx.r30.s64 = -2094727168;
	// li r5,0
	ctx.r5.s64 = 0;
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
	// and r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 & ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a0d59c
	if (!ctx.cr6.eq) goto loc_82A0D59C;
	// lwz r10,24028(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24036(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24036, ctx.r11.u32);
	// addis r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 131072;
	// b 0x82a0d5d4
	goto loc_82A0D5D4;
loc_82A0D59C:
	// lis r10,2
	ctx.r10.s64 = 131072;
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r10,r10,19102
	ctx.r10.u64 = ctx.r10.u64 | 19102;
	// li r4,1
	ctx.r4.s64 = 1;
	// stbx r9,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// addis r3,r11,9
	ctx.r3.s64 = ctx.r11.s64 + 589824;
	// addi r3,r3,-2428
	ctx.r3.s64 = ctx.r3.s64 + -2428;
	// bl 0x831792b4
	ctx.lr = 0x82A0D5C0;
	__imp__KeSetEvent(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,24036(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24036, ctx.r11.u32);
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// addis r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 131072;
loc_82A0D5D4:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,19120
	ctx.r3.s64 = ctx.r3.s64 + 19120;
	// bl 0x831796f4
	ctx.lr = 0x82A0D5E4;
	__imp__KeReleaseMutant(ctx, base);
loc_82A0D5E4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0D5EC"))) PPC_WEAK_FUNC(sub_82A0D5EC);
PPC_FUNC_IMPL(__imp__sub_82A0D5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0D5F0"))) PPC_WEAK_FUNC(sub_82A0D5F0);
PPC_FUNC_IMPL(__imp__sub_82A0D5F0) {
	PPC_FUNC_PROLOGUE();
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
	// bne 0x82a0d630
	if (!ctx.cr0.eq) goto loc_82A0D630;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82a0d628
	if (ctx.cr6.eq) goto loc_82A0D628;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82a0d628
	if (ctx.cr6.eq) goto loc_82A0D628;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82a0d630
	if (!ctx.cr6.eq) goto loc_82A0D630;
loc_82A0D628:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82a0d634
	goto loc_82A0D634;
loc_82A0D630:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A0D634:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0D63C"))) PPC_WEAK_FUNC(sub_82A0D63C);
PPC_FUNC_IMPL(__imp__sub_82A0D63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0D640"))) PPC_WEAK_FUNC(sub_82A0D640);
PPC_FUNC_IMPL(__imp__sub_82A0D640) {
	PPC_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,2336
	ctx.r11.s64 = ctx.r3.s64 + 2336;
loc_82A0D648:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82a0d660
	if (ctx.cr6.eq) goto loc_82A0D660;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r9,r9,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82a0d678
	if (!ctx.cr0.eq) goto loc_82A0D678;
loc_82A0D660:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 + 88;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x82a0d648
	if (ctx.cr6.lt) goto loc_82A0D648;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A0D678:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0D680"))) PPC_WEAK_FUNC(sub_82A0D680);
PPC_FUNC_IMPL(__imp__sub_82A0D680) {
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
	// addi r11,r3,2524
	ctx.r11.s64 = ctx.r3.s64 + 2524;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82A0D6A8:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82a0d6e8
	if (ctx.cr6.eq) goto loc_82A0D6E8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 + 96;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// blt cr6,0x82a0d6a8
	if (ctx.cr6.lt) goto loc_82A0D6A8;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A0D6C8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a0d6f0
	if (ctx.cr6.eq) goto loc_82A0D6F0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x82a0d6c8
	if (ctx.cr6.lt) goto loc_82A0D6C8;
	// b 0x82a0d740
	goto loc_82A0D740;
loc_82A0D6E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a0d744
	goto loc_82A0D744;
loc_82A0D6F0:
	// mulli r11,r10,96
	ctx.r11.s64 = ctx.r10.s64 * 96;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addic. r31,r11,2512
	ctx.xer.ca = ctx.r11.u32 > 4294964783;
	ctx.r31.s64 = ctx.r11.s64 + 2512;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82a0d740
	if (ctx.cr0.eq) goto loc_82A0D740;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A0D710;
	sub_82FA7CF0(ctx, base);
	// li r11,-2
	ctx.r11.s64 = -2;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// li r9,254
	ctx.r9.s64 = 254;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r9,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r9.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r8,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r8.u32);
loc_82A0D740:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A0D744:
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

__attribute__((alias("__imp__sub_82A0D75C"))) PPC_WEAK_FUNC(sub_82A0D75C);
PPC_FUNC_IMPL(__imp__sub_82A0D75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0D760"))) PPC_WEAK_FUNC(sub_82A0D760);
PPC_FUNC_IMPL(__imp__sub_82A0D760) {
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
	// addi r11,r3,2348
	ctx.r11.s64 = ctx.r3.s64 + 2348;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82A0D788:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82a0d7c8
	if (ctx.cr6.eq) goto loc_82A0D7C8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// blt cr6,0x82a0d788
	if (ctx.cr6.lt) goto loc_82A0D788;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A0D7A8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a0d7d0
	if (ctx.cr6.eq) goto loc_82A0D7D0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 + 88;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x82a0d7a8
	if (ctx.cr6.lt) goto loc_82A0D7A8;
	// b 0x82a0d818
	goto loc_82A0D818;
loc_82A0D7C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a0d81c
	goto loc_82A0D81C;
loc_82A0D7D0:
	// mulli r11,r10,88
	ctx.r11.s64 = ctx.r10.s64 * 88;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addic. r31,r11,2336
	ctx.xer.ca = ctx.r11.u32 > 4294964959;
	ctx.r31.s64 = ctx.r11.s64 + 2336;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82a0d818
	if (ctx.cr0.eq) goto loc_82A0D818;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A0D7F0;
	sub_82FA7CF0(ctx, base);
	// li r11,-2
	ctx.r11.s64 = -2;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// li r9,254
	ctx.r9.s64 = 254;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r9,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r9.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
loc_82A0D818:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A0D81C:
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

__attribute__((alias("__imp__sub_82A0D834"))) PPC_WEAK_FUNC(sub_82A0D834);
PPC_FUNC_IMPL(__imp__sub_82A0D834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0D838"))) PPC_WEAK_FUNC(sub_82A0D838);
PPC_FUNC_IMPL(__imp__sub_82A0D838) {
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
	// beq cr6,0x82a0d884
	if (ctx.cr6.eq) goto loc_82A0D884;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A0D860;
	sub_82FA7CF0(ctx, base);
	// li r11,-2
	ctx.r11.s64 = -2;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,254
	ctx.r9.s64 = 254;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r9,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r9.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
loc_82A0D884:
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

__attribute__((alias("__imp__sub_82A0D898"))) PPC_WEAK_FUNC(sub_82A0D898);
PPC_FUNC_IMPL(__imp__sub_82A0D898) {
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
	// addis r8,r3,2
	ctx.r8.s64 = ctx.r3.s64 + 131072;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r8,r8,18936
	ctx.r8.s64 = ctx.r8.s64 + 18936;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82A0D8C4:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r9,r9,18928
	ctx.r9.u64 = ctx.r9.u64 | 18928;
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82a0d8ec
	if (ctx.cr6.eq) goto loc_82A0D8EC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// blt cr6,0x82a0d8c4
	if (ctx.cr6.lt) goto loc_82A0D8C4;
	// b 0x82a0d8fc
	goto loc_82A0D8FC;
loc_82A0D8EC:
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add. r31,r11,r9
	ctx.r31.u64 = ctx.r11.u64 + ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82a0d980
	if (!ctx.cr0.eq) goto loc_82A0D980;
loc_82A0D8FC:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82A0D904:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82a0d924
	if (ctx.cr6.eq) goto loc_82A0D924;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// blt cr6,0x82a0d904
	if (ctx.cr6.lt) goto loc_82A0D904;
	// b 0x82a0d934
	goto loc_82A0D934;
loc_82A0D924:
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add. r31,r11,r9
	ctx.r31.u64 = ctx.r11.u64 + ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82a0d980
	if (!ctx.cr0.eq) goto loc_82A0D980;
loc_82A0D934:
	// addis r7,r6,2
	ctx.r7.s64 = ctx.r6.s64 + 131072;
	// li r30,6
	ctx.r30.s64 = 6;
	// addi r7,r7,18940
	ctx.r7.s64 = ctx.r7.s64 + 18940;
loc_82A0D940:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,-4(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82a0c960
	ctx.lr = 0x82A0D950;
	sub_82A0C960(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a0d974
	if (!ctx.cr0.eq) goto loc_82A0D974;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0d974
	if (ctx.cr6.eq) goto loc_82A0D974;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82a0d974
	if (!ctx.cr6.lt) goto loc_82A0D974;
	// addi r31,r7,-12
	ctx.r31.s64 = ctx.r7.s64 + -12;
loc_82A0D974:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r7,r7,28
	ctx.r7.s64 = ctx.r7.s64 + 28;
	// bne 0x82a0d940
	if (!ctx.cr0.eq) goto loc_82A0D940;
loc_82A0D980:
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

__attribute__((alias("__imp__sub_82A0D99C"))) PPC_WEAK_FUNC(sub_82A0D99C);
PPC_FUNC_IMPL(__imp__sub_82A0D99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0D9A0"))) PPC_WEAK_FUNC(sub_82A0D9A0);
PPC_FUNC_IMPL(__imp__sub_82A0D9A0) {
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
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a0d9f8
	if (ctx.cr0.eq) goto loc_82A0D9F8;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r10,24028(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24028);
	// addis r10,r10,9
	ctx.r10.s64 = ctx.r10.s64 + 589824;
	// addi r10,r10,-3420
	ctx.r10.s64 = ctx.r10.s64 + -3420;
	// beq cr6,0x82a0da58
	if (ctx.cr6.eq) goto loc_82A0DA58;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82a0da38
	if (ctx.cr6.eq) goto loc_82A0DA38;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82a0da58
	if (ctx.cr6.eq) goto loc_82A0DA58;
	// b 0x82a0da64
	goto loc_82A0DA64;
loc_82A0D9F8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,12(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// bl 0x82a0c960
	ctx.lr = 0x82A0DA0C;
	sub_82A0C960(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a0da64
	if (ctx.cr0.eq) goto loc_82A0DA64;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r10,24028(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24028);
	// addis r10,r10,9
	ctx.r10.s64 = ctx.r10.s64 + 589824;
	// addi r10,r10,-3056
	ctx.r10.s64 = ctx.r10.s64 + -3056;
	// beq cr6,0x82a0da40
	if (ctx.cr6.eq) goto loc_82A0DA40;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82a0da64
	if (!ctx.cr6.eq) goto loc_82A0DA64;
loc_82A0DA38:
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82a0da64
	goto loc_82A0DA64;
loc_82A0DA40:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mulli r11,r11,352
	ctx.r11.s64 = ctx.r11.s64 * 352;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r11,568(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 568);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a0da60
	if (ctx.cr0.eq) goto loc_82A0DA60;
loc_82A0DA58:
	// lwz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82a0da64
	goto loc_82A0DA64;
loc_82A0DA60:
	// li r31,30000
	ctx.r31.s64 = 30000;
loc_82A0DA64:
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

__attribute__((alias("__imp__sub_82A0DA7C"))) PPC_WEAK_FUNC(sub_82A0DA7C);
PPC_FUNC_IMPL(__imp__sub_82A0DA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0DA80"))) PPC_WEAK_FUNC(sub_82A0DA80);
PPC_FUNC_IMPL(__imp__sub_82A0DA80) {
	PPC_FUNC_PROLOGUE();
	// rlwinm. r11,r4,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// addis r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 589824;
	// beq 0x82a0da9c
	if (ctx.cr0.eq) goto loc_82A0DA9C;
	// addi r11,r11,-3420
	ctx.r11.s64 = ctx.r11.s64 + -3420;
	// b 0x82a0daa0
	goto loc_82A0DAA0;
loc_82A0DA9C:
	// addi r11,r11,-3056
	ctx.r11.s64 = ctx.r11.s64 + -3056;
loc_82A0DAA0:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82a0dae0
	if (ctx.cr6.eq) goto loc_82A0DAE0;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82a0dad8
	if (ctx.cr6.eq) goto loc_82A0DAD8;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x82a0dad0
	if (ctx.cr6.eq) goto loc_82A0DAD0;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x82a0dac8
	if (ctx.cr6.eq) goto loc_82A0DAC8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A0DAC8:
	// addi r3,r11,196
	ctx.r3.s64 = ctx.r11.s64 + 196;
	// blr 
	return;
loc_82A0DAD0:
	// addi r3,r11,280
	ctx.r3.s64 = ctx.r11.s64 + 280;
	// blr 
	return;
loc_82A0DAD8:
	// addi r3,r11,112
	ctx.r3.s64 = ctx.r11.s64 + 112;
	// blr 
	return;
loc_82A0DAE0:
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0DAE8"))) PPC_WEAK_FUNC(sub_82A0DAE8);
PPC_FUNC_IMPL(__imp__sub_82A0DAE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addis r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 589824;
	// addi r11,r11,-2692
	ctx.r11.s64 = ctx.r11.s64 + -2692;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a0db14
	if (!ctx.cr6.eq) goto loc_82A0DB14;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A0DB14:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// twllei r10,0
	if (ctx.r10.u32 <= 0) __builtin_debugtrap();
	// mulli r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 * 10;
	// divwu r11,r11,r10
	ctx.r11.u32 = ctx.r11.u32 / ctx.r10.u32;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0DB2C"))) PPC_WEAK_FUNC(sub_82A0DB2C);
PPC_FUNC_IMPL(__imp__sub_82A0DB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0DB30"))) PPC_WEAK_FUNC(sub_82A0DB30);
PPC_FUNC_IMPL(__imp__sub_82A0DB30) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0c9b8
	ctx.lr = 0x82A0DB4C;
	sub_82A0C9B8(ctx, base);
	// lis r31,-31963
	ctx.r31.s64 = -2094727168;
	// lwz r30,24028(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// bl 0x82a74720
	ctx.lr = 0x82A0DB58;
	sub_82A74720(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,24036(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24036);
	// subf r10,r10,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r10.s64;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 & ctx.r30.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a0db98
	if (!ctx.cr6.eq) goto loc_82A0DB98;
	// lwz r9,24028(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,24036(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24036, ctx.r10.u32);
	// addis r3,r9,2
	ctx.r3.s64 = ctx.r9.s64 + 131072;
	// b 0x82a0dbb4
	goto loc_82A0DBB4;
loc_82A0DB98:
	// lis r8,2
	ctx.r8.s64 = 131072;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r8,r8,19102
	ctx.r8.u64 = ctx.r8.u64 | 19102;
	// stbx r9,r10,r8
	PPC_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u8);
	// stw r9,24036(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24036, ctx.r9.u32);
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// addis r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 131072;
loc_82A0DBB4:
	// addi r3,r3,19120
	ctx.r3.s64 = ctx.r3.s64 + 19120;
	// bl 0x831796f4
	ctx.lr = 0x82A0DBBC;
	__imp__KeReleaseMutant(ctx, base);
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

__attribute__((alias("__imp__sub_82A0DBD4"))) PPC_WEAK_FUNC(sub_82A0DBD4);
PPC_FUNC_IMPL(__imp__sub_82A0DBD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0DBD8"))) PPC_WEAK_FUNC(sub_82A0DBD8);
PPC_FUNC_IMPL(__imp__sub_82A0DBD8) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0c9b8
	ctx.lr = 0x82A0DBF4;
	sub_82A0C9B8(ctx, base);
	// lis r31,-31963
	ctx.r31.s64 = -2094727168;
	// lwz r30,24028(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// bl 0x82a74720
	ctx.lr = 0x82A0DC00;
	sub_82A74720(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,24036(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24036);
	// subf r10,r10,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r10.s64;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 & ctx.r30.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a0dc40
	if (!ctx.cr6.eq) goto loc_82A0DC40;
	// lwz r9,24028(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,24036(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24036, ctx.r10.u32);
	// addis r3,r9,2
	ctx.r3.s64 = ctx.r9.s64 + 131072;
	// b 0x82a0dc5c
	goto loc_82A0DC5C;
loc_82A0DC40:
	// lis r8,2
	ctx.r8.s64 = 131072;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r8,r8,19104
	ctx.r8.u64 = ctx.r8.u64 | 19104;
	// stbx r9,r10,r8
	PPC_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u8);
	// stw r9,24036(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24036, ctx.r9.u32);
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// addis r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 131072;
loc_82A0DC5C:
	// addi r3,r3,19120
	ctx.r3.s64 = ctx.r3.s64 + 19120;
	// bl 0x831796f4
	ctx.lr = 0x82A0DC64;
	__imp__KeReleaseMutant(ctx, base);
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

__attribute__((alias("__imp__sub_82A0DC7C"))) PPC_WEAK_FUNC(sub_82A0DC7C);
PPC_FUNC_IMPL(__imp__sub_82A0DC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0DC80"))) PPC_WEAK_FUNC(sub_82A0DC80);
PPC_FUNC_IMPL(__imp__sub_82A0DC80) {
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
	// lis r31,-31963
	ctx.r31.s64 = -2094727168;
	// lis r11,8
	ctx.r11.s64 = 524288;
	// ori r30,r11,63168
	ctx.r30.u64 = ctx.r11.u64 | 63168;
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwzx r9,r11,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a0dcc0
	if (ctx.cr6.eq) goto loc_82A0DCC0;
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x82a175b8
	ctx.lr = 0x82A0DCBC;
	sub_82A175B8(ctx, base);
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
loc_82A0DCC0:
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82a0cab0
	ctx.lr = 0x82A0DCC8;
	sub_82A0CAB0(ctx, base);
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

__attribute__((alias("__imp__sub_82A0DCE0"))) PPC_WEAK_FUNC(sub_82A0DCE0);
PPC_FUNC_IMPL(__imp__sub_82A0DCE0) {
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
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r10,63164
	ctx.r10.u64 = ctx.r10.u64 | 63164;
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm. r11,r11,25,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a0dd68
	if (!ctx.cr0.eq) goto loc_82A0DD68;
	// bl 0x82a16a18
	ctx.lr = 0x82A0DD1C;
	sub_82A16A18(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x82a18f38
	ctx.lr = 0x82A0DD24;
	sub_82A18F38(ctx, base);
	// addi r3,r31,172
	ctx.r3.s64 = ctx.r31.s64 + 172;
	// bl 0x82a181f0
	ctx.lr = 0x82A0DD2C;
	sub_82A181F0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r5,r11,-24872
	ctx.r5.s64 = ctx.r11.s64 + -24872;
	// addi r3,r10,-24892
	ctx.r3.s64 = ctx.r10.s64 + -24892;
	// addi r6,r31,688
	ctx.r6.s64 = ctx.r31.s64 + 688;
	// li r4,17
	ctx.r4.s64 = 17;
	// bl 0x82a0c568
	ctx.lr = 0x82A0DD48;
	sub_82A0C568(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82a0ddc0
	if (ctx.cr0.lt) goto loc_82A0DDC0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r5,r11,-24952
	ctx.r5.s64 = ctx.r11.s64 + -24952;
	// addi r3,r10,-24972
	ctx.r3.s64 = ctx.r10.s64 + -24972;
	// li r4,17
	ctx.r4.s64 = 17;
	// b 0x82a0ddb4
	goto loc_82A0DDB4;
loc_82A0DD68:
	// bl 0x82a16a50
	ctx.lr = 0x82A0DD6C;
	sub_82A16A50(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x82a19068
	ctx.lr = 0x82A0DD74;
	sub_82A19068(ctx, base);
	// addi r3,r31,172
	ctx.r3.s64 = ctx.r31.s64 + 172;
	// bl 0x82a18318
	ctx.lr = 0x82A0DD7C;
	sub_82A18318(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r5,r11,-25032
	ctx.r5.s64 = ctx.r11.s64 + -25032;
	// addi r3,r10,-25052
	ctx.r3.s64 = ctx.r10.s64 + -25052;
	// addi r6,r31,688
	ctx.r6.s64 = ctx.r31.s64 + 688;
	// li r4,19
	ctx.r4.s64 = 19;
	// bl 0x82a0c568
	ctx.lr = 0x82A0DD98;
	sub_82A0C568(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82a0ddc0
	if (ctx.cr0.lt) goto loc_82A0DDC0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r5,r11,-25112
	ctx.r5.s64 = ctx.r11.s64 + -25112;
	// addi r3,r10,-25132
	ctx.r3.s64 = ctx.r10.s64 + -25132;
	// li r4,19
	ctx.r4.s64 = 19;
loc_82A0DDB4:
	// addi r6,r31,324
	ctx.r6.s64 = ctx.r31.s64 + 324;
	// bl 0x82a0c568
	ctx.lr = 0x82A0DDBC;
	sub_82A0C568(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82A0DDC0:
	// addi r3,r31,204
	ctx.r3.s64 = ctx.r31.s64 + 204;
	// bl 0x82a17c20
	ctx.lr = 0x82A0DDC8;
	sub_82A17C20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a0c5d8
	ctx.lr = 0x82A0DDD0;
	sub_82A0C5D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82a0dde4
	if (ctx.cr6.lt) goto loc_82A0DDE4;
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// bl 0x82a0c858
	ctx.lr = 0x82A0DDE0;
	sub_82A0C858(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82A0DDE4:
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

__attribute__((alias("__imp__sub_82A0DE00"))) PPC_WEAK_FUNC(sub_82A0DE00);
PPC_FUNC_IMPL(__imp__sub_82A0DE00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A0DE08;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31963
	ctx.r30.s64 = -2094727168;
	// lwz r11,24028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24028);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0df2c
	if (ctx.cr6.eq) goto loc_82A0DF2C;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// ori r31,r10,63100
	ctx.r31.u64 = ctx.r10.u64 | 63100;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a0df2c
	if (ctx.cr6.eq) goto loc_82A0DF2C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,2292(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2292);
	// bl 0x83179404
	ctx.lr = 0x82A0DE48;
	__imp__ObReferenceObjectByHandle(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a0de64
	if (ctx.cr0.lt) goto loc_82A0DE64;
	// li r4,17
	ctx.r4.s64 = 17;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x831793d4
	ctx.lr = 0x82A0DE5C;
	__imp__KeSetBasePriorityThread(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x83179424
	ctx.lr = 0x82A0DE64;
	__imp__ObDereferenceObject(ctx, base);
loc_82A0DE64:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0c9b8
	ctx.lr = 0x82A0DE6C;
	sub_82A0C9B8(ctx, base);
	// lwz r28,24028(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24028);
	// bl 0x82a74720
	ctx.lr = 0x82A0DE74;
	sub_82A74720(ctx, base);
	// lis r29,-31963
	ctx.r29.s64 = -2094727168;
	// li r5,0
	ctx.r5.s64 = 0;
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
	// and r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 & ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a0debc
	if (!ctx.cr6.eq) goto loc_82A0DEBC;
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,19120
	ctx.r3.s64 = ctx.r3.s64 + 19120;
	// bl 0x831796f4
	ctx.lr = 0x82A0DEB8;
	__imp__KeReleaseMutant(ctx, base);
	// b 0x82a0df2c
	goto loc_82A0DF2C;
loc_82A0DEBC:
	// lis r10,2
	ctx.r10.s64 = 131072;
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r10,r10,19100
	ctx.r10.u64 = ctx.r10.u64 | 19100;
	// li r4,1
	ctx.r4.s64 = 1;
	// stbx r9,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
	// lwz r11,24028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24028);
	// addis r3,r11,9
	ctx.r3.s64 = ctx.r11.s64 + 589824;
	// addi r3,r3,-2428
	ctx.r3.s64 = ctx.r3.s64 + -2428;
	// bl 0x831792b4
	ctx.lr = 0x82A0DEE0;
	__imp__KeSetEvent(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,24036(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24036, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,24028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24028);
	// addis r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 131072;
	// addi r3,r3,19120
	ctx.r3.s64 = ctx.r3.s64 + 19120;
	// bl 0x831796f4
	ctx.lr = 0x82A0DF04;
	__imp__KeReleaseMutant(ctx, base);
	// lwz r11,24028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24028);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82a77600
	ctx.lr = 0x82A0DF14;
	sub_82A77600(ctx, base);
	// lwz r11,24028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24028);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82a756a0
	ctx.lr = 0x82A0DF20;
	sub_82A756A0(ctx, base);
	// lwz r11,24028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24028);
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
loc_82A0DF2C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0DF34"))) PPC_WEAK_FUNC(sub_82A0DF34);
PPC_FUNC_IMPL(__imp__sub_82A0DF34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0DF38"))) PPC_WEAK_FUNC(sub_82A0DF38);
PPC_FUNC_IMPL(__imp__sub_82A0DF38) {
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
	// addis r3,r3,9
	ctx.r3.s64 = ctx.r3.s64 + 589824;
	// addi r3,r3,-272
	ctx.r3.s64 = ctx.r3.s64 + -272;
	// bl 0x82a1af98
	ctx.lr = 0x82A0DF58;
	sub_82A1AF98(ctx, base);
	// lis r11,8
	ctx.r11.s64 = 524288;
	// ori r11,r11,63156
	ctx.r11.u64 = ctx.r11.u64 | 63156;
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0df70
	if (ctx.cr6.eq) goto loc_82A0DF70;
	// bl 0x82a80070
	ctx.lr = 0x82A0DF70;
	sub_82A80070(ctx, base);
loc_82A0DF70:
	// addis r31,r31,9
	ctx.r31.s64 = ctx.r31.s64 + 589824;
	// addi r31,r31,-2376
	ctx.r31.s64 = ctx.r31.s64 + -2376;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0df94
	if (ctx.cr6.eq) goto loc_82A0DF94;
	// lis r4,8349
	ctx.r4.s64 = 547160064;
	// bl 0x82691460
	ctx.lr = 0x82A0DF8C;
	sub_82691460(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82A0DF94:
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

__attribute__((alias("__imp__sub_82A0DFA8"))) PPC_WEAK_FUNC(sub_82A0DFA8);
PPC_FUNC_IMPL(__imp__sub_82A0DFA8) {
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
	// bl 0x82a1b958
	ctx.lr = 0x82A0DFBC;
	sub_82A1B958(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82a09358
	ctx.lr = 0x82A0DFC4;
	sub_82A09358(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r31,r11,24028
	ctx.r31.s64 = ctx.r11.s64 + 24028;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0e004
	if (ctx.cr6.eq) goto loc_82A0E004;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// ori r10,r10,63168
	ctx.r10.u64 = ctx.r10.u64 | 63168;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0dff0
	if (ctx.cr6.eq) goto loc_82A0DFF0;
	// bl 0x82a0dc80
	ctx.lr = 0x82A0DFF0;
	sub_82A0DC80(ctx, base);
loc_82A0DFF0:
	// bl 0x82a16070
	ctx.lr = 0x82A0DFF4;
	sub_82A16070(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82a0df38
	ctx.lr = 0x82A0DFFC;
	sub_82A0DF38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a0cab0
	ctx.lr = 0x82A0E004;
	sub_82A0CAB0(ctx, base);
loc_82A0E004:
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

__attribute__((alias("__imp__sub_82A0E018"))) PPC_WEAK_FUNC(sub_82A0E018);
PPC_FUNC_IMPL(__imp__sub_82A0E018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82A0E020;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31963
	ctx.r31.s64 = -2094727168;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r26,r11,19152
	ctx.r26.u64 = ctx.r11.u64 | 19152;
	// lis r9,8
	ctx.r9.s64 = 524288;
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// ori r24,r9,63164
	ctx.r24.u64 = ctx.r9.u64 | 63164;
	// stwx r10,r11,r26
	PPC_STORE_U32(ctx.r11.u32 + ctx.r26.u32, ctx.r10.u32);
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// lwzx r11,r11,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a0e068
	if (!ctx.cr0.eq) goto loc_82A0E068;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-24812
	ctx.r3.s64 = ctx.r11.s64 + -24812;
	// bl 0x82a844b0
	ctx.lr = 0x82A0E064;
	sub_82A844B0(ctx, base);
	// b 0x82a0e22c
	goto loc_82A0E22C;
loc_82A0E068:
	// lis r4,10
	ctx.r4.s64 = 655360;
	// li r23,1
	ctx.r23.s64 = 1;
	// ori r4,r4,61440
	ctx.r4.u64 = ctx.r4.u64 | 61440;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// bl 0x82a0d110
	ctx.lr = 0x82A0E080;
	sub_82A0D110(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r29,r11,-24812
	ctx.r29.s64 = ctx.r11.s64 + -24812;
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82a0e0a0
	if (!ctx.cr6.eq) goto loc_82A0E0A0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a844b0
	ctx.lr = 0x82A0E0A0;
	sub_82A844B0(ctx, base);
loc_82A0E0A0:
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// lis r5,10
	ctx.r5.s64 = 655360;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ori r5,r5,61440
	ctx.r5.u64 = ctx.r5.u64 | 61440;
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bl 0x82a1d158
	ctx.lr = 0x82A0E0B8;
	sub_82A1D158(ctx, base);
	// mr. r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bge 0x82a0e0cc
	if (!ctx.cr0.lt) goto loc_82A0E0CC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a844b0
	ctx.lr = 0x82A0E0CC;
	sub_82A844B0(ctx, base);
loc_82A0E0CC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a0e0f0
	if (ctx.cr6.eq) goto loc_82A0E0F0;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ori r10,r10,63156
	ctx.r10.u64 = ctx.r10.u64 | 63156;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a81d88
	ctx.lr = 0x82A0E0F0;
	sub_82A81D88(ctx, base);
loc_82A0E0F0:
	// bl 0x83178db4
	ctx.lr = 0x82A0E0F4;
	__imp__XamNuiIdentityGetSessionId(ctx, base);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// ori r10,r10,19160
	ctx.r10.u64 = ctx.r10.u64 | 19160;
	// ldx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r10.u32);
	// cmpld cr6,r3,r11
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, ctx.r11.u64, ctx.xer);
	// beq cr6,0x82a0e11c
	if (ctx.cr6.eq) goto loc_82A0E11C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a844b0
	ctx.lr = 0x82A0E118;
	sub_82A844B0(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
loc_82A0E11C:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a0e22c
	if (ctx.cr0.eq) goto loc_82A0E22C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0c9b8
	ctx.lr = 0x82A0E12C;
	sub_82A0C9B8(ctx, base);
	// lwz r30,24028(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// bl 0x82a74720
	ctx.lr = 0x82A0E134;
	sub_82A74720(ctx, base);
	// lis r27,-31963
	ctx.r27.s64 = -2094727168;
	// lwz r10,24028(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// lwz r11,24036(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24036);
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
	// bne cr6,0x82a0e168
	if (!ctx.cr6.eq) goto loc_82A0E168;
	// li r11,0
	ctx.r11.s64 = 0;
	// addis r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 131072;
	// stw r11,24036(r27)
	PPC_STORE_U32(ctx.r27.u32 + 24036, ctx.r11.u32);
	// b 0x82a0e218
	goto loc_82A0E218;
loc_82A0E168:
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// addis r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 131072;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,19168
	ctx.r11.s64 = ctx.r11.s64 + 19168;
	// addis r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 65536;
	// addi r28,r28,-11084
	ctx.r28.s64 = ctx.r28.s64 + -11084;
loc_82A0E180:
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83178da4
	ctx.lr = 0x82A0E18C;
	__imp__XamUserNuiGetUserIndex(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82a0e1b8
	if (!ctx.cr0.lt) goto loc_82A0E1B8;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a0e1c8
	if (ctx.cr6.eq) goto loc_82A0E1C8;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt cr6,0x82a0e1c8
	if (ctx.cr6.lt) goto loc_82A0E1C8;
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// lwzx r11,r11,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a0e1c8
	if (ctx.cr0.eq) goto loc_82A0E1C8;
loc_82A0E1B8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r23,-4(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4, ctx.r23.u32);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82A0E1C8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0e1e0
	if (ctx.cr6.eq) goto loc_82A0E1E0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// bge cr6,0x82a0e1e4
	if (!ctx.cr6.lt) goto loc_82A0E1E4;
loc_82A0E1E0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A0E1E4:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// addis r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 65536;
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// addi r28,r28,-11056
	ctx.r28.s64 = ctx.r28.s64 + -11056;
	// cmplwi cr6,r29,8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 8, ctx.xer);
	// blt cr6,0x82a0e180
	if (ctx.cr6.lt) goto loc_82A0E180;
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r23,r11,r26
	PPC_STORE_U32(ctx.r11.u32 + ctx.r26.u32, ctx.r23.u32);
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// addis r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 131072;
	// stw r10,24036(r27)
	PPC_STORE_U32(ctx.r27.u32 + 24036, ctx.r10.u32);
loc_82A0E218:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,19120
	ctx.r3.s64 = ctx.r3.s64 + 19120;
	// bl 0x831796f4
	ctx.lr = 0x82A0E22C;
	__imp__KeReleaseMutant(ctx, base);
loc_82A0E22C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0E234"))) PPC_WEAK_FUNC(sub_82A0E234);
PPC_FUNC_IMPL(__imp__sub_82A0E234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0E238"))) PPC_WEAK_FUNC(sub_82A0E238);
PPC_FUNC_IMPL(__imp__sub_82A0E238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82A0E240;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31963
	ctx.r31.s64 = -2094727168;
	// lis r11,8
	ctx.r11.s64 = 524288;
	// ori r10,r11,63164
	ctx.r10.u64 = ctx.r11.u64 | 63164;
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a0e3e0
	if (ctx.cr0.eq) goto loc_82A0E3E0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0c9b8
	ctx.lr = 0x82A0E268;
	sub_82A0C9B8(ctx, base);
	// lwz r30,24028(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// bl 0x82a74720
	ctx.lr = 0x82A0E270;
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
	// bne cr6,0x82a0e2b8
	if (!ctx.cr6.eq) goto loc_82A0E2B8;
	// lwz r10,24028(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
loc_82A0E294:
	// li r11,0
	ctx.r11.s64 = 0;
	// addis r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 131072;
	// stw r11,24036(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24036, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,19120
	ctx.r3.s64 = ctx.r3.s64 + 19120;
	// bl 0x831796f4
	ctx.lr = 0x82A0E2B4;
	__imp__KeReleaseMutant(ctx, base);
	// b 0x82a0e3e0
	goto loc_82A0E3E0;
loc_82A0E2B8:
	// addis r25,r11,2
	ctx.r25.s64 = ctx.r11.s64 + 131072;
	// addi r25,r25,19101
	ctx.r25.s64 = ctx.r25.s64 + 19101;
	// lbz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,24028(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// beq 0x82a0e294
	if (ctx.cr0.eq) goto loc_82A0E294;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// addis r30,r10,2
	ctx.r30.s64 = ctx.r10.s64 + 131072;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r27,8
	ctx.r27.s64 = 8;
	// addi r30,r30,19168
	ctx.r30.s64 = ctx.r30.s64 + 19168;
	// ori r26,r11,54464
	ctx.r26.u64 = ctx.r11.u64 | 54464;
loc_82A0E2E8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82a0e300
	if (ctx.cr6.eq) goto loc_82A0E300;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82a0e304
	if (!ctx.cr6.eq) goto loc_82A0E304;
loc_82A0E300:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82A0E304:
	// stwx r11,r30,r26
	PPC_STORE_U32(ctx.r30.u32 + ctx.r26.u32, ctx.r11.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a0e324
	if (!ctx.cr6.eq) goto loc_82A0E324;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A0E324;
	sub_82FA7CF0(ctx, base);
loc_82A0E324:
	// addis r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 65536;
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r30,r30,-11056
	ctx.r30.s64 = ctx.r30.s64 + -11056;
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// bne 0x82a0e2e8
	if (!ctx.cr0.eq) goto loc_82A0E2E8;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r10,0(r25)
	PPC_STORE_U8(ctx.r25.u32 + 0, ctx.r10.u8);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,24036(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24036, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// addis r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 131072;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,19120
	ctx.r3.s64 = ctx.r3.s64 + 19120;
	// bl 0x831796f4
	ctx.lr = 0x82A0E364;
	__imp__KeReleaseMutant(ctx, base);
	// bl 0x83178db4
	ctx.lr = 0x82A0E368;
	__imp__XamNuiIdentityGetSessionId(ctx, base);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// ori r10,r10,19160
	ctx.r10.u64 = ctx.r10.u64 | 19160;
	// stdx r3,r11,r10
	PPC_STORE_U64(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u64);
	// bl 0x83178d64
	ctx.lr = 0x82A0E37C;
	__imp__XamGetCurrentTitleId(ctx, base);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// lis r4,10
	ctx.r4.s64 = 655360;
	// ori r10,r10,19156
	ctx.r10.u64 = ctx.r10.u64 | 19156;
	// ori r4,r4,61440
	ctx.r4.u64 = ctx.r4.u64 | 61440;
	// stwx r3,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82a0d110
	ctx.lr = 0x82A0E39C;
	sub_82A0D110(ctx, base);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a0e3e0
	if (ctx.cr6.eq) goto loc_82A0E3E0;
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// lis r5,10
	ctx.r5.s64 = 655360;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addis r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 131072;
	// ori r5,r5,61440
	ctx.r5.u64 = ctx.r5.u64 | 61440;
	// addi r3,r3,19152
	ctx.r3.s64 = ctx.r3.s64 + 19152;
	// bl 0x82a1d080
	ctx.lr = 0x82A0E3C4;
	sub_82A1D080(ctx, base);
	// lis r10,8
	ctx.r10.s64 = 524288;
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ori r10,r10,63156
	ctx.r10.u64 = ctx.r10.u64 | 63156;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a81d88
	ctx.lr = 0x82A0E3E0;
	sub_82A81D88(ctx, base);
loc_82A0E3E0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

