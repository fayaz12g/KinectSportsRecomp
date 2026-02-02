#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8301A9FC"))) PPC_WEAK_FUNC(sub_8301A9FC);
PPC_FUNC_IMPL(__imp__sub_8301A9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301AA00"))) PPC_WEAK_FUNC(sub_8301AA00);
PPC_FUNC_IMPL(__imp__sub_8301AA00) {
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
	// bl 0x8301a628
	ctx.lr = 0x8301AA1C;
	sub_8301A628(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8301a628
	ctx.lr = 0x8301AA28;
	sub_8301A628(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8301aa48
	if (ctx.cr6.eq) goto loc_8301AA48;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301aa48
	if (ctx.cr6.eq) goto loc_8301AA48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8301a1d0
	ctx.lr = 0x8301AA44;
	sub_8301A1D0(ctx, base);
	// b 0x8301aa4c
	goto loc_8301AA4C;
loc_8301AA48:
	// li r3,15
	ctx.r3.s64 = 15;
loc_8301AA4C:
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

__attribute__((alias("__imp__sub_8301AA64"))) PPC_WEAK_FUNC(sub_8301AA64);
PPC_FUNC_IMPL(__imp__sub_8301AA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301AA68"))) PPC_WEAK_FUNC(sub_8301AA68);
PPC_FUNC_IMPL(__imp__sub_8301AA68) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8301a578
	ctx.lr = 0x8301AA80;
	sub_8301A578(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8301aaa0
	if (!ctx.cr6.eq) goto loc_8301AAA0;
	// li r3,15
	ctx.r3.s64 = 15;
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
loc_8301AAA0:
	// li r11,20
	ctx.r11.s64 = 20;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// bl 0x83040d20
	ctx.lr = 0x8301AAB4;
	sub_83040D20(ctx, base);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,15172(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15172);
	// bl 0x83040da0
	ctx.lr = 0x8301AAC8;
	sub_83040DA0(ctx, base);
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

__attribute__((alias("__imp__sub_8301AADC"))) PPC_WEAK_FUNC(sub_8301AADC);
PPC_FUNC_IMPL(__imp__sub_8301AADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301AAE0"))) PPC_WEAK_FUNC(sub_8301AAE0);
PPC_FUNC_IMPL(__imp__sub_8301AAE0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8301a628
	ctx.lr = 0x8301AAF8;
	sub_8301A628(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8301ab18
	if (!ctx.cr6.eq) goto loc_8301AB18;
	// li r3,15
	ctx.r3.s64 = 15;
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
loc_8301AB18:
	// li r11,20
	ctx.r11.s64 = 20;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// bl 0x83040d20
	ctx.lr = 0x8301AB2C;
	sub_83040D20(ctx, base);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,15172(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15172);
	// bl 0x83040da0
	ctx.lr = 0x8301AB40;
	sub_83040DA0(ctx, base);
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

__attribute__((alias("__imp__sub_8301AB54"))) PPC_WEAK_FUNC(sub_8301AB54);
PPC_FUNC_IMPL(__imp__sub_8301AB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301AB58"))) PPC_WEAK_FUNC(sub_8301AB58);
PPC_FUNC_IMPL(__imp__sub_8301AB58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,204
	ctx.r11.s64 = ctx.r1.s64 + 204;
	// stfs f1,204(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// li r8,15
	ctx.r8.s64 = 15;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v63,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r5,24
	ctx.r5.s64 = 24;
	// sth r8,114(r1)
	PPC_STORE_U16(ctx.r1.u32 + 114, ctx.r8.u16);
	// bl 0x82fa77c0
	ctx.lr = 0x8301ABA0;
	sub_82FA77C0(ctx, base);
	// bl 0x83040cf8
	ctx.lr = 0x8301ABA4;
	sub_83040CF8(ctx, base);
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,15172(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 15172);
	// bl 0x83040da0
	ctx.lr = 0x8301ABB8;
	sub_83040DA0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301ABC8"))) PPC_WEAK_FUNC(sub_8301ABC8);
PPC_FUNC_IMPL(__imp__sub_8301ABC8) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8301a238
	sub_8301A238(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301ABD0"))) PPC_WEAK_FUNC(sub_8301ABD0);
PPC_FUNC_IMPL(__imp__sub_8301ABD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x8301ABD8;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82fa3bb8
	ctx.lr = 0x8301ABE8;
	sub_82FA3BB8(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// neg r9,r10
	ctx.r9.s64 = -ctx.r10.s64;
	// rlwinm r12,r9,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x82faced4
	ctx.lr = 0x8301AC00;
	sub_82FACED4(ctx, base);
	// lwz r8,0(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stwux r8,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r1.u32 = ea;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fade18
	ctx.lr = 0x8301AC18;
	sub_82FADE18(ctx, base);
	// lhz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8301ac4c
	if (ctx.cr6.eq) goto loc_8301AC4C;
loc_8301AC2C:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,46
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 46, ctx.xer);
	// beq cr6,0x8301ac48
	if (ctx.cr6.eq) goto loc_8301AC48;
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8301ac2c
	if (!ctx.cr6.eq) goto loc_8301AC2C;
	// b 0x8301ac4c
	goto loc_8301AC4C;
loc_8301AC48:
	// sth r26,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r26.u16);
loc_8301AC4C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8301a578
	ctx.lr = 0x8301AC54;
	sub_8301A578(ctx, base);
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// neg r10,r11
	ctx.r10.s64 = -ctx.r11.s64;
	// rlwinm r12,r10,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x82faced4
	ctx.lr = 0x8301AC68;
	sub_82FACED4(ctx, base);
	// lwz r9,0(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stwux r9,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r1.u32 = ea;
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// bl 0x82fa3bb8
	ctx.lr = 0x8301AC7C;
	sub_82FA3BB8(ctx, base);
	// addi r8,r3,1
	ctx.r8.s64 = ctx.r3.s64 + 1;
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x8301ac98
	if (!ctx.cr6.lt) goto loc_8301AC98;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fa3bb8
	ctx.lr = 0x8301AC90;
	sub_82FA3BB8(ctx, base);
	// addi r6,r3,1
	ctx.r6.s64 = ctx.r3.s64 + 1;
	// b 0x8301ac9c
	goto loc_8301AC9C;
loc_8301AC98:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
loc_8301AC9C:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a831c8
	ctx.lr = 0x8301ACBC;
	sub_82A831C8(ctx, base);
	// stbx r26,r28,r29
	PPC_STORE_U8(ctx.r28.u32 + ctx.r29.u32, ctx.r26.u8);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,15184(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15184);
	// bl 0x8302c178
	ctx.lr = 0x8301ACD4;
	sub_8302C178(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301ACE0"))) PPC_WEAK_FUNC(sub_8301ACE0);
PPC_FUNC_IMPL(__imp__sub_8301ACE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8301ACE8;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8301ACF4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8301acf4
	if (!ctx.cr6.eq) goto loc_8301ACF4;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// neg r10,r29
	ctx.r10.s64 = -ctx.r29.s64;
	// rlwinm r12,r10,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x82faced4
	ctx.lr = 0x8301AD20;
	sub_82FACED4(ctx, base);
	// lwz r9,0(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stwux r9,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r1.u32 = ea;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// subf r10,r3,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r3.s64;
loc_8301AD34:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x8301ad34
	if (!ctx.cr6.eq) goto loc_8301AD34;
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8301ad7c
	if (ctx.cr6.eq) goto loc_8301AD7C;
loc_8301AD58:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,46
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 46, ctx.xer);
	// beq cr6,0x8301ad74
	if (ctx.cr6.eq) goto loc_8301AD74;
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8301ad58
	if (!ctx.cr6.eq) goto loc_8301AD58;
	// b 0x8301ad7c
	goto loc_8301AD7C;
loc_8301AD74:
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
loc_8301AD7C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8301a628
	ctx.lr = 0x8301AD84;
	sub_8301A628(ctx, base);
	// neg r11,r29
	ctx.r11.s64 = -ctx.r29.s64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm r12,r11,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x82faced4
	ctx.lr = 0x8301AD94;
	sub_82FACED4(ctx, base);
	// lwz r10,0(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stwux r10,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r1.u32 = ea;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fa5590
	ctx.lr = 0x8301ADB0;
	sub_82FA5590(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,15184(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 15184);
	// bl 0x8302c178
	ctx.lr = 0x8301ADC4;
	sub_8302C178(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301ADD0"))) PPC_WEAK_FUNC(sub_8301ADD0);
PPC_FUNC_IMPL(__imp__sub_8301ADD0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x8301abd0
	ctx.lr = 0x8301ADF0;
	sub_8301ABD0(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a77608
	ctx.lr = 0x8301AE08;
	sub_82A77608(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301ae98
	if (ctx.cr6.eq) goto loc_8301AE98;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r8,-31998
	ctx.r8.s64 = -2097020928;
	// lwz r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// addi r6,r8,-28976
	ctx.r6.s64 = ctx.r8.s64 + -28976;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// rldicr r8,r7,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// lwz r3,15184(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15184);
	// ld r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r7,120(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x8302c350
	ctx.lr = 0x8301AE74;
	sub_8302C350(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83018e50
	ctx.lr = 0x8301AE80;
	sub_83018E50(ctx, base);
loc_8301AE80:
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
loc_8301AE98:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x8301ae80
	goto loc_8301AE80;
}

__attribute__((alias("__imp__sub_8301AEA0"))) PPC_WEAK_FUNC(sub_8301AEA0);
PPC_FUNC_IMPL(__imp__sub_8301AEA0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x8301ace0
	ctx.lr = 0x8301AEC0;
	sub_8301ACE0(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a77608
	ctx.lr = 0x8301AED8;
	sub_82A77608(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301af68
	if (ctx.cr6.eq) goto loc_8301AF68;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r8,-31998
	ctx.r8.s64 = -2097020928;
	// lwz r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// addi r6,r8,-28976
	ctx.r6.s64 = ctx.r8.s64 + -28976;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// rldicr r8,r7,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// lwz r3,15184(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15184);
	// ld r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r7,120(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x8302c350
	ctx.lr = 0x8301AF44;
	sub_8302C350(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83018e50
	ctx.lr = 0x8301AF50;
	sub_83018E50(ctx, base);
loc_8301AF50:
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
loc_8301AF68:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x8301af50
	goto loc_8301AF50;
}

__attribute__((alias("__imp__sub_8301AF70"))) PPC_WEAK_FUNC(sub_8301AF70);
PPC_FUNC_IMPL(__imp__sub_8301AF70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8301AF78;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x8301abd0
	ctx.lr = 0x8301AF90;
	sub_8301ABD0(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// lis r6,-31958
	ctx.r6.s64 = -2094399488;
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// rldicr r8,r9,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lwz r3,15184(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 15184);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// ld r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x8302c350
	ctx.lr = 0x8301AFE0;
	sub_8302C350(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301AFE8"))) PPC_WEAK_FUNC(sub_8301AFE8);
PPC_FUNC_IMPL(__imp__sub_8301AFE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8301AFF0;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x8301ace0
	ctx.lr = 0x8301B008;
	sub_8301ACE0(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// lis r6,-31958
	ctx.r6.s64 = -2094399488;
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// rldicr r8,r9,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lwz r3,15184(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 15184);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// ld r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x8302c350
	ctx.lr = 0x8301B058;
	sub_8302C350(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301B060"))) PPC_WEAK_FUNC(sub_8301B060);
PPC_FUNC_IMPL(__imp__sub_8301B060) {
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
	// bl 0x8301abd0
	ctx.lr = 0x8301B078;
	sub_8301ABD0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830194b0
	ctx.lr = 0x8301B080;
	sub_830194B0(ctx, base);
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

__attribute__((alias("__imp__sub_8301B094"))) PPC_WEAK_FUNC(sub_8301B094);
PPC_FUNC_IMPL(__imp__sub_8301B094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301B098"))) PPC_WEAK_FUNC(sub_8301B098);
PPC_FUNC_IMPL(__imp__sub_8301B098) {
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
	// bl 0x8301ace0
	ctx.lr = 0x8301B0B0;
	sub_8301ACE0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830194b0
	ctx.lr = 0x8301B0B8;
	sub_830194B0(ctx, base);
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

__attribute__((alias("__imp__sub_8301B0CC"))) PPC_WEAK_FUNC(sub_8301B0CC);
PPC_FUNC_IMPL(__imp__sub_8301B0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301B0D0"))) PPC_WEAK_FUNC(sub_8301B0D0);
PPC_FUNC_IMPL(__imp__sub_8301B0D0) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8301abd0
	ctx.lr = 0x8301B0F8;
	sub_8301ABD0(ctx, base);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// rldicr r8,r9,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// lwz r3,15184(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15184);
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x8302c350
	ctx.lr = 0x8301B140;
	sub_8302C350(ctx, base);
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

__attribute__((alias("__imp__sub_8301B158"))) PPC_WEAK_FUNC(sub_8301B158);
PPC_FUNC_IMPL(__imp__sub_8301B158) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8301ace0
	ctx.lr = 0x8301B180;
	sub_8301ACE0(ctx, base);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// rldicr r8,r9,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// lwz r3,15184(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15184);
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x8302c350
	ctx.lr = 0x8301B1C8;
	sub_8302C350(ctx, base);
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

__attribute__((alias("__imp__sub_8301B1E0"))) PPC_WEAK_FUNC(sub_8301B1E0);
PPC_FUNC_IMPL(__imp__sub_8301B1E0) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8301abd0
	ctx.lr = 0x8301B204;
	sub_8301ABD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8301a410
	ctx.lr = 0x8301B214;
	sub_8301A410(ctx, base);
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

__attribute__((alias("__imp__sub_8301B22C"))) PPC_WEAK_FUNC(sub_8301B22C);
PPC_FUNC_IMPL(__imp__sub_8301B22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301B230"))) PPC_WEAK_FUNC(sub_8301B230);
PPC_FUNC_IMPL(__imp__sub_8301B230) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8301ace0
	ctx.lr = 0x8301B254;
	sub_8301ACE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8301a410
	ctx.lr = 0x8301B264;
	sub_8301A410(ctx, base);
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

__attribute__((alias("__imp__sub_8301B27C"))) PPC_WEAK_FUNC(sub_8301B27C);
PPC_FUNC_IMPL(__imp__sub_8301B27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301B280"))) PPC_WEAK_FUNC(sub_8301B280);
PPC_FUNC_IMPL(__imp__sub_8301B280) {
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
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// xori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 ^ 1;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// addi r8,r11,6
	ctx.r8.s64 = ctx.r11.s64 + 6;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x8301abd0
	ctx.lr = 0x8301B2C0;
	sub_8301ABD0(ctx, base);
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// lwz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// rldicr r8,r6,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r3,15184(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 15184);
	// ld r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x8302c350
	ctx.lr = 0x8301B2EC;
	sub_8302C350(ctx, base);
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

__attribute__((alias("__imp__sub_8301B300"))) PPC_WEAK_FUNC(sub_8301B300);
PPC_FUNC_IMPL(__imp__sub_8301B300) {
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
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// xori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 ^ 1;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// addi r8,r11,6
	ctx.r8.s64 = ctx.r11.s64 + 6;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x8301ace0
	ctx.lr = 0x8301B340;
	sub_8301ACE0(ctx, base);
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// lwz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// rldicr r8,r6,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r3,15184(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 15184);
	// ld r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x8302c350
	ctx.lr = 0x8301B36C;
	sub_8302C350(ctx, base);
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

__attribute__((alias("__imp__sub_8301B380"))) PPC_WEAK_FUNC(sub_8301B380);
PPC_FUNC_IMPL(__imp__sub_8301B380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x8301B388;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// blt cr6,0x8301b484
	if (ctx.cr6.lt) goto loc_8301B484;
	// beq cr6,0x8301b460
	if (ctx.cr6.eq) goto loc_8301B460;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,-11272(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11272);
	// bl 0x82fd6b98
	ctx.lr = 0x8301B3B4;
	sub_82FD6B98(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301b454
	if (ctx.cr6.eq) goto loc_8301B454;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8301b3ec
	if (ctx.cr6.eq) goto loc_8301B3EC;
	// subf r27,r3,r30
	ctx.r27.s64 = ctx.r30.s64 - ctx.r3.s64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_8301B3D4:
	// lwzx r3,r27,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// bl 0x8301a578
	ctx.lr = 0x8301B3DC;
	sub_8301A578(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8301b3d4
	if (!ctx.cr0.eq) goto loc_8301B3D4;
loc_8301B3EC:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a77608
	ctx.lr = 0x8301B400;
	sub_82A77608(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8301b418
	if (!ctx.cr6.eq) goto loc_8301B418;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
loc_8301B418:
	// addi r11,r1,108
	ctx.r11.s64 = ctx.r1.s64 + 108;
	// lis r10,-31998
	ctx.r10.s64 = -2097020928;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,-28976
	ctx.r4.s64 = ctx.r10.s64 + -28976;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83018f50
	ctx.lr = 0x8301B440;
	sub_83018F50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83018e50
	ctx.lr = 0x8301B44C;
	sub_83018E50(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
loc_8301B454:
	// li r3,52
	ctx.r3.s64 = 52;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
loc_8301B460:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8301a578
	ctx.lr = 0x8301B468;
	sub_8301A578(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83019690
	ctx.lr = 0x8301B47C;
	sub_83019690(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
loc_8301B484:
	// li r3,31
	ctx.r3.s64 = 31;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301B490"))) PPC_WEAK_FUNC(sub_8301B490);
PPC_FUNC_IMPL(__imp__sub_8301B490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x8301B498;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// blt cr6,0x8301b594
	if (ctx.cr6.lt) goto loc_8301B594;
	// beq cr6,0x8301b570
	if (ctx.cr6.eq) goto loc_8301B570;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,-11272(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11272);
	// bl 0x82fd6b98
	ctx.lr = 0x8301B4C4;
	sub_82FD6B98(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301b564
	if (ctx.cr6.eq) goto loc_8301B564;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8301b4fc
	if (ctx.cr6.eq) goto loc_8301B4FC;
	// subf r27,r3,r30
	ctx.r27.s64 = ctx.r30.s64 - ctx.r3.s64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_8301B4E4:
	// lwzx r3,r27,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// bl 0x8301a628
	ctx.lr = 0x8301B4EC;
	sub_8301A628(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8301b4e4
	if (!ctx.cr0.eq) goto loc_8301B4E4;
loc_8301B4FC:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a77608
	ctx.lr = 0x8301B510;
	sub_82A77608(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8301b528
	if (!ctx.cr6.eq) goto loc_8301B528;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
loc_8301B528:
	// addi r11,r1,108
	ctx.r11.s64 = ctx.r1.s64 + 108;
	// lis r10,-31998
	ctx.r10.s64 = -2097020928;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,-28976
	ctx.r4.s64 = ctx.r10.s64 + -28976;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83018f50
	ctx.lr = 0x8301B550;
	sub_83018F50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83018e50
	ctx.lr = 0x8301B55C;
	sub_83018E50(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
loc_8301B564:
	// li r3,52
	ctx.r3.s64 = 52;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
loc_8301B570:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8301a628
	ctx.lr = 0x8301B578;
	sub_8301A628(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83019690
	ctx.lr = 0x8301B58C;
	sub_83019690(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
loc_8301B594:
	// li r3,31
	ctx.r3.s64 = 31;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301B5A0"))) PPC_WEAK_FUNC(sub_8301B5A0);
PPC_FUNC_IMPL(__imp__sub_8301B5A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x8301B5A8;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// blt cr6,0x8301b6a8
	if (ctx.cr6.lt) goto loc_8301B6A8;
	// beq cr6,0x8301b644
	if (ctx.cr6.eq) goto loc_8301B644;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,-11272(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11272);
	// bl 0x82fd6b98
	ctx.lr = 0x8301B5DC;
	sub_82FD6B98(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301b638
	if (ctx.cr6.eq) goto loc_8301B638;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8301b614
	if (ctx.cr6.eq) goto loc_8301B614;
	// subf r27,r3,r30
	ctx.r27.s64 = ctx.r30.s64 - ctx.r3.s64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_8301B5FC:
	// lwzx r3,r27,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// bl 0x8301a578
	ctx.lr = 0x8301B604;
	sub_8301A578(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8301b5fc
	if (!ctx.cr0.eq) goto loc_8301B5FC;
loc_8301B614:
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83018f50
	ctx.lr = 0x8301B630;
	sub_83018F50(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
loc_8301B638:
	// li r3,52
	ctx.r3.s64 = 52;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
loc_8301B644:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8301a578
	ctx.lr = 0x8301B64C;
	sub_8301A578(ctx, base);
	// cntlzw r11,r26
	ctx.r11.u64 = ctx.r26.u32 == 0 ? 32 : __builtin_clz(ctx.r26.u32);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// rlwinm r8,r11,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// xori r11,r8,1
	ctx.r11.u64 = ctx.r8.u64 ^ 1;
	// ld r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// lwz r3,15184(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15184);
	// rldicr r8,r9,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x8302c350
	ctx.lr = 0x8301B6A0;
	sub_8302C350(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
loc_8301B6A8:
	// li r3,31
	ctx.r3.s64 = 31;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301B6B4"))) PPC_WEAK_FUNC(sub_8301B6B4);
PPC_FUNC_IMPL(__imp__sub_8301B6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301B6B8"))) PPC_WEAK_FUNC(sub_8301B6B8);
PPC_FUNC_IMPL(__imp__sub_8301B6B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x8301B6C0;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// blt cr6,0x8301b7c0
	if (ctx.cr6.lt) goto loc_8301B7C0;
	// beq cr6,0x8301b75c
	if (ctx.cr6.eq) goto loc_8301B75C;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,-11272(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11272);
	// bl 0x82fd6b98
	ctx.lr = 0x8301B6F4;
	sub_82FD6B98(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301b750
	if (ctx.cr6.eq) goto loc_8301B750;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8301b72c
	if (ctx.cr6.eq) goto loc_8301B72C;
	// subf r27,r3,r30
	ctx.r27.s64 = ctx.r30.s64 - ctx.r3.s64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_8301B714:
	// lwzx r3,r27,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// bl 0x8301a628
	ctx.lr = 0x8301B71C;
	sub_8301A628(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8301b714
	if (!ctx.cr0.eq) goto loc_8301B714;
loc_8301B72C:
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83018f50
	ctx.lr = 0x8301B748;
	sub_83018F50(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
loc_8301B750:
	// li r3,52
	ctx.r3.s64 = 52;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
loc_8301B75C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8301a628
	ctx.lr = 0x8301B764;
	sub_8301A628(ctx, base);
	// cntlzw r11,r26
	ctx.r11.u64 = ctx.r26.u32 == 0 ? 32 : __builtin_clz(ctx.r26.u32);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// rlwinm r8,r11,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// xori r11,r8,1
	ctx.r11.u64 = ctx.r8.u64 ^ 1;
	// ld r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// lwz r3,15184(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15184);
	// rldicr r8,r9,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x8302c350
	ctx.lr = 0x8301B7B8;
	sub_8302C350(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
loc_8301B7C0:
	// li r3,31
	ctx.r3.s64 = 31;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301B7CC"))) PPC_WEAK_FUNC(sub_8301B7CC);
PPC_FUNC_IMPL(__imp__sub_8301B7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301B7D0"))) PPC_WEAK_FUNC(sub_8301B7D0);
PPC_FUNC_IMPL(__imp__sub_8301B7D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x8301B7D8;
	__savegprlr_22(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8301b904
	if (ctx.cr6.eq) goto loc_8301B904;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8301b904
	if (ctx.cr6.eq) goto loc_8301B904;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x8301a578
	ctx.lr = 0x8301B80C;
	sub_8301A578(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// bne cr6,0x8301b880
	if (!ctx.cr6.eq) goto loc_8301B880;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8301a578
	ctx.lr = 0x8301B820;
	sub_8301A578(ctx, base);
	// cntlzw r9,r25
	ctx.r9.u64 = ctx.r25.u32 == 0 ? 32 : __builtin_clz(ctx.r25.u32);
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// rlwinm r5,r9,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r5,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r5.u8);
	// rldicr r8,r11,32,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r4,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// lwz r3,15184(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15184);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x8302c350
	ctx.lr = 0x8301B878;
	sub_8302C350(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
loc_8301B880:
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// rlwinm r4,r29,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,-11272(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11272);
	// bl 0x82fd6b98
	ctx.lr = 0x8301B890;
	sub_82FD6B98(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301b8f8
	if (ctx.cr6.eq) goto loc_8301B8F8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8301b8c8
	if (ctx.cr6.eq) goto loc_8301B8C8;
	// subf r27,r3,r30
	ctx.r27.s64 = ctx.r30.s64 - ctx.r3.s64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_8301B8B0:
	// lwzx r3,r27,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// bl 0x8301a578
	ctx.lr = 0x8301B8B8;
	sub_8301A578(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8301b8b0
	if (!ctx.cr0.eq) goto loc_8301B8B0;
loc_8301B8C8:
	// cntlzw r11,r25
	ctx.r11.u64 = ctx.r25.u32 == 0 ? 32 : __builtin_clz(ctx.r25.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83019058
	ctx.lr = 0x8301B8F0;
	sub_83019058(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
loc_8301B8F8:
	// li r3,52
	ctx.r3.s64 = 52;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
loc_8301B904:
	// li r3,31
	ctx.r3.s64 = 31;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301B910"))) PPC_WEAK_FUNC(sub_8301B910);
PPC_FUNC_IMPL(__imp__sub_8301B910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x8301B918;
	__savegprlr_22(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8301ba44
	if (ctx.cr6.eq) goto loc_8301BA44;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8301ba44
	if (ctx.cr6.eq) goto loc_8301BA44;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x8301a628
	ctx.lr = 0x8301B94C;
	sub_8301A628(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// bne cr6,0x8301b9c0
	if (!ctx.cr6.eq) goto loc_8301B9C0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8301a628
	ctx.lr = 0x8301B960;
	sub_8301A628(ctx, base);
	// cntlzw r9,r25
	ctx.r9.u64 = ctx.r25.u32 == 0 ? 32 : __builtin_clz(ctx.r25.u32);
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// rlwinm r5,r9,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r5,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r5.u8);
	// rldicr r8,r11,32,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r4,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// lwz r3,15184(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15184);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x8302c350
	ctx.lr = 0x8301B9B8;
	sub_8302C350(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
loc_8301B9C0:
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// rlwinm r4,r29,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,-11272(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11272);
	// bl 0x82fd6b98
	ctx.lr = 0x8301B9D0;
	sub_82FD6B98(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301ba38
	if (ctx.cr6.eq) goto loc_8301BA38;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8301ba08
	if (ctx.cr6.eq) goto loc_8301BA08;
	// subf r27,r3,r30
	ctx.r27.s64 = ctx.r30.s64 - ctx.r3.s64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_8301B9F0:
	// lwzx r3,r27,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// bl 0x8301a628
	ctx.lr = 0x8301B9F8;
	sub_8301A628(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8301b9f0
	if (!ctx.cr0.eq) goto loc_8301B9F0;
loc_8301BA08:
	// cntlzw r11,r25
	ctx.r11.u64 = ctx.r25.u32 == 0 ? 32 : __builtin_clz(ctx.r25.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83019058
	ctx.lr = 0x8301BA30;
	sub_83019058(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
loc_8301BA38:
	// li r3,52
	ctx.r3.s64 = 52;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
loc_8301BA44:
	// li r3,31
	ctx.r3.s64 = 31;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301BA50"))) PPC_WEAK_FUNC(sub_8301BA50);
PPC_FUNC_IMPL(__imp__sub_8301BA50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x8301BA58;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8301bb60
	if (ctx.cr6.eq) goto loc_8301BB60;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8301bb60
	if (ctx.cr6.eq) goto loc_8301BB60;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x8301a578
	ctx.lr = 0x8301BA84;
	sub_8301A578(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// bne cr6,0x8301babc
	if (!ctx.cr6.eq) goto loc_8301BABC;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8301a578
	ctx.lr = 0x8301BA98;
	sub_8301A578(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83019838
	ctx.lr = 0x8301BAB4;
	sub_83019838(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
loc_8301BABC:
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// rlwinm r4,r29,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,-11272(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11272);
	// bl 0x82fd6b98
	ctx.lr = 0x8301BACC;
	sub_82FD6B98(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301bb54
	if (ctx.cr6.eq) goto loc_8301BB54;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8301bb04
	if (ctx.cr6.eq) goto loc_8301BB04;
	// subf r27,r3,r30
	ctx.r27.s64 = ctx.r30.s64 - ctx.r3.s64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_8301BAEC:
	// lwzx r3,r27,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// bl 0x8301a578
	ctx.lr = 0x8301BAF4;
	sub_8301A578(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8301baec
	if (!ctx.cr0.eq) goto loc_8301BAEC;
loc_8301BB04:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83018de8
	ctx.lr = 0x8301BB0C;
	sub_83018DE8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8301bb64
	if (!ctx.cr6.eq) goto loc_8301BB64;
	// cntlzw r11,r25
	ctx.r11.u64 = ctx.r25.u32 == 0 ? 32 : __builtin_clz(ctx.r25.u32);
	// lis r3,-31998
	ctx.r3.s64 = -2097020928;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,-28976
	ctx.r3.s64 = ctx.r3.s64 + -28976;
	// bl 0x83019058
	ctx.lr = 0x8301BB40;
	sub_83019058(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83018e50
	ctx.lr = 0x8301BB4C;
	sub_83018E50(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
loc_8301BB54:
	// li r3,52
	ctx.r3.s64 = 52;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
loc_8301BB60:
	// li r3,31
	ctx.r3.s64 = 31;
loc_8301BB64:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301BB6C"))) PPC_WEAK_FUNC(sub_8301BB6C);
PPC_FUNC_IMPL(__imp__sub_8301BB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301BB70"))) PPC_WEAK_FUNC(sub_8301BB70);
PPC_FUNC_IMPL(__imp__sub_8301BB70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x8301BB78;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8301bc80
	if (ctx.cr6.eq) goto loc_8301BC80;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8301bc80
	if (ctx.cr6.eq) goto loc_8301BC80;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x8301a628
	ctx.lr = 0x8301BBA4;
	sub_8301A628(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// bne cr6,0x8301bbdc
	if (!ctx.cr6.eq) goto loc_8301BBDC;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8301a628
	ctx.lr = 0x8301BBB8;
	sub_8301A628(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83019838
	ctx.lr = 0x8301BBD4;
	sub_83019838(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
loc_8301BBDC:
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// rlwinm r4,r29,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,-11272(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11272);
	// bl 0x82fd6b98
	ctx.lr = 0x8301BBEC;
	sub_82FD6B98(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301bc74
	if (ctx.cr6.eq) goto loc_8301BC74;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8301bc24
	if (ctx.cr6.eq) goto loc_8301BC24;
	// subf r27,r3,r30
	ctx.r27.s64 = ctx.r30.s64 - ctx.r3.s64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_8301BC0C:
	// lwzx r3,r27,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// bl 0x8301a628
	ctx.lr = 0x8301BC14;
	sub_8301A628(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8301bc0c
	if (!ctx.cr0.eq) goto loc_8301BC0C;
loc_8301BC24:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83018de8
	ctx.lr = 0x8301BC2C;
	sub_83018DE8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8301bc84
	if (!ctx.cr6.eq) goto loc_8301BC84;
	// cntlzw r11,r25
	ctx.r11.u64 = ctx.r25.u32 == 0 ? 32 : __builtin_clz(ctx.r25.u32);
	// lis r3,-31998
	ctx.r3.s64 = -2097020928;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,-28976
	ctx.r3.s64 = ctx.r3.s64 + -28976;
	// bl 0x83019058
	ctx.lr = 0x8301BC60;
	sub_83019058(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83018e50
	ctx.lr = 0x8301BC6C;
	sub_83018E50(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
loc_8301BC74:
	// li r3,52
	ctx.r3.s64 = 52;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
loc_8301BC80:
	// li r3,31
	ctx.r3.s64 = 31;
loc_8301BC84:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301BC8C"))) PPC_WEAK_FUNC(sub_8301BC8C);
PPC_FUNC_IMPL(__imp__sub_8301BC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301BC90"))) PPC_WEAK_FUNC(sub_8301BC90);
PPC_FUNC_IMPL(__imp__sub_8301BC90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x8301BC98;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8301bcd4
	if (ctx.cr6.eq) goto loc_8301BCD4;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x8301BCD0;
	sub_82FA77C0(ctx, base);
	// b 0x8301bce0
	goto loc_8301BCE0;
loc_8301BCD4:
	// li r11,0
	ctx.r11.s64 = 0;
	// std r11,92(r1)
	PPC_STORE_U64(ctx.r1.u32 + 92, ctx.r11.u64);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
loc_8301BCE0:
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,15168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15168);
	// addi r3,r11,1652
	ctx.r3.s64 = ctx.r11.s64 + 1652;
	// bl 0x830639c8
	ctx.lr = 0x8301BCF4;
	sub_830639C8(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301bd84
	if (ctx.cr6.eq) goto loc_8301BD84;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// lwz r11,15272(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15272);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,15272(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15272, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x83040c88
	ctx.lr = 0x8301BD1C;
	sub_83040C88(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,15172(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 15172);
	// bl 0x83040da0
	ctx.lr = 0x8301BD30;
	sub_83040DA0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8301bd84
	if (!ctx.cr6.eq) goto loc_8301BD84;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8301bd4c
	if (!ctx.cr6.eq) goto loc_8301BD4C;
	// rlwinm r11,r29,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301bd78
	if (ctx.cr6.eq) goto loc_8301BD78;
loc_8301BD4C:
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,15204(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15204);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// bl 0x830266c8
	ctx.lr = 0x8301BD70;
	sub_830266C8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8301bd84
	if (!ctx.cr6.eq) goto loc_8301BD84;
loc_8301BD78:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_8301BD84:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301BD90"))) PPC_WEAK_FUNC(sub_8301BD90);
PPC_FUNC_IMPL(__imp__sub_8301BD90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8301BD98;
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
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x8301a578
	ctx.lr = 0x8301BDB0;
	sub_8301A578(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8301bc90
	ctx.lr = 0x8301BDC8;
	sub_8301BC90(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301BDD0"))) PPC_WEAK_FUNC(sub_8301BDD0);
PPC_FUNC_IMPL(__imp__sub_8301BDD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8301BDD8;
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
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x8301a628
	ctx.lr = 0x8301BDF0;
	sub_8301A628(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8301bc90
	ctx.lr = 0x8301BE08;
	sub_8301BC90(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301BE10"))) PPC_WEAK_FUNC(sub_8301BE10);
PPC_FUNC_IMPL(__imp__sub_8301BE10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8301BE18;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,31
	ctx.r11.s64 = 31;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r11,15168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15168);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// addi r3,r11,1652
	ctx.r3.s64 = ctx.r11.s64 + 1652;
	// bl 0x830639c8
	ctx.lr = 0x8301BE48;
	sub_830639C8(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301be84
	if (ctx.cr6.eq) goto loc_8301BE84;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// bl 0x83040d78
	ctx.lr = 0x8301BE68;
	sub_83040D78(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,15172(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15172);
	// bl 0x83040da0
	ctx.lr = 0x8301BE7C;
	sub_83040DA0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_8301BE84:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301BE90"))) PPC_WEAK_FUNC(sub_8301BE90);
PPC_FUNC_IMPL(__imp__sub_8301BE90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8301BE98;
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
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x8301a578
	ctx.lr = 0x8301BEB0;
	sub_8301A578(ctx, base);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8301be10
	ctx.lr = 0x8301BEC4;
	sub_8301BE10(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301BECC"))) PPC_WEAK_FUNC(sub_8301BECC);
PPC_FUNC_IMPL(__imp__sub_8301BECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301BED0"))) PPC_WEAK_FUNC(sub_8301BED0);
PPC_FUNC_IMPL(__imp__sub_8301BED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8301BED8;
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
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x8301a628
	ctx.lr = 0x8301BEF0;
	sub_8301A628(ctx, base);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8301be10
	ctx.lr = 0x8301BF04;
	sub_8301BE10(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301BF0C"))) PPC_WEAK_FUNC(sub_8301BF0C);
PPC_FUNC_IMPL(__imp__sub_8301BF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301BF10"))) PPC_WEAK_FUNC(sub_8301BF10);
PPC_FUNC_IMPL(__imp__sub_8301BF10) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,35
	ctx.r11.s64 = 35;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,15168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15168);
	// addi r3,r11,1652
	ctx.r3.s64 = ctx.r11.s64 + 1652;
	// bl 0x830639c8
	ctx.lr = 0x8301BF48;
	sub_830639C8(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301bf78
	if (ctx.cr6.eq) goto loc_8301BF78;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// bl 0x83040d90
	ctx.lr = 0x8301BF60;
	sub_83040D90(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,15172(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15172);
	// bl 0x83040da0
	ctx.lr = 0x8301BF74;
	sub_83040DA0(ctx, base);
	// b 0x8301bf7c
	goto loc_8301BF7C;
loc_8301BF78:
	// li r3,2
	ctx.r3.s64 = 2;
loc_8301BF7C:
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

__attribute__((alias("__imp__sub_8301BF94"))) PPC_WEAK_FUNC(sub_8301BF94);
PPC_FUNC_IMPL(__imp__sub_8301BF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301BF98"))) PPC_WEAK_FUNC(sub_8301BF98);
PPC_FUNC_IMPL(__imp__sub_8301BF98) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8301a578
	ctx.lr = 0x8301BFB8;
	sub_8301A578(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8301bf10
	ctx.lr = 0x8301BFC4;
	sub_8301BF10(ctx, base);
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

__attribute__((alias("__imp__sub_8301BFDC"))) PPC_WEAK_FUNC(sub_8301BFDC);
PPC_FUNC_IMPL(__imp__sub_8301BFDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301BFE0"))) PPC_WEAK_FUNC(sub_8301BFE0);
PPC_FUNC_IMPL(__imp__sub_8301BFE0) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8301a628
	ctx.lr = 0x8301C000;
	sub_8301A628(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8301bf10
	ctx.lr = 0x8301C00C;
	sub_8301BF10(ctx, base);
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

__attribute__((alias("__imp__sub_8301C024"))) PPC_WEAK_FUNC(sub_8301C024);
PPC_FUNC_IMPL(__imp__sub_8301C024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301C028"))) PPC_WEAK_FUNC(sub_8301C028);
PPC_FUNC_IMPL(__imp__sub_8301C028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8301C030;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,15168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15168);
	// addi r3,r11,5672
	ctx.r3.s64 = ctx.r11.s64 + 5672;
	// bl 0x830639c8
	ctx.lr = 0x8301C050;
	sub_830639C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8301c064
	if (!ctx.cr6.eq) goto loc_8301C064;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_8301C064:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x830404f8
	ctx.lr = 0x8301C078;
	sub_830404F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8301C090;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301C09C"))) PPC_WEAK_FUNC(sub_8301C09C);
PPC_FUNC_IMPL(__imp__sub_8301C09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301C0A0"))) PPC_WEAK_FUNC(sub_8301C0A0);
PPC_FUNC_IMPL(__imp__sub_8301C0A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x8301C0A8;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8301a578
	ctx.lr = 0x8301C0BC;
	sub_8301A578(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,15168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15168);
	// addi r3,r11,5672
	ctx.r3.s64 = ctx.r11.s64 + 5672;
	// bl 0x830639c8
	ctx.lr = 0x8301C0D0;
	sub_830639C8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8301c0e4
	if (!ctx.cr6.eq) goto loc_8301C0E4;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_8301C0E4:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r10,r11
	ctx.r10.s64 = -ctx.r11.s64;
	// rlwinm r12,r10,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x82faced4
	ctx.lr = 0x8301C0F4;
	sub_82FACED4(ctx, base);
	// lwz r9,0(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// stwux r9,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r1.u32 = ea;
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x83050138
	ctx.lr = 0x8301C118;
	sub_83050138(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8301c138
	if (!ctx.cr6.eq) goto loc_8301C138;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
	// bl 0x830404f8
	ctx.lr = 0x8301C134;
	sub_830404F8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_8301C138:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8301C14C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301C158"))) PPC_WEAK_FUNC(sub_8301C158);
PPC_FUNC_IMPL(__imp__sub_8301C158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x8301C160;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8301a628
	ctx.lr = 0x8301C174;
	sub_8301A628(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,15168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15168);
	// addi r3,r11,5672
	ctx.r3.s64 = ctx.r11.s64 + 5672;
	// bl 0x830639c8
	ctx.lr = 0x8301C188;
	sub_830639C8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8301c19c
	if (!ctx.cr6.eq) goto loc_8301C19C;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_8301C19C:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r10,r11
	ctx.r10.s64 = -ctx.r11.s64;
	// rlwinm r12,r10,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x82faced4
	ctx.lr = 0x8301C1AC;
	sub_82FACED4(ctx, base);
	// lwz r9,0(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// stwux r9,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r1.u32 = ea;
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x830501b0
	ctx.lr = 0x8301C1D0;
	sub_830501B0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8301c1f0
	if (!ctx.cr6.eq) goto loc_8301C1F0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
	// bl 0x830404f8
	ctx.lr = 0x8301C1EC;
	sub_830404F8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_8301C1F0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8301C204;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301C210"))) PPC_WEAK_FUNC(sub_8301C210);
PPC_FUNC_IMPL(__imp__sub_8301C210) {
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
	// li r11,23
	ctx.r11.s64 = 23;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,15168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15168);
	// addi r3,r11,4868
	ctx.r3.s64 = ctx.r11.s64 + 4868;
	// bl 0x830639c8
	ctx.lr = 0x8301C240;
	sub_830639C8(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301c2a8
	if (ctx.cr6.eq) goto loc_8301C2A8;
	// lbz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8301c298
	if (!ctx.cr6.eq) goto loc_8301C298;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// bne cr6,0x8301c268
	if (!ctx.cr6.eq) goto loc_8301C268;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,88(r3)
	PPC_STORE_U8(ctx.r3.u32 + 88, ctx.r11.u8);
loc_8301C268:
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// bl 0x83040d38
	ctx.lr = 0x8301C270;
	sub_83040D38(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,15172(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15172);
	// bl 0x83040da0
	ctx.lr = 0x8301C284;
	sub_83040DA0(ctx, base);
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
loc_8301C298:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8301C2A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8301C2A8:
	// li r3,2
	ctx.r3.s64 = 2;
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

__attribute__((alias("__imp__sub_8301C2C0"))) PPC_WEAK_FUNC(sub_8301C2C0);
PPC_FUNC_IMPL(__imp__sub_8301C2C0) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8301c210
	sub_8301C210(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301C2C8"))) PPC_WEAK_FUNC(sub_8301C2C8);
PPC_FUNC_IMPL(__imp__sub_8301C2C8) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8301c210
	sub_8301C210(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301C2D0"))) PPC_WEAK_FUNC(sub_8301C2D0);
PPC_FUNC_IMPL(__imp__sub_8301C2D0) {
	PPC_FUNC_PROLOGUE();
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x8301c210
	sub_8301C210(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301C2D8"))) PPC_WEAK_FUNC(sub_8301C2D8);
PPC_FUNC_IMPL(__imp__sub_8301C2D8) {
	PPC_FUNC_PROLOGUE();
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x8301c210
	sub_8301C210(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301C2E0"))) PPC_WEAK_FUNC(sub_8301C2E0);
PPC_FUNC_IMPL(__imp__sub_8301C2E0) {
	PPC_FUNC_PROLOGUE();
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x8301c210
	sub_8301C210(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301C2E8"))) PPC_WEAK_FUNC(sub_8301C2E8);
PPC_FUNC_IMPL(__imp__sub_8301C2E8) {
	PPC_FUNC_PROLOGUE();
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x8301c210
	sub_8301C210(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301C2F0"))) PPC_WEAK_FUNC(sub_8301C2F0);
PPC_FUNC_IMPL(__imp__sub_8301C2F0) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,15168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15168);
	// addi r3,r11,4868
	ctx.r3.s64 = ctx.r11.s64 + 4868;
	// bl 0x830639c8
	ctx.lr = 0x8301C314;
	sub_830639C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8301c334
	if (!ctx.cr6.eq) goto loc_8301C334;
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
loc_8301C334:
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x831791a4
	ctx.lr = 0x8301C33C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8301C350;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
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

__attribute__((alias("__imp__sub_8301C368"))) PPC_WEAK_FUNC(sub_8301C368);
PPC_FUNC_IMPL(__imp__sub_8301C368) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,15168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15168);
	// addi r3,r11,4868
	ctx.r3.s64 = ctx.r11.s64 + 4868;
	// bl 0x830639c8
	ctx.lr = 0x8301C38C;
	sub_830639C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8301c3b0
	if (!ctx.cr6.eq) goto loc_8301C3B0;
	// li r3,2
	ctx.r3.s64 = 2;
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
loc_8301C3B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83045db8
	ctx.lr = 0x8301C3B8;
	sub_83045DB8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8301C3CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_8301C3E4"))) PPC_WEAK_FUNC(sub_8301C3E4);
PPC_FUNC_IMPL(__imp__sub_8301C3E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301C3E8"))) PPC_WEAK_FUNC(sub_8301C3E8);
PPC_FUNC_IMPL(__imp__sub_8301C3E8) {
	PPC_FUNC_PROLOGUE();
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x8301bc90
	sub_8301BC90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301C3F0"))) PPC_WEAK_FUNC(sub_8301C3F0);
PPC_FUNC_IMPL(__imp__sub_8301C3F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x8301C3F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a781f0
	ctx.lr = 0x8301C408;
	sub_82A781F0(ctx, base);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,1000
	ctx.r10.s64 = 1000;
	// lis r31,-31958
	ctx.r31.s64 = -2094399488;
	// divd r7,r8,r10
	ctx.r7.s64 = ctx.r8.s64 / ctx.r10.s64;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r28,r11,15212
	ctx.r28.s64 = ctx.r11.s64 + 15212;
	// lwz r11,15168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15168);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// stfs f0,15868(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 15868, temp.u32);
	// lis r29,-31969
	ctx.r29.s64 = -2095120384;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8301c488
	if (!ctx.cr6.eq) goto loc_8301C488;
	// li r4,6476
	ctx.r4.s64 = 6476;
	// lwz r3,-11272(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -11272);
	// bl 0x82fd6b98
	ctx.lr = 0x8301C454;
	sub_82FD6B98(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301c474
	if (ctx.cr6.eq) goto loc_8301C474;
	// bl 0x8301ca90
	ctx.lr = 0x8301C460;
	sub_8301CA90(ctx, base);
	// stw r3,15168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15168, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8301c484
	if (!ctx.cr6.eq) goto loc_8301C484;
	// li r3,52
	ctx.r3.s64 = 52;
	// b 0x8301c804
	goto loc_8301C804;
loc_8301C474:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,52
	ctx.r3.s64 = 52;
	// stw r11,15168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15168, ctx.r11.u32);
	// b 0x8301c804
	goto loc_8301C804;
loc_8301C484:
	// bl 0x83047a50
	ctx.lr = 0x8301C488;
	sub_83047A50(ctx, base);
loc_8301C488:
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r6,255
	ctx.r6.s64 = 255;
	// addi r3,r11,15304
	ctx.r3.s64 = ctx.r11.s64 + 15304;
	// li r5,333
	ctx.r5.s64 = 333;
	// li r4,333
	ctx.r4.s64 = 333;
	// bl 0x83047ea8
	ctx.lr = 0x8301C4A0;
	sub_83047EA8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8301c804
	if (!ctx.cr6.eq) goto loc_8301C804;
	// lis r31,-31958
	ctx.r31.s64 = -2094399488;
	// lwz r11,15196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15196);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8301c500
	if (!ctx.cr6.eq) goto loc_8301C500;
	// li r4,1852
	ctx.r4.s64 = 1852;
	// lwz r3,-11272(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -11272);
	// bl 0x82fd6b98
	ctx.lr = 0x8301C4C4;
	sub_82FD6B98(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301c4e4
	if (ctx.cr6.eq) goto loc_8301C4E4;
	// bl 0x83048e98
	ctx.lr = 0x8301C4D0;
	sub_83048E98(ctx, base);
	// stw r3,15196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15196, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8301c4f4
	if (!ctx.cr6.eq) goto loc_8301C4F4;
	// li r3,52
	ctx.r3.s64 = 52;
	// b 0x8301c804
	goto loc_8301C804;
loc_8301C4E4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,52
	ctx.r3.s64 = 52;
	// stw r11,15196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15196, ctx.r11.u32);
	// b 0x8301c804
	goto loc_8301C804;
loc_8301C4F4:
	// bl 0x8304aad0
	ctx.lr = 0x8301C4F8;
	sub_8304AAD0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8301c804
	if (!ctx.cr6.eq) goto loc_8301C804;
loc_8301C500:
	// lis r31,-31958
	ctx.r31.s64 = -2094399488;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,15200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15200);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8301c58c
	if (!ctx.cr6.eq) goto loc_8301C58C;
	// li r4,204
	ctx.r4.s64 = 204;
	// lwz r3,-11272(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -11272);
	// bl 0x82fd6b98
	ctx.lr = 0x8301C520;
	sub_82FD6B98(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301c5c8
	if (ctx.cr6.eq) goto loc_8301C5C8;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r9,r11,-14320
	ctx.r9.s64 = ctx.r11.s64 + -14320;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r30,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r30.u32);
	// stw r30,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r30.u32);
	// stw r30,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r30.u32);
	// stw r30,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r30.u32);
	// stw r30,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r30.u32);
	// stw r30,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r30.u32);
	// stw r30,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r30.u32);
	// stw r30,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r30.u32);
	// stw r30,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r30.u32);
	// stw r30,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r30.u32);
	// stw r30,180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 180, ctx.r30.u32);
	// stw r30,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r30.u32);
	// stw r30,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r30.u32);
	// stw r30,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r30.u32);
	// stw r30,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r30.u32);
	// stw r30,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r30.u32);
	// stw r3,15200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15200, ctx.r3.u32);
	// bl 0x83046ca0
	ctx.lr = 0x8301C584;
	sub_83046CA0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8301c804
	if (!ctx.cr6.eq) goto loc_8301C804;
loc_8301C58C:
	// lis r31,-31958
	ctx.r31.s64 = -2094399488;
	// lwz r11,15184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15184);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8301c5f4
	if (!ctx.cr6.eq) goto loc_8301C5F4;
	// li r4,1228
	ctx.r4.s64 = 1228;
	// lwz r3,-11272(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -11272);
	// bl 0x82fd6b98
	ctx.lr = 0x8301C5A8;
	sub_82FD6B98(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301c5d8
	if (ctx.cr6.eq) goto loc_8301C5D8;
	// bl 0x8302bcd8
	ctx.lr = 0x8301C5B4;
	sub_8302BCD8(ctx, base);
	// stw r3,15184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15184, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8301c5e8
	if (!ctx.cr6.eq) goto loc_8301C5E8;
	// li r3,52
	ctx.r3.s64 = 52;
	// b 0x8301c804
	goto loc_8301C804;
loc_8301C5C8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,52
	ctx.r3.s64 = 52;
	// stw r11,15200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15200, ctx.r11.u32);
	// b 0x8301c804
	goto loc_8301C804;
loc_8301C5D8:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,15184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15184, ctx.r30.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// b 0x8301c804
	goto loc_8301C804;
loc_8301C5E8:
	// bl 0x8302f990
	ctx.lr = 0x8301C5EC;
	sub_8302F990(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8301c804
	if (!ctx.cr6.eq) goto loc_8301C804;
loc_8301C5F4:
	// lis r31,-31958
	ctx.r31.s64 = -2094399488;
	// lwz r11,15204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8301c64c
	if (!ctx.cr6.eq) goto loc_8301C64C;
	// li r4,168
	ctx.r4.s64 = 168;
	// lwz r3,-11272(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -11272);
	// bl 0x82fd6b98
	ctx.lr = 0x8301C610;
	sub_82FD6B98(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301c630
	if (ctx.cr6.eq) goto loc_8301C630;
	// bl 0x8301c9c8
	ctx.lr = 0x8301C61C;
	sub_8301C9C8(ctx, base);
	// stw r3,15204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15204, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8301c640
	if (!ctx.cr6.eq) goto loc_8301C640;
	// li r3,52
	ctx.r3.s64 = 52;
	// b 0x8301c804
	goto loc_8301C804;
loc_8301C630:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,15204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15204, ctx.r30.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// b 0x8301c804
	goto loc_8301C804;
loc_8301C640:
	// bl 0x83026548
	ctx.lr = 0x8301C644;
	sub_83026548(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8301c804
	if (!ctx.cr6.eq) goto loc_8301C804;
loc_8301C64C:
	// lis r31,-31958
	ctx.r31.s64 = -2094399488;
	// lwz r11,15208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15208);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8301c6a4
	if (!ctx.cr6.eq) goto loc_8301C6A4;
	// li r4,56
	ctx.r4.s64 = 56;
	// lwz r3,-11272(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -11272);
	// bl 0x82fd6b98
	ctx.lr = 0x8301C668;
	sub_82FD6B98(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301c688
	if (ctx.cr6.eq) goto loc_8301C688;
	// bl 0x830458f8
	ctx.lr = 0x8301C674;
	sub_830458F8(ctx, base);
	// stw r3,15208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15208, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8301c698
	if (!ctx.cr6.eq) goto loc_8301C698;
	// li r3,52
	ctx.r3.s64 = 52;
	// b 0x8301c804
	goto loc_8301C804;
loc_8301C688:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,15208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15208, ctx.r30.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// b 0x8301c804
	goto loc_8301C804;
loc_8301C698:
	// bl 0x83045868
	ctx.lr = 0x8301C69C;
	sub_83045868(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8301c804
	if (!ctx.cr6.eq) goto loc_8301C804;
loc_8301C6A4:
	// lis r31,-31958
	ctx.r31.s64 = -2094399488;
	// lwz r11,15180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8301c6fc
	if (!ctx.cr6.eq) goto loc_8301C6FC;
	// li r4,816
	ctx.r4.s64 = 816;
	// lwz r3,-11272(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -11272);
	// bl 0x82fd6b98
	ctx.lr = 0x8301C6C0;
	sub_82FD6B98(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301c6e0
	if (ctx.cr6.eq) goto loc_8301C6E0;
	// bl 0x8304c0e8
	ctx.lr = 0x8301C6CC;
	sub_8304C0E8(ctx, base);
	// stw r3,15180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15180, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8301c6f0
	if (!ctx.cr6.eq) goto loc_8301C6F0;
	// li r3,52
	ctx.r3.s64 = 52;
	// b 0x8301c804
	goto loc_8301C804;
loc_8301C6E0:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,15180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15180, ctx.r30.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// b 0x8301c804
	goto loc_8301C804;
loc_8301C6F0:
	// bl 0x8304c128
	ctx.lr = 0x8301C6F4;
	sub_8304C128(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8301c804
	if (!ctx.cr6.eq) goto loc_8301C804;
loc_8301C6FC:
	// lis r31,-31958
	ctx.r31.s64 = -2094399488;
	// lwz r11,15188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15188);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8301c758
	if (!ctx.cr6.eq) goto loc_8301C758;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r3,-11272(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -11272);
	// bl 0x82fd6b98
	ctx.lr = 0x8301C718;
	sub_82FD6B98(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301c738
	if (ctx.cr6.eq) goto loc_8301C738;
	// bl 0x83027418
	ctx.lr = 0x8301C724;
	sub_83027418(ctx, base);
	// stw r3,15188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15188, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8301c748
	if (!ctx.cr6.eq) goto loc_8301C748;
	// li r3,52
	ctx.r3.s64 = 52;
	// b 0x8301c804
	goto loc_8301C804;
loc_8301C738:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,15188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15188, ctx.r30.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// b 0x8301c804
	goto loc_8301C804;
loc_8301C748:
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// bl 0x83027458
	ctx.lr = 0x8301C750;
	sub_83027458(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8301c804
	if (!ctx.cr6.eq) goto loc_8301C804;
loc_8301C758:
	// lis r31,-31958
	ctx.r31.s64 = -2094399488;
	// lwz r11,15192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15192);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8301c7b4
	if (!ctx.cr6.eq) goto loc_8301C7B4;
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r3,-11272(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -11272);
	// bl 0x82fd6b98
	ctx.lr = 0x8301C774;
	sub_82FD6B98(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301c794
	if (ctx.cr6.eq) goto loc_8301C794;
	// bl 0x8304cfd0
	ctx.lr = 0x8301C780;
	sub_8304CFD0(ctx, base);
	// stw r3,15192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15192, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8301c7a4
	if (!ctx.cr6.eq) goto loc_8301C7A4;
	// li r3,52
	ctx.r3.s64 = 52;
	// b 0x8301c804
	goto loc_8301C804;
loc_8301C794:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,15192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15192, ctx.r30.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// b 0x8301c804
	goto loc_8301C804;
loc_8301C7A4:
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x8304d008
	ctx.lr = 0x8301C7AC;
	sub_8304D008(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8301c804
	if (!ctx.cr6.eq) goto loc_8301C804;
loc_8301C7B4:
	// lis r31,-31958
	ctx.r31.s64 = -2094399488;
	// lwz r11,15176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8301c804
	if (!ctx.cr6.eq) goto loc_8301C804;
	// li r4,132
	ctx.r4.s64 = 132;
	// lwz r3,-11272(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -11272);
	// bl 0x82fd6b98
	ctx.lr = 0x8301C7D0;
	sub_82FD6B98(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301c7f0
	if (ctx.cr6.eq) goto loc_8301C7F0;
	// bl 0x83028050
	ctx.lr = 0x8301C7DC;
	sub_83028050(ctx, base);
	// stw r3,15176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15176, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8301c800
	if (!ctx.cr6.eq) goto loc_8301C800;
	// li r3,52
	ctx.r3.s64 = 52;
	// b 0x8301c804
	goto loc_8301C804;
loc_8301C7F0:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,15176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15176, ctx.r30.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// b 0x8301c804
	goto loc_8301C804;
loc_8301C800:
	// bl 0x83027e60
	ctx.lr = 0x8301C804;
	sub_83027E60(ctx, base);
loc_8301C804:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8301c828
	if (ctx.cr6.eq) goto loc_8301C828;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r27,-4
	ctx.r10.s64 = ctx.r27.s64 + -4;
	// addi r11,r28,-4
	ctx.r11.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8301C81C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8301c81c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8301C81C;
loc_8301C828:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301C830"))) PPC_WEAK_FUNC(sub_8301C830);
PPC_FUNC_IMPL(__imp__sub_8301C830) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8301C838;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,-11268(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11268, ctx.r11.u32);
	// bl 0x82fd69f0
	ctx.lr = 0x8301C854;
	sub_82FD69F0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8301c86c
	if (!ctx.cr6.eq) goto loc_8301C86C;
	// li r3,74
	ctx.r3.s64 = 74;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_8301C86C:
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lwz r11,18596(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18596);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8301c888
	if (!ctx.cr6.eq) goto loc_8301C888;
	// li r3,75
	ctx.r3.s64 = 75;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_8301C888:
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r11,r11,15212
	ctx.r11.s64 = ctx.r11.s64 + 15212;
	// bne cr6,0x8301c8e0
	if (!ctx.cr6.eq) goto loc_8301C8E0;
	// lis r6,-32233
	ctx.r6.s64 = -2112421888;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,255
	ctx.r9.s64 = 255;
	// li r8,255
	ctx.r8.s64 = 255;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lis r7,256
	ctx.r7.s64 = 16777216;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lfs f0,24436(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 24436);
	ctx.f0.f64 = double(temp.f32);
	// lis r6,4
	ctx.r6.s64 = 262144;
	// li r5,-1
	ctx.r5.s64 = -1;
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// stw r6,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r6.u32);
	// stw r5,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r5.u32);
	// stb r4,28(r11)
	PPC_STORE_U8(ctx.r11.u32 + 28, ctx.r4.u8);
	// b 0x8301c900
	goto loc_8301C900;
loc_8301C8E0:
	// li r8,8
	ctx.r8.s64 = 8;
	// addi r10,r29,-4
	ctx.r10.s64 = ctx.r29.s64 + -4;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8301C8F0:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8301c8f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8301C8F0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8301C900:
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,15244(r11)
	PPC_STORE_U32(ctx.r11.u32 + 15244, ctx.r10.u32);
	// bl 0x8301db00
	ctx.lr = 0x8301C910;
	sub_8301DB00(ctx, base);
	// lis r31,-31958
	ctx.r31.s64 = -2094399488;
	// li r30,2
	ctx.r30.s64 = 2;
	// lbz r10,15268(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 15268);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8301c990
	if (!ctx.cr6.eq) goto loc_8301C990;
	// bl 0x830199c0
	ctx.lr = 0x8301C928;
	sub_830199C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8301c968
	if (!ctx.cr6.eq) goto loc_8301C968;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8301c3f0
	ctx.lr = 0x8301C93C;
	sub_8301C3F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8301c958
	if (!ctx.cr6.eq) goto loc_8301C958;
	// bl 0x83019a80
	ctx.lr = 0x8301C94C;
	sub_83019A80(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8301c960
	if (ctx.cr6.eq) goto loc_8301C960;
loc_8301C958:
	// bl 0x83019d40
	ctx.lr = 0x8301C95C;
	sub_83019D40(ctx, base);
	// b 0x8301c968
	goto loc_8301C968;
loc_8301C960:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,15268(r31)
	PPC_STORE_U8(ctx.r31.u32 + 15268, ctx.r11.u8);
loc_8301C968:
	// lbz r10,15268(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 15268);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8301c990
	if (!ctx.cr6.eq) goto loc_8301C990;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r3,-11272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -11272);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8301c990
	if (ctx.cr6.eq) goto loc_8301C990;
	// bl 0x82fd7328
	ctx.lr = 0x8301C988;
	sub_82FD7328(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,-11272(r31)
	PPC_STORE_U32(ctx.r31.u32 + -11272, ctx.r11.u32);
loc_8301C990:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,35
	ctx.r5.s64 = 35;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// bl 0x82fa7cf0
	ctx.lr = 0x8301C9A8;
	sub_82FA7CF0(ctx, base);
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// li r5,36
	ctx.r5.s64 = 36;
	// addi r4,r10,-14828
	ctx.r4.s64 = ctx.r10.s64 + -14828;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fa5b30
	ctx.lr = 0x8301C9BC;
	sub_82FA5B30(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301C9C8"))) PPC_WEAK_FUNC(sub_8301C9C8);
PPC_FUNC_IMPL(__imp__sub_8301C9C8) {
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
	// addi r10,r11,-14832
	ctx.r10.s64 = ctx.r11.s64 + -14832;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r3,r3,136
	ctx.r3.s64 = ctx.r3.s64 + 136;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// bl 0x831791c4
	ctx.lr = 0x8301CA04;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_8301CA24"))) PPC_WEAK_FUNC(sub_8301CA24);
PPC_FUNC_IMPL(__imp__sub_8301CA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301CA28"))) PPC_WEAK_FUNC(sub_8301CA28);
PPC_FUNC_IMPL(__imp__sub_8301CA28) {
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
	// lwz r3,164(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301ca54
	if (ctx.cr6.eq) goto loc_8301CA54;
	// bl 0x82a756a0
	ctx.lr = 0x8301CA54;
	sub_82A756A0(ctx, base);
loc_8301CA54:
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
	// beq cr6,0x8301ca78
	if (ctx.cr6.eq) goto loc_8301CA78;
	// bl 0x82691540
	ctx.lr = 0x8301CA74;
	sub_82691540(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8301CA78:
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

__attribute__((alias("__imp__sub_8301CA90"))) PPC_WEAK_FUNC(sub_8301CA90);
PPC_FUNC_IMPL(__imp__sub_8301CA90) {
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
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,-14320
	ctx.r10.s64 = ctx.r11.s64 + -14320;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x831791c4
	ctx.lr = 0x8301CABC;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r31,808
	ctx.r3.s64 = ctx.r31.s64 + 808;
	// stw r30,804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 804, ctx.r30.u32);
	// bl 0x831791c4
	ctx.lr = 0x8301CACC;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// stw r30,836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 836, ctx.r30.u32);
	// stw r30,840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 840, ctx.r30.u32);
	// addi r3,r31,848
	ctx.r3.s64 = ctx.r31.s64 + 848;
	// stw r30,844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 844, ctx.r30.u32);
	// bl 0x831791c4
	ctx.lr = 0x8301CAE0;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// stw r30,1648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1648, ctx.r30.u32);
	// addi r3,r31,1652
	ctx.r3.s64 = ctx.r31.s64 + 1652;
	// bl 0x831791c4
	ctx.lr = 0x8301CAEC;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// stw r30,2452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2452, ctx.r30.u32);
	// addi r3,r31,2456
	ctx.r3.s64 = ctx.r31.s64 + 2456;
	// bl 0x831791c4
	ctx.lr = 0x8301CAF8;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// stw r30,3256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3256, ctx.r30.u32);
	// addi r3,r31,3260
	ctx.r3.s64 = ctx.r31.s64 + 3260;
	// bl 0x831791c4
	ctx.lr = 0x8301CB04;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// stw r30,4060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4060, ctx.r30.u32);
	// addi r3,r31,4064
	ctx.r3.s64 = ctx.r31.s64 + 4064;
	// bl 0x831791c4
	ctx.lr = 0x8301CB10;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// stw r30,4864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4864, ctx.r30.u32);
	// addi r3,r31,4868
	ctx.r3.s64 = ctx.r31.s64 + 4868;
	// bl 0x831791c4
	ctx.lr = 0x8301CB1C;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// stw r30,5668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5668, ctx.r30.u32);
	// addi r3,r31,5672
	ctx.r3.s64 = ctx.r31.s64 + 5672;
	// bl 0x831791c4
	ctx.lr = 0x8301CB28;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// stw r30,6472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6472, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_8301CB48"))) PPC_WEAK_FUNC(sub_8301CB48);
PPC_FUNC_IMPL(__imp__sub_8301CB48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8301CB50;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,15276
	ctx.r29.s64 = ctx.r11.s64 + 15276;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791a4
	ctx.lr = 0x8301CB6C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,15180(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15180);
	// bl 0x8304c228
	ctx.lr = 0x8301CB7C;
	sub_8304C228(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8301cb9c
	if (!ctx.cr6.eq) goto loc_8301CB9C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791b4
	ctx.lr = 0x8301CB90;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_8301CB9C:
	// lbz r11,18(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 18);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// bgt 0x8301cbe0
	if (ctx.cr0.gt) goto loc_8301CBE0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r30,-11272(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11272);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8301CBD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fd6cc8
	ctx.lr = 0x8301CBE0;
	sub_82FD6CC8(ctx, base);
loc_8301CBE0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791b4
	ctx.lr = 0x8301CBE8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301CBF4"))) PPC_WEAK_FUNC(sub_8301CBF4);
PPC_FUNC_IMPL(__imp__sub_8301CBF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301CBF8"))) PPC_WEAK_FUNC(sub_8301CBF8);
PPC_FUNC_IMPL(__imp__sub_8301CBF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8301CC00;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,15276
	ctx.r29.s64 = ctx.r11.s64 + 15276;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791a4
	ctx.lr = 0x8301CC1C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83050870
	ctx.lr = 0x8301CC28;
	sub_83050870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791b4
	ctx.lr = 0x8301CC34;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301CC40"))) PPC_WEAK_FUNC(sub_8301CC40);
PPC_FUNC_IMPL(__imp__sub_8301CC40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8301CC48;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r28,r11,15276
	ctx.r28.s64 = ctx.r11.s64 + 15276;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x831791a4
	ctx.lr = 0x8301CC68;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83050950
	ctx.lr = 0x8301CC78;
	sub_83050950(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831791b4
	ctx.lr = 0x8301CC84;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301CC90"))) PPC_WEAK_FUNC(sub_8301CC90);
PPC_FUNC_IMPL(__imp__sub_8301CC90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x8301CC98;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,15276
	ctx.r30.s64 = ctx.r11.s64 + 15276;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x831791a4
	ctx.lr = 0x8301CCBC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,15180(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15180);
	// bl 0x8304c228
	ctx.lr = 0x8301CCCC;
	sub_8304C228(ctx, base);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,15196(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15196);
	// bl 0x83048c00
	ctx.lr = 0x8301CCEC;
	sub_83048C00(ctx, base);
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// stb r6,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r6.u8);
	// beq cr6,0x8301cd44
	if (ctx.cr6.eq) goto loc_8301CD44;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// bgt 0x8301cd44
	if (ctx.cr0.gt) goto loc_8301CD44;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r28,-11272(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11272);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8301CD38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82fd6cc8
	ctx.lr = 0x8301CD44;
	sub_82FD6CC8(ctx, base);
loc_8301CD44:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791b4
	ctx.lr = 0x8301CD4C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301CD6C"))) PPC_WEAK_FUNC(sub_8301CD6C);
PPC_FUNC_IMPL(__imp__sub_8301CD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301CD70"))) PPC_WEAK_FUNC(sub_8301CD70);
PPC_FUNC_IMPL(__imp__sub_8301CD70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8301CD78;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x8301a578
	ctx.lr = 0x8301CD8C;
	sub_8301A578(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8301cda0
	if (!ctx.cr6.eq) goto loc_8301CDA0;
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_8301CDA0:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8301cc90
	ctx.lr = 0x8301CDB0;
	sub_8301CC90(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301CDB8"))) PPC_WEAK_FUNC(sub_8301CDB8);
PPC_FUNC_IMPL(__imp__sub_8301CDB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8301CDC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x8301a628
	ctx.lr = 0x8301CDD4;
	sub_8301A628(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8301cde8
	if (!ctx.cr6.eq) goto loc_8301CDE8;
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_8301CDE8:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8301cc90
	ctx.lr = 0x8301CDF8;
	sub_8301CC90(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301CE00"))) PPC_WEAK_FUNC(sub_8301CE00);
PPC_FUNC_IMPL(__imp__sub_8301CE00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8301CE08;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r28,r11,15276
	ctx.r28.s64 = ctx.r11.s64 + 15276;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x831791a4
	ctx.lr = 0x8301CE28;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,15180(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15180);
	// bl 0x8304c228
	ctx.lr = 0x8301CE38;
	sub_8304C228(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8301ce58
	if (!ctx.cr6.eq) goto loc_8301CE58;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831791b4
	ctx.lr = 0x8301CE4C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_8301CE58:
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,15196(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15196);
	// bl 0x83049050
	ctx.lr = 0x8301CE6C;
	sub_83049050(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// bgt 0x8301ceac
	if (ctx.cr0.gt) goto loc_8301CEAC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r30,-11272(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11272);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8301CEA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fd6cc8
	ctx.lr = 0x8301CEAC;
	sub_82FD6CC8(ctx, base);
loc_8301CEAC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831791b4
	ctx.lr = 0x8301CEB4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301CEC0"))) PPC_WEAK_FUNC(sub_8301CEC0);
PPC_FUNC_IMPL(__imp__sub_8301CEC0) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8301a578
	ctx.lr = 0x8301CEE0;
	sub_8301A578(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8301cef0
	if (!ctx.cr6.eq) goto loc_8301CEF0;
	// li r3,15
	ctx.r3.s64 = 15;
	// b 0x8301cefc
	goto loc_8301CEFC;
loc_8301CEF0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8301ce00
	ctx.lr = 0x8301CEFC;
	sub_8301CE00(ctx, base);
loc_8301CEFC:
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

__attribute__((alias("__imp__sub_8301CF14"))) PPC_WEAK_FUNC(sub_8301CF14);
PPC_FUNC_IMPL(__imp__sub_8301CF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301CF18"))) PPC_WEAK_FUNC(sub_8301CF18);
PPC_FUNC_IMPL(__imp__sub_8301CF18) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8301a628
	ctx.lr = 0x8301CF38;
	sub_8301A628(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8301cf48
	if (!ctx.cr6.eq) goto loc_8301CF48;
	// li r3,15
	ctx.r3.s64 = 15;
	// b 0x8301cf54
	goto loc_8301CF54;
loc_8301CF48:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8301ce00
	ctx.lr = 0x8301CF54;
	sub_8301CE00(ctx, base);
loc_8301CF54:
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

__attribute__((alias("__imp__sub_8301CF6C"))) PPC_WEAK_FUNC(sub_8301CF6C);
PPC_FUNC_IMPL(__imp__sub_8301CF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301CF70"))) PPC_WEAK_FUNC(sub_8301CF70);
PPC_FUNC_IMPL(__imp__sub_8301CF70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8301CF78;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,15276
	ctx.r29.s64 = ctx.r11.s64 + 15276;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791a4
	ctx.lr = 0x8301CF94;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,15176(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15176);
	// bl 0x83028198
	ctx.lr = 0x8301CFA4;
	sub_83028198(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791b4
	ctx.lr = 0x8301CFB0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301CFBC"))) PPC_WEAK_FUNC(sub_8301CFBC);
PPC_FUNC_IMPL(__imp__sub_8301CFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301CFC0"))) PPC_WEAK_FUNC(sub_8301CFC0);
PPC_FUNC_IMPL(__imp__sub_8301CFC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8301CFC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8301a578
	ctx.lr = 0x8301CFD4;
	sub_8301A578(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r11,15276
	ctx.r29.s64 = ctx.r11.s64 + 15276;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791a4
	ctx.lr = 0x8301CFE8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,15176(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15176);
	// bl 0x83028198
	ctx.lr = 0x8301CFF8;
	sub_83028198(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791b4
	ctx.lr = 0x8301D004;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301D010"))) PPC_WEAK_FUNC(sub_8301D010);
PPC_FUNC_IMPL(__imp__sub_8301D010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8301D018;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8301a628
	ctx.lr = 0x8301D024;
	sub_8301A628(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r11,15276
	ctx.r29.s64 = ctx.r11.s64 + 15276;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791a4
	ctx.lr = 0x8301D038;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,15176(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15176);
	// bl 0x83028198
	ctx.lr = 0x8301D048;
	sub_83028198(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791b4
	ctx.lr = 0x8301D054;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301D060"))) PPC_WEAK_FUNC(sub_8301D060);
PPC_FUNC_IMPL(__imp__sub_8301D060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x8301D068;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301d178
	if (ctx.cr6.eq) goto loc_8301D178;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8301d178
	if (ctx.cr6.eq) goto loc_8301D178;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r28,r11,15276
	ctx.r28.s64 = ctx.r11.s64 + 15276;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831791a4
	ctx.lr = 0x8301D0A0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,15180(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15180);
	// bl 0x8304c228
	ctx.lr = 0x8301D0B0;
	sub_8304C228(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8301d0d0
	if (!ctx.cr6.eq) goto loc_8301D0D0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831791b4
	ctx.lr = 0x8301D0C4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_8301D0D0:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r29,r31,20
	ctx.r29.s64 = ctx.r31.s64 + 20;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// bgt 0x8301d110
	if (ctx.cr0.gt) goto loc_8301D110;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r30,-11272(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11272);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8301D104;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fd6cc8
	ctx.lr = 0x8301D110;
	sub_82FD6CC8(ctx, base);
loc_8301D110:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_8301D11C:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8301d13c
	if (ctx.cr6.eq) goto loc_8301D13C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x8301d11c
	if (ctx.cr6.lt) goto loc_8301D11C;
loc_8301D13C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8301d150
	if (!ctx.cr6.lt) goto loc_8301D150;
	// li r26,3
	ctx.r26.s64 = 3;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8301D150:
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// rlwinm r5,r10,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a75220
	ctx.lr = 0x8301D164;
	sub_82A75220(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831791b4
	ctx.lr = 0x8301D16C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_8301D178:
	// li r3,31
	ctx.r3.s64 = 31;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301D184"))) PPC_WEAK_FUNC(sub_8301D184);
PPC_FUNC_IMPL(__imp__sub_8301D184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301D188"))) PPC_WEAK_FUNC(sub_8301D188);
PPC_FUNC_IMPL(__imp__sub_8301D188) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8301D190;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,15276
	ctx.r29.s64 = ctx.r11.s64 + 15276;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791a4
	ctx.lr = 0x8301D1AC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,15180(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15180);
	// bl 0x8304c228
	ctx.lr = 0x8301D1BC;
	sub_8304C228(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8301d1dc
	if (!ctx.cr6.eq) goto loc_8301D1DC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791b4
	ctx.lr = 0x8301D1D0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_8301D1DC:
	// lfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// bgt 0x8301d220
	if (ctx.cr0.gt) goto loc_8301D220;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r30,-11272(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11272);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8301D214;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fd6cc8
	ctx.lr = 0x8301D220;
	sub_82FD6CC8(ctx, base);
loc_8301D220:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791b4
	ctx.lr = 0x8301D228;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301D234"))) PPC_WEAK_FUNC(sub_8301D234);
PPC_FUNC_IMPL(__imp__sub_8301D234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301D238"))) PPC_WEAK_FUNC(sub_8301D238);
PPC_FUNC_IMPL(__imp__sub_8301D238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8301D240;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,15276
	ctx.r30.s64 = ctx.r11.s64 + 15276;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791a4
	ctx.lr = 0x8301D25C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,15200(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15200);
	// bl 0x830471c0
	ctx.lr = 0x8301D270;
	sub_830471C0(ctx, base);
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r31,-4
	ctx.r10.s64 = ctx.r31.s64 + -4;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8301D280:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8301d280
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8301D280;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791b4
	ctx.lr = 0x8301D294;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301D2A0"))) PPC_WEAK_FUNC(sub_8301D2A0);
PPC_FUNC_IMPL(__imp__sub_8301D2A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8301D2A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,15276
	ctx.r29.s64 = ctx.r11.s64 + 15276;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791a4
	ctx.lr = 0x8301D2C4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,15200(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15200);
	// bl 0x830472b8
	ctx.lr = 0x8301D2D4;
	sub_830472B8(ctx, base);
	// stb r3,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r3.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791b4
	ctx.lr = 0x8301D2E0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301D2EC"))) PPC_WEAK_FUNC(sub_8301D2EC);
PPC_FUNC_IMPL(__imp__sub_8301D2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301D2F0"))) PPC_WEAK_FUNC(sub_8301D2F0);
PPC_FUNC_IMPL(__imp__sub_8301D2F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x8301D2F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r27,r11,15276
	ctx.r27.s64 = ctx.r11.s64 + 15276;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x831791a4
	ctx.lr = 0x8301D31C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,15180(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15180);
	// bl 0x8304c228
	ctx.lr = 0x8301D32C;
	sub_8304C228(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8301d34c
	if (!ctx.cr6.eq) goto loc_8301D34C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831791b4
	ctx.lr = 0x8301D340;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_8301D34C:
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lbz r8,64(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 64);
	// lfs f0,21472(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21472);
	ctx.f0.f64 = double(temp.f32);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,0(r29)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lbz r6,72(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 72);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,0(r28)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// lwz r5,92(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addic. r11,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r11.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// bgt 0x8301d3cc
	if (ctx.cr0.gt) goto loc_8301D3CC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r30,-11272(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11272);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8301D3C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fd6cc8
	ctx.lr = 0x8301D3CC;
	sub_82FD6CC8(ctx, base);
loc_8301D3CC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831791b4
	ctx.lr = 0x8301D3D4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301D3E0"))) PPC_WEAK_FUNC(sub_8301D3E0);
PPC_FUNC_IMPL(__imp__sub_8301D3E0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,15276
	ctx.r30.s64 = ctx.r11.s64 + 15276;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791a4
	ctx.lr = 0x8301D408;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,15180(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15180);
	// bl 0x8304cb10
	ctx.lr = 0x8301D418;
	sub_8304CB10(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791b4
	ctx.lr = 0x8301D424;
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

__attribute__((alias("__imp__sub_8301D440"))) PPC_WEAK_FUNC(sub_8301D440);
PPC_FUNC_IMPL(__imp__sub_8301D440) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,15276
	ctx.r30.s64 = ctx.r11.s64 + 15276;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791a4
	ctx.lr = 0x8301D468;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,15180(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15180);
	// bl 0x8304c1a8
	ctx.lr = 0x8301D478;
	sub_8304C1A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791b4
	ctx.lr = 0x8301D484;
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

__attribute__((alias("__imp__sub_8301D4A0"))) PPC_WEAK_FUNC(sub_8301D4A0);
PPC_FUNC_IMPL(__imp__sub_8301D4A0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,15276
	ctx.r30.s64 = ctx.r11.s64 + 15276;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791a4
	ctx.lr = 0x8301D4C8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83025418
	ctx.lr = 0x8301D4D0;
	sub_83025418(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791b4
	ctx.lr = 0x8301D4DC;
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

__attribute__((alias("__imp__sub_8301D4F8"))) PPC_WEAK_FUNC(sub_8301D4F8);
PPC_FUNC_IMPL(__imp__sub_8301D4F8) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,15276
	ctx.r30.s64 = ctx.r11.s64 + 15276;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791a4
	ctx.lr = 0x8301D524;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83024e58
	ctx.lr = 0x8301D52C;
	sub_83024E58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x831791b4
	ctx.lr = 0x8301D538;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
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

__attribute__((alias("__imp__sub_8301D558"))) PPC_WEAK_FUNC(sub_8301D558);
PPC_FUNC_IMPL(__imp__sub_8301D558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8301D560;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,15276
	ctx.r31.s64 = ctx.r11.s64 + 15276;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831791a4
	ctx.lr = 0x8301D57C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,15200(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15200);
	// bl 0x830471c0
	ctx.lr = 0x8301D590;
	sub_830471C0(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// addi r9,r3,-4
	ctx.r9.s64 = ctx.r3.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8301D5A0:
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8301d5a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8301D5A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831791b4
	ctx.lr = 0x8301D5B4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301D5C8"))) PPC_WEAK_FUNC(sub_8301D5C8);
PPC_FUNC_IMPL(__imp__sub_8301D5C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8301D5D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,15276
	ctx.r29.s64 = ctx.r11.s64 + 15276;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791a4
	ctx.lr = 0x8301D5EC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,15180(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15180);
	// bl 0x8304c228
	ctx.lr = 0x8301D5FC;
	sub_8304C228(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8301d61c
	if (!ctx.cr6.eq) goto loc_8301D61C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791b4
	ctx.lr = 0x8301D610;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_8301D61C:
	// addic. r11,r31,8
	ctx.xer.ca = ctx.r31.u32 > 4294967287;
	ctx.r11.s64 = ctx.r31.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// bne 0x8301d62c
	if (!ctx.cr0.eq) goto loc_8301D62C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8301D62C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8301d640
	if (!ctx.cr6.eq) goto loc_8301D640;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r11,r11,-11108
	ctx.r11.s64 = ctx.r11.s64 + -11108;
loc_8301D640:
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addi r10,r30,-4
	ctx.r10.s64 = ctx.r30.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8301D650:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8301d650
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8301D650;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// bgt 0x8301d698
	if (ctx.cr0.gt) goto loc_8301D698;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r30,-11272(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11272);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8301D68C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fd6cc8
	ctx.lr = 0x8301D698;
	sub_82FD6CC8(ctx, base);
loc_8301D698:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791b4
	ctx.lr = 0x8301D6A0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301D6AC"))) PPC_WEAK_FUNC(sub_8301D6AC);
PPC_FUNC_IMPL(__imp__sub_8301D6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301D6B0"))) PPC_WEAK_FUNC(sub_8301D6B0);
PPC_FUNC_IMPL(__imp__sub_8301D6B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8301D6B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301d6e8
	if (ctx.cr6.eq) goto loc_8301D6E8;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8301d6e8
	if (!ctx.cr6.eq) goto loc_8301D6E8;
	// li r3,31
	ctx.r3.s64 = 31;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_8301D6E8:
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r30,r11,15276
	ctx.r30.s64 = ctx.r11.s64 + 15276;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791a4
	ctx.lr = 0x8301D6F8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,15168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15168);
	// addi r3,r11,1652
	ctx.r3.s64 = ctx.r11.s64 + 1652;
	// bl 0x830639c8
	ctx.lr = 0x8301D70C;
	sub_830639C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8301d72c
	if (!ctx.cr6.eq) goto loc_8301D72C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791b4
	ctx.lr = 0x8301D720;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_8301D72C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830534d8
	ctx.lr = 0x8301D73C;
	sub_830534D8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8301D754;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791b4
	ctx.lr = 0x8301D75C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301D768"))) PPC_WEAK_FUNC(sub_8301D768);
PPC_FUNC_IMPL(__imp__sub_8301D768) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8301a578
	ctx.lr = 0x8301D788;
	sub_8301A578(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8301d798
	if (!ctx.cr6.eq) goto loc_8301D798;
	// li r3,15
	ctx.r3.s64 = 15;
	// b 0x8301d7a4
	goto loc_8301D7A4;
loc_8301D798:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8301d6b0
	ctx.lr = 0x8301D7A4;
	sub_8301D6B0(ctx, base);
loc_8301D7A4:
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

__attribute__((alias("__imp__sub_8301D7BC"))) PPC_WEAK_FUNC(sub_8301D7BC);
PPC_FUNC_IMPL(__imp__sub_8301D7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301D7C0"))) PPC_WEAK_FUNC(sub_8301D7C0);
PPC_FUNC_IMPL(__imp__sub_8301D7C0) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8301a628
	ctx.lr = 0x8301D7E0;
	sub_8301A628(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8301d7f0
	if (!ctx.cr6.eq) goto loc_8301D7F0;
	// li r3,15
	ctx.r3.s64 = 15;
	// b 0x8301d7fc
	goto loc_8301D7FC;
loc_8301D7F0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8301d6b0
	ctx.lr = 0x8301D7FC;
	sub_8301D6B0(ctx, base);
loc_8301D7FC:
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

__attribute__((alias("__imp__sub_8301D814"))) PPC_WEAK_FUNC(sub_8301D814);
PPC_FUNC_IMPL(__imp__sub_8301D814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301D818"))) PPC_WEAK_FUNC(sub_8301D818);
PPC_FUNC_IMPL(__imp__sub_8301D818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8301D820;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,15276
	ctx.r30.s64 = ctx.r11.s64 + 15276;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791a4
	ctx.lr = 0x8301D83C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,15168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15168);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x830639c8
	ctx.lr = 0x8301D850;
	sub_830639C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8301d870
	if (!ctx.cr6.eq) goto loc_8301D870;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791b4
	ctx.lr = 0x8301D864;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_8301D870:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8301D884;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8301d8b4
	if (!ctx.cr6.eq) goto loc_8301D8B4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8301D8A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791b4
	ctx.lr = 0x8301D8A8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_8301D8B4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83034270
	ctx.lr = 0x8301D8C0;
	sub_83034270(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8301D8D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791b4
	ctx.lr = 0x8301D8E0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301D8EC"))) PPC_WEAK_FUNC(sub_8301D8EC);
PPC_FUNC_IMPL(__imp__sub_8301D8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301D8F0"))) PPC_WEAK_FUNC(sub_8301D8F0);
PPC_FUNC_IMPL(__imp__sub_8301D8F0) {
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
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8301D910"))) PPC_WEAK_FUNC(sub_8301D910);
PPC_FUNC_IMPL(__imp__sub_8301D910) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301D914"))) PPC_WEAK_FUNC(sub_8301D914);
PPC_FUNC_IMPL(__imp__sub_8301D914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301D918"))) PPC_WEAK_FUNC(sub_8301D918);
PPC_FUNC_IMPL(__imp__sub_8301D918) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301d938
	if (ctx.cr6.eq) goto loc_8301D938;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_8301D938:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301D940"))) PPC_WEAK_FUNC(sub_8301D940);
PPC_FUNC_IMPL(__imp__sub_8301D940) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301d960
	if (ctx.cr6.eq) goto loc_8301D960;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_8301D960:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301D968"))) PPC_WEAK_FUNC(sub_8301D968);
PPC_FUNC_IMPL(__imp__sub_8301D968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lwz r3,15376(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15376);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301d988
	if (ctx.cr6.eq) goto loc_8301D988;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_8301D988:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301D990"))) PPC_WEAK_FUNC(sub_8301D990);
PPC_FUNC_IMPL(__imp__sub_8301D990) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r10,r1,36
	ctx.r10.s64 = ctx.r1.s64 + 36;
	// stfs f1,36(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 36, temp.u32);
	// li r11,16
	ctx.r11.s64 = 16;
	// lvx128 v63,r0,r4
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvlx128 v62,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v60,v62,0
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0xFF));
	// lvx128 v61,r4,r11
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v58,v63,v60
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v58.f32, _mm_mul_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v60.f32)));
	// vmulfp128 v59,v61,v60
	_mm_store_ps(ctx.v59.f32, _mm_mul_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v60.f32)));
	// stvx128 v58,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v59,r3,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301D9C0"))) PPC_WEAK_FUNC(sub_8301D9C0);
PPC_FUNC_IMPL(__imp__sub_8301D9C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8301D9D0:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8301d9d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8301D9D0;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r11,8192
	ctx.r11.s64 = 8192;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lis r6,256
	ctx.r6.s64 = 16777216;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lfs f0,24436(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24436);
	ctx.f0.f64 = double(temp.f32);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r6,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301DA14"))) PPC_WEAK_FUNC(sub_8301DA14);
PPC_FUNC_IMPL(__imp__sub_8301DA14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301DA18"))) PPC_WEAK_FUNC(sub_8301DA18);
PPC_FUNC_IMPL(__imp__sub_8301DA18) {
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
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r11,-11264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -11264);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8301da7c
	if (!ctx.cr6.eq) goto loc_8301DA7C;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r10,r11,15380
	ctx.r10.s64 = ctx.r11.s64 + 15380;
	// lwz r4,24(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmplwi cr6,r4,64
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 64, ctx.xer);
	// bgt cr6,0x8301da50
	if (ctx.cr6.gt) goto loc_8301DA50;
	// lis r4,256
	ctx.r4.s64 = 16777216;
loc_8301DA50:
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82fd7070
	ctx.lr = 0x8301DA64;
	sub_82FD7070(ctx, base);
	// stw r3,-11264(r31)
	PPC_STORE_U32(ctx.r31.u32 + -11264, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8301da94
	if (ctx.cr6.eq) goto loc_8301DA94;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r10,r11,-11124
	ctx.r10.s64 = ctx.r11.s64 + -11124;
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
loc_8301DA7C:
	// li r3,1
	ctx.r3.s64 = 1;
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
loc_8301DA94:
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
}

__attribute__((alias("__imp__sub_8301DAAC"))) PPC_WEAK_FUNC(sub_8301DAAC);
PPC_FUNC_IMPL(__imp__sub_8301DAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301DAB0"))) PPC_WEAK_FUNC(sub_8301DAB0);
PPC_FUNC_IMPL(__imp__sub_8301DAB0) {
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
	// bl 0x82fd69f0
	ctx.lr = 0x8301DAC4;
	sub_82FD69F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301daec
	if (ctx.cr6.eq) goto loc_8301DAEC;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r3,-11264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -11264);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8301daec
	if (ctx.cr6.eq) goto loc_8301DAEC;
	// bl 0x82fd7328
	ctx.lr = 0x8301DAE4;
	sub_82FD7328(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,-11264(r31)
	PPC_STORE_U32(ctx.r31.u32 + -11264, ctx.r11.u32);
loc_8301DAEC:
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

__attribute__((alias("__imp__sub_8301DB00"))) PPC_WEAK_FUNC(sub_8301DB00);
PPC_FUNC_IMPL(__imp__sub_8301DB00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r11,15380
	ctx.r11.s64 = ctx.r11.s64 + 15380;
	// bne cr6,0x8301db6c
	if (!ctx.cr6.eq) goto loc_8301DB6C;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8301DB20:
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8301db20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8301DB20;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r5,-32233
	ctx.r5.s64 = -2112421888;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,8192
	ctx.r8.s64 = 8192;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// li r7,8192
	ctx.r7.s64 = 8192;
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// lis r6,256
	ctx.r6.s64 = 16777216;
	// lfs f0,24436(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24436);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// stw r7,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r7.u32);
	// stw r6,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r6.u32);
	// blr 
	return;
loc_8301DB6C:
	// li r8,8
	ctx.r8.s64 = 8;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8301DB7C:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8301db7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8301DB7C;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8301DB98:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8301db98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8301DB98;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301DBA8"))) PPC_WEAK_FUNC(sub_8301DBA8);
PPC_FUNC_IMPL(__imp__sub_8301DBA8) {
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
	// lis r31,-31958
	ctx.r31.s64 = -2094399488;
	// lwz r11,15376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15376);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x831791a4
	ctx.lr = 0x8301DBC8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r3,15376(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15376);
	// bl 0x83054f28
	ctx.lr = 0x8301DBD0;
	sub_83054F28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301dbf8
	if (ctx.cr6.eq) goto loc_8301DBF8;
	// lwz r3,15376(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15376);
	// bl 0x83054fb0
	ctx.lr = 0x8301DBE4;
	sub_83054FB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301dbf8
	if (ctx.cr6.eq) goto loc_8301DBF8;
	// lwz r3,15376(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15376);
	// bl 0x83054fd8
	ctx.lr = 0x8301DBF8;
	sub_83054FD8(ctx, base);
loc_8301DBF8:
	// lwz r3,15376(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15376);
	// bl 0x83054fc8
	ctx.lr = 0x8301DC00;
	sub_83054FC8(ctx, base);
	// lwz r11,15376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15376);
	// clrlwi r31,r3,16
	ctx.r31.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x831791b4
	ctx.lr = 0x8301DC10;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_8301DC28"))) PPC_WEAK_FUNC(sub_8301DC28);
PPC_FUNC_IMPL(__imp__sub_8301DC28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lwz r3,15376(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15376);
	// b 0x83054e68
	sub_83054E68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301DC34"))) PPC_WEAK_FUNC(sub_8301DC34);
PPC_FUNC_IMPL(__imp__sub_8301DC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301DC38"))) PPC_WEAK_FUNC(sub_8301DC38);
PPC_FUNC_IMPL(__imp__sub_8301DC38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,15372
	ctx.r3.s64 = ctx.r11.s64 + 15372;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301DC44"))) PPC_WEAK_FUNC(sub_8301DC44);
PPC_FUNC_IMPL(__imp__sub_8301DC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301DC48"))) PPC_WEAK_FUNC(sub_8301DC48);
PPC_FUNC_IMPL(__imp__sub_8301DC48) {
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
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lwz r31,15412(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15412);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stfs f1,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// bl 0x8304ff60
	ctx.lr = 0x8301DC6C;
	sub_8304FF60(ctx, base);
	// stfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
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

__attribute__((alias("__imp__sub_8301DC84"))) PPC_WEAK_FUNC(sub_8301DC84);
PPC_FUNC_IMPL(__imp__sub_8301DC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301DC88"))) PPC_WEAK_FUNC(sub_8301DC88);
PPC_FUNC_IMPL(__imp__sub_8301DC88) {
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
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lwz r31,15412(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15412);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f1,20(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// bl 0x8304ff60
	ctx.lr = 0x8301DCB4;
	sub_8304FF60(ctx, base);
	// stfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
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

__attribute__((alias("__imp__sub_8301DCCC"))) PPC_WEAK_FUNC(sub_8301DCCC);
PPC_FUNC_IMPL(__imp__sub_8301DCCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301DCD0"))) PPC_WEAK_FUNC(sub_8301DCD0);
PPC_FUNC_IMPL(__imp__sub_8301DCD0) {
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
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lwz r31,15412(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15412);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stfs f1,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// bl 0x8304ff60
	ctx.lr = 0x8301DCF4;
	sub_8304FF60(ctx, base);
	// stfs f1,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
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

__attribute__((alias("__imp__sub_8301DD0C"))) PPC_WEAK_FUNC(sub_8301DD0C);
PPC_FUNC_IMPL(__imp__sub_8301DD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301DD10"))) PPC_WEAK_FUNC(sub_8301DD10);
PPC_FUNC_IMPL(__imp__sub_8301DD10) {
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
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lwz r31,15412(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15412);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f1,24(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// bl 0x8304ff60
	ctx.lr = 0x8301DD3C;
	sub_8304FF60(ctx, base);
	// stfs f1,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
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

__attribute__((alias("__imp__sub_8301DD54"))) PPC_WEAK_FUNC(sub_8301DD54);
PPC_FUNC_IMPL(__imp__sub_8301DD54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301DD58"))) PPC_WEAK_FUNC(sub_8301DD58);
PPC_FUNC_IMPL(__imp__sub_8301DD58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,15412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15412);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x83055b68
	sub_83055B68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301DD78"))) PPC_WEAK_FUNC(sub_8301DD78);
PPC_FUNC_IMPL(__imp__sub_8301DD78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301DD7C"))) PPC_WEAK_FUNC(sub_8301DD7C);
PPC_FUNC_IMPL(__imp__sub_8301DD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301DD80"))) PPC_WEAK_FUNC(sub_8301DD80);
PPC_FUNC_IMPL(__imp__sub_8301DD80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,15468
	ctx.r3.s64 = ctx.r11.s64 + 15468;
	// b 0x831791a4
	__imp__RtlEnterCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301DD8C"))) PPC_WEAK_FUNC(sub_8301DD8C);
PPC_FUNC_IMPL(__imp__sub_8301DD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301DD90"))) PPC_WEAK_FUNC(sub_8301DD90);
PPC_FUNC_IMPL(__imp__sub_8301DD90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,15468
	ctx.r3.s64 = ctx.r11.s64 + 15468;
	// b 0x831791b4
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301DD9C"))) PPC_WEAK_FUNC(sub_8301DD9C);
PPC_FUNC_IMPL(__imp__sub_8301DD9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301DDA0"))) PPC_WEAK_FUNC(sub_8301DDA0);
PPC_FUNC_IMPL(__imp__sub_8301DDA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,15412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15412);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301ddc0
	if (ctx.cr6.eq) goto loc_8301DDC0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x83055be8
	sub_83055BE8(ctx, base);
	return;
loc_8301DDC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301DDC8"))) PPC_WEAK_FUNC(sub_8301DDC8);
PPC_FUNC_IMPL(__imp__sub_8301DDC8) {
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
	// bl 0x83055e30
	ctx.lr = 0x8301DDE0;
	sub_83055E30(ctx, base);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x83053ea8
	ctx.lr = 0x8301DDE8;
	sub_83053EA8(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-11264(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11264);
	// bl 0x82fd6cc8
	ctx.lr = 0x8301DDF8;
	sub_82FD6CC8(ctx, base);
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

__attribute__((alias("__imp__sub_8301DE0C"))) PPC_WEAK_FUNC(sub_8301DE0C);
PPC_FUNC_IMPL(__imp__sub_8301DE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301DE10"))) PPC_WEAK_FUNC(sub_8301DE10);
PPC_FUNC_IMPL(__imp__sub_8301DE10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r5,-4
	ctx.r11.s64 = ctx.r5.s64 + -4;
	// addi r9,r4,-8
	ctx.r9.s64 = ctx.r4.s64 + -8;
	// lfs f0,5184(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
loc_8301DE28:
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8301de4c
	if (ctx.cr6.eq) goto loc_8301DE4C;
	// ldu r8,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// std r8,4(r11)
	PPC_STORE_U64(ctx.r11.u32 + 4, ctx.r8.u64);
	// stfsu f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	ea = 12 + ctx.r11.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// blt cr6,0x8301de28
	if (ctx.cr6.lt) goto loc_8301DE28;
loc_8301DE4C:
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// li r31,0
	ctx.r31.s64 = 0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r6,r11,-4
	ctx.r6.s64 = ctx.r11.s64 + -4;
loc_8301DE68:
	// lwz r4,-4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8301defc
	if (ctx.cr6.eq) goto loc_8301DEFC;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8301dec4
	if (ctx.cr6.eq) goto loc_8301DEC4;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
loc_8301DE88:
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8301dea8
	if (ctx.cr6.eq) goto loc_8301DEA8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8301de88
	if (ctx.cr6.lt) goto loc_8301DE88;
	// b 0x8301dec4
	goto loc_8301DEC4;
loc_8301DEA8:
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f13,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r7,1
	ctx.r7.s64 = 1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r5
	ctx.r9.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stfs f13,8(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
loc_8301DEC4:
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8301deec
	if (!ctx.cr6.eq) goto loc_8301DEEC;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bge cr6,0x8301deec
	if (!ctx.cr6.lt) goto loc_8301DEEC;
	// lfs f13,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stw r4,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r4.u32);
	// stfs f0,8(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stfsu f13,12(r6)
	temp.f32 = float(ctx.f13.f64);
	ea = 12 + ctx.r6.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r6.u32 = ea;
loc_8301DEEC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// blt cr6,0x8301de68
	if (ctx.cr6.lt) goto loc_8301DE68;
loc_8301DEFC:
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bge cr6,0x8301df18
	if (!ctx.cr6.lt) goto loc_8301DF18;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r7,r5
	PPC_STORE_U32(ctx.r7.u32 + ctx.r5.u32, ctx.r9.u32);
loc_8301DF18:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301DF20"))) PPC_WEAK_FUNC(sub_8301DF20);
PPC_FUNC_IMPL(__imp__sub_8301DF20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lwz r11,15920(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15920);
	// stw r11,15440(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15440, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301DF34"))) PPC_WEAK_FUNC(sub_8301DF34);
PPC_FUNC_IMPL(__imp__sub_8301DF34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301DF38"))) PPC_WEAK_FUNC(sub_8301DF38);
PPC_FUNC_IMPL(__imp__sub_8301DF38) {
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
	// lwz r3,15440(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15440);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301df68
	if (ctx.cr6.eq) goto loc_8301DF68;
	// bl 0x8303f460
	ctx.lr = 0x8301DF58;
	sub_8303F460(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8301df6c
	if (!ctx.cr6.eq) goto loc_8301DF6C;
loc_8301DF68:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8301DF6C:
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

__attribute__((alias("__imp__sub_8301DF80"))) PPC_WEAK_FUNC(sub_8301DF80);
PPC_FUNC_IMPL(__imp__sub_8301DF80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8301DF88;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,15444
	ctx.r29.s64 = ctx.r11.s64 + 15444;
	// lwz r31,15444(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15444);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8301dfe4
	if (ctx.cr6.eq) goto loc_8301DFE4;
loc_8301DFB0:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r30,128
	ctx.r3.s64 = ctx.r30.s64 + 128;
	// bl 0x83056b50
	ctx.lr = 0x8301DFBC;
	sub_83056B50(ctx, base);
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8301dfd4
	if (!ctx.cr6.eq) goto loc_8301DFD4;
	// stfs f31,36(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8304ff60
	ctx.lr = 0x8301DFD0;
	sub_8304FF60(ctx, base);
	// stfs f1,20(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
loc_8301DFD4:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8301dfb0
	if (!ctx.cr6.eq) goto loc_8301DFB0;
loc_8301DFE4:
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// lwz r30,-11260(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11260);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8301e024
	if (ctx.cr6.eq) goto loc_8301E024;
loc_8301DFF4:
	// lwz r31,8(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x83056b50
	ctx.lr = 0x8301E000;
	sub_83056B50(ctx, base);
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8301e018
	if (!ctx.cr6.eq) goto loc_8301E018;
	// stfs f31,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8304ff60
	ctx.lr = 0x8301E014;
	sub_8304FF60(ctx, base);
	// stfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
loc_8301E018:
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8301dff4
	if (!ctx.cr6.eq) goto loc_8301DFF4;
loc_8301E024:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301E030"))) PPC_WEAK_FUNC(sub_8301E030);
PPC_FUNC_IMPL(__imp__sub_8301E030) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8301E038;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,15444
	ctx.r29.s64 = ctx.r11.s64 + 15444;
	// lwz r30,15444(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15444);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8301e09c
	if (ctx.cr6.eq) goto loc_8301E09C;
loc_8301E060:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x83056b50
	ctx.lr = 0x8301E06C;
	sub_83056B50(ctx, base);
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8301e08c
	if (!ctx.cr6.eq) goto loc_8301E08C;
	// lfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 + 20;
	// fadds f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f1,36(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// bl 0x8304ff60
	ctx.lr = 0x8301E088;
	sub_8304FF60(ctx, base);
	// stfs f1,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
loc_8301E08C:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8301e060
	if (!ctx.cr6.eq) goto loc_8301E060;
loc_8301E09C:
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// lwz r30,-11260(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11260);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8301e0e4
	if (ctx.cr6.eq) goto loc_8301E0E4;
loc_8301E0AC:
	// lwz r31,8(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x83056b50
	ctx.lr = 0x8301E0B8;
	sub_83056B50(ctx, base);
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8301e0d8
	if (!ctx.cr6.eq) goto loc_8301E0D8;
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// fadds f1,f31,f0
	ctx.f1.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// stfs f1,20(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// bl 0x8304ff60
	ctx.lr = 0x8301E0D4;
	sub_8304FF60(ctx, base);
	// stfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
loc_8301E0D8:
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8301e0ac
	if (!ctx.cr6.eq) goto loc_8301E0AC;
loc_8301E0E4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301E0F0"))) PPC_WEAK_FUNC(sub_8301E0F0);
PPC_FUNC_IMPL(__imp__sub_8301E0F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8301E0F8;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,15444
	ctx.r29.s64 = ctx.r11.s64 + 15444;
	// lwz r31,15444(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15444);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8301e154
	if (ctx.cr6.eq) goto loc_8301E154;
loc_8301E120:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r30,128
	ctx.r3.s64 = ctx.r30.s64 + 128;
	// bl 0x83056b50
	ctx.lr = 0x8301E12C;
	sub_83056B50(ctx, base);
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8301e144
	if (!ctx.cr6.eq) goto loc_8301E144;
	// stfs f31,40(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8304ff60
	ctx.lr = 0x8301E140;
	sub_8304FF60(ctx, base);
	// stfs f1,32(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 32, temp.u32);
loc_8301E144:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8301e120
	if (!ctx.cr6.eq) goto loc_8301E120;
loc_8301E154:
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// lwz r30,-11260(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11260);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8301e194
	if (ctx.cr6.eq) goto loc_8301E194;
loc_8301E164:
	// lwz r31,8(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x83056b50
	ctx.lr = 0x8301E170;
	sub_83056B50(ctx, base);
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8301e188
	if (!ctx.cr6.eq) goto loc_8301E188;
	// stfs f31,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8304ff60
	ctx.lr = 0x8301E184;
	sub_8304FF60(ctx, base);
	// stfs f1,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
loc_8301E188:
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8301e164
	if (!ctx.cr6.eq) goto loc_8301E164;
loc_8301E194:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301E1A0"))) PPC_WEAK_FUNC(sub_8301E1A0);
PPC_FUNC_IMPL(__imp__sub_8301E1A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8301E1A8;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,15444
	ctx.r29.s64 = ctx.r11.s64 + 15444;
	// lwz r30,15444(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15444);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8301e20c
	if (ctx.cr6.eq) goto loc_8301E20C;
loc_8301E1D0:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x83056b50
	ctx.lr = 0x8301E1DC;
	sub_83056B50(ctx, base);
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8301e1fc
	if (!ctx.cr6.eq) goto loc_8301E1FC;
	// lfs f0,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 + 20;
	// fadds f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f1,40(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// bl 0x8304ff60
	ctx.lr = 0x8301E1F8;
	sub_8304FF60(ctx, base);
	// stfs f1,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
loc_8301E1FC:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8301e1d0
	if (!ctx.cr6.eq) goto loc_8301E1D0;
loc_8301E20C:
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// lwz r30,-11260(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11260);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8301e254
	if (ctx.cr6.eq) goto loc_8301E254;
loc_8301E21C:
	// lwz r31,8(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x83056b50
	ctx.lr = 0x8301E228;
	sub_83056B50(ctx, base);
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8301e248
	if (!ctx.cr6.eq) goto loc_8301E248;
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// fadds f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f1,24(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// bl 0x8304ff60
	ctx.lr = 0x8301E244;
	sub_8304FF60(ctx, base);
	// stfs f1,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
loc_8301E248:
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8301e21c
	if (!ctx.cr6.eq) goto loc_8301E21C;
loc_8301E254:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301E260"))) PPC_WEAK_FUNC(sub_8301E260);
PPC_FUNC_IMPL(__imp__sub_8301E260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x8301E268;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,15444
	ctx.r29.s64 = ctx.r11.s64 + 15444;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r31,15444(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15444);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8301e2c4
	if (ctx.cr6.eq) goto loc_8301E2C4;
loc_8301E290:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r30,128
	ctx.r3.s64 = ctx.r30.s64 + 128;
	// bl 0x83056b50
	ctx.lr = 0x8301E29C;
	sub_83056B50(ctx, base);
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8301e2b4
	if (!ctx.cr6.eq) goto loc_8301E2B4;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x83056328
	ctx.lr = 0x8301E2B4;
	sub_83056328(ctx, base);
loc_8301E2B4:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8301e290
	if (!ctx.cr6.eq) goto loc_8301E290;
loc_8301E2C4:
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// lwz r30,-11260(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11260);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8301e304
	if (ctx.cr6.eq) goto loc_8301E304;
loc_8301E2D4:
	// lwz r31,8(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x83056b50
	ctx.lr = 0x8301E2E0;
	sub_83056B50(ctx, base);
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8301e2f8
	if (!ctx.cr6.eq) goto loc_8301E2F8;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83056328
	ctx.lr = 0x8301E2F8;
	sub_83056328(ctx, base);
loc_8301E2F8:
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8301e2d4
	if (!ctx.cr6.eq) goto loc_8301E2D4;
loc_8301E304:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301E30C"))) PPC_WEAK_FUNC(sub_8301E30C);
PPC_FUNC_IMPL(__imp__sub_8301E30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301E310"))) PPC_WEAK_FUNC(sub_8301E310);
PPC_FUNC_IMPL(__imp__sub_8301E310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8301E318;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r31,-11260(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11260);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8301e35c
	if (ctx.cr6.eq) goto loc_8301E35C;
loc_8301E334:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,364(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8301e350
	if (!ctx.cr6.eq) goto loc_8301E350;
	// clrlwi r5,r29,24
	ctx.r5.u64 = ctx.r29.u32 & 0xFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83056328
	ctx.lr = 0x8301E350;
	sub_83056328(ctx, base);
loc_8301E350:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8301e334
	if (!ctx.cr6.eq) goto loc_8301E334;
loc_8301E35C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301E364"))) PPC_WEAK_FUNC(sub_8301E364);
PPC_FUNC_IMPL(__imp__sub_8301E364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301E368"))) PPC_WEAK_FUNC(sub_8301E368);
PPC_FUNC_IMPL(__imp__sub_8301E368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x8301E370;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,15444
	ctx.r29.s64 = ctx.r11.s64 + 15444;
	// lwz r31,15444(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15444);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8301e3bc
	if (ctx.cr6.eq) goto loc_8301E3BC;
	// li r27,2
	ctx.r27.s64 = 2;
loc_8301E394:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r30,128
	ctx.r3.s64 = ctx.r30.s64 + 128;
	// bl 0x83056b50
	ctx.lr = 0x8301E3A0;
	sub_83056B50(ctx, base);
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8301e3ac
	if (!ctx.cr6.eq) goto loc_8301E3AC;
	// stw r27,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r27.u32);
loc_8301E3AC:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8301e394
	if (!ctx.cr6.eq) goto loc_8301E394;
loc_8301E3BC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301E3C4"))) PPC_WEAK_FUNC(sub_8301E3C4);
PPC_FUNC_IMPL(__imp__sub_8301E3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301E3C8"))) PPC_WEAK_FUNC(sub_8301E3C8);
PPC_FUNC_IMPL(__imp__sub_8301E3C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r10,r11,15444
	ctx.r10.s64 = ctx.r11.s64 + 15444;
	// lwz r11,15444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15444);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8301e40c
	if (ctx.cr6.eq) goto loc_8301E40C;
	// li r8,2
	ctx.r8.s64 = 2;
loc_8301E3E4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r8,132(r9)
	PPC_STORE_U32(ctx.r9.u32 + 132, ctx.r8.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8301e3e4
	if (!ctx.cr6.eq) goto loc_8301E3E4;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lwz r11,15412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15412);
	// stw r8,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r8.u32);
	// blr 
	return;
loc_8301E40C:
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r11,15412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15412);
	// stw r10,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301E420"))) PPC_WEAK_FUNC(sub_8301E420);
PPC_FUNC_IMPL(__imp__sub_8301E420) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,1024
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1024, ctx.xer);
	// bge cr6,0x8301e430
	if (!ctx.cr6.lt) goto loc_8301E430;
	// li r4,1024
	ctx.r4.s64 = 1024;
loc_8301E430:
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// rlwinm r11,r11,22,10,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x3FFFFF;
	// addi r9,r10,15512
	ctx.r9.s64 = ctx.r10.s64 + 15512;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8301e470
	if (ctx.cr6.eq) goto loc_8301E470;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_8301E470:
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// lwz r3,-11264(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11264);
	// b 0x82fd6b98
	sub_82FD6B98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301E47C"))) PPC_WEAK_FUNC(sub_8301E47C);
PPC_FUNC_IMPL(__imp__sub_8301E47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301E480"))) PPC_WEAK_FUNC(sub_8301E480);
PPC_FUNC_IMPL(__imp__sub_8301E480) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,1024
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1024, ctx.xer);
	// bge cr6,0x8301e48c
	if (!ctx.cr6.lt) goto loc_8301E48C;
	// li r3,1024
	ctx.r3.s64 = 1024;
loc_8301E48C:
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// rlwinm r11,r11,22,10,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x3FFFFF;
	// addi r9,r10,15512
	ctx.r9.s64 = ctx.r10.s64 + 15512;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bge cr6,0x8301e4d8
	if (!ctx.cr6.lt) goto loc_8301E4D8;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8301e4d8
	if (ctx.cr0.eq) goto loc_8301E4D8;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// blr 
	return;
loc_8301E4D8:
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// lwz r3,-11264(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11264);
	// b 0x82fd6cc8
	sub_82FD6CC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301E4E4"))) PPC_WEAK_FUNC(sub_8301E4E4);
PPC_FUNC_IMPL(__imp__sub_8301E4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301E4E8"))) PPC_WEAK_FUNC(sub_8301E4E8);
PPC_FUNC_IMPL(__imp__sub_8301E4E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x8301E4F0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r30,r11,15444
	ctx.r30.s64 = ctx.r11.s64 + 15444;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r31,15444(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15444);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8301e53c
	if (ctx.cr6.eq) goto loc_8301E53C;
loc_8301E518:
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r29,128
	ctx.r3.s64 = ctx.r29.s64 + 128;
	// bl 0x83056b50
	ctx.lr = 0x8301E524;
	sub_83056B50(ctx, base);
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8301e548
	if (ctx.cr6.eq) goto loc_8301E548;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8301e518
	if (!ctx.cr6.eq) goto loc_8301E518;
loc_8301E53C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
loc_8301E548:
	// lwz r11,132(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 132);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8301e53c
	if (ctx.cr6.eq) goto loc_8301E53C;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// bl 0x83056460
	ctx.lr = 0x8301E564;
	sub_83056460(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301E56C"))) PPC_WEAK_FUNC(sub_8301E56C);
PPC_FUNC_IMPL(__imp__sub_8301E56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301E570"))) PPC_WEAK_FUNC(sub_8301E570);
PPC_FUNC_IMPL(__imp__sub_8301E570) {
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
	// lis r31,-31958
	ctx.r31.s64 = -2094399488;
	// lwz r3,15376(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15376);
	// bl 0x83054f10
	ctx.lr = 0x8301E58C;
	sub_83054F10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8301e5cc
	if (!ctx.cr6.eq) goto loc_8301E5CC;
	// lwz r3,15376(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15376);
	// bl 0x83054f18
	ctx.lr = 0x8301E5A0;
	sub_83054F18(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// lwz r10,15172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15172);
	// lwz r11,15428(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 15428);
	// lwz r10,144(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301e5c8
	if (ctx.cr6.eq) goto loc_8301E5C8;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// ble cr6,0x8301e5cc
	if (!ctx.cr6.gt) goto loc_8301E5CC;
loc_8301E5C8:
	// stw r10,15428(r9)
	PPC_STORE_U32(ctx.r9.u32 + 15428, ctx.r10.u32);
loc_8301E5CC:
	// lis r31,-31958
	ctx.r31.s64 = -2094399488;
	// lwz r3,15440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15440);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301e5f4
	if (ctx.cr6.eq) goto loc_8301E5F4;
	// bl 0x8303f460
	ctx.lr = 0x8301E5E0;
	sub_8303F460(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,15440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15440);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8301e5f8
	if (!ctx.cr6.eq) goto loc_8301E5F8;
loc_8301E5F4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8301E5F8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301e608
	if (ctx.cr6.eq) goto loc_8301E608;
	// bl 0x8303f2c0
	ctx.lr = 0x8301E608;
	sub_8303F2C0(ctx, base);
loc_8301E608:
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

__attribute__((alias("__imp__sub_8301E61C"))) PPC_WEAK_FUNC(sub_8301E61C);
PPC_FUNC_IMPL(__imp__sub_8301E61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301E620"))) PPC_WEAK_FUNC(sub_8301E620);
PPC_FUNC_IMPL(__imp__sub_8301E620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8301E628;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// lwz r31,-11260(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11260);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8301e66c
	if (ctx.cr6.eq) goto loc_8301E66C;
	// lis r29,-31969
	ctx.r29.s64 = -2095120384;
loc_8301E640:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83055e30
	ctx.lr = 0x8301E64C;
	sub_83055E30(ctx, base);
	// addi r3,r30,128
	ctx.r3.s64 = ctx.r30.s64 + 128;
	// bl 0x83053ea8
	ctx.lr = 0x8301E654;
	sub_83053EA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,-11264(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -11264);
	// bl 0x82fd6cc8
	ctx.lr = 0x8301E660;
	sub_82FD6CC8(ctx, base);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8301e640
	if (!ctx.cr6.eq) goto loc_8301E640;
loc_8301E66C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301E674"))) PPC_WEAK_FUNC(sub_8301E674);
PPC_FUNC_IMPL(__imp__sub_8301E674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301E678"))) PPC_WEAK_FUNC(sub_8301E678);
PPC_FUNC_IMPL(__imp__sub_8301E678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,-11260(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301e6a4
	if (ctx.cr6.eq) goto loc_8301E6A4;
loc_8301E68C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8301e6ac
	if (ctx.cr6.eq) goto loc_8301E6AC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8301e68c
	if (!ctx.cr6.eq) goto loc_8301E68C;
loc_8301E6A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8301E6AC:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301e6a4
	if (ctx.cr6.eq) goto loc_8301E6A4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,116(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8301e6a4
	if (ctx.cr6.eq) goto loc_8301E6A4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x83056460
	sub_83056460(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301E6D4"))) PPC_WEAK_FUNC(sub_8301E6D4);
PPC_FUNC_IMPL(__imp__sub_8301E6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301E6D8"))) PPC_WEAK_FUNC(sub_8301E6D8);
PPC_FUNC_IMPL(__imp__sub_8301E6D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r10,r11,15444
	ctx.r10.s64 = ctx.r11.s64 + 15444;
	// lwz r11,15444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15444);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8301e748
	if (ctx.cr6.eq) goto loc_8301E748;
loc_8301E6FC:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301e73c
	if (ctx.cr6.eq) goto loc_8301E73C;
loc_8301E70C:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301e724
	if (ctx.cr6.eq) goto loc_8301E724;
	// lwz r11,252(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8301e728
	goto loc_8301E728;
loc_8301E724:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8301E728:
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8301e770
	if (ctx.cr6.eq) goto loc_8301E770;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8301e70c
	if (!ctx.cr6.eq) goto loc_8301E70C;
loc_8301E73C:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8301e6fc
	if (!ctx.cr6.eq) goto loc_8301E6FC;
loc_8301E748:
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lwz r3,15456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15456);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301e794
	if (ctx.cr6.eq) goto loc_8301E794;
loc_8301E758:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301e77c
	if (ctx.cr6.eq) goto loc_8301E77C;
	// lwz r11,252(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8301e780
	goto loc_8301E780;
loc_8301E770:
	// stw r3,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r3.u32);
	// stw r9,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r9.u32);
	// blr 
	return;
loc_8301E77C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8301E780:
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8301e758
	if (!ctx.cr6.eq) goto loc_8301E758;
loc_8301E794:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301E79C"))) PPC_WEAK_FUNC(sub_8301E79C);
PPC_FUNC_IMPL(__imp__sub_8301E79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301E7A0"))) PPC_WEAK_FUNC(sub_8301E7A0);
PPC_FUNC_IMPL(__imp__sub_8301E7A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,100(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8301e818
	if (ctx.cr6.eq) goto loc_8301E818;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r10,r11,15444
	ctx.r10.s64 = ctx.r11.s64 + 15444;
	// lwz r11,15444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15444);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8301e818
	if (ctx.cr6.eq) goto loc_8301E818;
loc_8301E7C8:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301e80c
	if (ctx.cr6.eq) goto loc_8301E80C;
loc_8301E7D8:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301e7f0
	if (ctx.cr6.eq) goto loc_8301E7F0;
	// lwz r11,252(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8301e7f4
	goto loc_8301E7F4;
loc_8301E7F0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8301E7F4:
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8301e7d8
	if (!ctx.cr6.eq) goto loc_8301E7D8;
loc_8301E80C:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8301e7c8
	if (!ctx.cr6.eq) goto loc_8301E7C8;
loc_8301E818:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301E820"))) PPC_WEAK_FUNC(sub_8301E820);
PPC_FUNC_IMPL(__imp__sub_8301E820) {
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
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x8304eb80
	ctx.lr = 0x8301E83C;
	sub_8304EB80(ctx, base);
	// addi r11,r31,416
	ctx.r11.s64 = ctx.r31.s64 + 416;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x83053830
	ctx.lr = 0x8301E848;
	sub_83053830(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r9,r11,-14320
	ctx.r9.s64 = ctx.r11.s64 + -14320;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r9,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r9.u32);
	// lwz r3,-11264(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11264);
	// bl 0x82fd6cc8
	ctx.lr = 0x8301E864;
	sub_82FD6CC8(ctx, base);
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

__attribute__((alias("__imp__sub_8301E878"))) PPC_WEAK_FUNC(sub_8301E878);
PPC_FUNC_IMPL(__imp__sub_8301E878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8301E880;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82fd69f0
	ctx.lr = 0x8301E888;
	sub_82FD69F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8301e8a0
	if (!ctx.cr6.eq) goto loc_8301E8A0;
loc_8301E894:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_8301E8A0:
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lwz r11,18596(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18596);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301e894
	if (ctx.cr6.eq) goto loc_8301E894;
	// bl 0x8301da18
	ctx.lr = 0x8301E8B4;
	sub_8301DA18(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8301ea64
	if (!ctx.cr6.eq) goto loc_8301EA64;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r28,-31958
	ctx.r28.s64 = -2094399488;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,15420(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15420, ctx.r11.u32);
	// lwz r11,15376(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 15376);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8301e8f0
	if (!ctx.cr6.eq) goto loc_8301E8F0;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,15380
	ctx.r3.s64 = ctx.r11.s64 + 15380;
	// bl 0x83055380
	ctx.lr = 0x8301E8E4;
	sub_83055380(ctx, base);
	// stw r3,15376(r28)
	PPC_STORE_U32(ctx.r28.u32 + 15376, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301e894
	if (ctx.cr6.eq) goto loc_8301E894;
loc_8301E8F0:
	// bl 0x830505b0
	ctx.lr = 0x8301E8F4;
	sub_830505B0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8301ea64
	if (!ctx.cr6.eq) goto loc_8301EA64;
	// bl 0x83045158
	ctx.lr = 0x8301E900;
	sub_83045158(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8301ea64
	if (!ctx.cr6.eq) goto loc_8301EA64;
	// lis r30,-31969
	ctx.r30.s64 = -2095120384;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// li r5,1000
	ctx.r5.s64 = 1000;
	// addi r3,r11,-11228
	ctx.r3.s64 = ctx.r11.s64 + -11228;
	// li r4,1000
	ctx.r4.s64 = 1000;
	// lwz r6,-11264(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -11264);
	// bl 0x83020a08
	ctx.lr = 0x8301E924;
	sub_83020A08(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8301ea64
	if (!ctx.cr6.eq) goto loc_8301EA64;
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// lwz r8,-11264(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + -11264);
	// lis r6,-31969
	ctx.r6.s64 = -2095120384;
	// addi r5,r7,15456
	ctx.r5.s64 = ctx.r7.s64 + 15456;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r6,-11260
	ctx.r4.s64 = ctx.r6.s64 + -11260;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r9.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,15456(r7)
	PPC_STORE_U32(ctx.r7.u32 + 15456, ctx.r11.u32);
	// stw r8,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r9,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// stw r11,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r11.u32);
	// stw r10,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r10.u32);
	// stw r8,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r8.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// stw r10,-11260(r6)
	PPC_STORE_U32(ctx.r6.u32 + -11260, ctx.r10.u32);
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// bl 0x83056e38
	ctx.lr = 0x8301E988;
	sub_83056E38(ctx, base);
	// li r4,352
	ctx.r4.s64 = 352;
	// lwz r3,-11264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -11264);
	// bl 0x82fd6b98
	ctx.lr = 0x8301E994;
	sub_82FD6B98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301ea6c
	if (ctx.cr6.eq) goto loc_8301EA6C;
	// bl 0x83020e10
	ctx.lr = 0x8301E9A4;
	sub_83020E10(ctx, base);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lwz r11,15376(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 15376);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,15412(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15412, ctx.r31.u32);
	// lwz r29,40(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83055470
	ctx.lr = 0x8301E9C0;
	sub_83055470(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8301ea64
	if (!ctx.cr6.eq) goto loc_8301EA64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8301e9ec
	if (ctx.cr6.eq) goto loc_8301E9EC;
loc_8301E9D8:
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8301e9d8
	if (!ctx.cr6.eq) goto loc_8301E9D8;
loc_8301E9EC:
	// lwz r3,-11264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -11264);
	// rlwinm r30,r10,12,0,19
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFFF000;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82fd6b98
	ctx.lr = 0x8301E9FC;
	sub_82FD6B98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301ea6c
	if (ctx.cr6.eq) goto loc_8301EA6C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a75988
	ctx.lr = 0x8301EA14;
	sub_82A75988(ctx, base);
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// li r11,43
	ctx.r11.s64 = 43;
	// addi r7,r8,15496
	ctx.r7.s64 = ctx.r8.s64 + 15496;
	// li r10,1024
	ctx.r10.s64 = 1024;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,15496(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15496, ctx.r31.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r10,12(r7)
	PPC_STORE_U16(ctx.r7.u32 + 12, ctx.r10.u16);
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r9,14(r7)
	PPC_STORE_U16(ctx.r7.u32 + 14, ctx.r9.u16);
	// stw r29,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r29.u32);
	// bl 0x82a77608
	ctx.lr = 0x8301EA50;
	sub_82A77608(ctx, base);
	// lis r6,-31958
	ctx.r6.s64 = -2094399488;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,15376(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 15376);
	// stw r4,15372(r6)
	PPC_STORE_U32(ctx.r6.u32 + 15372, ctx.r4.u32);
	// bl 0x83054d20
	ctx.lr = 0x8301EA64;
	sub_83054D20(ctx, base);
loc_8301EA64:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_8301EA6C:
	// li r3,52
	ctx.r3.s64 = 52;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301EA78"))) PPC_WEAK_FUNC(sub_8301EA78);
PPC_FUNC_IMPL(__imp__sub_8301EA78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r11,-11228
	ctx.r10.s64 = ctx.r11.s64 + -11228;
	// lwz r9,-11228(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11228);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8301EA94:
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r7,r3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8301eb04
	if (!ctx.cr6.eq) goto loc_8301EB04;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stw r8,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r8.u32);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// stw r7,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r7.u32);
	// bne cr6,0x8301eac0
	if (!ctx.cr6.eq) goto loc_8301EAC0;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// b 0x8301eac4
	goto loc_8301EAC4;
loc_8301EAC0:
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
loc_8301EAC4:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8301ead4
	if (!ctx.cr6.eq) goto loc_8301EAD4;
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_8301EAD4:
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// ld r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// std r8,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r8.u64);
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,-4(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	// lwz r11,-8(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// b 0x8301eb0c
	goto loc_8301EB0C;
loc_8301EB04:
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8301EB0C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8301ea94
	if (!ctx.cr6.eq) goto loc_8301EA94;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301EB18"))) PPC_WEAK_FUNC(sub_8301EB18);
PPC_FUNC_IMPL(__imp__sub_8301EB18) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-11228
	ctx.r3.s64 = ctx.r11.s64 + -11228;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x83021010
	ctx.lr = 0x8301EB40;
	sub_83021010(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8301eb54
	if (!ctx.cr6.eq) goto loc_8301EB54;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x8301eb78
	goto loc_8301EB78;
loc_8301EB54:
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,15420(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15420);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_8301EB78:
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

__attribute__((alias("__imp__sub_8301EB90"))) PPC_WEAK_FUNC(sub_8301EB90);
PPC_FUNC_IMPL(__imp__sub_8301EB90) {
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
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// lwz r11,-11228(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11228);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301ebc4
	if (ctx.cr6.eq) goto loc_8301EBC4;
loc_8301EBAC:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8301ebe0
	if (ctx.cr6.eq) goto loc_8301EBE0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8301ebac
	if (!ctx.cr6.eq) goto loc_8301EBAC;
loc_8301EBC4:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8301eb18
	ctx.lr = 0x8301EBD0;
	sub_8301EB18(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8301EBE0:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8301ebf4
	if (ctx.cr6.eq) goto loc_8301EBF4;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8301ebc4
	if (!ctx.cr6.eq) goto loc_8301EBC4;
loc_8301EBF4:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8301ebc4
	if (!ctx.cr6.eq) goto loc_8301EBC4;
	// bl 0x8301ea78
	ctx.lr = 0x8301EC04;
	sub_8301EA78(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83021490
	ctx.lr = 0x8301EC0C;
	sub_83021490(ctx, base);
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

__attribute__((alias("__imp__sub_8301EC20"))) PPC_WEAK_FUNC(sub_8301EC20);
PPC_FUNC_IMPL(__imp__sub_8301EC20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x8301EC28;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r25,-31969
	ctx.r25.s64 = -2095120384;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r4,416
	ctx.r4.s64 = 416;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r3,-11264(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -11264);
	// bl 0x82fd6b98
	ctx.lr = 0x8301EC48;
	sub_82FD6B98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301ecac
	if (ctx.cr6.eq) goto loc_8301ECAC;
	// bl 0x83020e58
	ctx.lr = 0x8301EC58;
	sub_83020E58(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83056610
	ctx.lr = 0x8301EC80;
	sub_83056610(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8301ecb8
	if (!ctx.cr6.eq) goto loc_8301ECB8;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,15444
	ctx.r3.s64 = ctx.r11.s64 + 15444;
	// bl 0x83020c38
	ctx.lr = 0x8301EC94;
	sub_83020C38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301ecb8
	if (ctx.cr6.eq) goto loc_8301ECB8;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_8301ECAC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_8301ECB8:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// bl 0x83055e30
	ctx.lr = 0x8301ECCC;
	sub_83055E30(ctx, base);
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x83053ea8
	ctx.lr = 0x8301ECD4;
	sub_83053EA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-11264(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -11264);
	// bl 0x82fd6cc8
	ctx.lr = 0x8301ECE0;
	sub_82FD6CC8(ctx, base);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301ECF0"))) PPC_WEAK_FUNC(sub_8301ECF0);
PPC_FUNC_IMPL(__imp__sub_8301ECF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x8301ECF8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x83055e30
	ctx.lr = 0x8301ED08;
	sub_83055E30(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r28,-31969
	ctx.r28.s64 = -2095120384;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301ed98
	if (ctx.cr6.eq) goto loc_8301ED98;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r27,r11,-14320
	ctx.r27.s64 = ctx.r11.s64 + -14320;
loc_8301ED24:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8301ed5c
	if (ctx.cr6.eq) goto loc_8301ED5C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8301ed48
	if (!ctx.cr6.eq) goto loc_8301ED48;
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// stw r26,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r26.u32);
	// b 0x8301ed50
	goto loc_8301ED50;
loc_8301ED48:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8301ED50:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_8301ED5C:
	// addi r29,r30,8
	ctx.r29.s64 = ctx.r30.s64 + 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8304d5c0
	ctx.lr = 0x8301ED68;
	sub_8304D5C0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8304eb80
	ctx.lr = 0x8301ED70;
	sub_8304EB80(ctx, base);
	// addi r11,r30,416
	ctx.r11.s64 = ctx.r30.s64 + 416;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x83053830
	ctx.lr = 0x8301ED7C;
	sub_83053830(ctx, base);
	// stw r27,416(r30)
	PPC_STORE_U32(ctx.r30.u32 + 416, ctx.r27.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,-11264(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -11264);
	// bl 0x82fd6cc8
	ctx.lr = 0x8301ED8C;
	sub_82FD6CC8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8301ed24
	if (!ctx.cr6.eq) goto loc_8301ED24;
loc_8301ED98:
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// stw r26,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r26.u32);
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// bl 0x83053ea8
	ctx.lr = 0x8301EDAC;
	sub_83053EA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-11264(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -11264);
	// bl 0x82fd6cc8
	ctx.lr = 0x8301EDB8;
	sub_82FD6CC8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301EDC0"))) PPC_WEAK_FUNC(sub_8301EDC0);
PPC_FUNC_IMPL(__imp__sub_8301EDC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x8301EDC8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r24,r11,15444
	ctx.r24.s64 = ctx.r11.s64 + 15444;
	// lwz r11,15444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15444);
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8301eeb8
	if (ctx.cr6.eq) goto loc_8301EEB8;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r28,-31969
	ctx.r28.s64 = -2095120384;
	// addi r25,r11,-14320
	ctx.r25.s64 = ctx.r11.s64 + -14320;
loc_8301EDF8:
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x83055e30
	ctx.lr = 0x8301EE04;
	sub_83055E30(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301ee84
	if (ctx.cr6.eq) goto loc_8301EE84;
loc_8301EE10:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8301ee48
	if (ctx.cr6.eq) goto loc_8301EE48;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8301ee34
	if (!ctx.cr6.eq) goto loc_8301EE34;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// b 0x8301ee3c
	goto loc_8301EE3C;
loc_8301EE34:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8301EE3C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_8301EE48:
	// addi r29,r30,8
	ctx.r29.s64 = ctx.r30.s64 + 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8304d5c0
	ctx.lr = 0x8301EE54;
	sub_8304D5C0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8304eb80
	ctx.lr = 0x8301EE5C;
	sub_8304EB80(ctx, base);
	// addi r11,r30,416
	ctx.r11.s64 = ctx.r30.s64 + 416;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x83053830
	ctx.lr = 0x8301EE68;
	sub_83053830(ctx, base);
	// stw r25,416(r30)
	PPC_STORE_U32(ctx.r30.u32 + 416, ctx.r25.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,-11264(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -11264);
	// bl 0x82fd6cc8
	ctx.lr = 0x8301EE78;
	sub_82FD6CC8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8301ee10
	if (!ctx.cr6.eq) goto loc_8301EE10;
loc_8301EE84:
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// bl 0x83053ea8
	ctx.lr = 0x8301EE98;
	sub_83053EA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-11264(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -11264);
	// bl 0x82fd6cc8
	ctx.lr = 0x8301EEA4;
	sub_82FD6CC8(ctx, base);
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8301edf8
	if (!ctx.cr6.eq) goto loc_8301EDF8;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
loc_8301EEB8:
	// stw r11,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301EEC4"))) PPC_WEAK_FUNC(sub_8301EEC4);
PPC_FUNC_IMPL(__imp__sub_8301EEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301EEC8"))) PPC_WEAK_FUNC(sub_8301EEC8);
PPC_FUNC_IMPL(__imp__sub_8301EEC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x8301EED0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stw r26,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r26.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r4,476
	ctx.r4.s64 = 476;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,-11264(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11264);
	// bl 0x82fd6b98
	ctx.lr = 0x8301EEF4;
	sub_82FD6B98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301ef28
	if (ctx.cr6.eq) goto loc_8301EF28;
	// bl 0x83020eb0
	ctx.lr = 0x8301EF04;
	sub_83020EB0(ctx, base);
	// lbz r11,218(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 218);
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8301ef30
	if (ctx.cr6.eq) goto loc_8301EF30;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,375
	ctx.r4.s64 = 375;
	// b 0x8301ef3c
	goto loc_8301EF3C;
loc_8301EF28:
	// li r29,2
	ctx.r29.s64 = 2;
	// b 0x8301ef80
	goto loc_8301EF80;
loc_8301EF30:
	// lis r4,0
	ctx.r4.s64 = 0;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// ori r4,r4,48000
	ctx.r4.u64 = ctx.r4.u64 | 48000;
loc_8301EF3C:
	// bl 0x8304d498
	ctx.lr = 0x8301EF40;
	sub_8304D498(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8301ef68
	if (!ctx.cr6.eq) goto loc_8301EF68;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8304eca8
	ctx.lr = 0x8301EF5C;
	sub_8304ECA8(ctx, base);
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
loc_8301EF68:
	// cmpwi cr6,r29,46
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 46, ctx.xer);
	// beq cr6,0x8301ef98
	if (ctx.cr6.eq) goto loc_8301EF98;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8304d5c0
	ctx.lr = 0x8301EF78;
	sub_8304D5C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8301e820
	ctx.lr = 0x8301EF80;
	sub_8301E820(ctx, base);
loc_8301EF80:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830214d0
	ctx.lr = 0x8301EF88;
	sub_830214D0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83021490
	ctx.lr = 0x8301EF94;
	sub_83021490(ctx, base);
	// stw r26,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r26.u32);
loc_8301EF98:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301EFA4"))) PPC_WEAK_FUNC(sub_8301EFA4);
PPC_FUNC_IMPL(__imp__sub_8301EFA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301EFA8"))) PPC_WEAK_FUNC(sub_8301EFA8);
PPC_FUNC_IMPL(__imp__sub_8301EFA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x8301EFB0;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8301f128
	if (ctx.cr6.eq) goto loc_8301F128;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// lis r26,-31969
	ctx.r26.s64 = -2095120384;
	// addi r27,r10,-14320
	ctx.r27.s64 = ctx.r10.s64 + -14320;
	// addi r31,r11,-11228
	ctx.r31.s64 = ctx.r11.s64 + -11228;
loc_8301EFDC:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8301f118
	if (!ctx.cr6.eq) goto loc_8301F118;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x83055f60
	ctx.lr = 0x8301EFF0;
	sub_83055F60(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8301f0a0
	if (ctx.cr6.eq) goto loc_8301F0A0;
	// addi r7,r29,8
	ctx.r7.s64 = ctx.r29.s64 + 8;
loc_8301F008:
	// lwz r10,12(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8301f020
	if (ctx.cr6.eq) goto loc_8301F020;
	// lwz r10,252(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 252);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x8301f024
	goto loc_8301F024;
loc_8301F020:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8301F024:
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8301f090
	if (!ctx.cr6.eq) goto loc_8301F090;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bne cr6,0x8301f04c
	if (!ctx.cr6.eq) goto loc_8301F04C;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x8301f050
	goto loc_8301F050;
loc_8301F04C:
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
loc_8301F050:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8301f060
	if (!ctx.cr6.eq) goto loc_8301F060;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
loc_8301F060:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// b 0x8301f098
	goto loc_8301F098;
loc_8301F090:
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8301F098:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8301f008
	if (!ctx.cr6.eq) goto loc_8301F008;
loc_8301F0A0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bne cr6,0x8301f0c0
	if (!ctx.cr6.eq) goto loc_8301F0C0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x8301f0c4
	goto loc_8301F0C4;
loc_8301F0C0:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_8301F0C4:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8301f0d4
	if (!ctx.cr6.eq) goto loc_8301F0D4;
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
loc_8301F0D4:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// ld r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// bl 0x8304eb80
	ctx.lr = 0x8301F0F0;
	sub_8304EB80(ctx, base);
	// addi r11,r29,416
	ctx.r11.s64 = ctx.r29.s64 + 416;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x83053830
	ctx.lr = 0x8301F0FC;
	sub_83053830(ctx, base);
	// stw r27,416(r29)
	PPC_STORE_U32(ctx.r29.u32 + 416, ctx.r27.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-11264(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11264);
	// bl 0x82fd6cc8
	ctx.lr = 0x8301F10C;
	sub_82FD6CC8(ctx, base);
	// lwz r28,92(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// b 0x8301f120
	goto loc_8301F120;
loc_8301F118:
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_8301F120:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8301efdc
	if (!ctx.cr6.eq) goto loc_8301EFDC;
loc_8301F128:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301F130"))) PPC_WEAK_FUNC(sub_8301F130);
PPC_FUNC_IMPL(__imp__sub_8301F130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8301F138;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31969
	ctx.r29.s64 = -2095120384;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,384
	ctx.r4.s64 = 384;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,-11264(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -11264);
	// bl 0x82fd6b98
	ctx.lr = 0x8301F154;
	sub_82FD6B98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301f1d0
	if (ctx.cr6.eq) goto loc_8301F1D0;
	// bl 0x83020bd8
	ctx.lr = 0x8301F164;
	sub_83020BD8(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r10,r11,15496
	ctx.r10.s64 = ctx.r11.s64 + 15496;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x83056610
	ctx.lr = 0x8301F180;
	sub_83056610(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8301f1a4
	if (!ctx.cr6.eq) goto loc_8301F1A4;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r11,-11260
	ctx.r3.s64 = ctx.r11.s64 + -11260;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x83020f90
	ctx.lr = 0x8301F19C;
	sub_83020F90(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8301f1c4
	if (!ctx.cr6.eq) goto loc_8301F1C4;
loc_8301F1A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83055e30
	ctx.lr = 0x8301F1AC;
	sub_83055E30(ctx, base);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x83053ea8
	ctx.lr = 0x8301F1B4;
	sub_83053EA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-11264(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -11264);
	// bl 0x82fd6cc8
	ctx.lr = 0x8301F1C0;
	sub_82FD6CC8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_8301F1C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_8301F1D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301F1DC"))) PPC_WEAK_FUNC(sub_8301F1DC);
PPC_FUNC_IMPL(__imp__sub_8301F1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301F1E0"))) PPC_WEAK_FUNC(sub_8301F1E0);
PPC_FUNC_IMPL(__imp__sub_8301F1E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x8301F1E8;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8301edc0
	ctx.lr = 0x8301F1F0;
	sub_8301EDC0(ctx, base);
	// bl 0x8301e620
	ctx.lr = 0x8301F1F4;
	sub_8301E620(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r24,0
	ctx.r24.s64 = 0;
	// lis r25,-31969
	ctx.r25.s64 = -2095120384;
	// addi r31,r11,15456
	ctx.r31.s64 = ctx.r11.s64 + 15456;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// lwz r10,15456(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15456);
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8301f2a4
	if (ctx.cr6.eq) goto loc_8301F2A4;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r28,r11,-14320
	ctx.r28.s64 = ctx.r11.s64 + -14320;
	// b 0x8301f230
	goto loc_8301F230;
loc_8301F224:
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_8301F230:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne cr6,0x8301f250
	if (!ctx.cr6.eq) goto loc_8301F250;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8301f254
	goto loc_8301F254;
loc_8301F250:
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_8301F254:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8301f264
	if (!ctx.cr6.eq) goto loc_8301F264;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
loc_8301F264:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// bl 0x8304eb80
	ctx.lr = 0x8301F280;
	sub_8304EB80(ctx, base);
	// addi r11,r30,416
	ctx.r11.s64 = ctx.r30.s64 + 416;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x83053830
	ctx.lr = 0x8301F28C;
	sub_83053830(ctx, base);
	// stw r28,416(r30)
	PPC_STORE_U32(ctx.r30.u32 + 416, ctx.r28.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,-11264(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -11264);
	// bl 0x82fd6cc8
	ctx.lr = 0x8301F29C;
	sub_82FD6CC8(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8301f224
	if (!ctx.cr6.eq) goto loc_8301F224;
loc_8301F2A4:
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// stw r24,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r24.u32);
	// addi r30,r10,15444
	ctx.r30.s64 = ctx.r10.s64 + 15444;
	// stw r24,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r24.u32);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8301f2f0
	if (ctx.cr6.eq) goto loc_8301F2F0;
	// stw r4,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r4.u32);
	// lwz r3,-11264(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -11264);
	// bl 0x82fd6cc8
	ctx.lr = 0x8301F2D8;
	sub_82FD6CC8(ctx, base);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// stw r24,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r24.u32);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// stw r24,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r24.u32);
	// stw r24,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r24.u32);
loc_8301F2F0:
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-11228
	ctx.r3.s64 = ctx.r11.s64 + -11228;
	// bl 0x83021170
	ctx.lr = 0x8301F2FC;
	sub_83021170(ctx, base);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r3,r10,-11260
	ctx.r3.s64 = ctx.r10.s64 + -11260;
	// bl 0x83021080
	ctx.lr = 0x8301F308;
	sub_83021080(ctx, base);
	// lis r31,-31958
	ctx.r31.s64 = -2094399488;
	// lwz r4,15496(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15496);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8301f328
	if (ctx.cr6.eq) goto loc_8301F328;
	// lwz r3,-11264(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -11264);
	// bl 0x82fd6cc8
	ctx.lr = 0x8301F320;
	sub_82FD6CC8(ctx, base);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// stw r24,15496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15496, ctx.r24.u32);
loc_8301F328:
	// lis r31,-31958
	ctx.r31.s64 = -2094399488;
	// lwz r3,15412(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15412);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301f35c
	if (ctx.cr6.eq) goto loc_8301F35C;
	// bl 0x830555f0
	ctx.lr = 0x8301F33C;
	sub_830555F0(ctx, base);
	// lwz r11,15412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15412);
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// bl 0x83053ea8
	ctx.lr = 0x8301F348;
	sub_83053EA8(ctx, base);
	// lwz r4,15412(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15412);
	// lwz r3,-11264(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -11264);
	// bl 0x82fd6cc8
	ctx.lr = 0x8301F354;
	sub_82FD6CC8(ctx, base);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// stw r24,15412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15412, ctx.r24.u32);
loc_8301F35C:
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// addi r28,r11,15512
	ctx.r28.s64 = ctx.r11.s64 + 15512;
	// li r26,24
	ctx.r26.s64 = 24;
	// addi r27,r28,-12
	ctx.r27.s64 = ctx.r28.s64 + -12;
loc_8301F370:
	// lwz r30,12(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8301f3a4
	if (ctx.cr6.eq) goto loc_8301F3A4;
loc_8301F380:
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// lwz r3,-11264(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -11264);
	// addi r10,r28,4
	ctx.r10.s64 = ctx.r28.s64 + 4;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r9,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82fd6cc8
	ctx.lr = 0x8301F398;
	sub_82FD6CC8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x8301f380
	if (ctx.cr6.lt) goto loc_8301F380;
loc_8301F3A4:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// stwu r24,12(r27)
	ea = 12 + ctx.r27.u32;
	PPC_STORE_U32(ea, ctx.r24.u32);
	ctx.r27.u32 = ea;
	// addi r29,r29,3
	ctx.r29.s64 = ctx.r29.s64 + 3;
	// bne 0x8301f370
	if (!ctx.cr0.eq) goto loc_8301F370;
	// bl 0x83045160
	ctx.lr = 0x8301F3B8;
	sub_83045160(ctx, base);
	// bl 0x830506b0
	ctx.lr = 0x8301F3BC;
	sub_830506B0(ctx, base);
	// lis r30,-31958
	ctx.r30.s64 = -2094399488;
	// lwz r3,15376(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15376);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301f40c
	if (ctx.cr6.eq) goto loc_8301F40C;
	// bl 0x830552c8
	ctx.lr = 0x8301F3D0;
	sub_830552C8(ctx, base);
	// lwz r31,15376(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15376);
	// lwz r29,-11264(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + -11264);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8301f404
	if (ctx.cr6.eq) goto loc_8301F404;
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
	ctx.lr = 0x8301F3F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fd6cc8
	ctx.lr = 0x8301F404;
	sub_82FD6CC8(ctx, base);
loc_8301F404:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// stw r24,15376(r30)
	PPC_STORE_U32(ctx.r30.u32 + 15376, ctx.r24.u32);
loc_8301F40C:
	// lis r31,-31958
	ctx.r31.s64 = -2094399488;
	// lwz r11,15440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15440);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301f428
	if (ctx.cr6.eq) goto loc_8301F428;
	// bl 0x8303fc40
	ctx.lr = 0x8301F420;
	sub_8303FC40(ctx, base);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// stw r24,15440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15440, ctx.r24.u32);
loc_8301F428:
	// lis r31,-31958
	ctx.r31.s64 = -2094399488;
	// lwz r3,15372(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15372);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301f444
	if (ctx.cr6.eq) goto loc_8301F444;
	// bl 0x82a756a0
	ctx.lr = 0x8301F43C;
	sub_82A756A0(ctx, base);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// stw r24,15372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15372, ctx.r24.u32);
loc_8301F444:
	// bl 0x82fd69f0
	ctx.lr = 0x8301F448;
	sub_82FD69F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301f46c
	if (ctx.cr6.eq) goto loc_8301F46C;
	// lwz r3,-11264(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -11264);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8301f46c
	if (ctx.cr6.eq) goto loc_8301F46C;
	// bl 0x82fd7328
	ctx.lr = 0x8301F464;
	sub_82FD7328(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,-11264(r25)
	PPC_STORE_U32(ctx.r25.u32 + -11264, ctx.r11.u32);
loc_8301F46C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301F478"))) PPC_WEAK_FUNC(sub_8301F478);
PPC_FUNC_IMPL(__imp__sub_8301F478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x8301F480;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830215d8
	ctx.lr = 0x8301F494;
	sub_830215D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83056b50
	ctx.lr = 0x8301F49C;
	sub_83056B50(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r30,r11,15444
	ctx.r30.s64 = ctx.r11.s64 + 15444;
	// lwz r31,15444(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15444);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8301f4e8
	if (ctx.cr6.eq) goto loc_8301F4E8;
loc_8301F4B8:
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r29,128
	ctx.r3.s64 = ctx.r29.s64 + 128;
	// bl 0x83056b50
	ctx.lr = 0x8301F4C4;
	sub_83056B50(ctx, base);
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8301f4d8
	if (!ctx.cr6.eq) goto loc_8301F4D8;
	// lwz r11,132(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 132);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8301f508
	if (!ctx.cr6.eq) goto loc_8301F508;
loc_8301F4D8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8301f4b8
	if (!ctx.cr6.eq) goto loc_8301F4B8;
loc_8301F4E8:
	// lbz r11,218(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 218);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8301f514
	if (ctx.cr6.eq) goto loc_8301F514;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x8301f524
	goto loc_8301F524;
loc_8301F508:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_8301F514:
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r10,r11,15496
	ctx.r10.s64 = ctx.r11.s64 + 15496;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_8301F524:
	// bl 0x8301ec20
	ctx.lr = 0x8301F528;
	sub_8301EC20(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8301f53c
	if (!ctx.cr6.eq) goto loc_8301F53C;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_8301F53C:
	// lbz r11,218(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 218);
	// lbz r10,400(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 400);
	// rlwimi r10,r11,6,18,24
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 6) & 0x3F80) | (ctx.r10.u64 & 0xFFFFFFFFFFFFC07F);
	// stb r10,400(r31)
	PPC_STORE_U8(ctx.r31.u32 + 400, ctx.r10.u8);
	// lbz r8,218(r27)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r27.u32 + 218);
	// rlwinm r7,r8,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8301f56c
	if (!ctx.cr6.eq) goto loc_8301F56C;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// lwz r3,15412(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15412);
	// bl 0x83055768
	ctx.lr = 0x8301F56C;
	sub_83055768(ctx, base);
loc_8301F56C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83056c48
	ctx.lr = 0x8301F574;
	sub_83056C48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8301f5a0
	if (!ctx.cr6.eq) goto loc_8301F5A0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83056bb0
	ctx.lr = 0x8301F588;
	sub_83056BB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8301f5a0
	if (!ctx.cr6.eq) goto loc_8301F5A0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x83055f70
	ctx.lr = 0x8301F5A0;
	sub_83055F70(ctx, base);
loc_8301F5A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301F5AC"))) PPC_WEAK_FUNC(sub_8301F5AC);
PPC_FUNC_IMPL(__imp__sub_8301F5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301F5B0"))) PPC_WEAK_FUNC(sub_8301F5B0);
PPC_FUNC_IMPL(__imp__sub_8301F5B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8301F5B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r31,r11,15444
	ctx.r31.s64 = ctx.r11.s64 + 15444;
	// lwz r29,15444(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15444);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8301f640
	if (ctx.cr6.eq) goto loc_8301F640;
loc_8301F5D4:
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8301efa8
	ctx.lr = 0x8301F5E0;
	sub_8301EFA8(ctx, base);
	// lwz r11,132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8301f630
	if (ctx.cr6.eq) goto loc_8301F630;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8301f630
	if (!ctx.cr6.eq) goto loc_8301F630;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8301ecf0
	ctx.lr = 0x8301F600;
	sub_8301ECF0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// ble cr6,0x8301f624
	if (!ctx.cr6.gt) goto loc_8301F624;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_8301F624:
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x8301f638
	goto loc_8301F638;
loc_8301F630:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_8301F638:
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8301f5d4
	if (!ctx.cr6.eq) goto loc_8301F5D4;
loc_8301F640:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301F648"))) PPC_WEAK_FUNC(sub_8301F648);
PPC_FUNC_IMPL(__imp__sub_8301F648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8301F650;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r11,-11260
	ctx.r29.s64 = ctx.r11.s64 + -11260;
	// lwz r11,-11260(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301f694
	if (ctx.cr6.eq) goto loc_8301F694;
loc_8301F66C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8301f688
	if (ctx.cr6.eq) goto loc_8301F688;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8301f66c
	if (!ctx.cr6.eq) goto loc_8301F66C;
	// b 0x8301f694
	goto loc_8301F694;
loc_8301F688:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8301f74c
	if (!ctx.cr6.eq) goto loc_8301F74C;
loc_8301F694:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830215d8
	ctx.lr = 0x8301F69C;
	sub_830215D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8301f130
	ctx.lr = 0x8301F6A8;
	sub_8301F130(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301f740
	if (ctx.cr6.eq) goto loc_8301F740;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83055f70
	ctx.lr = 0x8301F6BC;
	sub_83055F70(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8301f734
	if (ctx.cr6.eq) goto loc_8301F734;
	// bl 0x83056498
	ctx.lr = 0x8301F6CC;
	sub_83056498(ctx, base);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8301f708
	if (ctx.cr6.eq) goto loc_8301F708;
loc_8301F6E0:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8301f700
	if (ctx.cr6.eq) goto loc_8301F700;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8301f6e0
	if (!ctx.cr6.eq) goto loc_8301F6E0;
	// b 0x8301f708
	goto loc_8301F708;
loc_8301F700:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83020d58
	ctx.lr = 0x8301F708;
	sub_83020D58(ctx, base);
loc_8301F708:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83055e30
	ctx.lr = 0x8301F710;
	sub_83055E30(ctx, base);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x83053ea8
	ctx.lr = 0x8301F718;
	sub_83053EA8(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-11264(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11264);
	// bl 0x82fd6cc8
	ctx.lr = 0x8301F728;
	sub_82FD6CC8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_8301F734:
	// bl 0x830567f0
	ctx.lr = 0x8301F738;
	sub_830567F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83055f60
	ctx.lr = 0x8301F740;
	sub_83055F60(ctx, base);
loc_8301F740:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_8301F74C:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301F758"))) PPC_WEAK_FUNC(sub_8301F758);
PPC_FUNC_IMPL(__imp__sub_8301F758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8301F760;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8301e7a0
	ctx.lr = 0x8301F774;
	sub_8301E7A0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301f7a0
	if (ctx.cr6.eq) goto loc_8301F7A0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x8304eca8
	ctx.lr = 0x8301F78C;
	sub_8304ECA8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83021538
	ctx.lr = 0x8301F794;
	sub_83021538(ctx, base);
	// li r3,5
	ctx.r3.s64 = 5;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_8301F7A0:
	// addi r31,r30,16
	ctx.r31.s64 = ctx.r30.s64 + 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8301eec8
	ctx.lr = 0x8301F7B0;
	sub_8301EEC8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,63
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 63, ctx.xer);
	// bne cr6,0x8301f80c
	if (!ctx.cr6.eq) goto loc_8301F80C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8301f8bc
	if (ctx.cr6.eq) goto loc_8301F8BC;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,15456
	ctx.r11.s64 = ctx.r11.s64 + 15456;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8301f7ec
	if (!ctx.cr6.eq) goto loc_8301F7EC;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x8301f7f0
	goto loc_8301F7F0;
loc_8301F7EC:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_8301F7F0:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_8301F80C:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// beq cr6,0x8301f81c
	if (ctx.cr6.eq) goto loc_8301F81C;
	// cmpwi cr6,r28,46
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 46, ctx.xer);
	// bne cr6,0x8301f8b4
	if (!ctx.cr6.eq) goto loc_8301F8B4;
loc_8301F81C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301f8b4
	if (ctx.cr6.eq) goto loc_8301F8B4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8301f478
	ctx.lr = 0x8301F830;
	sub_8301F478(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// bne cr6,0x8301f844
	if (!ctx.cr6.eq) goto loc_8301F844;
	// li r28,2
	ctx.r28.s64 = 2;
	// b 0x8301f8bc
	goto loc_8301F8BC;
loc_8301F844:
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,15416(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15416);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// lwz r11,15416(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15416);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,15416(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15416, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8301f884
	if (!ctx.cr6.eq) goto loc_8301F884;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x8301f888
	goto loc_8301F888;
loc_8301F884:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_8301F888:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x830567f0
	ctx.lr = 0x8301F8A4;
	sub_830567F0(ctx, base);
	// li r28,1
	ctx.r28.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_8301F8B4:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// beq cr6,0x8301f8cc
	if (ctx.cr6.eq) goto loc_8301F8CC;
loc_8301F8BC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301f8cc
	if (ctx.cr6.eq) goto loc_8301F8CC;
	// bl 0x8301e820
	ctx.lr = 0x8301F8CC;
	sub_8301E820(ctx, base);
loc_8301F8CC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301F8D8"))) PPC_WEAK_FUNC(sub_8301F8D8);
PPC_FUNC_IMPL(__imp__sub_8301F8D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8301F8E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8304f9d0
	ctx.lr = 0x8301F8FC;
	sub_8304F9D0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,63
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 63, ctx.xer);
	// bne cr6,0x8301f910
	if (!ctx.cr6.eq) goto loc_8301F910;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_8301F910:
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,15456
	ctx.r3.s64 = ctx.r11.s64 + 15456;
	// bl 0x83020f10
	ctx.lr = 0x8301F920;
	sub_83020F10(ctx, base);
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// beq cr6,0x8301f93c
	if (ctx.cr6.eq) goto loc_8301F93C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8301e820
	ctx.lr = 0x8301F930;
	sub_8301E820(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_8301F93C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8301f478
	ctx.lr = 0x8301F944;
	sub_8301F478(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8301f968
	if (!ctx.cr6.eq) goto loc_8301F968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r28,2
	ctx.r28.s64 = 2;
	// bl 0x8301e820
	ctx.lr = 0x8301F95C;
	sub_8301E820(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_8301F968:
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,15416(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15416);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,15416(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15416);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,15416(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15416, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8301f9a0
	if (!ctx.cr6.eq) goto loc_8301F9A0;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// b 0x8301f9a4
	goto loc_8301F9A4;
loc_8301F9A0:
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
loc_8301F9A4:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x830567f0
	ctx.lr = 0x8301F9C0;
	sub_830567F0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301F9CC"))) PPC_WEAK_FUNC(sub_8301F9CC);
PPC_FUNC_IMPL(__imp__sub_8301F9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301F9D0"))) PPC_WEAK_FUNC(sub_8301F9D0);
PPC_FUNC_IMPL(__imp__sub_8301F9D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x8301F9D8;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r30,r11,-11228
	ctx.r30.s64 = ctx.r11.s64 + -11228;
loc_8301F9E4:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r24,0
	ctx.r24.s64 = 0;
loc_8301F9EC:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
loc_8301F9F4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8301fd1c
	if (ctx.cr6.eq) goto loc_8301FD1C;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r27,12(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r26,92(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_8301FA14:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8301fa90
	if (!ctx.cr6.eq) goto loc_8301FA90;
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// addi r28,r11,12
	ctx.r28.s64 = ctx.r11.s64 + 12;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8301fa78
	if (!ctx.cr6.eq) goto loc_8301FA78;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8301fa48
	if (ctx.cr6.eq) goto loc_8301FA48;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8301fa78
	if (!ctx.cr6.eq) goto loc_8301FA78;
loc_8301FA48:
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8301fa78
	if (ctx.cr6.eq) goto loc_8301FA78;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8301f8d8
	ctx.lr = 0x8301FA64;
	sub_8301F8D8(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8301fcd4
	if (ctx.cr6.eq) goto loc_8301FCD4;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301fa8c
	if (ctx.cr6.eq) goto loc_8301FA8C;
loc_8301FA78:
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8301fa14
	if (!ctx.cr6.eq) goto loc_8301FA14;
	// b 0x8301fa90
	goto loc_8301FA90;
loc_8301FA8C:
	// li r25,1
	ctx.r25.s64 = 1;
loc_8301FA90:
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301fac4
	if (ctx.cr6.eq) goto loc_8301FAC4;
loc_8301FA9C:
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// beq cr6,0x8301fd1c
	if (ctx.cr6.eq) goto loc_8301FD1C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8301fa9c
	if (ctx.cr6.eq) goto loc_8301FA9C;
	// b 0x8301f9f4
	goto loc_8301F9F4;
loc_8301FAC4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8301fb50
	if (!ctx.cr6.eq) goto loc_8301FB50;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8301e6d8
	ctx.lr = 0x8301FAE4;
	sub_8301E6D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8301fb50
	if (!ctx.cr6.eq) goto loc_8301FB50;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bne cr6,0x8301fb10
	if (!ctx.cr6.eq) goto loc_8301FB10;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// b 0x8301fb14
	goto loc_8301FB14;
loc_8301FB10:
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
loc_8301FB14:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8301fb24
	if (!ctx.cr6.eq) goto loc_8301FB24;
	// stw r24,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r24.u32);
loc_8301FB24:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// lwz r24,84(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
loc_8301FB50:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301f9f4
	if (ctx.cr6.eq) goto loc_8301F9F4;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// beq cr6,0x8301fc50
	if (ctx.cr6.eq) goto loc_8301FC50;
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// addi r29,r10,8
	ctx.r29.s64 = ctx.r10.s64 + 8;
	// bgt cr6,0x8301fbe8
	if (ctx.cr6.gt) goto loc_8301FBE8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8301fba8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8301FBA8;
	// bdzf 4*cr6+eq,0x8301fbbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8301FBBC;
	// bdzf 4*cr6+eq,0x8301fbb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8301FBB0;
	// bdzf 4*cr6+eq,0x8301fbc8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8301FBC8;
	// bdzf 4*cr6+eq,0x8301fbd4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8301FBD4;
	// bne cr6,0x8301fbe0
	if (!ctx.cr6.eq) goto loc_8301FBE0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8304d8e0
	ctx.lr = 0x8301FBA4;
	sub_8304D8E0(ctx, base);
	// b 0x8301fbe8
	goto loc_8301FBE8;
loc_8301FBA8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8304d8e0
	ctx.lr = 0x8301FBB0;
	sub_8304D8E0(ctx, base);
loc_8301FBB0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8304d600
	ctx.lr = 0x8301FBB8;
	sub_8304D600(ctx, base);
	// b 0x8301fbe8
	goto loc_8301FBE8;
loc_8301FBBC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8304d5c0
	ctx.lr = 0x8301FBC4;
	sub_8304D5C0(ctx, base);
	// b 0x8301fbe8
	goto loc_8301FBE8;
loc_8301FBC8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8304d658
	ctx.lr = 0x8301FBD0;
	sub_8304D658(ctx, base);
	// b 0x8301fbe8
	goto loc_8301FBE8;
loc_8301FBD4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8304ef00
	ctx.lr = 0x8301FBDC;
	sub_8304EF00(ctx, base);
	// b 0x8301fbe8
	goto loc_8301FBE8;
loc_8301FBE0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8304d7c0
	ctx.lr = 0x8301FBE8;
	sub_8304D7C0(ctx, base);
loc_8301FBE8:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r24,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// bne cr6,0x8301fc0c
	if (!ctx.cr6.eq) goto loc_8301FC0C;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// b 0x8301fc10
	goto loc_8301FC10;
loc_8301FC0C:
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
loc_8301FC10:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8301fc20
	if (!ctx.cr6.eq) goto loc_8301FC20;
	// stw r24,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r24.u32);
loc_8301FC20:
	// ld r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// lwz r24,84(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// b 0x8301f9f4
	goto loc_8301F9F4;
loc_8301FC50:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8301fcc8
	if (!ctx.cr6.eq) goto loc_8301FCC8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301fcc8
	if (ctx.cr6.eq) goto loc_8301FCC8;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x8304d5c0
	ctx.lr = 0x8301FC68;
	sub_8304D5C0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bne cr6,0x8301fc88
	if (!ctx.cr6.eq) goto loc_8301FC88;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x8301fc8c
	goto loc_8301FC8C;
loc_8301FC88:
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
loc_8301FC8C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8301fc9c
	if (!ctx.cr6.eq) goto loc_8301FC9C;
	// stw r24,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r24.u32);
loc_8301FC9C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// ld r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r24,84(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// b 0x8301f9f4
	goto loc_8301F9F4;
loc_8301FCC8:
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8301f9ec
	goto loc_8301F9EC;
loc_8301FCD4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bne cr6,0x8301fcec
	if (!ctx.cr6.eq) goto loc_8301FCEC;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x8301fcf0
	goto loc_8301FCF0;
loc_8301FCEC:
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_8301FCF0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8301fd00
	if (!ctx.cr6.eq) goto loc_8301FD00;
	// stw r26,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r26.u32);
loc_8301FD00:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// b 0x8301f9e4
	goto loc_8301F9E4;
loc_8301FD1C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301FD24"))) PPC_WEAK_FUNC(sub_8301FD24);
PPC_FUNC_IMPL(__imp__sub_8301FD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301FD28"))) PPC_WEAK_FUNC(sub_8301FD28);
PPC_FUNC_IMPL(__imp__sub_8301FD28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x8301FD30;
	__savegprlr_14(ctx, base);
	// stwu r1,-736(r1)
	ea = -736 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r3,756(r1)
	PPC_STORE_U32(ctx.r1.u32 + 756, ctx.r3.u32);
	// li r27,4
	ctx.r27.s64 = 4;
	// addi r26,r11,8
	ctx.r26.s64 = ctx.r11.s64 + 8;
	// li r24,8
	ctx.r24.s64 = 8;
	// li r25,1024
	ctx.r25.s64 = 1024;
	// lwz r28,20(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
loc_8301FD54:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8301fd9c
	if (ctx.cr6.eq) goto loc_8301FD9C;
	// addi r11,r27,64
	ctx.r11.s64 = ctx.r27.s64 + 64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
loc_8301FD68:
	// lwzu r3,-4(r29)
	ea = -4 + ctx.r29.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301fd94
	if (ctx.cr6.eq) goto loc_8301FD94;
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x83057f80
	ctx.lr = 0x8301FD88;
	sub_83057F80(ctx, base);
	// lwz r11,848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// bne cr6,0x8301fdb4
	if (!ctx.cr6.eq) goto loc_8301FDB4;
loc_8301FD94:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x8301fd68
	if (!ctx.cr6.eq) goto loc_8301FD68;
loc_8301FD9C:
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x83058998
	ctx.lr = 0x8301FDB0;
	sub_83058998(ctx, base);
	// b 0x8301fe1c
	goto loc_8301FE1C;
loc_8301FDB4:
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// beq cr6,0x8301fdc4
	if (ctx.cr6.eq) goto loc_8301FDC4;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// bne cr6,0x8302033c
	if (!ctx.cr6.eq) goto loc_8302033C;
loc_8301FDC4:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// b 0x8301fe3c
	goto loc_8301FE3C;
loc_8301FDCC:
	// lbz r11,932(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 932);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301fde0
	if (ctx.cr6.eq) goto loc_8301FDE0;
	// sth r24,28(r31)
	PPC_STORE_U16(ctx.r31.u32 + 28, ctx.r24.u16);
	// b 0x8301fde4
	goto loc_8301FDE4;
loc_8301FDE0:
	// sth r25,28(r31)
	PPC_STORE_U16(ctx.r31.u32 + 28, ctx.r25.u16);
loc_8301FDE4:
	// lwz r3,252(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 252);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8301FDFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// beq cr6,0x8301fe10
	if (ctx.cr6.eq) goto loc_8301FE10;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// bne cr6,0x8302033c
	if (!ctx.cr6.eq) goto loc_8302033C;
loc_8301FE10:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830586a0
	ctx.lr = 0x8301FE1C;
	sub_830586A0(ctx, base);
loc_8301FE1C:
	// lwz r11,848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// beq cr6,0x8301fdcc
	if (ctx.cr6.eq) goto loc_8301FDCC;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// beq cr6,0x8301fe38
	if (ctx.cr6.eq) goto loc_8301FE38;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// bne cr6,0x8302033c
	if (!ctx.cr6.eq) goto loc_8302033C;
loc_8301FE38:
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8301FE3C:
	// cmplwi cr6,r27,4
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 4, ctx.xer);
	// bge cr6,0x8301fe84
	if (!ctx.cr6.lt) goto loc_8301FE84;
	// addi r11,r27,63
	ctx.r11.s64 = ctx.r27.s64 + 63;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
loc_8301FE50:
	// lwzu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301fe7c
	if (ctx.cr6.eq) goto loc_8301FE7C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83057b40
	ctx.lr = 0x8301FE68;
	sub_83057B40(ctx, base);
	// lwz r11,848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// beq cr6,0x8301fe7c
	if (ctx.cr6.eq) goto loc_8301FE7C;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// bne cr6,0x8302033c
	if (!ctx.cr6.eq) goto loc_8302033C;
loc_8301FE7C:
	// cmplwi cr6,r27,4
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 4, ctx.xer);
	// blt cr6,0x8301fe50
	if (ctx.cr6.lt) goto loc_8301FE50;
loc_8301FE84:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r28,192
	ctx.r3.s64 = ctx.r28.s64 + 192;
	// bl 0x83053c90
	ctx.lr = 0x8301FE90;
	sub_83053C90(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8304f4c8
	ctx.lr = 0x8301FE9C;
	sub_8304F4C8(ctx, base);
	// lwz r11,848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// beq cr6,0x8301fec0
	if (ctx.cr6.eq) goto loc_8301FEC0;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// beq cr6,0x8301fec0
	if (ctx.cr6.eq) goto loc_8301FEC0;
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// bne cr6,0x8302033c
	if (!ctx.cr6.eq) goto loc_8302033C;
	// lwz r28,12(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// b 0x8301fd54
	goto loc_8301FD54;
loc_8301FEC0:
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r5,r11,15436
	ctx.r5.s64 = ctx.r11.s64 + 15436;
	// addi r4,r10,15432
	ctx.r4.s64 = ctx.r10.s64 + 15432;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83053728
	ctx.lr = 0x8301FED8;
	sub_83053728(ctx, base);
	// lis r29,-31958
	ctx.r29.s64 = -2094399488;
	// lwz r3,15440(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15440);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301ff00
	if (ctx.cr6.eq) goto loc_8301FF00;
	// bl 0x8303f460
	ctx.lr = 0x8301FEEC;
	sub_8303F460(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,15440(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15440);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8301ff04
	if (!ctx.cr6.eq) goto loc_8301FF04;
loc_8301FF00:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8301FF04:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301ff50
	if (ctx.cr6.eq) goto loc_8301FF50;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8303ef28
	ctx.lr = 0x8301FF18;
	sub_8303EF28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301ff44
	if (ctx.cr6.eq) goto loc_8301FF44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8303ee10
	ctx.lr = 0x8301FF2C;
	sub_8303EE10(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,15440(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15440);
	// bl 0x8303fb90
	ctx.lr = 0x8301FF38;
	sub_8303FB90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8303edb8
	ctx.lr = 0x8301FF40;
	sub_8303EDB8(ctx, base);
	// b 0x8301ff50
	goto loc_8301FF50;
loc_8301FF44:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,15440(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15440);
	// bl 0x8303fb90
	ctx.lr = 0x8301FF50;
	sub_8303FB90(ctx, base);
loc_8301FF50:
	// lbz r11,865(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 865);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8302033c
	if (ctx.cr6.eq) goto loc_8302033C;
	// lbz r11,864(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 864);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83020320
	if (ctx.cr6.eq) goto loc_83020320;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301ff9c
	if (ctx.cr6.eq) goto loc_8301FF9C;
loc_8301FF80:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8301ff80
	if (!ctx.cr6.eq) goto loc_8301FF80;
loc_8301FF9C:
	// li r26,-16
	ctx.r26.s64 = -16;
	// li r27,16
	ctx.r27.s64 = 16;
	// li r28,32
	ctx.r28.s64 = 32;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8301ffec
	if (ctx.cr6.eq) goto loc_8301FFEC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
loc_8301FFC0:
	// lvx128 v63,r11,r9
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v62,r0,r11
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v61,r11,r27
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r27.u32) & ~0xF), VectorMaskL));
	// lvx128 v60,r11,r28
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r28.u32) & ~0xF), VectorMaskL));
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// stvx128 v63,r10,r26
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v61,r10,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v60,r10,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// bdnz 0x8301ffc0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8301FFC0;
loc_8301FFEC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8302000c
	if (ctx.cr6.eq) goto loc_8302000C;
	// lwz r11,252(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// b 0x83020010
	goto loc_83020010;
loc_8302000C:
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
loc_83020010:
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// addi r31,r31,872
	ctx.r31.s64 = ctx.r31.s64 + 872;
	// li r29,400
	ctx.r29.s64 = 400;
	// li r30,416
	ctx.r30.s64 = 416;
	// li r14,528
	ctx.r14.s64 = 528;
	// li r15,544
	ctx.r15.s64 = 544;
	// li r16,144
	ctx.r16.s64 = 144;
	// li r17,160
	ctx.r17.s64 = 160;
	// li r18,560
	ctx.r18.s64 = 560;
	// li r19,576
	ctx.r19.s64 = 576;
	// li r20,176
	ctx.r20.s64 = 176;
	// li r21,192
	ctx.r21.s64 = 192;
	// li r22,592
	ctx.r22.s64 = 592;
	// li r23,608
	ctx.r23.s64 = 608;
	// li r24,208
	ctx.r24.s64 = 208;
	// li r25,224
	ctx.r25.s64 = 224;
loc_83020050:
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830202b8
	if (ctx.cr6.eq) goto loc_830202B8;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8301f648
	ctx.lr = 0x83020064;
	sub_8301F648(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830202a0
	if (ctx.cr6.eq) goto loc_830202A0;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,384
	ctx.r7.s64 = 384;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// li r6,368
	ctx.r6.s64 = 368;
	// blt cr6,0x8302022c
	if (ctx.cr6.lt) goto loc_8302022C;
	// lwz r11,756(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 756);
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// addi r8,r5,-3
	ctx.r8.s64 = ctx.r5.s64 + -3;
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
loc_83020094:
	// lvlx128 v59,r0,r31
	temp.u32 = ctx.r31.u32;
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r4,432
	ctx.r4.s64 = 432;
	// lvx128 v58,r11,r6
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// std r6,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r6.u64);
	// vspltw128 v57,v59,0
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), 0xFF));
	// lvx128 v56,r11,r7
	simd::store_shuffled(ctx.v56, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r6,448
	ctx.r6.s64 = 448;
	// std r7,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r7.u64);
	// li r7,48
	ctx.r7.s64 = 48;
	// std r5,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// li r5,64
	ctx.r5.s64 = 64;
	// std r3,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r3.u64);
	// vmulfp128 v55,v58,v57
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v55.f32, _mm_mul_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v57.f32)));
	// li r3,464
	ctx.r3.s64 = 464;
	// vmulfp128 v54,v56,v57
	_mm_store_ps(ctx.v54.f32, _mm_mul_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v57.f32)));
	// std r25,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r25.u64);
	// li r25,480
	ctx.r25.s64 = 480;
	// std r24,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r24.u64);
	// li r24,80
	ctx.r24.s64 = 80;
	// std r23,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r23.u64);
	// li r23,96
	ctx.r23.s64 = 96;
	// std r22,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r22.u64);
	// li r22,496
	ctx.r22.s64 = 496;
	// std r21,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r21.u64);
	// li r21,512
	ctx.r21.s64 = 512;
	// std r20,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r20.u64);
	// li r20,112
	ctx.r20.s64 = 112;
	// std r19,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r19.u64);
	// li r19,128
	ctx.r19.s64 = 128;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// stvx128 v55,r11,r26
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v54,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v53,r11,r29
	simd::store_shuffled(ctx.v53, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r29.u32) & ~0xF), VectorMaskL));
	// lvx128 v52,r11,r30
	simd::store_shuffled(ctx.v52, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r30.u32) & ~0xF), VectorMaskL));
	// lvlx128 v51,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v50,v51,0
	_mm_store_si128((__m128i*)ctx.v50.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v51.u32), 0xFF));
	// vmulfp128 v49,v53,v50
	_mm_store_ps(ctx.v49.f32, _mm_mul_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v50.f32)));
	// vmulfp128 v48,v52,v50
	_mm_store_ps(ctx.v48.f32, _mm_mul_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v50.f32)));
	// stvx128 v49,r11,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v48,r11,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v47,r11,r4
	simd::store_shuffled(ctx.v47, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v46,r11,r6
	simd::store_shuffled(ctx.v46, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// lvlx128 v45,r0,r31
	temp.u32 = ctx.r31.u32;
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v44,v45,0
	_mm_store_si128((__m128i*)ctx.v44.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v45.u32), 0xFF));
	// vmulfp128 v43,v47,v44
	_mm_store_ps(ctx.v43.f32, _mm_mul_ps(_mm_load_ps(ctx.v47.f32), _mm_load_ps(ctx.v44.f32)));
	// vmulfp128 v42,v46,v44
	_mm_store_ps(ctx.v42.f32, _mm_mul_ps(_mm_load_ps(ctx.v46.f32), _mm_load_ps(ctx.v44.f32)));
	// stvx128 v43,r11,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v43.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v42,r11,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v42.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v41,r11,r3
	simd::store_shuffled(ctx.v41, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r3.u32) & ~0xF), VectorMaskL));
	// lvx128 v40,r11,r25
	simd::store_shuffled(ctx.v40, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r25.u32) & ~0xF), VectorMaskL));
	// lvlx128 v39,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v39.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v38,v39,0
	_mm_store_si128((__m128i*)ctx.v38.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v39.u32), 0xFF));
	// vmulfp128 v37,v41,v38
	_mm_store_ps(ctx.v37.f32, _mm_mul_ps(_mm_load_ps(ctx.v41.f32), _mm_load_ps(ctx.v38.f32)));
	// vmulfp128 v36,v40,v38
	_mm_store_ps(ctx.v36.f32, _mm_mul_ps(_mm_load_ps(ctx.v40.f32), _mm_load_ps(ctx.v38.f32)));
	// stvx128 v37,r11,r24
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v37.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v36,r11,r23
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r23.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v36.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v35,r11,r22
	simd::store_shuffled(ctx.v35, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r22.u32) & ~0xF), VectorMaskL));
	// lvx128 v34,r11,r21
	simd::store_shuffled(ctx.v34, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r21.u32) & ~0xF), VectorMaskL));
	// lvlx128 v33,r0,r31
	temp.u32 = ctx.r31.u32;
	_mm_store_si128((__m128i*)ctx.v33.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v32,v33,0
	_mm_store_si128((__m128i*)ctx.v32.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v33.u32), 0xFF));
	// vmulfp128 v63,v35,v32
	_mm_store_ps(ctx.v63.f32, _mm_mul_ps(_mm_load_ps(ctx.v35.f32), _mm_load_ps(ctx.v32.f32)));
	// vmulfp128 v62,v34,v32
	_mm_store_ps(ctx.v62.f32, _mm_mul_ps(_mm_load_ps(ctx.v34.f32), _mm_load_ps(ctx.v32.f32)));
	// stvx128 v63,r11,r20
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r20.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// ld r20,112(r1)
	ctx.r20.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// stvx128 v62,r11,r19
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r19.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// ld r19,128(r1)
	ctx.r19.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// lvx128 v61,r11,r14
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r14.u32) & ~0xF), VectorMaskL));
	// lvx128 v60,r11,r15
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r15.u32) & ~0xF), VectorMaskL));
	// lvlx128 v59,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v58,v59,0
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), 0xFF));
	// vmulfp128 v57,v61,v58
	_mm_store_ps(ctx.v57.f32, _mm_mul_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v58.f32)));
	// vmulfp128 v56,v60,v58
	_mm_store_ps(ctx.v56.f32, _mm_mul_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v58.f32)));
	// stvx128 v57,r11,r16
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r16.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v56,r11,r17
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r17.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v55,r11,r18
	simd::store_shuffled(ctx.v55, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r18.u32) & ~0xF), VectorMaskL));
	// lvx128 v54,r11,r19
	simd::store_shuffled(ctx.v54, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r19.u32) & ~0xF), VectorMaskL));
	// lvlx128 v53,r0,r31
	temp.u32 = ctx.r31.u32;
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v52,v53,0
	_mm_store_si128((__m128i*)ctx.v52.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v53.u32), 0xFF));
	// vmulfp128 v51,v55,v52
	_mm_store_ps(ctx.v51.f32, _mm_mul_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v52.f32)));
	// vmulfp128 v50,v54,v52
	_mm_store_ps(ctx.v50.f32, _mm_mul_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v52.f32)));
	// ld r21,176(r1)
	ctx.r21.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// stvx128 v51,r11,r20
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r20.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// ld r22,96(r1)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r23,160(r1)
	ctx.r23.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// ld r24,144(r1)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// ld r25,104(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// stvx128 v50,r11,r21
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r21.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// ld r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// lvx128 v49,r11,r22
	simd::store_shuffled(ctx.v49, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r22.u32) & ~0xF), VectorMaskL));
	// ld r7,136(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// lvx128 v48,r11,r23
	simd::store_shuffled(ctx.v48, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r23.u32) & ~0xF), VectorMaskL));
	// ld r5,152(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// lvlx128 v47,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v46,v47,0
	_mm_store_si128((__m128i*)ctx.v46.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v47.u32), 0xFF));
	// vmulfp128 v45,v49,v46
	_mm_store_ps(ctx.v45.f32, _mm_mul_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v46.f32)));
	// ld r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// vmulfp128 v44,v48,v46
	_mm_store_ps(ctx.v44.f32, _mm_mul_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v46.f32)));
	// stvx128 v45,r11,r24
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v45.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v44,r11,r25
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r25.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v44.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// blt cr6,0x83020094
	if (ctx.cr6.lt) goto loc_83020094;
loc_8302022C:
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x83020298
	if (!ctx.cr6.lt) goto loc_83020298;
	// rlwinm r11,r9,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r10,756(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 756);
	// subf r9,r9,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r9.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83020250:
	// lvlx128 v43,r0,r31
	temp.u32 = ctx.r31.u32;
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvx128 v42,r11,r7
	simd::store_shuffled(ctx.v42, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// vspltw128 v41,v43,0
	_mm_store_si128((__m128i*)ctx.v41.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v43.u32), 0xFF));
	// lvx128 v40,r11,r6
	simd::store_shuffled(ctx.v40, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v39,v42,v41
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v39.f32, _mm_mul_ps(_mm_load_ps(ctx.v42.f32), _mm_load_ps(ctx.v41.f32)));
	// vmulfp128 v38,v40,v41
	_mm_store_ps(ctx.v38.f32, _mm_mul_ps(_mm_load_ps(ctx.v40.f32), _mm_load_ps(ctx.v41.f32)));
	// stvx128 v39,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v39.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v38,r11,r26
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v38.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v37,r11,r30
	simd::store_shuffled(ctx.v37, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r30.u32) & ~0xF), VectorMaskL));
	// lvx128 v34,r11,r29
	simd::store_shuffled(ctx.v34, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r29.u32) & ~0xF), VectorMaskL));
	// lvlx128 v36,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v36.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v35,v36,0
	_mm_store_si128((__m128i*)ctx.v35.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v36.u32), 0xFF));
	// vmulfp128 v33,v37,v35
	_mm_store_ps(ctx.v33.f32, _mm_mul_ps(_mm_load_ps(ctx.v37.f32), _mm_load_ps(ctx.v35.f32)));
	// vmulfp128 v32,v34,v35
	_mm_store_ps(ctx.v32.f32, _mm_mul_ps(_mm_load_ps(ctx.v34.f32), _mm_load_ps(ctx.v35.f32)));
	// stvx128 v33,r11,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v33.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v32,r11,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v32.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// bdnz 0x83020250
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83020250;
loc_83020298:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x830564e0
	ctx.lr = 0x830202A0;
	sub_830564E0(ctx, base);
loc_830202A0:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x83020050
	if (ctx.cr6.lt) goto loc_83020050;
loc_830202B8:
	// lwz r11,756(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 756);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8304d6c0
	ctx.lr = 0x830202CC;
	sub_8304D6C0(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83020318
	if (ctx.cr6.eq) goto loc_83020318;
	// lwz r8,756(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 756);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// addi r10,r8,80
	ctx.r10.s64 = ctx.r8.s64 + 80;
loc_830202EC:
	// lvx128 v63,r11,r9
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v62,r0,r11
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v61,r11,r27
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r27.u32) & ~0xF), VectorMaskL));
	// lvx128 v60,r11,r28
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r28.u32) & ~0xF), VectorMaskL));
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// stvx128 v63,r10,r26
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v61,r10,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v60,r10,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// bdnz 0x830202ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830202EC;
loc_83020318:
	// lwz r31,756(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 756);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_83020320:
	// lbz r11,932(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 932);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8302033c
	if (!ctx.cr6.eq) goto loc_8302033C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x830564e0
	ctx.lr = 0x8302033C;
	sub_830564E0(ctx, base);
loc_8302033C:
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83020344"))) PPC_WEAK_FUNC(sub_83020344);
PPC_FUNC_IMPL(__imp__sub_83020344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83020348"))) PPC_WEAK_FUNC(sub_83020348);
PPC_FUNC_IMPL(__imp__sub_83020348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x83020350;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r11,-11228
	ctx.r30.s64 = ctx.r11.s64 + -11228;
	// lwz r31,-11228(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11228);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83020410
	if (ctx.cr6.eq) goto loc_83020410;
loc_8302036C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83020400
	if (!ctx.cr6.eq) goto loc_83020400;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83020390
	if (ctx.cr6.eq) goto loc_83020390;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x83020400
	if (!ctx.cr6.eq) goto loc_83020400;
loc_83020390:
	// bl 0x8301f758
	ctx.lr = 0x83020394;
	sub_8301F758(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x83020400
	if (ctx.cr6.eq) goto loc_83020400;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bne cr6,0x830203c0
	if (!ctx.cr6.eq) goto loc_830203C0;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// b 0x830203c4
	goto loc_830203C4;
loc_830203C0:
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_830203C4:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x830203d4
	if (!ctx.cr6.eq) goto loc_830203D4;
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
loc_830203D4:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// lwz r29,92(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r31,88(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// b 0x83020408
	goto loc_83020408;
loc_83020400:
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_83020408:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8302036c
	if (!ctx.cr6.eq) goto loc_8302036C;
loc_83020410:
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lwz r3,15420(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15420);
	// bl 0x8301f9d0
	ctx.lr = 0x8302041C;
	sub_8301F9D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83020424"))) PPC_WEAK_FUNC(sub_83020424);
PPC_FUNC_IMPL(__imp__sub_83020424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83020428"))) PPC_WEAK_FUNC(sub_83020428);
PPC_FUNC_IMPL(__imp__sub_83020428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7654
	ctx.lr = 0x83020430;
	__savegprlr_19(ctx, base);
	// stwu r1,-1200(r1)
	ea = -1200 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lwz r3,15208(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15208);
	// bl 0x830458d8
	ctx.lr = 0x83020440;
	sub_830458D8(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r21,1024
	ctx.r21.s64 = 1024;
	// lis r20,-31969
	ctx.r20.s64 = -2095120384;
	// li r19,8
	ctx.r19.s64 = 8;
	// addi r28,r11,15456
	ctx.r28.s64 = ctx.r11.s64 + 15456;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r30,15456(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15456);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x830205fc
	if (ctx.cr6.eq) goto loc_830205FC;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r27,r11,-14320
	ctx.r27.s64 = ctx.r11.s64 + -14320;
	// addi r31,r10,-11228
	ctx.r31.s64 = ctx.r10.s64 + -11228;
loc_83020478:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x830205ac
	if (!ctx.cr6.eq) goto loc_830205AC;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83020534
	if (ctx.cr6.eq) goto loc_83020534;
	// addi r7,r30,8
	ctx.r7.s64 = ctx.r30.s64 + 8;
loc_8302049C:
	// lwz r10,12(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x830204b4
	if (ctx.cr6.eq) goto loc_830204B4;
	// lwz r10,252(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 252);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x830204b8
	goto loc_830204B8;
loc_830204B4:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_830204B8:
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x83020524
	if (!ctx.cr6.eq) goto loc_83020524;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bne cr6,0x830204e0
	if (!ctx.cr6.eq) goto loc_830204E0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x830204e4
	goto loc_830204E4;
loc_830204E0:
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
loc_830204E4:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x830204f4
	if (!ctx.cr6.eq) goto loc_830204F4;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
loc_830204F4:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8302052c
	goto loc_8302052C;
loc_83020524:
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8302052C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8302049c
	if (!ctx.cr6.eq) goto loc_8302049C;
loc_83020534:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bne cr6,0x83020554
	if (!ctx.cr6.eq) goto loc_83020554;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x83020558
	goto loc_83020558;
loc_83020554:
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_83020558:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83020568
	if (!ctx.cr6.eq) goto loc_83020568;
	// stw r6,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r6.u32);
loc_83020568:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// ld r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// bl 0x8304eb80
	ctx.lr = 0x83020584;
	sub_8304EB80(ctx, base);
	// addi r11,r30,416
	ctx.r11.s64 = ctx.r30.s64 + 416;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x83053830
	ctx.lr = 0x83020590;
	sub_83053830(ctx, base);
	// stw r27,416(r30)
	PPC_STORE_U32(ctx.r30.u32 + 416, ctx.r27.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,-11264(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11264);
	// bl 0x82fd6cc8
	ctx.lr = 0x830205A0;
	sub_82FD6CC8(ctx, base);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x830205f4
	goto loc_830205F4;
loc_830205AC:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830205c4
	if (ctx.cr6.eq) goto loc_830205C4;
	// lwz r11,252(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x830205c8
	goto loc_830205C8;
loc_830205C4:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_830205C8:
	// lbz r9,218(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 218);
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// rlwinm r8,r9,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x830205e0
	if (ctx.cr6.eq) goto loc_830205E0;
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
loc_830205E0:
	// lwz r9,308(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 308);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r8,308(r11)
	PPC_STORE_U32(ctx.r11.u32 + 308, ctx.r8.u32);
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_830205F4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x83020478
	if (!ctx.cr6.eq) goto loc_83020478;
loc_830205FC:
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lis r22,-31958
	ctx.r22.s64 = -2094399488;
	// addi r23,r11,15444
	ctx.r23.s64 = ctx.r11.s64 + 15444;
	// lwz r11,15444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15444);
	// lwz r10,4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x830207d4
	if (ctx.cr6.eq) goto loc_830207D4;
	// li r25,43
	ctx.r25.s64 = 43;
	// li r26,-1
	ctx.r26.s64 = -1;
loc_83020624:
	// lwz r31,0(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83020790
	if (ctx.cr6.eq) goto loc_83020790;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x83056c48
	ctx.lr = 0x8302063C;
	sub_83056C48(ctx, base);
	// lwz r27,0(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x83020790
	if (ctx.cr6.eq) goto loc_83020790;
loc_8302064C:
	// stw r29,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r29.u32);
	// stb r30,1008(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1008, ctx.r30.u8);
	// sth r21,172(r1)
	PPC_STORE_U16(ctx.r1.u32 + 172, ctx.r21.u16);
	// stb r29,1010(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1010, ctx.r29.u8);
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// sth r29,176(r1)
	PPC_STORE_U16(ctx.r1.u32 + 176, ctx.r29.u16);
	// stb r29,1011(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1011, ctx.r29.u8);
	// stw r25,992(r1)
	PPC_STORE_U32(ctx.r1.u32 + 992, ctx.r25.u32);
	// lbz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 400);
	// rlwinm r11,r11,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFF;
	// stb r11,1076(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1076, ctx.r11.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r29,1072(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1072, ctx.r29.u32);
	// beq cr6,0x83020688
	if (ctx.cr6.eq) goto loc_83020688;
	// sth r19,172(r1)
	PPC_STORE_U16(ctx.r1.u32 + 172, ctx.r19.u16);
loc_83020688:
	// addi r28,r27,8
	ctx.r28.s64 = ctx.r27.s64 + 8;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8304f140
	ctx.lr = 0x83020698;
	sub_8304F140(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83020744
	if (ctx.cr6.eq) goto loc_83020744;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// sth r29,174(r1)
	PPC_STORE_U16(ctx.r1.u32 + 174, ctx.r29.u16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r29,176(r1)
	PPC_STORE_U16(ctx.r1.u32 + 176, ctx.r29.u16);
	// stw r29,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r29.u32);
	// stw r26,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r26.u32);
	// beq cr6,0x83020710
	if (ctx.cr6.eq) goto loc_83020710;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830206e0
	if (ctx.cr6.eq) goto loc_830206E0;
	// lwz r11,252(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x830206e4
	goto loc_830206E4;
loc_830206E0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_830206E4:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x83021690
	ctx.lr = 0x830206EC;
	sub_83021690(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r5,r1,1012
	ctx.r5.s64 = ctx.r1.s64 + 1012;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r11,376
	ctx.r3.s64 = ctx.r11.s64 + 376;
	// bl 0x8301de10
	ctx.lr = 0x83020700;
	sub_8301DE10(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r10,8
	ctx.r3.s64 = ctx.r10.s64 + 8;
	// bl 0x8304d8c8
	ctx.lr = 0x83020710;
	sub_8304D8C8(ctx, base);
loc_83020710:
	// lbz r10,1076(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 1076);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bl 0x8301fd28
	ctx.lr = 0x83020720;
	sub_8301FD28(ctx, base);
	// lwz r10,992(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 992);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmpwi cr6,r10,46
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 46, ctx.xer);
	// bne cr6,0x8302073c
	if (!ctx.cr6.eq) goto loc_8302073C;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83020758
	if (ctx.cr6.eq) goto loc_83020758;
loc_8302073C:
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8304d718
	ctx.lr = 0x83020744;
	sub_8304D718(ctx, base);
loc_83020744:
	// lwz r11,992(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 992);
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// beq cr6,0x8302077c
	if (ctx.cr6.eq) goto loc_8302077C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8302077c
	if (ctx.cr6.eq) goto loc_8302077C;
loc_83020758:
	// lbz r10,1011(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 1011);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8302077c
	if (!ctx.cr6.eq) goto loc_8302077C;
	// lbz r10,1010(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 1010);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83020784
	if (ctx.cr6.eq) goto loc_83020784;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8304d600
	ctx.lr = 0x83020778;
	sub_8304D600(ctx, base);
	// b 0x83020784
	goto loc_83020784;
loc_8302077C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8304d5c0
	ctx.lr = 0x83020784;
	sub_8304D5C0(ctx, base);
loc_83020784:
	// lwz r27,0(r27)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x8302064c
	if (!ctx.cr6.eq) goto loc_8302064C;
loc_83020790:
	// lbz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 400);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x830207c4
	if (!ctx.cr6.eq) goto loc_830207C4;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83056a80
	ctx.lr = 0x830207B0;
	sub_83056A80(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,15412(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 15412);
	// bl 0x83055c18
	ctx.lr = 0x830207BC;
	sub_83055C18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83056498
	ctx.lr = 0x830207C4;
	sub_83056498(ctx, base);
loc_830207C4:
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83020624
	if (!ctx.cr6.eq) goto loc_83020624;
loc_830207D4:
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r28,r11,-11260
	ctx.r28.s64 = ctx.r11.s64 + -11260;
	// lwz r30,-11260(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11260);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83020874
	if (ctx.cr6.eq) goto loc_83020874;
loc_830207E8:
	// lwz r31,8(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83056a80
	ctx.lr = 0x830207F8;
	sub_83056A80(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,15412(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 15412);
	// bl 0x83055c18
	ctx.lr = 0x83020804;
	sub_83055C18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83056498
	ctx.lr = 0x8302080C;
	sub_83056498(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x83020864
	if (ctx.cr6.eq) goto loc_83020864;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83055e30
	ctx.lr = 0x83020820;
	sub_83055E30(ctx, base);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x83053ea8
	ctx.lr = 0x83020828;
	sub_83053EA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-11264(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11264);
	// bl 0x82fd6cc8
	ctx.lr = 0x83020834;
	sub_82FD6CC8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x83020d58
	ctx.lr = 0x83020850;
	sub_83020D58(ctx, base);
	// ld r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8302086c
	goto loc_8302086C;
loc_83020864:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8302086C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x830207e8
	if (!ctx.cr6.eq) goto loc_830207E8;
loc_83020874:
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lwz r3,15412(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 15412);
	// addi r4,r11,15496
	ctx.r4.s64 = ctx.r11.s64 + 15496;
	// bl 0x83055cb0
	ctx.lr = 0x83020884;
	sub_83055CB0(ctx, base);
	// addi r1,r1,1200
	ctx.r1.s64 = ctx.r1.s64 + 1200;
	// b 0x82fa76a4
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8302088C"))) PPC_WEAK_FUNC(sub_8302088C);
PPC_FUNC_IMPL(__imp__sub_8302088C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83020890"))) PPC_WEAK_FUNC(sub_83020890);
PPC_FUNC_IMPL(__imp__sub_83020890) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r30,r10,15496
	ctx.r30.s64 = ctx.r10.s64 + 15496;
	// sth r11,14(r30)
	PPC_STORE_U16(ctx.r30.u32 + 14, ctx.r11.u16);
	// bl 0x83020428
	ctx.lr = 0x830208B8;
	sub_83020428(ctx, base);
	// lhz r11,14(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 14);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r31,r11,15376
	ctx.r31.s64 = ctx.r11.s64 + 15376;
	// lwz r11,15376(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15376);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// beq cr6,0x83020900
	if (ctx.cr6.eq) goto loc_83020900;
	// bl 0x831791a4
	ctx.lr = 0x830208D8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83055098
	ctx.lr = 0x830208E4;
	sub_83055098(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x831791b4
	ctx.lr = 0x830208F0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lwz r3,15412(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15412);
	// bl 0x83055700
	ctx.lr = 0x830208FC;
	sub_83055700(ctx, base);
	// b 0x8302091c
	goto loc_8302091C;
loc_83020900:
	// bl 0x831791a4
	ctx.lr = 0x83020904;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r4,1024
	ctx.r4.s64 = 1024;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83055140
	ctx.lr = 0x83020910;
	sub_83055140(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x831791b4
	ctx.lr = 0x8302091C;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_8302091C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x831791a4
	ctx.lr = 0x83020928;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83054f28
	ctx.lr = 0x83020930;
	sub_83054F28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83020958
	if (ctx.cr6.eq) goto loc_83020958;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83054fb0
	ctx.lr = 0x83020944;
	sub_83054FB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83020958
	if (ctx.cr6.eq) goto loc_83020958;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83054fd8
	ctx.lr = 0x83020958;
	sub_83054FD8(ctx, base);
loc_83020958:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x831791b4
	ctx.lr = 0x83020964;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r5,r10,15432
	ctx.r5.s64 = ctx.r10.s64 + 15432;
	// addi r4,r9,15436
	ctx.r4.s64 = ctx.r9.s64 + 15436;
	// lwz r3,15204(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15204);
	// bl 0x83026c48
	ctx.lr = 0x83020980;
	sub_83026C48(ctx, base);
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

__attribute__((alias("__imp__sub_83020998"))) PPC_WEAK_FUNC(sub_83020998);
PPC_FUNC_IMPL(__imp__sub_83020998) {
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
	// bl 0x83020348
	ctx.lr = 0x830209AC;
	sub_83020348(ctx, base);
	// bl 0x8301e570
	ctx.lr = 0x830209B0;
	sub_8301E570(ctx, base);
	// bl 0x83020890
	ctx.lr = 0x830209B4;
	sub_83020890(ctx, base);
	// lis r31,-31958
	ctx.r31.s64 = -2094399488;
	// lwz r3,15440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15440);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830209dc
	if (ctx.cr6.eq) goto loc_830209DC;
	// bl 0x8303f460
	ctx.lr = 0x830209C8;
	sub_8303F460(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,15440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15440);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x830209e0
	if (!ctx.cr6.eq) goto loc_830209E0;
loc_830209DC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830209E0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830209f0
	if (ctx.cr6.eq) goto loc_830209F0;
	// bl 0x8303f038
	ctx.lr = 0x830209F0;
	sub_8303F038(ctx, base);
loc_830209F0:
	// bl 0x8301f5b0
	ctx.lr = 0x830209F4;
	sub_8301F5B0(ctx, base);
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

__attribute__((alias("__imp__sub_83020A08"))) PPC_WEAK_FUNC(sub_83020A08);
PPC_FUNC_IMPL(__imp__sub_83020A08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x83020A10;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r6,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r6.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// beq cr6,0x83020ab4
	if (ctx.cr6.eq) goto loc_83020AB4;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82fd6b98
	ctx.lr = 0x83020A4C;
	sub_82FD6B98(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83020aa4
	if (ctx.cr6.eq) goto loc_83020AA4;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x83020a8c
	if (!ctx.cr6.gt) goto loc_83020A8C;
loc_83020A70:
	// addi r9,r11,24
	ctx.r9.s64 = ctx.r11.s64 + 24;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x83020a70
	if (ctx.cr6.lt) goto loc_83020A70;
loc_83020A8C:
	// stw r30,-24(r11)
	PPC_STORE_U32(ctx.r11.u32 + -24, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_83020AA4:
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// li r29,52
	ctx.r29.s64 = 52;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// b 0x83020ab8
	goto loc_83020AB8;
loc_83020AB4:
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
loc_83020AB8:
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83020AD0"))) PPC_WEAK_FUNC(sub_83020AD0);
PPC_FUNC_IMPL(__imp__sub_83020AD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x83020AD8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r29,-31969
	ctx.r29.s64 = -2095120384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r28,r4,r11
	ctx.r28.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r4,r28,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,-11264(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -11264);
	// bl 0x82fd6b98
	ctx.lr = 0x83020AF8;
	sub_82FD6B98(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x83020b0c
	if (!ctx.cr6.eq) goto loc_83020B0C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_83020B0C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r27,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r27.s64 = ctx.r9.s32 >> 2;
	// beq cr6,0x83020b54
	if (ctx.cr6.eq) goto loc_83020B54;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x83020b48
	if (ctx.cr6.eq) goto loc_83020B48;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
loc_83020B34:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stwx r9,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83020b34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83020B34;
loc_83020B48:
	// lwz r3,-11264(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -11264);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82fd6cc8
	ctx.lr = 0x83020B54;
	sub_82FD6CC8(ctx, base);
loc_83020B54:
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83020B74"))) PPC_WEAK_FUNC(sub_83020B74);
PPC_FUNC_IMPL(__imp__sub_83020B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83020B78"))) PPC_WEAK_FUNC(sub_83020B78);
PPC_FUNC_IMPL(__imp__sub_83020B78) {
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
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x83053830
	ctx.lr = 0x83020B9C;
	sub_83053830(ctx, base);
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
	// beq cr6,0x83020bc0
	if (ctx.cr6.eq) goto loc_83020BC0;
	// bl 0x82691540
	ctx.lr = 0x83020BBC;
	sub_82691540(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83020BC0:
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

__attribute__((alias("__imp__sub_83020BD8"))) PPC_WEAK_FUNC(sub_83020BD8);
PPC_FUNC_IMPL(__imp__sub_83020BD8) {
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
	// addi r10,r11,-8928
	ctx.r10.s64 = ctx.r11.s64 + -8928;
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// bl 0x83053dc8
	ctx.lr = 0x83020C0C;
	sub_83053DC8(ctx, base);
	// stw r30,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_83020C2C"))) PPC_WEAK_FUNC(sub_83020C2C);
PPC_FUNC_IMPL(__imp__sub_83020C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83020C30"))) PPC_WEAK_FUNC(sub_83020C30);
PPC_FUNC_IMPL(__imp__sub_83020C30) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,112
	ctx.r3.s64 = ctx.r3.s64 + 112;
	// b 0x83056b50
	sub_83056B50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83020C38"))) PPC_WEAK_FUNC(sub_83020C38);
PPC_FUNC_IMPL(__imp__sub_83020C38) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r30,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x83020c80
	if (ctx.cr6.lt) goto loc_83020C80;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x83020ad0
	ctx.lr = 0x83020C74;
	sub_83020AD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83020c9c
	if (ctx.cr6.eq) goto loc_83020C9C;
loc_83020C80:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x83020c9c
	if (!ctx.cr6.lt) goto loc_83020C9C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x83020ca0
	goto loc_83020CA0;
loc_83020C9C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83020CA0:
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

__attribute__((alias("__imp__sub_83020CB8"))) PPC_WEAK_FUNC(sub_83020CB8);
PPC_FUNC_IMPL(__imp__sub_83020CB8) {
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
	// bl 0x8304b420
	ctx.lr = 0x83020CD0;
	sub_8304B420(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83020d40
	if (ctx.cr6.eq) goto loc_83020D40;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83020cf4
	if (!ctx.cr6.eq) goto loc_83020CF4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x83020cfc
	goto loc_83020CFC;
loc_83020CF4:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_83020CFC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// stw r7,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r7.u32);
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
loc_83020D40:
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

__attribute__((alias("__imp__sub_83020D58"))) PPC_WEAK_FUNC(sub_83020D58);
PPC_FUNC_IMPL(__imp__sub_83020D58) {
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
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bne cr6,0x83020d84
	if (!ctx.cr6.eq) goto loc_83020D84;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x83020d88
	goto loc_83020D88;
loc_83020D84:
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_83020D88:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83020d98
	if (!ctx.cr6.eq) goto loc_83020D98;
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
loc_83020D98:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x83020dc4
	if (ctx.cr6.lt) goto loc_83020DC4;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x83020dc8
	if (ctx.cr6.lt) goto loc_83020DC8;
loc_83020DC4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83020DC8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83020de0
	if (ctx.cr6.eq) goto loc_83020DE0;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82fd6cc8
	ctx.lr = 0x83020DDC;
	sub_82FD6CC8(ctx, base);
	// b 0x83020dec
	goto loc_83020DEC;
loc_83020DE0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
loc_83020DEC:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83020E0C"))) PPC_WEAK_FUNC(sub_83020E0C);
PPC_FUNC_IMPL(__imp__sub_83020E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83020E10"))) PPC_WEAK_FUNC(sub_83020E10);
PPC_FUNC_IMPL(__imp__sub_83020E10) {
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
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// addi r10,r11,-14756
	ctx.r10.s64 = ctx.r11.s64 + -14756;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x83053dc8
	ctx.lr = 0x83020E38;
	sub_83053DC8(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_83020E58"))) PPC_WEAK_FUNC(sub_83020E58);
PPC_FUNC_IMPL(__imp__sub_83020E58) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-8928
	ctx.r10.s64 = ctx.r11.s64 + -8928;
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r30.u32);
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// bl 0x83053dc8
	ctx.lr = 0x83020E90;
	sub_83053DC8(ctx, base);
	// stw r30,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_83020EB0"))) PPC_WEAK_FUNC(sub_83020EB0);
PPC_FUNC_IMPL(__imp__sub_83020EB0) {
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
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-14788
	ctx.r9.s64 = ctx.r10.s64 + -14788;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// sth r11,44(r3)
	PPC_STORE_U16(ctx.r3.u32 + 44, ctx.r11.u16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 420, ctx.r11.u32);
	// stw r11,424(r3)
	PPC_STORE_U32(ctx.r3.u32 + 424, ctx.r11.u32);
	// addi r11,r10,408
	ctx.r11.s64 = ctx.r10.s64 + 408;
	// stw r9,416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 416, ctx.r9.u32);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x83053818
	ctx.lr = 0x83020EF8;
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

__attribute__((alias("__imp__sub_83020F10"))) PPC_WEAK_FUNC(sub_83020F10);
PPC_FUNC_IMPL(__imp__sub_83020F10) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83020f40
	if (ctx.cr6.eq) goto loc_83020F40;
loc_83020F28:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x83020f48
	if (ctx.cr6.eq) goto loc_83020F48;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83020f28
	if (!ctx.cr6.eq) goto loc_83020F28;
loc_83020F40:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_83020F48:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83020f40
	if (ctx.cr6.eq) goto loc_83020F40;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bne cr6,0x83020f64
	if (!ctx.cr6.eq) goto loc_83020F64;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// b 0x83020f68
	goto loc_83020F68;
loc_83020F64:
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
loc_83020F68:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x83020f78
	if (!ctx.cr6.eq) goto loc_83020F78;
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_83020F78:
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83020F8C"))) PPC_WEAK_FUNC(sub_83020F8C);
PPC_FUNC_IMPL(__imp__sub_83020F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83020F90"))) PPC_WEAK_FUNC(sub_83020F90);
PPC_FUNC_IMPL(__imp__sub_83020F90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x83020F98;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83020fc8
	if (ctx.cr6.eq) goto loc_83020FC8;
loc_83020FB0:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x83020ff0
	if (ctx.cr6.eq) goto loc_83020FF0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83020fb0
	if (!ctx.cr6.eq) goto loc_83020FB0;
loc_83020FC8:
	// li r31,0
	ctx.r31.s64 = 0;
loc_83020FCC:
	// bl 0x83020cb8
	ctx.lr = 0x83020FD0;
	sub_83020CB8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83021000
	if (ctx.cr6.eq) goto loc_83021000;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_83020FF0:
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83020fcc
	if (ctx.cr6.eq) goto loc_83020FCC;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_83021000:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8302100C"))) PPC_WEAK_FUNC(sub_8302100C);
PPC_FUNC_IMPL(__imp__sub_8302100C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83021010"))) PPC_WEAK_FUNC(sub_83021010);
PPC_FUNC_IMPL(__imp__sub_83021010) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r9,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x83021078
	if (ctx.cr6.eq) goto loc_83021078;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x83021040
	if (!ctx.cr6.eq) goto loc_83021040;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x83021044
	goto loc_83021044;
loc_83021040:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_83021044:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// addi r3,r9,4
	ctx.r3.s64 = ctx.r9.s64 + 4;
	// stw r6,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r6.u32);
	// blr 
	return;
loc_83021078:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83021080"))) PPC_WEAK_FUNC(sub_83021080);
PPC_FUNC_IMPL(__imp__sub_83021080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x83021088;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x83021160
	if (!ctx.cr6.gt) goto loc_83021160;
loc_8302109C:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x830210b8
	if (ctx.cr6.eq) goto loc_830210B8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83020d58
	ctx.lr = 0x830210B4;
	sub_83020D58(ctx, base);
	// b 0x8302109c
	goto loc_8302109C;
loc_830210B8:
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8302111c
	if (ctx.cr6.eq) goto loc_8302111C;
loc_830210C8:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r30,0(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x830210f8
	if (ctx.cr6.lt) goto loc_830210F8;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x830210fc
	if (ctx.cr6.lt) goto loc_830210FC;
loc_830210F8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_830210FC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83021110
	if (ctx.cr6.eq) goto loc_83021110;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82fd6cc8
	ctx.lr = 0x83021110;
	sub_82FD6CC8(ctx, base);
loc_83021110:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x830210c8
	if (!ctx.cr6.eq) goto loc_830210C8;
loc_8302111C:
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83021150
	if (ctx.cr6.eq) goto loc_83021150;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x83021148
	if (!ctx.cr6.gt) goto loc_83021148;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_8302113C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8302113c
	if (ctx.cr6.lt) goto loc_8302113C;
loc_83021148:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82fd6cc8
	ctx.lr = 0x83021150;
	sub_82FD6CC8(ctx, base);
loc_83021150:
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_83021160:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8302116C"))) PPC_WEAK_FUNC(sub_8302116C);
PPC_FUNC_IMPL(__imp__sub_8302116C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83021170"))) PPC_WEAK_FUNC(sub_83021170);
PPC_FUNC_IMPL(__imp__sub_83021170) {
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
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x830211e0
	if (!ctx.cr6.gt) goto loc_830211E0;
	// bl 0x8304bb40
	ctx.lr = 0x83021198;
	sub_8304BB40(ctx, base);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x830211d0
	if (ctx.cr6.eq) goto loc_830211D0;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x830211c8
	if (!ctx.cr6.gt) goto loc_830211C8;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_830211BC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x830211bc
	if (ctx.cr6.lt) goto loc_830211BC;
loc_830211C8:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82fd6cc8
	ctx.lr = 0x830211D0;
	sub_82FD6CC8(ctx, base);
loc_830211D0:
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_830211E0:
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

__attribute__((alias("__imp__sub_830211FC"))) PPC_WEAK_FUNC(sub_830211FC);
PPC_FUNC_IMPL(__imp__sub_830211FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83021200"))) PPC_WEAK_FUNC(sub_83021200);
PPC_FUNC_IMPL(__imp__sub_83021200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-23580(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23580);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f11,f13,f0,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f11,0(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f10,f0,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f9.f64));
	// stfs f8,4(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f7,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f7,f0,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f6.f64));
	// stfs f5,8(r4)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f4,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fneg f3,f4
	ctx.f3.u64 = ctx.f4.u64 ^ 0x8000000000000000;
	// stfs f3,12(r4)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// lfs f2,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fneg f1,f2
	ctx.f1.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// stfs f1,16(r4)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,20(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83021260"))) PPC_WEAK_FUNC(sub_83021260);
PPC_FUNC_IMPL(__imp__sub_83021260) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,218(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 218);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83021284
	if (!ctx.cr6.eq) goto loc_83021284;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// stb r10,214(r3)
	PPC_STORE_U8(ctx.r3.u32 + 214, ctx.r10.u8);
	// lfs f0,-11868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11868);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// stfs f0,128(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 128, temp.u32);
loc_83021284:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_830212A0"))) PPC_WEAK_FUNC(sub_830212A0);
PPC_FUNC_IMPL(__imp__sub_830212A0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,5
	ctx.r3.s64 = 5;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// sth r10,212(r11)
	PPC_STORE_U16(ctx.r11.u32 + 212, ctx.r10.u16);
	// b 0x8301eb18
	sub_8301EB18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830212B8"))) PPC_WEAK_FUNC(sub_830212B8);
PPC_FUNC_IMPL(__imp__sub_830212B8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r9,219(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 219);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// add r8,r4,r11
	ctx.r8.u64 = ctx.r4.u64 + ctx.r11.u64;
	// ori r7,r9,128
	ctx.r7.u64 = ctx.r9.u64 | 128;
	// rlwinm r6,r8,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// li r3,6
	ctx.r3.s64 = 6;
	// stb r7,219(r10)
	PPC_STORE_U8(ctx.r10.u32 + 219, ctx.r7.u8);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// stw r6,208(r10)
	PPC_STORE_U32(ctx.r10.u32 + 208, ctx.r6.u32);
	// b 0x8301eb18
	sub_8301EB18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830212E4"))) PPC_WEAK_FUNC(sub_830212E4);
PPC_FUNC_IMPL(__imp__sub_830212E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830212E8"))) PPC_WEAK_FUNC(sub_830212E8);
PPC_FUNC_IMPL(__imp__sub_830212E8) {
	PPC_FUNC_PROLOGUE();
	// lbz r10,218(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 218);
	// lbz r11,216(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 216);
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r9,r11,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r8,r8,0,30,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stb r9,216(r3)
	PPC_STORE_U8(ctx.r3.u32 + 216, ctx.r9.u8);
	// stb r8,218(r3)
	PPC_STORE_U8(ctx.r3.u32 + 218, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83021308"))) PPC_WEAK_FUNC(sub_83021308);
PPC_FUNC_IMPL(__imp__sub_83021308) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r5,31
	ctx.r11.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8302131c
	if (ctx.cr6.eq) goto loc_8302131C;
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// stb r11,244(r3)
	PPC_STORE_U8(ctx.r3.u32 + 244, ctx.r11.u8);
loc_8302131C:
	// rlwinm r11,r5,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83021330
	if (ctx.cr6.eq) goto loc_83021330;
	// rlwinm r11,r4,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x1;
	// stb r11,260(r3)
	PPC_STORE_U8(ctx.r3.u32 + 260, ctx.r11.u8);
loc_83021330:
	// rlwinm r11,r5,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83021344
	if (ctx.cr6.eq) goto loc_83021344;
	// rlwinm r11,r4,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x1;
	// stb r11,276(r3)
	PPC_STORE_U8(ctx.r3.u32 + 276, ctx.r11.u8);
loc_83021344:
	// rlwinm r11,r5,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83021358
	if (ctx.cr6.eq) goto loc_83021358;
	// rlwinm r11,r4,29,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1;
	// stb r11,292(r3)
	PPC_STORE_U8(ctx.r3.u32 + 292, ctx.r11.u8);
loc_83021358:
	// rlwinm r11,r5,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r11,218(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 218);
	// rlwimi r11,r4,28,31,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 28) & 0x1) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFE);
	// stb r11,218(r3)
	PPC_STORE_U8(ctx.r3.u32 + 218, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83021374"))) PPC_WEAK_FUNC(sub_83021374);
PPC_FUNC_IMPL(__imp__sub_83021374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83021378"))) PPC_WEAK_FUNC(sub_83021378);
PPC_FUNC_IMPL(__imp__sub_83021378) {
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
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830213c4
	if (ctx.cr6.eq) goto loc_830213C4;
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// lfs f1,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x830213c0
	if (ctx.cr6.eq) goto loc_830213C0;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x830213c4
	if (!ctx.cr6.eq) goto loc_830213C4;
	// bl 0x83058d18
	ctx.lr = 0x830213AC;
	sub_83058D18(ctx, base);
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
loc_830213C0:
	// bl 0x83058d08
	ctx.lr = 0x830213C4;
	sub_83058D08(ctx, base);
loc_830213C4:
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

__attribute__((alias("__imp__sub_830213D8"))) PPC_WEAK_FUNC(sub_830213D8);
PPC_FUNC_IMPL(__imp__sub_830213D8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,218(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 218);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r10,104(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// lwz r4,112(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r9,r11,8
	ctx.r9.u64 = ctx.r11.u64 | 8;
	// li r5,3
	ctx.r5.s64 = 3;
	// stb r9,218(r3)
	PPC_STORE_U8(ctx.r3.u32 + 218, ctx.r9.u8);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,120(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 120);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83021418"))) PPC_WEAK_FUNC(sub_83021418);
PPC_FUNC_IMPL(__imp__sub_83021418) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8302141C"))) PPC_WEAK_FUNC(sub_8302141C);
PPC_FUNC_IMPL(__imp__sub_8302141C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83021420"))) PPC_WEAK_FUNC(sub_83021420);
PPC_FUNC_IMPL(__imp__sub_83021420) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x83021438
	if (!ctx.cr6.eq) goto loc_83021438;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83021438:
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x83032128
	sub_83032128(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83021454"))) PPC_WEAK_FUNC(sub_83021454);
PPC_FUNC_IMPL(__imp__sub_83021454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83021458"))) PPC_WEAK_FUNC(sub_83021458);
PPC_FUNC_IMPL(__imp__sub_83021458) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,104(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// b 0x83031f00
	sub_83031F00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83021460"))) PPC_WEAK_FUNC(sub_83021460);
PPC_FUNC_IMPL(__imp__sub_83021460) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83021464"))) PPC_WEAK_FUNC(sub_83021464);
PPC_FUNC_IMPL(__imp__sub_83021464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83021468"))) PPC_WEAK_FUNC(sub_83021468);
PPC_FUNC_IMPL(__imp__sub_83021468) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,88(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83021470"))) PPC_WEAK_FUNC(sub_83021470);
PPC_FUNC_IMPL(__imp__sub_83021470) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83021478"))) PPC_WEAK_FUNC(sub_83021478);
PPC_FUNC_IMPL(__imp__sub_83021478) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8302147C"))) PPC_WEAK_FUNC(sub_8302147C);
PPC_FUNC_IMPL(__imp__sub_8302147C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83021480"))) PPC_WEAK_FUNC(sub_83021480);
PPC_FUNC_IMPL(__imp__sub_83021480) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

