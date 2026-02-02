#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8304D368"))) PPC_WEAK_FUNC(sub_8304D368);
PPC_FUNC_IMPL(__imp__sub_8304D368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8304D370;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r9,40(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r10,r4,36
	ctx.r10.s64 = ctx.r4.s64 + 36;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// li r3,2
	ctx.r3.s64 = 2;
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// cmplwi cr6,r7,8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 8, ctx.xer);
	// bge cr6,0x8304d410
	if (!ctx.cr6.lt) goto loc_8304D410;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// li r29,40
	ctx.r29.s64 = 40;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304d3c8
	if (ctx.cr6.eq) goto loc_8304D3C8;
loc_8304D3B0:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8304d3c8
	if (ctx.cr6.eq) goto loc_8304D3C8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8304d3b0
	if (!ctx.cr6.eq) goto loc_8304D3B0;
loc_8304D3C8:
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// subfic r8,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r5,r6,r11
	ctx.r5.u64 = ctx.r6.u64 & ctx.r11.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8304d40c
	if (!ctx.cr6.eq) goto loc_8304D40C;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x83035ce0
	ctx.lr = 0x8304D3E8;
	sub_83035CE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8304d40c
	if (ctx.cr6.eq) goto loc_8304D40C;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lbz r11,49(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 49);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,49(r31)
	PPC_STORE_U8(ctx.r31.u32 + 49, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_8304D40C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8304D410:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8304D418"))) PPC_WEAK_FUNC(sub_8304D418);
PPC_FUNC_IMPL(__imp__sub_8304D418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8304D420;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// li r30,41
	ctx.r30.s64 = 41;
	// bl 0x83027b28
	ctx.lr = 0x8304D43C;
	sub_83027B28(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8304d48c
	if (!ctx.cr6.eq) goto loc_8304D48C;
	// lbz r11,49(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 49);
	// lbz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 48);
	// addi r9,r11,255
	ctx.r9.s64 = ctx.r11.s64 + 255;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// stb r11,49(r31)
	PPC_STORE_U8(ctx.r31.u32 + 49, ctx.r11.u8);
	// bne cr6,0x8304d480
	if (!ctx.cr6.eq) goto loc_8304D480;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8304d480
	if (!ctx.cr6.eq) goto loc_8304D480;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8304d180
	ctx.lr = 0x8304D478;
	sub_8304D180(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_8304D480:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_8304D48C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8304D498"))) PPC_WEAK_FUNC(sub_8304D498);
PPC_FUNC_IMPL(__imp__sub_8304D498) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8304D4A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// bl 0x82fa7cf0
	ctx.lr = 0x8304D4D4;
	sub_82FA7CF0(ctx, base);
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// bl 0x82fa7cf0
	ctx.lr = 0x8304D4E4;
	sub_82FA7CF0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// sth r28,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r28.u16);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r30,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r30.u8);
	// stb r11,61(r31)
	PPC_STORE_U8(ctx.r31.u32 + 61, ctx.r11.u8);
	// stb r11,62(r31)
	PPC_STORE_U8(ctx.r31.u32 + 62, ctx.r11.u8);
	// lfs f0,5184(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// stb r30,63(r31)
	PPC_STORE_U8(ctx.r31.u32 + 63, ctx.r30.u8);
	// stfs f0,372(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 372, temp.u32);
	// stfs f0,380(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 380, temp.u32);
	// stw r30,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r30.u32);
	// stfs f0,388(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 388, temp.u32);
	// stw r30,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r30.u32);
	// stfs f0,396(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 396, temp.u32);
	// stw r30,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r30.u32);
	// stw r30,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8304D534"))) PPC_WEAK_FUNC(sub_8304D534);
PPC_FUNC_IMPL(__imp__sub_8304D534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8304D538"))) PPC_WEAK_FUNC(sub_8304D538);
PPC_FUNC_IMPL(__imp__sub_8304D538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x8304D540;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r28,r3,12
	ctx.r28.s64 = ctx.r3.s64 + 12;
loc_8304D54C:
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8304d5b4
	if (ctx.cr6.eq) goto loc_8304D5B4;
	// lwz r3,252(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 252);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8304D56C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r29,256
	ctx.r31.s64 = ctx.r29.s64 + 256;
	// li r30,4
	ctx.r30.s64 = 4;
loc_8304D574:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8304d584
	if (ctx.cr6.eq) goto loc_8304D584;
	// bl 0x83057f08
	ctx.lr = 0x8304D584;
	sub_83057F08(ctx, base);
loc_8304D584:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8304d574
	if (!ctx.cr0.eq) goto loc_8304D574;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8304D5A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r27,2
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 2, ctx.xer);
	// blt cr6,0x8304d54c
	if (ctx.cr6.lt) goto loc_8304D54C;
loc_8304D5B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8304D5BC"))) PPC_WEAK_FUNC(sub_8304D5BC);
PPC_FUNC_IMPL(__imp__sub_8304D5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8304D5C0"))) PPC_WEAK_FUNC(sub_8304D5C0);
PPC_FUNC_IMPL(__imp__sub_8304D5C0) {
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
	// lwz r3,252(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// bl 0x8306bfb0
	ctx.lr = 0x8304D5E0;
	sub_8306BFB0(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
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

__attribute__((alias("__imp__sub_8304D5FC"))) PPC_WEAK_FUNC(sub_8304D5FC);
PPC_FUNC_IMPL(__imp__sub_8304D5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8304D600"))) PPC_WEAK_FUNC(sub_8304D600);
PPC_FUNC_IMPL(__imp__sub_8304D600) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r3,252(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// beq cr6,0x8304d634
	if (ctx.cr6.eq) goto loc_8304D634;
	// bl 0x8306bfb0
	ctx.lr = 0x8304D62C;
	sub_8306BFB0(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x8304d63c
	goto loc_8304D63C;
loc_8304D634:
	// bl 0x8306bfb8
	ctx.lr = 0x8304D638;
	sub_8306BFB8(ctx, base);
	// li r10,3
	ctx.r10.s64 = 3;
loc_8304D63C:
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

__attribute__((alias("__imp__sub_8304D654"))) PPC_WEAK_FUNC(sub_8304D654);
PPC_FUNC_IMPL(__imp__sub_8304D654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8304D658"))) PPC_WEAK_FUNC(sub_8304D658);
PPC_FUNC_IMPL(__imp__sub_8304D658) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// beq cr6,0x8304d68c
	if (ctx.cr6.eq) goto loc_8304D68C;
	// lwz r3,252(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// bl 0x8306bfb0
	ctx.lr = 0x8304D684;
	sub_8306BFB0(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x8304d6a4
	goto loc_8304D6A4;
loc_8304D68C:
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x8306b2a8
	ctx.lr = 0x8304D694;
	sub_8306B2A8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,252(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// bl 0x8306c008
	ctx.lr = 0x8304D6A0;
	sub_8306C008(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
loc_8304D6A4:
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

__attribute__((alias("__imp__sub_8304D6BC"))) PPC_WEAK_FUNC(sub_8304D6BC);
PPC_FUNC_IMPL(__imp__sub_8304D6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8304D6C0"))) PPC_WEAK_FUNC(sub_8304D6C0);
PPC_FUNC_IMPL(__imp__sub_8304D6C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,816(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 816);
	ctx.f13.f64 = double(temp.f32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f0,5184(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x8304d6e0
	if (!ctx.cr6.eq) goto loc_8304D6E0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8304D6E0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8304d704
	if (!ctx.cr6.eq) goto loc_8304D704;
	// lbz r9,63(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 63);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8304d704
	if (!ctx.cr6.eq) goto loc_8304D704;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,63(r11)
	PPC_STORE_U8(ctx.r11.u32 + 63, ctx.r10.u8);
	// blr 
	return;
loc_8304D704:
	// stb r10,63(r11)
	PPC_STORE_U8(ctx.r11.u32 + 63, ctx.r10.u8);
	// lfs f1,816(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 816);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r11,408
	ctx.r3.s64 = ctx.r11.s64 + 408;
	// b 0x83053cf8
	sub_83053CF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8304D714"))) PPC_WEAK_FUNC(sub_8304D714);
PPC_FUNC_IMPL(__imp__sub_8304D714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8304D718"))) PPC_WEAK_FUNC(sub_8304D718);
PPC_FUNC_IMPL(__imp__sub_8304D718) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8304d730
	if (ctx.cr6.eq) goto loc_8304D730;
	// b 0x83068f10
	sub_83068F10(ctx, base);
	return;
loc_8304D730:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r3,r11,192
	ctx.r3.s64 = ctx.r11.s64 + 192;
	// lwz r11,192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8304D748"))) PPC_WEAK_FUNC(sub_8304D748);
PPC_FUNC_IMPL(__imp__sub_8304D748) {
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
	// lbz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 12);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8304d7a8
	if (!ctx.cr6.eq) goto loc_8304D7A8;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8304D780;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8304d7ac
	if (!ctx.cr6.eq) goto loc_8304D7AC;
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// ori r10,r11,128
	ctx.r10.u64 = ctx.r11.u64 | 128;
	// stb r10,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r10.u8);
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
loc_8304D7A8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8304D7AC:
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

__attribute__((alias("__imp__sub_8304D7C0"))) PPC_WEAK_FUNC(sub_8304D7C0);
PPC_FUNC_IMPL(__imp__sub_8304D7C0) {
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
	// lwz r11,400(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8304d830
	if (!ctx.cr6.eq) goto loc_8304D830;
	// lwz r11,404(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 404);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8304d830
	if (!ctx.cr6.eq) goto loc_8304D830;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8304d8b0
	if (ctx.cr6.eq) goto loc_8304D8B0;
	// lwz r11,252(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8304d8b0
	if (ctx.cr6.eq) goto loc_8304D8B0;
	// lbz r10,219(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 219);
	// li r9,0
	ctx.r9.s64 = 0;
	// clrlwi r8,r10,25
	ctx.r8.u64 = ctx.r10.u32 & 0x7F;
	// stw r9,208(r11)
	PPC_STORE_U32(ctx.r11.u32 + 208, ctx.r9.u32);
	// stb r8,219(r11)
	PPC_STORE_U8(ctx.r11.u32 + 219, ctx.r8.u8);
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
loc_8304D830:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8304d8b0
	if (ctx.cr6.eq) goto loc_8304D8B0;
	// lwz r10,252(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// lbz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// rlwinm r8,r9,0,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8304d8b0
	if (ctx.cr6.eq) goto loc_8304D8B0;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8304d868
	if (ctx.cr6.eq) goto loc_8304D868;
	// bl 0x83068f10
	ctx.lr = 0x8304D864;
	sub_83068F10(ctx, base);
	// b 0x8304d87c
	goto loc_8304D87C;
loc_8304D868:
	// lwz r10,192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// addi r3,r11,192
	ctx.r3.s64 = ctx.r11.s64 + 192;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8304D87C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8304D87C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r11,192
	ctx.r3.s64 = ctx.r11.s64 + 192;
	// lwz r11,192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8304D894;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8304d8b0
	if (ctx.cr6.eq) goto loc_8304D8B0;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,252(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// bl 0x8306bfb0
	ctx.lr = 0x8304D8A8;
	sub_8306BFB0(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
loc_8304D8B0:
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

__attribute__((alias("__imp__sub_8304D8C4"))) PPC_WEAK_FUNC(sub_8304D8C4);
PPC_FUNC_IMPL(__imp__sub_8304D8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8304D8C8"))) PPC_WEAK_FUNC(sub_8304D8C8);
PPC_FUNC_IMPL(__imp__sub_8304D8C8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r3,r3,368
	ctx.r3.s64 = ctx.r3.s64 + 368;
	// b 0x82a75220
	sub_82A75220(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8304D8DC"))) PPC_WEAK_FUNC(sub_8304D8DC);
PPC_FUNC_IMPL(__imp__sub_8304D8DC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304D8E0"))) PPC_WEAK_FUNC(sub_8304D8E0);
PPC_FUNC_IMPL(__imp__sub_8304D8E0) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8304d91c
	if (ctx.cr6.eq) goto loc_8304D91C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8304d930
	if (ctx.cr6.eq) goto loc_8304D930;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r3,252(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// bl 0x8306bfb0
	ctx.lr = 0x8304D914;
	sub_8306BFB0(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x8304d92c
	goto loc_8304D92C;
loc_8304D91C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,252(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// bl 0x8306c0a0
	ctx.lr = 0x8304D928;
	sub_8306C0A0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
loc_8304D92C:
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
loc_8304D930:
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

__attribute__((alias("__imp__sub_8304D944"))) PPC_WEAK_FUNC(sub_8304D944);
PPC_FUNC_IMPL(__imp__sub_8304D944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8304D948"))) PPC_WEAK_FUNC(sub_8304D948);
PPC_FUNC_IMPL(__imp__sub_8304D948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7654
	ctx.lr = 0x8304D950;
	__savegprlr_19(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,252(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 252);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// addi r19,r3,352
	ctx.r19.s64 = ctx.r3.s64 + 352;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lhz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// lwz r27,8(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r10,108(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 108);
	// ld r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 32);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// bl 0x83058438
	ctx.lr = 0x8304D994;
	sub_83058438(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8304db20
	if (!ctx.cr6.eq) goto loc_8304DB20;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// li r20,0
	ctx.r20.s64 = 0;
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// li r26,2
	ctx.r26.s64 = 2;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// addi r25,r24,256
	ctx.r25.s64 = ctx.r24.s64 + 256;
	// addi r29,r27,232
	ctx.r29.s64 = ctx.r27.s64 + 232;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r21,-31969
	ctx.r21.s64 = -2095120384;
	// addi r22,r11,-12640
	ctx.r22.s64 = ctx.r11.s64 + -12640;
loc_8304D9C8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8304da60
	if (ctx.cr6.eq) goto loc_8304DA60;
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-11264(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + -11264);
	// bl 0x82fd6b98
	ctx.lr = 0x8304D9E0;
	sub_82FD6B98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8304db28
	if (ctx.cr6.eq) goto loc_8304DB28;
	// stw r22,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r22.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r20,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r20.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83057de0
	ctx.lr = 0x8304DA08;
	sub_83057DE0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8304da44
	if (ctx.cr6.eq) goto loc_8304DA44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83057fa0
	ctx.lr = 0x8304DA18;
	sub_83057FA0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r28,-11264(r21)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r21.u32 + -11264);
	// bctrl 
	ctx.lr = 0x8304DA34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82fd6cc8
	ctx.lr = 0x8304DA40;
	sub_82FD6CC8(ctx, base);
	// b 0x8304da60
	goto loc_8304DA60;
loc_8304DA44:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// stw r31,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r31.u32);
	// rlwinm r10,r26,2,22,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0x3FC;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// clrlwi r26,r8,24
	ctx.r26.u64 = ctx.r8.u32 & 0xFF;
	// stwx r31,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r31.u32);
loc_8304DA60:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x8304d9c8
	if (ctx.cr6.lt) goto loc_8304D9C8;
	// addi r31,r24,192
	ctx.r31.s64 = ctx.r24.s64 + 192;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83053d88
	ctx.lr = 0x8304DA88;
	sub_83053D88(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8304db1c
	if (!ctx.cr6.eq) goto loc_8304DB1C;
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// lwz r10,416(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 416);
	// rlwinm r9,r26,2,22,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0x3FC;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// clrlwi r30,r7,24
	ctx.r30.u64 = ctx.r7.u32 & 0xFF;
	// stwx r31,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r31.u32);
	// bne cr6,0x8304dad4
	if (!ctx.cr6.eq) goto loc_8304DAD4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r3,r23,408
	ctx.r3.s64 = ctx.r23.s64 + 408;
	// bl 0x83053d88
	ctx.lr = 0x8304DAC8;
	sub_83053D88(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8304db1c
	if (!ctx.cr6.eq) goto loc_8304DB1C;
loc_8304DAD4:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8304db1c
	if (ctx.cr6.eq) goto loc_8304DB1C;
loc_8304DAE8:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,-4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8304DB0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r31,255
	ctx.r9.s64 = ctx.r31.s64 + 255;
	// clrlwi r31,r9,24
	ctx.r31.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8304dae8
	if (!ctx.cr6.eq) goto loc_8304DAE8;
loc_8304DB1C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8304DB20:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82fa76a4
	__restgprlr_19(ctx, base);
	return;
loc_8304DB28:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82fa76a4
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8304DB34"))) PPC_WEAK_FUNC(sub_8304DB34);
PPC_FUNC_IMPL(__imp__sub_8304DB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8304DB38"))) PPC_WEAK_FUNC(sub_8304DB38);
PPC_FUNC_IMPL(__imp__sub_8304DB38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x8304DB40;
	__savegprlr_14(ctx, base);
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// li r14,0
	ctx.r14.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r3.u32);
	// mr r16,r4
	ctx.r16.u64 = ctx.r4.u64;
	// stw r6,572(r1)
	PPC_STORE_U32(ctx.r1.u32 + 572, ctx.r6.u32);
	// mr r18,r5
	ctx.r18.u64 = ctx.r5.u64;
	// stw r14,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r14.u32);
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// mr r22,r14
	ctx.r22.u64 = ctx.r14.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8304db98
	if (ctx.cr6.eq) goto loc_8304DB98;
loc_8304DB80:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8304db80
	if (!ctx.cr6.eq) goto loc_8304DB80;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
loc_8304DB98:
	// stw r14,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r14.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x83023b98
	ctx.lr = 0x8304DBA8;
	sub_83023B98(ctx, base);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x83021b28
	ctx.lr = 0x8304DBB0;
	sub_83021B28(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lfs f31,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f31.f64 = double(temp.f32);
	// bne cr6,0x8304e380
	if (!ctx.cr6.eq) goto loc_8304E380;
	// clrlwi r24,r16,24
	ctx.r24.u64 = ctx.r16.u32 & 0xFF;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8304dc04
	if (ctx.cr6.eq) goto loc_8304DC04;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8304dbf4
	if (ctx.cr6.eq) goto loc_8304DBF4;
	// lwz r11,252(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// lfs f0,80(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8304dc08
	goto loc_8304DC08;
loc_8304DBF4:
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// lfs f0,80(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8304dc08
	goto loc_8304DC08;
loc_8304DC04:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
loc_8304DC08:
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// lfs f12,352(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 352);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f13,-11112(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11112);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bgt cr6,0x8304dc44
	if (ctx.cr6.gt) goto loc_8304DC44;
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8304dc3c
	if (ctx.cr6.eq) goto loc_8304DC3C;
	// lfs f12,356(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 356);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bgt cr6,0x8304dc44
	if (ctx.cr6.gt) goto loc_8304DC44;
loc_8304DC3C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8304dc48
	goto loc_8304DC48;
loc_8304DC44:
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_8304DC48:
	// lfs f13,336(r18)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 336);
	ctx.f13.f64 = double(temp.f32);
	// stb r11,0(r21)
	PPC_STORE_U8(ctx.r21.u32 + 0, ctx.r11.u8);
	// lfs f12,348(r18)
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 348);
	ctx.f12.f64 = double(temp.f32);
	// stfs f31,816(r23)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r23.u32 + 816, temp.u32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bne cr6,0x8304dc94
	if (!ctx.cr6.eq) goto loc_8304DC94;
	// lfs f13,352(r18)
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 352);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,340(r18)
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 340);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bne cr6,0x8304dc94
	if (!ctx.cr6.eq) goto loc_8304DC94;
	// lhz r11,358(r18)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r18.u32 + 358);
	// lhz r10,346(r18)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r18.u32 + 346);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8304dc94
	if (!ctx.cr6.eq) goto loc_8304DC94;
	// lbz r11,356(r18)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r18.u32 + 356);
	// lbz r10,344(r18)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r18.u32 + 344);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8304dc98
	if (ctx.cr6.eq) goto loc_8304DC98;
loc_8304DC94:
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_8304DC98:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r20,-16
	ctx.r20.s64 = -16;
	// li r15,368
	ctx.r15.s64 = 368;
	// li r17,384
	ctx.r17.s64 = 384;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8304defc
	if (ctx.cr6.eq) goto loc_8304DEFC;
	// lfs f13,360(r18)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 360);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,352(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 352);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bne cr6,0x8304defc
	if (!ctx.cr6.eq) goto loc_8304DEFC;
	// lfs f13,364(r18)
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 364);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,356(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 356);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bne cr6,0x8304defc
	if (!ctx.cr6.eq) goto loc_8304DEFC;
	// lfs f13,368(r18)
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 368);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x8304defc
	if (!ctx.cr6.eq) goto loc_8304DEFC;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x8304dcf4
	if (ctx.cr6.eq) goto loc_8304DCF4;
	// lfs f13,372(r18)
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 372);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bne cr6,0x8304defc
	if (!ctx.cr6.eq) goto loc_8304DEFC;
loc_8304DCF4:
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// cmpwi cr6,r22,4
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 4, ctx.xer);
	// blt cr6,0x8304de60
	if (ctx.cr6.lt) goto loc_8304DE60;
	// addi r5,r22,-3
	ctx.r5.s64 = ctx.r22.s64 + -3;
	// addi r10,r30,208
	ctx.r10.s64 = ctx.r30.s64 + 208;
	// addi r11,r23,76
	ctx.r11.s64 = ctx.r23.s64 + 76;
loc_8304DD0C:
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r9,r10,-148
	ctx.r9.s64 = ctx.r10.s64 + -148;
	// addi r8,r11,-32
	ctx.r8.s64 = ctx.r11.s64 + -32;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_8304DD1C:
	// lwzu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x8304dd1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304DD1C;
	// stfs f31,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// stfs f31,0(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// beq cr6,0x8304dd5c
	if (ctx.cr6.eq) goto loc_8304DD5C;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r8,r11,352
	ctx.r8.s64 = ctx.r11.s64 + 352;
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_8304DD48:
	// lwzu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x8304dd48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304DD48;
	// stfs f31,380(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 380, temp.u32);
	// stfs f31,384(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 384, temp.u32);
loc_8304DD5C:
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r9,r10,-124
	ctx.r9.s64 = ctx.r10.s64 + -124;
	// addi r8,r11,32
	ctx.r8.s64 = ctx.r11.s64 + 32;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_8304DD6C:
	// lwzu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x8304dd6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304DD6C;
	// stfs f31,60(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// stfs f31,64(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// beq cr6,0x8304ddac
	if (ctx.cr6.eq) goto loc_8304DDAC;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r9,r10,20
	ctx.r9.s64 = ctx.r10.s64 + 20;
	// addi r8,r11,416
	ctx.r8.s64 = ctx.r11.s64 + 416;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_8304DD98:
	// lwzu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x8304dd98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304DD98;
	// stfs f31,444(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 444, temp.u32);
	// stfs f31,448(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 448, temp.u32);
loc_8304DDAC:
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r9,r10,-100
	ctx.r9.s64 = ctx.r10.s64 + -100;
	// addi r8,r11,96
	ctx.r8.s64 = ctx.r11.s64 + 96;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_8304DDBC:
	// lwzu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x8304ddbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304DDBC;
	// stfs f31,124(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 124, temp.u32);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// stfs f31,128(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 128, temp.u32);
	// beq cr6,0x8304ddfc
	if (ctx.cr6.eq) goto loc_8304DDFC;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r9,r10,44
	ctx.r9.s64 = ctx.r10.s64 + 44;
	// addi r8,r11,480
	ctx.r8.s64 = ctx.r11.s64 + 480;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_8304DDE8:
	// lwzu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x8304dde8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304DDE8;
	// stfs f31,508(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 508, temp.u32);
	// stfs f31,512(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 512, temp.u32);
loc_8304DDFC:
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r9,r10,-76
	ctx.r9.s64 = ctx.r10.s64 + -76;
	// addi r8,r11,160
	ctx.r8.s64 = ctx.r11.s64 + 160;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_8304DE0C:
	// lwzu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x8304de0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304DE0C;
	// stfs f31,188(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 188, temp.u32);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// stfs f31,192(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 192, temp.u32);
	// beq cr6,0x8304de4c
	if (ctx.cr6.eq) goto loc_8304DE4C;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r9,r10,68
	ctx.r9.s64 = ctx.r10.s64 + 68;
	// addi r8,r11,544
	ctx.r8.s64 = ctx.r11.s64 + 544;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_8304DE38:
	// lwzu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x8304de38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304DE38;
	// stfs f31,572(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 572, temp.u32);
	// stfs f31,576(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 576, temp.u32);
loc_8304DE4C:
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// addi r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 + 96;
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x8304dd0c
	if (ctx.cr6.lt) goto loc_8304DD0C;
loc_8304DE60:
	// cmplw cr6,r6,r22
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r22.u32, ctx.xer);
	// bge cr6,0x8304e34c
	if (!ctx.cr6.lt) goto loc_8304E34C;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,572(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 572);
	// rlwinm r10,r6,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r8,548(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// add r7,r6,r11
	ctx.r7.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,76
	ctx.r11.s64 = ctx.r11.s64 + 76;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// subf r6,r6,r5
	ctx.r6.s64 = ctx.r5.s64 - ctx.r6.s64;
	// addi r8,r10,208
	ctx.r8.s64 = ctx.r10.s64 + 208;
loc_8304DE98:
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r10,r8,-148
	ctx.r10.s64 = ctx.r8.s64 + -148;
	// addi r9,r11,-32
	ctx.r9.s64 = ctx.r11.s64 + -32;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_8304DEA8:
	// lwzu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8304dea8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304DEA8;
	// stfs f31,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// stfs f31,0(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// beq cr6,0x8304dee8
	if (ctx.cr6.eq) goto loc_8304DEE8;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r9,r11,352
	ctx.r9.s64 = ctx.r11.s64 + 352;
	// addi r10,r8,-4
	ctx.r10.s64 = ctx.r8.s64 + -4;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_8304DED4:
	// lwzu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8304ded4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304DED4;
	// stfs f31,380(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 380, temp.u32);
	// stfs f31,384(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 384, temp.u32);
loc_8304DEE8:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// addi r8,r8,24
	ctx.r8.s64 = ctx.r8.s64 + 24;
	// bne 0x8304de98
	if (!ctx.cr0.eq) goto loc_8304DE98;
	// b 0x8304e34c
	goto loc_8304E34C;
loc_8304DEFC:
	// lwz r11,336(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 336);
	// lfs f1,352(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 352);
	ctx.f1.f64 = double(temp.f32);
	// lfs f13,356(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 356);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,348(r18)
	PPC_STORE_U32(ctx.r18.u32 + 348, ctx.r11.u32);
	// lwz r10,340(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 340);
	// stw r10,352(r18)
	PPC_STORE_U32(ctx.r18.u32 + 352, ctx.r10.u32);
	// lwz r9,344(r18)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r18.u32 + 344);
	// stfs f1,360(r18)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r18.u32 + 360, temp.u32);
	// stfs f13,364(r18)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r18.u32 + 364, temp.u32);
	// stw r9,356(r18)
	PPC_STORE_U32(ctx.r18.u32 + 356, ctx.r9.u32);
	// stfs f0,368(r18)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r18.u32 + 368, temp.u32);
	// bl 0x8304ff60
	ctx.lr = 0x8304DF2C;
	sub_8304FF60(ctx, base);
	// stfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f1,356(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 356);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8304ff60
	ctx.lr = 0x8304DF38;
	sub_8304FF60(ctx, base);
	// lhz r8,346(r18)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r18.u32 + 346);
	// lis r7,-32229
	ctx.r7.s64 = -2112159744;
	// lfs f12,336(r18)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 336);
	ctx.f12.f64 = double(temp.f32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// lfs f11,340(r18)
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 340);
	ctx.f11.f64 = double(temp.f32);
	// lis r4,-32232
	ctx.r4.s64 = -2112356352;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// std r5,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r5.u64);
	// lfd f10,96(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lfs f0,-15356(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -15356);
	ctx.f0.f64 = double(temp.f32);
	// fadds f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfs f13,-9012(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -9012);
	ctx.f13.f64 = double(temp.f32);
	// fadds f7,f11,f0
	ctx.f7.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f0,-14924(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -14924);
	ctx.f0.f64 = double(temp.f32);
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// lwz r7,4(r23)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// lbz r6,344(r18)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r18.u32 + 344);
	// fmuls f1,f8,f13
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmuls f2,f7,f13
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmuls f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// bl 0x830577a8
	ctx.lr = 0x8304DF98;
	sub_830577A8(ctx, base);
	// lwz r3,4(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// mr r25,r14
	ctx.r25.u64 = ctx.r14.u64;
	// rlwinm r11,r3,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8304dfc0
	if (ctx.cr6.eq) goto loc_8304DFC0;
loc_8304DFAC:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8304dfac
	if (!ctx.cr6.eq) goto loc_8304DFAC;
loc_8304DFC0:
	// li r26,16
	ctx.r26.s64 = 16;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x8304e004
	if (ctx.cr6.eq) goto loc_8304E004;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8304e004
	if (ctx.cr6.eq) goto loc_8304E004;
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// addi r10,r19,48
	ctx.r10.s64 = ctx.r19.s64 + 48;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
loc_8304DFE8:
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v62,r11,r9
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stvx128 v62,r10,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// bdnz 0x8304dfe8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304DFE8;
loc_8304E004:
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r9,64
	ctx.r9.s64 = 64;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r7,128
	ctx.r7.s64 = 128;
	// cmpwi cr6,r25,4
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 4, ctx.xer);
	// blt cr6,0x8304e104
	if (ctx.cr6.lt) goto loc_8304E104;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// li r30,-80
	ctx.r30.s64 = -80;
	// li r4,-64
	ctx.r4.s64 = -64;
	// addi r3,r25,-3
	ctx.r3.s64 = ctx.r25.s64 + -3;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// lvlx128 v61,r0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r23,128
	ctx.r11.s64 = ctx.r23.s64 + 128;
	// li r31,-48
	ctx.r31.s64 = -48;
	// vspltw128 v63,v61,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), 0xFF));
	// li r29,-32
	ctx.r29.s64 = -32;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// li r27,32
	ctx.r27.s64 = 32;
loc_8304E050:
	// lvx128 v60,r10,r31
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r31.u32) & ~0xF), VectorMaskL));
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// stvx128 v60,r11,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v59,r10,r29
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r29.u32) & ~0xF), VectorMaskL));
	// cmplw cr6,r5,r3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r3.u32, ctx.xer);
	// stvx128 v59,r11,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v52,r11,r28
	simd::store_shuffled(ctx.v52, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r28.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v51,v52,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v51.f32, _mm_mul_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v63.f32)));
	// stvx128 v51,r11,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v50,r11,r4
	simd::store_shuffled(ctx.v50, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v49,v50,v63
	_mm_store_ps(ctx.v49.f32, _mm_mul_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v63.f32)));
	// stvx128 v49,r11,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v58,r10,r20
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r20.u32) & ~0xF), VectorMaskL));
	// stvx128 v58,r11,r20
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r20.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v57,r0,r10
	simd::store_shuffled(ctx.v57, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v57,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v48,r11,r20
	simd::store_shuffled(ctx.v48, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r20.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v47,v48,v63
	_mm_store_ps(ctx.v47.f32, _mm_mul_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v63.f32)));
	// stvx128 v47,r11,r20
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r20.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v46,r0,r11
	simd::store_shuffled(ctx.v46, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v45,v46,v63
	_mm_store_ps(ctx.v45.f32, _mm_mul_ps(_mm_load_ps(ctx.v46.f32), _mm_load_ps(ctx.v63.f32)));
	// stvx128 v45,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v45.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v56,r10,r26
	simd::store_shuffled(ctx.v56, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r26.u32) & ~0xF), VectorMaskL));
	// stvx128 v56,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v55,r10,r27
	simd::store_shuffled(ctx.v55, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r27.u32) & ~0xF), VectorMaskL));
	// stvx128 v55,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v44,r11,r8
	simd::store_shuffled(ctx.v44, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v43,v44,v63
	_mm_store_ps(ctx.v43.f32, _mm_mul_ps(_mm_load_ps(ctx.v44.f32), _mm_load_ps(ctx.v63.f32)));
	// stvx128 v43,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v43.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v42,r11,r9
	simd::store_shuffled(ctx.v42, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v41,v42,v63
	_mm_store_ps(ctx.v41.f32, _mm_mul_ps(_mm_load_ps(ctx.v42.f32), _mm_load_ps(ctx.v63.f32)));
	// stvx128 v41,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v41.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v54,r10,r8
	simd::store_shuffled(ctx.v54, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v53,r10,r9
	simd::store_shuffled(ctx.v53, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// stvx128 v54,r11,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v53,r11,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v40,r11,r6
	simd::store_shuffled(ctx.v40, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v39,v40,v63
	_mm_store_ps(ctx.v39.f32, _mm_mul_ps(_mm_load_ps(ctx.v40.f32), _mm_load_ps(ctx.v63.f32)));
	// stvx128 v39,r11,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v39.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v38,r11,r7
	simd::store_shuffled(ctx.v38, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v37,v38,v63
	_mm_store_ps(ctx.v37.f32, _mm_mul_ps(_mm_load_ps(ctx.v38.f32), _mm_load_ps(ctx.v63.f32)));
	// stvx128 v37,r11,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v37.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// blt cr6,0x8304e050
	if (ctx.cr6.lt) goto loc_8304E050;
loc_8304E104:
	// cmplw cr6,r5,r25
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x8304e16c
	if (!ctx.cr6.lt) goto loc_8304E16C;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// rlwinm r11,r5,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r4,r5,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r5,r5,r25
	ctx.r5.s64 = ctx.r25.s64 - ctx.r5.s64;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// lvlx128 v36,r0,r3
	temp.u32 = ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v36.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// vspltw128 v63,v36,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v36.u32), 0xFF));
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_8304E138:
	// lvx128 v35,r0,r10
	simd::store_shuffled(ctx.v35, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v34,r10,r26
	simd::store_shuffled(ctx.v34, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r26.u32) & ~0xF), VectorMaskL));
	// vor128 v62,v35,v35
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_load_si128((__m128i*)ctx.v35.u8));
	// vor128 v33,v34,v34
	_mm_store_si128((__m128i*)ctx.v33.u8, _mm_load_si128((__m128i*)ctx.v34.u8));
	// stvx128 v35,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v35.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v34,r11,r26
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v34.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// vmulfp128 v61,v62,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v61.f32, _mm_mul_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v32,v33,v63
	_mm_store_ps(ctx.v32.f32, _mm_mul_ps(_mm_load_ps(ctx.v33.f32), _mm_load_ps(ctx.v63.f32)));
	// stvx128 v61,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v32,r11,r26
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v32.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// bdnz 0x8304e138
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304E138;
loc_8304E16C:
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8304e19c
	if (ctx.cr6.eq) goto loc_8304E19C;
	// addi r11,r22,-1
	ctx.r11.s64 = ctx.r22.s64 + -1;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// std r14,48(r11)
	PPC_STORE_U64(ctx.r11.u32 + 48, ctx.r14.u64);
	// std r14,56(r11)
	PPC_STORE_U64(ctx.r11.u32 + 56, ctx.r14.u64);
	// std r14,64(r11)
	PPC_STORE_U64(ctx.r11.u32 + 64, ctx.r14.u64);
	// std r14,72(r11)
	PPC_STORE_U64(ctx.r11.u32 + 72, ctx.r14.u64);
	// stfs f30,68(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
loc_8304E19C:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8304e310
	if (ctx.cr6.eq) goto loc_8304E310;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x8304e2b0
	if (ctx.cr6.lt) goto loc_8304E2B0;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,572(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 572);
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// addi r3,r5,-3
	ctx.r3.s64 = ctx.r5.s64 + -3;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// lvlx128 v60,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
	// mr r29,r17
	ctx.r29.u64 = ctx.r17.u64;
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// vspltw128 v63,v60,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), 0xFF));
	// li r22,432
	ctx.r22.s64 = 432;
	// li r23,448
	ctx.r23.s64 = 448;
	// li r24,496
	ctx.r24.s64 = 496;
	// li r25,512
	ctx.r25.s64 = 512;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r26,560
	ctx.r26.s64 = 560;
	// li r10,192
	ctx.r10.s64 = 192;
	// li r27,576
	ctx.r27.s64 = 576;
loc_8304E200:
	// lvx128 v59,r11,r31
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r31.u32) & ~0xF), VectorMaskL));
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// stvx128 v59,r11,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v58,r0,r11
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// stvx128 v58,r11,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v57,r11,r28
	simd::store_shuffled(ctx.v57, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r28.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v56,v57,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v56.f32, _mm_mul_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v63.f32)));
	// stvx128 v56,r11,r20
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r20.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v55,r0,r11
	simd::store_shuffled(ctx.v55, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v54,v55,v63
	_mm_store_ps(ctx.v54.f32, _mm_mul_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v63.f32)));
	// stvx128 v54,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v53,r11,r8
	simd::store_shuffled(ctx.v53, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// stvx128 v53,r11,r22
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r22.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v52,r11,r9
	simd::store_shuffled(ctx.v52, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v52,r11,r23
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r23.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v51,r11,r8
	simd::store_shuffled(ctx.v51, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v50,v51,v63
	_mm_store_ps(ctx.v50.f32, _mm_mul_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v63.f32)));
	// stvx128 v50,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v49,r11,r9
	simd::store_shuffled(ctx.v49, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v48,v49,v63
	_mm_store_ps(ctx.v48.f32, _mm_mul_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v63.f32)));
	// stvx128 v48,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v47,r11,r6
	simd::store_shuffled(ctx.v47, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// stvx128 v47,r11,r24
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v46,r11,r7
	simd::store_shuffled(ctx.v46, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// stvx128 v46,r11,r25
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r25.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v46.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v45,r11,r6
	simd::store_shuffled(ctx.v45, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v44,v45,v63
	_mm_store_ps(ctx.v44.f32, _mm_mul_ps(_mm_load_ps(ctx.v45.f32), _mm_load_ps(ctx.v63.f32)));
	// stvx128 v44,r11,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v44.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v43,r11,r7
	simd::store_shuffled(ctx.v43, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v42,v43,v63
	_mm_store_ps(ctx.v42.f32, _mm_mul_ps(_mm_load_ps(ctx.v43.f32), _mm_load_ps(ctx.v63.f32)));
	// stvx128 v42,r11,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v42.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v41,r11,r5
	simd::store_shuffled(ctx.v41, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// stvx128 v41,r11,r26
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v41.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v40,r11,r10
	simd::store_shuffled(ctx.v40, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v40,r11,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v40.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v39,r11,r5
	simd::store_shuffled(ctx.v39, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v38,v39,v63
	_mm_store_ps(ctx.v38.f32, _mm_mul_ps(_mm_load_ps(ctx.v39.f32), _mm_load_ps(ctx.v63.f32)));
	// stvx128 v38,r11,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v38.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v37,r11,r10
	simd::store_shuffled(ctx.v37, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v36,v37,v63
	_mm_store_ps(ctx.v36.f32, _mm_mul_ps(_mm_load_ps(ctx.v37.f32), _mm_load_ps(ctx.v63.f32)));
	// stvx128 v36,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v36.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// blt cr6,0x8304e200
	if (ctx.cr6.lt) goto loc_8304E200;
loc_8304E2B0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8304e310
	if (!ctx.cr6.lt) goto loc_8304E310;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// lwz r9,572(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 572);
	// subf r8,r4,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r7,r4,1
	ctx.r7.s64 = ctx.r4.s64 + 1;
	// rlwinm r11,r7,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0xFFFFFFC0;
	// lvlx128 v35,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v35.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// vspltw128 v63,v35,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v35.u32), 0xFF));
loc_8304E2E0:
	// lvx128 v34,r11,r20
	simd::store_shuffled(ctx.v34, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r20.u32) & ~0xF), VectorMaskL));
	// stvx128 v34,r11,r15
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r15.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v34.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v33,r0,r11
	simd::store_shuffled(ctx.v33, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v33,r11,r17
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r17.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v33.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v61,r0,r11
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v32,r11,r20
	simd::store_shuffled(ctx.v32, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r20.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v62,v32,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v62.f32, _mm_mul_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v60,v61,v63
	_mm_store_ps(ctx.v60.f32, _mm_mul_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v63.f32)));
	// stvx128 v62,r11,r20
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r20.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v60,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// bdnz 0x8304e2e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304E2E0;
loc_8304E310:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x8304e34c
	if (ctx.cr6.eq) goto loc_8304E34C;
	// lwz r11,572(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 572);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// addi r5,r11,48
	ctx.r5.s64 = ctx.r11.s64 + 48;
	// bl 0x83059580
	ctx.lr = 0x8304E32C;
	sub_83059580(ctx, base);
	// lhz r10,46(r19)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r19.u32 + 46);
	// lbz r9,0(r21)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r21.u32 + 0);
	// lfs f0,4(r19)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r8,r10,23,9,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x7FFFFF;
	// stfs f0,372(r18)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r18.u32 + 372, temp.u32);
	// and r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 & ctx.r9.u64;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// stb r6,0(r21)
	PPC_STORE_U8(ctx.r21.u32 + 0, ctx.r6.u8);
loc_8304E34C:
	// lwz r11,8(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8304e540
	if (ctx.cr6.eq) goto loc_8304E540;
	// lwz r11,572(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 572);
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// lwz r3,80(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 80);
	// addi r8,r11,48
	ctx.r8.s64 = ctx.r11.s64 + 48;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r7,r11,432
	ctx.r7.s64 = ctx.r11.s64 + 432;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x83050a68
	ctx.lr = 0x8304E37C;
	sub_83050A68(ctx, base);
	// b 0x8304e540
	goto loc_8304E540;
loc_8304E380:
	// addi r31,r23,48
	ctx.r31.s64 = ctx.r23.s64 + 48;
	// lwz r6,4(r23)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
	// addi r9,r23,816
	ctx.r9.s64 = ctx.r23.s64 + 816;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// addi r7,r23,432
	ctx.r7.s64 = ctx.r23.s64 + 432;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r30,352
	ctx.r4.s64 = ctx.r30.s64 + 352;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x83050e18
	ctx.lr = 0x8304E3A8;
	sub_83050E18(ctx, base);
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
	// stb r9,0(r21)
	PPC_STORE_U8(ctx.r21.u32 + 0, ctx.r9.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8304e3d4
	if (ctx.cr6.eq) goto loc_8304E3D4;
loc_8304E3C0:
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8304e3c0
	if (!ctx.cr6.eq) goto loc_8304E3C0;
loc_8304E3D4:
	// clrlwi r11,r16,24
	ctx.r11.u64 = ctx.r16.u32 & 0xFF;
	// li r15,368
	ctx.r15.s64 = 368;
	// li r17,384
	ctx.r17.s64 = 384;
	// li r20,-16
	ctx.r20.s64 = -16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8304e4a0
	if (ctx.cr6.eq) goto loc_8304E4A0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8304e510
	if (ctx.cr6.eq) goto loc_8304E510;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// lis r9,-31969
	ctx.r9.s64 = -2095120384;
	// addi r11,r23,64
	ctx.r11.s64 = ctx.r23.s64 + 64;
	// mr r8,r15
	ctx.r8.u64 = ctx.r15.u64;
	// addi r10,r10,-12656
	ctx.r10.s64 = ctx.r10.s64 + -12656;
	// addi r9,r9,-11116
	ctx.r9.s64 = ctx.r9.s64 + -11116;
loc_8304E410:
	// lvlx128 v59,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvx128 v58,r11,r8
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// vspltw128 v57,v59,0
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), 0xFF));
	// vcmpgtfp128. v56,v58,v57
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v56.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v57.f32)));
	ctx.cr6.setFromMask(_mm_load_ps(ctx.v56.f32), 0xF);
	// mfocrf r7,2
	ctx.r7.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v63,r11,r17
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r17.u32) & ~0xF), VectorMaskL));
	// vperm128 v55,v63,v63,v0
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vcmpgtfp128. v54,v55,v57
	_mm_store_ps(ctx.v54.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v57.f32)));
	ctx.cr6.setFromMask(_mm_load_ps(ctx.v54.f32), 0xF);
	// mfocrf r6,2
	ctx.r6.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// and r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 & ctx.r7.u64;
	// lbz r4,0(r21)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r21.u32 + 0);
	// lvx128 v53,r11,r20
	simd::store_shuffled(ctx.v53, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r20.u32) & ~0xF), VectorMaskL));
	// rlwinm r3,r5,0,26,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x20;
	// addic r7,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r7.s64 = ctx.r3.s64 + -1;
	// subfe r6,r7,r3
	temp.u8 = (~ctx.r7.u32 + ctx.r3.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r5,r6,r4
	ctx.r5.u64 = ctx.r6.u64 & ctx.r4.u64;
	// stb r5,0(r21)
	PPC_STORE_U8(ctx.r21.u32 + 0, ctx.r5.u8);
	// lvlx128 v52,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v51,v52,0
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v52.u32), 0xFF));
	// vcmpgtfp128. v50,v53,v51
	_mm_store_ps(ctx.v50.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v51.f32)));
	ctx.cr6.setFromMask(_mm_load_ps(ctx.v50.f32), 0xF);
	// mfocrf r4,2
	ctx.r4.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vperm128 v49,v63,v63,v0
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vcmpgtfp128. v48,v49,v51
	_mm_store_ps(ctx.v48.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v51.f32)));
	ctx.cr6.setFromMask(_mm_load_ps(ctx.v48.f32), 0xF);
	// mfocrf r3,2
	ctx.r3.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// and r7,r3,r4
	ctx.r7.u64 = ctx.r3.u64 & ctx.r4.u64;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// rlwinm r6,r7,0,26,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x20;
	// addic r4,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r4.s64 = ctx.r6.s64 + -1;
	// subfe r3,r4,r6
	temp.u8 = (~ctx.r4.u32 + ctx.r6.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r7,r3,r5
	ctx.r7.u64 = ctx.r3.u64 & ctx.r5.u64;
	// stb r7,0(r21)
	PPC_STORE_U8(ctx.r21.u32 + 0, ctx.r7.u8);
	// bdnz 0x8304e410
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304E410;
	// b 0x8304e510
	goto loc_8304E510;
loc_8304E4A0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8304e510
	if (ctx.cr6.eq) goto loc_8304E510;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// lis r9,-31969
	ctx.r9.s64 = -2095120384;
	// addi r11,r23,64
	ctx.r11.s64 = ctx.r23.s64 + 64;
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// addi r10,r10,-12656
	ctx.r10.s64 = ctx.r10.s64 + -12656;
	// addi r9,r9,-11116
	ctx.r9.s64 = ctx.r9.s64 + -11116;
loc_8304E4C4:
	// lvlx128 v47,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvx128 v46,r11,r8
	simd::store_shuffled(ctx.v46, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// vspltw128 v45,v47,0
	_mm_store_si128((__m128i*)ctx.v45.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v47.u32), 0xFF));
	// vcmpgtfp128. v44,v46,v45
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v44.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v46.f32), _mm_load_ps(ctx.v45.f32)));
	ctx.cr6.setFromMask(_mm_load_ps(ctx.v44.f32), 0xF);
	// mfocrf r7,2
	ctx.r7.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vperm128 v43,v63,v63,v0
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vcmpgtfp128. v42,v43,v45
	_mm_store_ps(ctx.v42.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v43.f32), _mm_load_ps(ctx.v45.f32)));
	ctx.cr6.setFromMask(_mm_load_ps(ctx.v42.f32), 0xF);
	// mfocrf r6,2
	ctx.r6.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// and r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 & ctx.r7.u64;
	// lbz r4,0(r21)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r21.u32 + 0);
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// rlwinm r3,r5,0,26,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x20;
	// addic r7,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r7.s64 = ctx.r3.s64 + -1;
	// subfe r6,r7,r3
	temp.u8 = (~ctx.r7.u32 + ctx.r3.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r5,r6,r4
	ctx.r5.u64 = ctx.r6.u64 & ctx.r4.u64;
	// stb r5,0(r21)
	PPC_STORE_U8(ctx.r21.u32 + 0, ctx.r5.u8);
	// bdnz 0x8304e4c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304E4C4;
loc_8304E510:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x8304e540
	if (ctx.cr6.eq) goto loc_8304E540;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x83059580
	ctx.lr = 0x8304E528;
	sub_83059580(ctx, base);
	// lhz r11,46(r19)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r19.u32 + 46);
	// lbz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r21.u32 + 0);
	// rlwinm r9,r11,23,9,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7FFFFF;
	// and r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ctx.r10.u64;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// stb r7,0(r21)
	PPC_STORE_U8(ctx.r21.u32 + 0, ctx.r7.u8);
loc_8304E540:
	// lwz r3,548(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8304e5a8
	if (!ctx.cr6.eq) goto loc_8304E5A8;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8304e7e0
	if (ctx.cr6.eq) goto loc_8304E7E0;
	// lwz r11,572(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 572);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// li r10,-48
	ctx.r10.s64 = -48;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// li r8,-32
	ctx.r8.s64 = -32;
	// li r7,336
	ctx.r7.s64 = 336;
	// li r6,352
	ctx.r6.s64 = 352;
loc_8304E57C:
	// lvx128 v41,r11,r10
	simd::store_shuffled(ctx.v41, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v41,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v41.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v40,r11,r8
	simd::store_shuffled(ctx.v40, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// stvx128 v40,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v40.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v39,r11,r7
	simd::store_shuffled(ctx.v39, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// stvx128 v39,r11,r15
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r15.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v39.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v38,r11,r6
	simd::store_shuffled(ctx.v38, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// stvx128 v38,r11,r17
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r17.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v38.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// bdnz 0x8304e57c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304E57C;
	// b 0x8304e780
	goto loc_8304E780;
loc_8304E5A8:
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// blt cr6,0x8304e6f8
	if (ctx.cr6.lt) goto loc_8304E6F8;
	// lwz r11,572(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 572);
	// addi r5,r4,-3
	ctx.r5.s64 = ctx.r4.s64 + -3;
	// addi r10,r3,208
	ctx.r10.s64 = ctx.r3.s64 + 208;
	// addi r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 + 108;
loc_8304E5C4:
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r9,r10,-148
	ctx.r9.s64 = ctx.r10.s64 + -148;
	// addi r8,r11,-32
	ctx.r8.s64 = ctx.r11.s64 + -32;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_8304E5D4:
	// lwzu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x8304e5d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304E5D4;
	// li r7,6
	ctx.r7.s64 = 6;
	// stfs f31,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// stfs f31,0(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r8,r11,352
	ctx.r8.s64 = ctx.r11.s64 + 352;
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_8304E5F8:
	// lwzu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x8304e5f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304E5F8;
	// li r7,6
	ctx.r7.s64 = 6;
	// stfs f31,380(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 380, temp.u32);
	// stfs f31,384(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 384, temp.u32);
	// addi r9,r10,-124
	ctx.r9.s64 = ctx.r10.s64 + -124;
	// addi r8,r11,32
	ctx.r8.s64 = ctx.r11.s64 + 32;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_8304E61C:
	// lwzu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x8304e61c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304E61C;
	// li r7,6
	ctx.r7.s64 = 6;
	// stfs f31,60(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stfs f31,64(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// addi r9,r10,20
	ctx.r9.s64 = ctx.r10.s64 + 20;
	// addi r8,r11,416
	ctx.r8.s64 = ctx.r11.s64 + 416;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_8304E640:
	// lwzu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x8304e640
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304E640;
	// li r7,6
	ctx.r7.s64 = 6;
	// stfs f31,444(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 444, temp.u32);
	// stfs f31,448(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 448, temp.u32);
	// addi r9,r10,-100
	ctx.r9.s64 = ctx.r10.s64 + -100;
	// addi r8,r11,96
	ctx.r8.s64 = ctx.r11.s64 + 96;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_8304E664:
	// lwzu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x8304e664
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304E664;
	// li r7,6
	ctx.r7.s64 = 6;
	// stfs f31,124(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 124, temp.u32);
	// stfs f31,128(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 128, temp.u32);
	// addi r9,r10,44
	ctx.r9.s64 = ctx.r10.s64 + 44;
	// addi r8,r11,480
	ctx.r8.s64 = ctx.r11.s64 + 480;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_8304E688:
	// lwzu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x8304e688
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304E688;
	// li r7,6
	ctx.r7.s64 = 6;
	// stfs f31,508(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 508, temp.u32);
	// stfs f31,512(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 512, temp.u32);
	// addi r9,r10,-76
	ctx.r9.s64 = ctx.r10.s64 + -76;
	// addi r8,r11,160
	ctx.r8.s64 = ctx.r11.s64 + 160;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_8304E6AC:
	// lwzu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x8304e6ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304E6AC;
	// li r7,6
	ctx.r7.s64 = 6;
	// stfs f31,188(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 188, temp.u32);
	// stfs f31,192(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 192, temp.u32);
	// addi r9,r10,68
	ctx.r9.s64 = ctx.r10.s64 + 68;
	// addi r8,r11,544
	ctx.r8.s64 = ctx.r11.s64 + 544;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_8304E6D0:
	// lwzu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x8304e6d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304E6D0;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// stfs f31,572(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 572, temp.u32);
	// stfs f31,576(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 576, temp.u32);
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// addi r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 + 96;
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x8304e5c4
	if (ctx.cr6.lt) goto loc_8304E5C4;
loc_8304E6F8:
	// cmplw cr6,r6,r4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x8304e780
	if (!ctx.cr6.lt) goto loc_8304E780;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,572(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 572);
	// rlwinm r10,r6,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 6) & 0xFFFFFFC0;
	// add r8,r6,r11
	ctx.r8.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 + 108;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// subf r6,r6,r4
	ctx.r6.s64 = ctx.r4.s64 - ctx.r6.s64;
	// addi r10,r10,208
	ctx.r10.s64 = ctx.r10.s64 + 208;
loc_8304E728:
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r9,r10,-148
	ctx.r9.s64 = ctx.r10.s64 + -148;
	// addi r8,r11,-32
	ctx.r8.s64 = ctx.r11.s64 + -32;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_8304E738:
	// lwzu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x8304e738
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304E738;
	// li r7,6
	ctx.r7.s64 = 6;
	// stfs f31,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// stfs f31,0(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r8,r11,352
	ctx.r8.s64 = ctx.r11.s64 + 352;
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_8304E75C:
	// lwzu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x8304e75c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304E75C;
	// stfs f31,380(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 380, temp.u32);
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stfs f31,384(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 384, temp.u32);
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// bne 0x8304e728
	if (!ctx.cr0.eq) goto loc_8304E728;
loc_8304E780:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8304e7e0
	if (ctx.cr6.eq) goto loc_8304E7E0;
	// lwz r11,572(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 572);
	// addi r8,r3,208
	ctx.r8.s64 = ctx.r3.s64 + 208;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r9,r11,432
	ctx.r9.s64 = ctx.r11.s64 + 432;
loc_8304E798:
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r11,r9,-388
	ctx.r11.s64 = ctx.r9.s64 + -388;
	// addi r10,r8,-148
	ctx.r10.s64 = ctx.r8.s64 + -148;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_8304E7A8:
	// lwzu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8304e7a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304E7A8;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
	// addi r10,r8,-4
	ctx.r10.s64 = ctx.r8.s64 + -4;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_8304E7C4:
	// lwzu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8304e7c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304E7C4;
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r9,r9,64
	ctx.r9.s64 = ctx.r9.s64 + 64;
	// addi r8,r8,24
	ctx.r8.s64 = ctx.r8.s64 + 24;
	// bne 0x8304e798
	if (!ctx.cr0.eq) goto loc_8304E798;
loc_8304E7E0:
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8304E7F0"))) PPC_WEAK_FUNC(sub_8304E7F0);
PPC_FUNC_IMPL(__imp__sub_8304E7F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8304E7F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83023b98
	ctx.lr = 0x8304E818;
	sub_83023B98(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r29,r30,352
	ctx.r29.s64 = ctx.r30.s64 + 352;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8304E834;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x8304e894
	if (!ctx.cr6.eq) goto loc_8304E894;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// lfs f13,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-11112(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11112);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8304e884
	if (ctx.cr6.gt) goto loc_8304E884;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r10,r11,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8304e874
	if (ctx.cr6.eq) goto loc_8304E874;
	// lfs f13,356(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 356);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8304e884
	if (ctx.cr6.gt) goto loc_8304E884;
loc_8304E874:
	// li r11,1
	ctx.r11.s64 = 1;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_8304E884:
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_8304E894:
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r11,r11,18,14,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3FFFF;
	// clrlwi r9,r11,14
	ctx.r9.u64 = ctx.r11.u32 & 0x3FFFF;
	// rlwinm r9,r9,0,29,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8304e8b4
	if (ctx.cr6.eq) goto loc_8304E8B4;
	// li r10,4
	ctx.r10.s64 = 4;
loc_8304E8B4:
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// or r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 | ctx.r10.u64;
	// bl 0x830215d8
	ctx.lr = 0x8304E8C8;
	sub_830215D8(ctx, base);
	// bl 0x83056c48
	ctx.lr = 0x8304E8CC;
	sub_83056C48(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83050e18
	ctx.lr = 0x8304E8F4;
	sub_83050E18(ctx, base);
	// lbz r10,218(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 218);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8304e92c
	if (ctx.cr6.eq) goto loc_8304E92C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83021b28
	ctx.lr = 0x8304E90C;
	sub_83021B28(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83059580
	ctx.lr = 0x8304E91C;
	sub_83059580(ctx, base);
	// lhz r11,46(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 46);
	// rlwinm r3,r11,23,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_8304E92C:
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r9,r11,-11116
	ctx.r9.s64 = ctx.r11.s64 + -11116;
	// lvx128 v62,r0,r10
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvlx128 v61,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v61,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), 0xFF));
	// vcmpgtfp128. v60,v62,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v60.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v63.f32)));
	ctx.cr6.setFromMask(_mm_load_ps(ctx.v60.f32), 0xF);
	// mfocrf r8,2
	ctx.r8.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r7,-12656
	ctx.r5.s64 = ctx.r7.s64 + -12656;
	// lvx128 v62,r0,r6
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// vperm128 v59,v62,v62,v0
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vcmpgtfp128. v58,v59,v63
	_mm_store_ps(ctx.v58.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v63.f32)));
	ctx.cr6.setFromMask(_mm_load_ps(ctx.v58.f32), 0xF);
	// mfocrf r4,2
	ctx.r4.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// and r3,r4,r8
	ctx.r3.u64 = ctx.r4.u64 & ctx.r8.u64;
	// rlwinm r11,r3,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x20;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8304ea88
	if (ctx.cr6.eq) goto loc_8304EA88;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8304e9ac
	if (ctx.cr6.eq) goto loc_8304E9AC;
loc_8304E998:
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8304e998
	if (!ctx.cr6.eq) goto loc_8304E998;
loc_8304E9AC:
	// subfic r11,r10,1
	ctx.xer.ca = ctx.r10.u32 <= 1;
	ctx.r11.s64 = 1 - ctx.r10.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8304e9f4
	if (ctx.cr6.eq) goto loc_8304E9F4;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// lvx128 v57,r0,r10
	simd::store_shuffled(ctx.v57, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vcmpgtfp128. v56,v57,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v56.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v63.f32)));
	ctx.cr6.setFromMask(_mm_load_ps(ctx.v56.f32), 0xF);
	// mfocrf r9,2
	ctx.r9.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// lvx128 v62,r0,r8
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vperm128 v55,v62,v62,v0
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vcmpgtfp128. v54,v55,v63
	_mm_store_ps(ctx.v54.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v63.f32)));
	ctx.cr6.setFromMask(_mm_load_ps(ctx.v54.f32), 0xF);
	// mfocrf r7,2
	ctx.r7.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// and r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 & ctx.r9.u64;
	// rlwinm r5,r6,0,26,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x20;
	// addic r4,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r4.s64 = ctx.r5.s64 + -1;
	// subfe r3,r4,r5
	temp.u8 = (~ctx.r4.u32 + ctx.r5.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8304E9F4:
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8304ea88
	if (ctx.cr6.eq) goto loc_8304EA88;
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8304ea88
	if (ctx.cr6.eq) goto loc_8304EA88;
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// lvx128 v53,r0,r10
	simd::store_shuffled(ctx.v53, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vcmpgtfp128. v52,v53,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v52.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v63.f32)));
	ctx.cr6.setFromMask(_mm_load_ps(ctx.v52.f32), 0xF);
	// mfocrf r9,2
	ctx.r9.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// addi r8,r1,288
	ctx.r8.s64 = ctx.r1.s64 + 288;
	// lvx128 v62,r0,r8
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vperm128 v51,v62,v62,v0
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vcmpgtfp128. v50,v51,v63
	_mm_store_ps(ctx.v50.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v63.f32)));
	ctx.cr6.setFromMask(_mm_load_ps(ctx.v50.f32), 0xF);
	// mfocrf r7,2
	ctx.r7.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// and r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 & ctx.r9.u64;
	// rlwinm r5,r6,0,26,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x20;
	// addic r4,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r4.s64 = ctx.r5.s64 + -1;
	// subfe r3,r4,r5
	temp.u8 = (~ctx.r4.u32 + ctx.r5.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8304ea88
	if (ctx.cr6.eq) goto loc_8304EA88;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8304ea88
	if (ctx.cr6.eq) goto loc_8304EA88;
	// addi r11,r1,336
	ctx.r11.s64 = ctx.r1.s64 + 336;
	// lvx128 v49,r0,r11
	simd::store_shuffled(ctx.v49, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vcmpgtfp128. v48,v49,v63
	_mm_store_ps(ctx.v48.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v63.f32)));
	ctx.cr6.setFromMask(_mm_load_ps(ctx.v48.f32), 0xF);
	// mfocrf r10,2
	ctx.r10.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// addi r9,r1,352
	ctx.r9.s64 = ctx.r1.s64 + 352;
	// lvx128 v62,r0,r9
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vperm128 v47,v62,v62,v0
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vcmpgtfp128. v46,v47,v63
	_mm_store_ps(ctx.v46.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v47.f32), _mm_load_ps(ctx.v63.f32)));
	ctx.cr6.setFromMask(_mm_load_ps(ctx.v46.f32), 0xF);
	// mfocrf r8,2
	ctx.r8.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// and r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 & ctx.r10.u64;
	// rlwinm r6,r7,0,26,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x20;
	// addic r5,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// subfe r3,r5,r6
	temp.u8 = (~ctx.r5.u32 + ctx.r6.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r5.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8304EA88:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8304EA90"))) PPC_WEAK_FUNC(sub_8304EA90);
PPC_FUNC_IMPL(__imp__sub_8304EA90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x8304EA98;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,252(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	// bl 0x8306bf68
	ctx.lr = 0x8304EAA8;
	sub_8306BF68(ctx, base);
	// lis r27,-31969
	ctx.r27.s64 = -2095120384;
	// lwz r31,252(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 252);
	// lwz r30,-11264(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11264);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8304eae0
	if (ctx.cr6.eq) goto loc_8304EAE0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8304EAD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fd6cc8
	ctx.lr = 0x8304EAE0;
	sub_82FD6CC8(ctx, base);
loc_8304EAE0:
	// addi r30,r29,256
	ctx.r30.s64 = ctx.r29.s64 + 256;
	// li r26,4
	ctx.r26.s64 = 4;
loc_8304EAE8:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8304eb2c
	if (ctx.cr6.eq) goto loc_8304EB2C;
	// bl 0x83057fa0
	ctx.lr = 0x8304EAF8;
	sub_83057FA0(ctx, base);
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r28,-11264(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11264);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8304eb2c
	if (ctx.cr6.eq) goto loc_8304EB2C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8304EB20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82fd6cc8
	ctx.lr = 0x8304EB2C;
	sub_82FD6CC8(ctx, base);
loc_8304EB2C:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8304eae8
	if (!ctx.cr0.eq) goto loc_8304EAE8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83058468
	ctx.lr = 0x8304EB40;
	sub_83058468(ctx, base);
	// addi r31,r29,192
	ctx.r31.s64 = ctx.r29.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83053da0
	ctx.lr = 0x8304EB4C;
	sub_83053DA0(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x83053830
	ctx.lr = 0x8304EB54;
	sub_83053830(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// addi r31,r11,-14320
	ctx.r31.s64 = ctx.r11.s64 + -14320;
	// stw r31,192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 192, ctx.r31.u32);
	// bl 0x8306b2a0
	ctx.lr = 0x8304EB68;
	sub_8306B2A0(ctx, base);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-11264(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11264);
	// bl 0x82fd6cc8
	ctx.lr = 0x8304EB78;
	sub_82FD6CC8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8304EB80"))) PPC_WEAK_FUNC(sub_8304EB80);
PPC_FUNC_IMPL(__imp__sub_8304EB80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x8304EB88;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r22,0
	ctx.r22.s64 = 0;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// addi r24,r3,8
	ctx.r24.s64 = ctx.r3.s64 + 8;
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
	// lis r27,-31969
	ctx.r27.s64 = -2095120384;
	// addi r23,r11,-14320
	ctx.r23.s64 = ctx.r11.s64 + -14320;
loc_8304EBA8:
	// lwz r31,4(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8304ec94
	if (ctx.cr6.eq) goto loc_8304EC94;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// bl 0x8306bf68
	ctx.lr = 0x8304EBC0;
	sub_8306BF68(ctx, base);
	// lwz r30,252(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// lwz r29,-11264(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11264);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8304ebf4
	if (ctx.cr6.eq) goto loc_8304EBF4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8304EBE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fd6cc8
	ctx.lr = 0x8304EBF4;
	sub_82FD6CC8(ctx, base);
loc_8304EBF4:
	// addi r29,r31,256
	ctx.r29.s64 = ctx.r31.s64 + 256;
	// li r26,4
	ctx.r26.s64 = 4;
loc_8304EBFC:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8304ec40
	if (ctx.cr6.eq) goto loc_8304EC40;
	// bl 0x83057fa0
	ctx.lr = 0x8304EC0C;
	sub_83057FA0(ctx, base);
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r28,-11264(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11264);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8304ec40
	if (ctx.cr6.eq) goto loc_8304EC40;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8304EC34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82fd6cc8
	ctx.lr = 0x8304EC40;
	sub_82FD6CC8(ctx, base);
loc_8304EC40:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x8304ebfc
	if (!ctx.cr0.eq) goto loc_8304EBFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83058468
	ctx.lr = 0x8304EC54;
	sub_83058468(ctx, base);
	// addi r30,r31,192
	ctx.r30.s64 = ctx.r31.s64 + 192;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83053da0
	ctx.lr = 0x8304EC60;
	sub_83053DA0(ctx, base);
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// bl 0x83053830
	ctx.lr = 0x8304EC68;
	sub_83053830(ctx, base);
	// stw r23,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r23.u32);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x8306b2a0
	ctx.lr = 0x8304EC74;
	sub_8306B2A0(ctx, base);
	// stw r23,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r23.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-11264(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11264);
	// bl 0x82fd6cc8
	ctx.lr = 0x8304EC84;
	sub_82FD6CC8(ctx, base);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// stwu r22,4(r24)
	ea = 4 + ctx.r24.u32;
	PPC_STORE_U32(ea, ctx.r22.u32);
	ctx.r24.u32 = ea;
	// cmplwi cr6,r25,2
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 2, ctx.xer);
	// blt cr6,0x8304eba8
	if (ctx.cr6.lt) goto loc_8304EBA8;
loc_8304EC94:
	// addi r3,r21,408
	ctx.r3.s64 = ctx.r21.s64 + 408;
	// bl 0x83053da0
	ctx.lr = 0x8304EC9C;
	sub_83053DA0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8304ECA4"))) PPC_WEAK_FUNC(sub_8304ECA4);
PPC_FUNC_IMPL(__imp__sub_8304ECA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8304ECA8"))) PPC_WEAK_FUNC(sub_8304ECA8);
PPC_FUNC_IMPL(__imp__sub_8304ECA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x8304ECB0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x8306bd98
	ctx.lr = 0x8304ECCC;
	sub_8306BD98(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8304ece4
	if (!ctx.cr6.eq) goto loc_8304ECE4;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
loc_8304ECE4:
	// clrlwi r31,r31,24
	ctx.r31.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8304ed00
	if (ctx.cr6.eq) goto loc_8304ED00;
	// addi r4,r29,400
	ctx.r4.s64 = ctx.r29.s64 + 400;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83021458
	ctx.lr = 0x8304ECFC;
	sub_83021458(ctx, base);
	// stw r3,404(r29)
	PPC_STORE_U32(ctx.r29.u32 + 404, ctx.r3.u32);
loc_8304ED00:
	// lwz r11,404(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 404);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8304ed20
	if (ctx.cr6.eq) goto loc_8304ED20;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8304e7f0
	ctx.lr = 0x8304ED20;
	sub_8304E7F0(ctx, base);
loc_8304ED20:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8304ed68
	if (ctx.cr6.eq) goto loc_8304ED68;
	// lwz r10,404(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 404);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8304ed40
	if (!ctx.cr6.eq) goto loc_8304ED40;
	// li r28,3
	ctx.r28.s64 = 3;
	// b 0x8304ed78
	goto loc_8304ED78;
loc_8304ED40:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8304ed68
	if (ctx.cr6.eq) goto loc_8304ED68;
	// lwz r11,400(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 400);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8304ed68
	if (!ctx.cr6.eq) goto loc_8304ED68;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8304ed68
	if (ctx.cr6.eq) goto loc_8304ED68;
	// li r28,1
	ctx.r28.s64 = 1;
	// stb r30,61(r29)
	PPC_STORE_U8(ctx.r29.u32 + 61, ctx.r30.u8);
	// b 0x8304ed78
	goto loc_8304ED78;
loc_8304ED68:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8304d748
	ctx.lr = 0x8304ED74;
	sub_8304D748(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_8304ED78:
	// lis r26,-31969
	ctx.r26.s64 = -2095120384;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// beq cr6,0x8304ed90
	if (ctx.cr6.eq) goto loc_8304ED90;
	// cmpwi cr6,r28,63
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 63, ctx.xer);
	// bne cr6,0x8304ede8
	if (!ctx.cr6.eq) goto loc_8304EDE8;
loc_8304ED90:
	// li r4,272
	ctx.r4.s64 = 272;
	// lwz r3,-11264(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11264);
	// bl 0x82fd6b98
	ctx.lr = 0x8304ED9C;
	sub_82FD6B98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8304ee14
	if (ctx.cr6.eq) goto loc_8304EE14;
	// bl 0x8304fbc8
	ctx.lr = 0x8304EDAC;
	sub_8304FBC8(ctx, base);
	// stw r27,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r27.u32);
	// stw r30,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r30.u32);
	// addi r11,r31,256
	ctx.r11.s64 = ctx.r31.s64 + 256;
	// stw r30,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r30.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r30.u32);
	// addi r10,r29,12
	ctx.r10.s64 = ctx.r29.s64 + 12;
	// stw r30,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r30.u32);
loc_8304EDCC:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8304ee04
	if (ctx.cr6.eq) goto loc_8304EE04;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x8304edcc
	if (ctx.cr6.lt) goto loc_8304EDCC;
loc_8304EDE8:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bne cr6,0x8304ee58
	if (!ctx.cr6.eq) goto loc_8304EE58;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8304d948
	ctx.lr = 0x8304EDFC;
	sub_8304D948(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
loc_8304EE04:
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r10,r29
	PPC_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.r31.u32);
	// b 0x8304ede8
	goto loc_8304EDE8;
loc_8304EE14:
	// li r28,52
	ctx.r28.s64 = 52;
loc_8304EE18:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8306bf68
	ctx.lr = 0x8304EE24;
	sub_8306BF68(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r31,-11264(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11264);
	// bctrl 
	ctx.lr = 0x8304EE40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fd6cc8
	ctx.lr = 0x8304EE4C;
	sub_82FD6CC8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
loc_8304EE58:
	// cmpwi cr6,r28,63
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 63, ctx.xer);
	// bne cr6,0x8304ee6c
	if (!ctx.cr6.eq) goto loc_8304EE6C;
	// li r3,63
	ctx.r3.s64 = 63;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
loc_8304EE6C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8304ee18
	if (ctx.cr6.eq) goto loc_8304EE18;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8304ea90
	ctx.lr = 0x8304EE80;
	sub_8304EA90(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8304EE8C"))) PPC_WEAK_FUNC(sub_8304EE8C);
PPC_FUNC_IMPL(__imp__sub_8304EE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8304EE90"))) PPC_WEAK_FUNC(sub_8304EE90);
PPC_FUNC_IMPL(__imp__sub_8304EE90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8304EE98;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,3
	ctx.r11.s64 = ctx.r4.s64 + 3;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// add r29,r11,r3
	ctx.r29.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// bl 0x8304ea90
	ctx.lr = 0x8304EEBC;
	sub_8304EA90(ctx, base);
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// bge cr6,0x8304eef0
	if (!ctx.cr6.lt) goto loc_8304EEF0;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// subfic r10,r31,1
	ctx.xer.ca = ctx.r31.u32 <= 1;
	ctx.r10.s64 = 1 - ctx.r31.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82fa7c48
	ctx.lr = 0x8304EEE0;
	sub_82FA7C48(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_8304EEF0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8304EF00"))) PPC_WEAK_FUNC(sub_8304EF00);
PPC_FUNC_IMPL(__imp__sub_8304EF00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8304EF08;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,12
	ctx.r28.s64 = ctx.r3.s64 + 12;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_8304EF1C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8304ef60
	if (ctx.cr6.eq) goto loc_8304EF60;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r3,252(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8304EF40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8304ef78
	if (!ctx.cr6.eq) goto loc_8304EF78;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8304ef60
	if (ctx.cr6.eq) goto loc_8304EF60;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8304ee90
	ctx.lr = 0x8304EF60;
	sub_8304EE90(ctx, base);
loc_8304EF60:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// blt cr6,0x8304ef1c
	if (ctx.cr6.lt) goto loc_8304EF1C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_8304EF78:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r3,252(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// bl 0x8306bfb0
	ctx.lr = 0x8304EF84;
	sub_8306BFB0(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8304EF94"))) PPC_WEAK_FUNC(sub_8304EF94);
PPC_FUNC_IMPL(__imp__sub_8304EF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8304EF98"))) PPC_WEAK_FUNC(sub_8304EF98);
PPC_FUNC_IMPL(__imp__sub_8304EF98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x8304EFA0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r4,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// addi r3,r10,192
	ctx.r3.s64 = ctx.r10.s64 + 192;
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// lwz r11,192(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 192);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8304EFD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,172(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,17
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 17, ctx.xer);
	// subf r27,r9,r30
	ctx.r27.s64 = ctx.r30.s64 - ctx.r9.s64;
	// bne cr6,0x8304f108
	if (!ctx.cr6.eq) goto loc_8304F108;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8304f130
	if (ctx.cr6.eq) goto loc_8304F130;
	// li r26,0
	ctx.r26.s64 = 0;
loc_8304EFF4:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8304ea90
	ctx.lr = 0x8304F000;
	sub_8304EA90(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rotlwi r29,r11,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// lwz r30,252(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 252);
	// lbz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 12);
	// rlwinm r9,r10,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8304f07c
	if (!ctx.cr6.eq) goto loc_8304F07C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8304F038;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8304f06c
	if (!ctx.cr6.eq) goto loc_8304F06C;
	// lbz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r10,r11,128
	ctx.r10.u64 = ctx.r11.u64 | 128;
	// stb r10,12(r30)
	PPC_STORE_U8(ctx.r30.u32 + 12, ctx.r10.u8);
	// bl 0x8304d948
	ctx.lr = 0x8304F058;
	sub_8304D948(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8304f07c
	if (ctx.cr6.eq) goto loc_8304F07C;
loc_8304F060:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
loc_8304F06C:
	// cmpwi cr6,r3,63
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 63, ctx.xer);
	// beq cr6,0x8304f130
	if (ctx.cr6.eq) goto loc_8304F130;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8304f060
	if (ctx.cr6.eq) goto loc_8304F060;
loc_8304F07C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8306c0a0
	ctx.lr = 0x8304F084;
	sub_8306C0A0(ctx, base);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r31,352
	ctx.r4.s64 = ctx.r31.s64 + 352;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8304F09C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8304f0f8
	if (ctx.cr6.eq) goto loc_8304F0F8;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r3,r29,192
	ctx.r3.s64 = ctx.r29.s64 + 192;
	// lwz r11,192(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 192);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8304F0C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,45
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 45, ctx.xer);
	// subf r27,r9,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r9.s64;
	// beq cr6,0x8304f130
	if (ctx.cr6.eq) goto loc_8304F130;
	// cmpwi cr6,r3,17
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 17, ctx.xer);
	// bne cr6,0x8304f060
	if (!ctx.cr6.eq) goto loc_8304F060;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8304f130
	if (ctx.cr6.eq) goto loc_8304F130;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8304eff4
	if (!ctx.cr6.eq) goto loc_8304EFF4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
loc_8304F0F8:
	// li r28,45
	ctx.r28.s64 = 45;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
loc_8304F108:
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// bne cr6,0x8304f130
	if (!ctx.cr6.eq) goto loc_8304F130;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r28,46
	ctx.r28.s64 = 46;
	// bl 0x8304d538
	ctx.lr = 0x8304F11C;
	sub_8304D538(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,252(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// bl 0x8306bfb0
	ctx.lr = 0x8304F128;
	sub_8306BFB0(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
loc_8304F130:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8304F13C"))) PPC_WEAK_FUNC(sub_8304F13C);
PPC_FUNC_IMPL(__imp__sub_8304F13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8304F140"))) PPC_WEAK_FUNC(sub_8304F140);
PPC_FUNC_IMPL(__imp__sub_8304F140) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x8304F148;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8304f16c
	if (ctx.cr6.eq) goto loc_8304F16C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
loc_8304F16C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,252(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// lwz r29,8(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r8,44(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8304F18C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r23,1
	ctx.r23.s64 = 1;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8304f1a4
	if (ctx.cr6.eq) goto loc_8304F1A4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stb r23,851(r27)
	PPC_STORE_U8(ctx.r27.u32 + 851, ctx.r23.u8);
	// beq cr6,0x8304f314
	if (ctx.cr6.eq) goto loc_8304F314;
loc_8304F1A4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r31,352
	ctx.r4.s64 = ctx.r31.s64 + 352;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8304F1BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,108(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r8,36(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// rlwinm r4,r8,18,14,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 18) & 0x3FFFF;
	// bl 0x83068e80
	ctx.lr = 0x8304F1D0;
	sub_83068E80(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lbz r4,848(r27)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r27.u32 + 848);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8304db38
	ctx.lr = 0x8304F1E8;
	sub_8304DB38(ctx, base);
	// lbz r7,62(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 62);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lbz r24,80(r1)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// beq cr6,0x8304f208
	if (ctx.cr6.eq) goto loc_8304F208;
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8304f20c
	if (!ctx.cr6.eq) goto loc_8304F20C;
loc_8304F208:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_8304F20C:
	// clrlwi r10,r24,24
	ctx.r10.u64 = ctx.r24.u32 & 0xFF;
	// clrlwi r26,r11,24
	ctx.r26.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8304f22c
	if (!ctx.cr6.eq) goto loc_8304F22C;
	// lbz r11,218(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 218);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8304f258
	if (ctx.cr6.eq) goto loc_8304F258;
loc_8304F22C:
	// lbz r11,217(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 217);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8304f244
	if (ctx.cr6.eq) goto loc_8304F244;
	// stb r23,851(r27)
	PPC_STORE_U8(ctx.r27.u32 + 851, ctx.r23.u8);
	// b 0x8304f258
	goto loc_8304F258;
loc_8304F244:
	// lbz r11,218(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 218);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8304f258
	if (ctx.cr6.eq) goto loc_8304F258;
	// stb r23,850(r27)
	PPC_STORE_U8(ctx.r27.u32 + 850, ctx.r23.u8);
loc_8304F258:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// stb r26,849(r27)
	PPC_STORE_U8(ctx.r27.u32 + 849, ctx.r26.u8);
	// lwz r25,12(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8304f388
	if (ctx.cr6.eq) goto loc_8304F388;
	// lbz r11,61(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 61);
	// lwz r4,252(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 252);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8304f290
	if (ctx.cr6.eq) goto loc_8304F290;
	// lbz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 12);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8304f46c
	if (!ctx.cr6.eq) goto loc_8304F46C;
loc_8304F290:
	// lwz r11,404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8304f46c
	if (!ctx.cr6.eq) goto loc_8304F46C;
	// lbz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 12);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8304f2e8
	if (!ctx.cr6.eq) goto loc_8304F2E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8304d748
	ctx.lr = 0x8304F2B4;
	sub_8304D748(ctx, base);
	// cmpwi cr6,r3,63
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 63, ctx.xer);
	// bne cr6,0x8304f2c4
	if (!ctx.cr6.eq) goto loc_8304F2C4;
	// li r26,0
	ctx.r26.s64 = 0;
	// b 0x8304f468
	goto loc_8304F468;
loc_8304F2C4:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8304f46c
	if (ctx.cr6.eq) goto loc_8304F46C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,252(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// bl 0x8306bfb0
	ctx.lr = 0x8304F2D8;
	sub_8306BFB0(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// b 0x8304f468
	goto loc_8304F468;
loc_8304F2E8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,400(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8304F304;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8304f334
	if (ctx.cr6.eq) goto loc_8304F334;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8304f340
	if (!ctx.cr6.eq) goto loc_8304F340;
loc_8304F314:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,252(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// bl 0x8306bfb0
	ctx.lr = 0x8304F320;
	sub_8306BFB0(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
loc_8304F334:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x830584f0
	ctx.lr = 0x8304F33C;
	sub_830584F0(ctx, base);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_8304F340:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,400(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// addi r3,r11,192
	ctx.r3.s64 = ctx.r11.s64 + 192;
	// lwz r11,192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8304F360;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8304f46c
	if (ctx.cr6.eq) goto loc_8304F46C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,252(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// bl 0x8306bfb0
	ctx.lr = 0x8304F374;
	sub_8306BFB0(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
loc_8304F388:
	// lwz r11,404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8304f450
	if (!ctx.cr6.eq) goto loc_8304F450;
	// lbz r11,61(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 61);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8304f3bc
	if (ctx.cr6.eq) goto loc_8304F3BC;
	// lwz r11,192(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 192);
	// addi r3,r25,192
	ctx.r3.s64 = ctx.r25.s64 + 192;
	// lwz r4,400(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8304F3BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8304F3BC:
	// lwz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8304f3e4
	if (!ctx.cr6.eq) goto loc_8304F3E4;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r11,192
	ctx.r3.s64 = ctx.r11.s64 + 192;
	// lwz r11,192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8304F3E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8304f46c
	goto loc_8304F46C;
loc_8304F3E4:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8304f46c
	if (!ctx.cr6.eq) goto loc_8304F46C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r11,192
	ctx.r3.s64 = ctx.r11.s64 + 192;
	// lwz r11,192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8304F404;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r9,12(r27)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r27.u32 + 12);
	// lwz r11,308(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 308);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8304f424
	if (ctx.cr6.lt) goto loc_8304F424;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stw r11,308(r29)
	PPC_STORE_U32(ctx.r29.u32 + 308, ctx.r11.u32);
	// b 0x8304f46c
	goto loc_8304F46C;
loc_8304F424:
	// clrlwi r4,r9,16
	ctx.r4.u64 = ctx.r9.u32 & 0xFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8304ef98
	ctx.lr = 0x8304F430;
	sub_8304EF98(ctx, base);
	// cmpwi cr6,r3,17
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 17, ctx.xer);
	// bne cr6,0x8304f46c
	if (!ctx.cr6.eq) goto loc_8304F46C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,252(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// bl 0x8306bfb0
	ctx.lr = 0x8304F444;
	sub_8306BFB0(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// b 0x8304f46c
	goto loc_8304F46C;
loc_8304F450:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8304f46c
	if (!ctx.cr6.eq) goto loc_8304F46C;
	// lwz r3,252(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 252);
	// bl 0x8306bfb0
	ctx.lr = 0x8304F460;
	sub_8306BFB0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_8304F468:
	// li r28,0
	ctx.r28.s64 = 0;
loc_8304F46C:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// stb r26,61(r31)
	PPC_STORE_U8(ctx.r31.u32 + 61, ctx.r26.u8);
	// stb r24,62(r31)
	PPC_STORE_U8(ctx.r31.u32 + 62, ctx.r24.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8304f48c
	if (!ctx.cr6.eq) goto loc_8304F48C;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8304f4b4
	if (ctx.cr6.eq) goto loc_8304F4B4;
loc_8304F48C:
	// lhz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 12);
	// lwz r10,308(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 308);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8304f4b4
	if (ctx.cr6.lt) goto loc_8304F4B4;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r11,308(r29)
	PPC_STORE_U32(ctx.r29.u32 + 308, ctx.r11.u32);
	// lbz r10,186(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 186);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r7,r28
	ctx.r28.u64 = ctx.r7.u64 & ctx.r28.u64;
loc_8304F4B4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r23,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r23.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8304F4C4"))) PPC_WEAK_FUNC(sub_8304F4C4);
PPC_FUNC_IMPL(__imp__sub_8304F4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8304F4C8"))) PPC_WEAK_FUNC(sub_8304F4C8);
PPC_FUNC_IMPL(__imp__sub_8304F4C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x8304F4D0;
	__savegprlr_22(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r23,r4,24
	ctx.r23.s64 = ctx.r4.s64 + 24;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8304f510
	if (ctx.cr6.eq) goto loc_8304F510;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lwz r9,252(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// lwz r3,15208(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15208);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r4,80(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 80);
	// bl 0x83045a30
	ctx.lr = 0x8304F510;
	sub_83045A30(ctx, base);
loc_8304F510:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,252(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8304F52C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r24,1
	ctx.r24.s64 = 1;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8304f54c
	if (ctx.cr6.eq) goto loc_8304F54C;
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8304f548
	if (!ctx.cr6.lt) goto loc_8304F548;
	// sth r3,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r3.u16);
loc_8304F548:
	// stb r24,851(r31)
	PPC_STORE_U8(ctx.r31.u32 + 851, ctx.r24.u8);
loc_8304F54C:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// addi r27,r29,20
	ctx.r27.s64 = ctx.r29.s64 + 20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8304f68c
	if (ctx.cr6.eq) goto loc_8304F68C;
	// lhz r11,34(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 34);
	// lhz r9,14(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmpwi cr6,r10,1024
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1024, ctx.xer);
	// ble cr6,0x8304f57c
	if (!ctx.cr6.gt) goto loc_8304F57C;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// subfic r10,r11,1024
	ctx.xer.ca = ctx.r11.u32 <= 1024;
	ctx.r10.s64 = 1024 - ctx.r11.s64;
	// sth r10,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r10.u16);
loc_8304F57C:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8304f5a4
	if (ctx.cr6.eq) goto loc_8304F5A4;
loc_8304F590:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8304f590
	if (!ctx.cr6.eq) goto loc_8304F590;
loc_8304F5A4:
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8304f5f8
	if (ctx.cr6.eq) goto loc_8304F5F8;
loc_8304F5B0:
	// lhz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + 12);
	// lhz r11,34(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 34);
	// lhz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// mullw r9,r10,r30
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// lwz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r6,14(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mullw r4,r7,r30
	ctx.r4.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r30.s32);
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rotlwi r5,r6,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// bl 0x82a75220
	ctx.lr = 0x8304F5EC;
	sub_82A75220(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x8304f5b0
	if (ctx.cr6.lt) goto loc_8304F5B0;
loc_8304F5F8:
	// lhz r9,14(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// addi r4,r29,36
	ctx.r4.s64 = ctx.r29.s64 + 36;
	// lhz r10,34(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 34);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// lwz r30,12(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lhz r9,36(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 36);
	// sth r10,34(r29)
	PPC_STORE_U16(ctx.r29.u32 + 34, ctx.r10.u16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r7,252(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	// lwz r9,8(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// beq cr6,0x8304f648
	if (ctx.cr6.eq) goto loc_8304F648;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_8304F62C:
	// lwz r8,40(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r9,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// lhz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8304f62c
	if (ctx.cr6.lt) goto loc_8304F62C;
loc_8304F648:
	// addi r5,r29,40
	ctx.r5.s64 = ctx.r29.s64 + 40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83053728
	ctx.lr = 0x8304F654;
	sub_83053728(ctx, base);
	// lwz r11,192(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 192);
	// addi r3,r30,192
	ctx.r3.s64 = ctx.r30.s64 + 192;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8304F668;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,10
	ctx.r11.s64 = 10;
	// addi r10,r27,-4
	ctx.r10.s64 = ctx.r27.s64 + -4;
	// addi r9,r31,-4
	ctx.r9.s64 = ctx.r31.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8304F678:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8304f678
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304F678;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
loc_8304F68C:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8304f9c4
	if (ctx.cr6.eq) goto loc_8304F9C4;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// cmpwi cr6,r10,17
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 17, ctx.xer);
	// beq cr6,0x8304f704
	if (ctx.cr6.eq) goto loc_8304F704;
	// lwz r4,252(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// lbz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 12);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8304f9c4
	if (!ctx.cr6.eq) goto loc_8304F9C4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8304d748
	ctx.lr = 0x8304F6C0;
	sub_8304D748(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8304f6ec
	if (!ctx.cr6.eq) goto loc_8304F6EC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x8304d948
	ctx.lr = 0x8304F6D4;
	sub_8304D948(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8304f9c4
	if (ctx.cr6.eq) goto loc_8304F9C4;
loc_8304F6DC:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 832, ctx.r11.u32);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
loc_8304F6EC:
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8304f9c4
	if (!ctx.cr6.eq) goto loc_8304F9C4;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 832, ctx.r11.u32);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
loc_8304F704:
	// lwz r11,252(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r22,45
	ctx.r22.s64 = 45;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// rlwinm r8,r9,18,14,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x3FFFF;
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8304f7f4
	if (!ctx.cr6.eq) goto loc_8304F7F4;
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lbz r9,218(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 218);
	// lwz r8,252(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 252);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lbz r6,218(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 218);
	// xor r4,r6,r9
	ctx.r4.u64 = ctx.r6.u64 ^ ctx.r9.u64;
	// rlwinm r3,r4,0,30,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8304f7f4
	if (!ctx.cr6.eq) goto loc_8304F7F4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lhz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// bl 0x83068e90
	ctx.lr = 0x8304F760;
	sub_83068E90(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8304f6dc
	if (!ctx.cr6.eq) goto loc_8304F6DC;
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8304f78c
	if (ctx.cr6.eq) goto loc_8304F78C;
loc_8304F778:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8304f778
	if (!ctx.cr6.eq) goto loc_8304F778;
loc_8304F78C:
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8304f7d8
	if (ctx.cr6.eq) goto loc_8304F7D8;
loc_8304F798:
	// lhz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 12);
	// lhz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// mullw r7,r11,r30
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// lwz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r6,14(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// mullw r5,r9,r30
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r30.s32);
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rotlwi r5,r6,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// bl 0x82a75220
	ctx.lr = 0x8304F7CC;
	sub_82A75220(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x8304f798
	if (ctx.cr6.lt) goto loc_8304F798;
loc_8304F7D8:
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// sth r11,34(r29)
	PPC_STORE_U16(ctx.r29.u32 + 34, ctx.r11.u16);
	// lhz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// sth r10,36(r29)
	PPC_STORE_U16(ctx.r29.u32 + 36, ctx.r10.u16);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r9,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r9.u32);
	// b 0x8304f7fc
	goto loc_8304F7FC;
loc_8304F7F4:
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// stw r22,832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 832, ctx.r22.u32);
loc_8304F7FC:
	// lwz r30,12(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r3,r30,192
	ctx.r3.s64 = ctx.r30.s64 + 192;
	// lwz r11,192(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 192);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8304F814;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x8306b4a0
	ctx.lr = 0x8304F820;
	sub_8306B4A0(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r30,204
	ctx.r3.s64 = ctx.r30.s64 + 204;
	// bl 0x83053960
	ctx.lr = 0x8304F82C;
	sub_83053960(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x8304ea90
	ctx.lr = 0x8304F838;
	sub_8304EA90(ctx, base);
	// lwz r9,16(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// rotlwi r28,r9,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r9.u32);
	// stw r25,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r25.u32);
	// lwz r30,252(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 252);
	// lbz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 12);
	// rlwinm r7,r8,0,0,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8304f8b4
	if (!ctx.cr6.eq) goto loc_8304F8B4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8304d748
	ctx.lr = 0x8304F868;
	sub_8304D748(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8304f894
	if (!ctx.cr6.eq) goto loc_8304F894;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8304d948
	ctx.lr = 0x8304F87C;
	sub_8304D948(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8304f8b4
	if (ctx.cr6.eq) goto loc_8304F8B4;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 832, ctx.r11.u32);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
loc_8304F894:
	// cmpwi cr6,r3,63
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 63, ctx.xer);
	// bne cr6,0x8304f8ac
	if (!ctx.cr6.eq) goto loc_8304F8AC;
	// li r11,17
	ctx.r11.s64 = 17;
	// stw r11,832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 832, ctx.r11.u32);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
loc_8304F8AC:
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8304f6dc
	if (ctx.cr6.eq) goto loc_8304F6DC;
loc_8304F8B4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8306c0a0
	ctx.lr = 0x8304F8BC;
	sub_8306C0A0(ctx, base);
	// addi r4,r29,352
	ctx.r4.s64 = ctx.r29.s64 + 352;
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8304F8D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r28,16
	ctx.r3.s64 = ctx.r28.s64 + 16;
	// bl 0x8306b2d8
	ctx.lr = 0x8304F8E4;
	sub_8306B2D8(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r28,204
	ctx.r3.s64 = ctx.r28.s64 + 204;
	// bl 0x83053840
	ctx.lr = 0x8304F8F0;
	sub_83053840(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8304f904
	if (ctx.cr6.eq) goto loc_8304F904;
	// stw r3,832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 832, ctx.r3.u32);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
loc_8304F904:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8304f9c4
	if (!ctx.cr6.eq) goto loc_8304F9C4;
	// lhz r11,34(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 34);
	// lhz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8304f948
	if (!ctx.cr6.eq) goto loc_8304F948;
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r11,r27,-4
	ctx.r11.s64 = ctx.r27.s64 + -4;
	// addi r10,r31,-4
	ctx.r10.s64 = ctx.r31.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304F930:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8304f930
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304F930;
	// stw r22,832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 832, ctx.r22.u32);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
loc_8304F948:
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwz r11,308(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 308);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8304f988
	if (ctx.cr6.lt) goto loc_8304F988;
	// li r9,10
	ctx.r9.s64 = 10;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r27,-4
	ctx.r11.s64 = ctx.r27.s64 + -4;
	// stw r10,308(r30)
	PPC_STORE_U32(ctx.r30.u32 + 308, ctx.r10.u32);
	// addi r10,r31,-4
	ctx.r10.s64 = ctx.r31.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304F970:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8304f970
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304F970;
	// stw r22,832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 832, ctx.r22.u32);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
loc_8304F988:
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// li r9,43
	ctx.r9.s64 = 43;
	// sth r25,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r25.u16);
	// li r11,-1
	ctx.r11.s64 = -1;
	// sth r25,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r25.u16);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r25,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r25.u32);
	// lfs f0,24436(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24436);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r24,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r24.u32);
	// sth r10,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r10.u16);
	// stw r9,832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 832, ctx.r9.u32);
loc_8304F9C4:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8304F9CC"))) PPC_WEAK_FUNC(sub_8304F9CC);
PPC_FUNC_IMPL(__imp__sub_8304F9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8304F9D0"))) PPC_WEAK_FUNC(sub_8304F9D0);
PPC_FUNC_IMPL(__imp__sub_8304F9D0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,252(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// bl 0x8304d748
	ctx.lr = 0x8304F9F8;
	sub_8304D748(ctx, base);
	// lbz r10,218(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 218);
	// li r11,1024
	ctx.r11.s64 = 1024;
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8304fa10
	if (ctx.cr6.eq) goto loc_8304FA10;
	// li r11,8
	ctx.r11.s64 = 8;
loc_8304FA10:
	// cmpwi cr6,r3,63
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 63, ctx.xer);
	// beq cr6,0x8304fa6c
	if (ctx.cr6.eq) goto loc_8304FA6C;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8304fa40
	if (!ctx.cr6.eq) goto loc_8304FA40;
	// lwz r10,308(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 308);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8304fa6c
	if (!ctx.cr6.lt) goto loc_8304FA6C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8304d948
	ctx.lr = 0x8304FA38;
	sub_8304D948(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8304fa64
	if (ctx.cr6.eq) goto loc_8304FA64;
loc_8304FA40:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8304ea90
	ctx.lr = 0x8304FA4C;
	sub_8304EA90(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// b 0x8304fa70
	goto loc_8304FA70;
loc_8304FA64:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8304fa70
	goto loc_8304FA70;
loc_8304FA6C:
	// li r3,63
	ctx.r3.s64 = 63;
loc_8304FA70:
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

__attribute__((alias("__imp__sub_8304FA88"))) PPC_WEAK_FUNC(sub_8304FA88);
PPC_FUNC_IMPL(__imp__sub_8304FA88) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-12608
	ctx.r10.s64 = ctx.r11.s64 + -12608;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8306b298
	ctx.lr = 0x8304FABC;
	sub_8306B298(ctx, base);
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// sth r30,112(r31)
	PPC_STORE_U16(ctx.r31.u32 + 112, ctx.r30.u16);
	// li r9,43
	ctx.r9.s64 = 43;
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// sth r30,152(r31)
	PPC_STORE_U16(ctx.r31.u32 + 152, ctx.r30.u16);
	// lfs f0,24436(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24436);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stfs f0,124(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// addi r11,r31,96
	ctx.r11.s64 = ctx.r31.s64 + 96;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// addi r11,r31,136
	ctx.r11.s64 = ctx.r31.s64 + 136;
	// sth r30,110(r31)
	PPC_STORE_U16(ctx.r31.u32 + 110, ctx.r30.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r30,108(r31)
	PPC_STORE_U16(ctx.r31.u32 + 108, ctx.r30.u16);
	// stw r9,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r9.u32);
	// sth r30,112(r31)
	PPC_STORE_U16(ctx.r31.u32 + 112, ctx.r30.u16);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stw r10,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r10.u32);
	// stfs f0,164(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// sth r30,150(r31)
	PPC_STORE_U16(ctx.r31.u32 + 150, ctx.r30.u16);
	// sth r30,148(r31)
	PPC_STORE_U16(ctx.r31.u32 + 148, ctx.r30.u16);
	// stw r9,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r9.u32);
	// sth r30,152(r31)
	PPC_STORE_U16(ctx.r31.u32 + 152, ctx.r30.u16);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// stw r6,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r6.u32);
	// stw r6,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r6.u32);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8304FB64"))) PPC_WEAK_FUNC(sub_8304FB64);
PPC_FUNC_IMPL(__imp__sub_8304FB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8304FB68"))) PPC_WEAK_FUNC(sub_8304FB68);
PPC_FUNC_IMPL(__imp__sub_8304FB68) {
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
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8306b2a0
	ctx.lr = 0x8304FB8C;
	sub_8306B2A0(ctx, base);
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
	// beq cr6,0x8304fbb0
	if (ctx.cr6.eq) goto loc_8304FBB0;
	// bl 0x82691540
	ctx.lr = 0x8304FBAC;
	sub_82691540(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8304FBB0:
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

__attribute__((alias("__imp__sub_8304FBC8"))) PPC_WEAK_FUNC(sub_8304FBC8);
PPC_FUNC_IMPL(__imp__sub_8304FBC8) {
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
	// bl 0x8304fa88
	ctx.lr = 0x8304FBE0;
	sub_8304FA88(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-14788
	ctx.r9.s64 = ctx.r11.s64 + -14788;
	// stw r10,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r10.u32);
	// addi r11,r31,192
	ctx.r11.s64 = ctx.r31.s64 + 192;
	// stw r9,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r9.u32);
	// stw r10,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r10.u32);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x83053818
	ctx.lr = 0x8304FC04;
	sub_83053818(ctx, base);
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

__attribute__((alias("__imp__sub_8304FC1C"))) PPC_WEAK_FUNC(sub_8304FC1C);
PPC_FUNC_IMPL(__imp__sub_8304FC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8304FC20"))) PPC_WEAK_FUNC(sub_8304FC20);
PPC_FUNC_IMPL(__imp__sub_8304FC20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f0,21600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21600);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f0,-19520(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -19520);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f12.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fsubs f8,f1,f9
	ctx.f8.f64 = double(float(ctx.f1.f64 - ctx.f9.f64));
	// fmuls f1,f8,f0
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304FC60"))) PPC_WEAK_FUNC(sub_8304FC60);
PPC_FUNC_IMPL(__imp__sub_8304FC60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f0,-19528(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -19528);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f0,-2220(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -2220);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f12.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fsubs f8,f1,f9
	ctx.f8.f64 = double(float(ctx.f1.f64 - ctx.f9.f64));
	// fmuls f1,f8,f0
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304FCA0"))) PPC_WEAK_FUNC(sub_8304FCA0);
PPC_FUNC_IMPL(__imp__sub_8304FCA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f11,f10,f12
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f1,f9,f8,f7
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f7.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304FCC8"))) PPC_WEAK_FUNC(sub_8304FCC8);
PPC_FUNC_IMPL(__imp__sub_8304FCC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f8,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f6,f8,f13
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmsubs f5,f13,f0,f9
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 - ctx.f9.f64));
	// stfs f5,0(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmsubs f4,f8,f11,f7
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 - ctx.f7.f64));
	// stfs f4,8(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fmsubs f3,f10,f12,f6
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 - ctx.f6.f64));
	// stfs f3,4(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304FD08"))) PPC_WEAK_FUNC(sub_8304FD08);
PPC_FUNC_IMPL(__imp__sub_8304FD08) {
	PPC_FUNC_PROLOGUE();
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// fcmpu cr6,f5,f1
	ctx.cr6.compare(ctx.f5.f64, ctx.f1.f64);
	// bgt cr6,0x8304fd1c
	if (ctx.cr6.gt) goto loc_8304FD1C;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// blr 
	return;
loc_8304FD1C:
	// fcmpu cr6,f5,f3
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f5.f64, ctx.f3.f64);
	// blt cr6,0x8304fd2c
	if (ctx.cr6.lt) goto loc_8304FD2C;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// blr 
	return;
loc_8304FD2C:
	// fsubs f13,f5,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f5.f64 - ctx.f0.f64));
	// fsubs f12,f3,f0
	ctx.f12.f64 = double(float(ctx.f3.f64 - ctx.f0.f64));
	// fsubs f11,f4,f2
	ctx.f11.f64 = double(float(ctx.f4.f64 - ctx.f2.f64));
	// fdivs f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// fmadds f1,f10,f11,f2
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f2.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304FD44"))) PPC_WEAK_FUNC(sub_8304FD44);
PPC_FUNC_IMPL(__imp__sub_8304FD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8304FD48"))) PPC_WEAK_FUNC(sub_8304FD48);
PPC_FUNC_IMPL(__imp__sub_8304FD48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lfs f0,24436(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// blt cr6,0x8304fd70
	if (ctx.cr6.lt) goto loc_8304FD70;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// blr 
	return;
loc_8304FD70:
	// fsubs f0,f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// fmadds f1,f0,f3,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f3.f64 + ctx.f1.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304FD7C"))) PPC_WEAK_FUNC(sub_8304FD7C);
PPC_FUNC_IMPL(__imp__sub_8304FD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8304FD80"))) PPC_WEAK_FUNC(sub_8304FD80);
PPC_FUNC_IMPL(__imp__sub_8304FD80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f11,f10,f12
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f6,f9,f8,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f7.f64));
	// stfs f6,0(r5)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f5,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmadds f12,f5,f4,f13
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f4.f64 + ctx.f13.f64));
	// fmadds f11,f3,f2,f12
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f2.f64 + ctx.f12.f64));
	// stfs f11,4(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fmadds f3,f10,f9,f4
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f4.f64));
	// fmadds f2,f8,f7,f3
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f7.f64 + ctx.f3.f64));
	// stfs f2,8(r5)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lfs f1,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fmadds f8,f1,f0,f9
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f9.f64));
	// fmadds f7,f13,f12,f8
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f8.f64));
	// stfs f7,12(r5)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// lfs f6,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f2,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f1.f64));
	// fmadds f13,f6,f5,f0
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f5.f64 + ctx.f0.f64));
	// fmadds f12,f4,f3,f13
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f3.f64 + ctx.f13.f64));
	// stfs f12,16(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 16, temp.u32);
	// lfs f11,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// fmadds f4,f11,f10,f5
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f5.f64));
	// fmadds f3,f9,f8,f4
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f4.f64));
	// stfs f3,20(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 20, temp.u32);
	// lfs f2,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmadds f9,f2,f1,f10
	ctx.f9.f64 = double(float(ctx.f2.f64 * ctx.f1.f64 + ctx.f10.f64));
	// fmadds f8,f0,f13,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f9.f64));
	// stfs f8,24(r5)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r5.u32 + 24, temp.u32);
	// lfs f7,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f3,f2
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f2.f64));
	// fmadds f0,f7,f6,f1
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f6.f64 + ctx.f1.f64));
	// fmadds f13,f5,f4,f0
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f4.f64 + ctx.f0.f64));
	// stfs f13,28(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 28, temp.u32);
	// lfs f12,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// lfs f8,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f12,f8,f9
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f8.f64 + ctx.f9.f64));
	// fmadds f4,f7,f6,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f6.f64 + ctx.f5.f64));
	// stfs f4,32(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304FEEC"))) PPC_WEAK_FUNC(sub_8304FEEC);
PPC_FUNC_IMPL(__imp__sub_8304FEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8304FEF0"))) PPC_WEAK_FUNC(sub_8304FEF0);
PPC_FUNC_IMPL(__imp__sub_8304FEF0) {
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
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// fcmpu cr6,f2,f1
	ctx.cr6.compare(ctx.f2.f64, ctx.f1.f64);
	// bge cr6,0x8304ff18
	if (!ctx.cr6.lt) goto loc_8304FF18;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
loc_8304FF18:
	// bl 0x82fa4108
	ctx.lr = 0x8304FF1C;
	sub_82FA4108(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fsubs f13,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// lfs f0,23816(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 23816);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmadds f1,f9,f13,f31
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f31.f64));
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

__attribute__((alias("__imp__sub_8304FF5C"))) PPC_WEAK_FUNC(sub_8304FF5C);
PPC_FUNC_IMPL(__imp__sub_8304FF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8304FF60"))) PPC_WEAK_FUNC(sub_8304FF60);
PPC_FUNC_IMPL(__imp__sub_8304FF60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lfs f0,-11868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11868);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x8304ff7c
	if (ctx.cr6.gt) goto loc_8304FF7C;
	// lfs f1,5184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_8304FF7C:
	// lfs f0,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x8304ff94
	if (ctx.cr6.lt) goto loc_8304FF94;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lfs f1,24436(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_8304FF94:
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// addi r11,r9,-12576
	ctx.r11.s64 = ctx.r9.s64 + -12576;
	// lfs f0,17496(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17496);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// fadds f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// lfs f0,24436(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24436);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f12.u64);
	// lwz r6,-12(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfsx f8,r4,r7
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	ctx.f8.f64 = double(temp.f32);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// lfsx f7,r4,r11
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// fsubs f6,f13,f9
	ctx.f6.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// fsubs f5,f0,f6
	ctx.f5.f64 = double(float(ctx.f0.f64 - ctx.f6.f64));
	// fmuls f4,f8,f6
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f6.f64));
	// fmadds f1,f7,f5,f4
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f5.f64 + ctx.f4.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304FFF4"))) PPC_WEAK_FUNC(sub_8304FFF4);
PPC_FUNC_IMPL(__imp__sub_8304FFF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8304FFF8"))) PPC_WEAK_FUNC(sub_8304FFF8);
PPC_FUNC_IMPL(__imp__sub_8304FFF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stfs f1,-16(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// oris r9,r11,16256
	ctx.r9.u64 = ctx.r11.u64 | 1065353216;
	// stw r9,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r9.u32);
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// lfs f13,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r7,r10,9,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xFF;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f0,-16(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lfs f0,24436(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24436);
	ctx.f0.f64 = double(temp.f32);
	// frsp f9,f12
	ctx.f9.f64 = double(float(ctx.f12.f64));
	// fsubs f8,f13,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f12,-19656(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -19656);
	ctx.f12.f64 = double(temp.f32);
	// fadds f7,f13,f0
	ctx.f7.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f13,23560(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 23560);
	ctx.f13.f64 = double(temp.f32);
	// lis r4,-32232
	ctx.r4.s64 = -2112356352;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lfs f11,-12176(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -12176);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,21500(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 21500);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f6,f9,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// lfs f12,-12180(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12180);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f5,f8,f7
	ctx.f5.f64 = double(float(ctx.f8.f64 / ctx.f7.f64));
	// fmuls f4,f6,f11
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// fmuls f3,f5,f5
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f5.f64));
	// fmadds f2,f3,f13,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmuls f1,f2,f5
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f5.f64));
	// fmadds f0,f1,f10,f4
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f10.f64 + ctx.f4.f64));
	// fmuls f1,f0,f12
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83050084"))) PPC_WEAK_FUNC(sub_83050084);
PPC_FUNC_IMPL(__imp__sub_83050084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83050088"))) PPC_WEAK_FUNC(sub_83050088);
PPC_FUNC_IMPL(__imp__sub_83050088) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f12,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f9,f11,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fsqrts f1,f9
	ctx.f1.f64 = double(float(sqrt(ctx.f9.f64)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830500A8"))) PPC_WEAK_FUNC(sub_830500A8);
PPC_FUNC_IMPL(__imp__sub_830500A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f9,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fsqrts f1,f3
	ctx.f1.f64 = double(float(sqrt(ctx.f3.f64)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830500E0"))) PPC_WEAK_FUNC(sub_830500E0);
PPC_FUNC_IMPL(__imp__sub_830500E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f11,f13,f13
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,5184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f0,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmadds f8,f12,f12,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fsqrts f11,f8
	ctx.f11.f64 = double(float(sqrt(ctx.f8.f64)));
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lfs f10,24436(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f10.f64 = double(temp.f32);
	// fdivs f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 / ctx.f11.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,0(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmuls f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f9,4(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmuls f8,f11,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f8,8(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83050134"))) PPC_WEAK_FUNC(sub_83050134);
PPC_FUNC_IMPL(__imp__sub_83050134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83050138"))) PPC_WEAK_FUNC(sub_83050138);
PPC_FUNC_IMPL(__imp__sub_83050138) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x83050140;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8305015c
	if (ctx.cr6.eq) goto loc_8305015C;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_8305015C:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x830501a4
	if (ctx.cr6.eq) goto loc_830501A4;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// subf r29,r4,r5
	ctx.r29.s64 = ctx.r5.s64 - ctx.r4.s64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
loc_83050170:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83050194
	if (ctx.cr6.eq) goto loc_83050194;
	// bl 0x8301a578
	ctx.lr = 0x83050188;
	sub_8301A578(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r9,r3
	ctx.r11.u64 = ctx.r9.u64 & ctx.r3.u64;
loc_83050194:
	// stwx r11,r29,r31
	PPC_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r11.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x83050170
	if (!ctx.cr0.eq) goto loc_83050170;
loc_830501A4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830501B0"))) PPC_WEAK_FUNC(sub_830501B0);
PPC_FUNC_IMPL(__imp__sub_830501B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x830501B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x830501d4
	if (ctx.cr6.eq) goto loc_830501D4;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_830501D4:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8305021c
	if (ctx.cr6.eq) goto loc_8305021C;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// subf r29,r4,r5
	ctx.r29.s64 = ctx.r5.s64 - ctx.r4.s64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
loc_830501E8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8305020c
	if (ctx.cr6.eq) goto loc_8305020C;
	// bl 0x8301a628
	ctx.lr = 0x83050200;
	sub_8301A628(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r9,r3
	ctx.r11.u64 = ctx.r9.u64 & ctx.r3.u64;
loc_8305020C:
	// stwx r11,r29,r31
	PPC_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r11.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x830501e8
	if (!ctx.cr0.eq) goto loc_830501E8;
loc_8305021C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83050228"))) PPC_WEAK_FUNC(sub_83050228);
PPC_FUNC_IMPL(__imp__sub_83050228) {
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
	// bl 0x83039ee8
	ctx.lr = 0x83050240;
	sub_83039EE8(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-12172
	ctx.r9.s64 = ctx.r11.s64 + -12172;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x8303ffd8
	ctx.lr = 0x8305025C;
	sub_8303FFD8(ctx, base);
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

__attribute__((alias("__imp__sub_83050274"))) PPC_WEAK_FUNC(sub_83050274);
PPC_FUNC_IMPL(__imp__sub_83050274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83050278"))) PPC_WEAK_FUNC(sub_83050278);
PPC_FUNC_IMPL(__imp__sub_83050278) {
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
	// lwz r4,16(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-12172
	ctx.r10.s64 = ctx.r11.s64 + -12172;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq cr6,0x830502b0
	if (ctx.cr6.eq) goto loc_830502B0;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// lwz r3,-11272(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11272);
	// bl 0x82fd6cc8
	ctx.lr = 0x830502B0;
	sub_82FD6CC8(ctx, base);
loc_830502B0:
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x8303ffe8
	ctx.lr = 0x830502B8;
	sub_8303FFE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83039ed0
	ctx.lr = 0x830502C0;
	sub_83039ED0(ctx, base);
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

__attribute__((alias("__imp__sub_830502D4"))) PPC_WEAK_FUNC(sub_830502D4);
PPC_FUNC_IMPL(__imp__sub_830502D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830502D8"))) PPC_WEAK_FUNC(sub_830502D8);
PPC_FUNC_IMPL(__imp__sub_830502D8) {
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
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,15168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15168);
	// addi r31,r11,5672
	ctx.r31.s64 = ctx.r11.s64 + 5672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831791a4
	ctx.lr = 0x83050304;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// bl 0x831791b4
	ctx.lr = 0x83050318;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_83050334"))) PPC_WEAK_FUNC(sub_83050334);
PPC_FUNC_IMPL(__imp__sub_83050334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83050338"))) PPC_WEAK_FUNC(sub_83050338);
PPC_FUNC_IMPL(__imp__sub_83050338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x83050340;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwzu r28,4(r4)
	ea = 4 + ctx.r4.u32;
	ctx.r28.u64 = PPC_LOAD_U32(ea);
	ctx.r4.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r30,r28,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r4,4
	ctx.r31.s64 = ctx.r4.s64 + 4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83050394
	if (ctx.cr6.eq) goto loc_83050394;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,-11272(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11272);
	// bl 0x82fd6b98
	ctx.lr = 0x8305036C;
	sub_82FD6B98(ctx, base);
	// stw r3,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x83050384
	if (!ctx.cr6.eq) goto loc_83050384;
	// li r3,52
	ctx.r3.s64 = 52;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_83050384:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x83050390;
	sub_82FA77C0(ctx, base);
	// b 0x8305039c
	goto loc_8305039C;
loc_83050394:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
loc_8305039C:
	// lwzux r6,r31,r30
	ea = ctx.r31.u32 + ctx.r30.u32;
	ctx.r6.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r29,20
	ctx.r3.s64 = ctx.r29.s64 + 20;
	// lbzu r7,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// lbzu r8,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// addi r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 1;
	// bl 0x83040008
	ctx.lr = 0x830503B8;
	sub_83040008(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x830503c0
	if (!ctx.cr6.eq) goto loc_830503C0;
loc_830503C0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830503C8"))) PPC_WEAK_FUNC(sub_830503C8);
PPC_FUNC_IMPL(__imp__sub_830503C8) {
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
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,15168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15168);
	// addi r3,r11,5672
	ctx.r3.s64 = ctx.r11.s64 + 5672;
	// bl 0x83047950
	ctx.lr = 0x830503E8;
	sub_83047950(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830503FC"))) PPC_WEAK_FUNC(sub_830503FC);
PPC_FUNC_IMPL(__imp__sub_830503FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83050400"))) PPC_WEAK_FUNC(sub_83050400);
PPC_FUNC_IMPL(__imp__sub_83050400) {
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
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-11272(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11272);
	// bl 0x82fd6b98
	ctx.lr = 0x83050428;
	sub_82FD6B98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83050488
	if (ctx.cr6.eq) goto loc_83050488;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83039ee8
	ctx.lr = 0x8305043C;
	sub_83039EE8(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-12172
	ctx.r9.s64 = ctx.r11.s64 + -12172;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x8303ffd8
	ctx.lr = 0x83050458;
	sub_8303FFD8(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,15168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15168);
	// addi r3,r11,5672
	ctx.r3.s64 = ctx.r11.s64 + 5672;
	// bl 0x83047950
	ctx.lr = 0x8305046C;
	sub_83047950(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83050470:
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
loc_83050488:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83050470
	goto loc_83050470;
}

__attribute__((alias("__imp__sub_83050490"))) PPC_WEAK_FUNC(sub_83050490);
PPC_FUNC_IMPL(__imp__sub_83050490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x83050498;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31958
	ctx.r30.s64 = -2094399488;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,15168(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15168);
	// addi r28,r11,5672
	ctx.r28.s64 = ctx.r11.s64 + 5672;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831791a4
	ctx.lr = 0x830504B4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r29,r11,-1
	ctx.r29.s64 = ctx.r11.s64 + -1;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x8305051c
	if (!ctx.cr6.eq) goto loc_8305051C;
	// lwz r11,15168(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15168);
	// lwz r27,12(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r30,r11,5672
	ctx.r30.s64 = ctx.r11.s64 + 5672;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791a4
	ctx.lr = 0x830504DC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x83031450
	ctx.lr = 0x830504E8;
	sub_83031450(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791b4
	ctx.lr = 0x830504F0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lwz r30,-11272(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11272);
	// bctrl 
	ctx.lr = 0x83050510;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fd6cc8
	ctx.lr = 0x8305051C;
	sub_82FD6CC8(ctx, base);
loc_8305051C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831791b4
	ctx.lr = 0x83050524;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83050530"))) PPC_WEAK_FUNC(sub_83050530);
PPC_FUNC_IMPL(__imp__sub_83050530) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,16(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r10,r11,-12172
	ctx.r10.s64 = ctx.r11.s64 + -12172;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq cr6,0x83050570
	if (ctx.cr6.eq) goto loc_83050570;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// lwz r3,-11272(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11272);
	// bl 0x82fd6cc8
	ctx.lr = 0x83050570;
	sub_82FD6CC8(ctx, base);
loc_83050570:
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x8303ffe8
	ctx.lr = 0x83050578;
	sub_8303FFE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83039ed0
	ctx.lr = 0x83050580;
	sub_83039ED0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83050598
	if (ctx.cr6.eq) goto loc_83050598;
	// bl 0x82691540
	ctx.lr = 0x83050594;
	sub_82691540(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83050598:
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

__attribute__((alias("__imp__sub_830505B0"))) PPC_WEAK_FUNC(sub_830505B0);
PPC_FUNC_IMPL(__imp__sub_830505B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x830505B8;
	__savegprlr_25(ctx, base);
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// li r12,-96
	ctx.r12.s64 = -96;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// vspltisw128 v127,0
	_mm_store_si128((__m128i*)ctx.v127.u32, _mm_set1_epi32(int(0x0)));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r11,15984
	ctx.r11.s64 = ctx.r11.s64 + 15984;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// addi r31,r11,96
	ctx.r31.s64 = ctx.r11.s64 + 96;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// lfs f31,5184(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5184);
	ctx.f31.f64 = double(temp.f32);
	// li r30,8
	ctx.r30.s64 = 8;
	// lfs f30,24436(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24436);
	ctx.f30.f64 = double(temp.f32);
	// li r25,-32
	ctx.r25.s64 = -32;
	// li r26,-48
	ctx.r26.s64 = -48;
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r29,r11,-11012
	ctx.r29.s64 = ctx.r11.s64 + -11012;
	// addi r28,r10,-11052
	ctx.r28.s64 = ctx.r10.s64 + -11052;
loc_8305060C:
	// li r9,9
	ctx.r9.s64 = 9;
	// addi r10,r31,-100
	ctx.r10.s64 = ctx.r31.s64 + -100;
	// addi r11,r28,-4
	ctx.r11.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8305061C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8305061c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8305061C;
	// stfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f30,96(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f30,112(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x8304fd80
	ctx.lr = 0x8305065C;
	sub_8304FD80(ctx, base);
	// stvx128 v127,r31,r25
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r25.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v127,r31,r26
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stb r27,-16(r31)
	PPC_STORE_U8(ctx.r31.u32 + -16, ctx.r27.u8);
	// stfs f30,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,144
	ctx.r31.s64 = ctx.r31.s64 + 144;
	// bne 0x8305060c
	if (!ctx.cr0.eq) goto loc_8305060C;
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// lis r8,-31969
	ctx.r8.s64 = -2095120384;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,15972(r9)
	PPC_STORE_U32(ctx.r9.u32 + 15972, ctx.r11.u32);
	// stw r10,-11016(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11016, ctx.r10.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// li r0,-96
	ctx.r0.s64 = -96;
	// lvx128 v127,r1,r0
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF), VectorMaskL));
	// lfd f30,-80(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830506AC"))) PPC_WEAK_FUNC(sub_830506AC);
PPC_FUNC_IMPL(__imp__sub_830506AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830506B0"))) PPC_WEAK_FUNC(sub_830506B0);
PPC_FUNC_IMPL(__imp__sub_830506B0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830506B8"))) PPC_WEAK_FUNC(sub_830506B8);
PPC_FUNC_IMPL(__imp__sub_830506B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x830506C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// blt cr6,0x830506dc
	if (ctx.cr6.lt) goto loc_830506DC;
	// li r3,31
	ctx.r3.s64 = 31;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_830506DC:
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r5,r3,r10
	ctx.r5.u64 = ctx.r3.u64 + ctx.r10.u64;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r7,15984
	ctx.r10.s64 = ctx.r7.s64 + 15984;
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r5,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r29,16(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// add r31,r9,r10
	ctx.r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// bl 0x8304fca0
	ctx.lr = 0x83050748;
	sub_8304FCA0(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// fnmsubs f8,f11,f1,f0
	ctx.f8.f64 = double(float(-(ctx.f11.f64 * ctx.f1.f64 - ctx.f0.f64)));
	// lfs f9,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// fnmsubs f7,f10,f1,f13
	ctx.f7.f64 = double(float(-(ctx.f10.f64 * ctx.f1.f64 - ctx.f13.f64)));
	// fnmsubs f6,f9,f1,f12
	ctx.f6.f64 = double(float(-(ctx.f9.f64 * ctx.f1.f64 - ctx.f12.f64)));
	// stfs f8,80(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x830500e0
	ctx.lr = 0x83050780;
	sub_830500E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830500e0
	ctx.lr = 0x83050788;
	sub_830500E0(ctx, base);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// bl 0x8304fcc8
	ctx.lr = 0x830507C8;
	sub_8304FCC8(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lis r6,-31969
	ctx.r6.s64 = -2095120384;
	// lfs f5,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// addi r5,r31,96
	ctx.r5.s64 = ctx.r31.s64 + 96;
	// lfs f3,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// addi r3,r6,-11012
	ctx.r3.s64 = ctx.r6.s64 + -11012;
	// lfs f2,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lfs f1,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,8(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stfs f5,140(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f4,144(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f3,148(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f2,152(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stfs f1,156(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// lfs f13,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f12,132(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f11,136(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x8304fd80
	ctx.lr = 0x83050840;
	sub_8304FD80(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8305084C"))) PPC_WEAK_FUNC(sub_8305084C);
PPC_FUNC_IMPL(__imp__sub_8305084C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83050850"))) PPC_WEAK_FUNC(sub_83050850);
PPC_FUNC_IMPL(__imp__sub_83050850) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r11,r10,15984
	ctx.r11.s64 = ctx.r10.s64 + 15984;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r7,r11,132
	ctx.r7.s64 = ctx.r11.s64 + 132;
	// stfsx f1,r8,r7
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83050870"))) PPC_WEAK_FUNC(sub_83050870);
PPC_FUNC_IMPL(__imp__sub_83050870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// blt cr6,0x83050880
	if (ctx.cr6.lt) goto loc_83050880;
	// li r3,31
	ctx.r3.s64 = 31;
	// blr 
	return;
loc_83050880:
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// add r8,r3,r11
	ctx.r8.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r9,r10,15984
	ctx.r9.s64 = ctx.r10.s64 + 15984;
	// rlwinm r10,r8,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// li r11,9
	ctx.r11.s64 = 9;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r4,-4
	ctx.r9.s64 = ctx.r4.s64 + -4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_830508A8:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x830508a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830508A8;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830508BC"))) PPC_WEAK_FUNC(sub_830508BC);
PPC_FUNC_IMPL(__imp__sub_830508BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830508C0"))) PPC_WEAK_FUNC(sub_830508C0);
PPC_FUNC_IMPL(__imp__sub_830508C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r11,r10,15984
	ctx.r11.s64 = ctx.r10.s64 + 15984;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r7,r11,132
	ctx.r7.s64 = ctx.r11.s64 + 132;
	// lfsx f1,r8,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830508E0"))) PPC_WEAK_FUNC(sub_830508E0);
PPC_FUNC_IMPL(__imp__sub_830508E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// blt cr6,0x830508f0
	if (ctx.cr6.lt) goto loc_830508F0;
	// li r3,31
	ctx.r3.s64 = 31;
	// blr 
	return;
loc_830508F0:
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r11,r10,15984
	ctx.r11.s64 = ctx.r10.s64 + 15984;
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r11,80
	ctx.r8.s64 = ctx.r11.s64 + 80;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stbx r4,r10,r8
	PPC_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r4.u8);
	// beq cr6,0x83050948
	if (ctx.cr6.eq) goto loc_83050948;
	// addi r8,r11,48
	ctx.r8.s64 = ctx.r11.s64 + 48;
	// li r9,6
	ctx.r9.s64 = 6;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r11,r5,-4
	ctx.r11.s64 = ctx.r5.s64 + -4;
	// addi r10,r8,-4
	ctx.r10.s64 = ctx.r8.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8305092C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8305092c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8305092C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 24, temp.u32);
	// stfs f0,28(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 28, temp.u32);
loc_83050948:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83050950"))) PPC_WEAK_FUNC(sub_83050950);
PPC_FUNC_IMPL(__imp__sub_83050950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// blt cr6,0x83050960
	if (ctx.cr6.lt) goto loc_83050960;
	// li r3,31
	ctx.r3.s64 = 31;
	// blr 
	return;
loc_83050960:
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r10,r10,15984
	ctx.r10.s64 = ctx.r10.s64 + 15984;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r7,r10,80
	ctx.r7.s64 = ctx.r10.s64 + 80;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// addi r8,r5,-4
	ctx.r8.s64 = ctx.r5.s64 + -4;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbzx r6,r11,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
	// stb r6,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r6.u8);
loc_83050998:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x83050998
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83050998;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830509AC"))) PPC_WEAK_FUNC(sub_830509AC);
PPC_FUNC_IMPL(__imp__sub_830509AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830509B0"))) PPC_WEAK_FUNC(sub_830509B0);
PPC_FUNC_IMPL(__imp__sub_830509B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f9,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,28(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f8,f11,f10
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f6,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f6,f5
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// lfs f2,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f9,f12
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmuls f12,f7,f12
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmadds f11,f4,f8,f13
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f8.f64 + ctx.f13.f64));
	// fmadds f10,f2,f8,f12
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f8.f64 + ctx.f12.f64));
	// fmadds f9,f1,f3,f11
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f3.f64 + ctx.f11.f64));
	// stfs f9,0(r6)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fmadds f8,f0,f3,f10
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f3.f64 + ctx.f10.f64));
	// stfs f8,8(r6)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83050A10"))) PPC_WEAK_FUNC(sub_83050A10);
PPC_FUNC_IMPL(__imp__sub_83050A10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// li r10,1
	ctx.r10.s64 = 1;
	// clrlwi r7,r4,24
	ctx.r7.u64 = ctx.r4.u32 & 0xFF;
	// slw r9,r10,r3
	ctx.r9.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r3.u8 & 0x3F));
	// lwz r10,-11016(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11016);
	// not r8,r9
	ctx.r8.u64 = ~ctx.r9.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// and r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ctx.r10.u64;
	// stw r10,-11016(r11)
	PPC_STORE_U32(ctx.r11.u32 + -11016, ctx.r10.u32);
	// beq cr6,0x83050a40
	if (ctx.cr6.eq) goto loc_83050A40;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,-11016(r11)
	PPC_STORE_U32(ctx.r11.u32 + -11016, ctx.r10.u32);
loc_83050A40:
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,15972(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15972);
	// and r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ctx.r10.u64;
	// stw r10,15972(r11)
	PPC_STORE_U32(ctx.r11.u32 + 15972, ctx.r10.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,15972(r11)
	PPC_STORE_U32(ctx.r11.u32 + 15972, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83050A68"))) PPC_WEAK_FUNC(sub_83050A68);
PPC_FUNC_IMPL(__imp__sub_83050A68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83050aa8
	if (ctx.cr6.eq) goto loc_83050AA8;
	// addi r9,r1,92
	ctx.r9.s64 = ctx.r1.s64 + 92;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83050A94:
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// bdnz 0x83050a94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83050A94;
	// cmplwi cr6,r4,6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 6, ctx.xer);
	// bge cr6,0x83050ad4
	if (!ctx.cr6.lt) goto loc_83050AD4;
loc_83050AA8:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// subfic r11,r11,6
	ctx.xer.ca = ctx.r11.u32 <= 6;
	ctx.r11.s64 = 6 - ctx.r11.s64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83050ad4
	if (ctx.cr6.eq) goto loc_83050AD4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_83050ACC:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83050acc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83050ACC;
loc_83050AD4:
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83050b0c
	if (ctx.cr6.eq) goto loc_83050B0C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83050b0c
	if (ctx.cr6.eq) goto loc_83050B0C;
	// addi r10,r1,116
	ctx.r10.s64 = ctx.r1.s64 + 116;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
loc_83050AF8:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// bdnz 0x83050af8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83050AF8;
	// cmplwi cr6,r4,6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 6, ctx.xer);
	// bge cr6,0x83050b38
	if (!ctx.cr6.lt) goto loc_83050B38;
loc_83050B0C:
	// addi r9,r1,120
	ctx.r9.s64 = ctx.r1.s64 + 120;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r11,r8,6
	ctx.xer.ca = ctx.r8.u32 <= 6;
	ctx.r11.s64 = 6 - ctx.r8.s64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83050b38
	if (ctx.cr6.eq) goto loc_83050B38;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_83050B30:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83050b30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83050B30;
loc_83050B38:
	// stw r5,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r5.u32);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// stb r6,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r6.u8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,15204(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15204);
	// bl 0x83026ba0
	ctx.lr = 0x83050B54;
	sub_83026BA0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83050B64"))) PPC_WEAK_FUNC(sub_83050B64);
PPC_FUNC_IMPL(__imp__sub_83050B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83050B68"))) PPC_WEAK_FUNC(sub_83050B68);
PPC_FUNC_IMPL(__imp__sub_83050B68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x83050B70;
	__savegprlr_26(ctx, base);
	// stfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f29.u64);
	// stfd f30,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// fmr f29,f1
	ctx.f29.f64 = ctx.f1.f64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83050bc0
	if (!ctx.cr6.eq) goto loc_83050BC0;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,15168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15168);
	// addi r3,r11,4064
	ctx.r3.s64 = ctx.r11.s64 + 4064;
	// bl 0x830639c8
	ctx.lr = 0x83050BBC;
	sub_830639C8(ctx, base);
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
loc_83050BC0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r31,72(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lfs f30,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,24436(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24436);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f29,f30
	ctx.cr6.compare(ctx.f29.f64, ctx.f30.f64);
	// ble cr6,0x83050bf0
	if (!ctx.cr6.gt) goto loc_83050BF0;
	// addi r4,r27,12
	ctx.r4.s64 = ctx.r27.s64 + 12;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8304fca0
	ctx.lr = 0x83050BE8;
	sub_8304FCA0(ctx, base);
	// fdivs f13,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 / ctx.f29.f64));
	// b 0x83050bf4
	goto loc_83050BF4;
loc_83050BF0:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f31.f64;
loc_83050BF4:
	// fsubs f12,f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f31.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5180(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5180);
	ctx.f0.f64 = double(temp.f32);
	// fsel f11,f12,f31,f13
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f31.f64 : ctx.f13.f64;
	// fsubs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fsel f1,f10,f11,f0
	ctx.f1.f64 = ctx.f10.f64 >= 0.0 ? ctx.f11.f64 : ctx.f0.f64;
	// bl 0x82fa3ec8
	ctx.lr = 0x83050C10;
	sub_82FA3EC8(ctx, base);
	// frsp f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// lfs f3,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// bl 0x8304fd08
	ctx.lr = 0x83050C28;
	sub_8304FD08(ctx, base);
	// lfs f9,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f1
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f1.f64));
	// fsel f7,f8,f1,f9
	ctx.f7.f64 = ctx.f8.f64 >= 0.0 ? ctx.f1.f64 : ctx.f9.f64;
	// stfs f7,0(r29)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lfs f6,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f6,f1,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f1.f64 + ctx.f5.f64));
	// stfs f4,0(r28)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-80(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83050C5C"))) PPC_WEAK_FUNC(sub_83050C5C);
PPC_FUNC_IMPL(__imp__sub_83050C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83050C60"))) PPC_WEAK_FUNC(sub_83050C60);
PPC_FUNC_IMPL(__imp__sub_83050C60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x83050C68;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f12,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lfs f9,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f7,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// fsubs f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x83050088
	ctx.lr = 0x83050CC4;
	sub_83050088(ctx, base);
	// fdivs f5,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f1.f64 / ctx.f31.f64));
	// stfs f5,0(r27)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// lwz r11,76(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 76);
	// addi r31,r24,4
	ctx.r31.s64 = ctx.r24.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83050cf4
	if (!ctx.cr6.eq) goto loc_83050CF4;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,15168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15168);
	// addi r3,r11,4064
	ctx.r3.s64 = ctx.r11.s64 + 4064;
	// bl 0x830639c8
	ctx.lr = 0x83050CF0;
	sub_830639C8(ctx, base);
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
loc_83050CF4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r31,72(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lfs f31,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,0(r26)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// stfs f31,0(r25)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r25.u32 + 0, temp.u32);
	// beq cr6,0x83050e04
	if (ctx.cr6.eq) goto loc_83050E04;
	// lbz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// lbz r8,93(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 93);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rotlwi r9,r8,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// addi r11,r11,-255
	ctx.r11.s64 = ctx.r11.s64 + -255;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subfic r5,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r11.s64;
	// add r9,r8,r31
	ctx.r9.u64 = ctx.r8.u64 + ctx.r31.u64;
	// addi r11,r10,-255
	ctx.r11.s64 = ctx.r10.s64 + -255;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// subfe r3,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// add r11,r8,r31
	ctx.r11.u64 = ctx.r8.u64 + ctx.r31.u64;
	// and r30,r3,r9
	ctx.r30.u64 = ctx.r3.u64 & ctx.r9.u64;
	// addi r8,r11,32
	ctx.r8.s64 = ctx.r11.s64 + 32;
	// subfe r7,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// and r29,r7,r8
	ctx.r29.u64 = ctx.r7.u64 & ctx.r8.u64;
	// beq cr6,0x83050d80
	if (ctx.cr6.eq) goto loc_83050D80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83047590
	ctx.lr = 0x83050D7C;
	sub_83047590(ctx, base);
	// stfs f1,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
loc_83050D80:
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x83050d94
	if (!ctx.cr6.eq) goto loc_83050D94;
	// lfs f0,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 0, temp.u32);
	// b 0x83050dac
	goto loc_83050DAC;
loc_83050D94:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83050dac
	if (ctx.cr6.eq) goto loc_83050DAC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83047590
	ctx.lr = 0x83050DA8;
	sub_83047590(ctx, base);
	// stfs f1,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r25.u32 + 0, temp.u32);
loc_83050DAC:
	// lbz r11,97(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 97);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83050e04
	if (ctx.cr6.eq) goto loc_83050E04;
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x83050ddc
	if (ctx.cr6.eq) goto loc_83050DDC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x83050e04
	if (!ctx.cr6.eq) goto loc_83050E04;
	// lbz r11,50(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 50);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83050e04
	if (ctx.cr6.eq) goto loc_83050E04;
loc_83050DDC:
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// lfs f1,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83050b68
	ctx.lr = 0x83050DF8;
	sub_83050B68(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
loc_83050E04:
	// stfs f31,0(r23)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r23.u32 + 0, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83050E14"))) PPC_WEAK_FUNC(sub_83050E14);
PPC_FUNC_IMPL(__imp__sub_83050E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83050E18"))) PPC_WEAK_FUNC(sub_83050E18);
PPC_FUNC_IMPL(__imp__sub_83050E18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x83050E20;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82fa8cf4
	ctx.lr = 0x83050E28;
	__savefpr_15(ctx, base);
	// stwu r1,-1120(r1)
	ea = -1120 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r17,0
	ctx.r17.s64 = 0;
	// stw r4,1148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1148, ctx.r4.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r3,1140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1140, ctx.r3.u32);
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// stw r5,1156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1156, ctx.r5.u32);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// stw r6,1164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1164, ctx.r6.u32);
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// stw r7,1172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1172, ctx.r7.u32);
	// mr r15,r7
	ctx.r15.u64 = ctx.r7.u64;
	// stw r8,1180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1180, ctx.r8.u32);
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
	// stw r9,1188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1188, ctx.r9.u32);
	// stb r10,1199(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1199, ctx.r10.u8);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stw r17,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r17.u32);
	// mr r18,r17
	ctx.r18.u64 = ctx.r17.u64;
	// beq cr6,0x83050e94
	if (ctx.cr6.eq) goto loc_83050E94;
loc_83050E7C:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83050e7c
	if (!ctx.cr6.eq) goto loc_83050E7C;
	// stw r18,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r18.u32);
loc_83050E94:
	// rlwinm r11,r24,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x8;
	// addi r14,r18,-1
	ctx.r14.s64 = ctx.r18.s64 + -1;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83050eb8
	if (!ctx.cr6.eq) goto loc_83050EB8;
	// mr r14,r18
	ctx.r14.u64 = ctx.r18.u64;
loc_83050EB8:
	// lwz r23,56(r25)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r25.u32 + 56);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lfs f0,0(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lwz r30,0(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r14,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r14.u32);
	// addi r31,r23,4
	ctx.r31.s64 = ctx.r23.s64 + 4;
	// lfs f17,5184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f17.f64 = double(temp.f32);
	// lwz r9,76(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 76);
	// lfs f15,24436(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24436);
	ctx.f15.f64 = double(temp.f32);
	// fsel f26,f0,f17,f0
	ctx.f26.f64 = ctx.f0.f64 >= 0.0 ? ctx.f17.f64 : ctx.f0.f64;
	// stfs f26,124(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stw r23,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r23.u32);
	// stfs f15,112(r1)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fsel f16,f13,f17,f13
	ctx.f16.f64 = ctx.f13.f64 >= 0.0 ? ctx.f17.f64 : ctx.f13.f64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x83050f18
	if (!ctx.cr6.eq) goto loc_83050F18;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,15168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15168);
	// addi r3,r11,4064
	ctx.r3.s64 = ctx.r11.s64 + 4064;
	// bl 0x830639c8
	ctx.lr = 0x83050F14;
	sub_830639C8(ctx, base);
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
loc_83050F18:
	// lwz r19,72(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stfs f17,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// mr r31,r17
	ctx.r31.u64 = ctx.r17.u64;
	// stw r17,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r17.u32);
	// mr r28,r17
	ctx.r28.u64 = ctx.r17.u64;
	// stw r17,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r17.u32);
	// mr r27,r17
	ctx.r27.u64 = ctx.r17.u64;
	// stw r17,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r17.u32);
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// stw r19,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r19.u32);
	// beq cr6,0x83050fd4
	if (ctx.cr6.eq) goto loc_83050FD4;
	// lbz r9,96(r19)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r19.u32 + 96);
	// lbz r6,95(r19)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r19.u32 + 95);
	// addi r8,r9,-255
	ctx.r8.s64 = ctx.r9.s64 + -255;
	// lbz r5,94(r19)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r19.u32 + 94);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// subfic r4,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r4.s64 = 0 - ctx.r8.s64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// rotlwi r7,r9,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// addi r8,r6,-255
	ctx.r8.s64 = ctx.r6.s64 + -255;
	// rotlwi r6,r6,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// subfe r4,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r3.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// add r7,r10,r6
	ctx.r7.u64 = ctx.r10.u64 + ctx.r6.u64;
	// rotlwi r5,r5,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// subfic r6,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r8.s64;
	// add r6,r9,r5
	ctx.r6.u64 = ctx.r9.u64 + ctx.r5.u64;
	// addi r11,r9,-255
	ctx.r11.s64 = ctx.r9.s64 + -255;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// subfe r5,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r3,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r3.s64 = 0 - ctx.r11.s64;
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r19
	ctx.r11.u64 = ctx.r10.u64 + ctx.r19.u64;
	// add r10,r8,r19
	ctx.r10.u64 = ctx.r8.u64 + ctx.r19.u64;
	// add r9,r7,r19
	ctx.r9.u64 = ctx.r7.u64 + ctx.r19.u64;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// addi r11,r10,32
	ctx.r11.s64 = ctx.r10.s64 + 32;
	// addi r10,r9,32
	ctx.r10.s64 = ctx.r9.s64 + 32;
	// subfe r9,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r4,r3
	ctx.r31.u64 = ctx.r4.u64 & ctx.r3.u64;
	// and r28,r5,r11
	ctx.r28.u64 = ctx.r5.u64 & ctx.r11.u64;
	// and r27,r9,r10
	ctx.r27.u64 = ctx.r9.u64 & ctx.r10.u64;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// stw r28,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r28.u32);
	// stw r27,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r27.u32);
loc_83050FD4:
	// fmr f20,f17
	ctx.fpscr.disableFlushMode();
	ctx.f20.f64 = ctx.f17.f64;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// fmr f19,f17
	ctx.f19.f64 = ctx.f17.f64;
	// bne cr6,0x8305221c
	if (!ctx.cr6.eq) goto loc_8305221C;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fmr f25,f15
	ctx.f25.f64 = ctx.f15.f64;
	// li r22,-64
	ctx.r22.s64 = -64;
	// fmr f24,f15
	ctx.f24.f64 = ctx.f15.f64;
	// addi r29,r11,-12128
	ctx.r29.s64 = ctx.r11.s64 + -12128;
	// mr r9,r17
	ctx.r9.u64 = ctx.r17.u64;
	// li r23,-80
	ctx.r23.s64 = -80;
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// li r21,-144
	ctx.r21.s64 = -144;
	// li r16,-16
	ctx.r16.s64 = -16;
	// li r27,64
	ctx.r27.s64 = 64;
	// li r28,48
	ctx.r28.s64 = 48;
	// cmpwi cr6,r18,4
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 4, ctx.xer);
	// blt cr6,0x830510a0
	if (ctx.cr6.lt) goto loc_830510A0;
	// lvlx128 v63,r0,r29
	temp.u32 = ctx.r29.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r8,r18,-3
	ctx.r8.s64 = ctx.r18.s64 + -3;
	// addi r10,r15,208
	ctx.r10.s64 = ctx.r15.s64 + 208;
	// addi r11,r20,80
	ctx.r11.s64 = ctx.r20.s64 + 80;
	// vspltw128 v63,v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// subf r7,r20,r15
	ctx.r7.s64 = ctx.r15.s64 - ctx.r20.s64;
	// li r6,-192
	ctx.r6.s64 = -192;
	// li r5,-208
	ctx.r5.s64 = -208;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// li r30,128
	ctx.r30.s64 = 128;
	// li r31,112
	ctx.r31.s64 = 112;
loc_8305104C:
	// stvx128 v63,r10,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stvx128 v63,r10,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r11,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// stvx128 v63,r11,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r7,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r10,r21
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r21.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r11,r16
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r16.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r10,r22
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r22.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r10,r23
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r23.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r11,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r11,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r10,r16
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r16.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,256
	ctx.r10.s64 = ctx.r10.s64 + 256;
	// stvx128 v63,r11,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r11,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// blt cr6,0x8305104c
	if (ctx.cr6.lt) goto loc_8305104C;
loc_830510A0:
	// cmplw cr6,r9,r18
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r18.u32, ctx.xer);
	// bge cr6,0x830510e8
	if (!ctx.cr6.lt) goto loc_830510E8;
	// rlwinm r11,r9,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// lvlx128 v62,r0,r29
	temp.u32 = ctx.r29.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// subf r8,r9,r18
	ctx.r8.s64 = ctx.r18.s64 - ctx.r9.s64;
	// add r10,r11,r15
	ctx.r10.u64 = ctx.r11.u64 + ctx.r15.u64;
	// vspltw128 v63,v62,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0xFF));
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// subf r9,r20,r15
	ctx.r9.s64 = ctx.r15.s64 - ctx.r20.s64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_830510CC:
	// stvx128 v63,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// stvx128 v63,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r11,r16
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r16.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// bdnz 0x830510cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830510CC;
loc_830510E8:
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r17,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r17.u8);
	// lbz r11,7(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x83051374
	if (ctx.cr6.eq) goto loc_83051374;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x83051378
	if (ctx.cr6.eq) goto loc_83051378;
loc_8305110C:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83051120
	if (!ctx.cr6.eq) goto loc_83051120;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r11,r11,-11108
	ctx.r11.s64 = ctx.r11.s64 + -11108;
loc_83051120:
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// sth r9,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r9.u16);
	// stb r17,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r17.u8);
loc_8305112C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83021b28
	ctx.lr = 0x83051134;
	sub_83021B28(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83051144
	if (ctx.cr6.eq) goto loc_83051144;
	// bl 0x830591b0
	ctx.lr = 0x83051144;
	sub_830591B0(ctx, base);
loc_83051144:
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r3,r11,-14848
	ctx.r3.s64 = ctx.r11.s64 + -14848;
	// lis r26,-31958
	ctx.r26.s64 = -2094399488;
	// lbz r9,6(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// lfs f21,-15356(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -15356);
	ctx.f21.f64 = double(temp.f32);
	// fmr f26,f21
	ctx.f26.f64 = ctx.f21.f64;
	// li r17,0
	ctx.r17.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// addi r24,r10,15344
	ctx.r24.s64 = ctx.r10.s64 + 15344;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// beq cr6,0x83051c8c
	if (ctx.cr6.eq) goto loc_83051C8C;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// addi r11,r11,15984
	ctx.r11.s64 = ctx.r11.s64 + 15984;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r22,r11,24
	ctx.r22.s64 = ctx.r11.s64 + 24;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lfs f22,-23576(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -23576);
	ctx.f22.f64 = double(temp.f32);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lfs f18,11556(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 11556);
	ctx.f18.f64 = double(temp.f32);
	// li r14,-48
	ctx.r14.s64 = -48;
	// lfs f23,21472(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 21472);
	ctx.f23.f64 = double(temp.f32);
	// li r15,16
	ctx.r15.s64 = 16;
	// lis r20,-31958
	ctx.r20.s64 = -2094399488;
	// addi r18,r11,-12144
	ctx.r18.s64 = ctx.r11.s64 + -12144;
	// addi r21,r10,17136
	ctx.r21.s64 = ctx.r10.s64 + 17136;
loc_830511C0:
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83051c40
	if (ctx.cr6.eq) goto loc_83051C40;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r19,r22,-24
	ctx.r19.s64 = ctx.r22.s64 + -24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830511ec
	if (ctx.cr6.eq) goto loc_830511EC;
	// li r5,384
	ctx.r5.s64 = 384;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82fa7cf0
	ctx.lr = 0x830511EC;
	sub_82FA7CF0(ctx, base);
loc_830511EC:
	// lhz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83051a40
	if (ctx.cr6.eq) goto loc_83051A40;
	// li r23,0
	ctx.r23.s64 = 0;
loc_830511FC:
	// lwz r29,1140(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1140);
	// rlwinm r11,r23,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lfs f0,108(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// add r8,r23,r11
	ctx.r8.u64 = ctx.r23.u64 + ctx.r11.u64;
	// lwz r28,160(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r3,112(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	// addi r8,r1,116
	ctx.r8.s64 = ctx.r1.s64 + 116;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r1,108
	ctx.r7.s64 = ctx.r1.s64 + 108;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// lfs f13,84(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x83050c60
	ctx.lr = 0x83051248;
	sub_83050C60(ctx, base);
	// lwz r11,112(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	// lis r30,-31958
	ctx.r30.s64 = -2094399488;
	// add r11,r17,r11
	ctx.r11.u64 = ctx.r17.u64 + ctx.r11.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,15200(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15200);
	// lbz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 72);
	// std r9,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r9.u64);
	// lfd f12,184(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f31,f10,f23
	ctx.f31.f64 = double(float(ctx.f10.f64 * ctx.f23.f64));
	// fmuls f1,f31,f21
	ctx.f1.f64 = double(float(ctx.f31.f64 * ctx.f21.f64));
	// bl 0x83047338
	ctx.lr = 0x83051280;
	sub_83047338(ctx, base);
	// lwz r11,112(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	// fsubs f9,f25,f31
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f25.f64 - ctx.f31.f64));
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f28,f1
	ctx.f28.f64 = ctx.f1.f64;
	// add r8,r17,r11
	ctx.r8.u64 = ctx.r17.u64 + ctx.r11.u64;
	// lwz r3,15200(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15200);
	// li r4,0
	ctx.r4.s64 = 0;
	// lbz r6,64(r8)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + 64);
	// fsel f25,f9,f31,f25
	ctx.f25.f64 = ctx.f9.f64 >= 0.0 ? ctx.f31.f64 : ctx.f25.f64;
	// std r6,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r6.u64);
	// lfd f8,168(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmuls f31,f6,f23
	ctx.f31.f64 = double(float(ctx.f6.f64 * ctx.f23.f64));
	// fmuls f1,f31,f21
	ctx.f1.f64 = double(float(ctx.f31.f64 * ctx.f21.f64));
	// bl 0x83047338
	ctx.lr = 0x830512C0;
	sub_83047338(ctx, base);
	// fsubs f5,f24,f31
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f24.f64 - ctx.f31.f64));
	// lbz r5,56(r22)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r22.u32 + 56);
	// fmr f27,f1
	ctx.f27.f64 = ctx.f1.f64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// fsel f24,f5,f31,f24
	ctx.f24.f64 = ctx.f5.f64 >= 0.0 ? ctx.f31.f64 : ctx.f24.f64;
	// beq cr6,0x83051594
	if (ctx.cr6.eq) goto loc_83051594;
	// lbz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830513e0
	if (ctx.cr6.eq) goto loc_830513E0;
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lfs f13,4(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f9,100(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f10,8(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,124(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 124);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f8,f11,f10
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f6,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,0(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,104(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 104);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f6,f5
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// lfs f2,128(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 128);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,96(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,120(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f9,f12
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// lfs f31,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f12,f7,f12
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmadds f11,f4,f8,f13
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f8.f64 + ctx.f13.f64));
	// fmadds f10,f2,f8,f12
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f8.f64 + ctx.f12.f64));
	// fmadds f30,f1,f3,f11
	ctx.f30.f64 = double(float(ctx.f1.f64 * ctx.f3.f64 + ctx.f11.f64));
	// fmadds f29,f0,f3,f10
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f3.f64 + ctx.f10.f64));
	// beq cr6,0x83051354
	if (ctx.cr6.eq) goto loc_83051354;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83047590
	ctx.lr = 0x83051350;
	sub_83047590(ctx, base);
	// fmr f20,f1
	ctx.fpscr.disableFlushMode();
	ctx.f20.f64 = ctx.f1.f64;
loc_83051354:
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8305139c
	if (ctx.cr6.eq) goto loc_8305139C;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83047590
	ctx.lr = 0x83051368;
	sub_83047590(ctx, base);
	// fsubs f0,f26,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f26.f64 - ctx.f1.f64));
	// fsel f26,f0,f1,f26
	ctx.f26.f64 = ctx.f0.f64 >= 0.0 ? ctx.f1.f64 : ctx.f26.f64;
	// b 0x830513a0
	goto loc_830513A0;
loc_83051374:
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
loc_83051378:
	// lhz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8305110c
	if (ctx.cr6.eq) goto loc_8305110C;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// sth r10,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r10.u16);
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// b 0x8305112c
	goto loc_8305112C;
loc_8305139C:
	// fmr f26,f17
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = ctx.f17.f64;
loc_830513A0:
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830513b8
	if (ctx.cr6.eq) goto loc_830513B8;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83047590
	ctx.lr = 0x830513B4;
	sub_83047590(ctx, base);
	// fmr f19,f1
	ctx.fpscr.disableFlushMode();
	ctx.f19.f64 = ctx.f1.f64;
loc_830513B8:
	// lwz r11,1156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1156);
	// addi r7,r1,256
	ctx.r7.s64 = ctx.r1.s64 + 256;
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fmr f4,f20
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f20.f64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// lfs f3,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x83057448
	ctx.lr = 0x830513DC;
	sub_83057448(ctx, base);
	// b 0x830515cc
	goto loc_830515CC;
loc_830513E0:
	// lwz r11,1156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1156);
	// addi r8,r1,256
	ctx.r8.s64 = ctx.r1.s64 + 256;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r7,1164(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1164);
	// fmr f2,f18
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f18.f64;
	// fmr f1,f18
	ctx.f1.f64 = ctx.f18.f64;
	// lfs f3,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x830577a8
	ctx.lr = 0x83051400;
	sub_830577A8(ctx, base);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lvx128 v63,r0,r21
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r21.u32) & ~0xF), VectorMaskL));
	// lwz r10,17152(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 17152);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x83051530
	if (ctx.cr6.lt) goto loc_83051530;
	// addi r9,r31,-3
	ctx.r9.s64 = ctx.r31.s64 + -3;
	// addi r11,r1,304
	ctx.r11.s64 = ctx.r1.s64 + 304;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r4,-32
	ctx.r4.s64 = -32;
	// li r5,32
	ctx.r5.s64 = 32;
loc_83051430:
	// clrlwi r3,r10,31
	ctx.r3.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x83051444
	if (!ctx.cr6.eq) goto loc_83051444;
	// lvx128 v63,r0,r18
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r18.u32) & ~0xF), VectorMaskL));
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
loc_83051444:
	// lvx128 v61,r11,r14
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r14.u32) & ~0xF), VectorMaskL));
	// clrlwi r3,r10,31
	ctx.r3.u64 = ctx.r10.u32 & 0x1;
	// vlogefp128 v60,v61
	ctx.fpscr.enableFlushMode();
	ctx.v60.f32[0] = log2f(ctx.v61.f32[0]);
	ctx.v60.f32[1] = log2f(ctx.v61.f32[1]);
	ctx.v60.f32[2] = log2f(ctx.v61.f32[2]);
	ctx.v60.f32[3] = log2f(ctx.v61.f32[3]);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// vmulfp128 v59,v60,v63
	_mm_store_ps(ctx.v59.f32, _mm_mul_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v63.f32)));
	// stvx128 v59,r11,r14
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r14.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v58,r11,r4
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// vlogefp128 v57,v58
	ctx.v57.f32[0] = log2f(ctx.v58.f32[0]);
	ctx.v57.f32[1] = log2f(ctx.v58.f32[1]);
	ctx.v57.f32[2] = log2f(ctx.v58.f32[2]);
	ctx.v57.f32[3] = log2f(ctx.v58.f32[3]);
	// vmulfp128 v56,v57,v63
	_mm_store_ps(ctx.v56.f32, _mm_mul_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v63.f32)));
	// stvx128 v56,r11,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bne cr6,0x83051480
	if (!ctx.cr6.eq) goto loc_83051480;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// lvx128 v63,r0,r18
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r18.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r21
	_mm_store_si128((__m128i*)(base + ((ctx.r21.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r10,17152(r20)
	PPC_STORE_U32(ctx.r20.u32 + 17152, ctx.r10.u32);
loc_83051480:
	// lvx128 v55,r11,r16
	simd::store_shuffled(ctx.v55, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r16.u32) & ~0xF), VectorMaskL));
	// clrlwi r3,r10,31
	ctx.r3.u64 = ctx.r10.u32 & 0x1;
	// vlogefp128 v54,v55
	ctx.fpscr.enableFlushMode();
	ctx.v54.f32[0] = log2f(ctx.v55.f32[0]);
	ctx.v54.f32[1] = log2f(ctx.v55.f32[1]);
	ctx.v54.f32[2] = log2f(ctx.v55.f32[2]);
	ctx.v54.f32[3] = log2f(ctx.v55.f32[3]);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// vmulfp128 v53,v54,v63
	_mm_store_ps(ctx.v53.f32, _mm_mul_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v63.f32)));
	// stvx128 v53,r11,r16
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r16.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v52,r0,r11
	simd::store_shuffled(ctx.v52, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vlogefp128 v51,v52
	ctx.v51.f32[0] = log2f(ctx.v52.f32[0]);
	ctx.v51.f32[1] = log2f(ctx.v52.f32[1]);
	ctx.v51.f32[2] = log2f(ctx.v52.f32[2]);
	ctx.v51.f32[3] = log2f(ctx.v52.f32[3]);
	// vmulfp128 v50,v51,v63
	_mm_store_ps(ctx.v50.f32, _mm_mul_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v63.f32)));
	// stvx128 v50,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bne cr6,0x830514bc
	if (!ctx.cr6.eq) goto loc_830514BC;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// lvx128 v63,r0,r18
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r18.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r21
	_mm_store_si128((__m128i*)(base + ((ctx.r21.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r10,17152(r20)
	PPC_STORE_U32(ctx.r20.u32 + 17152, ctx.r10.u32);
loc_830514BC:
	// lvx128 v49,r11,r15
	simd::store_shuffled(ctx.v49, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r15.u32) & ~0xF), VectorMaskL));
	// clrlwi r3,r10,31
	ctx.r3.u64 = ctx.r10.u32 & 0x1;
	// vlogefp128 v48,v49
	ctx.fpscr.enableFlushMode();
	ctx.v48.f32[0] = log2f(ctx.v49.f32[0]);
	ctx.v48.f32[1] = log2f(ctx.v49.f32[1]);
	ctx.v48.f32[2] = log2f(ctx.v49.f32[2]);
	ctx.v48.f32[3] = log2f(ctx.v49.f32[3]);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// vmulfp128 v47,v48,v63
	_mm_store_ps(ctx.v47.f32, _mm_mul_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v63.f32)));
	// stvx128 v47,r11,r15
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r15.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v46,r11,r5
	simd::store_shuffled(ctx.v46, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// vlogefp128 v45,v46
	ctx.v45.f32[0] = log2f(ctx.v46.f32[0]);
	ctx.v45.f32[1] = log2f(ctx.v46.f32[1]);
	ctx.v45.f32[2] = log2f(ctx.v46.f32[2]);
	ctx.v45.f32[3] = log2f(ctx.v46.f32[3]);
	// vmulfp128 v44,v45,v63
	_mm_store_ps(ctx.v44.f32, _mm_mul_ps(_mm_load_ps(ctx.v45.f32), _mm_load_ps(ctx.v63.f32)));
	// stvx128 v44,r11,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v44.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bne cr6,0x830514f8
	if (!ctx.cr6.eq) goto loc_830514F8;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// lvx128 v63,r0,r18
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r18.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r21
	_mm_store_si128((__m128i*)(base + ((ctx.r21.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r10,17152(r20)
	PPC_STORE_U32(ctx.r20.u32 + 17152, ctx.r10.u32);
loc_830514F8:
	// lvx128 v43,r11,r7
	simd::store_shuffled(ctx.v43, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// vlogefp128 v42,v43
	ctx.fpscr.enableFlushMode();
	ctx.v42.f32[0] = log2f(ctx.v43.f32[0]);
	ctx.v42.f32[1] = log2f(ctx.v43.f32[1]);
	ctx.v42.f32[2] = log2f(ctx.v43.f32[2]);
	ctx.v42.f32[3] = log2f(ctx.v43.f32[3]);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// vmulfp128 v41,v42,v63
	_mm_store_ps(ctx.v41.f32, _mm_mul_ps(_mm_load_ps(ctx.v42.f32), _mm_load_ps(ctx.v63.f32)));
	// stvx128 v41,r11,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v41.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v40,r11,r6
	simd::store_shuffled(ctx.v40, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// vlogefp128 v39,v40
	ctx.v39.f32[0] = log2f(ctx.v40.f32[0]);
	ctx.v39.f32[1] = log2f(ctx.v40.f32[1]);
	ctx.v39.f32[2] = log2f(ctx.v40.f32[2]);
	ctx.v39.f32[3] = log2f(ctx.v40.f32[3]);
	// vmulfp128 v38,v39,v63
	_mm_store_ps(ctx.v38.f32, _mm_mul_ps(_mm_load_ps(ctx.v39.f32), _mm_load_ps(ctx.v63.f32)));
	// stvx128 v38,r11,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v38.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// blt cr6,0x83051430
	if (ctx.cr6.lt) goto loc_83051430;
	// stw r10,17152(r20)
	PPC_STORE_U32(ctx.r20.u32 + 17152, ctx.r10.u32);
	// stvx128 v63,r0,r21
	_mm_store_si128((__m128i*)(base + ((ctx.r21.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_83051530:
	// cmplw cr6,r8,r31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x830515c8
	if (!ctx.cr6.lt) goto loc_830515C8;
	// subf r7,r8,r31
	ctx.r7.s64 = ctx.r31.s64 - ctx.r8.s64;
	// rlwinm r9,r8,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_8305154C:
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x83051560
	if (!ctx.cr6.eq) goto loc_83051560;
	// lvx128 v63,r0,r18
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r18.u32) & ~0xF), VectorMaskL));
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
loc_83051560:
	// lvx128 v37,r0,r11
	simd::store_shuffled(ctx.v37, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v36,r11,r15
	simd::store_shuffled(ctx.v36, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r15.u32) & ~0xF), VectorMaskL));
	// vlogefp128 v35,v37
	ctx.fpscr.enableFlushMode();
	ctx.v35.f32[0] = log2f(ctx.v37.f32[0]);
	ctx.v35.f32[1] = log2f(ctx.v37.f32[1]);
	ctx.v35.f32[2] = log2f(ctx.v37.f32[2]);
	ctx.v35.f32[3] = log2f(ctx.v37.f32[3]);
	// vlogefp128 v34,v36
	ctx.v34.f32[0] = log2f(ctx.v36.f32[0]);
	ctx.v34.f32[1] = log2f(ctx.v36.f32[1]);
	ctx.v34.f32[2] = log2f(ctx.v36.f32[2]);
	ctx.v34.f32[3] = log2f(ctx.v36.f32[3]);
	// vmulfp128 v33,v35,v63
	_mm_store_ps(ctx.v33.f32, _mm_mul_ps(_mm_load_ps(ctx.v35.f32), _mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v32,v34,v63
	_mm_store_ps(ctx.v32.f32, _mm_mul_ps(_mm_load_ps(ctx.v34.f32), _mm_load_ps(ctx.v63.f32)));
	// stvx128 v33,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v33.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v32,r11,r15
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r15.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v32.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// bdnz 0x8305154c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8305154C;
	// stw r10,17152(r20)
	PPC_STORE_U32(ctx.r20.u32 + 17152, ctx.r10.u32);
	// stvx128 v63,r0,r21
	_mm_store_si128((__m128i*)(base + ((ctx.r21.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x830515c8
	goto loc_830515C8;
loc_83051594:
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x830515c8
	if (ctx.cr6.eq) goto loc_830515C8;
	// addi r10,r19,48
	ctx.r10.s64 = ctx.r19.s64 + 48;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
	// lvx128 v63,r0,r10
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v62,r10,r15
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r15.u32) & ~0xF), VectorMaskL));
loc_830515B8:
	// stvx128 v63,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v62,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// bdnz 0x830515b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830515B8;
loc_830515C8:
	// fmr f26,f17
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = ctx.f17.f64;
loc_830515CC:
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwz r27,15920(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15920);
	// beq cr6,0x8305198c
	if (ctx.cr6.eq) goto loc_8305198C;
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f27,f28
	ctx.f0.f64 = double(float(ctx.f27.f64 + ctx.f28.f64));
	// fadds f12,f28,f13
	ctx.f12.f64 = double(float(ctx.f28.f64 + ctx.f13.f64));
	// stfs f12,144(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lwz r11,1172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1172);
	// lwz r29,1180(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1180);
	// lfs f11,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// lwz r6,15360(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 15360);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// subf r28,r11,r29
	ctx.r28.s64 = ctx.r29.s64 - ctx.r11.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// lvlx128 v63,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v60,v63,0
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// lvx128 v63,r0,r24
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r24.u32) & ~0xF), VectorMaskL));
loc_83051620:
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// std r6,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r6.u64);
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// add r7,r4,r11
	ctx.r7.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// add r5,r4,r11
	ctx.r5.u64 = ctx.r4.u64 + ctx.r11.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// lvx128 v62,r0,r7
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// std r5,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r5.u64);
	// lvx128 v61,r4,r11
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vaddfp128 v59,v62,v60
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v59.f32, _mm_add_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v60.f32)));
	// vaddfp128 v58,v61,v60
	_mm_store_ps(ctx.v58.f32, _mm_add_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v60.f32)));
	// ld r6,16(r7)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r7.u32 + 16);
	// ld r5,24(r7)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r7.u32 + 24);
	// ld r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// ld r31,8(r7)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// std r6,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r6.u64);
	// std r5,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r5.u64);
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// std r31,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r31.u64);
	// lvx128 v61,r0,r9
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// ld r6,152(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// ld r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// stvx128 v59,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v58,r4,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// beq cr6,0x830517ec
	if (ctx.cr6.eq) goto loc_830517EC;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,15972(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15972);
	// rotlw r11,r10,r17
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, ctx.r17.u8 & 0x1F);
	// and r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 & ctx.r9.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x830517ec
	if (ctx.cr6.eq) goto loc_830517EC;
	// clrlwi r11,r17,24
	ctx.r11.u64 = ctx.r17.u32 & 0xFF;
	// lbz r10,76(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 76);
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lbz r8,64(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 64);
	// and r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 & ctx.r10.u64;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x830517ec
	if (ctx.cr6.eq) goto loc_830517EC;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
loc_830516D0:
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// and r11,r8,r31
	ctx.r11.u64 = ctx.r8.u64 & ctx.r31.u64;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x830517d4
	if (ctx.cr6.eq) goto loc_830517D4;
	// addi r11,r9,6
	ctx.r11.s64 = ctx.r9.s64 + 6;
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// ld r16,0(r10)
	ctx.r16.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// lfsx f13,r11,r25
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	ctx.f13.f64 = double(temp.f32);
	// ld r15,8(r10)
	ctx.r15.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// ld r14,16(r10)
	ctx.r14.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// ld r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 24);
	// std r16,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r16.u64);
	// std r15,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r15.u64);
	// std r14,16(r6)
	PPC_STORE_U64(ctx.r6.u32 + 16, ctx.r14.u64);
	// std r10,24(r6)
	PPC_STORE_U64(ctx.r6.u32 + 24, ctx.r10.u64);
	// fsel f11,f12,f0,f13
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// stfsx f11,r11,r25
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r25.u32, temp.u32);
	// lwz r11,15360(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 15360);
	// lhz r6,46(r25)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r25.u32 + 46);
	// rlwinm r10,r6,19,13,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 19) & 0x7FFFF;
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// clrlwi r6,r11,31
	ctx.r6.u64 = ctx.r11.u32 & 0x1;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8305175c
	if (!ctx.cr6.eq) goto loc_8305175C;
	// lwz r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,15360(r26)
	PPC_STORE_U32(ctx.r26.u32 + 15360, ctx.r11.u32);
	// lvx128 v63,r0,r6
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r24
	_mm_store_si128((__m128i*)(base + ((ctx.r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x83051760
	goto loc_83051760;
loc_8305175C:
	// lvx128 v63,r0,r24
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r24.u32) & ~0xF), VectorMaskL));
loc_83051760:
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// vmulfp128 v57,v61,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v57.f32, _mm_mul_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v63.f32)));
	// rlwinm r11,r10,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// addi r16,r1,240
	ctx.r16.s64 = ctx.r1.s64 + 240;
	// lvx128 v56,r0,r6
	simd::store_shuffled(ctx.v56, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// vmulfp128 v55,v56,v63
	_mm_store_ps(ctx.v55.f32, _mm_mul_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v63.f32)));
	// lwz r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// stw r16,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r16.u32);
	// li r15,16
	ctx.r15.s64 = 16;
	// li r14,-48
	ctx.r14.s64 = -48;
	// lvx128 v54,r0,r11
	simd::store_shuffled(ctx.v54, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// li r16,-16
	ctx.r16.s64 = -16;
	// lvx128 v53,r0,r10
	simd::store_shuffled(ctx.v53, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vexptefp128 v63,v57
	ctx.v63.f32[0] = exp2f(ctx.v57.f32[0]);
	ctx.v63.f32[1] = exp2f(ctx.v57.f32[1]);
	ctx.v63.f32[2] = exp2f(ctx.v57.f32[2]);
	ctx.v63.f32[3] = exp2f(ctx.v57.f32[3]);
	// vexptefp128 v62,v55
	ctx.v62.f32[0] = exp2f(ctx.v55.f32[0]);
	ctx.v62.f32[1] = exp2f(ctx.v55.f32[1]);
	ctx.v62.f32[2] = exp2f(ctx.v55.f32[2]);
	ctx.v62.f32[3] = exp2f(ctx.v55.f32[3]);
	// vmaxfp128 v52,v54,v63
	_mm_store_ps(ctx.v52.f32, _mm_max_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v63.f32)));
	// stvx128 v63,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaxfp128 v51,v53,v62
	_mm_store_ps(ctx.v51.f32, _mm_max_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v62.f32)));
	// lwz r6,152(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stvx128 v52,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v51,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v63,r0,r24
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r24.u32) & ~0xF), VectorMaskL));
	// lwz r6,15360(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 15360);
loc_830517D4:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// rlwinm r10,r8,1,24,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFE;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x830516d0
	if (ctx.cr6.lt) goto loc_830516D0;
loc_830517EC:
	// addi r11,r1,152
	ctx.r11.s64 = ctx.r1.s64 + 152;
	// stfs f0,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// lwz r9,1140(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1140);
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addi r31,r1,208
	ctx.r31.s64 = ctx.r1.s64 + 208;
	// lvlx128 v50,r0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v49,v50,0
	_mm_store_si128((__m128i*)ctx.v49.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v50.u32), 0xFF));
	// lvx128 v48,r0,r10
	simd::store_shuffled(ctx.v48, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vaddfp128 v62,v61,v49
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v62.f32, _mm_add_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v49.f32)));
	// vaddfp128 v61,v48,v49
	_mm_store_ps(ctx.v61.f32, _mm_add_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v49.f32)));
	// lbz r11,218(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 218);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stvx128 v62,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bne cr6,0x83051970
	if (!ctx.cr6.eq) goto loc_83051970;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,-11016(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11016);
	// rotlw r11,r10,r17
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, ctx.r17.u8 & 0x1F);
	// and r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 & ctx.r9.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x83051970
	if (ctx.cr6.eq) goto loc_83051970;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8305189c
	if (!ctx.cr6.eq) goto loc_8305189C;
	// lvx128 v47,r28,r3
	simd::store_shuffled(ctx.v47, simd::load_and_shuffle(base + ((ctx.r28.u32 + ctx.r3.u32) & ~0xF), VectorMaskL));
	// lvx128 v46,r0,r29
	simd::store_shuffled(ctx.v46, simd::load_and_shuffle(base + ((ctx.r29.u32) & ~0xF), VectorMaskL));
	// vmaxfp128 v45,v47,v61
	_mm_store_ps(ctx.v45.f32, _mm_max_ps(_mm_load_ps(ctx.v47.f32), _mm_load_ps(ctx.v61.f32)));
	// vmaxfp128 v44,v46,v62
	_mm_store_ps(ctx.v44.f32, _mm_max_ps(_mm_load_ps(ctx.v46.f32), _mm_load_ps(ctx.v62.f32)));
	// lvx128 v43,r0,r5
	simd::store_shuffled(ctx.v43, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// lvx128 v42,r0,r7
	simd::store_shuffled(ctx.v42, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// stvx128 v45,r28,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r28.u32 + ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v45.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v44,r0,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v44.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v39,r3,r16
	simd::store_shuffled(ctx.v39, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r16.u32) & ~0xF), VectorMaskL));
	// lvx128 v41,r0,r3
	simd::store_shuffled(ctx.v41, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// vmaxfp128 v40,v41,v43
	_mm_store_ps(ctx.v40.f32, _mm_max_ps(_mm_load_ps(ctx.v41.f32), _mm_load_ps(ctx.v43.f32)));
	// stvx128 v40,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v40.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaxfp128 v38,v39,v42
	_mm_store_ps(ctx.v38.f32, _mm_max_ps(_mm_load_ps(ctx.v39.f32), _mm_load_ps(ctx.v42.f32)));
	// stvx128 v38,r3,r16
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r16.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v38.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r6,15360(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 15360);
	// lvx128 v63,r0,r24
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r24.u32) & ~0xF), VectorMaskL));
	// b 0x83051970
	goto loc_83051970;
loc_8305189C:
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bne cr6,0x830518bc
	if (!ctx.cr6.eq) goto loc_830518BC;
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r24
	_mm_store_si128((__m128i*)(base + ((ctx.r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r6,15360(r26)
	PPC_STORE_U32(ctx.r26.u32 + 15360, ctx.r6.u32);
loc_830518BC:
	// vmulfp128 v37,v62,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v37.f32, _mm_mul_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v63.f32)));
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// vmulfp128 v36,v61,v63
	_mm_store_ps(ctx.v36.f32, _mm_mul_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v63.f32)));
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// clrlwi r8,r6,31
	ctx.r8.u64 = ctx.r6.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// vexptefp128 v62,v37
	ctx.v62.f32[0] = exp2f(ctx.v37.f32[0]);
	ctx.v62.f32[1] = exp2f(ctx.v37.f32[1]);
	ctx.v62.f32[2] = exp2f(ctx.v37.f32[2]);
	ctx.v62.f32[3] = exp2f(ctx.v37.f32[3]);
	// vexptefp128 v61,v36
	ctx.v61.f32[0] = exp2f(ctx.v36.f32[0]);
	ctx.v61.f32[1] = exp2f(ctx.v36.f32[1]);
	ctx.v61.f32[2] = exp2f(ctx.v36.f32[2]);
	ctx.v61.f32[3] = exp2f(ctx.v36.f32[3]);
	// stvx128 v62,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bne cr6,0x830518f8
	if (!ctx.cr6.eq) goto loc_830518F8;
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r24
	_mm_store_si128((__m128i*)(base + ((ctx.r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r6,15360(r26)
	PPC_STORE_U32(ctx.r26.u32 + 15360, ctx.r6.u32);
loc_830518F8:
	// addi r11,r1,448
	ctx.r11.s64 = ctx.r1.s64 + 448;
	// lvx128 v35,r0,r7
	simd::store_shuffled(ctx.v35, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,464
	ctx.r10.s64 = ctx.r1.s64 + 464;
	// lvx128 v34,r0,r5
	simd::store_shuffled(ctx.v34, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// vmulfp128 v33,v35,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v33.f32, _mm_mul_ps(_mm_load_ps(ctx.v35.f32), _mm_load_ps(ctx.v63.f32)));
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// vmulfp128 v32,v34,v63
	_mm_store_ps(ctx.v32.f32, _mm_mul_ps(_mm_load_ps(ctx.v34.f32), _mm_load_ps(ctx.v63.f32)));
	// addi r9,r1,656
	ctx.r9.s64 = ctx.r1.s64 + 656;
	// addi r8,r1,640
	ctx.r8.s64 = ctx.r1.s64 + 640;
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// lvx128 v59,r0,r11
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// lvx128 v58,r0,r10
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vaddfp128 v57,v59,v62
	_mm_store_ps(ctx.v57.f32, _mm_add_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v62.f32)));
	// vaddfp128 v56,v58,v61
	_mm_store_ps(ctx.v56.f32, _mm_add_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v61.f32)));
	// vexptefp128 v55,v33
	ctx.v55.f32[0] = exp2f(ctx.v33.f32[0]);
	ctx.v55.f32[1] = exp2f(ctx.v33.f32[1]);
	ctx.v55.f32[2] = exp2f(ctx.v33.f32[2]);
	ctx.v55.f32[3] = exp2f(ctx.v33.f32[3]);
	// vexptefp128 v54,v32
	ctx.v54.f32[0] = exp2f(ctx.v32.f32[0]);
	ctx.v54.f32[1] = exp2f(ctx.v32.f32[1]);
	ctx.v54.f32[2] = exp2f(ctx.v32.f32[2]);
	ctx.v54.f32[3] = exp2f(ctx.v32.f32[3]);
	// stvx128 v57,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v56,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vor128 v50,v55,v55
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_load_si128((__m128i*)ctx.v55.u8));
	// stvx128 v55,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vor128 v51,v54,v54
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_load_si128((__m128i*)ctx.v54.u8));
	// stvx128 v54,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v53,r0,r8
	simd::store_shuffled(ctx.v53, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vaddfp128 v48,v53,v50
	_mm_store_ps(ctx.v48.f32, _mm_add_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v50.f32)));
	// lvx128 v52,r0,r9
	simd::store_shuffled(ctx.v52, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vaddfp128 v49,v52,v51
	_mm_store_ps(ctx.v49.f32, _mm_add_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v51.f32)));
	// stvx128 v48,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v49,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_83051970:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,64
	ctx.r29.s64 = ctx.r29.s64 + 64;
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83051620
	if (ctx.cr6.lt) goto loc_83051620;
loc_8305198C:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83051a28
	if (ctx.cr6.eq) goto loc_83051A28;
	// fadds f0,f27,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f27.f64 + ctx.f28.f64));
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// fadds f31,f28,f19
	ctx.f31.f64 = double(float(ctx.f28.f64 + ctx.f19.f64));
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// fadds f1,f0,f19
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f19.f64));
	// bne cr6,0x830519f8
	if (!ctx.cr6.eq) goto loc_830519F8;
	// lwz r9,1180(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1180);
	// rlwinm r10,r11,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r8,1172(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1172);
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r9,r11,20
	ctx.r9.s64 = ctx.r11.s64 + 20;
	// addi r9,r10,20
	ctx.r9.s64 = ctx.r10.s64 + 20;
	// lfs f0,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fsel f12,f13,f1,f0
	ctx.f12.f64 = ctx.f13.f64 >= 0.0 ? ctx.f1.f64 : ctx.f0.f64;
	// stfs f12,20(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f11,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f31,f11
	ctx.f10.f64 = double(float(ctx.f31.f64 - ctx.f11.f64));
	// fsel f9,f10,f31,f11
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f31.f64 : ctx.f11.f64;
	// stfs f9,20(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// b 0x83051a28
	goto loc_83051A28;
loc_830519F8:
	// rlwinm r31,r11,5,0,26
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r30,r1,468
	ctx.r30.s64 = ctx.r1.s64 + 468;
	// bl 0x8304ff60
	ctx.lr = 0x83051A04;
	sub_8304FF60(ctx, base);
	// lfsx f0,r30,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r29,r1,660
	ctx.r29.s64 = ctx.r1.s64 + 660;
	// fadds f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfsx f13,r30,r31
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8304ff60
	ctx.lr = 0x83051A1C;
	sub_8304FF60(ctx, base);
	// lfsx f12,r29,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f1,f12
	ctx.f11.f64 = double(float(ctx.f1.f64 + ctx.f12.f64));
	// stfsx f11,r29,r31
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r29.u32 + ctx.r31.u32, temp.u32);
loc_83051A28:
	// addi r9,r23,1
	ctx.r9.s64 = ctx.r23.s64 + 1;
	// lhz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 100);
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x830511fc
	if (ctx.cr6.lt) goto loc_830511FC;
loc_83051A40:
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83051c40
	if (ctx.cr6.eq) goto loc_83051C40;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83051bc4
	if (ctx.cr6.eq) goto loc_83051BC4;
	// lwz r11,1172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1172);
	// addi r31,r1,456
	ctx.r31.s64 = ctx.r1.s64 + 456;
	// lwz r29,1180(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1180);
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r30,r11,16
	ctx.r30.s64 = ctx.r11.s64 + 16;
	// subf r27,r11,r29
	ctx.r27.s64 = ctx.r29.s64 - ctx.r11.s64;
loc_83051A70:
	// lfs f1,-8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82fa4060
	ctx.lr = 0x83051A78;
	sub_82FA4060(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lfs f1,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f13,f0,f22
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f22.f64));
	// stfs f13,-8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + -8, temp.u32);
	// bl 0x82fa4060
	ctx.lr = 0x83051A8C;
	sub_82FA4060(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lfs f1,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f11,f12,f22
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f22.f64));
	// stfs f11,-4(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// bl 0x82fa4060
	ctx.lr = 0x83051AA0;
	sub_82FA4060(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// lfs f1,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f9,f10,f22
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f22.f64));
	// stfs f9,0(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// bl 0x82fa4060
	ctx.lr = 0x83051AB4;
	sub_82FA4060(ctx, base);
	// frsp f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// lfs f1,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f7,f8,f22
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f22.f64));
	// stfs f7,12(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// bl 0x82fa4060
	ctx.lr = 0x83051AC8;
	sub_82FA4060(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// lfs f1,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f5,f6,f22
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f22.f64));
	// stfs f5,4(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// bl 0x82fa4060
	ctx.lr = 0x83051ADC;
	sub_82FA4060(ctx, base);
	// frsp f4,f1
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = double(float(ctx.f1.f64));
	// fmuls f3,f4,f22
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f22.f64));
	// stfs f3,8(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f1,184(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82fa4060
	ctx.lr = 0x83051AF0;
	sub_82FA4060(ctx, base);
	// frsp f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f1.f64));
	// lfs f1,188(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f2,f22
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f22.f64));
	// stfs f0,184(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// bl 0x82fa4060
	ctx.lr = 0x83051B04;
	sub_82FA4060(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lfs f1,192(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f12,f13,f22
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f22.f64));
	// stfs f12,188(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 188, temp.u32);
	// bl 0x82fa4060
	ctx.lr = 0x83051B18;
	sub_82FA4060(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lfs f1,204(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f10,f11,f22
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f22.f64));
	// stfs f10,192(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 192, temp.u32);
	// bl 0x82fa4060
	ctx.lr = 0x83051B2C;
	sub_82FA4060(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// lfs f1,196(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f8,f9,f22
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f22.f64));
	// stfs f8,204(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 204, temp.u32);
	// bl 0x82fa4060
	ctx.lr = 0x83051B40;
	sub_82FA4060(ctx, base);
	// frsp f7,f1
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f1.f64));
	// lfs f1,200(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f6,f7,f22
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f22.f64));
	// stfs f6,196(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
	// bl 0x82fa4060
	ctx.lr = 0x83051B54;
	sub_82FA4060(ctx, base);
	// frsp f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// li r10,-8
	ctx.r10.s64 = -8;
	// lvx128 v47,r0,r29
	simd::store_shuffled(ctx.v47, simd::load_and_shuffle(base + ((ctx.r29.u32) & ~0xF), VectorMaskL));
	// li r11,8
	ctx.r11.s64 = 8;
	// lvx128 v46,r30,r27
	simd::store_shuffled(ctx.v46, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r27.u32) & ~0xF), VectorMaskL));
	// li r8,200
	ctx.r8.s64 = 200;
	// li r9,184
	ctx.r9.s64 = 184;
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// fmuls f4,f5,f22
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f22.f64));
	// stfs f4,200(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// lvx128 v44,r31,r10
	simd::store_shuffled(ctx.v44, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v45,r31,r11
	simd::store_shuffled(ctx.v45, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vmaxfp128 v42,v46,v45
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v42.f32, _mm_max_ps(_mm_load_ps(ctx.v46.f32), _mm_load_ps(ctx.v45.f32)));
	// vmaxfp128 v43,v47,v44
	_mm_store_ps(ctx.v43.f32, _mm_max_ps(_mm_load_ps(ctx.v47.f32), _mm_load_ps(ctx.v44.f32)));
	// stvx128 v42,r30,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v42.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v40,r31,r8
	simd::store_shuffled(ctx.v40, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v41,r31,r9
	simd::store_shuffled(ctx.v41, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v43,r0,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v43.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v38,r0,r30
	simd::store_shuffled(ctx.v38, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// lvx128 v39,r30,r16
	simd::store_shuffled(ctx.v39, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r16.u32) & ~0xF), VectorMaskL));
	// vmaxfp128 v36,v39,v41
	_mm_store_ps(ctx.v36.f32, _mm_max_ps(_mm_load_ps(ctx.v39.f32), _mm_load_ps(ctx.v41.f32)));
	// vmaxfp128 v37,v38,v40
	_mm_store_ps(ctx.v37.f32, _mm_max_ps(_mm_load_ps(ctx.v38.f32), _mm_load_ps(ctx.v40.f32)));
	// stvx128 v36,r30,r16
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r16.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v36.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v37,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v37.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// addi r29,r29,64
	ctx.r29.s64 = ctx.r29.s64 + 64;
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
	// bne 0x83051a70
	if (!ctx.cr0.eq) goto loc_83051A70;
loc_83051BC4:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83051c40
	if (ctx.cr6.eq) goto loc_83051C40;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r10,r1,468
	ctx.r10.s64 = ctx.r1.s64 + 468;
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
	// rlwinm r30,r31,5,0,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// lfsx f1,r30,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82fa4060
	ctx.lr = 0x83051BE8;
	sub_82FA4060(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lwz r9,1180(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1180);
	// rlwinm r31,r31,6,0,25
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r8,r1,660
	ctx.r8.s64 = ctx.r1.s64 + 660;
	// add r11,r31,r9
	ctx.r11.u64 = ctx.r31.u64 + ctx.r9.u64;
	// addi r10,r11,20
	ctx.r10.s64 = ctx.r11.s64 + 20;
	// lfsx f1,r30,r8
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	ctx.f1.f64 = double(temp.f32);
	// lfs f13,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f22
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f22.f64));
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fsel f10,f11,f12,f13
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f12.f64 : ctx.f13.f64;
	// stfs f10,20(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// bl 0x82fa4060
	ctx.lr = 0x83051C1C;
	sub_82FA4060(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// lwz r7,1172(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1172);
	// add r11,r31,r7
	ctx.r11.u64 = ctx.r31.u64 + ctx.r7.u64;
	// addi r10,r11,20
	ctx.r10.s64 = ctx.r11.s64 + 20;
	// lfs f8,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f9,f22
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f22.f64));
	// fsubs f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// fsel f5,f6,f7,f8
	ctx.f5.f64 = ctx.f6.f64 >= 0.0 ? ctx.f7.f64 : ctx.f8.f64;
	// stfs f5,20(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
loc_83051C40:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// addi r22,r22,144
	ctx.r22.s64 = ctx.r22.s64 + 144;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x830511c0
	if (!ctx.cr6.eq) goto loc_830511C0;
	// lwz r20,1180(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1180);
	// li r22,-64
	ctx.r22.s64 = -64;
	// lwz r14,84(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r23,-80
	ctx.r23.s64 = -80;
	// lwz r18,92(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r21,-144
	ctx.r21.s64 = -144;
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// li r27,64
	ctx.r27.s64 = 64;
	// lwz r19,180(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// li r28,48
	ctx.r28.s64 = 48;
	// lwz r29,128(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r15,1172(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1172);
loc_83051C8C:
	// lwz r30,1148(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1148);
	// lbz r10,1199(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 1199);
	// lwz r25,1140(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f0,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f26
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f26.f64));
	// fsel f12,f13,f0,f26
	ctx.f12.f64 = ctx.f13.f64 >= 0.0 ? ctx.f0.f64 : ctx.f26.f64;
	// stfs f12,12(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// beq cr6,0x83051ee4
	if (ctx.cr6.eq) goto loc_83051EE4;
	// lwz r11,112(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 112);
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// lfs f0,80(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// beq cr6,0x83051df0
	if (ctx.cr6.eq) goto loc_83051DF0;
	// addi r7,r1,124
	ctx.r7.s64 = ctx.r1.s64 + 124;
	// lfs f0,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// mtctr r14
	ctx.ctr.u64 = ctx.r14.u64;
	// mr r10,r15
	ctx.r10.u64 = ctx.r15.u64;
	// addi r11,r20,16
	ctx.r11.s64 = ctx.r20.s64 + 16;
	// subf r6,r20,r15
	ctx.r6.s64 = ctx.r15.s64 - ctx.r20.s64;
	// lvlx128 v34,r0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v34.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// lvlx128 v35,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v35.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// mr r7,r16
	ctx.r7.u64 = ctx.r16.u64;
	// vspltw128 v62,v34,0
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v34.u32), 0xFF));
	// vspltw128 v61,v35,0
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v35.u32), 0xFF));
loc_83051CF8:
	// lvx128 v33,r11,r8
	simd::store_shuffled(ctx.v33, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v32,r0,r11
	simd::store_shuffled(ctx.v32, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vaddfp128 v63,v33,v62
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v63.f32, _mm_add_ps(_mm_load_ps(ctx.v33.f32), _mm_load_ps(ctx.v62.f32)));
	// vaddfp128 v60,v32,v62
	_mm_store_ps(ctx.v60.f32, _mm_add_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v62.f32)));
	// stvx128 v63,r11,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v60,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r9,15360(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 15360);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x83051d38
	if (!ctx.cr6.eq) goto loc_83051D38;
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// lvx128 v63,r0,r3
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r24
	_mm_store_si128((__m128i*)(base + ((ctx.r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r9,15360(r26)
	PPC_STORE_U32(ctx.r26.u32 + 15360, ctx.r9.u32);
	// b 0x83051d3c
	goto loc_83051D3C;
loc_83051D38:
	// lvx128 v63,r0,r24
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r24.u32) & ~0xF), VectorMaskL));
loc_83051D3C:
	// lvx128 v59,r0,r11
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// add r9,r6,r11
	ctx.r9.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lvx128 v58,r11,r16
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r16.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v57,v59,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v57.f32, _mm_mul_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v56,v58,v63
	_mm_store_ps(ctx.v56.f32, _mm_mul_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v63.f32)));
	// vexptefp128 v55,v57
	ctx.v55.f32[0] = exp2f(ctx.v57.f32[0]);
	ctx.v55.f32[1] = exp2f(ctx.v57.f32[1]);
	ctx.v55.f32[2] = exp2f(ctx.v57.f32[2]);
	ctx.v55.f32[3] = exp2f(ctx.v57.f32[3]);
	// vexptefp128 v54,v56
	ctx.v54.f32[0] = exp2f(ctx.v56.f32[0]);
	ctx.v54.f32[1] = exp2f(ctx.v56.f32[1]);
	ctx.v54.f32[2] = exp2f(ctx.v56.f32[2]);
	ctx.v54.f32[3] = exp2f(ctx.v56.f32[3]);
	// vor128 v51,v55,v55
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_load_si128((__m128i*)ctx.v55.u8));
	// stvx128 v55,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vor128 v53,v54,v54
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_load_si128((__m128i*)ctx.v54.u8));
	// stvx128 v54,r11,r16
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r16.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v50,v51,v61
	_mm_store_ps(ctx.v50.f32, _mm_mul_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v61.f32)));
	// vmulfp128 v52,v53,v61
	_mm_store_ps(ctx.v52.f32, _mm_mul_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v61.f32)));
	// stvx128 v50,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v52,r11,r16
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r16.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v49,r6,r11
	simd::store_shuffled(ctx.v49, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vaddfp128 v47,v49,v62
	_mm_store_ps(ctx.v47.f32, _mm_add_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v62.f32)));
	// lvx128 v48,r0,r10
	simd::store_shuffled(ctx.v48, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vaddfp128 v46,v48,v62
	_mm_store_ps(ctx.v46.f32, _mm_add_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v62.f32)));
	// stvx128 v47,r6,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v46,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v46.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,20(r10)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// lwz r8,15360(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 15360);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x83051db8
	if (!ctx.cr6.eq) goto loc_83051DB8;
	// ori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 | 1;
	// lvx128 v63,r0,r3
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r24
	_mm_store_si128((__m128i*)(base + ((ctx.r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r8,15360(r26)
	PPC_STORE_U32(ctx.r26.u32 + 15360, ctx.r8.u32);
	// b 0x83051dbc
	goto loc_83051DBC;
loc_83051DB8:
	// lvx128 v63,r0,r24
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r24.u32) & ~0xF), VectorMaskL));
loc_83051DBC:
	// lvx128 v45,r0,r10
	simd::store_shuffled(ctx.v45, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// lvx128 v44,r0,r9
	simd::store_shuffled(ctx.v44, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v43,v45,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v43.f32, _mm_mul_ps(_mm_load_ps(ctx.v45.f32), _mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v42,v44,v63
	_mm_store_ps(ctx.v42.f32, _mm_mul_ps(_mm_load_ps(ctx.v44.f32), _mm_load_ps(ctx.v63.f32)));
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// mr r7,r16
	ctx.r7.u64 = ctx.r16.u64;
	// vexptefp128 v41,v43
	ctx.v41.f32[0] = exp2f(ctx.v43.f32[0]);
	ctx.v41.f32[1] = exp2f(ctx.v43.f32[1]);
	ctx.v41.f32[2] = exp2f(ctx.v43.f32[2]);
	ctx.v41.f32[3] = exp2f(ctx.v43.f32[3]);
	// vexptefp128 v40,v42
	ctx.v40.f32[0] = exp2f(ctx.v42.f32[0]);
	ctx.v40.f32[1] = exp2f(ctx.v42.f32[1]);
	ctx.v40.f32[2] = exp2f(ctx.v42.f32[2]);
	ctx.v40.f32[3] = exp2f(ctx.v42.f32[3]);
	// stvx128 v41,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v41.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// stvx128 v40,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v40.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bdnz 0x83051cf8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83051CF8;
loc_83051DF0:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830521d0
	if (ctx.cr6.eq) goto loc_830521D0;
	// addi r11,r18,-1
	ctx.r11.s64 = ctx.r18.s64 + -1;
	// rlwinm r8,r11,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r8,r15
	ctx.r11.u64 = ctx.r8.u64 + ctx.r15.u64;
	// lfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f16
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f16.f64));
	// stfs f13,20(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lwz r10,15360(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 15360);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x83051e38
	if (!ctx.cr6.eq) goto loc_83051E38;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// lvx128 v63,r0,r3
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r24
	_mm_store_si128((__m128i*)(base + ((ctx.r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r10,15360(r26)
	PPC_STORE_U32(ctx.r26.u32 + 15360, ctx.r10.u32);
	// b 0x83051e3c
	goto loc_83051E3C;
loc_83051E38:
	// lvx128 v63,r0,r24
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r24.u32) & ~0xF), VectorMaskL));
loc_83051E3C:
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// lvx128 v39,r0,r11
	simd::store_shuffled(ctx.v39, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v38,v39,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v38.f32, _mm_mul_ps(_mm_load_ps(ctx.v39.f32), _mm_load_ps(ctx.v63.f32)));
	// add r10,r8,r20
	ctx.r10.u64 = ctx.r8.u64 + ctx.r20.u64;
	// lvx128 v37,r0,r9
	simd::store_shuffled(ctx.v37, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v36,v37,v63
	_mm_store_ps(ctx.v36.f32, _mm_mul_ps(_mm_load_ps(ctx.v37.f32), _mm_load_ps(ctx.v63.f32)));
	// vexptefp128 v35,v38
	ctx.v35.f32[0] = exp2f(ctx.v38.f32[0]);
	ctx.v35.f32[1] = exp2f(ctx.v38.f32[1]);
	ctx.v35.f32[2] = exp2f(ctx.v38.f32[2]);
	ctx.v35.f32[3] = exp2f(ctx.v38.f32[3]);
	// vexptefp128 v34,v36
	ctx.v34.f32[0] = exp2f(ctx.v36.f32[0]);
	ctx.v34.f32[1] = exp2f(ctx.v36.f32[1]);
	ctx.v34.f32[2] = exp2f(ctx.v36.f32[2]);
	ctx.v34.f32[3] = exp2f(ctx.v36.f32[3]);
	// stvx128 v35,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v35.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v34,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v34.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,20(r10)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f16
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f16.f64));
	// stfs f13,20(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// lwz r11,15360(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 15360);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x83051e94
	if (!ctx.cr6.eq) goto loc_83051E94;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lvx128 v63,r0,r3
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r24
	_mm_store_si128((__m128i*)(base + ((ctx.r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r11,15360(r26)
	PPC_STORE_U32(ctx.r26.u32 + 15360, ctx.r11.u32);
	// b 0x83051e98
	goto loc_83051E98;
loc_83051E94:
	// lvx128 v63,r0,r24
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r24.u32) & ~0xF), VectorMaskL));
loc_83051E98:
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// lvx128 v33,r0,r10
	simd::store_shuffled(ctx.v33, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v32,v33,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v32.f32, _mm_mul_ps(_mm_load_ps(ctx.v33.f32), _mm_load_ps(ctx.v63.f32)));
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// lvx128 v62,r0,r11
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v61,v62,v63
	_mm_store_ps(ctx.v61.f32, _mm_mul_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v63.f32)));
	// lvlx128 v60,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v59,v60,0
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), 0xFF));
	// vexptefp128 v58,v32
	ctx.v58.f32[0] = exp2f(ctx.v32.f32[0]);
	ctx.v58.f32[1] = exp2f(ctx.v32.f32[1]);
	ctx.v58.f32[2] = exp2f(ctx.v32.f32[2]);
	ctx.v58.f32[3] = exp2f(ctx.v32.f32[3]);
	// vexptefp128 v57,v61
	ctx.v57.f32[0] = exp2f(ctx.v61.f32[0]);
	ctx.v57.f32[1] = exp2f(ctx.v61.f32[1]);
	ctx.v57.f32[2] = exp2f(ctx.v61.f32[2]);
	ctx.v57.f32[3] = exp2f(ctx.v61.f32[3]);
	// vor128 v56,v58,v58
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_load_si128((__m128i*)ctx.v58.u8));
	// stvx128 v58,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v54,v56,v59
	_mm_store_ps(ctx.v54.f32, _mm_mul_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v59.f32)));
	// vor128 v55,v57,v57
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_load_si128((__m128i*)ctx.v57.u8));
	// stvx128 v57,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v53,v55,v59
	_mm_store_ps(ctx.v53.f32, _mm_mul_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v59.f32)));
	// stvx128 v54,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v53,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x830521d0
	goto loc_830521D0;
loc_83051EE4:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r14,4
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 4, ctx.xer);
	// blt cr6,0x830520cc
	if (ctx.cr6.lt) goto loc_830520CC;
	// addi r10,r1,124
	ctx.r10.s64 = ctx.r1.s64 + 124;
	// li r5,-128
	ctx.r5.s64 = -128;
	// addi r4,r14,-3
	ctx.r4.s64 = ctx.r14.s64 + -3;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// addi r11,r20,144
	ctx.r11.s64 = ctx.r20.s64 + 144;
	// lvlx128 v52,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// vspltw128 v62,v52,0
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v52.u32), 0xFF));
loc_83051F1C:
	// lvx128 v51,r11,r10
	simd::store_shuffled(ctx.v51, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vaddfp128 v50,v51,v62
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v50.f32, _mm_add_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v62.f32)));
	// stvx128 v50,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v49,r11,r8
	simd::store_shuffled(ctx.v49, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// vaddfp128 v48,v49,v62
	_mm_store_ps(ctx.v48.f32, _mm_add_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v62.f32)));
	// stvx128 v48,r11,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,-124(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -124, temp.u32);
	// lwz r10,15360(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 15360);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x83051f5c
	if (!ctx.cr6.eq) goto loc_83051F5C;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// lvx128 v63,r0,r3
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r24
	_mm_store_si128((__m128i*)(base + ((ctx.r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r10,15360(r26)
	PPC_STORE_U32(ctx.r26.u32 + 15360, ctx.r10.u32);
	// b 0x83051f60
	goto loc_83051F60;
loc_83051F5C:
	// lvx128 v63,r0,r24
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r24.u32) & ~0xF), VectorMaskL));
loc_83051F60:
	// lvx128 v47,r11,r21
	simd::store_shuffled(ctx.v47, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r21.u32) & ~0xF), VectorMaskL));
	// lvx128 v45,r11,r5
	simd::store_shuffled(ctx.v45, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v46,v47,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v46.f32, _mm_mul_ps(_mm_load_ps(ctx.v47.f32), _mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v44,v45,v63
	_mm_store_ps(ctx.v44.f32, _mm_mul_ps(_mm_load_ps(ctx.v45.f32), _mm_load_ps(ctx.v63.f32)));
	// vexptefp128 v43,v46
	ctx.v43.f32[0] = exp2f(ctx.v46.f32[0]);
	ctx.v43.f32[1] = exp2f(ctx.v46.f32[1]);
	ctx.v43.f32[2] = exp2f(ctx.v46.f32[2]);
	ctx.v43.f32[3] = exp2f(ctx.v46.f32[3]);
	// vexptefp128 v42,v44
	ctx.v42.f32[0] = exp2f(ctx.v44.f32[0]);
	ctx.v42.f32[1] = exp2f(ctx.v44.f32[1]);
	ctx.v42.f32[2] = exp2f(ctx.v44.f32[2]);
	ctx.v42.f32[3] = exp2f(ctx.v44.f32[3]);
	// stvx128 v43,r11,r21
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r21.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v43.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v42,r11,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v42.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v41,r11,r23
	simd::store_shuffled(ctx.v41, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r23.u32) & ~0xF), VectorMaskL));
	// vaddfp128 v40,v41,v62
	_mm_store_ps(ctx.v40.f32, _mm_add_ps(_mm_load_ps(ctx.v41.f32), _mm_load_ps(ctx.v62.f32)));
	// stvx128 v40,r11,r23
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r23.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v40.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v39,r11,r22
	simd::store_shuffled(ctx.v39, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r22.u32) & ~0xF), VectorMaskL));
	// vaddfp128 v38,v39,v62
	_mm_store_ps(ctx.v38.f32, _mm_add_ps(_mm_load_ps(ctx.v39.f32), _mm_load_ps(ctx.v62.f32)));
	// stvx128 v38,r11,r22
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r22.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v38.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,-60(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -60, temp.u32);
	// lwz r10,15360(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 15360);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x83051fc0
	if (!ctx.cr6.eq) goto loc_83051FC0;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// lvx128 v63,r0,r3
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r24
	_mm_store_si128((__m128i*)(base + ((ctx.r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r10,15360(r26)
	PPC_STORE_U32(ctx.r26.u32 + 15360, ctx.r10.u32);
	// b 0x83051fc4
	goto loc_83051FC4;
loc_83051FC0:
	// lvx128 v63,r0,r24
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r24.u32) & ~0xF), VectorMaskL));
loc_83051FC4:
	// lvx128 v37,r11,r23
	simd::store_shuffled(ctx.v37, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r23.u32) & ~0xF), VectorMaskL));
	// lvx128 v36,r11,r22
	simd::store_shuffled(ctx.v36, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r22.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v35,v37,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v35.f32, _mm_mul_ps(_mm_load_ps(ctx.v37.f32), _mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v34,v36,v63
	_mm_store_ps(ctx.v34.f32, _mm_mul_ps(_mm_load_ps(ctx.v36.f32), _mm_load_ps(ctx.v63.f32)));
	// vexptefp128 v33,v35
	ctx.v33.f32[0] = exp2f(ctx.v35.f32[0]);
	ctx.v33.f32[1] = exp2f(ctx.v35.f32[1]);
	ctx.v33.f32[2] = exp2f(ctx.v35.f32[2]);
	ctx.v33.f32[3] = exp2f(ctx.v35.f32[3]);
	// vexptefp128 v32,v34
	ctx.v32.f32[0] = exp2f(ctx.v34.f32[0]);
	ctx.v32.f32[1] = exp2f(ctx.v34.f32[1]);
	ctx.v32.f32[2] = exp2f(ctx.v34.f32[2]);
	ctx.v32.f32[3] = exp2f(ctx.v34.f32[3]);
	// stvx128 v33,r11,r23
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r23.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v33.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v32,r11,r22
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r22.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v32.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v63,r11,r16
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r16.u32) & ~0xF), VectorMaskL));
	// vaddfp128 v61,v63,v62
	_mm_store_ps(ctx.v61.f32, _mm_add_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v62.f32)));
	// stvx128 v61,r11,r16
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r16.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v60,r0,r11
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vaddfp128 v59,v60,v62
	_mm_store_ps(ctx.v59.f32, _mm_add_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v62.f32)));
	// stvx128 v59,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r10,15360(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 15360);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x83052024
	if (!ctx.cr6.eq) goto loc_83052024;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// lvx128 v63,r0,r3
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r24
	_mm_store_si128((__m128i*)(base + ((ctx.r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r10,15360(r26)
	PPC_STORE_U32(ctx.r26.u32 + 15360, ctx.r10.u32);
	// b 0x83052028
	goto loc_83052028;
loc_83052024:
	// lvx128 v63,r0,r24
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r24.u32) & ~0xF), VectorMaskL));
loc_83052028:
	// lvx128 v58,r11,r16
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r16.u32) & ~0xF), VectorMaskL));
	// lvx128 v57,r0,r11
	simd::store_shuffled(ctx.v57, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v56,v58,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v56.f32, _mm_mul_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v55,v57,v63
	_mm_store_ps(ctx.v55.f32, _mm_mul_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v63.f32)));
	// vexptefp128 v54,v56
	ctx.v54.f32[0] = exp2f(ctx.v56.f32[0]);
	ctx.v54.f32[1] = exp2f(ctx.v56.f32[1]);
	ctx.v54.f32[2] = exp2f(ctx.v56.f32[2]);
	ctx.v54.f32[3] = exp2f(ctx.v56.f32[3]);
	// vexptefp128 v53,v55
	ctx.v53.f32[0] = exp2f(ctx.v55.f32[0]);
	ctx.v53.f32[1] = exp2f(ctx.v55.f32[1]);
	ctx.v53.f32[2] = exp2f(ctx.v55.f32[2]);
	ctx.v53.f32[3] = exp2f(ctx.v55.f32[3]);
	// stvx128 v54,r11,r16
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r16.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v53,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v52,r11,r28
	simd::store_shuffled(ctx.v52, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r28.u32) & ~0xF), VectorMaskL));
	// vaddfp128 v51,v52,v62
	_mm_store_ps(ctx.v51.f32, _mm_add_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v62.f32)));
	// stvx128 v51,r11,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v50,r11,r27
	simd::store_shuffled(ctx.v50, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r27.u32) & ~0xF), VectorMaskL));
	// vaddfp128 v49,v50,v62
	_mm_store_ps(ctx.v49.f32, _mm_add_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v62.f32)));
	// stvx128 v49,r11,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,68(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// lwz r10,15360(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 15360);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x83052088
	if (!ctx.cr6.eq) goto loc_83052088;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// lvx128 v63,r0,r3
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r24
	_mm_store_si128((__m128i*)(base + ((ctx.r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r10,15360(r26)
	PPC_STORE_U32(ctx.r26.u32 + 15360, ctx.r10.u32);
	// b 0x8305208c
	goto loc_8305208C;
loc_83052088:
	// lvx128 v63,r0,r24
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r24.u32) & ~0xF), VectorMaskL));
loc_8305208C:
	// lvx128 v48,r11,r28
	simd::store_shuffled(ctx.v48, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r28.u32) & ~0xF), VectorMaskL));
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// lvx128 v47,r11,r27
	simd::store_shuffled(ctx.v47, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r27.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v46,v48,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v46.f32, _mm_mul_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v45,v47,v63
	_mm_store_ps(ctx.v45.f32, _mm_mul_ps(_mm_load_ps(ctx.v47.f32), _mm_load_ps(ctx.v63.f32)));
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// cmplw cr6,r6,r4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, ctx.xer);
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// vexptefp128 v44,v46
	ctx.v44.f32[0] = exp2f(ctx.v46.f32[0]);
	ctx.v44.f32[1] = exp2f(ctx.v46.f32[1]);
	ctx.v44.f32[2] = exp2f(ctx.v46.f32[2]);
	ctx.v44.f32[3] = exp2f(ctx.v46.f32[3]);
	// vexptefp128 v43,v45
	ctx.v43.f32[0] = exp2f(ctx.v45.f32[0]);
	ctx.v43.f32[1] = exp2f(ctx.v45.f32[1]);
	ctx.v43.f32[2] = exp2f(ctx.v45.f32[2]);
	ctx.v43.f32[3] = exp2f(ctx.v45.f32[3]);
	// stvx128 v44,r11,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v44.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v43,r11,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v43.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// blt cr6,0x83051f1c
	if (ctx.cr6.lt) goto loc_83051F1C;
loc_830520CC:
	// cmplw cr6,r6,r14
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r14.u32, ctx.xer);
	// bge cr6,0x83052160
	if (!ctx.cr6.lt) goto loc_83052160;
	// addi r10,r1,124
	ctx.r10.s64 = ctx.r1.s64 + 124;
	// rlwinm r11,r6,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 6) & 0xFFFFFFC0;
	// subf r9,r6,r14
	ctx.r9.s64 = ctx.r14.s64 - ctx.r6.s64;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// lvlx128 v42,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v42.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// vspltw128 v62,v42,0
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v42.u32), 0xFF));
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_830520F4:
	// lvx128 v41,r0,r11
	simd::store_shuffled(ctx.v41, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v40,r11,r16
	simd::store_shuffled(ctx.v40, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r16.u32) & ~0xF), VectorMaskL));
	// vaddfp128 v39,v41,v62
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v39.f32, _mm_add_ps(_mm_load_ps(ctx.v41.f32), _mm_load_ps(ctx.v62.f32)));
	// vaddfp128 v38,v40,v62
	_mm_store_ps(ctx.v38.f32, _mm_add_ps(_mm_load_ps(ctx.v40.f32), _mm_load_ps(ctx.v62.f32)));
	// stvx128 v39,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v39.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v38,r11,r16
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r16.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v38.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r10,15360(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 15360);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x83052134
	if (!ctx.cr6.eq) goto loc_83052134;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// lvx128 v63,r0,r3
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r24
	_mm_store_si128((__m128i*)(base + ((ctx.r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r10,15360(r26)
	PPC_STORE_U32(ctx.r26.u32 + 15360, ctx.r10.u32);
	// b 0x83052138
	goto loc_83052138;
loc_83052134:
	// lvx128 v63,r0,r24
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r24.u32) & ~0xF), VectorMaskL));
loc_83052138:
	// lvx128 v37,r0,r11
	simd::store_shuffled(ctx.v37, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v36,r11,r16
	simd::store_shuffled(ctx.v36, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r16.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v35,v37,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v35.f32, _mm_mul_ps(_mm_load_ps(ctx.v37.f32), _mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v34,v36,v63
	_mm_store_ps(ctx.v34.f32, _mm_mul_ps(_mm_load_ps(ctx.v36.f32), _mm_load_ps(ctx.v63.f32)));
	// vexptefp128 v33,v35
	ctx.v33.f32[0] = exp2f(ctx.v35.f32[0]);
	ctx.v33.f32[1] = exp2f(ctx.v35.f32[1]);
	ctx.v33.f32[2] = exp2f(ctx.v35.f32[2]);
	ctx.v33.f32[3] = exp2f(ctx.v35.f32[3]);
	// vexptefp128 v32,v34
	ctx.v32.f32[0] = exp2f(ctx.v34.f32[0]);
	ctx.v32.f32[1] = exp2f(ctx.v34.f32[1]);
	ctx.v32.f32[2] = exp2f(ctx.v34.f32[2]);
	ctx.v32.f32[3] = exp2f(ctx.v34.f32[3]);
	// stvx128 v33,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v33.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v32,r11,r16
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r16.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v32.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// bdnz 0x830520f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830520F4;
loc_83052160:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830521d0
	if (ctx.cr6.eq) goto loc_830521D0;
	// addi r11,r18,-1
	ctx.r11.s64 = ctx.r18.s64 + -1;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// lfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f16
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f16.f64));
	// stfs f13,20(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lwz r10,15360(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 15360);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x830521a8
	if (!ctx.cr6.eq) goto loc_830521A8;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// lvx128 v63,r0,r3
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r24
	_mm_store_si128((__m128i*)(base + ((ctx.r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r10,15360(r26)
	PPC_STORE_U32(ctx.r26.u32 + 15360, ctx.r10.u32);
	// b 0x830521ac
	goto loc_830521AC;
loc_830521A8:
	// lvx128 v63,r0,r24
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r24.u32) & ~0xF), VectorMaskL));
loc_830521AC:
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// lvx128 v62,r0,r11
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v61,v62,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v61.f32, _mm_mul_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v63.f32)));
	// lvx128 v60,r0,r10
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v59,v60,v63
	_mm_store_ps(ctx.v59.f32, _mm_mul_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v63.f32)));
	// vexptefp128 v58,v61
	ctx.v58.f32[0] = exp2f(ctx.v61.f32[0]);
	ctx.v58.f32[1] = exp2f(ctx.v61.f32[1]);
	ctx.v58.f32[2] = exp2f(ctx.v61.f32[2]);
	ctx.v58.f32[3] = exp2f(ctx.v61.f32[3]);
	// vexptefp128 v57,v59
	ctx.v57.f32[0] = exp2f(ctx.v59.f32[0]);
	ctx.v57.f32[1] = exp2f(ctx.v59.f32[1]);
	ctx.v57.f32[2] = exp2f(ctx.v59.f32[2]);
	ctx.v57.f32[3] = exp2f(ctx.v59.f32[3]);
	// stvx128 v58,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v57,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_830521D0:
	// lis r31,-31958
	ctx.r31.s64 = -2094399488;
	// fmuls f1,f25,f21
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f25.f64 * ctx.f21.f64));
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,15200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15200);
	// bl 0x83047338
	ctx.lr = 0x830521E8;
	sub_83047338(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// lfs f13,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,15200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15200);
	// li r4,0
	ctx.r4.s64 = 0;
	// fmuls f1,f24,f21
	ctx.f1.f64 = double(float(ctx.f24.f64 * ctx.f21.f64));
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsel f11,f12,f13,f0
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// stfs f11,12(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// bl 0x83047338
	ctx.lr = 0x83052210;
	sub_83047338(ctx, base);
	// lwz r11,1188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1188);
	// stfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// b 0x83052ee8
	goto loc_83052EE8;
loc_8305221C:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stfs f17,168(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f17,172(r1)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f17,176(r1)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83052240
	if (ctx.cr6.eq) goto loc_83052240;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// b 0x83052248
	goto loc_83052248;
loc_83052240:
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r29,r11,-11108
	ctx.r29.s64 = ctx.r11.s64 + -11108;
loc_83052248:
	// lwz r11,112(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 112);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,116
	ctx.r8.s64 = ctx.r1.s64 + 116;
	// addi r7,r1,108
	ctx.r7.s64 = ctx.r1.s64 + 108;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,168
	ctx.r5.s64 = ctx.r1.s64 + 168;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lfs f1,84(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83050c60
	ctx.lr = 0x83052270;
	sub_83050C60(ctx, base);
	// lbz r10,16(r23)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r23.u32 + 16);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r25,r11,-12128
	ctx.r25.s64 = ctx.r11.s64 + -12128;
	// beq cr6,0x83052514
	if (ctx.cr6.eq) goto loc_83052514;
	// lfs f28,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f28.f64 = double(temp.f32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x830522a0
	if (ctx.cr6.eq) goto loc_830522A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x83047590
	ctx.lr = 0x8305229C;
	sub_83047590(ctx, base);
	// fmr f20,f1
	ctx.fpscr.disableFlushMode();
	ctx.f20.f64 = ctx.f1.f64;
loc_830522A0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x830522c4
	if (ctx.cr6.eq) goto loc_830522C4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x83047590
	ctx.lr = 0x830522B4;
	sub_83047590(ctx, base);
	// lfs f0,12(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// fsel f12,f13,f0,f1
	ctx.f12.f64 = ctx.f13.f64 >= 0.0 ? ctx.f0.f64 : ctx.f1.f64;
	// stfs f12,12(r22)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r22.u32 + 12, temp.u32);
loc_830522C4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x830522dc
	if (ctx.cr6.eq) goto loc_830522DC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x83047590
	ctx.lr = 0x830522D8;
	sub_83047590(ctx, base);
	// fmr f19,f1
	ctx.fpscr.disableFlushMode();
	ctx.f19.f64 = ctx.f1.f64;
loc_830522DC:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
	// lbz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83052338
	if (ctx.cr6.eq) goto loc_83052338;
	// lbz r11,50(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 50);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83052338
	if (!ctx.cr6.eq) goto loc_83052338;
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// addi r8,r9,15984
	ctx.r8.s64 = ctx.r9.s64 + 15984;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// addi r11,r8,96
	ctx.r11.s64 = ctx.r8.s64 + 96;
loc_83052310:
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x83052324
	if (ctx.cr6.eq) goto loc_83052324;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_83052324:
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,144
	ctx.r11.s64 = ctx.r11.s64 + 144;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83052310
	if (!ctx.cr6.eq) goto loc_83052310;
	// b 0x83052348
	goto loc_83052348;
loc_83052338:
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r10,r11,-11012
	ctx.r10.s64 = ctx.r11.s64 + -11012;
	// stw r10,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r10.u32);
loc_83052348:
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// li r22,-16
	ctx.r22.s64 = -16;
	// li r21,64
	ctx.r21.s64 = 64;
	// li r20,48
	ctx.r20.s64 = 48;
	// li r18,-48
	ctx.r18.s64 = -48;
	// li r17,-32
	ctx.r17.s64 = -32;
	// li r19,16
	ctx.r19.s64 = 16;
	// li r16,32
	ctx.r16.s64 = 32;
	// cmpwi cr6,r14,4
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 4, ctx.xer);
	// blt cr6,0x830523c0
	if (ctx.cr6.lt) goto loc_830523C0;
	// lvlx128 v56,r0,r25
	temp.u32 = ctx.r25.u32;
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r14,-3
	ctx.r9.s64 = ctx.r14.s64 + -3;
	// addi r11,r1,304
	ctx.r11.s64 = ctx.r1.s64 + 304;
	// mr r8,r17
	ctx.r8.u64 = ctx.r17.u64;
	// vspltw128 v63,v56,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v56.u32), 0xFF));
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
loc_83052390:
	// stvx128 v63,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stvx128 v63,r11,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// stvx128 v63,r11,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r11,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r11,r19
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r19.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r11,r21
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r21.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r11,r20
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r20.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// blt cr6,0x83052390
	if (ctx.cr6.lt) goto loc_83052390;
loc_830523C0:
	// cmplw cr6,r10,r14
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r14.u32, ctx.xer);
	// bge cr6,0x830523f4
	if (!ctx.cr6.lt) goto loc_830523F4;
	// subf r8,r10,r14
	ctx.r8.s64 = ctx.r14.s64 - ctx.r10.s64;
	// lvlx128 v55,r0,r25
	temp.u32 = ctx.r25.u32;
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r9,r10,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// vspltw128 v63,v55,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), 0xFF));
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_830523E4:
	// stvx128 v63,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r11,r19
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r19.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// bdnz 0x830523e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830523E4;
loc_830523F4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x830526e0
	if (ctx.cr6.eq) goto loc_830526E0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r31,r1,224
	ctx.r31.s64 = ctx.r1.s64 + 224;
	// lfs f27,-9864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -9864);
	ctx.f27.f64 = double(temp.f32);
	// lfs f29,-19444(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -19444);
	ctx.f29.f64 = double(temp.f32);
loc_83052410:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// mr r8,r14
	ctx.r8.u64 = ctx.r14.u64;
	// lfs f12,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r7,r1,448
	ctx.r7.s64 = ctx.r1.s64 + 448;
	// lfs f3,24(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// fmr f4,f20
	ctx.f4.f64 = ctx.f20.f64;
	// lfs f11,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f7,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f2,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f5,f7,f13,f10
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f0,f6,f13,f8
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fmadds f30,f1,f12,f5
	ctx.f30.f64 = double(float(ctx.f1.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fmadds f31,f12,f2,f0
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f2.f64 + ctx.f0.f64));
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83057448
	ctx.lr = 0x8305246C;
	sub_83057448(ctx, base);
	// lwz r10,76(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 76);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x830524b4
	if (ctx.cr6.eq) goto loc_830524B4;
	// lbz r11,50(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 50);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830524b4
	if (!ctx.cr6.eq) goto loc_830524B4;
	// fmuls f0,f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f29.f64));
	// addi r8,r1,116
	ctx.r8.s64 = ctx.r1.s64 + 116;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// addi r5,r1,168
	ctx.r5.s64 = ctx.r1.s64 + 168;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// fmsubs f13,f31,f29,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f29.f64 - ctx.f0.f64));
	// stfs f13,168(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fnmsubs f12,f31,f27,f0
	ctx.f12.f64 = double(float(-(ctx.f31.f64 * ctx.f27.f64 - ctx.f0.f64)));
	// stfs f12,176(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// bl 0x83050b68
	ctx.lr = 0x830524B4;
	sub_83050B68(ctx, base);
loc_830524B4:
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// beq cr6,0x83052504
	if (ctx.cr6.eq) goto loc_83052504;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r14
	ctx.ctr.u64 = ctx.r14.u64;
	// addi r8,r1,448
	ctx.r8.s64 = ctx.r1.s64 + 448;
loc_830524C8:
	// addi r10,r1,256
	ctx.r10.s64 = ctx.r1.s64 + 256;
	// lvx128 v54,r11,r8
	simd::store_shuffled(ctx.v54, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r9,r1,272
	ctx.r9.s64 = ctx.r1.s64 + 272;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r7,r1,464
	ctx.r7.s64 = ctx.r1.s64 + 464;
	// lvx128 v53,r0,r10
	simd::store_shuffled(ctx.v53, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v52,r0,r9
	simd::store_shuffled(ctx.v52, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmaxfp128 v51,v53,v54
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v51.f32, _mm_max_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v54.f32)));
	// lvx128 v50,r11,r7
	simd::store_shuffled(ctx.v50, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// vmaxfp128 v49,v52,v50
	_mm_store_ps(ctx.v49.f32, _mm_max_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v50.f32)));
	// stvx128 v51,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v49,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bdnz 0x830524c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830524C8;
loc_83052504:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x83052410
	if (!ctx.cr0.eq) goto loc_83052410;
	// b 0x830526e0
	goto loc_830526E0;
loc_83052514:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f3,24(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// addi r8,r1,256
	ctx.r8.s64 = ctx.r1.s64 + 256;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f2,11556(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11556);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x830577a8
	ctx.lr = 0x83052534;
	sub_830577A8(ctx, base);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r6,-31958
	ctx.r6.s64 = -2094399488;
	// addi r7,r10,17136
	ctx.r7.s64 = ctx.r10.s64 + 17136;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// li r22,-16
	ctx.r22.s64 = -16;
	// li r21,64
	ctx.r21.s64 = 64;
	// li r20,48
	ctx.r20.s64 = 48;
	// lvx128 v63,r0,r7
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r18,-48
	ctx.r18.s64 = -48;
	// li r17,-32
	ctx.r17.s64 = -32;
	// li r19,16
	ctx.r19.s64 = 16;
	// li r16,32
	ctx.r16.s64 = 32;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r14,4
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 4, ctx.xer);
	// addi r5,r11,-12144
	ctx.r5.s64 = ctx.r11.s64 + -12144;
	// lwz r10,17152(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 17152);
	// blt cr6,0x83052680
	if (ctx.cr6.lt) goto loc_83052680;
	// addi r9,r14,-3
	ctx.r9.s64 = ctx.r14.s64 + -3;
	// addi r11,r1,304
	ctx.r11.s64 = ctx.r1.s64 + 304;
loc_83052580:
	// clrlwi r4,r10,31
	ctx.r4.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x83052594
	if (!ctx.cr6.eq) goto loc_83052594;
	// lvx128 v63,r0,r5
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
loc_83052594:
	// lvx128 v48,r11,r18
	simd::store_shuffled(ctx.v48, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r18.u32) & ~0xF), VectorMaskL));
	// clrlwi r4,r10,31
	ctx.r4.u64 = ctx.r10.u32 & 0x1;
	// vlogefp128 v47,v48
	ctx.fpscr.enableFlushMode();
	ctx.v47.f32[0] = log2f(ctx.v48.f32[0]);
	ctx.v47.f32[1] = log2f(ctx.v48.f32[1]);
	ctx.v47.f32[2] = log2f(ctx.v48.f32[2]);
	ctx.v47.f32[3] = log2f(ctx.v48.f32[3]);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// vmulfp128 v46,v47,v63
	_mm_store_ps(ctx.v46.f32, _mm_mul_ps(_mm_load_ps(ctx.v47.f32), _mm_load_ps(ctx.v63.f32)));
	// stvx128 v46,r11,r18
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r18.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v46.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v45,r11,r17
	simd::store_shuffled(ctx.v45, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r17.u32) & ~0xF), VectorMaskL));
	// vlogefp128 v44,v45
	ctx.v44.f32[0] = log2f(ctx.v45.f32[0]);
	ctx.v44.f32[1] = log2f(ctx.v45.f32[1]);
	ctx.v44.f32[2] = log2f(ctx.v45.f32[2]);
	ctx.v44.f32[3] = log2f(ctx.v45.f32[3]);
	// vmulfp128 v43,v44,v63
	_mm_store_ps(ctx.v43.f32, _mm_mul_ps(_mm_load_ps(ctx.v44.f32), _mm_load_ps(ctx.v63.f32)));
	// stvx128 v43,r11,r17
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r17.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v43.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bne cr6,0x830525d0
	if (!ctx.cr6.eq) goto loc_830525D0;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// lvx128 v63,r0,r5
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r10,17152(r6)
	PPC_STORE_U32(ctx.r6.u32 + 17152, ctx.r10.u32);
loc_830525D0:
	// lvx128 v42,r11,r22
	simd::store_shuffled(ctx.v42, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r22.u32) & ~0xF), VectorMaskL));
	// clrlwi r4,r10,31
	ctx.r4.u64 = ctx.r10.u32 & 0x1;
	// vlogefp128 v41,v42
	ctx.fpscr.enableFlushMode();
	ctx.v41.f32[0] = log2f(ctx.v42.f32[0]);
	ctx.v41.f32[1] = log2f(ctx.v42.f32[1]);
	ctx.v41.f32[2] = log2f(ctx.v42.f32[2]);
	ctx.v41.f32[3] = log2f(ctx.v42.f32[3]);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// vmulfp128 v40,v41,v63
	_mm_store_ps(ctx.v40.f32, _mm_mul_ps(_mm_load_ps(ctx.v41.f32), _mm_load_ps(ctx.v63.f32)));
	// stvx128 v40,r11,r22
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r22.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v40.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v39,r0,r11
	simd::store_shuffled(ctx.v39, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vlogefp128 v38,v39
	ctx.v38.f32[0] = log2f(ctx.v39.f32[0]);
	ctx.v38.f32[1] = log2f(ctx.v39.f32[1]);
	ctx.v38.f32[2] = log2f(ctx.v39.f32[2]);
	ctx.v38.f32[3] = log2f(ctx.v39.f32[3]);
	// vmulfp128 v37,v38,v63
	_mm_store_ps(ctx.v37.f32, _mm_mul_ps(_mm_load_ps(ctx.v38.f32), _mm_load_ps(ctx.v63.f32)));
	// stvx128 v37,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v37.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bne cr6,0x8305260c
	if (!ctx.cr6.eq) goto loc_8305260C;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// lvx128 v63,r0,r5
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r10,17152(r6)
	PPC_STORE_U32(ctx.r6.u32 + 17152, ctx.r10.u32);
loc_8305260C:
	// lvx128 v36,r11,r19
	simd::store_shuffled(ctx.v36, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r19.u32) & ~0xF), VectorMaskL));
	// clrlwi r4,r10,31
	ctx.r4.u64 = ctx.r10.u32 & 0x1;
	// vlogefp128 v35,v36
	ctx.fpscr.enableFlushMode();
	ctx.v35.f32[0] = log2f(ctx.v36.f32[0]);
	ctx.v35.f32[1] = log2f(ctx.v36.f32[1]);
	ctx.v35.f32[2] = log2f(ctx.v36.f32[2]);
	ctx.v35.f32[3] = log2f(ctx.v36.f32[3]);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// vmulfp128 v34,v35,v63
	_mm_store_ps(ctx.v34.f32, _mm_mul_ps(_mm_load_ps(ctx.v35.f32), _mm_load_ps(ctx.v63.f32)));
	// stvx128 v34,r11,r19
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r19.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v34.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v33,r11,r16
	simd::store_shuffled(ctx.v33, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r16.u32) & ~0xF), VectorMaskL));
	// vlogefp128 v32,v33
	ctx.v32.f32[0] = log2f(ctx.v33.f32[0]);
	ctx.v32.f32[1] = log2f(ctx.v33.f32[1]);
	ctx.v32.f32[2] = log2f(ctx.v33.f32[2]);
	ctx.v32.f32[3] = log2f(ctx.v33.f32[3]);
	// vmulfp128 v62,v32,v63
	_mm_store_ps(ctx.v62.f32, _mm_mul_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v63.f32)));
	// stvx128 v62,r11,r16
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r16.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bne cr6,0x83052648
	if (!ctx.cr6.eq) goto loc_83052648;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// lvx128 v63,r0,r5
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r10,17152(r6)
	PPC_STORE_U32(ctx.r6.u32 + 17152, ctx.r10.u32);
loc_83052648:
	// lvx128 v61,r11,r20
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r20.u32) & ~0xF), VectorMaskL));
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// vlogefp128 v60,v61
	ctx.fpscr.enableFlushMode();
	ctx.v60.f32[0] = log2f(ctx.v61.f32[0]);
	ctx.v60.f32[1] = log2f(ctx.v61.f32[1]);
	ctx.v60.f32[2] = log2f(ctx.v61.f32[2]);
	ctx.v60.f32[3] = log2f(ctx.v61.f32[3]);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// vmulfp128 v59,v60,v63
	_mm_store_ps(ctx.v59.f32, _mm_mul_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v63.f32)));
	// stvx128 v59,r11,r20
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r20.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v58,r11,r21
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r21.u32) & ~0xF), VectorMaskL));
	// vlogefp128 v57,v58
	ctx.v57.f32[0] = log2f(ctx.v58.f32[0]);
	ctx.v57.f32[1] = log2f(ctx.v58.f32[1]);
	ctx.v57.f32[2] = log2f(ctx.v58.f32[2]);
	ctx.v57.f32[3] = log2f(ctx.v58.f32[3]);
	// vmulfp128 v56,v57,v63
	_mm_store_ps(ctx.v56.f32, _mm_mul_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v63.f32)));
	// stvx128 v56,r11,r21
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r21.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// blt cr6,0x83052580
	if (ctx.cr6.lt) goto loc_83052580;
	// stw r10,17152(r6)
	PPC_STORE_U32(ctx.r6.u32 + 17152, ctx.r10.u32);
	// stvx128 v63,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_83052680:
	// cmplw cr6,r8,r14
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r14.u32, ctx.xer);
	// bge cr6,0x830526e0
	if (!ctx.cr6.lt) goto loc_830526E0;
	// subf r4,r8,r14
	ctx.r4.s64 = ctx.r14.s64 - ctx.r8.s64;
	// rlwinm r9,r8,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_8305269C:
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x830526b0
	if (!ctx.cr6.eq) goto loc_830526B0;
	// lvx128 v63,r0,r5
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
loc_830526B0:
	// lvx128 v55,r0,r11
	simd::store_shuffled(ctx.v55, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v54,r11,r19
	simd::store_shuffled(ctx.v54, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r19.u32) & ~0xF), VectorMaskL));
	// vlogefp128 v53,v55
	ctx.fpscr.enableFlushMode();
	ctx.v53.f32[0] = log2f(ctx.v55.f32[0]);
	ctx.v53.f32[1] = log2f(ctx.v55.f32[1]);
	ctx.v53.f32[2] = log2f(ctx.v55.f32[2]);
	ctx.v53.f32[3] = log2f(ctx.v55.f32[3]);
	// vlogefp128 v52,v54
	ctx.v52.f32[0] = log2f(ctx.v54.f32[0]);
	ctx.v52.f32[1] = log2f(ctx.v54.f32[1]);
	ctx.v52.f32[2] = log2f(ctx.v54.f32[2]);
	ctx.v52.f32[3] = log2f(ctx.v54.f32[3]);
	// vmulfp128 v51,v53,v63
	_mm_store_ps(ctx.v51.f32, _mm_mul_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v50,v52,v63
	_mm_store_ps(ctx.v50.f32, _mm_mul_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v63.f32)));
	// stvx128 v51,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v50,r11,r19
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r19.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// bdnz 0x8305269c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8305269C;
	// stw r10,17152(r6)
	PPC_STORE_U32(ctx.r6.u32 + 17152, ctx.r10.u32);
	// stvx128 v63,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_830526E0:
	// lwz r3,1140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1140);
	// bl 0x83021b28
	ctx.lr = 0x830526E8;
	sub_83021B28(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r24,-64
	ctx.r24.s64 = -64;
	// li r23,-80
	ctx.r23.s64 = -80;
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r26,r11,-14848
	ctx.r26.s64 = ctx.r11.s64 + -14848;
	// addi r27,r10,15344
	ctx.r27.s64 = ctx.r10.s64 + 15344;
	// beq cr6,0x83052974
	if (ctx.cr6.eq) goto loc_83052974;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// rotlwi r15,r11,0
	ctx.r15.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// blt cr6,0x830528e4
	if (ctx.cr6.lt) goto loc_830528E4;
	// addi r10,r1,304
	ctx.r10.s64 = ctx.r1.s64 + 304;
	// addi r11,r3,128
	ctx.r11.s64 = ctx.r3.s64 + 128;
	// addi r28,r15,-3
	ctx.r28.s64 = ctx.r15.s64 + -3;
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r30,128
	ctx.r30.s64 = 128;
	// li r31,112
	ctx.r31.s64 = 112;
loc_8305274C:
	// lvx128 v49,r10,r8
	simd::store_shuffled(ctx.v49, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// stvx128 v49,r11,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v48,r10,r6
	simd::store_shuffled(ctx.v48, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// stvx128 v48,r11,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r8,15360(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 15360);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x83052780
	if (!ctx.cr6.eq) goto loc_83052780;
	// ori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 | 1;
	// lvx128 v63,r0,r26
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r26.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r8,15360(r9)
	PPC_STORE_U32(ctx.r9.u32 + 15360, ctx.r8.u32);
	// b 0x83052784
	goto loc_83052784;
loc_83052780:
	// lvx128 v63,r0,r27
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r27.u32) & ~0xF), VectorMaskL));
loc_83052784:
	// lvx128 v47,r11,r23
	simd::store_shuffled(ctx.v47, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r23.u32) & ~0xF), VectorMaskL));
	// lvx128 v46,r11,r24
	simd::store_shuffled(ctx.v46, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r24.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v45,v47,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v45.f32, _mm_mul_ps(_mm_load_ps(ctx.v47.f32), _mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v44,v46,v63
	_mm_store_ps(ctx.v44.f32, _mm_mul_ps(_mm_load_ps(ctx.v46.f32), _mm_load_ps(ctx.v63.f32)));
	// vexptefp128 v43,v45
	ctx.v43.f32[0] = exp2f(ctx.v45.f32[0]);
	ctx.v43.f32[1] = exp2f(ctx.v45.f32[1]);
	ctx.v43.f32[2] = exp2f(ctx.v45.f32[2]);
	ctx.v43.f32[3] = exp2f(ctx.v45.f32[3]);
	// vexptefp128 v42,v44
	ctx.v42.f32[0] = exp2f(ctx.v44.f32[0]);
	ctx.v42.f32[1] = exp2f(ctx.v44.f32[1]);
	ctx.v42.f32[2] = exp2f(ctx.v44.f32[2]);
	ctx.v42.f32[3] = exp2f(ctx.v44.f32[3]);
	// stvx128 v43,r11,r23
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r23.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v43.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v42,r11,r24
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v42.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,24(r3)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lvx128 v41,r10,r22
	simd::store_shuffled(ctx.v41, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r22.u32) & ~0xF), VectorMaskL));
	// stvx128 v41,r11,r22
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r22.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v41.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v40,r0,r10
	simd::store_shuffled(ctx.v40, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v40,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v40.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r8,15360(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 15360);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x830527dc
	if (!ctx.cr6.eq) goto loc_830527DC;
	// ori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 | 1;
	// lvx128 v63,r0,r26
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r26.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r8,15360(r9)
	PPC_STORE_U32(ctx.r9.u32 + 15360, ctx.r8.u32);
	// b 0x830527e0
	goto loc_830527E0;
loc_830527DC:
	// lvx128 v63,r0,r27
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r27.u32) & ~0xF), VectorMaskL));
loc_830527E0:
	// lvx128 v39,r11,r22
	simd::store_shuffled(ctx.v39, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r22.u32) & ~0xF), VectorMaskL));
	// lvx128 v38,r0,r11
	simd::store_shuffled(ctx.v38, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v37,v39,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v37.f32, _mm_mul_ps(_mm_load_ps(ctx.v39.f32), _mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v36,v38,v63
	_mm_store_ps(ctx.v36.f32, _mm_mul_ps(_mm_load_ps(ctx.v38.f32), _mm_load_ps(ctx.v63.f32)));
	// vexptefp128 v35,v37
	ctx.v35.f32[0] = exp2f(ctx.v37.f32[0]);
	ctx.v35.f32[1] = exp2f(ctx.v37.f32[1]);
	ctx.v35.f32[2] = exp2f(ctx.v37.f32[2]);
	ctx.v35.f32[3] = exp2f(ctx.v37.f32[3]);
	// vexptefp128 v34,v36
	ctx.v34.f32[0] = exp2f(ctx.v36.f32[0]);
	ctx.v34.f32[1] = exp2f(ctx.v36.f32[1]);
	ctx.v34.f32[2] = exp2f(ctx.v36.f32[2]);
	ctx.v34.f32[3] = exp2f(ctx.v36.f32[3]);
	// stvx128 v35,r11,r22
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r22.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v35.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v34,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v34.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,24(r3)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lvx128 v33,r10,r19
	simd::store_shuffled(ctx.v33, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r19.u32) & ~0xF), VectorMaskL));
	// stvx128 v33,r11,r20
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r20.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v33.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v32,r10,r16
	simd::store_shuffled(ctx.v32, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r16.u32) & ~0xF), VectorMaskL));
	// stvx128 v32,r11,r21
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r21.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v32.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r8,15360(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 15360);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x83052838
	if (!ctx.cr6.eq) goto loc_83052838;
	// ori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 | 1;
	// lvx128 v63,r0,r26
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r26.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r8,15360(r9)
	PPC_STORE_U32(ctx.r9.u32 + 15360, ctx.r8.u32);
	// b 0x8305283c
	goto loc_8305283C;
loc_83052838:
	// lvx128 v63,r0,r27
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r27.u32) & ~0xF), VectorMaskL));
loc_8305283C:
	// lvx128 v62,r11,r20
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r20.u32) & ~0xF), VectorMaskL));
	// lvx128 v61,r11,r21
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r21.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v60,v62,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v60.f32, _mm_mul_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v59,v61,v63
	_mm_store_ps(ctx.v59.f32, _mm_mul_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v63.f32)));
	// vexptefp128 v58,v60
	ctx.v58.f32[0] = exp2f(ctx.v60.f32[0]);
	ctx.v58.f32[1] = exp2f(ctx.v60.f32[1]);
	ctx.v58.f32[2] = exp2f(ctx.v60.f32[2]);
	ctx.v58.f32[3] = exp2f(ctx.v60.f32[3]);
	// vexptefp128 v57,v59
	ctx.v57.f32[0] = exp2f(ctx.v59.f32[0]);
	ctx.v57.f32[1] = exp2f(ctx.v59.f32[1]);
	ctx.v57.f32[2] = exp2f(ctx.v59.f32[2]);
	ctx.v57.f32[3] = exp2f(ctx.v59.f32[3]);
	// stvx128 v58,r11,r20
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r20.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v57,r11,r21
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r21.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,24(r3)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lvx128 v56,r10,r20
	simd::store_shuffled(ctx.v56, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r20.u32) & ~0xF), VectorMaskL));
	// stvx128 v56,r11,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v55,r10,r21
	simd::store_shuffled(ctx.v55, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r21.u32) & ~0xF), VectorMaskL));
	// stvx128 v55,r11,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r8,15360(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 15360);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x83052894
	if (!ctx.cr6.eq) goto loc_83052894;
	// ori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 | 1;
	// lvx128 v63,r0,r26
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r26.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r8,15360(r9)
	PPC_STORE_U32(ctx.r9.u32 + 15360, ctx.r8.u32);
	// b 0x83052898
	goto loc_83052898;
loc_83052894:
	// lvx128 v63,r0,r27
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r27.u32) & ~0xF), VectorMaskL));
loc_83052898:
	// lvx128 v54,r11,r31
	simd::store_shuffled(ctx.v54, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r31.u32) & ~0xF), VectorMaskL));
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// lvx128 v53,r11,r30
	simd::store_shuffled(ctx.v53, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r30.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v52,v54,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v52.f32, _mm_mul_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v51,v53,v63
	_mm_store_ps(ctx.v51.f32, _mm_mul_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v63.f32)));
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// cmplw cr6,r4,r28
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r28.u32, ctx.xer);
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// vexptefp128 v50,v52
	ctx.v50.f32[0] = exp2f(ctx.v52.f32[0]);
	ctx.v50.f32[1] = exp2f(ctx.v52.f32[1]);
	ctx.v50.f32[2] = exp2f(ctx.v52.f32[2]);
	ctx.v50.f32[3] = exp2f(ctx.v52.f32[3]);
	// vexptefp128 v49,v51
	ctx.v49.f32[0] = exp2f(ctx.v51.f32[0]);
	ctx.v49.f32[1] = exp2f(ctx.v51.f32[1]);
	ctx.v49.f32[2] = exp2f(ctx.v51.f32[2]);
	ctx.v49.f32[3] = exp2f(ctx.v51.f32[3]);
	// stvx128 v50,r11,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v49,r11,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// stfs f0,24(r3)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// blt cr6,0x8305274c
	if (ctx.cr6.lt) goto loc_8305274C;
loc_830528E4:
	// cmplw cr6,r4,r15
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r15.u32, ctx.xer);
	// bge cr6,0x83052974
	if (!ctx.cr6.lt) goto loc_83052974;
	// rlwinm r11,r29,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 6) & 0xFFFFFFC0;
	// subf r7,r4,r15
	ctx.r7.s64 = ctx.r15.s64 - ctx.r4.s64;
	// rlwinm r8,r4,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r1,256
	ctx.r10.s64 = ctx.r1.s64 + 256;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_8305290C:
	// lvx128 v48,r0,r10
	simd::store_shuffled(ctx.v48, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v48,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v47,r10,r19
	simd::store_shuffled(ctx.v47, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r19.u32) & ~0xF), VectorMaskL));
	// stvx128 v47,r11,r19
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r19.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r8,15360(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 15360);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x83052940
	if (!ctx.cr6.eq) goto loc_83052940;
	// ori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 | 1;
	// lvx128 v63,r0,r26
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r26.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r8,15360(r9)
	PPC_STORE_U32(ctx.r9.u32 + 15360, ctx.r8.u32);
	// b 0x83052944
	goto loc_83052944;
loc_83052940:
	// lvx128 v63,r0,r27
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r27.u32) & ~0xF), VectorMaskL));
loc_83052944:
	// lvx128 v46,r0,r11
	simd::store_shuffled(ctx.v46, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// lvx128 v45,r11,r19
	simd::store_shuffled(ctx.v45, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r19.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v44,v46,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v44.f32, _mm_mul_ps(_mm_load_ps(ctx.v46.f32), _mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v43,v45,v63
	_mm_store_ps(ctx.v43.f32, _mm_mul_ps(_mm_load_ps(ctx.v45.f32), _mm_load_ps(ctx.v63.f32)));
	// vexptefp128 v42,v44
	ctx.v42.f32[0] = exp2f(ctx.v44.f32[0]);
	ctx.v42.f32[1] = exp2f(ctx.v44.f32[1]);
	ctx.v42.f32[2] = exp2f(ctx.v44.f32[2]);
	ctx.v42.f32[3] = exp2f(ctx.v44.f32[3]);
	// vexptefp128 v41,v43
	ctx.v41.f32[0] = exp2f(ctx.v43.f32[0]);
	ctx.v41.f32[1] = exp2f(ctx.v43.f32[1]);
	ctx.v41.f32[2] = exp2f(ctx.v43.f32[2]);
	ctx.v41.f32[3] = exp2f(ctx.v43.f32[3]);
	// stvx128 v42,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v42.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v41,r11,r19
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r19.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v41.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// stfs f0,24(r3)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// bdnz 0x8305290c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8305290C;
loc_83052974:
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lbz r10,1199(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 1199);
	// fadds f12,f0,f26
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f26.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f11,f13,f26
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f26.f64));
	// stfs f11,128(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83052ba4
	if (ctx.cr6.eq) goto loc_83052BA4;
	// lwz r10,1140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1140);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r29,1172(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1172);
	// lwz r24,1180(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r8,112(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// lfs f0,80(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// beq cr6,0x83052b18
	if (ctx.cr6.eq) goto loc_83052B18;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lfs f0,0(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// lvlx128 v39,r0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v39.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r24,16
	ctx.r11.s64 = ctx.r24.s64 + 16;
	// lvlx128 v38,r0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v38.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// subf r3,r24,r29
	ctx.r3.s64 = ctx.r29.s64 - ctx.r24.s64;
	// lvlx128 v40,r0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v40.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v60,v39,0
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v39.u32), 0xFF));
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// vspltw128 v59,v38,0
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v38.u32), 0xFF));
	// vspltw128 v58,v40,0
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v40.u32), 0xFF));
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
loc_83052A00:
	// lvx128 v61,r4,r6
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// stvx128 v61,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vor128 v36,v61,v61
	_mm_store_si128((__m128i*)ctx.v36.u8, _mm_load_si128((__m128i*)ctx.v61.u8));
	// lvx128 v62,r0,r4
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// stvx128 v62,r11,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vaddfp128 v34,v36,v58
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v34.f32, _mm_add_ps(_mm_load_ps(ctx.v36.f32), _mm_load_ps(ctx.v58.f32)));
	// stvx128 v34,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v34.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v37,r11,r5
	simd::store_shuffled(ctx.v37, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// vaddfp128 v35,v37,v58
	_mm_store_ps(ctx.v35.f32, _mm_add_ps(_mm_load_ps(ctx.v37.f32), _mm_load_ps(ctx.v58.f32)));
	// stvx128 v35,r11,r22
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r22.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v35.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r8,15360(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 15360);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x83052a50
	if (!ctx.cr6.eq) goto loc_83052A50;
	// ori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 | 1;
	// lvx128 v63,r0,r26
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r26.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r8,15360(r9)
	PPC_STORE_U32(ctx.r9.u32 + 15360, ctx.r8.u32);
	// b 0x83052a54
	goto loc_83052A54;
loc_83052A50:
	// lvx128 v63,r0,r27
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r27.u32) & ~0xF), VectorMaskL));
loc_83052A54:
	// lvx128 v33,r0,r11
	simd::store_shuffled(ctx.v33, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vor128 v49,v62,v62
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_load_si128((__m128i*)ctx.v62.u8));
	// lvx128 v32,r11,r22
	simd::store_shuffled(ctx.v32, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r22.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v57,v33,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v57.f32, _mm_mul_ps(_mm_load_ps(ctx.v33.f32), _mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v56,v32,v63
	_mm_store_ps(ctx.v56.f32, _mm_mul_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v63.f32)));
	// vor128 v47,v61,v61
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_load_si128((__m128i*)ctx.v61.u8));
	// add r8,r3,r11
	ctx.r8.u64 = ctx.r3.u64 + ctx.r11.u64;
	// vaddfp128 v48,v49,v59
	_mm_store_ps(ctx.v48.f32, _mm_add_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v59.f32)));
	// vaddfp128 v46,v47,v59
	_mm_store_ps(ctx.v46.f32, _mm_add_ps(_mm_load_ps(ctx.v47.f32), _mm_load_ps(ctx.v59.f32)));
	// vexptefp128 v55,v57
	ctx.v55.f32[0] = exp2f(ctx.v57.f32[0]);
	ctx.v55.f32[1] = exp2f(ctx.v57.f32[1]);
	ctx.v55.f32[2] = exp2f(ctx.v57.f32[2]);
	ctx.v55.f32[3] = exp2f(ctx.v57.f32[3]);
	// vexptefp128 v54,v56
	ctx.v54.f32[0] = exp2f(ctx.v56.f32[0]);
	ctx.v54.f32[1] = exp2f(ctx.v56.f32[1]);
	ctx.v54.f32[2] = exp2f(ctx.v56.f32[2]);
	ctx.v54.f32[3] = exp2f(ctx.v56.f32[3]);
	// vor128 v53,v55,v55
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_load_si128((__m128i*)ctx.v55.u8));
	// stvx128 v55,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vor128 v52,v54,v54
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_load_si128((__m128i*)ctx.v54.u8));
	// stvx128 v54,r11,r22
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r22.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v51,v53,v60
	_mm_store_ps(ctx.v51.f32, _mm_mul_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v60.f32)));
	// vmulfp128 v50,v52,v60
	_mm_store_ps(ctx.v50.f32, _mm_mul_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v60.f32)));
	// stvx128 v51,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v50,r11,r22
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r22.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v61,r3,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v48,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v46,r3,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v46.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,20(r10)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// lwz r7,15360(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 15360);
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x83052ad8
	if (!ctx.cr6.eq) goto loc_83052AD8;
	// ori r7,r7,1
	ctx.r7.u64 = ctx.r7.u64 | 1;
	// lvx128 v63,r0,r26
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r26.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r7,15360(r9)
	PPC_STORE_U32(ctx.r9.u32 + 15360, ctx.r7.u32);
	// b 0x83052adc
	goto loc_83052ADC;
loc_83052AD8:
	// lvx128 v63,r0,r27
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r27.u32) & ~0xF), VectorMaskL));
loc_83052ADC:
	// lvx128 v45,r0,r10
	simd::store_shuffled(ctx.v45, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// lvx128 v44,r0,r8
	simd::store_shuffled(ctx.v44, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v43,v45,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v43.f32, _mm_mul_ps(_mm_load_ps(ctx.v45.f32), _mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v42,v44,v63
	_mm_store_ps(ctx.v42.f32, _mm_mul_ps(_mm_load_ps(ctx.v44.f32), _mm_load_ps(ctx.v63.f32)));
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// vexptefp128 v41,v43
	ctx.v41.f32[0] = exp2f(ctx.v43.f32[0]);
	ctx.v41.f32[1] = exp2f(ctx.v43.f32[1]);
	ctx.v41.f32[2] = exp2f(ctx.v43.f32[2]);
	ctx.v41.f32[3] = exp2f(ctx.v43.f32[3]);
	// vexptefp128 v40,v42
	ctx.v40.f32[0] = exp2f(ctx.v42.f32[0]);
	ctx.v40.f32[1] = exp2f(ctx.v42.f32[1]);
	ctx.v40.f32[2] = exp2f(ctx.v42.f32[2]);
	ctx.v40.f32[3] = exp2f(ctx.v42.f32[3]);
	// stvx128 v41,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v41.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// stvx128 v40,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v40.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bdnz 0x83052a00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83052A00;
loc_83052B18:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83052ec8
	if (ctx.cr6.eq) goto loc_83052EC8;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r28,0
	ctx.r28.s64 = 0;
	// fadds f31,f19,f16
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f19.f64 + ctx.f16.f64));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r31,r11,6,0,25
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r30,r31,r29
	ctx.r30.u64 = ctx.r31.u64 + ctx.r29.u64;
	// stdx r28,r31,r29
	PPC_STORE_U64(ctx.r31.u32 + ctx.r29.u32, ctx.r28.u64);
	// std r28,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r28.u64);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// std r28,16(r30)
	PPC_STORE_U64(ctx.r30.u32 + 16, ctx.r28.u64);
	// std r28,24(r30)
	PPC_STORE_U64(ctx.r30.u32 + 24, ctx.r28.u64);
	// bl 0x8304ff60
	ctx.lr = 0x83052B54;
	sub_8304FF60(ctx, base);
	// add r29,r31,r24
	ctx.r29.u64 = ctx.r31.u64 + ctx.r24.u64;
	// stfs f1,20(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// stdx r28,r31,r24
	PPC_STORE_U64(ctx.r31.u32 + ctx.r24.u32, ctx.r28.u64);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// std r28,8(r29)
	PPC_STORE_U64(ctx.r29.u32 + 8, ctx.r28.u64);
	// std r28,16(r29)
	PPC_STORE_U64(ctx.r29.u32 + 16, ctx.r28.u64);
	// std r28,24(r29)
	PPC_STORE_U64(ctx.r29.u32 + 24, ctx.r28.u64);
	// bl 0x8304ff60
	ctx.lr = 0x83052B74;
	sub_8304FF60(ctx, base);
	// stfs f1,20(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 20, temp.u32);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r11,r29,16
	ctx.r11.s64 = ctx.r29.s64 + 16;
	// lvlx128 v38,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v38.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvx128 v35,r0,r11
	simd::store_shuffled(ctx.v35, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vspltw128 v37,v38,0
	_mm_store_si128((__m128i*)ctx.v37.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v38.u32), 0xFF));
	// vmulfp128 v34,v35,v37
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v34.f32, _mm_mul_ps(_mm_load_ps(ctx.v35.f32), _mm_load_ps(ctx.v37.f32)));
	// lvx128 v39,r31,r24
	simd::store_shuffled(ctx.v39, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r24.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v36,v39,v37
	_mm_store_ps(ctx.v36.f32, _mm_mul_ps(_mm_load_ps(ctx.v39.f32), _mm_load_ps(ctx.v37.f32)));
	// stvx128 v34,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v34.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v36,r31,r24
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v36.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x83052ec8
	goto loc_83052EC8;
loc_83052BA4:
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r28,0
	ctx.r28.s64 = 0;
	// lfs f0,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r29,1180(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1180);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x83052ddc
	if (ctx.cr6.lt) goto loc_83052DDC;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r7,-144
	ctx.r7.s64 = -144;
	// li r5,-128
	ctx.r5.s64 = -128;
	// addi r31,r30,-3
	ctx.r31.s64 = ctx.r30.s64 + -3;
	// addi r10,r1,304
	ctx.r10.s64 = ctx.r1.s64 + 304;
	// lvlx128 v33,r0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v33.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r29,144
	ctx.r11.s64 = ctx.r29.s64 + 144;
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
	// vspltw128 v62,v33,0
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v33.u32), 0xFF));
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
loc_83052BEC:
	// lvx128 v32,r10,r8
	simd::store_shuffled(ctx.v32, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// stvx128 v32,r11,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v32.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v63,r10,r6
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r11,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v61,r11,r4
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// vaddfp128 v60,v61,v62
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v60.f32, _mm_add_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v62.f32)));
	// stvx128 v60,r11,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v59,r11,r5
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// vaddfp128 v58,v59,v62
	_mm_store_ps(ctx.v58.f32, _mm_add_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v62.f32)));
	// stvx128 v58,r11,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,-124(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -124, temp.u32);
	// lwz r8,15360(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 15360);
	// clrlwi r6,r8,31
	ctx.r6.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x83052c3c
	if (!ctx.cr6.eq) goto loc_83052C3C;
	// ori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 | 1;
	// lvx128 v63,r0,r26
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r26.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r8,15360(r9)
	PPC_STORE_U32(ctx.r9.u32 + 15360, ctx.r8.u32);
	// b 0x83052c40
	goto loc_83052C40;
loc_83052C3C:
	// lvx128 v63,r0,r27
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r27.u32) & ~0xF), VectorMaskL));
loc_83052C40:
	// lvx128 v57,r11,r7
	simd::store_shuffled(ctx.v57, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v56,r11,r5
	simd::store_shuffled(ctx.v56, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v55,v57,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v55.f32, _mm_mul_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v54,v56,v63
	_mm_store_ps(ctx.v54.f32, _mm_mul_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v63.f32)));
	// lvx128 v53,r10,r22
	simd::store_shuffled(ctx.v53, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r22.u32) & ~0xF), VectorMaskL));
	// lvx128 v52,r0,r10
	simd::store_shuffled(ctx.v52, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vexptefp128 v51,v55
	ctx.v51.f32[0] = exp2f(ctx.v55.f32[0]);
	ctx.v51.f32[1] = exp2f(ctx.v55.f32[1]);
	ctx.v51.f32[2] = exp2f(ctx.v55.f32[2]);
	ctx.v51.f32[3] = exp2f(ctx.v55.f32[3]);
	// vexptefp128 v50,v54
	ctx.v50.f32[0] = exp2f(ctx.v54.f32[0]);
	ctx.v50.f32[1] = exp2f(ctx.v54.f32[1]);
	ctx.v50.f32[2] = exp2f(ctx.v54.f32[2]);
	ctx.v50.f32[3] = exp2f(ctx.v54.f32[3]);
	// stvx128 v51,r11,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v50,r11,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v53,r11,r23
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r23.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v52,r11,r24
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v49,r11,r23
	simd::store_shuffled(ctx.v49, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r23.u32) & ~0xF), VectorMaskL));
	// vaddfp128 v48,v49,v62
	_mm_store_ps(ctx.v48.f32, _mm_add_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v62.f32)));
	// stvx128 v48,r11,r23
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r23.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v47,r11,r24
	simd::store_shuffled(ctx.v47, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r24.u32) & ~0xF), VectorMaskL));
	// vaddfp128 v46,v47,v62
	_mm_store_ps(ctx.v46.f32, _mm_add_ps(_mm_load_ps(ctx.v47.f32), _mm_load_ps(ctx.v62.f32)));
	// stvx128 v46,r11,r24
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v46.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,-60(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -60, temp.u32);
	// lwz r8,15360(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 15360);
	// clrlwi r6,r8,31
	ctx.r6.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x83052cb0
	if (!ctx.cr6.eq) goto loc_83052CB0;
	// ori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 | 1;
	// lvx128 v63,r0,r26
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r26.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r8,15360(r9)
	PPC_STORE_U32(ctx.r9.u32 + 15360, ctx.r8.u32);
	// b 0x83052cb4
	goto loc_83052CB4;
loc_83052CB0:
	// lvx128 v63,r0,r27
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r27.u32) & ~0xF), VectorMaskL));
loc_83052CB4:
	// lvx128 v45,r11,r23
	simd::store_shuffled(ctx.v45, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r23.u32) & ~0xF), VectorMaskL));
	// lvx128 v44,r11,r24
	simd::store_shuffled(ctx.v44, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r24.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v43,v45,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v43.f32, _mm_mul_ps(_mm_load_ps(ctx.v45.f32), _mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v42,v44,v63
	_mm_store_ps(ctx.v42.f32, _mm_mul_ps(_mm_load_ps(ctx.v44.f32), _mm_load_ps(ctx.v63.f32)));
	// lvx128 v41,r10,r19
	simd::store_shuffled(ctx.v41, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r19.u32) & ~0xF), VectorMaskL));
	// lvx128 v40,r10,r16
	simd::store_shuffled(ctx.v40, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r16.u32) & ~0xF), VectorMaskL));
	// vexptefp128 v39,v43
	ctx.v39.f32[0] = exp2f(ctx.v43.f32[0]);
	ctx.v39.f32[1] = exp2f(ctx.v43.f32[1]);
	ctx.v39.f32[2] = exp2f(ctx.v43.f32[2]);
	ctx.v39.f32[3] = exp2f(ctx.v43.f32[3]);
	// vexptefp128 v38,v42
	ctx.v38.f32[0] = exp2f(ctx.v42.f32[0]);
	ctx.v38.f32[1] = exp2f(ctx.v42.f32[1]);
	ctx.v38.f32[2] = exp2f(ctx.v42.f32[2]);
	ctx.v38.f32[3] = exp2f(ctx.v42.f32[3]);
	// stvx128 v39,r11,r23
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r23.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v39.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v38,r11,r24
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v38.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v41,r11,r22
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r22.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v41.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v40,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v40.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v37,r11,r22
	simd::store_shuffled(ctx.v37, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r22.u32) & ~0xF), VectorMaskL));
	// vaddfp128 v36,v37,v62
	_mm_store_ps(ctx.v36.f32, _mm_add_ps(_mm_load_ps(ctx.v37.f32), _mm_load_ps(ctx.v62.f32)));
	// stvx128 v36,r11,r22
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r22.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v36.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v35,r0,r11
	simd::store_shuffled(ctx.v35, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vaddfp128 v34,v35,v62
	_mm_store_ps(ctx.v34.f32, _mm_add_ps(_mm_load_ps(ctx.v35.f32), _mm_load_ps(ctx.v62.f32)));
	// stvx128 v34,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v34.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r8,15360(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 15360);
	// clrlwi r6,r8,31
	ctx.r6.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x83052d24
	if (!ctx.cr6.eq) goto loc_83052D24;
	// ori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 | 1;
	// lvx128 v63,r0,r26
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r26.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r8,15360(r9)
	PPC_STORE_U32(ctx.r9.u32 + 15360, ctx.r8.u32);
	// b 0x83052d28
	goto loc_83052D28;
loc_83052D24:
	// lvx128 v63,r0,r27
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r27.u32) & ~0xF), VectorMaskL));
loc_83052D28:
	// lvx128 v33,r11,r22
	simd::store_shuffled(ctx.v33, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r22.u32) & ~0xF), VectorMaskL));
	// lvx128 v32,r0,r11
	simd::store_shuffled(ctx.v32, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v61,v33,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v61.f32, _mm_mul_ps(_mm_load_ps(ctx.v33.f32), _mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v60,v32,v63
	_mm_store_ps(ctx.v60.f32, _mm_mul_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v63.f32)));
	// lvx128 v59,r10,r20
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r20.u32) & ~0xF), VectorMaskL));
	// lvx128 v58,r10,r21
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r21.u32) & ~0xF), VectorMaskL));
	// vexptefp128 v57,v61
	ctx.v57.f32[0] = exp2f(ctx.v61.f32[0]);
	ctx.v57.f32[1] = exp2f(ctx.v61.f32[1]);
	ctx.v57.f32[2] = exp2f(ctx.v61.f32[2]);
	ctx.v57.f32[3] = exp2f(ctx.v61.f32[3]);
	// vexptefp128 v56,v60
	ctx.v56.f32[0] = exp2f(ctx.v60.f32[0]);
	ctx.v56.f32[1] = exp2f(ctx.v60.f32[1]);
	ctx.v56.f32[2] = exp2f(ctx.v60.f32[2]);
	ctx.v56.f32[3] = exp2f(ctx.v60.f32[3]);
	// stvx128 v57,r11,r22
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r22.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v56,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v59,r11,r20
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r20.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v58,r11,r21
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r21.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v55,r11,r20
	simd::store_shuffled(ctx.v55, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r20.u32) & ~0xF), VectorMaskL));
	// vaddfp128 v54,v55,v62
	_mm_store_ps(ctx.v54.f32, _mm_add_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v62.f32)));
	// stvx128 v54,r11,r20
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r20.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v53,r11,r21
	simd::store_shuffled(ctx.v53, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r21.u32) & ~0xF), VectorMaskL));
	// vaddfp128 v52,v53,v62
	_mm_store_ps(ctx.v52.f32, _mm_add_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v62.f32)));
	// stvx128 v52,r11,r21
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r21.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,68(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// lwz r8,15360(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 15360);
	// clrlwi r6,r8,31
	ctx.r6.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x83052d98
	if (!ctx.cr6.eq) goto loc_83052D98;
	// ori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 | 1;
	// lvx128 v63,r0,r26
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r26.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r8,15360(r9)
	PPC_STORE_U32(ctx.r9.u32 + 15360, ctx.r8.u32);
	// b 0x83052d9c
	goto loc_83052D9C;
loc_83052D98:
	// lvx128 v63,r0,r27
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r27.u32) & ~0xF), VectorMaskL));
loc_83052D9C:
	// lvx128 v51,r11,r20
	simd::store_shuffled(ctx.v51, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r20.u32) & ~0xF), VectorMaskL));
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// lvx128 v50,r11,r21
	simd::store_shuffled(ctx.v50, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r21.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v49,v51,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v49.f32, _mm_mul_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v48,v50,v63
	_mm_store_ps(ctx.v48.f32, _mm_mul_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v63.f32)));
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// vexptefp128 v47,v49
	ctx.v47.f32[0] = exp2f(ctx.v49.f32[0]);
	ctx.v47.f32[1] = exp2f(ctx.v49.f32[1]);
	ctx.v47.f32[2] = exp2f(ctx.v49.f32[2]);
	ctx.v47.f32[3] = exp2f(ctx.v49.f32[3]);
	// vexptefp128 v46,v48
	ctx.v46.f32[0] = exp2f(ctx.v48.f32[0]);
	ctx.v46.f32[1] = exp2f(ctx.v48.f32[1]);
	ctx.v46.f32[2] = exp2f(ctx.v48.f32[2]);
	ctx.v46.f32[3] = exp2f(ctx.v48.f32[3]);
	// stvx128 v47,r11,r20
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r20.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v46,r11,r21
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r21.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v46.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// blt cr6,0x83052bec
	if (ctx.cr6.lt) goto loc_83052BEC;
loc_83052DDC:
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x83052e90
	if (!ctx.cr6.lt) goto loc_83052E90;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// rlwinm r10,r3,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r8,r3,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0xFFFFFFC0;
	// subf r6,r3,r30
	ctx.r6.s64 = ctx.r30.s64 - ctx.r3.s64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lvlx128 v45,r0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r11,r8,r29
	ctx.r11.u64 = ctx.r8.u64 + ctx.r29.u64;
	// vspltw128 v62,v45,0
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v45.u32), 0xFF));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_83052E10:
	// lvx128 v44,r0,r10
	simd::store_shuffled(ctx.v44, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v43,r10,r19
	simd::store_shuffled(ctx.v43, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r19.u32) & ~0xF), VectorMaskL));
	// vor128 v41,v44,v44
	_mm_store_si128((__m128i*)ctx.v41.u8, _mm_load_si128((__m128i*)ctx.v44.u8));
	// vor128 v42,v43,v43
	_mm_store_si128((__m128i*)ctx.v42.u8, _mm_load_si128((__m128i*)ctx.v43.u8));
	// stvx128 v44,r11,r22
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r22.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v44.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v43,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v43.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vaddfp128 v39,v41,v62
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v39.f32, _mm_add_ps(_mm_load_ps(ctx.v41.f32), _mm_load_ps(ctx.v62.f32)));
	// vaddfp128 v40,v42,v62
	_mm_store_ps(ctx.v40.f32, _mm_add_ps(_mm_load_ps(ctx.v42.f32), _mm_load_ps(ctx.v62.f32)));
	// stvx128 v39,r11,r22
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r22.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v39.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v40,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v40.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r8,15360(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 15360);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x83052e60
	if (!ctx.cr6.eq) goto loc_83052E60;
	// ori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 | 1;
	// lvx128 v63,r0,r26
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r26.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r8,15360(r9)
	PPC_STORE_U32(ctx.r9.u32 + 15360, ctx.r8.u32);
	// b 0x83052e64
	goto loc_83052E64;
loc_83052E60:
	// lvx128 v63,r0,r27
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r27.u32) & ~0xF), VectorMaskL));
loc_83052E64:
	// lvx128 v38,r0,r11
	simd::store_shuffled(ctx.v38, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// lvx128 v37,r11,r22
	simd::store_shuffled(ctx.v37, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r22.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v36,v38,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v36.f32, _mm_mul_ps(_mm_load_ps(ctx.v38.f32), _mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v35,v37,v63
	_mm_store_ps(ctx.v35.f32, _mm_mul_ps(_mm_load_ps(ctx.v37.f32), _mm_load_ps(ctx.v63.f32)));
	// vexptefp128 v34,v36
	ctx.v34.f32[0] = exp2f(ctx.v36.f32[0]);
	ctx.v34.f32[1] = exp2f(ctx.v36.f32[1]);
	ctx.v34.f32[2] = exp2f(ctx.v36.f32[2]);
	ctx.v34.f32[3] = exp2f(ctx.v36.f32[3]);
	// vexptefp128 v33,v35
	ctx.v33.f32[0] = exp2f(ctx.v35.f32[0]);
	ctx.v33.f32[1] = exp2f(ctx.v35.f32[1]);
	ctx.v33.f32[2] = exp2f(ctx.v35.f32[2]);
	ctx.v33.f32[3] = exp2f(ctx.v35.f32[3]);
	// stvx128 v34,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v34.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v33,r11,r22
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r22.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v33.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// bdnz 0x83052e10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83052E10;
loc_83052E90:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83052ec8
	if (ctx.cr6.eq) goto loc_83052EC8;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// fadds f1,f19,f16
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f19.f64 + ctx.f16.f64));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stdx r28,r11,r29
	PPC_STORE_U64(ctx.r11.u32 + ctx.r29.u32, ctx.r28.u64);
	// std r28,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r28.u64);
	// std r28,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r28.u64);
	// std r28,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r28.u64);
	// bl 0x8304ff60
	ctx.lr = 0x83052EC4;
	sub_8304FF60(ctx, base);
	// stfs f1,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
loc_83052EC8:
	// lwz r11,1188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1188);
	// lwz r20,1180(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1180);
	// lwz r18,92(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r19,180(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r15,1172(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1172);
	// lwz r25,1140(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1140);
	// stfs f17,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r30,1148(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1148);
loc_83052EE8:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x83052f24
	if (ctx.cr6.eq) goto loc_83052F24;
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lfs f4,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f4.f64 = double(temp.f32);
	// fcmpu cr6,f4,f17
	ctx.cr6.compare(ctx.f4.f64, ctx.f17.f64);
	// ble cr6,0x83052f24
	if (!ctx.cr6.gt) goto loc_83052F24;
	// lfs f5,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f5.f64 = double(temp.f32);
	// fmr f3,f15
	ctx.f3.f64 = ctx.f15.f64;
	// fmr f2,f17
	ctx.f2.f64 = ctx.f17.f64;
	// fmr f1,f17
	ctx.f1.f64 = ctx.f17.f64;
	// bl 0x8304fd08
	ctx.lr = 0x83052F14;
	sub_8304FD08(ctx, base);
	// lfs f0,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// fsel f12,f13,f0,f1
	ctx.f12.f64 = ctx.f13.f64 >= 0.0 ? ctx.f0.f64 : ctx.f1.f64;
	// stfs f12,12(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
loc_83052F24:
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83052f50
	if (ctx.cr6.eq) goto loc_83052F50;
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// lwz r3,80(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 80);
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// lbz r6,1199(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 1199);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// lwz r5,1164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1164);
	// bl 0x83050a68
	ctx.lr = 0x83052F50;
	sub_83050A68(ctx, base);
loc_83052F50:
	// addi r1,r1,1120
	ctx.r1.s64 = ctx.r1.s64 + 1120;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82fa8d40
	ctx.lr = 0x83052F5C;
	__restfpr_15(ctx, base);
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83052F60"))) PPC_WEAK_FUNC(sub_83052F60);
PPC_FUNC_IMPL(__imp__sub_83052F60) {
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
	// bl 0x83039ee8
	ctx.lr = 0x83052F78;
	sub_83039EE8(ctx, base);
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-12124
	ctx.r9.s64 = ctx.r10.s64 + -12124;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83052FB0"))) PPC_WEAK_FUNC(sub_83052FB0);
PPC_FUNC_IMPL(__imp__sub_83052FB0) {
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
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-11272(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11272);
	// bl 0x82fd6b98
	ctx.lr = 0x83052FD8;
	sub_82FD6B98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83053014
	if (ctx.cr6.eq) goto loc_83053014;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83039ee8
	ctx.lr = 0x83052FEC;
	sub_83039EE8(ctx, base);
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-12124
	ctx.r9.s64 = ctx.r10.s64 + -12124;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// b 0x83053018
	goto loc_83053018;
loc_83053014:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83053018:
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

__attribute__((alias("__imp__sub_83053030"))) PPC_WEAK_FUNC(sub_83053030);
PPC_FUNC_IMPL(__imp__sub_83053030) {
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
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,15168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15168);
	// addi r31,r11,1652
	ctx.r31.s64 = ctx.r11.s64 + 1652;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831791a4
	ctx.lr = 0x8305305C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// bl 0x831791b4
	ctx.lr = 0x83053070;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_8305308C"))) PPC_WEAK_FUNC(sub_8305308C);
PPC_FUNC_IMPL(__imp__sub_8305308C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83053090"))) PPC_WEAK_FUNC(sub_83053090);
PPC_FUNC_IMPL(__imp__sub_83053090) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r3,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830530A4"))) PPC_WEAK_FUNC(sub_830530A4);
PPC_FUNC_IMPL(__imp__sub_830530A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830530A8"))) PPC_WEAK_FUNC(sub_830530A8);
PPC_FUNC_IMPL(__imp__sub_830530A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,15168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15168);
	// addi r3,r11,1652
	ctx.r3.s64 = ctx.r11.s64 + 1652;
	// b 0x83047950
	sub_83047950(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830530BC"))) PPC_WEAK_FUNC(sub_830530BC);
PPC_FUNC_IMPL(__imp__sub_830530BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830530C0"))) PPC_WEAK_FUNC(sub_830530C0);
PPC_FUNC_IMPL(__imp__sub_830530C0) {
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
	// lwz r31,16(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8305310c
	if (ctx.cr6.eq) goto loc_8305310C;
loc_830530E8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830530FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x830530e8
	if (!ctx.cr6.eq) goto loc_830530E8;
loc_8305310C:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8305312C"))) PPC_WEAK_FUNC(sub_8305312C);
PPC_FUNC_IMPL(__imp__sub_8305312C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83053130"))) PPC_WEAK_FUNC(sub_83053130);
PPC_FUNC_IMPL(__imp__sub_83053130) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-12124
	ctx.r10.s64 = ctx.r11.s64 + -12124;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x830530c0
	ctx.lr = 0x83053154;
	sub_830530C0(ctx, base);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83053180
	if (ctx.cr6.eq) goto loc_83053180;
	// stw r4,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r4.u32);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// lwz r3,-11272(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11272);
	// bl 0x82fd6cc8
	ctx.lr = 0x83053170;
	sub_82FD6CC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_83053180:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83039ed0
	ctx.lr = 0x83053188;
	sub_83039ED0(ctx, base);
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

__attribute__((alias("__imp__sub_8305319C"))) PPC_WEAK_FUNC(sub_8305319C);
PPC_FUNC_IMPL(__imp__sub_8305319C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830531A0"))) PPC_WEAK_FUNC(sub_830531A0);
PPC_FUNC_IMPL(__imp__sub_830531A0) {
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
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-11272(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11272);
	// bl 0x82fd6b98
	ctx.lr = 0x830531C8;
	sub_82FD6B98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8305322c
	if (ctx.cr6.eq) goto loc_8305322C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83039ee8
	ctx.lr = 0x830531DC;
	sub_83039EE8(ctx, base);
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-12124
	ctx.r9.s64 = ctx.r10.s64 + -12124;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lwz r11,15168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15168);
	// addi r3,r11,1652
	ctx.r3.s64 = ctx.r11.s64 + 1652;
	// bl 0x83047950
	ctx.lr = 0x83053210;
	sub_83047950(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83053214:
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
loc_8305322C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83053214
	goto loc_83053214;
}

__attribute__((alias("__imp__sub_83053234"))) PPC_WEAK_FUNC(sub_83053234);
PPC_FUNC_IMPL(__imp__sub_83053234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83053238"))) PPC_WEAK_FUNC(sub_83053238);
PPC_FUNC_IMPL(__imp__sub_83053238) {
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
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lwz r30,12(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,15168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15168);
	// addi r31,r11,1652
	ctx.r31.s64 = ctx.r11.s64 + 1652;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831791a4
	ctx.lr = 0x83053264;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83031450
	ctx.lr = 0x83053270;
	sub_83031450(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831791b4
	ctx.lr = 0x83053278;
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

__attribute__((alias("__imp__sub_83053290"))) PPC_WEAK_FUNC(sub_83053290);
PPC_FUNC_IMPL(__imp__sub_83053290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x83053298;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31958
	ctx.r30.s64 = -2094399488;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,15168(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15168);
	// addi r28,r11,1652
	ctx.r28.s64 = ctx.r11.s64 + 1652;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831791a4
	ctx.lr = 0x830532B4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r29,r11,-1
	ctx.r29.s64 = ctx.r11.s64 + -1;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x8305331c
	if (!ctx.cr6.eq) goto loc_8305331C;
	// lwz r11,15168(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15168);
	// lwz r27,12(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r30,r11,1652
	ctx.r30.s64 = ctx.r11.s64 + 1652;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791a4
	ctx.lr = 0x830532DC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x83031450
	ctx.lr = 0x830532E8;
	sub_83031450(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791b4
	ctx.lr = 0x830532F0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lwz r30,-11272(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11272);
	// bctrl 
	ctx.lr = 0x83053310;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fd6cc8
	ctx.lr = 0x8305331C;
	sub_82FD6CC8(ctx, base);
loc_8305331C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831791b4
	ctx.lr = 0x83053324;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83053330"))) PPC_WEAK_FUNC(sub_83053330);
PPC_FUNC_IMPL(__imp__sub_83053330) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x83053358
	if (!ctx.cr6.eq) goto loc_83053358;
	// li r3,14
	ctx.r3.s64 = 14;
	// b 0x8305338c
	goto loc_8305338C;
loc_83053358:
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lwz r11,15168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15168);
	// addi r3,r11,2456
	ctx.r3.s64 = ctx.r11.s64 + 2456;
	// bl 0x830639c8
	ctx.lr = 0x83053368;
	sub_830639C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830533b8
	if (ctx.cr6.eq) goto loc_830533B8;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x83035ce0
	ctx.lr = 0x8305337C;
	sub_83035CE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830533a4
	if (ctx.cr6.eq) goto loc_830533A4;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8305338C:
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
loc_830533A4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830533B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830533B8:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x8305338c
	goto loc_8305338C;
}

__attribute__((alias("__imp__sub_830533C0"))) PPC_WEAK_FUNC(sub_830533C0);
PPC_FUNC_IMPL(__imp__sub_830533C0) {
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
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,15168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15168);
	// addi r3,r11,2456
	ctx.r3.s64 = ctx.r11.s64 + 2456;
	// bl 0x830639c8
	ctx.lr = 0x830533E8;
	sub_830639C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83053430
	if (ctx.cr6.eq) goto loc_83053430;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x83062990
	ctx.lr = 0x83053400;
	sub_83062990(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8305341c
	if (!ctx.cr6.eq) goto loc_8305341C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8305341C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8305341C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83053430;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83053430:
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

__attribute__((alias("__imp__sub_83053448"))) PPC_WEAK_FUNC(sub_83053448);
PPC_FUNC_IMPL(__imp__sub_83053448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x83053450;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwzu r29,4(r4)
	ea = 4 + ctx.r4.u32;
	ctx.r29.u64 = PPC_LOAD_U32(ea);
	ctx.r4.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r4,4
	ctx.r31.s64 = ctx.r4.s64 + 4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8305348c
	if (ctx.cr6.eq) goto loc_8305348C;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// rlwinm r4,r29,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,-11272(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11272);
	// bl 0x82fd6b98
	ctx.lr = 0x83053478;
	sub_82FD6B98(ctx, base);
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
	// beq cr6,0x830534c8
	if (ctx.cr6.eq) goto loc_830534C8;
	// stw r29,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r29.u32);
loc_8305348C:
	// li r3,1
	ctx.r3.s64 = 1;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x830534c0
	if (ctx.cr6.eq) goto loc_830534C0;
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
loc_830534A0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzu r4,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// bl 0x83053330
	ctx.lr = 0x830534AC;
	sub_83053330(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x830534c0
	if (!ctx.cr6.eq) goto loc_830534C0;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x830534a0
	if (ctx.cr6.lt) goto loc_830534A0;
loc_830534C0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_830534C8:
	// li r3,52
	ctx.r3.s64 = 52;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830534D4"))) PPC_WEAK_FUNC(sub_830534D4);
PPC_FUNC_IMPL(__imp__sub_830534D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830534D8"))) PPC_WEAK_FUNC(sub_830534D8);
PPC_FUNC_IMPL(__imp__sub_830534D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x830534E0;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,16(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r25,1
	ctx.r25.s64 = 1;
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x83053658
	if (ctx.cr6.eq) goto loc_83053658;
	// lis r11,64
	ctx.r11.s64 = 4194304;
	// lis r23,-31958
	ctx.r23.s64 = -2094399488;
	// ori r22,r11,4352
	ctx.r22.u64 = ctx.r11.u64 | 4352;
loc_8305351C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r9,r10,0,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF00;
	// cmplw cr6,r9,r22
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r22.u32, ctx.xer);
	// bne cr6,0x83053624
	if (!ctx.cr6.eq) goto loc_83053624;
	// lwz r29,16(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,15168(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 15168);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x830639c8
	ctx.lr = 0x83053544;
	sub_830639C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83053638
	if (ctx.cr6.eq) goto loc_83053638;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bne cr6,0x8305356c
	if (!ctx.cr6.eq) goto loc_8305356C;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// b 0x830535dc
	goto loc_830535DC;
loc_8305356C:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r29.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83053590
	if (ctx.cr6.eq) goto loc_83053590;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x83053594
	goto loc_83053594;
loc_83053590:
	// li r9,0
	ctx.r9.s64 = 0;
loc_83053594:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r28,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r28.u32);
	// lwz r7,0(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x83053644
	if (!ctx.cr6.lt) goto loc_83053644;
loc_830535DC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83053604;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8305361C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// bne cr6,0x83053668
	if (!ctx.cr6.eq) goto loc_83053668;
loc_83053624:
	// lwz r11,20(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8305351c
	if (!ctx.cr6.eq) goto loc_8305351C;
	// b 0x83053658
	goto loc_83053658;
loc_83053638:
	// li r3,61
	ctx.r3.s64 = 61;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
loc_83053644:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83053658;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83053658:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83053668
	if (!ctx.cr6.eq) goto loc_83053668;
	// li r25,3
	ctx.r25.s64 = 3;
loc_83053668:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8305367C"))) PPC_WEAK_FUNC(sub_8305367C);
PPC_FUNC_IMPL(__imp__sub_8305367C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83053680"))) PPC_WEAK_FUNC(sub_83053680);
PPC_FUNC_IMPL(__imp__sub_83053680) {
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
	// addi r10,r11,-12124
	ctx.r10.s64 = ctx.r11.s64 + -12124;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x830530c0
	ctx.lr = 0x830536AC;
	sub_830530C0(ctx, base);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x830536d8
	if (ctx.cr6.eq) goto loc_830536D8;
	// stw r4,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r4.u32);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// lwz r3,-11272(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11272);
	// bl 0x82fd6cc8
	ctx.lr = 0x830536C8;
	sub_82FD6CC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_830536D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83039ed0
	ctx.lr = 0x830536E0;
	sub_83039ED0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830536f8
	if (ctx.cr6.eq) goto loc_830536F8;
	// bl 0x82691540
	ctx.lr = 0x830536F4;
	sub_82691540(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_830536F8:
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

__attribute__((alias("__imp__sub_83053710"))) PPC_WEAK_FUNC(sub_83053710);
PPC_FUNC_IMPL(__imp__sub_83053710) {
	PPC_FUNC_PROLOGUE();
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83053718"))) PPC_WEAK_FUNC(sub_83053718);
PPC_FUNC_IMPL(__imp__sub_83053718) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83053724"))) PPC_WEAK_FUNC(sub_83053724);
PPC_FUNC_IMPL(__imp__sub_83053724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83053728"))) PPC_WEAK_FUNC(sub_83053728);
PPC_FUNC_IMPL(__imp__sub_83053728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x83053730;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83053810
	if (ctx.cr6.eq) goto loc_83053810;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8305376c
	if (!ctx.cr6.eq) goto loc_8305376C;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// b 0x83053800
	goto loc_83053800;
loc_8305376C:
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// lis r28,-31969
	ctx.r28.s64 = -2095120384;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,-11264(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -11264);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82fd6b98
	ctx.lr = 0x8305378C;
	sub_82FD6B98(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83053800
	if (ctx.cr6.eq) goto loc_83053800;
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82a75220
	ctx.lr = 0x830537B0;
	sub_82A75220(ctx, base);
	// lhz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// lhz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// rotlwi r8,r10,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82a75220
	ctx.lr = 0x830537DC;
	sub_82A75220(ctx, base);
	// lwz r3,-11264(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -11264);
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x82fd6cc8
	ctx.lr = 0x830537E8;
	sub_82FD6CC8(ctx, base);
	// lwz r3,-11264(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -11264);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82fd6cc8
	ctx.lr = 0x830537F4;
	sub_82FD6CC8(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// stw r30,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
loc_83053800:
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// lhz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r11,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
loc_83053810:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83053818"))) PPC_WEAK_FUNC(sub_83053818);
PPC_FUNC_IMPL(__imp__sub_83053818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-14320
	ctx.r9.s64 = ctx.r11.s64 + -14320;
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83053830"))) PPC_WEAK_FUNC(sub_83053830);
PPC_FUNC_IMPL(__imp__sub_83053830) {
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

__attribute__((alias("__imp__sub_83053840"))) PPC_WEAK_FUNC(sub_83053840);
PPC_FUNC_IMPL(__imp__sub_83053840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x83053848;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r4,40(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r29,-31969
	ctx.r29.s64 = -2095120384;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83053874
	if (ctx.cr6.eq) goto loc_83053874;
	// lwz r3,-11264(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -11264);
	// bl 0x82fd6e18
	ctx.lr = 0x8305386C;
	sub_82FD6E18(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_83053874:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83053898
	if (ctx.cr6.eq) goto loc_83053898;
loc_83053884:
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83053884
	if (!ctx.cr6.eq) goto loc_83053884;
loc_83053898:
	// rlwinm r30,r10,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r3,-11264(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -11264);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82fd6c38
	ctx.lr = 0x830538AC;
	sub_82FD6C38(ctx, base);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x830538c4
	if (!ctx.cr6.eq) goto loc_830538C4;
	// li r3,52
	ctx.r3.s64 = 52;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_830538C4:
	// lfs f0,96(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// lfs f13,100(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f13,24(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lbz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// lwz r10,104(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// lfs f0,5184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lbz r9,108(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 108);
	// stb r9,45(r31)
	PPC_STORE_U8(ctx.r31.u32 + 45, ctx.r9.u8);
	// bl 0x8306c2b0
	ctx.lr = 0x83053900;
	sub_8306C2B0(ctx, base);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stb r3,37(r31)
	PPC_STORE_U8(ctx.r31.u32 + 37, ctx.r3.u8);
	// cmplwi cr6,r8,8
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 8, ctx.xer);
	// blt cr6,0x83053944
	if (ctx.cr6.lt) goto loc_83053944;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83053938
	if (ctx.cr6.eq) goto loc_83053938;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a75988
	ctx.lr = 0x8305392C;
	sub_82A75988(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_83053938:
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8306c3b8
	ctx.lr = 0x83053944;
	sub_8306C3B8(ctx, base);
loc_83053944:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82a75220
	ctx.lr = 0x83053954;
	sub_82A75220(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83053960"))) PPC_WEAK_FUNC(sub_83053960);
PPC_FUNC_IMPL(__imp__sub_83053960) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a75988
	ctx.lr = 0x8305398C;
	sub_82A75988(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830539b0
	if (ctx.cr6.eq) goto loc_830539B0;
loc_8305399C:
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8305399c
	if (!ctx.cr6.eq) goto loc_8305399C;
loc_830539B0:
	// rlwinm r5,r10,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a75220
	ctx.lr = 0x830539C0;
	sub_82A75220(ctx, base);
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 96, temp.u32);
	// lfs f13,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,100(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 100, temp.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r11.u32);
	// lbz r10,45(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 45);
	// stb r10,108(r30)
	PPC_STORE_U8(ctx.r30.u32 + 108, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_830539F8"))) PPC_WEAK_FUNC(sub_830539F8);
PPC_FUNC_IMPL(__imp__sub_830539F8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83053a4c
	if (ctx.cr6.eq) goto loc_83053A4C;
loc_83053A28:
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// and r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83053a28
	if (!ctx.cr6.eq) goto loc_83053A28;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x83053a5c
	if (ctx.cr6.eq) goto loc_83053A5C;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x83053a54
	if (ctx.cr6.eq) goto loc_83053A54;
loc_83053A4C:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x83053a60
	goto loc_83053A60;
loc_83053A54:
	// stb r9,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r9.u8);
	// b 0x83053a64
	goto loc_83053A64;
loc_83053A5C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83053A60:
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
loc_83053A64:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stb r5,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r5.u8);
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r4,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r4.u32);
	// stb r9,37(r31)
	PPC_STORE_U8(ctx.r31.u32 + 37, ctx.r9.u8);
	// lis r7,-31969
	ctx.r7.s64 = -2095120384;
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// rlwinm r30,r10,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// stb r9,45(r31)
	PPC_STORE_U8(ctx.r31.u32 + 45, ctx.r9.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f31,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f31.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfs f31,20(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f31,24(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lwz r3,-11264(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -11264);
	// bl 0x82fd6c38
	ctx.lr = 0x83053AA4;
	sub_82FD6C38(ctx, base);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x83053ab8
	if (!ctx.cr6.eq) goto loc_83053AB8;
	// li r3,52
	ctx.r3.s64 = 52;
	// b 0x83053ae0
	goto loc_83053AE0;
loc_83053AB8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a75988
	ctx.lr = 0x83053AC4;
	sub_82A75988(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// stfs f31,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f31,12(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f31,16(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f0,24436(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
loc_83053AE0:
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

__attribute__((alias("__imp__sub_83053AFC"))) PPC_WEAK_FUNC(sub_83053AFC);
PPC_FUNC_IMPL(__imp__sub_83053AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83053B00"))) PPC_WEAK_FUNC(sub_83053B00);
PPC_FUNC_IMPL(__imp__sub_83053B00) {
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
	// lwz r4,40(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83053b34
	if (ctx.cr6.eq) goto loc_83053B34;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// lwz r3,-11264(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11264);
	// bl 0x82fd6e18
	ctx.lr = 0x83053B2C;
	sub_82FD6E18(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
loc_83053B34:
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

__attribute__((alias("__imp__sub_83053B48"))) PPC_WEAK_FUNC(sub_83053B48);
PPC_FUNC_IMPL(__imp__sub_83053B48) {
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
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,3
	ctx.r8.s64 = 3;
	// lbz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 44);
	// subfc r7,r9,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r7.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lwz r5,40(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// subfe r10,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lis r4,-31969
	ctx.r4.s64 = -2095120384;
	// and r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
	// addi r9,r4,-10976
	ctx.r9.s64 = ctx.r4.s64 + -10976;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x83053BA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r3,14(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
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

__attribute__((alias("__imp__sub_83053BB8"))) PPC_WEAK_FUNC(sub_83053BB8);
PPC_FUNC_IMPL(__imp__sub_83053BB8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f13,5184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bge cr6,0x83053bf0
	if (!ctx.cr6.lt) goto loc_83053BF0;
	// fmr f31,f13
	ctx.f31.f64 = ctx.f13.f64;
	// b 0x83053c04
	goto loc_83053C04;
loc_83053BF0:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,-15356(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15356);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x83053c04
	if (!ctx.cr6.gt) goto loc_83053C04;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_83053C04:
	// lbz r11,45(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 45);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83053c58
	if (ctx.cr6.eq) goto loc_83053C58;
	// li r11,8
	ctx.r11.s64 = 8;
	// stfs f31,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f31,24(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lbz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8306c2b0
	ctx.lr = 0x83053C38;
	sub_8306C2B0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// stb r3,37(r31)
	PPC_STORE_U8(ctx.r31.u32 + 37, ctx.r3.u8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83053c54
	if (!ctx.cr6.eq) goto loc_83053C54;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8306c3b8
	ctx.lr = 0x83053C54;
	sub_8306C3B8(ctx, base);
loc_83053C54:
	// stb r30,45(r31)
	PPC_STORE_U8(ctx.r31.u32 + 45, ctx.r30.u8);
loc_83053C58:
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// beq cr6,0x83053c70
	if (ctx.cr6.eq) goto loc_83053C70;
	// stfs f31,24(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
loc_83053C70:
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

__attribute__((alias("__imp__sub_83053C8C"))) PPC_WEAK_FUNC(sub_83053C8C);
PPC_FUNC_IMPL(__imp__sub_83053C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83053C90"))) PPC_WEAK_FUNC(sub_83053C90);
PPC_FUNC_IMPL(__imp__sub_83053C90) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r30,r3,12
	ctx.r30.s64 = ctx.r3.s64 + 12;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83053bb8
	ctx.lr = 0x83053CBC;
	sub_83053BB8(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83053cd4
	if (ctx.cr6.eq) goto loc_83053CD4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83053b48
	ctx.lr = 0x83053CD4;
	sub_83053B48(ctx, base);
loc_83053CD4:
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

__attribute__((alias("__imp__sub_83053CEC"))) PPC_WEAK_FUNC(sub_83053CEC);
PPC_FUNC_IMPL(__imp__sub_83053CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83053CF0"))) PPC_WEAK_FUNC(sub_83053CF0);
PPC_FUNC_IMPL(__imp__sub_83053CF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83053CF4"))) PPC_WEAK_FUNC(sub_83053CF4);
PPC_FUNC_IMPL(__imp__sub_83053CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83053CF8"))) PPC_WEAK_FUNC(sub_83053CF8);
PPC_FUNC_IMPL(__imp__sub_83053CF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x83053D00;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83053d3c
	if (ctx.cr6.eq) goto loc_83053D3C;
	// addi r31,r3,12
	ctx.r31.s64 = ctx.r3.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83053bb8
	ctx.lr = 0x83053D24;
	sub_83053BB8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83053b48
	ctx.lr = 0x83053D30;
	sub_83053B48(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_83053D3C:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83053D48"))) PPC_WEAK_FUNC(sub_83053D48);
PPC_FUNC_IMPL(__imp__sub_83053D48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83053D68"))) PPC_WEAK_FUNC(sub_83053D68);
PPC_FUNC_IMPL(__imp__sub_83053D68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83053D6C"))) PPC_WEAK_FUNC(sub_83053D6C);
PPC_FUNC_IMPL(__imp__sub_83053D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83053D70"))) PPC_WEAK_FUNC(sub_83053D70);
PPC_FUNC_IMPL(__imp__sub_83053D70) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83053D84"))) PPC_WEAK_FUNC(sub_83053D84);
PPC_FUNC_IMPL(__imp__sub_83053D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83053D88"))) PPC_WEAK_FUNC(sub_83053D88);
PPC_FUNC_IMPL(__imp__sub_83053D88) {
	PPC_FUNC_PROLOGUE();
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r4,r11,18,14,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3FFFF;
	// b 0x830539f8
	sub_830539F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83053DA0"))) PPC_WEAK_FUNC(sub_83053DA0);
PPC_FUNC_IMPL(__imp__sub_83053DA0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// b 0x83053b00
	sub_83053B00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83053DB4"))) PPC_WEAK_FUNC(sub_83053DB4);
PPC_FUNC_IMPL(__imp__sub_83053DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83053DB8"))) PPC_WEAK_FUNC(sub_83053DB8);
PPC_FUNC_IMPL(__imp__sub_83053DB8) {
	PPC_FUNC_PROLOGUE();
	// lvx128 v1,r3,r4
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83053DC0"))) PPC_WEAK_FUNC(sub_83053DC0);
PPC_FUNC_IMPL(__imp__sub_83053DC0) {
	PPC_FUNC_PROLOGUE();
	// stvx128 v1,r3,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83053DC8"))) PPC_WEAK_FUNC(sub_83053DC8);
PPC_FUNC_IMPL(__imp__sub_83053DC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x83053DD0;
	__savegprlr_29(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r5,4113
	ctx.r5.s64 = 269549568;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r3,1029
	ctx.r3.s64 = 67436544;
	// lis r7,2057
	ctx.r7.s64 = 134807552;
	// lfs f0,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// lis r6,7197
	ctx.r6.s64 = 471662592;
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// ori r4,r5,4627
	ctx.r4.u64 = ctx.r5.u64 | 4627;
	// lis r9,5141
	ctx.r9.s64 = 336920576;
	// lis r30,6169
	ctx.r30.s64 = 404291584;
	// stw r4,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r4.u32);
	// lis r29,3085
	ctx.r29.s64 = 202178560;
	// stw r4,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r4.u32);
	// ori r8,r10,515
	ctx.r8.u64 = ctx.r10.u64 | 515;
	// stw r4,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r4.u32);
	// ori r5,r3,1543
	ctx.r5.u64 = ctx.r3.u64 | 1543;
	// ori r10,r7,2571
	ctx.r10.u64 = ctx.r7.u64 | 2571;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// ori r11,r6,7711
	ctx.r11.u64 = ctx.r6.u64 | 7711;
	// stw r5,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// ori r9,r9,5655
	ctx.r9.u64 = ctx.r9.u64 | 5655;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// ori r6,r30,6683
	ctx.r6.u64 = ctx.r30.u64 | 6683;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// ori r7,r29,3599
	ctx.r7.u64 = ctx.r29.u64 | 3599;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r6.u32);
	// stw r7,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r7.u32);
	// stw r8,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r8.u32);
	// stw r5,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r5.u32);
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// stw r8,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r8.u32);
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// stw r6,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r6.u32);
	// stw r8,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r8.u32);
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// stw r9,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r9.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r5,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r5.u32);
	// stw r7,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r7.u32);
	// stw r9,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r9.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
	// stw r7,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r7.u32);
	// stw r6,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r6.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83053EA4"))) PPC_WEAK_FUNC(sub_83053EA4);
PPC_FUNC_IMPL(__imp__sub_83053EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83053EA8"))) PPC_WEAK_FUNC(sub_83053EA8);
PPC_FUNC_IMPL(__imp__sub_83053EA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83053EAC"))) PPC_WEAK_FUNC(sub_83053EAC);
PPC_FUNC_IMPL(__imp__sub_83053EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83053EB0"))) PPC_WEAK_FUNC(sub_83053EB0);
PPC_FUNC_IMPL(__imp__sub_83053EB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// clrlwi r8,r5,16
	ctx.r8.u64 = ctx.r5.u32 & 0xFFFF;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// sth r5,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r5.u16);
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,24436(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24436);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// fdivs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// stfs f11,12(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83053EE8"))) PPC_WEAK_FUNC(sub_83053EE8);
PPC_FUNC_IMPL(__imp__sub_83053EE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83053EEC"))) PPC_WEAK_FUNC(sub_83053EEC);
PPC_FUNC_IMPL(__imp__sub_83053EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83053EF0"))) PPC_WEAK_FUNC(sub_83053EF0);
PPC_FUNC_IMPL(__imp__sub_83053EF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lhz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// rotlwi r11,r9,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// add r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lfs f0,5184(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// bne cr6,0x83053fa8
	if (!ctx.cr6.eq) goto loc_83053FA8;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq cr6,0x83054094
	if (ctx.cr6.eq) goto loc_83054094;
	// subf r8,r4,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r4.s64;
	// stfs f1,-32(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// stfs f1,-28(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// addi r4,r1,-32
	ctx.r4.s64 = ctx.r1.s64 + -32;
	// stfs f1,-24(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// stfs f1,-20(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -20, temp.u32);
	// addi r10,r5,48
	ctx.r10.s64 = ctx.r5.s64 + 48;
	// li r9,-32
	ctx.r9.s64 = -32;
	// li r7,-48
	ctx.r7.s64 = -48;
	// li r6,-16
	ctx.r6.s64 = -16;
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// li r5,16
	ctx.r5.s64 = 16;
loc_83053F4C:
	// lvx128 v12,r8,r11
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vmaddfp v10,v13,v0,v12
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)));
	// lvx128 v12,r10,r7
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r11,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmaddfp v9,v13,v0,v12
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)));
	// lvx128 v8,r10,r9
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r11,r6
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r0,r10
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmaddfp v8,v13,v0,v8
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v8.f32)));
	// lvx128 v12,r11,r5
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// vmaddfp v13,v12,v0,v11
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v11.f32)));
	// stvx128 v10,r8,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// addi r4,r11,-32
	ctx.r4.s64 = ctx.r11.s64 + -32;
	// stvx128 v9,r10,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v8,r10,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// stvx128 v13,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// blt cr6,0x83053f4c
	if (ctx.cr6.lt) goto loc_83053F4C;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_83053FA8:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// fadds f0,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,-28(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stfs f1,-32(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// addi r6,r1,-32
	ctx.r6.s64 = ctx.r1.s64 + -32;
	// addi r31,r1,-32
	ctx.r31.s64 = ctx.r1.s64 + -32;
	// lfs f0,-24084(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24084);
	ctx.f0.f64 = double(temp.f32);
	// li r9,-32
	ctx.r9.s64 = -32;
	// fmuls f12,f2,f0
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// lfs f13,21500(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21500);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-16424(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -16424);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f11,f2,f13,f1
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f13.f64 + ctx.f1.f64));
	// fmadds f10,f2,f0,f1
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 + ctx.f1.f64));
	// stfs f11,-24(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// stfs f10,-20(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -20, temp.u32);
	// addi r10,r5,48
	ctx.r10.s64 = ctx.r5.s64 + 48;
	// lvx128 v12,r0,r6
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// subf r8,r4,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r4.s64;
	// stfs f12,-32(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// li r7,-48
	ctx.r7.s64 = -48;
	// stfs f12,-28(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// stfs f12,-24(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// li r6,-16
	ctx.r6.s64 = -16;
	// stfs f12,-20(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -20, temp.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// lvx128 v63,r0,r31
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// vaddfp128 v0,v12,v63
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v63.f32)));
	// vaddfp128 v13,v0,v63
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v63.f32)));
	// vaddfp128 v62,v63,v63
	_mm_store_ps(ctx.v62.f32, _mm_add_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v63.f32)));
	// vaddfp128 v11,v13,v63
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v63.f32)));
	// vaddfp128 v63,v62,v62
	_mm_store_ps(ctx.v63.f32, _mm_add_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v62.f32)));
loc_83054030:
	// lvx128 v9,r11,r8
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r0,r11
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vmaddfp v5,v10,v13,v9
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v5.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v9.f32)));
	// lvx128 v9,r10,r7
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r11,r9
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vaddfp128 v13,v13,v63
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v63.f32)));
	// vmaddfp v6,v10,v12,v9
	_mm_store_ps(ctx.v6.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v9.f32)));
	// lvx128 v7,r10,r9
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r11,r6
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// vaddfp128 v12,v12,v63
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v63.f32)));
	// lvx128 v8,r0,r10
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmaddfp v7,v10,v0,v7
	_mm_store_ps(ctx.v7.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v7.f32)));
	// lvx128 v9,r11,r5
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// vaddfp128 v0,v0,v63
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v63.f32)));
	// vmaddfp v10,v9,v11,v8
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v8.f32)));
	// vaddfp128 v11,v11,v63
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v63.f32)));
	// stvx128 v5,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// addi r4,r11,-32
	ctx.r4.s64 = ctx.r11.s64 + -32;
	// stvx128 v6,r10,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v7,r10,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// stvx128 v10,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// blt cr6,0x83054030
	if (ctx.cr6.lt) goto loc_83054030;
loc_83054094:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305409C"))) PPC_WEAK_FUNC(sub_8305409C);
PPC_FUNC_IMPL(__imp__sub_8305409C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830540A0"))) PPC_WEAK_FUNC(sub_830540A0);
PPC_FUNC_IMPL(__imp__sub_830540A0) {
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
	// lfs f1,48(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfs f9,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f0,f1
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// lfs f7,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// fsubs f6,f7,f9
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// lfs f5,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmuls f2,f8,f5
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// fmuls f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// bl 0x83053ef0
	ctx.lr = 0x830540F0;
	sub_83053EF0(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 12);
	// fmr f2,f4
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f4.f64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// fmr f1,f9
	ctx.f1.f64 = ctx.f9.f64;
	// rotlwi r10,r8,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// lhz r7,12(r9)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + 12);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rotlwi r10,r7,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x83053ef0
	ctx.lr = 0x83054124;
	sub_83053EF0(ctx, base);
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

__attribute__((alias("__imp__sub_8305413C"))) PPC_WEAK_FUNC(sub_8305413C);
PPC_FUNC_IMPL(__imp__sub_8305413C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83054140"))) PPC_WEAK_FUNC(sub_83054140);
PPC_FUNC_IMPL(__imp__sub_83054140) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f1,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83054b40
	ctx.lr = 0x8305416C;
	sub_83054B40(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f2,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x83053ef0
	ctx.lr = 0x83054188;
	sub_83053EF0(ctx, base);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// lfs f2,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f2.f64 = double(temp.f32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f1,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// rotlwi r10,r8,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// lhz r7,12(r9)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + 12);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rotlwi r10,r7,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x83053ef0
	ctx.lr = 0x830541BC;
	sub_83053EF0(ctx, base);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f2,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f2.f64 = double(temp.f32);
	// rotlwi r10,r5,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 3);
	// lfs f1,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// lhz r9,12(r6)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r6.u32 + 12);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rotlwi r10,r9,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x83053ef0
	ctx.lr = 0x830541F0;
	sub_83053EF0(ctx, base);
	// lhz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rotlwi r9,r10,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f2,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f2.f64 = double(temp.f32);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lfs f1,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// lhz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 12);
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r7,r11,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x83053ef0
	ctx.lr = 0x83054234;
	sub_83053EF0(ctx, base);
	// lhz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// lfs f2,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 12);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rotlwi r7,r11,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x83053ef0
	ctx.lr = 0x83054278;
	sub_83053EF0(ctx, base);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// lfs f2,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f1.f64 = double(temp.f32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rotlwi r11,r7,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 4);
	// lhz r6,12(r8)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r8.u32 + 12);
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rotlwi r9,r6,4
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 4);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// bl 0x83053ef0
	ctx.lr = 0x830542AC;
	sub_83053EF0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830542C4"))) PPC_WEAK_FUNC(sub_830542C4);
PPC_FUNC_IMPL(__imp__sub_830542C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830542C8"))) PPC_WEAK_FUNC(sub_830542C8);
PPC_FUNC_IMPL(__imp__sub_830542C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x830542D0;
	__savegprlr_26(ctx, base);
	// stfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f29.u64);
	// stfd f30,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83054310
	if (ctx.cr6.eq) goto loc_83054310;
loc_830542FC:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830542fc
	if (!ctx.cr6.eq) goto loc_830542FC;
loc_83054310:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_83054314:
	// lfs f3,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f3.f64 = double(temp.f32);
	// lhz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + 12);
	// lfs f1,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lfs f0,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// mullw r9,r10,r28
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r28.s32);
	// lfs f9,84(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f0,f1
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// lfs f12,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f3,f9
	ctx.f13.f64 = double(float(ctx.f3.f64 - ctx.f9.f64));
	// lfs f6,100(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f6.f64 = double(temp.f32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f2,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f3,f12,f6
	ctx.f3.f64 = double(float(ctx.f12.f64 - ctx.f6.f64));
	// lfs f10,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f11,f2,f7
	ctx.f11.f64 = double(float(ctx.f2.f64 - ctx.f7.f64));
	// lfs f4,96(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f12,f10,f5
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f5.f64));
	// lfsu f0,64(r31)
	ea = 64 + ctx.r31.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	ctx.f0.f64 = double(temp.f32);
	// lwz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// fsubs f10,f0,f4
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f4.f64));
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fmuls f2,f8,f0
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f8,f13,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// fmuls f3,f3,f0
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f31,f11,f0
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f30,f12,f0
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f29,f10,f0
	ctx.f29.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// bl 0x83053ef0
	ctx.lr = 0x830543A0;
	sub_83053EF0(ctx, base);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f2,f8
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f8.f64;
	// fmr f1,f9
	ctx.f1.f64 = ctx.f9.f64;
	// lhz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + 12);
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rotlwi r10,r6,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x83053ef0
	ctx.lr = 0x830543C8;
	sub_83053EF0(ctx, base);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f7
	ctx.f1.f64 = ctx.f7.f64;
	// lhz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 12);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x83053ef0
	ctx.lr = 0x830543F0;
	sub_83053EF0(ctx, base);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// fmr f2,f3
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f3.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f6
	ctx.f1.f64 = ctx.f6.f64;
	// lhz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 12);
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x83053ef0
	ctx.lr = 0x83054420;
	sub_83053EF0(ctx, base);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f5
	ctx.f1.f64 = ctx.f5.f64;
	// lhz r11,12(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 12);
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x83053ef0
	ctx.lr = 0x83054450;
	sub_83053EF0(ctx, base);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lhz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// rotlwi r10,r10,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x83053ef0
	ctx.lr = 0x83054478;
	sub_83053EF0(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x83054314
	if (ctx.cr6.lt) goto loc_83054314;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83054498"))) PPC_WEAK_FUNC(sub_83054498);
PPC_FUNC_IMPL(__imp__sub_83054498) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x830544A0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830544d4
	if (ctx.cr6.eq) goto loc_830544D4;
loc_830544C0:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830544c0
	if (!ctx.cr6.eq) goto loc_830544C0;
loc_830544D4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// lfs f9,11556(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11556);
	ctx.f9.f64 = double(temp.f32);
loc_830544E0:
	// lfs f13,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// lhz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 12);
	// lfs f0,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f13,f13
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f7,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// lfs f10,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f5,f7,f7
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// lfs f8,96(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f8.f64 = double(temp.f32);
	// mullw r10,r11,r29
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// lfs f6,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f6.f64 = double(temp.f32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lfs f4,84(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f6,f6
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64));
	// lfs f2,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f4,f4
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f4.f64));
	// lfs f13,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f7,f2,f2
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f2.f64));
	// lfsu f0,64(r31)
	ea = 64 + ctx.r31.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f6,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f2,f0,f0,f11
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmadds f0,f8,f8,f12
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f12.f64));
	// fmadds f4,f10,f10,f12
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f13,f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// fmadds f11,f2,f9,f7
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f9.f64 + ctx.f7.f64));
	// fmadds f10,f0,f9,f1
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f9.f64 + ctx.f1.f64));
	// fmadds f12,f4,f9,f5
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f8,f13,f9,f3
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 + ctx.f3.f64));
	// fsqrts f4,f11
	ctx.f4.f64 = double(float(sqrt(ctx.f11.f64)));
	// fsqrts f1,f12
	ctx.f1.f64 = double(float(sqrt(ctx.f12.f64)));
	// fsqrts f7,f10
	ctx.f7.f64 = double(float(sqrt(ctx.f10.f64)));
	// fsqrts f5,f8
	ctx.f5.f64 = double(float(sqrt(ctx.f8.f64)));
	// fsubs f0,f4,f7
	ctx.f0.f64 = double(float(ctx.f4.f64 - ctx.f7.f64));
	// fsubs f3,f5,f1
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f1.f64));
	// fmuls f8,f6,f0
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f2,f6,f3
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f3.f64));
	// bl 0x83053ef0
	ctx.lr = 0x8305458C;
	sub_83053EF0(ctx, base);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f2,f8
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f8.f64;
	// fmr f1,f7
	ctx.f1.f64 = ctx.f7.f64;
	// lhz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + 12);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rotlwi r10,r7,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x83053ef0
	ctx.lr = 0x830545B4;
	sub_83053EF0(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x830544e0
	if (ctx.cr6.lt) goto loc_830544E0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830545C8"))) PPC_WEAK_FUNC(sub_830545C8);
PPC_FUNC_IMPL(__imp__sub_830545C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,48(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f13,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// lfs f10,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fmr f9,f13
	ctx.f9.f64 = ctx.f13.f64;
	// lfs f8,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fsubs f6,f8,f13
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// lfs f5,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lhz r5,12(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 12);
	// lhz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// lfs f0,-24084(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24084);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rotlwi r10,r5,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 2);
	// rlwinm r8,r3,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x3FFFFFFF;
	// stfs f11,-32(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// lfs f13,21500(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21500);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lfs f12,-16424(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -16424);
	ctx.f12.f64 = double(temp.f32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f9,-16(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// fmuls f4,f7,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// fmuls f3,f6,f5
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fmuls f2,f4,f0
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f2,-64(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// fmuls f1,f3,f0
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f2,-60(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// fadds f0,f11,f4
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f4.f64));
	// stfs f0,-28(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// fmadds f10,f4,f13,f11
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f13.f64 + ctx.f11.f64));
	// stfs f10,-24(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// fmadds f8,f4,f12,f11
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f12.f64 + ctx.f11.f64));
	// stfs f8,-20(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -20, temp.u32);
	// fadds f7,f9,f3
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f3.f64));
	// stfs f7,-12(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// fmadds f6,f3,f13,f9
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 + ctx.f9.f64));
	// stfs f6,-8(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// fmadds f5,f3,f12,f9
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f12.f64 + ctx.f9.f64));
	// stfs f5,-4(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// stfs f2,-56(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// stfs f2,-52(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -52, temp.u32);
	// stfs f1,-48(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// stfs f1,-44(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// stfs f1,-40(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -40, temp.u32);
	// stfs f1,-36(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -36, temp.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// addi r8,r1,-64
	ctx.r8.s64 = ctx.r1.s64 + -64;
	// addi r7,r1,-48
	ctx.r7.s64 = ctx.r1.s64 + -48;
	// addi r6,r1,-32
	ctx.r6.s64 = ctx.r1.s64 + -32;
	// addi r5,r1,-16
	ctx.r5.s64 = ctx.r1.s64 + -16;
	// lvx128 v61,r0,r8
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v60,r0,r7
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v63,r0,r6
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// lvx128 v62,r0,r5
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
loc_830546B8:
	// lvx128 v59,r0,r11
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lvx128 v58,r0,r10
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v57,v59,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v57.f32, _mm_mul_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v56,v58,v62
	_mm_store_ps(ctx.v56.f32, _mm_mul_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v62.f32)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// vaddfp128 v63,v63,v61
	_mm_store_ps(ctx.v63.f32, _mm_add_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v61.f32)));
	// vaddfp128 v62,v62,v60
	_mm_store_ps(ctx.v62.f32, _mm_add_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v60.f32)));
	// vmrghw128 v55,v57,v56
	_mm_store_si128((__m128i*)ctx.v55.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v56.u32), _mm_load_si128((__m128i*)ctx.v57.u32)));
	// vmrglw128 v54,v57,v56
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v56.u32), _mm_load_si128((__m128i*)ctx.v57.u32)));
	// stvx128 v55,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// stvx128 v54,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bdnz 0x830546b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830546B8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830546F8"))) PPC_WEAK_FUNC(sub_830546F8);
PPC_FUNC_IMPL(__imp__sub_830546F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x83054700;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82fa8d24
	ctx.lr = 0x83054708;
	__savefpr_27(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// lfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83054b40
	ctx.lr = 0x83054724;
	sub_83054B40(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lhz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 12);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// lfs f11,276(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	ctx.f11.f64 = double(temp.f32);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lfs f10,272(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	ctx.f10.f64 = double(temp.f32);
	// rotlwi r8,r11,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lfs f8,284(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	ctx.f8.f64 = double(temp.f32);
	// lfs f13,21500(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 21500);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f12,-16424(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -16424);
	ctx.f12.f64 = double(temp.f32);
	// lhz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// lfs f9,280(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	ctx.f9.f64 = double(temp.f32);
	// add r30,r11,r9
	ctx.r30.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r28,r11,r8
	ctx.r28.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lfs f0,-24084(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -24084);
	ctx.f0.f64 = double(temp.f32);
	// fadds f30,f10,f11
	ctx.f30.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f29,f11,f13,f10
	ctx.f29.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f10.f64));
	// lfs f7,288(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,292(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	ctx.f6.f64 = double(temp.f32);
	// fadds f28,f8,f9
	ctx.f28.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// fmadds f27,f8,f13,f9
	ctx.f27.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f9.f64));
	// stfs f9,112(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmadds f10,f11,f12,f10
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f10.f64));
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// rotlwi r8,r11,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// lfs f5,296(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	ctx.f5.f64 = double(temp.f32);
	// rotlwi r5,r11,4
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// lfs f4,300(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,304(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f9,f8,f12,f9
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f9.f64));
	// lfs f2,308(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	ctx.f2.f64 = double(temp.f32);
	// rlwinm r7,r30,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// rlwinm r6,r28,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f10,92(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// rlwinm r11,r29,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 30) & 0x3FFFFFFF;
	// fmuls f31,f8,f0
	ctx.f31.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f29,88(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f8,f6,f7
	ctx.f8.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// stfs f28,116(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmadds f10,f6,f13,f7
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f13.f64 + ctx.f7.f64));
	// stfs f9,124(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmadds f30,f6,f12,f7
	ctx.f30.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f7.f64));
	// stfs f7,144(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fadds f29,f4,f5
	ctx.f29.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// lfs f11,312(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f9,f4,f13,f5
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f13.f64 + ctx.f5.f64));
	// stfs f27,120(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmadds f7,f4,f12,f5
	ctx.f7.f64 = double(float(ctx.f4.f64 * ctx.f12.f64 + ctx.f5.f64));
	// stfs f1,96(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f28,f2,f3
	ctx.f28.f64 = double(float(ctx.f2.f64 + ctx.f3.f64));
	// stfs f1,100(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f1,104(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f1,108(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stfs f8,148(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stfs f10,152(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// stfs f30,156(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// stfs f5,176(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stfs f29,180(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f9,184(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f7,188(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f3,208(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f28,212(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// lfs f10,316(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f5,f4,f0
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f31,192(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// fmuls f4,f2,f0
	ctx.f4.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f31,196(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// fmuls f1,f10,f0
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f31,200(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// fmadds f0,f2,f13,f3
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f13.f64 + ctx.f3.f64));
	// stfs f31,204(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// fmadds f9,f2,f12,f3
	ctx.f9.f64 = double(float(ctx.f2.f64 * ctx.f12.f64 + ctx.f3.f64));
	// stfs f11,240(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// fadds f8,f10,f11
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// stfs f6,128(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmadds f7,f10,f13,f11
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f11.f64));
	// stfs f0,216(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// fmadds f3,f10,f12,f11
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f11.f64));
	// stfs f9,220(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stfs f8,244(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stfs f7,248(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stfs f3,252(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// stfs f6,132(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f6,136(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f6,140(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f5,256(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// stfs f5,260(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// stfs f5,264(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// stfs f5,268(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// stfs f4,160(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f4,164(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f4,168(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f4,172(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f1,224(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f1,228(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stfs f1,232(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stfs f1,236(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// beq cr6,0x83054a40
	if (ctx.cr6.eq) goto loc_83054A40;
	// li r30,112
	ctx.r30.s64 = 112;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r29,64
	ctx.r29.s64 = 64;
	// li r28,80
	ctx.r28.s64 = 80;
	// li r27,96
	ctx.r27.s64 = 96;
	// li r4,48
	ctx.r4.s64 = 48;
	// lvx128 v7,r31,r30
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r30.u32) & ~0xF), VectorMaskL));
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// lvx128 v6,r31,r29
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r29.u32) & ~0xF), VectorMaskL));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lvx128 v5,r31,r28
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r28.u32) & ~0xF), VectorMaskL));
	// addi r30,r1,128
	ctx.r30.s64 = ctx.r1.s64 + 128;
	// lvx128 v4,r31,r27
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r27.u32) & ~0xF), VectorMaskL));
	// addi r28,r1,160
	ctx.r28.s64 = ctx.r1.s64 + 160;
	// lvx128 v0,r31,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r31,r1,192
	ctx.r31.s64 = ctx.r1.s64 + 192;
	// addi r27,r1,224
	ctx.r27.s64 = ctx.r1.s64 + 224;
	// lvx128 v50,r0,r3
	simd::store_shuffled(ctx.v50, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// addi r29,r1,256
	ctx.r29.s64 = ctx.r1.s64 + 256;
	// lvx128 v48,r0,r30
	simd::store_shuffled(ctx.v48, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r1,144
	ctx.r30.s64 = ctx.r1.s64 + 144;
	// lvx128 v46,r0,r28
	simd::store_shuffled(ctx.v46, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// lvx128 v49,r0,r31
	simd::store_shuffled(ctx.v49, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// addi r31,r1,112
	ctx.r31.s64 = ctx.r1.s64 + 112;
	// lvx128 v45,r0,r27
	simd::store_shuffled(ctx.v45, simd::load_and_shuffle(base + ((ctx.r27.u32) & ~0xF), VectorMaskL));
	// addi r26,r1,176
	ctx.r26.s64 = ctx.r1.s64 + 176;
	// addi r28,r1,208
	ctx.r28.s64 = ctx.r1.s64 + 208;
	// lvx128 v47,r0,r29
	simd::store_shuffled(ctx.v47, simd::load_and_shuffle(base + ((ctx.r29.u32) & ~0xF), VectorMaskL));
	// addi r27,r1,240
	ctx.r27.s64 = ctx.r1.s64 + 240;
	// lvx128 v57,r0,r3
	simd::store_shuffled(ctx.v57, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// lvx128 v55,r0,r30
	simd::store_shuffled(ctx.v55, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// li r29,-32
	ctx.r29.s64 = -32;
	// lvx128 v56,r0,r31
	simd::store_shuffled(ctx.v56, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// li r30,-16
	ctx.r30.s64 = -16;
	// lvx128 v54,r0,r26
	simd::store_shuffled(ctx.v54, simd::load_and_shuffle(base + ((ctx.r26.u32) & ~0xF), VectorMaskL));
	// li r31,16
	ctx.r31.s64 = 16;
	// lvx128 v53,r0,r28
	simd::store_shuffled(ctx.v53, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// li r3,32
	ctx.r3.s64 = 32;
	// lvx128 v52,r0,r27
	simd::store_shuffled(ctx.v52, simd::load_and_shuffle(base + ((ctx.r27.u32) & ~0xF), VectorMaskL));
loc_83054984:
	// lvx128 v63,r0,r10
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lvx128 v62,r0,r9
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v63,v63,v57
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v63.f32, _mm_mul_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v57.f32)));
	// lvx128 v61,r0,r8
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v62,v62,v56
	_mm_store_ps(ctx.v62.f32, _mm_mul_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v56.f32)));
	// lvx128 v60,r0,r7
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v61,v61,v55
	_mm_store_ps(ctx.v61.f32, _mm_mul_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v55.f32)));
	// lvx128 v59,r0,r6
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v60,v60,v54
	_mm_store_ps(ctx.v60.f32, _mm_mul_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v54.f32)));
	// lvx128 v58,r0,r5
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v59,v59,v53
	_mm_store_ps(ctx.v59.f32, _mm_mul_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v53.f32)));
	// vmulfp128 v58,v58,v52
	_mm_store_ps(ctx.v58.f32, _mm_mul_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v52.f32)));
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// vaddfp128 v57,v57,v50
	_mm_store_ps(ctx.v57.f32, _mm_add_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v50.f32)));
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// vaddfp128 v56,v56,v49
	_mm_store_ps(ctx.v56.f32, _mm_add_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v49.f32)));
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// vaddfp128 v55,v55,v48
	_mm_store_ps(ctx.v55.f32, _mm_add_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v48.f32)));
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// vaddfp128 v54,v54,v47
	_mm_store_ps(ctx.v54.f32, _mm_add_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v47.f32)));
	// addi r5,r5,16
	ctx.r5.s64 = ctx.r5.s64 + 16;
	// vaddfp128 v53,v53,v46
	_mm_store_ps(ctx.v53.f32, _mm_add_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v46.f32)));
	// vaddfp128 v52,v52,v45
	_mm_store_ps(ctx.v52.f32, _mm_add_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v45.f32)));
	// vperm128 v51,v63,v62,v0
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v44,v63,v62,v7
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vperm128 v63,v61,v60,v0
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v43,v61,v60,v7
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vperm128 v62,v59,v58,v0
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v42,v59,v58,v7
	_mm_store_si128((__m128i*)ctx.v42.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vor128 v61,v44,v44
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_load_si128((__m128i*)ctx.v44.u8));
	// vperm128 v41,v51,v63,v6
	_mm_store_si128((__m128i*)ctx.v41.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// vperm128 v40,v63,v62,v4
	_mm_store_si128((__m128i*)ctx.v40.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// vor128 v63,v43,v43
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_load_si128((__m128i*)ctx.v43.u8));
	// vperm128 v39,v62,v51,v5
	_mm_store_si128((__m128i*)ctx.v39.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vor128 v62,v42,v42
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_load_si128((__m128i*)ctx.v42.u8));
	// vperm128 v38,v61,v63,v6
	_mm_store_si128((__m128i*)ctx.v38.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// vperm128 v37,v62,v61,v5
	_mm_store_si128((__m128i*)ctx.v37.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// stvx128 v41,r11,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v41.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v36,v63,v62,v4
	_mm_store_si128((__m128i*)ctx.v36.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// stvx128 v40,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v40.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v39,r11,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v39.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v38,r11,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v38.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v37,r11,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v37.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v36,r11,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v36.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// bdnz 0x83054984
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83054984;
loc_83054A40:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82fa8d70
	ctx.lr = 0x83054A4C;
	__restfpr_27(ctx, base);
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83054A50"))) PPC_WEAK_FUNC(sub_83054A50);
PPC_FUNC_IMPL(__imp__sub_83054A50) {
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
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830540a0
	ctx.lr = 0x83054A6C;
	sub_830540A0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// sth r10,14(r11)
	PPC_STORE_U16(ctx.r11.u32 + 14, ctx.r10.u16);
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

__attribute__((alias("__imp__sub_83054A8C"))) PPC_WEAK_FUNC(sub_83054A8C);
PPC_FUNC_IMPL(__imp__sub_83054A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83054A90"))) PPC_WEAK_FUNC(sub_83054A90);
PPC_FUNC_IMPL(__imp__sub_83054A90) {
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
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83054140
	ctx.lr = 0x83054AAC;
	sub_83054140(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// sth r10,14(r11)
	PPC_STORE_U16(ctx.r11.u32 + 14, ctx.r10.u16);
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

__attribute__((alias("__imp__sub_83054ACC"))) PPC_WEAK_FUNC(sub_83054ACC);
PPC_FUNC_IMPL(__imp__sub_83054ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83054AD0"))) PPC_WEAK_FUNC(sub_83054AD0);
PPC_FUNC_IMPL(__imp__sub_83054AD0) {
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
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x83054b04
	if (ctx.cr6.eq) goto loc_83054B04;
	// cmplwi cr6,r11,63
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 63, ctx.xer);
	// bne cr6,0x83054b0c
	if (!ctx.cr6.eq) goto loc_83054B0C;
	// bl 0x830542c8
	ctx.lr = 0x83054B00;
	sub_830542C8(ctx, base);
	// b 0x83054b0c
	goto loc_83054B0C;
loc_83054B04:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83054498
	ctx.lr = 0x83054B0C;
	sub_83054498(ctx, base);
loc_83054B0C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// sth r10,14(r11)
	PPC_STORE_U16(ctx.r11.u32 + 14, ctx.r10.u16);
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

__attribute__((alias("__imp__sub_83054B2C"))) PPC_WEAK_FUNC(sub_83054B2C);
PPC_FUNC_IMPL(__imp__sub_83054B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83054B30"))) PPC_WEAK_FUNC(sub_83054B30);
PPC_FUNC_IMPL(__imp__sub_83054B30) {
	PPC_FUNC_PROLOGUE();
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// b 0x830545c8
	sub_830545C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83054B38"))) PPC_WEAK_FUNC(sub_83054B38);
PPC_FUNC_IMPL(__imp__sub_83054B38) {
	PPC_FUNC_PROLOGUE();
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// b 0x830546f8
	sub_830546F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83054B40"))) PPC_WEAK_FUNC(sub_83054B40);
PPC_FUNC_IMPL(__imp__sub_83054B40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,32(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fmuls f10,f11,f1
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// stfs f10,4(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f9,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,8(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f8,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fmuls f5,f6,f1
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f1.f64));
	// stfs f5,12(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f4,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,16(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f3,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f0,f3,f2
	ctx.f0.f64 = double(float(ctx.f3.f64 - ctx.f2.f64));
	// fmuls f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f12,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,24(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f11,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fmuls f8,f9,f1
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// stfs f8,28(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f7,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,32(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f6,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// fmuls f3,f4,f1
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f1.f64));
	// stfs f3,36(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f2,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,40(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f0,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fmuls f11,f12,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// stfs f11,44(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83054BEC"))) PPC_WEAK_FUNC(sub_83054BEC);
PPC_FUNC_IMPL(__imp__sub_83054BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83054BF0"))) PPC_WEAK_FUNC(sub_83054BF0);
PPC_FUNC_IMPL(__imp__sub_83054BF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// addi r9,r11,-12064
	ctx.r9.s64 = ctx.r11.s64 + -12064;
	// addi r8,r10,-14320
	ctx.r8.s64 = ctx.r10.s64 + -14320;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83054C0C"))) PPC_WEAK_FUNC(sub_83054C0C);
PPC_FUNC_IMPL(__imp__sub_83054C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83054C10"))) PPC_WEAK_FUNC(sub_83054C10);
PPC_FUNC_IMPL(__imp__sub_83054C10) {
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
	// addi r30,r3,44
	ctx.r30.s64 = ctx.r3.s64 + 44;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a9c1d0
	ctx.lr = 0x83054C3C;
	sub_82A9C1D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x83054c7c
	if (!ctx.cr6.eq) goto loc_83054C7C;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r6,0
	ctx.r6.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r6,r6,48000
	ctx.r6.u64 = ctx.r6.u64 | 48000;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,48
	ctx.r4.s64 = ctx.r31.s64 + 48;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83054C74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x83054c84
	if (!ctx.cr6.lt) goto loc_83054C84;
loc_83054C7C:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x83054d04
	goto loc_83054D04;
loc_83054C84:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83179ce4
	ctx.lr = 0x83054C8C;
	__imp__XAudioGetSpeakerConfig(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x83054c7c
	if (!ctx.cr6.eq) goto loc_83054C7C;
	// bl 0x830afb90
	ctx.lr = 0x83054C98;
	sub_830AFB90(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,3
	ctx.r10.s64 = 3;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x83054cd0
	if (!ctx.cr6.eq) goto loc_83054CD0;
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83054cc4
	if (ctx.cr6.eq) goto loc_83054CC4;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// b 0x83054cd8
	goto loc_83054CD8;
loc_83054CC4:
	// rlwinm r11,r11,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83054cd8
	if (ctx.cr6.eq) goto loc_83054CD8;
loc_83054CD0:
	// li r11,63
	ctx.r11.s64 = 63;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_83054CD8:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83054cfc
	if (ctx.cr6.eq) goto loc_83054CFC;
loc_83054CE8:
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83054ce8
	if (!ctx.cr6.eq) goto loc_83054CE8;
loc_83054CFC:
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_83054D04:
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

__attribute__((alias("__imp__sub_83054D1C"))) PPC_WEAK_FUNC(sub_83054D1C);
PPC_FUNC_IMPL(__imp__sub_83054D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83054D20"))) PPC_WEAK_FUNC(sub_83054D20);
PPC_FUNC_IMPL(__imp__sub_83054D20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x83054D28;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,17156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17156, ctx.r4.u32);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x83054d50
	if (ctx.cr6.eq) goto loc_83054D50;
	// cmplwi cr6,r11,63
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 63, ctx.xer);
	// bne cr6,0x83054e54
	if (!ctx.cr6.eq) goto loc_83054E54;
loc_83054D50:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// rlwinm r9,r11,2,16,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFC;
	// sth r9,74(r31)
	PPC_STORE_U16(ctx.r31.u32 + 74, ctx.r9.u16);
	// rlwinm r30,r9,11,5,20
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0x7FFF800;
	// lwz r3,-11264(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11264);
	// rlwinm r29,r9,10,6,21
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 10) & 0x3FFFC00;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82fd6b98
	ctx.lr = 0x83054D74;
	sub_82FD6B98(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// beq cr6,0x83054e54
	if (ctx.cr6.eq) goto loc_83054E54;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fa7cf0
	ctx.lr = 0x83054D8C;
	sub_82FA7CF0(ctx, base);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r8,r31,4
	ctx.r8.s64 = ctx.r31.s64 + 4;
	// ori r11,r11,48000
	ctx.r11.u64 = ctx.r11.u64 | 48000;
	// addi r30,r31,52
	ctx.r30.s64 = ctx.r31.s64 + 52;
	// stw r3,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,32
	ctx.r9.s64 = 32;
	// li r6,0
	ctx.r6.s64 = 0;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// sth r9,94(r1)
	PPC_STORE_U16(ctx.r1.u32 + 94, ctx.r9.u16);
	// lis r5,-32233
	ctx.r5.s64 = -2112421888;
	// sth r6,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r6.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f31,24436(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24436);
	ctx.f31.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lhz r31,74(r31)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r31.u32 + 74);
	// sth r3,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r3.u16);
	// mullw r7,r31,r7
	ctx.r7.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r7.s32);
	// sth r31,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r31.u16);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,32(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x83054E20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x83054e54
	if (ctx.cr6.lt) goto loc_83054E54;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83054E44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_83054E54:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83054E64"))) PPC_WEAK_FUNC(sub_83054E64);
PPC_FUNC_IMPL(__imp__sub_83054E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83054E68"))) PPC_WEAK_FUNC(sub_83054E68);
PPC_FUNC_IMPL(__imp__sub_83054E68) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83054E84"))) PPC_WEAK_FUNC(sub_83054E84);
PPC_FUNC_IMPL(__imp__sub_83054E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83054E88"))) PPC_WEAK_FUNC(sub_83054E88);
PPC_FUNC_IMPL(__imp__sub_83054E88) {
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
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83054ec4
	if (ctx.cr6.eq) goto loc_83054EC4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83054EC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83054EC4:
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791a4
	ctx.lr = 0x83054ED0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sth r11,60(r31)
	PPC_STORE_U16(ctx.r31.u32 + 60, ctx.r11.u16);
	// sth r11,62(r31)
	PPC_STORE_U16(ctx.r31.u32 + 62, ctx.r11.u16);
	// sth r11,72(r31)
	PPC_STORE_U16(ctx.r31.u32 + 72, ctx.r11.u16);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// addi r11,r31,64
	ctx.r11.s64 = ctx.r31.s64 + 64;
	// bl 0x831791b4
	ctx.lr = 0x83054EF4;
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

__attribute__((alias("__imp__sub_83054F0C"))) PPC_WEAK_FUNC(sub_83054F0C);
PPC_FUNC_IMPL(__imp__sub_83054F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83054F10"))) PPC_WEAK_FUNC(sub_83054F10);
PPC_FUNC_IMPL(__imp__sub_83054F10) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,76(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 76);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83054F18"))) PPC_WEAK_FUNC(sub_83054F18);
PPC_FUNC_IMPL(__imp__sub_83054F18) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,76(r3)
	PPC_STORE_U8(ctx.r3.u32 + 76, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83054F24"))) PPC_WEAK_FUNC(sub_83054F24);
PPC_FUNC_IMPL(__imp__sub_83054F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83054F28"))) PPC_WEAK_FUNC(sub_83054F28);
PPC_FUNC_IMPL(__imp__sub_83054F28) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83054F54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r9,76(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 76);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x83054f80
	if (!ctx.cr6.eq) goto loc_83054F80;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83054f78
	if (!ctx.cr6.eq) goto loc_83054F78;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83054f80
	if (ctx.cr6.eq) goto loc_83054F80;
loc_83054F78:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83054f84
	goto loc_83054F84;
loc_83054F80:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83054F84:
	// li r9,2
	ctx.r9.s64 = 2;
	// stb r11,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r11.u8);
	// subfc r7,r9,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r7.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r5,31
	ctx.r3.u64 = ctx.r5.u32 & 0x1;
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

__attribute__((alias("__imp__sub_83054FAC"))) PPC_WEAK_FUNC(sub_83054FAC);
PPC_FUNC_IMPL(__imp__sub_83054FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83054FB0"))) PPC_WEAK_FUNC(sub_83054FB0);
PPC_FUNC_IMPL(__imp__sub_83054FB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 72);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83054FC4"))) PPC_WEAK_FUNC(sub_83054FC4);
PPC_FUNC_IMPL(__imp__sub_83054FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83054FC8"))) PPC_WEAK_FUNC(sub_83054FC8);
PPC_FUNC_IMPL(__imp__sub_83054FC8) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 72);
	// subfic r10,r11,2
	ctx.xer.ca = ctx.r11.u32 <= 2;
	ctx.r10.s64 = 2 - ctx.r11.s64;
	// clrlwi r3,r10,16
	ctx.r3.u64 = ctx.r10.u32 & 0xFFFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83054FD8"))) PPC_WEAK_FUNC(sub_83054FD8);
PPC_FUNC_IMPL(__imp__sub_83054FD8) {
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
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83055000:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83055000
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83055000;
	// lhz r11,62(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 62);
	// lhz r10,74(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 74);
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r5,r10,10
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 10);
	// clrlwi r4,r7,16
	ctx.r4.u64 = ctx.r7.u32 & 0xFFFF;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// lwzx r11,r6,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// sth r4,62(r3)
	PPC_STORE_U16(ctx.r3.u32 + 62, ctx.r4.u16);
	// bne cr6,0x83055040
	if (!ctx.cr6.eq) goto loc_83055040;
	// sth r9,62(r3)
	PPC_STORE_U16(ctx.r3.u32 + 62, ctx.r9.u16);
loc_83055040:
	// lhz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 72);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addis r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 65536;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// sth r9,72(r3)
	PPC_STORE_U16(ctx.r3.u32 + 72, ctx.r9.u16);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,84(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 84);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x83055070;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,2
	ctx.r3.s64 = 2;
	// blt cr6,0x83055080
	if (ctx.cr6.lt) goto loc_83055080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83055080:
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

__attribute__((alias("__imp__sub_83055094"))) PPC_WEAK_FUNC(sub_83055094);
PPC_FUNC_IMPL(__imp__sub_83055094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83055098"))) PPC_WEAK_FUNC(sub_83055098);
PPC_FUNC_IMPL(__imp__sub_83055098) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 60);
	// lhz r10,14(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 14);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r6,r8,16
	ctx.r6.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplwi cr6,r6,2
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 2, ctx.xer);
	// lwzx r9,r7,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// sth r6,60(r3)
	PPC_STORE_U16(ctx.r3.u32 + 60, ctx.r6.u16);
	// bne cr6,0x830550c8
	if (!ctx.cr6.eq) goto loc_830550C8;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,60(r3)
	PPC_STORE_U16(ctx.r3.u32 + 60, ctx.r11.u16);
loc_830550C8:
	// lhz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 72);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,72(r3)
	PPC_STORE_U16(ctx.r3.u32 + 72, ctx.r11.u16);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r8,36(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mullw r7,r8,r10
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// li r8,16
	ctx.r8.s64 = 16;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// addi r7,r10,-12096
	ctx.r7.s64 = ctx.r10.s64 + -12096;
	// lvx128 v63,r7,r8
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v62,r0,r7
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
loc_83055124:
	// lvx128 v61,r0,r11
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vminfp128 v60,v63,v61
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v60.f32, _mm_min_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v61.f32)));
	// vmaxfp128 v59,v62,v60
	_mm_store_ps(ctx.v59.f32, _mm_max_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v60.f32)));
	// stvx128 v59,r9,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x83055124
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83055124;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83055140"))) PPC_WEAK_FUNC(sub_83055140);
PPC_FUNC_IMPL(__imp__sub_83055140) {
	PPC_FUNC_PROLOGUE();
	// lhz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 60);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r5,r7,16
	ctx.r5.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// lwzx r3,r6,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// sth r5,60(r11)
	PPC_STORE_U16(ctx.r11.u32 + 60, ctx.r5.u16);
	// bne cr6,0x83055174
	if (!ctx.cr6.eq) goto loc_83055174;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,60(r11)
	PPC_STORE_U16(ctx.r11.u32 + 60, ctx.r10.u16);
loc_83055174:
	// lhz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 72);
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r8,74(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 74);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// mullw r5,r8,r9
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// sth r7,72(r11)
	PPC_STORE_U16(ctx.r11.u32 + 72, ctx.r7.u16);
	// b 0x82fa7cf0
	sub_82FA7CF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83055190"))) PPC_WEAK_FUNC(sub_83055190);
PPC_FUNC_IMPL(__imp__sub_83055190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x83055198;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791a4
	ctx.lr = 0x830551AC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r29,r31,-4
	ctx.r29.s64 = ctx.r31.s64 + -4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83054f28
	ctx.lr = 0x830551B8;
	sub_83054F28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830551d4
	if (ctx.cr6.eq) goto loc_830551D4;
	// lhz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x830551d8
	if (!ctx.cr6.eq) goto loc_830551D8;
loc_830551D4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830551D8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830551ec
	if (ctx.cr6.eq) goto loc_830551EC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83054fd8
	ctx.lr = 0x830551EC;
	sub_83054FD8(ctx, base);
loc_830551EC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791b4
	ctx.lr = 0x830551F4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lwz r3,17156(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17156);
	// bl 0x82a776a8
	ctx.lr = 0x83055200;
	sub_82A776A8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83055208"))) PPC_WEAK_FUNC(sub_83055208);
PPC_FUNC_IMPL(__imp__sub_83055208) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305520C"))) PPC_WEAK_FUNC(sub_8305520C);
PPC_FUNC_IMPL(__imp__sub_8305520C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83055210"))) PPC_WEAK_FUNC(sub_83055210);
PPC_FUNC_IMPL(__imp__sub_83055210) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83055214"))) PPC_WEAK_FUNC(sub_83055214);
PPC_FUNC_IMPL(__imp__sub_83055214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83055218"))) PPC_WEAK_FUNC(sub_83055218);
PPC_FUNC_IMPL(__imp__sub_83055218) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305521C"))) PPC_WEAK_FUNC(sub_8305521C);
PPC_FUNC_IMPL(__imp__sub_8305521C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83055220"))) PPC_WEAK_FUNC(sub_83055220);
PPC_FUNC_IMPL(__imp__sub_83055220) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83055224"))) PPC_WEAK_FUNC(sub_83055224);
PPC_FUNC_IMPL(__imp__sub_83055224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83055228"))) PPC_WEAK_FUNC(sub_83055228);
PPC_FUNC_IMPL(__imp__sub_83055228) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305522C"))) PPC_WEAK_FUNC(sub_8305522C);
PPC_FUNC_IMPL(__imp__sub_8305522C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83055230"))) PPC_WEAK_FUNC(sub_83055230);
PPC_FUNC_IMPL(__imp__sub_83055230) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83055234"))) PPC_WEAK_FUNC(sub_83055234);
PPC_FUNC_IMPL(__imp__sub_83055234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83055238"))) PPC_WEAK_FUNC(sub_83055238);
PPC_FUNC_IMPL(__imp__sub_83055238) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83055240"))) PPC_WEAK_FUNC(sub_83055240);
PPC_FUNC_IMPL(__imp__sub_83055240) {
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
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// addi r9,r11,-12036
	ctx.r9.s64 = ctx.r11.s64 + -12036;
	// addi r8,r10,-12064
	ctx.r8.s64 = ctx.r10.s64 + -12064;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// bl 0x831791c4
	ctx.lr = 0x83055274;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r31,64
	ctx.r10.s64 = ctx.r31.s64 + 64;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// sth r11,74(r31)
	PPC_STORE_U16(ctx.r31.u32 + 74, ctx.r11.u16);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stb r11,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r11.u8);
	// sth r11,60(r31)
	PPC_STORE_U16(ctx.r31.u32 + 60, ctx.r11.u16);
	// sth r11,62(r31)
	PPC_STORE_U16(ctx.r31.u32 + 62, ctx.r11.u16);
	// sth r11,72(r31)
	PPC_STORE_U16(ctx.r31.u32 + 72, ctx.r11.u16);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_830552C4"))) PPC_WEAK_FUNC(sub_830552C4);
PPC_FUNC_IMPL(__imp__sub_830552C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830552C8"))) PPC_WEAK_FUNC(sub_830552C8);
PPC_FUNC_IMPL(__imp__sub_830552C8) {
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
	// bl 0x83054e88
	ctx.lr = 0x830552E4;
	sub_83054E88(ctx, base);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83055308
	if (ctx.cr6.eq) goto loc_83055308;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83055304;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
loc_83055308:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83055328
	if (ctx.cr6.eq) goto loc_83055328;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83055324;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
loc_83055328:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83055348
	if (ctx.cr6.eq) goto loc_83055348;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83055344;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
loc_83055348:
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83055364
	if (ctx.cr6.eq) goto loc_83055364;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// lwz r3,-11264(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11264);
	// bl 0x82fd6cc8
	ctx.lr = 0x83055360;
	sub_82FD6CC8(ctx, base);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
loc_83055364:
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

__attribute__((alias("__imp__sub_8305537C"))) PPC_WEAK_FUNC(sub_8305537C);
PPC_FUNC_IMPL(__imp__sub_8305537C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83055380"))) PPC_WEAK_FUNC(sub_83055380);
PPC_FUNC_IMPL(__imp__sub_83055380) {
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
	// lis r30,-31969
	ctx.r30.s64 = -2095120384;
	// li r4,80
	ctx.r4.s64 = 80;
	// lwz r3,-11264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -11264);
	// bl 0x82fd6b98
	ctx.lr = 0x830553A4;
	sub_82FD6B98(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830553f8
	if (ctx.cr6.eq) goto loc_830553F8;
	// bl 0x83055240
	ctx.lr = 0x830553B0;
	sub_83055240(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830553f8
	if (ctx.cr6.eq) goto loc_830553F8;
	// bl 0x83054c10
	ctx.lr = 0x830553C0;
	sub_83054C10(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x830553fc
	if (ctx.cr6.eq) goto loc_830553FC;
	// bl 0x830552c8
	ctx.lr = 0x830553D0;
	sub_830552C8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r30,-11264(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + -11264);
	// bctrl 
	ctx.lr = 0x830553EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fd6cc8
	ctx.lr = 0x830553F8;
	sub_82FD6CC8(ctx, base);
loc_830553F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830553FC:
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

__attribute__((alias("__imp__sub_83055414"))) PPC_WEAK_FUNC(sub_83055414);
PPC_FUNC_IMPL(__imp__sub_83055414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83055418"))) PPC_WEAK_FUNC(sub_83055418);
PPC_FUNC_IMPL(__imp__sub_83055418) {
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
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// addi r9,r11,-12064
	ctx.r9.s64 = ctx.r11.s64 + -12064;
	// addi r8,r10,-14320
	ctx.r8.s64 = ctx.r10.s64 + -14320;
	// clrlwi r7,r4,31
	ctx.r7.u64 = ctx.r4.u32 & 0x1;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x83055458
	if (ctx.cr6.eq) goto loc_83055458;
	// bl 0x82691540
	ctx.lr = 0x83055454;
	sub_82691540(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83055458:
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

__attribute__((alias("__imp__sub_8305546C"))) PPC_WEAK_FUNC(sub_8305546C);
PPC_FUNC_IMPL(__imp__sub_8305546C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83055470"))) PPC_WEAK_FUNC(sub_83055470);
PPC_FUNC_IMPL(__imp__sub_83055470) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x83055478;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x83053eb0
	ctx.lr = 0x83055490;
	sub_83053EB0(ctx, base);
	// lbz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r30,0
	ctx.r30.s64 = 0;
	// clrlwi r9,r10,26
	ctx.r9.u64 = ctx.r10.u32 & 0x3F;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stb r9,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r9.u8);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// li r5,43
	ctx.r5.s64 = 43;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// li r4,17
	ctx.r4.s64 = 17;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// lfs f0,24436(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24436);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// lfs f13,5184(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5184);
	ctx.f13.f64 = double(temp.f32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// addi r29,r31,256
	ctx.r29.s64 = ctx.r31.s64 + 256;
	// lbz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 64);
	// clrlwi r9,r10,26
	ctx.r9.u64 = ctx.r10.u32 & 0x3F;
	// stb r9,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r9.u8);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// lbz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 84);
	// clrlwi r7,r8,26
	ctx.r7.u64 = ctx.r8.u32 & 0x3F;
	// stb r7,84(r31)
	PPC_STORE_U8(ctx.r31.u32 + 84, ctx.r7.u8);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// lbz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 104);
	// clrlwi r9,r10,26
	ctx.r9.u64 = ctx.r10.u32 & 0x3F;
	// stb r9,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r9.u8);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lbz r8,108(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 108);
	// clrlwi r7,r8,26
	ctx.r7.u64 = ctx.r8.u32 & 0x3F;
	// stb r7,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r7.u8);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f13,20(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f13,24(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stw r6,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r6.u32);
	// stw r30,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r30.u32);
	// sth r30,270(r31)
	PPC_STORE_U16(ctx.r31.u32 + 270, ctx.r30.u16);
	// sth r30,268(r31)
	PPC_STORE_U16(ctx.r31.u32 + 268, ctx.r30.u16);
	// stw r5,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r5.u32);
	// stw r4,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r4.u32);
	// beq cr6,0x83055590
	if (ctx.cr6.eq) goto loc_83055590;
loc_8305557C:
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8305557c
	if (!ctx.cr6.eq) goto loc_8305557C;
loc_83055590:
	// rlwinm r4,r10,12,0,19
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFFF000;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stw r4,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r4.u32);
	// lwz r3,-11264(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11264);
	// bl 0x82fd6b98
	ctx.lr = 0x830555A4;
	sub_82FD6B98(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x830555bc
	if (!ctx.cr6.eq) goto loc_830555BC;
	// li r3,52
	ctx.r3.s64 = 52;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
loc_830555BC:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,336(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a75988
	ctx.lr = 0x830555CC;
	sub_82A75988(ctx, base);
	// li r11,1024
	ctx.r11.s64 = 1024;
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// sth r11,12(r29)
	PPC_STORE_U16(ctx.r29.u32 + 12, ctx.r11.u16);
	// sth r30,14(r29)
	PPC_STORE_U16(ctx.r29.u32 + 14, ctx.r30.u16);
	// stw r28,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r28.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830555EC"))) PPC_WEAK_FUNC(sub_830555EC);
PPC_FUNC_IMPL(__imp__sub_830555EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830555F0"))) PPC_WEAK_FUNC(sub_830555F0);
PPC_FUNC_IMPL(__imp__sub_830555F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x830555F8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// bl 0x83053ee8
	ctx.lr = 0x83055608;
	sub_83053EE8(ctx, base);
	// lwz r4,256(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r25,-31969
	ctx.r25.s64 = -2095120384;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83055628
	if (ctx.cr6.eq) goto loc_83055628;
	// lwz r3,-11264(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -11264);
	// bl 0x82fd6cc8
	ctx.lr = 0x83055624;
	sub_82FD6CC8(ctx, base);
	// stw r28,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r28.u32);
loc_83055628:
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r31,r31,36
	ctx.r31.s64 = ctx.r31.s64 + 36;
	// li r24,4
	ctx.r24.s64 = 4;
	// addi r27,r10,-11124
	ctx.r27.s64 = ctx.r10.s64 + -11124;
	// addi r26,r11,15888
	ctx.r26.s64 = ctx.r11.s64 + 15888;
loc_83055640:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83055664
	if (ctx.cr6.eq) goto loc_83055664;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83055660;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_83055664:
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8305569c
	if (ctx.cr6.eq) goto loc_8305569C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r29,-11264(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + -11264);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8305568C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fd6cc8
	ctx.lr = 0x83055698;
	sub_82FD6CC8(ctx, base);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
loc_8305569C:
	// lwz r4,-4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x830556d4
	if (ctx.cr6.eq) goto loc_830556D4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83056cb0
	ctx.lr = 0x830556B0;
	sub_83056CB0(ctx, base);
	// bl 0x8301dd80
	ctx.lr = 0x830556B4;
	sub_8301DD80(ctx, base);
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830556CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r28.u32);
	// bl 0x8301dd90
	ctx.lr = 0x830556D4;
	sub_8301DD90(ctx, base);
loc_830556D4:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// bne 0x83055640
	if (!ctx.cr0.eq) goto loc_83055640;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830556EC"))) PPC_WEAK_FUNC(sub_830556EC);
PPC_FUNC_IMPL(__imp__sub_830556EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830556F0"))) PPC_WEAK_FUNC(sub_830556F0);
PPC_FUNC_IMPL(__imp__sub_830556F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,15888
	ctx.r3.s64 = ctx.r11.s64 + 15888;
	// b 0x83056b50
	sub_83056B50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830556FC"))) PPC_WEAK_FUNC(sub_830556FC);
PPC_FUNC_IMPL(__imp__sub_830556FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83055700"))) PPC_WEAK_FUNC(sub_83055700);
PPC_FUNC_IMPL(__imp__sub_83055700) {
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
	// lwz r10,264(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,17
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 17, ctx.xer);
	// sth r9,270(r3)
	PPC_STORE_U16(ctx.r3.u32 + 270, ctx.r9.u16);
	// li r10,2
	ctx.r10.s64 = 2;
	// beq cr6,0x8305572c
	if (ctx.cr6.eq) goto loc_8305572C;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8305572C:
	// stw r10,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r10.u32);
	// li r10,17
	ctx.r10.s64 = 17;
	// lwz r3,256(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// stw r10,264(r11)
	PPC_STORE_U32(ctx.r11.u32 + 264, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83055750
	if (ctx.cr6.eq) goto loc_83055750;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,336(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// bl 0x82a75988
	ctx.lr = 0x83055750;
	sub_82A75988(ctx, base);
loc_83055750:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83055764"))) PPC_WEAK_FUNC(sub_83055764);
PPC_FUNC_IMPL(__imp__sub_83055764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83055768"))) PPC_WEAK_FUNC(sub_83055768);
PPC_FUNC_IMPL(__imp__sub_83055768) {
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
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x83055808
	if (ctx.cr6.eq) goto loc_83055808;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r30,r11,15888
	ctx.r30.s64 = ctx.r11.s64 + 15888;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83056c30
	ctx.lr = 0x8305579C;
	sub_83056C30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830557d0
	if (!ctx.cr6.eq) goto loc_830557D0;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,24436(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5184(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f13,20(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f13,24(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// b 0x83055804
	goto loc_83055804;
loc_830557D0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83056b70
	ctx.lr = 0x830557D8;
	sub_83056B70(ctx, base);
	// stfs f1,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// bl 0x8304ff60
	ctx.lr = 0x830557E0;
	sub_8304FF60(ctx, base);
	// stfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83056b90
	ctx.lr = 0x830557EC;
	sub_83056B90(ctx, base);
	// stfs f1,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// bl 0x8304ff60
	ctx.lr = 0x830557F4;
	sub_8304FF60(ctx, base);
	// stfs f1,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmr f0,f1
	ctx.f0.f64 = ctx.f1.f64;
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_83055804:
	// stfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
loc_83055808:
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

__attribute__((alias("__imp__sub_83055820"))) PPC_WEAK_FUNC(sub_83055820);
PPC_FUNC_IMPL(__imp__sub_83055820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7654
	ctx.lr = 0x83055828;
	__savegprlr_19(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	ctx.r25.s64 = 0;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// mr r22,r25
	ctx.r22.u64 = ctx.r25.u64;
	// addi r27,r3,36
	ctx.r27.s64 = ctx.r3.s64 + 36;
	// li r20,-1
	ctx.r20.s64 = -1;
	// ori r21,r9,48000
	ctx.r21.u64 = ctx.r9.u64 | 48000;
	// lis r23,-31969
	ctx.r23.s64 = -2095120384;
	// addi r26,r11,-11124
	ctx.r26.s64 = ctx.r11.s64 + -11124;
	// addi r24,r10,15888
	ctx.r24.s64 = ctx.r10.s64 + 15888;
loc_83055860:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r30,r27,-8
	ctx.r30.s64 = ctx.r27.s64 + -8;
	// bl 0x83056bc8
	ctx.lr = 0x83055874;
	sub_83056BC8(ctx, base);
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830558d0
	if (ctx.cr6.eq) goto loc_830558D0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83055894;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,4(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x830558cc
	if (ctx.cr6.eq) goto loc_830558CC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,-11264(r23)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r23.u32 + -11264);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830558BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fd6cc8
	ctx.lr = 0x830558C8;
	sub_82FD6CC8(ctx, base);
	// stw r25,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r25.u32);
loc_830558CC:
	// stw r25,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r25.u32);
loc_830558D0:
	// lwz r4,-4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4);
	// stw r20,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r20.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8305590c
	if (ctx.cr6.eq) goto loc_8305590C;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83056cb0
	ctx.lr = 0x830558E8;
	sub_83056CB0(ctx, base);
	// bl 0x8301dd80
	ctx.lr = 0x830558EC;
	sub_8301DD80(ctx, base);
	// lwz r3,-4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83055904;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r25,-4(r27)
	PPC_STORE_U32(ctx.r27.u32 + -4, ctx.r25.u32);
	// bl 0x8301dd90
	ctx.lr = 0x8305590C;
	sub_8301DD90(ctx, base);
loc_8305590C:
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x83055b30
	if (ctx.cr6.eq) goto loc_83055B30;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x830453f0
	ctx.lr = 0x83055924;
	sub_830453F0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83055b5c
	if (!ctx.cr6.eq) goto loc_83055B5C;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83055944;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,-4(r27)
	PPC_STORE_U32(ctx.r27.u32 + -4, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8305595c
	if (!ctx.cr6.eq) goto loc_8305595C;
	// li r28,2
	ctx.r28.s64 = 2;
	// b 0x83055a98
	goto loc_83055A98;
loc_8305595C:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// bl 0x83056cc0
	ctx.lr = 0x83055968;
	sub_83056CC0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83055a98
	if (!ctx.cr6.eq) goto loc_83055A98;
	// lwz r9,132(r19)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r19.u32 + 132);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8305599c
	if (ctx.cr6.eq) goto loc_8305599C;
loc_83055988:
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// and r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83055988
	if (!ctx.cr6.eq) goto loc_83055988;
loc_8305599C:
	// rlwinm r11,r10,5,24,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xE0;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r9,r9,14,0,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0xFFFFC000;
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r21.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// or r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 | ctx.r9.u64;
	// ori r7,r8,8195
	ctx.r7.u64 = ctx.r8.u64 | 8195;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r3,-11264(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -11264);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// bl 0x82fd6b98
	ctx.lr = 0x830559C8;
	sub_82FD6B98(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830559dc
	if (ctx.cr6.eq) goto loc_830559DC;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x8306cc58
	ctx.lr = 0x830559D8;
	sub_8306CC58(ctx, base);
	// b 0x830559e0
	goto loc_830559E0;
loc_830559DC:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_830559E0:
	// li r28,2
	ctx.r28.s64 = 2;
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83055a98
	if (ctx.cr6.eq) goto loc_83055A98;
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lbz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 108);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwimi r11,r10,7,17,24
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 7) & 0x7F80) | (ctx.r11.u64 & 0xFFFFFFFFFFFF807F);
	// stb r11,16(r30)
	PPC_STORE_U8(ctx.r30.u32 + 16, ctx.r11.u8);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x83055A18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r5,93(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 93);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x83055a30
	if (ctx.cr6.eq) goto loc_83055A30;
	// li r28,2
	ctx.r28.s64 = 2;
	// b 0x83055a98
	goto loc_83055A98;
loc_83055A30:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bne cr6,0x83055a98
	if (!ctx.cr6.eq) goto loc_83055A98;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x83055a4c
	if (!ctx.cr6.eq) goto loc_83055A4C;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
loc_83055A4C:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83055A6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83055a98
	if (!ctx.cr6.eq) goto loc_83055A98;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83055A8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x83055b30
	if (ctx.cr6.eq) goto loc_83055B30;
loc_83055A98:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83055abc
	if (ctx.cr6.eq) goto loc_83055ABC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83055AB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r25,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r25.u32);
loc_83055ABC:
	// lwz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83055af4
	if (ctx.cr6.eq) goto loc_83055AF4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,-11264(r23)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r23.u32 + -11264);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83055AE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fd6cc8
	ctx.lr = 0x83055AF0;
	sub_82FD6CC8(ctx, base);
	// stw r25,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r25.u32);
loc_83055AF4:
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r20,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r20.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83055b30
	if (ctx.cr6.eq) goto loc_83055B30;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83056cb0
	ctx.lr = 0x83055B0C;
	sub_83056CB0(ctx, base);
	// bl 0x8301dd80
	ctx.lr = 0x83055B10;
	sub_8301DD80(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83055B28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r25,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r25.u32);
	// bl 0x8301dd90
	ctx.lr = 0x83055B30;
	sub_8301DD90(ctx, base);
loc_83055B30:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r27,r27,20
	ctx.r27.s64 = ctx.r27.s64 + 20;
	// cmplwi cr6,r22,4
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 4, ctx.xer);
	// blt cr6,0x83055860
	if (ctx.cr6.lt) goto loc_83055860;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83056c08
	ctx.lr = 0x83055B48;
	sub_83056C08(ctx, base);
	// lbz r11,108(r19)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r19.u32 + 108);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwimi r11,r10,7,17,24
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 7) & 0x7F80) | (ctx.r11.u64 & 0xFFFFFFFFFFFF807F);
	// stb r11,108(r19)
	PPC_STORE_U8(ctx.r19.u32 + 108, ctx.r11.u8);
loc_83055B5C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82fa76a4
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83055B64"))) PPC_WEAK_FUNC(sub_83055B64);
PPC_FUNC_IMPL(__imp__sub_83055B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83055B68"))) PPC_WEAK_FUNC(sub_83055B68);
PPC_FUNC_IMPL(__imp__sub_83055B68) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r5,31
	ctx.r11.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83055b80
	if (ctx.cr6.eq) goto loc_83055B80;
	// lbz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 44);
	// rlwimi r11,r4,7,0,24
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 7) & 0xFFFFFF80) | (ctx.r11.u64 & 0xFFFFFFFF0000007F);
	// stb r11,44(r3)
	PPC_STORE_U8(ctx.r3.u32 + 44, ctx.r11.u8);
loc_83055B80:
	// rlwinm r11,r5,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83055b98
	if (ctx.cr6.eq) goto loc_83055B98;
	// lbz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 64);
	// rlwimi r11,r4,6,18,24
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 6) & 0x3F80) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC07F);
	// stb r11,64(r3)
	PPC_STORE_U8(ctx.r3.u32 + 64, ctx.r11.u8);
loc_83055B98:
	// rlwinm r11,r5,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83055bb0
	if (ctx.cr6.eq) goto loc_83055BB0;
	// lbz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 84);
	// rlwimi r11,r4,5,19,24
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 5) & 0x1F80) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE07F);
	// stb r11,84(r3)
	PPC_STORE_U8(ctx.r3.u32 + 84, ctx.r11.u8);
loc_83055BB0:
	// rlwinm r11,r5,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83055bc8
	if (ctx.cr6.eq) goto loc_83055BC8;
	// lbz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 104);
	// rlwimi r11,r4,4,20,24
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 4) & 0xF80) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF07F);
	// stb r11,104(r3)
	PPC_STORE_U8(ctx.r3.u32 + 104, ctx.r11.u8);
loc_83055BC8:
	// rlwinm r11,r5,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 108);
	// rlwimi r11,r4,3,21,24
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 3) & 0x780) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF87F);
	// stb r11,108(r3)
	PPC_STORE_U8(ctx.r3.u32 + 108, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83055BE4"))) PPC_WEAK_FUNC(sub_83055BE4);
PPC_FUNC_IMPL(__imp__sub_83055BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83055BE8"))) PPC_WEAK_FUNC(sub_83055BE8);
PPC_FUNC_IMPL(__imp__sub_83055BE8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x83055c0c
	if (!ctx.cr6.eq) goto loc_83055C0C;
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// blr 
	return;
loc_83055C0C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83055C14"))) PPC_WEAK_FUNC(sub_83055C14);
PPC_FUNC_IMPL(__imp__sub_83055C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83055C18"))) PPC_WEAK_FUNC(sub_83055C18);
PPC_FUNC_IMPL(__imp__sub_83055C18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x83055C20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// lhz r10,14(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 14);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83055ca4
	if (ctx.cr6.eq) goto loc_83055CA4;
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// li r10,45
	ctx.r10.s64 = 45;
	// stw r10,264(r3)
	PPC_STORE_U32(ctx.r3.u32 + 264, ctx.r10.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x83055c58
	if (!ctx.cr6.eq) goto loc_83055C58;
	// bl 0x83055820
	ctx.lr = 0x83055C58;
	sub_83055820(ctx, base);
loc_83055C58:
	// stw r29,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r29.u32);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x83055c98
	if (ctx.cr6.eq) goto loc_83055C98;
	// cmplwi cr6,r11,63
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 63, ctx.xer);
	// beq cr6,0x83055c80
	if (ctx.cr6.eq) goto loc_83055C80;
	// li r3,46
	ctx.r3.s64 = 46;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_83055C80:
	// addi r5,r31,256
	ctx.r5.s64 = ctx.r31.s64 + 256;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x83054a90
	ctx.lr = 0x83055C8C;
	sub_83054A90(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_83055C98:
	// addi r5,r31,256
	ctx.r5.s64 = ctx.r31.s64 + 256;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x83054a50
	ctx.lr = 0x83055CA4;
	sub_83054A50(ctx, base);
loc_83055CA4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83055CB0"))) PPC_WEAK_FUNC(sub_83055CB0);
PPC_FUNC_IMPL(__imp__sub_83055CB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x83055CB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x83055d64
	if (!ctx.cr6.eq) goto loc_83055D64;
	// addi r30,r3,44
	ctx.r30.s64 = ctx.r3.s64 + 44;
	// li r29,4
	ctx.r29.s64 = 4;
loc_83055CD8:
	// lwz r3,-8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83055d40
	if (ctx.cr6.eq) goto loc_83055D40;
	// lbz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// lbz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 108);
	// or r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r8,r11,0,24,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x83055d14
	if (!ctx.cr6.eq) goto loc_83055D14;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,256
	ctx.r4.s64 = ctx.r31.s64 + 256;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83055D10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x83055d30
	goto loc_83055D30;
loc_83055D14:
	// rlwinm r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83055d30
	if (!ctx.cr6.eq) goto loc_83055D30;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83055D30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83055D30:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,31,25,25
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 31) & 0x40) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFBF);
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
loc_83055D40:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// bne 0x83055cd8
	if (!ctx.cr0.eq) goto loc_83055CD8;
	// lbz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 108);
	// lhz r10,268(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 268);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r9,r11,31,25,25
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 31) & 0x40) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFBF);
	// stb r9,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r9.u8);
	// sth r10,14(r28)
	PPC_STORE_U16(ctx.r28.u32 + 14, ctx.r10.u16);
loc_83055D64:
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lfs f13,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r11,r31,272
	ctx.r11.s64 = ctx.r31.s64 + 272;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfs f0,24436(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24436);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsel f11,f12,f0,f13
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx128 v63,r0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v62,v63,0
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v62,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fsel f8,f9,f0,f10
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f0.f64 : ctx.f10.f64;
	// stfs f8,80(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx128 v61,r0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v60,v61,0
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), 0xFF));
	// stvx128 v60,r10,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v60,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f7,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// fsel f5,f6,f0,f7
	ctx.f5.f64 = ctx.f6.f64 >= 0.0 ? ctx.f0.f64 : ctx.f7.f64;
	// stfs f5,292(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 292, temp.u32);
	// lfs f4,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f0.f64));
	// fsel f2,f3,f0,f4
	ctx.f2.f64 = ctx.f3.f64 >= 0.0 ? ctx.f0.f64 : ctx.f4.f64;
	// stfs f2,324(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 324, temp.u32);
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x83055e08
	if (ctx.cr6.eq) goto loc_83055E08;
	// cmplwi cr6,r11,63
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 63, ctx.xer);
	// bne cr6,0x83055e18
	if (!ctx.cr6.eq) goto loc_83055E18;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r31,256
	ctx.r4.s64 = ctx.r31.s64 + 256;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x83054b38
	ctx.lr = 0x83055E04;
	sub_83054B38(ctx, base);
	// b 0x83055e18
	goto loc_83055E18;
loc_83055E08:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r31,256
	ctx.r4.s64 = ctx.r31.s64 + 256;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x83054b30
	ctx.lr = 0x83055E18;
	sub_83054B30(ctx, base);
loc_83055E18:
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83055E30"))) PPC_WEAK_FUNC(sub_83055E30);
PPC_FUNC_IMPL(__imp__sub_83055E30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x83055E38;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// bl 0x83053ee8
	ctx.lr = 0x83055E48;
	sub_83053EE8(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r31,r26,36
	ctx.r31.s64 = ctx.r26.s64 + 36;
	// li r24,4
	ctx.r24.s64 = 4;
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r25,-31969
	ctx.r25.s64 = -2095120384;
	// addi r27,r11,-11124
	ctx.r27.s64 = ctx.r11.s64 + -11124;
loc_83055E60:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83055e84
	if (ctx.cr6.eq) goto loc_83055E84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83055E80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_83055E84:
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83055ebc
	if (ctx.cr6.eq) goto loc_83055EBC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r29,-11264(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + -11264);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83055EAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fd6cc8
	ctx.lr = 0x83055EB8;
	sub_82FD6CC8(ctx, base);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
loc_83055EBC:
	// lwz r4,-4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83055ef4
	if (ctx.cr6.eq) goto loc_83055EF4;
	// addi r3,r26,112
	ctx.r3.s64 = ctx.r26.s64 + 112;
	// bl 0x83056cb0
	ctx.lr = 0x83055ED0;
	sub_83056CB0(ctx, base);
	// bl 0x8301dd80
	ctx.lr = 0x83055ED4;
	sub_8301DD80(ctx, base);
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83055EEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r28.u32);
	// bl 0x8301dd90
	ctx.lr = 0x83055EF4;
	sub_8301DD90(ctx, base);
loc_83055EF4:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// bne 0x83055e60
	if (!ctx.cr0.eq) goto loc_83055E60;
	// lwz r4,256(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 256);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83055f18
	if (ctx.cr6.eq) goto loc_83055F18;
	// lwz r3,-11264(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -11264);
	// bl 0x82fd6cc8
	ctx.lr = 0x83055F14;
	sub_82FD6CC8(ctx, base);
	// stw r28,256(r26)
	PPC_STORE_U32(ctx.r26.u32 + 256, ctx.r28.u32);
loc_83055F18:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83055F24"))) PPC_WEAK_FUNC(sub_83055F24);
PPC_FUNC_IMPL(__imp__sub_83055F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83055F28"))) PPC_WEAK_FUNC(sub_83055F28);
PPC_FUNC_IMPL(__imp__sub_83055F28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,256(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// li r11,4
	ctx.r11.s64 = 4;
	// beq cr6,0x83055f48
	if (ctx.cr6.eq) goto loc_83055F48;
	// li r11,1
	ctx.r11.s64 = 1;
loc_83055F48:
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// li r11,17
	ctx.r11.s64 = 17;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,264(r3)
	PPC_STORE_U32(ctx.r3.u32 + 264, ctx.r11.u32);
	// sth r10,270(r3)
	PPC_STORE_U16(ctx.r3.u32 + 270, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83055F60"))) PPC_WEAK_FUNC(sub_83055F60);
PPC_FUNC_IMPL(__imp__sub_83055F60) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,368(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 368);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,368(r3)
	PPC_STORE_U32(ctx.r3.u32 + 368, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83055F70"))) PPC_WEAK_FUNC(sub_83055F70);
PPC_FUNC_IMPL(__imp__sub_83055F70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7644
	ctx.lr = 0x83055F78;
	__savegprlr_15(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	ctx.r24.s64 = 0;
	// stw r4,364(r3)
	PPC_STORE_U32(ctx.r3.u32 + 364, ctx.r4.u32);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r17,r4
	ctx.r17.u64 = ctx.r4.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// mr r20,r24
	ctx.r20.u64 = ctx.r24.u64;
	// addi r23,r3,112
	ctx.r23.s64 = ctx.r3.s64 + 112;
	// addi r27,r3,36
	ctx.r27.s64 = ctx.r3.s64 + 36;
	// li r16,-2
	ctx.r16.s64 = -2;
	// li r18,-1
	ctx.r18.s64 = -1;
	// ori r19,r10,48000
	ctx.r19.u64 = ctx.r10.u64 | 48000;
	// lis r15,-31958
	ctx.r15.s64 = -2094399488;
	// lis r22,-31969
	ctx.r22.s64 = -2095120384;
	// addi r26,r11,-11124
	ctx.r26.s64 = ctx.r11.s64 + -11124;
loc_83055FBC:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r29,r27,-8
	ctx.r29.s64 = ctx.r27.s64 + -8;
	// bl 0x83056bc8
	ctx.lr = 0x83055FD0;
	sub_83056BC8(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,-8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + -8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x830562f0
	if (ctx.cr6.eq) goto loc_830562F0;
	// subf r11,r11,r16
	ctx.r11.s64 = ctx.r16.s64 - ctx.r11.s64;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// rlwinm r25,r10,27,31,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// beq cr6,0x83056048
	if (ctx.cr6.eq) goto loc_83056048;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8305600C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r24,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r24.u32);
	// lwz r31,4(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83056048
	if (ctx.cr6.eq) goto loc_83056048;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,-11264(r22)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r22.u32 + -11264);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83056038;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fd6cc8
	ctx.lr = 0x83056044;
	sub_82FD6CC8(ctx, base);
	// stw r24,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r24.u32);
loc_83056048:
	// lwz r4,-4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4);
	// stw r18,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r18.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83056084
	if (ctx.cr6.eq) goto loc_83056084;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83056cb0
	ctx.lr = 0x83056060;
	sub_83056CB0(ctx, base);
	// bl 0x8301dd80
	ctx.lr = 0x83056064;
	sub_8301DD80(ctx, base);
	// lwz r3,-4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8305607C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r24,-4(r27)
	PPC_STORE_U32(ctx.r27.u32 + -4, ctx.r24.u32);
	// bl 0x8301dd90
	ctx.lr = 0x83056084;
	sub_8301DD90(ctx, base);
loc_83056084:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x830562f0
	if (ctx.cr6.eq) goto loc_830562F0;
	// clrlwi r31,r25,24
	ctx.r31.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x830560b8
	if (ctx.cr6.eq) goto loc_830560B8;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// lwz r3,15200(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + 15200);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// bl 0x83046ff0
	ctx.lr = 0x830560B0;
	sub_83046FF0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8305631c
	if (!ctx.cr6.eq) goto loc_8305631C;
loc_830560B8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x830453f0
	ctx.lr = 0x830560C8;
	sub_830453F0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8305631c
	if (!ctx.cr6.eq) goto loc_8305631C;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830560E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,-4(r27)
	PPC_STORE_U32(ctx.r27.u32 + -4, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x83056100
	if (!ctx.cr6.eq) goto loc_83056100;
	// li r28,2
	ctx.r28.s64 = 2;
	// b 0x83056258
	goto loc_83056258;
loc_83056100:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// beq cr6,0x83056118
	if (ctx.cr6.eq) goto loc_83056118;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// bl 0x83056d88
	ctx.lr = 0x83056114;
	sub_83056D88(ctx, base);
	// b 0x83056120
	goto loc_83056120;
loc_83056118:
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// bl 0x83056cc0
	ctx.lr = 0x83056120;
	sub_83056CC0(ctx, base);
loc_83056120:
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83056258
	if (!ctx.cr6.eq) goto loc_83056258;
	// lwz r9,132(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 132);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83056154
	if (ctx.cr6.eq) goto loc_83056154;
loc_83056140:
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// and r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83056140
	if (!ctx.cr6.eq) goto loc_83056140;
loc_83056154:
	// rlwinm r11,r10,5,24,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xE0;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r9,r9,14,0,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0xFFFFC000;
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r19.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// or r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 | ctx.r9.u64;
	// ori r7,r8,8195
	ctx.r7.u64 = ctx.r8.u64 | 8195;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// lwz r3,-11264(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -11264);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// bl 0x82fd6b98
	ctx.lr = 0x83056180;
	sub_82FD6B98(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83056194
	if (ctx.cr6.eq) goto loc_83056194;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x8306cc58
	ctx.lr = 0x83056190;
	sub_8306CC58(ctx, base);
	// b 0x83056198
	goto loc_83056198;
loc_83056194:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_83056198:
	// li r28,2
	ctx.r28.s64 = 2;
	// stw r3,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83056258
	if (ctx.cr6.eq) goto loc_83056258;
	// lbz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 16);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lbz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 108);
	// rlwimi r11,r10,7,17,24
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 7) & 0x7F80) | (ctx.r11.u64 & 0xFFFFFFFFFFFF807F);
	// stb r11,16(r29)
	PPC_STORE_U8(ctx.r29.u32 + 16, ctx.r11.u8);
	// bl 0x8306ccb0
	ctx.lr = 0x830561C0;
	sub_8306CCB0(ctx, base);
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x830561D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r5,93(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 93);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x830561f0
	if (ctx.cr6.eq) goto loc_830561F0;
	// li r28,2
	ctx.r28.s64 = 2;
	// b 0x83056258
	goto loc_83056258;
loc_830561F0:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bne cr6,0x83056258
	if (!ctx.cr6.eq) goto loc_83056258;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x8305620c
	if (!ctx.cr6.eq) goto loc_8305620C;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
loc_8305620C:
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r6,4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8305622C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83056258
	if (!ctx.cr6.eq) goto loc_83056258;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8305624C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x830562f0
	if (ctx.cr6.eq) goto loc_830562F0;
loc_83056258:
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8305627c
	if (ctx.cr6.eq) goto loc_8305627C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83056278;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r24,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r24.u32);
loc_8305627C:
	// lwz r31,12(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x830562b4
	if (ctx.cr6.eq) goto loc_830562B4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,-11264(r22)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r22.u32 + -11264);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830562A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fd6cc8
	ctx.lr = 0x830562B0;
	sub_82FD6CC8(ctx, base);
	// stw r24,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r24.u32);
loc_830562B4:
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r18,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r18.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x830562f0
	if (ctx.cr6.eq) goto loc_830562F0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83056cb0
	ctx.lr = 0x830562CC;
	sub_83056CB0(ctx, base);
	// bl 0x8301dd80
	ctx.lr = 0x830562D0;
	sub_8301DD80(ctx, base);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830562E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r24,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r24.u32);
	// bl 0x8301dd90
	ctx.lr = 0x830562F0;
	sub_8301DD90(ctx, base);
loc_830562F0:
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// addi r27,r27,20
	ctx.r27.s64 = ctx.r27.s64 + 20;
	// cmplwi cr6,r20,4
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 4, ctx.xer);
	// blt cr6,0x83055fbc
	if (ctx.cr6.lt) goto loc_83055FBC;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83056c08
	ctx.lr = 0x83056308;
	sub_83056C08(ctx, base);
	// lbz r11,108(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 108);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwimi r11,r10,7,17,24
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 7) & 0x7F80) | (ctx.r11.u64 & 0xFFFFFFFFFFFF807F);
	// stb r11,108(r21)
	PPC_STORE_U8(ctx.r21.u32 + 108, ctx.r11.u8);
loc_8305631C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82fa7694
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83056324"))) PPC_WEAK_FUNC(sub_83056324);
PPC_FUNC_IMPL(__imp__sub_83056324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83056328"))) PPC_WEAK_FUNC(sub_83056328);
PPC_FUNC_IMPL(__imp__sub_83056328) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r5,31
	ctx.r11.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83056340
	if (ctx.cr6.eq) goto loc_83056340;
	// lbz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 44);
	// rlwimi r11,r4,7,0,24
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 7) & 0xFFFFFF80) | (ctx.r11.u64 & 0xFFFFFFFF0000007F);
	// stb r11,44(r3)
	PPC_STORE_U8(ctx.r3.u32 + 44, ctx.r11.u8);
loc_83056340:
	// rlwinm r11,r5,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83056358
	if (ctx.cr6.eq) goto loc_83056358;
	// lbz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 64);
	// rlwimi r11,r4,6,18,24
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 6) & 0x3F80) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC07F);
	// stb r11,64(r3)
	PPC_STORE_U8(ctx.r3.u32 + 64, ctx.r11.u8);
loc_83056358:
	// rlwinm r11,r5,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83056370
	if (ctx.cr6.eq) goto loc_83056370;
	// lbz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 84);
	// rlwimi r11,r4,5,19,24
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 5) & 0x1F80) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE07F);
	// stb r11,84(r3)
	PPC_STORE_U8(ctx.r3.u32 + 84, ctx.r11.u8);
loc_83056370:
	// rlwinm r11,r5,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83056388
	if (ctx.cr6.eq) goto loc_83056388;
	// lbz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 104);
	// rlwimi r11,r4,4,20,24
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 4) & 0xF80) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF07F);
	// stb r11,104(r3)
	PPC_STORE_U8(ctx.r3.u32 + 104, ctx.r11.u8);
loc_83056388:
	// rlwinm r11,r5,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 108);
	// rlwimi r11,r4,3,21,24
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 3) & 0x780) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF87F);
	// stb r11,108(r3)
	PPC_STORE_U8(ctx.r3.u32 + 108, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830563A4"))) PPC_WEAK_FUNC(sub_830563A4);
PPC_FUNC_IMPL(__imp__sub_830563A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830563A8"))) PPC_WEAK_FUNC(sub_830563A8);
PPC_FUNC_IMPL(__imp__sub_830563A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830563AC"))) PPC_WEAK_FUNC(sub_830563AC);
PPC_FUNC_IMPL(__imp__sub_830563AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830563B0"))) PPC_WEAK_FUNC(sub_830563B0);
PPC_FUNC_IMPL(__imp__sub_830563B0) {
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
	// lwz r10,116(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8305644c
	if (!ctx.cr6.eq) goto loc_8305644C;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r31,r10,28
	ctx.r31.s64 = ctx.r10.s64 + 28;
	// lwz r3,36(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8305644c
	if (ctx.cr6.eq) goto loc_8305644C;
	// lbz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 108);
	// lbz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r8,r10,0,24,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x83056420
	if (!ctx.cr6.eq) goto loc_83056420;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,256
	ctx.r4.s64 = ctx.r11.s64 + 256;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8305641C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8305643c
	goto loc_8305643C;
loc_83056420:
	// rlwinm r11,r10,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8305643c
	if (!ctx.cr6.eq) goto loc_8305643C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8305643C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8305643C:
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,31,25,25
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 31) & 0x40) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFBF);
	// stb r10,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r10.u8);
loc_8305644C:
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

__attribute__((alias("__imp__sub_83056460"))) PPC_WEAK_FUNC(sub_83056460);
PPC_FUNC_IMPL(__imp__sub_83056460) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8305648c
	if (ctx.cr6.eq) goto loc_8305648C;
	// lwz r10,364(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_8305648C:
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83056494"))) PPC_WEAK_FUNC(sub_83056494);
PPC_FUNC_IMPL(__imp__sub_83056494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83056498"))) PPC_WEAK_FUNC(sub_83056498);
PPC_FUNC_IMPL(__imp__sub_83056498) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,256(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830564d0
	if (ctx.cr6.eq) goto loc_830564D0;
	// lwz r10,264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// cmpwi cr6,r10,17
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 17, ctx.xer);
	// li r10,4
	ctx.r10.s64 = 4;
	// beq cr6,0x830564bc
	if (ctx.cr6.eq) goto loc_830564BC;
	// li r10,1
	ctx.r10.s64 = 1;
loc_830564BC:
	// stw r10,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r10.u32);
	// li r10,17
	ctx.r10.s64 = 17;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,264(r11)
	PPC_STORE_U32(ctx.r11.u32 + 264, ctx.r10.u32);
	// sth r9,270(r11)
	PPC_STORE_U16(ctx.r11.u32 + 270, ctx.r9.u16);
loc_830564D0:
	// lwz r5,360(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 360);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82a75988
	sub_82A75988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830564DC"))) PPC_WEAK_FUNC(sub_830564DC);
PPC_FUNC_IMPL(__imp__sub_830564DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

