#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83086420"))) PPC_WEAK_FUNC(sub_83086420);
PPC_FUNC_IMPL(__imp__sub_83086420) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x83086428;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// lis r10,16384
	ctx.r10.s64 = 1073741824;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r9,r11,0,0,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE0000000;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x830864f8
	if (ctx.cr6.eq) goto loc_830864F8;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830864b0
	if (!ctx.cr6.eq) goto loc_830864B0;
	// lwz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// addi r4,r3,176
	ctx.r4.s64 = ctx.r3.s64 + 176;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x830864b0
	if (ctx.cr6.eq) goto loc_830864B0;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x83086540
	if (ctx.cr6.eq) goto loc_83086540;
loc_8308647C:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8308649c
	if (ctx.cr6.eq) goto loc_8308649C;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8308647c
	if (!ctx.cr6.eq) goto loc_8308647C;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x83086540
	goto loc_83086540;
loc_8308649C:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83085c88
	ctx.lr = 0x830864AC;
	sub_83085C88(ctx, base);
	// b 0x83086540
	goto loc_83086540;
loc_830864B0:
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83086540
	if (ctx.cr6.eq) goto loc_83086540;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x830864e0
	if (!ctx.cr6.eq) goto loc_830864E0;
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// stw r28,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r28.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r28,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r28.u32);
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// b 0x83086540
	goto loc_83086540;
loc_830864E0:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// b 0x83086540
	goto loc_83086540;
loc_830864F8:
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83086540
	if (ctx.cr6.eq) goto loc_83086540;
loc_83086508:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x83086524
	if (ctx.cr6.eq) goto loc_83086524;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83086508
	if (!ctx.cr6.eq) goto loc_83086508;
	// b 0x83086540
	goto loc_83086540;
loc_83086524:
	// lwz r9,188(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bne cr6,0x8308653c
	if (!ctx.cr6.eq) goto loc_8308653C;
	// stw r11,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
	// b 0x83086540
	goto loc_83086540;
loc_8308653C:
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
loc_83086540:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83082290
	ctx.lr = 0x83086550;
	sub_83082290(ctx, base);
	// lwz r31,96(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791a4
	ctx.lr = 0x83086560;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83086584
	if (!ctx.cr6.eq) goto loc_83086584;
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r28.u32);
	// bl 0x831791b4
	ctx.lr = 0x8308657C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_83086584:
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// bl 0x831791b4
	ctx.lr = 0x83086594;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8308659C"))) PPC_WEAK_FUNC(sub_8308659C);
