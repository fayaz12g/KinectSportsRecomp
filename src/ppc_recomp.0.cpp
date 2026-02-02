#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82240000"))) PPC_WEAK_FUNC(sub_82240000);
PPC_FUNC_IMPL(__imp__sub_82240000) {
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
	// bl 0x82279dd0
	ctx.lr = 0x82240010;
	sub_82279DD0(ctx, base);
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

__attribute__((alias("__imp__sub_82240024"))) PPC_WEAK_FUNC(sub_82240024);
PPC_FUNC_IMPL(__imp__sub_82240024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82240028"))) PPC_WEAK_FUNC(sub_82240028);
PPC_FUNC_IMPL(__imp__sub_82240028) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,31184
	ctx.r3.s64 = ctx.r11.s64 + 31184;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82240040"))) PPC_WEAK_FUNC(sub_82240040);
PPC_FUNC_IMPL(__imp__sub_82240040) {
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
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,11008(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11008);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82240070
	if (ctx.cr6.eq) goto loc_82240070;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82240070;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82240070:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82240084;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82fa20c8
	ctx.lr = 0x8224009C;
	sub_82FA20C8(ctx, base);
}

__attribute__((alias("__imp__sub_8224009C"))) PPC_WEAK_FUNC(sub_8224009C);
PPC_FUNC_IMPL(__imp__sub_8224009C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822400A0"))) PPC_WEAK_FUNC(sub_822400A0);
PPC_FUNC_IMPL(__imp__sub_822400A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// addi r11,r11,11272
	ctx.r11.s64 = ctx.r11.s64 + 11272;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822400B4"))) PPC_WEAK_FUNC(sub_822400B4);
PPC_FUNC_IMPL(__imp__sub_822400B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822400B8"))) PPC_WEAK_FUNC(sub_822400B8);
PPC_FUNC_IMPL(__imp__sub_822400B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82fa77c0
	sub_82FA77C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822400BC"))) PPC_WEAK_FUNC(sub_822400BC);
PPC_FUNC_IMPL(__imp__sub_822400BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822400C0"))) PPC_WEAK_FUNC(sub_822400C0);
PPC_FUNC_IMPL(__imp__sub_822400C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82fa20f0
	sub_82FA20F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822400C4"))) PPC_WEAK_FUNC(sub_822400C4);
PPC_FUNC_IMPL(__imp__sub_822400C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822400C8"))) PPC_WEAK_FUNC(sub_822400C8);
PPC_FUNC_IMPL(__imp__sub_822400C8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822400D4"))) PPC_WEAK_FUNC(sub_822400D4);
PPC_FUNC_IMPL(__imp__sub_822400D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822400D8"))) PPC_WEAK_FUNC(sub_822400D8);
PPC_FUNC_IMPL(__imp__sub_822400D8) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822402c8
	ctx.lr = 0x82240100;
	sub_822402C8(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82240104:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82240104
	if (!ctx.cr6.eq) goto loc_82240104;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82240328
	ctx.lr = 0x8224012C;
	sub_82240328(ctx, base);
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

__attribute__((alias("__imp__sub_82240148"))) PPC_WEAK_FUNC(sub_82240148);
PPC_FUNC_IMPL(__imp__sub_82240148) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82240154"))) PPC_WEAK_FUNC(sub_82240154);
PPC_FUNC_IMPL(__imp__sub_82240154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82240158"))) PPC_WEAK_FUNC(sub_82240158);
PPC_FUNC_IMPL(__imp__sub_82240158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82240160;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// addic. r31,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r31.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82240190
	if (ctx.cr0.lt) goto loc_82240190;
loc_82240178:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x82240184;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 + ctx.r29.u64;
	// bge 0x82240178
	if (!ctx.cr0.lt) goto loc_82240178;
loc_82240190:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82240198"))) PPC_WEAK_FUNC(sub_82240198);
PPC_FUNC_IMPL(__imp__sub_82240198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x822401A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mullw r11,r4,r5
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// addic. r31,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r31.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blt 0x822401d4
	if (ctx.cr0.lt) goto loc_822401D4;
loc_822401BC:
	// subf r30,r29,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r29.s64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x822401CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x822401bc
	if (!ctx.cr0.lt) goto loc_822401BC;
loc_822401D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822401DC"))) PPC_WEAK_FUNC(sub_822401DC);
PPC_FUNC_IMPL(__imp__sub_822401DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822401E0"))) PPC_WEAK_FUNC(sub_822401E0);
PPC_FUNC_IMPL(__imp__sub_822401E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x822401E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82240210
	if (!ctx.cr6.lt) goto loc_82240210;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,31420
	ctx.r3.s64 = ctx.r11.s64 + 31420;
	// bl 0x82fa0680
	ctx.lr = 0x82240210;
	sub_82FA0680(ctx, base);
loc_82240210:
	// subf r30,r28,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r28.s64;
	// cmplw cr6,r6,r30
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82240220
	if (!ctx.cr6.lt) goto loc_82240220;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
loc_82240220:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x8224024c
	if (!ctx.cr6.eq) goto loc_8224024C;
	// li r5,-1
	ctx.r5.s64 = -1;
	// add r4,r30,r28
	ctx.r4.u64 = ctx.r30.u64 + ctx.r28.u64;
	// bl 0x82547488
	ctx.lr = 0x82240238;
	sub_82547488(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82547488
	ctx.lr = 0x82240248;
	sub_82547488(ctx, base);
	// b 0x822402b8
	goto loc_822402B8;
loc_8224024C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822403e8
	ctx.lr = 0x82240258;
	sub_822403E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822402b8
	if (ctx.cr0.eq) goto loc_822402B8;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82240270
	if (ctx.cr6.lt) goto loc_82240270;
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82240270:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82240284
	if (ctx.cr6.lt) goto loc_82240284;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82240288
	goto loc_82240288;
loc_82240284:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82240288:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r4,r29,r28
	ctx.r4.u64 = ctx.r29.u64 + ctx.r28.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82240294;
	sub_82FA77C0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x822402ac
	if (ctx.cr6.lt) goto loc_822402AC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x822402b0
	goto loc_822402B0;
loc_822402AC:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_822402B0:
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u8);
loc_822402B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822402C4"))) PPC_WEAK_FUNC(sub_822402C4);
PPC_FUNC_IMPL(__imp__sub_822402C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822402C8"))) PPC_WEAK_FUNC(sub_822402C8);
PPC_FUNC_IMPL(__imp__sub_822402C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x822402D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224030c
	if (ctx.cr0.eq) goto loc_8224030C;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8224030c
	if (ctx.cr6.lt) goto loc_8224030C;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82240304
	if (ctx.cr6.eq) goto loc_82240304;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82240304;
	sub_82FA77C0(ctx, base);
loc_82240304:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82691540
	ctx.lr = 0x8224030C;
	sub_82691540(ctx, base);
loc_8224030C:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stbx r10,r30,r31
	PPC_STORE_U8(ctx.r30.u32 + ctx.r31.u32, ctx.r10.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82240328"))) PPC_WEAK_FUNC(sub_82240328);
PPC_FUNC_IMPL(__imp__sub_82240328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82240330;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82547430
	ctx.lr = 0x82240344;
	sub_82547430(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224037c
	if (ctx.cr0.eq) goto loc_8224037C;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82240360
	if (ctx.cr6.lt) goto loc_82240360;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82240364
	goto loc_82240364;
loc_82240360:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82240364:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// subf r5,r11,r29
	ctx.r5.s64 = ctx.r29.s64 - ctx.r11.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822401e0
	ctx.lr = 0x82240378;
	sub_822401E0(ctx, base);
	// b 0x822403e0
	goto loc_822403E0;
loc_8224037C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822403e8
	ctx.lr = 0x8224038C;
	sub_822403E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822403dc
	if (ctx.cr0.eq) goto loc_822403DC;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x822403a8
	if (ctx.cr6.lt) goto loc_822403A8;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x822403ac
	goto loc_822403AC;
loc_822403A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_822403AC:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x822403B8;
	sub_82FA77C0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x822403d0
	if (ctx.cr6.lt) goto loc_822403D0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x822403d4
	goto loc_822403D4;
loc_822403D0:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_822403D4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u8);
loc_822403DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_822403E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822403E8"))) PPC_WEAK_FUNC(sub_822403E8);
PPC_FUNC_IMPL(__imp__sub_822403E8) {
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
	// li r11,-2
	ctx.r11.s64 = -2;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82240414
	if (!ctx.cr6.gt) goto loc_82240414;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,31444
	ctx.r3.s64 = ctx.r11.s64 + 31444;
	// bl 0x82fa0648
	ctx.lr = 0x82240414;
	sub_82FA0648(ctx, base);
loc_82240414:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82240430
	if (!ctx.cr6.lt) goto loc_82240430;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x822404a0
	ctx.lr = 0x8224042C;
	sub_822404A0(ctx, base);
	// b 0x82240480
	goto loc_82240480;
loc_82240430:
	// clrlwi. r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82240460
	if (ctx.cr0.eq) goto loc_82240460;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// bge cr6,0x82240460
	if (!ctx.cr6.lt) goto loc_82240460;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82240450
	if (!ctx.cr6.lt) goto loc_82240450;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82240450:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822402c8
	ctx.lr = 0x8224045C;
	sub_822402C8(ctx, base);
	// b 0x82240480
	goto loc_82240480;
loc_82240460:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82240480
	if (!ctx.cr6.eq) goto loc_82240480;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// blt cr6,0x8224047c
	if (ctx.cr6.lt) goto loc_8224047C;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8224047C:
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
loc_82240480:
	// subfic r11,r31,0
	ctx.xer.ca = ctx.r31.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r31.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
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

__attribute__((alias("__imp__sub_822404A0"))) PPC_WEAK_FUNC(sub_822404A0);
PPC_FUNC_IMPL(__imp__sub_822404A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x822404A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r9,-2
	ctx.r9.s64 = -2;
	// ori r31,r4,15
	ctx.r31.u64 = ctx.r4.u64 | 15;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x822404cc
	if (!ctx.cr6.gt) goto loc_822404CC;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// b 0x822404f8
	goto loc_822404F8;
loc_822404CC:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r8,3
	ctx.r8.s64 = 3;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// divwu r8,r31,r8
	ctx.r8.u32 = ctx.r31.u32 / ctx.r8.u32;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x822404f8
	if (!ctx.cr6.gt) goto loc_822404F8;
	// subfic r8,r10,-2
	ctx.xer.ca = ctx.r10.u32 <= 4294967294;
	ctx.r8.s64 = -2 - ctx.r10.s64;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x822404f8
	if (!ctx.cr6.gt) goto loc_822404F8;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
loc_822404F8:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 1;
	// bl 0x8224e0b0
	ctx.lr = 0x82240504;
	sub_8224E0B0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82240534
	if (ctx.cr6.eq) goto loc_82240534;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82240524
	if (ctx.cr6.lt) goto loc_82240524;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82240528
	goto loc_82240528;
loc_82240524:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82240528:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82240534;
	sub_82FA77C0(ctx, base);
loc_82240534:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822402c8
	ctx.lr = 0x82240544;
	sub_822402C8(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// stw r31,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r31.u32);
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// blt cr6,0x8224055c
	if (ctx.cr6.lt) goto loc_8224055C;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_8224055C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r30,r28
	PPC_STORE_U8(ctx.r30.u32 + ctx.r28.u32, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224056C"))) PPC_WEAK_FUNC(sub_8224056C);
PPC_FUNC_IMPL(__imp__sub_8224056C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82240570"))) PPC_WEAK_FUNC(sub_82240570);
PPC_FUNC_IMPL(__imp__sub_82240570) {
	PPC_FUNC_PROLOGUE();
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r3
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r3.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r11,0,r3
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r3.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224058C"))) PPC_WEAK_FUNC(sub_8224058C);
PPC_FUNC_IMPL(__imp__sub_8224058C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82240590"))) PPC_WEAK_FUNC(sub_82240590);
PPC_FUNC_IMPL(__imp__sub_82240590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82240598;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8226d8e8
	ctx.lr = 0x822405A0;
	sub_8226D8E8(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82240604
	if (!ctx.cr0.gt) goto loc_82240604;
	// li r29,0
	ctx.r29.s64 = 0;
loc_822405C0:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x822405d4
	if (!ctx.cr6.lt) goto loc_822405D4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// b 0x822405d8
	goto loc_822405D8;
loc_822405D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822405D8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822405e4
	if (ctx.cr6.eq) goto loc_822405E4;
	// bl 0x82240610
	ctx.lr = 0x822405E4;
	sub_82240610(ctx, base);
loc_822405E4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822405c0
	if (ctx.cr6.lt) goto loc_822405C0;
loc_82240604:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224060C"))) PPC_WEAK_FUNC(sub_8224060C);
PPC_FUNC_IMPL(__imp__sub_8224060C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82240610"))) PPC_WEAK_FUNC(sub_82240610);
PPC_FUNC_IMPL(__imp__sub_82240610) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82240618;
	__savegprlr_25(ctx, base);
	// stwu r1,-1216(r1)
	ea = -1216 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31957
	ctx.r31.s64 = -2094333952;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,23044(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23044);
	// bl 0x82545020
	ctx.lr = 0x82240630;
	sub_82545020(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8224065c
	if (ctx.cr0.eq) goto loc_8224065C;
	// bl 0x82547ee0
	ctx.lr = 0x8224063C;
	sub_82547EE0(ctx, base);
	// lwz r11,284(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// stfs f1,276(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 276, temp.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82240650
	if (!ctx.cr6.eq) goto loc_82240650;
	// stfs f1,272(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 272, temp.u32);
loc_82240650:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,284(r30)
	PPC_STORE_U32(ctx.r30.u32 + 284, ctx.r11.u32);
	// b 0x82240890
	goto loc_82240890;
loc_8224065C:
	// lwz r11,23044(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23044);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
loc_82240668:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r31,r10
	ctx.r9.u64 = ctx.r31.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82240668
	if (!ctx.cr0.eq) goto loc_82240668;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82240898
	if (ctx.cr6.gt) goto loc_82240898;
	// lwz r11,288(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82240898
	if (ctx.cr6.eq) goto loc_82240898;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82920518
	ctx.lr = 0x822406A4;
	sub_82920518(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82240898
	if (!ctx.cr0.eq) goto loc_82240898;
	// lbz r11,216(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 216);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82240898
	if (!ctx.cr0.eq) goto loc_82240898;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// li r6,259
	ctx.r6.s64 = 259;
	// addi r25,r11,9840
	ctx.r25.s64 = ctx.r11.s64 + 9840;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r5,r25,12
	ctx.r5.s64 = ctx.r25.s64 + 12;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82fa2390
	ctx.lr = 0x822406D4;
	sub_82FA2390(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r28,r11,6248
	ctx.r28.s64 = ctx.r11.s64 + 6248;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,6248(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6248);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x822411b0
	ctx.lr = 0x82240704;
	sub_822411B0(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82691500
	ctx.lr = 0x8224070C;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82240728
	if (ctx.cr0.eq) goto loc_82240728;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// b 0x8224072c
	goto loc_8224072C;
loc_82240728:
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_8224072C:
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lwz r27,84(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r7,r11,4968
	ctx.r7.s64 = ctx.r11.s64 + 4968;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r6,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r6.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// stw r27,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r27.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82546db8
	ctx.lr = 0x82240764;
	sub_82546DB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82240788
	if (!ctx.cr0.eq) goto loc_82240788;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82547d80
	ctx.lr = 0x82240774;
	sub_82547D80(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82547d80
	ctx.lr = 0x8224077C;
	sub_82547D80(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82691540
	ctx.lr = 0x82240784;
	sub_82691540(ctx, base);
	// b 0x82240864
	goto loc_82240864;
loc_82240788:
	// li r6,259
	ctx.r6.s64 = 259;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r5,r25,524
	ctx.r5.s64 = ctx.r25.s64 + 524;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x82fa2390
	ctx.lr = 0x8224079C;
	sub_82FA2390(ctx, base);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x82241280
	ctx.lr = 0x822407C4;
	sub_82241280(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82691500
	ctx.lr = 0x822407CC;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822407e8
	if (ctx.cr0.eq) goto loc_822407E8;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// b 0x822407ec
	goto loc_822407EC;
loc_822407E8:
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_822407EC:
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lwz r27,88(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r11,5112
	ctx.r7.s64 = ctx.r11.s64 + 5112;
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
	// stw r6,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r6.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r28,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r28.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82546db8
	ctx.lr = 0x82240824;
	sub_82546DB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82240844
	if (!ctx.cr0.eq) goto loc_82240844;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82547d80
	ctx.lr = 0x82240834;
	sub_82547D80(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82547d80
	ctx.lr = 0x8224083C;
	sub_82547D80(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82691540
	ctx.lr = 0x82240844;
	sub_82691540(ctx, base);
loc_82240844:
	// addi r9,r25,8
	ctx.r9.s64 = ctx.r25.s64 + 8;
loc_82240848:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82240848
	if (!ctx.cr0.eq) goto loc_82240848;
loc_82240864:
	// addi r9,r25,8
	ctx.r9.s64 = ctx.r25.s64 + 8;
loc_82240868:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82240868
	if (!ctx.cr0.eq) goto loc_82240868;
	// stw r31,284(r30)
	PPC_STORE_U32(ctx.r30.u32 + 284, ctx.r31.u32);
	// bl 0x82547ee0
	ctx.lr = 0x8224088C;
	sub_82547EE0(ctx, base);
	// stfs f1,272(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 272, temp.u32);
loc_82240890:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8224089c
	goto loc_8224089C;
loc_82240898:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224089C:
	// addi r1,r1,1216
	ctx.r1.s64 = ctx.r1.s64 + 1216;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822408A4"))) PPC_WEAK_FUNC(sub_822408A4);
PPC_FUNC_IMPL(__imp__sub_822408A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822408A8"))) PPC_WEAK_FUNC(sub_822408A8);
PPC_FUNC_IMPL(__imp__sub_822408A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x822408B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,23044(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23044);
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
loc_822408CC:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r29,r10
	ctx.r9.u64 = ctx.r29.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x822408cc
	if (!ctx.cr0.eq) goto loc_822408CC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82240a74
	if (ctx.cr6.gt) goto loc_82240A74;
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82240a74
	if (ctx.cr6.eq) goto loc_82240A74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82920518
	ctx.lr = 0x82240908;
	sub_82920518(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82240a74
	if (!ctx.cr0.eq) goto loc_82240A74;
	// lbz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 216);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82240a74
	if (!ctx.cr0.eq) goto loc_82240A74;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// li r6,259
	ctx.r6.s64 = 259;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,9840
	ctx.r11.s64 = ctx.r11.s64 + 9840;
	// beq cr6,0x822409bc
	if (ctx.cr6.eq) goto loc_822409BC;
	// addi r5,r11,780
	ctx.r5.s64 = ctx.r11.s64 + 780;
	// bl 0x82fa2390
	ctx.lr = 0x82240940;
	sub_82FA2390(ctx, base);
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r11,r11,6248
	ctx.r11.s64 = ctx.r11.s64 + 6248;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r6,r9,21004
	ctx.r6.s64 = ctx.r9.s64 + 21004;
	// addi r10,r10,21056
	ctx.r10.s64 = ctx.r10.s64 + 21056;
	// lis r7,-32220
	ctx.r7.s64 = -2111569920;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r7,4968
	ctx.r7.s64 = ctx.r7.s64 + 4968;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,44(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// lwz r6,2100(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 2100);
	// addi r10,r10,7
	ctx.r10.s64 = ctx.r10.s64 + 7;
	// lwz r30,304(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r11,r6,4
	ctx.r11.s64 = ctx.r6.s64 + 4;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82546db8
	ctx.lr = 0x822409A0;
	sub_82546DB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822409b0
	if (!ctx.cr0.eq) goto loc_822409B0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82547d80
	ctx.lr = 0x822409B0;
	sub_82547D80(ctx, base);
loc_822409B0:
	// stw r29,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r29.u32);
	// stw r29,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r29.u32);
	// b 0x82240a6c
	goto loc_82240A6C;
loc_822409BC:
	// addi r5,r11,268
	ctx.r5.s64 = ctx.r11.s64 + 268;
	// bl 0x82fa2390
	ctx.lr = 0x822409C4;
	sub_82FA2390(ctx, base);
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r11,r11,6248
	ctx.r11.s64 = ctx.r11.s64 + 6248;
	// addi r5,r10,21056
	ctx.r5.s64 = ctx.r10.s64 + 21056;
	// lis r30,-31957
	ctx.r30.s64 = -2094333952;
	// lis r7,-32220
	ctx.r7.s64 = -2111569920;
	// addi r28,r30,21004
	ctx.r28.s64 = ctx.r30.s64 + 21004;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r7,4968
	ctx.r7.s64 = ctx.r7.s64 + 4968;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// lwz r11,36(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	// lwz r10,28(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// lwz r5,20(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// addi r10,r10,7
	ctx.r10.s64 = ctx.r10.s64 + 7;
	// addi r27,r5,7
	ctx.r27.s64 = ctx.r5.s64 + 7;
	// rlwinm r5,r11,29,3,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// lwz r11,21004(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21004);
	// rlwinm r6,r10,29,3,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// lwz r10,2088(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2088);
	// lwz r30,292(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// addi r5,r11,7
	ctx.r5.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r27,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r10,r10,7
	ctx.r10.s64 = ctx.r10.s64 + 7;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// rlwinm r11,r5,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82546db8
	ctx.lr = 0x82240A54;
	sub_82546DB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82240a64
	if (!ctx.cr0.eq) goto loc_82240A64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82547d80
	ctx.lr = 0x82240A64;
	sub_82547D80(ctx, base);
loc_82240A64:
	// stw r29,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r29.u32);
	// stw r29,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r29.u32);
loc_82240A6C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82240a78
	goto loc_82240A78;
loc_82240A74:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82240A78:
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82240A80"))) PPC_WEAK_FUNC(sub_82240A80);
PPC_FUNC_IMPL(__imp__sub_82240A80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82240A88;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31957
	ctx.r29.s64 = -2094333952;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r31,23032(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 23032);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82240ac8
	if (!ctx.cr6.eq) goto loc_82240AC8;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82691500
	ctx.lr = 0x82240AAC;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82240ac0
	if (ctx.cr0.eq) goto loc_82240AC0;
	// bl 0x8253e6e0
	ctx.lr = 0x82240AB8;
	sub_8253E6E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82240ac4
	goto loc_82240AC4;
loc_82240AC0:
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82240AC4:
	// stw r31,23032(r29)
	PPC_STORE_U32(ctx.r29.u32 + 23032, ctx.r31.u32);
loc_82240AC8:
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r28,r11,23112
	ctx.r28.s64 = ctx.r11.s64 + 23112;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lfs f31,-2340(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -2340);
	ctx.f31.f64 = double(temp.f32);
	// blt cr6,0x82240b4c
	if (ctx.cr6.lt) goto loc_82240B4C;
	// bne cr6,0x82240b88
	if (!ctx.cr6.eq) goto loc_82240B88;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82240b88
	if (!ctx.cr6.eq) goto loc_82240B88;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82240b40
	if (ctx.cr6.eq) goto loc_82240B40;
	// stfs f31,16(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stw r26,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r26.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e4d50
	ctx.lr = 0x82240B1C;
	sub_822E4D50(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r11,r11,19660
	ctx.r11.s64 = ctx.r11.s64 + 19660;
	// addi r4,r10,19688
	ctx.r4.s64 = ctx.r10.s64 + 19688;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x826a7620
	ctx.lr = 0x82240B40;
	sub_826A7620(ctx, base);
loc_82240B40:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e4d00
	ctx.lr = 0x82240B48;
	sub_822E4D00(ctx, base);
	// b 0x82240b84
	goto loc_82240B84;
loc_82240B4C:
	// lfs f13,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,20(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82240b88
	if (!ctx.cr6.eq) goto loc_82240B88;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lfs f13,31396(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31396);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82240b88
	if (ctx.cr6.lt) goto loc_82240B88;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253e7a0
	ctx.lr = 0x82240B84;
	sub_8253E7A0(ctx, base);
loc_82240B84:
	// lwz r31,23032(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 23032);
loc_82240B88:
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r30,r11,9840
	ctx.r30.s64 = ctx.r11.s64 + 9840;
	// lwz r11,9840(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9840);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82240bf4
	if (!ctx.cr6.eq) goto loc_82240BF4;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x82240570
	ctx.lr = 0x82240BA4;
	sub_82240570(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt 0x82240bf0
	if (ctx.cr0.gt) goto loc_82240BF0;
	// lwz r3,23032(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 23032);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82240bd8
	if (!ctx.cr6.eq) goto loc_82240BD8;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82691500
	ctx.lr = 0x82240BC0;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82240bd0
	if (ctx.cr0.eq) goto loc_82240BD0;
	// bl 0x8253e6e0
	ctx.lr = 0x82240BCC;
	sub_8253E6E0(ctx, base);
	// b 0x82240bd4
	goto loc_82240BD4;
loc_82240BD0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82240BD4:
	// stw r3,23032(r29)
	PPC_STORE_U32(ctx.r29.u32 + 23032, ctx.r3.u32);
loc_82240BD8:
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stfs f31,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
	// b 0x82240c50
	goto loc_82240C50;
loc_82240BF0:
	// lwz r31,23032(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 23032);
loc_82240BF4:
	// lfs f13,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lfs f0,20(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f13,11804(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11804);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82240c1c
	if (ctx.cr6.lt) goto loc_82240C1C;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82240C1C:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82240c4c
	if (!ctx.cr6.eq) goto loc_82240C4C;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82691500
	ctx.lr = 0x82240C30;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82240c44
	if (ctx.cr0.eq) goto loc_82240C44;
	// bl 0x8253e6e0
	ctx.lr = 0x82240C3C;
	sub_8253E6E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82240c48
	goto loc_82240C48;
loc_82240C44:
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82240C48:
	// stw r31,23032(r29)
	PPC_STORE_U32(ctx.r29.u32 + 23032, ctx.r31.u32);
loc_82240C4C:
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_82240C50:
	// bl 0x8226d8e8
	ctx.lr = 0x82240C54;
	sub_8226D8E8(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82240d74
	if (!ctx.cr0.gt) goto loc_82240D74;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// lis r27,-31957
	ctx.r27.s64 = -2094333952;
loc_82240C78:
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82240c8c
	if (!ctx.cr6.lt) goto loc_82240C8C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwzx r31,r28,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// b 0x82240c90
	goto loc_82240C90;
loc_82240C8C:
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82240C90:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82240d54
	if (ctx.cr6.eq) goto loc_82240D54;
	// lwz r11,284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82240d00
	if (ctx.cr6.eq) goto loc_82240D00;
	// lwz r11,23044(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 23044);
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
loc_82240CAC:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r26,r10
	ctx.r9.u64 = ctx.r26.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82240cac
	if (!ctx.cr0.eq) goto loc_82240CAC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82240d00
	if (ctx.cr6.gt) goto loc_82240D00;
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82240d00
	if (ctx.cr6.eq) goto loc_82240D00;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82920518
	ctx.lr = 0x82240CE8;
	sub_82920518(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82240d00
	if (!ctx.cr0.eq) goto loc_82240D00;
	// lbz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 216);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x82240d04
	if (ctx.cr0.eq) goto loc_82240D04;
loc_82240D00:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82240D04:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82240d14
	if (ctx.cr0.eq) goto loc_82240D14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82240610
	ctx.lr = 0x82240D14;
	sub_82240610(ctx, base);
loc_82240D14:
	// lwz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82240d34
	if (ctx.cr0.eq) goto loc_82240D34;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822408a8
	ctx.lr = 0x82240D34;
	sub_822408A8(ctx, base);
loc_82240D34:
	// lwz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82240d54
	if (ctx.cr0.eq) goto loc_82240D54;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822408a8
	ctx.lr = 0x82240D54;
	sub_822408A8(ctx, base);
loc_82240D54:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82240c78
	if (ctx.cr6.lt) goto loc_82240C78;
loc_82240D74:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82240D80"))) PPC_WEAK_FUNC(sub_82240D80);
PPC_FUNC_IMPL(__imp__sub_82240D80) {
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
	// addi r4,r3,24
	ctx.r4.s64 = ctx.r3.s64 + 24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823f62d0
	ctx.lr = 0x82240DA0;
	sub_823F62D0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82240dc4
	if (!ctx.cr6.eq) goto loc_82240DC4;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// b 0x82240df4
	goto loc_82240DF4;
loc_82240DC4:
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x82240dd8
	if (!ctx.cr6.eq) goto loc_82240DD8;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// b 0x82240df0
	goto loc_82240DF0;
loc_82240DD8:
	// cmplwi cr6,r10,1167
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1167, ctx.xer);
	// bne cr6,0x82240df8
	if (!ctx.cr6.eq) goto loc_82240DF8;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82240df8
	if (ctx.cr6.eq) goto loc_82240DF8;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
loc_82240DF0:
	// beq cr6,0x82240df8
	if (ctx.cr6.eq) goto loc_82240DF8;
loc_82240DF4:
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_82240DF8:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x82240e1c
	if (!ctx.cr6.eq) goto loc_82240E1C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82240E1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82240E1C:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82240e2c
	if (ctx.cr6.eq) goto loc_82240E2C;
	// bl 0x82241d18
	ctx.lr = 0x82240E2C;
	sub_82241D18(ctx, base);
loc_82240E2C:
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

__attribute__((alias("__imp__sub_82240E40"))) PPC_WEAK_FUNC(sub_82240E40);
PPC_FUNC_IMPL(__imp__sub_82240E40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82240E48;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r30,r11,6232
	ctx.r30.s64 = ctx.r11.s64 + 6232;
	// lwz r10,6232(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6232);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82240f84
	if (ctx.cr6.eq) goto loc_82240F84;
loc_82240E68:
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82240f78
	if (!ctx.cr6.eq) goto loc_82240F78;
	// lwsync 
	// addi r4,r28,4
	ctx.r4.s64 = ctx.r28.s64 + 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82fa20f0
	ctx.lr = 0x82240E94;
	sub_82FA20F0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r29,r31,24
	ctx.r29.s64 = ctx.r31.s64 + 24;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x82240edc
	if (ctx.cr6.eq) goto loc_82240EDC;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82240ed4
	if (ctx.cr6.eq) goto loc_82240ED4;
	// bl 0x82241750
	ctx.lr = 0x82240ED0;
	sub_82241750(ctx, base);
	// b 0x82240ed8
	goto loc_82240ED8;
loc_82240ED4:
	// bl 0x82241518
	ctx.lr = 0x82240ED8;
	sub_82241518(ctx, base);
loc_82240ED8:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_82240EDC:
	// clrlwi. r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82240f40
	if (!ctx.cr0.eq) goto loc_82240F40;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// beq cr6,0x82240f18
	if (ctx.cr6.eq) goto loc_82240F18;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82240f40
	if (!ctx.cr6.eq) goto loc_82240F40;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823f62d0
	ctx.lr = 0x82240F08;
	sub_823F62D0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82240f38
	goto loc_82240F38;
loc_82240F18:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82240f40
	if (!ctx.cr6.eq) goto loc_82240F40;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823f62d0
	ctx.lr = 0x82240F2C;
	sub_823F62D0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82240F38:
	// bl 0x82241888
	ctx.lr = 0x82240F3C;
	sub_82241888(ctx, base);
	// b 0x82240f48
	goto loc_82240F48;
loc_82240F40:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82240d80
	ctx.lr = 0x82240F48;
	sub_82240D80(ctx, base);
loc_82240F48:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82240f58
	if (ctx.cr6.eq) goto loc_82240F58;
	// bl 0x825469e0
	ctx.lr = 0x82240F58;
	sub_825469E0(ctx, base);
loc_82240F58:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82240f68
	if (ctx.cr6.eq) goto loc_82240F68;
	// bl 0x82241d18
	ctx.lr = 0x82240F68;
	sub_82241D18(ctx, base);
loc_82240F68:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x82240F70;
	sub_82691540(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82240f7c
	goto loc_82240F7C;
loc_82240F78:
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
loc_82240F7C:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82240e68
	if (!ctx.cr6.eq) goto loc_82240E68;
loc_82240F84:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82240F8C"))) PPC_WEAK_FUNC(sub_82240F8C);
PPC_FUNC_IMPL(__imp__sub_82240F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82240F90"))) PPC_WEAK_FUNC(sub_82240F90);
PPC_FUNC_IMPL(__imp__sub_82240F90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82240F98;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// rlwinm r28,r4,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,21056
	ctx.r11.s64 = ctx.r11.s64 + 21056;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r29,r11,20
	ctx.r29.s64 = ctx.r11.s64 + 20;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwzx r11,r28,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r27,r11,29,3,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r3,r27,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x8254a888
	ctx.lr = 0x82240FCC;
	sub_8254A888(ctx, base);
	// addi r11,r30,60
	ctx.r11.s64 = ctx.r30.s64 + 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwzx r30,r11,r25
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// bl 0x82a75988
	ctx.lr = 0x82240FEC;
	sub_82A75988(ctx, base);
	// lwzx r10,r28,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x82241044
	if (!ctx.cr6.gt) goto loc_82241044;
loc_82240FFC:
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// li r7,1
	ctx.r7.s64 = 1;
	// clrlwi r8,r11,29
	ctx.r8.u64 = ctx.r11.u32 & 0x7;
	// slw r8,r7,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// lbzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// and. r8,r7,r9
	ctx.r8.u64 = ctx.r7.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82241034
	if (ctx.cr0.eq) goto loc_82241034;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// lbzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// stbx r9,r8,r10
	PPC_STORE_U8(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u8);
loc_82241034:
	// lwzx r10,r28,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82240ffc
	if (ctx.cr6.lt) goto loc_82240FFC;
loc_82241044:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a75198
	ctx.lr = 0x82241054;
	sub_82A75198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82547d80
	ctx.lr = 0x8224105C;
	sub_82547D80(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82241068"))) PPC_WEAK_FUNC(sub_82241068);
PPC_FUNC_IMPL(__imp__sub_82241068) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82241070;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// addi r8,r11,21056
	ctx.r8.s64 = ctx.r11.s64 + 21056;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r28,-31957
	ctx.r28.s64 = -2094333952;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// addi r11,r4,8
	ctx.r11.s64 = ctx.r4.s64 + 8;
	// lfs f0,-24756(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24756);
	ctx.f0.f64 = double(temp.f32);
	// addi r27,r28,21004
	ctx.r27.s64 = ctx.r28.s64 + 21004;
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lwz r10,20(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// addi r9,r10,7
	ctx.r9.s64 = ctx.r10.s64 + 7;
	// lwz r10,21004(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 21004);
	// rlwinm r7,r9,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// lwz r9,2088(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2088);
	// addi r30,r11,20
	ctx.r30.s64 = ctx.r11.s64 + 20;
	// addi r6,r10,7
	ctx.r6.s64 = ctx.r10.s64 + 7;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r10,28(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// addi r10,r10,7
	ctx.r10.s64 = ctx.r10.s64 + 7;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r7,r6,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,36(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// addi r10,r10,7
	ctx.r10.s64 = ctx.r10.s64 + 7;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// stw r7,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,12
	ctx.r29.s64 = ctx.r11.s64 + 12;
	// bl 0x82240f90
	ctx.lr = 0x822410FC;
	sub_82240F90(ctx, base);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82240f90
	ctx.lr = 0x82241110;
	sub_82240F90(ctx, base);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82240f90
	ctx.lr = 0x82241124;
	sub_82240F90(ctx, base);
	// lwz r11,2088(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2088);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// lwz r4,264(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a75198
	ctx.lr = 0x8224113C;
	sub_82A75198(ctx, base);
	// lwz r11,21004(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 21004);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r29,r11,29,3,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r29,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// add r28,r11,r30
	ctx.r28.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x8254a888
	ctx.lr = 0x8224115C;
	sub_8254A888(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82241188
	if (ctx.cr0.eq) goto loc_82241188;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82a75988
	ctx.lr = 0x82241174;
	sub_82A75988(ctx, base);
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82a75198
	ctx.lr = 0x82241188;
	sub_82A75198(ctx, base);
loc_82241188:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a75198
	ctx.lr = 0x82241198;
	sub_82A75198(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82547d80
	ctx.lr = 0x822411A0;
	sub_82547D80(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822411AC"))) PPC_WEAK_FUNC(sub_822411AC);
PPC_FUNC_IMPL(__imp__sub_822411AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822411B0"))) PPC_WEAK_FUNC(sub_822411B0);
PPC_FUNC_IMPL(__imp__sub_822411B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x822411B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r8,r11,21056
	ctx.r8.s64 = ctx.r11.s64 + 21056;
	// addi r7,r10,21004
	ctx.r7.s64 = ctx.r10.s64 + 21004;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r9,21004(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21004);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,36(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// lwz r10,28(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// addi r5,r9,7
	ctx.r5.s64 = ctx.r9.s64 + 7;
	// lwz r9,20(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// addi r8,r11,7
	ctx.r8.s64 = ctx.r11.s64 + 7;
	// addi r10,r10,7
	ctx.r10.s64 = ctx.r10.s64 + 7;
	// lwz r11,2088(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 2088);
	// addi r7,r9,7
	ctx.r7.s64 = ctx.r9.s64 + 7;
	// rlwinm r9,r8,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r8,r7,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFF;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r7,r11,7
	ctx.r7.s64 = ctx.r11.s64 + 7;
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r9,r5,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r31,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82547c40
	ctx.lr = 0x82241230;
	sub_82547C40(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82547c40
	ctx.lr = 0x8224123C;
	sub_82547C40(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a75988
	ctx.lr = 0x82241250;
	sub_82A75988(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82241068
	ctx.lr = 0x8224125C;
	sub_82241068(ctx, base);
	// clrlwi. r28,r3,24
	ctx.r28.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x82241274
	if (ctx.cr0.eq) goto loc_82241274;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82a75198
	ctx.lr = 0x82241274;
	sub_82A75198(ctx, base);
loc_82241274:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82241280"))) PPC_WEAK_FUNC(sub_82241280);
PPC_FUNC_IMPL(__imp__sub_82241280) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82241288;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r30,r11,21056
	ctx.r30.s64 = ctx.r11.s64 + 21056;
	// addi r26,r10,23092
	ctx.r26.s64 = ctx.r10.s64 + 23092;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r10,12(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r31,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82547c40
	ctx.lr = 0x822412D0;
	sub_82547C40(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82547c40
	ctx.lr = 0x822412DC;
	sub_82547C40(ctx, base);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a75988
	ctx.lr = 0x822412F0;
	sub_82A75988(ctx, base);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r9,12(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f0,-24756(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24756);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// addi r10,r10,7
	ctx.r10.s64 = ctx.r10.s64 + 7;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// stwu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bl 0x82240f90
	ctx.lr = 0x82241334;
	sub_82240F90(ctx, base);
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + ctx.r30.u64;
	// lwz r4,268(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 268);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82a75198
	ctx.lr = 0x82241348;
	sub_82A75198(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x82a75198
	ctx.lr = 0x82241358;
	sub_82A75198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82241364"))) PPC_WEAK_FUNC(sub_82241364);
PPC_FUNC_IMPL(__imp__sub_82241364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82241368"))) PPC_WEAK_FUNC(sub_82241368);
PPC_FUNC_IMPL(__imp__sub_82241368) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822413ac
	if (ctx.cr6.eq) goto loc_822413AC;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,296(r11)
	PPC_STORE_U32(ctx.r11.u32 + 296, ctx.r10.u32);
	// stw r9,300(r11)
	PPC_STORE_U32(ctx.r11.u32 + 300, ctx.r9.u32);
	// stw r8,292(r11)
	PPC_STORE_U32(ctx.r11.u32 + 292, ctx.r8.u32);
	// bl 0x82691540
	ctx.lr = 0x822413A8;
	sub_82691540(ctx, base);
	// b 0x822413d4
	goto loc_822413D4;
loc_822413AC:
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r11,r11,9840
	ctx.r11.s64 = ctx.r11.s64 + 9840;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_822413B8:
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
	// bne 0x822413b8
	if (!ctx.cr0.eq) goto loc_822413B8;
loc_822413D4:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822413e4
	if (ctx.cr6.eq) goto loc_822413E4;
	// bl 0x82241d18
	ctx.lr = 0x822413E4;
	sub_82241D18(ctx, base);
loc_822413E4:
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

__attribute__((alias("__imp__sub_822413F8"))) PPC_WEAK_FUNC(sub_822413F8);
PPC_FUNC_IMPL(__imp__sub_822413F8) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8224143c
	if (ctx.cr6.eq) goto loc_8224143C;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,308(r11)
	PPC_STORE_U32(ctx.r11.u32 + 308, ctx.r10.u32);
	// stw r9,312(r11)
	PPC_STORE_U32(ctx.r11.u32 + 312, ctx.r9.u32);
	// stw r8,304(r11)
	PPC_STORE_U32(ctx.r11.u32 + 304, ctx.r8.u32);
	// bl 0x82691540
	ctx.lr = 0x82241438;
	sub_82691540(ctx, base);
	// b 0x82241464
	goto loc_82241464;
loc_8224143C:
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r11,r11,9840
	ctx.r11.s64 = ctx.r11.s64 + 9840;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82241448:
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
	// bne 0x82241448
	if (!ctx.cr0.eq) goto loc_82241448;
loc_82241464:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82241474
	if (ctx.cr6.eq) goto loc_82241474;
	// bl 0x82241d18
	ctx.lr = 0x82241474;
	sub_82241D18(ctx, base);
loc_82241474:
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

__attribute__((alias("__imp__sub_82241488"))) PPC_WEAK_FUNC(sub_82241488);
PPC_FUNC_IMPL(__imp__sub_82241488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82241490;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// rlwinm r29,r4,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,21056
	ctx.r11.s64 = ctx.r11.s64 + 21056;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r30,r11,20
	ctx.r30.s64 = ctx.r11.s64 + 20;
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwzx r3,r29,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x822414c8
	if (!ctx.cr6.lt) goto loc_822414C8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82241510
	goto loc_82241510;
loc_822414C8:
	// bl 0x8254a888
	ctx.lr = 0x822414CC;
	sub_8254A888(ctx, base);
	// lwzx r11,r29,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r5,r11,29,3,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// bl 0x82a75198
	ctx.lr = 0x822414E8;
	sub_82A75198(ctx, base);
	// addi r11,r31,60
	ctx.r11.s64 = ctx.r31.s64 + 60;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82a75198
	ctx.lr = 0x82241504;
	sub_82A75198(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82547d80
	ctx.lr = 0x8224150C;
	sub_82547D80(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82241510:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82241518"))) PPC_WEAK_FUNC(sub_82241518);
PPC_FUNC_IMPL(__imp__sub_82241518) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82241520;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// bl 0x82a75198
	ctx.lr = 0x8224153C;
	sub_82A75198(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-24756(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24756);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82241744
	if (!ctx.cr6.eq) goto loc_82241744;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82241744
	if (ctx.cr6.eq) goto loc_82241744;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r31,r10,21056
	ctx.r31.s64 = ctx.r10.s64 + 21056;
	// addi r30,r11,21004
	ctx.r30.s64 = ctx.r11.s64 + 21004;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r8,r11,7
	ctx.r8.s64 = ctx.r11.s64 + 7;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r6,r10,7
	ctx.r6.s64 = ctx.r10.s64 + 7;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r7,r8,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// lwz r10,2088(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2088);
	// rlwinm r8,r6,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r6,r9,7
	ctx.r6.s64 = ctx.r9.s64 + 7;
	// add r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rlwinm r8,r6,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r7,r11,7
	ctx.r7.s64 = ctx.r11.s64 + 7;
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r7,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r10,r10,7
	ctx.r10.s64 = ctx.r10.s64 + 7;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82241744
	if (ctx.cr6.lt) goto loc_82241744;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82920510
	ctx.lr = 0x822415C8;
	sub_82920510(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822415d8
	if (!ctx.cr0.eq) goto loc_822415D8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82241748
	goto loc_82241748;
loc_822415D8:
	// addi r28,r26,8
	ctx.r28.s64 = ctx.r26.s64 + 8;
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a75198
	ctx.lr = 0x822415EC;
	sub_82A75198(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r28,r28,20
	ctx.r28.s64 = ctx.r28.s64 + 20;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82241744
	if (!ctx.cr6.eq) goto loc_82241744;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82241744
	if (!ctx.cr6.eq) goto loc_82241744;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82241744
	if (!ctx.cr6.eq) goto loc_82241744;
	// lwz r11,2088(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2088);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82241744
	if (!ctx.cr6.eq) goto loc_82241744;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82241744
	if (!ctx.cr6.eq) goto loc_82241744;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82241488
	ctx.lr = 0x82241670;
	sub_82241488(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// add r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82241488
	ctx.lr = 0x8224168C;
	sub_82241488(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82241488
	ctx.lr = 0x822416A8;
	sub_82241488(ctx, base);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r11,2088(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2088);
	// add r31,r10,r31
	ctx.r31.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822416d0
	if (!ctx.cr6.eq) goto loc_822416D0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,264(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a75198
	ctx.lr = 0x822416D0;
	sub_82A75198(ctx, base);
loc_822416D0:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x8254a888
	ctx.lr = 0x822416E4;
	sub_8254A888(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r5,r11,29,3,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// bl 0x82a75198
	ctx.lr = 0x82241700;
	sub_82A75198(ctx, base);
	// lwz r11,260(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 260);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82a75988
	ctx.lr = 0x82241714;
	sub_82A75988(ctx, base);
	// lwz r11,260(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 260);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82a75198
	ctx.lr = 0x82241728;
	sub_82A75198(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82547d80
	ctx.lr = 0x82241730;
	sub_82547D80(ctx, base);
	// add r11,r26,r27
	ctx.r11.u64 = ctx.r26.u64 + ctx.r27.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfc r11,r31,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r31.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// subfze r3,r10
	temp.u64 = ~ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u64 < ctx.xer.ca;
	ctx.r3.u64 = temp.u64;
	// b 0x82241748
	goto loc_82241748;
loc_82241744:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82241748:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82241750"))) PPC_WEAK_FUNC(sub_82241750);
PPC_FUNC_IMPL(__imp__sub_82241750) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82241758;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// bl 0x82a75198
	ctx.lr = 0x82241774;
	sub_82A75198(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lfs f13,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-24756(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24756);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82241878
	if (!ctx.cr6.eq) goto loc_82241878;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82241878
	if (ctx.cr6.eq) goto loc_82241878;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r31,r10,21056
	ctx.r31.s64 = ctx.r10.s64 + 21056;
	// addi r30,r11,23092
	ctx.r30.s64 = ctx.r11.s64 + 23092;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82241878
	if (ctx.cr6.lt) goto loc_82241878;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82920510
	ctx.lr = 0x822417D0;
	sub_82920510(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822417e0
	if (!ctx.cr0.eq) goto loc_822417E0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8224187c
	goto loc_8224187C;
loc_822417E0:
	// addi r29,r26,8
	ctx.r29.s64 = ctx.r26.s64 + 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a75198
	ctx.lr = 0x822417F4;
	sub_82A75198(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82241878
	if (!ctx.cr6.eq) goto loc_82241878;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82241878
	if (!ctx.cr6.eq) goto loc_82241878;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82241488
	ctx.lr = 0x82241830;
	sub_82241488(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r31,r10,r29
	ctx.r31.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82241858
	if (!ctx.cr6.eq) goto loc_82241858;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,268(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 268);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a75198
	ctx.lr = 0x82241858;
	sub_82A75198(ctx, base);
loc_82241858:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r10,r26,r27
	ctx.r10.u64 = ctx.r26.u64 + ctx.r27.u64;
	// li r9,-1
	ctx.r9.s64 = -1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// subfc r11,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfze r3,r9
	temp.u64 = ~ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u64 < ctx.xer.ca;
	ctx.r3.u64 = temp.u64;
	// b 0x8224187c
	goto loc_8224187C;
loc_82241878:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224187C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82241884"))) PPC_WEAK_FUNC(sub_82241884);
PPC_FUNC_IMPL(__imp__sub_82241884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82241888"))) PPC_WEAK_FUNC(sub_82241888);
PPC_FUNC_IMPL(__imp__sub_82241888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82241890;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,6248
	ctx.r11.s64 = ctx.r11.s64 + 6248;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82691500
	ctx.lr = 0x822418BC;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x822418d8
	if (ctx.cr0.eq) goto loc_822418D8;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// b 0x822418dc
	goto loc_822418DC;
loc_822418D8:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_822418DC:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r31,r30,24
	ctx.r31.s64 = ctx.r30.s64 + 24;
	// bl 0x823f62d0
	ctx.lr = 0x822418F8;
	sub_823F62D0(ctx, base);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82241928
	if (ctx.cr6.eq) goto loc_82241928;
	// bl 0x82241d18
	ctx.lr = 0x82241928;
	sub_82241D18(ctx, base);
loc_82241928:
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82546508
	ctx.lr = 0x82241940;
	sub_82546508(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82241954
	if (ctx.cr0.eq) goto loc_82241954;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82241a18
	ctx.lr = 0x82241950;
	sub_82241A18(ctx, base);
	// b 0x8224196c
	goto loc_8224196C;
loc_82241954:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82241964
	if (ctx.cr6.eq) goto loc_82241964;
	// bl 0x82241d18
	ctx.lr = 0x82241964;
	sub_82241D18(ctx, base);
loc_82241964:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82691540
	ctx.lr = 0x8224196C;
	sub_82691540(ctx, base);
loc_8224196C:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224197c
	if (ctx.cr6.eq) goto loc_8224197C;
	// bl 0x82241d18
	ctx.lr = 0x8224197C;
	sub_82241D18(ctx, base);
loc_8224197C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82241984"))) PPC_WEAK_FUNC(sub_82241984);
PPC_FUNC_IMPL(__imp__sub_82241984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82241988"))) PPC_WEAK_FUNC(sub_82241988);
PPC_FUNC_IMPL(__imp__sub_82241988) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82807220
	ctx.lr = 0x822419AC;
	sub_82807220(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822419d4
	if (!ctx.cr0.eq) goto loc_822419D4;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x828071d8
	ctx.lr = 0x822419C0;
	sub_828071D8(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x828071f0
	ctx.lr = 0x822419CC;
	sub_828071F0(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// b 0x822419e0
	goto loc_822419E0;
loc_822419D4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_822419E0:
	// lwsync 
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822419fc
	if (ctx.cr6.eq) goto loc_822419FC;
	// bl 0x82241d18
	ctx.lr = 0x822419FC;
	sub_82241D18(ctx, base);
loc_822419FC:
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

__attribute__((alias("__imp__sub_82241A14"))) PPC_WEAK_FUNC(sub_82241A14);
PPC_FUNC_IMPL(__imp__sub_82241A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82241A18"))) PPC_WEAK_FUNC(sub_82241A18);
PPC_FUNC_IMPL(__imp__sub_82241A18) {
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
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,6232
	ctx.r31.s64 = ctx.r11.s64 + 6232;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82241a54
	if (!ctx.cr6.lt) goto loc_82241A54;
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// li r9,1
	ctx.r9.s64 = 1;
	// ble cr6,0x82241a58
	if (!ctx.cr6.gt) goto loc_82241A58;
loc_82241A54:
	// li r9,0
	ctx.r9.s64 = 0;
loc_82241A58:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82241af8
	if (ctx.cr0.eq) goto loc_82241AF8;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r8,r10,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// srawi r30,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r8.s32 >> 2;
	// bne cr6,0x82241ae4
	if (!ctx.cr6.eq) goto loc_82241AE4;
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lis r7,16383
	ctx.r7.s64 = 1073676288;
	// srawi r8,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	// ori r7,r7,65534
	ctx.r7.u64 = ctx.r7.u64 | 65534;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x82241a98
	if (!ctx.cr6.gt) goto loc_82241A98;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,31836
	ctx.r3.s64 = ctx.r11.s64 + 31836;
	// bl 0x82fa0648
	ctx.lr = 0x82241A98;
	sub_82FA0648(ctx, base);
loc_82241A98:
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// srawi r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82241ae4
	if (!ctx.cr6.gt) goto loc_82241AE4;
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// rlwinm r11,r9,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// li r3,0
	ctx.r3.s64 = 0;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82241acc
	if (ctx.cr6.lt) goto loc_82241ACC;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_82241ACC:
	// cmplw cr6,r3,r8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82241ad8
	if (!ctx.cr6.lt) goto loc_82241AD8;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
loc_82241AD8:
	// bl 0x82241ba8
	ctx.lr = 0x82241ADC;
	sub_82241BA8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82241AE4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82241b84
	if (ctx.cr6.eq) goto loc_82241B84;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// b 0x82241b7c
	goto loc_82241B7C;
loc_82241AF8:
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82241b70
	if (!ctx.cr6.eq) goto loc_82241B70;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lis r7,16383
	ctx.r7.s64 = 1073676288;
	// srawi r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// ori r7,r7,65534
	ctx.r7.u64 = ctx.r7.u64 | 65534;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x82241b28
	if (!ctx.cr6.gt) goto loc_82241B28;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,31836
	ctx.r3.s64 = ctx.r11.s64 + 31836;
	// bl 0x82fa0648
	ctx.lr = 0x82241B28;
	sub_82FA0648(ctx, base);
loc_82241B28:
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82241b70
	if (!ctx.cr6.gt) goto loc_82241B70;
	// lis r8,16383
	ctx.r8.s64 = 1073676288;
	// rlwinm r11,r10,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// ori r8,r8,65535
	ctx.r8.u64 = ctx.r8.u64 | 65535;
	// li r3,0
	ctx.r3.s64 = 0;
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r11.s64;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82241b5c
	if (ctx.cr6.lt) goto loc_82241B5C;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82241B5C:
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82241b68
	if (!ctx.cr6.lt) goto loc_82241B68;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
loc_82241B68:
	// bl 0x82241ba8
	ctx.lr = 0x82241B6C;
	sub_82241BA8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82241B70:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82241b84
	if (ctx.cr6.eq) goto loc_82241B84;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82241B7C:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82241B84:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
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

__attribute__((alias("__imp__sub_82241BA4"))) PPC_WEAK_FUNC(sub_82241BA4);
PPC_FUNC_IMPL(__imp__sub_82241BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82241BA8"))) PPC_WEAK_FUNC(sub_82241BA8);
PPC_FUNC_IMPL(__imp__sub_82241BA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82241BB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82241bd4
	if (!ctx.cr6.gt) goto loc_82241BD4;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,31836
	ctx.r3.s64 = ctx.r11.s64 + 31836;
	// bl 0x82fa0648
	ctx.lr = 0x82241BD4;
	sub_82FA0648(ctx, base);
loc_82241BD4:
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,6232
	ctx.r31.s64 = ctx.r11.s64 + 6232;
	// lwz r3,6232(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6232);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x82241c80
	if (!ctx.cr6.lt) goto loc_82241C80;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82241c14
	if (ctx.cr6.eq) goto loc_82241C14;
	// rlwinm r3,r28,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82691500
	ctx.lr = 0x82241C08;
	sub_82691500(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82241c88
	if (ctx.cr0.eq) goto loc_82241C88;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82241C14:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82241c50
	if (ctx.cr6.eq) goto loc_82241C50;
loc_82241C28:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82241c38
	if (ctx.cr6.eq) goto loc_82241C38;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
loc_82241C38:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82241c28
	if (!ctx.cr6.eq) goto loc_82241C28;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82241C50:
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// srawi r29,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r11.s32 >> 2;
	// beq cr6,0x82241c64
	if (ctx.cr6.eq) goto loc_82241C64;
	// bl 0x82691540
	ctx.lr = 0x82241C64;
	sub_82691540(ctx, base);
loc_82241C64:
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_82241C80:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_82241C88:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,11272
	ctx.r11.s64 = ctx.r11.s64 + 11272;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82240040
	ctx.lr = 0x82241CA4;
	sub_82240040(ctx, base);
}

__attribute__((alias("__imp__sub_82241CA4"))) PPC_WEAK_FUNC(sub_82241CA4);
PPC_FUNC_IMPL(__imp__sub_82241CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82241CA8"))) PPC_WEAK_FUNC(sub_82241CA8);
PPC_FUNC_IMPL(__imp__sub_82241CA8) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82241CB0"))) PPC_WEAK_FUNC(sub_82241CB0);
PPC_FUNC_IMPL(__imp__sub_82241CB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,11304
	ctx.r11.s64 = ctx.r11.s64 + 11304;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82241CC0"))) PPC_WEAK_FUNC(sub_82241CC0);
PPC_FUNC_IMPL(__imp__sub_82241CC0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,11256
	ctx.r11.s64 = ctx.r11.s64 + 11256;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x82241cec
	if (ctx.cr0.eq) goto loc_82241CEC;
	// bl 0x82691540
	ctx.lr = 0x82241CEC;
	sub_82691540(ctx, base);
loc_82241CEC:
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

__attribute__((alias("__imp__sub_82241D04"))) PPC_WEAK_FUNC(sub_82241D04);
PPC_FUNC_IMPL(__imp__sub_82241D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82241D08"))) PPC_WEAK_FUNC(sub_82241D08);
PPC_FUNC_IMPL(__imp__sub_82241D08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,31816
	ctx.r3.s64 = ctx.r11.s64 + 31816;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82241D14"))) PPC_WEAK_FUNC(sub_82241D14);
PPC_FUNC_IMPL(__imp__sub_82241D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82241D18"))) PPC_WEAK_FUNC(sub_82241D18);
PPC_FUNC_IMPL(__imp__sub_82241D18) {
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
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_82241D30:
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
	// bne 0x82241d30
	if (!ctx.cr0.eq) goto loc_82241D30;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82241da8
	if (!ctx.cr6.eq) goto loc_82241DA8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82241D6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
loc_82241D70:
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
	// bne 0x82241d70
	if (!ctx.cr0.eq) goto loc_82241D70;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82241da8
	if (!ctx.cr6.eq) goto loc_82241DA8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82241DA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82241DA8:
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

__attribute__((alias("__imp__sub_82241DBC"))) PPC_WEAK_FUNC(sub_82241DBC);
PPC_FUNC_IMPL(__imp__sub_82241DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82241DC0"))) PPC_WEAK_FUNC(sub_82241DC0);
PPC_FUNC_IMPL(__imp__sub_82241DC0) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x826b02a8
	sub_826B02A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82241DC8"))) PPC_WEAK_FUNC(sub_82241DC8);
PPC_FUNC_IMPL(__imp__sub_82241DC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,11152
	ctx.r11.s64 = ctx.r11.s64 + 11152;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82241DD8"))) PPC_WEAK_FUNC(sub_82241DD8);
PPC_FUNC_IMPL(__imp__sub_82241DD8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,11152
	ctx.r11.s64 = ctx.r11.s64 + 11152;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x82241e04
	if (ctx.cr0.eq) goto loc_82241E04;
	// bl 0x82691540
	ctx.lr = 0x82241E04;
	sub_82691540(ctx, base);
loc_82241E04:
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

__attribute__((alias("__imp__sub_82241E1C"))) PPC_WEAK_FUNC(sub_82241E1C);
PPC_FUNC_IMPL(__imp__sub_82241E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82241E20"))) PPC_WEAK_FUNC(sub_82241E20);
PPC_FUNC_IMPL(__imp__sub_82241E20) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826b05f8
	ctx.lr = 0x82241E54;
	sub_826B05F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82241E64"))) PPC_WEAK_FUNC(sub_82241E64);
PPC_FUNC_IMPL(__imp__sub_82241E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82241E68"))) PPC_WEAK_FUNC(sub_82241E68);
PPC_FUNC_IMPL(__imp__sub_82241E68) {
	PPC_FUNC_PROLOGUE();
	// lis r5,2048
	ctx.r5.s64 = 134217728;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// b 0x826b0910
	sub_826B0910(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82241E74"))) PPC_WEAK_FUNC(sub_82241E74);
PPC_FUNC_IMPL(__imp__sub_82241E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82241E78"))) PPC_WEAK_FUNC(sub_82241E78);
PPC_FUNC_IMPL(__imp__sub_82241E78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82241E80;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// rlwinm. r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82241ed8
	if (ctx.cr0.eq) goto loc_82241ED8;
	// lwz r10,-4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// addi r29,r3,-4
	ctx.r29.s64 = ctx.r3.s64 + -4;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addic. r31,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r31.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// blt 0x82241ec0
	if (ctx.cr0.lt) goto loc_82241EC0;
loc_82241EAC:
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826b1970
	ctx.lr = 0x82241EB8;
	sub_826B1970(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x82241eac
	if (!ctx.cr0.lt) goto loc_82241EAC;
loc_82241EC0:
	// clrlwi. r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82241ed0
	if (ctx.cr0.eq) goto loc_82241ED0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826915c0
	ctx.lr = 0x82241ED0;
	sub_826915C0(ctx, base);
loc_82241ED0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82241ef4
	goto loc_82241EF4;
loc_82241ED8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826b1970
	ctx.lr = 0x82241EE0;
	sub_826B1970(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82241ef0
	if (ctx.cr0.eq) goto loc_82241EF0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82691540
	ctx.lr = 0x82241EF0;
	sub_82691540(ctx, base);
loc_82241EF0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82241EF4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82241EFC"))) PPC_WEAK_FUNC(sub_82241EFC);
PPC_FUNC_IMPL(__imp__sub_82241EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82241F00"))) PPC_WEAK_FUNC(sub_82241F00);
PPC_FUNC_IMPL(__imp__sub_82241F00) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82241f78
	ctx.lr = 0x82241F1C;
	sub_82241F78(ctx, base);
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

__attribute__((alias("__imp__sub_82241F34"))) PPC_WEAK_FUNC(sub_82241F34);
PPC_FUNC_IMPL(__imp__sub_82241F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82241F38"))) PPC_WEAK_FUNC(sub_82241F38);
PPC_FUNC_IMPL(__imp__sub_82241F38) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x826b1b88
	ctx.lr = 0x82241F58;
	sub_826B1B88(ctx, base);
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

__attribute__((alias("__imp__sub_82241F70"))) PPC_WEAK_FUNC(sub_82241F70);
PPC_FUNC_IMPL(__imp__sub_82241F70) {
	PPC_FUNC_PROLOGUE();
	// b 0x826b1bc8
	sub_826B1BC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82241F74"))) PPC_WEAK_FUNC(sub_82241F74);
PPC_FUNC_IMPL(__imp__sub_82241F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82241F78"))) PPC_WEAK_FUNC(sub_82241F78);
PPC_FUNC_IMPL(__imp__sub_82241F78) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r8,4
	ctx.r8.s64 = 262144;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bl 0x826b1b88
	ctx.lr = 0x82241FC4;
	sub_826B1B88(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82241FD4"))) PPC_WEAK_FUNC(sub_82241FD4);
PPC_FUNC_IMPL(__imp__sub_82241FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82241FD8"))) PPC_WEAK_FUNC(sub_82241FD8);
PPC_FUNC_IMPL(__imp__sub_82241FD8) {
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
	// bl 0x82242b00
	ctx.lr = 0x82241FE8;
	sub_82242B00(ctx, base);
	// bl 0x82241f78
	ctx.lr = 0x82241FEC;
	sub_82241F78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82241FFC"))) PPC_WEAK_FUNC(sub_82241FFC);
PPC_FUNC_IMPL(__imp__sub_82241FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82242000"))) PPC_WEAK_FUNC(sub_82242000);
PPC_FUNC_IMPL(__imp__sub_82242000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,11220
	ctx.r11.s64 = ctx.r11.s64 + 11220;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82242010"))) PPC_WEAK_FUNC(sub_82242010);
PPC_FUNC_IMPL(__imp__sub_82242010) {
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
	// rlwinm. r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82242078
	if (ctx.cr0.eq) goto loc_82242078;
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// addi r30,r3,-4
	ctx.r30.s64 = ctx.r3.s64 + -4;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// blt 0x82242060
	if (ctx.cr0.lt) goto loc_82242060;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,11220
	ctx.r11.s64 = ctx.r11.s64 + 11220;
loc_82242058:
	// stwu r11,-4(r10)
	ea = -4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82242058
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82242058;
loc_82242060:
	// clrlwi. r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82242070
	if (ctx.cr0.eq) goto loc_82242070;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826915c0
	ctx.lr = 0x82242070;
	sub_826915C0(ctx, base);
loc_82242070:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82242098
	goto loc_82242098;
loc_82242078:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,11220
	ctx.r11.s64 = ctx.r11.s64 + 11220;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82242094
	if (ctx.cr0.eq) goto loc_82242094;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x82242094;
	sub_82691540(ctx, base);
loc_82242094:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82242098:
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

__attribute__((alias("__imp__sub_822420B0"))) PPC_WEAK_FUNC(sub_822420B0);
PPC_FUNC_IMPL(__imp__sub_822420B0) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x826b20f8
	sub_826B20F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822420BC"))) PPC_WEAK_FUNC(sub_822420BC);
PPC_FUNC_IMPL(__imp__sub_822420BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822420C0"))) PPC_WEAK_FUNC(sub_822420C0);
PPC_FUNC_IMPL(__imp__sub_822420C0) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x826b44a8
	sub_826B44A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822420CC"))) PPC_WEAK_FUNC(sub_822420CC);
PPC_FUNC_IMPL(__imp__sub_822420CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822420D0"))) PPC_WEAK_FUNC(sub_822420D0);
PPC_FUNC_IMPL(__imp__sub_822420D0) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x826b4620
	sub_826B4620(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822420DC"))) PPC_WEAK_FUNC(sub_822420DC);
PPC_FUNC_IMPL(__imp__sub_822420DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822420E0"))) PPC_WEAK_FUNC(sub_822420E0);
PPC_FUNC_IMPL(__imp__sub_822420E0) {
	PPC_FUNC_PROLOGUE();
	// li r5,-1
	ctx.r5.s64 = -1;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// b 0x826b2ff0
	sub_826B2FF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822420EC"))) PPC_WEAK_FUNC(sub_822420EC);
PPC_FUNC_IMPL(__imp__sub_822420EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822420F0"))) PPC_WEAK_FUNC(sub_822420F0);
PPC_FUNC_IMPL(__imp__sub_822420F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f0,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,12(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// lfs f0,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,16(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,16(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// lfs f0,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,20(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82242154"))) PPC_WEAK_FUNC(sub_82242154);
PPC_FUNC_IMPL(__imp__sub_82242154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82242158"))) PPC_WEAK_FUNC(sub_82242158);
PPC_FUNC_IMPL(__imp__sub_82242158) {
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
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r10,r9,11500
	ctx.r10.s64 = ctx.r9.s64 + 11500;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x826b6c10
	ctx.lr = 0x82242194;
	sub_826B6C10(ctx, base);
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

__attribute__((alias("__imp__sub_822421AC"))) PPC_WEAK_FUNC(sub_822421AC);
PPC_FUNC_IMPL(__imp__sub_822421AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822421B0"))) PPC_WEAK_FUNC(sub_822421B0);
PPC_FUNC_IMPL(__imp__sub_822421B0) {
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
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r10,r9,11500
	ctx.r10.s64 = ctx.r9.s64 + 11500;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq cr6,0x822421f4
	if (ctx.cr6.eq) goto loc_822421F4;
	// addi r11,r4,8
	ctx.r11.s64 = ctx.r4.s64 + 8;
loc_822421F4:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826b6c10
	ctx.lr = 0x82242200;
	sub_826B6C10(ctx, base);
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

__attribute__((alias("__imp__sub_82242218"))) PPC_WEAK_FUNC(sub_82242218);
PPC_FUNC_IMPL(__imp__sub_82242218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82242220;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// rlwinm. r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82242278
	if (ctx.cr0.eq) goto loc_82242278;
	// lwz r10,-4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// addi r29,r3,-4
	ctx.r29.s64 = ctx.r3.s64 + -4;
	// mulli r11,r10,48
	ctx.r11.s64 = ctx.r10.s64 * 48;
	// addic. r31,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r31.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// blt 0x82242260
	if (ctx.cr0.lt) goto loc_82242260;
loc_8224224C:
	// addi r30,r30,-48
	ctx.r30.s64 = ctx.r30.s64 + -48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826b5ea0
	ctx.lr = 0x82242258;
	sub_826B5EA0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x8224224c
	if (!ctx.cr0.lt) goto loc_8224224C;
loc_82242260:
	// clrlwi. r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82242270
	if (ctx.cr0.eq) goto loc_82242270;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826915c0
	ctx.lr = 0x82242270;
	sub_826915C0(ctx, base);
loc_82242270:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82242294
	goto loc_82242294;
loc_82242278:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826b5ea0
	ctx.lr = 0x82242280;
	sub_826B5EA0(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82242290
	if (ctx.cr0.eq) goto loc_82242290;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826b1320
	ctx.lr = 0x82242290;
	sub_826B1320(ctx, base);
loc_82242290:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82242294:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224229C"))) PPC_WEAK_FUNC(sub_8224229C);
PPC_FUNC_IMPL(__imp__sub_8224229C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822422A0"))) PPC_WEAK_FUNC(sub_822422A0);
PPC_FUNC_IMPL(__imp__sub_822422A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x822422A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r3,12
	ctx.r31.s64 = ctx.r3.s64 + 12;
	// bl 0x828d6eb8
	ctx.lr = 0x822422C4;
	sub_828D6EB8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x828f13a8
	ctx.lr = 0x822422CC;
	sub_828F13A8(ctx, base);
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822422dc
	if (ctx.cr6.eq) goto loc_822422DC;
	// bl 0x82241d18
	ctx.lr = 0x822422DC;
	sub_82241D18(ctx, base);
loc_822422DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c3ea8
	ctx.lr = 0x822422E4;
	sub_822C3EA8(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// clrlwi. r10,r29,31
	ctx.r10.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,27340
	ctx.r11.s64 = ctx.r11.s64 + 27340;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// beq 0x82242300
	if (ctx.cr0.eq) goto loc_82242300;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82691540
	ctx.lr = 0x82242300;
	sub_82691540(ctx, base);
loc_82242300:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224230C"))) PPC_WEAK_FUNC(sub_8224230C);
PPC_FUNC_IMPL(__imp__sub_8224230C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82242310"))) PPC_WEAK_FUNC(sub_82242310);
PPC_FUNC_IMPL(__imp__sub_82242310) {
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
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r30,r11,-27980
	ctx.r30.s64 = ctx.r11.s64 + -27980;
	// lwz r11,-26584(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26584);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8224238c
	if (!ctx.cr0.eq) goto loc_8224238C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-31968
	ctx.r9.s64 = -2095054848;
	// stw r11,-26584(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26584, ctx.r11.u32);
	// lis r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r7,r9,10892
	ctx.r7.s64 = ctx.r9.s64 + 10892;
	// li r6,6
	ctx.r6.s64 = 6;
	// ori r5,r5,59052
	ctx.r5.u64 = ctx.r5.u64 | 59052;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x828c07f8
	ctx.lr = 0x82242364;
	sub_828C07F8(ctx, base);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r9,r10,32136
	ctx.r9.s64 = ctx.r10.s64 + 32136;
	// li r10,9
	ctx.r10.s64 = 9;
	// stw r11,312(r30)
	PPC_STORE_U32(ctx.r30.u32 + 312, ctx.r11.u32);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// stw r10,316(r30)
	PPC_STORE_U32(ctx.r30.u32 + 316, ctx.r10.u32);
	// addi r3,r11,2736
	ctx.r3.s64 = ctx.r11.s64 + 2736;
	// bl 0x82fa2318
	ctx.lr = 0x8224238C;
	sub_82FA2318(ctx, base);
loc_8224238C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x828c08d8
	ctx.lr = 0x8224239C;
	sub_828C08D8(ctx, base);
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lwz r31,31060(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31060);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822423b4
	if (!ctx.cr6.eq) goto loc_822423B4;
	// bl 0x8254aa48
	ctx.lr = 0x822423B0;
	sub_8254AA48(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_822423B4:
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r8,-31957
	ctx.r8.s64 = -2094333952;
	// lis r7,-31957
	ctx.r7.s64 = -2094333952;
	// lis r6,-31957
	ctx.r6.s64 = -2094333952;
	// stw r11,-6520(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6520, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,-6524(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6524, ctx.r10.u32);
	// stw r9,-6528(r7)
	PPC_STORE_U32(ctx.r7.u32 + -6528, ctx.r9.u32);
	// lis r8,-31957
	ctx.r8.s64 = -2094333952;
	// stw r11,-6532(r6)
	PPC_STORE_U32(ctx.r6.u32 + -6532, ctx.r11.u32);
	// lis r7,-31957
	ctx.r7.s64 = -2094333952;
	// lis r6,-31957
	ctx.r6.s64 = -2094333952;
	// lis r10,4096
	ctx.r10.s64 = 268435456;
	// lis r9,4096
	ctx.r9.s64 = 268435456;
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// ori r10,r10,6
	ctx.r10.u64 = ctx.r10.u64 | 6;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// ori r9,r9,7
	ctx.r9.u64 = ctx.r9.u64 | 7;
	// stw r10,-6536(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6536, ctx.r10.u32);
	// stw r11,-19188(r6)
	PPC_STORE_U32(ctx.r6.u32 + -19188, ctx.r11.u32);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r9,-6540(r7)
	PPC_STORE_U32(ctx.r7.u32 + -6540, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r10,27984
	ctx.r11.s64 = ctx.r10.s64 + 27984;
	// lfs f1,244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828bfca0
	ctx.lr = 0x8224242C;
	sub_828BFCA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x828e3670
	ctx.lr = 0x82242438;
	sub_828E3670(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x828bfc80
	ctx.lr = 0x82242444;
	sub_828BFC80(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x828c0918
	ctx.lr = 0x82242450;
	sub_828C0918(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x828bfd08
	ctx.lr = 0x82242458;
	sub_828BFD08(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x828bfd18
	ctx.lr = 0x82242464;
	sub_828BFD18(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x828bd608
	ctx.lr = 0x8224246C;
	sub_828BD608(ctx, base);
	// bl 0x82550498
	ctx.lr = 0x82242470;
	sub_82550498(ctx, base);
	// bl 0x828b5b38
	ctx.lr = 0x82242474;
	sub_828B5B38(ctx, base);
	// li r4,15
	ctx.r4.s64 = 15;
	// li r5,60
	ctx.r5.s64 = 60;
	// bl 0x828b27e8
	ctx.lr = 0x82242480;
	sub_828B27E8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_822424A0"))) PPC_WEAK_FUNC(sub_822424A0);
PPC_FUNC_IMPL(__imp__sub_822424A0) {
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
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,23144
	ctx.r11.s64 = ctx.r11.s64 + 23144;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lbz r10,-1696(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1696);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x822424dc
	if (ctx.cr0.eq) goto loc_822424DC;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82242568
	if (ctx.cr6.eq) goto loc_82242568;
loc_822424DC:
	// lwz r10,88(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822424f4
	if (ctx.cr6.eq) goto loc_822424F4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// b 0x82242568
	goto loc_82242568;
loc_822424F4:
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82242510
	if (ctx.cr6.eq) goto loc_82242510;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224250C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82242514
	goto loc_82242514;
loc_82242510:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82242514:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8224252c
	if (ctx.cr6.eq) goto loc_8224252C;
	// cmplwi cr6,r31,37
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 37, ctx.xer);
	// beq cr6,0x8224252c
	if (ctx.cr6.eq) goto loc_8224252C;
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// b 0x82242568
	goto loc_82242568;
loc_8224252C:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// beq cr6,0x82242568
	if (ctx.cr6.eq) goto loc_82242568;
	// cmplwi cr6,r31,18
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 18, ctx.xer);
	// beq cr6,0x82242568
	if (ctx.cr6.eq) goto loc_82242568;
	// cmplwi cr6,r31,25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 25, ctx.xer);
	// beq cr6,0x82242568
	if (ctx.cr6.eq) goto loc_82242568;
	// cmplwi cr6,r31,29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 29, ctx.xer);
	// ble cr6,0x8224255c
	if (!ctx.cr6.gt) goto loc_8224255C;
	// cmplwi cr6,r31,31
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 31, ctx.xer);
	// ble cr6,0x82242568
	if (!ctx.cr6.gt) goto loc_82242568;
loc_8224255C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82242580
	ctx.lr = 0x82242568;
	sub_82242580(ctx, base);
loc_82242568:
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

__attribute__((alias("__imp__sub_82242580"))) PPC_WEAK_FUNC(sub_82242580);
PPC_FUNC_IMPL(__imp__sub_82242580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82242588;
	__savegprlr_27(ctx, base);
	// stwu r1,-2768(r1)
	ea = -2768 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822425a8
	if (!ctx.cr6.eq) goto loc_822425A8;
	// stb r27,92(r3)
	PPC_STORE_U8(ctx.r3.u32 + 92, ctx.r27.u8);
loc_822425A8:
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r31,r11,21076
	ctx.r31.s64 = ctx.r11.s64 + 21076;
	// addi r30,r10,31976
	ctx.r30.s64 = ctx.r10.s64 + 31976;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// bl 0x8259c8e0
	ctx.lr = 0x822425D4;
	sub_8259C8E0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r1,672
	ctx.r5.s64 = ctx.r1.s64 + 672;
	// bl 0x8259c8e0
	ctx.lr = 0x822425F0;
	sub_8259C8E0(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,31996
	ctx.r4.s64 = ctx.r11.s64 + 31996;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x8259c8e0
	ctx.lr = 0x82242610;
	sub_8259C8E0(ctx, base);
	// cmplwi cr6,r28,37
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 37, ctx.xer);
	// bne cr6,0x82242638
	if (!ctx.cr6.eq) goto loc_82242638;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,32008
	ctx.r4.s64 = ctx.r11.s64 + 32008;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r1,672
	ctx.r5.s64 = ctx.r1.s64 + 672;
	// bl 0x8259c8e0
	ctx.lr = 0x82242638;
	sub_8259C8E0(ctx, base);
loc_82242638:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// cmplwi cr6,r28,27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 27, ctx.xer);
	// addi r30,r11,32032
	ctx.r30.s64 = ctx.r11.s64 + 32032;
	// bne cr6,0x82242664
	if (!ctx.cr6.eq) goto loc_82242664;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r1,672
	ctx.r5.s64 = ctx.r1.s64 + 672;
	// bl 0x8259c8e0
	ctx.lr = 0x82242664;
	sub_8259C8E0(ctx, base);
loc_82242664:
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 2, ctx.xer);
	// bne cr6,0x822426b4
	if (!ctx.cr6.eq) goto loc_822426B4;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lwz r3,21120(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21120);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224268c
	if (ctx.cr6.eq) goto loc_8224268C;
	// bl 0x82920258
	ctx.lr = 0x82242680;
	sub_82920258(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82242690
	if (ctx.cr6.eq) goto loc_82242690;
loc_8224268C:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82242690:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822426b4
	if (!ctx.cr0.eq) goto loc_822426B4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r1,672
	ctx.r5.s64 = ctx.r1.s64 + 672;
	// bl 0x8259c8e0
	ctx.lr = 0x822426B4;
	sub_8259C8E0(ctx, base);
loc_822426B4:
	// lwz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82242744
	if (!ctx.cr6.eq) goto loc_82242744;
	// li r3,1076
	ctx.r3.s64 = 1076;
	// bl 0x82691500
	ctx.lr = 0x822426C8;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82242714
	if (ctx.cr0.eq) goto loc_82242714;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r8,-32220
	ctx.r8.s64 = -2111569920;
	// addi r11,r11,5228
	ctx.r11.s64 = ctx.r11.s64 + 5228;
	// addi r7,r10,31944
	ctx.r7.s64 = ctx.r10.s64 + 31944;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// addi r8,r8,10768
	ctx.r8.s64 = ctx.r8.s64 + 10768;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,672
	ctx.r5.s64 = ctx.r1.s64 + 672;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253d420
	ctx.lr = 0x8224270C;
	sub_8253D420(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82242718
	goto loc_82242718;
loc_82242714:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82242718:
	// stw r3,88(r29)
	PPC_STORE_U32(ctx.r29.u32 + 88, ctx.r3.u32);
	// bl 0x8253daa0
	ctx.lr = 0x82242720;
	sub_8253DAA0(ctx, base);
	// lis r31,-31957
	ctx.r31.s64 = -2094333952;
	// lwz r11,20996(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20996);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82242744
	if (!ctx.cr6.eq) goto loc_82242744;
	// cmplwi cr6,r28,37
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 37, ctx.xer);
	// beq cr6,0x82242744
	if (ctx.cr6.eq) goto loc_82242744;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8254b578
	ctx.lr = 0x82242740;
	sub_8254B578(ctx, base);
	// stw r3,20996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20996, ctx.r3.u32);
loc_82242744:
	// addi r1,r1,2768
	ctx.r1.s64 = ctx.r1.s64 + 2768;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224274C"))) PPC_WEAK_FUNC(sub_8224274C);
PPC_FUNC_IMPL(__imp__sub_8224274C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82242750"))) PPC_WEAK_FUNC(sub_82242750);
PPC_FUNC_IMPL(__imp__sub_82242750) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82242758;
	__savegprlr_29(ctx, base);
	// stwu r1,-2752(r1)
	ea = -2752 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82242774
	if (!ctx.cr6.eq) goto loc_82242774;
	// stb r29,92(r3)
	PPC_STORE_U8(ctx.r3.u32 + 92, ctx.r29.u8);
loc_82242774:
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r30,r11,21076
	ctx.r30.s64 = ctx.r11.s64 + 21076;
	// addi r4,r10,31976
	ctx.r4.s64 = ctx.r10.s64 + 31976;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x8259c8e0
	ctx.lr = 0x8224279C;
	sub_8259C8E0(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r11,32008
	ctx.r4.s64 = ctx.r11.s64 + 32008;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r1,672
	ctx.r5.s64 = ctx.r1.s64 + 672;
	// bl 0x8259c8e0
	ctx.lr = 0x822427BC;
	sub_8259C8E0(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r11,31996
	ctx.r4.s64 = ctx.r11.s64 + 31996;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x8259c8e0
	ctx.lr = 0x822427DC;
	sub_8259C8E0(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82242864
	if (!ctx.cr6.eq) goto loc_82242864;
	// li r3,1076
	ctx.r3.s64 = 1076;
	// bl 0x82691500
	ctx.lr = 0x822427F0;
	sub_82691500(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8224283c
	if (ctx.cr0.eq) goto loc_8224283C;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r8,-32220
	ctx.r8.s64 = -2111569920;
	// addi r11,r11,5228
	ctx.r11.s64 = ctx.r11.s64 + 5228;
	// addi r7,r10,31944
	ctx.r7.s64 = ctx.r10.s64 + 31944;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,1052(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1052, ctx.r11.u32);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// addi r8,r8,10768
	ctx.r8.s64 = ctx.r8.s64 + 10768;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,672
	ctx.r5.s64 = ctx.r1.s64 + 672;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8253d420
	ctx.lr = 0x82242834;
	sub_8253D420(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82242840
	goto loc_82242840;
loc_8224283C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82242840:
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// bl 0x8253daa0
	ctx.lr = 0x82242848;
	sub_8253DAA0(ctx, base);
	// lis r31,-31957
	ctx.r31.s64 = -2094333952;
	// lwz r11,20996(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20996);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82242864
	if (!ctx.cr6.eq) goto loc_82242864;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8254b578
	ctx.lr = 0x82242860;
	sub_8254B578(ctx, base);
	// stw r3,20996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20996, ctx.r3.u32);
loc_82242864:
	// addi r1,r1,2752
	ctx.r1.s64 = ctx.r1.s64 + 2752;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224286C"))) PPC_WEAK_FUNC(sub_8224286C);
PPC_FUNC_IMPL(__imp__sub_8224286C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82242870"))) PPC_WEAK_FUNC(sub_82242870);
PPC_FUNC_IMPL(__imp__sub_82242870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82242878;
	__savegprlr_27(ctx, base);
	// stwu r1,-2768(r1)
	ea = -2768 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82242898
	if (!ctx.cr6.eq) goto loc_82242898;
	// stb r28,92(r3)
	PPC_STORE_U8(ctx.r3.u32 + 92, ctx.r28.u8);
loc_82242898:
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r31,r11,21076
	ctx.r31.s64 = ctx.r11.s64 + 21076;
	// addi r27,r10,31976
	ctx.r27.s64 = ctx.r10.s64 + 31976;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// bl 0x8259c8e0
	ctx.lr = 0x822428C4;
	sub_8259C8E0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r1,672
	ctx.r5.s64 = ctx.r1.s64 + 672;
	// bl 0x8259c8e0
	ctx.lr = 0x822428E0;
	sub_8259C8E0(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,31996
	ctx.r4.s64 = ctx.r11.s64 + 31996;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x8259c8e0
	ctx.lr = 0x82242900;
	sub_8259C8E0(ctx, base);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x82242960
	if (ctx.cr6.eq) goto loc_82242960;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x8224293c
	if (ctx.cr6.eq) goto loc_8224293C;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// beq cr6,0x82242954
	if (ctx.cr6.eq) goto loc_82242954;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// beq cr6,0x82242948
	if (ctx.cr6.eq) goto loc_82242948;
	// cmpwi cr6,r30,5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 5, ctx.xer);
	// beq cr6,0x8224293c
	if (ctx.cr6.eq) goto loc_8224293C;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// bne cr6,0x82242a08
	if (!ctx.cr6.eq) goto loc_82242A08;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r4,r11,32096
	ctx.r4.s64 = ctx.r11.s64 + 32096;
	// b 0x82242968
	goto loc_82242968;
loc_8224293C:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r4,r11,32008
	ctx.r4.s64 = ctx.r11.s64 + 32008;
	// b 0x82242968
	goto loc_82242968;
loc_82242948:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r4,r11,32076
	ctx.r4.s64 = ctx.r11.s64 + 32076;
	// b 0x82242968
	goto loc_82242968;
loc_82242954:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r4,r11,32060
	ctx.r4.s64 = ctx.r11.s64 + 32060;
	// b 0x82242968
	goto loc_82242968;
loc_82242960:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r4,r11,32044
	ctx.r4.s64 = ctx.r11.s64 + 32044;
loc_82242968:
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r1,672
	ctx.r5.s64 = ctx.r1.s64 + 672;
	// bl 0x8259c8e0
	ctx.lr = 0x82242980;
	sub_8259C8E0(ctx, base);
	// lwz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82242a08
	if (!ctx.cr6.eq) goto loc_82242A08;
	// li r3,1076
	ctx.r3.s64 = 1076;
	// bl 0x82691500
	ctx.lr = 0x82242994;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x822429e0
	if (ctx.cr0.eq) goto loc_822429E0;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r8,-32220
	ctx.r8.s64 = -2111569920;
	// addi r11,r11,5228
	ctx.r11.s64 = ctx.r11.s64 + 5228;
	// addi r7,r10,31944
	ctx.r7.s64 = ctx.r10.s64 + 31944;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// addi r8,r8,10768
	ctx.r8.s64 = ctx.r8.s64 + 10768;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,672
	ctx.r5.s64 = ctx.r1.s64 + 672;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253d420
	ctx.lr = 0x822429D8;
	sub_8253D420(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x822429e4
	goto loc_822429E4;
loc_822429E0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_822429E4:
	// stw r3,88(r29)
	PPC_STORE_U32(ctx.r29.u32 + 88, ctx.r3.u32);
	// bl 0x8253daa0
	ctx.lr = 0x822429EC;
	sub_8253DAA0(ctx, base);
	// lis r31,-31957
	ctx.r31.s64 = -2094333952;
	// lwz r11,20996(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20996);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82242a08
	if (!ctx.cr6.eq) goto loc_82242A08;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8254b578
	ctx.lr = 0x82242A04;
	sub_8254B578(ctx, base);
	// stw r3,20996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20996, ctx.r3.u32);
loc_82242A08:
	// addi r1,r1,2768
	ctx.r1.s64 = ctx.r1.s64 + 2768;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82242A10"))) PPC_WEAK_FUNC(sub_82242A10);
PPC_FUNC_IMPL(__imp__sub_82242A10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82242A18;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82242ad4
	if (ctx.cr6.eq) goto loc_82242AD4;
	// lwz r3,88(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8253d820
	ctx.lr = 0x82242A38;
	sub_8253D820(ctx, base);
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,88(r29)
	PPC_STORE_U32(ctx.r29.u32 + 88, ctx.r30.u32);
	// lwz r11,31080(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31080);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82242a58
	if (ctx.cr6.eq) goto loc_82242A58;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82242a5c
	goto loc_82242A5C;
loc_82242A58:
	// bl 0x8254abe0
	ctx.lr = 0x82242A5C;
	sub_8254ABE0(ctx, base);
loc_82242A5C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8254c5f0
	ctx.lr = 0x82242A68;
	sub_8254C5F0(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r31,r11,21417
	ctx.r31.s64 = ctx.r11.s64 + 21417;
	// lbz r11,31(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 31);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82242a9c
	if (!ctx.cr0.eq) goto loc_82242A9C;
	// lwz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82242a9c
	if (!ctx.cr6.eq) goto loc_82242A9C;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// bl 0x8254a690
	ctx.lr = 0x82242A9C;
	sub_8254A690(ctx, base);
loc_82242A9C:
	// lbz r11,92(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 92);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82242af8
	if (ctx.cr0.eq) goto loc_82242AF8;
	// lwz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82242af8
	if (!ctx.cr6.eq) goto loc_82242AF8;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// bl 0x8254a690
	ctx.lr = 0x82242AD0;
	sub_8254A690(ctx, base);
	// b 0x82242af8
	goto loc_82242AF8;
loc_82242AD4:
	// lis r31,-31957
	ctx.r31.s64 = -2094333952;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,20996(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20996);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82242af4
	if (ctx.cr6.eq) goto loc_82242AF4;
	// bl 0x8254b5f8
	ctx.lr = 0x82242AEC;
	sub_8254B5F8(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,20996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20996, ctx.r30.u32);
loc_82242AF4:
	// stw r30,88(r29)
	PPC_STORE_U32(ctx.r29.u32 + 88, ctx.r30.u32);
loc_82242AF8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82242B00"))) PPC_WEAK_FUNC(sub_82242B00);
PPC_FUNC_IMPL(__imp__sub_82242B00) {
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
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r31,r11,29832
	ctx.r31.s64 = ctx.r11.s64 + 29832;
	// lwz r11,29824(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29824);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82242b38
	if (!ctx.cr0.eq) goto loc_82242B38;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,29824(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29824, ctx.r11.u32);
	// stb r9,528(r31)
	PPC_STORE_U8(ctx.r31.u32 + 528, ctx.r9.u8);
loc_82242B38:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lis r5,2048
	ctx.r5.s64 = 134217728;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// bl 0x826b0910
	ctx.lr = 0x82242B48;
	sub_826B0910(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stb r11,528(r31)
	PPC_STORE_U8(ctx.r31.u32 + 528, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82242B68"))) PPC_WEAK_FUNC(sub_82242B68);
PPC_FUNC_IMPL(__imp__sub_82242B68) {
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
	// beq cr6,0x82242b98
	if (ctx.cr6.eq) goto loc_82242B98;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82242bc0
	ctx.lr = 0x82242B90;
	sub_82242BC0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82691540
	ctx.lr = 0x82242B98;
	sub_82691540(ctx, base);
loc_82242B98:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82242BBC"))) PPC_WEAK_FUNC(sub_82242BBC);
PPC_FUNC_IMPL(__imp__sub_82242BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82242BC0"))) PPC_WEAK_FUNC(sub_82242BC0);
PPC_FUNC_IMPL(__imp__sub_82242BC0) {
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
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82242c04
	if (ctx.cr6.eq) goto loc_82242C04;
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
loc_82242BE4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82242bf4
	if (ctx.cr6.eq) goto loc_82242BF4;
	// bl 0x82241d18
	ctx.lr = 0x82242BF4;
	sub_82241D18(ctx, base);
loc_82242BF4:
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82242be4
	if (!ctx.cr6.eq) goto loc_82242BE4;
loc_82242C04:
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

__attribute__((alias("__imp__sub_82242C1C"))) PPC_WEAK_FUNC(sub_82242C1C);
PPC_FUNC_IMPL(__imp__sub_82242C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82242C20"))) PPC_WEAK_FUNC(sub_82242C20);
PPC_FUNC_IMPL(__imp__sub_82242C20) {
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r3,292
	ctx.r3.s64 = ctx.r3.s64 + 292;
	// addi r11,r11,32200
	ctx.r11.s64 = ctx.r11.s64 + 32200;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82243198
	ctx.lr = 0x82242C50;
	sub_82243198(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82242c60
	if (ctx.cr0.eq) goto loc_82242C60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x82242C60;
	sub_82691540(ctx, base);
loc_82242C60:
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

__attribute__((alias("__imp__sub_82242C7C"))) PPC_WEAK_FUNC(sub_82242C7C);
PPC_FUNC_IMPL(__imp__sub_82242C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82242C80"))) PPC_WEAK_FUNC(sub_82242C80);
PPC_FUNC_IMPL(__imp__sub_82242C80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82242C88;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,21(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 21);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// b 0x82242cd0
	goto loc_82242CD0;
loc_82242CA0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82242c80
	ctx.lr = 0x82242CAC;
	sub_82242C80(ctx, base);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82279d18
	ctx.lr = 0x82242CB4;
	sub_82279D18(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82242CC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,21(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82242CD0:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82242ca0
	if (ctx.cr0.eq) goto loc_82242CA0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82242CE0"))) PPC_WEAK_FUNC(sub_82242CE0);
PPC_FUNC_IMPL(__imp__sub_82242CE0) {
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
	// bl 0x82242c80
	ctx.lr = 0x82242D00;
	sub_82242C80(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82242D34"))) PPC_WEAK_FUNC(sub_82242D34);
PPC_FUNC_IMPL(__imp__sub_82242D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82242D38"))) PPC_WEAK_FUNC(sub_82242D38);
PPC_FUNC_IMPL(__imp__sub_82242D38) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stb r10,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82242D4C"))) PPC_WEAK_FUNC(sub_82242D4C);
PPC_FUNC_IMPL(__imp__sub_82242D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82242D50"))) PPC_WEAK_FUNC(sub_82242D50);
PPC_FUNC_IMPL(__imp__sub_82242D50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82242D58;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,21(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 21);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r5,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82242d80
	if (ctx.cr0.eq) goto loc_82242D80;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,32172
	ctx.r3.s64 = ctx.r11.s64 + 32172;
	// bl 0x82fa0680
	ctx.lr = 0x82242D80;
	sub_82FA0680(ctx, base);
loc_82242D80:
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x8285aa38
	ctx.lr = 0x82242D8C;
	sub_8285AA38(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r25,196(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// beq 0x82242da8
	if (ctx.cr0.eq) goto loc_82242DA8;
	// lwz r28,8(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// b 0x82242dcc
	goto loc_82242DCC;
loc_82242DA8:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lbz r10,21(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 21);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82242dc0
	if (ctx.cr0.eq) goto loc_82242DC0;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// b 0x82242dcc
	goto loc_82242DCC;
loc_82242DC0:
	// lwz r28,8(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplw cr6,r25,r26
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82242ea4
	if (!ctx.cr6.eq) goto loc_82242EA4;
loc_82242DCC:
	// lbz r11,21(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 21);
	// lwz r31,4(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82242de0
	if (!ctx.cr0.eq) goto loc_82242DE0;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_82242DE0:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82242df8
	if (!ctx.cr6.eq) goto loc_82242DF8;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// b 0x82242e10
	goto loc_82242E10;
loc_82242DF8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82242e0c
	if (!ctx.cr6.eq) goto loc_82242E0C;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// b 0x82242e10
	goto loc_82242E10;
loc_82242E0C:
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
loc_82242E10:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82242e58
	if (!ctx.cr6.eq) goto loc_82242E58;
	// lbz r11,21(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 21);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82242e34
	if (ctx.cr0.eq) goto loc_82242E34;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x82242e54
	goto loc_82242E54;
loc_82242E34:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// b 0x82242e48
	goto loc_82242E48;
loc_82242E40:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82242E48:
	// lbz r8,21(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x82242e40
	if (ctx.cr0.eq) goto loc_82242E40;
loc_82242E54:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_82242E58:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82242f38
	if (!ctx.cr6.eq) goto loc_82242F38;
	// lbz r11,21(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 21);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82242e7c
	if (ctx.cr0.eq) goto loc_82242E7C;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x82242e9c
	goto loc_82242E9C;
loc_82242E7C:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// b 0x82242e90
	goto loc_82242E90;
loc_82242E88:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_82242E90:
	// lbz r8,21(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x82242e88
	if (ctx.cr0.eq) goto loc_82242E88;
loc_82242E9C:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x82242f38
	goto loc_82242F38;
loc_82242EA4:
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82242ec4
	if (!ctx.cr6.eq) goto loc_82242EC4;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// b 0x82242eec
	goto loc_82242EEC;
loc_82242EC4:
	// lbz r11,21(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 21);
	// lwz r31,4(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82242ed8
	if (!ctx.cr0.eq) goto loc_82242ED8;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_82242ED8:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r11,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r11.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
loc_82242EEC:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82242f04
	if (!ctx.cr6.eq) goto loc_82242F04;
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// b 0x82242f20
	goto loc_82242F20;
loc_82242F04:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82242f1c
	if (!ctx.cr6.eq) goto loc_82242F1C;
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// b 0x82242f20
	goto loc_82242F20;
loc_82242F1C:
	// stw r25,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
loc_82242F20:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// lbz r11,20(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 20);
	// lbz r10,20(r26)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r26.u32 + 20);
	// stb r10,20(r25)
	PPC_STORE_U8(ctx.r25.u32 + 20, ctx.r10.u8);
	// stb r11,20(r26)
	PPC_STORE_U8(ctx.r26.u32 + 20, ctx.r11.u8);
loc_82242F38:
	// lbz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 20);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x822430d0
	if (!ctx.cr6.eq) goto loc_822430D0;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822430cc
	if (ctx.cr6.eq) goto loc_822430CC;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82242F5C:
	// lbz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 20);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x822430cc
	if (!ctx.cr6.eq) goto loc_822430CC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82243014
	if (!ctx.cr6.eq) goto loc_82243014;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82242f9c
	if (!ctx.cr0.eq) goto loc_82242F9C;
	// stb r30,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r30.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r29,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r29.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8254b510
	ctx.lr = 0x82242F98;
	sub_8254B510(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82242F9C:
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82243068
	if (!ctx.cr0.eq) goto loc_82243068;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82242fc8
	if (!ctx.cr6.eq) goto loc_82242FC8;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,20(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 20);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// beq cr6,0x82243064
	if (ctx.cr6.eq) goto loc_82243064;
loc_82242FC8:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,20(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 20);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82242ff0
	if (!ctx.cr6.eq) goto loc_82242FF0;
	// stb r30,20(r10)
	PPC_STORE_U8(ctx.r10.u32 + 20, ctx.r30.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r29,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r29.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8285da70
	ctx.lr = 0x82242FEC;
	sub_8285DA70(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82242FF0:
	// lbz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r10.u8);
	// stb r30,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r30.u8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stb r30,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r30.u8);
	// bl 0x8254b510
	ctx.lr = 0x82243010;
	sub_8254B510(ctx, base);
	// b 0x822430cc
	goto loc_822430CC;
loc_82243014:
	// lbz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82243038
	if (!ctx.cr0.eq) goto loc_82243038;
	// stb r30,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r30.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r29,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r29.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8285da70
	ctx.lr = 0x82243034;
	sub_8285DA70(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82243038:
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82243068
	if (!ctx.cr0.eq) goto loc_82243068;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82243084
	if (!ctx.cr6.eq) goto loc_82243084;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,20(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 20);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82243084
	if (!ctx.cr6.eq) goto loc_82243084;
loc_82243064:
	// stb r29,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r29.u8);
loc_82243068:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82242f5c
	if (!ctx.cr6.eq) goto loc_82242F5C;
	// b 0x822430cc
	goto loc_822430CC;
loc_82243084:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,20(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 20);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x822430ac
	if (!ctx.cr6.eq) goto loc_822430AC;
	// stb r30,20(r10)
	PPC_STORE_U8(ctx.r10.u32 + 20, ctx.r30.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r29,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r29.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8254b510
	ctx.lr = 0x822430A8;
	sub_8254B510(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_822430AC:
	// lbz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r10.u8);
	// stb r30,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r30.u8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r30,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r30.u8);
	// bl 0x8285da70
	ctx.lr = 0x822430CC;
	sub_8285DA70(ctx, base);
loc_822430CC:
	// stb r30,20(r28)
	PPC_STORE_U8(ctx.r28.u32 + 20, ctx.r30.u8);
loc_822430D0:
	// bl 0x82279d18
	ctx.lr = 0x822430D4;
	sub_82279D18(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822430E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822430fc
	if (ctx.cr6.eq) goto loc_822430FC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
loc_822430FC:
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

__attribute__((alias("__imp__sub_8224310C"))) PPC_WEAK_FUNC(sub_8224310C);
PPC_FUNC_IMPL(__imp__sub_8224310C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82243110"))) PPC_WEAK_FUNC(sub_82243110);
PPC_FUNC_IMPL(__imp__sub_82243110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82243118;
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
	// bne cr6,0x8224317c
	if (!ctx.cr6.eq) goto loc_8224317C;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8224317c
	if (!ctx.cr6.eq) goto loc_8224317C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82242ce0
	ctx.lr = 0x8224314C;
	sub_82242CE0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x82243188
	goto loc_82243188;
loc_8224315C:
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x8285aa38
	ctx.lr = 0x82243168;
	sub_8285AA38(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82242d50
	ctx.lr = 0x82243178;
	sub_82242D50(ctx, base);
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
loc_8224317C:
	// cmplw cr6,r5,r30
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8224315c
	if (!ctx.cr6.eq) goto loc_8224315C;
	// stw r5,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r5.u32);
loc_82243188:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82243194"))) PPC_WEAK_FUNC(sub_82243194);
PPC_FUNC_IMPL(__imp__sub_82243194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82243198"))) PPC_WEAK_FUNC(sub_82243198);
PPC_FUNC_IMPL(__imp__sub_82243198) {
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
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82243110
	ctx.lr = 0x822431C0;
	sub_82243110(ctx, base);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82279d18
	ctx.lr = 0x822431C8;
	sub_82279D18(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822431DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_822431F0"))) PPC_WEAK_FUNC(sub_822431F0);
PPC_FUNC_IMPL(__imp__sub_822431F0) {
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
	// bl 0x8254d8c0
	ctx.lr = 0x82243200;
	sub_8254D8C0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x828e35c0
	ctx.lr = 0x82243208;
	sub_828E35C0(ctx, base);
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r9,-28148
	ctx.r9.s64 = ctx.r9.s64 + -28148;
	// addi r10,r10,7040
	ctx.r10.s64 = ctx.r10.s64 + 7040;
	// stb r11,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, ctx.r11.u8);
	// li r8,29
	ctx.r8.s64 = 29;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x828f5070
	ctx.lr = 0x8224323C;
	sub_828F5070(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224324C"))) PPC_WEAK_FUNC(sub_8224324C);
PPC_FUNC_IMPL(__imp__sub_8224324C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82243250"))) PPC_WEAK_FUNC(sub_82243250);
PPC_FUNC_IMPL(__imp__sub_82243250) {
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
	// cmplwi cr6,r5,33
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 33, ctx.xer);
	// bge cr6,0x82243274
	if (!ctx.cr6.lt) goto loc_82243274;
	// bl 0x8254db68
	ctx.lr = 0x82243270;
	sub_8254DB68(ctx, base);
	// b 0x822432e8
	goto loc_822432E8;
loc_82243274:
	// beq cr6,0x822432d8
	if (ctx.cr6.eq) goto loc_822432D8;
	// cmplwi cr6,r5,34
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 34, ctx.xer);
	// beq cr6,0x822432cc
	if (ctx.cr6.eq) goto loc_822432CC;
	// cmplwi cr6,r5,35
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 35, ctx.xer);
	// beq cr6,0x822432c0
	if (ctx.cr6.eq) goto loc_822432C0;
	// cmplwi cr6,r5,36
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 36, ctx.xer);
	// beq cr6,0x822432b4
	if (ctx.cr6.eq) goto loc_822432B4;
	// cmplwi cr6,r5,37
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 37, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x822432a8
	if (ctx.cr6.eq) goto loc_822432A8;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r4,r11,32570
	ctx.r4.s64 = ctx.r11.s64 + 32570;
	// b 0x822432e4
	goto loc_822432E4;
loc_822432A8:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r4,r11,32524
	ctx.r4.s64 = ctx.r11.s64 + 32524;
	// b 0x822432e4
	goto loc_822432E4;
loc_822432B4:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r4,r11,32432
	ctx.r4.s64 = ctx.r11.s64 + 32432;
	// b 0x822432e0
	goto loc_822432E0;
loc_822432C0:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r4,r11,32336
	ctx.r4.s64 = ctx.r11.s64 + 32336;
	// b 0x822432e0
	goto loc_822432E0;
loc_822432CC:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r4,r11,32272
	ctx.r4.s64 = ctx.r11.s64 + 32272;
	// b 0x822432e0
	goto loc_822432E0;
loc_822432D8:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r4,r11,32228
	ctx.r4.s64 = ctx.r11.s64 + 32228;
loc_822432E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_822432E4:
	// bl 0x822400d8
	ctx.lr = 0x822432E8;
	sub_822400D8(ctx, base);
loc_822432E8:
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

__attribute__((alias("__imp__sub_82243300"))) PPC_WEAK_FUNC(sub_82243300);
PPC_FUNC_IMPL(__imp__sub_82243300) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,-31932
	ctx.r11.s64 = ctx.r11.s64 + -31932;
	// addi r10,r10,-29824
	ctx.r10.s64 = ctx.r10.s64 + -29824;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,52
	ctx.r3.s64 = ctx.r3.s64 + 52;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// bl 0x828cd0d8
	ctx.lr = 0x82243334;
	sub_828CD0D8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-32104
	ctx.r11.s64 = ctx.r11.s64 + -32104;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828c0bf0
	ctx.lr = 0x82243348;
	sub_828C0BF0(ctx, base);
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

__attribute__((alias("__imp__sub_8224335C"))) PPC_WEAK_FUNC(sub_8224335C);
PPC_FUNC_IMPL(__imp__sub_8224335C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82243360"))) PPC_WEAK_FUNC(sub_82243360);
PPC_FUNC_IMPL(__imp__sub_82243360) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,-31948
	ctx.r11.s64 = ctx.r11.s64 + -31948;
	// addi r10,r10,-29680
	ctx.r10.s64 = ctx.r10.s64 + -29680;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,72
	ctx.r3.s64 = ctx.r3.s64 + 72;
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// bl 0x828d2b18
	ctx.lr = 0x82243394;
	sub_828D2B18(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-29872
	ctx.r11.s64 = ctx.r11.s64 + -29872;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828cc810
	ctx.lr = 0x822433A8;
	sub_828CC810(ctx, base);
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

__attribute__((alias("__imp__sub_822433BC"))) PPC_WEAK_FUNC(sub_822433BC);
PPC_FUNC_IMPL(__imp__sub_822433BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822433C0"))) PPC_WEAK_FUNC(sub_822433C0);
PPC_FUNC_IMPL(__imp__sub_822433C0) {
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
	// bl 0x82243300
	ctx.lr = 0x822433E0;
	sub_82243300(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822433f0
	if (ctx.cr0.eq) goto loc_822433F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x822433F0;
	sub_82691540(ctx, base);
loc_822433F0:
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

__attribute__((alias("__imp__sub_8224340C"))) PPC_WEAK_FUNC(sub_8224340C);
PPC_FUNC_IMPL(__imp__sub_8224340C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82243410"))) PPC_WEAK_FUNC(sub_82243410);
PPC_FUNC_IMPL(__imp__sub_82243410) {
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
	// bl 0x82243360
	ctx.lr = 0x82243430;
	sub_82243360(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82243440
	if (ctx.cr0.eq) goto loc_82243440;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x82243440;
	sub_82691540(ctx, base);
loc_82243440:
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

__attribute__((alias("__imp__sub_8224345C"))) PPC_WEAK_FUNC(sub_8224345C);
PPC_FUNC_IMPL(__imp__sub_8224345C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82243460"))) PPC_WEAK_FUNC(sub_82243460);
PPC_FUNC_IMPL(__imp__sub_82243460) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-32104
	ctx.r11.s64 = ctx.r11.s64 + -32104;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x828c0bf0
	ctx.lr = 0x8224348C;
	sub_828C0BF0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224349c
	if (ctx.cr0.eq) goto loc_8224349C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x8224349C;
	sub_82691540(ctx, base);
loc_8224349C:
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

__attribute__((alias("__imp__sub_822434B8"))) PPC_WEAK_FUNC(sub_822434B8);
PPC_FUNC_IMPL(__imp__sub_822434B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,704(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 704);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822434C0"))) PPC_WEAK_FUNC(sub_822434C0);
PPC_FUNC_IMPL(__imp__sub_822434C0) {
	PPC_FUNC_PROLOGUE();
	// li r3,32
	ctx.r3.s64 = 32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822434C8"))) PPC_WEAK_FUNC(sub_822434C8);
PPC_FUNC_IMPL(__imp__sub_822434C8) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-32072
	ctx.r11.s64 = ctx.r11.s64 + -32072;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x828dcd58
	ctx.lr = 0x822434F4;
	sub_828DCD58(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82243504
	if (ctx.cr0.eq) goto loc_82243504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x82243504;
	sub_82691540(ctx, base);
loc_82243504:
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

__attribute__((alias("__imp__sub_82243520"))) PPC_WEAK_FUNC(sub_82243520);
PPC_FUNC_IMPL(__imp__sub_82243520) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-31920
	ctx.r11.s64 = ctx.r11.s64 + -31920;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r3,776(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 776);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82243560
	if (ctx.cr6.eq) goto loc_82243560;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82243560;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82243560:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-32072
	ctx.r11.s64 = ctx.r11.s64 + -32072;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828dcd58
	ctx.lr = 0x82243574;
	sub_828DCD58(ctx, base);
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

__attribute__((alias("__imp__sub_82243588"))) PPC_WEAK_FUNC(sub_82243588);
PPC_FUNC_IMPL(__imp__sub_82243588) {
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
	// bl 0x82243520
	ctx.lr = 0x822435A8;
	sub_82243520(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822435b8
	if (ctx.cr0.eq) goto loc_822435B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x822435B8;
	sub_82691540(ctx, base);
loc_822435B8:
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

__attribute__((alias("__imp__sub_822435D4"))) PPC_WEAK_FUNC(sub_822435D4);
PPC_FUNC_IMPL(__imp__sub_822435D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822435D8"))) PPC_WEAK_FUNC(sub_822435D8);
PPC_FUNC_IMPL(__imp__sub_822435D8) {
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
	// addi r3,r3,120
	ctx.r3.s64 = ctx.r3.s64 + 120;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82247ec0
	ctx.lr = 0x822435FC;
	sub_82247EC0(ctx, base);
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x82247ec0
	ctx.lr = 0x82243604;
	sub_82247EC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828dd378
	ctx.lr = 0x8224360C;
	sub_828DD378(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224361c
	if (ctx.cr0.eq) goto loc_8224361C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x8224361C;
	sub_82691540(ctx, base);
loc_8224361C:
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

__attribute__((alias("__imp__sub_82243638"))) PPC_WEAK_FUNC(sub_82243638);
PPC_FUNC_IMPL(__imp__sub_82243638) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-31724
	ctx.r11.s64 = ctx.r11.s64 + -31724;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82243300
	ctx.lr = 0x82243664;
	sub_82243300(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82243674
	if (ctx.cr0.eq) goto loc_82243674;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x82243674;
	sub_82691540(ctx, base);
loc_82243674:
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

__attribute__((alias("__imp__sub_82243690"))) PPC_WEAK_FUNC(sub_82243690);
PPC_FUNC_IMPL(__imp__sub_82243690) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-31740
	ctx.r11.s64 = ctx.r11.s64 + -31740;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82243360
	ctx.lr = 0x822436BC;
	sub_82243360(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822436cc
	if (ctx.cr0.eq) goto loc_822436CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x822436CC;
	sub_82691540(ctx, base);
loc_822436CC:
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

__attribute__((alias("__imp__sub_822436E8"))) PPC_WEAK_FUNC(sub_822436E8);
PPC_FUNC_IMPL(__imp__sub_822436E8) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-31676
	ctx.r11.s64 = ctx.r11.s64 + -31676;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224dae0
	ctx.lr = 0x82243714;
	sub_8224DAE0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82243724
	if (ctx.cr0.eq) goto loc_82243724;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x82243724;
	sub_82691540(ctx, base);
loc_82243724:
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

__attribute__((alias("__imp__sub_82243740"))) PPC_WEAK_FUNC(sub_82243740);
PPC_FUNC_IMPL(__imp__sub_82243740) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-31692
	ctx.r11.s64 = ctx.r11.s64 + -31692;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224d738
	ctx.lr = 0x8224376C;
	sub_8224D738(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224377c
	if (ctx.cr0.eq) goto loc_8224377C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x8224377C;
	sub_82691540(ctx, base);
loc_8224377C:
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

__attribute__((alias("__imp__sub_82243798"))) PPC_WEAK_FUNC(sub_82243798);
PPC_FUNC_IMPL(__imp__sub_82243798) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,-31652
	ctx.r11.s64 = ctx.r11.s64 + -31652;
	// addi r30,r10,-27640
	ctx.r30.s64 = ctx.r10.s64 + -27640;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,940
	ctx.r3.s64 = ctx.r3.s64 + 940;
	// stw r30,940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 940, ctx.r30.u32);
	// bl 0x828cd0d8
	ctx.lr = 0x822437D0;
	sub_828CD0D8(ctx, base);
	// stw r30,852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 852, ctx.r30.u32);
	// addi r3,r31,852
	ctx.r3.s64 = ctx.r31.s64 + 852;
	// bl 0x828cd0d8
	ctx.lr = 0x822437DC;
	sub_828CD0D8(ctx, base);
	// stw r30,764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 764, ctx.r30.u32);
	// addi r3,r31,764
	ctx.r3.s64 = ctx.r31.s64 + 764;
	// bl 0x828cd0d8
	ctx.lr = 0x822437E8;
	sub_828CD0D8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-31676
	ctx.r11.s64 = ctx.r11.s64 + -31676;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8224dae0
	ctx.lr = 0x822437FC;
	sub_8224DAE0(ctx, base);
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

__attribute__((alias("__imp__sub_82243814"))) PPC_WEAK_FUNC(sub_82243814);
PPC_FUNC_IMPL(__imp__sub_82243814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82243818"))) PPC_WEAK_FUNC(sub_82243818);
PPC_FUNC_IMPL(__imp__sub_82243818) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,-31668
	ctx.r11.s64 = ctx.r11.s64 + -31668;
	// addi r30,r10,-29744
	ctx.r30.s64 = ctx.r10.s64 + -29744;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,912
	ctx.r3.s64 = ctx.r3.s64 + 912;
	// stw r30,912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 912, ctx.r30.u32);
	// bl 0x828d2b18
	ctx.lr = 0x82243850;
	sub_828D2B18(ctx, base);
	// stw r30,828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 828, ctx.r30.u32);
	// addi r3,r31,828
	ctx.r3.s64 = ctx.r31.s64 + 828;
	// bl 0x828d2b18
	ctx.lr = 0x8224385C;
	sub_828D2B18(ctx, base);
	// stw r30,744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 744, ctx.r30.u32);
	// addi r3,r31,744
	ctx.r3.s64 = ctx.r31.s64 + 744;
	// bl 0x828d2b18
	ctx.lr = 0x82243868;
	sub_828D2B18(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-31692
	ctx.r11.s64 = ctx.r11.s64 + -31692;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8224d738
	ctx.lr = 0x8224387C;
	sub_8224D738(ctx, base);
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

__attribute__((alias("__imp__sub_82243894"))) PPC_WEAK_FUNC(sub_82243894);
PPC_FUNC_IMPL(__imp__sub_82243894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82243898"))) PPC_WEAK_FUNC(sub_82243898);
PPC_FUNC_IMPL(__imp__sub_82243898) {
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
	// bl 0x82243798
	ctx.lr = 0x822438B8;
	sub_82243798(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822438c8
	if (ctx.cr0.eq) goto loc_822438C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x822438C8;
	sub_82691540(ctx, base);
loc_822438C8:
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

__attribute__((alias("__imp__sub_822438E4"))) PPC_WEAK_FUNC(sub_822438E4);
PPC_FUNC_IMPL(__imp__sub_822438E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822438E8"))) PPC_WEAK_FUNC(sub_822438E8);
PPC_FUNC_IMPL(__imp__sub_822438E8) {
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
	// bl 0x82243818
	ctx.lr = 0x82243908;
	sub_82243818(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82243918
	if (ctx.cr0.eq) goto loc_82243918;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x82243918;
	sub_82691540(ctx, base);
loc_82243918:
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

__attribute__((alias("__imp__sub_82243934"))) PPC_WEAK_FUNC(sub_82243934);
PPC_FUNC_IMPL(__imp__sub_82243934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82243938"))) PPC_WEAK_FUNC(sub_82243938);
PPC_FUNC_IMPL(__imp__sub_82243938) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,-31556
	ctx.r11.s64 = ctx.r11.s64 + -31556;
	// addi r10,r10,-27640
	ctx.r10.s64 = ctx.r10.s64 + -27640;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,364
	ctx.r3.s64 = ctx.r3.s64 + 364;
	// stw r10,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r10.u32);
	// bl 0x828cd0d8
	ctx.lr = 0x82243970;
	sub_828CD0D8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,260
	ctx.r3.s64 = ctx.r31.s64 + 260;
	// addi r30,r11,-25620
	ctx.r30.s64 = ctx.r11.s64 + -25620;
	// stw r30,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r30.u32);
	// bl 0x828cd0d8
	ctx.lr = 0x82243984;
	sub_828CD0D8(ctx, base);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// bl 0x828cd0d8
	ctx.lr = 0x82243990;
	sub_828CD0D8(ctx, base);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x828cd0d8
	ctx.lr = 0x8224399C;
	sub_828CD0D8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-32104
	ctx.r11.s64 = ctx.r11.s64 + -32104;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828c0bf0
	ctx.lr = 0x822439B0;
	sub_828C0BF0(ctx, base);
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

__attribute__((alias("__imp__sub_822439C8"))) PPC_WEAK_FUNC(sub_822439C8);
PPC_FUNC_IMPL(__imp__sub_822439C8) {
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
	// bl 0x828c1100
	ctx.lr = 0x822439E4;
	sub_828C1100(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// addi r11,r11,-31644
	ctx.r11.s64 = ctx.r11.s64 + -31644;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828d2d28
	ctx.lr = 0x822439FC;
	sub_828D2D28(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// addi r30,r11,-29808
	ctx.r30.s64 = ctx.r11.s64 + -29808;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// bl 0x828d2d28
	ctx.lr = 0x82243A14;
	sub_828D2D28(ctx, base);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// addi r30,r31,240
	ctx.r30.s64 = ctx.r31.s64 + 240;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828d2d28
	ctx.lr = 0x82243A28;
	sub_828D2D28(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// addi r11,r11,29064
	ctx.r11.s64 = ctx.r11.s64 + 29064;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// stw r11,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r10,-31624
	ctx.r10.s64 = ctx.r10.s64 + -31624;
	// addi r11,r9,-31560
	ctx.r11.s64 = ctx.r9.s64 + -31560;
	// stw r8,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r8.u32);
	// stw r10,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r10.u32);
	// addi r3,r31,336
	ctx.r3.s64 = ctx.r31.s64 + 336;
	// stw r11,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828d2d28
	ctx.lr = 0x82243A64;
	sub_828D2D28(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-29744
	ctx.r11.s64 = ctx.r11.s64 + -29744;
	// stw r11,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82243A8C"))) PPC_WEAK_FUNC(sub_82243A8C);
PPC_FUNC_IMPL(__imp__sub_82243A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82243A90"))) PPC_WEAK_FUNC(sub_82243A90);
PPC_FUNC_IMPL(__imp__sub_82243A90) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,-31644
	ctx.r11.s64 = ctx.r11.s64 + -31644;
	// addi r10,r10,-29744
	ctx.r10.s64 = ctx.r10.s64 + -29744;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,336
	ctx.r3.s64 = ctx.r3.s64 + 336;
	// stw r10,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r10.u32);
	// bl 0x828d2b18
	ctx.lr = 0x82243AC8;
	sub_828D2B18(ctx, base);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r30,r10,-29808
	ctx.r30.s64 = ctx.r10.s64 + -29808;
	// addi r11,r11,29064
	ctx.r11.s64 = ctx.r11.s64 + 29064;
	// stw r30,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r30.u32);
	// addi r3,r31,240
	ctx.r3.s64 = ctx.r31.s64 + 240;
	// stw r11,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// bl 0x828d2b18
	ctx.lr = 0x82243AE8;
	sub_828D2B18(ctx, base);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// bl 0x828d2b18
	ctx.lr = 0x82243AF4;
	sub_828D2B18(ctx, base);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x828d2b18
	ctx.lr = 0x82243B00;
	sub_828D2B18(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-29872
	ctx.r11.s64 = ctx.r11.s64 + -29872;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828cc810
	ctx.lr = 0x82243B14;
	sub_828CC810(ctx, base);
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

__attribute__((alias("__imp__sub_82243B2C"))) PPC_WEAK_FUNC(sub_82243B2C);
PPC_FUNC_IMPL(__imp__sub_82243B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82243B30"))) PPC_WEAK_FUNC(sub_82243B30);
PPC_FUNC_IMPL(__imp__sub_82243B30) {
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
	// bl 0x82243938
	ctx.lr = 0x82243B50;
	sub_82243938(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82243b60
	if (ctx.cr0.eq) goto loc_82243B60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x82243B60;
	sub_82691540(ctx, base);
loc_82243B60:
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

__attribute__((alias("__imp__sub_82243B7C"))) PPC_WEAK_FUNC(sub_82243B7C);
PPC_FUNC_IMPL(__imp__sub_82243B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82243B80"))) PPC_WEAK_FUNC(sub_82243B80);
PPC_FUNC_IMPL(__imp__sub_82243B80) {
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
	// bl 0x82243a90
	ctx.lr = 0x82243BA0;
	sub_82243A90(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82243bb0
	if (ctx.cr0.eq) goto loc_82243BB0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x82243BB0;
	sub_82691540(ctx, base);
loc_82243BB0:
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

__attribute__((alias("__imp__sub_82243BCC"))) PPC_WEAK_FUNC(sub_82243BCC);
PPC_FUNC_IMPL(__imp__sub_82243BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82243BD0"))) PPC_WEAK_FUNC(sub_82243BD0);
PPC_FUNC_IMPL(__imp__sub_82243BD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82243BD8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828c0bb8
	ctx.lr = 0x82243BE8;
	sub_828C0BB8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// addi r11,r11,-31336
	ctx.r11.s64 = ctx.r11.s64 + -31336;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82252ae8
	ctx.lr = 0x82243C00;
	sub_82252AE8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r11,r11,-31328
	ctx.r11.s64 = ctx.r11.s64 + -31328;
	// li r29,7
	ctx.r29.s64 = 7;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// li r3,5
	ctx.r3.s64 = 5;
	// stw r29,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r29.u32);
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// bl 0x82691500
	ctx.lr = 0x82243C24;
	sub_82691500(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r3,r31,140
	ctx.r3.s64 = ctx.r31.s64 + 140;
	// addi r10,r10,-31456
	ctx.r10.s64 = ctx.r10.s64 + -31456;
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r30,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r30.u8);
	// stb r30,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r30.u8);
	// stb r30,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r30.u8);
	// stb r30,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r30.u8);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// bl 0x82252ae8
	ctx.lr = 0x82243C5C;
	sub_82252AE8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r26,3
	ctx.r26.s64 = 3;
	// stw r29,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r29.u32);
	// addi r11,r11,-31368
	ctx.r11.s64 = ctx.r11.s64 + -31368;
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// stw r26,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r26.u32);
	// addi r27,r31,228
	ctx.r27.s64 = ctx.r31.s64 + 228;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// li r28,19
	ctx.r28.s64 = 19;
loc_82243C80:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82244018
	ctx.lr = 0x82243C88;
	sub_82244018(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r27,r27,88
	ctx.r27.s64 = ctx.r27.s64 + 88;
	// bge 0x82243c80
	if (!ctx.cr0.lt) goto loc_82243C80;
	// addi r3,r31,1988
	ctx.r3.s64 = ctx.r31.s64 + 1988;
	// bl 0x82252328
	ctx.lr = 0x82243C9C;
	sub_82252328(ctx, base);
	// addi r3,r31,2076
	ctx.r3.s64 = ctx.r31.s64 + 2076;
	// bl 0x82252328
	ctx.lr = 0x82243CA4;
	sub_82252328(ctx, base);
	// addi r3,r31,2164
	ctx.r3.s64 = ctx.r31.s64 + 2164;
	// bl 0x8224d6d0
	ctx.lr = 0x82243CAC;
	sub_8224D6D0(ctx, base);
	// addi r3,r31,2268
	ctx.r3.s64 = ctx.r31.s64 + 2268;
	// bl 0x8224d6d0
	ctx.lr = 0x82243CB4;
	sub_8224D6D0(ctx, base);
	// addi r3,r31,2372
	ctx.r3.s64 = ctx.r31.s64 + 2372;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82252ae8
	ctx.lr = 0x82243CC0;
	sub_82252AE8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stw r29,2380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2380, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-31312
	ctx.r11.s64 = ctx.r11.s64 + -31312;
	// stw r26,2388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2388, ctx.r26.u32);
	// stw r30,2384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2384, ctx.r30.u32);
	// stw r11,2372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2372, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82243CE4"))) PPC_WEAK_FUNC(sub_82243CE4);
PPC_FUNC_IMPL(__imp__sub_82243CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82243CE8"))) PPC_WEAK_FUNC(sub_82243CE8);
PPC_FUNC_IMPL(__imp__sub_82243CE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82243CF0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r10,r10,-31336
	ctx.r10.s64 = ctx.r10.s64 + -31336;
	// addi r30,r11,-31312
	ctx.r30.s64 = ctx.r11.s64 + -31312;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r3,r3,2372
	ctx.r3.s64 = ctx.r3.s64 + 2372;
	// stw r30,2372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2372, ctx.r30.u32);
	// bl 0x828cd0d8
	ctx.lr = 0x82243D18;
	sub_828CD0D8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,2268
	ctx.r3.s64 = ctx.r31.s64 + 2268;
	// addi r29,r11,-25620
	ctx.r29.s64 = ctx.r11.s64 + -25620;
	// stw r29,2268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2268, ctx.r29.u32);
	// bl 0x828cd0d8
	ctx.lr = 0x82243D2C;
	sub_828CD0D8(ctx, base);
	// stw r29,2164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2164, ctx.r29.u32);
	// addi r3,r31,2164
	ctx.r3.s64 = ctx.r31.s64 + 2164;
	// bl 0x828cd0d8
	ctx.lr = 0x82243D38;
	sub_828CD0D8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,2076
	ctx.r3.s64 = ctx.r31.s64 + 2076;
	// addi r29,r11,-27640
	ctx.r29.s64 = ctx.r11.s64 + -27640;
	// stw r29,2076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2076, ctx.r29.u32);
	// bl 0x828cd0d8
	ctx.lr = 0x82243D4C;
	sub_828CD0D8(ctx, base);
	// stw r29,1988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1988, ctx.r29.u32);
	// addi r3,r31,1988
	ctx.r3.s64 = ctx.r31.s64 + 1988;
	// bl 0x828cd0d8
	ctx.lr = 0x82243D58;
	sub_828CD0D8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r29,r31,1988
	ctx.r29.s64 = ctx.r31.s64 + 1988;
	// li r28,19
	ctx.r28.s64 = 19;
	// addi r27,r11,-31296
	ctx.r27.s64 = ctx.r11.s64 + -31296;
loc_82243D68:
	// stwu r27,-88(r29)
	ea = -88 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r29.u32 = ea;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828cd0d8
	ctx.lr = 0x82243D74;
	sub_828CD0D8(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bge 0x82243d68
	if (!ctx.cr0.lt) goto loc_82243D68;
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// addi r3,r31,140
	ctx.r3.s64 = ctx.r31.s64 + 140;
	// bl 0x828cd0d8
	ctx.lr = 0x82243D88;
	sub_828CD0D8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// addi r11,r11,-31328
	ctx.r11.s64 = ctx.r11.s64 + -31328;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// bl 0x828cd0d8
	ctx.lr = 0x82243D9C;
	sub_828CD0D8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-32104
	ctx.r11.s64 = ctx.r11.s64 + -32104;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828c0bf0
	ctx.lr = 0x82243DB0;
	sub_828C0BF0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82243DB8"))) PPC_WEAK_FUNC(sub_82243DB8);
PPC_FUNC_IMPL(__imp__sub_82243DB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82243DC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828c1100
	ctx.lr = 0x82243DCC;
	sub_828C1100(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// addi r11,r11,-31352
	ctx.r11.s64 = ctx.r11.s64 + -31352;
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828d2e40
	ctx.lr = 0x82243DE4;
	sub_828D2E40(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// addi r11,r11,-31440
	ctx.r11.s64 = ctx.r11.s64 + -31440;
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// bl 0x828d2e40
	ctx.lr = 0x82243DFC;
	sub_828D2E40(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r30,r31,240
	ctx.r30.s64 = ctx.r31.s64 + 240;
	// addi r11,r11,-31280
	ctx.r11.s64 = ctx.r11.s64 + -31280;
	// li r29,19
	ctx.r29.s64 = 19;
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r28,r11,-31528
	ctx.r28.s64 = ctx.r11.s64 + -31528;
loc_82243E18:
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828d2e40
	ctx.lr = 0x82243E24;
	sub_828D2E40(ctx, base);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,84
	ctx.r30.s64 = ctx.r30.s64 + 84;
	// bge 0x82243e18
	if (!ctx.cr0.lt) goto loc_82243E18;
	// addi r3,r31,1920
	ctx.r3.s64 = ctx.r31.s64 + 1920;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828d2d28
	ctx.lr = 0x82243E40;
	sub_828D2D28(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,2004
	ctx.r3.s64 = ctx.r31.s64 + 2004;
	// addi r30,r11,-29744
	ctx.r30.s64 = ctx.r11.s64 + -29744;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,1920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1920, ctx.r30.u32);
	// bl 0x828d2d28
	ctx.lr = 0x82243E58;
	sub_828D2D28(ctx, base);
	// stw r30,2004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2004, ctx.r30.u32);
	// addi r3,r31,2088
	ctx.r3.s64 = ctx.r31.s64 + 2088;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x828d2d28
	ctx.lr = 0x82243E68;
	sub_828D2D28(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,2172
	ctx.r3.s64 = ctx.r31.s64 + 2172;
	// addi r30,r11,-29808
	ctx.r30.s64 = ctx.r11.s64 + -29808;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r30,2088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2088, ctx.r30.u32);
	// bl 0x828d2d28
	ctx.lr = 0x82243E80;
	sub_828D2D28(ctx, base);
	// stw r30,2172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2172, ctx.r30.u32);
	// addi r3,r31,2256
	ctx.r3.s64 = ctx.r31.s64 + 2256;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x828d2e40
	ctx.lr = 0x82243E90;
	sub_828D2E40(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-31280
	ctx.r11.s64 = ctx.r11.s64 + -31280;
	// stw r11,2256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2256, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82243EA8"))) PPC_WEAK_FUNC(sub_82243EA8);
PPC_FUNC_IMPL(__imp__sub_82243EA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82243EB0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r10,r10,-31352
	ctx.r10.s64 = ctx.r10.s64 + -31352;
	// addi r30,r11,-31280
	ctx.r30.s64 = ctx.r11.s64 + -31280;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r3,r3,2256
	ctx.r3.s64 = ctx.r3.s64 + 2256;
	// stw r30,2256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2256, ctx.r30.u32);
	// bl 0x828d2b18
	ctx.lr = 0x82243ED8;
	sub_828D2B18(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,2172
	ctx.r3.s64 = ctx.r31.s64 + 2172;
	// addi r29,r11,-29808
	ctx.r29.s64 = ctx.r11.s64 + -29808;
	// stw r29,2172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2172, ctx.r29.u32);
	// bl 0x828d2b18
	ctx.lr = 0x82243EEC;
	sub_828D2B18(ctx, base);
	// stw r29,2088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2088, ctx.r29.u32);
	// addi r3,r31,2088
	ctx.r3.s64 = ctx.r31.s64 + 2088;
	// bl 0x828d2b18
	ctx.lr = 0x82243EF8;
	sub_828D2B18(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,2004
	ctx.r3.s64 = ctx.r31.s64 + 2004;
	// addi r29,r11,-29744
	ctx.r29.s64 = ctx.r11.s64 + -29744;
	// stw r29,2004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2004, ctx.r29.u32);
	// bl 0x828d2b18
	ctx.lr = 0x82243F0C;
	sub_828D2B18(ctx, base);
	// stw r29,1920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1920, ctx.r29.u32);
	// addi r3,r31,1920
	ctx.r3.s64 = ctx.r31.s64 + 1920;
	// bl 0x828d2b18
	ctx.lr = 0x82243F18;
	sub_828D2B18(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r29,r31,1920
	ctx.r29.s64 = ctx.r31.s64 + 1920;
	// li r28,19
	ctx.r28.s64 = 19;
	// addi r27,r11,-30712
	ctx.r27.s64 = ctx.r11.s64 + -30712;
loc_82243F28:
	// stwu r27,-84(r29)
	ea = -84 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r29.u32 = ea;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828d2b18
	ctx.lr = 0x82243F34;
	sub_828D2B18(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bge 0x82243f28
	if (!ctx.cr0.lt) goto loc_82243F28;
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// bl 0x828d2b18
	ctx.lr = 0x82243F48;
	sub_828D2B18(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// addi r11,r11,-31440
	ctx.r11.s64 = ctx.r11.s64 + -31440;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// bl 0x828d2b18
	ctx.lr = 0x82243F5C;
	sub_828D2B18(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-29872
	ctx.r11.s64 = ctx.r11.s64 + -29872;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828cc810
	ctx.lr = 0x82243F70;
	sub_828CC810(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82243F78"))) PPC_WEAK_FUNC(sub_82243F78);
PPC_FUNC_IMPL(__imp__sub_82243F78) {
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
	// bl 0x82243ce8
	ctx.lr = 0x82243F98;
	sub_82243CE8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82243fa8
	if (ctx.cr0.eq) goto loc_82243FA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x82243FA8;
	sub_82691540(ctx, base);
loc_82243FA8:
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

__attribute__((alias("__imp__sub_82243FC4"))) PPC_WEAK_FUNC(sub_82243FC4);
PPC_FUNC_IMPL(__imp__sub_82243FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82243FC8"))) PPC_WEAK_FUNC(sub_82243FC8);
PPC_FUNC_IMPL(__imp__sub_82243FC8) {
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
	// bl 0x82243ea8
	ctx.lr = 0x82243FE8;
	sub_82243EA8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82243ff8
	if (ctx.cr0.eq) goto loc_82243FF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x82243FF8;
	sub_82691540(ctx, base);
loc_82243FF8:
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

__attribute__((alias("__imp__sub_82244014"))) PPC_WEAK_FUNC(sub_82244014);
PPC_FUNC_IMPL(__imp__sub_82244014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82244018"))) PPC_WEAK_FUNC(sub_82244018);
PPC_FUNC_IMPL(__imp__sub_82244018) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82252ae8
	ctx.lr = 0x82244034;
	sub_82252AE8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r10,7
	ctx.r10.s64 = 7;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r11,r11,-31548
	ctx.r11.s64 = ctx.r11.s64 + -31548;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82244070"))) PPC_WEAK_FUNC(sub_82244070);
PPC_FUNC_IMPL(__imp__sub_82244070) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-31440
	ctx.r11.s64 = ctx.r11.s64 + -31440;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x828d2b18
	ctx.lr = 0x8224409C;
	sub_828D2B18(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822440ac
	if (ctx.cr0.eq) goto loc_822440AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x822440AC;
	sub_82691540(ctx, base);
loc_822440AC:
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

__attribute__((alias("__imp__sub_822440C8"))) PPC_WEAK_FUNC(sub_822440C8);
PPC_FUNC_IMPL(__imp__sub_822440C8) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-31296
	ctx.r11.s64 = ctx.r11.s64 + -31296;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x828cd0d8
	ctx.lr = 0x822440F4;
	sub_828CD0D8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82244104
	if (ctx.cr0.eq) goto loc_82244104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x82244104;
	sub_82691540(ctx, base);
loc_82244104:
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

__attribute__((alias("__imp__sub_82244120"))) PPC_WEAK_FUNC(sub_82244120);
PPC_FUNC_IMPL(__imp__sub_82244120) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-30712
	ctx.r11.s64 = ctx.r11.s64 + -30712;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x828d2b18
	ctx.lr = 0x8224414C;
	sub_828D2B18(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224415c
	if (ctx.cr0.eq) goto loc_8224415C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x8224415C;
	sub_82691540(ctx, base);
loc_8224415C:
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

__attribute__((alias("__imp__sub_82244178"))) PPC_WEAK_FUNC(sub_82244178);
PPC_FUNC_IMPL(__imp__sub_82244178) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,-31192
	ctx.r11.s64 = ctx.r11.s64 + -31192;
	// addi r30,r10,-25620
	ctx.r30.s64 = ctx.r10.s64 + -25620;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,2564
	ctx.r3.s64 = ctx.r3.s64 + 2564;
	// stw r30,2564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2564, ctx.r30.u32);
	// bl 0x828cd0d8
	ctx.lr = 0x822441B0;
	sub_828CD0D8(ctx, base);
	// stw r30,2460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2460, ctx.r30.u32);
	// addi r3,r31,2460
	ctx.r3.s64 = ctx.r31.s64 + 2460;
	// bl 0x828cd0d8
	ctx.lr = 0x822441BC;
	sub_828CD0D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82243ce8
	ctx.lr = 0x822441C4;
	sub_82243CE8(ctx, base);
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

__attribute__((alias("__imp__sub_822441DC"))) PPC_WEAK_FUNC(sub_822441DC);
PPC_FUNC_IMPL(__imp__sub_822441DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822441E0"))) PPC_WEAK_FUNC(sub_822441E0);
PPC_FUNC_IMPL(__imp__sub_822441E0) {
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
	// bl 0x82243db8
	ctx.lr = 0x822441FC;
	sub_82243DB8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,2340
	ctx.r3.s64 = ctx.r31.s64 + 2340;
	// addi r11,r11,-31208
	ctx.r11.s64 = ctx.r11.s64 + -31208;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828d2d28
	ctx.lr = 0x82244214;
	sub_828D2D28(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,2424
	ctx.r3.s64 = ctx.r31.s64 + 2424;
	// addi r30,r11,-29808
	ctx.r30.s64 = ctx.r11.s64 + -29808;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r30,2340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2340, ctx.r30.u32);
	// bl 0x828d2d28
	ctx.lr = 0x8224422C;
	sub_828D2D28(ctx, base);
	// stw r30,2424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2424, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_8224424C"))) PPC_WEAK_FUNC(sub_8224424C);
PPC_FUNC_IMPL(__imp__sub_8224424C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82244250"))) PPC_WEAK_FUNC(sub_82244250);
PPC_FUNC_IMPL(__imp__sub_82244250) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,-31208
	ctx.r11.s64 = ctx.r11.s64 + -31208;
	// addi r30,r10,-29808
	ctx.r30.s64 = ctx.r10.s64 + -29808;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,2424
	ctx.r3.s64 = ctx.r3.s64 + 2424;
	// stw r30,2424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2424, ctx.r30.u32);
	// bl 0x828d2b18
	ctx.lr = 0x82244288;
	sub_828D2B18(ctx, base);
	// stw r30,2340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2340, ctx.r30.u32);
	// addi r3,r31,2340
	ctx.r3.s64 = ctx.r31.s64 + 2340;
	// bl 0x828d2b18
	ctx.lr = 0x82244294;
	sub_828D2B18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82243ea8
	ctx.lr = 0x8224429C;
	sub_82243EA8(ctx, base);
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

__attribute__((alias("__imp__sub_822442B4"))) PPC_WEAK_FUNC(sub_822442B4);
PPC_FUNC_IMPL(__imp__sub_822442B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822442B8"))) PPC_WEAK_FUNC(sub_822442B8);
PPC_FUNC_IMPL(__imp__sub_822442B8) {
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
	// bl 0x82244178
	ctx.lr = 0x822442D8;
	sub_82244178(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822442e8
	if (ctx.cr0.eq) goto loc_822442E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x822442E8;
	sub_82691540(ctx, base);
loc_822442E8:
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

__attribute__((alias("__imp__sub_82244304"))) PPC_WEAK_FUNC(sub_82244304);
PPC_FUNC_IMPL(__imp__sub_82244304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82244308"))) PPC_WEAK_FUNC(sub_82244308);
PPC_FUNC_IMPL(__imp__sub_82244308) {
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
	// bl 0x82244250
	ctx.lr = 0x82244328;
	sub_82244250(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82244338
	if (ctx.cr0.eq) goto loc_82244338;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x82244338;
	sub_82691540(ctx, base);
loc_82244338:
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

__attribute__((alias("__imp__sub_82244354"))) PPC_WEAK_FUNC(sub_82244354);
PPC_FUNC_IMPL(__imp__sub_82244354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82244358"))) PPC_WEAK_FUNC(sub_82244358);
PPC_FUNC_IMPL(__imp__sub_82244358) {
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
	// bl 0x82243bd0
	ctx.lr = 0x82244370;
	sub_82243BD0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,2460
	ctx.r3.s64 = ctx.r31.s64 + 2460;
	// addi r11,r11,-31192
	ctx.r11.s64 = ctx.r11.s64 + -31192;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8224d6d0
	ctx.lr = 0x82244384;
	sub_8224D6D0(ctx, base);
	// addi r3,r31,2564
	ctx.r3.s64 = ctx.r31.s64 + 2564;
	// bl 0x8224d6d0
	ctx.lr = 0x8224438C;
	sub_8224D6D0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,2668
	ctx.r3.s64 = ctx.r31.s64 + 2668;
	// addi r11,r11,-31136
	ctx.r11.s64 = ctx.r11.s64 + -31136;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82252ae8
	ctx.lr = 0x822443A4;
	sub_82252AE8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r11,r11,-31168
	ctx.r11.s64 = ctx.r11.s64 + -31168;
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r11,2668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2668, ctx.r11.u32);
	// li r3,5
	ctx.r3.s64 = 5;
	// stw r10,2676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2676, ctx.r10.u32);
	// stw r9,2684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2684, ctx.r9.u32);
	// bl 0x82691500
	ctx.lr = 0x822443C8;
	sub_82691500(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stb r11,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r11.u8);
	// addi r10,r10,-31184
	ctx.r10.s64 = ctx.r10.s64 + -31184;
	// stb r11,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r11.u8);
	// stb r11,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r11.u8);
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// stw r3,2680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2680, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,2668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2668, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82244408"))) PPC_WEAK_FUNC(sub_82244408);
PPC_FUNC_IMPL(__imp__sub_82244408) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,-31136
	ctx.r11.s64 = ctx.r11.s64 + -31136;
	// addi r10,r10,-31168
	ctx.r10.s64 = ctx.r10.s64 + -31168;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,2668
	ctx.r3.s64 = ctx.r3.s64 + 2668;
	// stw r10,2668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2668, ctx.r10.u32);
	// bl 0x828cd0d8
	ctx.lr = 0x8224443C;
	sub_828CD0D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82244178
	ctx.lr = 0x82244444;
	sub_82244178(ctx, base);
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

__attribute__((alias("__imp__sub_82244458"))) PPC_WEAK_FUNC(sub_82244458);
PPC_FUNC_IMPL(__imp__sub_82244458) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,-31152
	ctx.r11.s64 = ctx.r11.s64 + -31152;
	// addi r10,r10,-30624
	ctx.r10.s64 = ctx.r10.s64 + -30624;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,2508
	ctx.r3.s64 = ctx.r3.s64 + 2508;
	// stw r10,2508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2508, ctx.r10.u32);
	// bl 0x828d2b18
	ctx.lr = 0x8224448C;
	sub_828D2B18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82244250
	ctx.lr = 0x82244494;
	sub_82244250(ctx, base);
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

__attribute__((alias("__imp__sub_822444A8"))) PPC_WEAK_FUNC(sub_822444A8);
PPC_FUNC_IMPL(__imp__sub_822444A8) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,-30376
	ctx.r11.s64 = ctx.r11.s64 + -30376;
	// addi r10,r10,-25312
	ctx.r10.s64 = ctx.r10.s64 + -25312;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// bl 0x82256210
	ctx.lr = 0x822444DC;
	sub_82256210(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82918028
	ctx.lr = 0x822444E4;
	sub_82918028(ctx, base);
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

__attribute__((alias("__imp__sub_822444F8"))) PPC_WEAK_FUNC(sub_822444F8);
PPC_FUNC_IMPL(__imp__sub_822444F8) {
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
	// bl 0x82244408
	ctx.lr = 0x82244518;
	sub_82244408(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82244528
	if (ctx.cr0.eq) goto loc_82244528;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x82244528;
	sub_82691540(ctx, base);
loc_82244528:
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

__attribute__((alias("__imp__sub_82244544"))) PPC_WEAK_FUNC(sub_82244544);
PPC_FUNC_IMPL(__imp__sub_82244544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82244548"))) PPC_WEAK_FUNC(sub_82244548);
PPC_FUNC_IMPL(__imp__sub_82244548) {
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
	// bl 0x82244458
	ctx.lr = 0x82244568;
	sub_82244458(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82244578
	if (ctx.cr0.eq) goto loc_82244578;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x82244578;
	sub_82691540(ctx, base);
loc_82244578:
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

__attribute__((alias("__imp__sub_82244594"))) PPC_WEAK_FUNC(sub_82244594);
PPC_FUNC_IMPL(__imp__sub_82244594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82244598"))) PPC_WEAK_FUNC(sub_82244598);
PPC_FUNC_IMPL(__imp__sub_82244598) {
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
	// bl 0x822444a8
	ctx.lr = 0x822445B8;
	sub_822444A8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822445c8
	if (ctx.cr0.eq) goto loc_822445C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x822445C8;
	sub_82691540(ctx, base);
loc_822445C8:
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

__attribute__((alias("__imp__sub_822445E4"))) PPC_WEAK_FUNC(sub_822445E4);
PPC_FUNC_IMPL(__imp__sub_822445E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822445E8"))) PPC_WEAK_FUNC(sub_822445E8);
PPC_FUNC_IMPL(__imp__sub_822445E8) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-30624
	ctx.r11.s64 = ctx.r11.s64 + -30624;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x828d2b18
	ctx.lr = 0x82244614;
	sub_828D2B18(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82244624
	if (ctx.cr0.eq) goto loc_82244624;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x82244624;
	sub_82691540(ctx, base);
loc_82244624:
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

__attribute__((alias("__imp__sub_82244640"))) PPC_WEAK_FUNC(sub_82244640);
PPC_FUNC_IMPL(__imp__sub_82244640) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828c0bb8
	ctx.lr = 0x8224465C;
	sub_828C0BB8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// addi r11,r11,-31112
	ctx.r11.s64 = ctx.r11.s64 + -31112;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82252ae8
	ctx.lr = 0x82244674;
	sub_82252AE8(ctx, base);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-27640
	ctx.r10.s64 = ctx.r10.s64 + -27640;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// addi r3,r31,140
	ctx.r3.s64 = ctx.r31.s64 + 140;
	// stb r11,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r11.u8);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// bl 0x82252328
	ctx.lr = 0x82244694;
	sub_82252328(ctx, base);
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

__attribute__((alias("__imp__sub_822446AC"))) PPC_WEAK_FUNC(sub_822446AC);
PPC_FUNC_IMPL(__imp__sub_822446AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822446B0"))) PPC_WEAK_FUNC(sub_822446B0);
PPC_FUNC_IMPL(__imp__sub_822446B0) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,-31112
	ctx.r11.s64 = ctx.r11.s64 + -31112;
	// addi r30,r10,-27640
	ctx.r30.s64 = ctx.r10.s64 + -27640;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,140
	ctx.r3.s64 = ctx.r3.s64 + 140;
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// bl 0x828cd0d8
	ctx.lr = 0x822446E8;
	sub_828CD0D8(ctx, base);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x828cd0d8
	ctx.lr = 0x822446F4;
	sub_828CD0D8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-32104
	ctx.r11.s64 = ctx.r11.s64 + -32104;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828c0bf0
	ctx.lr = 0x82244708;
	sub_828C0BF0(ctx, base);
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

__attribute__((alias("__imp__sub_82244720"))) PPC_WEAK_FUNC(sub_82244720);
PPC_FUNC_IMPL(__imp__sub_82244720) {
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
	// bl 0x822446b0
	ctx.lr = 0x82244740;
	sub_822446B0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82244750
	if (ctx.cr0.eq) goto loc_82244750;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x82244750;
	sub_82691540(ctx, base);
loc_82244750:
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

__attribute__((alias("__imp__sub_8224476C"))) PPC_WEAK_FUNC(sub_8224476C);
PPC_FUNC_IMPL(__imp__sub_8224476C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82244770"))) PPC_WEAK_FUNC(sub_82244770);
PPC_FUNC_IMPL(__imp__sub_82244770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82244778;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82244640
	ctx.lr = 0x82244784;
	sub_82244640(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,228
	ctx.r3.s64 = ctx.r31.s64 + 228;
	// addi r11,r11,-31056
	ctx.r11.s64 = ctx.r11.s64 + -31056;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82244978
	ctx.lr = 0x82244798;
	sub_82244978(ctx, base);
	// addi r3,r31,524
	ctx.r3.s64 = ctx.r31.s64 + 524;
	// bl 0x82244978
	ctx.lr = 0x822447A0;
	sub_82244978(ctx, base);
	// addi r3,r31,820
	ctx.r3.s64 = ctx.r31.s64 + 820;
	// bl 0x82244978
	ctx.lr = 0x822447A8;
	sub_82244978(ctx, base);
	// addi r3,r31,1116
	ctx.r3.s64 = ctx.r31.s64 + 1116;
	// bl 0x82244978
	ctx.lr = 0x822447B0;
	sub_82244978(ctx, base);
	// addi r3,r31,1412
	ctx.r3.s64 = ctx.r31.s64 + 1412;
	// bl 0x82244978
	ctx.lr = 0x822447B8;
	sub_82244978(ctx, base);
	// addi r3,r31,1708
	ctx.r3.s64 = ctx.r31.s64 + 1708;
	// bl 0x82244978
	ctx.lr = 0x822447C0;
	sub_82244978(ctx, base);
	// addi r3,r31,2004
	ctx.r3.s64 = ctx.r31.s64 + 2004;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82252ae8
	ctx.lr = 0x822447CC;
	sub_82252AE8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r28,7
	ctx.r28.s64 = 7;
	// li r29,4
	ctx.r29.s64 = 4;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r28,2012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2012, ctx.r28.u32);
	// addi r11,r11,-31088
	ctx.r11.s64 = ctx.r11.s64 + -31088;
	// stw r29,2020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2020, ctx.r29.u32);
	// stw r30,2016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2016, ctx.r30.u32);
	// addi r3,r31,2092
	ctx.r3.s64 = ctx.r31.s64 + 2092;
	// stw r11,2004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2004, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82252ae8
	ctx.lr = 0x822447FC;
	sub_82252AE8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stw r28,2100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2100, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-31072
	ctx.r11.s64 = ctx.r11.s64 + -31072;
	// stw r29,2108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2108, ctx.r29.u32);
	// stw r30,2104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2104, ctx.r30.u32);
	// stw r11,2092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2092, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82244820"))) PPC_WEAK_FUNC(sub_82244820);
PPC_FUNC_IMPL(__imp__sub_82244820) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,-31056
	ctx.r11.s64 = ctx.r11.s64 + -31056;
	// addi r10,r10,-31072
	ctx.r10.s64 = ctx.r10.s64 + -31072;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,2092
	ctx.r3.s64 = ctx.r3.s64 + 2092;
	// stw r10,2092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2092, ctx.r10.u32);
	// bl 0x828cd0d8
	ctx.lr = 0x82244854;
	sub_828CD0D8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,2004
	ctx.r3.s64 = ctx.r31.s64 + 2004;
	// addi r11,r11,-31088
	ctx.r11.s64 = ctx.r11.s64 + -31088;
	// stw r11,2004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2004, ctx.r11.u32);
	// bl 0x828cd0d8
	ctx.lr = 0x82244868;
	sub_828CD0D8(ctx, base);
	// addi r3,r31,1708
	ctx.r3.s64 = ctx.r31.s64 + 1708;
	// bl 0x82244a10
	ctx.lr = 0x82244870;
	sub_82244A10(ctx, base);
	// addi r3,r31,1412
	ctx.r3.s64 = ctx.r31.s64 + 1412;
	// bl 0x82244a10
	ctx.lr = 0x82244878;
	sub_82244A10(ctx, base);
	// addi r3,r31,1116
	ctx.r3.s64 = ctx.r31.s64 + 1116;
	// bl 0x82244a10
	ctx.lr = 0x82244880;
	sub_82244A10(ctx, base);
	// addi r3,r31,820
	ctx.r3.s64 = ctx.r31.s64 + 820;
	// bl 0x82244a10
	ctx.lr = 0x82244888;
	sub_82244A10(ctx, base);
	// addi r3,r31,524
	ctx.r3.s64 = ctx.r31.s64 + 524;
	// bl 0x82244a10
	ctx.lr = 0x82244890;
	sub_82244A10(ctx, base);
	// addi r3,r31,228
	ctx.r3.s64 = ctx.r31.s64 + 228;
	// bl 0x82244a10
	ctx.lr = 0x82244898;
	sub_82244A10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822446b0
	ctx.lr = 0x822448A0;
	sub_822446B0(ctx, base);
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

__attribute__((alias("__imp__sub_822448B4"))) PPC_WEAK_FUNC(sub_822448B4);
PPC_FUNC_IMPL(__imp__sub_822448B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822448B8"))) PPC_WEAK_FUNC(sub_822448B8);
PPC_FUNC_IMPL(__imp__sub_822448B8) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,-31048
	ctx.r11.s64 = ctx.r11.s64 + -31048;
	// addi r10,r10,-25312
	ctx.r10.s64 = ctx.r10.s64 + -25312;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r30,r3,48
	ctx.r30.s64 = ctx.r3.s64 + 48;
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r30,80
	ctx.r3.s64 = ctx.r30.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x822448F4;
	sub_82F91940(ctx, base);
	// addi r3,r30,56
	ctx.r3.s64 = ctx.r30.s64 + 56;
	// bl 0x82f91940
	ctx.lr = 0x822448FC;
	sub_82F91940(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829180a0
	ctx.lr = 0x82244904;
	sub_829180A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82918028
	ctx.lr = 0x8224490C;
	sub_82918028(ctx, base);
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

__attribute__((alias("__imp__sub_82244924"))) PPC_WEAK_FUNC(sub_82244924);
PPC_FUNC_IMPL(__imp__sub_82244924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82244928"))) PPC_WEAK_FUNC(sub_82244928);
PPC_FUNC_IMPL(__imp__sub_82244928) {
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
	// bl 0x82244820
	ctx.lr = 0x82244948;
	sub_82244820(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82244958
	if (ctx.cr0.eq) goto loc_82244958;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x82244958;
	sub_82691540(ctx, base);
loc_82244958:
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

__attribute__((alias("__imp__sub_82244974"))) PPC_WEAK_FUNC(sub_82244974);
PPC_FUNC_IMPL(__imp__sub_82244974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82244978"))) PPC_WEAK_FUNC(sub_82244978);
PPC_FUNC_IMPL(__imp__sub_82244978) {
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
	// bl 0x8224d6d0
	ctx.lr = 0x82244990;
	sub_8224D6D0(ctx, base);
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82252ae8
	ctx.lr = 0x8224499C;
	sub_82252AE8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r11,r11,-31328
	ctx.r11.s64 = ctx.r11.s64 + -31328;
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// li r3,5
	ctx.r3.s64 = 5;
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
	// stw r9,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r9.u32);
	// bl 0x82691500
	ctx.lr = 0x822449C0;
	sub_82691500(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// addi r9,r9,-31104
	ctx.r9.s64 = ctx.r9.s64 + -31104;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// stb r11,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r11.u8);
	// stb r11,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r11.u8);
	// stb r11,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r11.u8);
	// stb r11,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r11.u8);
	// stw r10,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
	// stw r9,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r9.u32);
	// bl 0x8224d6d0
	ctx.lr = 0x822449F4;
	sub_8224D6D0(ctx, base);
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

__attribute__((alias("__imp__sub_82244A0C"))) PPC_WEAK_FUNC(sub_82244A0C);
PPC_FUNC_IMPL(__imp__sub_82244A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82244A10"))) PPC_WEAK_FUNC(sub_82244A10);
PPC_FUNC_IMPL(__imp__sub_82244A10) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r3,192
	ctx.r3.s64 = ctx.r3.s64 + 192;
	// addi r30,r11,-25620
	ctx.r30.s64 = ctx.r11.s64 + -25620;
	// stw r30,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r30.u32);
	// bl 0x828cd0d8
	ctx.lr = 0x82244A3C;
	sub_828CD0D8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// addi r11,r11,-31328
	ctx.r11.s64 = ctx.r11.s64 + -31328;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// bl 0x828cd0d8
	ctx.lr = 0x82244A50;
	sub_828CD0D8(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828cd0d8
	ctx.lr = 0x82244A5C;
	sub_828CD0D8(ctx, base);
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

__attribute__((alias("__imp__sub_82244A74"))) PPC_WEAK_FUNC(sub_82244A74);
PPC_FUNC_IMPL(__imp__sub_82244A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82244A78"))) PPC_WEAK_FUNC(sub_82244A78);
PPC_FUNC_IMPL(__imp__sub_82244A78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82244A80;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828c0bb8
	ctx.lr = 0x82244A90;
	sub_828C0BB8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// addi r11,r11,-31008
	ctx.r11.s64 = ctx.r11.s64 + -31008;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82252ae8
	ctx.lr = 0x82244AA8;
	sub_82252AE8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r27,r11,-27640
	ctx.r27.s64 = ctx.r11.s64 + -27640;
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// addi r3,r31,140
	ctx.r3.s64 = ctx.r31.s64 + 140;
	// stb r30,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r30.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r27,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r27.u32);
	// bl 0x82252ae8
	ctx.lr = 0x82244ACC;
	sub_82252AE8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r28,7
	ctx.r28.s64 = 7;
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// li r29,4
	ctx.r29.s64 = 4;
	// addi r26,r11,-31072
	ctx.r26.s64 = ctx.r11.s64 + -31072;
	// stw r28,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r28.u32);
	// stw r29,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r29.u32);
	// addi r3,r31,228
	ctx.r3.s64 = ctx.r31.s64 + 228;
	// stw r26,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r26.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82252ae8
	ctx.lr = 0x82244AF8;
	sub_82252AE8(ctx, base);
	// stw r28,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r28.u32);
	// stw r29,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r29.u32);
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// stw r30,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r30.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r26,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r26.u32);
	// bl 0x82252ae8
	ctx.lr = 0x82244B14;
	sub_82252AE8(ctx, base);
	// stw r30,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r30.u32);
	// stb r30,328(r31)
	PPC_STORE_U8(ctx.r31.u32 + 328, ctx.r30.u8);
	// addi r3,r31,404
	ctx.r3.s64 = ctx.r31.s64 + 404;
	// stw r27,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r27.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82252ae8
	ctx.lr = 0x82244B2C;
	sub_82252AE8(ctx, base);
	// stw r30,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r30.u32);
	// stb r30,416(r31)
	PPC_STORE_U8(ctx.r31.u32 + 416, ctx.r30.u8);
	// addi r3,r31,492
	ctx.r3.s64 = ctx.r31.s64 + 492;
	// stw r27,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r27.u32);
	// bl 0x8224d6d0
	ctx.lr = 0x82244B40;
	sub_8224D6D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82244B4C"))) PPC_WEAK_FUNC(sub_82244B4C);
PPC_FUNC_IMPL(__imp__sub_82244B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82244B50"))) PPC_WEAK_FUNC(sub_82244B50);
PPC_FUNC_IMPL(__imp__sub_82244B50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82244B58;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,-31008
	ctx.r11.s64 = ctx.r11.s64 + -31008;
	// addi r10,r10,-25620
	ctx.r10.s64 = ctx.r10.s64 + -25620;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,492
	ctx.r3.s64 = ctx.r3.s64 + 492;
	// stw r10,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r10.u32);
	// bl 0x828cd0d8
	ctx.lr = 0x82244B80;
	sub_828CD0D8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,404
	ctx.r3.s64 = ctx.r31.s64 + 404;
	// addi r30,r11,-27640
	ctx.r30.s64 = ctx.r11.s64 + -27640;
	// stw r30,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r30.u32);
	// bl 0x828cd0d8
	ctx.lr = 0x82244B94;
	sub_828CD0D8(ctx, base);
	// stw r30,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r30.u32);
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// bl 0x828cd0d8
	ctx.lr = 0x82244BA0;
	sub_828CD0D8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,228
	ctx.r3.s64 = ctx.r31.s64 + 228;
	// addi r29,r11,-31072
	ctx.r29.s64 = ctx.r11.s64 + -31072;
	// stw r29,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r29.u32);
	// bl 0x828cd0d8
	ctx.lr = 0x82244BB4;
	sub_828CD0D8(ctx, base);
	// stw r29,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r29.u32);
	// addi r3,r31,140
	ctx.r3.s64 = ctx.r31.s64 + 140;
	// bl 0x828cd0d8
	ctx.lr = 0x82244BC0;
	sub_828CD0D8(ctx, base);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x828cd0d8
	ctx.lr = 0x82244BCC;
	sub_828CD0D8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-32104
	ctx.r11.s64 = ctx.r11.s64 + -32104;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828c0bf0
	ctx.lr = 0x82244BE0;
	sub_828C0BF0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82244BE8"))) PPC_WEAK_FUNC(sub_82244BE8);
PPC_FUNC_IMPL(__imp__sub_82244BE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82244BF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,-31024
	ctx.r11.s64 = ctx.r11.s64 + -31024;
	// addi r10,r10,-29808
	ctx.r10.s64 = ctx.r10.s64 + -29808;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,492
	ctx.r3.s64 = ctx.r3.s64 + 492;
	// stw r10,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r10.u32);
	// bl 0x828d2b18
	ctx.lr = 0x82244C18;
	sub_828D2B18(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,408
	ctx.r3.s64 = ctx.r31.s64 + 408;
	// addi r30,r11,-29744
	ctx.r30.s64 = ctx.r11.s64 + -29744;
	// stw r30,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r30.u32);
	// bl 0x828d2b18
	ctx.lr = 0x82244C2C;
	sub_828D2B18(ctx, base);
	// stw r30,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r30.u32);
	// addi r3,r31,324
	ctx.r3.s64 = ctx.r31.s64 + 324;
	// bl 0x828d2b18
	ctx.lr = 0x82244C38;
	sub_828D2B18(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r31,240
	ctx.r3.s64 = ctx.r31.s64 + 240;
	// addi r29,r11,20504
	ctx.r29.s64 = ctx.r11.s64 + 20504;
	// stw r29,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r29.u32);
	// bl 0x828d2b18
	ctx.lr = 0x82244C4C;
	sub_828D2B18(ctx, base);
	// stw r29,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r29.u32);
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// bl 0x828d2b18
	ctx.lr = 0x82244C58;
	sub_828D2B18(ctx, base);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x828d2b18
	ctx.lr = 0x82244C64;
	sub_828D2B18(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-29872
	ctx.r11.s64 = ctx.r11.s64 + -29872;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828cc810
	ctx.lr = 0x82244C78;
	sub_828CC810(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82244C80"))) PPC_WEAK_FUNC(sub_82244C80);
PPC_FUNC_IMPL(__imp__sub_82244C80) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,-31000
	ctx.r11.s64 = ctx.r11.s64 + -31000;
	// addi r10,r10,-25312
	ctx.r10.s64 = ctx.r10.s64 + -25312;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r30,r3,168
	ctx.r30.s64 = ctx.r3.s64 + 168;
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r30,80
	ctx.r3.s64 = ctx.r30.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x82244CBC;
	sub_82F91940(ctx, base);
	// addi r3,r30,56
	ctx.r3.s64 = ctx.r30.s64 + 56;
	// bl 0x82f91940
	ctx.lr = 0x82244CC4;
	sub_82F91940(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829180a0
	ctx.lr = 0x82244CCC;
	sub_829180A0(ctx, base);
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// addi r30,r31,48
	ctx.r30.s64 = ctx.r31.s64 + 48;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82244ce0
	if (ctx.cr6.eq) goto loc_82244CE0;
	// bl 0x82241d18
	ctx.lr = 0x82244CE0;
	sub_82241D18(ctx, base);
loc_82244CE0:
	// lwz r3,108(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82244cf0
	if (ctx.cr6.eq) goto loc_82244CF0;
	// bl 0x82241d18
	ctx.lr = 0x82244CF0;
	sub_82241D18(ctx, base);
loc_82244CF0:
	// addi r3,r30,80
	ctx.r3.s64 = ctx.r30.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x82244CF8;
	sub_82F91940(ctx, base);
	// addi r3,r30,56
	ctx.r3.s64 = ctx.r30.s64 + 56;
	// bl 0x82f91940
	ctx.lr = 0x82244D00;
	sub_82F91940(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829180a0
	ctx.lr = 0x82244D08;
	sub_829180A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82918028
	ctx.lr = 0x82244D10;
	sub_82918028(ctx, base);
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

__attribute__((alias("__imp__sub_82244D28"))) PPC_WEAK_FUNC(sub_82244D28);
PPC_FUNC_IMPL(__imp__sub_82244D28) {
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
	// bl 0x82244b50
	ctx.lr = 0x82244D48;
	sub_82244B50(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82244d58
	if (ctx.cr0.eq) goto loc_82244D58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x82244D58;
	sub_82691540(ctx, base);
loc_82244D58:
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

__attribute__((alias("__imp__sub_82244D74"))) PPC_WEAK_FUNC(sub_82244D74);
PPC_FUNC_IMPL(__imp__sub_82244D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82244D78"))) PPC_WEAK_FUNC(sub_82244D78);
PPC_FUNC_IMPL(__imp__sub_82244D78) {
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
	// bl 0x82244be8
	ctx.lr = 0x82244D98;
	sub_82244BE8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82244da8
	if (ctx.cr0.eq) goto loc_82244DA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x82244DA8;
	sub_82691540(ctx, base);
loc_82244DA8:
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

__attribute__((alias("__imp__sub_82244DC4"))) PPC_WEAK_FUNC(sub_82244DC4);
PPC_FUNC_IMPL(__imp__sub_82244DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82244DC8"))) PPC_WEAK_FUNC(sub_82244DC8);
PPC_FUNC_IMPL(__imp__sub_82244DC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82244DD0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828c0bb8
	ctx.lr = 0x82244DE0;
	sub_828C0BB8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// addi r11,r11,-30752
	ctx.r11.s64 = ctx.r11.s64 + -30752;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8224d6d0
	ctx.lr = 0x82244DF4;
	sub_8224D6D0(ctx, base);
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// bl 0x8224d6d0
	ctx.lr = 0x82244DFC;
	sub_8224D6D0(ctx, base);
	// addi r3,r31,260
	ctx.r3.s64 = ctx.r31.s64 + 260;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82252ae8
	ctx.lr = 0x82244E08;
	sub_82252AE8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r30,7
	ctx.r30.s64 = 7;
	// li r28,4
	ctx.r28.s64 = 4;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r30,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r30.u32);
	// addi r11,r11,-30976
	ctx.r11.s64 = ctx.r11.s64 + -30976;
	// stw r28,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r28.u32);
	// stw r29,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r29.u32);
	// addi r3,r31,348
	ctx.r3.s64 = ctx.r31.s64 + 348;
	// stw r11,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82252ae8
	ctx.lr = 0x82244E38;
	sub_82252AE8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r11,-30744
	ctx.r11.s64 = ctx.r11.s64 + -30744;
	// li r3,8
	ctx.r3.s64 = 8;
	// stw r11,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
	// stw r30,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r30.u32);
	// stw r10,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r10.u32);
	// bl 0x82691500
	ctx.lr = 0x82244E58;
	sub_82691500(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82244E68;
	sub_82FA7CF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stw r27,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r27.u32);
	// addi r3,r31,436
	ctx.r3.s64 = ctx.r31.s64 + 436;
	// addi r11,r11,-30856
	ctx.r11.s64 = ctx.r11.s64 + -30856;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
	// bl 0x82252ae8
	ctx.lr = 0x82244E84;
	sub_82252AE8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stw r30,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-30768
	ctx.r11.s64 = ctx.r11.s64 + -30768;
	// stw r28,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r28.u32);
	// stw r29,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r29.u32);
	// stw r11,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82244EA8"))) PPC_WEAK_FUNC(sub_82244EA8);
PPC_FUNC_IMPL(__imp__sub_82244EA8) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,-30752
	ctx.r11.s64 = ctx.r11.s64 + -30752;
	// addi r10,r10,-30728
	ctx.r10.s64 = ctx.r10.s64 + -30728;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,436
	ctx.r3.s64 = ctx.r3.s64 + 436;
	// stw r10,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r10.u32);
	// bl 0x828cd0d8
	ctx.lr = 0x82244EE0;
	sub_828CD0D8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,348
	ctx.r3.s64 = ctx.r31.s64 + 348;
	// addi r11,r11,-30744
	ctx.r11.s64 = ctx.r11.s64 + -30744;
	// stw r11,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
	// bl 0x828cd0d8
	ctx.lr = 0x82244EF4;
	sub_828CD0D8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,260
	ctx.r3.s64 = ctx.r31.s64 + 260;
	// addi r11,r11,-30960
	ctx.r11.s64 = ctx.r11.s64 + -30960;
	// stw r11,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// bl 0x828cd0d8
	ctx.lr = 0x82244F08;
	sub_828CD0D8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// addi r30,r11,-25620
	ctx.r30.s64 = ctx.r11.s64 + -25620;
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// bl 0x828cd0d8
	ctx.lr = 0x82244F1C;
	sub_828CD0D8(ctx, base);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x828cd0d8
	ctx.lr = 0x82244F28;
	sub_828CD0D8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-32104
	ctx.r11.s64 = ctx.r11.s64 + -32104;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828c0bf0
	ctx.lr = 0x82244F3C;
	sub_828C0BF0(ctx, base);
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

__attribute__((alias("__imp__sub_82244F54"))) PPC_WEAK_FUNC(sub_82244F54);
PPC_FUNC_IMPL(__imp__sub_82244F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82244F58"))) PPC_WEAK_FUNC(sub_82244F58);
PPC_FUNC_IMPL(__imp__sub_82244F58) {
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
	// bl 0x828c1100
	ctx.lr = 0x82244F74;
	sub_828C1100(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// addi r11,r11,-30872
	ctx.r11.s64 = ctx.r11.s64 + -30872;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828d2d28
	ctx.lr = 0x82244F8C;
	sub_828D2D28(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// addi r30,r11,-29808
	ctx.r30.s64 = ctx.r11.s64 + -29808;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// bl 0x828d2d28
	ctx.lr = 0x82244FA4;
	sub_828D2D28(ctx, base);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// addi r3,r31,240
	ctx.r3.s64 = ctx.r31.s64 + 240;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x828d2e40
	ctx.lr = 0x82244FB4;
	sub_828D2E40(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,324
	ctx.r3.s64 = ctx.r31.s64 + 324;
	// addi r11,r11,-30944
	ctx.r11.s64 = ctx.r11.s64 + -30944;
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// bl 0x828d2e40
	ctx.lr = 0x82244FCC;
	sub_828D2E40(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,408
	ctx.r3.s64 = ctx.r31.s64 + 408;
	// addi r11,r11,-30840
	ctx.r11.s64 = ctx.r11.s64 + -30840;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r11,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// bl 0x828d2e40
	ctx.lr = 0x82244FE4;
	sub_828D2E40(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-30712
	ctx.r11.s64 = ctx.r11.s64 + -30712;
	// stw r11,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8224500C"))) PPC_WEAK_FUNC(sub_8224500C);
PPC_FUNC_IMPL(__imp__sub_8224500C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82245010"))) PPC_WEAK_FUNC(sub_82245010);
PPC_FUNC_IMPL(__imp__sub_82245010) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,-30872
	ctx.r11.s64 = ctx.r11.s64 + -30872;
	// addi r10,r10,-30712
	ctx.r10.s64 = ctx.r10.s64 + -30712;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,408
	ctx.r3.s64 = ctx.r3.s64 + 408;
	// stw r10,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r10.u32);
	// bl 0x828d2b18
	ctx.lr = 0x82245048;
	sub_828D2B18(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,324
	ctx.r3.s64 = ctx.r31.s64 + 324;
	// addi r11,r11,-30840
	ctx.r11.s64 = ctx.r11.s64 + -30840;
	// stw r11,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// bl 0x828d2b18
	ctx.lr = 0x8224505C;
	sub_828D2B18(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,240
	ctx.r3.s64 = ctx.r31.s64 + 240;
	// addi r11,r11,-30944
	ctx.r11.s64 = ctx.r11.s64 + -30944;
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// bl 0x828d2b18
	ctx.lr = 0x82245070;
	sub_828D2B18(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// addi r30,r11,-29808
	ctx.r30.s64 = ctx.r11.s64 + -29808;
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// bl 0x828d2b18
	ctx.lr = 0x82245084;
	sub_828D2B18(ctx, base);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x828d2b18
	ctx.lr = 0x82245090;
	sub_828D2B18(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-29872
	ctx.r11.s64 = ctx.r11.s64 + -29872;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828cc810
	ctx.lr = 0x822450A4;
	sub_828CC810(ctx, base);
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

__attribute__((alias("__imp__sub_822450BC"))) PPC_WEAK_FUNC(sub_822450BC);
PPC_FUNC_IMPL(__imp__sub_822450BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822450C0"))) PPC_WEAK_FUNC(sub_822450C0);
PPC_FUNC_IMPL(__imp__sub_822450C0) {
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
	// bl 0x82244ea8
	ctx.lr = 0x822450E0;
	sub_82244EA8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822450f0
	if (ctx.cr0.eq) goto loc_822450F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x822450F0;
	sub_82691540(ctx, base);
loc_822450F0:
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

__attribute__((alias("__imp__sub_8224510C"))) PPC_WEAK_FUNC(sub_8224510C);
PPC_FUNC_IMPL(__imp__sub_8224510C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82245110"))) PPC_WEAK_FUNC(sub_82245110);
PPC_FUNC_IMPL(__imp__sub_82245110) {
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
	// bl 0x82245010
	ctx.lr = 0x82245130;
	sub_82245010(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82245140
	if (ctx.cr0.eq) goto loc_82245140;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x82245140;
	sub_82691540(ctx, base);
loc_82245140:
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

__attribute__((alias("__imp__sub_8224515C"))) PPC_WEAK_FUNC(sub_8224515C);
PPC_FUNC_IMPL(__imp__sub_8224515C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82245160"))) PPC_WEAK_FUNC(sub_82245160);
PPC_FUNC_IMPL(__imp__sub_82245160) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-30744
	ctx.r11.s64 = ctx.r11.s64 + -30744;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x828cd0d8
	ctx.lr = 0x8224518C;
	sub_828CD0D8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224519c
	if (ctx.cr0.eq) goto loc_8224519C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x8224519C;
	sub_82691540(ctx, base);
loc_8224519C:
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

__attribute__((alias("__imp__sub_822451B8"))) PPC_WEAK_FUNC(sub_822451B8);
PPC_FUNC_IMPL(__imp__sub_822451B8) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-30728
	ctx.r11.s64 = ctx.r11.s64 + -30728;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x828cd0d8
	ctx.lr = 0x822451E4;
	sub_828CD0D8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822451f4
	if (ctx.cr0.eq) goto loc_822451F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x822451F4;
	sub_82691540(ctx, base);
loc_822451F4:
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

__attribute__((alias("__imp__sub_82245210"))) PPC_WEAK_FUNC(sub_82245210);
PPC_FUNC_IMPL(__imp__sub_82245210) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-30712
	ctx.r11.s64 = ctx.r11.s64 + -30712;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x828d2b18
	ctx.lr = 0x8224523C;
	sub_828D2B18(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224524c
	if (ctx.cr0.eq) goto loc_8224524C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x8224524C;
	sub_82691540(ctx, base);
loc_8224524C:
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

__attribute__((alias("__imp__sub_82245268"))) PPC_WEAK_FUNC(sub_82245268);
PPC_FUNC_IMPL(__imp__sub_82245268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82245270;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82244dc8
	ctx.lr = 0x8224527C;
	sub_82244DC8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,524
	ctx.r3.s64 = ctx.r31.s64 + 524;
	// addi r11,r11,-30448
	ctx.r11.s64 = ctx.r11.s64 + -30448;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8224df90
	ctx.lr = 0x82245294;
	sub_8224DF90(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,612
	ctx.r3.s64 = ctx.r31.s64 + 612;
	// addi r27,r11,-29236
	ctx.r27.s64 = ctx.r11.s64 + -29236;
	// stw r27,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r27.u32);
	// bl 0x82252328
	ctx.lr = 0x822452A8;
	sub_82252328(ctx, base);
	// addi r3,r31,700
	ctx.r3.s64 = ctx.r31.s64 + 700;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82252ae8
	ctx.lr = 0x822452B4;
	sub_82252AE8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r29,7
	ctx.r29.s64 = 7;
	// li r28,4
	ctx.r28.s64 = 4;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r29,708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 708, ctx.r29.u32);
	// addi r26,r11,-31088
	ctx.r26.s64 = ctx.r11.s64 + -31088;
	// stw r28,716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 716, ctx.r28.u32);
	// stw r30,712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 712, ctx.r30.u32);
	// addi r3,r31,788
	ctx.r3.s64 = ctx.r31.s64 + 788;
	// stw r26,700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 700, ctx.r26.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82252ae8
	ctx.lr = 0x822452E4;
	sub_82252AE8(ctx, base);
	// stw r29,796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 796, ctx.r29.u32);
	// stw r28,804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 804, ctx.r28.u32);
	// addi r3,r31,876
	ctx.r3.s64 = ctx.r31.s64 + 876;
	// stw r30,800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 800, ctx.r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r26,788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 788, ctx.r26.u32);
	// bl 0x82252ae8
	ctx.lr = 0x82245300;
	sub_82252AE8(ctx, base);
	// stw r29,884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 884, ctx.r29.u32);
	// stw r28,892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 892, ctx.r28.u32);
	// addi r3,r31,964
	ctx.r3.s64 = ctx.r31.s64 + 964;
	// stw r30,888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 888, ctx.r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r26,876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 876, ctx.r26.u32);
	// bl 0x82252ae8
	ctx.lr = 0x8224531C;
	sub_82252AE8(ctx, base);
	// stw r29,972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 972, ctx.r29.u32);
	// stw r28,980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 980, ctx.r28.u32);
	// addi r3,r31,1052
	ctx.r3.s64 = ctx.r31.s64 + 1052;
	// stw r30,976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 976, ctx.r30.u32);
	// stw r26,964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 964, ctx.r26.u32);
	// bl 0x82252328
	ctx.lr = 0x82245334;
	sub_82252328(ctx, base);
	// addi r3,r31,1140
	ctx.r3.s64 = ctx.r31.s64 + 1140;
	// bl 0x82252328
	ctx.lr = 0x8224533C;
	sub_82252328(ctx, base);
	// addi r3,r31,1228
	ctx.r3.s64 = ctx.r31.s64 + 1228;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82252ae8
	ctx.lr = 0x82245348;
	sub_82252AE8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r11,r11,-31168
	ctx.r11.s64 = ctx.r11.s64 + -31168;
	// li r3,5
	ctx.r3.s64 = 5;
	// stw r11,1228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1228, ctx.r11.u32);
	// stw r29,1236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1236, ctx.r29.u32);
	// stw r10,1244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1244, ctx.r10.u32);
	// bl 0x82691500
	ctx.lr = 0x82245368;
	sub_82691500(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r3,r31,1316
	ctx.r3.s64 = ctx.r31.s64 + 1316;
	// addi r10,r10,-30640
	ctx.r10.s64 = ctx.r10.s64 + -30640;
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// stb r30,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r30.u8);
	// stb r30,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r30.u8);
	// stb r30,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r30.u8);
	// stb r30,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r30.u8);
	// stw r11,1240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1240, ctx.r11.u32);
	// stw r10,1228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1228, ctx.r10.u32);
	// bl 0x82252ae8
	ctx.lr = 0x8224539C;
	sub_82252AE8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stw r30,1404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1404, ctx.r30.u32);
	// addi r3,r31,1412
	ctx.r3.s64 = ctx.r31.s64 + 1412;
	// stw r30,1408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1408, ctx.r30.u32);
	// addi r11,r11,-30480
	ctx.r11.s64 = ctx.r11.s64 + -30480;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,1316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1316, ctx.r11.u32);
	// bl 0x8224df90
	ctx.lr = 0x822453BC;
	sub_8224DF90(ctx, base);
	// stw r27,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r27.u32);
	// addi r3,r31,1500
	ctx.r3.s64 = ctx.r31.s64 + 1500;
	// bl 0x82252328
	ctx.lr = 0x822453C8;
	sub_82252328(ctx, base);
	// addi r3,r31,1588
	ctx.r3.s64 = ctx.r31.s64 + 1588;
	// bl 0x82252328
	ctx.lr = 0x822453D0;
	sub_82252328(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822453DC"))) PPC_WEAK_FUNC(sub_822453DC);
PPC_FUNC_IMPL(__imp__sub_822453DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822453E0"))) PPC_WEAK_FUNC(sub_822453E0);
PPC_FUNC_IMPL(__imp__sub_822453E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x822453E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r10,r10,-30448
	ctx.r10.s64 = ctx.r10.s64 + -30448;
	// addi r30,r11,-27640
	ctx.r30.s64 = ctx.r11.s64 + -27640;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r3,r3,1588
	ctx.r3.s64 = ctx.r3.s64 + 1588;
	// stw r30,1588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1588, ctx.r30.u32);
	// bl 0x828cd0d8
	ctx.lr = 0x82245410;
	sub_828CD0D8(ctx, base);
	// stw r30,1500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1500, ctx.r30.u32);
	// addi r3,r31,1500
	ctx.r3.s64 = ctx.r31.s64 + 1500;
	// bl 0x828cd0d8
	ctx.lr = 0x8224541C;
	sub_828CD0D8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,1412
	ctx.r3.s64 = ctx.r31.s64 + 1412;
	// addi r28,r11,-29236
	ctx.r28.s64 = ctx.r11.s64 + -29236;
	// stw r28,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r28.u32);
	// bl 0x828cd0d8
	ctx.lr = 0x82245430;
	sub_828CD0D8(ctx, base);
	// lwz r3,1408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// addi r29,r31,1316
	ctx.r29.s64 = ctx.r31.s64 + 1316;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82245444
	if (ctx.cr6.eq) goto loc_82245444;
	// bl 0x82241d18
	ctx.lr = 0x82245444;
	sub_82241D18(ctx, base);
loc_82245444:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828cd0d8
	ctx.lr = 0x8224544C;
	sub_828CD0D8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,1228
	ctx.r3.s64 = ctx.r31.s64 + 1228;
	// addi r11,r11,-31168
	ctx.r11.s64 = ctx.r11.s64 + -31168;
	// stw r11,1228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1228, ctx.r11.u32);
	// bl 0x828cd0d8
	ctx.lr = 0x82245460;
	sub_828CD0D8(ctx, base);
	// stw r30,1140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1140, ctx.r30.u32);
	// addi r3,r31,1140
	ctx.r3.s64 = ctx.r31.s64 + 1140;
	// bl 0x828cd0d8
	ctx.lr = 0x8224546C;
	sub_828CD0D8(ctx, base);
	// stw r30,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r30.u32);
	// addi r3,r31,1052
	ctx.r3.s64 = ctx.r31.s64 + 1052;
	// bl 0x828cd0d8
	ctx.lr = 0x82245478;
	sub_828CD0D8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,964
	ctx.r3.s64 = ctx.r31.s64 + 964;
	// addi r29,r11,-31088
	ctx.r29.s64 = ctx.r11.s64 + -31088;
	// stw r29,964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 964, ctx.r29.u32);
	// bl 0x828cd0d8
	ctx.lr = 0x8224548C;
	sub_828CD0D8(ctx, base);
	// stw r29,876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 876, ctx.r29.u32);
	// addi r3,r31,876
	ctx.r3.s64 = ctx.r31.s64 + 876;
	// bl 0x828cd0d8
	ctx.lr = 0x82245498;
	sub_828CD0D8(ctx, base);
	// stw r29,788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 788, ctx.r29.u32);
	// addi r3,r31,788
	ctx.r3.s64 = ctx.r31.s64 + 788;
	// bl 0x828cd0d8
	ctx.lr = 0x822454A4;
	sub_828CD0D8(ctx, base);
	// stw r29,700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 700, ctx.r29.u32);
	// addi r3,r31,700
	ctx.r3.s64 = ctx.r31.s64 + 700;
	// bl 0x828cd0d8
	ctx.lr = 0x822454B0;
	sub_828CD0D8(ctx, base);
	// stw r30,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r30.u32);
	// addi r3,r31,612
	ctx.r3.s64 = ctx.r31.s64 + 612;
	// bl 0x828cd0d8
	ctx.lr = 0x822454BC;
	sub_828CD0D8(ctx, base);
	// stw r28,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r28.u32);
	// addi r3,r31,524
	ctx.r3.s64 = ctx.r31.s64 + 524;
	// bl 0x828cd0d8
	ctx.lr = 0x822454C8;
	sub_828CD0D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82244ea8
	ctx.lr = 0x822454D0;
	sub_82244EA8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822454D8"))) PPC_WEAK_FUNC(sub_822454D8);
PPC_FUNC_IMPL(__imp__sub_822454D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x822454E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82244f58
	ctx.lr = 0x822454EC;
	sub_82244F58(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,492
	ctx.r3.s64 = ctx.r31.s64 + 492;
	// addi r11,r11,-30464
	ctx.r11.s64 = ctx.r11.s64 + -30464;
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828d2e40
	ctx.lr = 0x82245504;
	sub_828D2E40(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,576
	ctx.r3.s64 = ctx.r31.s64 + 576;
	// addi r11,r11,-30552
	ctx.r11.s64 = ctx.r11.s64 + -30552;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r11.u32);
	// bl 0x828d2d28
	ctx.lr = 0x8224551C;
	sub_828D2D28(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,660
	ctx.r3.s64 = ctx.r31.s64 + 660;
	// addi r30,r11,-29744
	ctx.r30.s64 = ctx.r11.s64 + -29744;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r30,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r30.u32);
	// bl 0x828d2e40
	ctx.lr = 0x82245534;
	sub_828D2E40(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r31,744
	ctx.r3.s64 = ctx.r31.s64 + 744;
	// addi r29,r11,20504
	ctx.r29.s64 = ctx.r11.s64 + 20504;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r29,660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 660, ctx.r29.u32);
	// bl 0x828d2e40
	ctx.lr = 0x8224554C;
	sub_828D2E40(ctx, base);
	// stw r29,744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 744, ctx.r29.u32);
	// addi r3,r31,828
	ctx.r3.s64 = ctx.r31.s64 + 828;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x828d2e40
	ctx.lr = 0x8224555C;
	sub_828D2E40(ctx, base);
	// stw r29,828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 828, ctx.r29.u32);
	// addi r3,r31,912
	ctx.r3.s64 = ctx.r31.s64 + 912;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x828d2e40
	ctx.lr = 0x8224556C;
	sub_828D2E40(ctx, base);
	// stw r29,912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 912, ctx.r29.u32);
	// addi r3,r31,996
	ctx.r3.s64 = ctx.r31.s64 + 996;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828d2d28
	ctx.lr = 0x8224557C;
	sub_828D2D28(ctx, base);
	// stw r30,996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 996, ctx.r30.u32);
	// addi r3,r31,1080
	ctx.r3.s64 = ctx.r31.s64 + 1080;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828d2d28
	ctx.lr = 0x8224558C;
	sub_828D2D28(ctx, base);
	// stw r30,1080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1080, ctx.r30.u32);
	// addi r3,r31,1164
	ctx.r3.s64 = ctx.r31.s64 + 1164;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x828d2e40
	ctx.lr = 0x8224559C;
	sub_828D2E40(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,1248
	ctx.r3.s64 = ctx.r31.s64 + 1248;
	// addi r11,r11,-30624
	ctx.r11.s64 = ctx.r11.s64 + -30624;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r11,1164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1164, ctx.r11.u32);
	// bl 0x828d2e40
	ctx.lr = 0x822455B4;
	sub_828D2E40(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,1332
	ctx.r3.s64 = ctx.r31.s64 + 1332;
	// addi r11,r11,-27696
	ctx.r11.s64 = ctx.r11.s64 + -27696;
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r11,1248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1248, ctx.r11.u32);
	// bl 0x828d2e40
	ctx.lr = 0x822455CC;
	sub_828D2E40(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,1416
	ctx.r3.s64 = ctx.r31.s64 + 1416;
	// addi r11,r11,-30552
	ctx.r11.s64 = ctx.r11.s64 + -30552;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,1332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1332, ctx.r11.u32);
	// bl 0x828d2d28
	ctx.lr = 0x822455E4;
	sub_828D2D28(ctx, base);
	// stw r30,1416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1416, ctx.r30.u32);
	// addi r3,r31,1500
	ctx.r3.s64 = ctx.r31.s64 + 1500;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828d2d28
	ctx.lr = 0x822455F4;
	sub_828D2D28(ctx, base);
	// stw r30,1500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1500, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82245604"))) PPC_WEAK_FUNC(sub_82245604);
PPC_FUNC_IMPL(__imp__sub_82245604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82245608"))) PPC_WEAK_FUNC(sub_82245608);
PPC_FUNC_IMPL(__imp__sub_82245608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82245610;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,-30464
	ctx.r11.s64 = ctx.r11.s64 + -30464;
	// addi r30,r10,-29744
	ctx.r30.s64 = ctx.r10.s64 + -29744;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,1500
	ctx.r3.s64 = ctx.r3.s64 + 1500;
	// stw r30,1500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1500, ctx.r30.u32);
	// bl 0x828d2b18
	ctx.lr = 0x82245638;
	sub_828D2B18(ctx, base);
	// stw r30,1416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1416, ctx.r30.u32);
	// addi r3,r31,1416
	ctx.r3.s64 = ctx.r31.s64 + 1416;
	// bl 0x828d2b18
	ctx.lr = 0x82245644;
	sub_828D2B18(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,1332
	ctx.r3.s64 = ctx.r31.s64 + 1332;
	// addi r29,r11,-30552
	ctx.r29.s64 = ctx.r11.s64 + -30552;
	// stw r29,1332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1332, ctx.r29.u32);
	// bl 0x828d2b18
	ctx.lr = 0x82245658;
	sub_828D2B18(ctx, base);
	// addi r3,r31,1248
	ctx.r3.s64 = ctx.r31.s64 + 1248;
	// bl 0x828d2b18
	ctx.lr = 0x82245660;
	sub_828D2B18(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,1164
	ctx.r3.s64 = ctx.r31.s64 + 1164;
	// addi r11,r11,-30624
	ctx.r11.s64 = ctx.r11.s64 + -30624;
	// stw r11,1164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1164, ctx.r11.u32);
	// bl 0x828d2b18
	ctx.lr = 0x82245674;
	sub_828D2B18(ctx, base);
	// stw r30,1080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1080, ctx.r30.u32);
	// addi r3,r31,1080
	ctx.r3.s64 = ctx.r31.s64 + 1080;
	// bl 0x828d2b18
	ctx.lr = 0x82245680;
	sub_828D2B18(ctx, base);
	// stw r30,996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 996, ctx.r30.u32);
	// addi r3,r31,996
	ctx.r3.s64 = ctx.r31.s64 + 996;
	// bl 0x828d2b18
	ctx.lr = 0x8224568C;
	sub_828D2B18(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r31,912
	ctx.r3.s64 = ctx.r31.s64 + 912;
	// addi r28,r11,20504
	ctx.r28.s64 = ctx.r11.s64 + 20504;
	// stw r28,912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 912, ctx.r28.u32);
	// bl 0x828d2b18
	ctx.lr = 0x822456A0;
	sub_828D2B18(ctx, base);
	// stw r28,828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 828, ctx.r28.u32);
	// addi r3,r31,828
	ctx.r3.s64 = ctx.r31.s64 + 828;
	// bl 0x828d2b18
	ctx.lr = 0x822456AC;
	sub_828D2B18(ctx, base);
	// stw r28,744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 744, ctx.r28.u32);
	// addi r3,r31,744
	ctx.r3.s64 = ctx.r31.s64 + 744;
	// bl 0x828d2b18
	ctx.lr = 0x822456B8;
	sub_828D2B18(ctx, base);
	// stw r28,660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 660, ctx.r28.u32);
	// addi r3,r31,660
	ctx.r3.s64 = ctx.r31.s64 + 660;
	// bl 0x828d2b18
	ctx.lr = 0x822456C4;
	sub_828D2B18(ctx, base);
	// stw r30,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r30.u32);
	// addi r3,r31,576
	ctx.r3.s64 = ctx.r31.s64 + 576;
	// bl 0x828d2b18
	ctx.lr = 0x822456D0;
	sub_828D2B18(ctx, base);
	// stw r29,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r29.u32);
	// addi r3,r31,492
	ctx.r3.s64 = ctx.r31.s64 + 492;
	// bl 0x828d2b18
	ctx.lr = 0x822456DC;
	sub_828D2B18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82245010
	ctx.lr = 0x822456E4;
	sub_82245010(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822456EC"))) PPC_WEAK_FUNC(sub_822456EC);
PPC_FUNC_IMPL(__imp__sub_822456EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822456F0"))) PPC_WEAK_FUNC(sub_822456F0);
PPC_FUNC_IMPL(__imp__sub_822456F0) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,-30388
	ctx.r11.s64 = ctx.r11.s64 + -30388;
	// addi r10,r10,-25312
	ctx.r10.s64 = ctx.r10.s64 + -25312;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r31,r3,48
	ctx.r31.s64 = ctx.r3.s64 + 48;
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// lwz r3,164(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82245734
	if (ctx.cr6.eq) goto loc_82245734;
	// bl 0x82241d18
	ctx.lr = 0x82245734;
	sub_82241D18(ctx, base);
loc_82245734:
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82245744
	if (ctx.cr6.eq) goto loc_82245744;
	// bl 0x82241d18
	ctx.lr = 0x82245744;
	sub_82241D18(ctx, base);
loc_82245744:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x8224574C;
	sub_82F91940(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82f91940
	ctx.lr = 0x82245754;
	sub_82F91940(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829180a0
	ctx.lr = 0x8224575C;
	sub_829180A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82918028
	ctx.lr = 0x82245764;
	sub_82918028(ctx, base);
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

__attribute__((alias("__imp__sub_8224577C"))) PPC_WEAK_FUNC(sub_8224577C);
PPC_FUNC_IMPL(__imp__sub_8224577C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82245780"))) PPC_WEAK_FUNC(sub_82245780);
PPC_FUNC_IMPL(__imp__sub_82245780) {
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
	// bl 0x822453e0
	ctx.lr = 0x822457A0;
	sub_822453E0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822457b0
	if (ctx.cr0.eq) goto loc_822457B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x822457B0;
	sub_82691540(ctx, base);
loc_822457B0:
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

__attribute__((alias("__imp__sub_822457CC"))) PPC_WEAK_FUNC(sub_822457CC);
PPC_FUNC_IMPL(__imp__sub_822457CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822457D0"))) PPC_WEAK_FUNC(sub_822457D0);
PPC_FUNC_IMPL(__imp__sub_822457D0) {
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
	// bl 0x82245608
	ctx.lr = 0x822457F0;
	sub_82245608(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82245800
	if (ctx.cr0.eq) goto loc_82245800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x82245800;
	sub_82691540(ctx, base);
loc_82245800:
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

__attribute__((alias("__imp__sub_8224581C"))) PPC_WEAK_FUNC(sub_8224581C);
PPC_FUNC_IMPL(__imp__sub_8224581C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82245820"))) PPC_WEAK_FUNC(sub_82245820);
PPC_FUNC_IMPL(__imp__sub_82245820) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-30552
	ctx.r11.s64 = ctx.r11.s64 + -30552;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x828d2b18
	ctx.lr = 0x8224584C;
	sub_828D2B18(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224585c
	if (ctx.cr0.eq) goto loc_8224585C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x8224585C;
	sub_82691540(ctx, base);
loc_8224585C:
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

__attribute__((alias("__imp__sub_82245878"))) PPC_WEAK_FUNC(sub_82245878);
PPC_FUNC_IMPL(__imp__sub_82245878) {
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
	// lwz r30,80(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82550908
	ctx.lr = 0x82245898;
	sub_82550908(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82550c58
	ctx.lr = 0x822458A4;
	sub_82550C58(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82f91940
	ctx.lr = 0x822458AC;
	sub_82F91940(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822402c8
	ctx.lr = 0x822458BC;
	sub_822402C8(ctx, base);
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