PPC_FUNC_IMPL(__imp__sub_8308659C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830865A0"))) PPC_WEAK_FUNC(sub_830865A0);
PPC_FUNC_IMPL(__imp__sub_830865A0) {
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
	// lwz r11,168(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8308663c
	if (!ctx.cr6.gt) goto loc_8308663C;
	// lwz r31,160(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r9,r10,0,0,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE0000000;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8308663c
	if (!ctx.cr6.eq) goto loc_8308663C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8308663c
	if (ctx.cr6.eq) goto loc_8308663C;
loc_830865E4:
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x83081dc0
	ctx.lr = 0x83086604;
	sub_83081DC0(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x830862b8
	ctx.lr = 0x83086620;
	sub_830862B8(ctx, base);
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// bl 0x83087c58
	ctx.lr = 0x83086628;
	sub_83087C58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83085cd8
	ctx.lr = 0x83086630;
	sub_83085CD8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x830865e4
	if (!ctx.cr6.eq) goto loc_830865E4;
loc_8308663C:
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

__attribute__((alias("__imp__sub_83086654"))) PPC_WEAK_FUNC(sub_83086654);
PPC_FUNC_IMPL(__imp__sub_83086654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83086658"))) PPC_WEAK_FUNC(sub_83086658);
PPC_FUNC_IMPL(__imp__sub_83086658) {
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
	// lwz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x830866f4
	if (!ctx.cr6.gt) goto loc_830866F4;
	// lwz r31,176(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r9,r10,0,0,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE0000000;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x830866f4
	if (!ctx.cr6.eq) goto loc_830866F4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x830866f4
	if (ctx.cr6.eq) goto loc_830866F4;
loc_8308669C:
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x83082d20
	ctx.lr = 0x830866BC;
	sub_83082D20(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x83086420
	ctx.lr = 0x830866D8;
	sub_83086420(ctx, base);
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// bl 0x83087c58
	ctx.lr = 0x830866E0;
	sub_83087C58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83085d08
	ctx.lr = 0x830866E8;
	sub_83085D08(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8308669c
	if (!ctx.cr6.eq) goto loc_8308669C;
loc_830866F4:
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

__attribute__((alias("__imp__sub_8308670C"))) PPC_WEAK_FUNC(sub_8308670C);
PPC_FUNC_IMPL(__imp__sub_8308670C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83086710"))) PPC_WEAK_FUNC(sub_83086710);
PPC_FUNC_IMPL(__imp__sub_83086710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x83086718;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r5,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r5.u64);
	// addi r24,r3,56
	ctx.r24.s64 = ctx.r3.s64 + 56;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x831791a4
	ctx.lr = 0x83086740;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r25,16384
	ctx.r25.s64 = 1073741824;
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// bne cr6,0x8308678c
	if (!ctx.cr6.eq) goto loc_8308678C;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r10,r11,0,0,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE0000000;
	// cmplw cr6,r10,r25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x83086778
	if (ctx.cr6.eq) goto loc_83086778;
	// ld r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// clrldi r11,r28,32
	ctx.r11.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpld cr6,r8,r9
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r9.u64, ctx.xer);
	// bge cr6,0x8308677c
	if (!ctx.cr6.lt) goto loc_8308677C;
loc_83086778:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8308677C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x83086790
	if (!ctx.cr6.eq) goto loc_83086790;
loc_8308678C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83086790:
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x830867c8
	if (ctx.cr6.eq) goto loc_830867C8;
	// lwz r11,160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x830867c8
	if (ctx.cr6.eq) goto loc_830867C8;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// rlwimi r11,r10,29,0,2
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 29) & 0xE0000000) | (ctx.r11.u64 & 0xFFFFFFFF1FFFFFFF);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x831791b4
	ctx.lr = 0x830867C0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
loc_830867C8:
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83081dc0
	ctx.lr = 0x830867E0;
	sub_83081DC0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83086828
	if (ctx.cr6.eq) goto loc_83086828;
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// ld r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rlwinm r8,r9,0,0,2
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE0000000;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r7,r25,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r25.s64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// cntlzw r11,r7
	ctx.r11.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r31,r11,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x830862b8
	ctx.lr = 0x83086818;
	sub_830862B8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83086828
	if (!ctx.cr6.eq) goto loc_83086828;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830865a0
	ctx.lr = 0x83086828;
	sub_830865A0(ctx, base);
loc_83086828:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83082870
	ctx.lr = 0x83086834;
	sub_83082870(ctx, base);
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// bl 0x83087c58
	ctx.lr = 0x8308683C;
	sub_83087C58(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x831791b4
	ctx.lr = 0x83086844;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8308684C"))) PPC_WEAK_FUNC(sub_8308684C);
PPC_FUNC_IMPL(__imp__sub_8308684C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83086850"))) PPC_WEAK_FUNC(sub_83086850);
PPC_FUNC_IMPL(__imp__sub_83086850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x83086858;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r5,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r5.u64);
	// addi r24,r3,56
	ctx.r24.s64 = ctx.r3.s64 + 56;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x831791a4
	ctx.lr = 0x83086880;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r25,16384
	ctx.r25.s64 = 1073741824;
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// bne cr6,0x830868cc
	if (!ctx.cr6.eq) goto loc_830868CC;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r10,r11,0,0,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE0000000;
	// cmplw cr6,r10,r25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x830868b8
	if (ctx.cr6.eq) goto loc_830868B8;
	// ld r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// clrldi r11,r28,32
	ctx.r11.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpld cr6,r8,r9
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r9.u64, ctx.xer);
	// bge cr6,0x830868bc
	if (!ctx.cr6.lt) goto loc_830868BC;
loc_830868B8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830868BC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x830868d0
	if (!ctx.cr6.eq) goto loc_830868D0;
loc_830868CC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830868D0:
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83086908
	if (ctx.cr6.eq) goto loc_83086908;
	// lwz r11,176(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x83086908
	if (ctx.cr6.eq) goto loc_83086908;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// rlwimi r11,r10,29,0,2
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 29) & 0xE0000000) | (ctx.r11.u64 & 0xFFFFFFFF1FFFFFFF);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x831791b4
	ctx.lr = 0x83086900;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
loc_83086908:
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83082d20
	ctx.lr = 0x83086920;
	sub_83082D20(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83086968
	if (ctx.cr6.eq) goto loc_83086968;
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// ld r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rlwinm r8,r9,0,0,2
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE0000000;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r7,r25,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r25.s64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// cntlzw r11,r7
	ctx.r11.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r31,r11,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x83086420
	ctx.lr = 0x83086958;
	sub_83086420(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83086968
	if (!ctx.cr6.eq) goto loc_83086968;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83086658
	ctx.lr = 0x83086968;
	sub_83086658(ctx, base);
loc_83086968:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83083658
	ctx.lr = 0x83086974;
	sub_83083658(ctx, base);
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// bl 0x83087c58
	ctx.lr = 0x8308697C;
	sub_83087C58(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x831791b4
	ctx.lr = 0x83086984;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8308698C"))) PPC_WEAK_FUNC(sub_8308698C);
PPC_FUNC_IMPL(__imp__sub_8308698C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83086990"))) PPC_WEAK_FUNC(sub_83086990);
PPC_FUNC_IMPL(__imp__sub_83086990) {
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
	// bl 0x830822b0
	ctx.lr = 0x830869A8;
	sub_830822B0(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-5208
	ctx.r10.s64 = ctx.r11.s64 + -5208;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_830869CC"))) PPC_WEAK_FUNC(sub_830869CC);
PPC_FUNC_IMPL(__imp__sub_830869CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830869D0"))) PPC_WEAK_FUNC(sub_830869D0);
PPC_FUNC_IMPL(__imp__sub_830869D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r10,r11,-5208
	ctx.r10.s64 = ctx.r11.s64 + -5208;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x83082318
	sub_83082318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830869E0"))) PPC_WEAK_FUNC(sub_830869E0);
PPC_FUNC_IMPL(__imp__sub_830869E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x830869E8;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x830819f8
	ctx.lr = 0x83086A08;
	sub_830819F8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x83086a2c
	if (ctx.cr6.eq) goto loc_83086A2C;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x83086ad4
	goto loc_83086AD4;
loc_83086A2C:
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83086A44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x83086a64
	if (!ctx.cr6.eq) goto loc_83086A64;
	// li r8,53
	ctx.r8.s64 = 53;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x83086acc
	goto loc_83086ACC;
loc_83086A64:
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,128(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 128);
	// stfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// std r11,152(r29)
	PPC_STORE_U64(ctx.r29.u32 + 152, ctx.r11.u64);
	// lbz r9,112(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 112);
	// lwz r8,116(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// rlwinm r7,r8,3,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0x1;
	// stb r9,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r9.u8);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// beq cr6,0x83086ab0
	if (ctx.cr6.eq) goto loc_83086AB0;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x83086ab4
	goto loc_83086AB4;
loc_83086AB0:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
loc_83086AB4:
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83086ABC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,108(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// li r4,1
	ctx.r4.s64 = 1;
loc_83086ACC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83086AD4:
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83086AE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83086AF0"))) PPC_WEAK_FUNC(sub_83086AF0);
PPC_FUNC_IMPL(__imp__sub_83086AF0) {
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
	// bl 0x83082580
	ctx.lr = 0x83086B08;
	sub_83082580(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// addi r9,r11,-5128
	ctx.r9.s64 = ctx.r11.s64 + -5128;
	// addi r8,r10,-5176
	ctx.r8.s64 = ctx.r10.s64 + -5176;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r7,160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 160, ctx.r7.u8);
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

__attribute__((alias("__imp__sub_83086B40"))) PPC_WEAK_FUNC(sub_83086B40);
PPC_FUNC_IMPL(__imp__sub_83086B40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// addi r9,r11,-5128
	ctx.r9.s64 = ctx.r11.s64 + -5128;
	// addi r8,r10,-5176
	ctx.r8.s64 = ctx.r10.s64 + -5176;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r8.u32);
	// b 0x83082638
	sub_83082638(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83086B5C"))) PPC_WEAK_FUNC(sub_83086B5C);
PPC_FUNC_IMPL(__imp__sub_83086B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83086B60"))) PPC_WEAK_FUNC(sub_83086B60);
PPC_FUNC_IMPL(__imp__sub_83086B60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x83086B68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,-64
	ctx.r29.s64 = ctx.r3.s64 + -64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791a4
	ctx.lr = 0x83086B7C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lbz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 40);
	// li r4,3
	ctx.r4.s64 = 3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83086bbc
	if (ctx.cr6.eq) goto loc_83086BBC;
	// addi r30,r31,-120
	ctx.r30.s64 = ctx.r31.s64 + -120;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83081f18
	ctx.lr = 0x83086B98;
	sub_83081F18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830876e0
	ctx.lr = 0x83086BA0;
	sub_830876E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791b4
	ctx.lr = 0x83086BA8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,-24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// bl 0x830878d8
	ctx.lr = 0x83086BB4;
	sub_830878D8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_83086BBC:
	// addi r3,r31,-120
	ctx.r3.s64 = ctx.r31.s64 + -120;
	// bl 0x83081f18
	ctx.lr = 0x83086BC4;
	sub_83081F18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791b4
	ctx.lr = 0x83086BCC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83086BD4"))) PPC_WEAK_FUNC(sub_83086BD4);
PPC_FUNC_IMPL(__imp__sub_83086BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83086BD8"))) PPC_WEAK_FUNC(sub_83086BD8);
PPC_FUNC_IMPL(__imp__sub_83086BD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// lwz r10,144(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83086BE8"))) PPC_WEAK_FUNC(sub_83086BE8);
PPC_FUNC_IMPL(__imp__sub_83086BE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r9,96(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// lwz r7,104(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// lfs f13,152(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// lwz r6,148(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// ld r4,88(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 88);
	// subf r10,r6,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r6.s64;
	// lwz r11,132(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 132);
	// lfs f0,15868(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 15868);
	ctx.f0.f64 = double(temp.f32);
	// ld r3,80(r9)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r9.u32 + 80);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f1,5184(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 5184);
	ctx.f1.f64 = double(temp.f32);
	// subf r9,r4,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r4.s64;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// divwu r7,r8,r11
	ctx.r7.u32 = ctx.r8.u32 / ctx.r11.u32;
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// clrldi r6,r7,32
	ctx.r6.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// twllei r11,0
	if (ctx.r11.u32 <= 0) __builtin_debugtrap();
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f9,-16(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fdivs f6,f10,f0
	ctx.f6.f64 = double(float(ctx.f10.f64 / ctx.f0.f64));
	// fdivs f5,f13,f7
	ctx.f5.f64 = double(float(ctx.f13.f64 / ctx.f7.f64));
	// fsubs f0,f5,f6
	ctx.f0.f64 = double(float(ctx.f5.f64 - ctx.f6.f64));
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83086C6C"))) PPC_WEAK_FUNC(sub_83086C6C);
PPC_FUNC_IMPL(__imp__sub_83086C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83086C70"))) PPC_WEAK_FUNC(sub_83086C70);
PPC_FUNC_IMPL(__imp__sub_83086C70) {
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
	// bl 0x830829b0
	ctx.lr = 0x83086C88;
	sub_830829B0(ctx, base);
	// lbz r7,184(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 184);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// addi r9,r11,-5032
	ctx.r9.s64 = ctx.r11.s64 + -5032;
	// addi r8,r10,-5084
	ctx.r8.s64 = ctx.r10.s64 + -5084;
	// rlwinm r6,r6,0,26,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r6,184(r31)
	PPC_STORE_U8(ctx.r31.u32 + 184, ctx.r6.u8);
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

__attribute__((alias("__imp__sub_83086CC8"))) PPC_WEAK_FUNC(sub_83086CC8);
PPC_FUNC_IMPL(__imp__sub_83086CC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// addi r9,r11,-5032
	ctx.r9.s64 = ctx.r11.s64 + -5032;
	// addi r8,r10,-5084
	ctx.r8.s64 = ctx.r10.s64 + -5084;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r8.u32);
	// b 0x83082a60
	sub_83082A60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83086CE4"))) PPC_WEAK_FUNC(sub_83086CE4);
PPC_FUNC_IMPL(__imp__sub_83086CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83086CE8"))) PPC_WEAK_FUNC(sub_83086CE8);
PPC_FUNC_IMPL(__imp__sub_83086CE8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 184);
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r9,r11,25
	ctx.r9.u64 = ctx.r11.u32 & 0x7F;
	// std r10,176(r3)
	PPC_STORE_U64(ctx.r3.u32 + 176, ctx.r10.u64);
	// stb r9,184(r3)
	PPC_STORE_U8(ctx.r3.u32 + 184, ctx.r9.u8);
	// b 0x83082ad0
	sub_83082AD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83086D00"))) PPC_WEAK_FUNC(sub_83086D00);
PPC_FUNC_IMPL(__imp__sub_83086D00) {
	PPC_FUNC_PROLOGUE();
	// lwz r7,108(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// clrldi r10,r5,32
	ctx.r10.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// lwz r6,32(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ld r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// mullw r3,r7,r6
	ctx.r3.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmpld cr6,r9,r10
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r10.u64, ctx.xer);
	// bgt cr6,0x83086d44
	if (ctx.cr6.gt) goto loc_83086D44;
	// lbz r10,184(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 184);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// std r9,176(r11)
	PPC_STORE_U64(ctx.r11.u32 + 176, ctx.r9.u64);
	// ori r9,r10,128
	ctx.r9.u64 = ctx.r10.u64 | 128;
	// stb r9,184(r11)
	PPC_STORE_U8(ctx.r11.u32 + 184, ctx.r9.u8);
	// blr 
	return;
loc_83086D44:
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// std r10,176(r11)
	PPC_STORE_U64(ctx.r11.u32 + 176, ctx.r10.u64);
	// rotlwi r8,r4,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// lbz r10,184(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 184);
	// subf r5,r8,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r8.s64;
	// ori r9,r10,128
	ctx.r9.u64 = ctx.r10.u64 | 128;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// stb r9,184(r11)
	PPC_STORE_U8(ctx.r11.u32 + 184, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83086D68"))) PPC_WEAK_FUNC(sub_83086D68);
PPC_FUNC_IMPL(__imp__sub_83086D68) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 184);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,96(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// ld r9,152(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 152);
	// cmpld cr6,r9,r4
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r4.u64, ctx.xer);
	// bge cr6,0x83086d94
	if (!ctx.cr6.lt) goto loc_83086D94;
	// ld r10,176(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 176);
	// cmpld cr6,r10,r4
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r4.u64, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
loc_83086D94:
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,184(r3)
	PPC_STORE_U8(ctx.r3.u32 + 184, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83086DA0"))) PPC_WEAK_FUNC(sub_83086DA0);
PPC_FUNC_IMPL(__imp__sub_83086DA0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 184);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// rlwinm r9,r11,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83086dc4
	if (ctx.cr6.eq) goto loc_83086DC4;
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,184(r10)
	PPC_STORE_U8(ctx.r10.u32 + 184, ctx.r11.u8);
	// blr 
	return;
loc_83086DC4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83086DCC"))) PPC_WEAK_FUNC(sub_83086DCC);
PPC_FUNC_IMPL(__imp__sub_83086DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83086DD0"))) PPC_WEAK_FUNC(sub_83086DD0);
PPC_FUNC_IMPL(__imp__sub_83086DD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x83086DD8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	ctx.r25.s64 = 0;
	// lis r30,-31969
	ctx.r30.s64 = -2095120384;
	// stw r25,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r25.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r4,168
	ctx.r4.s64 = 168;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r3,-10744(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10744);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// bl 0x82fd6b98
	ctx.lr = 0x83086E04;
	sub_82FD6B98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83086e34
	if (ctx.cr6.eq) goto loc_83086E34;
	// bl 0x83082580
	ctx.lr = 0x83086E14;
	sub_83082580(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// stb r25,160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 160, ctx.r25.u8);
	// addi r9,r11,-5128
	ctx.r9.s64 = ctx.r11.s64 + -5128;
	// addi r8,r10,-5176
	ctx.r8.s64 = ctx.r10.s64 + -5176;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r8.u32);
	// b 0x83086e64
	goto loc_83086E64;
loc_83086E34:
	// li r4,100
	ctx.r4.s64 = 100;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83080a98
	ctx.lr = 0x83086E40;
	sub_83080A98(ctx, base);
	// li r4,168
	ctx.r4.s64 = 168;
	// lwz r3,-10744(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10744);
	// bl 0x82fd6b98
	ctx.lr = 0x83086E4C;
	sub_82FD6B98(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83086ebc
	if (ctx.cr6.eq) goto loc_83086EBC;
	// bl 0x83086af0
	ctx.lr = 0x83086E58;
	sub_83086AF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83086ebc
	if (ctx.cr6.eq) goto loc_83086EBC;
loc_83086E64:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83081ae0
	ctx.lr = 0x83086E78;
	sub_83081AE0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83086eac
	if (!ctx.cr6.eq) goto loc_83086EAC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830830b8
	ctx.lr = 0x83086E8C;
	sub_830830B8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r11,r31,120
	ctx.r11.s64 = ctx.r31.s64 + 120;
	// bne cr6,0x83086e9c
	if (!ctx.cr6.eq) goto loc_83086E9C;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_83086E9C:
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_83086EAC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83086ebc
	if (ctx.cr6.eq) goto loc_83086EBC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83081680
	ctx.lr = 0x83086EBC;
	sub_83081680(ctx, base);
loc_83086EBC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83086EC8"))) PPC_WEAK_FUNC(sub_83086EC8);
PPC_FUNC_IMPL(__imp__sub_83086EC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x83086ED0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r29,-31969
	ctx.r29.s64 = -2095120384;
	// stw r26,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r26.u32);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// li r4,192
	ctx.r4.s64 = 192;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r3,-10744(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -10744);
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82fd6b98
	ctx.lr = 0x83086F00;
	sub_82FD6B98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83086f3c
	if (ctx.cr6.eq) goto loc_83086F3C;
	// bl 0x830829b0
	ctx.lr = 0x83086F10;
	sub_830829B0(ctx, base);
	// lbz r7,184(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 184);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// addi r9,r11,-5032
	ctx.r9.s64 = ctx.r11.s64 + -5032;
	// addi r8,r10,-5084
	ctx.r8.s64 = ctx.r10.s64 + -5084;
	// rlwinm r6,r6,0,26,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r8.u32);
	// stb r6,184(r31)
	PPC_STORE_U8(ctx.r31.u32 + 184, ctx.r6.u8);
	// b 0x83086f6c
	goto loc_83086F6C;
loc_83086F3C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r4,16(r28)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r28.u32 + 16);
	// bl 0x83080a98
	ctx.lr = 0x83086F48;
	sub_83080A98(ctx, base);
	// li r4,192
	ctx.r4.s64 = 192;
	// lwz r3,-10744(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -10744);
	// bl 0x82fd6b98
	ctx.lr = 0x83086F54;
	sub_82FD6B98(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83086fc8
	if (ctx.cr6.eq) goto loc_83086FC8;
	// bl 0x83086c70
	ctx.lr = 0x83086F60;
	sub_83086C70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83086fc8
	if (ctx.cr6.eq) goto loc_83086FC8;
loc_83086F6C:
	// lbz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 184);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// lwz r8,132(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// clrlwi r10,r11,25
	ctx.r10.u64 = ctx.r11.u32 & 0x7F;
	// std r26,176(r31)
	PPC_STORE_U64(ctx.r31.u32 + 176, ctx.r26.u64);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// stb r10,184(r31)
	PPC_STORE_U8(ctx.r31.u32 + 184, ctx.r10.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83082ad0
	ctx.lr = 0x83086F98;
	sub_83082AD0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83086fc0
	if (!ctx.cr6.eq) goto loc_83086FC0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830830b8
	ctx.lr = 0x83086FAC;
	sub_830830B8(ctx, base);
	// addi r11,r31,120
	ctx.r11.s64 = ctx.r31.s64 + 120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
loc_83086FC0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83081680
	ctx.lr = 0x83086FC8;
	sub_83081680(ctx, base);
loc_83086FC8:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r26,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r26.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83086FD8"))) PPC_WEAK_FUNC(sub_83086FD8);
PPC_FUNC_IMPL(__imp__sub_83086FD8) {
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
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83084070
	ctx.lr = 0x83086FF8;
	sub_83084070(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83087014
	if (ctx.cr6.eq) goto loc_83087014;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x830869e0
	ctx.lr = 0x83087014;
	sub_830869E0(ctx, base);
loc_83087014:
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

__attribute__((alias("__imp__sub_83087028"))) PPC_WEAK_FUNC(sub_83087028);
PPC_FUNC_IMPL(__imp__sub_83087028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x83087030;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,-64
	ctx.r29.s64 = ctx.r3.s64 + -64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791a4
	ctx.lr = 0x83087044;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r10,-4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r31,r30,-120
	ctx.r31.s64 = ctx.r30.s64 + -120;
	// rlwimi r10,r11,27,7,7
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 27) & 0x1000000) | (ctx.r10.u64 & 0xFFFFFFFFFEFFFFFF);
	// li r4,3
	ctx.r4.s64 = 3;
	// rlwimi r10,r11,27,4,4
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 27) & 0x8000000) | (ctx.r10.u64 & 0xFFFFFFFFF7FFFFFF);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,-4(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4, ctx.r10.u32);
	// lbz r9,40(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 40);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83087098
	if (ctx.cr6.eq) goto loc_83087098;
	// bl 0x83081f18
	ctx.lr = 0x83087074;
	sub_83081F18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830876e0
	ctx.lr = 0x8308707C;
	sub_830876E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791b4
	ctx.lr = 0x83087084;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -24);
	// bl 0x830878d8
	ctx.lr = 0x83087090;
	sub_830878D8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_83087098:
	// bl 0x83081f18
	ctx.lr = 0x8308709C;
	sub_83081F18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791b4
	ctx.lr = 0x830870A4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830870AC"))) PPC_WEAK_FUNC(sub_830870AC);
PPC_FUNC_IMPL(__imp__sub_830870AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830870B0"))) PPC_WEAK_FUNC(sub_830870B0);
PPC_FUNC_IMPL(__imp__sub_830870B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x830870B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// addi r29,r3,56
	ctx.r29.s64 = ctx.r3.s64 + 56;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x831791a4
	ctx.lr = 0x830870DC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// rlwinm r10,r11,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83087174
	if (!ctx.cr6.eq) goto loc_83087174;
	// rlwinm r11,r11,8,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83087174
	if (ctx.cr6.eq) goto loc_83087174;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r10,148(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// lwz r8,96(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r11,132(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 132);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8308711c
	if (!ctx.cr6.gt) goto loc_8308711C;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8308711C:
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// rlwinm r10,r11,0,7,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83087150
	if (ctx.cr6.eq) goto loc_83087150;
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// rlwinm r9,r11,0,8,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFEFFFFFF;
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// ld r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 136);
	// mullw r7,r10,r8
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// stw r9,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r9.u32);
	// clrldi r10,r7,32
	ctx.r10.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r6,128(r31)
	PPC_STORE_U64(ctx.r31.u32 + 128, ctx.r6.u64);
loc_83087150:
	// ld r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 128);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r11,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r11.u64);
	// stb r10,160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 160, ctx.r10.u8);
	// bl 0x831791b4
	ctx.lr = 0x83087168;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_83087174:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791b4
	ctx.lr = 0x8308717C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83087188"))) PPC_WEAK_FUNC(sub_83087188);
PPC_FUNC_IMPL(__imp__sub_83087188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x83087190;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r5,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r5.u64);
	// addi r30,r3,56
	ctx.r30.s64 = ctx.r3.s64 + 56;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// bl 0x831791a4
	ctx.lr = 0x830871B4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// rlwinm r7,r10,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83081dc0
	ctx.lr = 0x830871D4;
	sub_83081DC0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83082870
	ctx.lr = 0x830871E0;
	sub_83082870(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r9,160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 160, ctx.r9.u8);
	// bl 0x831791b4
	ctx.lr = 0x830871F0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830871F8"))) PPC_WEAK_FUNC(sub_830871F8);
PPC_FUNC_IMPL(__imp__sub_830871F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x83087200;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// addi r28,r3,56
	ctx.r28.s64 = ctx.r3.s64 + 56;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x831791a4
	ctx.lr = 0x83087224;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// rlwinm r10,r11,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83087304
	if (!ctx.cr6.eq) goto loc_83087304;
	// rlwinm r11,r11,8,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83087304
	if (ctx.cr6.eq) goto loc_83087304;
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r10,132(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8308725c
	if (!ctx.cr6.gt) goto loc_8308725C;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// b 0x83087260
	goto loc_83087260;
loc_8308725C:
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_83087260:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83087274;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// std r3,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r3.u64);
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830872b0
	if (ctx.cr6.eq) goto loc_830872B0;
	// lwz r9,108(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mullw r7,r9,r8
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// clrldi r11,r7,32
	ctx.r11.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpld cr6,r3,r6
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, ctx.r6.u64, ctx.xer);
	// blt cr6,0x830872b0
	if (ctx.cr6.lt) goto loc_830872B0;
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
loc_830872B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// bl 0x83086d00
	ctx.lr = 0x830872C0;
	sub_83086D00(ctx, base);
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// bl 0x83082e98
	ctx.lr = 0x830872D8;
	sub_83082E98(ctx, base);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lbz r9,184(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 184);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ori r8,r9,64
	ctx.r8.u64 = ctx.r9.u64 | 64;
	// ld r7,80(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 80);
	// stb r8,184(r31)
	PPC_STORE_U8(ctx.r31.u32 + 184, ctx.r8.u8);
	// std r7,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r7.u64);
	// bl 0x831791b4
	ctx.lr = 0x830872F8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_83087304:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831791b4
	ctx.lr = 0x8308730C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83087318"))) PPC_WEAK_FUNC(sub_83087318);
PPC_FUNC_IMPL(__imp__sub_83087318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x83087320;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r5,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r5.u64);
	// addi r26,r3,56
	ctx.r26.s64 = ctx.r3.s64 + 56;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// bl 0x831791a4
	ctx.lr = 0x83087348;
	__imp__RtlEnterCriticalSection(ctx, base);
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// bne cr6,0x8308737c
	if (!ctx.cr6.eq) goto loc_8308737C;
	// lbz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 184);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8308737c
	if (ctx.cr6.eq) goto loc_8308737C;
	// ld r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// ld r9,176(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 176);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpld cr6,r8,r9
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r9.u64, ctx.xer);
	// bge cr6,0x83087380
	if (!ctx.cr6.lt) goto loc_83087380;
loc_8308737C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83087380:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83082d20
	ctx.lr = 0x83087398;
	sub_83082D20(ctx, base);
	// lbz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 184);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// clrlwi r10,r11,25
	ctx.r10.u64 = ctx.r11.u32 & 0x7F;
	// stb r10,184(r31)
	PPC_STORE_U8(ctx.r31.u32 + 184, ctx.r10.u8);
	// beq cr6,0x830873c4
	if (ctx.cr6.eq) goto loc_830873C4;
	// ld r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,176(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 176);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x83082290
	ctx.lr = 0x830873C4;
	sub_83082290(ctx, base);
loc_830873C4:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83083658
	ctx.lr = 0x830873D0;
	sub_83083658(ctx, base);
	// lbz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 184);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r10,r10,0,26,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// stb r10,184(r31)
	PPC_STORE_U8(ctx.r31.u32 + 184, ctx.r10.u8);
	// bl 0x831791b4
	ctx.lr = 0x830873E8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830873F0"))) PPC_WEAK_FUNC(sub_830873F0);
PPC_FUNC_IMPL(__imp__sub_830873F0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 184);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83087408
	if (ctx.cr6.eq) goto loc_83087408;
	// ld r3,176(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 176);
	// blr 
	return;
loc_83087408:
	// lbz r11,168(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 168);
	// lwz r10,164(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8308742c
	if (!ctx.cr6.gt) goto loc_8308742C;
	// lwz r10,160(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// ld r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_8308742C:
	// ld r3,128(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 128);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83087434"))) PPC_WEAK_FUNC(sub_83087434);
PPC_FUNC_IMPL(__imp__sub_83087434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83087438"))) PPC_WEAK_FUNC(sub_83087438);
PPC_FUNC_IMPL(__imp__sub_83087438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x83087440;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,56
	ctx.r27.s64 = ctx.r3.s64 + 56;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831791a4
	ctx.lr = 0x83087454;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83087474
	if (!ctx.cr6.eq) goto loc_83087474;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831791b4
	ctx.lr = 0x83087468;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_83087474:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x831791a4
	ctx.lr = 0x83087480;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r3,140(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// bl 0x82fd6e20
	ctx.lr = 0x8308748C;
	sub_82FD6E20(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x83087524
	if (!ctx.cr6.eq) goto loc_83087524;
	// lwz r10,160(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// lwz r29,12(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x8308751c
	if (ctx.cr6.lt) goto loc_8308751C;
	// subf r4,r29,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r29.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83082248
	ctx.lr = 0x830874B8;
	sub_83082248(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8308751c
	if (!ctx.cr6.eq) goto loc_8308751C;
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// lwz r30,160(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// subf r10,r29,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r29.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r10,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r10.u32);
	// lwz r28,8(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x83085d38
	ctx.lr = 0x830874E4;
	sub_83085D38(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83087508
	if (!ctx.cr6.eq) goto loc_83087508;
	// stw r30,120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 120, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// bl 0x83082e98
	ctx.lr = 0x83087504;
	sub_83082E98(ctx, base);
	// b 0x83087524
	goto loc_83087524;
loc_83087508:
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 120, ctx.r30.u32);
	// bl 0x83082e98
	ctx.lr = 0x83087518;
	sub_83082E98(ctx, base);
	// b 0x83087524
	goto loc_83087524;
loc_8308751C:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x830878b8
	ctx.lr = 0x83087524;
	sub_830878B8(ctx, base);
loc_83087524:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x831791b4
	ctx.lr = 0x83087530;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831791b4
	ctx.lr = 0x83087538;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83087544"))) PPC_WEAK_FUNC(sub_83087544);
PPC_FUNC_IMPL(__imp__sub_83087544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83087548"))) PPC_WEAK_FUNC(sub_83087548);
PPC_FUNC_IMPL(__imp__sub_83087548) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-120
	ctx.r3.s64 = ctx.r3.s64 + -120;
	// b 0x83087620
	sub_83087620(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83087550"))) PPC_WEAK_FUNC(sub_83087550);
PPC_FUNC_IMPL(__imp__sub_83087550) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-120
	ctx.r3.s64 = ctx.r3.s64 + -120;
	// b 0x830875b8
	sub_830875B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83087558"))) PPC_WEAK_FUNC(sub_83087558);
PPC_FUNC_IMPL(__imp__sub_83087558) {
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
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-5208
	ctx.r10.s64 = ctx.r11.s64 + -5208;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x83082318
	ctx.lr = 0x83087584;
	sub_83082318(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8308759c
	if (ctx.cr6.eq) goto loc_8308759C;
	// bl 0x82691540
	ctx.lr = 0x83087598;
	sub_82691540(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8308759C:
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

__attribute__((alias("__imp__sub_830875B4"))) PPC_WEAK_FUNC(sub_830875B4);
PPC_FUNC_IMPL(__imp__sub_830875B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830875B8"))) PPC_WEAK_FUNC(sub_830875B8);
PPC_FUNC_IMPL(__imp__sub_830875B8) {
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
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// addi r9,r11,-5128
	ctx.r9.s64 = ctx.r11.s64 + -5128;
	// addi r8,r10,-5176
	ctx.r8.s64 = ctx.r10.s64 + -5176;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x83082638
	ctx.lr = 0x830875F0;
	sub_83082638(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x83087608
	if (ctx.cr6.eq) goto loc_83087608;
	// bl 0x82691540
	ctx.lr = 0x83087604;
	sub_82691540(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83087608:
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

__attribute__((alias("__imp__sub_83087620"))) PPC_WEAK_FUNC(sub_83087620);
PPC_FUNC_IMPL(__imp__sub_83087620) {
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
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// addi r9,r11,-5032
	ctx.r9.s64 = ctx.r11.s64 + -5032;
	// addi r8,r10,-5084
	ctx.r8.s64 = ctx.r10.s64 + -5084;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x83082a60
	ctx.lr = 0x83087658;
	sub_83082A60(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x83087670
	if (ctx.cr6.eq) goto loc_83087670;
	// bl 0x82691540
	ctx.lr = 0x8308766C;
	sub_82691540(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83087670:
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

__attribute__((alias("__imp__sub_83087688"))) PPC_WEAK_FUNC(sub_83087688);
PPC_FUNC_IMPL(__imp__sub_83087688) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r10,r11,-4976
	ctx.r10.s64 = ctx.r11.s64 + -4976;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x830876c0
	if (ctx.cr6.eq) goto loc_830876C0;
	// bl 0x82a756a0
	ctx.lr = 0x830876B8;
	sub_82A756A0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_830876C0:
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r10,r11,-14320
	ctx.r10.s64 = ctx.r11.s64 + -14320;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_830876E0"))) PPC_WEAK_FUNC(sub_830876E0);
PPC_FUNC_IMPL(__imp__sub_830876E0) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83087708
	if (ctx.cr6.eq) goto loc_83087708;
	// bl 0x82a77b58
	ctx.lr = 0x83087704;
	sub_82A77B58(ctx, base);
	// b 0x83087720
	goto loc_83087720;
loc_83087708:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a77608
	ctx.lr = 0x8308771C;
	sub_82A77608(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_83087720:
	// li r11,1
	ctx.r11.s64 = 1;
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

__attribute__((alias("__imp__sub_8308773C"))) PPC_WEAK_FUNC(sub_8308773C);
PPC_FUNC_IMPL(__imp__sub_8308773C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83087740"))) PPC_WEAK_FUNC(sub_83087740);
PPC_FUNC_IMPL(__imp__sub_83087740) {
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
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-4972
	ctx.r10.s64 = ctx.r11.s64 + -4972;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x831791c4
	ctx.lr = 0x83087774;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stb r30,68(r31)
	PPC_STORE_U8(ctx.r31.u32 + 68, ctx.r30.u8);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_830877B0"))) PPC_WEAK_FUNC(sub_830877B0);
PPC_FUNC_IMPL(__imp__sub_830877B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r10,r11,-14320
	ctx.r10.s64 = ctx.r11.s64 + -14320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830877C0"))) PPC_WEAK_FUNC(sub_830877C0);
PPC_FUNC_IMPL(__imp__sub_830877C0) {
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
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83087818
	if (ctx.cr6.eq) goto loc_83087818;
	// bl 0x82a776a8
	ctx.lr = 0x830877EC;
	sub_82A776A8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8308780c
	if (ctx.cr6.eq) goto loc_8308780C;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x82a77600
	ctx.lr = 0x83087800;
	sub_82A77600(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82a756a0
	ctx.lr = 0x83087808;
	sub_82A756A0(ctx, base);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_8308780C:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x82a756a0
	ctx.lr = 0x83087814;
	sub_82A756A0(ctx, base);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
loc_83087818:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8308782c
	if (ctx.cr6.eq) goto loc_8308782C;
	// bl 0x82a756a0
	ctx.lr = 0x83087828;
	sub_82A756A0(ctx, base);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_8308782C:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83087840
	if (ctx.cr6.eq) goto loc_83087840;
	// bl 0x82a756a0
	ctx.lr = 0x8308783C;
	sub_82A756A0(ctx, base);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
loc_83087840:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83087858
	if (ctx.cr6.eq) goto loc_83087858;
	// bl 0x82a756a0
	ctx.lr = 0x83087854;
	sub_82A756A0(ctx, base);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
loc_83087858:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83087870
	if (ctx.cr6.eq) goto loc_83087870;
	// bl 0x82a756a0
	ctx.lr = 0x8308786C;
	sub_82A756A0(ctx, base);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
loc_83087870:
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

__attribute__((alias("__imp__sub_83087888"))) PPC_WEAK_FUNC(sub_83087888);
PPC_FUNC_IMPL(__imp__sub_83087888) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r10,68(r3)
	PPC_STORE_U8(ctx.r3.u32 + 68, ctx.r10.u8);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// b 0x82a776a8
	sub_82A776A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830878B0"))) PPC_WEAK_FUNC(sub_830878B0);
PPC_FUNC_IMPL(__imp__sub_830878B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830878B4"))) PPC_WEAK_FUNC(sub_830878B4);
PPC_FUNC_IMPL(__imp__sub_830878B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830878B8"))) PPC_WEAK_FUNC(sub_830878B8);
PPC_FUNC_IMPL(__imp__sub_830878B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,68(r3)
	PPC_STORE_U8(ctx.r3.u32 + 68, ctx.r10.u8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// b 0x82a77b58
	sub_82A77B58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830878D4"))) PPC_WEAK_FUNC(sub_830878D4);
PPC_FUNC_IMPL(__imp__sub_830878D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830878D8"))) PPC_WEAK_FUNC(sub_830878D8);
PPC_FUNC_IMPL(__imp__sub_830878D8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82a77600
	sub_82A77600(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830878E8"))) PPC_WEAK_FUNC(sub_830878E8);
PPC_FUNC_IMPL(__imp__sub_830878E8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stb r11,8(r4)
	PPC_STORE_U8(ctx.r4.u32 + 8, ctx.r11.u8);
	// b 0x82a776a8
	sub_82A776A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830878F8"))) PPC_WEAK_FUNC(sub_830878F8);
PPC_FUNC_IMPL(__imp__sub_830878F8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-4976
	ctx.r9.s64 = ctx.r10.s64 + -4976;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83087914"))) PPC_WEAK_FUNC(sub_83087914);
PPC_FUNC_IMPL(__imp__sub_83087914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83087918"))) PPC_WEAK_FUNC(sub_83087918);
PPC_FUNC_IMPL(__imp__sub_83087918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x83087920;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r9,56(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r8,48(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x83087960;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r28,-1
	ctx.r28.s64 = -1;
loc_83087964:
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82a834a0
	ctx.lr = 0x8308797C;
	sub_82A834A0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8308799c
	if (ctx.cr6.eq) goto loc_8308799C;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82a834a0
	ctx.lr = 0x8308799C;
	sub_82A834A0(ctx, base);
loc_8308799C:
	// cmplwi cr6,r3,192
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 192, ctx.xer);
	// bgt cr6,0x830879fc
	if (ctx.cr6.gt) goto loc_830879FC;
	// beq cr6,0x83087a48
	if (ctx.cr6.eq) goto loc_83087A48;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x830879c4
	if (ctx.cr6.lt) goto loc_830879C4;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// blt cr6,0x83087a04
	if (ctx.cr6.lt) goto loc_83087A04;
loc_830879B8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_830879C4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830879D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x830879ec
	if (ctx.cr6.eq) goto loc_830879EC;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x83087a48
	goto loc_83087A48;
loc_830879EC:
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x82a776e8
	ctx.lr = 0x830879F8;
	sub_82A776E8(ctx, base);
	// b 0x83087a48
	goto loc_83087A48;
loc_830879FC:
	// cmplwi cr6,r3,258
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 258, ctx.xer);
	// bne cr6,0x830879b8
	if (!ctx.cr6.eq) goto loc_830879B8;
loc_83087A04:
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791a4
	ctx.lr = 0x83087A10;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// subfc r9,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r30,r7,31
	ctx.r30.u64 = ctx.r7.u32 & 0x1;
	// bl 0x831791b4
	ctx.lr = 0x83087A2C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83087a48
	if (ctx.cr6.eq) goto loc_83087A48;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83087A48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83087A48:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83087964
	if (!ctx.cr6.eq) goto loc_83087964;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83087A60"))) PPC_WEAK_FUNC(sub_83087A60);
PPC_FUNC_IMPL(__imp__sub_83087A60) {
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
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791a4
	ctx.lr = 0x83087A84;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x83087aa0
	if (!ctx.cr6.eq) goto loc_83087AA0;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x82a776a8
	ctx.lr = 0x83087AA0;
	sub_82A776A8(ctx, base);
loc_83087AA0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791b4
	ctx.lr = 0x83087AA8;
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

__attribute__((alias("__imp__sub_83087AC0"))) PPC_WEAK_FUNC(sub_83087AC0);
PPC_FUNC_IMPL(__imp__sub_83087AC0) {
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
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791a4
	ctx.lr = 0x83087AE4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// bne 0x83087afc
	if (!ctx.cr0.eq) goto loc_83087AFC;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x82a77b58
	ctx.lr = 0x83087AFC;
	sub_82A77B58(ctx, base);
loc_83087AFC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791b4
	ctx.lr = 0x83087B04;
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

__attribute__((alias("__imp__sub_83087B1C"))) PPC_WEAK_FUNC(sub_83087B1C);
PPC_FUNC_IMPL(__imp__sub_83087B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83087B20"))) PPC_WEAK_FUNC(sub_83087B20);
PPC_FUNC_IMPL(__imp__sub_83087B20) {
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
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791a4
	ctx.lr = 0x83087B44;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x83087b6c
	if (!ctx.cr6.eq) goto loc_83087B6C;
	// lbz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83087b6c
	if (!ctx.cr6.eq) goto loc_83087B6C;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82a776a8
	ctx.lr = 0x83087B6C;
	sub_82A776A8(ctx, base);
loc_83087B6C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791b4
	ctx.lr = 0x83087B74;
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

__attribute__((alias("__imp__sub_83087B8C"))) PPC_WEAK_FUNC(sub_83087B8C);
PPC_FUNC_IMPL(__imp__sub_83087B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83087B90"))) PPC_WEAK_FUNC(sub_83087B90);
PPC_FUNC_IMPL(__imp__sub_83087B90) {
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
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791a4
	ctx.lr = 0x83087BB4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// bne 0x83087bcc
	if (!ctx.cr0.eq) goto loc_83087BCC;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82a77b58
	ctx.lr = 0x83087BCC;
	sub_82A77B58(ctx, base);
loc_83087BCC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791b4
	ctx.lr = 0x83087BD4;
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

__attribute__((alias("__imp__sub_83087BEC"))) PPC_WEAK_FUNC(sub_83087BEC);
PPC_FUNC_IMPL(__imp__sub_83087BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83087BF0"))) PPC_WEAK_FUNC(sub_83087BF0);
PPC_FUNC_IMPL(__imp__sub_83087BF0) {
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
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791a4
	ctx.lr = 0x83087C14;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x83087c34
	if (ctx.cr6.lt) goto loc_83087C34;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x82a77b58
	ctx.lr = 0x83087C34;
	sub_82A77B58(ctx, base);
loc_83087C34:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791b4
	ctx.lr = 0x83087C3C;
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

__attribute__((alias("__imp__sub_83087C54"))) PPC_WEAK_FUNC(sub_83087C54);
PPC_FUNC_IMPL(__imp__sub_83087C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83087C58"))) PPC_WEAK_FUNC(sub_83087C58);
PPC_FUNC_IMPL(__imp__sub_83087C58) {
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
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791a4
	ctx.lr = 0x83087C7C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x83087ca0
	if (!ctx.cr6.eq) goto loc_83087CA0;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x82a776a8
	ctx.lr = 0x83087CA0;
	sub_82A776A8(ctx, base);
loc_83087CA0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791b4
	ctx.lr = 0x83087CA8;
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

__attribute__((alias("__imp__sub_83087CC0"))) PPC_WEAK_FUNC(sub_83087CC0);
PPC_FUNC_IMPL(__imp__sub_83087CC0) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a77608
	ctx.lr = 0x83087CF0;
	sub_82A77608(ctx, base);
	// stw r3,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a77608
	ctx.lr = 0x83087D08;
	sub_82A77608(ctx, base);
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a77608
	ctx.lr = 0x83087D20;
	sub_82A77608(ctx, base);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a77608
	ctx.lr = 0x83087D38;
	sub_82A77608(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lis r9,-31992
	ctx.r9.s64 = -2096627712;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r6,r31,12
	ctx.r6.s64 = ctx.r31.s64 + 12;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// addi r7,r10,-4956
	ctx.r7.s64 = ctx.r10.s64 + -4956;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r9,31000
	ctx.r3.s64 = ctx.r9.s64 + 31000;
	// bl 0x8302ac18
	ctx.lr = 0x83087D6C;
	sub_8302AC18(ctx, base);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x83087da0
	if (ctx.cr6.eq) goto loc_83087DA0;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83087da0
	if (ctx.cr6.eq) goto loc_83087DA0;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83087da0
	if (ctx.cr6.eq) goto loc_83087DA0;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83087da4
	if (!ctx.cr6.eq) goto loc_83087DA4;
loc_83087DA0:
	// li r3,2
	ctx.r3.s64 = 2;
loc_83087DA4:
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

__attribute__((alias("__imp__sub_83087DBC"))) PPC_WEAK_FUNC(sub_83087DBC);
PPC_FUNC_IMPL(__imp__sub_83087DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83087DC0"))) PPC_WEAK_FUNC(sub_83087DC0);
PPC_FUNC_IMPL(__imp__sub_83087DC0) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-4976
	ctx.r10.s64 = ctx.r11.s64 + -4976;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x83087e00
	if (ctx.cr6.eq) goto loc_83087E00;
	// bl 0x82a756a0
	ctx.lr = 0x83087DF8;
	sub_82A756A0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_83087E00:
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// addi r9,r11,-14320
	ctx.r9.s64 = ctx.r11.s64 + -14320;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x83087e24
	if (ctx.cr6.eq) goto loc_83087E24;
	// bl 0x82691540
	ctx.lr = 0x83087E20;
	sub_82691540(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83087E24:
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

__attribute__((alias("__imp__sub_83087E3C"))) PPC_WEAK_FUNC(sub_83087E3C);
PPC_FUNC_IMPL(__imp__sub_83087E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83087E40"))) PPC_WEAK_FUNC(sub_83087E40);
PPC_FUNC_IMPL(__imp__sub_83087E40) {
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
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-14320
	ctx.r9.s64 = ctx.r11.s64 + -14320;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x83087e74
	if (ctx.cr6.eq) goto loc_83087E74;
	// bl 0x82691540
	ctx.lr = 0x83087E70;
	sub_82691540(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83087E74:
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

__attribute__((alias("__imp__sub_83087E88"))) PPC_WEAK_FUNC(sub_83087E88);
PPC_FUNC_IMPL(__imp__sub_83087E88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r10,r11,-8576
	ctx.r10.s64 = ctx.r11.s64 + -8576;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83087E98"))) PPC_WEAK_FUNC(sub_83087E98);
PPC_FUNC_IMPL(__imp__sub_83087E98) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83087EA0"))) PPC_WEAK_FUNC(sub_83087EA0);
PPC_FUNC_IMPL(__imp__sub_83087EA0) {
	PPC_FUNC_PROLOGUE();
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stb r10,4(r4)
	PPC_STORE_U8(ctx.r4.u32 + 4, ctx.r10.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r9,5(r4)
	PPC_STORE_U8(ctx.r4.u32 + 5, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83087EC0"))) PPC_WEAK_FUNC(sub_83087EC0);
PPC_FUNC_IMPL(__imp__sub_83087EC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r9,6
	ctx.r9.s64 = 6;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83087EE4:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83087ee4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83087EE4;
	// lbz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 100);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,24(r8)
	PPC_STORE_U8(ctx.r8.u32 + 24, ctx.r10.u8);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x83087f7c
	if (!ctx.cr6.eq) goto loc_83087F7C;
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r9,5
	ctx.r9.s64 = 5;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lfs f31,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r11,72
	ctx.r10.s64 = ctx.r11.s64 + 72;
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r8,-8
	ctx.r11.s64 = ctx.r8.s64 + -8;
	// lfs f12,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// stw r7,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// stfd f0,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// stfd f31,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f31.u64);
	// stfd f13,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f13.u64);
	// stfd f12,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f12.u64);
loc_83087F44:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x83087f44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83087F44;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83087F64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_83087F7C:
	// lfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83087F94"))) PPC_WEAK_FUNC(sub_83087F94);
PPC_FUNC_IMPL(__imp__sub_83087F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83087F98"))) PPC_WEAK_FUNC(sub_83087F98);
PPC_FUNC_IMPL(__imp__sub_83087F98) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lwz r11,18624(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18624);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x83087ff8
	if (!ctx.cr6.eq) goto loc_83087FF8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// stw r11,18624(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18624, ctx.r11.u32);
	// addi r31,r9,18616
	ctx.r31.s64 = ctx.r9.s64 + 18616;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8308cf48
	ctx.lr = 0x83087FD4;
	sub_8308CF48(ctx, base);
	// lis r8,-31976
	ctx.r8.s64 = -2095579136;
	// addi r3,r8,-30184
	ctx.r3.s64 = ctx.r8.s64 + -30184;
	// bl 0x82fa2318
	ctx.lr = 0x83087FE0;
	sub_82FA2318(ctx, base);
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
loc_83087FF8:
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,18616
	ctx.r3.s64 = ctx.r11.s64 + 18616;
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

__attribute__((alias("__imp__sub_83088014"))) PPC_WEAK_FUNC(sub_83088014);
PPC_FUNC_IMPL(__imp__sub_83088014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83088018"))) PPC_WEAK_FUNC(sub_83088018);
PPC_FUNC_IMPL(__imp__sub_83088018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x83088020;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x83087ec0
	ctx.lr = 0x83088030;
	sub_83087EC0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-17
	ctx.r11.s64 = ctx.r11.s64 + -17;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r25,r10,27,31,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8308811c
	if (ctx.cr6.eq) goto loc_8308811C;
	// lbz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8308805c
	if (!ctx.cr6.eq) goto loc_8308805C;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// stw r11,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r11.u32);
loc_8308805C:
	// lhz r10,14(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// lhz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83088078
	if (!ctx.cr6.lt) goto loc_83088078;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_83088078:
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lhz r9,14(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// neg r8,r9
	ctx.r8.s64 = -ctx.r9.s64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// clrlwi r9,r8,30
	ctx.r9.u64 = ctx.r8.u32 & 0x3;
	// add r26,r9,r10
	ctx.r26.u64 = ctx.r9.u64 + ctx.r10.u64;
	// beq cr6,0x830880b8
	if (ctx.cr6.eq) goto loc_830880B8;
loc_830880A4:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830880a4
	if (!ctx.cr6.eq) goto loc_830880A4;
loc_830880B8:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x830880fc
	if (ctx.cr6.eq) goto loc_830880FC;
	// rlwinm r28,r26,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
loc_830880C8:
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lhz r9,14(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// li r4,0
	ctx.r4.s64 = 0;
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82a75988
	ctx.lr = 0x830880F0;
	sub_82A75988(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x830880c8
	if (ctx.cr6.lt) goto loc_830880C8;
loc_830880FC:
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// sth r11,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r11.u16);
	// lwz r9,16(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x8308811c
	if (!ctx.cr6.gt) goto loc_8308811C;
	// li r11,45
	ctx.r11.s64 = 45;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_8308811C:
	// stb r25,20(r27)
	PPC_STORE_U8(ctx.r27.u32 + 20, ctx.r25.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83088138;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83088140"))) PPC_WEAK_FUNC(sub_83088140);
PPC_FUNC_IMPL(__imp__sub_83088140) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-4940
	ctx.r9.s64 = ctx.r10.s64 + -4940;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8308815C"))) PPC_WEAK_FUNC(sub_8308815C);
PPC_FUNC_IMPL(__imp__sub_8308815C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83088160"))) PPC_WEAK_FUNC(sub_83088160);
PPC_FUNC_IMPL(__imp__sub_83088160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x83088168;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// rlwinm r27,r11,18,14,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3FFFF;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r27,4
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 4, ctx.xer);
	// beq cr6,0x830881a8
	if (ctx.cr6.eq) goto loc_830881A8;
	// cmplwi cr6,r27,3
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 3, ctx.xer);
	// beq cr6,0x830881a8
	if (ctx.cr6.eq) goto loc_830881A8;
	// cmplwi cr6,r27,63
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 63, ctx.xer);
	// beq cr6,0x830881a8
	if (ctx.cr6.eq) goto loc_830881A8;
	// li r3,78
	ctx.r3.s64 = 78;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
loc_830881A8:
	// bl 0x83087f98
	ctx.lr = 0x830881AC;
	sub_83087F98(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x8308ce38
	ctx.lr = 0x830881B8;
	sub_8308CE38(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83088bf8
	ctx.lr = 0x830881C0;
	sub_83088BF8(ctx, base);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// li r3,120
	ctx.r3.s64 = 120;
	// bl 0x83088cf8
	ctx.lr = 0x830881CC;
	sub_83088CF8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830881e0
	if (ctx.cr6.eq) goto loc_830881E0;
	// bl 0x8308d070
	ctx.lr = 0x830881DC;
	sub_8308D070(ctx, base);
	// b 0x830881e4
	goto loc_830881E4;
loc_830881E0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_830881E4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// bne cr6,0x830881fc
	if (!ctx.cr6.eq) goto loc_830881FC;
	// li r3,52
	ctx.r3.s64 = 52;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
loc_830881FC:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x83088210
	if (ctx.cr6.eq) goto loc_83088210;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_83088210:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x830883a8
	ctx.lr = 0x8308821C;
	sub_830883A8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r30,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r30.u8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83088258
	if (ctx.cr6.eq) goto loc_83088258;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x8308c7f8
	ctx.lr = 0x83088248;
	sub_8308C7F8(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
loc_83088258:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8308827c
	if (ctx.cr6.eq) goto loc_8308827C;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x83089f38
	ctx.lr = 0x8308826C;
	sub_83089F38(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
loc_8308827C:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83088290
	if (ctx.cr6.eq) goto loc_83088290;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8308b140
	ctx.lr = 0x83088290;
	sub_8308B140(ctx, base);
loc_83088290:
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830882A0"))) PPC_WEAK_FUNC(sub_830882A0);
PPC_FUNC_IMPL(__imp__sub_830882A0) {
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
	// beq cr6,0x830882f4
	if (ctx.cr6.eq) goto loc_830882F4;
	// bl 0x83088548
	ctx.lr = 0x830882CC;
	sub_83088548(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830882ec
	if (ctx.cr6.eq) goto loc_830882EC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830882EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830882EC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_830882F4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8308830C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83088324;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_83088340"))) PPC_WEAK_FUNC(sub_83088340);
PPC_FUNC_IMPL(__imp__sub_83088340) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83088360;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83088390
	if (ctx.cr6.eq) goto loc_83088390;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-4940
	ctx.r9.s64 = ctx.r10.s64 + -4940;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83088390:
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

__attribute__((alias("__imp__sub_830883A4"))) PPC_WEAK_FUNC(sub_830883A4);
PPC_FUNC_IMPL(__imp__sub_830883A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830883A8"))) PPC_WEAK_FUNC(sub_830883A8);
PPC_FUNC_IMPL(__imp__sub_830883A8) {
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
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// beq cr6,0x830884b0
	if (ctx.cr6.eq) goto loc_830884B0;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// beq cr6,0x83088444
	if (ctx.cr6.eq) goto loc_83088444;
	// cmplwi cr6,r4,63
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 63, ctx.xer);
	// beq cr6,0x830883e0
	if (ctx.cr6.eq) goto loc_830883E0;
	// li r3,78
	ctx.r3.s64 = 78;
	// b 0x83088530
	goto loc_83088530;
loc_830883E0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8308852c
	if (!ctx.cr6.eq) goto loc_8308852C;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x83088cf8
	ctx.lr = 0x830883F4;
	sub_83088CF8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83088404
	if (ctx.cr6.eq) goto loc_83088404;
	// bl 0x8308c610
	ctx.lr = 0x83088400;
	sub_8308C610(ctx, base);
	// b 0x83088408
	goto loc_83088408;
loc_83088404:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83088408:
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83088478
	if (ctx.cr6.eq) goto loc_83088478;
	// addi r30,r31,60
	ctx.r30.s64 = ctx.r31.s64 + 60;
	// bl 0x8308c620
	ctx.lr = 0x8308841C;
	sub_8308C620(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8308cc50
	ctx.lr = 0x83088428;
	sub_8308CC50(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83088530
	if (!ctx.cr6.eq) goto loc_83088530;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8308c628
	ctx.lr = 0x83088440;
	sub_8308C628(ctx, base);
	// b 0x83088510
	goto loc_83088510;
loc_83088444:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8308852c
	if (!ctx.cr6.eq) goto loc_8308852C;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x83088cf8
	ctx.lr = 0x83088458;
	sub_83088CF8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83088468
	if (ctx.cr6.eq) goto loc_83088468;
	// bl 0x8308af20
	ctx.lr = 0x83088464;
	sub_8308AF20(ctx, base);
	// b 0x8308846c
	goto loc_8308846C;
loc_83088468:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8308846C:
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x83088480
	if (!ctx.cr6.eq) goto loc_83088480;
loc_83088478:
	// li r3,52
	ctx.r3.s64 = 52;
	// b 0x83088530
	goto loc_83088530;
loc_83088480:
	// addi r30,r31,20
	ctx.r30.s64 = ctx.r31.s64 + 20;
	// bl 0x8308af30
	ctx.lr = 0x83088488;
	sub_8308AF30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8308cc50
	ctx.lr = 0x83088494;
	sub_8308CC50(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83088530
	if (!ctx.cr6.eq) goto loc_83088530;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8308af38
	ctx.lr = 0x830884AC;
	sub_8308AF38(ctx, base);
	// b 0x83088510
	goto loc_83088510;
loc_830884B0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8308852c
	if (!ctx.cr6.eq) goto loc_8308852C;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x83088cf8
	ctx.lr = 0x830884C4;
	sub_83088CF8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830884d4
	if (ctx.cr6.eq) goto loc_830884D4;
	// bl 0x83089cf0
	ctx.lr = 0x830884D0;
	sub_83089CF0(ctx, base);
	// b 0x830884d8
	goto loc_830884D8;
loc_830884D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830884D8:
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83088478
	if (ctx.cr6.eq) goto loc_83088478;
	// addi r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 + 40;
	// bl 0x83089d00
	ctx.lr = 0x830884EC;
	sub_83089D00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8308cc50
	ctx.lr = 0x830884F8;
	sub_8308CC50(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83088530
	if (!ctx.cr6.eq) goto loc_83088530;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83089d08
	ctx.lr = 0x83088510;
	sub_83089D08(ctx, base);
loc_83088510:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83088530
	if (!ctx.cr6.eq) goto loc_83088530;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8308852C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8308852C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83088530:
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

__attribute__((alias("__imp__sub_83088548"))) PPC_WEAK_FUNC(sub_83088548);
PPC_FUNC_IMPL(__imp__sub_83088548) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8308859c
	if (ctx.cr6.eq) goto loc_8308859C;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// bl 0x8308ccc8
	ctx.lr = 0x83088574;
	sub_8308CCC8(ctx, base);
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83088590
	if (ctx.cr6.eq) goto loc_83088590;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8308b348
	ctx.lr = 0x83088588;
	sub_8308B348(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83088d60
	ctx.lr = 0x83088590;
	sub_83088D60(ctx, base);
loc_83088590:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x83088610
	goto loc_83088610;
loc_8308859C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830885d8
	if (ctx.cr6.eq) goto loc_830885D8;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x8308ccc8
	ctx.lr = 0x830885B0;
	sub_8308CCC8(ctx, base);
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x830885cc
	if (ctx.cr6.eq) goto loc_830885CC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8308a158
	ctx.lr = 0x830885C4;
	sub_8308A158(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83088d60
	ctx.lr = 0x830885CC;
	sub_83088D60(ctx, base);
loc_830885CC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x83088610
	goto loc_83088610;
loc_830885D8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83088610
	if (ctx.cr6.eq) goto loc_83088610;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x8308ccc8
	ctx.lr = 0x830885EC;
	sub_8308CCC8(ctx, base);
	// lwz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83088608
	if (ctx.cr6.eq) goto loc_83088608;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8308ca68
	ctx.lr = 0x83088600;
	sub_8308CA68(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83088d60
	ctx.lr = 0x83088608;
	sub_83088D60(ctx, base);
loc_83088608:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_83088610:
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

__attribute__((alias("__imp__sub_83088628"))) PPC_WEAK_FUNC(sub_83088628);
PPC_FUNC_IMPL(__imp__sub_83088628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r10,r11,-8576
	ctx.r10.s64 = ctx.r11.s64 + -8576;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83088638"))) PPC_WEAK_FUNC(sub_83088638);
PPC_FUNC_IMPL(__imp__sub_83088638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r10,r11,-11940
	ctx.r10.s64 = ctx.r11.s64 + -11940;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83088648"))) PPC_WEAK_FUNC(sub_83088648);
PPC_FUNC_IMPL(__imp__sub_83088648) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x83088690
	if (!ctx.cr6.eq) goto loc_83088690;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,5184(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// stb r7,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r7.u8);
	// lfs f13,-9904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -9904);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f13,16(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// blr 
	return;
loc_83088690:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_830886A8"))) PPC_WEAK_FUNC(sub_830886A8);
PPC_FUNC_IMPL(__imp__sub_830886A8) {
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
	// beq cr6,0x830886e0
	if (ctx.cr6.eq) goto loc_830886E0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830886E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830886E0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830886F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_83088714"))) PPC_WEAK_FUNC(sub_83088714);
PPC_FUNC_IMPL(__imp__sub_83088714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83088718"))) PPC_WEAK_FUNC(sub_83088718);
PPC_FUNC_IMPL(__imp__sub_83088718) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x83088728
	if (!ctx.cr6.eq) goto loc_83088728;
	// li r3,31
	ctx.r3.s64 = 31;
	// blr 
	return;
loc_83088728:
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r4,8
	ctx.r11.s64 = ctx.r4.s64 + 8;
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// lfs f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r6,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r6.u32);
	// lfs f13,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r5,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r5.u32);
	// lfs f12,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lwzu r4,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stw r4,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r4.u32);
	// lfs f11,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,-4916(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4916);
	ctx.f12.f64 = double(temp.f32);
	// stfs f11,16(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f13,5184(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5184);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// stb r7,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r7.u8);
	// blt cr6,0x8308879c
	if (ctx.cr6.lt) goto loc_8308879C;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x830887a0
	if (!ctx.cr6.gt) goto loc_830887A0;
loc_8308879C:
	// stfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
loc_830887A0:
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x830887b4
	if (ctx.cr6.lt) goto loc_830887B4;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x830887b8
	if (!ctx.cr6.gt) goto loc_830887B8;
loc_830887B4:
	// stfs f13,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
loc_830887B8:
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x830887d4
	if (ctx.cr6.lt) goto loc_830887D4;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f12,-15356(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15356);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x830887d8
	if (!ctx.cr6.gt) goto loc_830887D8;
loc_830887D4:
	// stfs f13,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
loc_830887D8:
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lfs f0,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24436(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x830887fc
	if (ctx.cr6.lt) goto loc_830887FC;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lfs f13,-6180(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -6180);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x83088808
	if (!ctx.cr6.gt) goto loc_83088808;
loc_830887FC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-9904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -9904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
loc_83088808:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8308881c
	if (ctx.cr6.lt) goto loc_8308881C;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// ble cr6,0x83088824
	if (!ctx.cr6.gt) goto loc_83088824;
loc_8308881C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
loc_83088824:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8308882C"))) PPC_WEAK_FUNC(sub_8308882C);
PPC_FUNC_IMPL(__imp__sub_8308882C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83088830"))) PPC_WEAK_FUNC(sub_83088830);
PPC_FUNC_IMPL(__imp__sub_83088830) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x83088844
	if (!ctx.cr6.eq) goto loc_83088844;
	// li r3,31
	ctx.r3.s64 = 31;
	// blr 
	return;
loc_83088844:
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bgt cr6,0x8308898c
	if (ctx.cr6.gt) goto loc_8308898C;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x830888a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_830888A4;
	// bdzf 4*cr6+eq,0x830888dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_830888DC;
	// bdzf 4*cr6+eq,0x83088914
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_83088914;
	// bne cr6,0x83088954
	if (!ctx.cr6.eq) goto loc_83088954;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f13,-4916(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4916);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lfs f13,5184(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5184);
	ctx.f13.f64 = double(temp.f32);
	// blt cr6,0x83088894
	if (ctx.cr6.lt) goto loc_83088894;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x83088990
	if (!ctx.cr6.gt) goto loc_83088990;
loc_83088894:
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stb r10,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r10.u8);
	// blr 
	return;
loc_830888A4:
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f13,-4916(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4916);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lfs f13,5184(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5184);
	ctx.f13.f64 = double(temp.f32);
	// blt cr6,0x830888cc
	if (ctx.cr6.lt) goto loc_830888CC;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x83088990
	if (!ctx.cr6.gt) goto loc_83088990;
loc_830888CC:
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f13,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stb r10,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r10.u8);
	// blr 
	return;
loc_830888DC:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f12,5184(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x83088904
	if (ctx.cr6.lt) goto loc_83088904;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f13,-15356(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15356);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x83088990
	if (!ctx.cr6.gt) goto loc_83088990;
loc_83088904:
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f12,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stb r10,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r10.u8);
	// blr 
	return;
loc_83088914:
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f13,24436(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24436);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8308893c
	if (ctx.cr6.lt) goto loc_8308893C;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f13,-6180(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -6180);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x83088990
	if (!ctx.cr6.gt) goto loc_83088990;
loc_8308893C:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,-9904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -9904);
	ctx.f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stb r10,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r10.u8);
	// blr 
	return;
loc_83088954:
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// blt cr6,0x83088978
	if (ctx.cr6.lt) goto loc_83088978;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// ble cr6,0x83088990
	if (!ctx.cr6.gt) goto loc_83088990;
loc_83088978:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r10.u8);
	// blr 
	return;
loc_8308898C:
	// li r3,31
	ctx.r3.s64 = 31;
loc_83088990:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8308899C"))) PPC_WEAK_FUNC(sub_8308899C);
PPC_FUNC_IMPL(__imp__sub_8308899C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830889A0"))) PPC_WEAK_FUNC(sub_830889A0);
PPC_FUNC_IMPL(__imp__sub_830889A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r8,r10,-4912
	ctx.r8.s64 = ctx.r10.s64 + -4912;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_830889BC:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x830889bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830889BC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830889CC"))) PPC_WEAK_FUNC(sub_830889CC);
PPC_FUNC_IMPL(__imp__sub_830889CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830889D0"))) PPC_WEAK_FUNC(sub_830889D0);
PPC_FUNC_IMPL(__imp__sub_830889D0) {
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
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83088A00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83088a44
	if (ctx.cr6.eq) goto loc_83088A44;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r11,-4912
	ctx.r10.s64 = ctx.r11.s64 + -4912;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83088A24:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83088a24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83088A24;
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
loc_83088A44:
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

__attribute__((alias("__imp__sub_83088A5C"))) PPC_WEAK_FUNC(sub_83088A5C);
PPC_FUNC_IMPL(__imp__sub_83088A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83088A60"))) PPC_WEAK_FUNC(sub_83088A60);
PPC_FUNC_IMPL(__imp__sub_83088A60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r10,r11,-4912
	ctx.r10.s64 = ctx.r11.s64 + -4912;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83088A70"))) PPC_WEAK_FUNC(sub_83088A70);
PPC_FUNC_IMPL(__imp__sub_83088A70) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,28
	ctx.r4.s64 = 28;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83088A90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83088ab4
	if (ctx.cr6.eq) goto loc_83088AB4;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r10,r11,-4912
	ctx.r10.s64 = ctx.r11.s64 + -4912;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83088AB4:
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

__attribute__((alias("__imp__sub_83088AC8"))) PPC_WEAK_FUNC(sub_83088AC8);
PPC_FUNC_IMPL(__imp__sub_83088AC8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83088AD4"))) PPC_WEAK_FUNC(sub_83088AD4);
PPC_FUNC_IMPL(__imp__sub_83088AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83088AD8"))) PPC_WEAK_FUNC(sub_83088AD8);
PPC_FUNC_IMPL(__imp__sub_83088AD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83088ADC"))) PPC_WEAK_FUNC(sub_83088ADC);
PPC_FUNC_IMPL(__imp__sub_83088ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83088AE0"))) PPC_WEAK_FUNC(sub_83088AE0);
PPC_FUNC_IMPL(__imp__sub_83088AE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83088AE4"))) PPC_WEAK_FUNC(sub_83088AE4);
PPC_FUNC_IMPL(__imp__sub_83088AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83088AE8"))) PPC_WEAK_FUNC(sub_83088AE8);
PPC_FUNC_IMPL(__imp__sub_83088AE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83088AEC"))) PPC_WEAK_FUNC(sub_83088AEC);
PPC_FUNC_IMPL(__imp__sub_83088AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83088AF0"))) PPC_WEAK_FUNC(sub_83088AF0);
PPC_FUNC_IMPL(__imp__sub_83088AF0) {
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
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83088b1c
	if (!ctx.cr6.eq) goto loc_83088B1C;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r3,r11,-4888
	ctx.r3.s64 = ctx.r11.s64 + -4888;
	// bl 0x82fa3be8
	ctx.lr = 0x83088B1C;
	sub_82FA3BE8(ctx, base);
loc_83088B1C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
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

__attribute__((alias("__imp__sub_83088B34"))) PPC_WEAK_FUNC(sub_83088B34);
PPC_FUNC_IMPL(__imp__sub_83088B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83088B38"))) PPC_WEAK_FUNC(sub_83088B38);
PPC_FUNC_IMPL(__imp__sub_83088B38) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83088B40"))) PPC_WEAK_FUNC(sub_83088B40);
PPC_FUNC_IMPL(__imp__sub_83088B40) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82fa76f0
	sub_82FA76F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83088B48"))) PPC_WEAK_FUNC(sub_83088B48);
PPC_FUNC_IMPL(__imp__sub_83088B48) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82fa27a8
	sub_82FA27A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83088B50"))) PPC_WEAK_FUNC(sub_83088B50);
PPC_FUNC_IMPL(__imp__sub_83088B50) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82fa76f0
	sub_82FA76F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83088B58"))) PPC_WEAK_FUNC(sub_83088B58);
PPC_FUNC_IMPL(__imp__sub_83088B58) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82fa27a8
	sub_82FA27A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83088B60"))) PPC_WEAK_FUNC(sub_83088B60);
PPC_FUNC_IMPL(__imp__sub_83088B60) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82fa76f0
	sub_82FA76F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83088B68"))) PPC_WEAK_FUNC(sub_83088B68);
PPC_FUNC_IMPL(__imp__sub_83088B68) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82fa27a8
	sub_82FA27A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83088B70"))) PPC_WEAK_FUNC(sub_83088B70);
PPC_FUNC_IMPL(__imp__sub_83088B70) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82fa76f0
	sub_82FA76F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83088B78"))) PPC_WEAK_FUNC(sub_83088B78);
PPC_FUNC_IMPL(__imp__sub_83088B78) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82fa27a8
	sub_82FA27A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83088B80"))) PPC_WEAK_FUNC(sub_83088B80);
PPC_FUNC_IMPL(__imp__sub_83088B80) {
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
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// lwz r11,18632(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18632);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83088bdc
	if (!ctx.cr6.eq) goto loc_83088BDC;
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r7,-31976
	ctx.r7.s64 = -2095579136;
	// stw r11,18632(r9)
	PPC_STORE_U32(ctx.r9.u32 + 18632, ctx.r11.u32);
	// addi r31,r8,18628
	ctx.r31.s64 = ctx.r8.s64 + 18628;
	// addi r3,r7,-30168
	ctx.r3.s64 = ctx.r7.s64 + -30168;
	// stw r10,18628(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18628, ctx.r10.u32);
	// bl 0x82fa2318
	ctx.lr = 0x83088BC4;
	sub_82FA2318(ctx, base);
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
loc_83088BDC:
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,18628
	ctx.r3.s64 = ctx.r11.s64 + 18628;
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

__attribute__((alias("__imp__sub_83088BF8"))) PPC_WEAK_FUNC(sub_83088BF8);
PPC_FUNC_IMPL(__imp__sub_83088BF8) {
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
	// bl 0x83088b80
	ctx.lr = 0x83088C10;
	sub_83088B80(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_83088C28"))) PPC_WEAK_FUNC(sub_83088C28);
PPC_FUNC_IMPL(__imp__sub_83088C28) {
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
	// bl 0x83088b80
	ctx.lr = 0x83088C44;
	sub_83088B80(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83088c60
	if (!ctx.cr6.eq) goto loc_83088C60;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r3,r11,-4888
	ctx.r3.s64 = ctx.r11.s64 + -4888;
	// bl 0x82fa3be8
	ctx.lr = 0x83088C60;
	sub_82FA3BE8(ctx, base);
loc_83088C60:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83088C78;
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

__attribute__((alias("__imp__sub_83088C90"))) PPC_WEAK_FUNC(sub_83088C90);
PPC_FUNC_IMPL(__imp__sub_83088C90) {
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
	// bl 0x83088b80
	ctx.lr = 0x83088CAC;
	sub_83088B80(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83088cc8
	if (!ctx.cr6.eq) goto loc_83088CC8;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r3,r11,-4888
	ctx.r3.s64 = ctx.r11.s64 + -4888;
	// bl 0x82fa3be8
	ctx.lr = 0x83088CC8;
	sub_82FA3BE8(ctx, base);
loc_83088CC8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83088CE0;
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

__attribute__((alias("__imp__sub_83088CF8"))) PPC_WEAK_FUNC(sub_83088CF8);
PPC_FUNC_IMPL(__imp__sub_83088CF8) {
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
	// bl 0x83088b80
	ctx.lr = 0x83088D14;
	sub_83088B80(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83088d30
	if (!ctx.cr6.eq) goto loc_83088D30;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r3,r11,-4888
	ctx.r3.s64 = ctx.r11.s64 + -4888;
	// bl 0x82fa3be8
	ctx.lr = 0x83088D30;
	sub_82FA3BE8(ctx, base);
loc_83088D30:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83088D48;
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

__attribute__((alias("__imp__sub_83088D60"))) PPC_WEAK_FUNC(sub_83088D60);
PPC_FUNC_IMPL(__imp__sub_83088D60) {
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
	// bl 0x83088b80
	ctx.lr = 0x83088D7C;
	sub_83088B80(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83088d98
	if (!ctx.cr6.eq) goto loc_83088D98;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r3,r11,-4888
	ctx.r3.s64 = ctx.r11.s64 + -4888;
	// bl 0x82fa3be8
	ctx.lr = 0x83088D98;
	sub_82FA3BE8(ctx, base);
loc_83088D98:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83088DB0;
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

__attribute__((alias("__imp__sub_83088DC8"))) PPC_WEAK_FUNC(sub_83088DC8);
PPC_FUNC_IMPL(__imp__sub_83088DC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x83088DD0;
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
	// bl 0x83088b80
	ctx.lr = 0x83088DE4;
	sub_83088B80(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83088e00
	if (!ctx.cr6.eq) goto loc_83088E00;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r3,r11,-4888
	ctx.r3.s64 = ctx.r11.s64 + -4888;
	// bl 0x82fa3be8
	ctx.lr = 0x83088E00;
	sub_82FA3BE8(ctx, base);
loc_83088E00:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83088E20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83088E28"))) PPC_WEAK_FUNC(sub_83088E28);
PPC_FUNC_IMPL(__imp__sub_83088E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x83088E30;
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
	// bl 0x83088b80
	ctx.lr = 0x83088E44;
	sub_83088B80(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83088e60
	if (!ctx.cr6.eq) goto loc_83088E60;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r3,r11,-4888
	ctx.r3.s64 = ctx.r11.s64 + -4888;
	// bl 0x82fa3be8
	ctx.lr = 0x83088E60;
	sub_82FA3BE8(ctx, base);
loc_83088E60:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83088E80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83088E88"))) PPC_WEAK_FUNC(sub_83088E88);
PPC_FUNC_IMPL(__imp__sub_83088E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x83088E90;
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
	// bl 0x83088b80
	ctx.lr = 0x83088EA4;
	sub_83088B80(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83088ec0
	if (!ctx.cr6.eq) goto loc_83088EC0;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r3,r11,-4888
	ctx.r3.s64 = ctx.r11.s64 + -4888;
	// bl 0x82fa3be8
	ctx.lr = 0x83088EC0;
	sub_82FA3BE8(ctx, base);
loc_83088EC0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83088EE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83088EE8"))) PPC_WEAK_FUNC(sub_83088EE8);
PPC_FUNC_IMPL(__imp__sub_83088EE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x83088EF0;
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
	// bl 0x83088b80
	ctx.lr = 0x83088F04;
	sub_83088B80(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83088f20
	if (!ctx.cr6.eq) goto loc_83088F20;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r3,r11,-4888
	ctx.r3.s64 = ctx.r11.s64 + -4888;
	// bl 0x82fa3be8
	ctx.lr = 0x83088F20;
	sub_82FA3BE8(ctx, base);
loc_83088F20:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83088F40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83088F48"))) PPC_WEAK_FUNC(sub_83088F48);
PPC_FUNC_IMPL(__imp__sub_83088F48) {
	PPC_FUNC_PROLOGUE();
	// fsubs f0,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f2.f64));
	// fsel f1,f0,f2,f1
	ctx.f1.f64 = ctx.f0.f64 >= 0.0 ? ctx.f2.f64 : ctx.f1.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83088F54"))) PPC_WEAK_FUNC(sub_83088F54);
PPC_FUNC_IMPL(__imp__sub_83088F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83088F58"))) PPC_WEAK_FUNC(sub_83088F58);
PPC_FUNC_IMPL(__imp__sub_83088F58) {
	PPC_FUNC_PROLOGUE();
	// fsubs f0,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f2.f64));
	// fsel f1,f0,f1,f2
	ctx.f1.f64 = ctx.f0.f64 >= 0.0 ? ctx.f1.f64 : ctx.f2.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83088F64"))) PPC_WEAK_FUNC(sub_83088F64);
PPC_FUNC_IMPL(__imp__sub_83088F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83088F68"))) PPC_WEAK_FUNC(sub_83088F68);
PPC_FUNC_IMPL(__imp__sub_83088F68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fsubs f0,f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsel f12,f0,f13,f3
	ctx.f12.f64 = ctx.f0.f64 >= 0.0 ? ctx.f13.f64 : ctx.f3.f64;
	// stfs f12,0(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83088F7C"))) PPC_WEAK_FUNC(sub_83088F7C);
PPC_FUNC_IMPL(__imp__sub_83088F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83088F80"))) PPC_WEAK_FUNC(sub_83088F80);
PPC_FUNC_IMPL(__imp__sub_83088F80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fsubs f0,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f2.f64));
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsel f12,f0,f13,f3
	ctx.f12.f64 = ctx.f0.f64 >= 0.0 ? ctx.f13.f64 : ctx.f3.f64;
	// stfs f12,0(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83088F94"))) PPC_WEAK_FUNC(sub_83088F94);
PPC_FUNC_IMPL(__imp__sub_83088F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83088F98"))) PPC_WEAK_FUNC(sub_83088F98);
PPC_FUNC_IMPL(__imp__sub_83088F98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fsubs f0,f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsel f12,f0,f3,f13
	ctx.f12.f64 = ctx.f0.f64 >= 0.0 ? ctx.f3.f64 : ctx.f13.f64;
	// stfs f12,0(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83088FAC"))) PPC_WEAK_FUNC(sub_83088FAC);
PPC_FUNC_IMPL(__imp__sub_83088FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83088FB0"))) PPC_WEAK_FUNC(sub_83088FB0);
PPC_FUNC_IMPL(__imp__sub_83088FB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x83088FB8;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82fa8d28
	ctx.lr = 0x83088FC0;
	__savefpr_28(ctx, base);
	// lfs f11,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3856(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 3856);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f8,f11
	ctx.f8.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f11.f64));
	// stfd f8,-208(r1)
	PPC_STORE_U64(ctx.r1.u32 + -208, ctx.f8.u64);
	// lwz r30,-204(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + -204);
	// lfs f9,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fctiwz f12,f0
	ctx.f12.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f12,-208(r1)
	PPC_STORE_U64(ctx.r1.u32 + -208, ctx.f12.u64);
	// lwz r31,-204(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -204);
	// lfs f7,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// fctiwz f6,f9
	ctx.f6.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f9.f64));
	// stfd f6,-208(r1)
	PPC_STORE_U64(ctx.r1.u32 + -208, ctx.f6.u64);
	// lwz r21,-204(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -204);
	// lfs f13,3872(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 3872);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f4,f7
	ctx.f4.s64 = (ctx.f7.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f7.f64));
	// stfd f4,-208(r1)
	PPC_STORE_U64(ctx.r1.u32 + -208, ctx.f4.u64);
	// lwz r20,-204(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + -204);
	// lfs f5,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// fctiwz f10,f13
	ctx.f10.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f10,-208(r1)
	PPC_STORE_U64(ctx.r1.u32 + -208, ctx.f10.u64);
	// lwz r24,-204(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + -204);
	// lfs f3,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f3.f64 = double(temp.f32);
	// fctiwz f2,f5
	ctx.f2.s64 = (ctx.f5.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f5.f64));
	// stfd f2,-208(r1)
	PPC_STORE_U64(ctx.r1.u32 + -208, ctx.f2.u64);
	// lwz r15,-204(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + -204);
	// lfs f1,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// fctiwz f0,f3
	ctx.f0.s64 = (ctx.f3.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f3.f64));
	// stfd f0,-208(r1)
	PPC_STORE_U64(ctx.r1.u32 + -208, ctx.f0.u64);
	// lwz r19,-204(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + -204);
	// lfs f13,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f11,f1
	ctx.f11.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f11,-208(r1)
	PPC_STORE_U64(ctx.r1.u32 + -208, ctx.f11.u64);
	// addi r10,r3,3848
	ctx.r10.s64 = ctx.r3.s64 + 3848;
	// lwz r28,-204(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + -204);
	// fctiwz f7,f13
	ctx.f7.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// lfs f9,5184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f9.f64 = double(temp.f32);
	// addi r22,r10,8
	ctx.r22.s64 = ctx.r10.s64 + 8;
	// stfd f7,-208(r1)
	PPC_STORE_U64(ctx.r1.u32 + -208, ctx.f7.u64);
	// lwz r27,-204(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + -204);
	// stfs f9,60(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stfs f9,64(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f9,80(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stfs f9,76(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stfs f9,92(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// beq cr6,0x83089548
	if (ctx.cr6.eq) goto loc_83089548;
	// addi r25,r5,-4
	ctx.r25.s64 = ctx.r5.s64 + -4;
	// addi r17,r6,-4
	ctx.r17.s64 = ctx.r6.s64 + -4;
	// addi r16,r7,-4
	ctx.r16.s64 = ctx.r7.s64 + -4;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32233
	ctx.r6.s64 = -2112421888;
	// lis r5,-31969
	ctx.r5.s64 = -2095120384;
	// lfs f4,-4712(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4712);
	ctx.f4.f64 = double(temp.f32);
	// rlwinm r18,r19,2,0,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f6,21500(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21500);
	ctx.f6.f64 = double(temp.f32);
	// addi r26,r4,-4
	ctx.r26.s64 = ctx.r4.s64 + -4;
	// lfs f7,5180(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5180);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,24436(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 24436);
	ctx.f8.f64 = double(temp.f32);
	// lfs f5,-10676(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -10676);
	ctx.f5.f64 = double(temp.f32);
loc_830890B8:
	// lfsu f0,4(r26)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r26.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r26.u32 = ea;
	ctx.f0.f64 = double(temp.f32);
	// add r11,r21,r31
	ctx.r11.u64 = ctx.r21.u64 + ctx.r31.u64;
	// lfsu f13,4(r25)
	ea = 4 + ctx.r25.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r25.u32 = ea;
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f5
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// fmuls f13,f13,f5
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 1;
	// fmr f12,f9
	ctx.f12.f64 = ctx.f9.f64;
	// addi r11,r22,4
	ctx.r11.s64 = ctx.r22.s64 + 4;
	// rlwinm r29,r9,1,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// subfc r6,r30,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r30.u32;
	ctx.r6.s64 = ctx.r9.s64 - ctx.r30.s64;
	// lfsx f11,r5,r3
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r23,r30,1,31,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x1;
	// fabs f10,f11
	ctx.f10.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// add r7,r20,r31
	ctx.r7.u64 = ctx.r20.u64 + ctx.r31.u64;
	// subfe r6,r29,r23
	temp.u8 = (~ctx.r29.u32 + ctx.r23.u32 < ~ctx.r29.u32) | (~ctx.r29.u32 + ctx.r23.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r29.u64 + ctx.r23.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// fsubs f3,f0,f8
	ctx.f3.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// subf r31,r31,r7
	ctx.r31.s64 = ctx.r7.s64 - ctx.r31.s64;
	// fsubs f2,f13,f8
	ctx.f2.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// rlwinm r29,r7,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// and r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 & ctx.r9.u64;
	// rlwinm r7,r31,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// add r9,r7,r10
	ctx.r9.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r6,r3,20
	ctx.r6.s64 = ctx.r3.s64 + 20;
	// li r7,0
	ctx.r7.s64 = 0;
	// fsel f1,f3,f8,f0
	ctx.f1.f64 = ctx.f3.f64 >= 0.0 ? ctx.f8.f64 : ctx.f0.f64;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// fsel f13,f2,f8,f13
	ctx.f13.f64 = ctx.f2.f64 >= 0.0 ? ctx.f8.f64 : ctx.f13.f64;
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// fsubs f3,f1,f7
	ctx.f3.f64 = double(float(ctx.f1.f64 - ctx.f7.f64));
	// fsubs f2,f13,f7
	ctx.f2.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// fsel f0,f3,f1,f7
	ctx.f0.f64 = ctx.f3.f64 >= 0.0 ? ctx.f1.f64 : ctx.f7.f64;
	// stfsx f0,r5,r3
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r3.u32, temp.u32);
	// fsel f13,f2,f13,f7
	ctx.f13.f64 = ctx.f2.f64 >= 0.0 ? ctx.f13.f64 : ctx.f7.f64;
	// lfsx f1,r5,r10
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	ctx.f1.f64 = double(temp.f32);
	// fabs f3,f1
	ctx.f3.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// stfsx f13,r5,r10
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r10.u32, temp.u32);
	// fabs f2,f0
	ctx.f2.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// stfs f11,4(r22)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r22.u32 + 4, temp.u32);
	// fabs f31,f13
	ctx.f31.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// stfs f1,0(r4)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fsubs f10,f3,f10
	ctx.f10.f64 = double(float(ctx.f3.f64 - ctx.f10.f64));
	// fsubs f3,f2,f31
	ctx.f3.f64 = double(float(ctx.f2.f64 - ctx.f31.f64));
	// fsel f2,f10,f1,f11
	ctx.f2.f64 = ctx.f10.f64 >= 0.0 ? ctx.f1.f64 : ctx.f11.f64;
	// stfs f2,4(r4)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fsel f1,f3,f0,f13
	ctx.f1.f64 = ctx.f3.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// stfsx f1,r29,r10
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + ctx.r10.u32, temp.u32);
	// blt cr6,0x830891f4
	if (ctx.cr6.lt) goto loc_830891F4;
	// addi r7,r30,-4
	ctx.r7.s64 = ctx.r30.s64 + -4;
	// rlwinm r7,r7,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r5,r7,1
	ctx.r5.s64 = ctx.r7.s64 + 1;
	// rlwinm r7,r5,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_8308919C:
	// lfs f11,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fabs f10,f12
	ctx.f10.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fabs f3,f11
	ctx.f3.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// lfs f2,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fabs f1,f2
	ctx.f1.u64 = ctx.f2.u64 & ~0x8000000000000000;
	// lfs f31,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f31.f64 = double(temp.f32);
	// fabs f30,f31
	ctx.f30.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// lfs f29,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f29.f64 = double(temp.f32);
	// fabs f28,f29
	ctx.f28.u64 = ctx.f29.u64 & ~0x8000000000000000;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// fsubs f10,f10,f3
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f3.f64));
	// fsel f3,f10,f12,f11
	ctx.f3.f64 = ctx.f10.f64 >= 0.0 ? ctx.f12.f64 : ctx.f11.f64;
	// fabs f12,f3
	ctx.f12.u64 = ctx.f3.u64 & ~0x8000000000000000;
	// fsubs f11,f12,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f1.f64));
	// fsel f10,f11,f3,f2
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f3.f64 : ctx.f2.f64;
	// fabs f3,f10
	ctx.f3.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// fsubs f2,f3,f30
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f30.f64));
	// fsel f1,f2,f10,f31
	ctx.f1.f64 = ctx.f2.f64 >= 0.0 ? ctx.f10.f64 : ctx.f31.f64;
	// fabs f12,f1
	ctx.f12.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// fsubs f11,f12,f28
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f28.f64));
	// fsel f12,f11,f1,f29
	ctx.f12.f64 = ctx.f11.f64 >= 0.0 ? ctx.f1.f64 : ctx.f29.f64;
	// bdnz 0x8308919c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8308919C;
loc_830891F4:
	// cmpw cr6,r7,r30
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x83089220
	if (!ctx.cr6.lt) goto loc_83089220;
	// subf r7,r7,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r7.s64;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_83089208:
	// lfsu f11,4(r9)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r9.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	ctx.f11.f64 = double(temp.f32);
	// fabs f10,f12
	ctx.f10.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fabs f3,f11
	ctx.f3.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fsubs f2,f10,f3
	ctx.f2.f64 = double(float(ctx.f10.f64 - ctx.f3.f64));
	// fsel f12,f2,f12,f11
	ctx.f12.f64 = ctx.f2.f64 >= 0.0 ? ctx.f12.f64 : ctx.f11.f64;
	// bdnz 0x83089208
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83089208;
loc_83089220:
	// fabs f2,f13
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// lfs f3,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fabs f11,f0
	ctx.f11.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// fabs f1,f3
	ctx.f1.u64 = ctx.f3.u64 & ~0x8000000000000000;
	// lfsu f0,8(r11)
	ea = 8 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f0.f64 = double(temp.f32);
	// fabs f31,f0
	ctx.f31.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfsu f10,4(r6)
	ea = 4 + ctx.r6.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r6.u32 = ea;
	ctx.f10.f64 = double(temp.f32);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// addi r9,r6,4
	ctx.r9.s64 = ctx.r6.s64 + 4;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// fsubs f13,f2,f11
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f11.f64));
	// fsel f11,f13,f2,f11
	ctx.f11.f64 = ctx.f13.f64 >= 0.0 ? ctx.f2.f64 : ctx.f11.f64;
	// fsubs f2,f11,f8
	ctx.f2.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// fsel f13,f2,f8,f11
	ctx.f13.f64 = ctx.f2.f64 >= 0.0 ? ctx.f8.f64 : ctx.f11.f64;
	// fabs f11,f13
	ctx.f11.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fsubs f2,f11,f1
	ctx.f2.f64 = double(float(ctx.f11.f64 - ctx.f1.f64));
	// fsel f13,f2,f3,f13
	ctx.f13.f64 = ctx.f2.f64 >= 0.0 ? ctx.f3.f64 : ctx.f13.f64;
	// fabs f1,f13
	ctx.f1.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x83089280
	if (!ctx.cr6.gt) goto loc_83089280;
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_83089280:
	// fabs f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f0,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f0.f64 = double(temp.f32);
	// fabs f3,f0
	ctx.f3.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fsubs f2,f13,f10
	ctx.f2.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// fmr f11,f9
	ctx.f11.f64 = ctx.f9.f64;
	// rlwinm r6,r7,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// and r24,r6,r7
	ctx.r24.u64 = ctx.r6.u64 & ctx.r7.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// fabs f1,f2
	ctx.f1.u64 = ctx.f2.u64 & ~0x8000000000000000;
	// fsubs f13,f1,f3
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f3.f64));
	// fsel f10,f13,f2,f0
	ctx.f10.f64 = ctx.f13.f64 >= 0.0 ? ctx.f2.f64 : ctx.f0.f64;
	// stfs f10,0(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// lfsu f0,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,-8
	ctx.r9.s64 = ctx.r9.s64 + -8;
	// bgt cr6,0x830892d8
	if (ctx.cr6.gt) goto loc_830892D8;
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
	// fmr f0,f9
	ctx.f0.f64 = ctx.f9.f64;
loc_830892D8:
	// fabs f10,f12
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// lfsu f13,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f13.f64 = double(temp.f32);
	// lfs f3,-4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -4);
	ctx.f3.f64 = double(temp.f32);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// fmadds f2,f13,f0,f3
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f3.f64));
	// lfsu f0,-4(r11)
	ea = -4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f0.f64 = double(temp.f32);
	// fabs f1,f0
	ctx.f1.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfsu f13,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// fsubs f10,f10,f3
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f3.f64));
	// fmadds f3,f10,f11,f2
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f2.f64));
	// fabs f2,f3
	ctx.f2.u64 = ctx.f3.u64 & ~0x8000000000000000;
	// fsubs f1,f2,f1
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// fsel f0,f1,f0,f3
	ctx.f0.f64 = ctx.f1.f64 >= 0.0 ? ctx.f0.f64 : ctx.f3.f64;
	// bgt cr6,0x83089318
	if (ctx.cr6.gt) goto loc_83089318;
	// fmr f13,f9
	ctx.f13.f64 = ctx.f9.f64;
loc_83089318:
	// stfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fabs f1,f12
	ctx.f1.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// fabs f12,f1
	ctx.f12.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lfs f11,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fabs f10,f11
	ctx.f10.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fabs f2,f11
	ctx.f2.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fsubs f3,f13,f10
	ctx.f3.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fsel f0,f3,f0,f11
	ctx.f0.f64 = ctx.f3.f64 >= 0.0 ? ctx.f0.f64 : ctx.f11.f64;
	// fabs f10,f0
	ctx.f10.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// stfs f10,-4(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + -4, temp.u32);
	// lfsu f0,-4(r11)
	ea = -4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f0.f64 = double(temp.f32);
	// fabs f3,f10
	ctx.f3.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// fsubs f2,f3,f2
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f2.f64));
	// fsel f0,f2,f0,f11
	ctx.f0.f64 = ctx.f2.f64 >= 0.0 ? ctx.f0.f64 : ctx.f11.f64;
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f13,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	ctx.f13.f64 = double(temp.f32);
	// lfsu f0,8(r11)
	ea = 8 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f0.f64 = double(temp.f32);
	// fabs f11,f0
	ctx.f11.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f10,-4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f3,f11,f12
	ctx.f3.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfsu f12,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	ctx.f12.f64 = double(temp.f32);
	// fsubs f2,f1,f0
	ctx.f2.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// addi r6,r9,4
	ctx.r6.s64 = ctx.r9.s64 + 4;
	// fsel f1,f3,f13,f12
	ctx.f1.f64 = ctx.f3.f64 >= 0.0 ? ctx.f13.f64 : ctx.f12.f64;
	// fmadds f0,f1,f2,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f2.f64 + ctx.f0.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fsubs f13,f10,f0
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fsel f12,f13,f10,f0
	ctx.f12.f64 = ctx.f13.f64 >= 0.0 ? ctx.f10.f64 : ctx.f0.f64;
	// stfs f12,-4(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + -4, temp.u32);
	// lfsu f0,-8(r11)
	ea = -8 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f0.f64 = double(temp.f32);
	// bgt cr6,0x830893a4
	if (ctx.cr6.gt) goto loc_830893A4;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_830893A4:
	// stfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// std r8,-208(r1)
	PPC_STORE_U64(ctx.r1.u32 + -208, ctx.r8.u64);
	// add r7,r27,r19
	ctx.r7.u64 = ctx.r27.u64 + ctx.r19.u64;
	// fmr f0,f9
	ctx.f0.f64 = ctx.f9.f64;
	// addi r9,r27,1
	ctx.r9.s64 = ctx.r27.s64 + 1;
	// fmr f13,f9
	ctx.f13.f64 = ctx.f9.f64;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// fmr f10,f9
	ctx.f10.f64 = ctx.f9.f64;
	// subfc r29,r28,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r28.u32;
	ctx.r29.s64 = ctx.r9.s64 - ctx.r28.s64;
	// rlwinm r14,r9,1,31,31
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// rlwinm r8,r28,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0x1;
	// subf r7,r27,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r27.s64;
	// stfsx f12,r5,r10
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r10.u32, temp.u32);
	// subfe r5,r14,r8
	temp.u8 = (~ctx.r14.u32 + ctx.r8.u32 < ~ctx.r14.u32) | (~ctx.r14.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r14.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r29,r7,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// and r27,r5,r9
	ctx.r27.u64 = ctx.r5.u64 & ctx.r9.u64;
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// addi r9,r7,1
	ctx.r9.s64 = ctx.r7.s64 + 1;
	// addi r11,r6,12
	ctx.r11.s64 = ctx.r6.s64 + 12;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// lfsx f12,r29,r10
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// ld r8,-208(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -208);
	// lfsx f11,r18,r3
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + ctx.r3.u32);
	ctx.f11.f64 = double(temp.f32);
	// blt cr6,0x8308943c
	if (ctx.cr6.lt) goto loc_8308943C;
	// addi r7,r28,-2
	ctx.r7.s64 = ctx.r28.s64 + -2;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r7,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r6,1
	ctx.r9.s64 = ctx.r6.s64 + 1;
	// addi r6,r7,-4
	ctx.r6.s64 = ctx.r7.s64 + -4;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83089428:
	// lfs f3,4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f0,f12,f11,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f0.f64));
	// lfsu f12,8(r6)
	ea = 8 + ctx.r6.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r6.u32 = ea;
	ctx.f12.f64 = double(temp.f32);
	// fmadds f13,f3,f11,f13
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f11.f64 + ctx.f13.f64));
	// bdnz 0x83089428
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83089428;
loc_8308943C:
	// cmpw cr6,r7,r28
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x83089448
	if (!ctx.cr6.lt) goto loc_83089448;
	// fmuls f10,f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
loc_83089448:
	// fadds f0,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fabs f11,f12
	ctx.f11.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// fadds f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fmuls f3,f10,f10
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmsubs f2,f10,f6,f3
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f6.f64 - ctx.f3.f64));
	// fmuls f1,f2,f2
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f2.f64));
	// fmsubs f0,f2,f6,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f6.f64 - ctx.f1.f64));
	// fmuls f13,f0,f4
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// fctiwz f10,f13
	ctx.f10.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f10,-208(r1)
	PPC_STORE_U64(ctx.r1.u32 + -208, ctx.f10.u64);
	// lwz r9,-204(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -204);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// std r7,-200(r1)
	PPC_STORE_U64(ctx.r1.u32 + -200, ctx.r7.u64);
	// lfd f3,-200(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + -200);
	// fcfid f2,f3
	ctx.f2.f64 = double(ctx.f3.s64);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f1,f2
	ctx.f1.f64 = double(float(ctx.f2.f64));
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lfs f0,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f3,f10,f0
	ctx.f3.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fsubs f2,f13,f1
	ctx.f2.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// fmadds f0,f3,f2,f0
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f2.f64 + ctx.f0.f64));
	// fabs f1,f0
	ctx.f1.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fsubs f13,f1,f11
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f11.f64));
	// fsel f12,f13,f0,f12
	ctx.f12.f64 = ctx.f13.f64 >= 0.0 ? ctx.f0.f64 : ctx.f12.f64;
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f11,0(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfsu f13,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f13.f64 = double(temp.f32);
	// fabs f10,f13
	ctx.f10.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fabs f3,f11
	ctx.f3.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fmuls f2,f11,f0
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fsubs f1,f10,f3
	ctx.f1.f64 = double(float(ctx.f10.f64 - ctx.f3.f64));
	// fsel f13,f1,f13,f11
	ctx.f13.f64 = ctx.f1.f64 >= 0.0 ? ctx.f13.f64 : ctx.f11.f64;
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f12,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f2,f12
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// lfsu f13,8(r11)
	ea = 8 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f13.f64 = double(temp.f32);
	// fabs f10,f13
	ctx.f10.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fabs f3,f11
	ctx.f3.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fsubs f2,f10,f3
	ctx.f2.f64 = double(float(ctx.f10.f64 - ctx.f3.f64));
	// fsel f1,f2,f13,f11
	ctx.f1.f64 = ctx.f2.f64 >= 0.0 ? ctx.f13.f64 : ctx.f11.f64;
	// stfs f1,0(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfsu f11,4(r17)
	temp.f32 = float(ctx.f11.f64);
	ea = 4 + ctx.r17.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r17.u32 = ea;
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfsu f13,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f13.f64 = double(temp.f32);
	// fabs f11,f13
	ctx.f11.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fabs f10,f12
	ctx.f10.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fmuls f3,f12,f0
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fsubs f2,f11,f10
	ctx.f2.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fsel f1,f2,f13,f12
	ctx.f1.f64 = ctx.f2.f64 >= 0.0 ? ctx.f13.f64 : ctx.f12.f64;
	// stfs f1,0(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f0,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f3,f0
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// lfsu f0,8(r11)
	ea = 8 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f0.f64 = double(temp.f32);
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fabs f11,f0
	ctx.f11.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fsubs f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fsel f3,f10,f0,f13
	ctx.f3.f64 = ctx.f10.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// stfs f3,0(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfsu f13,4(r16)
	temp.f32 = float(ctx.f13.f64);
	ea = 4 + ctx.r16.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r16.u32 = ea;
	// bne cr6,0x830890b8
	if (!ctx.cr6.eq) goto loc_830890B8;
loc_83089548:
	// extsw r11,r27
	ctx.r11.s64 = ctx.r27.s32;
	// extsw r9,r31
	ctx.r9.s64 = ctx.r31.s32;
	// std r11,-200(r1)
	PPC_STORE_U64(ctx.r1.u32 + -200, ctx.r11.u64);
	// extsw r8,r24
	ctx.r8.s64 = ctx.r24.s32;
	// std r9,-208(r1)
	PPC_STORE_U64(ctx.r1.u32 + -208, ctx.r9.u64);
	// lfd f11,-208(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -208);
	// fcfid f9,f11
	ctx.f9.f64 = double(ctx.f11.s64);
	// lfd f0,-200(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -200);
	// std r8,-200(r1)
	PPC_STORE_U64(ctx.r1.u32 + -200, ctx.r8.u64);
	// lfd f13,-200(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -200);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// frsp f8,f12
	ctx.f8.f64 = double(float(ctx.f12.f64));
	// stfs f8,24(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// stfs f6,0(r22)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r22.u32 + 0, temp.u32);
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// stfs f7,56(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82fa8d74
	ctx.lr = 0x83089598;
	__restfpr_28(ctx, base);
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8308959C"))) PPC_WEAK_FUNC(sub_8308959C);
PPC_FUNC_IMPL(__imp__sub_8308959C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830895A0"))) PPC_WEAK_FUNC(sub_830895A0);
PPC_FUNC_IMPL(__imp__sub_830895A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r11,r4,8
	ctx.r11.s64 = ctx.r4.s64 + 8;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// lfs f0,60(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f0,-4704(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4704);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,8(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f11,80(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfsu f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// lfs f9,76(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f9.f64 = double(temp.f32);
	// stfsu f9,4(r11)
	temp.f32 = float(ctx.f9.f64);
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// lfs f8,92(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,4(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830895E8"))) PPC_WEAK_FUNC(sub_830895E8);
PPC_FUNC_IMPL(__imp__sub_830895E8) {
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
	// bl 0x8308d5e8
	ctx.lr = 0x83089600;
	sub_8308D5E8(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// addi r10,r11,-4784
	ctx.r10.s64 = ctx.r11.s64 + -4784;
	// lfs f1,-4784(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4784);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x8308d3e8
	ctx.lr = 0x83089618;
	sub_8308D3E8(ctx, base);
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

__attribute__((alias("__imp__sub_83089630"))) PPC_WEAK_FUNC(sub_83089630);
PPC_FUNC_IMPL(__imp__sub_83089630) {
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
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// bl 0x8308d3f8
	ctx.lr = 0x8308964C;
	sub_8308D3F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8308d600
	ctx.lr = 0x83089654;
	sub_8308D600(ctx, base);
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

__attribute__((alias("__imp__sub_83089668"))) PPC_WEAK_FUNC(sub_83089668);
PPC_FUNC_IMPL(__imp__sub_83089668) {
	PPC_FUNC_PROLOGUE();
	// li r3,7696
	ctx.r3.s64 = 7696;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83089670"))) PPC_WEAK_FUNC(sub_83089670);
PPC_FUNC_IMPL(__imp__sub_83089670) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// li r4,7696
	ctx.r4.s64 = 7696;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x830896AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x830896d4
	if (!ctx.cr6.eq) goto loc_830896D4;
	// li r3,52
	ctx.r3.s64 = 52;
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
loc_830896D4:
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,24436(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24436);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f0,-4540(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4540);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stfs f0,16(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 16, temp.u32);
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

__attribute__((alias("__imp__sub_83089708"))) PPC_WEAK_FUNC(sub_83089708);
PPC_FUNC_IMPL(__imp__sub_83089708) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83089710"))) PPC_WEAK_FUNC(sub_83089710);
PPC_FUNC_IMPL(__imp__sub_83089710) {
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
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfd f13,22472(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22472);
	// fcmpu cr6,f2,f13
	ctx.cr6.compare(ctx.f2.f64, ctx.f13.f64);
	// bge cr6,0x83089744
	if (!ctx.cr6.lt) goto loc_83089744;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f13,22560(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22560);
	// fsub f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 - ctx.f13.f64;
loc_83089744:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfd f13,22480(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22480);
	// lfd f1,22080(r10)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r10.u32 + 22080);
	// fmul f2,f0,f13
	ctx.f2.f64 = ctx.f0.f64 * ctx.f13.f64;
	// bl 0x82fa30a8
	ctx.lr = 0x8308975C;
	sub_82FA30A8(ctx, base);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,84(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 84, temp.u32);
	// stfs f0,68(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 68, temp.u32);
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

__attribute__((alias("__imp__sub_83089780"))) PPC_WEAK_FUNC(sub_83089780);
PPC_FUNC_IMPL(__imp__sub_83089780) {
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
	// fmr f0,f3
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f3.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfd f13,22472(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22472);
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bge cr6,0x830897b4
	if (!ctx.cr6.lt) goto loc_830897B4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f13,22560(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22560);
	// fsub f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 - ctx.f13.f64;
loc_830897B4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfd f13,22480(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22480);
	// lfd f1,22080(r10)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r10.u32 + 22080);
	// fmul f2,f0,f13
	ctx.f2.f64 = ctx.f0.f64 * ctx.f13.f64;
	// bl 0x82fa30a8
	ctx.lr = 0x830897CC;
	sub_82FA30A8(ctx, base);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,84(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 84, temp.u32);
	// stfs f0,68(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 68, temp.u32);
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

__attribute__((alias("__imp__sub_830897F0"))) PPC_WEAK_FUNC(sub_830897F0);
PPC_FUNC_IMPL(__imp__sub_830897F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830897F4"))) PPC_WEAK_FUNC(sub_830897F4);
PPC_FUNC_IMPL(__imp__sub_830897F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830897F8"))) PPC_WEAK_FUNC(sub_830897F8);
PPC_FUNC_IMPL(__imp__sub_830897F8) {
	PPC_FUNC_PROLOGUE();
	// fmr f0,f2
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f2.f64;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// li r4,600
	ctx.r4.s64 = 600;
	// addi r3,r11,3892
	ctx.r3.s64 = ctx.r11.s64 + 3892;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// b 0x8308d430
	sub_8308D430(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83089814"))) PPC_WEAK_FUNC(sub_83089814);
PPC_FUNC_IMPL(__imp__sub_83089814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83089818"))) PPC_WEAK_FUNC(sub_83089818);
PPC_FUNC_IMPL(__imp__sub_83089818) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// cmplwi cr6,r5,5
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 5, ctx.xer);
	// bgt cr6,0x830898d4
	if (ctx.cr6.gt) goto loc_830898D4;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x83089870
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_83089870;
	// bdzf 4*cr6+eq,0x83089884
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_83089884;
	// bdzf 4*cr6+eq,0x83089898
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_83089898;
	// bdzf 4*cr6+eq,0x830898ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_830898AC;
	// bne cr6,0x830898c0
	if (!ctx.cr6.eq) goto loc_830898C0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfd f31,22472(r11)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22472);
	// lfd f0,1600(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 1600);
	// b 0x830898dc
	goto loc_830898DC;
loc_83089870:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// lfd f31,22472(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22472);
	// lfd f0,-3784(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -3784);
	// b 0x830898dc
	goto loc_830898DC;
loc_83089884:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lfd f31,22472(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22472);
	// lfd f0,-23688(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -23688);
	// b 0x830898dc
	goto loc_830898DC;
loc_83089898:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfd f31,22472(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22472);
	// lfd f0,21528(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 21528);
	// b 0x830898dc
	goto loc_830898DC;
loc_830898AC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfd f31,22472(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22472);
	// lfd f0,22080(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 22080);
	// b 0x830898dc
	goto loc_830898DC;
loc_830898C0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lfd f31,22472(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22472);
	// lfd f0,-23544(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -23544);
	// b 0x830898dc
	goto loc_830898DC;
loc_830898D4:
	// lfd f31,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_830898DC:
	// fcmpu cr6,f30,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// ble cr6,0x830898e8
	if (!ctx.cr6.gt) goto loc_830898E8;
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
loc_830898E8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8308d870
	ctx.lr = 0x830898F0;
	sub_8308D870(ctx, base);
	// fadd f1,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64 + ctx.f30.f64;
	// bl 0x8308d7f0
	ctx.lr = 0x830898F8;
	sub_8308D7F0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83089920"))) PPC_WEAK_FUNC(sub_83089920);
PPC_FUNC_IMPL(__imp__sub_83089920) {
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
	// bl 0x82fa8d28
	ctx.lr = 0x83089938;
	__savefpr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// cmplwi cr6,r4,5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 5, ctx.xer);
	// bgt cr6,0x83089a0c
	if (ctx.cr6.gt) goto loc_83089A0C;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x83089984
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_83089984;
	// bdzf 4*cr6+eq,0x830899a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_830899A0;
	// bdzf 4*cr6+eq,0x830899bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_830899BC;
	// bdzf 4*cr6+eq,0x830899d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_830899D8;
	// bne cr6,0x830899f0
	if (!ctx.cr6.eq) goto loc_830899F0;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfd f31,-4504(r11)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + -4504);
	// lfd f29,-4512(r10)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r10.u32 + -4512);
	// lfd f30,1600(r9)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1600);
	// b 0x83089a18
	goto loc_83089A18;
loc_83089984:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// lfd f31,-11136(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + -11136);
	// lfd f29,-4520(r10)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r10.u32 + -4520);
	// lfd f30,-3784(r9)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r9.u32 + -3784);
	// b 0x83089a18
	goto loc_83089A18;
loc_830899A0:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lfd f31,-24648(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + -24648);
	// lfd f29,-4528(r10)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r10.u32 + -4528);
	// lfd f30,-23688(r9)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r9.u32 + -23688);
	// b 0x83089a18
	goto loc_83089A18;
loc_830899BC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfd f31,22488(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22488);
	// lfd f29,-4536(r10)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r10.u32 + -4536);
	// lfd f30,21528(r9)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r9.u32 + 21528);
	// b 0x83089a18
	goto loc_83089A18;
loc_830899D8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfd f31,22080(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22080);
	// lfd f29,22464(r10)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r10.u32 + 22464);
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// b 0x83089a18
	goto loc_83089A18;
loc_830899F0:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lfd f31,-23688(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + -23688);
	// lfd f29,-4504(r10)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r10.u32 + -4504);
	// lfd f30,-23544(r9)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r9.u32 + -23544);
	// b 0x83089a18
	goto loc_83089A18;
loc_83089A0C:
	// lfd f31,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfd f29,80(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfd f30,80(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_83089A18:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8308d870
	ctx.lr = 0x83089A20;
	sub_8308D870(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8308d7f0
	ctx.lr = 0x83089A2C;
	sub_8308D7F0(ctx, base);
	// fsub f0,f28,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f28.f64 - ctx.f30.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// frsp f12,f1
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lfd f13,22472(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22472);
	// stfs f12,44(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 44, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x83089a50
	if (!ctx.cr6.lt) goto loc_83089A50;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_83089A50:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fadd f1,f29,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64 + ctx.f0.f64;
	// bl 0x8308d7f0
	ctx.lr = 0x83089A5C;
	sub_8308D7F0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82fa8d74
	ctx.lr = 0x83089A74;
	__restfpr_28(ctx, base);
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

__attribute__((alias("__imp__sub_83089A88"))) PPC_WEAK_FUNC(sub_83089A88);
PPC_FUNC_IMPL(__imp__sub_83089A88) {
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
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// bl 0x8308d400
	ctx.lr = 0x83089AB4;
	sub_8308D400(ctx, base);
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f13
	ctx.f1.f64 = double(ctx.f13.s64);
	// bl 0x8308d8e8
	ctx.lr = 0x83089AC8;
	sub_8308D8E8(ctx, base);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,36(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 36, temp.u32);
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

__attribute__((alias("__imp__sub_83089AE8"))) PPC_WEAK_FUNC(sub_83089AE8);
PPC_FUNC_IMPL(__imp__sub_83089AE8) {
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
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// bl 0x8308d5b8
	ctx.lr = 0x83089B14;
	sub_8308D5B8(ctx, base);
	// addi r9,r3,1
	ctx.r9.s64 = ctx.r3.s64 + 1;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// stfs f11,28(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 28, temp.u32);
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

__attribute__((alias("__imp__sub_83089B48"))) PPC_WEAK_FUNC(sub_83089B48);
PPC_FUNC_IMPL(__imp__sub_83089B48) {
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
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r3,12
	ctx.r30.s64 = ctx.r3.s64 + 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,-4492(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4492);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// bl 0x8308d5b8
	ctx.lr = 0x83089B8C;
	sub_8308D5B8(ctx, base);
	// extsw r7,r3
	ctx.r7.s64 = ctx.r3.s32;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r5,-32232
	ctx.r5.s64 = -2112356352;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// stfs f11,8(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,-4496(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -4496);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 48, temp.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f10
	ctx.f1.f64 = double(ctx.f10.s64);
	// bl 0x8308d418
	ctx.lr = 0x83089BD0;
	sub_8308D418(ctx, base);
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f9,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// stfs f7,52(r8)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r8.u32 + 52, temp.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f6,80(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f6
	ctx.f1.f64 = double(ctx.f6.s64);
	// bl 0x8308d418
	ctx.lr = 0x83089C04;
	sub_8308D418(ctx, base);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r5,-32233
	ctx.r5.s64 = -2112421888;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f5,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// addi r4,r11,3652
	ctx.r4.s64 = ctx.r11.s64 + 3652;
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// lfs f0,24436(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24436);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// fdivs f0,f0,f3
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f3.f64));
	// ble cr6,0x83089c4c
	if (!ctx.cr6.gt) goto loc_83089C4C;
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r4,4
	ctx.r3.s64 = ctx.r4.s64 + 4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r5,r11,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// bl 0x82fa7c48
	ctx.lr = 0x83089C4C;
	sub_82FA7C48(ctx, base);
loc_83089C4C:
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

__attribute__((alias("__imp__sub_83089C64"))) PPC_WEAK_FUNC(sub_83089C64);
PPC_FUNC_IMPL(__imp__sub_83089C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83089C68"))) PPC_WEAK_FUNC(sub_83089C68);
PPC_FUNC_IMPL(__imp__sub_83089C68) {
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
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// bl 0x8308d5b8
	ctx.lr = 0x83089C8C;
	sub_8308D5B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83089C9C"))) PPC_WEAK_FUNC(sub_83089C9C);
PPC_FUNC_IMPL(__imp__sub_83089C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83089CA0"))) PPC_WEAK_FUNC(sub_83089CA0);
PPC_FUNC_IMPL(__imp__sub_83089CA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r11,r4,8
	ctx.r11.s64 = ctx.r4.s64 + 8;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// lfs f0,60(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f0,-4704(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4704);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,64(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,8(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f11,80(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfsu f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// lfs f9,76(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	ctx.f9.f64 = double(temp.f32);
	// stfsu f9,4(r11)
	temp.f32 = float(ctx.f9.f64);
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// lfs f8,92(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,4(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83089CEC"))) PPC_WEAK_FUNC(sub_83089CEC);
PPC_FUNC_IMPL(__imp__sub_83089CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83089CF0"))) PPC_WEAK_FUNC(sub_83089CF0);
PPC_FUNC_IMPL(__imp__sub_83089CF0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83089CFC"))) PPC_WEAK_FUNC(sub_83089CFC);
PPC_FUNC_IMPL(__imp__sub_83089CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83089D00"))) PPC_WEAK_FUNC(sub_83089D00);
PPC_FUNC_IMPL(__imp__sub_83089D00) {
	PPC_FUNC_PROLOGUE();
	// li r3,7696
	ctx.r3.s64 = 7696;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83089D08"))) PPC_WEAK_FUNC(sub_83089D08);
PPC_FUNC_IMPL(__imp__sub_83089D08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x83089D10;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,20
	ctx.r3.s64 = 20;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x83088cf8
	ctx.lr = 0x83089D28;
	sub_83088CF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83089d58
	if (ctx.cr6.eq) goto loc_83089D58;
	// bl 0x8308d5e8
	ctx.lr = 0x83089D38;
	sub_8308D5E8(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// addi r10,r11,-4784
	ctx.r10.s64 = ctx.r11.s64 + -4784;
	// lfs f1,-4784(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4784);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x8308d3e8
	ctx.lr = 0x83089D50;
	sub_8308D3E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x83089d5c
	goto loc_83089D5C;
loc_83089D58:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83089D5C:
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x83089d74
	if (!ctx.cr6.eq) goto loc_83089D74;
	// li r3,52
	ctx.r3.s64 = 52;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_83089D74:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83089670
	ctx.lr = 0x83089D80;
	sub_83089670(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83089D88"))) PPC_WEAK_FUNC(sub_83089D88);
PPC_FUNC_IMPL(__imp__sub_83089D88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x83089D90;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82fa8d20
	ctx.lr = 0x83089D98;
	__savefpr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// std r5,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r5.u64);
	// lfd f13,216(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r4,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r4.u64);
	// std r6,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r6.u64);
	// std r7,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r7.u64);
	// lfd f0,20192(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 20192);
	// std r8,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r8.u64);
	// fsub f31,f13,f0
	ctx.f31.f64 = ctx.f13.f64 - ctx.f0.f64;
	// lfd f0,-4488(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -4488);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x83089dd8
	if (!ctx.cr6.lt) goto loc_83089DD8;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_83089DD8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f30,208(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// lfd f27,22472(r11)
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22472);
	// lfd f26,22560(r10)
	ctx.f26.u64 = PPC_LOAD_U64(ctx.r10.u32 + 22560);
	// fcmpu cr6,f31,f27
	ctx.cr6.compare(ctx.f31.f64, ctx.f27.f64);
	// bge cr6,0x83089e00
	if (!ctx.cr6.lt) goto loc_83089E00;
	// fsub f0,f30,f26
	ctx.f0.f64 = ctx.f30.f64 - ctx.f26.f64;
loc_83089E00:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfd f29,22480(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22480);
	// lfd f28,22080(r10)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r10.u32 + 22080);
	// fmul f2,f0,f29
	ctx.f2.f64 = ctx.f0.f64 * ctx.f29.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82fa30a8
	ctx.lr = 0x83089E1C;
	sub_82FA30A8(ctx, base);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// fcmpu cr6,f31,f27
	ctx.cr6.compare(ctx.f31.f64, ctx.f27.f64);
	// stfs f13,84(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 84, temp.u32);
	// stfs f13,68(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 68, temp.u32);
	// bge cr6,0x83089e40
	if (!ctx.cr6.lt) goto loc_83089E40;
	// fsub f0,f30,f26
	ctx.f0.f64 = ctx.f30.f64 - ctx.f26.f64;
loc_83089E40:
	// fmul f2,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f0.f64 * ctx.f29.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82fa30a8
	ctx.lr = 0x83089E4C;
	sub_82FA30A8(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,600
	ctx.r4.s64 = 600;
	// lfd f2,224(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r3,r11,3892
	ctx.r3.s64 = ctx.r11.s64 + 3892;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// stfs f13,84(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 84, temp.u32);
	// stfs f13,68(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 68, temp.u32);
	// bl 0x8308d430
	ctx.lr = 0x83089E7C;
	sub_8308D430(ctx, base);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f12
	ctx.f1.f64 = double(ctx.f12.s64);
	// bl 0x8308d400
	ctx.lr = 0x83089E98;
	sub_8308D400(ctx, base);
	// extsw r6,r3
	ctx.r6.s64 = ctx.r3.s32;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f11,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f11
	ctx.f1.f64 = double(ctx.f11.s64);
	// bl 0x8308d8e8
	ctx.lr = 0x83089EAC;
	sub_8308D8E8(ctx, base);
	// fmr f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f1.f64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r29,240(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// lfd f31,232(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 232);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// stfs f9,36(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 36, temp.u32);
	// bl 0x83089818
	ctx.lr = 0x83089ED4;
	sub_83089818(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83089920
	ctx.lr = 0x83089EE4;
	sub_83089920(ctx, base);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f8,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f8
	ctx.f1.f64 = double(ctx.f8.s64);
	// bl 0x8308d5b8
	ctx.lr = 0x83089F00;
	sub_8308D5B8(ctx, base);
	// addi r9,r3,1
	ctx.r9.s64 = ctx.r3.s64 + 1;
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f7,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// stfs f5,28(r8)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r8.u32 + 28, temp.u32);
	// bl 0x83089b48
	ctx.lr = 0x83089F28;
	sub_83089B48(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82fa8d6c
	ctx.lr = 0x83089F34;
	__restfpr_26(ctx, base);
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83089F38"))) PPC_WEAK_FUNC(sub_83089F38);
PPC_FUNC_IMPL(__imp__sub_83089F38) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// bl 0x8308d5b8
	ctx.lr = 0x83089F60;
	sub_8308D5B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83089F70"))) PPC_WEAK_FUNC(sub_83089F70);
PPC_FUNC_IMPL(__imp__sub_83089F70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r11,r4,8
	ctx.r11.s64 = ctx.r4.s64 + 8;
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lfs f0,-4704(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4704);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// lfs f13,60(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f12,64(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,8(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f10,80(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfsu f9,4(r11)
	temp.f32 = float(ctx.f9.f64);
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// lfs f8,76(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 76);
	ctx.f8.f64 = double(temp.f32);
	// stfsu f8,4(r11)
	temp.f32 = float(ctx.f8.f64);
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// lfs f7,92(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 92);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,4(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83089FC0"))) PPC_WEAK_FUNC(sub_83089FC0);
PPC_FUNC_IMPL(__imp__sub_83089FC0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// b 0x83089d88
	sub_83089D88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83089FC8"))) PPC_WEAK_FUNC(sub_83089FC8);
PPC_FUNC_IMPL(__imp__sub_83089FC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x83089FD0;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x83089ff0
	if (!ctx.cr6.eq) goto loc_83089FF0;
loc_83089FE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_83089FF0:
	// cmpwi cr6,r5,962
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 962, ctx.xer);
	// bne cr6,0x83089fe0
	if (!ctx.cr6.eq) goto loc_83089FE0;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r3,1
	ctx.r3.s64 = 1;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// subf r28,r4,r10
	ctx.r28.s64 = ctx.r10.s64 - ctx.r4.s64;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r29,r11,-4696
	ctx.r29.s64 = ctx.r11.s64 + -4696;
	// lfs f31,-25140(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25140);
	ctx.f31.f64 = double(temp.f32);
loc_8308A020:
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfsx f2,r28,r30
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r30.u32);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f0,f1,f2
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f2.f64));
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// bgt cr6,0x8308a040
	if (ctx.cr6.gt) goto loc_8308A040;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8308A040:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8308a070
	if (!ctx.cr6.eq) goto loc_8308A070;
	// stfd f2,48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f2.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82fa3be8
	ctx.lr = 0x8308A06C;
	sub_82FA3BE8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8308A070:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpwi cr6,r31,962
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 962, ctx.xer);
	// blt cr6,0x8308a020
	if (ctx.cr6.lt) goto loc_8308A020;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8308A08C"))) PPC_WEAK_FUNC(sub_8308A08C);
PPC_FUNC_IMPL(__imp__sub_8308A08C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8308A090"))) PPC_WEAK_FUNC(sub_8308A090);
PPC_FUNC_IMPL(__imp__sub_8308A090) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8308A098;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8308a0b8
	if (!ctx.cr6.eq) goto loc_8308A0B8;
loc_8308A0A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_8308A0B8:
	// cmpwi cr6,r5,962
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 962, ctx.xer);
	// bne cr6,0x8308a0a8
	if (!ctx.cr6.eq) goto loc_8308A0A8;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r3,1
	ctx.r3.s64 = 1;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f31,-25140(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25140);
	ctx.f31.f64 = double(temp.f32);
	// addi r30,r11,3848
	ctx.r30.s64 = ctx.r11.s64 + 3848;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r28,r11,-4616
	ctx.r28.s64 = ctx.r11.s64 + -4616;
loc_8308A0E8:
	// lfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f2,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f0,f1,f2
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f2.f64));
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// bgt cr6,0x8308a108
	if (ctx.cr6.gt) goto loc_8308A108;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8308A108:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8308a138
	if (!ctx.cr6.eq) goto loc_8308A138;
	// stfd f2,48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f2.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82fa3be8
	ctx.lr = 0x8308A134;
	sub_82FA3BE8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8308A138:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpwi cr6,r31,962
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 962, ctx.xer);
	// blt cr6,0x8308a0e8
	if (ctx.cr6.lt) goto loc_8308A0E8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8308A158"))) PPC_WEAK_FUNC(sub_8308A158);
PPC_FUNC_IMPL(__imp__sub_8308A158) {
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
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8308a18c
	if (ctx.cr6.eq) goto loc_8308A18C;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x8308d3f8
	ctx.lr = 0x8308A17C;
	sub_8308D3F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8308d600
	ctx.lr = 0x8308A184;
	sub_8308D600(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83088d60
	ctx.lr = 0x8308A18C;
	sub_83088D60(ctx, base);
loc_8308A18C:
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

__attribute__((alias("__imp__sub_8308A1A0"))) PPC_WEAK_FUNC(sub_8308A1A0);
PPC_FUNC_IMPL(__imp__sub_8308A1A0) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 12);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lhz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 12);
	// lwz r6,0(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lhz r8,14(r5)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r5.u32 + 14);
	// add r7,r11,r6
	ctx.r7.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r5,r10,r4
	ctx.r5.u64 = ctx.r10.u64 + ctx.r4.u64;
	// b 0x83088fb0
	sub_83088FB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8308A1CC"))) PPC_WEAK_FUNC(sub_8308A1CC);
PPC_FUNC_IMPL(__imp__sub_8308A1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8308A1D0"))) PPC_WEAK_FUNC(sub_8308A1D0);
PPC_FUNC_IMPL(__imp__sub_8308A1D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8308A1D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8308cc18
	ctx.lr = 0x8308A1E8;
	sub_8308CC18(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r4,7696
	ctx.r4.s64 = 7696;
	// addi r30,r31,20
	ctx.r30.s64 = ctx.r31.s64 + 20;
	// bl 0x8308cc50
	ctx.lr = 0x8308A200;
	sub_8308CC50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83089d08
	ctx.lr = 0x8308A210;
	sub_83089D08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8308A21C"))) PPC_WEAK_FUNC(sub_8308A21C);
PPC_FUNC_IMPL(__imp__sub_8308A21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8308A220"))) PPC_WEAK_FUNC(sub_8308A220);
PPC_FUNC_IMPL(__imp__sub_8308A220) {
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
	// lwz r31,20(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8308a25c
	if (ctx.cr6.eq) goto loc_8308A25C;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x8308d3f8
	ctx.lr = 0x8308A24C;
	sub_8308D3F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8308d600
	ctx.lr = 0x8308A254;
	sub_8308D600(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83088d60
	ctx.lr = 0x8308A25C;
	sub_83088D60(ctx, base);
loc_8308A25C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8308cc40
	ctx.lr = 0x8308A264;
	sub_8308CC40(ctx, base);
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

__attribute__((alias("__imp__sub_8308A27C"))) PPC_WEAK_FUNC(sub_8308A27C);
PPC_FUNC_IMPL(__imp__sub_8308A27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8308A280"))) PPC_WEAK_FUNC(sub_8308A280);
PPC_FUNC_IMPL(__imp__sub_8308A280) {
	PPC_FUNC_PROLOGUE();
	// fsubs f0,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f2.f64));
	// fsel f1,f0,f2,f1
	ctx.f1.f64 = ctx.f0.f64 >= 0.0 ? ctx.f2.f64 : ctx.f1.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8308A28C"))) PPC_WEAK_FUNC(sub_8308A28C);
PPC_FUNC_IMPL(__imp__sub_8308A28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8308A290"))) PPC_WEAK_FUNC(sub_8308A290);
PPC_FUNC_IMPL(__imp__sub_8308A290) {
	PPC_FUNC_PROLOGUE();
	// fsubs f0,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f2.f64));
	// fsel f1,f0,f1,f2
	ctx.f1.f64 = ctx.f0.f64 >= 0.0 ? ctx.f1.f64 : ctx.f2.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8308A29C"))) PPC_WEAK_FUNC(sub_8308A29C);
PPC_FUNC_IMPL(__imp__sub_8308A29C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8308A2A0"))) PPC_WEAK_FUNC(sub_8308A2A0);
PPC_FUNC_IMPL(__imp__sub_8308A2A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fsubs f0,f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsel f12,f0,f13,f3
	ctx.f12.f64 = ctx.f0.f64 >= 0.0 ? ctx.f13.f64 : ctx.f3.f64;
	// stfs f12,0(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8308A2B4"))) PPC_WEAK_FUNC(sub_8308A2B4);
PPC_FUNC_IMPL(__imp__sub_8308A2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8308A2B8"))) PPC_WEAK_FUNC(sub_8308A2B8);
PPC_FUNC_IMPL(__imp__sub_8308A2B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fsubs f0,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f2.f64));
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsel f12,f0,f13,f3
	ctx.f12.f64 = ctx.f0.f64 >= 0.0 ? ctx.f13.f64 : ctx.f3.f64;
	// stfs f12,0(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8308A2CC"))) PPC_WEAK_FUNC(sub_8308A2CC);
PPC_FUNC_IMPL(__imp__sub_8308A2CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8308A2D0"))) PPC_WEAK_FUNC(sub_8308A2D0);
PPC_FUNC_IMPL(__imp__sub_8308A2D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fsubs f0,f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsel f12,f0,f3,f13
	ctx.f12.f64 = ctx.f0.f64 >= 0.0 ? ctx.f3.f64 : ctx.f13.f64;
	// stfs f12,0(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8308A2E4"))) PPC_WEAK_FUNC(sub_8308A2E4);
PPC_FUNC_IMPL(__imp__sub_8308A2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8308A2E8"))) PPC_WEAK_FUNC(sub_8308A2E8);
PPC_FUNC_IMPL(__imp__sub_8308A2E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa764c
	ctx.lr = 0x8308A2F0;
	__savegprlr_17(ctx, base);
	// stfd f29,-152(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -152, ctx.f29.u64);
	// stfd f30,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f30.u64);
	// stfd f31,-136(r1)
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f31.u64);
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3240(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 3240);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f8,f11
	ctx.f8.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f11.f64));
	// stfd f8,-176(r1)
	PPC_STORE_U64(ctx.r1.u32 + -176, ctx.f8.u64);
	// lwz r31,-172(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -172);
	// lfs f9,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fctiwz f12,f0
	ctx.f12.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f12,-176(r1)
	PPC_STORE_U64(ctx.r1.u32 + -176, ctx.f12.u64);
	// lwz r7,-172(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -172);
	// lfs f13,3248(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 3248);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f6,f9
	ctx.f6.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f9.f64));
	// stfd f6,-176(r1)
	PPC_STORE_U64(ctx.r1.u32 + -176, ctx.f6.u64);
	// lwz r23,-172(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + -172);
	// lfs f7,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// fctiwz f10,f13
	ctx.f10.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f10,-176(r1)
	PPC_STORE_U64(ctx.r1.u32 + -176, ctx.f10.u64);
	// lwz r27,-172(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + -172);
	// lfs f5,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f5.f64 = double(temp.f32);
	// fctiwz f4,f7
	ctx.f4.s64 = (ctx.f7.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f7.f64));
	// stfd f4,-176(r1)
	PPC_STORE_U64(ctx.r1.u32 + -176, ctx.f4.u64);
	// lwz r20,-172(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + -172);
	// lfs f3,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// fctiwz f2,f5
	ctx.f2.s64 = (ctx.f5.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f5.f64));
	// stfd f2,-176(r1)
	PPC_STORE_U64(ctx.r1.u32 + -176, ctx.f2.u64);
	// lwz r24,-172(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + -172);
	// lfs f1,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// fctiwz f0,f3
	ctx.f0.s64 = (ctx.f3.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f3.f64));
	// stfd f0,-176(r1)
	PPC_STORE_U64(ctx.r1.u32 + -176, ctx.f0.u64);
	// addi r9,r3,3236
	ctx.r9.s64 = ctx.r3.s64 + 3236;
	// lwz r30,-172(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + -172);
	// fctiwz f13,f1
	ctx.f13.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// lfs f9,5184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f9.f64 = double(temp.f32);
	// addi r25,r9,4
	ctx.r25.s64 = ctx.r9.s64 + 4;
	// stfd f13,-176(r1)
	PPC_STORE_U64(ctx.r1.u32 + -176, ctx.f13.u64);
	// lwz r29,-172(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + -172);
	// stfs f9,52(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stfs f9,56(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f9,68(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// beq cr6,0x8308a7b8
	if (ctx.cr6.eq) goto loc_8308A7B8;
	// addi r26,r4,-4
	ctx.r26.s64 = ctx.r4.s64 + -4;
	// addi r21,r5,-4
	ctx.r21.s64 = ctx.r5.s64 + -4;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r5,-32233
	ctx.r5.s64 = -2112421888;
	// lis r4,-31969
	ctx.r4.s64 = -2095120384;
	// lfs f4,-4408(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4408);
	ctx.f4.f64 = double(temp.f32);
	// rlwinm r22,r24,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f6,21500(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21500);
	ctx.f6.f64 = double(temp.f32);
	// lfs f7,5180(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5180);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,24436(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24436);
	ctx.f8.f64 = double(temp.f32);
	// lfs f5,-10608(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -10608);
	ctx.f5.f64 = double(temp.f32);
loc_8308A3D4:
	// lfsu f0,4(r26)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r26.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r26.u32 = ea;
	ctx.f0.f64 = double(temp.f32);
	// add r11,r23,r7
	ctx.r11.u64 = ctx.r23.u64 + ctx.r7.u64;
	// fmuls f13,f0,f5
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// addi r10,r7,1
	ctx.r10.s64 = ctx.r7.s64 + 1;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fmr f0,f9
	ctx.f0.f64 = ctx.f9.f64;
	// subfc r5,r31,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r31.u32;
	ctx.r5.s64 = ctx.r10.s64 - ctx.r31.s64;
	// rlwinm r4,r10,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// rlwinm r28,r31,1,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1;
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subfe r7,r4,r28
	temp.u8 = (~ctx.r4.u32 + ctx.r28.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r28.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r4.u64 + ctx.r28.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lfsx f12,r8,r9
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// and r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 & ctx.r10.u64;
	// addi r11,r25,4
	ctx.r11.s64 = ctx.r25.s64 + 4;
	// fsubs f11,f13,f8
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// add r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 + ctx.r9.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// fsel f10,f11,f8,f13
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f8.f64 : ctx.f13.f64;
	// fsubs f3,f10,f7
	ctx.f3.f64 = double(float(ctx.f10.f64 - ctx.f7.f64));
	// fsel f13,f3,f10,f7
	ctx.f13.f64 = ctx.f3.f64 >= 0.0 ? ctx.f10.f64 : ctx.f7.f64;
	// stfsx f13,r8,r9
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, temp.u32);
	// stfs f12,4(r25)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r25.u32 + 4, temp.u32);
	// blt cr6,0x8308a4ac
	if (ctx.cr6.lt) goto loc_8308A4AC;
	// addi r8,r31,-4
	ctx.r8.s64 = ctx.r31.s64 + -4;
	// rlwinm r8,r8,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8308A454:
	// lfs f12,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fabs f11,f0
	ctx.f11.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fabs f10,f12
	ctx.f10.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// lfs f3,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fabs f2,f3
	ctx.f2.u64 = ctx.f3.u64 & ~0x8000000000000000;
	// lfs f1,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fabs f31,f1
	ctx.f31.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lfs f30,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f30.f64 = double(temp.f32);
	// fabs f29,f30
	ctx.f29.u64 = ctx.f30.u64 & ~0x8000000000000000;
	// addi r5,r5,16
	ctx.r5.s64 = ctx.r5.s64 + 16;
	// fsubs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fsel f10,f11,f0,f12
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f0.f64 : ctx.f12.f64;
	// fabs f0,f10
	ctx.f0.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// fsubs f12,f0,f2
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f2.f64));
	// fsel f11,f12,f10,f3
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f10.f64 : ctx.f3.f64;
	// fabs f10,f11
	ctx.f10.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fsubs f3,f10,f31
	ctx.f3.f64 = double(float(ctx.f10.f64 - ctx.f31.f64));
	// fsel f2,f3,f11,f1
	ctx.f2.f64 = ctx.f3.f64 >= 0.0 ? ctx.f11.f64 : ctx.f1.f64;
	// fabs f1,f2
	ctx.f1.u64 = ctx.f2.u64 & ~0x8000000000000000;
	// fsubs f0,f1,f29
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f29.f64));
	// fsel f0,f0,f2,f30
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f2.f64 : ctx.f30.f64;
	// bdnz 0x8308a454
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8308A454;
loc_8308A4AC:
	// cmpw cr6,r4,r31
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x8308a4d8
	if (!ctx.cr6.lt) goto loc_8308A4D8;
	// subf r4,r4,r31
	ctx.r4.s64 = ctx.r31.s64 - ctx.r4.s64;
	// addi r8,r5,-4
	ctx.r8.s64 = ctx.r5.s64 + -4;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_8308A4C0:
	// lfsu f12,4(r8)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r8.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	ctx.f12.f64 = double(temp.f32);
	// fabs f11,f0
	ctx.f11.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fabs f10,f12
	ctx.f10.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fsubs f3,f11,f10
	ctx.f3.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fsel f0,f3,f0,f12
	ctx.f0.f64 = ctx.f3.f64 >= 0.0 ? ctx.f0.f64 : ctx.f12.f64;
	// bdnz 0x8308a4c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8308A4C0;
loc_8308A4D8:
	// fabs f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// lfs f10,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fabs f3,f10
	ctx.f3.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// lfsu f13,8(r11)
	ea = 8 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f13.f64 = double(temp.f32);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// fabs f2,f13
	ctx.f2.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// lfsu f11,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fsubs f1,f12,f8
	ctx.f1.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// fsel f12,f1,f8,f12
	ctx.f12.f64 = ctx.f1.f64 >= 0.0 ? ctx.f8.f64 : ctx.f12.f64;
	// fabs f1,f12
	ctx.f1.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fsubs f3,f1,f3
	ctx.f3.f64 = double(float(ctx.f1.f64 - ctx.f3.f64));
	// fsel f12,f3,f10,f12
	ctx.f12.f64 = ctx.f3.f64 >= 0.0 ? ctx.f10.f64 : ctx.f12.f64;
	// fabs f1,f12
	ctx.f1.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f1,f2
	ctx.cr6.compare(ctx.f1.f64, ctx.f2.f64);
	// ble cr6,0x8308a52c
	if (!ctx.cr6.gt) goto loc_8308A52C;
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
loc_8308A52C:
	// fabs f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f13,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f13.f64 = double(temp.f32);
	// fabs f10,f13
	ctx.f10.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fsubs f3,f12,f11
	ctx.f3.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// fmr f12,f9
	ctx.f12.f64 = ctx.f9.f64;
	// rlwinm r5,r8,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// and r27,r5,r8
	ctx.r27.u64 = ctx.r5.u64 & ctx.r8.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// fabs f2,f3
	ctx.f2.u64 = ctx.f3.u64 & ~0x8000000000000000;
	// fsubs f1,f2,f10
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f10.f64));
	// fsel f13,f1,f3,f13
	ctx.f13.f64 = ctx.f1.f64 >= 0.0 ? ctx.f3.f64 : ctx.f13.f64;
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// lfsu f13,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// bgt cr6,0x8308a584
	if (ctx.cr6.gt) goto loc_8308A584;
	// fmr f12,f11
	ctx.f12.f64 = ctx.f11.f64;
	// fmr f13,f9
	ctx.f13.f64 = ctx.f9.f64;
loc_8308A584:
	// fabs f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfsu f11,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f11.f64 = double(temp.f32);
	// lfs f3,-4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	ctx.f3.f64 = double(temp.f32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// fmadds f2,f11,f13,f3
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f3.f64));
	// lfsu f13,-4(r11)
	ea = -4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f13.f64 = double(temp.f32);
	// fabs f1,f13
	ctx.f1.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// lfsu f11,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f11.f64 = double(temp.f32);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// fsubs f10,f10,f3
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f3.f64));
	// fmadds f3,f10,f12,f2
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f2.f64));
	// fabs f2,f3
	ctx.f2.u64 = ctx.f3.u64 & ~0x8000000000000000;
	// fsubs f1,f2,f1
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// fsel f13,f1,f13,f3
	ctx.f13.f64 = ctx.f1.f64 >= 0.0 ? ctx.f13.f64 : ctx.f3.f64;
	// bgt cr6,0x8308a5d4
	if (ctx.cr6.gt) goto loc_8308A5D4;
	// extsw r8,r27
	ctx.r8.s64 = ctx.r27.s32;
	// std r8,-176(r1)
	PPC_STORE_U64(ctx.r1.u32 + -176, ctx.r8.u64);
	// lfd f12,-176(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
loc_8308A5D4:
	// stfs f11,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fabs f1,f0
	ctx.f1.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// lfs f11,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fabs f10,f11
	ctx.f10.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fabs f2,f11
	ctx.f2.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fsubs f3,f12,f10
	ctx.f3.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fabs f10,f1
	ctx.f10.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// fsel f0,f3,f13,f11
	ctx.f0.f64 = ctx.f3.f64 >= 0.0 ? ctx.f13.f64 : ctx.f11.f64;
	// fabs f3,f0
	ctx.f3.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// stfs f3,-4(r4)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + -4, temp.u32);
	// lfsu f0,-4(r11)
	ea = -4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f0.f64 = double(temp.f32);
	// fabs f13,f3
	ctx.f13.u64 = ctx.f3.u64 & ~0x8000000000000000;
	// fsubs f12,f13,f2
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f2.f64));
	// fsel f11,f12,f0,f11
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f11.f64;
	// fabs f3,f11
	ctx.f3.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// stfs f3,0(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f13,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	ctx.f13.f64 = double(temp.f32);
	// lfsu f0,8(r11)
	ea = 8 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f0.f64 = double(temp.f32);
	// fabs f11,f0
	ctx.f11.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f2,-4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f3,f1,f0
	ctx.f3.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fsubs f1,f11,f10
	ctx.f1.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfsu f12,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	ctx.f12.f64 = double(temp.f32);
	// addi r5,r10,4
	ctx.r5.s64 = ctx.r10.s64 + 4;
	// fsel f13,f1,f13,f12
	ctx.f13.f64 = ctx.f1.f64 >= 0.0 ? ctx.f13.f64 : ctx.f12.f64;
	// fmadds f12,f13,f3,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f3.f64 + ctx.f0.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fsubs f11,f2,f12
	ctx.f11.f64 = double(float(ctx.f2.f64 - ctx.f12.f64));
	// fsel f12,f11,f2,f12
	ctx.f12.f64 = ctx.f11.f64 >= 0.0 ? ctx.f2.f64 : ctx.f12.f64;
	// stfs f12,-4(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + -4, temp.u32);
	// lfsu f0,-8(r11)
	ea = -8 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f0.f64 = double(temp.f32);
	// bgt cr6,0x8308a660
	if (ctx.cr6.gt) goto loc_8308A660;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_8308A660:
	// add r8,r29,r24
	ctx.r8.u64 = ctx.r29.u64 + ctx.r24.u64;
	// stfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 1;
	// fmr f0,f9
	ctx.f0.f64 = ctx.f9.f64;
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// fmr f13,f9
	ctx.f13.f64 = ctx.f9.f64;
	// subfc r19,r30,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r30.u32;
	ctx.r19.s64 = ctx.r10.s64 - ctx.r30.s64;
	// fmr f10,f9
	ctx.f10.f64 = ctx.f9.f64;
	// rlwinm r18,r10,1,31,31
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// rlwinm r17,r30,1,31,31
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x1;
	// subf r8,r29,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r29.s64;
	// stfsx f12,r4,r9
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r9.u32, temp.u32);
	// subfe r4,r18,r17
	temp.u8 = (~ctx.r18.u32 + ctx.r17.u32 < ~ctx.r18.u32) | (~ctx.r18.u32 + ctx.r17.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r18.u64 + ctx.r17.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r19,r8,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// and r29,r4,r10
	ctx.r29.u64 = ctx.r4.u64 & ctx.r10.u64;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// addi r11,r5,12
	ctx.r11.s64 = ctx.r5.s64 + 12;
	// lfsx f12,r19,r9
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// lfsx f11,r22,r3
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r3.u32);
	ctx.f11.f64 = double(temp.f32);
	// blt cr6,0x8308a6f0
	if (ctx.cr6.lt) goto loc_8308A6F0;
	// addi r8,r30,-2
	ctx.r8.s64 = ctx.r30.s64 + -2;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r8,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r5,1
	ctx.r10.s64 = ctx.r5.s64 + 1;
	// addi r5,r8,-4
	ctx.r5.s64 = ctx.r8.s64 + -4;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8308A6DC:
	// lfs f3,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f0,f12,f11,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f0.f64));
	// lfsu f12,8(r5)
	ea = 8 + ctx.r5.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r5.u32 = ea;
	ctx.f12.f64 = double(temp.f32);
	// fmadds f13,f3,f11,f13
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f11.f64 + ctx.f13.f64));
	// bdnz 0x8308a6dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8308A6DC;
loc_8308A6F0:
	// cmpw cr6,r8,r30
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x8308a6fc
	if (!ctx.cr6.lt) goto loc_8308A6FC;
	// fmuls f10,f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
loc_8308A6FC:
	// fadds f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// fadds f11,f0,f10
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// fmuls f10,f11,f11
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmsubs f3,f11,f6,f10
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f6.f64 - ctx.f10.f64));
	// fmuls f2,f3,f3
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// fmsubs f1,f3,f6,f2
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f6.f64 - ctx.f2.f64));
	// fmuls f0,f1,f4
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f4.f64));
	// fctiwz f11,f0
	ctx.f11.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f11,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f11.u64);
	// lwz r10,-164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -164);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r8,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.r8.u64);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lfs f10,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f3,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f3,f10
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f10.f64));
	// lfd f1,-160(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// fcfid f11,f1
	ctx.f11.f64 = double(ctx.f1.s64);
	// frsp f3,f11
	ctx.f3.f64 = double(float(ctx.f11.f64));
	// fsubs f1,f0,f3
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f3.f64));
	// fmadds f11,f2,f1,f10
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f1.f64 + ctx.f10.f64));
	// fabs f10,f11
	ctx.f10.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fsubs f3,f10,f12
	ctx.f3.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fsel f2,f3,f11,f13
	ctx.f2.f64 = ctx.f3.f64 >= 0.0 ? ctx.f11.f64 : ctx.f13.f64;
	// stfs f2,0(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfsu f0,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f0.f64 = double(temp.f32);
	// fabs f1,f0
	ctx.f1.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fmuls f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fsubs f10,f1,f12
	ctx.f10.f64 = double(float(ctx.f1.f64 - ctx.f12.f64));
	// fsel f3,f10,f0,f13
	ctx.f3.f64 = ctx.f10.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// stfs f3,0(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f2,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f11,f2
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f2.f64));
	// lfsu f0,8(r11)
	ea = 8 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f0.f64 = double(temp.f32);
	// fabs f13,f1
	ctx.f13.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fsel f10,f11,f0,f1
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f0.f64 : ctx.f1.f64;
	// stfs f10,0(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfsu f1,4(r21)
	temp.f32 = float(ctx.f1.f64);
	ea = 4 + ctx.r21.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r21.u32 = ea;
	// bne cr6,0x8308a3d4
	if (!ctx.cr6.eq) goto loc_8308A3D4;
loc_8308A7B8:
	// extsw r11,r29
	ctx.r11.s64 = ctx.r29.s32;
	// extsw r10,r27
	ctx.r10.s64 = ctx.r27.s32;
	// std r11,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.r11.u64);
	// extsw r8,r7
	ctx.r8.s64 = ctx.r7.s32;
	// std r10,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.r10.u64);
	// lfd f11,-168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// fcfid f9,f11
	ctx.f9.f64 = double(ctx.f11.s64);
	// lfd f0,-160(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// std r8,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.r8.u64);
	// lfd f13,-160(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// frsp f8,f12
	ctx.f8.f64 = double(float(ctx.f12.f64));
	// stfs f8,0(r25)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r25.u32 + 0, temp.u32);
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// stfs f6,12(r9)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// stfs f7,48(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfd f29,-152(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f30,-144(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x82fa769c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8308A810"))) PPC_WEAK_FUNC(sub_8308A810);
PPC_FUNC_IMPL(__imp__sub_8308A810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lfs f0,52(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f0,-4400(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4400);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,8(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f11,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8308A840"))) PPC_WEAK_FUNC(sub_8308A840);
PPC_FUNC_IMPL(__imp__sub_8308A840) {
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
	// bl 0x8308d5e8
	ctx.lr = 0x8308A858;
	sub_8308D5E8(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// addi r10,r11,-4480
	ctx.r10.s64 = ctx.r11.s64 + -4480;
	// lfs f1,-4480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4480);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x8308d3e8
	ctx.lr = 0x8308A870;
	sub_8308D3E8(ctx, base);
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

__attribute__((alias("__imp__sub_8308A888"))) PPC_WEAK_FUNC(sub_8308A888);
PPC_FUNC_IMPL(__imp__sub_8308A888) {
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
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// bl 0x8308d3f8
	ctx.lr = 0x8308A8A4;
	sub_8308D3F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8308d600
	ctx.lr = 0x8308A8AC;
	sub_8308D600(ctx, base);
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

__attribute__((alias("__imp__sub_8308A8C0"))) PPC_WEAK_FUNC(sub_8308A8C0);
PPC_FUNC_IMPL(__imp__sub_8308A8C0) {
	PPC_FUNC_PROLOGUE();
	// li r3,6472
	ctx.r3.s64 = 6472;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8308A8C8"))) PPC_WEAK_FUNC(sub_8308A8C8);
PPC_FUNC_IMPL(__imp__sub_8308A8C8) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// li r4,6472
	ctx.r4.s64 = 6472;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8308A904;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8308a92c
	if (!ctx.cr6.eq) goto loc_8308A92C;
	// li r3,52
	ctx.r3.s64 = 52;
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
loc_8308A92C:
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,24436(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24436);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
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

__attribute__((alias("__imp__sub_8308A950"))) PPC_WEAK_FUNC(sub_8308A950);
PPC_FUNC_IMPL(__imp__sub_8308A950) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8308A958"))) PPC_WEAK_FUNC(sub_8308A958);
PPC_FUNC_IMPL(__imp__sub_8308A958) {
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
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfd f13,22472(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22472);
	// fcmpu cr6,f2,f13
	ctx.cr6.compare(ctx.f2.f64, ctx.f13.f64);
	// bge cr6,0x8308a98c
	if (!ctx.cr6.lt) goto loc_8308A98C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f13,22560(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22560);
	// fsub f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 - ctx.f13.f64;
loc_8308A98C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfd f13,22480(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22480);
	// lfd f1,22080(r10)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r10.u32 + 22080);
	// fmul f2,f0,f13
	ctx.f2.f64 = ctx.f0.f64 * ctx.f13.f64;
	// bl 0x82fa30a8
	ctx.lr = 0x8308A9A4;
	sub_82FA30A8(ctx, base);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,60(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 60, temp.u32);
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

__attribute__((alias("__imp__sub_8308A9C4"))) PPC_WEAK_FUNC(sub_8308A9C4);
PPC_FUNC_IMPL(__imp__sub_8308A9C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8308A9C8"))) PPC_WEAK_FUNC(sub_8308A9C8);
PPC_FUNC_IMPL(__imp__sub_8308A9C8) {
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
	// fmr f0,f3
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f3.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfd f13,22472(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22472);
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bge cr6,0x8308a9fc
	if (!ctx.cr6.lt) goto loc_8308A9FC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f13,22560(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22560);
	// fsub f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 - ctx.f13.f64;
loc_8308A9FC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfd f13,22480(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22480);
	// lfd f1,22080(r10)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r10.u32 + 22080);
	// fmul f2,f0,f13
	ctx.f2.f64 = ctx.f0.f64 * ctx.f13.f64;
	// bl 0x82fa30a8
	ctx.lr = 0x8308AA14;
	sub_82FA30A8(ctx, base);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,60(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 60, temp.u32);
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

__attribute__((alias("__imp__sub_8308AA34"))) PPC_WEAK_FUNC(sub_8308AA34);
PPC_FUNC_IMPL(__imp__sub_8308AA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8308AA38"))) PPC_WEAK_FUNC(sub_8308AA38);
PPC_FUNC_IMPL(__imp__sub_8308AA38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8308AA3C"))) PPC_WEAK_FUNC(sub_8308AA3C);
PPC_FUNC_IMPL(__imp__sub_8308AA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8308AA40"))) PPC_WEAK_FUNC(sub_8308AA40);
PPC_FUNC_IMPL(__imp__sub_8308AA40) {
	PPC_FUNC_PROLOGUE();
	// fmr f0,f2
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f2.f64;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// li r4,600
	ctx.r4.s64 = 600;
	// addi r3,r11,3268
	ctx.r3.s64 = ctx.r11.s64 + 3268;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// b 0x8308d430
	sub_8308D430(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8308AA5C"))) PPC_WEAK_FUNC(sub_8308AA5C);
PPC_FUNC_IMPL(__imp__sub_8308AA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8308AA60"))) PPC_WEAK_FUNC(sub_8308AA60);
PPC_FUNC_IMPL(__imp__sub_8308AA60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// cmplwi cr6,r5,5
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 5, ctx.xer);
	// bgt cr6,0x8308ab1c
	if (ctx.cr6.gt) goto loc_8308AB1C;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8308aab8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8308AAB8;
	// bdzf 4*cr6+eq,0x8308aacc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8308AACC;
	// bdzf 4*cr6+eq,0x8308aae0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8308AAE0;
	// bdzf 4*cr6+eq,0x8308aaf4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8308AAF4;
	// bne cr6,0x8308ab08
	if (!ctx.cr6.eq) goto loc_8308AB08;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfd f31,22472(r11)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22472);
	// lfd f0,1600(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 1600);
	// b 0x8308ab24
	goto loc_8308AB24;
loc_8308AAB8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// lfd f31,22472(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22472);
	// lfd f0,-3784(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -3784);
	// b 0x8308ab24
	goto loc_8308AB24;
loc_8308AACC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lfd f31,22472(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22472);
	// lfd f0,-23688(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -23688);
	// b 0x8308ab24
	goto loc_8308AB24;
loc_8308AAE0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfd f31,22472(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22472);
	// lfd f0,21528(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 21528);
	// b 0x8308ab24
	goto loc_8308AB24;
loc_8308AAF4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfd f31,22472(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22472);
	// lfd f0,22080(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 22080);
	// b 0x8308ab24
	goto loc_8308AB24;
loc_8308AB08:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lfd f31,22472(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22472);
	// lfd f0,-23544(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -23544);
	// b 0x8308ab24
	goto loc_8308AB24;
loc_8308AB1C:
	// lfd f31,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_8308AB24:
	// fcmpu cr6,f30,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// ble cr6,0x8308ab30
	if (!ctx.cr6.gt) goto loc_8308AB30;
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
loc_8308AB30:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8308d870
	ctx.lr = 0x8308AB38;
	sub_8308D870(ctx, base);
	// fadd f1,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64 + ctx.f30.f64;
	// bl 0x8308d7f0
	ctx.lr = 0x8308AB40;
	sub_8308D7F0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8308AB68"))) PPC_WEAK_FUNC(sub_8308AB68);
PPC_FUNC_IMPL(__imp__sub_8308AB68) {
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
	// bl 0x82fa8d28
	ctx.lr = 0x8308AB80;
	__savefpr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// cmplwi cr6,r4,5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 5, ctx.xer);
	// bgt cr6,0x8308ac54
	if (ctx.cr6.gt) goto loc_8308AC54;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8308abcc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8308ABCC;
	// bdzf 4*cr6+eq,0x8308abe8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8308ABE8;
	// bdzf 4*cr6+eq,0x8308ac04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8308AC04;
	// bdzf 4*cr6+eq,0x8308ac20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8308AC20;
	// bne cr6,0x8308ac38
	if (!ctx.cr6.eq) goto loc_8308AC38;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfd f31,-4504(r11)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + -4504);
	// lfd f29,-4512(r10)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r10.u32 + -4512);
	// lfd f30,1600(r9)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1600);
	// b 0x8308ac60
	goto loc_8308AC60;
loc_8308ABCC:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// lfd f31,-11136(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + -11136);
	// lfd f29,-4520(r10)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r10.u32 + -4520);
	// lfd f30,-3784(r9)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r9.u32 + -3784);
	// b 0x8308ac60
	goto loc_8308AC60;
loc_8308ABE8:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lfd f31,-24648(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + -24648);
	// lfd f29,-4528(r10)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r10.u32 + -4528);
	// lfd f30,-23688(r9)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r9.u32 + -23688);
	// b 0x8308ac60
	goto loc_8308AC60;
loc_8308AC04:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfd f31,22488(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22488);
	// lfd f29,-4536(r10)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r10.u32 + -4536);
	// lfd f30,21528(r9)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r9.u32 + 21528);
	// b 0x8308ac60
	goto loc_8308AC60;
loc_8308AC20:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfd f31,22080(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22080);
	// lfd f29,22464(r10)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r10.u32 + 22464);
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// b 0x8308ac60
	goto loc_8308AC60;
loc_8308AC38:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lfd f31,-23688(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + -23688);
	// lfd f29,-4504(r10)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r10.u32 + -4504);
	// lfd f30,-23544(r9)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r9.u32 + -23544);
	// b 0x8308ac60
	goto loc_8308AC60;
loc_8308AC54:
	// lfd f31,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfd f29,80(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfd f30,80(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_8308AC60:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8308d870
	ctx.lr = 0x8308AC68;
	sub_8308D870(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8308d7a8
	ctx.lr = 0x8308AC74;
	sub_8308D7A8(ctx, base);
	// fsub f0,f28,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f28.f64 - ctx.f30.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// frsp f12,f1
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lfd f13,22472(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22472);
	// stfs f12,36(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 36, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8308ac98
	if (!ctx.cr6.lt) goto loc_8308AC98;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8308AC98:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fadd f1,f29,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64 + ctx.f0.f64;
	// bl 0x8308d7f0
	ctx.lr = 0x8308ACA4;
	sub_8308D7F0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82fa8d74
	ctx.lr = 0x8308ACBC;
	__restfpr_28(ctx, base);
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

__attribute__((alias("__imp__sub_8308ACD0"))) PPC_WEAK_FUNC(sub_8308ACD0);
PPC_FUNC_IMPL(__imp__sub_8308ACD0) {
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
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// bl 0x8308d400
	ctx.lr = 0x8308ACFC;
	sub_8308D400(ctx, base);
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f13
	ctx.f1.f64 = double(ctx.f13.s64);
	// bl 0x8308d8e8
	ctx.lr = 0x8308AD10;
	sub_8308D8E8(ctx, base);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,28(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 28, temp.u32);
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

__attribute__((alias("__imp__sub_8308AD30"))) PPC_WEAK_FUNC(sub_8308AD30);
PPC_FUNC_IMPL(__imp__sub_8308AD30) {
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
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// bl 0x8308d5b8
	ctx.lr = 0x8308AD5C;
	sub_8308D5B8(ctx, base);
	// addi r9,r3,1
	ctx.r9.s64 = ctx.r3.s64 + 1;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// stfs f11,20(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 20, temp.u32);
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

__attribute__((alias("__imp__sub_8308AD90"))) PPC_WEAK_FUNC(sub_8308AD90);
PPC_FUNC_IMPL(__imp__sub_8308AD90) {
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
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r3,12
	ctx.r30.s64 = ctx.r3.s64 + 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,-4232(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4232);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// bl 0x8308d5b8
	ctx.lr = 0x8308ADD4;
	sub_8308D5B8(ctx, base);
	// extsw r7,r3
	ctx.r7.s64 = ctx.r3.s32;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r5,-32232
	ctx.r5.s64 = -2112356352;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// stfs f11,4(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,-4236(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -4236);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f10
	ctx.f1.f64 = double(ctx.f10.s64);
	// bl 0x8308d418
	ctx.lr = 0x8308AE18;
	sub_8308D418(ctx, base);
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f9,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// stfs f7,44(r8)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r8.u32 + 44, temp.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f6,80(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f6
	ctx.f1.f64 = double(ctx.f6.s64);
	// bl 0x8308d418
	ctx.lr = 0x8308AE4C;
	sub_8308D418(ctx, base);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r5,-32233
	ctx.r5.s64 = -2112421888;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f5,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// addi r4,r11,3036
	ctx.r4.s64 = ctx.r11.s64 + 3036;
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// lfs f0,24436(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24436);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// fdivs f0,f0,f3
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f3.f64));
	// ble cr6,0x8308ae94
	if (!ctx.cr6.gt) goto loc_8308AE94;
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r4,4
	ctx.r3.s64 = ctx.r4.s64 + 4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r5,r11,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// bl 0x82fa7c48
	ctx.lr = 0x8308AE94;
	sub_82FA7C48(ctx, base);
loc_8308AE94:
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

__attribute__((alias("__imp__sub_8308AEAC"))) PPC_WEAK_FUNC(sub_8308AEAC);
PPC_FUNC_IMPL(__imp__sub_8308AEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8308AEB0"))) PPC_WEAK_FUNC(sub_8308AEB0);
PPC_FUNC_IMPL(__imp__sub_8308AEB0) {
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
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// bl 0x8308d5b8
	ctx.lr = 0x8308AED4;
	sub_8308D5B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8308AEE4"))) PPC_WEAK_FUNC(sub_8308AEE4);
PPC_FUNC_IMPL(__imp__sub_8308AEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8308AEE8"))) PPC_WEAK_FUNC(sub_8308AEE8);
PPC_FUNC_IMPL(__imp__sub_8308AEE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// lfs f13,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-4400(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4400);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f12,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,8(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f10,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,12(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8308AF1C"))) PPC_WEAK_FUNC(sub_8308AF1C);
PPC_FUNC_IMPL(__imp__sub_8308AF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8308AF20"))) PPC_WEAK_FUNC(sub_8308AF20);
PPC_FUNC_IMPL(__imp__sub_8308AF20) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8308AF2C"))) PPC_WEAK_FUNC(sub_8308AF2C);
PPC_FUNC_IMPL(__imp__sub_8308AF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8308AF30"))) PPC_WEAK_FUNC(sub_8308AF30);
PPC_FUNC_IMPL(__imp__sub_8308AF30) {
	PPC_FUNC_PROLOGUE();
	// li r3,6472
	ctx.r3.s64 = 6472;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8308AF38"))) PPC_WEAK_FUNC(sub_8308AF38);
PPC_FUNC_IMPL(__imp__sub_8308AF38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8308AF40;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,20
	ctx.r3.s64 = 20;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x83088cf8
	ctx.lr = 0x8308AF58;
	sub_83088CF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8308af88
	if (ctx.cr6.eq) goto loc_8308AF88;
	// bl 0x8308d5e8
	ctx.lr = 0x8308AF68;
	sub_8308D5E8(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// addi r10,r11,-4480
	ctx.r10.s64 = ctx.r11.s64 + -4480;
	// lfs f1,-4480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4480);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x8308d3e8
	ctx.lr = 0x8308AF80;
	sub_8308D3E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8308af8c
	goto loc_8308AF8C;
loc_8308AF88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8308AF8C:
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8308afa4
	if (!ctx.cr6.eq) goto loc_8308AFA4;
	// li r3,52
	ctx.r3.s64 = 52;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_8308AFA4:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8308a8c8
	ctx.lr = 0x8308AFB0;
	sub_8308A8C8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8308AFB8"))) PPC_WEAK_FUNC(sub_8308AFB8);
PPC_FUNC_IMPL(__imp__sub_8308AFB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8308AFC0;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82fa8d24
	ctx.lr = 0x8308AFC8;
	__savefpr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lfd f13,8(r4)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfd f0,20192(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 20192);
	// fsub f31,f13,f0
	ctx.f31.f64 = ctx.f13.f64 - ctx.f0.f64;
	// lfd f0,-4488(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -4488);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x8308aff8
	if (!ctx.cr6.lt) goto loc_8308AFF8;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_8308AFF8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,0(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfd f28,22472(r11)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22472);
	// lfd f27,22560(r10)
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r10.u32 + 22560);
	// fcmpu cr6,f31,f28
	ctx.cr6.compare(ctx.f31.f64, ctx.f28.f64);
	// bge cr6,0x8308b01c
	if (!ctx.cr6.lt) goto loc_8308B01C;
	// fsub f0,f0,f27
	ctx.f0.f64 = ctx.f0.f64 - ctx.f27.f64;
loc_8308B01C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfd f30,22480(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22480);
	// lfd f29,22080(r10)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r10.u32 + 22080);
	// fmul f2,f0,f30
	ctx.f2.f64 = ctx.f0.f64 * ctx.f30.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82fa30a8
	ctx.lr = 0x8308B038;
	sub_82FA30A8(ctx, base);
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fcmpu cr6,f31,f28
	ctx.cr6.compare(ctx.f31.f64, ctx.f28.f64);
	// stfs f0,60(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 60, temp.u32);
	// lfd f0,0(r30)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// bge cr6,0x8308b058
	if (!ctx.cr6.lt) goto loc_8308B058;
	// fsub f0,f0,f27
	ctx.f0.f64 = ctx.f0.f64 - ctx.f27.f64;
loc_8308B058:
	// fmul f2,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f0.f64 * ctx.f30.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82fa30a8
	ctx.lr = 0x8308B064;
	sub_82FA30A8(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,600
	ctx.r4.s64 = 600;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r3,r11,3268
	ctx.r3.s64 = ctx.r11.s64 + 3268;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// stfs f13,60(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 60, temp.u32);
	// lfd f2,16(r30)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// bl 0x8308d430
	ctx.lr = 0x8308B090;
	sub_8308D430(ctx, base);
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r29,12
	ctx.r3.s64 = ctx.r29.s64 + 12;
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f12
	ctx.f1.f64 = double(ctx.f12.s64);
	// bl 0x8308d400
	ctx.lr = 0x8308B0AC;
	sub_8308D400(ctx, base);
	// extsw r6,r3
	ctx.r6.s64 = ctx.r3.s32;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f11,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f11
	ctx.f1.f64 = double(ctx.f11.s64);
	// bl 0x8308d8e8
	ctx.lr = 0x8308B0C0;
	sub_8308D8E8(ctx, base);
	// lwz r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stfs f10,28(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 28, temp.u32);
	// lwz r5,32(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lfd f1,24(r30)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r30.u32 + 24);
	// bl 0x8308aa60
	ctx.lr = 0x8308B0DC;
	sub_8308AA60(ctx, base);
	// lfd f1,24(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r30.u32 + 24);
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8308ab68
	ctx.lr = 0x8308B0EC;
	sub_8308AB68(ctx, base);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f9,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f9
	ctx.f1.f64 = double(ctx.f9.s64);
	// bl 0x8308d5b8
	ctx.lr = 0x8308B108;
	sub_8308D5B8(ctx, base);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f8,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// stfs f6,20(r9)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// bl 0x8308ad90
	ctx.lr = 0x8308B130;
	sub_8308AD90(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82fa8d70
	ctx.lr = 0x8308B13C;
	__restfpr_27(ctx, base);
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8308B140"))) PPC_WEAK_FUNC(sub_8308B140);
PPC_FUNC_IMPL(__imp__sub_8308B140) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// bl 0x8308d5b8
	ctx.lr = 0x8308B168;
	sub_8308D5B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8308B178"))) PPC_WEAK_FUNC(sub_8308B178);
PPC_FUNC_IMPL(__imp__sub_8308B178) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f0,-4400(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4400);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// lfs f13,52(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f12,56(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,8(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f10,68(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 68);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,12(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8308B1B0"))) PPC_WEAK_FUNC(sub_8308B1B0);
PPC_FUNC_IMPL(__imp__sub_8308B1B0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// b 0x8308afb8
	sub_8308AFB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8308B1B8"))) PPC_WEAK_FUNC(sub_8308B1B8);
PPC_FUNC_IMPL(__imp__sub_8308B1B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8308B1C0;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8308b1e0
	if (!ctx.cr6.eq) goto loc_8308B1E0;
loc_8308B1D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_8308B1E0:
	// cmpwi cr6,r5,809
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 809, ctx.xer);
	// bne cr6,0x8308b1d0
	if (!ctx.cr6.eq) goto loc_8308B1D0;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r3,1
	ctx.r3.s64 = 1;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// subf r28,r4,r10
	ctx.r28.s64 = ctx.r10.s64 - ctx.r4.s64;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r29,r11,-4392
	ctx.r29.s64 = ctx.r11.s64 + -4392;
	// lfs f31,-25140(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25140);
	ctx.f31.f64 = double(temp.f32);
loc_8308B210:
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfsx f2,r28,r30
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r30.u32);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f0,f1,f2
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f2.f64));
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// bgt cr6,0x8308b230
	if (ctx.cr6.gt) goto loc_8308B230;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8308B230:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8308b260
	if (!ctx.cr6.eq) goto loc_8308B260;
	// stfd f2,48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f2.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82fa3be8
	ctx.lr = 0x8308B25C;
	sub_82FA3BE8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8308B260:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpwi cr6,r31,809
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 809, ctx.xer);
	// blt cr6,0x8308b210
	if (ctx.cr6.lt) goto loc_8308B210;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8308B27C"))) PPC_WEAK_FUNC(sub_8308B27C);
PPC_FUNC_IMPL(__imp__sub_8308B27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8308B280"))) PPC_WEAK_FUNC(sub_8308B280);
PPC_FUNC_IMPL(__imp__sub_8308B280) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8308B288;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8308b2a8
	if (!ctx.cr6.eq) goto loc_8308B2A8;
loc_8308B298:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_8308B2A8:
	// cmpwi cr6,r5,809
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 809, ctx.xer);
	// bne cr6,0x8308b298
	if (!ctx.cr6.eq) goto loc_8308B298;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r3,1
	ctx.r3.s64 = 1;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f31,-25140(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25140);
	ctx.f31.f64 = double(temp.f32);
	// addi r30,r11,3236
	ctx.r30.s64 = ctx.r11.s64 + 3236;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r28,r11,-4312
	ctx.r28.s64 = ctx.r11.s64 + -4312;
loc_8308B2D8:
	// lfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f2,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f0,f1,f2
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f2.f64));
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// bgt cr6,0x8308b2f8
	if (ctx.cr6.gt) goto loc_8308B2F8;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8308B2F8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8308b328
	if (!ctx.cr6.eq) goto loc_8308B328;
	// stfd f2,48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f2.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82fa3be8
	ctx.lr = 0x8308B324;
	sub_82FA3BE8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8308B328:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpwi cr6,r31,809
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 809, ctx.xer);
	// blt cr6,0x8308b2d8
	if (ctx.cr6.lt) goto loc_8308B2D8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8308B348"))) PPC_WEAK_FUNC(sub_8308B348);
PPC_FUNC_IMPL(__imp__sub_8308B348) {
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
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8308b37c
	if (ctx.cr6.eq) goto loc_8308B37C;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x8308d3f8
	ctx.lr = 0x8308B36C;
	sub_8308D3F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8308d600
	ctx.lr = 0x8308B374;
	sub_8308D600(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83088d60
	ctx.lr = 0x8308B37C;
	sub_83088D60(ctx, base);
loc_8308B37C:
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

__attribute__((alias("__imp__sub_8308B390"))) PPC_WEAK_FUNC(sub_8308B390);
PPC_FUNC_IMPL(__imp__sub_8308B390) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// lhz r6,14(r5)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r5.u32 + 14);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8308a2e8
	sub_8308A2E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8308B3AC"))) PPC_WEAK_FUNC(sub_8308B3AC);
PPC_FUNC_IMPL(__imp__sub_8308B3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8308B3B0"))) PPC_WEAK_FUNC(sub_8308B3B0);
PPC_FUNC_IMPL(__imp__sub_8308B3B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8308B3B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8308cc18
	ctx.lr = 0x8308B3C8;
	sub_8308CC18(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r4,6472
	ctx.r4.s64 = 6472;
	// addi r30,r31,20
	ctx.r30.s64 = ctx.r31.s64 + 20;
	// bl 0x8308cc50
	ctx.lr = 0x8308B3E0;
	sub_8308CC50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8308af38
	ctx.lr = 0x8308B3F0;
	sub_8308AF38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8308B3FC"))) PPC_WEAK_FUNC(sub_8308B3FC);
PPC_FUNC_IMPL(__imp__sub_8308B3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8308B400"))) PPC_WEAK_FUNC(sub_8308B400);
PPC_FUNC_IMPL(__imp__sub_8308B400) {
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
	// lwz r31,20(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8308b43c
	if (ctx.cr6.eq) goto loc_8308B43C;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x8308d3f8
	ctx.lr = 0x8308B42C;
	sub_8308D3F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8308d600
	ctx.lr = 0x8308B434;
	sub_8308D600(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83088d60
	ctx.lr = 0x8308B43C;
	sub_83088D60(ctx, base);
loc_8308B43C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8308cc40
	ctx.lr = 0x8308B444;
	sub_8308CC40(ctx, base);
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

__attribute__((alias("__imp__sub_8308B45C"))) PPC_WEAK_FUNC(sub_8308B45C);
PPC_FUNC_IMPL(__imp__sub_8308B45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8308B460"))) PPC_WEAK_FUNC(sub_8308B460);
PPC_FUNC_IMPL(__imp__sub_8308B460) {
	PPC_FUNC_PROLOGUE();
	// fsubs f0,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f2.f64));
	// fsel f1,f0,f2,f1
	ctx.f1.f64 = ctx.f0.f64 >= 0.0 ? ctx.f2.f64 : ctx.f1.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8308B46C"))) PPC_WEAK_FUNC(sub_8308B46C);
PPC_FUNC_IMPL(__imp__sub_8308B46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8308B470"))) PPC_WEAK_FUNC(sub_8308B470);
PPC_FUNC_IMPL(__imp__sub_8308B470) {
	PPC_FUNC_PROLOGUE();
	// fsubs f0,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f2.f64));
	// fsel f1,f0,f1,f2
	ctx.f1.f64 = ctx.f0.f64 >= 0.0 ? ctx.f1.f64 : ctx.f2.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8308B47C"))) PPC_WEAK_FUNC(sub_8308B47C);
PPC_FUNC_IMPL(__imp__sub_8308B47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8308B480"))) PPC_WEAK_FUNC(sub_8308B480);
PPC_FUNC_IMPL(__imp__sub_8308B480) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fsubs f0,f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsel f12,f0,f13,f3
	ctx.f12.f64 = ctx.f0.f64 >= 0.0 ? ctx.f13.f64 : ctx.f3.f64;
	// stfs f12,0(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8308B494"))) PPC_WEAK_FUNC(sub_8308B494);
PPC_FUNC_IMPL(__imp__sub_8308B494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8308B498"))) PPC_WEAK_FUNC(sub_8308B498);
PPC_FUNC_IMPL(__imp__sub_8308B498) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fsubs f0,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f2.f64));
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsel f12,f0,f13,f3
	ctx.f12.f64 = ctx.f0.f64 >= 0.0 ? ctx.f13.f64 : ctx.f3.f64;
	// stfs f12,0(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8308B4AC"))) PPC_WEAK_FUNC(sub_8308B4AC);
PPC_FUNC_IMPL(__imp__sub_8308B4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8308B4B0"))) PPC_WEAK_FUNC(sub_8308B4B0);
PPC_FUNC_IMPL(__imp__sub_8308B4B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fsubs f0,f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsel f12,f0,f3,f13
	ctx.f12.f64 = ctx.f0.f64 >= 0.0 ? ctx.f3.f64 : ctx.f13.f64;
	// stfs f12,0(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8308B4C4"))) PPC_WEAK_FUNC(sub_8308B4C4);
PPC_FUNC_IMPL(__imp__sub_8308B4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8308B4C8"))) PPC_WEAK_FUNC(sub_8308B4C8);
PPC_FUNC_IMPL(__imp__sub_8308B4C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x8308B4D0;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82fa8d24
	ctx.lr = 0x8308B4D8;
	__savefpr_27(ctx, base);
	// lfs f0,5112(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5112);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,5144(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5144);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f12,f0
	ctx.f12.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// lfs f11,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// fctiwz f10,f13
	ctx.f10.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// lfs f9,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// fctiwz f8,f11
	ctx.f8.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f11.f64));
	// lfs f7,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f7.f64 = double(temp.f32);
	// fctiwz f6,f9
	ctx.f6.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f9.f64));
	// lfs f5,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f5.f64 = double(temp.f32);
	// fctiwz f4,f7
	ctx.f4.s64 = (ctx.f7.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f7.f64));
	// lfs f3,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// fctiwz f2,f5
	ctx.f2.s64 = (ctx.f5.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f5.f64));
	// lfs f1,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f1.f64 = double(temp.f32);
	// fctiwz f0,f3
	ctx.f0.s64 = (ctx.f3.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f3.f64));
	// fctiwz f13,f1
	ctx.f13.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f12,-248(r1)
	PPC_STORE_U64(ctx.r1.u32 + -248, ctx.f12.u64);
	// stfd f6,-240(r1)
	PPC_STORE_U64(ctx.r1.u32 + -240, ctx.f6.u64);
	// lwz r27,124(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stfd f8,-272(r1)
	PPC_STORE_U64(ctx.r1.u32 + -272, ctx.f8.u64);
	// addi r31,r3,5088
	ctx.r31.s64 = ctx.r3.s64 + 5088;
	// stfd f0,-256(r1)
	PPC_STORE_U64(ctx.r1.u32 + -256, ctx.f0.u64);
	// addi r28,r3,24
	ctx.r28.s64 = ctx.r3.s64 + 24;
	// stfd f10,-232(r1)
	PPC_STORE_U64(ctx.r1.u32 + -232, ctx.f10.u64);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// stfd f4,-264(r1)
	PPC_STORE_U64(ctx.r1.u32 + -264, ctx.f4.u64);
	// stfd f2,-224(r1)
	PPC_STORE_U64(ctx.r1.u32 + -224, ctx.f2.u64);
	// stfd f13,-216(r1)
	PPC_STORE_U64(ctx.r1.u32 + -216, ctx.f13.u64);
	// lfs f12,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// lfs f6,5184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f6.f64 = double(temp.f32);
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-208(r1)
	PPC_STORE_U64(ctx.r1.u32 + -208, ctx.f11.u64);
	// stfs f6,76(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stfs f6,80(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stfs f6,112(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stfs f6,96(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stfs f6,128(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// stfs f6,144(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// stfs f6,160(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// stfs f6,92(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stfs f6,124(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// lwz r30,-244(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + -244);
	// stfs f6,108(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// lwz r16,-236(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -236);
	// stfs f6,140(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 140, temp.u32);
	// lwz r17,-268(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -268);
	// stfs f6,156(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// lwz r29,-252(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + -252);
	// stfs f6,172(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 172, temp.u32);
	// lwz r15,-228(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + -228);
	// lwz r11,-260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -260);
	// lwz r19,-220(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + -220);
	// lwz r18,-212(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -212);
	// beq cr6,0x8308be18
	if (ctx.cr6.eq) goto loc_8308BE18;
	// lwz r25,92(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r24,100(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// lwz r23,108(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r22,r25,-4
	ctx.r22.s64 = ctx.r25.s64 + -4;
	// lwz r25,116(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r21,r24,-4
	ctx.r21.s64 = ctx.r24.s64 + -4;
	// addi r20,r23,-4
	ctx.r20.s64 = ctx.r23.s64 + -4;
	// stw r11,-272(r1)
	PPC_STORE_U32(ctx.r1.u32 + -272, ctx.r11.u32);
	// addi r11,r25,-4
	ctx.r11.s64 = ctx.r25.s64 + -4;
	// stw r22,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
	// stw r21,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r21.u32);
	// addi r22,r7,-4
	ctx.r22.s64 = ctx.r7.s64 + -4;
	// stw r20,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r20.u32);
	// addi r21,r8,-4
	ctx.r21.s64 = ctx.r8.s64 + -4;
	// stw r10,76(r1)
	PPC_STORE_U32(ctx.r1.u32 + 76, ctx.r10.u32);
	// addi r20,r9,-4
	ctx.r20.s64 = ctx.r9.s64 + -4;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lwz r26,84(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// lis r7,-31969
	ctx.r7.s64 = -2095120384;
	// addi r26,r26,-4
	ctx.r26.s64 = ctx.r26.s64 + -4;
	// lfs f4,-4152(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4152);
	ctx.f4.f64 = double(temp.f32);
	// lfs f5,21500(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21500);
	ctx.f5.f64 = double(temp.f32);
	// addi r25,r4,-4
	ctx.r25.s64 = ctx.r4.s64 + -4;
	// lfs f13,5180(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5180);
	ctx.f13.f64 = double(temp.f32);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// lfs f0,24436(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24436);
	ctx.f0.f64 = double(temp.f32);
	// addi r24,r5,-4
	ctx.r24.s64 = ctx.r5.s64 + -4;
	// lfs f10,-10540(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -10540);
	ctx.f10.f64 = double(temp.f32);
	// addi r23,r6,-4
	ctx.r23.s64 = ctx.r6.s64 + -4;
loc_8308B640:
	// lfsu f12,4(r25)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r25.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r25.u32 = ea;
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lfsu f11,4(r24)
	ea = 4 + ctx.r24.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r24.u32 = ea;
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// fmuls f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// add r8,r17,r30
	ctx.r8.u64 = ctx.r17.u64 + ctx.r30.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r26,r8,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 1;
	// rlwinm r5,r29,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0x1;
	// subfc r7,r29,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r29.u32;
	ctx.r7.s64 = ctx.r9.s64 - ctx.r29.s64;
	// rlwinm r6,r9,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// mr r14,r30
	ctx.r14.u64 = ctx.r30.u64;
	// fsubs f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// subfe r4,r6,r5
	temp.u8 = (~ctx.r6.u32 + ctx.r5.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// fsubs f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// add r7,r16,r30
	ctx.r7.u64 = ctx.r16.u64 + ctx.r30.u64;
	// and r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 & ctx.r9.u64;
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// addi r5,r28,12
	ctx.r5.s64 = ctx.r28.s64 + 12;
	// fsel f7,f9,f0,f12
	ctx.f7.f64 = ctx.f9.f64 >= 0.0 ? ctx.f0.f64 : ctx.f12.f64;
	// fsel f3,f8,f0,f11
	ctx.f3.f64 = ctx.f8.f64 >= 0.0 ? ctx.f0.f64 : ctx.f11.f64;
	// fsubs f2,f7,f13
	ctx.f2.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// fsubs f1,f3,f13
	ctx.f1.f64 = double(float(ctx.f3.f64 - ctx.f13.f64));
	// fsel f12,f2,f7,f13
	ctx.f12.f64 = ctx.f2.f64 >= 0.0 ? ctx.f7.f64 : ctx.f13.f64;
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fsel f11,f1,f3,f13
	ctx.f11.f64 = ctx.f1.f64 >= 0.0 ? ctx.f3.f64 : ctx.f13.f64;
	// stfs f11,4(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfsu f11,4(r22)
	ea = 4 + ctx.r22.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r22.u32 = ea;
	ctx.f11.f64 = double(temp.f32);
	// lfsu f12,4(r23)
	ea = 4 + ctx.r23.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r23.u32 = ea;
	ctx.f12.f64 = double(temp.f32);
	// fmuls f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// fmuls f8,f11,f10
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fsubs f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// fsubs f3,f8,f0
	ctx.f3.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// fsel f2,f7,f0,f9
	ctx.f2.f64 = ctx.f7.f64 >= 0.0 ? ctx.f0.f64 : ctx.f9.f64;
	// fsel f1,f3,f0,f8
	ctx.f1.f64 = ctx.f3.f64 >= 0.0 ? ctx.f0.f64 : ctx.f8.f64;
	// fsubs f12,f2,f13
	ctx.f12.f64 = double(float(ctx.f2.f64 - ctx.f13.f64));
	// fsubs f11,f1,f13
	ctx.f11.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// fsel f9,f12,f2,f13
	ctx.f9.f64 = ctx.f12.f64 >= 0.0 ? ctx.f2.f64 : ctx.f13.f64;
	// stfs f9,0(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fsel f8,f11,f1,f13
	ctx.f8.f64 = ctx.f11.f64 >= 0.0 ? ctx.f1.f64 : ctx.f13.f64;
	// stfsu f8,4(r10)
	temp.f32 = float(ctx.f8.f64);
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// lfsu f11,4(r20)
	ea = 4 + ctx.r20.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r20.u32 = ea;
	ctx.f11.f64 = double(temp.f32);
	// lfsu f12,4(r21)
	ea = 4 + ctx.r21.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r21.u32 = ea;
	ctx.f12.f64 = double(temp.f32);
	// fmuls f7,f12,f10
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// fmuls f3,f11,f10
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fsubs f2,f7,f0
	ctx.f2.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// fsubs f1,f3,f0
	ctx.f1.f64 = double(float(ctx.f3.f64 - ctx.f0.f64));
	// fsel f12,f2,f0,f7
	ctx.f12.f64 = ctx.f2.f64 >= 0.0 ? ctx.f0.f64 : ctx.f7.f64;
	// fsel f11,f1,f0,f3
	ctx.f11.f64 = ctx.f1.f64 >= 0.0 ? ctx.f0.f64 : ctx.f3.f64;
	// fsubs f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fsubs f8,f11,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fsel f7,f9,f12,f13
	ctx.f7.f64 = ctx.f9.f64 >= 0.0 ? ctx.f12.f64 : ctx.f13.f64;
	// stfsu f7,4(r10)
	temp.f32 = float(ctx.f7.f64);
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// fsel f3,f8,f11,f13
	ctx.f3.f64 = ctx.f8.f64 >= 0.0 ? ctx.f11.f64 : ctx.f13.f64;
	// stfsu f3,4(r10)
	temp.f32 = float(ctx.f3.f64);
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// lfs f2,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fctiwz f1,f2
	ctx.f1.s64 = (ctx.f2.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f2.f64));
	// lfsx f11,r26,r3
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r3.u32);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfsx f12,r26,r3
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r26.u32 + ctx.r3.u32, temp.u32);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// lfsx f8,r26,r31
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r31.u32);
	ctx.f8.f64 = double(temp.f32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// lfs f9,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfsx f9,r26,r31
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r26.u32 + ctx.r31.u32, temp.u32);
	// stfs f11,0(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f8,4(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// stfd f1,-216(r1)
	PPC_STORE_U64(ctx.r1.u32 + -216, ctx.f1.u64);
	// lwz r6,-212(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -212);
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// rlwinm r26,r8,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// lfsx f3,r26,r3
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r3.u32);
	ctx.f3.f64 = double(temp.f32);
	// stfsx f7,r26,r3
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r26.u32 + ctx.r3.u32, temp.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lfsu f12,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f12.f64 = double(temp.f32);
	// lfsx f2,r26,r31
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r31.u32);
	ctx.f2.f64 = double(temp.f32);
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f12,r26,r31
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r26.u32 + ctx.r31.u32, temp.u32);
	// rlwinm r26,r8,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f3,4(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// subf r7,r14,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r14.s64;
	// stfsu f2,4(r10)
	temp.f32 = float(ctx.f2.f64);
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// lfsu f12,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfsx f1,r26,r3
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r3.u32);
	ctx.f1.f64 = double(temp.f32);
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// stfsx f12,r26,r3
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r26.u32 + ctx.r3.u32, temp.u32);
	// lfsu f12,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r26,r31
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r31.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfsx f12,r26,r31
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r26.u32 + ctx.r31.u32, temp.u32);
	// stfsu f1,4(r10)
	temp.f32 = float(ctx.f1.f64);
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// stfs f11,4(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lfsu f12,-20(r11)
	ea = -20 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f12.f64 = double(temp.f32);
	// fabs f9,f12
	ctx.f9.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// lfsu f11,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f11.f64 = double(temp.f32);
	// fabs f8,f11
	ctx.f8.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// lfs f3,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// lfs f2,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fsel f11,f7,f11,f12
	ctx.f11.f64 = ctx.f7.f64 >= 0.0 ? ctx.f11.f64 : ctx.f12.f64;
	// lfsu f12,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f12.f64 = double(temp.f32);
	// fabs f9,f12
	ctx.f9.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fabs f8,f11
	ctx.f8.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fabs f31,f3
	ctx.f31.u64 = ctx.f3.u64 & ~0x8000000000000000;
	// fabs f7,f2
	ctx.f7.u64 = ctx.f2.u64 & ~0x8000000000000000;
	// fabs f30,f1
	ctx.f30.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// fsubs f9,f8,f9
	ctx.f9.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// fsubs f8,f7,f31
	ctx.f8.f64 = double(float(ctx.f7.f64 - ctx.f31.f64));
	// fsel f7,f9,f11,f12
	ctx.f7.f64 = ctx.f9.f64 >= 0.0 ? ctx.f11.f64 : ctx.f12.f64;
	// lfsu f12,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f12.f64 = double(temp.f32);
	// fabs f11,f12
	ctx.f11.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fabs f9,f7
	ctx.f9.u64 = ctx.f7.u64 & ~0x8000000000000000;
	// fsel f8,f8,f2,f3
	ctx.f8.f64 = ctx.f8.f64 >= 0.0 ? ctx.f2.f64 : ctx.f3.f64;
	// fsubs f3,f9,f11
	ctx.f3.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// fabs f2,f8
	ctx.f2.u64 = ctx.f8.u64 & ~0x8000000000000000;
	// fsel f11,f3,f7,f12
	ctx.f11.f64 = ctx.f3.f64 >= 0.0 ? ctx.f7.f64 : ctx.f12.f64;
	// lfsu f12,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f12.f64 = double(temp.f32);
	// fabs f9,f12
	ctx.f9.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fabs f7,f11
	ctx.f7.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fsubs f3,f2,f30
	ctx.f3.f64 = double(float(ctx.f2.f64 - ctx.f30.f64));
	// fsubs f2,f7,f9
	ctx.f2.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// fsel f1,f3,f8,f1
	ctx.f1.f64 = ctx.f3.f64 >= 0.0 ? ctx.f8.f64 : ctx.f1.f64;
	// fsel f11,f2,f11,f12
	ctx.f11.f64 = ctx.f2.f64 >= 0.0 ? ctx.f11.f64 : ctx.f12.f64;
	// lfsu f12,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f12.f64 = double(temp.f32);
	// fabs f9,f12
	ctx.f9.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// addi r11,r11,-20
	ctx.r11.s64 = ctx.r11.s64 + -20;
	// fabs f8,f11
	ctx.f8.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fabs f7,f1
	ctx.f7.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// fsubs f3,f8,f9
	ctx.f3.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// fsel f2,f3,f11,f12
	ctx.f2.f64 = ctx.f3.f64 >= 0.0 ? ctx.f11.f64 : ctx.f12.f64;
	// lfsu f12,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	ctx.f12.f64 = double(temp.f32);
	// fabs f11,f12
	ctx.f11.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fsubs f9,f7,f11
	ctx.f9.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// fsel f8,f9,f1,f12
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f1.f64 : ctx.f12.f64;
	// lfsu f12,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	ctx.f12.f64 = double(temp.f32);
	// fabs f7,f12
	ctx.f7.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fabs f3,f8
	ctx.f3.u64 = ctx.f8.u64 & ~0x8000000000000000;
	// fsubs f1,f3,f7
	ctx.f1.f64 = double(float(ctx.f3.f64 - ctx.f7.f64));
	// fsel f11,f1,f8,f12
	ctx.f11.f64 = ctx.f1.f64 >= 0.0 ? ctx.f8.f64 : ctx.f12.f64;
	// lfsu f12,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	ctx.f12.f64 = double(temp.f32);
	// fabs f9,f12
	ctx.f9.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fabs f8,f11
	ctx.f8.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fsubs f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// fsel f3,f7,f11,f12
	ctx.f3.f64 = ctx.f7.f64 >= 0.0 ? ctx.f11.f64 : ctx.f12.f64;
	// stfsu f3,4(r10)
	temp.f32 = float(ctx.f3.f64);
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// stfsx f2,r6,r31
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, temp.u32);
	// fmr f12,f6
	ctx.f12.f64 = ctx.f6.f64;
	// blt cr6,0x8308b92c
	if (ctx.cr6.lt) goto loc_8308B92C;
	// addi r7,r29,-4
	ctx.r7.s64 = ctx.r29.s64 + -4;
	// rlwinm r7,r7,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r6,r7,1
	ctx.r6.s64 = ctx.r7.s64 + 1;
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_8308B8D4:
	// lfs f11,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fabs f9,f12
	ctx.f9.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fabs f8,f11
	ctx.f8.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// lfs f7,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fabs f3,f7
	ctx.f3.u64 = ctx.f7.u64 & ~0x8000000000000000;
	// lfs f2,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fabs f1,f2
	ctx.f1.u64 = ctx.f2.u64 & ~0x8000000000000000;
	// lfs f31,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// fabs f30,f31
	ctx.f30.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// fsubs f9,f9,f8
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// fsel f8,f9,f12,f11
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f12.f64 : ctx.f11.f64;
	// fabs f12,f8
	ctx.f12.u64 = ctx.f8.u64 & ~0x8000000000000000;
	// fsubs f11,f12,f3
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f3.f64));
	// fsel f9,f11,f8,f7
	ctx.f9.f64 = ctx.f11.f64 >= 0.0 ? ctx.f8.f64 : ctx.f7.f64;
	// fabs f8,f9
	ctx.f8.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// fsubs f7,f8,f1
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f1.f64));
	// fsel f3,f7,f9,f2
	ctx.f3.f64 = ctx.f7.f64 >= 0.0 ? ctx.f9.f64 : ctx.f2.f64;
	// fabs f2,f3
	ctx.f2.u64 = ctx.f3.u64 & ~0x8000000000000000;
	// fsubs f1,f2,f30
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f30.f64));
	// fsel f12,f1,f3,f31
	ctx.f12.f64 = ctx.f1.f64 >= 0.0 ? ctx.f3.f64 : ctx.f31.f64;
	// bdnz 0x8308b8d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8308B8D4;
loc_8308B92C:
	// cmpw cr6,r7,r29
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x8308b958
	if (!ctx.cr6.lt) goto loc_8308B958;
	// subf r7,r7,r29
	ctx.r7.s64 = ctx.r29.s64 - ctx.r7.s64;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_8308B940:
	// lfsu f11,4(r8)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r8.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	ctx.f11.f64 = double(temp.f32);
	// fabs f9,f12
	ctx.f9.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fabs f8,f11
	ctx.f8.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fsubs f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// fsel f12,f7,f12,f11
	ctx.f12.f64 = ctx.f7.f64 >= 0.0 ? ctx.f12.f64 : ctx.f11.f64;
	// bdnz 0x8308b940
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8308B940;
loc_8308B958:
	// lfs f11,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// lfsu f9,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f9.f64 = double(temp.f32);
	// fabs f8,f11
	ctx.f8.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fabs f3,f9
	ctx.f3.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// lfsu f2,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f2.f64 = double(temp.f32);
	// fabs f1,f2
	ctx.f1.u64 = ctx.f2.u64 & ~0x8000000000000000;
	// lfsu f11,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f11.f64 = double(temp.f32);
	// fabs f9,f11
	ctx.f9.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// lfsu f7,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f7.f64 = double(temp.f32);
	// fabs f2,f7
	ctx.f2.u64 = ctx.f7.u64 & ~0x8000000000000000;
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fabs f31,f11
	ctx.f31.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// lfs f30,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
	// fabs f29,f30
	ctx.f29.u64 = ctx.f30.u64 & ~0x8000000000000000;
	// lfsu f11,8(r10)
	ea = 8 + ctx.r10.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	ctx.f11.f64 = double(temp.f32);
	// fabs f28,f11
	ctx.f28.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// lfsu f7,4(r5)
	ea = 4 + ctx.r5.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r5.u32 = ea;
	ctx.f7.f64 = double(temp.f32);
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// addi r11,r5,4
	ctx.r11.s64 = ctx.r5.s64 + 4;
	// fsubs f27,f3,f8
	ctx.f27.f64 = double(float(ctx.f3.f64 - ctx.f8.f64));
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// fsel f8,f27,f3,f8
	ctx.f8.f64 = ctx.f27.f64 >= 0.0 ? ctx.f3.f64 : ctx.f8.f64;
	// fsubs f3,f1,f8
	ctx.f3.f64 = double(float(ctx.f1.f64 - ctx.f8.f64));
	// fsel f1,f3,f1,f8
	ctx.f1.f64 = ctx.f3.f64 >= 0.0 ? ctx.f1.f64 : ctx.f8.f64;
	// fsubs f8,f9,f1
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f1.f64));
	// fsel f3,f8,f9,f1
	ctx.f3.f64 = ctx.f8.f64 >= 0.0 ? ctx.f9.f64 : ctx.f1.f64;
	// fsubs f1,f2,f3
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f3.f64));
	// fsel f9,f1,f2,f3
	ctx.f9.f64 = ctx.f1.f64 >= 0.0 ? ctx.f2.f64 : ctx.f3.f64;
	// fsubs f8,f31,f9
	ctx.f8.f64 = double(float(ctx.f31.f64 - ctx.f9.f64));
	// fsel f3,f8,f31,f9
	ctx.f3.f64 = ctx.f8.f64 >= 0.0 ? ctx.f31.f64 : ctx.f9.f64;
	// fsubs f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f0.f64));
	// fsel f1,f2,f0,f3
	ctx.f1.f64 = ctx.f2.f64 >= 0.0 ? ctx.f0.f64 : ctx.f3.f64;
	// fabs f9,f1
	ctx.f9.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// fsubs f8,f9,f29
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f29.f64));
	// fsel f9,f8,f30,f1
	ctx.f9.f64 = ctx.f8.f64 >= 0.0 ? ctx.f30.f64 : ctx.f1.f64;
	// fabs f3,f9
	ctx.f3.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// fcmpu cr6,f3,f28
	ctx.cr6.compare(ctx.f3.f64, ctx.f28.f64);
	// ble cr6,0x8308ba00
	if (!ctx.cr6.gt) goto loc_8308BA00;
	// lwz r7,-204(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -204);
	// fmr f11,f9
	ctx.f11.f64 = ctx.f9.f64;
loc_8308BA00:
	// fabs f9,f11
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// stfs f9,0(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfsu f11,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	ctx.f11.f64 = double(temp.f32);
	// fabs f3,f11
	ctx.f3.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fsubs f2,f9,f7
	ctx.f2.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// addi r11,r7,-1
	ctx.r11.s64 = ctx.r7.s64 + -1;
	// fmr f8,f6
	ctx.f8.f64 = ctx.f6.f64;
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// and r15,r7,r11
	ctx.r15.u64 = ctx.r7.u64 & ctx.r11.u64;
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// fabs f1,f2
	ctx.f1.u64 = ctx.f2.u64 & ~0x8000000000000000;
	// fsubs f9,f1,f3
	ctx.f9.f64 = double(float(ctx.f1.f64 - ctx.f3.f64));
	// fsel f7,f9,f2,f11
	ctx.f7.f64 = ctx.f9.f64 >= 0.0 ? ctx.f2.f64 : ctx.f11.f64;
	// stfs f7,0(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f9,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfsu f11,4(r8)
	ea = 4 + ctx.r8.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r8,-8
	ctx.r10.s64 = ctx.r8.s64 + -8;
	// bgt cr6,0x8308ba58
	if (ctx.cr6.gt) goto loc_8308BA58;
	// fmr f8,f9
	ctx.f8.f64 = ctx.f9.f64;
	// fmr f11,f6
	ctx.f11.f64 = ctx.f6.f64;
loc_8308BA58:
	// fabs f7,f12
	ctx.fpscr.disableFlushMode();
	ctx.f7.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// lfsu f9,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f9.f64 = double(temp.f32);
	// lfs f3,-4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -4);
	ctx.f3.f64 = double(temp.f32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// fmadds f2,f9,f11,f3
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 + ctx.f3.f64));
	// lfsu f11,-4(r11)
	ea = -4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f11.f64 = double(temp.f32);
	// fabs f1,f11
	ctx.f1.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// lfsu f9,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f9.f64 = double(temp.f32);
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// fsubs f7,f7,f3
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f3.f64));
	// fmadds f3,f7,f8,f2
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f8.f64 + ctx.f2.f64));
	// fabs f2,f3
	ctx.f2.u64 = ctx.f3.u64 & ~0x8000000000000000;
	// fsubs f1,f2,f1
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// fsel f11,f1,f11,f3
	ctx.f11.f64 = ctx.f1.f64 >= 0.0 ? ctx.f11.f64 : ctx.f3.f64;
	// bgt cr6,0x8308ba98
	if (ctx.cr6.gt) goto loc_8308BA98;
	// fmr f9,f6
	ctx.f9.f64 = ctx.f6.f64;
loc_8308BA98:
	// stfs f9,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fabs f9,f11
	ctx.f9.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fabs f1,f12
	ctx.f1.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// lfs f8,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fabs f7,f8
	ctx.f7.u64 = ctx.f8.u64 & ~0x8000000000000000;
	// fabs f2,f8
	ctx.f2.u64 = ctx.f8.u64 & ~0x8000000000000000;
	// fsubs f3,f9,f7
	ctx.f3.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// fabs f7,f1
	ctx.f7.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// fsel f12,f3,f11,f8
	ctx.f12.f64 = ctx.f3.f64 >= 0.0 ? ctx.f11.f64 : ctx.f8.f64;
	// fabs f3,f12
	ctx.f3.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// stfs f3,-4(r6)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r6.u32 + -4, temp.u32);
	// fabs f12,f3
	ctx.f12.u64 = ctx.f3.u64 & ~0x8000000000000000;
	// fsubs f11,f12,f2
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f2.f64));
	// lfsu f12,-4(r11)
	ea = -4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f12.f64 = double(temp.f32);
	// fsel f9,f11,f12,f8
	ctx.f9.f64 = ctx.f11.f64 >= 0.0 ? ctx.f12.f64 : ctx.f8.f64;
	// fabs f8,f9
	ctx.f8.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// stfs f8,0(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f11,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	ctx.f11.f64 = double(temp.f32);
	// lfsu f12,8(r11)
	ea = 8 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f12.f64 = double(temp.f32);
	// fabs f2,f12
	ctx.f2.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// lfs f3,-4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -4);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f8,f2,f7
	ctx.f8.f64 = double(float(ctx.f2.f64 - ctx.f7.f64));
	// lfsu f9,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	ctx.f9.f64 = double(temp.f32);
	// fsubs f1,f1,f12
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f12.f64));
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// fsel f7,f8,f11,f9
	ctx.f7.f64 = ctx.f8.f64 >= 0.0 ? ctx.f11.f64 : ctx.f9.f64;
	// fmadds f2,f7,f1,f12
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f1.f64 + ctx.f12.f64));
	// stfs f2,0(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fsubs f1,f3,f2
	ctx.f1.f64 = double(float(ctx.f3.f64 - ctx.f2.f64));
	// fsel f9,f1,f3,f2
	ctx.f9.f64 = ctx.f1.f64 >= 0.0 ? ctx.f3.f64 : ctx.f2.f64;
	// stfs f9,-4(r6)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r6.u32 + -4, temp.u32);
	// lfsu f12,-8(r11)
	ea = -8 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f12.f64 = double(temp.f32);
	// bgt cr6,0x8308bb24
	if (ctx.cr6.gt) goto loc_8308BB24;
	// fmr f12,f9
	ctx.f12.f64 = ctx.f9.f64;
loc_8308BB24:
	// lwz r10,-260(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -260);
	// stfs f12,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// std r9,-216(r1)
	PPC_STORE_U64(ctx.r1.u32 + -216, ctx.r9.u64);
	// rlwinm r6,r19,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0x1;
	// add r8,r18,r10
	ctx.r8.u64 = ctx.r18.u64 + ctx.r10.u64;
	// lwz r5,-272(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -272);
	// addi r10,r18,1
	ctx.r10.s64 = ctx.r18.s64 + 1;
	// fmr f12,f6
	ctx.f12.f64 = ctx.f6.f64;
	// rlwinm r26,r8,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// fmr f11,f6
	ctx.f11.f64 = ctx.f6.f64;
	// subf r8,r18,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r18.s64;
	// fmr f7,f6
	ctx.f7.f64 = ctx.f6.f64;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfc r14,r19,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r19.u32;
	ctx.r14.s64 = ctx.r10.s64 - ctx.r19.s64;
	// cmpwi cr6,r19,2
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 2, ctx.xer);
	// stfsx f9,r26,r31
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r26.u32 + ctx.r31.u32, temp.u32);
	// rlwinm r26,r8,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subfe r6,r9,r6
	temp.u8 = (~ctx.r9.u32 + ctx.r6.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r9.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lfsx f8,r5,r3
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	ctx.f8.f64 = double(temp.f32);
	// and r18,r6,r10
	ctx.r18.u64 = ctx.r6.u64 & ctx.r10.u64;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// addi r11,r7,12
	ctx.r11.s64 = ctx.r7.s64 + 12;
	// li r8,0
	ctx.r8.s64 = 0;
	// ld r9,-216(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -216);
	// lfsx f9,r26,r31
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r31.u32);
	ctx.f9.f64 = double(temp.f32);
	// blt cr6,0x8308bbc4
	if (ctx.cr6.lt) goto loc_8308BBC4;
	// addi r8,r19,-2
	ctx.r8.s64 = ctx.r19.s64 + -2;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r8,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r10,r7,1
	ctx.r10.s64 = ctx.r7.s64 + 1;
	// addi r7,r8,-4
	ctx.r7.s64 = ctx.r8.s64 + -4;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8308BBB0:
	// lfs f3,4(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f12,f9,f8,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f12.f64));
	// lfsu f9,8(r7)
	ea = 8 + ctx.r7.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r7.u32 = ea;
	ctx.f9.f64 = double(temp.f32);
	// fmadds f11,f3,f8,f11
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f8.f64 + ctx.f11.f64));
	// bdnz 0x8308bbb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8308BBB0;
loc_8308BBC4:
	// cmpw cr6,r8,r19
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r19.s32, ctx.xer);
	// bge cr6,0x8308bbd0
	if (!ctx.cr6.lt) goto loc_8308BBD0;
	// fmuls f7,f9,f8
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
loc_8308BBD0:
	// fadds f12,f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fabs f9,f11
	ctx.f9.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// fadds f8,f12,f7
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f7.f64));
	// fmuls f7,f8,f8
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fmsubs f3,f8,f5,f7
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f5.f64 - ctx.f7.f64));
	// fmuls f2,f3,f3
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// fmsubs f1,f3,f5,f2
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f5.f64 - ctx.f2.f64));
	// fmuls f12,f1,f4
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f4.f64));
	// fctiwz f8,f12
	ctx.f8.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfd f8,-216(r1)
	PPC_STORE_U64(ctx.r1.u32 + -216, ctx.f8.u64);
	// lwz r8,-212(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -212);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,-224(r1)
	PPC_STORE_U64(ctx.r1.u32 + -224, ctx.r7.u64);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// lfs f1,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f8,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lwz r8,76(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 76);
	// lfd f7,-224(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -224);
	// fcfid f3,f7
	ctx.f3.f64 = double(ctx.f7.s64);
	// fsubs f7,f8,f1
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f1.f64));
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// fsubs f3,f12,f2
	ctx.f3.f64 = double(float(ctx.f12.f64 - ctx.f2.f64));
	// fmadds f12,f7,f3,f1
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f3.f64 + ctx.f1.f64));
	// fabs f2,f12
	ctx.f2.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fmr f1,f12
	ctx.f1.f64 = ctx.f12.f64;
	// fsubs f9,f2,f9
	ctx.f9.f64 = double(float(ctx.f2.f64 - ctx.f9.f64));
	// fsel f8,f9,f12,f11
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f12.f64 : ctx.f11.f64;
	// stfs f8,0(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f3,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfsu f11,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f11.f64 = double(temp.f32);
	// fabs f7,f11
	ctx.f7.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fabs f2,f3
	ctx.f2.u64 = ctx.f3.u64 & ~0x8000000000000000;
	// fmuls f12,f3,f12
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// fsubs f9,f7,f2
	ctx.f9.f64 = double(float(ctx.f7.f64 - ctx.f2.f64));
	// fsel f8,f9,f11,f3
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f11.f64 : ctx.f3.f64;
	// stfs f8,0(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f7,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f7.f64 = double(temp.f32);
	// fmuls f3,f12,f7
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// lfsu f12,8(r11)
	ea = 8 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f12.f64 = double(temp.f32);
	// fabs f2,f12
	ctx.f2.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fabs f11,f3
	ctx.f11.u64 = ctx.f3.u64 & ~0x8000000000000000;
	// fsubs f9,f2,f11
	ctx.f9.f64 = double(float(ctx.f2.f64 - ctx.f11.f64));
	// fsel f8,f9,f12,f3
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f12.f64 : ctx.f3.f64;
	// stfs f8,0(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfsu f3,4(r8)
	temp.f32 = float(ctx.f3.f64);
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
	// lfs f7,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fabs f2,f7
	ctx.f2.u64 = ctx.f7.u64 & ~0x8000000000000000;
	// lfsu f12,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f12.f64 = double(temp.f32);
	// fabs f3,f12
	ctx.f3.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fsubs f9,f3,f2
	ctx.f9.f64 = double(float(ctx.f3.f64 - ctx.f2.f64));
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fmuls f11,f7,f1
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f1.f64));
	// stw r8,76(r1)
	PPC_STORE_U32(ctx.r1.u32 + 76, ctx.r8.u32);
	// fsel f8,f9,f12,f7
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f12.f64 : ctx.f7.f64;
	// stfs f8,0(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f7,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f7.f64 = double(temp.f32);
	// fmuls f3,f11,f7
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// lfsu f12,8(r11)
	ea = 8 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f12.f64 = double(temp.f32);
	// fabs f2,f12
	ctx.f2.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fabs f11,f3
	ctx.f11.u64 = ctx.f3.u64 & ~0x8000000000000000;
	// fsubs f9,f2,f11
	ctx.f9.f64 = double(float(ctx.f2.f64 - ctx.f11.f64));
	// fsel f8,f9,f12,f3
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f12.f64 : ctx.f3.f64;
	// stfs f8,0(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfsu f3,4(r9)
	temp.f32 = float(ctx.f3.f64);
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// lfsu f12,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f12.f64 = double(temp.f32);
	// lfs f7,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fabs f3,f7
	ctx.f3.u64 = ctx.f7.u64 & ~0x8000000000000000;
	// fabs f2,f12
	ctx.f2.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// fmuls f9,f7,f1
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f1.f64));
	// fsubs f11,f2,f3
	ctx.f11.f64 = double(float(ctx.f2.f64 - ctx.f3.f64));
	// fsel f8,f11,f12,f7
	ctx.f8.f64 = ctx.f11.f64 >= 0.0 ? ctx.f12.f64 : ctx.f7.f64;
	// stfs f8,0(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f7,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f7.f64 = double(temp.f32);
	// fmuls f3,f9,f7
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// lfsu f12,8(r11)
	ea = 8 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f12.f64 = double(temp.f32);
	// fabs f2,f12
	ctx.f2.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fabs f11,f3
	ctx.f11.u64 = ctx.f3.u64 & ~0x8000000000000000;
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// fsubs f9,f2,f11
	ctx.f9.f64 = double(float(ctx.f2.f64 - ctx.f11.f64));
	// fsel f8,f9,f12,f3
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f12.f64 : ctx.f3.f64;
	// stfs f8,0(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfsu f3,4(r9)
	temp.f32 = float(ctx.f3.f64);
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// lfsu f12,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	ctx.f12.f64 = double(temp.f32);
	// lfsu f11,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f11.f64 = double(temp.f32);
	// fabs f7,f11
	ctx.f7.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fabs f3,f12
	ctx.f3.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// fmuls f2,f12,f1
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// fsubs f9,f7,f3
	ctx.f9.f64 = double(float(ctx.f7.f64 - ctx.f3.f64));
	// fsel f8,f9,f11,f12
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f11.f64 : ctx.f12.f64;
	// stfs f8,0(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f7,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f7.f64 = double(temp.f32);
	// fmuls f3,f2,f7
	ctx.f3.f64 = double(float(ctx.f2.f64 * ctx.f7.f64));
	// lfsu f12,8(r11)
	ea = 8 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f12.f64 = double(temp.f32);
	// fabs f11,f12
	ctx.f11.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fabs f2,f3
	ctx.f2.u64 = ctx.f3.u64 & ~0x8000000000000000;
	// fsubs f9,f11,f2
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f2.f64));
	// fsel f8,f9,f12,f3
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f12.f64 : ctx.f3.f64;
	// stfs f8,0(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfsu f3,4(r9)
	temp.f32 = float(ctx.f3.f64);
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lfsu f11,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f11.f64 = double(temp.f32);
	// lfsu f12,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	ctx.f12.f64 = double(temp.f32);
	// fabs f3,f12
	ctx.f3.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fabs f7,f11
	ctx.f7.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fmuls f2,f12,f1
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// fsubs f9,f7,f3
	ctx.f9.f64 = double(float(ctx.f7.f64 - ctx.f3.f64));
	// fsel f8,f9,f11,f12
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f11.f64 : ctx.f12.f64;
	// stfs f8,0(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f7,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f7.f64 = double(temp.f32);
	// fmuls f3,f2,f7
	ctx.f3.f64 = double(float(ctx.f2.f64 * ctx.f7.f64));
	// lfsu f12,8(r11)
	ea = 8 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f12.f64 = double(temp.f32);
	// fabs f2,f12
	ctx.f2.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fabs f11,f3
	ctx.f11.u64 = ctx.f3.u64 & ~0x8000000000000000;
	// fsubs f9,f2,f11
	ctx.f9.f64 = double(float(ctx.f2.f64 - ctx.f11.f64));
	// fsel f8,f9,f12,f3
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f12.f64 : ctx.f3.f64;
	// stfs f8,0(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfsu f3,4(r9)
	temp.f32 = float(ctx.f3.f64);
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// lfs f7,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfsu f12,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f12.f64 = double(temp.f32);
	// fabs f3,f12
	ctx.f3.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fabs f2,f7
	ctx.f2.u64 = ctx.f7.u64 & ~0x8000000000000000;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// fmuls f1,f7,f1
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f1.f64));
	// fsubs f11,f3,f2
	ctx.f11.f64 = double(float(ctx.f3.f64 - ctx.f2.f64));
	// fsel f9,f11,f12,f7
	ctx.f9.f64 = ctx.f11.f64 >= 0.0 ? ctx.f12.f64 : ctx.f7.f64;
	// stfs f9,0(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f8,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f1,f8
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f8.f64));
	// lfsu f12,8(r11)
	ea = 8 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f12.f64 = double(temp.f32);
	// fabs f3,f12
	ctx.f3.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fabs f2,f7
	ctx.f2.u64 = ctx.f7.u64 & ~0x8000000000000000;
	// fsubs f1,f3,f2
	ctx.f1.f64 = double(float(ctx.f3.f64 - ctx.f2.f64));
	// fsel f12,f1,f12,f7
	ctx.f12.f64 = ctx.f1.f64 >= 0.0 ? ctx.f12.f64 : ctx.f7.f64;
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stfsu f7,4(r11)
	temp.f32 = float(ctx.f7.f64);
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bne cr6,0x8308b640
	if (!ctx.cr6.eq) goto loc_8308B640;
loc_8308BE18:
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// extsw r10,r18
	ctx.r10.s64 = ctx.r18.s32;
	// std r11,-208(r1)
	PPC_STORE_U64(ctx.r1.u32 + -208, ctx.r11.u64);
	// extsw r9,r15
	ctx.r9.s64 = ctx.r15.s32;
	// lfd f0,-208(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -208);
	// std r10,-208(r1)
	PPC_STORE_U64(ctx.r1.u32 + -208, ctx.r10.u64);
	// lfd f13,-208(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -208);
	// std r9,-208(r1)
	PPC_STORE_U64(ctx.r1.u32 + -208, ctx.r9.u64);
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// lfd f12,-208(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -208);
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// stfs f7,24(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// frsp f8,f11
	ctx.f8.f64 = double(float(ctx.f11.f64));
	// stfs f8,56(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f6,72(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82fa8d70
	ctx.lr = 0x8308BE68;
	__restfpr_27(ctx, base);
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

