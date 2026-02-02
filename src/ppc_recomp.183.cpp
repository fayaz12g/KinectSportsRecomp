#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82A18BA4"))) PPC_WEAK_FUNC(sub_82A18BA4);
PPC_FUNC_IMPL(__imp__sub_82A18BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A18BA8"))) PPC_WEAK_FUNC(sub_82A18BA8);
PPC_FUNC_IMPL(__imp__sub_82A18BA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a18bf0
	if (ctx.cr6.eq) goto loc_82A18BF0;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r3,24
	ctx.r10.s64 = ctx.r3.s64 + 24;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82A18BC4:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a18bd4
	if (ctx.cr6.eq) goto loc_82A18BD4;
	// addi r9,r9,624
	ctx.r9.s64 = ctx.r9.s64 + 624;
loc_82A18BD4:
	// addi r10,r10,608
	ctx.r10.s64 = ctx.r10.s64 + 608;
	// bdnz 0x82a18bc4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A18BC4;
	// cmplw cr6,r5,r9
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82a18bf0
	if (!ctx.cr6.lt) goto loc_82A18BF0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_82A18BF0:
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r11,r4,20
	ctx.r11.s64 = ctx.r4.s64 + 20;
	// addi r9,r3,24
	ctx.r9.s64 = ctx.r3.s64 + 24;
loc_82A18BFC:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82a18c6c
	if (!ctx.cr6.gt) goto loc_82A18C6C;
	// li r8,-20
	ctx.r8.s64 = -20;
	// lvx128 v63,r0,r3
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// stw r6,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r6.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stvx128 v63,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// beq cr6,0x82a18c68
	if (ctx.cr6.eq) goto loc_82A18C68;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_82A18C30:
	// lwz r7,604(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 604);
	// li r5,150
	ctx.r5.s64 = 150;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// divwu r5,r7,r5
	ctx.r5.u32 = ctx.r7.u32 / ctx.r5.u32;
	// mulli r5,r5,150
	ctx.r5.s64 = ctx.r5.s64 * 150;
	// subf r7,r5,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r5.s64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r7,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsu f0,4(r8)
	temp.f32 = float(ctx.f0.f64);
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82a18c30
	if (ctx.cr6.lt) goto loc_82A18C30;
loc_82A18C68:
	// addi r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 + 624;
loc_82A18C6C:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r9,r9,608
	ctx.r9.s64 = ctx.r9.s64 + 608;
	// cmplwi cr6,r6,8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 8, ctx.xer);
	// blt cr6,0x82a18bfc
	if (ctx.cr6.lt) goto loc_82A18BFC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A18C84"))) PPC_WEAK_FUNC(sub_82A18C84);
PPC_FUNC_IMPL(__imp__sub_82A18C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A18C88"))) PPC_WEAK_FUNC(sub_82A18C88);
PPC_FUNC_IMPL(__imp__sub_82A18C88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82A18C90;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,624
	ctx.r11.s64 = 624;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// divwu r10,r5,r11
	ctx.r10.u32 = ctx.r5.u32 / ctx.r11.u32;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mulli r10,r10,624
	ctx.r10.s64 = ctx.r10.s64 * 624;
	// subf. r10,r10,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82a18cbc
	if (ctx.cr0.eq) goto loc_82A18CBC;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82a18d44
	goto loc_82A18D44;
loc_82A18CBC:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82a18d40
	if (ctx.cr6.eq) goto loc_82A18D40;
	// addi r10,r5,-1
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// li r27,0
	ctx.r27.s64 = 0;
	// divwu r11,r10,r11
	ctx.r11.u32 = ctx.r10.u32 / ctx.r11.u32;
	// addi r25,r11,1
	ctx.r25.s64 = ctx.r11.s64 + 1;
loc_82A18CD4:
	// lvx128 v63,r0,r30
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// li r5,600
	ctx.r5.s64 = 600;
	// stvx128 v63,r0,r26
	_mm_store_si128((__m128i*)(base + ((ctx.r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mulli r11,r11,608
	ctx.r11.s64 = ctx.r11.s64 * 608;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r11,24
	ctx.r31.s64 = ctx.r11.s64 + 24;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r27,628(r11)
	PPC_STORE_U32(ctx.r11.u32 + 628, ctx.r27.u32);
	// stw r27,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r27.u32);
	// bl 0x82a75988
	ctx.lr = 0x82A18D04;
	sub_82A75988(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82a18d38
	if (!ctx.cr6.gt) goto loc_82A18D38;
	// addi r28,r30,24
	ctx.r28.s64 = ctx.r30.s64 + 24;
loc_82A18D18:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a18428
	ctx.lr = 0x82A18D24;
	sub_82A18428(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82a18d18
	if (ctx.cr6.lt) goto loc_82A18D18;
loc_82A18D38:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne 0x82a18cd4
	if (!ctx.cr0.eq) goto loc_82A18CD4;
loc_82A18D40:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A18D44:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A18D4C"))) PPC_WEAK_FUNC(sub_82A18D4C);
PPC_FUNC_IMPL(__imp__sub_82A18D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A18D50"))) PPC_WEAK_FUNC(sub_82A18D50);
PPC_FUNC_IMPL(__imp__sub_82A18D50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A18D58;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r3,24
	ctx.r31.s64 = ctx.r3.s64 + 24;
	// li r30,7
	ctx.r30.s64 = 7;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82A18D6C:
	// stw r29,604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 604, ctx.r29.u32);
	// li r5,600
	ctx.r5.s64 = 600;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82a75988
	ctx.lr = 0x82A18D84;
	sub_82A75988(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,608
	ctx.r31.s64 = ctx.r31.s64 + 608;
	// bge 0x82a18d6c
	if (!ctx.cr0.lt) goto loc_82A18D6C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a18848
	ctx.lr = 0x82A18D98;
	sub_82A18848(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A18DA4"))) PPC_WEAK_FUNC(sub_82A18DA4);
PPC_FUNC_IMPL(__imp__sub_82A18DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A18DA8"))) PPC_WEAK_FUNC(sub_82A18DA8);
PPC_FUNC_IMPL(__imp__sub_82A18DA8) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// mullw r11,r11,r5
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// stbx r10,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stb r10,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r10.u8);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stbx r10,r11,r8
	PPC_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stb r10,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A18E20"))) PPC_WEAK_FUNC(sub_82A18E20);
PPC_FUNC_IMPL(__imp__sub_82A18E20) {
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
	// lvx128 v63,r0,r3
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stvx128 v63,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lbz r11,1416(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1416);
	// stw r11,1420(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1420, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,1420(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1420);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r3,16
	ctx.r4.s64 = ctx.r3.s64 + 16;
	// stfs f0,1416(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1416, temp.u32);
	// li r5,700
	ctx.r5.s64 = 700;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x82a75220
	ctx.lr = 0x82A18E64;
	sub_82A75220(ctx, base);
	// li r5,700
	ctx.r5.s64 = 700;
	// addi r4,r31,716
	ctx.r4.s64 = ctx.r31.s64 + 716;
	// addi r3,r30,716
	ctx.r3.s64 = ctx.r30.s64 + 716;
	// bl 0x82a75220
	ctx.lr = 0x82A18E74;
	sub_82A75220(ctx, base);
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

__attribute__((alias("__imp__sub_82A18E8C"))) PPC_WEAK_FUNC(sub_82A18E8C);
PPC_FUNC_IMPL(__imp__sub_82A18E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A18E90"))) PPC_WEAK_FUNC(sub_82A18E90);
PPC_FUNC_IMPL(__imp__sub_82A18E90) {
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
	// lfs f0,1416(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 1416);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stfs f0,1420(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1420, temp.u32);
	// lwz r11,1420(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1420);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stb r11,1416(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1416, ctx.r11.u8);
	// lvx128 v63,r0,r31
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r5,700
	ctx.r5.s64 = 700;
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x82a75220
	ctx.lr = 0x82A18EDC;
	sub_82A75220(ctx, base);
	// li r5,700
	ctx.r5.s64 = 700;
	// addi r4,r31,716
	ctx.r4.s64 = ctx.r31.s64 + 716;
	// addi r3,r30,716
	ctx.r3.s64 = ctx.r30.s64 + 716;
	// bl 0x82a75220
	ctx.lr = 0x82A18EEC;
	sub_82A75220(ctx, base);
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

__attribute__((alias("__imp__sub_82A18F04"))) PPC_WEAK_FUNC(sub_82A18F04);
PPC_FUNC_IMPL(__imp__sub_82A18F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A18F08"))) PPC_WEAK_FUNC(sub_82A18F08);
PPC_FUNC_IMPL(__imp__sub_82A18F08) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82a18f1c
	if (ctx.cr6.lt) goto loc_82A18F1C;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// li r3,1920
	ctx.r3.s64 = 1920;
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_82A18F1C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A18F24"))) PPC_WEAK_FUNC(sub_82A18F24);
PPC_FUNC_IMPL(__imp__sub_82A18F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A18F28"))) PPC_WEAK_FUNC(sub_82A18F28);
PPC_FUNC_IMPL(__imp__sub_82A18F28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28480(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28480);
	// mulli r3,r11,1424
	ctx.r3.s64 = ctx.r11.s64 * 1424;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A18F34"))) PPC_WEAK_FUNC(sub_82A18F34);
PPC_FUNC_IMPL(__imp__sub_82A18F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A18F38"))) PPC_WEAK_FUNC(sub_82A18F38);
PPC_FUNC_IMPL(__imp__sub_82A18F38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82A18F40;
	__savegprlr_25(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
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
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A18F60;
	sub_82FA7CF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,-24020
	ctx.r5.s64 = ctx.r11.s64 + -24020;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,15
	ctx.r6.s64 = 15;
	// li r4,257
	ctx.r4.s64 = 257;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82a842f0
	ctx.lr = 0x82A18F80;
	sub_82A842F0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r30,r31,20
	ctx.r30.s64 = ctx.r31.s64 + 20;
	// addi r25,r11,-24500
	ctx.r25.s64 = ctx.r11.s64 + -24500;
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// addi r28,r31,12
	ctx.r28.s64 = ctx.r31.s64 + 12;
	// addi r27,r31,8
	ctx.r27.s64 = ctx.r31.s64 + 8;
	// addi r26,r31,4
	ctx.r26.s64 = ctx.r31.s64 + 4;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
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
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82fa6b58
	ctx.lr = 0x82A18FC0;
	sub_82FA6B58(ctx, base);
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x82a18ff0
	if (ctx.cr6.eq) goto loc_82A18FF0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r11,-24052
	ctx.r3.s64 = ctx.r11.s64 + -24052;
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
	ctx.lr = 0x82A18FF0;
	sub_82FA6B58(ctx, base);
loc_82A18FF0:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,-24072
	ctx.r5.s64 = ctx.r11.s64 + -24072;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,17
	ctx.r6.s64 = 17;
	// li r4,257
	ctx.r4.s64 = 257;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82a842f0
	ctx.lr = 0x82A19010;
	sub_82A842F0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r30,r31,32
	ctx.r30.s64 = ctx.r31.s64 + 32;
	// addi r29,r31,28
	ctx.r29.s64 = ctx.r31.s64 + 28;
	// addi r28,r11,-24164
	ctx.r28.s64 = ctx.r11.s64 + -24164;
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82fa6b58
	ctx.lr = 0x82A1903C;
	sub_82FA6B58(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x82a19060
	if (ctx.cr6.eq) goto loc_82A19060;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r11,-24080
	ctx.r3.s64 = ctx.r11.s64 + -24080;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82fa6b58
	ctx.lr = 0x82A19060;
	sub_82FA6B58(ctx, base);
loc_82A19060:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A19068"))) PPC_WEAK_FUNC(sub_82A19068);
PPC_FUNC_IMPL(__imp__sub_82A19068) {
	PPC_FUNC_PROLOGUE();
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82fa7cf0
	sub_82FA7CF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A19074"))) PPC_WEAK_FUNC(sub_82A19074);
PPC_FUNC_IMPL(__imp__sub_82A19074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A19078"))) PPC_WEAK_FUNC(sub_82A19078);
PPC_FUNC_IMPL(__imp__sub_82A19078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// addis r3,r11,9
	ctx.r3.s64 = ctx.r11.s64 + 589824;
	// addi r3,r3,-3608
	ctx.r3.s64 = ctx.r3.s64 + -3608;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1908C"))) PPC_WEAK_FUNC(sub_82A1908C);
PPC_FUNC_IMPL(__imp__sub_82A1908C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A19090"))) PPC_WEAK_FUNC(sub_82A19090);
PPC_FUNC_IMPL(__imp__sub_82A19090) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A19098;
	__savegprlr_28(ctx, base);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r7,r10,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// lwz r31,12(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// subfc r30,r8,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r8.u32;
	ctx.r30.s64 = ctx.r10.s64 - ctx.r8.s64;
	// lwz r29,4(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r8,r8,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// rlwinm r28,r31,1,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1;
	// subfe r8,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r7.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfc r7,r31,r29
	ctx.xer.ca = ctx.r29.u32 >= ctx.r31.u32;
	ctx.r7.s64 = ctx.r29.s64 - ctx.r31.s64;
	// rlwinm r31,r29,1,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0x1;
	// and r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ctx.r11.u64;
	// subfe r8,r31,r28
	temp.u8 = (~ctx.r31.u32 + ctx.r28.u32 < ~ctx.r31.u32) | (~ctx.r31.u32 + ctx.r28.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r31.u64 + ctx.r28.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// and r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 & ctx.r11.u64;
	// bge cr6,0x82a19100
	if (!ctx.cr6.lt) goto loc_82A19100;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82a19100
	if (!ctx.cr6.lt) goto loc_82A19100;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
loc_82A19100:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82a19120
	if (!ctx.cr6.lt) goto loc_82A19120;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
loc_82A19120:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82a19158
	if (!ctx.cr6.gt) goto loc_82A19158;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82a19158
	if (!ctx.cr6.gt) goto loc_82A19158;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82A19158:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r8,12(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82a1917c
	if (ctx.cr6.lt) goto loc_82A1917C;
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_82A1917C:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A19184"))) PPC_WEAK_FUNC(sub_82A19184);
PPC_FUNC_IMPL(__imp__sub_82A19184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A19188"))) PPC_WEAK_FUNC(sub_82A19188);
PPC_FUNC_IMPL(__imp__sub_82A19188) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r8,r5,24
	ctx.r8.u64 = ctx.r5.u32 & 0xFF;
	// clrlwi r7,r6,24
	ctx.r7.u64 = ctx.r6.u32 & 0xFF;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// bgt cr6,0x82a191a8
	if (ctx.cr6.gt) goto loc_82A191A8;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_82A191A8:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82a191bc
	if (!ctx.cr6.gt) goto loc_82A191BC;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82a191cc
	goto loc_82A191CC;
loc_82A191BC:
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// bgt cr6,0x82a191cc
	if (ctx.cr6.gt) goto loc_82A191CC;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_82A191CC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// blt cr6,0x82a191e0
	if (ctx.cr6.lt) goto loc_82A191E0;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
loc_82A191E0:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82a191fc
	if (ctx.cr6.lt) goto loc_82A191FC;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// blt cr6,0x82a191fc
	if (ctx.cr6.lt) goto loc_82A191FC;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82A191FC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mulli r9,r10,5
	ctx.r9.s64 = ctx.r10.s64 * 5;
	// subf. r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// mulli r5,r11,5
	ctx.r5.s64 = ctx.r11.s64 * 5;
	// srawi r9,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// divw r6,r5,r6
	ctx.r6.s32 = ctx.r5.s32 / ctx.r6.s32;
	// beq 0x82a192d4
	if (ctx.cr0.eq) goto loc_82A192D4;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82a19240
	if (!ctx.cr6.eq) goto loc_82A19240;
	// subf r10,r7,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r7.s64;
	// mulli r10,r10,60
	ctx.r10.s64 = ctx.r10.s64 * 60;
	// divw r11,r10,r11
	ctx.r11.s32 = ctx.r10.s32 / ctx.r11.s32;
	// addic. r11,r11,45
	ctx.xer.ca = ctx.r11.u32 > 4294967250;
	ctx.r11.s64 = ctx.r11.s64 + 45;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82a1926c
	if (!ctx.cr0.lt) goto loc_82A1926C;
	// addi r11,r11,360
	ctx.r11.s64 = ctx.r11.s64 + 360;
	// b 0x82a1926c
	goto loc_82A1926C;
loc_82A19240:
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82a1925c
	if (!ctx.cr6.eq) goto loc_82A1925C;
	// subf r10,r4,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r4.s64;
	// mulli r10,r10,60
	ctx.r10.s64 = ctx.r10.s64 * 60;
	// divw r11,r10,r11
	ctx.r11.s32 = ctx.r10.s32 / ctx.r11.s32;
	// addi r11,r11,165
	ctx.r11.s64 = ctx.r11.s64 + 165;
	// b 0x82a1926c
	goto loc_82A1926C;
loc_82A1925C:
	// subf r10,r8,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r8.s64;
	// mulli r10,r10,60
	ctx.r10.s64 = ctx.r10.s64 * 60;
	// divw r11,r10,r11
	ctx.r11.s32 = ctx.r10.s32 / ctx.r11.s32;
	// addi r11,r11,285
	ctx.r11.s64 = ctx.r11.s64 + 285;
loc_82A1926C:
	// cmpwi cr6,r11,315
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 315, ctx.xer);
	// bgt cr6,0x82a192d4
	if (ctx.cr6.gt) goto loc_82A192D4;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// blt cr6,0x82a192d4
	if (ctx.cr6.lt) goto loc_82A192D4;
	// cmpwi cr6,r11,50
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 50, ctx.xer);
	// bge cr6,0x82a1928c
	if (!ctx.cr6.lt) goto loc_82A1928C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82a192d8
	goto loc_82A192D8;
loc_82A1928C:
	// cmpwi cr6,r11,75
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 75, ctx.xer);
	// bge cr6,0x82a1929c
	if (!ctx.cr6.lt) goto loc_82A1929C;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82a192d8
	goto loc_82A192D8;
loc_82A1929C:
	// cmpwi cr6,r11,155
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 155, ctx.xer);
	// bge cr6,0x82a192ac
	if (!ctx.cr6.lt) goto loc_82A192AC;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82a192d8
	goto loc_82A192D8;
loc_82A192AC:
	// cmpwi cr6,r11,195
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 195, ctx.xer);
	// bge cr6,0x82a192bc
	if (!ctx.cr6.lt) goto loc_82A192BC;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82a192d8
	goto loc_82A192D8;
loc_82A192BC:
	// cmpwi cr6,r11,275
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 275, ctx.xer);
	// bge cr6,0x82a192cc
	if (!ctx.cr6.lt) goto loc_82A192CC;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82a192d8
	goto loc_82A192D8;
loc_82A192CC:
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x82a192d8
	goto loc_82A192D8;
loc_82A192D4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A192D8:
	// mulli r10,r11,5
	ctx.r10.s64 = ctx.r11.s64 * 5;
	// ld r11,1400(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 1400);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// mulli r11,r10,5
	ctx.r11.s64 = ctx.r10.s64 * 5;
	// std r8,1400(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1400, ctx.r8.u64);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r3.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stdx r10,r11,r3
	PPC_STORE_U64(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A19308"))) PPC_WEAK_FUNC(sub_82A19308);
PPC_FUNC_IMPL(__imp__sub_82A19308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7658
	ctx.lr = 0x82A19310;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,20(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// mullw r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// add r22,r11,r4
	ctx.r22.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bne cr6,0x82a193ac
	if (!ctx.cr6.eq) goto loc_82A193AC;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mullw r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// add r31,r11,r4
	ctx.r31.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmplw cr6,r31,r22
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r22.u32, ctx.xer);
	// bge cr6,0x82a19430
	if (!ctx.cr6.lt) goto loc_82A19430;
	// add r30,r31,r10
	ctx.r30.u64 = ctx.r31.u64 + ctx.r10.u64;
	// subf r26,r10,r9
	ctx.r26.s64 = ctx.r9.s64 - ctx.r10.s64;
loc_82A19364:
	// add r27,r26,r30
	ctx.r27.u64 = ctx.r26.u64 + ctx.r30.u64;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x82a19398
	if (!ctx.cr6.lt) goto loc_82A19398;
loc_82A19374:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r5,r11,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// rlwinm r4,r11,16,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF;
	// bl 0x82a19188
	ctx.lr = 0x82A1938C;
	sub_82A19188(ctx, base);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82a19374
	if (ctx.cr6.lt) goto loc_82A19374;
loc_82A19398:
	// add r31,r31,r28
	ctx.r31.u64 = ctx.r31.u64 + ctx.r28.u64;
	// add r30,r30,r28
	ctx.r30.u64 = ctx.r30.u64 + ctx.r28.u64;
	// cmplw cr6,r31,r22
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r22.u32, ctx.xer);
	// blt cr6,0x82a19364
	if (ctx.cr6.lt) goto loc_82A19364;
	// b 0x82a19430
	goto loc_82A19430;
loc_82A193AC:
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mullw r11,r8,r28
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r28.s32);
	// add r29,r11,r4
	ctx.r29.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mullw r11,r8,r23
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r23.s32);
	// add r27,r11,r6
	ctx.r27.u64 = ctx.r11.u64 + ctx.r6.u64;
	// cmplw cr6,r29,r22
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r22.u32, ctx.xer);
	// bge cr6,0x82a19430
	if (!ctx.cr6.lt) goto loc_82A19430;
	// add r30,r29,r10
	ctx.r30.u64 = ctx.r29.u64 + ctx.r10.u64;
	// subf r21,r10,r9
	ctx.r21.s64 = ctx.r9.s64 - ctx.r10.s64;
loc_82A193D0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r25,r30,r21
	ctx.r25.u64 = ctx.r30.u64 + ctx.r21.u64;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// add r24,r11,r27
	ctx.r24.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x82a1941c
	if (!ctx.cr6.lt) goto loc_82A1941C;
loc_82A193E8:
	// lbz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82a1940c
	if (ctx.cr0.eq) goto loc_82A1940C;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r5,r11,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// rlwinm r4,r11,16,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF;
	// bl 0x82a19188
	ctx.lr = 0x82A1940C;
	sub_82A19188(ctx, base);
loc_82A1940C:
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x82a193e8
	if (ctx.cr6.lt) goto loc_82A193E8;
loc_82A1941C:
	// add r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 + ctx.r28.u64;
	// add r30,r30,r28
	ctx.r30.u64 = ctx.r30.u64 + ctx.r28.u64;
	// add r27,r27,r23
	ctx.r27.u64 = ctx.r27.u64 + ctx.r23.u64;
	// cmplw cr6,r29,r22
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r22.u32, ctx.xer);
	// blt cr6,0x82a193d0
	if (ctx.cr6.lt) goto loc_82A193D0;
loc_82A19430:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76a8
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A19438"))) PPC_WEAK_FUNC(sub_82A19438);
PPC_FUNC_IMPL(__imp__sub_82A19438) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A19440;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,64(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r6,32(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mullw r28,r11,r11
	ctx.r28.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f0,11556(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 11556);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f13,18772(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 18772);
	ctx.f13.f64 = double(temp.f32);
	// subf r7,r6,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r6.s64;
	// extsw r8,r28
	ctx.r8.s64 = ctx.r28.s32;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsw r10,r7
	ctx.r10.s64 = ctx.r7.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lfs f12,23560(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 23560);
	ctx.f12.f64 = double(temp.f32);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmadds f11,f10,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f11.f64));
	// fsqrts f11,f11
	ctx.f11.f64 = double(float(sqrt(ctx.f11.f64)));
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fcfid f11,f9
	ctx.f11.f64 = double(ctx.f9.s64);
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fmsubs f13,f11,f12,f10
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 - ctx.f10.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f0,f13
	ctx.f0.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfiwx f0,0,r30
	PPC_STORE_U32(ctx.r30.u32, ctx.f0.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// bl 0x82a17da0
	ctx.lr = 0x82A19520;
	sub_82A17DA0(ctx, base);
	// lwz r5,32(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x82a19090
	ctx.lr = 0x82A19534;
	sub_82A19090(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1953C"))) PPC_WEAK_FUNC(sub_82A1953C);
PPC_FUNC_IMPL(__imp__sub_82A1953C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A19540"))) PPC_WEAK_FUNC(sub_82A19540);
PPC_FUNC_IMPL(__imp__sub_82A19540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A19548;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28480(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28480);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mulli r10,r11,1424
	ctx.r10.s64 = ctx.r11.s64 * 1424;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82a19574
	if (!ctx.cr6.lt) goto loc_82A19574;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82a195c8
	goto loc_82A195C8;
loc_82A19574:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a195c4
	if (ctx.cr6.eq) goto loc_82A195C4;
loc_82A19580:
	// lwz r11,28496(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28496);
	// li r10,20
	ctx.r10.s64 = 20;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// divwu r10,r11,r10
	ctx.r10.u32 = ctx.r11.u32 / ctx.r10.u32;
	// mulli r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 * 20;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mulli r11,r11,1424
	ctx.r11.s64 = ctx.r11.s64 * 1424;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82a18e20
	ctx.lr = 0x82A195AC;
	sub_82A18E20(ctx, base);
	// lwz r11,28480(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28480);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r28,r28,1424
	ctx.r28.s64 = ctx.r28.s64 + 1424;
	// addi r30,r30,-1424
	ctx.r30.s64 = ctx.r30.s64 + -1424;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82a19580
	if (ctx.cr6.lt) goto loc_82A19580;
loc_82A195C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A195C8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A195D0"))) PPC_WEAK_FUNC(sub_82A195D0);
PPC_FUNC_IMPL(__imp__sub_82A195D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A195D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-1536(r1)
	ea = -1536 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1424
	ctx.r11.s64 = 1424;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// divwu r11,r5,r11
	ctx.r11.u32 = ctx.r5.u32 / ctx.r11.u32;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mulli r11,r11,1424
	ctx.r11.s64 = ctx.r11.s64 * 1424;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// subf. r11,r11,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a19608
	if (ctx.cr0.eq) goto loc_82A19608;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82a19658
	goto loc_82A19658;
loc_82A19608:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,28480
	ctx.r5.s64 = 28480;
	// stw r11,28496(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28496, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,28480(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28480, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a75988
	ctx.lr = 0x82A19624;
	sub_82A75988(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a19654
	if (ctx.cr6.eq) goto loc_82A19654;
loc_82A1962C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a18e90
	ctx.lr = 0x82A1963C;
	sub_82A18E90(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a0d380
	ctx.lr = 0x82A19648;
	sub_82A0D380(ctx, base);
	// addic. r31,r31,-1424
	ctx.xer.ca = ctx.r31.u32 > 1423;
	ctx.r31.s64 = ctx.r31.s64 + -1424;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r29,r29,1424
	ctx.r29.s64 = ctx.r29.s64 + 1424;
	// bne 0x82a1962c
	if (!ctx.cr0.eq) goto loc_82A1962C;
loc_82A19654:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A19658:
	// addi r1,r1,1536
	ctx.r1.s64 = ctx.r1.s64 + 1536;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A19660"))) PPC_WEAK_FUNC(sub_82A19660);
PPC_FUNC_IMPL(__imp__sub_82A19660) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lwz r9,14240(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14240);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f0,-24776(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24776);
	ctx.f0.f64 = double(temp.f32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// vspltisw128 v62,1
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_set1_epi32(int(0x1)));
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// vcsxwfp128 v10,v62,1
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v62.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3F000000)))));
loc_82A1968C:
	// lvx128 v62,r0,r10
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// vsubfp128 v62,v62,v1
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v1.f32)));
	// vmsum3fp128 v62,v62,v62
	_mm_store_ps(ctx.v62.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v62.f32), 0xEF));
	// vrsqrtefp128 v0,v62
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v62.f32))));
	// vor128 v13,v62,v62
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v62.u8));
	// vmulfp128 v12,v62,v10
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v10.f32)));
	// vcmpeqfp128 v9,v62,v63
	_mm_store_ps(ctx.v9.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v11,v0,v0
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v8,v12,v11,v10
	_mm_store_ps(ctx.v8.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v10.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v8,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v0,v62,v0
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v0.f32)));
	// vsel v12,v0,v13,v9
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// stvx128 v12,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82a196d8
	if (!ctx.cr6.lt) goto loc_82A196D8;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_82A196D8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1424
	ctx.r10.s64 = ctx.r10.s64 + 1424;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82a1968c
	if (ctx.cr6.lt) goto loc_82A1968C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A196EC"))) PPC_WEAK_FUNC(sub_82A196EC);
PPC_FUNC_IMPL(__imp__sub_82A196EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A196F0"))) PPC_WEAK_FUNC(sub_82A196F0);
PPC_FUNC_IMPL(__imp__sub_82A196F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82A196F8;
	__savegprlr_26(ctx, base);
	// stwu r1,-1552(r1)
	ea = -1552 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a197e4
	if (ctx.cr6.eq) goto loc_82A197E4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a197e4
	if (ctx.cr6.eq) goto loc_82A197E4;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82a197e4
	if (ctx.cr6.eq) goto loc_82A197E4;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82a197e4
	if (ctx.cr6.eq) goto loc_82A197E4;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82a197e4
	if (!ctx.cr6.lt) goto loc_82A197E4;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82a197e4
	if (!ctx.cr6.lt) goto loc_82A197E4;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,1400
	ctx.r5.s64 = 1400;
	// std r11,1480(r1)
	PPC_STORE_U64(ctx.r1.u32 + 1480, ctx.r11.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a75988
	ctx.lr = 0x82A1976C;
	sub_82A75988(ctx, base);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a19308
	ctx.lr = 0x82A19788;
	sub_82A19308(ctx, base);
	// ld r11,1480(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1480);
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// bne cr6,0x82a197a0
	if (!ctx.cr6.eq) goto loc_82A197A0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82a197ec
	goto loc_82A197EC;
loc_82A197A0:
	// lfd f0,1480(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1480);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// li r11,175
	ctx.r11.s64 = 175;
	// addi r10,r1,72
	ctx.r10.s64 = ctx.r1.s64 + 72;
	// addi r9,r26,-4
	ctx.r9.s64 = ctx.r26.s64 + -4;
	// lfd f0,22528(r8)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r8.u32 + 22528);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// fdiv f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 / ctx.f13.f64;
loc_82A197C4:
	// lfdu f13,8(r10)
	ctx.fpscr.disableFlushMode();
	ea = 8 + ctx.r10.u32;
	ctx.r13.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fmul f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 * ctx.f0.f64;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// stfsu f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82a197c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A197C4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a197ec
	goto loc_82A197EC;
loc_82A197E4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82A197EC:
	// addi r1,r1,1552
	ctx.r1.s64 = ctx.r1.s64 + 1552;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A197F4"))) PPC_WEAK_FUNC(sub_82A197F4);
PPC_FUNC_IMPL(__imp__sub_82A197F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A197F8"))) PPC_WEAK_FUNC(sub_82A197F8);
PPC_FUNC_IMPL(__imp__sub_82A197F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82A19800;
	__savegprlr_25(ctx, base);
	// li r12,-80
	ctx.r12.s64 = -80;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r29,4
	ctx.r29.s64 = 4;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lfs f0,5180(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5180);
	ctx.f0.f64 = double(temp.f32);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// stw r29,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r29.u32);
	// stw r29,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r29.u32);
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// lwz r10,28480(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28480);
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a19a5c
	if (ctx.cr6.eq) goto loc_82A19A5C;
	// lwz r9,14240(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 14240);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a19a5c
	if (ctx.cr6.eq) goto loc_82A19A5C;
	// lwz r9,28496(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28496);
	// li r8,20
	ctx.r8.s64 = 20;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// divwu r9,r10,r8
	ctx.r9.u32 = ctx.r10.u32 / ctx.r8.u32;
	// mulli r9,r9,20
	ctx.r9.s64 = ctx.r9.s64 * 20;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// mulli r10,r10,1424
	ctx.r10.s64 = ctx.r10.s64 * 1424;
	// lvx128 v127,r10,r11
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vor128 v1,v127,v127
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82a19660
	ctx.lr = 0x82A19890;
	sub_82A19660(ctx, base);
	// mulli r11,r3,1424
	ctx.r11.s64 = ctx.r3.s64 * 1424;
	// lfs f0,1420(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1420);
	ctx.f0.f64 = double(temp.f32);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lfs f13,1420(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1420);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82a198b0
	if (!ctx.cr6.gt) goto loc_82A198B0;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// b 0x82a198b4
	goto loc_82A198B4;
loc_82A198B0:
	// fmr f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f13.f64;
loc_82A198B4:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82a198c0
	if (ctx.cr6.lt) goto loc_82A198C0;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82A198C0:
	// lvx128 v63,r0,r10
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vspltisw128 v62,1
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_set1_epi32(int(0x1)));
	// vsubfp128 v63,v63,v127
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v63.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v127.f32)));
	// vspltisw128 v61,0
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// fdivs f1,f12,f0
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f1.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// vcsxwfp128 v10,v62,1
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v62.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3F000000)))));
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// addis r7,r11,9
	ctx.r7.s64 = ctx.r11.s64 + 589824;
	// addi r7,r7,-3608
	ctx.r7.s64 = ctx.r7.s64 + -3608;
	// vmsum3fp128 v63,v63,v63
	_mm_store_ps(ctx.v63.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v63.f32), 0xEF));
	// lfs f0,16(r7)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// vrsqrtefp128 v0,v63
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v63.f32))));
	// vor128 v13,v63,v63
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// vmulfp128 v12,v63,v10
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v10.f32)));
	// vcmpeqfp128 v9,v63,v61
	_mm_store_ps(ctx.v9.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v61.f32)));
	// vmulfp128 v11,v0,v0
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v10,v12,v11,v10
	_mm_store_ps(ctx.v10.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v10.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v10,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v0,v63,v0
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v0.f32)));
	// vsel v12,v0,v13,v9
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// stvx128 v12,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82a19a5c
	if (ctx.cr6.gt) goto loc_82A19A5C;
	// lfs f0,20(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x82a19a5c
	if (ctx.cr6.gt) goto loc_82A19A5C;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// li r9,175
	ctx.r9.s64 = 175;
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// lfs f10,5184(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5184);
	ctx.f10.f64 = double(temp.f32);
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r11.s64;
	// fmr f12,f10
	ctx.f12.f64 = ctx.f10.f64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82A19954:
	// lfsx f0,r8,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82a19968
	if (ctx.cr6.lt) goto loc_82A19968;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82A19968:
	// fadds f12,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82a19954
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A19954;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lfs f11,24436(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f11,f12
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bge cr6,0x82a19994
	if (!ctx.cr6.lt) goto loc_82A19994;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82a199bc
	goto loc_82A199BC;
loc_82A19994:
	// lfs f13,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82a199a8
	if (ctx.cr6.gt) goto loc_82A199A8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a199bc
	goto loc_82A199BC;
loc_82A199A8:
	// lfs f13,4(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r11,2
	ctx.r11.s64 = 2;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82a199bc
	if (!ctx.cr6.lt) goto loc_82A199BC;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82A199BC:
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// lbz r11,1416(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1416);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82a19a58
	if (ctx.cr0.eq) goto loc_82A19A58;
	// lbz r11,1416(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1416);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82a19a58
	if (ctx.cr0.eq) goto loc_82A19A58;
	// li r9,175
	ctx.r9.s64 = 175;
	// fmr f12,f10
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f10.f64;
	// addi r11,r30,716
	ctx.r11.s64 = ctx.r30.s64 + 716;
	// addi r10,r10,716
	ctx.r10.s64 = ctx.r10.s64 + 716;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82A199F0:
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82a19a04
	if (ctx.cr6.lt) goto loc_82A19A04;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82A19A04:
	// fadds f12,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82a199f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A199F0;
	// fsubs f0,f11,f12
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stfs f0,0(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 0, temp.u32);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bge cr6,0x82a19a28
	if (!ctx.cr6.lt) goto loc_82A19A28;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82a19a50
	goto loc_82A19A50;
loc_82A19A28:
	// lfs f13,8(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82a19a3c
	if (ctx.cr6.gt) goto loc_82A19A3C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a19a50
	goto loc_82A19A50;
loc_82A19A3C:
	// lfs f13,12(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// li r11,2
	ctx.r11.s64 = 2;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82a19a50
	if (!ctx.cr6.lt) goto loc_82A19A50;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82A19A50:
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// b 0x82a19a5c
	goto loc_82A19A5C;
loc_82A19A58:
	// stw r29,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r29.u32);
loc_82A19A5C:
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r3,24032(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24032);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a19a8c
	if (ctx.cr6.eq) goto loc_82A19A8C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f3,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lfs f2,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A19A8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A19A8C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// li r0,-80
	ctx.r0.s64 = -80;
	// lvx128 v127,r1,r0
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF), VectorMaskL));
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A19A9C"))) PPC_WEAK_FUNC(sub_82A19A9C);
PPC_FUNC_IMPL(__imp__sub_82A19A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A19AA0"))) PPC_WEAK_FUNC(sub_82A19AA0);
PPC_FUNC_IMPL(__imp__sub_82A19AA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82A19AA8;
	__savegprlr_24(ctx, base);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82a19b8c
	if (!ctx.cr6.gt) goto loc_82A19B8C;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// lfs f0,5184(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
loc_82A19AC4:
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82a19ac4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A19AC4;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82a19b8c
	if (!ctx.cr6.gt) goto loc_82A19B8C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
loc_82A19AEC:
	// cmpw cr6,r29,r4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x82a19b78
	if (!ctx.cr6.lt) goto loc_82A19B78;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r25,r29,r4
	ctx.r25.s64 = ctx.r4.s64 - ctx.r29.s64;
	// vspltisw128 v62,1
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_set1_epi32(int(0x1)));
	// lwz r31,0(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// add r28,r30,r31
	ctx.r28.u64 = ctx.r30.u64 + ctx.r31.u64;
	// addi r9,r30,1424
	ctx.r9.s64 = ctx.r30.s64 + 1424;
	// lwzx r27,r11,r8
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// vcsxwfp128 v10,v62,1
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v62.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3F000000)))));
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
loc_82A19B20:
	// lvx128 v62,r9,r31
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r31.u32) & ~0xF), VectorMaskL));
	// addi r25,r1,-96
	ctx.r25.s64 = ctx.r1.s64 + -96;
	// lvx128 v61,r0,r28
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// lwzx r24,r10,r8
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// vsubfp128 v62,v61,v62
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v62.f32)));
	// addi r9,r9,1424
	ctx.r9.s64 = ctx.r9.s64 + 1424;
	// vmsum3fp128 v62,v62,v62
	_mm_store_ps(ctx.v62.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v62.f32), 0xEF));
	// vrsqrtefp128 v0,v62
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v62.f32))));
	// vor128 v13,v62,v62
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v62.u8));
	// vmulfp128 v12,v62,v10
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v10.f32)));
	// vcmpeqfp128 v9,v62,v63
	_mm_store_ps(ctx.v9.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v11,v0,v0
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v8,v12,v11,v10
	_mm_store_ps(ctx.v8.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v10.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v8,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v0,v62,v0
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v0.f32)));
	// vsel v12,v0,v13,v9
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// stvx128 v12,r0,r25
	_mm_store_si128((__m128i*)(base + ((ctx.r25.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,-96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -96);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r24,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r24.u32 + ctx.r11.u32, temp.u32);
	// stfsx f0,r27,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + ctx.r10.u32, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82a19b20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A19B20;
loc_82A19B78:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,1424
	ctx.r30.s64 = ctx.r30.s64 + 1424;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82a19aec
	if (!ctx.cr0.eq) goto loc_82A19AEC;
loc_82A19B8C:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82a19bc0
	if (!ctx.cr6.gt) goto loc_82A19BC0;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A19BA0:
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stbx r8,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82a19ba0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A19BA0;
loc_82A19BC0:
	// subf. r11,r5,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r5.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82a19d3c
	if (!ctx.cr0.gt) goto loc_82A19D3C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// rlwinm r28,r4,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f11,-24776(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24776);
	ctx.f11.f64 = double(temp.f32);
loc_82A19BDC:
	// li r11,0
	ctx.r11.s64 = 0;
	// fmr f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f11.f64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82a19c4c
	if (!ctx.cr6.gt) goto loc_82A19C4C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82A19BF8:
	// addi r6,r5,1
	ctx.r6.s64 = ctx.r5.s64 + 1;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82a19c3c
	if (!ctx.cr6.lt) goto loc_82A19C3C;
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// lwzx r30,r30,r31
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
loc_82A19C14:
	// lfsx f13,r30,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82a19c2c
	if (!ctx.cr6.lt) goto loc_82A19C2C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
loc_82A19C2C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82a19c14
	if (ctx.cr6.lt) goto loc_82A19C14;
loc_82A19C3C:
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82a19bf8
	if (ctx.cr6.lt) goto loc_82A19BF8;
loc_82A19C4C:
	// fmr f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f11.f64;
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f13,f11
	ctx.f13.f64 = ctx.f11.f64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82a19cc0
	if (!ctx.cr6.gt) goto loc_82A19CC0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A19C64:
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82a19ca8
	if (ctx.cr6.eq) goto loc_82A19CA8;
	// cmpw cr6,r6,r29
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x82a19ca8
	if (ctx.cr6.eq) goto loc_82A19CA8;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r5,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// lfsx f0,r5,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82a19c90
	if (!ctx.cr6.lt) goto loc_82A19C90;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
loc_82A19C90:
	// rlwinm r5,r29,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r5,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// lfsx f0,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82a19ca8
	if (!ctx.cr6.lt) goto loc_82A19CA8;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_82A19CA8:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82a19c64
	if (ctx.cr6.lt) goto loc_82A19C64;
	// fcmpu cr6,f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x82a19cc4
	if (ctx.cr6.lt) goto loc_82A19CC4;
loc_82A19CC0:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82A19CC4:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,12(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r5,1
	ctx.r5.s64 = 1;
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stbx r5,r10,r6
	PPC_STORE_U8(ctx.r10.u32 + ctx.r6.u32, ctx.r5.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r6,r28,r10
	ctx.r6.u64 = ctx.r28.u64 + ctx.r10.u64;
	// lwz r6,-4(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + -4);
	// stwx r6,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u32);
	// ble 0x82a19d34
	if (!ctx.cr0.gt) goto loc_82A19D34;
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A19D00:
	// add r31,r28,r6
	ctx.r31.u64 = ctx.r28.u64 + ctx.r6.u64;
	// lwzx r30,r6,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lwzx r5,r10,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r29,r28,r5
	ctx.r29.u64 = ctx.r28.u64 + ctx.r5.u64;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// lwz r31,-4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lfsx f0,r31,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r30,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f0,-4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r5,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r11.u32, temp.u32);
	// blt cr6,0x82a19d00
	if (ctx.cr6.lt) goto loc_82A19D00;
loc_82A19D34:
	// addi r28,r28,-4
	ctx.r28.s64 = ctx.r28.s64 + -4;
	// bdnz 0x82a19bdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A19BDC;
loc_82A19D3C:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82a19d6c
	if (!ctx.cr6.gt) goto loc_82A19D6C;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// addi r10,r7,-4
	ctx.r10.s64 = ctx.r7.s64 + -4;
loc_82A19D50:
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lbzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x82a19d64
	if (!ctx.cr0.eq) goto loc_82A19D64;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
loc_82A19D64:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82a19d50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A19D50;
loc_82A19D6C:
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A19D70"))) PPC_WEAK_FUNC(sub_82A19D70);
PPC_FUNC_IMPL(__imp__sub_82A19D70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7658
	ctx.lr = 0x82A19D78;
	__savegprlr_20(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fctid f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvtsd_si64(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// ld r28,88(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
	// cmpdi cr6,r28,0
	ctx.cr6.compare<int64_t>(ctx.r28.s64, 0, ctx.xer);
	// bge cr6,0x82a19da8
	if (!ctx.cr6.lt) goto loc_82A19DA8;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82A19DA8:
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r28,r23
	ctx.r11.u64 = ctx.r28.u64 + ctx.r23.u64;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// lwz r25,4(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r8,20(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// addi r7,r25,-1
	ctx.r7.s64 = ctx.r25.s64 + -1;
	// mullw r8,r8,r22
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r22.s32);
	// add r24,r8,r9
	ctx.r24.u64 = ctx.r8.u64 + ctx.r9.u64;
	// clrldi r26,r7,32
	ctx.r26.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// add r30,r10,r24
	ctx.r30.u64 = ctx.r10.u64 + ctx.r24.u64;
	// cmpd cr6,r11,r26
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r26.s64, ctx.xer);
	// blt cr6,0x82a19de8
	if (ctx.cr6.lt) goto loc_82A19DE8;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_82A19DE8:
	// cmpd cr6,r28,r29
	ctx.cr6.compare<int64_t>(ctx.r28.s64, ctx.r29.s64, ctx.xer);
	// bgt cr6,0x82a19e88
	if (ctx.cr6.gt) goto loc_82A19E88;
loc_82A19DF0:
	// lhz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// lhz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82a19e1c
	if (!ctx.cr6.lt) goto loc_82A19E1C;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cmpwi cr6,r10,45
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 45, ctx.xer);
	// ble cr6,0x82a19e18
	if (!ctx.cr6.gt) goto loc_82A19E18;
loc_82A19E10:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a19e3c
	goto loc_82A19E3C;
loc_82A19E18:
	// sth r9,20(r31)
	PPC_STORE_U16(ctx.r31.u32 + 20, ctx.r9.u16);
loc_82A19E1C:
	// lhz r10,22(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 22);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82a19e38
	if (!ctx.cr6.gt) goto loc_82A19E38;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// bgt cr6,0x82a19e10
	if (ctx.cr6.gt) goto loc_82A19E10;
	// sth r9,22(r31)
	PPC_STORE_U16(ctx.r31.u32 + 22, ctx.r9.u16);
loc_82A19E38:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82A19E3C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a19e78
	if (ctx.cr0.eq) goto loc_82A19E78;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// lhz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// extsw r5,r27
	ctx.r5.s64 = ctx.r27.s32;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82a0c298
	ctx.lr = 0x82A19E68;
	sub_82A0C298(ctx, base);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82a18da8
	ctx.lr = 0x82A19E78;
	sub_82A18DA8(ctx, base);
loc_82A19E78:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// cmpd cr6,r27,r29
	ctx.cr6.compare<int64_t>(ctx.r27.s64, ctx.r29.s64, ctx.xer);
	// ble cr6,0x82a19df0
	if (!ctx.cr6.gt) goto loc_82A19DF0;
loc_82A19E88:
	// cmpd cr6,r28,r21
	ctx.cr6.compare<int64_t>(ctx.r28.s64, ctx.r21.s64, ctx.xer);
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// blt cr6,0x82a19e98
	if (ctx.cr6.lt) goto loc_82A19E98;
	// add r29,r28,r20
	ctx.r29.u64 = ctx.r28.u64 + ctx.r20.u64;
loc_82A19E98:
	// cmpd cr6,r29,r26
	ctx.cr6.compare<int64_t>(ctx.r29.s64, ctx.r26.s64, ctx.xer);
	// blt cr6,0x82a19ea4
	if (ctx.cr6.lt) goto loc_82A19EA4;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_82A19EA4:
	// cmpd cr6,r27,r29
	ctx.cr6.compare<int64_t>(ctx.r27.s64, ctx.r29.s64, ctx.xer);
	// bgt cr6,0x82a19f44
	if (ctx.cr6.gt) goto loc_82A19F44;
	// addi r30,r30,-2
	ctx.r30.s64 = ctx.r30.s64 + -2;
loc_82A19EB0:
	// lhz r9,2(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// lhz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82a19edc
	if (!ctx.cr6.lt) goto loc_82A19EDC;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cmpwi cr6,r10,45
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 45, ctx.xer);
	// ble cr6,0x82a19ed8
	if (!ctx.cr6.gt) goto loc_82A19ED8;
loc_82A19ED0:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a19efc
	goto loc_82A19EFC;
loc_82A19ED8:
	// sth r9,20(r31)
	PPC_STORE_U16(ctx.r31.u32 + 20, ctx.r9.u16);
loc_82A19EDC:
	// lhz r10,22(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 22);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82a19ef8
	if (!ctx.cr6.gt) goto loc_82A19EF8;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// bgt cr6,0x82a19ed0
	if (ctx.cr6.gt) goto loc_82A19ED0;
	// sth r9,22(r31)
	PPC_STORE_U16(ctx.r31.u32 + 22, ctx.r9.u16);
loc_82A19EF8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82A19EFC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a19f44
	if (ctx.cr0.eq) goto loc_82A19F44;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// lhzu r7,2(r30)
	ea = 2 + ctx.r30.u32;
	ctx.r7.u64 = PPC_LOAD_U16(ea);
	ctx.r30.u32 = ea;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// extsw r5,r27
	ctx.r5.s64 = ctx.r27.s32;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82a0c298
	ctx.lr = 0x82A19F28;
	sub_82A0C298(ctx, base);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82a18da8
	ctx.lr = 0x82A19F38;
	sub_82A18DA8(ctx, base);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpd cr6,r27,r29
	ctx.cr6.compare<int64_t>(ctx.r27.s64, ctx.r29.s64, ctx.xer);
	// ble cr6,0x82a19eb0
	if (!ctx.cr6.gt) goto loc_82A19EB0;
loc_82A19F44:
	// addi r30,r28,-1
	ctx.r30.s64 = ctx.r28.s64 + -1;
	// clrldi r11,r25,32
	ctx.r11.u64 = ctx.r25.u64 & 0xFFFFFFFF;
	// cmpd cr6,r30,r11
	ctx.cr6.compare<int64_t>(ctx.r30.s64, ctx.r11.s64, ctx.xer);
	// blt cr6,0x82a19f58
	if (ctx.cr6.lt) goto loc_82A19F58;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_82A19F58:
	// subf r11,r23,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r23.s64;
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// add r29,r10,r24
	ctx.r29.u64 = ctx.r10.u64 + ctx.r24.u64;
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// bgt cr6,0x82a1a00c
	if (ctx.cr6.gt) goto loc_82A1A00C;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x82a1a00c
	goto loc_82A1A00C;
loc_82A19F7C:
	// lhz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// lhz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82a19fa8
	if (!ctx.cr6.lt) goto loc_82A19FA8;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cmpwi cr6,r10,45
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 45, ctx.xer);
	// ble cr6,0x82a19fa4
	if (!ctx.cr6.gt) goto loc_82A19FA4;
loc_82A19F9C:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a19fc8
	goto loc_82A19FC8;
loc_82A19FA4:
	// sth r9,20(r31)
	PPC_STORE_U16(ctx.r31.u32 + 20, ctx.r9.u16);
loc_82A19FA8:
	// lhz r10,22(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 22);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82a19fc4
	if (!ctx.cr6.gt) goto loc_82A19FC4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// bgt cr6,0x82a19f9c
	if (ctx.cr6.gt) goto loc_82A19F9C;
	// sth r9,22(r31)
	PPC_STORE_U16(ctx.r31.u32 + 22, ctx.r9.u16);
loc_82A19FC4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82A19FC8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a1a004
	if (ctx.cr0.eq) goto loc_82A1A004;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// lhz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// extsw r5,r30
	ctx.r5.s64 = ctx.r30.s32;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82a0c298
	ctx.lr = 0x82A19FF4;
	sub_82A0C298(ctx, base);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82a18da8
	ctx.lr = 0x82A1A004;
	sub_82A18DA8(ctx, base);
loc_82A1A004:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,-2
	ctx.r29.s64 = ctx.r29.s64 + -2;
loc_82A1A00C:
	// cmpd cr6,r30,r28
	ctx.cr6.compare<int64_t>(ctx.r30.s64, ctx.r28.s64, ctx.xer);
	// bge cr6,0x82a19f7c
	if (!ctx.cr6.lt) goto loc_82A19F7C;
	// cmpd cr6,r30,r21
	ctx.cr6.compare<int64_t>(ctx.r30.s64, ctx.r21.s64, ctx.xer);
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// bgt cr6,0x82a1a024
	if (ctx.cr6.gt) goto loc_82A1A024;
	// add r28,r30,r20
	ctx.r28.u64 = ctx.r30.u64 + ctx.r20.u64;
loc_82A1A024:
	// cmpdi cr6,r28,0
	ctx.cr6.compare<int64_t>(ctx.r28.s64, 0, ctx.xer);
	// bgt cr6,0x82a1a030
	if (ctx.cr6.gt) goto loc_82A1A030;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82A1A030:
	// cmpd cr6,r30,r28
	ctx.cr6.compare<int64_t>(ctx.r30.s64, ctx.r28.s64, ctx.xer);
	// blt cr6,0x82a1a0d0
	if (ctx.cr6.lt) goto loc_82A1A0D0;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
loc_82A1A03C:
	// lhz r9,-2(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + -2);
	// lhz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82a1a068
	if (!ctx.cr6.lt) goto loc_82A1A068;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cmpwi cr6,r10,45
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 45, ctx.xer);
	// ble cr6,0x82a1a064
	if (!ctx.cr6.gt) goto loc_82A1A064;
loc_82A1A05C:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a1a088
	goto loc_82A1A088;
loc_82A1A064:
	// sth r9,20(r31)
	PPC_STORE_U16(ctx.r31.u32 + 20, ctx.r9.u16);
loc_82A1A068:
	// lhz r10,22(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 22);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82a1a084
	if (!ctx.cr6.gt) goto loc_82A1A084;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// bgt cr6,0x82a1a05c
	if (ctx.cr6.gt) goto loc_82A1A05C;
	// sth r9,22(r31)
	PPC_STORE_U16(ctx.r31.u32 + 22, ctx.r9.u16);
loc_82A1A084:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82A1A088:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a1a0d0
	if (ctx.cr0.eq) goto loc_82A1A0D0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// lhzu r7,-2(r29)
	ea = -2 + ctx.r29.u32;
	ctx.r7.u64 = PPC_LOAD_U16(ea);
	ctx.r29.u32 = ea;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// extsw r5,r30
	ctx.r5.s64 = ctx.r30.s32;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82a0c298
	ctx.lr = 0x82A1A0B4;
	sub_82A0C298(ctx, base);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82a18da8
	ctx.lr = 0x82A1A0C4;
	sub_82A18DA8(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// cmpd cr6,r30,r28
	ctx.cr6.compare<int64_t>(ctx.r30.s64, ctx.r28.s64, ctx.xer);
	// bge cr6,0x82a1a03c
	if (!ctx.cr6.lt) goto loc_82A1A03C;
loc_82A1A0D0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76a8
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1A0D8"))) PPC_WEAK_FUNC(sub_82A1A0D8);
PPC_FUNC_IMPL(__imp__sub_82A1A0D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A1A0E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,28480(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28480);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 10, ctx.xer);
	// ble cr6,0x82a1a174
	if (!ctx.cr6.gt) goto loc_82A1A174;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 9;
	// mullw r29,r11,r31
	ctx.r29.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82a0d110
	ctx.lr = 0x82A1A110;
	sub_82A0D110(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a1a1cc
	if (ctx.cr6.eq) goto loc_82A1A1CC;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r4,28480(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28480);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a0ce68
	ctx.lr = 0x82A1A130;
	sub_82A0CE68(ctx, base);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lwz r4,28480(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28480);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a19aa0
	ctx.lr = 0x82A1A14C;
	sub_82A19AA0(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// ori r10,r10,63156
	ctx.r10.u64 = ctx.r10.u64 | 63156;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r31,10
	ctx.r31.s64 = 10;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a81d88
	ctx.lr = 0x82A1A170;
	sub_82A81D88(ctx, base);
	// b 0x82a1a194
	goto loc_82A1A194;
loc_82A1A174:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi r31,0
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble 0x82a1a194
	if (!ctx.cr0.gt) goto loc_82A1A194;
	// addi r11,r1,124
	ctx.r11.s64 = ctx.r1.s64 + 124;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_82A1A188:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82a1a188
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A1A188;
loc_82A1A194:
	// stw r31,14240(r30)
	PPC_STORE_U32(ctx.r30.u32 + 14240, ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a1a1cc
	if (ctx.cr6.eq) goto loc_82A1A1CC;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
loc_82A1A1A8:
	// lwzu r11,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// li r5,1424
	ctx.r5.s64 = 1424;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mulli r11,r11,1424
	ctx.r11.s64 = ctx.r11.s64 * 1424;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82A1A1C0;
	sub_82FA77C0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,1424
	ctx.r30.s64 = ctx.r30.s64 + 1424;
	// bne 0x82a1a1a8
	if (!ctx.cr0.eq) goto loc_82A1A1A8;
loc_82A1A1CC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1A1D4"))) PPC_WEAK_FUNC(sub_82A1A1D4);
PPC_FUNC_IMPL(__imp__sub_82A1A1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1A1D8"))) PPC_WEAK_FUNC(sub_82A1A1D8);
PPC_FUNC_IMPL(__imp__sub_82A1A1D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,14240(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 14240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x82a1a0d8
	sub_82A1A0D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1A1E8"))) PPC_WEAK_FUNC(sub_82A1A1E8);
PPC_FUNC_IMPL(__imp__sub_82A1A1E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1A1EC"))) PPC_WEAK_FUNC(sub_82A1A1EC);
PPC_FUNC_IMPL(__imp__sub_82A1A1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1A1F0"))) PPC_WEAK_FUNC(sub_82A1A1F0);
PPC_FUNC_IMPL(__imp__sub_82A1A1F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82A1A1F8;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82fa8d20
	ctx.lr = 0x82A1A200;
	__savefpr_26(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f13,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fctid f0,f1
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvtsd_si64(_mm_load_sd(&ctx.f1.f64));
	// lfs f11,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// fctid f12,f2
	ctx.f12.s64 = (ctx.f2.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvtsd_si64(_mm_load_sd(&ctx.f2.f64));
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// stfd f12,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// ld r24,88(r1)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fctid f10,f3
	ctx.f10.s64 = (ctx.f3.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvtsd_si64(_mm_load_sd(&ctx.f3.f64));
	// stfd f10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f10.u64);
	// fctid f0,f5
	ctx.f0.s64 = (ctx.f5.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvtsd_si64(_mm_load_sd(&ctx.f5.f64));
	// stfd f0,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// fctid f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvtsd_si64(_mm_load_sd(&ctx.f13.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// fmr f30,f3
	ctx.f30.f64 = ctx.f3.f64;
	// extsw. r11,r24
	ctx.r11.s64 = ctx.r24.s32;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fctid f12,f11
	ctx.f12.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvtsd_si64(_mm_load_sd(&ctx.f11.f64));
	// stfd f12,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f12.u64);
	// blt 0x82a1a26c
	if (ctx.cr0.lt) goto loc_82A1A26C;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a1a270
	if (ctx.cr6.lt) goto loc_82A1A270;
loc_82A1A26C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A1A270:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a1a280
	if (!ctx.cr0.eq) goto loc_82A1A280;
loc_82A1A278:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a1a790
	goto loc_82A1A790;
loc_82A1A280:
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// extsw. r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt 0x82a1a2a0
	if (ctx.cr0.lt) goto loc_82A1A2A0;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a1a2a4
	if (ctx.cr6.lt) goto loc_82A1A2A4;
loc_82A1A2A0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A1A2A4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a1a278
	if (ctx.cr0.eq) goto loc_82A1A278;
	// ld r25,104(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// extsw. r31,r25
	ctx.r31.s64 = ctx.r25.s32;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82a1a2cc
	if (ctx.cr0.lt) goto loc_82A1A2CC;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a1a2d0
	if (ctx.cr6.lt) goto loc_82A1A2D0;
loc_82A1A2CC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A1A2D0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a1a278
	if (ctx.cr0.eq) goto loc_82A1A278;
	// ld r26,112(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// addi r10,r25,10
	ctx.r10.s64 = ctx.r25.s64 + 10;
	// cmpd cr6,r26,r10
	ctx.cr6.compare<int64_t>(ctx.r26.s64, ctx.r10.s64, ctx.xer);
	// ble cr6,0x82a1a278
	if (!ctx.cr6.gt) goto loc_82A1A278;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// fsubs f0,f5,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f5.f64 - ctx.f30.f64));
	// fsubs f13,f4,f31
	ctx.f13.f64 = double(float(ctx.f4.f64 - ctx.f31.f64));
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// extsw r8,r5
	ctx.r8.s64 = ctx.r5.s32;
	// cmpd cr6,r26,r8
	ctx.cr6.compare<int64_t>(ctx.r26.s64, ctx.r8.s64, ctx.xer);
	// fdivs f27,f13,f0
	ctx.f27.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// blt cr6,0x82a1a31c
	if (ctx.cr6.lt) goto loc_82A1A31C;
	// addi r8,r5,-1
	ctx.r8.s64 = ctx.r5.s64 + -1;
	// clrldi r26,r8,32
	ctx.r26.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// cmpd cr6,r26,r10
	ctx.cr6.compare<int64_t>(ctx.r26.s64, ctx.r10.s64, ctx.xer);
	// ble cr6,0x82a1a278
	if (!ctx.cr6.gt) goto loc_82A1A278;
	// fmadds f4,f0,f27,f31
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f27.f64 + ctx.f31.f64));
loc_82A1A31C:
	// fadds f13,f31,f4
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f31.f64 + ctx.f4.f64));
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// fadds f12,f30,f5
	ctx.f12.f64 = double(float(ctx.f30.f64 + ctx.f5.f64));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r7,r10,-25800
	ctx.r7.s64 = ctx.r10.s64 + -25800;
	// lwz r6,12(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// clrlwi r4,r4,26
	ctx.r4.u64 = ctx.r4.u32 & 0x3F;
	// fctid f11,f4
	ctx.f11.s64 = (ctx.f4.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvtsd_si64(_mm_load_sd(&ctx.f4.f64));
	// mullw r10,r3,r31
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r31.s32);
	// stfd f11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f11.u64);
	// lfs f0,11556(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 11556);
	ctx.f0.f64 = double(temp.f32);
	// lbzx r8,r4,r7
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r7.u32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f26,f12,f0
	ctx.f26.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// rlwinm r8,r8,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// fctid f0,f13
	ctx.f0.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvtsd_si64(_mm_load_sd(&ctx.f13.f64));
	// stfd f0,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// ld r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fctid f0,f26
	ctx.f0.s64 = (ctx.f26.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvtsd_si64(_mm_load_sd(&ctx.f26.f64));
	// stfd f0,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// extsw. r10,r8
	ctx.r10.s64 = ctx.r8.s32;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lhzx r3,r9,r6
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r6.u32);
	// blt 0x82a1a398
	if (ctx.cr0.lt) goto loc_82A1A398;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// li r9,1
	ctx.r9.s64 = 1;
	// blt cr6,0x82a1a39c
	if (ctx.cr6.lt) goto loc_82A1A39C;
loc_82A1A398:
	// li r9,0
	ctx.r9.s64 = 0;
loc_82A1A39C:
	// ld r30,112(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82a1a3f0
	if (ctx.cr0.eq) goto loc_82A1A3F0;
	// extsw. r9,r30
	ctx.r9.s64 = ctx.r30.s32;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt 0x82a1a3bc
	if (ctx.cr0.lt) goto loc_82A1A3BC;
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// li r8,1
	ctx.r8.s64 = 1;
	// blt cr6,0x82a1a3c0
	if (ctx.cr6.lt) goto loc_82A1A3C0;
loc_82A1A3BC:
	// li r8,0
	ctx.r8.s64 = 0;
loc_82A1A3C0:
	// clrlwi. r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82a1a3f0
	if (ctx.cr0.eq) goto loc_82A1A3F0;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi r8,r8,26
	ctx.r8.u64 = ctx.r8.u32 & 0x3F;
	// mullw r9,r4,r9
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// lbzx r8,r8,r7
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// rlwinm r8,r8,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// mullw r10,r8,r10
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lhzx r4,r10,r6
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r6.u32);
	// b 0x82a1a3f4
	goto loc_82A1A3F4;
loc_82A1A3F0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82A1A3F4:
	// ld r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// extsw. r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt 0x82a1a410
	if (ctx.cr0.lt) goto loc_82A1A410;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x82a1a414
	if (ctx.cr6.lt) goto loc_82A1A414;
loc_82A1A410:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A1A414:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82a1a464
	if (ctx.cr0.eq) goto loc_82A1A464;
	// extsw. r10,r26
	ctx.r10.s64 = ctx.r26.s32;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x82a1a430
	if (ctx.cr0.lt) goto loc_82A1A430;
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// li r9,1
	ctx.r9.s64 = 1;
	// blt cr6,0x82a1a434
	if (ctx.cr6.lt) goto loc_82A1A434;
loc_82A1A430:
	// li r9,0
	ctx.r9.s64 = 0;
loc_82A1A434:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82a1a464
	if (ctx.cr0.eq) goto loc_82A1A464;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi r9,r9,26
	ctx.r9.u64 = ctx.r9.u32 & 0x3F;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lbzx r10,r9,r7
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r7.u32);
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhzx r5,r11,r6
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r6.u32);
	// b 0x82a1a468
	goto loc_82A1A468;
loc_82A1A464:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82A1A468:
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// clrlwi r6,r5,16
	ctx.r6.u64 = ctx.r5.u32 & 0xFFFF;
	// subfe r9,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r8,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// subfe r8,r8,r11
	temp.u8 = (~ctx.r8.u32 + ctx.r11.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r7,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r7.s64 = ctx.r6.s64 + -1;
	// subfe r7,r7,r6
	temp.u8 = (~ctx.r7.u32 + ctx.r6.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r7.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// blt cr6,0x82a1a278
	if (ctx.cr6.lt) goto loc_82A1A278;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// bne cr6,0x82a1a59c
	if (!ctx.cr6.eq) goto loc_82A1A59C;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82a1a4b0
	if (ctx.cr6.gt) goto loc_82A1A4B0;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
loc_82A1A4B0:
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x82a1a4d4
	if (!ctx.cr6.gt) goto loc_82A1A4D4;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82a1a4cc
	if (!ctx.cr6.gt) goto loc_82A1A4CC;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x82a1a4d8
	goto loc_82A1A4D8;
loc_82A1A4CC:
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// b 0x82a1a4d8
	goto loc_82A1A4D8;
loc_82A1A4D4:
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
loc_82A1A4D8:
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r9,22(r27)
	PPC_STORE_U16(ctx.r27.u32 + 22, ctx.r9.u16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// subf r9,r8,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r8.s64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r11,20(r27)
	PPC_STORE_U16(ctx.r27.u32 + 20, ctx.r11.u16);
	// beq cr6,0x82a1a548
	if (ctx.cr6.eq) goto loc_82A1A548;
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// fmr f29,f30
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f30.f64;
	// cmpd cr6,r11,r26
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r26.s64, ctx.xer);
	// bgt cr6,0x82a1a78c
	if (ctx.cr6.gt) goto loc_82A1A78C;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lfs f28,24436(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f28.f64 = double(temp.f32);
loc_82A1A510:
	// fsubs f0,f29,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f29.f64 - ctx.f30.f64));
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// ld r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fmadds f1,f0,f27,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f27.f64 + ctx.f31.f64));
	// bl 0x82a19d70
	ctx.lr = 0x82A1A530;
	sub_82A19D70(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// fadds f29,f29,f28
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f29.f64 + ctx.f28.f64));
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// cmpd cr6,r11,r26
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r26.s64, ctx.xer);
	// ble cr6,0x82a1a510
	if (!ctx.cr6.gt) goto loc_82A1A510;
	// b 0x82a1a78c
	goto loc_82A1A78C;
loc_82A1A548:
	// extsw r31,r26
	ctx.r31.s64 = ctx.r26.s32;
	// fmr f29,f5
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f5.f64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmpd cr6,r31,r25
	ctx.cr6.compare<int64_t>(ctx.r31.s64, ctx.r25.s64, ctx.xer);
	// blt cr6,0x82a1a78c
	if (ctx.cr6.lt) goto loc_82A1A78C;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lfs f28,24436(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f28.f64 = double(temp.f32);
loc_82A1A564:
	// fsubs f0,f29,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f29.f64 - ctx.f30.f64));
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// ld r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fmadds f1,f0,f27,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f27.f64 + ctx.f31.f64));
	// bl 0x82a19d70
	ctx.lr = 0x82A1A584;
	sub_82A19D70(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// fsubs f29,f29,f28
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f29.f64 - ctx.f28.f64));
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// cmpd cr6,r11,r25
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r25.s64, ctx.xer);
	// bge cr6,0x82a1a564
	if (!ctx.cr6.lt) goto loc_82A1A564;
	// b 0x82a1a78c
	goto loc_82A1A78C;
loc_82A1A59C:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82a1a5a8
	if (ctx.cr6.lt) goto loc_82A1A5A8;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
loc_82A1A5A8:
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82a1a5cc
	if (!ctx.cr6.lt) goto loc_82A1A5CC;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82a1a5c4
	if (!ctx.cr6.lt) goto loc_82A1A5C4;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// b 0x82a1a5d0
	goto loc_82A1A5D0;
loc_82A1A5C4:
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// b 0x82a1a5d0
	goto loc_82A1A5D0;
loc_82A1A5CC:
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
loc_82A1A5D0:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// sth r8,20(r27)
	PPC_STORE_U16(ctx.r27.u32 + 20, ctx.r8.u16);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// bgt cr6,0x82a1a5e4
	if (ctx.cr6.gt) goto loc_82A1A5E4;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
loc_82A1A5E4:
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x82a1a608
	if (!ctx.cr6.gt) goto loc_82A1A608;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82a1a600
	if (!ctx.cr6.gt) goto loc_82A1A600;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x82a1a60c
	goto loc_82A1A60C;
loc_82A1A600:
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// b 0x82a1a60c
	goto loc_82A1A60C;
loc_82A1A608:
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
loc_82A1A60C:
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// subf r9,r9,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r9.s64;
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// addis r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 65536;
	// addi r8,r11,10
	ctx.r8.s64 = ctx.r11.s64 + 10;
	// addi r9,r9,-10
	ctx.r9.s64 = ctx.r9.s64 + -10;
	// sth r8,22(r27)
	PPC_STORE_U16(ctx.r27.u32 + 22, ctx.r8.u16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// sth r9,20(r27)
	PPC_STORE_U16(ctx.r27.u32 + 20, ctx.r9.u16);
	// bne cr6,0x82a1a694
	if (!ctx.cr6.eq) goto loc_82A1A694;
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// fmr f29,f30
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f30.f64;
	// cmpd cr6,r11,r26
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r26.s64, ctx.xer);
	// bgt cr6,0x82a1a78c
	if (ctx.cr6.gt) goto loc_82A1A78C;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lfs f28,24436(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f28.f64 = double(temp.f32);
loc_82A1A65C:
	// fsubs f0,f29,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f29.f64 - ctx.f30.f64));
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// ld r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fmadds f1,f0,f27,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f27.f64 + ctx.f31.f64));
	// bl 0x82a19d70
	ctx.lr = 0x82A1A67C;
	sub_82A19D70(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// fadds f29,f29,f28
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f29.f64 + ctx.f28.f64));
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// cmpd cr6,r11,r26
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r26.s64, ctx.xer);
	// ble cr6,0x82a1a65c
	if (!ctx.cr6.gt) goto loc_82A1A65C;
	// b 0x82a1a78c
	goto loc_82A1A78C;
loc_82A1A694:
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x82a1a6f0
	if (!ctx.cr6.eq) goto loc_82A1A6F0;
	// extsw r31,r26
	ctx.r31.s64 = ctx.r26.s32;
	// fmr f29,f5
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f5.f64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmpd cr6,r31,r25
	ctx.cr6.compare<int64_t>(ctx.r31.s64, ctx.r25.s64, ctx.xer);
	// blt cr6,0x82a1a78c
	if (ctx.cr6.lt) goto loc_82A1A78C;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lfs f28,24436(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f28.f64 = double(temp.f32);
loc_82A1A6B8:
	// fsubs f0,f29,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f29.f64 - ctx.f30.f64));
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// ld r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fmadds f1,f0,f27,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f27.f64 + ctx.f31.f64));
	// bl 0x82a19d70
	ctx.lr = 0x82A1A6D8;
	sub_82A19D70(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// fsubs f29,f29,f28
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f29.f64 - ctx.f28.f64));
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// cmpd cr6,r11,r25
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r25.s64, ctx.xer);
	// bge cr6,0x82a1a6b8
	if (!ctx.cr6.lt) goto loc_82A1A6B8;
	// b 0x82a1a78c
	goto loc_82A1A78C;
loc_82A1A6F0:
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// ld r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// extsw r30,r30
	ctx.r30.s64 = ctx.r30.s32;
	// ld r28,88(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fmr f29,f26
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f26.f64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// lfs f28,24436(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f28.f64 = double(temp.f32);
	// cmpd cr6,r30,r26
	ctx.cr6.compare<int64_t>(ctx.r30.s64, ctx.r26.s64, ctx.xer);
	// bgt cr6,0x82a1a74c
	if (ctx.cr6.gt) goto loc_82A1A74C;
loc_82A1A718:
	// fsubs f0,f29,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f29.f64 - ctx.f30.f64));
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fmadds f1,f0,f27,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f27.f64 + ctx.f31.f64));
	// bl 0x82a19d70
	ctx.lr = 0x82A1A738;
	sub_82A19D70(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// fsubs f29,f29,f28
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f29.f64 - ctx.f28.f64));
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// cmpd cr6,r11,r26
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r26.s64, ctx.xer);
	// ble cr6,0x82a1a718
	if (!ctx.cr6.gt) goto loc_82A1A718;
loc_82A1A74C:
	// addi r31,r30,-1
	ctx.r31.s64 = ctx.r30.s64 + -1;
	// fsubs f29,f26,f28
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f26.f64 - ctx.f28.f64));
	// b 0x82a1a780
	goto loc_82A1A780;
loc_82A1A758:
	// fsubs f0,f29,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f29.f64 - ctx.f30.f64));
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fmadds f1,f0,f27,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f27.f64 + ctx.f31.f64));
	// bl 0x82a19d70
	ctx.lr = 0x82A1A778;
	sub_82A19D70(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// fsubs f29,f29,f28
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f29.f64 - ctx.f28.f64));
loc_82A1A780:
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// cmpd cr6,r11,r25
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r25.s64, ctx.xer);
	// bge cr6,0x82a1a758
	if (!ctx.cr6.lt) goto loc_82A1A758;
loc_82A1A78C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82A1A790:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82fa8d6c
	ctx.lr = 0x82A1A79C;
	__restfpr_26(ctx, base);
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1A7A0"))) PPC_WEAK_FUNC(sub_82A1A7A0);
PPC_FUNC_IMPL(__imp__sub_82A1A7A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A1A7A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,192(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 192);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,144(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 144);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfs f0,11556(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11556);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-9860(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -9860);
	ctx.f13.f64 = double(temp.f32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,24(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bgt cr6,0x82a1a7fc
	if (ctx.cr6.gt) goto loc_82A1A7FC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a1aaf4
	goto loc_82A1AAF4;
loc_82A1A7FC:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lwz r7,156(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82a1a814
	if (ctx.cr6.lt) goto loc_82A1A814;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
loc_82A1A814:
	// lwz r10,192(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// lwz r9,204(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82a1a82c
	if (ctx.cr6.lt) goto loc_82A1A82C;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
loc_82A1A82C:
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82a1a844
	if (!ctx.cr6.lt) goto loc_82A1A844;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82a1a854
	if (ctx.cr6.lt) goto loc_82A1A854;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82a1a854
	goto loc_82A1A854;
loc_82A1A844:
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// blt cr6,0x82a1a854
	if (ctx.cr6.lt) goto loc_82A1A854;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82A1A854:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfs f13,24(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fnmsubs f13,f12,f13,f11
	ctx.f13.f64 = double(float(-(ctx.f12.f64 * ctx.f13.f64 - ctx.f11.f64)));
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfiwx f13,0,r5
	PPC_STORE_U32(ctx.r5.u32, ctx.f13.u32);
	// lwz r8,156(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x82a1a898
	if (ctx.cr6.gt) goto loc_82A1A898;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
loc_82A1A898:
	// lwz r10,192(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// lwz r9,204(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x82a1a8b0
	if (ctx.cr6.gt) goto loc_82A1A8B0;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
loc_82A1A8B0:
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x82a1a8c8
	if (!ctx.cr6.gt) goto loc_82A1A8C8;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x82a1a8d8
	if (ctx.cr6.gt) goto loc_82A1A8D8;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82a1a8d8
	goto loc_82A1A8D8;
loc_82A1A8C8:
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// bgt cr6,0x82a1a8d8
	if (ctx.cr6.gt) goto loc_82A1A8D8;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82A1A8D8:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfs f13,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,24(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmadds f13,f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// li r12,8
	ctx.r12.s64 = 8;
	// stfiwx f0,r5,r12
	PPC_STORE_U32(ctx.r5.u32 + ctx.r12.u32, ctx.f0.u32);
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r10,196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82a1a91c
	if (ctx.cr6.lt) goto loc_82A1A91C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82A1A91C:
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// lwz r10,160(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82a1a934
	if (!ctx.cr6.gt) goto loc_82A1A934;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82A1A934:
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x82a1a94c
	if (!ctx.cr6.lt) goto loc_82A1A94C;
	// stw r30,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r30.u32);
loc_82A1A94C:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82a1a968
	if (ctx.cr6.lt) goto loc_82A1A968;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_82A1A968:
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82a1a978
	if (!ctx.cr6.lt) goto loc_82A1A978;
	// stw r30,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r30.u32);
loc_82A1A978:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82a1a994
	if (ctx.cr6.lt) goto loc_82A1A994;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
loc_82A1A994:
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82a1a9a4
	if (!ctx.cr6.lt) goto loc_82A1A9A4;
	// stw r30,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r30.u32);
loc_82A1A9A4:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82a1a9c0
	if (ctx.cr6.lt) goto loc_82A1A9C0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
loc_82A1A9C0:
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82a1a9d0
	if (!ctx.cr6.lt) goto loc_82A1A9D0;
	// stw r30,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r30.u32);
loc_82A1A9D0:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82a1a9ec
	if (ctx.cr6.lt) goto loc_82A1A9EC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r11.u32);
loc_82A1A9EC:
	// lwa r11,144(r31)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 144));
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwa r9,156(r31)
	ctx.r9.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 156));
	// lwa r8,0(r31)
	ctx.r8.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 0));
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lwa r10,160(r31)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 160));
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// lwa r10,148(r31)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 148));
	// frsp f2,f0
	ctx.f2.f64 = double(float(ctx.f0.f64));
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f3,f11
	ctx.f3.f64 = double(float(ctx.f11.f64));
	// frsp f4,f12
	ctx.f4.f64 = double(float(ctx.f12.f64));
	// frsp f1,f10
	ctx.f1.f64 = double(float(ctx.f10.f64));
	// frsp f5,f13
	ctx.f5.f64 = double(float(ctx.f13.f64));
	// bl 0x82a1a1f0
	ctx.lr = 0x82A1AA60;
	sub_82A1A1F0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a1aaec
	if (ctx.cr0.eq) goto loc_82A1AAEC;
	// lwa r11,0(r31)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 0));
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwa r9,208(r31)
	ctx.r9.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 208));
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lwa r8,204(r31)
	ctx.r8.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 204));
	// lwa r9,196(r31)
	ctx.r9.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 196));
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lwa r10,192(r31)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 192));
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f10,104(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// frsp f2,f10
	ctx.f2.f64 = double(float(ctx.f10.f64));
	// frsp f3,f13
	ctx.f3.f64 = double(float(ctx.f13.f64));
	// frsp f4,f12
	ctx.f4.f64 = double(float(ctx.f12.f64));
	// frsp f5,f11
	ctx.f5.f64 = double(float(ctx.f11.f64));
	// bl 0x82a1a1f0
	ctx.lr = 0x82A1AAE0;
	sub_82A1A1F0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82a1aaf0
	if (!ctx.cr0.eq) goto loc_82A1AAF0;
loc_82A1AAEC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82A1AAF0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
loc_82A1AAF4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1AAFC"))) PPC_WEAK_FUNC(sub_82A1AAFC);
PPC_FUNC_IMPL(__imp__sub_82A1AAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1AB00"))) PPC_WEAK_FUNC(sub_82A1AB00);
PPC_FUNC_IMPL(__imp__sub_82A1AB00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82A1AB08;
	__savegprlr_23(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lis r4,4
	ctx.r4.s64 = 262144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,45056
	ctx.r4.u64 = ctx.r4.u64 | 45056;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// bl 0x82a0d110
	ctx.lr = 0x82A1AB3C;
	sub_82A0D110(ctx, base);
	// lis r5,4
	ctx.r5.s64 = 262144;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,45056
	ctx.r5.u64 = ctx.r5.u64 | 45056;
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A1AB54;
	sub_82FA7CF0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lfs f0,17892(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17892);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// lfs f13,5184(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f13.f64 = double(temp.f32);
	// stw r24,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r24.u32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stw r23,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r23.u32);
	// stfs f13,168(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82a1a7a0
	ctx.lr = 0x82A1ABA0;
	sub_82A1A7A0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a1abd8
	if (!ctx.cr0.eq) goto loc_82A1ABD8;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82a1abd0
	if (ctx.cr6.eq) goto loc_82A1ABD0;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// ori r10,r10,63156
	ctx.r10.u64 = ctx.r10.u64 | 63156;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a81d88
	ctx.lr = 0x82A1ABD0;
	sub_82A81D88(ctx, base);
loc_82A1ABD0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a1ad64
	goto loc_82A1AD64;
loc_82A1ABD8:
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// lhz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lwz r6,132(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82a0c298
	ctx.lr = 0x82A1ABF8;
	sub_82A0C298(ctx, base);
	// addi r9,r1,124
	ctx.r9.s64 = ctx.r1.s64 + 124;
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// lhz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,140(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// li r3,2
	ctx.r3.s64 = 2;
	// lwz r5,136(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x82a0c298
	ctx.lr = 0x82A1AC18;
	sub_82A0C298(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// xoris r10,r11,32768
	ctx.r10.u64 = ctx.r11.u64 ^ 2147483648;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// addc r11,r11,r10
	ctx.xer.ca = (ctx.r11.u32 + ctx.r10.u32 < ctx.r11.u32);
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 & ctx.r9.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82a1ac5c
	if (!ctx.cr6.lt) goto loc_82A1AC5C;
	// li r11,0
	ctx.r11.s64 = 0;
	// xoris r10,r11,32768
	ctx.r10.u64 = ctx.r11.u64 ^ 2147483648;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// addc r11,r11,r10
	ctx.xer.ca = (ctx.r11.u32 + ctx.r10.u32 < ctx.r11.u32);
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 & ctx.r9.u64;
	// b 0x82a1ac60
	goto loc_82A1AC60;
loc_82A1AC5C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82A1AC60:
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// xoris r10,r11,32768
	ctx.r10.u64 = ctx.r11.u64 ^ 2147483648;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addc r10,r7,r10
	ctx.xer.ca = (ctx.r7.u32 + ctx.r10.u32 < ctx.r7.u32);
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82a1aca4
	if (!ctx.cr6.lt) goto loc_82A1ACA4;
	// li r11,0
	ctx.r11.s64 = 0;
	// xoris r10,r11,32768
	ctx.r10.u64 = ctx.r11.u64 ^ 2147483648;
	// subf r11,r11,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r11.s64;
	// addc r11,r11,r10
	ctx.xer.ca = (ctx.r11.u32 + ctx.r10.u32 < ctx.r11.u32);
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
loc_82A1ACA4:
	// lwz r7,120(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// bgt cr6,0x82a1acbc
	if (ctx.cr6.gt) goto loc_82A1ACBC;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_82A1ACBC:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82a1acd8
	if (!ctx.cr6.lt) goto loc_82A1ACD8;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// bgt cr6,0x82a1acdc
	if (ctx.cr6.gt) goto loc_82A1ACDC;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// b 0x82a1acdc
	goto loc_82A1ACDC;
loc_82A1ACD8:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_82A1ACDC:
	// lwz r7,124(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// stw r9,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r9.u32);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bgt cr6,0x82a1acf4
	if (ctx.cr6.gt) goto loc_82A1ACF4;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_82A1ACF4:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82a1ad10
	if (!ctx.cr6.lt) goto loc_82A1AD10;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// bgt cr6,0x82a1ad10
	if (ctx.cr6.gt) goto loc_82A1AD10;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82A1AD10:
	// stw r11,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r11.u32);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a196f0
	ctx.lr = 0x82A1AD30;
	sub_82A196F0(ctx, base);
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// xori r31,r11,1
	ctx.r31.u64 = ctx.r11.u64 ^ 1;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82a1ad60
	if (ctx.cr6.eq) goto loc_82A1AD60;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// ori r10,r10,63156
	ctx.r10.u64 = ctx.r10.u64 | 63156;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a81d88
	ctx.lr = 0x82A1AD60;
	sub_82A81D88(ctx, base);
loc_82A1AD60:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A1AD64:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1AD6C"))) PPC_WEAK_FUNC(sub_82A1AD6C);
PPC_FUNC_IMPL(__imp__sub_82A1AD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1AD70"))) PPC_WEAK_FUNC(sub_82A1AD70);
PPC_FUNC_IMPL(__imp__sub_82A1AD70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x82A1AD78;
	__savegprlr_21(ctx, base);
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-752(r1)
	ea = -752 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,20(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r21,r10
	ctx.r21.u64 = ctx.r10.u64;
	// bl 0x82af2cc8
	ctx.lr = 0x82A1ADB0;
	sub_82AF2CC8(ctx, base);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82af2cc8
	ctx.lr = 0x82A1ADC0;
	sub_82AF2CC8(ctx, base);
	// addi r24,r31,32
	ctx.r24.s64 = ctx.r31.s64 + 32;
	// addi r25,r29,28
	ctx.r25.s64 = ctx.r29.s64 + 28;
	// addi r31,r1,404
	ctx.r31.s64 = ctx.r1.s64 + 404;
	// addi r30,r1,240
	ctx.r30.s64 = ctx.r1.s64 + 240;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// li r28,20
	ctx.r28.s64 = 20;
loc_82A1ADD8:
	// addi r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 4;
	// lvx128 v1,r0,r27
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r27.u32) & ~0xF), VectorMaskL));
	// addi r3,r31,-4
	ctx.r3.s64 = ctx.r31.s64 + -4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8227b978
	ctx.lr = 0x82A1ADEC;
	sub_8227B978(ctx, base);
	// addi r9,r30,4
	ctx.r9.s64 = ctx.r30.s64 + 4;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lhz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r5,-4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x82a0c298
	ctx.lr = 0x82A1AE0C;
	sub_82A0C298(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// bne 0x82a1add8
	if (!ctx.cr0.eq) goto loc_82A1ADD8;
	// lis r31,-31963
	ctx.r31.s64 = -2094727168;
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// addis r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 589824;
	// addi r11,r11,-2684
	ctx.r11.s64 = ctx.r11.s64 + -2684;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82a78340
	ctx.lr = 0x82A1AE38;
	sub_82A78340(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82a19438
	ctx.lr = 0x82A1AE50;
	sub_82A19438(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a1ae6c
	if (!ctx.cr0.eq) goto loc_82A1AE6C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0d160
	ctx.lr = 0x82A1AE60;
	sub_82A0D160(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82a1aeec
	goto loc_82A1AEEC;
loc_82A1AE6C:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r26,16
	ctx.r6.s64 = ctx.r26.s64 + 16;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82a196f0
	ctx.lr = 0x82A1AE88;
	sub_82A196F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0d160
	ctx.lr = 0x82A1AE90;
	sub_82A0D160(ctx, base);
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// addis r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 589824;
	// addi r11,r11,-2668
	ctx.r11.s64 = ctx.r11.s64 + -2668;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82a78340
	ctx.lr = 0x82A1AEA4;
	sub_82A78340(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r10,r26,716
	ctx.r10.s64 = ctx.r26.s64 + 716;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82a1ab00
	ctx.lr = 0x82A1AECC;
	sub_82A1AB00(ctx, base);
	// stb r3,1416(r26)
	PPC_STORE_U8(ctx.r26.u32 + 1416, ctx.r3.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0d160
	ctx.lr = 0x82A1AED8;
	sub_82A0D160(ctx, base);
	// li r11,32
	ctx.r11.s64 = 32;
	// li r3,0
	ctx.r3.s64 = 0;
	// lvx128 v63,r24,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r24.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// stfs f31,1420(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r26.u32 + 1420, temp.u32);
	// stvx128 v63,r0,r26
	_mm_store_si128((__m128i*)(base + ((ctx.r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82A1AEEC:
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1AEF8"))) PPC_WEAK_FUNC(sub_82A1AEF8);
PPC_FUNC_IMPL(__imp__sub_82A1AEF8) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r3,20
	ctx.r30.s64 = ctx.r3.s64 + 20;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r31,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r31.u32);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// stb r31,52(r11)
	PPC_STORE_U8(ctx.r11.u32 + 52, ctx.r31.u8);
	// bl 0x831791c4
	ctx.lr = 0x82A1AF3C;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// std r31,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r31.u64);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x83178e04
	ctx.lr = 0x82A1AF64;
	__imp__XamXlfsInitializeUploadQueue(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a1af78
	if (ctx.cr0.lt) goto loc_82A1AF78;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82a1af7c
	if (!ctx.cr6.eq) goto loc_82A1AF7C;
loc_82A1AF78:
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
loc_82A1AF7C:
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

__attribute__((alias("__imp__sub_82A1AF94"))) PPC_WEAK_FUNC(sub_82A1AF94);
PPC_FUNC_IMPL(__imp__sub_82A1AF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1AF98"))) PPC_WEAK_FUNC(sub_82A1AF98);
PPC_FUNC_IMPL(__imp__sub_82A1AF98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A1AFA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a1afd4
	if (ctx.cr6.eq) goto loc_82A1AFD4;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r29,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r29.u64);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x83178e14
	ctx.lr = 0x82A1AFD0;
	__imp__XamXlfsUninitializeUploadQueue(ctx, base);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
loc_82A1AFD4:
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r11,8
	ctx.r11.s64 = 524288;
	// lis r28,-31963
	ctx.r28.s64 = -2094727168;
	// ori r30,r11,63156
	ctx.r30.u64 = ctx.r11.u64 | 63156;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82a1b000
	if (ctx.cr6.eq) goto loc_82A1B000;
	// lwz r11,24028(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24028);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x82a81d88
	ctx.lr = 0x82A1AFFC;
	sub_82A81D88(ctx, base);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
loc_82A1B000:
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82a1b020
	if (ctx.cr6.eq) goto loc_82A1B020;
	// lwz r11,24028(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24028);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x82a81d88
	ctx.lr = 0x82A1B01C;
	sub_82A81D88(ctx, base);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
loc_82A1B020:
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1B034"))) PPC_WEAK_FUNC(sub_82A1B034);
PPC_FUNC_IMPL(__imp__sub_82A1B034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1B038"))) PPC_WEAK_FUNC(sub_82A1B038);
PPC_FUNC_IMPL(__imp__sub_82A1B038) {
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
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a1b070
	if (ctx.cr6.eq) goto loc_82A1B070;
	// addis r31,r11,9
	ctx.r31.s64 = ctx.r11.s64 + 589824;
	// addi r31,r31,-248
	ctx.r31.s64 = ctx.r31.s64 + -248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A1B068;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A1B070;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82A1B070:
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

__attribute__((alias("__imp__sub_82A1B084"))) PPC_WEAK_FUNC(sub_82A1B084);
PPC_FUNC_IMPL(__imp__sub_82A1B084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1B088"))) PPC_WEAK_FUNC(sub_82A1B088);
PPC_FUNC_IMPL(__imp__sub_82A1B088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A1B090;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a1b160
	if (!ctx.cr6.eq) goto loc_82A1B160;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a1b160
	if (!ctx.cr6.eq) goto loc_82A1B160;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,40088
	ctx.r11.u64 = ctx.r11.u64 | 40088;
	// lwzx r11,r4,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a1b0d0
	if (!ctx.cr6.eq) goto loc_82A1B0D0;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82a1b0d8
	goto loc_82A1B0D8;
loc_82A1B0D0:
	// mulli r11,r11,2004
	ctx.r11.s64 = ctx.r11.s64 * 2004;
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
loc_82A1B0D8:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r5,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r5.u32);
	// bne cr6,0x82a1b0f0
	if (!ctx.cr6.eq) goto loc_82A1B0F0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,232
	ctx.r3.u64 = ctx.r3.u64 | 232;
	// b 0x82a1b168
	goto loc_82A1B168;
loc_82A1B0F0:
	// lis r29,-31963
	ctx.r29.s64 = -2094727168;
	// lis r11,8
	ctx.r11.s64 = 524288;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r31,r11,63156
	ctx.r31.u64 = ctx.r11.u64 | 63156;
	// lwz r11,24028(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24028);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82a81490
	ctx.lr = 0x82A1B10C;
	sub_82A81490(ctx, base);
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82a1b124
	if (!ctx.cr0.eq) goto loc_82A1B124;
loc_82A1B118:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82a1b168
	goto loc_82A1B168;
loc_82A1B124:
	// lwz r11,24028(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24028);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82a81490
	ctx.lr = 0x82A1B138;
	sub_82A81490(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a1b118
	if (ctx.cr0.eq) goto loc_82A1B118;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// bl 0x82a17290
	ctx.lr = 0x82A1B15C;
	sub_82A17290(ctx, base);
	// b 0x82a1b168
	goto loc_82A1B168;
loc_82A1B160:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
loc_82A1B168:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1B170"))) PPC_WEAK_FUNC(sub_82A1B170);
PPC_FUNC_IMPL(__imp__sub_82A1B170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82A1B178;
	__savegprlr_25(ctx, base);
	// stwu r1,-848(r1)
	ea = -848 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a1b544
	if (ctx.cr6.eq) goto loc_82A1B544;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82a1b1a4
	if (!ctx.cr0.eq) goto loc_82A1B1A4;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// b 0x82a1b54c
	goto loc_82A1B54C;
loc_82A1B1A4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a1b544
	if (ctx.cr6.eq) goto loc_82A1B544;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a1b544
	if (ctx.cr6.eq) goto loc_82A1B544;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r5,259
	ctx.r5.s64 = 259;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r28,512(r1)
	PPC_STORE_U8(ctx.r1.u32 + 512, ctx.r28.u8);
	// addi r3,r1,513
	ctx.r3.s64 = ctx.r1.s64 + 513;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A1B1D4;
	sub_82FA7CF0(ctx, base);
	// li r5,259
	ctx.r5.s64 = 259;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r28,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r28.u8);
	// addi r3,r1,241
	ctx.r3.s64 = ctx.r1.s64 + 241;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A1B1E8;
	sub_82FA7CF0(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r9,260
	ctx.r9.s64 = 260;
	// li r5,14
	ctx.r5.s64 = 14;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r28,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, ctx.r28.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// addi r11,r11,4099
	ctx.r11.s64 = ctx.r11.s64 + 4099;
	// addi r3,r1,130
	ctx.r3.s64 = ctx.r1.s64 + 130;
	// addi r26,r31,4
	ctx.r26.s64 = ctx.r31.s64 + 4;
	// rlwinm r27,r11,20,12,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFFFF;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A1B220;
	sub_82FA7CF0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82a82968
	ctx.lr = 0x82A1B228;
	sub_82A82968(ctx, base);
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// ori r30,r30,1317
	ctx.r30.u64 = ctx.r30.u64 | 1317;
loc_82A1B234:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a74bb0
	ctx.lr = 0x82A1B23C;
	sub_82A74BB0(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82a1b254
	if (ctx.cr6.eq) goto loc_82A1B254;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// blt cr6,0x82a1b234
	if (ctx.cr6.lt) goto loc_82A1B234;
	// b 0x82a1b2e0
	goto loc_82A1B2E0;
loc_82A1B254:
	// li r11,9
	ctx.r11.s64 = 9;
	// addi r10,r1,152
	ctx.r10.s64 = ctx.r1.s64 + 152;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82A1B264:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x82a1b264
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A1B264;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// stw r27,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r27.u32);
	// li r9,72
	ctx.r9.s64 = 72;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,-12248
	ctx.r11.s64 = ctx.r11.s64 + -12248;
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r9,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32094
	ctx.r10.s64 = -2103312384;
	// stw r8,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r8.u32);
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// li r9,24
	ctx.r9.s64 = 24;
	// li r8,620
	ctx.r8.s64 = 620;
	// addi r11,r10,-20424
	ctx.r11.s64 = ctx.r10.s64 + -20424;
	// stw r9,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r9.u32);
	// stw r8,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r8.u32);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// bl 0x83178e34
	ctx.lr = 0x82A1B2C4;
	__imp__XamXlfsMountUploadQueueInstance(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82a1b2e0
	if (ctx.cr0.lt) goto loc_82A1B2E0;
	// lbz r11,240(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 240);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82a1b2e0
	if (!ctx.cr0.eq) goto loc_82A1B2E0;
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// ori r30,r30,16389
	ctx.r30.u64 = ctx.r30.u64 | 16389;
loc_82A1B2E0:
	// addi r25,r31,24
	ctx.r25.s64 = ctx.r31.s64 + 24;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A1B2EC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82a1b4a0
	if (ctx.cr6.lt) goto loc_82A1B4A0;
	// lbz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 52);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// stb r29,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r29.u8);
	// bl 0x83178db4
	ctx.lr = 0x82A1B308;
	__imp__XamNuiIdentityGetSessionId(ctx, base);
	// lhz r4,138(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 138);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lhz r7,134(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 134);
	// lhz r6,130(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 130);
	// lhz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 140);
	// addi r5,r9,-24004
	ctx.r5.s64 = ctx.r9.s64 + -24004;
	// lhz r27,128(r1)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r1.u32 + 128);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// std r3,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r3.u64);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// lhz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 136);
	// li r4,260
	ctx.r4.s64 = 260;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x83179324
	ctx.lr = 0x82A1B354;
	__imp___snprintf(ctx, base);
	// stb r28,771(r1)
	PPC_STORE_U8(ctx.r1.u32 + 771, ctx.r28.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,128
	ctx.r8.s64 = 128;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r4,16384
	ctx.r4.s64 = 1073741824;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x82a82d10
	ctx.lr = 0x82A1B378;
	sub_82A82D10(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r27,r11,r3
	ctx.r27.u64 = ctx.r11.u64 & ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82a1b3c4
	if (!ctx.cr6.eq) goto loc_82A1B3C4;
	// bl 0x82a78478
	ctx.lr = 0x82A1B39C;
	sub_82A78478(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt 0x82a1b3ac
	if (ctx.cr0.gt) goto loc_82A1B3AC;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82a1b3b4
	goto loc_82A1B3B4;
loc_82A1B3AC:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// or r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 | ctx.r29.u64;
loc_82A1B3B4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82a1b4a0
	if (ctx.cr6.lt) goto loc_82A1B4A0;
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// ori r30,r30,16389
	ctx.r30.u64 = ctx.r30.u64 | 16389;
loc_82A1B3C4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82a1b4a0
	if (ctx.cr6.lt) goto loc_82A1B4A0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a82f08
	ctx.lr = 0x82A1B3E4;
	sub_82A82F08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82a1b408
	if (!ctx.cr0.eq) goto loc_82A1B408;
	// bl 0x82a78478
	ctx.lr = 0x82A1B3F0;
	sub_82A78478(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt 0x82a1b400
	if (ctx.cr0.gt) goto loc_82A1B400;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82a1b408
	goto loc_82A1B408;
loc_82A1B400:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// or r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 | ctx.r29.u64;
loc_82A1B408:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82a1b4a0
	if (ctx.cr6.lt) goto loc_82A1B4A0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,0(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a82f08
	ctx.lr = 0x82A1B428;
	sub_82A82F08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82a1b44c
	if (!ctx.cr0.eq) goto loc_82A1B44C;
	// bl 0x82a78478
	ctx.lr = 0x82A1B434;
	sub_82A78478(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt 0x82a1b444
	if (ctx.cr0.gt) goto loc_82A1B444;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82a1b44c
	goto loc_82A1B44C;
loc_82A1B444:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// or r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 | ctx.r29.u64;
loc_82A1B44C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82a1b4a0
	if (ctx.cr6.lt) goto loc_82A1B4A0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a82f08
	ctx.lr = 0x82A1B46C;
	sub_82A82F08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82a1b490
	if (!ctx.cr0.eq) goto loc_82A1B490;
	// bl 0x82a78478
	ctx.lr = 0x82A1B478;
	sub_82A78478(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt 0x82a1b488
	if (ctx.cr0.gt) goto loc_82A1B488;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82a1b490
	goto loc_82A1B490;
loc_82A1B488:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// or r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 | ctx.r29.u64;
loc_82A1B490:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82a1b4a0
	if (ctx.cr6.lt) goto loc_82A1B4A0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a756a0
	ctx.lr = 0x82A1B4A0;
	sub_82A756A0(ctx, base);
loc_82A1B4A0:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A1B4A8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lbz r11,240(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 240);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82a1b4f4
	if (ctx.cr0.eq) goto loc_82A1B4F4;
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// li r10,8
	ctx.r10.s64 = 8;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// std r28,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r28.u64);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// blt cr6,0x82a1b4d8
	if (ctx.cr6.lt) goto loc_82A1B4D8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// b 0x82a1b4dc
	goto loc_82A1B4DC;
loc_82A1B4D8:
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
loc_82A1B4DC:
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x83178e24
	ctx.lr = 0x82A1B4F0;
	__imp__XamXlfsUnmountUploadQueueInstance(ctx, base);
	// stb r28,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r28.u8);
loc_82A1B4F4:
	// lis r27,-31963
	ctx.r27.s64 = -2094727168;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r11,8
	ctx.r11.s64 = 524288;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r29,r11,63156
	ctx.r29.u64 = ctx.r11.u64 | 63156;
	// lwz r11,24028(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24028);
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x82a81d88
	ctx.lr = 0x82A1B514;
	sub_82A81D88(ctx, base);
	// lwz r11,24028(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24028);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x82a81d88
	ctx.lr = 0x82A1B528;
	sub_82A81D88(ctx, base);
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// stw r28,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r28.u32);
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// b 0x82a1b54c
	goto loc_82A1B54C;
loc_82A1B544:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
loc_82A1B54C:
	// addi r1,r1,848
	ctx.r1.s64 = ctx.r1.s64 + 848;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1B554"))) PPC_WEAK_FUNC(sub_82A1B554);
PPC_FUNC_IMPL(__imp__sub_82A1B554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1B558"))) PPC_WEAK_FUNC(sub_82A1B558);
PPC_FUNC_IMPL(__imp__sub_82A1B558) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// addi r9,r3,80
	ctx.r9.s64 = ctx.r3.s64 + 80;
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// addi r8,r3,76
	ctx.r8.s64 = ctx.r3.s64 + 76;
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r7,r3,72
	ctx.r7.s64 = ctx.r3.s64 + 72;
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// addi r6,r3,68
	ctx.r6.s64 = ctx.r3.s64 + 68;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r5,r3,64
	ctx.r5.s64 = ctx.r3.s64 + 64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r4,r3,60
	ctx.r4.s64 = ctx.r3.s64 + 60;
	// ld r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// lwz r11,36(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// bl 0x82a09038
	ctx.lr = 0x82A1B5FC;
	sub_82A09038(ctx, base);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x82a1b630
	if (ctx.cr6.gt) goto loc_82A1B630;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r11,24032(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24032);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a1b630
	if (ctx.cr6.eq) goto loc_82A1B630;
	// addi r7,r31,92
	ctx.r7.s64 = ctx.r31.s64 + 92;
	// addi r6,r31,88
	ctx.r6.s64 = ctx.r31.s64 + 88;
	// addi r5,r31,84
	ctx.r5.s64 = ctx.r31.s64 + 84;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82a09088
	ctx.lr = 0x82A1B630;
	sub_82A09088(ctx, base);
loc_82A1B630:
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

__attribute__((alias("__imp__sub_82A1B648"))) PPC_WEAK_FUNC(sub_82A1B648);
PPC_FUNC_IMPL(__imp__sub_82A1B648) {
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
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r3,5378
	ctx.r3.s64 = 5378;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// bl 0x83178d24
	ctx.lr = 0x82A1B66C;
	__imp__XamXStudioRequest(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1B67C"))) PPC_WEAK_FUNC(sub_82A1B67C);
PPC_FUNC_IMPL(__imp__sub_82A1B67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1B680"))) PPC_WEAK_FUNC(sub_82A1B680);
PPC_FUNC_IMPL(__imp__sub_82A1B680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A1B688;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,44
	ctx.r5.s64 = 44;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A1B6B0;
	sub_82FA7CF0(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// li r10,24
	ctx.r10.s64 = 24;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// li r3,593
	ctx.r3.s64 = 593;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// bl 0x83178d24
	ctx.lr = 0x82A1B6D8;
	__imp__XamXStudioRequest(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1B6E0"))) PPC_WEAK_FUNC(sub_82A1B6E0);
PPC_FUNC_IMPL(__imp__sub_82A1B6E0) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// b 0x83178d24
	__imp__XamXStudioRequest(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1B6EC"))) PPC_WEAK_FUNC(sub_82A1B6EC);
PPC_FUNC_IMPL(__imp__sub_82A1B6EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1B6F0"))) PPC_WEAK_FUNC(sub_82A1B6F0);
PPC_FUNC_IMPL(__imp__sub_82A1B6F0) {
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
	ctx.lr = 0x82A1B70C;
	sub_82A0C9B8(ctx, base);
	// lis r31,-31963
	ctx.r31.s64 = -2094727168;
	// lwz r30,24028(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// bl 0x82a74720
	ctx.lr = 0x82A1B718;
	sub_82A74720(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r11,24036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24036);
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
	// beq cr6,0x82a1b74c
	if (ctx.cr6.eq) goto loc_82A1B74C;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r10,r10,19102
	ctx.r10.u64 = ctx.r10.u64 | 19102;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82a1b764
	if (!ctx.cr0.eq) goto loc_82A1B764;
loc_82A1B74C:
	// lis r10,8
	ctx.r10.s64 = 524288;
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// ori r10,r10,63204
	ctx.r10.u64 = ctx.r10.u64 | 63204;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a1b78c
	if (ctx.cr6.eq) goto loc_82A1B78C;
loc_82A1B764:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82A1B768:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0ca30
	ctx.lr = 0x82A1B770;
	sub_82A0CA30(ctx, base);
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
loc_82A1B78C:
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x82a1b768
	goto loc_82A1B768;
}

__attribute__((alias("__imp__sub_82A1B794"))) PPC_WEAK_FUNC(sub_82A1B794);
PPC_FUNC_IMPL(__imp__sub_82A1B794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1B798"))) PPC_WEAK_FUNC(sub_82A1B798);
PPC_FUNC_IMPL(__imp__sub_82A1B798) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A1B7A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r11,r11,29312
	ctx.r11.s64 = ctx.r11.s64 + 29312;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,10632(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10632);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a1b904
	if (ctx.cr6.eq) goto loc_82A1B904;
	// lis r30,-31963
	ctx.r30.s64 = -2094727168;
	// lwz r11,24028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24028);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a1b904
	if (ctx.cr6.eq) goto loc_82A1B904;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// beq cr6,0x82a1b7f4
	if (ctx.cr6.eq) goto loc_82A1B7F4;
	// cmplwi cr6,r4,512
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 512, ctx.xer);
	// bne cr6,0x82a1b800
	if (!ctx.cr6.eq) goto loc_82A1B800;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x82a1b800
	if (!ctx.cr6.eq) goto loc_82A1B800;
	// b 0x82a1b7f4
	goto loc_82A1B7F4;
loc_82A1B7EC:
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82a77720
	ctx.lr = 0x82A1B7F4;
	sub_82A77720(ctx, base);
loc_82A1B7F4:
	// bl 0x82a1b6f0
	ctx.lr = 0x82A1B7F8;
	sub_82A1B6F0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a1b7ec
	if (ctx.cr0.eq) goto loc_82A1B7EC;
loc_82A1B800:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0c9b8
	ctx.lr = 0x82A1B808;
	sub_82A0C9B8(ctx, base);
	// lwz r31,24028(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24028);
	// bl 0x82a74720
	ctx.lr = 0x82A1B810;
	sub_82A74720(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r11,24036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24036);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 & ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a1b8fc
	if (ctx.cr6.eq) goto loc_82A1B8FC;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// beq cr6,0x82a1b8b8
	if (ctx.cr6.eq) goto loc_82A1B8B8;
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 2, ctx.xer);
	// beq cr6,0x82a1b87c
	if (ctx.cr6.eq) goto loc_82A1B87C;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// beq cr6,0x82a1b860
	if (ctx.cr6.eq) goto loc_82A1B860;
	// cmplwi cr6,r29,8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 8, ctx.xer);
	// bne cr6,0x82a1b8fc
	if (!ctx.cr6.eq) goto loc_82A1B8FC;
	// rlwinm. r11,r28,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a1b8fc
	if (ctx.cr0.eq) goto loc_82A1B8FC;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82a1b86c
	goto loc_82A1B86C;
loc_82A1B860:
	// rlwinm. r11,r28,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a1b8fc
	if (ctx.cr0.eq) goto loc_82A1B8FC;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82A1B86C:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,19112
	ctx.r11.u64 = ctx.r11.u64 | 19112;
	// stwx r10,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
	// b 0x82a1b8fc
	goto loc_82A1B8FC;
loc_82A1B87C:
	// addis r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 131072;
	// addi r11,r11,19116
	ctx.r11.s64 = ctx.r11.s64 + 19116;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// andc. r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bne 0x82a1b8a4
	if (!ctx.cr0.eq) goto loc_82A1B8A4;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,19112
	ctx.r11.u64 = ctx.r11.u64 | 19112;
	// stwx r10,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
loc_82A1B8A4:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a0e918
	ctx.lr = 0x82A1B8B4;
	sub_82A0E918(ctx, base);
	// b 0x82a1b8fc
	goto loc_82A1B8FC;
loc_82A1B8B8:
	// rlwinm. r11,r28,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a1b8e8
	if (ctx.cr0.eq) goto loc_82A1B8E8;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r10,2
	ctx.r10.s64 = 2;
	// ori r11,r11,19112
	ctx.r11.u64 = ctx.r11.u64 | 19112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// stwx r10,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
	// lwz r11,24028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24028);
	// addis r3,r11,9
	ctx.r3.s64 = ctx.r11.s64 + 589824;
	// addi r3,r3,-2428
	ctx.r3.s64 = ctx.r3.s64 + -2428;
	// bl 0x831792b4
	ctx.lr = 0x82A1B8E8;
	__imp__KeSetEvent(ctx, base);
loc_82A1B8E8:
	// addis r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 131072;
	// addi r11,r11,19116
	ctx.r11.s64 = ctx.r11.s64 + 19116;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// or r10,r28,r10
	ctx.r10.u64 = ctx.r28.u64 | ctx.r10.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82A1B8FC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0ca30
	ctx.lr = 0x82A1B904;
	sub_82A0CA30(ctx, base);
loc_82A1B904:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1B90C"))) PPC_WEAK_FUNC(sub_82A1B90C);
PPC_FUNC_IMPL(__imp__sub_82A1B90C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1B910"))) PPC_WEAK_FUNC(sub_82A1B910);
PPC_FUNC_IMPL(__imp__sub_82A1B910) {
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
	// lis r11,-32094
	ctx.r11.s64 = -2103312384;
	// li r10,81
	ctx.r10.s64 = 81;
	// li r9,527
	ctx.r9.s64 = 527;
	// addi r11,r11,-18536
	ctx.r11.s64 = ctx.r11.s64 + -18536;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x83178d24
	ctx.lr = 0x82A1B944;
	__imp__XamXStudioRequest(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1B954"))) PPC_WEAK_FUNC(sub_82A1B954);
PPC_FUNC_IMPL(__imp__sub_82A1B954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1B958"))) PPC_WEAK_FUNC(sub_82A1B958);
PPC_FUNC_IMPL(__imp__sub_82A1B958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32094
	ctx.r11.s64 = -2103312384;
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r4,r11,-18536
	ctx.r4.s64 = ctx.r11.s64 + -18536;
	// b 0x83178d24
	__imp__XamXStudioRequest(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1B968"))) PPC_WEAK_FUNC(sub_82A1B968);
PPC_FUNC_IMPL(__imp__sub_82A1B968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82A1B970;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,10
	ctx.r11.s64 = 10;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r10,r7,-8
	ctx.r10.s64 = ctx.r7.s64 + -8;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82A1B998:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x82a1b998
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A1B998;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a1b9bc
	if (ctx.cr6.eq) goto loc_82A1B9BC;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// b 0x82a1b9cc
	goto loc_82A1B9CC;
loc_82A1B9BC:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82a1b9cc
	if (ctx.cr6.eq) goto loc_82A1B9CC;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_82A1B9CC:
	// lwz r11,36(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	// li r10,256
	ctx.r10.s64 = 256;
	// li r9,32
	ctx.r9.s64 = 32;
	// mulli r11,r11,352
	ctx.r11.s64 = ctx.r11.s64 * 352;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// li r5,28
	ctx.r5.s64 = 28;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lvx128 v63,r11,r10
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r31,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82a75220
	ctx.lr = 0x82A1B9F8;
	sub_82A75220(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a1bab4
	if (!ctx.cr6.eq) goto loc_82A1BAB4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a1bab4
	if (ctx.cr6.eq) goto loc_82A1BAB4;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r28,r31,80
	ctx.r28.s64 = ctx.r31.s64 + 80;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r27,r10,-80
	ctx.r27.s64 = ctx.r10.s64 + -80;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82a1ba2c
	if (ctx.cr6.eq) goto loc_82A1BA2C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82a1bab4
	if (!ctx.cr6.eq) goto loc_82A1BAB4;
loc_82A1BA2C:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// ori r11,r11,8112
	ctx.r11.u64 = ctx.r11.u64 | 8112;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r30,r11,2704
	ctx.r30.s64 = ctx.r11.s64 + 2704;
	// addis r26,r30,1
	ctx.r26.s64 = ctx.r30.s64 + 65536;
	// addi r26,r26,-32128
	ctx.r26.s64 = ctx.r26.s64 + -32128;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a166d0
	ctx.lr = 0x82A1BA54;
	sub_82A166D0(ctx, base);
	// stw r3,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// addi r29,r30,4896
	ctx.r29.s64 = ctx.r30.s64 + 4896;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a18f28
	ctx.lr = 0x82A1BA64;
	sub_82A18F28(ctx, base);
	// stw r3,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a183e8
	ctx.lr = 0x82A1BA70;
	sub_82A183E8(ctx, base);
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a17378
	ctx.lr = 0x82A1BA84;
	sub_82A17378(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
	// subf r28,r11,r27
	ctx.r28.s64 = ctx.r27.s64 - ctx.r11.s64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82a19540
	ctx.lr = 0x82A1BAA0;
	sub_82A19540(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// subf r5,r11,r28
	ctx.r5.s64 = ctx.r28.s64 - ctx.r11.s64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82a18ba8
	ctx.lr = 0x82A1BAB4;
	sub_82A18BA8(ctx, base);
loc_82A1BAB4:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1BAD8"))) PPC_WEAK_FUNC(sub_82A1BAD8);
PPC_FUNC_IMPL(__imp__sub_82A1BAD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A1BAE0;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,44
	ctx.r5.s64 = 44;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A1BB08;
	sub_82FA7CF0(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// li r10,33
	ctx.r10.s64 = 33;
	// stw r29,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r29.u32);
	// li r9,24
	ctx.r9.s64 = 24;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lis r29,-31963
	ctx.r29.s64 = -2094727168;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// lis r28,-31963
	ctx.r28.s64 = -2094727168;
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
loc_82A1BB34:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,594
	ctx.r3.s64 = 594;
	// bl 0x83178d24
	ctx.lr = 0x82A1BB40;
	__imp__XamXStudioRequest(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0c9b8
	ctx.lr = 0x82A1BB4C;
	sub_82A0C9B8(ctx, base);
	// lwz r31,24028(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24028);
	// bl 0x82a74720
	ctx.lr = 0x82A1BB54;
	sub_82A74720(ctx, base);
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
	// and r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 & ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a1bbb0
	if (ctx.cr6.eq) goto loc_82A1BBB0;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r10,r10,19108
	ctx.r10.u64 = ctx.r10.u64 | 19108;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a1bb8c
	if (ctx.cr6.eq) goto loc_82A1BB8C;
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// ori r30,r30,16388
	ctx.r30.u64 = ctx.r30.u64 | 16388;
loc_82A1BB8C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0ca30
	ctx.lr = 0x82A1BB94;
	sub_82A0CA30(ctx, base);
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,1460
	ctx.r11.u64 = ctx.r11.u64 | 1460;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82a1bb34
	if (ctx.cr6.eq) goto loc_82A1BB34;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82A1BBA8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_82A1BBB0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0ca30
	ctx.lr = 0x82A1BBB8;
	sub_82A0CA30(ctx, base);
	// lis r3,-31999
	ctx.r3.s64 = -2097086464;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// b 0x82a1bba8
	goto loc_82A1BBA8;
}

__attribute__((alias("__imp__sub_82A1BBC4"))) PPC_WEAK_FUNC(sub_82A1BBC4);
PPC_FUNC_IMPL(__imp__sub_82A1BBC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1BBC8"))) PPC_WEAK_FUNC(sub_82A1BBC8);
PPC_FUNC_IMPL(__imp__sub_82A1BBC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82A1BBD0;
	__savegprlr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r5,22
	ctx.r5.s64 = 22;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r29,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r29.u16);
	// addi r3,r1,98
	ctx.r3.s64 = ctx.r1.s64 + 98;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A1BBFC;
	sub_82FA7CF0(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// ori r4,r11,8192
	ctx.r4.u64 = ctx.r11.u64 | 8192;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// bl 0x82a0d110
	ctx.lr = 0x82A1BC14;
	sub_82A0D110(ctx, base);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a1bca4
	if (ctx.cr6.eq) goto loc_82A1BCA4;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r25,1
	ctx.r25.s64 = 1;
	// lwz r24,8(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r23,12(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// std r29,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r29.u64);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// std r29,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r29.u64);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// std r29,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r29.u64);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// sth r25,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r25.u16);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r24,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
	// bl 0x82a1b968
	ctx.lr = 0x82A1BC74;
	sub_82A1B968(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a1b680
	ctx.lr = 0x82A1BC84;
	sub_82A1B680(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ori r10,r10,63156
	ctx.r10.u64 = ctx.r10.u64 | 63156;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a81d88
	ctx.lr = 0x82A1BCA4;
	sub_82A81D88(ctx, base);
loc_82A1BCA4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1BCAC"))) PPC_WEAK_FUNC(sub_82A1BCAC);
PPC_FUNC_IMPL(__imp__sub_82A1BCAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1BCB0"))) PPC_WEAK_FUNC(sub_82A1BCB0);
PPC_FUNC_IMPL(__imp__sub_82A1BCB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r10,6
	ctx.r10.s64 = 6;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// lfs f0,23856(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 23856);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82A1BCCC:
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82a1bd38
	if (!ctx.cr6.eq) goto loc_82A1BD38;
	// li r10,32
	ctx.r10.s64 = 32;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vspltisw128 v62,1
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_set1_epi32(int(0x1)));
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// vspltisw128 v61,0
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_set1_epi32(int(0x0)));
	// lvx128 v60,r4,r10
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vcsxwfp128 v10,v62,1
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v62.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3F000000)))));
	// vsubfp128 v63,v63,v60
	_mm_store_ps(ctx.v63.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v60.f32)));
	// vmsum3fp128 v63,v63,v63
	_mm_store_ps(ctx.v63.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v63.f32), 0xEF));
	// vrsqrtefp128 v0,v63
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v63.f32))));
	// vor128 v13,v63,v63
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// vmulfp128 v12,v63,v10
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v10.f32)));
	// vcmpeqfp128 v9,v63,v61
	_mm_store_ps(ctx.v9.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v61.f32)));
	// vmulfp128 v11,v0,v0
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v10,v12,v11,v10
	_mm_store_ps(ctx.v10.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v10.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v10,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v0,v63,v0
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v0.f32)));
	// vsel v12,v0,v13,v9
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// stvx128 v12,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82a1bd38
	if (!ctx.cr6.lt) goto loc_82A1BD38;
	// lwz r3,292(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82A1BD38:
	// addi r11,r11,352
	ctx.r11.s64 = ctx.r11.s64 + 352;
	// bdnz 0x82a1bccc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A1BCCC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,11504(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11504);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1BD58"))) PPC_WEAK_FUNC(sub_82A1BD58);
PPC_FUNC_IMPL(__imp__sub_82A1BD58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A1BD60;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,72(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lwz r10,68(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// addi r31,r4,64
	ctx.r31.s64 = ctx.r4.s64 + 64;
	// lwz r11,64(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// ori r8,r8,8192
	ctx.r8.u64 = ctx.r8.u64 | 8192;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r10,80
	ctx.r10.s64 = ctx.r10.s64 + 80;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82a1bda0
	if (!ctx.cr6.gt) goto loc_82A1BDA0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,13
	ctx.r3.u64 = ctx.r3.u64 | 13;
	// b 0x82a1be20
	goto loc_82A1BE20;
loc_82A1BDA0:
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82a1bdb4
	if (ctx.cr6.eq) goto loc_82A1BDB4;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82a1be20
	if (!ctx.cr6.eq) goto loc_82A1BE20;
loc_82A1BDB4:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r9,16(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// addi r30,r4,80
	ctx.r30.s64 = ctx.r4.s64 + 80;
	// ori r10,r10,8112
	ctx.r10.u64 = ctx.r10.u64 | 8112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// addi r29,r10,2704
	ctx.r29.s64 = ctx.r10.s64 + 2704;
	// addis r3,r29,1
	ctx.r3.s64 = ctx.r29.s64 + 65536;
	// addi r3,r3,-32128
	ctx.r3.s64 = ctx.r3.s64 + -32128;
	// bl 0x82a17418
	ctx.lr = 0x82A1BDE4;
	sub_82A17418(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// blt 0x82a1be20
	if (ctx.cr0.lt) goto loc_82A1BE20;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r29,4896
	ctx.r3.s64 = ctx.r29.s64 + 4896;
	// bl 0x82a195d0
	ctx.lr = 0x82A1BE04;
	sub_82A195D0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// blt 0x82a1be20
	if (ctx.cr0.lt) goto loc_82A1BE20;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82a18c88
	ctx.lr = 0x82A1BE20;
	sub_82A18C88(ctx, base);
loc_82A1BE20:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1BE28"))) PPC_WEAK_FUNC(sub_82A1BE28);
PPC_FUNC_IMPL(__imp__sub_82A1BE28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82A1BE30;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// bl 0x82a1bcb0
	ctx.lr = 0x82A1BE50;
	sub_82A1BCB0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82a1beac
	if (ctx.cr0.eq) goto loc_82A1BEAC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a0c188
	ctx.lr = 0x82A1BE60;
	sub_82A0C188(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82a1beac
	if (ctx.cr0.eq) goto loc_82A1BEAC;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82a1beac
	if (!ctx.cr6.eq) goto loc_82A1BEAC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a0e9a0
	ctx.lr = 0x82A1BE84;
	sub_82A0E9A0(ctx, base);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a1beb8
	if (!ctx.cr6.eq) goto loc_82A1BEB8;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a1bf00
	if (!ctx.cr6.eq) goto loc_82A1BF00;
loc_82A1BEAC:
	// lis r27,-32768
	ctx.r27.s64 = -2147483648;
	// ori r27,r27,16389
	ctx.r27.u64 = ctx.r27.u64 | 16389;
	// b 0x82a1bf00
	goto loc_82A1BF00;
loc_82A1BEB8:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a1bf00
	if (!ctx.cr6.eq) goto loc_82A1BF00;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x82a1bef4
	if (ctx.cr6.lt) goto loc_82A1BEF4;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a1bd58
	ctx.lr = 0x82A1BEE0;
	sub_82A1BD58(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x82a1bf00
	goto loc_82A1BF00;
loc_82A1BEF4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a11138
	ctx.lr = 0x82A1BF00;
	sub_82A11138(ctx, base);
loc_82A1BF00:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1BF0C"))) PPC_WEAK_FUNC(sub_82A1BF0C);
PPC_FUNC_IMPL(__imp__sub_82A1BF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1BF10"))) PPC_WEAK_FUNC(sub_82A1BF10);
PPC_FUNC_IMPL(__imp__sub_82A1BF10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82A1BF18;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,22
	ctx.r5.s64 = 22;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r11,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r11.u16);
	// addi r3,r1,98
	ctx.r3.s64 = ctx.r1.s64 + 98;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A1BF38;
	sub_82FA7CF0(ctx, base);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// ori r4,r4,8192
	ctx.r4.u64 = ctx.r4.u64 | 8192;
	// bl 0x82a0d110
	ctx.lr = 0x82A1BF48;
	sub_82A0D110(ctx, base);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82a1bf64
	if (!ctx.cr6.eq) goto loc_82A1BF64;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
loc_82A1BF5C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_82A1BF64:
	// lis r5,1
	ctx.r5.s64 = 65536;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// ori r5,r5,8192
	ctx.r5.u64 = ctx.r5.u64 | 8192;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a1bad8
	ctx.lr = 0x82A1BF78;
	sub_82A1BAD8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0c9b8
	ctx.lr = 0x82A1BF84;
	sub_82A0C9B8(ctx, base);
	// lis r28,-31963
	ctx.r28.s64 = -2094727168;
	// lwz r30,24028(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24028);
	// bl 0x82a74720
	ctx.lr = 0x82A1BF90;
	sub_82A74720(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r11,24036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24036);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 & ctx.r30.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a1bfe4
	if (!ctx.cr6.eq) goto loc_82A1BFE4;
	// lis r31,-31999
	ctx.r31.s64 = -2097086464;
	// ori r31,r31,5
	ctx.r31.u64 = ctx.r31.u64 | 5;
loc_82A1BFB8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0ca30
	ctx.lr = 0x82A1BFC0;
	sub_82A0CA30(ctx, base);
	// lis r10,8
	ctx.r10.s64 = 524288;
	// lwz r11,24028(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24028);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// ori r10,r10,63156
	ctx.r10.u64 = ctx.r10.u64 | 63156;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a81d88
	ctx.lr = 0x82A1BFDC;
	sub_82A81D88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82a1bf5c
	goto loc_82A1BF5C;
loc_82A1BFE4:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82a1c038
	if (ctx.cr6.lt) goto loc_82A1C038;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,19112
	ctx.r11.u64 = ctx.r11.u64 | 19112;
	// lwzx r11,r3,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82a1c008
	if (ctx.cr6.eq) goto loc_82A1C008;
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// ori r31,r31,16389
	ctx.r31.u64 = ctx.r31.u64 | 16389;
loc_82A1C008:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82a1c038
	if (ctx.cr6.lt) goto loc_82A1C038;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,19103
	ctx.r11.u64 = ctx.r11.u64 | 19103;
	// lbzx r11,r3,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82a1bfb8
	if (!ctx.cr0.eq) goto loc_82A1BFB8;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82a1be28
	ctx.lr = 0x82A1C034;
	sub_82A1BE28(ctx, base);
	// b 0x82a1c044
	goto loc_82A1C044;
loc_82A1C038:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82a0e918
	ctx.lr = 0x82A1C044;
	sub_82A0E918(ctx, base);
loc_82A1C044:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82a1bfb8
	goto loc_82A1BFB8;
}

__attribute__((alias("__imp__sub_82A1C04C"))) PPC_WEAK_FUNC(sub_82A1C04C);
PPC_FUNC_IMPL(__imp__sub_82A1C04C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1C050"))) PPC_WEAK_FUNC(sub_82A1C050);
PPC_FUNC_IMPL(__imp__sub_82A1C050) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r10,r10,18,14,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x3FFFF;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// ble cr6,0x82a1c068
	if (!ctx.cr6.gt) goto loc_82A1C068;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
loc_82A1C068:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r10,r5,14,0,17
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r5.u32, 14) & 0xFFFFC000) | (ctx.r10.u64 & 0xFFFFFFFF00003FFF);
	// rlwinm r9,r10,28,22,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x3FF;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x82a1c084
	if (!ctx.cr6.gt) goto loc_82A1C084;
	// rlwinm r6,r10,28,22,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x3FF;
loc_82A1C084:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwimi r10,r6,4,18,27
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r6.u32, 4) & 0x3FF0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFC00F);
	// rlwinm. r8,r9,0,0,14
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFE0000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bne 0x82a1c100
	if (!ctx.cr0.eq) goto loc_82A1C100;
	// lis r8,-31963
	ctx.r8.s64 = -2094727168;
	// lis r6,-31963
	ctx.r6.s64 = -2094727168;
	// lwz r10,31368(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31368);
	// clrlwi. r5,r10,31
	ctx.r5.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x82a1c0cc
	if (!ctx.cr0.eq) goto loc_82A1C0CC;
	// oris r5,r9,65534
	ctx.r5.u64 = ctx.r9.u64 | 4294836224;
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// li r10,32767
	ctx.r10.s64 = 32767;
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// stw r9,31368(r8)
	PPC_STORE_U32(ctx.r8.u32 + 31368, ctx.r9.u32);
	// stw r10,31364(r6)
	PPC_STORE_U32(ctx.r6.u32 + 31364, ctx.r10.u32);
	// b 0x82a1c0d0
	goto loc_82A1C0D0;
loc_82A1C0CC:
	// lwz r10,31364(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 31364);
loc_82A1C0D0:
	// lhz r9,14(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 14);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82a1c0e8
	if (!ctx.cr6.gt) goto loc_82A1C0E8;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_82A1C0E8:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwimi r10,r9,17,0,14
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 17) & 0xFFFE0000) | (ctx.r10.u64 & 0xFFFFFFFF0001FFFF);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lhz r10,14(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 14);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,14(r4)
	PPC_STORE_U16(ctx.r4.u32 + 14, ctx.r10.u16);
loc_82A1C100:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwimi r10,r7,8,15,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r7.u32, 8) & 0x1FF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFE00FF);
	// rlwinm r8,r8,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stb r9,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1C128"))) PPC_WEAK_FUNC(sub_82A1C128);
PPC_FUNC_IMPL(__imp__sub_82A1C128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82A1C130;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a1c150
	if (!ctx.cr6.eq) goto loc_82A1C150;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82a1c2a4
	goto loc_82A1C2A4;
loc_82A1C150:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// rlwinm r11,r10,18,14,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x3FFFF;
	// rlwinm r26,r10,29,21,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x7FE;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// rlwinm r23,r10,28,22,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x3FF;
	// rlwinm. r9,r9,0,0,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFE0000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// add r28,r26,r11
	ctx.r28.u64 = ctx.r26.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bne 0x82a1c1e4
	if (!ctx.cr0.eq) goto loc_82A1C1E4;
	// bl 0x82a1c050
	ctx.lr = 0x82A1C18C;
	sub_82A1C050(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a1c2a4
	if (ctx.cr0.lt) goto loc_82A1C2A4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r10,r11,29,21,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x7FE;
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r11,r11,18,14,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3FFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82a1c2a0
	if (!ctx.cr6.gt) goto loc_82A1C2A0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r9,r11,29,21,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x7FE;
	// rlwinm r11,r11,18,14,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3FFFF;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// b 0x82a1c2a4
	goto loc_82A1C2A4;
loc_82A1C1E4:
	// bl 0x82a1c050
	ctx.lr = 0x82A1C1E8;
	sub_82A1C050(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a1c2a4
	if (ctx.cr0.lt) goto loc_82A1C2A4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r29,r10,18,14,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x3FFFF;
	// rlwinm r11,r10,29,21,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x7FE;
	// rlwinm r25,r10,28,22,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x3FF;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// ble cr6,0x82a1c2a0
	if (!ctx.cr6.gt) goto loc_82A1C2A0;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r24,r28,r11
	ctx.r24.s64 = ctx.r11.s64 - ctx.r28.s64;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r8,r10,r24
	ctx.r8.u64 = ctx.r10.u64 + ctx.r24.u64;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82a1c230
	if (ctx.cr6.lt) goto loc_82A1C230;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82a1c2a4
	goto loc_82A1C2A4;
loc_82A1C230:
	// subf r10,r27,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r27.s64;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r4,r28,r31
	ctx.r4.u64 = ctx.r28.u64 + ctx.r31.u64;
	// subf r10,r31,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r31.s64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bl 0x82fa20f0
	ctx.lr = 0x82A1C24C;
	sub_82FA20F0(ctx, base);
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82a1c264
	if (ctx.cr6.eq) goto loc_82A1C264;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// add r4,r27,r31
	ctx.r4.u64 = ctx.r27.u64 + ctx.r31.u64;
	// add r3,r29,r31
	ctx.r3.u64 = ctx.r29.u64 + ctx.r31.u64;
	// bl 0x82fa20f0
	ctx.lr = 0x82A1C264;
	sub_82FA20F0(ctx, base);
loc_82A1C264:
	// subf r11,r23,r25
	ctx.r11.s64 = ctx.r25.s64 - ctx.r23.s64;
	// rlwinm. r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x82a1c280
	if (ctx.cr0.eq) goto loc_82A1C280;
	// add r11,r26,r29
	ctx.r11.u64 = ctx.r26.u64 + ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A1C280;
	sub_82FA7CF0(ctx, base);
loc_82A1C280:
	// subf. r5,r27,r29
	ctx.r5.s64 = ctx.r29.s64 - ctx.r27.s64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x82a1c294
	if (ctx.cr0.eq) goto loc_82A1C294;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r27,r31
	ctx.r3.u64 = ctx.r27.u64 + ctx.r31.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A1C294;
	sub_82FA7CF0(ctx, base);
loc_82A1C294:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_82A1C2A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A1C2A4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1C2AC"))) PPC_WEAK_FUNC(sub_82A1C2AC);
PPC_FUNC_IMPL(__imp__sub_82A1C2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1C2B0"))) PPC_WEAK_FUNC(sub_82A1C2B0);
PPC_FUNC_IMPL(__imp__sub_82A1C2B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A1C2B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r5,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r5.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A1C2D4;
	sub_82FA7CF0(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// std r29,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r29.u64);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r30,r11,-24812
	ctx.r30.s64 = ctx.r11.s64 + -24812;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82a84500
	ctx.lr = 0x82A1C300;
	sub_82A84500(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82a1c314
	if (ctx.cr0.eq) goto loc_82A1C314;
loc_82A1C308:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82a1c3c0
	goto loc_82A1C3C0;
loc_82A1C314:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a1c3bc
	if (ctx.cr6.eq) goto loc_82A1C3BC;
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82a1c3bc
	if (ctx.cr6.eq) goto loc_82A1C3BC;
	// cmpld cr6,r11,r28
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r28.u64, ctx.xer);
	// bne cr6,0x82a1c3bc
	if (!ctx.cr6.eq) goto loc_82A1C3BC;
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82a1c308
	if (ctx.cr6.gt) goto loc_82A1C308;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,180
	ctx.r6.s64 = ctx.r1.s64 + 180;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82a84500
	ctx.lr = 0x82A1C358;
	sub_82A84500(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a1c3c0
	if (ctx.cr0.lt) goto loc_82A1C3C0;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,180(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a842f0
	ctx.lr = 0x82A1C380;
	sub_82A842F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a1c3c0
	if (ctx.cr0.lt) goto loc_82A1C3C0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,180(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bgt cr6,0x82a1c308
	if (ctx.cr6.gt) goto loc_82A1C308;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a842f0
	ctx.lr = 0x82A1C3B0;
	sub_82A842F0(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
	// b 0x82a1c3c0
	goto loc_82A1C3C0;
loc_82A1C3BC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82A1C3C0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1C3C8"))) PPC_WEAK_FUNC(sub_82A1C3C8);
PPC_FUNC_IMPL(__imp__sub_82A1C3C8) {
	PPC_FUNC_PROLOGUE();
	// clrlwi. r7,r4,16
	ctx.r7.u64 = ctx.r4.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x82a1c3f0
	if (!ctx.cr0.eq) goto loc_82A1C3F0;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82a1c43c
	if (ctx.cr6.gt) goto loc_82A1C43C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
loc_82A1C3F0:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a1c424
	goto loc_82A1C424;
loc_82A1C3FC:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r8,r9,18,14,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x3FFFF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82a1c43c
	if (ctx.cr0.eq) goto loc_82A1C43C;
	// rlwinm r9,r9,29,21,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x7FE;
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82a1c43c
	if (!ctx.cr6.lt) goto loc_82A1C43C;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_82A1C424:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r9,r9,15,17,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 15) & 0x7FFF;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82a1c3fc
	if (!ctx.cr6.eq) goto loc_82A1C3FC;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
loc_82A1C43C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1C444"))) PPC_WEAK_FUNC(sub_82A1C444);
PPC_FUNC_IMPL(__imp__sub_82A1C444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1C448"))) PPC_WEAK_FUNC(sub_82A1C448);
PPC_FUNC_IMPL(__imp__sub_82A1C448) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// clrlwi. r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a1c478
	if (!ctx.cr0.eq) goto loc_82A1C478;
loc_82A1C46C:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82a1c4ac
	goto loc_82A1C4AC;
loc_82A1C478:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x82a1c3c8
	ctx.lr = 0x82A1C480;
	sub_82A1C3C8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82a1c46c
	if (ctx.cr0.eq) goto loc_82A1C46C;
	// li r5,2000
	ctx.r5.s64 = 2000;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a75220
	ctx.lr = 0x82A1C498;
	sub_82A75220(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,2008
	ctx.r4.s64 = ctx.r31.s64 + 2008;
	// addi r3,r30,2000
	ctx.r3.s64 = ctx.r30.s64 + 2000;
	// bl 0x82a75220
	ctx.lr = 0x82A1C4A8;
	sub_82A75220(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A1C4AC:
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

__attribute__((alias("__imp__sub_82A1C4C4"))) PPC_WEAK_FUNC(sub_82A1C4C4);
PPC_FUNC_IMPL(__imp__sub_82A1C4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1C4C8"))) PPC_WEAK_FUNC(sub_82A1C4C8);
PPC_FUNC_IMPL(__imp__sub_82A1C4C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A1C4D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// clrlwi. r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a1c4f0
	if (!ctx.cr0.eq) goto loc_82A1C4F0;
loc_82A1C4E4:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82a1c564
	goto loc_82A1C564;
loc_82A1C4F0:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a1c3c8
	ctx.lr = 0x82A1C4FC;
	sub_82A1C3C8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82a1c4e4
	if (ctx.cr0.eq) goto loc_82A1C4E4;
	// addis r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 65536;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r3,-25452
	ctx.r3.s64 = ctx.r3.s64 + -25452;
	// bl 0x82a75220
	ctx.lr = 0x82A1C518;
	sub_82A75220(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// rlwinm r11,r11,18,14,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3FFFF;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82A1C52C:
	// lhz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq 0x82a1c4e4
	if (ctx.cr0.eq) goto loc_82A1C4E4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a1c448
	ctx.lr = 0x82A1C544;
	sub_82A1C448(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a1c564
	if (ctx.cr0.lt) goto loc_82A1C564;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,2004
	ctx.r30.s64 = ctx.r30.s64 + 2004;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// cmplwi cr6,r29,20
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 20, ctx.xer);
	// blt cr6,0x82a1c52c
	if (ctx.cr6.lt) goto loc_82A1C52C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A1C564:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1C56C"))) PPC_WEAK_FUNC(sub_82A1C56C);
PPC_FUNC_IMPL(__imp__sub_82A1C56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1C570"))) PPC_WEAK_FUNC(sub_82A1C570);
PPC_FUNC_IMPL(__imp__sub_82A1C570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A1C578;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// clrlwi. r11,r6,16
	ctx.r11.u64 = ctx.r6.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a1c598
	if (!ctx.cr0.eq) goto loc_82A1C598;
loc_82A1C58C:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82a1c5f0
	goto loc_82A1C5F0;
loc_82A1C598:
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82a1c3c8
	ctx.lr = 0x82A1C5A4;
	sub_82A1C3C8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82a1c58c
	if (ctx.cr0.eq) goto loc_82A1C58C;
	// mulli r11,r28,12
	ctx.r11.s64 = ctx.r28.s64 * 12;
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
	// bl 0x82a75220
	ctx.lr = 0x82A1C5C4;
	sub_82A75220(ctx, base);
	// addi r11,r28,2
	ctx.r11.s64 = ctx.r28.s64 + 2;
	// li r5,4
	ctx.r5.s64 = 4;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82a75220
	ctx.lr = 0x82A1C5DC;
	sub_82A75220(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x82a75220
	ctx.lr = 0x82A1C5EC;
	sub_82A75220(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A1C5F0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1C5F8"))) PPC_WEAK_FUNC(sub_82A1C5F8);
PPC_FUNC_IMPL(__imp__sub_82A1C5F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A1C600;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// clrlwi. r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a1c620
	if (!ctx.cr0.eq) goto loc_82A1C620;
loc_82A1C614:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82a1c68c
	goto loc_82A1C68C;
loc_82A1C620:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a1c3c8
	ctx.lr = 0x82A1C62C;
	sub_82A1C3C8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82a1c614
	if (ctx.cr0.eq) goto loc_82A1C614;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a75220
	ctx.lr = 0x82A1C644;
	sub_82A75220(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm r11,r11,18,14,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3FFFF;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82A1C654:
	// lhz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq 0x82a1c614
	if (ctx.cr0.eq) goto loc_82A1C614;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a1c570
	ctx.lr = 0x82A1C670;
	sub_82A1C570(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a1c68c
	if (ctx.cr0.lt) goto loc_82A1C68C;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// cmplwi cr6,r30,8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 8, ctx.xer);
	// blt cr6,0x82a1c654
	if (ctx.cr6.lt) goto loc_82A1C654;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A1C68C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1C694"))) PPC_WEAK_FUNC(sub_82A1C694);
PPC_FUNC_IMPL(__imp__sub_82A1C694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1C698"))) PPC_WEAK_FUNC(sub_82A1C698);
PPC_FUNC_IMPL(__imp__sub_82A1C698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A1C6A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lhz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82a1c3c8
	ctx.lr = 0x82A1C6BC;
	sub_82A1C3C8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82a1c6d0
	if (!ctx.cr0.eq) goto loc_82A1C6D0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82a1c718
	goto loc_82A1C718;
loc_82A1C6D0:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,7
	ctx.r6.s64 = 7;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2012
	ctx.r4.s64 = 2012;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1c128
	ctx.lr = 0x82A1C6E8;
	sub_82A1C128(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a1c718
	if (ctx.cr0.lt) goto loc_82A1C718;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,2000
	ctx.r5.s64 = 2000;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rlwinm r11,r11,15,17,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x7FFF;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// sth r11,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
	// bl 0x82a75220
	ctx.lr = 0x82A1C70C;
	sub_82A75220(ctx, base);
	// lwz r11,2000(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2000);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,2008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2008, ctx.r11.u32);
loc_82A1C718:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1C720"))) PPC_WEAK_FUNC(sub_82A1C720);
PPC_FUNC_IMPL(__imp__sub_82A1C720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A1C728;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lhz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82a1c3c8
	ctx.lr = 0x82A1C744;
	sub_82A1C3C8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82a1c758
	if (!ctx.cr0.eq) goto loc_82A1C758;
loc_82A1C74C:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82a1c7e8
	goto loc_82A1C7E8;
loc_82A1C758:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1c128
	ctx.lr = 0x82A1C770;
	sub_82A1C128(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a1c7e8
	if (ctx.cr0.lt) goto loc_82A1C7E8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addis r4,r30,1
	ctx.r4.s64 = ctx.r30.s64 + 65536;
	// li r5,4
	ctx.r5.s64 = 4;
	// rlwinm r11,r11,15,17,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x7FFF;
	// addi r4,r4,-25452
	ctx.r4.s64 = ctx.r4.s64 + -25452;
	// sth r11,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82a75220
	ctx.lr = 0x82A1C798;
	sub_82A75220(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// rlwinm r11,r11,18,14,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3FFFF;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82A1C7AC:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a1c698
	ctx.lr = 0x82A1C7BC;
	sub_82A1C698(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a1c7e8
	if (ctx.cr0.lt) goto loc_82A1C7E8;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82a1c74c
	if (ctx.cr0.eq) goto loc_82A1C74C;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// addi r30,r30,2004
	ctx.r30.s64 = ctx.r30.s64 + 2004;
	// cmplwi cr6,r29,20
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 20, ctx.xer);
	// blt cr6,0x82a1c7ac
	if (ctx.cr6.lt) goto loc_82A1C7AC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A1C7E8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1C7F0"))) PPC_WEAK_FUNC(sub_82A1C7F0);
PPC_FUNC_IMPL(__imp__sub_82A1C7F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82A1C7F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lhz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82a1c3c8
	ctx.lr = 0x82A1C814;
	sub_82A1C3C8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82a1c828
	if (!ctx.cr0.eq) goto loc_82A1C828;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82a1c898
	goto loc_82A1C898;
loc_82A1C828:
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// li r6,9
	ctx.r6.s64 = 9;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1c128
	ctx.lr = 0x82A1C840;
	sub_82A1C128(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a1c898
	if (ctx.cr0.lt) goto loc_82A1C898;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mulli r11,r28,12
	ctx.r11.s64 = ctx.r28.s64 * 12;
	// rlwinm r10,r10,15,17,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0x7FFF;
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// sth r10,0(r27)
	PPC_STORE_U16(ctx.r27.u32 + 0, ctx.r10.u16);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82a75220
	ctx.lr = 0x82A1C86C;
	sub_82A75220(ctx, base);
	// addi r11,r28,2
	ctx.r11.s64 = ctx.r28.s64 + 2;
	// li r5,4
	ctx.r5.s64 = 4;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82a75220
	ctx.lr = 0x82A1C884;
	sub_82A75220(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82a75220
	ctx.lr = 0x82A1C894;
	sub_82A75220(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A1C898:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1C8A0"))) PPC_WEAK_FUNC(sub_82A1C8A0);
PPC_FUNC_IMPL(__imp__sub_82A1C8A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A1C8A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lhz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82a1c3c8
	ctx.lr = 0x82A1C8C4;
	sub_82A1C3C8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82a1c8d8
	if (!ctx.cr0.eq) goto loc_82A1C8D8;
loc_82A1C8CC:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82a1c960
	goto loc_82A1C960;
loc_82A1C8D8:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1c128
	ctx.lr = 0x82A1C8F0;
	sub_82A1C128(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a1c960
	if (ctx.cr0.lt) goto loc_82A1C960;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rlwinm r11,r11,15,17,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x7FFF;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// bl 0x82a75220
	ctx.lr = 0x82A1C914;
	sub_82A75220(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm r11,r11,18,14,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3FFFF;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82A1C924:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a1c7f0
	ctx.lr = 0x82A1C938;
	sub_82A1C7F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a1c960
	if (ctx.cr0.lt) goto loc_82A1C960;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82a1c8cc
	if (ctx.cr0.eq) goto loc_82A1C8CC;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// cmplwi cr6,r30,8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 8, ctx.xer);
	// blt cr6,0x82a1c924
	if (ctx.cr6.lt) goto loc_82A1C924;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A1C960:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1C968"))) PPC_WEAK_FUNC(sub_82A1C968);
PPC_FUNC_IMPL(__imp__sub_82A1C968) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// sth r10,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, ctx.r10.u16);
	// sth r9,14(r3)
	PPC_STORE_U16(ctx.r3.u32 + 14, ctx.r9.u16);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82a1ca04
	goto loc_82A1CA04;
loc_82A1C988:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r9,r10,0,15,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1FF00;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82a1c9a8
	if (!ctx.cr0.eq) goto loc_82A1C9A8;
	// lhz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x82a1ca28
	if (!ctx.cr0.eq) goto loc_82A1CA28;
	// rlwinm r10,r10,15,17,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0x7FFF;
	// sth r10,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, ctx.r10.u16);
loc_82A1C9A8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r9,r10,29,21,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x7FE;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r10,18,14,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x3FFFF;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82a1ca28
	if (!ctx.cr6.lt) goto loc_82A1CA28;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lhz r9,14(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// rlwinm r10,r10,15,17,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0x7FFF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82a1c9f0
	if (ctx.cr6.lt) goto loc_82A1C9F0;
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,14(r3)
	PPC_STORE_U16(ctx.r3.u32 + 14, ctx.r10.u16);
loc_82A1C9F0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r9,29,21,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x7FE;
	// rlwinm r9,r9,18,14,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x3FFFF;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwzux r10,r11,r10
	ea = ctx.r11.u32 + ctx.r10.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
loc_82A1CA04:
	// rlwinm. r10,r10,0,0,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFC000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82a1c988
	if (!ctx.cr0.eq) goto loc_82A1C988;
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// ori r10,r10,16389
	ctx.r10.u64 = ctx.r10.u64 | 16389;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// blr 
	return;
loc_82A1CA28:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1CA34"))) PPC_WEAK_FUNC(sub_82A1CA34);
PPC_FUNC_IMPL(__imp__sub_82A1CA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1CA38"))) PPC_WEAK_FUNC(sub_82A1CA38);
PPC_FUNC_IMPL(__imp__sub_82A1CA38) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// clrlwi. r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a1ca68
	if (!ctx.cr0.eq) goto loc_82A1CA68;
loc_82A1CA5C:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82a1cad4
	goto loc_82A1CAD4;
loc_82A1CA68:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x82a1c3c8
	ctx.lr = 0x82A1CA70;
	sub_82A1C3C8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82a1ca5c
	if (ctx.cr0.eq) goto loc_82A1CA5C;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r5,700
	ctx.r5.s64 = 700;
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v62,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v63,v63,v62
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8)));
	// stvx128 v63,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82a75220
	ctx.lr = 0x82A1CAA0;
	sub_82A75220(ctx, base);
	// li r5,700
	ctx.r5.s64 = 700;
	// addi r4,r31,724
	ctx.r4.s64 = ctx.r31.s64 + 724;
	// addi r3,r30,716
	ctx.r3.s64 = ctx.r30.s64 + 716;
	// bl 0x82a75220
	ctx.lr = 0x82A1CAB0;
	sub_82A75220(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,1424
	ctx.r4.s64 = ctx.r31.s64 + 1424;
	// addi r3,r30,1416
	ctx.r3.s64 = ctx.r30.s64 + 1416;
	// bl 0x82a75220
	ctx.lr = 0x82A1CAC0;
	sub_82A75220(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,1428
	ctx.r4.s64 = ctx.r31.s64 + 1428;
	// addi r3,r30,1420
	ctx.r3.s64 = ctx.r30.s64 + 1420;
	// bl 0x82a75220
	ctx.lr = 0x82A1CAD0;
	sub_82A75220(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A1CAD4:
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

__attribute__((alias("__imp__sub_82A1CAEC"))) PPC_WEAK_FUNC(sub_82A1CAEC);
PPC_FUNC_IMPL(__imp__sub_82A1CAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1CAF0"))) PPC_WEAK_FUNC(sub_82A1CAF0);
PPC_FUNC_IMPL(__imp__sub_82A1CAF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A1CAF8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// clrlwi. r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a1cb18
	if (!ctx.cr0.eq) goto loc_82A1CB18;
loc_82A1CB0C:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82a1cb84
	goto loc_82A1CB84;
loc_82A1CB18:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a1c3c8
	ctx.lr = 0x82A1CB24;
	sub_82A1C3C8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82a1cb0c
	if (ctx.cr0.eq) goto loc_82A1CB0C;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r30,14240
	ctx.r3.s64 = ctx.r30.s64 + 14240;
	// bl 0x82a75220
	ctx.lr = 0x82A1CB3C;
	sub_82A75220(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// rlwinm r11,r11,18,14,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3FFFF;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82A1CB4C:
	// lhz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq 0x82a1cb0c
	if (ctx.cr0.eq) goto loc_82A1CB0C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a1ca38
	ctx.lr = 0x82A1CB64;
	sub_82A1CA38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a1cb84
	if (ctx.cr0.lt) goto loc_82A1CB84;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,1424
	ctx.r30.s64 = ctx.r30.s64 + 1424;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// cmplwi cr6,r29,10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 10, ctx.xer);
	// blt cr6,0x82a1cb4c
	if (ctx.cr6.lt) goto loc_82A1CB4C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A1CB84:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1CB8C"))) PPC_WEAK_FUNC(sub_82A1CB8C);
PPC_FUNC_IMPL(__imp__sub_82A1CB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1CB90"))) PPC_WEAK_FUNC(sub_82A1CB90);
PPC_FUNC_IMPL(__imp__sub_82A1CB90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A1CB98;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// clrlwi. r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a1cbb8
	if (!ctx.cr0.eq) goto loc_82A1CBB8;
loc_82A1CBAC:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82a1cc4c
	goto loc_82A1CC4C;
loc_82A1CBB8:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a1c3c8
	ctx.lr = 0x82A1CBC4;
	sub_82A1C3C8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82a1cbac
	if (ctx.cr0.eq) goto loc_82A1CBAC;
	// addis r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 65536;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r3,-11072
	ctx.r3.s64 = ctx.r3.s64 + -11072;
	// bl 0x82a75220
	ctx.lr = 0x82A1CBE0;
	sub_82A75220(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,18,14,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3FFFF;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lhz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq 0x82a1cbac
	if (ctx.cr0.eq) goto loc_82A1CBAC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a1c5f8
	ctx.lr = 0x82A1CC04;
	sub_82A1C5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a1cc4c
	if (ctx.cr0.lt) goto loc_82A1CC4C;
	// lhzu r5,2(r31)
	ea = 2 + ctx.r31.u32;
	ctx.r5.u64 = PPC_LOAD_U16(ea);
	ctx.r31.u32 = ea;
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq 0x82a1cbac
	if (ctx.cr0.eq) goto loc_82A1CBAC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r30,112
	ctx.r3.s64 = ctx.r30.s64 + 112;
	// bl 0x82a1caf0
	ctx.lr = 0x82A1CC24;
	sub_82A1CAF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a1cc4c
	if (ctx.cr0.lt) goto loc_82A1CC4C;
	// lhzu r5,2(r31)
	ea = 2 + ctx.r31.u32;
	ctx.r5.u64 = PPC_LOAD_U16(ea);
	ctx.r31.u32 = ea;
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq 0x82a1cbac
	if (ctx.cr0.eq) goto loc_82A1CBAC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r30,14368
	ctx.r3.s64 = ctx.r30.s64 + 14368;
	// bl 0x82a1c4c8
	ctx.lr = 0x82A1CC44;
	sub_82A1C4C8(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
loc_82A1CC4C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1CC54"))) PPC_WEAK_FUNC(sub_82A1CC54);
PPC_FUNC_IMPL(__imp__sub_82A1CC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1CC58"))) PPC_WEAK_FUNC(sub_82A1CC58);
PPC_FUNC_IMPL(__imp__sub_82A1CC58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A1CC60;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lhz r4,12(r4)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r4.u32 + 12);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne 0x82a1cc84
	if (!ctx.cr0.eq) goto loc_82A1CC84;
loc_82A1CC78:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82a1cd04
	goto loc_82A1CD04;
loc_82A1CC84:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a1c3c8
	ctx.lr = 0x82A1CC8C;
	sub_82A1C3C8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82a1cc78
	if (ctx.cr0.eq) goto loc_82A1CC78;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82a75220
	ctx.lr = 0x82A1CCA4;
	sub_82A75220(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x82a75220
	ctx.lr = 0x82A1CCB4;
	sub_82A75220(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// rlwinm r11,r11,18,14,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3FFFF;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82A1CCC8:
	// lhz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq 0x82a1cc78
	if (ctx.cr0.eq) goto loc_82A1CC78;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a1cb90
	ctx.lr = 0x82A1CCE0;
	sub_82A1CB90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a1cd04
	if (ctx.cr0.lt) goto loc_82A1CD04;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addis r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 65536;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// addi r30,r30,-11056
	ctx.r30.s64 = ctx.r30.s64 + -11056;
	// cmplwi cr6,r29,8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 8, ctx.xer);
	// blt cr6,0x82a1ccc8
	if (ctx.cr6.lt) goto loc_82A1CCC8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A1CD04:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1CD0C"))) PPC_WEAK_FUNC(sub_82A1CD0C);
PPC_FUNC_IMPL(__imp__sub_82A1CD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1CD10"))) PPC_WEAK_FUNC(sub_82A1CD10);
PPC_FUNC_IMPL(__imp__sub_82A1CD10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A1CD18;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lhz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82a1c3c8
	ctx.lr = 0x82A1CD34;
	sub_82A1C3C8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82a1cd48
	if (!ctx.cr0.eq) goto loc_82A1CD48;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82a1cdcc
	goto loc_82A1CDCC;
loc_82A1CD48:
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,6
	ctx.r6.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1432
	ctx.r4.s64 = 1432;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1c128
	ctx.lr = 0x82A1CD60;
	sub_82A1C128(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a1cdcc
	if (ctx.cr0.lt) goto loc_82A1CDCC;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// li r9,16
	ctx.r9.s64 = 16;
	// rlwinm r10,r10,15,17,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0x7FFF;
	// li r5,700
	ctx.r5.s64 = 700;
	// sth r10,0(r28)
	PPC_STORE_U16(ctx.r28.u32 + 0, ctx.r10.u16);
	// lvx128 v63,r0,r30
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// stvlx128 v63,r0,r11
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// stvrx128 v63,r11,r9
	ea = ctx.r11.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82a75220
	ctx.lr = 0x82A1CD98;
	sub_82A75220(ctx, base);
	// li r5,700
	ctx.r5.s64 = 700;
	// addi r4,r30,716
	ctx.r4.s64 = ctx.r30.s64 + 716;
	// addi r3,r31,724
	ctx.r3.s64 = ctx.r31.s64 + 724;
	// bl 0x82a75220
	ctx.lr = 0x82A1CDA8;
	sub_82A75220(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r30,1416
	ctx.r4.s64 = ctx.r30.s64 + 1416;
	// addi r3,r31,1424
	ctx.r3.s64 = ctx.r31.s64 + 1424;
	// bl 0x82a75220
	ctx.lr = 0x82A1CDB8;
	sub_82A75220(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,1420
	ctx.r4.s64 = ctx.r30.s64 + 1420;
	// addi r3,r31,1428
	ctx.r3.s64 = ctx.r31.s64 + 1428;
	// bl 0x82a75220
	ctx.lr = 0x82A1CDC8;
	sub_82A75220(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A1CDCC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1CDD4"))) PPC_WEAK_FUNC(sub_82A1CDD4);
PPC_FUNC_IMPL(__imp__sub_82A1CDD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1CDD8"))) PPC_WEAK_FUNC(sub_82A1CDD8);
PPC_FUNC_IMPL(__imp__sub_82A1CDD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A1CDE0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lhz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82a1c3c8
	ctx.lr = 0x82A1CDFC;
	sub_82A1C3C8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82a1ce10
	if (!ctx.cr0.eq) goto loc_82A1CE10;
loc_82A1CE04:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82a1ce98
	goto loc_82A1CE98;
loc_82A1CE10:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1c128
	ctx.lr = 0x82A1CE28;
	sub_82A1C128(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a1ce98
	if (ctx.cr0.lt) goto loc_82A1CE98;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,14240
	ctx.r4.s64 = ctx.r30.s64 + 14240;
	// rlwinm r11,r11,15,17,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x7FFF;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// sth r11,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
	// bl 0x82a75220
	ctx.lr = 0x82A1CE4C;
	sub_82A75220(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// rlwinm r11,r11,18,14,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3FFFF;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82A1CE5C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a1cd10
	ctx.lr = 0x82A1CE6C;
	sub_82A1CD10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a1ce98
	if (ctx.cr0.lt) goto loc_82A1CE98;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82a1ce04
	if (ctx.cr0.eq) goto loc_82A1CE04;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// addi r30,r30,1424
	ctx.r30.s64 = ctx.r30.s64 + 1424;
	// cmplwi cr6,r29,10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 10, ctx.xer);
	// blt cr6,0x82a1ce5c
	if (ctx.cr6.lt) goto loc_82A1CE5C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A1CE98:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1CEA0"))) PPC_WEAK_FUNC(sub_82A1CEA0);
PPC_FUNC_IMPL(__imp__sub_82A1CEA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A1CEA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lhz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82a1c3c8
	ctx.lr = 0x82A1CEC4;
	sub_82A1C3C8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82a1ced8
	if (!ctx.cr0.eq) goto loc_82A1CED8;
loc_82A1CECC:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82a1cfa4
	goto loc_82A1CFA4;
loc_82A1CED8:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1c128
	ctx.lr = 0x82A1CEF0;
	sub_82A1C128(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a1cfa4
	if (ctx.cr0.lt) goto loc_82A1CFA4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addis r4,r29,1
	ctx.r4.s64 = ctx.r29.s64 + 65536;
	// li r5,4
	ctx.r5.s64 = 4;
	// rlwinm r11,r11,15,17,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x7FFF;
	// addi r4,r4,-11072
	ctx.r4.s64 = ctx.r4.s64 + -11072;
	// sth r11,0(r28)
	PPC_STORE_U16(ctx.r28.u32 + 0, ctx.r11.u16);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82a75220
	ctx.lr = 0x82A1CF18;
	sub_82A75220(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r11,r11,18,14,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3FFFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82a1c8a0
	ctx.lr = 0x82A1CF34;
	sub_82A1C8A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a1cfa4
	if (ctx.cr0.lt) goto loc_82A1CFA4;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82a1cecc
	if (ctx.cr0.eq) goto loc_82A1CECC;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r29,112
	ctx.r3.s64 = ctx.r29.s64 + 112;
	// bl 0x82a1cdd8
	ctx.lr = 0x82A1CF5C;
	sub_82A1CDD8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a1cfa4
	if (ctx.cr0.lt) goto loc_82A1CFA4;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82a1cecc
	if (ctx.cr0.eq) goto loc_82A1CECC;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r29,14368
	ctx.r3.s64 = ctx.r29.s64 + 14368;
	// bl 0x82a1c720
	ctx.lr = 0x82A1CF84;
	sub_82A1C720(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a1cfa4
	if (ctx.cr0.lt) goto loc_82A1CFA4;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// ori r10,r10,16389
	ctx.r10.u64 = ctx.r10.u64 | 16389;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_82A1CFA4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1CFAC"))) PPC_WEAK_FUNC(sub_82A1CFAC);
PPC_FUNC_IMPL(__imp__sub_82A1CFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1CFB0"))) PPC_WEAK_FUNC(sub_82A1CFB0);
PPC_FUNC_IMPL(__imp__sub_82A1CFB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A1CFB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lhz r4,12(r4)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r4.u32 + 12);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a1c3c8
	ctx.lr = 0x82A1CFD0;
	sub_82A1C3C8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82a1cfe4
	if (!ctx.cr0.eq) goto loc_82A1CFE4;
loc_82A1CFD8:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82a1d078
	goto loc_82A1D078;
loc_82A1CFE4:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1c128
	ctx.lr = 0x82A1CFFC;
	sub_82A1C128(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a1d078
	if (ctx.cr0.lt) goto loc_82A1D078;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82a75220
	ctx.lr = 0x82A1D014;
	sub_82A75220(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82a75220
	ctx.lr = 0x82A1D024;
	sub_82A75220(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// rlwinm r11,r11,18,14,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3FFFF;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82A1D038:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a1cea0
	ctx.lr = 0x82A1D048;
	sub_82A1CEA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a1d078
	if (ctx.cr0.lt) goto loc_82A1D078;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82a1cfd8
	if (ctx.cr0.eq) goto loc_82A1CFD8;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addis r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 65536;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// addi r30,r30,-11056
	ctx.r30.s64 = ctx.r30.s64 + -11056;
	// cmplwi cr6,r29,8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 8, ctx.xer);
	// blt cr6,0x82a1d038
	if (ctx.cr6.lt) goto loc_82A1D038;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A1D078:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1D080"))) PPC_WEAK_FUNC(sub_82A1D080);
PPC_FUNC_IMPL(__imp__sub_82A1D080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A1D088;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// ld r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// std r29,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r29.u64);
	// std r29,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r29.u64);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// bl 0x82a1c2b0
	ctx.lr = 0x82A1D0B8;
	sub_82A1C2B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a1d14c
	if (ctx.cr0.lt) goto loc_82A1D14C;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82a1d0ec
	if (!ctx.cr6.eq) goto loc_82A1D0EC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A1D0D8;
	sub_82FA7CF0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// sth r29,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r29.u16);
	// sth r11,94(r1)
	PPC_STORE_U16(ctx.r1.u32 + 94, ctx.r11.u16);
	// b 0x82a1d0fc
	goto loc_82A1D0FC;
loc_82A1D0EC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a1c968
	ctx.lr = 0x82A1D0F4;
	sub_82A1C968(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a1d14c
	if (ctx.cr0.lt) goto loc_82A1D14C;
loc_82A1D0FC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a1cfb0
	ctx.lr = 0x82A1D108;
	sub_82A1CFB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a1d14c
	if (ctx.cr0.lt) goto loc_82A1D14C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r11,-24812
	ctx.r31.s64 = ctx.r11.s64 + -24812;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a844b0
	ctx.lr = 0x82A1D124;
	sub_82A844B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a1d14c
	if (ctx.cr0.lt) goto loc_82A1D14C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r28.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a84570
	ctx.lr = 0x82A1D144;
	sub_82A84570(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
loc_82A1D14C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1D154"))) PPC_WEAK_FUNC(sub_82A1D154);
PPC_FUNC_IMPL(__imp__sub_82A1D154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1D158"))) PPC_WEAK_FUNC(sub_82A1D158);
PPC_FUNC_IMPL(__imp__sub_82A1D158) {
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
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ld r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// bl 0x82a1c2b0
	ctx.lr = 0x82A1D18C;
	sub_82A1C2B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a1d1c4
	if (ctx.cr0.lt) goto loc_82A1D1C4;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82a1d1a8
	if (!ctx.cr6.eq) goto loc_82A1D1A8;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82a1d1c4
	goto loc_82A1D1C4;
loc_82A1D1A8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a1c968
	ctx.lr = 0x82A1D1B0;
	sub_82A1C968(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a1d1c4
	if (ctx.cr0.lt) goto loc_82A1D1C4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1cc58
	ctx.lr = 0x82A1D1C4;
	sub_82A1CC58(ctx, base);
loc_82A1D1C4:
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

__attribute__((alias("__imp__sub_82A1D1D8"))) PPC_WEAK_FUNC(sub_82A1D1D8);
PPC_FUNC_IMPL(__imp__sub_82A1D1D8) {
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
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82a83030
	ctx.lr = 0x82A1D1F8;
	sub_82A83030(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82a1d214
	if (ctx.cr0.eq) goto loc_82A1D214;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82a1d214
	if (!ctx.cr6.eq) goto loc_82A1D214;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a1d21c
	goto loc_82A1D21C;
loc_82A1D214:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_82A1D21C:
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

__attribute__((alias("__imp__sub_82A1D230"))) PPC_WEAK_FUNC(sub_82A1D230);
PPC_FUNC_IMPL(__imp__sub_82A1D230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A1D238;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// lwz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r11,31400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31400);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r8,4(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lis r31,-31963
	ctx.r31.s64 = -2094727168;
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,31372(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31372);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A1D284;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82a1d2a0
	if (!ctx.cr0.lt) goto loc_82A1D2A0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x82a1d2d4
	goto loc_82A1D2D4;
loc_82A1D2A0:
	// lwz r11,31372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31372);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,31372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31372);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r11,31372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31372);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r11,31372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31372);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
loc_82A1D2D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1D2DC"))) PPC_WEAK_FUNC(sub_82A1D2DC);
PPC_FUNC_IMPL(__imp__sub_82A1D2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1D2E0"))) PPC_WEAK_FUNC(sub_82A1D2E0);
PPC_FUNC_IMPL(__imp__sub_82A1D2E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,31400(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31400);
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

__attribute__((alias("__imp__sub_82A1D2FC"))) PPC_WEAK_FUNC(sub_82A1D2FC);
PPC_FUNC_IMPL(__imp__sub_82A1D2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1D300"))) PPC_WEAK_FUNC(sub_82A1D300);
PPC_FUNC_IMPL(__imp__sub_82A1D300) {
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
	// addi r31,r11,31396
	ctx.r31.s64 = ctx.r11.s64 + 31396;
	// lwz r3,-12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a1d334
	if (ctx.cr6.eq) goto loc_82A1D334;
	// lis r4,-22627
	ctx.r4.s64 = -1482883072;
	// bl 0x82691460
	ctx.lr = 0x82A1D32C;
	sub_82691460(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r11.u32);
loc_82A1D334:
	// lwz r3,-20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a1d350
	if (ctx.cr6.eq) goto loc_82A1D350;
	// lis r4,-22627
	ctx.r4.s64 = -1482883072;
	// bl 0x82691460
	ctx.lr = 0x82A1D348;
	sub_82691460(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-20(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20, ctx.r11.u32);
loc_82A1D350:
	// lwz r3,-16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a1d36c
	if (ctx.cr6.eq) goto loc_82A1D36C;
	// lis r4,-22627
	ctx.r4.s64 = -1482883072;
	// bl 0x82691460
	ctx.lr = 0x82A1D364;
	sub_82691460(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-16(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16, ctx.r11.u32);
loc_82A1D36C:
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a1d388
	if (ctx.cr6.eq) goto loc_82A1D388;
	// lis r4,-22627
	ctx.r4.s64 = -1482883072;
	// bl 0x82691460
	ctx.lr = 0x82A1D380;
	sub_82691460(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r11.u32);
loc_82A1D388:
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a1d3a4
	if (ctx.cr6.eq) goto loc_82A1D3A4;
	// lis r4,-22627
	ctx.r4.s64 = -1482883072;
	// bl 0x82691460
	ctx.lr = 0x82A1D39C;
	sub_82691460(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r11.u32);
loc_82A1D3A4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a1d3c0
	if (ctx.cr6.eq) goto loc_82A1D3C0;
	// lis r4,-22627
	ctx.r4.s64 = -1482883072;
	// bl 0x82691460
	ctx.lr = 0x82A1D3B8;
	sub_82691460(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82A1D3C0:
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

__attribute__((alias("__imp__sub_82A1D3D4"))) PPC_WEAK_FUNC(sub_82A1D3D4);
PPC_FUNC_IMPL(__imp__sub_82A1D3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1D3D8"))) PPC_WEAK_FUNC(sub_82A1D3D8);
PPC_FUNC_IMPL(__imp__sub_82A1D3D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A1D3E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r3,27
	ctx.r3.s64 = 1769472;
	// lis r4,-22627
	ctx.r4.s64 = -1482883072;
	// ori r3,r3,30528
	ctx.r3.u64 = ctx.r3.u64 | 30528;
	// bl 0x82691410
	ctx.lr = 0x82A1D3F4;
	sub_82691410(ctx, base);
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r31,r10,31396
	ctx.r31.s64 = ctx.r10.s64 + 31396;
	// lis r4,-22627
	ctx.r4.s64 = -1482883072;
	// li r3,14400
	ctx.r3.s64 = 14400;
	// stw r11,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r11.u32);
	// bl 0x82691410
	ctx.lr = 0x82A1D410;
	sub_82691410(ctx, base);
	// stw r3,-20(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20, ctx.r3.u32);
	// lis r4,-22627
	ctx.r4.s64 = -1482883072;
	// li r3,2000
	ctx.r3.s64 = 2000;
	// bl 0x82691410
	ctx.lr = 0x82A1D420;
	sub_82691410(ctx, base);
	// stw r3,-16(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16, ctx.r3.u32);
	// lis r4,-22627
	ctx.r4.s64 = -1482883072;
	// li r3,14400
	ctx.r3.s64 = 14400;
	// bl 0x82691410
	ctx.lr = 0x82A1D430;
	sub_82691410(ctx, base);
	// stw r3,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r3.u32);
	// lis r4,-22627
	ctx.r4.s64 = -1482883072;
	// li r3,3717
	ctx.r3.s64 = 3717;
	// bl 0x82691410
	ctx.lr = 0x82A1D440;
	sub_82691410(ctx, base);
	// stw r3,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r3.u32);
	// lis r4,-22627
	ctx.r4.s64 = -1482883072;
	// li r3,2000
	ctx.r3.s64 = 2000;
	// bl 0x82691410
	ctx.lr = 0x82A1D450;
	sub_82691410(ctx, base);
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a1d5ac
	if (ctx.cr6.eq) goto loc_82A1D5AC;
	// lwz r10,-20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a1d5ac
	if (ctx.cr6.eq) goto loc_82A1D5AC;
	// lwz r10,-16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a1d5ac
	if (ctx.cr6.eq) goto loc_82A1D5AC;
	// lwz r10,-8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a1d5ac
	if (ctx.cr6.eq) goto loc_82A1D5AC;
	// lwz r10,-4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a1d5ac
	if (ctx.cr6.eq) goto loc_82A1D5AC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a1d5ac
	if (ctx.cr6.eq) goto loc_82A1D5AC;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a75988
	ctx.lr = 0x82A1D4A8;
	sub_82A75988(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// bl 0x82a75988
	ctx.lr = 0x82A1D4B8;
	sub_82A75988(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// bl 0x82a75988
	ctx.lr = 0x82A1D4C8;
	sub_82A75988(ctx, base);
	// bl 0x82a0c140
	ctx.lr = 0x82A1D4CC;
	sub_82A0C140(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fa5590
	ctx.lr = 0x82A1D4DC;
	sub_82FA5590(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82a1d500
	if (!ctx.cr0.eq) goto loc_82A1D500;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r5,r11,-23960
	ctx.r5.s64 = ctx.r11.s64 + -23960;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fa85a0
	ctx.lr = 0x82A1D4F8;
	sub_82FA85A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82a1d50c
	if (ctx.cr0.eq) goto loc_82A1D50C;
loc_82A1D500:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82a1d5b4
	goto loc_82A1D5B4;
loc_82A1D50C:
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a82d10
	ctx.lr = 0x82A1D52C;
	sub_82A82D10(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82a1d550
	if (!ctx.cr6.eq) goto loc_82A1D550;
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// li r3,-1
	ctx.r3.s64 = -1;
	// ori r30,r30,16389
	ctx.r30.u64 = ctx.r30.u64 | 16389;
	// bl 0x82a756a0
	ctx.lr = 0x82A1D548;
	sub_82A756A0(ctx, base);
loc_82A1D548:
	// bl 0x82a1d300
	ctx.lr = 0x82A1D54C;
	sub_82A1D300(ctx, base);
	// b 0x82a1d5a4
	goto loc_82A1D5A4;
loc_82A1D550:
	// li r5,14400
	ctx.r5.s64 = 14400;
	// lwz r4,-20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a1d1d8
	ctx.lr = 0x82A1D560;
	sub_82A1D1D8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82a1d548
	if (ctx.cr0.lt) goto loc_82A1D548;
	// lis r5,27
	ctx.r5.s64 = 1769472;
	// lwz r4,-12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r5,r5,30528
	ctx.r5.u64 = ctx.r5.u64 | 30528;
	// bl 0x82a1d1d8
	ctx.lr = 0x82A1D57C;
	sub_82A1D1D8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82a1d548
	if (ctx.cr0.lt) goto loc_82A1D548;
	// li r5,2000
	ctx.r5.s64 = 2000;
	// lwz r4,-16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a1d1d8
	ctx.lr = 0x82A1D594;
	sub_82A1D1D8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82a1d548
	if (ctx.cr0.lt) goto loc_82A1D548;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a756a0
	ctx.lr = 0x82A1D5A4;
	sub_82A756A0(ctx, base);
loc_82A1D5A4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82a1d5b4
	goto loc_82A1D5B4;
loc_82A1D5AC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
loc_82A1D5B4:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1D5BC"))) PPC_WEAK_FUNC(sub_82A1D5BC);
PPC_FUNC_IMPL(__imp__sub_82A1D5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1D5C0"))) PPC_WEAK_FUNC(sub_82A1D5C0);
PPC_FUNC_IMPL(__imp__sub_82A1D5C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa764c
	ctx.lr = 0x82A1D5C8;
	__savegprlr_17(ctx, base);
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x82fac14c
	ctx.lr = 0x82A1D5D0;
	__savevmx_123(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// vspltisw128 v63,1
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x1)));
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// mr r17,r4
	ctx.r17.u64 = ctx.r4.u64;
	// addi r6,r10,-23888
	ctx.r6.s64 = ctx.r10.s64 + -23888;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// vcsxwfp128 v125,v63,0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v125.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v63.u32)));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// addi r18,r11,31380
	ctx.r18.s64 = ctx.r11.s64 + 31380;
	// lvx128 v62,r0,r6
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// addi r11,r9,-23904
	ctx.r11.s64 = ctx.r9.s64 + -23904;
	// addi r10,r8,-23920
	ctx.r10.s64 = ctx.r8.s64 + -23920;
	// stvx128 v62,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r7,-23936
	ctx.r9.s64 = ctx.r7.s64 + -23936;
	// li r5,14400
	ctx.r5.s64 = 14400;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	// lvx128 v124,r0,r11
	simd::store_shuffled(ctx.v124, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v127,r0,r10
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v126,r0,r9
	simd::store_shuffled(ctx.v126, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// bl 0x82a75988
	ctx.lr = 0x82A1D634;
	sub_82A75988(ctx, base);
	// li r21,128
	ctx.r21.s64 = 128;
	// lwz r10,8(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	// lwz r11,-4(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + -4);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// dcbt r21,r11
	// li r7,256
	ctx.r7.s64 = 256;
	// dcbt r7,r11
	// li r6,384
	ctx.r6.s64 = 384;
	// dcbt r6,r11
	// li r22,28
	ctx.r22.s64 = 28;
	// li r25,16
	ctx.r25.s64 = 16;
	// li r26,32
	ctx.r26.s64 = 32;
	// li r27,48
	ctx.r27.s64 = 48;
	// li r24,80
	ctx.r24.s64 = 80;
	// li r28,96
	ctx.r28.s64 = 96;
	// li r29,112
	ctx.r29.s64 = 112;
	// li r30,64
	ctx.r30.s64 = 64;
	// li r31,144
	ctx.r31.s64 = 144;
	// li r3,160
	ctx.r3.s64 = 160;
	// li r4,176
	ctx.r4.s64 = 176;
	// li r5,208
	ctx.r5.s64 = 208;
	// li r6,224
	ctx.r6.s64 = 224;
	// li r7,240
	ctx.r7.s64 = 240;
	// li r8,192
	ctx.r8.s64 = 192;
loc_82A1D698:
	// li r23,512
	ctx.r23.s64 = 512;
	// dcbt r23,r11
	// li r23,640
	ctx.r23.s64 = 640;
	// dcbt r23,r11
	// li r23,768
	ctx.r23.s64 = 768;
	// dcbt r23,r11
	// li r23,896
	ctx.r23.s64 = 896;
	// dcbt r23,r11
	// li r23,2
	ctx.r23.s64 = 2;
	// mtctr r23
	ctx.ctr.u64 = ctx.r23.u64;
loc_82A1D6C0:
	// lvx128 v61,r0,r9
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v60,r0,r11
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vupkhsb128 v59,v61,v0
	_mm_store_si128((__m128i*)ctx.v59.s16, _mm_cvtepi8_epi16(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v61.s8), _mm_load_si128((__m128i*)ctx.v61.s8))));
	// lvx128 v58,r11,r25
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r25.u32) & ~0xF), VectorMaskL));
	// vupklsb128 v57,v61,v0
	_mm_store_si128((__m128i*)ctx.v57.s32, _mm_cvtepi8_epi16(_mm_load_si128((__m128i*)ctx.v61.s16)));
	// lvx128 v56,r11,r26
	simd::store_shuffled(ctx.v56, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r26.u32) & ~0xF), VectorMaskL));
	// lvx128 v55,r11,r27
	simd::store_shuffled(ctx.v55, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r27.u32) & ~0xF), VectorMaskL));
	// vand128 v54,v59,v124
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v124.u8)));
	// vand128 v53,v57,v124
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v124.u8)));
	// vupkhsb128 v52,v54,v96
	_mm_store_si128((__m128i*)ctx.v52.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v54.s16), _mm_load_si128((__m128i*)ctx.v54.s16))));
	// vupklsb128 v51,v54,v96
	_mm_store_si128((__m128i*)ctx.v51.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v54.s16)));
	// vupkhsb128 v50,v53,v96
	_mm_store_si128((__m128i*)ctx.v50.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v53.s16), _mm_load_si128((__m128i*)ctx.v53.s16))));
	// vupklsb128 v49,v53,v96
	_mm_store_si128((__m128i*)ctx.v49.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v53.s16)));
	// vcsxwfp128 v48,v52,0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v48.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v52.u32)));
	// vcsxwfp128 v47,v51,0
	_mm_store_ps(ctx.v47.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v51.u32)));
	// vcsxwfp128 v46,v50,0
	_mm_store_ps(ctx.v46.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v50.u32)));
	// vcsxwfp128 v45,v49,0
	_mm_store_ps(ctx.v45.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v49.u32)));
	// vsubfp128 v44,v48,v60
	_mm_store_ps(ctx.v44.f32, _mm_sub_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v60.f32)));
	// vsubfp128 v43,v47,v58
	_mm_store_ps(ctx.v43.f32, _mm_sub_ps(_mm_load_ps(ctx.v47.f32), _mm_load_ps(ctx.v58.f32)));
	// vsubfp128 v42,v46,v56
	_mm_store_ps(ctx.v42.f32, _mm_sub_ps(_mm_load_ps(ctx.v46.f32), _mm_load_ps(ctx.v56.f32)));
	// vsubfp128 v41,v45,v55
	_mm_store_ps(ctx.v41.f32, _mm_sub_ps(_mm_load_ps(ctx.v45.f32), _mm_load_ps(ctx.v55.f32)));
	// stvx128 v44,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v44.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v43,r10,r25
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r25.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v43.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v42,r10,r26
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v42.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v41,r10,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v41.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v40,r11,r24
	simd::store_shuffled(ctx.v40, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r24.u32) & ~0xF), VectorMaskL));
	// lvx128 v39,r11,r28
	simd::store_shuffled(ctx.v39, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r28.u32) & ~0xF), VectorMaskL));
	// lvx128 v38,r11,r29
	simd::store_shuffled(ctx.v38, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r29.u32) & ~0xF), VectorMaskL));
	// lvx128 v37,r11,r30
	simd::store_shuffled(ctx.v37, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r30.u32) & ~0xF), VectorMaskL));
	// lvx128 v36,r9,r25
	simd::store_shuffled(ctx.v36, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r25.u32) & ~0xF), VectorMaskL));
	// vupkhsb128 v35,v36,v0
	_mm_store_si128((__m128i*)ctx.v35.s16, _mm_cvtepi8_epi16(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v36.s8), _mm_load_si128((__m128i*)ctx.v36.s8))));
	// vupklsb128 v34,v36,v0
	_mm_store_si128((__m128i*)ctx.v34.s32, _mm_cvtepi8_epi16(_mm_load_si128((__m128i*)ctx.v36.s16)));
	// vand128 v33,v35,v124
	_mm_store_si128((__m128i*)ctx.v33.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v35.u8), _mm_load_si128((__m128i*)ctx.v124.u8)));
	// vand128 v32,v34,v124
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v34.u8), _mm_load_si128((__m128i*)ctx.v124.u8)));
	// vupkhsb128 v63,v33,v96
	_mm_store_si128((__m128i*)ctx.v63.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v33.s16), _mm_load_si128((__m128i*)ctx.v33.s16))));
	// vupklsb128 v62,v33,v96
	_mm_store_si128((__m128i*)ctx.v62.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v33.s16)));
	// vupkhsb128 v61,v32,v96
	_mm_store_si128((__m128i*)ctx.v61.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v32.s16), _mm_load_si128((__m128i*)ctx.v32.s16))));
	// vcsxwfp128 v60,v63,0
	_mm_store_ps(ctx.v60.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v63.u32)));
	// vupklsb128 v59,v32,v96
	_mm_store_si128((__m128i*)ctx.v59.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v32.s16)));
	// vcsxwfp128 v58,v62,0
	_mm_store_ps(ctx.v58.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v62.u32)));
	// vcsxwfp128 v57,v61,0
	_mm_store_ps(ctx.v57.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v61.u32)));
	// vcsxwfp128 v56,v59,0
	_mm_store_ps(ctx.v56.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v59.u32)));
	// vsubfp128 v55,v60,v37
	_mm_store_ps(ctx.v55.f32, _mm_sub_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v37.f32)));
	// vsubfp128 v54,v58,v40
	_mm_store_ps(ctx.v54.f32, _mm_sub_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v40.f32)));
	// vsubfp128 v53,v57,v39
	_mm_store_ps(ctx.v53.f32, _mm_sub_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v39.f32)));
	// vsubfp128 v52,v56,v38
	_mm_store_ps(ctx.v52.f32, _mm_sub_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v38.f32)));
	// stvx128 v55,r10,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v54,r10,r24
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v53,r10,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v52,r10,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v51,r11,r31
	simd::store_shuffled(ctx.v51, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r31.u32) & ~0xF), VectorMaskL));
	// lvx128 v50,r11,r21
	simd::store_shuffled(ctx.v50, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r21.u32) & ~0xF), VectorMaskL));
	// lvx128 v49,r11,r3
	simd::store_shuffled(ctx.v49, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r3.u32) & ~0xF), VectorMaskL));
	// lvx128 v48,r11,r4
	simd::store_shuffled(ctx.v48, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v47,r9,r26
	simd::store_shuffled(ctx.v47, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r26.u32) & ~0xF), VectorMaskL));
	// vupkhsb128 v46,v47,v0
	_mm_store_si128((__m128i*)ctx.v46.s16, _mm_cvtepi8_epi16(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v47.s8), _mm_load_si128((__m128i*)ctx.v47.s8))));
	// vupklsb128 v45,v47,v0
	_mm_store_si128((__m128i*)ctx.v45.s32, _mm_cvtepi8_epi16(_mm_load_si128((__m128i*)ctx.v47.s16)));
	// vand128 v44,v46,v124
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v46.u8), _mm_load_si128((__m128i*)ctx.v124.u8)));
	// vand128 v43,v45,v124
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v45.u8), _mm_load_si128((__m128i*)ctx.v124.u8)));
	// vupkhsb128 v42,v44,v96
	_mm_store_si128((__m128i*)ctx.v42.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v44.s16), _mm_load_si128((__m128i*)ctx.v44.s16))));
	// vupklsb128 v41,v44,v96
	_mm_store_si128((__m128i*)ctx.v41.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v44.s16)));
	// vupkhsb128 v40,v43,v96
	_mm_store_si128((__m128i*)ctx.v40.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v43.s16), _mm_load_si128((__m128i*)ctx.v43.s16))));
	// vcsxwfp128 v39,v42,0
	_mm_store_ps(ctx.v39.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v42.u32)));
	// vupklsb128 v38,v43,v96
	_mm_store_si128((__m128i*)ctx.v38.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v43.s16)));
	// vcsxwfp128 v37,v41,0
	_mm_store_ps(ctx.v37.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v41.u32)));
	// vcsxwfp128 v36,v40,0
	_mm_store_ps(ctx.v36.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v40.u32)));
	// vcsxwfp128 v35,v38,0
	_mm_store_ps(ctx.v35.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v38.u32)));
	// vsubfp128 v34,v39,v50
	_mm_store_ps(ctx.v34.f32, _mm_sub_ps(_mm_load_ps(ctx.v39.f32), _mm_load_ps(ctx.v50.f32)));
	// vsubfp128 v33,v37,v51
	_mm_store_ps(ctx.v33.f32, _mm_sub_ps(_mm_load_ps(ctx.v37.f32), _mm_load_ps(ctx.v51.f32)));
	// vsubfp128 v32,v36,v49
	_mm_store_ps(ctx.v32.f32, _mm_sub_ps(_mm_load_ps(ctx.v36.f32), _mm_load_ps(ctx.v49.f32)));
	// vsubfp128 v63,v35,v48
	_mm_store_ps(ctx.v63.f32, _mm_sub_ps(_mm_load_ps(ctx.v35.f32), _mm_load_ps(ctx.v48.f32)));
	// stvx128 v34,r10,r21
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r21.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v34.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v33,r10,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v33.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v32,r10,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v32.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r10,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v62,r11,r5
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// lvx128 v61,r11,r6
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// lvx128 v60,r11,r7
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v59,r11,r8
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// lvx128 v58,r9,r27
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r27.u32) & ~0xF), VectorMaskL));
	// vupkhsb128 v57,v58,v0
	_mm_store_si128((__m128i*)ctx.v57.s16, _mm_cvtepi8_epi16(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v58.s8), _mm_load_si128((__m128i*)ctx.v58.s8))));
	// addi r9,r9,64
	ctx.r9.s64 = ctx.r9.s64 + 64;
	// vupklsb128 v56,v58,v0
	_mm_store_si128((__m128i*)ctx.v56.s32, _mm_cvtepi8_epi16(_mm_load_si128((__m128i*)ctx.v58.s16)));
	// vand128 v55,v57,v124
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v124.u8)));
	// vand128 v54,v56,v124
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v124.u8)));
	// vupkhsb128 v53,v55,v96
	_mm_store_si128((__m128i*)ctx.v53.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v55.s16), _mm_load_si128((__m128i*)ctx.v55.s16))));
	// vupklsb128 v52,v55,v96
	_mm_store_si128((__m128i*)ctx.v52.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v55.s16)));
	// vupkhsb128 v51,v54,v96
	_mm_store_si128((__m128i*)ctx.v51.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v54.s16), _mm_load_si128((__m128i*)ctx.v54.s16))));
	// vupklsb128 v50,v54,v96
	_mm_store_si128((__m128i*)ctx.v50.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v54.s16)));
	// vcsxwfp128 v49,v53,0
	_mm_store_ps(ctx.v49.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v53.u32)));
	// vcsxwfp128 v48,v52,0
	_mm_store_ps(ctx.v48.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v52.u32)));
	// vcsxwfp128 v47,v51,0
	_mm_store_ps(ctx.v47.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v51.u32)));
	// vcsxwfp128 v46,v50,0
	_mm_store_ps(ctx.v46.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v50.u32)));
	// vsubfp128 v45,v49,v59
	_mm_store_ps(ctx.v45.f32, _mm_sub_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v59.f32)));
	// vsubfp128 v44,v48,v62
	_mm_store_ps(ctx.v44.f32, _mm_sub_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v62.f32)));
	// vsubfp128 v43,v47,v61
	_mm_store_ps(ctx.v43.f32, _mm_sub_ps(_mm_load_ps(ctx.v47.f32), _mm_load_ps(ctx.v61.f32)));
	// vsubfp128 v42,v46,v60
	_mm_store_ps(ctx.v42.f32, _mm_sub_ps(_mm_load_ps(ctx.v46.f32), _mm_load_ps(ctx.v60.f32)));
	// stvx128 v45,r10,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v45.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v44,r10,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v44.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v43,r10,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v43.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v42,r10,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v42.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,256
	ctx.r10.s64 = ctx.r10.s64 + 256;
	// bdnz 0x82a1d6c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A1D6C0;
	// li r23,-128
	ctx.r23.s64 = -128;
	// dcbf r23,r9
	// dcbf r23,r11
	// li r23,-256
	ctx.r23.s64 = -256;
	// dcbf r23,r11
	// li r23,-384
	ctx.r23.s64 = -384;
	// dcbf r23,r11
	// li r23,-512
	ctx.r23.s64 = -512;
	// dcbf r23,r11
	// addic. r22,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne 0x82a1d698
	if (!ctx.cr0.eq) goto loc_82A1D698;
	// lvx128 v41,r0,r9
	simd::store_shuffled(ctx.v41, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lwz r30,4(r18)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// lvx128 v40,r0,r11
	simd::store_shuffled(ctx.v40, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lwz r23,16(r18)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r18.u32 + 16);
	// vupklsb128 v39,v41,v0
	_mm_store_si128((__m128i*)ctx.v39.s32, _mm_cvtepi8_epi16(_mm_load_si128((__m128i*)ctx.v41.s16)));
	// lvx128 v38,r11,r26
	simd::store_shuffled(ctx.v38, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r26.u32) & ~0xF), VectorMaskL));
	// vupkhsb128 v37,v41,v0
	_mm_store_si128((__m128i*)ctx.v37.s16, _mm_cvtepi8_epi16(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v41.s8), _mm_load_si128((__m128i*)ctx.v41.s8))));
	// lvx128 v36,r11,r27
	simd::store_shuffled(ctx.v36, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r27.u32) & ~0xF), VectorMaskL));
	// lvx128 v35,r11,r25
	simd::store_shuffled(ctx.v35, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r25.u32) & ~0xF), VectorMaskL));
	// lwz r24,0(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// vspltisw128 v123,0
	_mm_store_si128((__m128i*)ctx.v123.u32, _mm_set1_epi32(int(0x0)));
	// li r5,2000
	ctx.r5.s64 = 2000;
	// vand128 v34,v39,v124
	_mm_store_si128((__m128i*)ctx.v34.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v39.u8), _mm_load_si128((__m128i*)ctx.v124.u8)));
	// li r4,0
	ctx.r4.s64 = 0;
	// vand128 v33,v37,v124
	_mm_store_si128((__m128i*)ctx.v33.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v37.u8), _mm_load_si128((__m128i*)ctx.v124.u8)));
	// addi r29,r30,3600
	ctx.r29.s64 = ctx.r30.s64 + 3600;
	// addi r28,r30,7200
	ctx.r28.s64 = ctx.r30.s64 + 7200;
	// vor128 v124,v123,v123
	_mm_store_si128((__m128i*)ctx.v124.u8, _mm_load_si128((__m128i*)ctx.v123.u8));
	// addi r31,r30,10800
	ctx.r31.s64 = ctx.r30.s64 + 10800;
	// vupkhsb128 v32,v34,v96
	_mm_store_si128((__m128i*)ctx.v32.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v34.s16), _mm_load_si128((__m128i*)ctx.v34.s16))));
	// vupklsb128 v63,v34,v96
	_mm_store_si128((__m128i*)ctx.v63.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v34.s16)));
	// vupkhsb128 v62,v33,v96
	_mm_store_si128((__m128i*)ctx.v62.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v33.s16), _mm_load_si128((__m128i*)ctx.v33.s16))));
	// vupklsb128 v61,v33,v96
	_mm_store_si128((__m128i*)ctx.v61.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v33.s16)));
	// vcsxwfp128 v60,v32,0
	_mm_store_ps(ctx.v60.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v32.u32)));
	// vcsxwfp128 v59,v63,0
	_mm_store_ps(ctx.v59.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v63.u32)));
	// vcsxwfp128 v58,v62,0
	_mm_store_ps(ctx.v58.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v62.u32)));
	// vcsxwfp128 v57,v61,0
	_mm_store_ps(ctx.v57.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v61.u32)));
	// vsubfp128 v56,v60,v38
	_mm_store_ps(ctx.v56.f32, _mm_sub_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v38.f32)));
	// vsubfp128 v55,v59,v36
	_mm_store_ps(ctx.v55.f32, _mm_sub_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v36.f32)));
	// vsubfp128 v54,v58,v40
	_mm_store_ps(ctx.v54.f32, _mm_sub_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v40.f32)));
	// vsubfp128 v53,v57,v35
	_mm_store_ps(ctx.v53.f32, _mm_sub_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v35.f32)));
	// stvx128 v56,r10,r26
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v55,r10,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v54,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v53,r10,r25
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r25.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r3,16(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 16);
	// bl 0x82a75988
	ctx.lr = 0x82A1D920;
	sub_82A75988(ctx, base);
	// subf r4,r23,r24
	ctx.r4.s64 = ctx.r24.s64 - ctx.r23.s64;
	// li r5,125
	ctx.r5.s64 = 125;
loc_82A1D928:
	// lwz r11,8(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	// lvx128 v63,r4,r23
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r23.u32) & ~0xF), VectorMaskL));
	// vor128 v10,v123,v123
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)ctx.v123.u8));
	// li r6,28
	ctx.r6.s64 = 28;
	// vor128 v9,v123,v123
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)ctx.v123.u8));
	// vor128 v8,v123,v123
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_load_si128((__m128i*)ctx.v123.u8));
	// vor128 v7,v123,v123
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)ctx.v123.u8));
loc_82A1D944:
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// dcbt r21,r30
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// dcbt r21,r29
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// dcbt r21,r28
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// dcbt r21,r31
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82A1D978:
	// lvx128 v52,r0,r30
	simd::store_shuffled(ctx.v52, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lvx128 v51,r0,r29
	simd::store_shuffled(ctx.v51, simd::load_and_shuffle(base + ((ctx.r29.u32) & ~0xF), VectorMaskL));
	// lvx128 v49,r0,r28
	simd::store_shuffled(ctx.v49, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// vupklsb128 v50,v52,v0
	_mm_store_si128((__m128i*)ctx.v50.s32, _mm_cvtepi8_epi16(_mm_load_si128((__m128i*)ctx.v52.s16)));
	// vupkhsb128 v48,v52,v0
	_mm_store_si128((__m128i*)ctx.v48.s16, _mm_cvtepi8_epi16(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v52.s8), _mm_load_si128((__m128i*)ctx.v52.s8))));
	// lvx128 v46,r11,r9
	simd::store_shuffled(ctx.v46, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vupkhsb128 v47,v51,v0
	_mm_store_si128((__m128i*)ctx.v47.s16, _mm_cvtepi8_epi16(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v51.s8), _mm_load_si128((__m128i*)ctx.v51.s8))));
	// lvx128 v13,r11,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vupklsb128 v45,v51,v0
	_mm_store_si128((__m128i*)ctx.v45.s32, _mm_cvtepi8_epi16(_mm_load_si128((__m128i*)ctx.v51.s16)));
	// lvx128 v0,r0,r7
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vupklsb128 v44,v49,v0
	_mm_store_si128((__m128i*)ctx.v44.s32, _mm_cvtepi8_epi16(_mm_load_si128((__m128i*)ctx.v49.s16)));
	// vand128 v11,v50,v126
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)ctx.v126.u8)));
	// vupkhsb128 v43,v49,v0
	_mm_store_si128((__m128i*)ctx.v43.s16, _mm_cvtepi8_epi16(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v49.s8), _mm_load_si128((__m128i*)ctx.v49.s8))));
	// vand128 v6,v48,v126
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)ctx.v126.u8)));
	// vand128 v5,v47,v126
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)ctx.v126.u8)));
	// lvx128 v42,r0,r31
	simd::store_shuffled(ctx.v42, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// vand128 v4,v45,v126
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v45.u8), _mm_load_si128((__m128i*)ctx.v126.u8)));
	// lvx128 v12,r0,r11
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vand128 v31,v44,v126
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v44.u8), _mm_load_si128((__m128i*)ctx.v126.u8)));
	// vupklsb128 v41,v42,v0
	_mm_store_si128((__m128i*)ctx.v41.s32, _mm_cvtepi8_epi16(_mm_load_si128((__m128i*)ctx.v42.s16)));
	// vand128 v30,v43,v126
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v43.u8), _mm_load_si128((__m128i*)ctx.v126.u8)));
	// vupkhsb128 v40,v42,v0
	_mm_store_si128((__m128i*)ctx.v40.s16, _mm_cvtepi8_epi16(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v42.s8), _mm_load_si128((__m128i*)ctx.v42.s8))));
	// vaddshs v2,v6,v0
	_mm_store_si128((__m128i*)ctx.v2.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v6.s16), _mm_load_si128((__m128i*)ctx.v0.s16)));
	// vaddshs v1,v5,v0
	_mm_store_si128((__m128i*)ctx.v1.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v5.s16), _mm_load_si128((__m128i*)ctx.v0.s16)));
	// vaddshs v29,v4,v0
	_mm_store_si128((__m128i*)ctx.v29.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v4.s16), _mm_load_si128((__m128i*)ctx.v0.s16)));
	// vaddshs v3,v11,v0
	_mm_store_si128((__m128i*)ctx.v3.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v11.s16), _mm_load_si128((__m128i*)ctx.v0.s16)));
	// lvx128 v11,r11,r8
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// vaddshs v28,v31,v0
	_mm_store_si128((__m128i*)ctx.v28.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v31.s16), _mm_load_si128((__m128i*)ctx.v0.s16)));
	// vupklsb128 v38,v2,v96
	_mm_store_si128((__m128i*)ctx.v38.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v2.s16)));
	// vaddshs v27,v30,v0
	_mm_store_si128((__m128i*)ctx.v27.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v30.s16), _mm_load_si128((__m128i*)ctx.v0.s16)));
	// vupklsb128 v36,v1,v96
	_mm_store_si128((__m128i*)ctx.v36.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v1.s16)));
	// vupkhsb128 v32,v29,v96
	_mm_store_si128((__m128i*)ctx.v32.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v29.s16), _mm_load_si128((__m128i*)ctx.v29.s16))));
	// vand128 v26,v41,v126
	_mm_store_si128((__m128i*)ctx.v26.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v41.u8), _mm_load_si128((__m128i*)ctx.v126.u8)));
	// vupkhsb128 v39,v3,v96
	_mm_store_si128((__m128i*)ctx.v39.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v3.s16), _mm_load_si128((__m128i*)ctx.v3.s16))));
	// vand128 v24,v40,v126
	_mm_store_si128((__m128i*)ctx.v24.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v40.u8), _mm_load_si128((__m128i*)ctx.v126.u8)));
	// vupkhsb128 v62,v28,v96
	_mm_store_si128((__m128i*)ctx.v62.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v28.s16), _mm_load_si128((__m128i*)ctx.v28.s16))));
	// vslw128 v6,v38,v127
	ctx.v6.u32[0] = ctx.v38.u32[0] << (ctx.v127.u8[0] & 0x1F);
	ctx.v6.u32[1] = ctx.v38.u32[1] << (ctx.v127.u8[4] & 0x1F);
	ctx.v6.u32[2] = ctx.v38.u32[2] << (ctx.v127.u8[8] & 0x1F);
	ctx.v6.u32[3] = ctx.v38.u32[3] << (ctx.v127.u8[12] & 0x1F);
	// vupklsb128 v61,v27,v96
	_mm_store_si128((__m128i*)ctx.v61.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v27.s16)));
	// vslw128 v5,v36,v127
	ctx.v5.u32[0] = ctx.v36.u32[0] << (ctx.v127.u8[0] & 0x1F);
	ctx.v5.u32[1] = ctx.v36.u32[1] << (ctx.v127.u8[4] & 0x1F);
	ctx.v5.u32[2] = ctx.v36.u32[2] << (ctx.v127.u8[8] & 0x1F);
	ctx.v5.u32[3] = ctx.v36.u32[3] << (ctx.v127.u8[12] & 0x1F);
	// vslw128 v60,v32,v127
	ctx.v60.u32[0] = ctx.v32.u32[0] << (ctx.v127.u8[0] & 0x1F);
	ctx.v60.u32[1] = ctx.v32.u32[1] << (ctx.v127.u8[4] & 0x1F);
	ctx.v60.u32[2] = ctx.v32.u32[2] << (ctx.v127.u8[8] & 0x1F);
	ctx.v60.u32[3] = ctx.v32.u32[3] << (ctx.v127.u8[12] & 0x1F);
	// vupklsb128 v37,v3,v96
	_mm_store_si128((__m128i*)ctx.v37.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v3.s16)));
	// vslw128 v35,v39,v127
	ctx.v35.u32[0] = ctx.v39.u32[0] << (ctx.v127.u8[0] & 0x1F);
	ctx.v35.u32[1] = ctx.v39.u32[1] << (ctx.v127.u8[4] & 0x1F);
	ctx.v35.u32[2] = ctx.v39.u32[2] << (ctx.v127.u8[8] & 0x1F);
	ctx.v35.u32[3] = ctx.v39.u32[3] << (ctx.v127.u8[12] & 0x1F);
	// vupkhsb128 v34,v2,v96
	_mm_store_si128((__m128i*)ctx.v34.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v2.s16), _mm_load_si128((__m128i*)ctx.v2.s16))));
	// vslw128 v58,v62,v127
	ctx.v58.u32[0] = ctx.v62.u32[0] << (ctx.v127.u8[0] & 0x1F);
	ctx.v58.u32[1] = ctx.v62.u32[1] << (ctx.v127.u8[4] & 0x1F);
	ctx.v58.u32[2] = ctx.v62.u32[2] << (ctx.v127.u8[8] & 0x1F);
	ctx.v58.u32[3] = ctx.v62.u32[3] << (ctx.v127.u8[12] & 0x1F);
	// vmaddfp v10,v13,v6,v10
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(ctx.v10.f32)));
	// vslw128 v4,v61,v127
	ctx.v4.u32[0] = ctx.v61.u32[0] << (ctx.v127.u8[0] & 0x1F);
	ctx.v4.u32[1] = ctx.v61.u32[1] << (ctx.v127.u8[4] & 0x1F);
	ctx.v4.u32[2] = ctx.v61.u32[2] << (ctx.v127.u8[8] & 0x1F);
	ctx.v4.u32[3] = ctx.v61.u32[3] << (ctx.v127.u8[12] & 0x1F);
	// vmaddfp v9,v13,v5,v9
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v5.f32)), _mm_load_ps(ctx.v9.f32)));
	// vmulfp128 v2,v46,v60
	_mm_store_ps(ctx.v2.f32, _mm_mul_ps(_mm_load_ps(ctx.v46.f32), _mm_load_ps(ctx.v60.f32)));
	// vupklsb128 v59,v29,v96
	_mm_store_si128((__m128i*)ctx.v59.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v29.s16)));
	// vmulfp128 v3,v46,v35
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(ctx.v46.f32), _mm_load_ps(ctx.v35.f32)));
	// vupkhsb128 v33,v1,v96
	_mm_store_si128((__m128i*)ctx.v33.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v1.s16), _mm_load_si128((__m128i*)ctx.v1.s16))));
	// vmulfp128 v31,v46,v58
	_mm_store_ps(ctx.v31.f32, _mm_mul_ps(_mm_load_ps(ctx.v46.f32), _mm_load_ps(ctx.v58.f32)));
	// vupklsb128 v57,v28,v96
	_mm_store_si128((__m128i*)ctx.v57.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v28.s16)));
	// vmaddfp v8,v13,v4,v8
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v4.f32)), _mm_load_ps(ctx.v8.f32)));
	// vupkhsb128 v56,v27,v96
	_mm_store_si128((__m128i*)ctx.v56.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v27.s16), _mm_load_si128((__m128i*)ctx.v27.s16))));
	// vslw128 v5,v34,v127
	ctx.v5.u32[0] = ctx.v34.u32[0] << (ctx.v127.u8[0] & 0x1F);
	ctx.v5.u32[1] = ctx.v34.u32[1] << (ctx.v127.u8[4] & 0x1F);
	ctx.v5.u32[2] = ctx.v34.u32[2] << (ctx.v127.u8[8] & 0x1F);
	ctx.v5.u32[3] = ctx.v34.u32[3] << (ctx.v127.u8[12] & 0x1F);
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// vslw128 v6,v37,v127
	ctx.v6.u32[0] = ctx.v37.u32[0] << (ctx.v127.u8[0] & 0x1F);
	ctx.v6.u32[1] = ctx.v37.u32[1] << (ctx.v127.u8[4] & 0x1F);
	ctx.v6.u32[2] = ctx.v37.u32[2] << (ctx.v127.u8[8] & 0x1F);
	ctx.v6.u32[3] = ctx.v37.u32[3] << (ctx.v127.u8[12] & 0x1F);
	// vslw128 v1,v33,v127
	ctx.v1.u32[0] = ctx.v33.u32[0] << (ctx.v127.u8[0] & 0x1F);
	ctx.v1.u32[1] = ctx.v33.u32[1] << (ctx.v127.u8[4] & 0x1F);
	ctx.v1.u32[2] = ctx.v33.u32[2] << (ctx.v127.u8[8] & 0x1F);
	ctx.v1.u32[3] = ctx.v33.u32[3] << (ctx.v127.u8[12] & 0x1F);
	// vslw128 v4,v59,v127
	ctx.v4.u32[0] = ctx.v59.u32[0] << (ctx.v127.u8[0] & 0x1F);
	ctx.v4.u32[1] = ctx.v59.u32[1] << (ctx.v127.u8[4] & 0x1F);
	ctx.v4.u32[2] = ctx.v59.u32[2] << (ctx.v127.u8[8] & 0x1F);
	ctx.v4.u32[3] = ctx.v59.u32[3] << (ctx.v127.u8[12] & 0x1F);
	// vslw128 v30,v57,v127
	ctx.v30.u32[0] = ctx.v57.u32[0] << (ctx.v127.u8[0] & 0x1F);
	ctx.v30.u32[1] = ctx.v57.u32[1] << (ctx.v127.u8[4] & 0x1F);
	ctx.v30.u32[2] = ctx.v57.u32[2] << (ctx.v127.u8[8] & 0x1F);
	ctx.v30.u32[3] = ctx.v57.u32[3] << (ctx.v127.u8[12] & 0x1F);
	// vslw128 v29,v56,v127
	ctx.v29.u32[0] = ctx.v56.u32[0] << (ctx.v127.u8[0] & 0x1F);
	ctx.v29.u32[1] = ctx.v56.u32[1] << (ctx.v127.u8[4] & 0x1F);
	ctx.v29.u32[2] = ctx.v56.u32[2] << (ctx.v127.u8[8] & 0x1F);
	ctx.v29.u32[3] = ctx.v56.u32[3] << (ctx.v127.u8[12] & 0x1F);
	// vaddshs v25,v26,v0
	_mm_store_si128((__m128i*)ctx.v25.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v26.s16), _mm_load_si128((__m128i*)ctx.v0.s16)));
	// vmaddfp v10,v12,v5,v10
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v5.f32)), _mm_load_ps(ctx.v10.f32)));
	// vaddshs v23,v24,v0
	_mm_store_si128((__m128i*)ctx.v23.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v24.s16), _mm_load_si128((__m128i*)ctx.v0.s16)));
	// vmaddfp v9,v12,v1,v9
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v1.f32)), _mm_load_ps(ctx.v9.f32)));
	// vmaddfp v0,v11,v4,v2
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v4.f32)), _mm_load_ps(ctx.v2.f32)));
	// vmaddfp v6,v11,v6,v3
	_mm_store_ps(ctx.v6.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(ctx.v3.f32)));
	// vmaddfp v5,v11,v30,v31
	_mm_store_ps(ctx.v5.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v30.f32)), _mm_load_ps(ctx.v31.f32)));
	// vupkhsb128 v55,v25,v96
	_mm_store_si128((__m128i*)ctx.v55.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v25.s16), _mm_load_si128((__m128i*)ctx.v25.s16))));
	// vmaddfp v8,v12,v29,v8
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v29.f32)), _mm_load_ps(ctx.v8.f32)));
	// vupklsb128 v53,v23,v96
	_mm_store_si128((__m128i*)ctx.v53.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v23.s16)));
	// vupklsb128 v52,v25,v96
	_mm_store_si128((__m128i*)ctx.v52.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v25.s16)));
	// vupkhsb128 v51,v23,v96
	_mm_store_si128((__m128i*)ctx.v51.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v23.s16), _mm_load_si128((__m128i*)ctx.v23.s16))));
	// vslw128 v54,v55,v127
	ctx.v54.u32[0] = ctx.v55.u32[0] << (ctx.v127.u8[0] & 0x1F);
	ctx.v54.u32[1] = ctx.v55.u32[1] << (ctx.v127.u8[4] & 0x1F);
	ctx.v54.u32[2] = ctx.v55.u32[2] << (ctx.v127.u8[8] & 0x1F);
	ctx.v54.u32[3] = ctx.v55.u32[3] << (ctx.v127.u8[12] & 0x1F);
	// vaddfp v9,v9,v0
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v0.f32)));
	// vslw128 v0,v53,v127
	ctx.v0.u32[0] = ctx.v53.u32[0] << (ctx.v127.u8[0] & 0x1F);
	ctx.v0.u32[1] = ctx.v53.u32[1] << (ctx.v127.u8[4] & 0x1F);
	ctx.v0.u32[2] = ctx.v53.u32[2] << (ctx.v127.u8[8] & 0x1F);
	ctx.v0.u32[3] = ctx.v53.u32[3] << (ctx.v127.u8[12] & 0x1F);
	// vaddfp v10,v10,v6
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v6.f32)));
	// vmulfp128 v6,v46,v54
	_mm_store_ps(ctx.v6.f32, _mm_mul_ps(_mm_load_ps(ctx.v46.f32), _mm_load_ps(ctx.v54.f32)));
	// vaddfp v8,v8,v5
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v5.f32)));
	// vmaddfp v0,v13,v0,v7
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v7.f32)));
	// vslw128 v5,v52,v127
	ctx.v5.u32[0] = ctx.v52.u32[0] << (ctx.v127.u8[0] & 0x1F);
	ctx.v5.u32[1] = ctx.v52.u32[1] << (ctx.v127.u8[4] & 0x1F);
	ctx.v5.u32[2] = ctx.v52.u32[2] << (ctx.v127.u8[8] & 0x1F);
	ctx.v5.u32[3] = ctx.v52.u32[3] << (ctx.v127.u8[12] & 0x1F);
	// vslw128 v4,v51,v127
	ctx.v4.u32[0] = ctx.v51.u32[0] << (ctx.v127.u8[0] & 0x1F);
	ctx.v4.u32[1] = ctx.v51.u32[1] << (ctx.v127.u8[4] & 0x1F);
	ctx.v4.u32[2] = ctx.v51.u32[2] << (ctx.v127.u8[8] & 0x1F);
	ctx.v4.u32[3] = ctx.v51.u32[3] << (ctx.v127.u8[12] & 0x1F);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// vmaddfp v13,v11,v5,v6
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v5.f32)), _mm_load_ps(ctx.v6.f32)));
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// vmaddfp v0,v12,v4,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v4.f32)), _mm_load_ps(ctx.v0.f32)));
	// vaddfp v7,v0,v13
	_mm_store_ps(ctx.v7.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// bdnz 0x82a1d978
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A1D978;
	// li r10,-128
	ctx.r10.s64 = -128;
	// dcbf r10,r30
	// li r9,-128
	ctx.r9.s64 = -128;
	// dcbf r9,r29
	// li r8,-128
	ctx.r8.s64 = -128;
	// dcbf r8,r28
	// li r7,-128
	ctx.r7.s64 = -128;
	// dcbf r7,r31
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x82a1d944
	if (!ctx.cr0.eq) goto loc_82A1D944;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// dcbt r25,r31
	// li r9,3616
	ctx.r9.s64 = 3616;
	// dcbt r9,r31
	// li r8,7216
	ctx.r8.s64 = 7216;
	// dcbt r8,r31
	// li r7,10816
	ctx.r7.s64 = 10816;
	// dcbt r7,r31
	// lvx128 v50,r0,r28
	simd::store_shuffled(ctx.v50, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lvx128 v49,r0,r31
	simd::store_shuffled(ctx.v49, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// vrefp128 v48,v63
	_mm_store_ps(ctx.v48.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v63.f32)));
	// vupkhsb128 v47,v50,v0
	_mm_store_si128((__m128i*)ctx.v47.s16, _mm_cvtepi8_epi16(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v50.s8), _mm_load_si128((__m128i*)ctx.v50.s8))));
	// lvx128 v13,r11,r25
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r25.u32) & ~0xF), VectorMaskL));
	// vupkhsb128 v46,v49,v0
	_mm_store_si128((__m128i*)ctx.v46.s16, _mm_cvtepi8_epi16(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v49.s8), _mm_load_si128((__m128i*)ctx.v49.s8))));
	// lvx128 v43,r0,r30
	simd::store_shuffled(ctx.v43, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// vupklsb128 v42,v49,v0
	_mm_store_si128((__m128i*)ctx.v42.s32, _mm_cvtepi8_epi16(_mm_load_si128((__m128i*)ctx.v49.s16)));
	// lvx128 v45,r0,r29
	simd::store_shuffled(ctx.v45, simd::load_and_shuffle(base + ((ctx.r29.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r6
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vupklsb128 v44,v50,v0
	_mm_store_si128((__m128i*)ctx.v44.s32, _mm_cvtepi8_epi16(_mm_load_si128((__m128i*)ctx.v50.s16)));
	// vand128 v12,v47,v126
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)ctx.v126.u8)));
	// vupkhsb128 v41,v45,v0
	_mm_store_si128((__m128i*)ctx.v41.s16, _mm_cvtepi8_epi16(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v45.s8), _mm_load_si128((__m128i*)ctx.v45.s8))));
	// vand128 v11,v46,v126
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v46.u8), _mm_load_si128((__m128i*)ctx.v126.u8)));
	// vupklsb128 v40,v43,v0
	_mm_store_si128((__m128i*)ctx.v40.s32, _mm_cvtepi8_epi16(_mm_load_si128((__m128i*)ctx.v43.s16)));
	// vand128 v5,v42,v126
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v42.u8), _mm_load_si128((__m128i*)ctx.v126.u8)));
	// vupkhsb128 v39,v43,v0
	_mm_store_si128((__m128i*)ctx.v39.s16, _mm_cvtepi8_epi16(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v43.s8), _mm_load_si128((__m128i*)ctx.v43.s8))));
	// vand128 v6,v44,v126
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v44.u8), _mm_load_si128((__m128i*)ctx.v126.u8)));
	// vupklsb128 v38,v45,v0
	_mm_store_si128((__m128i*)ctx.v38.s32, _mm_cvtepi8_epi16(_mm_load_si128((__m128i*)ctx.v45.s16)));
	// vaddshs v4,v12,v0
	_mm_store_si128((__m128i*)ctx.v4.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v12.s16), _mm_load_si128((__m128i*)ctx.v0.s16)));
	// lvx128 v12,r11,r26
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r26.u32) & ~0xF), VectorMaskL));
	// vaddshs v3,v11,v0
	_mm_store_si128((__m128i*)ctx.v3.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v11.s16), _mm_load_si128((__m128i*)ctx.v0.s16)));
	// lvx128 v11,r11,r27
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r27.u32) & ~0xF), VectorMaskL));
	// vaddshs v1,v5,v0
	_mm_store_si128((__m128i*)ctx.v1.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v5.s16), _mm_load_si128((__m128i*)ctx.v0.s16)));
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// vaddshs v2,v6,v0
	_mm_store_si128((__m128i*)ctx.v2.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v6.s16), _mm_load_si128((__m128i*)ctx.v0.s16)));
	// lvx128 v6,r0,r11
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vor128 v37,v4,v4
	_mm_store_si128((__m128i*)ctx.v37.u8, _mm_load_si128((__m128i*)ctx.v4.u8));
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// vor128 v36,v3,v3
	_mm_store_si128((__m128i*)ctx.v36.u8, _mm_load_si128((__m128i*)ctx.v3.u8));
	// vupkhsb128 v32,v1,v96
	_mm_store_si128((__m128i*)ctx.v32.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v1.s16), _mm_load_si128((__m128i*)ctx.v1.s16))));
	// vand128 v31,v41,v126
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v41.u8), _mm_load_si128((__m128i*)ctx.v126.u8)));
	// vupkhsb128 v33,v2,v96
	_mm_store_si128((__m128i*)ctx.v33.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v2.s16), _mm_load_si128((__m128i*)ctx.v2.s16))));
	// vand128 v30,v40,v126
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v40.u8), _mm_load_si128((__m128i*)ctx.v126.u8)));
	// vupklsb128 v35,v37,v96
	_mm_store_si128((__m128i*)ctx.v35.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v37.s16)));
	// vand128 v29,v39,v126
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v39.u8), _mm_load_si128((__m128i*)ctx.v126.u8)));
	// vupklsb128 v34,v36,v96
	_mm_store_si128((__m128i*)ctx.v34.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v36.s16)));
	// vand128 v28,v38,v126
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v38.u8), _mm_load_si128((__m128i*)ctx.v126.u8)));
	// vupklsb128 v62,v2,v96
	_mm_store_si128((__m128i*)ctx.v62.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v2.s16)));
	// vslw128 v2,v32,v127
	ctx.v2.u32[0] = ctx.v32.u32[0] << (ctx.v127.u8[0] & 0x1F);
	ctx.v2.u32[1] = ctx.v32.u32[1] << (ctx.v127.u8[4] & 0x1F);
	ctx.v2.u32[2] = ctx.v32.u32[2] << (ctx.v127.u8[8] & 0x1F);
	ctx.v2.u32[3] = ctx.v32.u32[3] << (ctx.v127.u8[12] & 0x1F);
	// vslw128 v3,v33,v127
	ctx.v3.u32[0] = ctx.v33.u32[0] << (ctx.v127.u8[0] & 0x1F);
	ctx.v3.u32[1] = ctx.v33.u32[1] << (ctx.v127.u8[4] & 0x1F);
	ctx.v3.u32[2] = ctx.v33.u32[2] << (ctx.v127.u8[8] & 0x1F);
	ctx.v3.u32[3] = ctx.v33.u32[3] << (ctx.v127.u8[12] & 0x1F);
	// vupklsb128 v63,v1,v96
	_mm_store_si128((__m128i*)ctx.v63.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v1.s16)));
	// vslw128 v5,v35,v127
	ctx.v5.u32[0] = ctx.v35.u32[0] << (ctx.v127.u8[0] & 0x1F);
	ctx.v5.u32[1] = ctx.v35.u32[1] << (ctx.v127.u8[4] & 0x1F);
	ctx.v5.u32[2] = ctx.v35.u32[2] << (ctx.v127.u8[8] & 0x1F);
	ctx.v5.u32[3] = ctx.v35.u32[3] << (ctx.v127.u8[12] & 0x1F);
	// vupkhsb128 v61,v36,v96
	_mm_store_si128((__m128i*)ctx.v61.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v36.s16), _mm_load_si128((__m128i*)ctx.v36.s16))));
	// vslw128 v4,v34,v127
	ctx.v4.u32[0] = ctx.v34.u32[0] << (ctx.v127.u8[0] & 0x1F);
	ctx.v4.u32[1] = ctx.v34.u32[1] << (ctx.v127.u8[4] & 0x1F);
	ctx.v4.u32[2] = ctx.v34.u32[2] << (ctx.v127.u8[8] & 0x1F);
	ctx.v4.u32[3] = ctx.v34.u32[3] << (ctx.v127.u8[12] & 0x1F);
	// vupkhsb128 v60,v37,v96
	_mm_store_si128((__m128i*)ctx.v60.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v37.s16), _mm_load_si128((__m128i*)ctx.v37.s16))));
	// vaddshs v27,v31,v0
	_mm_store_si128((__m128i*)ctx.v27.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v31.s16), _mm_load_si128((__m128i*)ctx.v0.s16)));
	// vaddshs v26,v30,v0
	_mm_store_si128((__m128i*)ctx.v26.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v30.s16), _mm_load_si128((__m128i*)ctx.v0.s16)));
	// vmaddfp v8,v13,v5,v8
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v5.f32)), _mm_load_ps(ctx.v8.f32)));
	// vaddshs v24,v28,v0
	_mm_store_si128((__m128i*)ctx.v24.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v28.s16), _mm_load_si128((__m128i*)ctx.v0.s16)));
	// vmaddfp v7,v13,v4,v7
	_mm_store_ps(ctx.v7.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v4.f32)), _mm_load_ps(ctx.v7.f32)));
	// vaddshs v25,v29,v0
	_mm_store_si128((__m128i*)ctx.v25.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v29.s16), _mm_load_si128((__m128i*)ctx.v0.s16)));
	// vslw128 v1,v63,v127
	ctx.v1.u32[0] = ctx.v63.u32[0] << (ctx.v127.u8[0] & 0x1F);
	ctx.v1.u32[1] = ctx.v63.u32[1] << (ctx.v127.u8[4] & 0x1F);
	ctx.v1.u32[2] = ctx.v63.u32[2] << (ctx.v127.u8[8] & 0x1F);
	ctx.v1.u32[3] = ctx.v63.u32[3] << (ctx.v127.u8[12] & 0x1F);
	// vupklsb128 v59,v27,v96
	_mm_store_si128((__m128i*)ctx.v59.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v27.s16)));
	// vslw128 v5,v62,v127
	ctx.v5.u32[0] = ctx.v62.u32[0] << (ctx.v127.u8[0] & 0x1F);
	ctx.v5.u32[1] = ctx.v62.u32[1] << (ctx.v127.u8[4] & 0x1F);
	ctx.v5.u32[2] = ctx.v62.u32[2] << (ctx.v127.u8[8] & 0x1F);
	ctx.v5.u32[3] = ctx.v62.u32[3] << (ctx.v127.u8[12] & 0x1F);
	// vupkhsb128 v54,v26,v96
	_mm_store_si128((__m128i*)ctx.v54.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v26.s16), _mm_load_si128((__m128i*)ctx.v26.s16))));
	// vslw128 v31,v61,v127
	ctx.v31.u32[0] = ctx.v61.u32[0] << (ctx.v127.u8[0] & 0x1F);
	ctx.v31.u32[1] = ctx.v61.u32[1] << (ctx.v127.u8[4] & 0x1F);
	ctx.v31.u32[2] = ctx.v61.u32[2] << (ctx.v127.u8[8] & 0x1F);
	ctx.v31.u32[3] = ctx.v61.u32[3] << (ctx.v127.u8[12] & 0x1F);
	// vupkhsb128 v55,v24,v96
	_mm_store_si128((__m128i*)ctx.v55.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v24.s16), _mm_load_si128((__m128i*)ctx.v24.s16))));
	// vslw128 v4,v60,v127
	ctx.v4.u32[0] = ctx.v60.u32[0] << (ctx.v127.u8[0] & 0x1F);
	ctx.v4.u32[1] = ctx.v60.u32[1] << (ctx.v127.u8[4] & 0x1F);
	ctx.v4.u32[2] = ctx.v60.u32[2] << (ctx.v127.u8[8] & 0x1F);
	ctx.v4.u32[3] = ctx.v60.u32[3] << (ctx.v127.u8[12] & 0x1F);
	// vupklsb128 v58,v25,v96
	_mm_store_si128((__m128i*)ctx.v58.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v25.s16)));
	// vupklsb128 v53,v24,v96
	_mm_store_si128((__m128i*)ctx.v53.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v24.s16)));
	// vupklsb128 v52,v26,v96
	_mm_store_si128((__m128i*)ctx.v52.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v26.s16)));
	// vmaddfp v0,v12,v3,v8
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v3.f32)), _mm_load_ps(ctx.v8.f32)));
	// vmaddfp v8,v12,v2,v7
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v2.f32)), _mm_load_ps(ctx.v7.f32)));
	// vmaddfp v0,v11,v5,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v5.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v8,v11,v1,v8
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v1.f32)), _mm_load_ps(ctx.v8.f32)));
	// vmaddfp v0,v6,v4,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v4.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v8,v6,v31,v8
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v31.f32)), _mm_load_ps(ctx.v8.f32)));
	// vmsum4fp128 v57,v0,v125
	_mm_store_ps(ctx.v57.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v125.f32), 0xFF));
	// vslw128 v0,v59,v127
	ctx.v0.u32[0] = ctx.v59.u32[0] << (ctx.v127.u8[0] & 0x1F);
	ctx.v0.u32[1] = ctx.v59.u32[1] << (ctx.v127.u8[4] & 0x1F);
	ctx.v0.u32[2] = ctx.v59.u32[2] << (ctx.v127.u8[8] & 0x1F);
	ctx.v0.u32[3] = ctx.v59.u32[3] << (ctx.v127.u8[12] & 0x1F);
	// vmsum4fp128 v56,v8,v125
	_mm_store_ps(ctx.v56.f32, _mm_dp_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v125.f32), 0xFF));
	// vslw128 v8,v58,v127
	ctx.v8.u32[0] = ctx.v58.u32[0] << (ctx.v127.u8[0] & 0x1F);
	ctx.v8.u32[1] = ctx.v58.u32[1] << (ctx.v127.u8[4] & 0x1F);
	ctx.v8.u32[2] = ctx.v58.u32[2] << (ctx.v127.u8[8] & 0x1F);
	ctx.v8.u32[3] = ctx.v58.u32[3] << (ctx.v127.u8[12] & 0x1F);
	// vmaddfp v0,v13,v0,v9
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v9.f32)));
	// vslw128 v9,v55,v127
	ctx.v9.u32[0] = ctx.v55.u32[0] << (ctx.v127.u8[0] & 0x1F);
	ctx.v9.u32[1] = ctx.v55.u32[1] << (ctx.v127.u8[4] & 0x1F);
	ctx.v9.u32[2] = ctx.v55.u32[2] << (ctx.v127.u8[8] & 0x1F);
	ctx.v9.u32[3] = ctx.v55.u32[3] << (ctx.v127.u8[12] & 0x1F);
	// vmaddfp v13,v13,v8,v10
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v10.f32)));
	// vslw128 v7,v54,v127
	ctx.v7.u32[0] = ctx.v54.u32[0] << (ctx.v127.u8[0] & 0x1F);
	ctx.v7.u32[1] = ctx.v54.u32[1] << (ctx.v127.u8[4] & 0x1F);
	ctx.v7.u32[2] = ctx.v54.u32[2] << (ctx.v127.u8[8] & 0x1F);
	ctx.v7.u32[3] = ctx.v54.u32[3] << (ctx.v127.u8[12] & 0x1F);
	// vslw128 v5,v53,v127
	ctx.v5.u32[0] = ctx.v53.u32[0] << (ctx.v127.u8[0] & 0x1F);
	ctx.v5.u32[1] = ctx.v53.u32[1] << (ctx.v127.u8[4] & 0x1F);
	ctx.v5.u32[2] = ctx.v53.u32[2] << (ctx.v127.u8[8] & 0x1F);
	ctx.v5.u32[3] = ctx.v53.u32[3] << (ctx.v127.u8[12] & 0x1F);
	// vupkhsb128 v51,v27,v96
	_mm_store_si128((__m128i*)ctx.v51.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v27.s16), _mm_load_si128((__m128i*)ctx.v27.s16))));
	// vslw128 v10,v52,v127
	ctx.v10.u32[0] = ctx.v52.u32[0] << (ctx.v127.u8[0] & 0x1F);
	ctx.v10.u32[1] = ctx.v52.u32[1] << (ctx.v127.u8[4] & 0x1F);
	ctx.v10.u32[2] = ctx.v52.u32[2] << (ctx.v127.u8[8] & 0x1F);
	ctx.v10.u32[3] = ctx.v52.u32[3] << (ctx.v127.u8[12] & 0x1F);
	// vupkhsb128 v50,v25,v96
	_mm_store_si128((__m128i*)ctx.v50.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v25.s16), _mm_load_si128((__m128i*)ctx.v25.s16))));
	// addi r29,r30,3600
	ctx.r29.s64 = ctx.r30.s64 + 3600;
	// addi r28,r30,7200
	ctx.r28.s64 = ctx.r30.s64 + 7200;
	// vslw128 v8,v51,v127
	ctx.v8.u32[0] = ctx.v51.u32[0] << (ctx.v127.u8[0] & 0x1F);
	ctx.v8.u32[1] = ctx.v51.u32[1] << (ctx.v127.u8[4] & 0x1F);
	ctx.v8.u32[2] = ctx.v51.u32[2] << (ctx.v127.u8[8] & 0x1F);
	ctx.v8.u32[3] = ctx.v51.u32[3] << (ctx.v127.u8[12] & 0x1F);
	// addi r31,r30,10800
	ctx.r31.s64 = ctx.r30.s64 + 10800;
	// vslw128 v4,v50,v127
	ctx.v4.u32[0] = ctx.v50.u32[0] << (ctx.v127.u8[0] & 0x1F);
	ctx.v4.u32[1] = ctx.v50.u32[1] << (ctx.v127.u8[4] & 0x1F);
	ctx.v4.u32[2] = ctx.v50.u32[2] << (ctx.v127.u8[8] & 0x1F);
	ctx.v4.u32[3] = ctx.v50.u32[3] << (ctx.v127.u8[12] & 0x1F);
	// vmaddfp v0,v12,v9,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v13,v12,v7,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v11,v5,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v5.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v13,v11,v10,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v6,v8,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v13,v6,v4,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v4.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmsum4fp128 v49,v0,v125
	_mm_store_ps(ctx.v49.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v125.f32), 0xFF));
	// vmsum4fp128 v47,v13,v125
	_mm_store_ps(ctx.v47.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v125.f32), 0xFF));
	// vrlimi128 v47,v49,4,0
	_mm_store_ps(ctx.v47.f32, _mm_blend_ps(_mm_load_ps(ctx.v47.f32), _mm_permute_ps(_mm_load_ps(ctx.v49.f32), 228), 4));
	// vrlimi128 v47,v57,2,0
	_mm_store_ps(ctx.v47.f32, _mm_blend_ps(_mm_load_ps(ctx.v47.f32), _mm_permute_ps(_mm_load_ps(ctx.v57.f32), 228), 2));
	// vrlimi128 v47,v56,1,0
	_mm_store_ps(ctx.v47.f32, _mm_blend_ps(_mm_load_ps(ctx.v47.f32), _mm_permute_ps(_mm_load_ps(ctx.v56.f32), 228), 1));
	// vmulfp128 v46,v47,v48
	_mm_store_ps(ctx.v46.f32, _mm_mul_ps(_mm_load_ps(ctx.v47.f32), _mm_load_ps(ctx.v48.f32)));
	// vmsum4fp128 v45,v46,v46
	_mm_store_ps(ctx.v45.f32, _mm_dp_ps(_mm_load_ps(ctx.v46.f32), _mm_load_ps(ctx.v46.f32), 0xFF));
	// stvx128 v46,r0,r23
	_mm_store_si128((__m128i*)(base + ((ctx.r23.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v46.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r23,r23,16
	ctx.r23.s64 = ctx.r23.s64 + 16;
	// vaddfp128 v124,v124,v45
	_mm_store_ps(ctx.v124.f32, _mm_add_ps(_mm_load_ps(ctx.v124.f32), _mm_load_ps(ctx.v45.f32)));
	// bne 0x82a1d928
	if (!ctx.cr0.eq) goto loc_82A1D928;
	// vrsqrtefp128 v44,v124
	_mm_store_ps(ctx.v44.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v124.f32))));
	// lwz r11,16(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 16);
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// addi r8,r11,48
	ctx.r8.s64 = ctx.r11.s64 + 48;
	// addi r7,r11,64
	ctx.r7.s64 = ctx.r11.s64 + 64;
	// lvx128 v43,r0,r11
	simd::store_shuffled(ctx.v43, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r6,r11,80
	ctx.r6.s64 = ctx.r11.s64 + 80;
	// addi r5,r11,96
	ctx.r5.s64 = ctx.r11.s64 + 96;
	// lvx128 v42,r0,r10
	simd::store_shuffled(ctx.v42, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r4,r11,112
	ctx.r4.s64 = ctx.r11.s64 + 112;
	// lvx128 v41,r0,r9
	simd::store_shuffled(ctx.v41, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// lvx128 v40,r0,r8
	simd::store_shuffled(ctx.v40, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r31,r11,144
	ctx.r31.s64 = ctx.r11.s64 + 144;
	// lvx128 v39,r0,r7
	simd::store_shuffled(ctx.v39, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// addi r30,r11,160
	ctx.r30.s64 = ctx.r11.s64 + 160;
	// lvx128 v38,r0,r6
	simd::store_shuffled(ctx.v38, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// addi r29,r11,176
	ctx.r29.s64 = ctx.r11.s64 + 176;
	// lvx128 v37,r0,r5
	simd::store_shuffled(ctx.v37, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// addi r28,r11,192
	ctx.r28.s64 = ctx.r11.s64 + 192;
	// lvx128 v36,r0,r4
	simd::store_shuffled(ctx.v36, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r27,r11,208
	ctx.r27.s64 = ctx.r11.s64 + 208;
	// lvx128 v35,r0,r3
	simd::store_shuffled(ctx.v35, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// addi r26,r11,224
	ctx.r26.s64 = ctx.r11.s64 + 224;
	// lvx128 v34,r0,r31
	simd::store_shuffled(ctx.v34, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// addi r25,r11,240
	ctx.r25.s64 = ctx.r11.s64 + 240;
	// lvx128 v33,r0,r30
	simd::store_shuffled(ctx.v33, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// addi r24,r11,256
	ctx.r24.s64 = ctx.r11.s64 + 256;
	// lvx128 v32,r0,r29
	simd::store_shuffled(ctx.v32, simd::load_and_shuffle(base + ((ctx.r29.u32) & ~0xF), VectorMaskL));
	// addi r23,r11,272
	ctx.r23.s64 = ctx.r11.s64 + 272;
	// lvx128 v63,r0,r28
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// addi r22,r11,288
	ctx.r22.s64 = ctx.r11.s64 + 288;
	// lvx128 v62,r0,r27
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r27.u32) & ~0xF), VectorMaskL));
	// lvx128 v60,r0,r26
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r26.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v61,v42,v44
	_mm_store_ps(ctx.v61.f32, _mm_mul_ps(_mm_load_ps(ctx.v42.f32), _mm_load_ps(ctx.v44.f32)));
	// lvx128 v58,r0,r25
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r25.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v57,v41,v44
	_mm_store_ps(ctx.v57.f32, _mm_mul_ps(_mm_load_ps(ctx.v41.f32), _mm_load_ps(ctx.v44.f32)));
	// lvx128 v56,r0,r24
	simd::store_shuffled(ctx.v56, simd::load_and_shuffle(base + ((ctx.r24.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v55,v40,v44
	_mm_store_ps(ctx.v55.f32, _mm_mul_ps(_mm_load_ps(ctx.v40.f32), _mm_load_ps(ctx.v44.f32)));
	// lvx128 v54,r0,r23
	simd::store_shuffled(ctx.v54, simd::load_and_shuffle(base + ((ctx.r23.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v53,v39,v44
	_mm_store_ps(ctx.v53.f32, _mm_mul_ps(_mm_load_ps(ctx.v39.f32), _mm_load_ps(ctx.v44.f32)));
	// lvx128 v46,r0,r22
	simd::store_shuffled(ctx.v46, simd::load_and_shuffle(base + ((ctx.r22.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v52,v38,v44
	_mm_store_ps(ctx.v52.f32, _mm_mul_ps(_mm_load_ps(ctx.v38.f32), _mm_load_ps(ctx.v44.f32)));
	// vmulfp128 v51,v37,v44
	_mm_store_ps(ctx.v51.f32, _mm_mul_ps(_mm_load_ps(ctx.v37.f32), _mm_load_ps(ctx.v44.f32)));
	// addi r21,r11,304
	ctx.r21.s64 = ctx.r11.s64 + 304;
	// vmulfp128 v50,v36,v44
	_mm_store_ps(ctx.v50.f32, _mm_mul_ps(_mm_load_ps(ctx.v36.f32), _mm_load_ps(ctx.v44.f32)));
	// vmulfp128 v59,v43,v44
	_mm_store_ps(ctx.v59.f32, _mm_mul_ps(_mm_load_ps(ctx.v43.f32), _mm_load_ps(ctx.v44.f32)));
	// vmulfp128 v49,v35,v44
	_mm_store_ps(ctx.v49.f32, _mm_mul_ps(_mm_load_ps(ctx.v35.f32), _mm_load_ps(ctx.v44.f32)));
	// vmulfp128 v48,v34,v44
	_mm_store_ps(ctx.v48.f32, _mm_mul_ps(_mm_load_ps(ctx.v34.f32), _mm_load_ps(ctx.v44.f32)));
	// vmulfp128 v47,v33,v44
	_mm_store_ps(ctx.v47.f32, _mm_mul_ps(_mm_load_ps(ctx.v33.f32), _mm_load_ps(ctx.v44.f32)));
	// lvx128 v43,r0,r21
	simd::store_shuffled(ctx.v43, simd::load_and_shuffle(base + ((ctx.r21.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v45,v32,v44
	_mm_store_ps(ctx.v45.f32, _mm_mul_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v44.f32)));
	// vmulfp128 v42,v63,v44
	_mm_store_ps(ctx.v42.f32, _mm_mul_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v44.f32)));
	// stvx128 v61,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v41,v62,v44
	_mm_store_ps(ctx.v41.f32, _mm_mul_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v44.f32)));
	// stvx128 v57,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v40,v60,v44
	_mm_store_ps(ctx.v40.f32, _mm_mul_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v44.f32)));
	// stvx128 v55,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v39,v58,v44
	_mm_store_ps(ctx.v39.f32, _mm_mul_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v44.f32)));
	// stvx128 v53,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v38,v56,v44
	_mm_store_ps(ctx.v38.f32, _mm_mul_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v44.f32)));
	// stvx128 v52,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v37,v54,v44
	_mm_store_ps(ctx.v37.f32, _mm_mul_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v44.f32)));
	// stvx128 v51,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v36,v46,v44
	_mm_store_ps(ctx.v36.f32, _mm_mul_ps(_mm_load_ps(ctx.v46.f32), _mm_load_ps(ctx.v44.f32)));
	// stvx128 v50,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v59,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r11,320
	ctx.r10.s64 = ctx.r11.s64 + 320;
	// stvx128 v49,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r11,336
	ctx.r9.s64 = ctx.r11.s64 + 336;
	// stvx128 v48,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v47,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v45,r0,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v45.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v42,r0,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v42.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v41,r0,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v41.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v40,r0,r26
	_mm_store_si128((__m128i*)(base + ((ctx.r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v40.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v39,r0,r25
	_mm_store_si128((__m128i*)(base + ((ctx.r25.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v39.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v38,r0,r24
	_mm_store_si128((__m128i*)(base + ((ctx.r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v38.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v37,r0,r23
	_mm_store_si128((__m128i*)(base + ((ctx.r23.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v37.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v36,r0,r22
	_mm_store_si128((__m128i*)(base + ((ctx.r22.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v36.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v35,r0,r10
	simd::store_shuffled(ctx.v35, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r8,r11,352
	ctx.r8.s64 = ctx.r11.s64 + 352;
	// vmulfp128 v34,v35,v44
	_mm_store_ps(ctx.v34.f32, _mm_mul_ps(_mm_load_ps(ctx.v35.f32), _mm_load_ps(ctx.v44.f32)));
	// addi r7,r11,368
	ctx.r7.s64 = ctx.r11.s64 + 368;
	// addi r6,r11,384
	ctx.r6.s64 = ctx.r11.s64 + 384;
	// lvx128 v32,r0,r9
	simd::store_shuffled(ctx.v32, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r5,r11,400
	ctx.r5.s64 = ctx.r11.s64 + 400;
	// vmulfp128 v33,v43,v44
	_mm_store_ps(ctx.v33.f32, _mm_mul_ps(_mm_load_ps(ctx.v43.f32), _mm_load_ps(ctx.v44.f32)));
	// addi r4,r11,416
	ctx.r4.s64 = ctx.r11.s64 + 416;
	// vmulfp128 v51,v32,v44
	_mm_store_ps(ctx.v51.f32, _mm_mul_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v44.f32)));
	// addi r3,r11,432
	ctx.r3.s64 = ctx.r11.s64 + 432;
	// lvx128 v63,r0,r8
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r31,r11,448
	ctx.r31.s64 = ctx.r11.s64 + 448;
	// lvx128 v62,r0,r7
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// addi r30,r11,464
	ctx.r30.s64 = ctx.r11.s64 + 464;
	// lvx128 v61,r0,r6
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// addi r29,r11,480
	ctx.r29.s64 = ctx.r11.s64 + 480;
	// lvx128 v60,r0,r5
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// addi r28,r11,496
	ctx.r28.s64 = ctx.r11.s64 + 496;
	// lvx128 v59,r0,r4
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r27,r11,512
	ctx.r27.s64 = ctx.r11.s64 + 512;
	// lvx128 v58,r0,r3
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// addi r26,r11,528
	ctx.r26.s64 = ctx.r11.s64 + 528;
	// lvx128 v57,r0,r31
	simd::store_shuffled(ctx.v57, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// addi r25,r11,544
	ctx.r25.s64 = ctx.r11.s64 + 544;
	// lvx128 v56,r0,r30
	simd::store_shuffled(ctx.v56, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// addi r24,r11,560
	ctx.r24.s64 = ctx.r11.s64 + 560;
	// lvx128 v55,r0,r29
	simd::store_shuffled(ctx.v55, simd::load_and_shuffle(base + ((ctx.r29.u32) & ~0xF), VectorMaskL));
	// addi r23,r11,576
	ctx.r23.s64 = ctx.r11.s64 + 576;
	// lvx128 v54,r0,r28
	simd::store_shuffled(ctx.v54, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// addi r22,r11,592
	ctx.r22.s64 = ctx.r11.s64 + 592;
	// lvx128 v53,r0,r27
	simd::store_shuffled(ctx.v53, simd::load_and_shuffle(base + ((ctx.r27.u32) & ~0xF), VectorMaskL));
	// lvx128 v52,r0,r26
	simd::store_shuffled(ctx.v52, simd::load_and_shuffle(base + ((ctx.r26.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v49,v63,v44
	_mm_store_ps(ctx.v49.f32, _mm_mul_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v44.f32)));
	// lvx128 v50,r0,r25
	simd::store_shuffled(ctx.v50, simd::load_and_shuffle(base + ((ctx.r25.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v47,v62,v44
	_mm_store_ps(ctx.v47.f32, _mm_mul_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v44.f32)));
	// lvx128 v48,r0,r24
	simd::store_shuffled(ctx.v48, simd::load_and_shuffle(base + ((ctx.r24.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v45,v61,v44
	_mm_store_ps(ctx.v45.f32, _mm_mul_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v44.f32)));
	// lvx128 v46,r0,r23
	simd::store_shuffled(ctx.v46, simd::load_and_shuffle(base + ((ctx.r23.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v42,v60,v44
	_mm_store_ps(ctx.v42.f32, _mm_mul_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v44.f32)));
	// lvx128 v43,r0,r22
	simd::store_shuffled(ctx.v43, simd::load_and_shuffle(base + ((ctx.r22.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v41,v59,v44
	_mm_store_ps(ctx.v41.f32, _mm_mul_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v44.f32)));
	// stvx128 v34,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v34.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v40,v58,v44
	_mm_store_ps(ctx.v40.f32, _mm_mul_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v44.f32)));
	// vmulfp128 v39,v57,v44
	_mm_store_ps(ctx.v39.f32, _mm_mul_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v44.f32)));
	// addi r20,r11,608
	ctx.r20.s64 = ctx.r11.s64 + 608;
	// vmulfp128 v38,v56,v44
	_mm_store_ps(ctx.v38.f32, _mm_mul_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v44.f32)));
	// addi r19,r11,624
	ctx.r19.s64 = ctx.r11.s64 + 624;
	// vmulfp128 v37,v55,v44
	_mm_store_ps(ctx.v37.f32, _mm_mul_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v44.f32)));
	// addi r10,r11,640
	ctx.r10.s64 = ctx.r11.s64 + 640;
	// vmulfp128 v36,v54,v44
	_mm_store_ps(ctx.v36.f32, _mm_mul_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v44.f32)));
	// stvx128 v33,r0,r21
	_mm_store_si128((__m128i*)(base + ((ctx.r21.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v33.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v34,v53,v44
	_mm_store_ps(ctx.v34.f32, _mm_mul_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v44.f32)));
	// stvx128 v51,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v32,v52,v44
	_mm_store_ps(ctx.v32.f32, _mm_mul_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v44.f32)));
	// lvx128 v35,r0,r20
	simd::store_shuffled(ctx.v35, simd::load_and_shuffle(base + ((ctx.r20.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v63,v50,v44
	_mm_store_ps(ctx.v63.f32, _mm_mul_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v44.f32)));
	// lvx128 v33,r0,r19
	simd::store_shuffled(ctx.v33, simd::load_and_shuffle(base + ((ctx.r19.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v62,v48,v44
	_mm_store_ps(ctx.v62.f32, _mm_mul_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v44.f32)));
	// lvx128 v57,r0,r10
	simd::store_shuffled(ctx.v57, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v61,v46,v44
	_mm_store_ps(ctx.v61.f32, _mm_mul_ps(_mm_load_ps(ctx.v46.f32), _mm_load_ps(ctx.v44.f32)));
	// stvx128 v49,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v60,v43,v44
	_mm_store_ps(ctx.v60.f32, _mm_mul_ps(_mm_load_ps(ctx.v43.f32), _mm_load_ps(ctx.v44.f32)));
	// stvx128 v47,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v45,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v45.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v59,v35,v44
	_mm_store_ps(ctx.v59.f32, _mm_mul_ps(_mm_load_ps(ctx.v35.f32), _mm_load_ps(ctx.v44.f32)));
	// stvx128 v42,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v42.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v58,v33,v44
	_mm_store_ps(ctx.v58.f32, _mm_mul_ps(_mm_load_ps(ctx.v33.f32), _mm_load_ps(ctx.v44.f32)));
	// stvx128 v41,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v41.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r11,656
	ctx.r9.s64 = ctx.r11.s64 + 656;
	// stvx128 v40,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v40.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v39,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v39.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v38,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v38.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v37,r0,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v37.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v36,r0,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v36.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v34,r0,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v34.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v32,r0,r26
	_mm_store_si128((__m128i*)(base + ((ctx.r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v32.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r25
	_mm_store_si128((__m128i*)(base + ((ctx.r25.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r24
	_mm_store_si128((__m128i*)(base + ((ctx.r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r23
	_mm_store_si128((__m128i*)(base + ((ctx.r23.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v60,r0,r22
	_mm_store_si128((__m128i*)(base + ((ctx.r22.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v56,v57,v44
	_mm_store_ps(ctx.v56.f32, _mm_mul_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v44.f32)));
	// addi r8,r11,672
	ctx.r8.s64 = ctx.r11.s64 + 672;
	// addi r7,r11,688
	ctx.r7.s64 = ctx.r11.s64 + 688;
	// lvx128 v55,r0,r9
	simd::store_shuffled(ctx.v55, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r6,r11,704
	ctx.r6.s64 = ctx.r11.s64 + 704;
	// stvx128 v59,r0,r20
	_mm_store_si128((__m128i*)(base + ((ctx.r20.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r5,r11,720
	ctx.r5.s64 = ctx.r11.s64 + 720;
	// vmulfp128 v40,v55,v44
	_mm_store_ps(ctx.v40.f32, _mm_mul_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v44.f32)));
	// addi r4,r11,736
	ctx.r4.s64 = ctx.r11.s64 + 736;
	// stvx128 v58,r0,r19
	_mm_store_si128((__m128i*)(base + ((ctx.r19.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r11,752
	ctx.r3.s64 = ctx.r11.s64 + 752;
	// lvx128 v54,r0,r8
	simd::store_shuffled(ctx.v54, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r31,r11,768
	ctx.r31.s64 = ctx.r11.s64 + 768;
	// lvx128 v53,r0,r7
	simd::store_shuffled(ctx.v53, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// addi r30,r11,784
	ctx.r30.s64 = ctx.r11.s64 + 784;
	// lvx128 v52,r0,r6
	simd::store_shuffled(ctx.v52, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// addi r29,r11,800
	ctx.r29.s64 = ctx.r11.s64 + 800;
	// lvx128 v51,r0,r5
	simd::store_shuffled(ctx.v51, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// addi r28,r11,816
	ctx.r28.s64 = ctx.r11.s64 + 816;
	// lvx128 v50,r0,r4
	simd::store_shuffled(ctx.v50, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r27,r11,832
	ctx.r27.s64 = ctx.r11.s64 + 832;
	// lvx128 v49,r0,r3
	simd::store_shuffled(ctx.v49, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// addi r26,r11,848
	ctx.r26.s64 = ctx.r11.s64 + 848;
	// lvx128 v48,r0,r31
	simd::store_shuffled(ctx.v48, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// addi r25,r11,864
	ctx.r25.s64 = ctx.r11.s64 + 864;
	// lvx128 v47,r0,r30
	simd::store_shuffled(ctx.v47, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// addi r24,r11,880
	ctx.r24.s64 = ctx.r11.s64 + 880;
	// lvx128 v46,r0,r29
	simd::store_shuffled(ctx.v46, simd::load_and_shuffle(base + ((ctx.r29.u32) & ~0xF), VectorMaskL));
	// addi r23,r11,896
	ctx.r23.s64 = ctx.r11.s64 + 896;
	// lvx128 v45,r0,r28
	simd::store_shuffled(ctx.v45, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// addi r22,r11,912
	ctx.r22.s64 = ctx.r11.s64 + 912;
	// lvx128 v43,r0,r27
	simd::store_shuffled(ctx.v43, simd::load_and_shuffle(base + ((ctx.r27.u32) & ~0xF), VectorMaskL));
	// addi r21,r11,928
	ctx.r21.s64 = ctx.r11.s64 + 928;
	// lvx128 v42,r0,r26
	simd::store_shuffled(ctx.v42, simd::load_and_shuffle(base + ((ctx.r26.u32) & ~0xF), VectorMaskL));
	// lvx128 v41,r0,r25
	simd::store_shuffled(ctx.v41, simd::load_and_shuffle(base + ((ctx.r25.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v38,v54,v44
	_mm_store_ps(ctx.v38.f32, _mm_mul_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v44.f32)));
	// lvx128 v39,r0,r24
	simd::store_shuffled(ctx.v39, simd::load_and_shuffle(base + ((ctx.r24.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v36,v53,v44
	_mm_store_ps(ctx.v36.f32, _mm_mul_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v44.f32)));
	// lvx128 v37,r0,r23
	simd::store_shuffled(ctx.v37, simd::load_and_shuffle(base + ((ctx.r23.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v34,v52,v44
	_mm_store_ps(ctx.v34.f32, _mm_mul_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v44.f32)));
	// lvx128 v35,r0,r22
	simd::store_shuffled(ctx.v35, simd::load_and_shuffle(base + ((ctx.r22.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v32,v51,v44
	_mm_store_ps(ctx.v32.f32, _mm_mul_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v44.f32)));
	// lvx128 v33,r0,r21
	simd::store_shuffled(ctx.v33, simd::load_and_shuffle(base + ((ctx.r21.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v63,v50,v44
	_mm_store_ps(ctx.v63.f32, _mm_mul_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v44.f32)));
	// stvx128 v56,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v62,v49,v44
	_mm_store_ps(ctx.v62.f32, _mm_mul_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v44.f32)));
	// vmulfp128 v61,v48,v44
	_mm_store_ps(ctx.v61.f32, _mm_mul_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v44.f32)));
	// addi r20,r11,944
	ctx.r20.s64 = ctx.r11.s64 + 944;
	// vmulfp128 v60,v47,v44
	_mm_store_ps(ctx.v60.f32, _mm_mul_ps(_mm_load_ps(ctx.v47.f32), _mm_load_ps(ctx.v44.f32)));
	// addi r10,r11,960
	ctx.r10.s64 = ctx.r11.s64 + 960;
	// vmulfp128 v59,v46,v44
	_mm_store_ps(ctx.v59.f32, _mm_mul_ps(_mm_load_ps(ctx.v46.f32), _mm_load_ps(ctx.v44.f32)));
	// stvx128 v40,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v40.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v58,v45,v44
	_mm_store_ps(ctx.v58.f32, _mm_mul_ps(_mm_load_ps(ctx.v45.f32), _mm_load_ps(ctx.v44.f32)));
	// addi r9,r11,976
	ctx.r9.s64 = ctx.r11.s64 + 976;
	// vmulfp128 v56,v43,v44
	_mm_store_ps(ctx.v56.f32, _mm_mul_ps(_mm_load_ps(ctx.v43.f32), _mm_load_ps(ctx.v44.f32)));
	// vmulfp128 v55,v42,v44
	_mm_store_ps(ctx.v55.f32, _mm_mul_ps(_mm_load_ps(ctx.v42.f32), _mm_load_ps(ctx.v44.f32)));
	// lvx128 v57,r0,r20
	simd::store_shuffled(ctx.v57, simd::load_and_shuffle(base + ((ctx.r20.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v54,v41,v44
	_mm_store_ps(ctx.v54.f32, _mm_mul_ps(_mm_load_ps(ctx.v41.f32), _mm_load_ps(ctx.v44.f32)));
	// lvx128 v48,r0,r10
	simd::store_shuffled(ctx.v48, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v53,v39,v44
	_mm_store_ps(ctx.v53.f32, _mm_mul_ps(_mm_load_ps(ctx.v39.f32), _mm_load_ps(ctx.v44.f32)));
	// stvx128 v38,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v38.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v52,v37,v44
	_mm_store_ps(ctx.v52.f32, _mm_mul_ps(_mm_load_ps(ctx.v37.f32), _mm_load_ps(ctx.v44.f32)));
	// stvx128 v36,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v36.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v51,v35,v44
	_mm_store_ps(ctx.v51.f32, _mm_mul_ps(_mm_load_ps(ctx.v35.f32), _mm_load_ps(ctx.v44.f32)));
	// stvx128 v34,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v34.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v50,v33,v44
	_mm_store_ps(ctx.v50.f32, _mm_mul_ps(_mm_load_ps(ctx.v33.f32), _mm_load_ps(ctx.v44.f32)));
	// stvx128 v32,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v32.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v49,v57,v44
	_mm_store_ps(ctx.v49.f32, _mm_mul_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v44.f32)));
	// stvx128 v62,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v60,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v59,r0,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v58,r0,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v56,r0,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v55,r0,r26
	_mm_store_si128((__m128i*)(base + ((ctx.r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v54,r0,r25
	_mm_store_si128((__m128i*)(base + ((ctx.r25.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v53,r0,r24
	_mm_store_si128((__m128i*)(base + ((ctx.r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v52,r0,r23
	_mm_store_si128((__m128i*)(base + ((ctx.r23.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v51,r0,r22
	_mm_store_si128((__m128i*)(base + ((ctx.r22.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v50,r0,r21
	_mm_store_si128((__m128i*)(base + ((ctx.r21.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v47,v48,v44
	_mm_store_ps(ctx.v47.f32, _mm_mul_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v44.f32)));
	// addi r8,r11,992
	ctx.r8.s64 = ctx.r11.s64 + 992;
	// addi r7,r11,1008
	ctx.r7.s64 = ctx.r11.s64 + 1008;
	// lvx128 v46,r0,r9
	simd::store_shuffled(ctx.v46, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r6,r11,1024
	ctx.r6.s64 = ctx.r11.s64 + 1024;
	// stvx128 v49,r0,r20
	_mm_store_si128((__m128i*)(base + ((ctx.r20.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r5,r11,1040
	ctx.r5.s64 = ctx.r11.s64 + 1040;
	// vmulfp128 v63,v46,v44
	_mm_store_ps(ctx.v63.f32, _mm_mul_ps(_mm_load_ps(ctx.v46.f32), _mm_load_ps(ctx.v44.f32)));
	// addi r4,r11,1056
	ctx.r4.s64 = ctx.r11.s64 + 1056;
	// addi r3,r11,1072
	ctx.r3.s64 = ctx.r11.s64 + 1072;
	// lvx128 v45,r0,r8
	simd::store_shuffled(ctx.v45, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r31,r11,1088
	ctx.r31.s64 = ctx.r11.s64 + 1088;
	// lvx128 v43,r0,r7
	simd::store_shuffled(ctx.v43, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// addi r30,r11,1104
	ctx.r30.s64 = ctx.r11.s64 + 1104;
	// lvx128 v42,r0,r6
	simd::store_shuffled(ctx.v42, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// addi r29,r11,1120
	ctx.r29.s64 = ctx.r11.s64 + 1120;
	// lvx128 v41,r0,r5
	simd::store_shuffled(ctx.v41, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// addi r28,r11,1136
	ctx.r28.s64 = ctx.r11.s64 + 1136;
	// lvx128 v40,r0,r4
	simd::store_shuffled(ctx.v40, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r27,r11,1152
	ctx.r27.s64 = ctx.r11.s64 + 1152;
	// lvx128 v39,r0,r3
	simd::store_shuffled(ctx.v39, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// addi r26,r11,1168
	ctx.r26.s64 = ctx.r11.s64 + 1168;
	// lvx128 v38,r0,r31
	simd::store_shuffled(ctx.v38, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// addi r25,r11,1184
	ctx.r25.s64 = ctx.r11.s64 + 1184;
	// lvx128 v37,r0,r30
	simd::store_shuffled(ctx.v37, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// addi r24,r11,1200
	ctx.r24.s64 = ctx.r11.s64 + 1200;
	// lvx128 v36,r0,r29
	simd::store_shuffled(ctx.v36, simd::load_and_shuffle(base + ((ctx.r29.u32) & ~0xF), VectorMaskL));
	// addi r23,r11,1216
	ctx.r23.s64 = ctx.r11.s64 + 1216;
	// lvx128 v35,r0,r28
	simd::store_shuffled(ctx.v35, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// addi r22,r11,1232
	ctx.r22.s64 = ctx.r11.s64 + 1232;
	// lvx128 v34,r0,r27
	simd::store_shuffled(ctx.v34, simd::load_and_shuffle(base + ((ctx.r27.u32) & ~0xF), VectorMaskL));
	// addi r21,r11,1248
	ctx.r21.s64 = ctx.r11.s64 + 1248;
	// lvx128 v33,r0,r26
	simd::store_shuffled(ctx.v33, simd::load_and_shuffle(base + ((ctx.r26.u32) & ~0xF), VectorMaskL));
	// lvx128 v32,r0,r25
	simd::store_shuffled(ctx.v32, simd::load_and_shuffle(base + ((ctx.r25.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v61,v45,v44
	_mm_store_ps(ctx.v61.f32, _mm_mul_ps(_mm_load_ps(ctx.v45.f32), _mm_load_ps(ctx.v44.f32)));
	// lvx128 v62,r0,r24
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r24.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v59,v43,v44
	_mm_store_ps(ctx.v59.f32, _mm_mul_ps(_mm_load_ps(ctx.v43.f32), _mm_load_ps(ctx.v44.f32)));
	// lvx128 v60,r0,r23
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r23.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v57,v42,v44
	_mm_store_ps(ctx.v57.f32, _mm_mul_ps(_mm_load_ps(ctx.v42.f32), _mm_load_ps(ctx.v44.f32)));
	// lvx128 v58,r0,r22
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r22.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v55,v41,v44
	_mm_store_ps(ctx.v55.f32, _mm_mul_ps(_mm_load_ps(ctx.v41.f32), _mm_load_ps(ctx.v44.f32)));
	// lvx128 v56,r0,r21
	simd::store_shuffled(ctx.v56, simd::load_and_shuffle(base + ((ctx.r21.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v54,v40,v44
	_mm_store_ps(ctx.v54.f32, _mm_mul_ps(_mm_load_ps(ctx.v40.f32), _mm_load_ps(ctx.v44.f32)));
	// stvx128 v47,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v53,v39,v44
	_mm_store_ps(ctx.v53.f32, _mm_mul_ps(_mm_load_ps(ctx.v39.f32), _mm_load_ps(ctx.v44.f32)));
	// vmulfp128 v52,v38,v44
	_mm_store_ps(ctx.v52.f32, _mm_mul_ps(_mm_load_ps(ctx.v38.f32), _mm_load_ps(ctx.v44.f32)));
	// addi r20,r11,1264
	ctx.r20.s64 = ctx.r11.s64 + 1264;
	// vmulfp128 v51,v37,v44
	_mm_store_ps(ctx.v51.f32, _mm_mul_ps(_mm_load_ps(ctx.v37.f32), _mm_load_ps(ctx.v44.f32)));
	// addi r10,r11,1296
	ctx.r10.s64 = ctx.r11.s64 + 1296;
	// vmulfp128 v50,v36,v44
	_mm_store_ps(ctx.v50.f32, _mm_mul_ps(_mm_load_ps(ctx.v36.f32), _mm_load_ps(ctx.v44.f32)));
	// stvx128 v63,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v49,v35,v44
	_mm_store_ps(ctx.v49.f32, _mm_mul_ps(_mm_load_ps(ctx.v35.f32), _mm_load_ps(ctx.v44.f32)));
	// addi r19,r11,1280
	ctx.r19.s64 = ctx.r11.s64 + 1280;
	// vmulfp128 v47,v34,v44
	_mm_store_ps(ctx.v47.f32, _mm_mul_ps(_mm_load_ps(ctx.v34.f32), _mm_load_ps(ctx.v44.f32)));
	// addi r9,r11,1312
	ctx.r9.s64 = ctx.r11.s64 + 1312;
	// vmulfp128 v46,v33,v44
	_mm_store_ps(ctx.v46.f32, _mm_mul_ps(_mm_load_ps(ctx.v33.f32), _mm_load_ps(ctx.v44.f32)));
	// lvx128 v48,r0,r20
	simd::store_shuffled(ctx.v48, simd::load_and_shuffle(base + ((ctx.r20.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v45,v32,v44
	_mm_store_ps(ctx.v45.f32, _mm_mul_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v44.f32)));
	// lvx128 v38,r0,r10
	simd::store_shuffled(ctx.v38, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v43,v62,v44
	_mm_store_ps(ctx.v43.f32, _mm_mul_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v44.f32)));
	// stvx128 v61,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v42,v60,v44
	_mm_store_ps(ctx.v42.f32, _mm_mul_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v44.f32)));
	// stvx128 v59,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v41,v58,v44
	_mm_store_ps(ctx.v41.f32, _mm_mul_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v44.f32)));
	// stvx128 v57,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v40,v56,v44
	_mm_store_ps(ctx.v40.f32, _mm_mul_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v44.f32)));
	// stvx128 v55,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v54,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v39,v48,v44
	_mm_store_ps(ctx.v39.f32, _mm_mul_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v44.f32)));
	// stvx128 v53,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v52,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v51,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v50,r0,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v49,r0,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v47,r0,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v46,r0,r26
	_mm_store_si128((__m128i*)(base + ((ctx.r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v46.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v45,r0,r25
	_mm_store_si128((__m128i*)(base + ((ctx.r25.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v45.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v43,r0,r24
	_mm_store_si128((__m128i*)(base + ((ctx.r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v43.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v42,r0,r23
	_mm_store_si128((__m128i*)(base + ((ctx.r23.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v42.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v41,r0,r22
	_mm_store_si128((__m128i*)(base + ((ctx.r22.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v41.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v40,r0,r21
	_mm_store_si128((__m128i*)(base + ((ctx.r21.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v40.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v36,v38,v44
	_mm_store_ps(ctx.v36.f32, _mm_mul_ps(_mm_load_ps(ctx.v38.f32), _mm_load_ps(ctx.v44.f32)));
	// addi r8,r11,1328
	ctx.r8.s64 = ctx.r11.s64 + 1328;
	// addi r7,r11,1344
	ctx.r7.s64 = ctx.r11.s64 + 1344;
	// lvx128 v34,r0,r9
	simd::store_shuffled(ctx.v34, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r6,r11,1360
	ctx.r6.s64 = ctx.r11.s64 + 1360;
	// lvx128 v37,r0,r19
	simd::store_shuffled(ctx.v37, simd::load_and_shuffle(base + ((ctx.r19.u32) & ~0xF), VectorMaskL));
	// addi r5,r11,1376
	ctx.r5.s64 = ctx.r11.s64 + 1376;
	// vmulfp128 v35,v37,v44
	_mm_store_ps(ctx.v35.f32, _mm_mul_ps(_mm_load_ps(ctx.v37.f32), _mm_load_ps(ctx.v44.f32)));
	// addi r4,r11,1392
	ctx.r4.s64 = ctx.r11.s64 + 1392;
	// stvx128 v39,r0,r20
	_mm_store_si128((__m128i*)(base + ((ctx.r20.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v39.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r11,1408
	ctx.r3.s64 = ctx.r11.s64 + 1408;
	// lvx128 v33,r0,r8
	simd::store_shuffled(ctx.v33, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r31,r11,1424
	ctx.r31.s64 = ctx.r11.s64 + 1424;
	// lvx128 v32,r0,r7
	simd::store_shuffled(ctx.v32, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// addi r30,r11,1440
	ctx.r30.s64 = ctx.r11.s64 + 1440;
	// lvx128 v63,r0,r6
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// addi r29,r11,1456
	ctx.r29.s64 = ctx.r11.s64 + 1456;
	// lvx128 v62,r0,r5
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// addi r28,r11,1472
	ctx.r28.s64 = ctx.r11.s64 + 1472;
	// lvx128 v61,r0,r4
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r27,r11,1488
	ctx.r27.s64 = ctx.r11.s64 + 1488;
	// lvx128 v60,r0,r3
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// addi r26,r11,1504
	ctx.r26.s64 = ctx.r11.s64 + 1504;
	// lvx128 v59,r0,r31
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// addi r25,r11,1520
	ctx.r25.s64 = ctx.r11.s64 + 1520;
	// lvx128 v58,r0,r30
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// addi r24,r11,1536
	ctx.r24.s64 = ctx.r11.s64 + 1536;
	// lvx128 v57,r0,r29
	simd::store_shuffled(ctx.v57, simd::load_and_shuffle(base + ((ctx.r29.u32) & ~0xF), VectorMaskL));
	// addi r23,r11,1552
	ctx.r23.s64 = ctx.r11.s64 + 1552;
	// lvx128 v56,r0,r28
	simd::store_shuffled(ctx.v56, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// addi r22,r11,1568
	ctx.r22.s64 = ctx.r11.s64 + 1568;
	// lvx128 v55,r0,r27
	simd::store_shuffled(ctx.v55, simd::load_and_shuffle(base + ((ctx.r27.u32) & ~0xF), VectorMaskL));
	// lvx128 v54,r0,r26
	simd::store_shuffled(ctx.v54, simd::load_and_shuffle(base + ((ctx.r26.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v53,v34,v44
	_mm_store_ps(ctx.v53.f32, _mm_mul_ps(_mm_load_ps(ctx.v34.f32), _mm_load_ps(ctx.v44.f32)));
	// lvx128 v52,r0,r25
	simd::store_shuffled(ctx.v52, simd::load_and_shuffle(base + ((ctx.r25.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v51,v33,v44
	_mm_store_ps(ctx.v51.f32, _mm_mul_ps(_mm_load_ps(ctx.v33.f32), _mm_load_ps(ctx.v44.f32)));
	// lvx128 v50,r0,r24
	simd::store_shuffled(ctx.v50, simd::load_and_shuffle(base + ((ctx.r24.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v49,v32,v44
	_mm_store_ps(ctx.v49.f32, _mm_mul_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v44.f32)));
	// lvx128 v48,r0,r23
	simd::store_shuffled(ctx.v48, simd::load_and_shuffle(base + ((ctx.r23.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v47,v63,v44
	_mm_store_ps(ctx.v47.f32, _mm_mul_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v44.f32)));
	// lvx128 v46,r0,r22
	simd::store_shuffled(ctx.v46, simd::load_and_shuffle(base + ((ctx.r22.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v45,v62,v44
	_mm_store_ps(ctx.v45.f32, _mm_mul_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v44.f32)));
	// stvx128 v36,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v36.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v43,v61,v44
	_mm_store_ps(ctx.v43.f32, _mm_mul_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v44.f32)));
	// vmulfp128 v42,v60,v44
	_mm_store_ps(ctx.v42.f32, _mm_mul_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v44.f32)));
	// addi r21,r11,1584
	ctx.r21.s64 = ctx.r11.s64 + 1584;
	// vmulfp128 v41,v59,v44
	_mm_store_ps(ctx.v41.f32, _mm_mul_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v44.f32)));
	// addi r20,r11,1600
	ctx.r20.s64 = ctx.r11.s64 + 1600;
	// vmulfp128 v40,v58,v44
	_mm_store_ps(ctx.v40.f32, _mm_mul_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v44.f32)));
	// addi r10,r11,1616
	ctx.r10.s64 = ctx.r11.s64 + 1616;
	// vmulfp128 v39,v57,v44
	_mm_store_ps(ctx.v39.f32, _mm_mul_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v44.f32)));
	// stvx128 v35,r0,r19
	_mm_store_si128((__m128i*)(base + ((ctx.r19.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v35.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v38,v56,v44
	_mm_store_ps(ctx.v38.f32, _mm_mul_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v44.f32)));
	// vmulfp128 v36,v55,v44
	_mm_store_ps(ctx.v36.f32, _mm_mul_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v44.f32)));
	// lvx128 v37,r0,r21
	simd::store_shuffled(ctx.v37, simd::load_and_shuffle(base + ((ctx.r21.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v34,v54,v44
	_mm_store_ps(ctx.v34.f32, _mm_mul_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v44.f32)));
	// stvx128 v53,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v33,v52,v44
	_mm_store_ps(ctx.v33.f32, _mm_mul_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v44.f32)));
	// lvx128 v35,r0,r20
	simd::store_shuffled(ctx.v35, simd::load_and_shuffle(base + ((ctx.r20.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v32,v50,v44
	_mm_store_ps(ctx.v32.f32, _mm_mul_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v44.f32)));
	// lvx128 v60,r0,r10
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v63,v48,v44
	_mm_store_ps(ctx.v63.f32, _mm_mul_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v44.f32)));
	// stvx128 v51,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v62,v46,v44
	_mm_store_ps(ctx.v62.f32, _mm_mul_ps(_mm_load_ps(ctx.v46.f32), _mm_load_ps(ctx.v44.f32)));
	// stvx128 v49,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v47,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v61,v37,v44
	_mm_store_ps(ctx.v61.f32, _mm_mul_ps(_mm_load_ps(ctx.v37.f32), _mm_load_ps(ctx.v44.f32)));
	// stvx128 v45,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v45.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r11,1632
	ctx.r9.s64 = ctx.r11.s64 + 1632;
	// stvx128 v43,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v43.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v42,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v42.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v41,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v41.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v40,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v40.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v39,r0,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v39.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v38,r0,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v38.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v36,r0,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v36.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v34,r0,r26
	_mm_store_si128((__m128i*)(base + ((ctx.r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v34.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v33,r0,r25
	_mm_store_si128((__m128i*)(base + ((ctx.r25.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v33.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v32,r0,r24
	_mm_store_si128((__m128i*)(base + ((ctx.r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v32.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r23
	_mm_store_si128((__m128i*)(base + ((ctx.r23.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r22
	_mm_store_si128((__m128i*)(base + ((ctx.r22.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v59,v60,v44
	_mm_store_ps(ctx.v59.f32, _mm_mul_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v44.f32)));
	// addi r8,r11,1648
	ctx.r8.s64 = ctx.r11.s64 + 1648;
	// addi r7,r11,1664
	ctx.r7.s64 = ctx.r11.s64 + 1664;
	// lvx128 v57,r0,r9
	simd::store_shuffled(ctx.v57, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r6,r11,1680
	ctx.r6.s64 = ctx.r11.s64 + 1680;
	// vmulfp128 v58,v35,v44
	_mm_store_ps(ctx.v58.f32, _mm_mul_ps(_mm_load_ps(ctx.v35.f32), _mm_load_ps(ctx.v44.f32)));
	// addi r5,r11,1696
	ctx.r5.s64 = ctx.r11.s64 + 1696;
	// stvx128 v61,r0,r21
	_mm_store_si128((__m128i*)(base + ((ctx.r21.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r4,r11,1712
	ctx.r4.s64 = ctx.r11.s64 + 1712;
	// vmulfp128 v43,v57,v44
	_mm_store_ps(ctx.v43.f32, _mm_mul_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v44.f32)));
	// addi r3,r11,1728
	ctx.r3.s64 = ctx.r11.s64 + 1728;
	// lvx128 v56,r0,r8
	simd::store_shuffled(ctx.v56, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r31,r11,1744
	ctx.r31.s64 = ctx.r11.s64 + 1744;
	// lvx128 v55,r0,r7
	simd::store_shuffled(ctx.v55, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// addi r30,r11,1760
	ctx.r30.s64 = ctx.r11.s64 + 1760;
	// lvx128 v54,r0,r6
	simd::store_shuffled(ctx.v54, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// addi r29,r11,1776
	ctx.r29.s64 = ctx.r11.s64 + 1776;
	// lvx128 v53,r0,r5
	simd::store_shuffled(ctx.v53, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// addi r28,r11,1792
	ctx.r28.s64 = ctx.r11.s64 + 1792;
	// lvx128 v52,r0,r4
	simd::store_shuffled(ctx.v52, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r27,r11,1808
	ctx.r27.s64 = ctx.r11.s64 + 1808;
	// lvx128 v51,r0,r3
	simd::store_shuffled(ctx.v51, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// addi r26,r11,1824
	ctx.r26.s64 = ctx.r11.s64 + 1824;
	// lvx128 v50,r0,r31
	simd::store_shuffled(ctx.v50, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// addi r25,r11,1840
	ctx.r25.s64 = ctx.r11.s64 + 1840;
	// lvx128 v49,r0,r30
	simd::store_shuffled(ctx.v49, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// addi r24,r11,1856
	ctx.r24.s64 = ctx.r11.s64 + 1856;
	// lvx128 v48,r0,r29
	simd::store_shuffled(ctx.v48, simd::load_and_shuffle(base + ((ctx.r29.u32) & ~0xF), VectorMaskL));
	// addi r23,r11,1872
	ctx.r23.s64 = ctx.r11.s64 + 1872;
	// lvx128 v47,r0,r28
	simd::store_shuffled(ctx.v47, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// addi r22,r11,1888
	ctx.r22.s64 = ctx.r11.s64 + 1888;
	// lvx128 v46,r0,r27
	simd::store_shuffled(ctx.v46, simd::load_and_shuffle(base + ((ctx.r27.u32) & ~0xF), VectorMaskL));
	// lvx128 v45,r0,r26
	simd::store_shuffled(ctx.v45, simd::load_and_shuffle(base + ((ctx.r26.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v41,v56,v44
	_mm_store_ps(ctx.v41.f32, _mm_mul_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v44.f32)));
	// lvx128 v42,r0,r25
	simd::store_shuffled(ctx.v42, simd::load_and_shuffle(base + ((ctx.r25.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v39,v55,v44
	_mm_store_ps(ctx.v39.f32, _mm_mul_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v44.f32)));
	// lvx128 v40,r0,r24
	simd::store_shuffled(ctx.v40, simd::load_and_shuffle(base + ((ctx.r24.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v37,v54,v44
	_mm_store_ps(ctx.v37.f32, _mm_mul_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v44.f32)));
	// lvx128 v38,r0,r23
	simd::store_shuffled(ctx.v38, simd::load_and_shuffle(base + ((ctx.r23.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v35,v53,v44
	_mm_store_ps(ctx.v35.f32, _mm_mul_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v44.f32)));
	// lvx128 v36,r0,r22
	simd::store_shuffled(ctx.v36, simd::load_and_shuffle(base + ((ctx.r22.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v34,v52,v44
	_mm_store_ps(ctx.v34.f32, _mm_mul_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v44.f32)));
	// stvx128 v59,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v33,v51,v44
	_mm_store_ps(ctx.v33.f32, _mm_mul_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v44.f32)));
	// vmulfp128 v32,v50,v44
	_mm_store_ps(ctx.v32.f32, _mm_mul_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v44.f32)));
	// addi r21,r11,1904
	ctx.r21.s64 = ctx.r11.s64 + 1904;
	// vmulfp128 v63,v49,v44
	_mm_store_ps(ctx.v63.f32, _mm_mul_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v44.f32)));
	// addi r19,r11,1920
	ctx.r19.s64 = ctx.r11.s64 + 1920;
	// vmulfp128 v62,v48,v44
	_mm_store_ps(ctx.v62.f32, _mm_mul_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v44.f32)));
	// addi r10,r11,1936
	ctx.r10.s64 = ctx.r11.s64 + 1936;
	// vmulfp128 v61,v47,v44
	_mm_store_ps(ctx.v61.f32, _mm_mul_ps(_mm_load_ps(ctx.v47.f32), _mm_load_ps(ctx.v44.f32)));
	// stvx128 v58,r0,r20
	_mm_store_si128((__m128i*)(base + ((ctx.r20.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v59,v46,v44
	_mm_store_ps(ctx.v59.f32, _mm_mul_ps(_mm_load_ps(ctx.v46.f32), _mm_load_ps(ctx.v44.f32)));
	// stvx128 v43,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v43.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v57,v45,v44
	_mm_store_ps(ctx.v57.f32, _mm_mul_ps(_mm_load_ps(ctx.v45.f32), _mm_load_ps(ctx.v44.f32)));
	// lvx128 v60,r0,r21
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r21.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v56,v42,v44
	_mm_store_ps(ctx.v56.f32, _mm_mul_ps(_mm_load_ps(ctx.v42.f32), _mm_load_ps(ctx.v44.f32)));
	// lvx128 v58,r0,r19
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r19.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v55,v40,v44
	_mm_store_ps(ctx.v55.f32, _mm_mul_ps(_mm_load_ps(ctx.v40.f32), _mm_load_ps(ctx.v44.f32)));
	// lvx128 v50,r0,r10
	simd::store_shuffled(ctx.v50, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v54,v38,v44
	_mm_store_ps(ctx.v54.f32, _mm_mul_ps(_mm_load_ps(ctx.v38.f32), _mm_load_ps(ctx.v44.f32)));
	// stvx128 v41,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v41.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v53,v36,v44
	_mm_store_ps(ctx.v53.f32, _mm_mul_ps(_mm_load_ps(ctx.v36.f32), _mm_load_ps(ctx.v44.f32)));
	// stvx128 v39,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v39.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v37,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v37.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v52,v60,v44
	_mm_store_ps(ctx.v52.f32, _mm_mul_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v44.f32)));
	// stvx128 v35,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v35.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v51,v58,v44
	_mm_store_ps(ctx.v51.f32, _mm_mul_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v44.f32)));
	// stvx128 v34,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v34.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r11,1952
	ctx.r9.s64 = ctx.r11.s64 + 1952;
	// stvx128 v33,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v33.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v32,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v32.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v59,r0,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v57,r0,r26
	_mm_store_si128((__m128i*)(base + ((ctx.r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v56,r0,r25
	_mm_store_si128((__m128i*)(base + ((ctx.r25.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v55,r0,r24
	_mm_store_si128((__m128i*)(base + ((ctx.r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v54,r0,r23
	_mm_store_si128((__m128i*)(base + ((ctx.r23.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v53,r0,r22
	_mm_store_si128((__m128i*)(base + ((ctx.r22.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r11,1968
	ctx.r8.s64 = ctx.r11.s64 + 1968;
	// lvx128 v48,r0,r9
	simd::store_shuffled(ctx.v48, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r11,r11,1984
	ctx.r11.s64 = ctx.r11.s64 + 1984;
	// vmulfp128 v49,v50,v44
	_mm_store_ps(ctx.v49.f32, _mm_mul_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v44.f32)));
	// vmulfp128 v46,v48,v44
	_mm_store_ps(ctx.v46.f32, _mm_mul_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v44.f32)));
	// stvx128 v52,r0,r21
	_mm_store_si128((__m128i*)(base + ((ctx.r21.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v51,r0,r19
	_mm_store_si128((__m128i*)(base + ((ctx.r19.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r5,2000
	ctx.r5.s64 = 2000;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// lvx128 v47,r0,r8
	simd::store_shuffled(ctx.v47, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v45,r0,r11
	simd::store_shuffled(ctx.v45, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v43,v47,v44
	_mm_store_ps(ctx.v43.f32, _mm_mul_ps(_mm_load_ps(ctx.v47.f32), _mm_load_ps(ctx.v44.f32)));
	// vmulfp128 v42,v45,v44
	_mm_store_ps(ctx.v42.f32, _mm_mul_ps(_mm_load_ps(ctx.v45.f32), _mm_load_ps(ctx.v44.f32)));
	// stvx128 v49,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v46,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v46.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v43,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v43.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v42,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v42.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r4,16(r18)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r18.u32 + 16);
	// bl 0x82a75220
	ctx.lr = 0x82A1E4B0;
	sub_82A75220(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x82fac3e4
	ctx.lr = 0x82A1E4BC;
	__restvmx_123(ctx, base);
	// b 0x82fa769c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1E4C0"))) PPC_WEAK_FUNC(sub_82A1E4C0);
PPC_FUNC_IMPL(__imp__sub_82A1E4C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A1E4C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82a259a8
	ctx.lr = 0x82A1E4D0;
	sub_82A259A8(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r30,r11,31392
	ctx.r30.s64 = ctx.r11.s64 + 31392;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A1E4EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a1e590
	if (ctx.cr0.lt) goto loc_82A1E590;
	// bl 0x82a25a10
	ctx.lr = 0x82A1E4F8;
	sub_82A25A10(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A1E50C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a1e590
	if (ctx.cr0.lt) goto loc_82A1E590;
	// bl 0x82a1d3d8
	ctx.lr = 0x82A1E518;
	sub_82A1D3D8(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// lis r5,0
	ctx.r5.s64 = 0;
	// ori r10,r10,63156
	ctx.r10.u64 = ctx.r10.u64 | 63156;
	// ori r5,r5,34620
	ctx.r5.u64 = ctx.r5.u64 | 34620;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a81490
	ctx.lr = 0x82A1E540;
	sub_82A81490(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82a1e56c
	if (ctx.cr0.eq) goto loc_82A1E56C;
	// lis r5,0
	ctx.r5.s64 = 0;
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,34620
	ctx.r5.u64 = ctx.r5.u64 | 34620;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A1E560;
	sub_82FA7CF0(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// b 0x82a1e570
	goto loc_82A1E570;
loc_82A1E56C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A1E570:
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r10,r10,31372
	ctx.r10.s64 = ctx.r10.s64 + 31372;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bne cr6,0x82a1e58c
	if (!ctx.cr6.eq) goto loc_82A1E58C;
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,14
	ctx.r29.u64 = ctx.r29.u64 | 14;
loc_82A1E58C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82A1E590:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1E598"))) PPC_WEAK_FUNC(sub_82A1E598);
PPC_FUNC_IMPL(__imp__sub_82A1E598) {
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
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,31404(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31404);
	// lis r31,-31963
	ctx.r31.s64 = -2094727168;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,31372(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31372);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A1E5E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a1e614
	if (ctx.cr0.lt) goto loc_82A1E614;
	// lwz r11,31372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31372);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82a1d5c0
	ctx.lr = 0x82A1E5FC;
	sub_82A1D5C0(ctx, base);
	// lwz r11,31372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31372);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r11,2000(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2000, ctx.r11.u32);
loc_82A1E614:
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

__attribute__((alias("__imp__sub_82A1E62C"))) PPC_WEAK_FUNC(sub_82A1E62C);
PPC_FUNC_IMPL(__imp__sub_82A1E62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1E630"))) PPC_WEAK_FUNC(sub_82A1E630);
PPC_FUNC_IMPL(__imp__sub_82A1E630) {
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
	// clrlwi. r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a1e674
	if (ctx.cr0.eq) goto loc_82A1E674;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a1e674
	if (ctx.cr6.eq) goto loc_82A1E674;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r10,r10,63156
	ctx.r10.u64 = ctx.r10.u64 | 63156;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a81d88
	ctx.lr = 0x82A1E674;
	sub_82A81D88(ctx, base);
loc_82A1E674:
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

__attribute__((alias("__imp__sub_82A1E68C"))) PPC_WEAK_FUNC(sub_82A1E68C);
PPC_FUNC_IMPL(__imp__sub_82A1E68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1E690"))) PPC_WEAK_FUNC(sub_82A1E690);
PPC_FUNC_IMPL(__imp__sub_82A1E690) {
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
	// addi r31,r11,31404
	ctx.r31.s64 = ctx.r11.s64 + 31404;
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a1e6cc
	if (ctx.cr6.eq) goto loc_82A1E6CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A1E6C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r11.u32);
loc_82A1E6CC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a1e6f0
	if (ctx.cr6.eq) goto loc_82A1E6F0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A1E6E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82A1E6F0:
	// bl 0x82a1d300
	ctx.lr = 0x82A1E6F4;
	sub_82A1D300(ctx, base);
	// lis r31,-31963
	ctx.r31.s64 = -2094727168;
	// lwz r3,31372(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31372);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a1e714
	if (ctx.cr6.eq) goto loc_82A1E714;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82a1e630
	ctx.lr = 0x82A1E70C;
	sub_82A1E630(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,31372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31372, ctx.r11.u32);
loc_82A1E714:
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

__attribute__((alias("__imp__sub_82A1E728"))) PPC_WEAK_FUNC(sub_82A1E728);
PPC_FUNC_IMPL(__imp__sub_82A1E728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a1e7a8
	if (ctx.cr6.eq) goto loc_82A1E7A8;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
loc_82A1E74C:
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82a1e774
	if (!ctx.cr6.eq) goto loc_82A1E774;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x82a1e7d8
	if (!ctx.cr6.eq) goto loc_82A1E7D8;
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r7,2000
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 2000, ctx.xer);
	// bne cr6,0x82a1e7d8
	if (!ctx.cr6.eq) goto loc_82A1E7D8;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// b 0x82a1e794
	goto loc_82A1E794;
loc_82A1E774:
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x82a1e794
	if (!ctx.cr6.eq) goto loc_82A1E794;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82a1e7d8
	if (!ctx.cr6.eq) goto loc_82A1E7D8;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x82a1e7d8
	if (!ctx.cr6.eq) goto loc_82A1E7D8;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82A1E794:
	// lwzu r7,8(r3)
	ea = 8 + ctx.r3.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r3.u32 = ea;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82a1e74c
	if (ctx.cr6.lt) goto loc_82A1E74C;
loc_82A1E7A8:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a1e7b4
	if (ctx.cr6.eq) goto loc_82A1E7B4;
	// stw r31,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r31.u32);
loc_82A1E7B4:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82a1e7c0
	if (ctx.cr6.eq) goto loc_82A1E7C0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_82A1E7C0:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82a1e7cc
	if (ctx.cr6.eq) goto loc_82A1E7CC;
	// stw r8,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
loc_82A1E7CC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82A1E7D0:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82A1E7D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a1e7d0
	goto loc_82A1E7D0;
}

__attribute__((alias("__imp__sub_82A1E7E0"))) PPC_WEAK_FUNC(sub_82A1E7E0);
PPC_FUNC_IMPL(__imp__sub_82A1E7E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A1E7E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mullw r11,r29,r11
	ctx.r11.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r11.s32);
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,2000
	ctx.r5.s64 = 2000;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82a75220
	ctx.lr = 0x82A1E81C;
	sub_82A75220(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82a1e84c
	if (ctx.cr6.eq) goto loc_82A1E84C;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r30,2000
	ctx.r3.s64 = ctx.r30.s64 + 2000;
	// mullw r9,r29,r9
	ctx.r9.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r9.s32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82a75220
	ctx.lr = 0x82A1E848;
	sub_82A75220(ctx, base);
	// b 0x82a1e854
	goto loc_82A1E854;
loc_82A1E84C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2000(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2000, ctx.r11.u32);
loc_82A1E854:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1E85C"))) PPC_WEAK_FUNC(sub_82A1E85C);
PPC_FUNC_IMPL(__imp__sub_82A1E85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1E860"))) PPC_WEAK_FUNC(sub_82A1E860);
PPC_FUNC_IMPL(__imp__sub_82A1E860) {
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
	// addis r10,r3,3
	ctx.r10.s64 = ctx.r3.s64 + 196608;
	// li r5,2004
	ctx.r5.s64 = 2004;
	// addi r10,r10,7800
	ctx.r10.s64 = ctx.r10.s64 + 7800;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,102
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 102, ctx.xer);
	// bge cr6,0x82a1e8c8
	if (!ctx.cr6.lt) goto loc_82A1E8C8;
	// lis r9,3
	ctx.r9.s64 = 196608;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// ori r9,r9,7804
	ctx.r9.u64 = ctx.r9.u64 | 7804;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// li r8,102
	ctx.r8.s64 = 102;
	// lwzx r10,r3,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// divwu r10,r11,r8
	ctx.r10.u32 = ctx.r11.u32 / ctx.r8.u32;
	// mulli r10,r10,102
	ctx.r10.s64 = ctx.r10.s64 * 102;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mulli r11,r11,2004
	ctx.r11.s64 = ctx.r11.s64 * 2004;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82A1E8C0;
	sub_82FA77C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82a1e900
	goto loc_82A1E900;
loc_82A1E8C8:
	// addis r31,r3,3
	ctx.r31.s64 = ctx.r3.s64 + 196608;
	// addi r31,r31,7804
	ctx.r31.s64 = ctx.r31.s64 + 7804;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r11,2004
	ctx.r11.s64 = ctx.r11.s64 * 2004;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82A1E8E0;
	sub_82FA77C0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,102
	ctx.r10.s64 = 102;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// divwu r10,r11,r10
	ctx.r10.u32 = ctx.r11.u32 / ctx.r10.u32;
	// mulli r10,r10,102
	ctx.r10.s64 = ctx.r10.s64 * 102;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82A1E900:
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

__attribute__((alias("__imp__sub_82A1E914"))) PPC_WEAK_FUNC(sub_82A1E914);
PPC_FUNC_IMPL(__imp__sub_82A1E914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1E918"))) PPC_WEAK_FUNC(sub_82A1E918);
PPC_FUNC_IMPL(__imp__sub_82A1E918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82A1E920;
	__savegprlr_14(ctx, base);
	// stwu r1,-704(r1)
	ea = -704 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// stfs f1,772(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 772, temp.u32);
	// stfs f2,796(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 796, temp.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// stfs f3,804(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 804, temp.u32);
	// stfs f4,812(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 812, temp.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stfs f5,820(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 820, temp.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stfs f6,836(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 836, temp.u32);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// stfs f7,844(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 844, temp.u32);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// stfs f8,852(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 852, temp.u32);
	// stw r8,764(r1)
	PPC_STORE_U32(ctx.r1.u32 + 764, ctx.r8.u32);
	// stfs f9,860(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 860, temp.u32);
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// stfs f10,876(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 876, temp.u32);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// stfs f11,884(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 884, temp.u32);
	// stfs f12,892(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 892, temp.u32);
	// stfs f13,900(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 900, temp.u32);
	// beq cr6,0x82a1ec10
	if (ctx.cr6.eq) goto loc_82A1EC10;
	// bl 0x83178d64
	ctx.lr = 0x82A1E988;
	__imp__XamGetCurrentTitleId(ctx, base);
	// lbz r23,871(r1)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r1.u32 + 871);
	// ld r6,1104(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1104);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lbz r11,1071(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 1071);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r5,1100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1100);
	// clrlwi r9,r29,16
	ctx.r9.u64 = ctx.r29.u32 & 0xFFFF;
	// lwz r4,1092(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1092);
	// clrlwi r8,r30,24
	ctx.r8.u64 = ctx.r30.u32 & 0xFF;
	// stw r23,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r23.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r23,924(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 924);
	// clrlwi r26,r26,24
	ctx.r26.u64 = ctx.r26.u32 & 0xFF;
	// lwz r25,1084(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1084);
	// clrlwi r27,r27,24
	ctx.r27.u64 = ctx.r27.u32 & 0xFF;
	// lwz r24,1076(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1076);
	// lwz r28,1060(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1060);
	// std r6,528(r1)
	PPC_STORE_U64(ctx.r1.u32 + 528, ctx.r6.u64);
	// li r6,173
	ctx.r6.s64 = 173;
	// stw r23,472(r1)
	PPC_STORE_U32(ctx.r1.u32 + 472, ctx.r23.u32);
	// lwz r23,916(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 916);
	// stw r5,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r5.u32);
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r4,456(r1)
	PPC_STORE_U32(ctx.r1.u32 + 456, ctx.r4.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r11,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r11.u32);
	// stw r25,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, ctx.r25.u32);
	// stw r24,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r24.u32);
	// stw r28,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r28.u32);
	// stw r23,476(r1)
	PPC_STORE_U32(ctx.r1.u32 + 476, ctx.r23.u32);
	// lwz r23,900(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 900);
	// lbz r21,791(r1)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r1.u32 + 791);
	// lbz r22,831(r1)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r1.u32 + 831);
	// lwz r11,1116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1116);
	// lbz r31,1031(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 1031);
	// stw r23,488(r1)
	PPC_STORE_U32(ctx.r1.u32 + 488, ctx.r23.u32);
	// lwz r23,892(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 892);
	// lbz r30,991(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 991);
	// lbz r29,951(r1)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + 951);
	// lbz r28,911(r1)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r1.u32 + 911);
	// lwz r25,1052(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1052);
	// lwz r24,1044(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1044);
	// ld r16,528(r1)
	ctx.r16.u64 = PPC_LOAD_U64(ctx.r1.u32 + 528);
	// std r10,536(r1)
	PPC_STORE_U64(ctx.r1.u32 + 536, ctx.r10.u64);
	// stw r9,508(r1)
	PPC_STORE_U32(ctx.r1.u32 + 508, ctx.r9.u32);
	// stw r23,492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 492, ctx.r23.u32);
	// lwz r17,448(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// lwz r15,452(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// lwz r14,456(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 456);
	// lwz r10,460(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// lwz r9,464(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 464);
	// lwz r23,468(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// stw r8,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r8.u32);
	// stw r7,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r7.u32);
	// stw r6,520(r1)
	PPC_STORE_U32(ctx.r1.u32 + 520, ctx.r6.u32);
	// std r5,544(r1)
	PPC_STORE_U64(ctx.r1.u32 + 544, ctx.r5.u64);
	// stw r4,524(r1)
	PPC_STORE_U32(ctx.r1.u32 + 524, ctx.r4.u32);
	// stw r3,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r3.u32);
	// stw r21,504(r1)
	PPC_STORE_U32(ctx.r1.u32 + 504, ctx.r21.u32);
	// stw r22,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r22.u32);
	// lwz r20,1036(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1036);
	// lwz r19,1020(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1020);
	// lwz r18,1012(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1012);
	// lwz r8,1004(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1004);
	// lwz r7,996(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 996);
	// lwz r6,980(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 980);
	// lwz r5,972(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 972);
	// lwz r4,964(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 964);
	// lwz r3,956(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 956);
	// lwz r21,940(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 940);
	// lwz r22,932(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 932);
	// stw r26,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r26.u32);
	// stw r31,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, ctx.r31.u32);
	// stw r27,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r27.u32);
	// stw r30,456(r1)
	PPC_STORE_U32(ctx.r1.u32 + 456, ctx.r30.u32);
	// stw r29,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r29.u32);
	// stw r28,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r28.u32);
	// stw r25,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r25.u32);
	// stw r24,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r24.u32);
	// stw r11,444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 444, ctx.r11.u32);
	// rotlwi r11,r25,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r25.u32, 0);
	// stw r18,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r18.u32);
	// lwz r30,460(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// rotlwi r31,r24,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r24.u32, 0);
	// stw r11,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, ctx.r11.u32);
	// lwz r11,472(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 472);
	// lwz r29,456(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 456);
	// lwz r18,488(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 488);
	// stw r31,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r31.u32);
	// stw r30,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r30.u32);
	// stw r11,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r11.u32);
	// lwz r11,476(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 476);
	// stw r29,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r29.u32);
	// stw r18,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r18.u32);
	// lwz r28,452(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// lwz r27,448(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// stw r11,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r11.u32);
	// lwz r11,884(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 884);
	// lwz r31,876(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 876);
	// lwz r30,860(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 860);
	// lwz r29,852(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 852);
	// lwz r18,492(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 492);
	// stw r11,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r11.u32);
	// lwz r11,496(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 496);
	// stw r10,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, ctx.r10.u32);
	// stw r9,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r9.u32);
	// stw r23,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r23.u32);
	// stw r20,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r20.u32);
	// stw r11,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
	// lwz r11,500(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// stw r19,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r19.u32);
	// stw r8,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r8.u32);
	// stw r7,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r7.u32);
	// stw r6,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r6.u32);
	// stw r5,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r5.u32);
	// stw r4,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r4.u32);
	// stw r3,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r3.u32);
	// stw r28,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r28.u32);
	// stw r21,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r21.u32);
	// stw r22,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r22.u32);
	// stw r27,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r27.u32);
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// std r16,432(r1)
	PPC_STORE_U64(ctx.r1.u32 + 432, ctx.r16.u64);
	// stw r15,428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 428, ctx.r15.u32);
	// stw r14,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r14.u32);
	// stw r17,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r17.u32);
	// stw r18,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r18.u32);
	// stw r31,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r31.u32);
	// stw r30,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r30.u32);
	// stw r29,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r29.u32);
	// lwz r11,504(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 504);
	// lwz r28,844(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 844);
	// lwz r27,836(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 836);
	// lwz r26,820(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 820);
	// lwz r25,812(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 812);
	// lwz r24,804(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 804);
	// lwz r23,796(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 796);
	// lwz r22,772(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 772);
	// lwz r21,480(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	// lwz r20,764(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 764);
	// lwz r19,484(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 484);
	// ld r10,536(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 536);
	// lwz r9,508(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// lwz r8,512(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 512);
	// lwz r7,516(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 516);
	// lwz r6,520(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 520);
	// ld r5,544(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 544);
	// lwz r4,524(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 524);
	// lwz r3,528(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 528);
	// stw r28,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r28.u32);
	// stw r27,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r27.u32);
	// stw r26,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r26.u32);
	// stw r25,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r25.u32);
	// stw r24,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r24.u32);
	// stw r23,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r23.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r21,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r21.u32);
	// stw r22,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// stw r20,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// stw r19,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// bl 0x83179614
	ctx.lr = 0x82A1EC0C;
	__imp__EtxProducerLog(ctx, base);
	// b 0x82a1ec18
	goto loc_82A1EC18;
loc_82A1EC10:
	// lis r3,16389
	ctx.r3.s64 = 1074069504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
loc_82A1EC18:
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1EC20"))) PPC_WEAK_FUNC(sub_82A1EC20);
PPC_FUNC_IMPL(__imp__sub_82A1EC20) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0c9b8
	ctx.lr = 0x82A1EC38;
	sub_82A0C9B8(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r31,24028(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// bl 0x82a74720
	ctx.lr = 0x82A1EC44;
	sub_82A74720(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r11,24036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24036);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 & ctx.r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a1ec88
	if (!ctx.cr6.eq) goto loc_82A1EC88;
loc_82A1EC64:
	// li r31,-2
	ctx.r31.s64 = -2;
loc_82A1EC68:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0ca30
	ctx.lr = 0x82A1EC70;
	sub_82A0CA30(ctx, base);
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
loc_82A1EC88:
	// li r11,7
	ctx.r11.s64 = 7;
	// addi r10,r10,196
	ctx.r10.s64 = ctx.r10.s64 + 196;
loc_82A1EC90:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82a1eca8
	if (!ctx.cr6.eq) goto loc_82A1ECA8;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82a1ecb8
	if (ctx.cr6.eq) goto loc_82A1ECB8;
loc_82A1ECA8:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,-28
	ctx.r10.s64 = ctx.r10.s64 + -28;
	// bge 0x82a1ec90
	if (!ctx.cr0.lt) goto loc_82A1EC90;
	// b 0x82a1ec64
	goto loc_82A1EC64;
loc_82A1ECB8:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x82a1ec68
	goto loc_82A1EC68;
}

__attribute__((alias("__imp__sub_82A1ECC0"))) PPC_WEAK_FUNC(sub_82A1ECC0);
PPC_FUNC_IMPL(__imp__sub_82A1ECC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82A1ECC8;
	__savegprlr_14(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,24
	ctx.r11.s64 = 24;
	// stw r5,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r5.u32);
	// lis r10,3
	ctx.r10.s64 = 196608;
	// subfc r9,r11,r4
	ctx.xer.ca = ctx.r4.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r4.s64 - ctx.r11.s64;
	// ori r10,r10,8192
	ctx.r10.u64 = ctx.r10.u64 | 8192;
	// addze r8,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r8.s64 = temp.s64;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r14,r6
	ctx.r14.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// and r20,r11,r3
	ctx.r20.u64 = ctx.r11.u64 & ctx.r3.u64;
	// ble cr6,0x82a1ed10
	if (!ctx.cr6.gt) goto loc_82A1ED10;
loc_82A1ED08:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a1eecc
	goto loc_82A1EECC;
loc_82A1ED10:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// subf r15,r21,r10
	ctx.r15.s64 = ctx.r10.s64 - ctx.r21.s64;
	// beq cr6,0x82a1ed08
	if (ctx.cr6.eq) goto loc_82A1ED08;
	// lwz r16,4(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// cmplwi cr6,r16,102
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 102, ctx.xer);
	// bgt cr6,0x82a1ed08
	if (ctx.cr6.gt) goto loc_82A1ED08;
	// cmplwi r16,0
	ctx.cr0.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq 0x82a1ed08
	if (ctx.cr0.eq) goto loc_82A1ED08;
	// li r17,0
	ctx.r17.s64 = 0;
	// addi r30,r20,8
	ctx.r30.s64 = ctx.r20.s64 + 8;
	// li r19,0
	ctx.r19.s64 = 0;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x82a1eea0
	if (ctx.cr6.eq) goto loc_82A1EEA0;
loc_82A1ED44:
	// subf r11,r18,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r18.s64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, ctx.xer);
	// bgt cr6,0x82a1ed08
	if (ctx.cr6.gt) goto loc_82A1ED08;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a1ed08
	if (ctx.cr6.eq) goto loc_82A1ED08;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82a1ed08
	if (ctx.cr6.eq) goto loc_82A1ED08;
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a1ed08
	if (ctx.cr6.eq) goto loc_82A1ED08;
	// addi r11,r31,5
	ctx.r11.s64 = ctx.r31.s64 + 5;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82a1ed08
	if (ctx.cr6.lt) goto loc_82A1ED08;
	// subf r11,r18,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r18.s64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, ctx.xer);
	// bgt cr6,0x82a1ed08
	if (ctx.cr6.gt) goto loc_82A1ED08;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a1e728
	ctx.lr = 0x82A1EDA8;
	sub_82A1E728(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a1ed08
	if (ctx.cr0.eq) goto loc_82A1ED08;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// lwz r23,80(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// subf r11,r31,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r31.s64;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r25,r10,-28
	ctx.r25.s64 = ctx.r10.s64 + -28;
	// mullw r10,r11,r23
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r23.s32);
	// cmplw cr6,r10,r25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r25.u32, ctx.xer);
	// bgt cr6,0x82a1ed08
	if (ctx.cr6.gt) goto loc_82A1ED08;
	// add r17,r11,r17
	ctx.r17.u64 = ctx.r11.u64 + ctx.r17.u64;
	// cmplwi cr6,r17,102
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 102, ctx.xer);
	// bgt cr6,0x82a1ed08
	if (ctx.cr6.gt) goto loc_82A1ED08;
	// lwz r24,84(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r24,-1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, -1, ctx.xer);
	// beq cr6,0x82a1ee44
	if (ctx.cr6.eq) goto loc_82A1EE44;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a1ee44
	if (ctx.cr6.eq) goto loc_82A1EE44;
	// add r11,r31,r24
	ctx.r11.u64 = ctx.r31.u64 + ctx.r24.u64;
	// addi r27,r11,28
	ctx.r27.s64 = ctx.r11.s64 + 28;
loc_82A1EE08:
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_82A1EE10:
	// lfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82fac6e0
	ctx.lr = 0x82A1EE18;
	sub_82FAC6E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82a1ed08
	if (ctx.cr0.eq) goto loc_82A1ED08;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r29,500
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 500, ctx.xer);
	// blt cr6,0x82a1ee10
	if (ctx.cr6.lt) goto loc_82A1EE10;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82a1ee08
	if (ctx.cr6.lt) goto loc_82A1EE08;
	// lwz r28,292(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
loc_82A1EE44:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82a1ee70
	if (ctx.cr6.eq) goto loc_82A1EE70;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r9,r31,28
	ctx.r9.s64 = ctx.r31.s64 + 28;
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// stw r9,16(r22)
	PPC_STORE_U32(ctx.r22.u32 + 16, ctx.r9.u32);
	// stw r31,20(r22)
	PPC_STORE_U32(ctx.r22.u32 + 20, ctx.r31.u32);
	// stw r24,8(r22)
	PPC_STORE_U32(ctx.r22.u32 + 8, ctx.r24.u32);
	// stw r10,12(r22)
	PPC_STORE_U32(ctx.r22.u32 + 12, ctx.r10.u32);
	// stw r23,4(r22)
	PPC_STORE_U32(ctx.r22.u32 + 4, ctx.r23.u32);
	// addi r22,r22,24
	ctx.r22.s64 = ctx.r22.s64 + 24;
loc_82A1EE70:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,6
	ctx.r3.s64 = ctx.r31.s64 + 6;
	// add r15,r25,r15
	ctx.r15.u64 = ctx.r25.u64 + ctx.r15.u64;
	// bl 0x82a845d8
	ctx.lr = 0x82A1EE80;
	sub_82A845D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82a1ed08
	if (ctx.cr0.eq) goto loc_82A1ED08;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// lwz r10,4(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r19,r10
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82a1ed44
	if (ctx.cr6.lt) goto loc_82A1ED44;
loc_82A1EEA0:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// cmplw cr6,r15,r11
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82a1ed08
	if (ctx.cr6.lt) goto loc_82A1ED08;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// beq cr6,0x82a1eebc
	if (ctx.cr6.eq) goto loc_82A1EEBC;
	// stw r16,0(r14)
	PPC_STORE_U32(ctx.r14.u32 + 0, ctx.r16.u32);
loc_82A1EEBC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82a1eec8
	if (ctx.cr6.eq) goto loc_82A1EEC8;
	// stw r15,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r15.u32);
loc_82A1EEC8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82A1EECC:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1EED4"))) PPC_WEAK_FUNC(sub_82A1EED4);
PPC_FUNC_IMPL(__imp__sub_82A1EED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1EED8"))) PPC_WEAK_FUNC(sub_82A1EED8);
PPC_FUNC_IMPL(__imp__sub_82A1EED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r9,2
	ctx.r9.s64 = 2;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// addi r11,r11,-24628
	ctx.r11.s64 = ctx.r11.s64 + -24628;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82A1EEF4:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwzu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82a1eef4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A1EEF4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,52
	ctx.r10.s64 = 52;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1EF24"))) PPC_WEAK_FUNC(sub_82A1EF24);
PPC_FUNC_IMPL(__imp__sub_82A1EF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1EF28"))) PPC_WEAK_FUNC(sub_82A1EF28);
PPC_FUNC_IMPL(__imp__sub_82A1EF28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82A1EF30;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82fa8d24
	ctx.lr = 0x82A1EF38;
	__savefpr_27(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4240(r1)
	ea = -4240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lfs f31,5184(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f31.f64 = double(temp.f32);
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// fmr f27,f31
	ctx.f27.f64 = ctx.f31.f64;
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// ble cr6,0x82a1f0d4
	if (!ctx.cr6.gt) goto loc_82A1F0D4;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// rlwinm r25,r11,31,1,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r4,r25,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82a0d110
	ctx.lr = 0x82A1EF80;
	sub_82A0D110(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f29,23856(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23856);
	ctx.f29.f64 = double(temp.f32);
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82a1f0d4
	if (ctx.cr6.eq) goto loc_82A1F0D4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82a1f068
	if (!ctx.cr6.gt) goto loc_82A1F068;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f28,-25136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -25136);
	ctx.f28.f64 = double(temp.f32);
loc_82A1EFB0:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1e7e0
	ctx.lr = 0x82A1EFC0;
	sub_82A1E7E0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r27,r31,1
	ctx.r27.s64 = ctx.r31.s64 + 1;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82a1f05c
	if (!ctx.cr6.lt) goto loc_82A1F05C;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
loc_82A1EFE0:
	// addi r5,r1,2112
	ctx.r5.s64 = ctx.r1.s64 + 2112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1e7e0
	ctx.lr = 0x82A1EFF0;
	sub_82A1E7E0(ctx, base);
	// li r11,500
	ctx.r11.s64 = 500;
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82A1F000:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,2112
	ctx.r9.s64 = ctx.r1.s64 + 2112;
	// lfsx f13,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r10,r9
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// bdnz 0x82a1f000
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A1F000;
	// fmuls f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x82a1f034
	if (!ctx.cr6.lt) goto loc_82A1F034;
	// fmr f29,f0
	ctx.f29.f64 = ctx.f0.f64;
loc_82A1F034:
	// fcmpu cr6,f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// ble cr6,0x82a1f040
	if (!ctx.cr6.gt) goto loc_82A1F040;
	// fmr f27,f0
	ctx.f27.f64 = ctx.f0.f64;
loc_82A1F040:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stfsu f0,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r29.u32 = ea;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// fadds f30,f0,f30
	ctx.f30.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82a1efe0
	if (ctx.cr6.lt) goto loc_82A1EFE0;
loc_82A1F05C:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82a1efb0
	if (ctx.cr6.lt) goto loc_82A1EFB0;
loc_82A1F068:
	// clrldi r11,r25,32
	ctx.r11.u64 = ctx.r25.u64 & 0xFFFFFFFF;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,24436(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24436);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmuls f30,f13,f30
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// beq cr6,0x82a1f0ac
	if (ctx.cr6.eq) goto loc_82A1F0AC;
	// addi r11,r26,-4
	ctx.r11.s64 = ctx.r26.s64 + -4;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
loc_82A1F09C:
	// lfsu f0,4(r11)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// fmadds f31,f0,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f31.f64));
	// bdnz 0x82a1f09c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A1F09C;
loc_82A1F0AC:
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// fmuls f0,f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// lis r10,8
	ctx.r10.s64 = 524288;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// ori r10,r10,63156
	ctx.r10.u64 = ctx.r10.u64 | 63156;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// fsqrts f31,f0
	ctx.f31.f64 = double(float(sqrt(ctx.f0.f64)));
	// bl 0x82a81d88
	ctx.lr = 0x82A1F0D4;
	sub_82A81D88(ctx, base);
loc_82A1F0D4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stfs f29,0(r24)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r24.u32 + 0, temp.u32);
	// stfs f27,4(r24)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r24.u32 + 4, temp.u32);
	// stfs f30,8(r24)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r24.u32 + 8, temp.u32);
	// stfs f31,12(r24)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r24.u32 + 12, temp.u32);
	// stb r11,16(r24)
	PPC_STORE_U8(ctx.r24.u32 + 16, ctx.r11.u8);
	// addi r1,r1,4240
	ctx.r1.s64 = ctx.r1.s64 + 4240;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82fa8d70
	ctx.lr = 0x82A1F0F8;
	__restfpr_27(ctx, base);
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1F0FC"))) PPC_WEAK_FUNC(sub_82A1F0FC);
PPC_FUNC_IMPL(__imp__sub_82A1F0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1F100"))) PPC_WEAK_FUNC(sub_82A1F100);
PPC_FUNC_IMPL(__imp__sub_82A1F100) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82A1F108;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82fa8d04
	ctx.lr = 0x82A1F110;
	__savefpr_19(ctx, base);
	// stwu r1,-3424(r1)
	ea = -3424 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,2448
	ctx.r5.s64 = 2448;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A1F130;
	sub_82FA7CF0(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r31.u32);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A1F148;
	sub_82FA7CF0(ctx, base);
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x82a83620
	ctx.lr = 0x82A1F150;
	sub_82A83620(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82a1f160
	if (!ctx.cr6.eq) goto loc_82A1F160;
	// li r11,1440
	ctx.r11.s64 = 1440;
	// stw r11,624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 624, ctx.r11.u32);
loc_82A1F160:
	// addi r11,r1,440
	ctx.r11.s64 = ctx.r1.s64 + 440;
	// std r31,432(r1)
	PPC_STORE_U64(ctx.r1.u32 + 432, ctx.r31.u64);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// std r31,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r31.u64);
	// bl 0x83178d74
	ctx.lr = 0x82A1F174;
	__imp__XamGetActiveDashAppInfo(ctx, base);
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// bl 0x82a82968
	ctx.lr = 0x82A1F17C;
	sub_82A82968(ctx, base);
	// addi r7,r1,800
	ctx.r7.s64 = ctx.r1.s64 + 800;
	// addi r6,r1,416
	ctx.r6.s64 = ctx.r1.s64 + 416;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a1ecc0
	ctx.lr = 0x82A1F194;
	sub_82A1ECC0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a1f340
	if (ctx.cr0.eq) goto loc_82A1F340;
	// lwz r28,416(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// addi r29,r1,800
	ctx.r29.s64 = ctx.r1.s64 + 800;
	// addi r30,r1,448
	ctx.r30.s64 = ctx.r1.s64 + 448;
loc_82A1F1A8:
	// cmplwi cr6,r28,8
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 8, ctx.xer);
	// li r11,8
	ctx.r11.s64 = 8;
	// bgt cr6,0x82a1f1b8
	if (ctx.cr6.gt) goto loc_82A1F1B8;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82A1F1B8:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82a1f1dc
	if (!ctx.cr6.lt) goto loc_82A1F1DC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a1ef28
	ctx.lr = 0x82A1F1CC;
	sub_82A1EF28(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// b 0x82a1f1a8
	goto loc_82A1F1A8;
loc_82A1F1DC:
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r10,440(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 440);
	// lis r9,8
	ctx.r9.s64 = 524288;
	// ld r7,432(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 432);
	// lbz r5,604(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 604);
	// lis r8,-31964
	ctx.r8.s64 = -2094792704;
	// ori r6,r9,61816
	ctx.r6.u64 = ctx.r9.u64 | 61816;
	// lbz r4,584(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 584);
	// lbz r3,564(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 564);
	// addi r9,r8,29312
	ctx.r9.s64 = ctx.r8.s64 + 29312;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// lfs f0,600(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 600);
	ctx.f0.f64 = double(temp.f32);
	// lbz r31,544(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 544);
	// lfs f7,596(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	ctx.f7.f64 = double(temp.f32);
	// lbz r30,524(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 524);
	// lfs f6,592(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 592);
	ctx.f6.f64 = double(temp.f32);
	// lbz r29,504(r1)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + 504);
	// lfs f5,588(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 588);
	ctx.f5.f64 = double(temp.f32);
	// lbz r26,484(r1)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r1.u32 + 484);
	// lfs f4,580(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 580);
	ctx.f4.f64 = double(temp.f32);
	// lbz r25,464(r1)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r1.u32 + 464);
	// lfs f3,576(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 576);
	ctx.f3.f64 = double(temp.f32);
	// lwzx r11,r11,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lfs f2,572(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 572);
	ctx.f2.f64 = double(temp.f32);
	// lhz r24,616(r1)
	ctx.r24.u64 = PPC_LOAD_U16(ctx.r1.u32 + 616);
	// lfs f31,568(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 568);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,560(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 560);
	ctx.f30.f64 = double(temp.f32);
	// stw r10,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, ctx.r10.u32);
	// lfs f29,556(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 556);
	ctx.f29.f64 = double(temp.f32);
	// std r7,400(r1)
	PPC_STORE_U64(ctx.r1.u32 + 400, ctx.r7.u64);
	// lfs f28,552(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 552);
	ctx.f28.f64 = double(temp.f32);
	// stb r5,367(r1)
	PPC_STORE_U8(ctx.r1.u32 + 367, ctx.r5.u8);
	// lfs f27,548(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	ctx.f27.f64 = double(temp.f32);
	// stb r4,327(r1)
	PPC_STORE_U8(ctx.r1.u32 + 327, ctx.r4.u8);
	// lfs f26,540(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 540);
	ctx.f26.f64 = double(temp.f32);
	// stb r3,287(r1)
	PPC_STORE_U8(ctx.r1.u32 + 287, ctx.r3.u8);
	// lfs f25,536(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 536);
	ctx.f25.f64 = double(temp.f32);
	// ld r6,256(r27)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r27.u32 + 256);
	// lfs f24,532(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	ctx.f24.f64 = double(temp.f32);
	// lwz r8,624(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 624);
	// lfs f23,528(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 528);
	ctx.f23.f64 = double(temp.f32);
	// stb r31,247(r1)
	PPC_STORE_U8(ctx.r1.u32 + 247, ctx.r31.u8);
	// lfs f22,520(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 520);
	ctx.f22.f64 = double(temp.f32);
	// stb r30,207(r1)
	PPC_STORE_U8(ctx.r1.u32 + 207, ctx.r30.u8);
	// lfs f21,516(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 516);
	ctx.f21.f64 = double(temp.f32);
	// stb r29,167(r1)
	PPC_STORE_U8(ctx.r1.u32 + 167, ctx.r29.u8);
	// lfs f20,512(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 512);
	ctx.f20.f64 = double(temp.f32);
	// stb r26,127(r1)
	PPC_STORE_U8(ctx.r1.u32 + 127, ctx.r26.u8);
	// lfs f19,508(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	ctx.f19.f64 = double(temp.f32);
	// stb r25,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r25.u8);
	// lfs f1,60(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 60);
	ctx.f1.f64 = double(temp.f32);
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// lfs f13,500(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	ctx.f13.f64 = double(temp.f32);
	// clrlwi r7,r24,24
	ctx.r7.u64 = ctx.r24.u32 & 0xFF;
	// lfs f12,496(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 496);
	ctx.f12.f64 = double(temp.f32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f11,492(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 492);
	ctx.f11.f64 = double(temp.f32);
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// lfs f10,488(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 488);
	ctx.f10.f64 = double(temp.f32);
	// addi r3,r9,10536
	ctx.r3.s64 = ctx.r9.s64 + 10536;
	// lfs f9,480(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,476(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 476);
	ctx.f8.f64 = double(temp.f32);
	// stfs f0,396(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 396, temp.u32);
	// stfs f7,388(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 388, temp.u32);
	// stfs f6,380(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 380, temp.u32);
	// stfs f5,372(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 372, temp.u32);
	// stfs f4,356(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 356, temp.u32);
	// stfs f3,348(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 348, temp.u32);
	// stfs f2,340(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// stfs f31,332(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 332, temp.u32);
	// stfs f30,316(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 316, temp.u32);
	// stfs f29,308(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// stfs f28,300(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 300, temp.u32);
	// stfs f27,292(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// stfs f26,276(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// stfs f25,268(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// stfs f24,260(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// stfs f23,252(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// stfs f22,236(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// stfs f21,228(r1)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stfs f20,220(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// lfs f7,472(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 472);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,468(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,460(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,456(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 456);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,452(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,448(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	ctx.f2.f64 = double(temp.f32);
	// stfs f19,212(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// bl 0x82a1e918
	ctx.lr = 0x82A1F340;
	sub_82A1E918(ctx, base);
loc_82A1F340:
	// addi r1,r1,3424
	ctx.r1.s64 = ctx.r1.s64 + 3424;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82fa8d50
	ctx.lr = 0x82A1F34C;
	__restfpr_19(ctx, base);
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1F350"))) PPC_WEAK_FUNC(sub_82A1F350);
PPC_FUNC_IMPL(__imp__sub_82A1F350) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7658
	ctx.lr = 0x82A1F358;
	__savegprlr_20(ctx, base);
	// stfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f30.u64);
	// stfd f31,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4688(r1)
	ea = -4688 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// li r20,0
	ctx.r20.s64 = 0;
	// li r5,2448
	ctx.r5.s64 = 2448;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// addi r3,r1,2112
	ctx.r3.s64 = ctx.r1.s64 + 2112;
	// stw r20,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r20.u32);
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A1F398;
	sub_82FA7CF0(ctx, base);
	// addi r7,r1,2112
	ctx.r7.s64 = ctx.r1.s64 + 2112;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1ecc0
	ctx.lr = 0x82A1F3B0;
	sub_82A1ECC0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a1f3c0
	if (!ctx.cr0.eq) goto loc_82A1F3C0;
loc_82A1F3B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a1f520
	goto loc_82A1F520;
loc_82A1F3C0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r21,88(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r30,r1,2112
	ctx.r30.s64 = ctx.r1.s64 + 2112;
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// lfs f30,23856(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23856);
	ctx.f30.f64 = double(temp.f32);
	// stfs f30,0(r25)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r25.u32 + 0, temp.u32);
	// stw r10,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82a1f50c
	if (ctx.cr6.eq) goto loc_82A1F50C;
	// lis r22,-31963
	ctx.r22.s64 = -2094727168;
	// lis r27,-31963
	ctx.r27.s64 = -2094727168;
loc_82A1F3F0:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82a1f4fc
	if (ctx.cr6.eq) goto loc_82A1F4FC;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82a1f4fc
	if (ctx.cr6.eq) goto loc_82A1F4FC;
	// lwz r28,0(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82a1f4fc
	if (ctx.cr6.eq) goto loc_82A1F4FC;
loc_82A1F418:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a1e7e0
	ctx.lr = 0x82A1F428;
	sub_82A1E7E0(ctx, base);
	// lwz r11,220(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 220);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x82a1f464
	if (!ctx.cr6.lt) goto loc_82A1F464;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lwz r10,24028(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24028);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// ori r9,r9,54480
	ctx.r9.u64 = ctx.r9.u64 | 54480;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 196608;
	// addi r4,r4,-32000
	ctx.r4.s64 = ctx.r4.s64 + -32000;
	// bl 0x82a17600
	ctx.lr = 0x82A1F45C;
	sub_82A17600(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// b 0x82a1f4d8
	goto loc_82A1F4D8;
loc_82A1F464:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0c9b8
	ctx.lr = 0x82A1F46C;
	sub_82A0C9B8(ctx, base);
	// lwz r31,24028(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24028);
	// bl 0x82a74720
	ctx.lr = 0x82A1F474;
	sub_82A74720(ctx, base);
	// lwz r11,24036(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24036);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 & ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a1f530
	if (ctx.cr6.eq) goto loc_82A1F530;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,20(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// bl 0x82a0c150
	ctx.lr = 0x82A1F49C;
	sub_82A0C150(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a1f530
	if (!ctx.cr0.eq) goto loc_82A1F530;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,16(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// ori r11,r11,8112
	ctx.r11.u64 = ctx.r11.u64 | 8112;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// addi r3,r3,-29424
	ctx.r3.s64 = ctx.r3.s64 + -29424;
	// bl 0x82a17248
	ctx.lr = 0x82A1F4CC;
	sub_82A17248(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82a0ca30
	ctx.lr = 0x82A1F4D8;
	sub_82A0CA30(ctx, base);
loc_82A1F4D8:
	// lfs f0,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x82a1f4f0
	if (!ctx.cr6.lt) goto loc_82A1F4F0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f31,0(r25)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r25.u32 + 0, temp.u32);
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
loc_82A1F4F0:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82a1f418
	if (ctx.cr6.lt) goto loc_82A1F418;
loc_82A1F4FC:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// cmplw cr6,r26,r21
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r21.u32, ctx.xer);
	// blt cr6,0x82a1f3f0
	if (ctx.cr6.lt) goto loc_82A1F3F0;
loc_82A1F50C:
	// lfs f0,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x82a1f520
	if (!ctx.cr6.eq) goto loc_82A1F520;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
loc_82A1F520:
	// addi r1,r1,4688
	ctx.r1.s64 = ctx.r1.s64 + 4688;
	// lfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x82fa76a8
	__restgprlr_20(ctx, base);
	return;
loc_82A1F530:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0ca30
	ctx.lr = 0x82A1F538;
	sub_82A0CA30(ctx, base);
	// b 0x82a1f3b8
	goto loc_82A1F3B8;
}

__attribute__((alias("__imp__sub_82A1F53C"))) PPC_WEAK_FUNC(sub_82A1F53C);
PPC_FUNC_IMPL(__imp__sub_82A1F53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1F540"))) PPC_WEAK_FUNC(sub_82A1F540);
PPC_FUNC_IMPL(__imp__sub_82A1F540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82A1F548;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// bl 0x83178e54
	ctx.lr = 0x82A1F56C;
	__imp__XamUserGetIndexFromXUID(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a1f588
	if (ctx.cr0.lt) goto loc_82A1F588;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x83178e44
	ctx.lr = 0x82A1F580;
	__imp__XamUserNuiGetEnrollmentIndex(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82a1f6bc
	if (!ctx.cr0.lt) goto loc_82A1F6BC;
loc_82A1F588:
	// lis r4,6
	ctx.r4.s64 = 393216;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// ori r4,r4,16384
	ctx.r4.u64 = ctx.r4.u64 | 16384;
	// bl 0x82a0d110
	ctx.lr = 0x82A1F598;
	sub_82A0D110(ctx, base);
	// lwz r31,92(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a1f6bc
	if (ctx.cr6.eq) goto loc_82A1F6BC;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r30,r11,8192
	ctx.r30.u64 = ctx.r11.u64 | 8192;
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// add r29,r31,r30
	ctx.r29.u64 = ctx.r31.u64 + ctx.r30.u64;
	// bl 0x82a843d8
	ctx.lr = 0x82A1F5D8;
	sub_82A843D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a1f69c
	if (ctx.cr0.lt) goto loc_82A1F69C;
	// li r11,0
	ctx.r11.s64 = 0;
	// ld r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// cmpld cr6,r10,r11
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, ctx.xer);
	// beq cr6,0x82a1f69c
	if (ctx.cr6.eq) goto loc_82A1F69C;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// cmplw cr6,r6,r30
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x82a1f6a0
	if (ctx.cr6.gt) goto loc_82A1F6A0;
	// lbz r11,33(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 33);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r11,33(r28)
	PPC_STORE_U8(ctx.r28.u32 + 33, ctx.r11.u8);
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82a842f0
	ctx.lr = 0x82A1F628;
	sub_82A842F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// blt 0x82a1f6a0
	if (ctx.cr0.lt) goto loc_82A1F6A0;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82a842f0
	ctx.lr = 0x82A1F650;
	sub_82A842F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a1f69c
	if (ctx.cr0.lt) goto loc_82A1F69C;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a1f350
	ctx.lr = 0x82A1F670;
	sub_82A1F350(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
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
	// bl 0x82a81d88
	ctx.lr = 0x82A1F694;
	sub_82A81D88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82a1f6c0
	goto loc_82A1F6C0;
loc_82A1F69C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
loc_82A1F6A0:
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r10,r10,63156
	ctx.r10.u64 = ctx.r10.u64 | 63156;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a81d88
	ctx.lr = 0x82A1F6BC;
	sub_82A81D88(ctx, base);
loc_82A1F6BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A1F6C0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1F6C8"))) PPC_WEAK_FUNC(sub_82A1F6C8);
PPC_FUNC_IMPL(__imp__sub_82A1F6C8) {
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
	// std r4,232(r3)
	PPC_STORE_U64(ctx.r3.u32 + 232, ctx.r4.u64);
	// cmpldi cr6,r4,0
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, 0, ctx.xer);
	// beq cr6,0x82a1f76c
	if (ctx.cr6.eq) goto loc_82A1F76C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a1f76c
	if (!ctx.cr0.eq) goto loc_82A1F76C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82a1f76c
	if (!ctx.cr6.eq) goto loc_82A1F76C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0c9b8
	ctx.lr = 0x82A1F70C;
	sub_82A0C9B8(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r31,24028(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// bl 0x82a74720
	ctx.lr = 0x82A1F718;
	sub_82A74720(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r11,24036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24036);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 & ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a1f764
	if (ctx.cr6.eq) goto loc_82A1F764;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x82a0c150
	ctx.lr = 0x82A1F744;
	sub_82A0C150(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a1f764
	if (!ctx.cr0.eq) goto loc_82A1F764;
	// lwz r11,220(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// li r10,1
	ctx.r10.s64 = 1;
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r10,224(r30)
	PPC_STORE_U32(ctx.r30.u32 + 224, ctx.r10.u32);
loc_82A1F764:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0ca30
	ctx.lr = 0x82A1F76C;
	sub_82A0CA30(ctx, base);
loc_82A1F76C:
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

__attribute__((alias("__imp__sub_82A1F784"))) PPC_WEAK_FUNC(sub_82A1F784);
PPC_FUNC_IMPL(__imp__sub_82A1F784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1F788"))) PPC_WEAK_FUNC(sub_82A1F788);
PPC_FUNC_IMPL(__imp__sub_82A1F788) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0c9b8
	ctx.lr = 0x82A1F7A8;
	sub_82A0C9B8(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r30,24028(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// bl 0x82a74720
	ctx.lr = 0x82A1F7B4;
	sub_82A74720(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r11,24036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24036);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 & ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82a1f7f8
	if (!ctx.cr6.eq) goto loc_82A1F7F8;
loc_82A1F7D4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0ca30
	ctx.lr = 0x82A1F7DC;
	sub_82A0CA30(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A1F7E0:
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
loc_82A1F7F8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82a0c150
	ctx.lr = 0x82A1F804;
	sub_82A0C150(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a1f7d4
	if (!ctx.cr0.eq) goto loc_82A1F7D4;
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// li r11,254
	ctx.r11.s64 = 254;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// bge cr6,0x82a1f834
	if (!ctx.cr6.lt) goto loc_82A1F834;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x83178da4
	ctx.lr = 0x82A1F828;
	__imp__XamUserNuiGetUserIndex(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bge 0x82a1f838
	if (!ctx.cr0.lt) goto loc_82A1F838;
loc_82A1F834:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A1F838:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82a1f890
	if (ctx.cr6.eq) goto loc_82A1F890;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82a1f864
	if (ctx.cr6.eq) goto loc_82A1F864;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82A1F854:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0ca30
	ctx.lr = 0x82A1F85C;
	sub_82A0CA30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82a1f7e0
	goto loc_82A1F7E0;
loc_82A1F864:
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x82a1f7d4
	if (!ctx.cr6.lt) goto loc_82A1F7D4;
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a1f7d4
	if (ctx.cr6.eq) goto loc_82A1F7D4;
	// clrlwi. r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a1f8d0
	if (ctx.cr0.eq) goto loc_82A1F8D0;
	// b 0x82a1f7d4
	goto loc_82A1F7D4;
loc_82A1F890:
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x82a1f8a4
	if (ctx.cr6.lt) goto loc_82A1F8A4;
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// bne cr6,0x82a1f7d4
	if (!ctx.cr6.eq) goto loc_82A1F7D4;
loc_82A1F8A4:
	// clrlwi. r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a1f7d4
	if (!ctx.cr0.eq) goto loc_82A1F7D4;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// ori r11,r11,8112
	ctx.r11.u64 = ctx.r11.u64 | 8112;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,2704
	ctx.r3.s64 = ctx.r11.s64 + 2704;
	// bl 0x82a164b8
	ctx.lr = 0x82A1F8C8;
	sub_82A164B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82a1f7d4
	if (ctx.cr0.eq) goto loc_82A1F7D4;
loc_82A1F8D0:
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x82a1f854
	goto loc_82A1F854;
}

__attribute__((alias("__imp__sub_82A1F8D8"))) PPC_WEAK_FUNC(sub_82A1F8D8);
PPC_FUNC_IMPL(__imp__sub_82A1F8D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82A1F8E0;
	__savegprlr_25(ctx, base);
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x82a1f788
	ctx.lr = 0x82A1F8F4;
	sub_82A1F788(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a1f9f8
	if (ctx.cr0.eq) goto loc_82A1F9F8;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,24028(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24028);
	// addis r31,r11,9
	ctx.r31.s64 = ctx.r11.s64 + 589824;
	// addi r31,r31,-2692
	ctx.r31.s64 = ctx.r31.s64 + -2692;
	// stb r28,33(r31)
	PPC_STORE_U8(ctx.r31.u32 + 33, ctx.r28.u8);
	// stb r28,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r28.u8);
	// lwz r11,24028(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24028);
	// addis r29,r11,9
	ctx.r29.s64 = ctx.r11.s64 + 589824;
	// addi r29,r29,-2360
	ctx.r29.s64 = ctx.r29.s64 + -2360;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a10810
	ctx.lr = 0x82A1F92C;
	sub_82A10810(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a10850
	ctx.lr = 0x82A1F934;
	sub_82A10850(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// lfs f30,23856(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23856);
	ctx.f30.f64 = double(temp.f32);
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
	// b 0x82a1f9a0
	goto loc_82A1F9A0;
loc_82A1F94C:
	// lbz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// stfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r11,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r11.u8);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a1f540
	ctx.lr = 0x82A1F978;
	sub_82A1F540(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82a1f998
	if (ctx.cr0.eq) goto loc_82A1F998;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82a1f998
	if (!ctx.cr6.lt) goto loc_82A1F998;
	// lwz r26,84(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
loc_82A1F998:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a10850
	ctx.lr = 0x82A1F9A0;
	sub_82A10850(ctx, base);
loc_82A1F9A0:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpldi cr6,r3,0
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, 0, ctx.xer);
	// bne cr6,0x82a1f94c
	if (!ctx.cr6.eq) goto loc_82A1F94C;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a16b50
	ctx.lr = 0x82A1F9B8;
	sub_82A16B50(ctx, base);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x82a1f9f8
	if (!ctx.cr6.lt) goto loc_82A1F9F8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a1f6c8
	ctx.lr = 0x82A1F9D0;
	sub_82A1F6C8(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r3,24032(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24032);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a1f9f8
	if (ctx.cr6.eq) goto loc_82A1F9F8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,220(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 220);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A1F9F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A1F9F8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1FA08"))) PPC_WEAK_FUNC(sub_82A1FA08);
PPC_FUNC_IMPL(__imp__sub_82A1FA08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A1FA10;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,18432
	ctx.r4.u64 = ctx.r4.u64 | 18432;
	// bl 0x82a0d110
	ctx.lr = 0x82A1FA24;
	sub_82A0D110(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82a1faf8
	if (ctx.cr6.eq) goto loc_82A1FAF8;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,18432
	ctx.r5.u64 = ctx.r5.u64 | 18432;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A1FA44;
	sub_82FA7CF0(ctx, base);
	// lis r28,-31963
	ctx.r28.s64 = -2094727168;
	// lwz r11,24028(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24028);
	// addis r31,r11,9
	ctx.r31.s64 = ctx.r11.s64 + 589824;
	// addi r31,r31,-2360
	ctx.r31.s64 = ctx.r31.s64 + -2360;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a10810
	ctx.lr = 0x82A1FA5C;
	sub_82A10810(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a10850
	ctx.lr = 0x82A1FA64;
	sub_82A10850(ctx, base);
	// cmpldi cr6,r3,0
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, 0, ctx.xer);
	// beq cr6,0x82a1faa8
	if (ctx.cr6.eq) goto loc_82A1FAA8;
	// addi r30,r29,16
	ctx.r30.s64 = ctx.r29.s64 + 16;
loc_82A1FA70:
	// li r11,24
	ctx.r11.s64 = 24;
	// std r3,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r3.u64);
	// addi r3,r30,-16
	ctx.r3.s64 = ctx.r30.s64 + -16;
	// stw r11,-12(r30)
	PPC_STORE_U32(ctx.r30.u32 + -12, ctx.r11.u32);
	// bl 0x83178e84
	ctx.lr = 0x82A1FA84;
	__imp__XamCacheOpenFile(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a1fa94
	if (ctx.cr0.eq) goto loc_82A1FA94;
	// li r11,0
	ctx.r11.s64 = 0;
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
loc_82A1FA94:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r30,584
	ctx.r30.s64 = ctx.r30.s64 + 584;
	// bl 0x82a10850
	ctx.lr = 0x82A1FAA0;
	sub_82A10850(ctx, base);
	// cmpldi cr6,r3,0
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, 0, ctx.xer);
	// bne cr6,0x82a1fa70
	if (!ctx.cr6.eq) goto loc_82A1FA70;
loc_82A1FAA8:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x83178e74
	ctx.lr = 0x82A1FAB0;
	__imp__XamCacheReset(ctx, base);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// li r30,256
	ctx.r30.s64 = 256;
loc_82A1FAB8:
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82a1fad0
	if (ctx.cr6.eq) goto loc_82A1FAD0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83178e64
	ctx.lr = 0x82A1FAD0;
	__imp__XamCacheCloseFile(ctx, base);
loc_82A1FAD0:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,584
	ctx.r31.s64 = ctx.r31.s64 + 584;
	// bne 0x82a1fab8
	if (!ctx.cr0.eq) goto loc_82A1FAB8;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// lwz r11,24028(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24028);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// ori r10,r10,63156
	ctx.r10.u64 = ctx.r10.u64 | 63156;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a81d88
	ctx.lr = 0x82A1FAF8;
	sub_82A81D88(ctx, base);
loc_82A1FAF8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1FB00"))) PPC_WEAK_FUNC(sub_82A1FB00);
PPC_FUNC_IMPL(__imp__sub_82A1FB00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82A1FB08;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31963
	ctx.r28.s64 = -2094727168;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r11,24028(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24028);
	// addis r29,r11,9
	ctx.r29.s64 = ctx.r11.s64 + 589824;
	// addi r29,r29,-2360
	ctx.r29.s64 = ctx.r29.s64 + -2360;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a10810
	ctx.lr = 0x82A1FB2C;
	sub_82A10810(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a10850
	ctx.lr = 0x82A1FB34;
	sub_82A10850(ctx, base);
	// lis r11,3
	ctx.r11.s64 = 196608;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r26,r11,8192
	ctx.r26.u64 = ctx.r11.u64 | 8192;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82a0d110
	ctx.lr = 0x82A1FB4C;
	sub_82A0D110(ctx, base);
	// lwz r27,88(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82a1fb64
	if (!ctx.cr6.eq) goto loc_82A1FB64;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82a1fce0
	goto loc_82A1FCE0;
loc_82A1FB64:
	// cmpldi cr6,r30,0
	ctx.cr6.compare<uint64_t>(ctx.r30.u64, 0, ctx.xer);
	// beq cr6,0x82a1fcc0
	if (ctx.cr6.eq) goto loc_82A1FCC0;
	// lis r23,-31963
	ctx.r23.s64 = -2094727168;
loc_82A1FB70:
	// std r25,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r25.u64);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a843d8
	ctx.lr = 0x82A1FB98;
	sub_82A843D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a1fbac
	if (ctx.cr0.lt) goto loc_82A1FBAC;
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bne cr6,0x82a1fc04
	if (!ctx.cr6.eq) goto loc_82A1FC04;
loc_82A1FBAC:
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83178e94
	ctx.lr = 0x82A1FBC8;
	__imp__XamReadBiometricData(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82a1fbdc
	if (!ctx.cr0.eq) goto loc_82A1FBDC;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a1fbec
	if (!ctx.cr6.eq) goto loc_82A1FBEC;
loc_82A1FBDC:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_82A1FBEC:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// clrldi r4,r11,32
	ctx.r4.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a84448
	ctx.lr = 0x82A1FC04;
	sub_82A84448(ctx, base);
loc_82A1FC04:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a10850
	ctx.lr = 0x82A1FC0C;
	sub_82A10850(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r25,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r25.u64);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x82a1fc98
	if (ctx.cr6.eq) goto loc_82A1FC98;
	// lwz r11,24028(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24028);
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// li r6,0
	ctx.r6.s64 = 0;
	// addis r3,r11,9
	ctx.r3.s64 = ctx.r11.s64 + 589824;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r3,-2412
	ctx.r3.s64 = ctx.r3.s64 + -2412;
	// bl 0x83179414
	ctx.lr = 0x82A1FC3C;
	__imp__KeWaitForSingleObject(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82a1fc98
	if (!ctx.cr0.eq) goto loc_82A1FC98;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0c9b8
	ctx.lr = 0x82A1FC4C;
	sub_82A0C9B8(ctx, base);
	// lwz r31,24028(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24028);
	// bl 0x82a74720
	ctx.lr = 0x82A1FC54;
	sub_82A74720(ctx, base);
	// lwz r11,24036(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24036);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 & ctx.r31.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a1fca4
	if (ctx.cr6.eq) goto loc_82A1FCA4;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,19108
	ctx.r11.u64 = ctx.r11.u64 | 19108;
	// lwzx r11,r3,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82a1fca4
	if (ctx.cr6.eq) goto loc_82A1FCA4;
	// bl 0x82a0d640
	ctx.lr = 0x82A1FC88;
	sub_82A0D640(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// beq 0x82a1fcb4
	if (ctx.cr0.eq) goto loc_82A1FCB4;
	// bl 0x82a0ca30
	ctx.lr = 0x82A1FC98;
	sub_82A0CA30(ctx, base);
loc_82A1FC98:
	// cmpldi cr6,r30,0
	ctx.cr6.compare<uint64_t>(ctx.r30.u64, 0, ctx.xer);
	// bne cr6,0x82a1fb70
	if (!ctx.cr6.eq) goto loc_82A1FB70;
	// b 0x82a1fcc0
	goto loc_82A1FCC0;
loc_82A1FCA4:
	// lis r25,-31999
	ctx.r25.s64 = -2097086464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r25,r25,5
	ctx.r25.u64 = ctx.r25.u64 | 5;
	// b 0x82a1fcbc
	goto loc_82A1FCBC;
loc_82A1FCB4:
	// lis r25,-32768
	ctx.r25.s64 = -2147483648;
	// ori r25,r25,16388
	ctx.r25.u64 = ctx.r25.u64 | 16388;
loc_82A1FCBC:
	// bl 0x82a0ca30
	ctx.lr = 0x82A1FCC0;
	sub_82A0CA30(ctx, base);
loc_82A1FCC0:
	// lis r10,8
	ctx.r10.s64 = 524288;
	// lwz r11,24028(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24028);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// ori r10,r10,63156
	ctx.r10.u64 = ctx.r10.u64 | 63156;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a81d88
	ctx.lr = 0x82A1FCDC;
	sub_82A81D88(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_82A1FCE0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1FCE8"))) PPC_WEAK_FUNC(sub_82A1FCE8);
PPC_FUNC_IMPL(__imp__sub_82A1FCE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82A1FCF0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,224(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a1fdc8
	if (ctx.cr6.eq) goto loc_82A1FDC8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0c9b8
	ctx.lr = 0x82A1FD0C;
	sub_82A0C9B8(ctx, base);
	// lis r29,-31963
	ctx.r29.s64 = -2094727168;
	// lwz r30,24028(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24028);
	// bl 0x82a74720
	ctx.lr = 0x82A1FD18;
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
	// beq cr6,0x82a1fdc0
	if (ctx.cr6.eq) goto loc_82A1FDC0;
	// lwz r10,220(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// li r27,0
	ctx.r27.s64 = 0;
	// mulli r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 * 28;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82a1fd60
	if (ctx.cr6.eq) goto loc_82A1FD60;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82a1fd60
	if (ctx.cr6.eq) goto loc_82A1FD60;
	// stw r27,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r27.u32);
loc_82A1FD60:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,20(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x82a0ca30
	ctx.lr = 0x82A1FD6C;
	sub_82A0CA30(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82a1fdc8
	if (ctx.cr6.eq) goto loc_82A1FDC8;
	// ld r4,232(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 232);
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// bl 0x82a841a8
	ctx.lr = 0x82A1FD80;
	sub_82A841A8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0c9b8
	ctx.lr = 0x82A1FD88;
	sub_82A0C9B8(ctx, base);
	// lwz r30,24028(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24028);
	// bl 0x82a74720
	ctx.lr = 0x82A1FD90;
	sub_82A74720(ctx, base);
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
	// beq cr6,0x82a1fdc0
	if (ctx.cr6.eq) goto loc_82A1FDC0;
	// lwz r10,220(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// mulli r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 * 28;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r27,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r27.u32);
	// stw r27,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r27.u32);
loc_82A1FDC0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0ca30
	ctx.lr = 0x82A1FDC8;
	sub_82A0CA30(ctx, base);
loc_82A1FDC8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1FDD0"))) PPC_WEAK_FUNC(sub_82A1FDD0);
PPC_FUNC_IMPL(__imp__sub_82A1FDD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r5,2004
	ctx.r11.s64 = ctx.r5.s64 * 2004;
	// lfs f0,5184(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// mulli r8,r4,2004
	ctx.r8.s64 = ctx.r4.s64 * 2004;
	// li r9,500
	ctx.r9.s64 = 500;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82A1FDF8:
	// lfsx f13,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// bdnz 0x82a1fdf8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A1FDF8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f13,-25136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -25136);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1FE24"))) PPC_WEAK_FUNC(sub_82A1FE24);
PPC_FUNC_IMPL(__imp__sub_82A1FE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1FE28"))) PPC_WEAK_FUNC(sub_82A1FE28);
PPC_FUNC_IMPL(__imp__sub_82A1FE28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x82A1FE30;
	__savegprlr_22(ctx, base);
	// stwu r1,-2176(r1)
	ea = -2176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82a16a88
	ctx.lr = 0x82A1FE54;
	sub_82A16A88(ctx, base);
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82a1fe74
	if (!ctx.cr6.gt) goto loc_82A1FE74;
	// bl 0x82a16a88
	ctx.lr = 0x82A1FE68;
	sub_82A16A88(ctx, base);
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// subf r11,r11,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r11.s64;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
loc_82A1FE74:
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x82a1fefc
	if (!ctx.cr6.lt) goto loc_82A1FEFC;
	// mulli r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 * 24;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_82A1FE88:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82a1feec
	if (ctx.cr6.eq) goto loc_82A1FEEC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82a1feec
	if (!ctx.cr6.gt) goto loc_82A1FEEC;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addis r27,r23,15
	ctx.r27.s64 = ctx.r23.s64 + 983040;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// addi r27,r27,18968
	ctx.r27.s64 = ctx.r27.s64 + 18968;
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
loc_82A1FEB8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1e7e0
	ctx.lr = 0x82A1FEC8;
	sub_82A1E7E0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a16c98
	ctx.lr = 0x82A1FED4;
	sub_82A16C98(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stwu r25,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r25.u32);
	ctx.r29.u32 = ea;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82a1feb8
	if (ctx.cr6.lt) goto loc_82A1FEB8;
loc_82A1FEEC:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// cmplw cr6,r25,r26
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x82a1fe88
	if (ctx.cr6.lt) goto loc_82A1FE88;
loc_82A1FEFC:
	// stw r28,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r28.u32);
	// addi r1,r1,2176
	ctx.r1.s64 = ctx.r1.s64 + 2176;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1FF08"))) PPC_WEAK_FUNC(sub_82A1FF08);
PPC_FUNC_IMPL(__imp__sub_82A1FF08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7658
	ctx.lr = 0x82A1FF10;
	__savegprlr_20(ctx, base);
	// stwu r1,-3488(r1)
	ea = -3488 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// li r5,408
	ctx.r5.s64 = 408;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r20,r7
	ctx.r20.u64 = ctx.r7.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A1FF48;
	sub_82FA7CF0(ctx, base);
	// li r5,408
	ctx.r5.s64 = 408;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A1FF58;
	sub_82FA7CF0(ctx, base);
	// li r5,2448
	ctx.r5.s64 = 2448;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,928
	ctx.r3.s64 = ctx.r1.s64 + 928;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A1FF68;
	sub_82FA7CF0(ctx, base);
	// lis r11,3
	ctx.r11.s64 = 196608;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r31,r11,8192
	ctx.r31.u64 = ctx.r11.u64 | 8192;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A1FF80;
	sub_82FA7CF0(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// addi r29,r28,8
	ctx.r29.s64 = ctx.r28.s64 + 8;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r7,r1,928
	ctx.r7.s64 = ctx.r1.s64 + 928;
	// subf r11,r29,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r29.s64;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82a1ecc0
	ctx.lr = 0x82A1FFB8;
	sub_82A1ECC0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a1ffe8
	if (ctx.cr0.eq) goto loc_82A1FFE8;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,928
	ctx.r4.s64 = ctx.r1.s64 + 928;
	// bl 0x82a1fe28
	ctx.lr = 0x82A1FFD8;
	sub_82A1FE28(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82a1ffe8
	if (!ctx.cr6.lt) goto loc_82A1FFE8;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_82A1FFE8:
	// li r10,2004
	ctx.r10.s64 = 2004;
	// addi r11,r31,-52
	ctx.r11.s64 = ctx.r31.s64 + -52;
	// addi r5,r1,512
	ctx.r5.s64 = ctx.r1.s64 + 512;
	// divwu r11,r11,r10
	ctx.r11.u32 = ctx.r11.u32 / ctx.r10.u32;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82a179b0
	ctx.lr = 0x82A20008;
	sub_82A179B0(ctx, base);
	// mr. r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// li r25,-1
	ctx.r25.s64 = -1;
	// mr r22,r23
	ctx.r22.u64 = ctx.r23.u64;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// blt 0x82a20154
	if (ctx.cr0.lt) goto loc_82A20154;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a2014c
	if (ctx.cr6.eq) goto loc_82A2014C;
	// addi r11,r1,512
	ctx.r11.s64 = ctx.r1.s64 + 512;
	// addi r27,r11,-4
	ctx.r27.s64 = ctx.r11.s64 + -4;
loc_82A20038:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82a200ac
	if (!ctx.cr6.lt) goto loc_82A200AC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// beq cr6,0x82a20100
	if (ctx.cr6.eq) goto loc_82A20100;
	// cmpwi cr6,r25,-1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, -1, ctx.xer);
	// beq cr6,0x82a20078
	if (ctx.cr6.eq) goto loc_82A20078;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 + ctx.r29.u64;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
loc_82A20078:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a1eed8
	ctx.lr = 0x82A20080;
	sub_82A1EED8(ctx, base);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,948
	ctx.r9.s64 = ctx.r1.s64 + 948;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r25,r11,r10
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mulli r11,r25,24
	ctx.r11.s64 = ctx.r25.s64 * 24;
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bl 0x82a75220
	ctx.lr = 0x82A200A8;
	sub_82A75220(ctx, base);
	// b 0x82a200f8
	goto loc_82A200F8;
loc_82A200AC:
	// clrlwi. r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a20100
	if (!ctx.cr0.eq) goto loc_82A20100;
	// cmpwi cr6,r25,-1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, -1, ctx.xer);
	// beq cr6,0x82a200d0
	if (ctx.cr6.eq) goto loc_82A200D0;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
loc_82A200D0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a1eed8
	ctx.lr = 0x82A200D8;
	sub_82A1EED8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83179714
	ctx.lr = 0x82A200E4;
	__imp__XeKeysGetConsoleID(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a20160
	if (ctx.cr0.lt) goto loc_82A20160;
	// addi r3,r31,6
	ctx.r3.s64 = ctx.r31.s64 + 6;
	// bl 0x82a82968
	ctx.lr = 0x82A200F4;
	sub_82A82968(ctx, base);
	// li r22,1
	ctx.r22.s64 = 1;
loc_82A200F8:
	// stw r23,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r23.u32);
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
loc_82A20100:
	// lwzu r11,4(r27)
	ea = 4 + ctx.r27.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r27.u32 = ea;
	// li r5,2004
	ctx.r5.s64 = 2004;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mulli r11,r11,2004
	ctx.r11.s64 = ctx.r11.s64 * 2004;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// addis r4,r11,15
	ctx.r4.s64 = ctx.r11.s64 + 983040;
	// addi r4,r4,18968
	ctx.r4.s64 = ctx.r4.s64 + 18968;
	// bl 0x82a75220
	ctx.lr = 0x82A20120;
	sub_82A75220(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r30,r30,2004
	ctx.r30.s64 = ctx.r30.s64 + 2004;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,2004
	ctx.r11.s64 = ctx.r11.s64 + 2004;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82a20038
	if (ctx.cr6.lt) goto loc_82A20038;
loc_82A2014C:
	// subf r11,r28,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r28.s64;
	// stw r11,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r11.u32);
loc_82A20154:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
loc_82A20158:
	// addi r1,r1,3488
	ctx.r1.s64 = ctx.r1.s64 + 3488;
	// b 0x82fa76a8
	__restgprlr_20(ctx, base);
	return;
loc_82A20160:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82a20158
	goto loc_82A20158;
}

__attribute__((alias("__imp__sub_82A2016C"))) PPC_WEAK_FUNC(sub_82A2016C);
PPC_FUNC_IMPL(__imp__sub_82A2016C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A20170"))) PPC_WEAK_FUNC(sub_82A20170);
PPC_FUNC_IMPL(__imp__sub_82A20170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82A20178;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// ld r27,256(r3)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r3.u32 + 256);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// bl 0x82a0c9b8
	ctx.lr = 0x82A2019C;
	sub_82A0C9B8(ctx, base);
	// lis r28,-31963
	ctx.r28.s64 = -2094727168;
	// lwz r31,24028(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24028);
	// bl 0x82a74720
	ctx.lr = 0x82A201A8;
	sub_82A74720(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r11,24036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24036);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 & ctx.r31.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a201e0
	if (!ctx.cr6.eq) goto loc_82A201E0;
	// lis r31,-31999
	ctx.r31.s64 = -2097086464;
	// ori r31,r31,5
	ctx.r31.u64 = ctx.r31.u64 | 5;
loc_82A201D0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0ca30
	ctx.lr = 0x82A201D8;
	sub_82A0CA30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82a203c4
	goto loc_82A203C4;
loc_82A201E0:
	// lwz r4,20(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// bl 0x82a0c150
	ctx.lr = 0x82A201E8;
	sub_82A0C150(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a201fc
	if (ctx.cr0.eq) goto loc_82A201FC;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,170
	ctx.r31.u64 = ctx.r31.u64 | 170;
	// b 0x82a201d0
	goto loc_82A201D0;
loc_82A201FC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0ca30
	ctx.lr = 0x82A20204;
	sub_82A0CA30(ctx, base);
	// lis r11,3
	ctx.r11.s64 = 196608;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// ori r31,r11,8192
	ctx.r31.u64 = ctx.r11.u64 | 8192;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a0d110
	ctx.lr = 0x82A20218;
	sub_82A0D110(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a0d110
	ctx.lr = 0x82A20224;
	sub_82A0D110(ctx, base);
	// lwz r25,100(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lis r11,8
	ctx.r11.s64 = 524288;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// ori r31,r11,63156
	ctx.r31.u64 = ctx.r11.u64 | 63156;
	// beq cr6,0x82a20384
	if (ctx.cr6.eq) goto loc_82A20384;
	// lwz r29,96(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82a203a0
	if (ctx.cr6.eq) goto loc_82A203A0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83178e94
	ctx.lr = 0x82A20260;
	__imp__XamReadBiometricData(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82a2028c
	if (!ctx.cr0.eq) goto loc_82A2028C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a2028c
	if (ctx.cr6.eq) goto loc_82A2028C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82a20298
	if (!ctx.cr6.eq) goto loc_82A20298;
	// b 0x82a20290
	goto loc_82A20290;
loc_82A2028C:
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
loc_82A20290:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_82A20298:
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82a1ff08
	ctx.lr = 0x82A202B0;
	sub_82A1FF08(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82a2034c
	if (ctx.cr0.lt) goto loc_82A2034C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a84388
	ctx.lr = 0x82A202C4;
	sub_82A84388(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82a84448
	ctx.lr = 0x82A202DC;
	sub_82A84448(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82a2034c
	if (ctx.cr0.lt) goto loc_82A2034C;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,248(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 248);
	// bl 0x83178ec4
	ctx.lr = 0x82A202F0;
	__imp__XamUserNuiEnableBiometric(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82a2034c
	if (ctx.cr0.lt) goto loc_82A2034C;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83178eb4
	ctx.lr = 0x82A20310;
	__imp__XamWriteBiometricData(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt 0x82a20320
	if (ctx.cr0.gt) goto loc_82A20320;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82a20328
	goto loc_82A20328;
loc_82A20320:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r30,r11,32775
	ctx.r30.u64 = ctx.r11.u64 | 2147942400;
loc_82A20328:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82a2034c
	if (ctx.cr6.lt) goto loc_82A2034C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a1f100
	ctx.lr = 0x82A20340;
	sub_82A1F100(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82a174d0
	ctx.lr = 0x82A2034C;
	sub_82A174D0(ctx, base);
loc_82A2034C:
	// lis r10,8
	ctx.r10.s64 = 524288;
	// lwz r11,24028(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24028);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// ori r31,r10,63156
	ctx.r31.u64 = ctx.r10.u64 | 63156;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82a81d88
	ctx.lr = 0x82A20368;
	sub_82A81D88(ctx, base);
	// lwz r11,24028(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24028);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82a81d88
	ctx.lr = 0x82A2037C;
	sub_82A81D88(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82a203c4
	goto loc_82A203C4;
loc_82A20384:
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82a203a0
	if (ctx.cr6.eq) goto loc_82A203A0;
	// lwz r11,24028(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24028);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82a81d88
	ctx.lr = 0x82A203A0;
	sub_82A81D88(ctx, base);
loc_82A203A0:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82a203bc
	if (ctx.cr6.eq) goto loc_82A203BC;
	// lwz r11,24028(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24028);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82a81d88
	ctx.lr = 0x82A203BC;
	sub_82A81D88(ctx, base);
loc_82A203BC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
loc_82A203C4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A203CC"))) PPC_WEAK_FUNC(sub_82A203CC);
PPC_FUNC_IMPL(__imp__sub_82A203CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A203D0"))) PPC_WEAK_FUNC(sub_82A203D0);
PPC_FUNC_IMPL(__imp__sub_82A203D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7658
	ctx.lr = 0x82A203D8;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r20,r7
	ctx.r20.u64 = ctx.r7.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82a2041c
	if (!ctx.cr6.gt) goto loc_82A2041C;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// lfs f0,5184(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
loc_82A2040C:
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82a2040c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A2040C;
loc_82A2041C:
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x82a20484
	if (!ctx.cr6.gt) goto loc_82A20484;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82A2042C:
	// addi r25,r26,1
	ctx.r25.s64 = ctx.r26.s64 + 1;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// cmpw cr6,r25,r23
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x82a20474
	if (!ctx.cr6.lt) goto loc_82A20474;
	// lwz r28,4(r22)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// lwzx r27,r29,r28
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
loc_82A20448:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82a1fdd0
	ctx.lr = 0x82A20458;
	sub_82A1FDD0(ctx, base);
	// lwzx r11,r31,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r23
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r23.s32, ctx.xer);
	// stfsx f1,r11,r29
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, temp.u32);
	// stfsx f1,r27,r31
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r27.u32 + ctx.r31.u32, temp.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// blt cr6,0x82a20448
	if (ctx.cr6.lt) goto loc_82A20448;
loc_82A20474:
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r25,r23
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x82a2042c
	if (ctx.cr6.lt) goto loc_82A2042C;
loc_82A20484:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x82a204b8
	if (!ctx.cr6.gt) goto loc_82A204B8;
	// mtctr r23
	ctx.ctr.u64 = ctx.r23.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A20498:
	// lwz r9,8(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,12(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// stbx r8,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82a20498
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A20498;
loc_82A204B8:
	// subf. r11,r21,r23
	ctx.r11.s64 = ctx.r23.s64 - ctx.r21.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82a20634
	if (!ctx.cr0.gt) goto loc_82A20634;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// rlwinm r31,r23,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f11,-24776(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24776);
	ctx.f11.f64 = double(temp.f32);
loc_82A204D4:
	// li r11,0
	ctx.r11.s64 = 0;
	// fmr f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f11.f64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82a20544
	if (!ctx.cr6.gt) goto loc_82A20544;
	// li r5,0
	ctx.r5.s64 = 0;
loc_82A204F0:
	// addi r8,r6,1
	ctx.r8.s64 = ctx.r6.s64 + 1;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82a20534
	if (!ctx.cr6.lt) goto loc_82A20534;
	// lwz r4,4(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// addi r9,r5,4
	ctx.r9.s64 = ctx.r5.s64 + 4;
	// lwzx r4,r4,r5
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
loc_82A2050C:
	// lfsx f13,r4,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82a20524
	if (!ctx.cr6.lt) goto loc_82A20524;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_82A20524:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82a2050c
	if (ctx.cr6.lt) goto loc_82A2050C;
loc_82A20534:
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82a204f0
	if (ctx.cr6.lt) goto loc_82A204F0;
loc_82A20544:
	// fmr f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f11.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f13,f11
	ctx.f13.f64 = ctx.f11.f64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82a205b8
	if (!ctx.cr6.gt) goto loc_82A205B8;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A2055C:
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82a205a0
	if (ctx.cr6.eq) goto loc_82A205A0;
	// cmpw cr6,r8,r3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82a205a0
	if (ctx.cr6.eq) goto loc_82A205A0;
	// lwz r9,4(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// lfsx f0,r6,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82a20588
	if (!ctx.cr6.lt) goto loc_82A20588;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
loc_82A20588:
	// rlwinm r6,r3,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r6,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// lfsx f0,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82a205a0
	if (!ctx.cr6.lt) goto loc_82A205A0;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_82A205A0:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82a2055c
	if (ctx.cr6.lt) goto loc_82A2055C;
	// fcmpu cr6,f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x82a205bc
	if (ctx.cr6.lt) goto loc_82A205BC;
loc_82A205B8:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82A205BC:
	// lwz r8,8(r22)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,12(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// li r6,1
	ctx.r6.s64 = 1;
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwzx r8,r8,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// stbx r6,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r6.u8);
	// lwz r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// add r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r8,-4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// stwx r8,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// ble 0x82a2062c
	if (!ctx.cr0.gt) goto loc_82A2062C;
	// lwz r8,4(r22)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A205F8:
	// add r5,r31,r8
	ctx.r5.u64 = ctx.r31.u64 + ctx.r8.u64;
	// lwzx r6,r11,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwzx r4,r8,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r3,r31,r6
	ctx.r3.u64 = ctx.r31.u64 + ctx.r6.u64;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// lwz r5,-4(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + -4);
	// lfsx f0,r5,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r4,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,-4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r6,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, temp.u32);
	// blt cr6,0x82a205f8
	if (ctx.cr6.lt) goto loc_82A205F8;
loc_82A2062C:
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// bdnz 0x82a204d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A204D4;
loc_82A20634:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x82a20664
	if (!ctx.cr6.gt) goto loc_82A20664;
	// mtctr r23
	ctx.ctr.u64 = ctx.r23.u64;
	// addi r10,r20,-4
	ctx.r10.s64 = ctx.r20.s64 + -4;
loc_82A20648:
	// lwz r9,12(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// lbzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x82a2065c
	if (!ctx.cr0.eq) goto loc_82A2065C;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
loc_82A2065C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82a20648
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A20648;
loc_82A20664:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76a8
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2066C"))) PPC_WEAK_FUNC(sub_82A2066C);
PPC_FUNC_IMPL(__imp__sub_82A2066C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A20670"))) PPC_WEAK_FUNC(sub_82A20670);
PPC_FUNC_IMPL(__imp__sub_82A20670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7654
	ctx.lr = 0x82A20678;
	__savegprlr_19(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-5136(r1)
	ea = -5136 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r5,2448
	ctx.r5.s64 = 2448;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// mr r21,r28
	ctx.r21.u64 = ctx.r28.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A206A4;
	sub_82FA7CF0(ctx, base);
	// li r5,408
	ctx.r5.s64 = 408;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A206B4;
	sub_82FA7CF0(ctx, base);
	// lis r11,3
	ctx.r11.s64 = 196608;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r31,r11,8192
	ctx.r31.u64 = ctx.r11.u64 | 8192;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a0d110
	ctx.lr = 0x82A206C8;
	sub_82A0D110(ctx, base);
	// lis r4,3
	ctx.r4.s64 = 196608;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// ori r4,r4,7808
	ctx.r4.u64 = ctx.r4.u64 | 7808;
	// bl 0x82a0d110
	ctx.lr = 0x82A206D8;
	sub_82A0D110(ctx, base);
	// lis r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,42534
	ctx.r4.u64 = ctx.r4.u64 | 42534;
	// bl 0x82a0d110
	ctx.lr = 0x82A206E8;
	sub_82A0D110(ctx, base);
	// lwz r27,92(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r19,96(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// lwz r20,80(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// beq cr6,0x82a2070c
	if (ctx.cr6.eq) goto loc_82A2070C;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82a2070c
	if (ctx.cr6.eq) goto loc_82A2070C;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// bne cr6,0x82a20714
	if (!ctx.cr6.eq) goto loc_82A20714;
loc_82A2070C:
	// lis r21,-32761
	ctx.r21.s64 = -2147024896;
	// ori r21,r21,14
	ctx.r21.u64 = ctx.r21.u64 | 14;
loc_82A20714:
	// lis r11,3
	ctx.r11.s64 = 196608;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// ori r5,r11,7800
	ctx.r5.u64 = ctx.r11.u64 | 7800;
	// ori r11,r10,7804
	ctx.r11.u64 = ctx.r10.u64 | 7804;
	// add r25,r27,r5
	ctx.r25.u64 = ctx.r27.u64 + ctx.r5.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stwx r28,r27,r11
	PPC_STORE_U32(ctx.r27.u32 + ctx.r11.u32, ctx.r28.u32);
	// stw r28,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r28.u32);
	// bl 0x82a75988
	ctx.lr = 0x82A2073C;
	sub_82A75988(ctx, base);
	// lis r24,-31963
	ctx.r24.s64 = -2094727168;
	// std r28,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r28.u64);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// blt cr6,0x82a208e0
	if (ctx.cr6.lt) goto loc_82A208E0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a843d8
	ctx.lr = 0x82A20768;
	sub_82A843D8(ctx, base);
	// mr. r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// blt 0x82a208e0
	if (ctx.cr0.lt) goto loc_82A208E0;
	// li r10,0
	ctx.r10.s64 = 0;
	// ld r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// ori r23,r9,16389
	ctx.r23.u64 = ctx.r9.u64 | 16389;
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// beq cr6,0x82a20794
	if (ctx.cr6.eq) goto loc_82A20794;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bne cr6,0x82a20798
	if (!ctx.cr6.eq) goto loc_82A20798;
loc_82A20794:
	// mr r21,r23
	ctx.r21.u64 = ctx.r23.u64;
loc_82A20798:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// blt cr6,0x82a208e0
	if (ctx.cr6.lt) goto loc_82A208E0;
	// addi r7,r1,560
	ctx.r7.s64 = ctx.r1.s64 + 560;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82a1ecc0
	ctx.lr = 0x82A207B8;
	sub_82A1ECC0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a207c4
	if (!ctx.cr0.eq) goto loc_82A207C4;
	// mr r21,r23
	ctx.r21.u64 = ctx.r23.u64;
loc_82A207C4:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// blt cr6,0x82a208e0
	if (ctx.cr6.lt) goto loc_82A208E0;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r30,r1,560
	ctx.r30.s64 = ctx.r1.s64 + 560;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a20830
	if (ctx.cr6.eq) goto loc_82A20830;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
loc_82A207E0:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82a20824
	if (ctx.cr6.eq) goto loc_82A20824;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82a20824
	if (ctx.cr6.eq) goto loc_82A20824;
loc_82A207FC:
	// addi r5,r1,3008
	ctx.r5.s64 = ctx.r1.s64 + 3008;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1e7e0
	ctx.lr = 0x82A2080C;
	sub_82A1E7E0(ctx, base);
	// addi r4,r1,3008
	ctx.r4.s64 = ctx.r1.s64 + 3008;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1e860
	ctx.lr = 0x82A20818;
	sub_82A1E860(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82a207fc
	if (ctx.cr6.lt) goto loc_82A207FC;
loc_82A20824:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// bne 0x82a207e0
	if (!ctx.cr0.eq) goto loc_82A207E0;
loc_82A20830:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// bge cr6,0x82a20840
	if (!ctx.cr6.lt) goto loc_82A20840;
	// mr r21,r23
	ctx.r21.u64 = ctx.r23.u64;
loc_82A20840:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// blt cr6,0x82a208e0
	if (ctx.cr6.lt) goto loc_82A208E0;
	// lis r6,0
	ctx.r6.s64 = 0;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// ori r6,r6,42534
	ctx.r6.u64 = ctx.r6.u64 | 42534;
	// li r4,102
	ctx.r4.s64 = 102;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82a0ce68
	ctx.lr = 0x82A20860;
	sub_82A0CE68(ctx, base);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82a203d0
	ctx.lr = 0x82A2087C;
	sub_82A203D0(ctx, base);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,54480
	ctx.r10.u64 = ctx.r10.u64 | 54480;
	// ori r9,r11,40080
	ctx.r9.u64 = ctx.r11.u64 | 40080;
	// mullw r10,r22,r10
	ctx.r10.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r10.s32);
	// li r30,20
	ctx.r30.s64 = 20;
	// lwz r11,24028(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24028);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addis r28,r11,3
	ctx.r28.s64 = ctx.r11.s64 + 196608;
	// addi r28,r28,-32000
	ctx.r28.s64 = ctx.r28.s64 + -32000;
	// addi r31,r28,4
	ctx.r31.s64 = ctx.r28.s64 + 4;
	// stwx r30,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r30.u32);
loc_82A208B4:
	// lwzu r11,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// li r5,2004
	ctx.r5.s64 = 2004;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mulli r11,r11,2004
	ctx.r11.s64 = ctx.r11.s64 * 2004;
	// add r4,r11,r27
	ctx.r4.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82A208CC;
	sub_82FA77C0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,2004
	ctx.r31.s64 = ctx.r31.s64 + 2004;
	// bne 0x82a208b4
	if (!ctx.cr0.eq) goto loc_82A208B4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r11.u8);
loc_82A208E0:
	// lis r11,8
	ctx.r11.s64 = 524288;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// ori r31,r11,63156
	ctx.r31.u64 = ctx.r11.u64 | 63156;
	// beq cr6,0x82a20904
	if (ctx.cr6.eq) goto loc_82A20904;
	// lwz r11,24028(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24028);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82a81d88
	ctx.lr = 0x82A20904;
	sub_82A81D88(ctx, base);
loc_82A20904:
	// lwz r11,24028(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24028);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82a81d88
	ctx.lr = 0x82A20918;
	sub_82A81D88(ctx, base);
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82a20934
	if (ctx.cr6.eq) goto loc_82A20934;
	// lwz r11,24028(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24028);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82a81d88
	ctx.lr = 0x82A20934;
	sub_82A81D88(ctx, base);
loc_82A20934:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r1,r1,5136
	ctx.r1.s64 = ctx.r1.s64 + 5136;
	// b 0x82fa76a4
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A20940"))) PPC_WEAK_FUNC(sub_82A20940);
PPC_FUNC_IMPL(__imp__sub_82A20940) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82A20948;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31963
	ctx.r30.s64 = -2094727168;
	// lis r11,8
	ctx.r11.s64 = 524288;
	// ori r29,r11,63176
	ctx.r29.u64 = ctx.r11.u64 | 63176;
	// lwz r11,24028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24028);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82a10810
	ctx.lr = 0x82A20964;
	sub_82A10810(ctx, base);
	// lwz r11,24028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24028);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82a10850
	ctx.lr = 0x82A20970;
	sub_82A10850(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpldi cr6,r3,0
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, 0, ctx.xer);
	// beq cr6,0x82a20a08
	if (ctx.cr6.eq) goto loc_82A20A08;
	// lis r27,-31963
	ctx.r27.s64 = -2094727168;
loc_82A20980:
	// bl 0x82a1ec20
	ctx.lr = 0x82A20984;
	sub_82A1EC20(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// bge cr6,0x82a20a08
	if (!ctx.cr6.lt) goto loc_82A20A08;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a20670
	ctx.lr = 0x82A2099C;
	sub_82A20670(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a209e8
	if (ctx.cr0.lt) goto loc_82A209E8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0c9b8
	ctx.lr = 0x82A209AC;
	sub_82A0C9B8(ctx, base);
	// lwz r31,24028(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24028);
	// bl 0x82a74720
	ctx.lr = 0x82A209B4;
	sub_82A74720(ctx, base);
	// lwz r11,24036(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24036);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 & ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a20a04
	if (ctx.cr6.eq) goto loc_82A20A04;
	// mulli r10,r28,28
	ctx.r10.s64 = ctx.r28.s64 * 28;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// bl 0x82a0ca30
	ctx.lr = 0x82A209E8;
	sub_82A0CA30(ctx, base);
loc_82A209E8:
	// lwz r11,24028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24028);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82a10850
	ctx.lr = 0x82A209F4;
	sub_82A10850(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpldi cr6,r3,0
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, 0, ctx.xer);
	// bne cr6,0x82a20980
	if (!ctx.cr6.eq) goto loc_82A20980;
	// b 0x82a20a08
	goto loc_82A20A08;
loc_82A20A04:
	// bl 0x82a0ca30
	ctx.lr = 0x82A20A08;
	sub_82A0CA30(ctx, base);
loc_82A20A08:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A20A10"))) PPC_WEAK_FUNC(sub_82A20A10);
PPC_FUNC_IMPL(__imp__sub_82A20A10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A20A18;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a20a3c
	if (ctx.cr6.eq) goto loc_82A20A3C;
	// lis r4,8348
	ctx.r4.s64 = 547094528;
	// bl 0x82691460
	ctx.lr = 0x82A20A38;
	sub_82691460(ctx, base);
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
loc_82A20A3C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a20aac
	if (ctx.cr6.eq) goto loc_82A20AAC;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82a20a94
	if (!ctx.cr6.gt) goto loc_82A20A94;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82A20A5C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a20a80
	if (ctx.cr6.eq) goto loc_82A20A80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A20A80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A20A80:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82a20a5c
	if (ctx.cr6.lt) goto loc_82A20A5C;
loc_82A20A94:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a20aa8
	if (ctx.cr6.eq) goto loc_82A20AA8;
	// lis r4,8348
	ctx.r4.s64 = 547094528;
	// bl 0x82691460
	ctx.lr = 0x82A20AA8;
	sub_82691460(ctx, base);
loc_82A20AA8:
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
loc_82A20AAC:
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A20AC0"))) PPC_WEAK_FUNC(sub_82A20AC0);
PPC_FUNC_IMPL(__imp__sub_82A20AC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82a20b94
	if (ctx.cr6.eq) goto loc_82A20B94;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r1,-12
	ctx.r9.s64 = ctx.r1.s64 + -12;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// stw r5,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r5.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// subf r8,r4,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r4.s64;
	// stw r5,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
	// addi r10,r3,40
	ctx.r10.s64 = ctx.r3.s64 + 40;
	// li r4,1
	ctx.r4.s64 = 1;
loc_82A20AFC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82a20b10
	if (ctx.cr6.eq) goto loc_82A20B10;
	// stwx r4,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r4.u32);
loc_82A20B10:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82a20afc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A20AFC;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82a20b94
	if (!ctx.cr6.gt) goto loc_82A20B94;
	// lwz r7,-12(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// lwz r6,-16(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
loc_82A20B38:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a20b58
	if (!ctx.cr6.eq) goto loc_82A20B58;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// beq cr6,0x82a20b5c
	if (ctx.cr6.eq) goto loc_82A20B5C;
loc_82A20B58:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82A20B5C:
	// lwz r31,16(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82a20b78
	if (!ctx.cr6.eq) goto loc_82A20B78;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// beq cr6,0x82a20b7c
	if (ctx.cr6.eq) goto loc_82A20B7C;
loc_82A20B78:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82A20B7C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82a20b38
	if (ctx.cr6.lt) goto loc_82A20B38;
loc_82A20B94:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A20B9C"))) PPC_WEAK_FUNC(sub_82A20B9C);
PPC_FUNC_IMPL(__imp__sub_82A20B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A20BA0"))) PPC_WEAK_FUNC(sub_82A20BA0);
PPC_FUNC_IMPL(__imp__sub_82A20BA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82A20BA8;
	__savegprlr_27(ctx, base);
	// stwu r1,-2896(r1)
	ea = -2896 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a20bcc
	if (!ctx.cr6.eq) goto loc_82A20BCC;
loc_82A20BC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2896
	ctx.r1.s64 = ctx.r1.s64 + 2896;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_82A20BCC:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82a20bc0
	if (!ctx.cr6.eq) goto loc_82A20BC0;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82a20bc0
	if (!ctx.cr6.eq) goto loc_82A20BC0;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// add r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// beq cr6,0x82a20d70
	if (ctx.cr6.eq) goto loc_82A20D70;
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a20c28
	if (ctx.cr6.eq) goto loc_82A20C28;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r31,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r31.u32);
loc_82A20C28:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82a26048
	ctx.lr = 0x82A20C30;
	sub_82A26048(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// bl 0x82a25df8
	ctx.lr = 0x82A20C3C;
	sub_82A25DF8(ctx, base);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r5,2404(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2404);
	// lwz r6,1956(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1956);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r7,1508(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1508);
	// lwz r8,1060(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1060);
	// lwz r9,612(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// beq cr6,0x82a20cc0
	if (ctx.cr6.eq) goto loc_82A20CC0;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82a20c70
	if (!ctx.cr6.eq) goto loc_82A20C70;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
loc_82A20C70:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82a20c80
	if (!ctx.cr6.eq) goto loc_82A20C80;
	// addi r4,r1,608
	ctx.r4.s64 = ctx.r1.s64 + 608;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
loc_82A20C80:
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82a20c90
	if (!ctx.cr6.eq) goto loc_82A20C90;
	// addi r4,r1,1056
	ctx.r4.s64 = ctx.r1.s64 + 1056;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
loc_82A20C90:
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82a20ca0
	if (!ctx.cr6.eq) goto loc_82A20CA0;
	// addi r4,r1,1504
	ctx.r4.s64 = ctx.r1.s64 + 1504;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
loc_82A20CA0:
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82a20cb0
	if (!ctx.cr6.eq) goto loc_82A20CB0;
	// addi r4,r1,1952
	ctx.r4.s64 = ctx.r1.s64 + 1952;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
loc_82A20CB0:
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82a20cc0
	if (!ctx.cr6.eq) goto loc_82A20CC0;
	// addi r11,r1,2400
	ctx.r11.s64 = ctx.r1.s64 + 2400;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82A20CC0:
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a20d2c
	if (ctx.cr6.eq) goto loc_82A20D2C;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82a20cdc
	if (!ctx.cr6.eq) goto loc_82A20CDC;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_82A20CDC:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82a20cec
	if (!ctx.cr6.eq) goto loc_82A20CEC;
	// addi r10,r1,608
	ctx.r10.s64 = ctx.r1.s64 + 608;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_82A20CEC:
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82a20cfc
	if (!ctx.cr6.eq) goto loc_82A20CFC;
	// addi r10,r1,1056
	ctx.r10.s64 = ctx.r1.s64 + 1056;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_82A20CFC:
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82a20d0c
	if (!ctx.cr6.eq) goto loc_82A20D0C;
	// addi r10,r1,1504
	ctx.r10.s64 = ctx.r1.s64 + 1504;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_82A20D0C:
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82a20d1c
	if (!ctx.cr6.eq) goto loc_82A20D1C;
	// addi r10,r1,1952
	ctx.r10.s64 = ctx.r1.s64 + 1952;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_82A20D1C:
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82a20d2c
	if (!ctx.cr6.eq) goto loc_82A20D2C;
	// addi r11,r1,2400
	ctx.r11.s64 = ctx.r1.s64 + 2400;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_82A20D2C:
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a20d68
	if (ctx.cr6.eq) goto loc_82A20D68;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// addi r27,r1,80
	ctx.r27.s64 = ctx.r1.s64 + 80;
loc_82A20D40:
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a20d58
	if (ctx.cr6.eq) goto loc_82A20D58;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a25d48
	ctx.lr = 0x82A20D58;
	sub_82A25D48(ctx, base);
loc_82A20D58:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 2, ctx.xer);
	// blt cr6,0x82a20d40
	if (ctx.cr6.lt) goto loc_82A20D40;
loc_82A20D68:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// rlwinm r28,r11,29,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
loc_82A20D70:
	// addi r11,r1,100
	ctx.r11.s64 = ctx.r1.s64 + 100;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// ble cr6,0x82a20e00
	if (!ctx.cr6.gt) goto loc_82A20E00;
loc_82A20D8C:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82a20db4
	if (ctx.cr6.eq) goto loc_82A20DB4;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82a20db4
	if (!ctx.cr6.eq) goto loc_82A20DB4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82A20DB4:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x82a25d50
	ctx.lr = 0x82A20DBC;
	sub_82A25D50(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82A20DD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r5,r3,r8
	ctx.r5.u64 = ctx.r3.u64 + ctx.r8.u64;
	// add r4,r7,r3
	ctx.r4.u64 = ctx.r7.u64 + ctx.r3.u64;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// cmplw cr6,r29,r6
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r6.u32, ctx.xer);
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// blt cr6,0x82a20d8c
	if (ctx.cr6.lt) goto loc_82A20D8C;
loc_82A20E00:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,2896
	ctx.r1.s64 = ctx.r1.s64 + 2896;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A20E0C"))) PPC_WEAK_FUNC(sub_82A20E0C);
PPC_FUNC_IMPL(__imp__sub_82A20E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A20E10"))) PPC_WEAK_FUNC(sub_82A20E10);
PPC_FUNC_IMPL(__imp__sub_82A20E10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,31408(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31408);
	// b 0x82a20ac0
	sub_82A20AC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A20E20"))) PPC_WEAK_FUNC(sub_82A20E20);
PPC_FUNC_IMPL(__imp__sub_82A20E20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,31408(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31408);
	// b 0x82a20ba0
	sub_82A20BA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A20E3C"))) PPC_WEAK_FUNC(sub_82A20E3C);
PPC_FUNC_IMPL(__imp__sub_82A20E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A20E40"))) PPC_WEAK_FUNC(sub_82A20E40);
PPC_FUNC_IMPL(__imp__sub_82A20E40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,31408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31408);
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A20E54"))) PPC_WEAK_FUNC(sub_82A20E54);
PPC_FUNC_IMPL(__imp__sub_82A20E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A20E58"))) PPC_WEAK_FUNC(sub_82A20E58);
PPC_FUNC_IMPL(__imp__sub_82A20E58) {
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
	// lis r30,-31963
	ctx.r30.s64 = -2094727168;
	// lwz r31,31408(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 31408);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a20a10
	ctx.lr = 0x82A20E7C;
	sub_82A20A10(ctx, base);
	// lis r4,8348
	ctx.r4.s64 = 547094528;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691460
	ctx.lr = 0x82A20E88;
	sub_82691460(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,31408(r30)
	PPC_STORE_U32(ctx.r30.u32 + 31408, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82A20EA8"))) PPC_WEAK_FUNC(sub_82A20EA8);
PPC_FUNC_IMPL(__imp__sub_82A20EA8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,96
	ctx.r3.s64 = ctx.r3.s64 + 96;
	// b 0x828b2440
	sub_828B2440(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A20EB0"))) PPC_WEAK_FUNC(sub_82A20EB0);
PPC_FUNC_IMPL(__imp__sub_82A20EB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f12,76(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f1,f2
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f2.f64));
	// fadds f0,f12,f2
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f2.f64));
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lfs f10,2656(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2656);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// lfs f13,-23580(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23580);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f12,f10,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 + ctx.f11.f64));
	// stfs f12,2656(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 2656, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82a20ee8
	if (!ctx.cr6.gt) goto loc_82A20EE8;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// fdivs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stfs f13,2656(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 2656, temp.u32);
loc_82A20EE8:
	// lfs f13,2656(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2656);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f0,-23760(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23760);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,2660(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 2660, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A20F04"))) PPC_WEAK_FUNC(sub_82A20F04);
PPC_FUNC_IMPL(__imp__sub_82A20F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A20F08"))) PPC_WEAK_FUNC(sub_82A20F08);
PPC_FUNC_IMPL(__imp__sub_82A20F08) {
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
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82a20f30
	if (ctx.cr0.eq) goto loc_82A20F30;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x82a77448
	ctx.lr = 0x82A20F30;
	sub_82A77448(ctx, base);
loc_82A20F30:
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// lfd f0,24(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// ld r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mulli r11,r11,1000
	ctx.r11.s64 = ctx.r11.s64 * 1000;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fdivs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
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

__attribute__((alias("__imp__sub_82A20F74"))) PPC_WEAK_FUNC(sub_82A20F74);
PPC_FUNC_IMPL(__imp__sub_82A20F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A20F78"))) PPC_WEAK_FUNC(sub_82A20F78);
PPC_FUNC_IMPL(__imp__sub_82A20F78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82A20F80;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82fa8d1c
	ctx.lr = 0x82A20F88;
	__savefpr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a268e8
	ctx.lr = 0x82A20F9C;
	sub_82A268E8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r29,12
	ctx.r29.s64 = 12;
	// addi r27,r11,-23872
	ctx.r27.s64 = ctx.r11.s64 + -23872;
	// lfs f31,5184(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f31.f64 = double(temp.f32);
	// addi r30,r27,-4
	ctx.r30.s64 = ctx.r27.s64 + -4;
	// fmr f28,f31
	ctx.f28.f64 = ctx.f31.f64;
	// fmr f27,f31
	ctx.f27.f64 = ctx.f31.f64;
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
loc_82A20FC4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f25,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f25.f64 = double(temp.f32);
	// bl 0x82a26630
	ctx.lr = 0x82A20FD0;
	sub_82A26630(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfsu f26,4(r30)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r30.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	ctx.f26.f64 = double(temp.f32);
	// fmadds f28,f1,f25,f28
	ctx.f28.f64 = double(float(ctx.f1.f64 * ctx.f25.f64 + ctx.f28.f64));
	// bl 0x82a26710
	ctx.lr = 0x82A20FE0;
	sub_82A26710(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// fmadds f27,f1,f26,f27
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = double(float(ctx.f1.f64 * ctx.f26.f64 + ctx.f27.f64));
	// addi r31,r31,128
	ctx.r31.s64 = ctx.r31.s64 + 128;
	// fadds f31,f26,f31
	ctx.f31.f64 = double(float(ctx.f26.f64 + ctx.f31.f64));
	// bne 0x82a20fc4
	if (!ctx.cr0.eq) goto loc_82A20FC4;
	// addi r31,r28,1552
	ctx.r31.s64 = ctx.r28.s64 + 1552;
	// li r29,8
	ctx.r29.s64 = 8;
	// addi r30,r27,44
	ctx.r30.s64 = ctx.r27.s64 + 44;
loc_82A21000:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f25,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f25.f64 = double(temp.f32);
	// bl 0x82a26630
	ctx.lr = 0x82A2100C;
	sub_82A26630(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfsu f26,4(r30)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r30.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	ctx.f26.f64 = double(temp.f32);
	// fmadds f30,f1,f25,f30
	ctx.f30.f64 = double(float(ctx.f1.f64 * ctx.f25.f64 + ctx.f30.f64));
	// bl 0x82a26710
	ctx.lr = 0x82A2101C;
	sub_82A26710(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// fmadds f29,f1,f26,f29
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f1.f64 * ctx.f26.f64 + ctx.f29.f64));
	// addi r31,r31,128
	ctx.r31.s64 = ctx.r31.s64 + 128;
	// fadds f31,f26,f31
	ctx.f31.f64 = double(float(ctx.f26.f64 + ctx.f31.f64));
	// bne 0x82a21000
	if (!ctx.cr0.eq) goto loc_82A21000;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// lfs f13,24436(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f13.f64 = double(temp.f32);
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// lfs f0,-23792(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23792);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f10,f13,f31
	ctx.f10.f64 = double(float(ctx.f13.f64 / ctx.f31.f64));
	// fmadds f9,f30,f0,f28
	ctx.f9.f64 = double(float(ctx.f30.f64 * ctx.f0.f64 + ctx.f28.f64));
	// lfs f13,-23788(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -23788);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f8,f29,f0,f27
	ctx.f8.f64 = double(float(ctx.f29.f64 * ctx.f0.f64 + ctx.f27.f64));
	// lfs f0,-23784(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -23784);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,-23752(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -23752);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lfs f11,-23756(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -23756);
	ctx.f11.f64 = double(temp.f32);
	// addi r31,r11,24040
	ctx.r31.s64 = ctx.r11.s64 + 24040;
	// fmuls f1,f9,f10
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmuls f2,f8,f10
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fmuls f13,f1,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// fmadds f0,f2,f0,f13
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fmuls f3,f0,f11
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f3,0(r28)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a210d0
	if (ctx.cr6.eq) goto loc_82A210D0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A210AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// fmr f4,f29
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f29.f64;
	// fmr f3,f27
	ctx.f3.f64 = ctx.f27.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A210D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A210D0:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f13,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-23780(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23780);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82a210e8
	if (!ctx.cr6.gt) goto loc_82A210E8;
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
loc_82A210E8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82fa8d68
	ctx.lr = 0x82A210F4;
	__restfpr_25(ctx, base);
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A210F8"))) PPC_WEAK_FUNC(sub_82A210F8);
PPC_FUNC_IMPL(__imp__sub_82A210F8) {
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
	// li r11,2
	ctx.r11.s64 = 2;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// stb r30,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r30.u8);
	// std r30,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r30.u64);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// std r30,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r30.u64);
	// bl 0x82a781f0
	ctx.lr = 0x82A21138;
	sub_82A781F0(ctx, base);
	// stb r30,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r30.u8);
	// std r30,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r30.u64);
	// addi r11,r31,40
	ctx.r11.s64 = ctx.r31.s64 + 40;
	// std r30,56(r31)
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.r30.u64);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x82a781f0
	ctx.lr = 0x82A21150;
	sub_82A781F0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// lfs f31,5184(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,76(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stfs f31,80(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// bl 0x82a268b0
	ctx.lr = 0x82A21170;
	sub_82A268B0(ctx, base);
	// stfs f31,2656(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2656, temp.u32);
	// stfs f31,2660(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2660, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82A21198"))) PPC_WEAK_FUNC(sub_82A21198);
PPC_FUNC_IMPL(__imp__sub_82A21198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r4,-23744(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23744);
	// b 0x82691410
	sub_82691410(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A211A4"))) PPC_WEAK_FUNC(sub_82A211A4);
PPC_FUNC_IMPL(__imp__sub_82A211A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A211A8"))) PPC_WEAK_FUNC(sub_82A211A8);
PPC_FUNC_IMPL(__imp__sub_82A211A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r4,-23744(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23744);
	// b 0x82691460
	sub_82691460(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A211B4"))) PPC_WEAK_FUNC(sub_82A211B4);
PPC_FUNC_IMPL(__imp__sub_82A211B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A211B8"))) PPC_WEAK_FUNC(sub_82A211B8);
PPC_FUNC_IMPL(__imp__sub_82A211B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A211C0;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a21238
	if (!ctx.cr6.eq) goto loc_82A21238;
	// addi r30,r3,40
	ctx.r30.s64 = ctx.r3.s64 + 40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a20f08
	ctx.lr = 0x82A211E8;
	sub_82A20F08(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f0,-23748(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23748);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x82a21204
	if (!ctx.cr6.lt) goto loc_82A21204;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f31,-23764(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23764);
	ctx.f31.f64 = double(temp.f32);
loc_82A21204:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82a20f78
	ctx.lr = 0x82A21214;
	sub_82A20F78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x82a20eb0
	ctx.lr = 0x82A21224;
	sub_82A20EB0(ctx, base);
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82a21238
	if (ctx.cr0.eq) goto loc_82A21238;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x82a77448
	ctx.lr = 0x82A21238;
	sub_82A77448(ctx, base);
loc_82A21238:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A21244"))) PPC_WEAK_FUNC(sub_82A21244);
PPC_FUNC_IMPL(__imp__sub_82A21244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A21248"))) PPC_WEAK_FUNC(sub_82A21248);
PPC_FUNC_IMPL(__imp__sub_82A21248) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,31416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31416);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a212a0
	if (!ctx.cr6.eq) goto loc_82A212A0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-26196
	ctx.r3.s64 = ctx.r11.s64 + -26196;
	// bl 0x82a7f320
	ctx.lr = 0x82A2127C;
	sub_82A7F320(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a21294
	if (ctx.cr0.eq) goto loc_82A21294;
	// li r4,1228
	ctx.r4.s64 = 1228;
	// bl 0x82a7f398
	ctx.lr = 0x82A2128C;
	sub_82A7F398(ctx, base);
	// stw r3,31416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31416, ctx.r3.u32);
	// b 0x82a21298
	goto loc_82A21298;
loc_82A21294:
	// lwz r3,31416(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31416);
loc_82A21298:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a212b4
	if (ctx.cr6.eq) goto loc_82A212B4;
loc_82A212A0:
	// lwz r11,31416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31416);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A212B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82a212bc
	goto loc_82A212BC;
loc_82A212B4:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
loc_82A212BC:
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

__attribute__((alias("__imp__sub_82A212D4"))) PPC_WEAK_FUNC(sub_82A212D4);
PPC_FUNC_IMPL(__imp__sub_82A212D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A212D8"))) PPC_WEAK_FUNC(sub_82A212D8);
PPC_FUNC_IMPL(__imp__sub_82A212D8) {
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
	// lwz r11,31420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31420);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a21328
	if (!ctx.cr6.eq) goto loc_82A21328;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-26196
	ctx.r3.s64 = ctx.r11.s64 + -26196;
	// bl 0x82a7f320
	ctx.lr = 0x82A21304;
	sub_82A7F320(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a2131c
	if (ctx.cr0.eq) goto loc_82A2131C;
	// li r4,1246
	ctx.r4.s64 = 1246;
	// bl 0x82a7f398
	ctx.lr = 0x82A21314;
	sub_82A7F398(ctx, base);
	// stw r3,31420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31420, ctx.r3.u32);
	// b 0x82a21320
	goto loc_82A21320;
loc_82A2131C:
	// lwz r3,31420(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31420);
loc_82A21320:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a21338
	if (ctx.cr6.eq) goto loc_82A21338;
loc_82A21328:
	// lwz r11,31420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31420);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A21334;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82a21340
	goto loc_82A21340;
loc_82A21338:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
loc_82A21340:
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

__attribute__((alias("__imp__sub_82A21354"))) PPC_WEAK_FUNC(sub_82A21354);
PPC_FUNC_IMPL(__imp__sub_82A21354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A21358"))) PPC_WEAK_FUNC(sub_82A21358);
PPC_FUNC_IMPL(__imp__sub_82A21358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,488(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 488);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,484(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 484);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82a21398
	if (!ctx.cr6.eq) goto loc_82A21398;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,484(r3)
	PPC_STORE_U32(ctx.r3.u32 + 484, ctx.r10.u32);
	// stw r9,512(r3)
	PPC_STORE_U32(ctx.r3.u32 + 512, ctx.r9.u32);
	// lfs f0,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,480(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 480, temp.u32);
	// stfs f0,496(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 496, temp.u32);
	// stfs f0,500(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 500, temp.u32);
	// stfs f0,508(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 508, temp.u32);
loc_82A21398:
	// stw r4,488(r3)
	PPC_STORE_U32(ctx.r3.u32 + 488, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A213A0"))) PPC_WEAK_FUNC(sub_82A213A0);
PPC_FUNC_IMPL(__imp__sub_82A213A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,524(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 524);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fadds f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stfs f12,524(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 524, temp.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f13,-8020(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8020);
	ctx.f13.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,5184(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x82a213dc
	if (!ctx.cr6.gt) goto loc_82A213DC;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stw r10,520(r11)
	PPC_STORE_U32(ctx.r11.u32 + 520, ctx.r10.u32);
	// b 0x82a213f8
	goto loc_82A213F8;
loc_82A213DC:
	// stfs f0,480(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 480, temp.u32);
	// stw r9,512(r11)
	PPC_STORE_U32(ctx.r11.u32 + 512, ctx.r9.u32);
	// stfs f0,496(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 496, temp.u32);
	// stw r10,484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 484, ctx.r10.u32);
	// stfs f0,500(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 500, temp.u32);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// stfs f0,508(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 508, temp.u32);
loc_82A213F8:
	// lwz r8,512(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 512);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lfs f12,496(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 496);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f12,f1
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f1.f64));
	// lfs f11,500(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 500);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,496(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 496, temp.u32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// stfs f0,480(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 480, temp.u32);
	// stw r10,484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 484, ctx.r10.u32);
	// stfs f0,496(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 496, temp.u32);
	// stw r9,512(r11)
	PPC_STORE_U32(ctx.r11.u32 + 512, ctx.r9.u32);
	// stfs f0,500(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 500, temp.u32);
	// stfs f0,508(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 508, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2143C"))) PPC_WEAK_FUNC(sub_82A2143C);
PPC_FUNC_IMPL(__imp__sub_82A2143C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A21440"))) PPC_WEAK_FUNC(sub_82A21440);
PPC_FUNC_IMPL(__imp__sub_82A21440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a21610
	if (ctx.cr6.eq) goto loc_82A21610;
	// li r10,32
	ctx.r10.s64 = 32;
	// vspltisw128 v63,1
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x1)));
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// lvx128 v60,r0,r3
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// vspltisw128 v62,0
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_set1_epi32(int(0x0)));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r1,-32
	ctx.r8.s64 = ctx.r1.s64 + -32;
	// vcsxwfp128 v0,v63,1
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v63.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3F000000)))));
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// lvx128 v63,r3,r10
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// li r10,1
	ctx.r10.s64 = 1;
	// lvx128 v61,r0,r11
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vsubfp128 v58,v63,v60
	_mm_store_ps(ctx.v58.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v60.f32)));
	// vsubfp128 v59,v61,v63
	_mm_store_ps(ctx.v59.f32, _mm_sub_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v63.f32)));
	// lfs f9,5184(r9)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5184);
	ctx.f9.f64 = double(temp.f32);
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// fmr f11,f9
	ctx.f11.f64 = ctx.f9.f64;
	// fmr f12,f9
	ctx.f12.f64 = ctx.f9.f64;
	// lfs f8,-23580(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -23580);
	ctx.f8.f64 = double(temp.f32);
	// vmsum3fp128 v58,v58,v58
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v58.f32, _mm_dp_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v58.f32), 0xEF));
	// vmsum3fp128 v59,v59,v59
	_mm_store_ps(ctx.v59.f32, _mm_dp_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v59.f32), 0xEF));
	// vrsqrtefp128 v12,v58
	_mm_store_ps(ctx.v12.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v58.f32))));
	// vor128 v6,v58,v58
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)ctx.v58.u8));
	// vrsqrtefp128 v13,v59
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v59.f32))));
	// vor128 v7,v59,v59
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)ctx.v59.u8));
	// vmulfp128 v11,v59,v0
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v9,v58,v0
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp128 v3,v59,v62
	_mm_store_ps(ctx.v3.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v62.f32)));
	// vcmpeqfp128 v5,v58,v62
	_mm_store_ps(ctx.v5.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v62.f32)));
	// vmulfp128 v8,v12,v12
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v10,v13,v13
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v4,v11,v10,v0
	_mm_store_ps(ctx.v4.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vnmsubfp v11,v9,v8,v0
	_mm_store_ps(ctx.v11.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v13,v13,v4,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v4.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v12,v12,v11,v12
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v13,v59,v13
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v12,v58,v12
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v12.f32)));
	// vsel v11,v13,v7,v3
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v7.u8))));
	// vsel v13,v12,v6,v5
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v12.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v6.u8))));
	// stvx128 v11,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,-32(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
loc_82A214F8:
	// lwz r9,-16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82a21610
	if (ctx.cr6.eq) goto loc_82A21610;
	// fcmpu cr6,f0,f8
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// blt cr6,0x82a21580
	if (ctx.cr6.lt) goto loc_82A21580;
	// fcmpu cr6,f13,f8
	ctx.cr6.compare(ctx.f13.f64, ctx.f8.f64);
	// blt cr6,0x82a21580
	if (ctx.cr6.lt) goto loc_82A21580;
	// vsubfp128 v60,v60,v63
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v60.f32, _mm_sub_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v63.f32)));
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// vsubfp128 v59,v63,v61
	_mm_store_ps(ctx.v59.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v61.f32)));
	// vmsum3fp128 v58,v60,v60
	_mm_store_ps(ctx.v58.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v60.f32), 0xEF));
	// vmsum3fp128 v57,v59,v59
	_mm_store_ps(ctx.v57.f32, _mm_dp_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v59.f32), 0xEF));
	// vrsqrtefp128 v13,v58
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v58.f32))));
	// vor128 v10,v58,v58
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)ctx.v58.u8));
	// vrsqrtefp128 v12,v57
	_mm_store_ps(ctx.v12.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v57.f32))));
	// vor128 v11,v57,v57
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v57.u8));
	// vmulfp128 v6,v58,v0
	_mm_store_ps(ctx.v6.f32, _mm_mul_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v8,v57,v0
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp128 v4,v58,v62
	_mm_store_ps(ctx.v4.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v62.f32)));
	// vcmpeqfp128 v5,v57,v62
	_mm_store_ps(ctx.v5.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v62.f32)));
	// vmulfp128 v7,v13,v13
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v9,v12,v12
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32)));
	// vnmsubfp v3,v6,v7,v0
	_mm_store_ps(ctx.v3.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vnmsubfp v7,v8,v9,v0
	_mm_store_ps(ctx.v7.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v9,v13,v3,v13
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v3.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v13,v12,v7,v12
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v12,v60,v9
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v9.f32)));
	// vmulfp128 v13,v59,v13
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v13.f32)));
	// vsel v9,v12,v10,v4
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v12.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v10.u8))));
	// vsel v12,v13,v11,v5
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v11.u8))));
	// vmsum3fp128 v60,v12,v9
	_mm_store_ps(ctx.v60.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v9.f32), 0xEF));
	// stvx128 v60,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f10,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f10.f64 = double(temp.f32);
	// b 0x82a21584
	goto loc_82A21584;
loc_82A21580:
	// fmr f10,f9
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f9.f64;
loc_82A21584:
	// vor128 v60,v63,v63
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// addi r9,r1,-32
	ctx.r9.s64 = ctx.r1.s64 + -32;
	// vor128 v63,v61,v61
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_load_si128((__m128i*)ctx.v61.u8));
	// lvx128 v61,r0,r11
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// fadds f11,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// fadds f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// cmpwi cr6,r10,11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 11, ctx.xer);
	// vsubfp128 v59,v61,v63
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v59.f32, _mm_sub_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v63.f32)));
	// vmsum3fp128 v59,v59,v59
	_mm_store_ps(ctx.v59.f32, _mm_dp_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v59.f32), 0xEF));
	// vrsqrtefp128 v13,v59
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v59.f32))));
	// vor128 v12,v59,v59
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v59.u8));
	// vmulfp128 v10,v59,v0
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp128 v9,v59,v62
	_mm_store_ps(ctx.v9.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v62.f32)));
	// vmulfp128 v11,v13,v13
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v8,v10,v11,v0
	_mm_store_ps(ctx.v8.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v13,v13,v8,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v13,v59,v13
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v13.f32)));
	// vsel v11,v13,v12,v9
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v12.u8))));
	// stvx128 v11,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,-32(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f0.f64 = double(temp.f32);
	// blt cr6,0x82a214f8
	if (ctx.cr6.lt) goto loc_82A214F8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,11976(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11976);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82a21610
	if (ctx.cr6.lt) goto loc_82A21610;
	// fmuls f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,-23740(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23740);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
loc_82A21610:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A21618"))) PPC_WEAK_FUNC(sub_82A21618);
PPC_FUNC_IMPL(__imp__sub_82A21618) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A21620;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,80
	ctx.r29.s64 = ctx.r3.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,352
	ctx.r5.s64 = 352;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r3,112
	ctx.r3.s64 = ctx.r3.s64 + 112;
	// bl 0x82fa20f0
	ctx.lr = 0x82A21644;
	sub_82FA20F0(ctx, base);
	// addi r11,r28,32
	ctx.r11.s64 = ctx.r28.s64 + 32;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82a21658
	if (!ctx.cr6.eq) goto loc_82A21658;
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// b 0x82a2165c
	goto loc_82A2165C;
loc_82A21658:
	// addi r11,r11,176
	ctx.r11.s64 = ctx.r11.s64 + 176;
loc_82A2165C:
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stvx128 v63,r0,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bne cr6,0x82a21674
	if (!ctx.cr6.eq) goto loc_82A21674;
	// lwz r11,380(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 380);
	// b 0x82a21678
	goto loc_82A21678;
loc_82A21674:
	// lwz r11,396(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 396);
loc_82A21678:
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// bl 0x82a21440
	ctx.lr = 0x82A21698;
	sub_82A21440(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A216A0"))) PPC_WEAK_FUNC(sub_82A216A0);
PPC_FUNC_IMPL(__imp__sub_82A216A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,464
	ctx.r11.s64 = 464;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lvx128 v63,r3,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vsubfp128 v63,v1,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v63.f32, _mm_sub_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v63.f32)));
	// lfs f12,5184(r9)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5184);
	ctx.f12.f64 = double(temp.f32);
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fabs f11,f13
	ctx.f11.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bge cr6,0x82a216e8
	if (!ctx.cr6.lt) goto loc_82A216E8;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// b 0x82a216f8
	goto loc_82A216F8;
loc_82A216E8:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lfs f0,-23580(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23580);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fdivs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
loc_82A216F8:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82a21704
	if (!ctx.cr6.eq) goto loc_82A21704;
	// lfs f13,480(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 480);
	ctx.f13.f64 = double(temp.f32);
loc_82A21704:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x82a21728
	if (!ctx.cr6.gt) goto loc_82A21728;
	// lwz r11,492(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 492);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82a21744
	if (ctx.cr6.eq) goto loc_82A21744;
	// li r10,3
	ctx.r10.s64 = 3;
loc_82A2171C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,492(r3)
	PPC_STORE_U32(ctx.r3.u32 + 492, ctx.r10.u32);
	// b 0x82a2174c
	goto loc_82A2174C;
loc_82A21728:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x82a21750
	if (!ctx.cr6.lt) goto loc_82A21750;
	// lwz r11,492(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 492);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82a21744
	if (ctx.cr6.eq) goto loc_82A21744;
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x82a2171c
	goto loc_82A2171C;
loc_82A21744:
	// lwz r11,516(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 516);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82A2174C:
	// stw r11,516(r3)
	PPC_STORE_U32(ctx.r3.u32 + 516, ctx.r11.u32);
loc_82A21750:
	// lwz r11,516(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 516);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82a217ac
	if (!ctx.cr6.gt) goto loc_82A217AC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82a2176c
	if (!ctx.cr6.eq) goto loc_82A2176C;
	// lwz r4,492(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 492);
	// bl 0x82a21358
	ctx.lr = 0x82A2176C;
	sub_82A21358(ctx, base);
loc_82A2176C:
	// lwz r11,516(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 516);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// ble cr6,0x82a2177c
	if (!ctx.cr6.gt) goto loc_82A2177C;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82A2177C:
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lfs f12,480(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 480);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f11,f0
	ctx.f11.f64 = double(float(ctx.f0.f64));
	// lfs f0,24436(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24436);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// fmadds f0,f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// stfs f0,480(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 480, temp.u32);
loc_82A217AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A217C0"))) PPC_WEAK_FUNC(sub_82A217C0);
PPC_FUNC_IMPL(__imp__sub_82A217C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,484(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 484);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x82a21880
	if (ctx.cr6.lt) goto loc_82A21880;
	// beq cr6,0x82a21830
	if (ctx.cr6.eq) goto loc_82A21830;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r10,488(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 488);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82a2180c
	if (!ctx.cr6.eq) goto loc_82A2180C;
	// lwz r9,516(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 516);
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x82a2180c
	if (ctx.cr6.lt) goto loc_82A2180C;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lfs f13,480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-23728(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -23728);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82a218c8
	if (ctx.cr6.lt) goto loc_82A218C8;
loc_82A2180C:
	// lwz r9,516(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 516);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lfs f13,480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-23732(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -23732);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// b 0x82a218c8
	goto loc_82A218C8;
loc_82A21830:
	// lwz r10,488(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 488);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82a2185c
	if (!ctx.cr6.eq) goto loc_82A2185C;
	// lwz r9,516(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 516);
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x82a2185c
	if (ctx.cr6.lt) goto loc_82A2185C;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lfs f13,480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-23736(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -23736);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82a218c8
	if (ctx.cr6.gt) goto loc_82A218C8;
loc_82A2185C:
	// lwz r9,516(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 516);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f13,480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,17892(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 17892);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// b 0x82a218c8
	goto loc_82A218C8;
loc_82A21880:
	// lwz r10,516(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 516);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x82a218a4
	if (ctx.cr6.lt) goto loc_82A218A4;
	// lfs f0,480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f0,-23736(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -23736);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82a218c4
	if (ctx.cr6.gt) goto loc_82A218C4;
loc_82A218A4:
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// lfs f0,480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f0,17892(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17892);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_82A218C4:
	// lwz r10,488(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 488);
loc_82A218C8:
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 484, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A218D4"))) PPC_WEAK_FUNC(sub_82A218D4);
PPC_FUNC_IMPL(__imp__sub_82A218D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A218D8"))) PPC_WEAK_FUNC(sub_82A218D8);
PPC_FUNC_IMPL(__imp__sub_82A218D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f11,496(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 496);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,512(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 512);
	// lfs f0,500(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 500);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// stfs f0,504(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 504, temp.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x82a2195c
	if (!ctx.cr6.gt) goto loc_82A2195C;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// lfs f12,24436(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24436);
	ctx.f12.f64 = double(temp.f32);
	// ble cr6,0x82a21930
	if (!ctx.cr6.gt) goto loc_82A21930;
	// lfs f13,508(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 508);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// fdivs f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// lfs f13,-1572(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -1572);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fabs f10,f10
	ctx.f10.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// fcmpu cr6,f10,f13
	ctx.cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// ble cr6,0x82a21930
	if (!ctx.cr6.gt) goto loc_82A21930;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,512(r3)
	PPC_STORE_U32(ctx.r3.u32 + 512, ctx.r11.u32);
	// b 0x82a21958
	goto loc_82A21958;
loc_82A21930:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lfs f13,508(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 508);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f10,-16(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fdivs f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f10.f64));
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
loc_82A21958:
	// stfs f0,508(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 508, temp.u32);
loc_82A2195C:
	// stfs f11,500(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 500, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A21964"))) PPC_WEAK_FUNC(sub_82A21964);
PPC_FUNC_IMPL(__imp__sub_82A21964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A21968"))) PPC_WEAK_FUNC(sub_82A21968);
PPC_FUNC_IMPL(__imp__sub_82A21968) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// li r12,-32
	ctx.r12.s64 = -32;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// vmsum4fp128 v61,v1,v1
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v61.f32, _mm_dp_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v1.f32), 0xFF));
	// vspltisw128 v63,1
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x1)));
	// vspltisw128 v62,0
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-29680
	ctx.r11.s64 = ctx.r11.s64 + -29680;
	// vcsxwfp128 v9,v63,1
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v63.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3F000000)))));
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v60,v63,135
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0x78));
	// vpermwi128 v13,v63,99
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0x9C));
	// vrsqrtefp128 v0,v61
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v61.f32))));
	// vor128 v12,v61,v61
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v61.u8));
	// vmulfp128 v11,v61,v9
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v9.f32)));
	// vcmpeqfp128 v8,v61,v62
	_mm_store_ps(ctx.v8.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v62.f32)));
	// vmulfp128 v10,v0,v0
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v9,v11,v10,v9
	_mm_store_ps(ctx.v9.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v9.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v9,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v0,v1,v0
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v0.f32)));
	// vsel v11,v0,v12,v8
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v12.u8))));
	// vpermwi128 v61,v11,99
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x9C));
	// vpermwi128 v0,v11,135
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x78));
	// vmulfp128 v127,v61,v60
	_mm_store_ps(ctx.v127.f32, _mm_mul_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v60.f32)));
	// vnmsubfp128 v127,v0,v13,v127
	_mm_store_ps(ctx.v127.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v127.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vcmpeqfp128. v61,v127,v62
	_mm_store_ps(ctx.v61.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v62.f32)));
	ctx.cr6.setFromMask(_mm_load_ps(ctx.v61.f32), 0xF);
	// bge cr6,0x82a21a18
	if (!ctx.cr6.lt) goto loc_82A21A18;
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
	// li r11,16
	ctx.r11.s64 = 16;
	// li r10,32
	ctx.r10.s64 = 32;
	// li r9,48
	ctx.r9.s64 = 48;
	// vpermwi128 v62,v63,234
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0x15));
	// vpermwi128 v61,v63,186
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0x45));
	// vpermwi128 v60,v63,174
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0x51));
	// vpermwi128 v63,v63,171
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0x54));
	// stvx128 v62,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v61,r3,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v60,r3,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r3,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82a21a3c
	goto loc_82A21A3C;
loc_82A21A18:
	// vmsum4fp128 v63,v63,v11
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v63.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v11.f32), 0xFF));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stvx128 v63,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82fa3ec8
	ctx.lr = 0x82A21A2C;
	sub_82FA3EC8(ctx, base);
	// vor128 v1,v127,v127
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// bl 0x8247a400
	ctx.lr = 0x82A21A3C;
	sub_8247A400(ctx, base);
loc_82A21A3C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// li r0,-32
	ctx.r0.s64 = -32;
	// lvx128 v127,r1,r0
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF), VectorMaskL));
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A21A5C"))) PPC_WEAK_FUNC(sub_82A21A5C);
PPC_FUNC_IMPL(__imp__sub_82A21A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A21A60"))) PPC_WEAK_FUNC(sub_82A21A60);
PPC_FUNC_IMPL(__imp__sub_82A21A60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// li r12,-48
	ctx.r12.s64 = -48;
	// stvx128 v126,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r12,-32
	ctx.r12.s64 = -32;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subfic r11,r5,0
	ctx.xer.ca = ctx.r5.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r5.s64;
	// vspltisw128 v127,0
	_mm_store_si128((__m128i*)ctx.v127.u32, _mm_set1_epi32(int(0x0)));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r9,r5,0
	ctx.xer.ca = ctx.r5.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r5.s64;
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// vor128 v126,v127,v127
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// subfic r8,r5,0
	ctx.xer.ca = ctx.r5.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r5.s64;
	// stvx128 v127,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r11,88
	ctx.r7.s64 = ctx.r11.s64 + 88;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r10,r9,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// rlwinm r9,r8,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stvx128 v126,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwzx r7,r7,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// addi r8,r3,32
	ctx.r8.s64 = ctx.r3.s64 + 32;
	// addi r10,r10,5
	ctx.r10.s64 = ctx.r10.s64 + 5;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82a21af4
	if (ctx.cr6.eq) goto loc_82A21AF4;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lvx128 v126,r11,r8
	simd::store_shuffled(ctx.v126, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// stvx128 v126,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82A21AF4:
	// addi r11,r10,88
	ctx.r11.s64 = ctx.r10.s64 + 88;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a21b10
	if (ctx.cr6.eq) goto loc_82A21B10;
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lvx128 v127,r11,r8
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
loc_82A21B10:
	// addi r11,r9,88
	ctx.r11.s64 = ctx.r9.s64 + 88;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a21b34
	if (ctx.cr6.eq) goto loc_82A21B34;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lvx128 v63,r11,r8
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82A21B34:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82a21968
	ctx.lr = 0x82A21B3C;
	sub_82A21968(ctx, base);
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// vspltw128 v12,v126,2
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v126.u32), 0x55));
	// vspltw128 v7,v127,2
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), 0x55));
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// vspltw128 v8,v126,1
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v126.u32), 0xAA));
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// vspltw128 v9,v127,1
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), 0xAA));
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vspltw128 v10,v126,0
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v126.u32), 0xFF));
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vspltw128 v11,v127,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), 0xFF));
	// vmaddfp v6,v0,v12,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v6.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// vmaddfp v7,v0,v7,v13
	_mm_store_ps(ctx.v7.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v13.f32)));
	// lvx128 v12,r0,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmaddfp v13,v8,v12,v6
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v6.f32)));
	// lvx128 v0,r0,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmaddfp v12,v9,v12,v7
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v7.f32)));
	// vmaddfp v13,v10,v0,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v11,v0,v12
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)));
	// stvx128 v13,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82a21bb4
	if (!ctx.cr6.lt) goto loc_82A21BB4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A21BB4:
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lfs f13,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-23724(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23724);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x82a21bdc
	if (ctx.cr6.gt) goto loc_82A21BDC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x82a21be0
	if (!ctx.cr6.eq) goto loc_82A21BE0;
loc_82A21BDC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A21BE0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a21c10
	if (ctx.cr6.eq) goto loc_82A21C10;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82a21c10
	if (ctx.cr6.eq) goto loc_82A21C10;
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,-30420(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30420);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82a21c10
	if (ctx.cr6.lt) goto loc_82A21C10;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A21C10:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// li r0,-48
	ctx.r0.s64 = -48;
	// lvx128 v126,r1,r0
	simd::store_shuffled(ctx.v126, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF), VectorMaskL));
	// li r0,-32
	ctx.r0.s64 = -32;
	// lvx128 v127,r1,r0
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF), VectorMaskL));
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A21C34"))) PPC_WEAK_FUNC(sub_82A21C34);
PPC_FUNC_IMPL(__imp__sub_82A21C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A21C38"))) PPC_WEAK_FUNC(sub_82A21C38);
PPC_FUNC_IMPL(__imp__sub_82A21C38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82A21C40;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// li r12,-96
	ctx.r12.s64 = -96;
	// stvx128 v126,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r12,-80
	ctx.r12.s64 = -80;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// vor128 v126,v1,v1
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r28,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r28.u32);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a21df8
	if (ctx.cr6.eq) goto loc_82A21DF8;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82a21dec
	if (!ctx.cr6.eq) goto loc_82A21DEC;
	// lwz r11,528(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 528);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82a21dec
	if (!ctx.cr6.eq) goto loc_82A21DEC;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// bl 0x82a21618
	ctx.lr = 0x82A21CA4;
	sub_82A21618(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r30,32
	ctx.r11.s64 = ctx.r30.s64 + 32;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82a21cbc
	if (!ctx.cr6.eq) goto loc_82A21CBC;
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// b 0x82a21cc0
	goto loc_82A21CC0;
loc_82A21CBC:
	// addi r11,r11,176
	ctx.r11.s64 = ctx.r11.s64 + 176;
loc_82A21CC0:
	// lvx128 v127,r0,r11
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82a21cd4
	if (!ctx.cr6.eq) goto loc_82A21CD4;
	// lwz r27,380(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 380);
	// b 0x82a21cd8
	goto loc_82A21CD8;
loc_82A21CD4:
	// lwz r27,396(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 396);
loc_82A21CD8:
	// lwz r11,492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a21cf8
	if (!ctx.cr6.eq) goto loc_82A21CF8;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82a21e38
	if (ctx.cr6.eq) goto loc_82A21E38;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r11.u32);
	// b 0x82a21dd8
	goto loc_82A21DD8;
loc_82A21CF8:
	// vor128 v1,v127,v127
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82a216a0
	ctx.lr = 0x82A21D0C;
	sub_82A216A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a213a0
	ctx.lr = 0x82A21D14;
	sub_82A213A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82a21dd8
	if (ctx.cr0.eq) goto loc_82A21DD8;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82a21dd8
	if (ctx.cr6.eq) goto loc_82A21DD8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a217c0
	ctx.lr = 0x82A21D2C;
	sub_82A217C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82a21dd8
	if (ctx.cr0.eq) goto loc_82A21DD8;
	// lwz r11,512(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r11.u32);
	// bl 0x82a218d8
	ctx.lr = 0x82A21D48;
	sub_82A218D8(ctx, base);
	// vor128 v1,v126,v126
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v126.u8));
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a21a60
	ctx.lr = 0x82A21D5C;
	sub_82A21A60(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lfs f0,5184(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// bne 0x82a21d88
	if (!ctx.cr0.eq) goto loc_82A21D88;
	// stfs f0,480(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 480, temp.u32);
	// stw r11,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r11.u32);
	// stfs f0,496(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 496, temp.u32);
	// stw r28,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r28.u32);
	// stfs f0,500(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 500, temp.u32);
	// stfs f0,508(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 508, temp.u32);
loc_82A21D88:
	// lwa r10,512(r31)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 512));
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f13,-24084(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24084);
	ctx.f13.f64 = double(temp.f32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x82a21dd8
	if (ctx.cr6.lt) goto loc_82A21DD8;
	// lwz r10,484(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// stfs f0,524(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 524, temp.u32);
	// stfs f0,480(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 480, temp.u32);
	// stw r28,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r28.u32);
	// stfs f0,496(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 496, temp.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stfs f0,500(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 500, temp.u32);
	// stw r11,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r11.u32);
	// stfs f0,508(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 508, temp.u32);
	// stw r28,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r28.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
loc_82A21DD8:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82a21e38
	if (ctx.cr6.eq) goto loc_82A21E38;
	// li r11,464
	ctx.r11.s64 = 464;
	// stvx128 v127,r31,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82a21e38
	goto loc_82A21E38;
loc_82A21DEC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r11.u32);
	// b 0x82a21dfc
	goto loc_82A21DFC;
loc_82A21DF8:
	// stw r28,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r28.u32);
loc_82A21DFC:
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,464
	ctx.r9.s64 = 464;
	// stw r28,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r28.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r28,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r28.u32);
	// stw r28,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r28.u32);
	// stw r11,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r11.u32);
	// lfs f0,5184(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r11.u32);
	// stfs f0,480(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 480, temp.u32);
	// stfs f0,496(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 496, temp.u32);
	// stfs f0,500(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 500, temp.u32);
	// stfs f0,508(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 508, temp.u32);
	// stvx128 v63,r31,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82A21E38:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// li r0,-96
	ctx.r0.s64 = -96;
	// lvx128 v126,r1,r0
	simd::store_shuffled(ctx.v126, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF), VectorMaskL));
	// li r0,-80
	ctx.r0.s64 = -80;
	// lvx128 v127,r1,r0
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF), VectorMaskL));
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A21E58"))) PPC_WEAK_FUNC(sub_82A21E58);
PPC_FUNC_IMPL(__imp__sub_82A21E58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r12,16
	ctx.r12.s64 = 16;
	// stvx128 v1,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f12,24(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,5184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// beq cr6,0x82a21ec4
	if (ctx.cr6.eq) goto loc_82A21EC4;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lfs f11,16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lfs f10,20(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f13,24436(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-23712(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23712);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f13,23544(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 23544);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f0,23552(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 23552);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f11,f12,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fnmsubs f0,f10,f12,f0
	ctx.f0.f64 = double(float(-(ctx.f10.f64 * ctx.f12.f64 - ctx.f0.f64)));
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfiwx f13,0,r3
	PPC_STORE_U32(ctx.r3.u32, ctx.f13.u32);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r4
	PPC_STORE_U32(ctx.r4.u32, ctx.f0.u32);
	// blr 
	return;
loc_82A21EC4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A21ED4"))) PPC_WEAK_FUNC(sub_82A21ED4);
PPC_FUNC_IMPL(__imp__sub_82A21ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A21ED8"))) PPC_WEAK_FUNC(sub_82A21ED8);
PPC_FUNC_IMPL(__imp__sub_82A21ED8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A21EE0;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// li r12,-64
	ctx.r12.s64 = -64;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// vor128 v127,v1,v1
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A21F0C;
	sub_82FA7CF0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82a22144
	if (!ctx.cr6.eq) goto loc_82A22144;
	// li r11,11
	ctx.r11.s64 = 11;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// addi r10,r10,-11628
	ctx.r10.s64 = ctx.r10.s64 + -11628;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82A21F40:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 + 88;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82a21f5c
	if (ctx.cr6.eq) goto loc_82A21F5C;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_82A21F5C:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82a21f40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A21F40;
	// clrldi r11,r9,32
	ctx.r11.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// addi r28,r31,12
	ctx.r28.s64 = ctx.r31.s64 + 12;
	// lvx128 v1,r30,r10
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// bl 0x82a21e58
	ctx.lr = 0x82A21FA0;
	sub_82A21E58(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subfic r10,r10,160
	ctx.xer.ca = ctx.r10.u32 <= 160;
	ctx.r10.s64 = 160 - ctx.r10.s64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f13,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// lfs f0,-23708(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23708);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f13,-23736(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23736);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82a21fe8
	if (!ctx.cr6.lt) goto loc_82A21FE8;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82A21FE8:
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lfs f0,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lfs f12,24436(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f12.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82a22010
	if (!ctx.cr6.gt) goto loc_82A22010;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82A22010:
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// li r11,96
	ctx.r11.s64 = 96;
	// li r10,160
	ctx.r10.s64 = 160;
	// vpermwi128 v63,v127,99
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), 0x9C));
	// vpermwi128 v0,v127,135
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), 0x78));
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// vspltisw128 v62,1
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_set1_epi32(int(0x1)));
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// vspltisw128 v61,0
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_set1_epi32(int(0x0)));
	// lvx128 v60,r30,r10
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// vcsxwfp128 v10,v62,1
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v62.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3F000000)))));
	// lfs f31,5184(r8)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5184);
	ctx.f31.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f13,5180(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5180);
	ctx.f13.f64 = double(temp.f32);
	// lvx128 v59,r30,r11
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r10,15888
	ctx.r11.s64 = ctx.r10.s64 + 15888;
	// vsubfp128 v60,v60,v59
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v60.f32, _mm_sub_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v59.f32)));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// vpermwi128 v59,v60,135
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), 0x78));
	// lvx128 v62,r0,r11
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v13,v60,99
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), 0x9C));
	// vmulfp128 v12,v63,v59
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v59.f32)));
	// vnmsubfp v12,v0,v13,v12
	_mm_store_ps(ctx.v12.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v12.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// stvx128 v12,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f0,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lvx128 v63,r0,r7
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v60,v63,v63
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v60.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v63.f32), 0xEF));
	// vrsqrtefp128 v0,v60
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v60.f32))));
	// vor128 v11,v60,v60
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v60.u8));
	// vmulfp128 v13,v60,v10
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v10.f32)));
	// vcmpeqfp128 v9,v60,v61
	_mm_store_ps(ctx.v9.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v61.f32)));
	// vmulfp128 v12,v0,v0
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v10,v13,v12,v10
	_mm_store_ps(ctx.v10.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v10.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v10,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v0,v63,v0
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v0.f32)));
	// vsel v13,v0,v11,v9
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v11.u8))));
	// vmsum3fp128 v63,v13,v62
	_mm_store_ps(ctx.v63.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v62.f32), 0xEF));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82a220e4
	if (ctx.cr6.lt) goto loc_82A220E4;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82a220e4
	if (!ctx.cr6.gt) goto loc_82A220E4;
	// fmr f1,f12
	ctx.f1.f64 = ctx.f12.f64;
	// b 0x82a220f0
	goto loc_82A220F0;
loc_82A220E4:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82a220f0
	if (!ctx.cr6.lt) goto loc_82A220F0;
	// fmr f1,f13
	ctx.f1.f64 = ctx.f13.f64;
loc_82A220F0:
	// bl 0x82fa3ec8
	ctx.lr = 0x82A220F4;
	sub_82FA3EC8(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stfs f31,40(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lfs f0,-3432(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3432);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
loc_82A2211C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82a2213c
	if (ctx.cr6.eq) goto loc_82A2213C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x82a2211c
	if (ctx.cr6.lt) goto loc_82A2211C;
	// b 0x82a22144
	goto loc_82A22144;
loc_82A2213C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82A22144:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// li r0,-64
	ctx.r0.s64 = -64;
	// lvx128 v127,r1,r0
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF), VectorMaskL));
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A22158"))) PPC_WEAK_FUNC(sub_82A22158);
PPC_FUNC_IMPL(__imp__sub_82A22158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x82A22160;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r21,0
	ctx.r21.s64 = 0;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r10,-4
	ctx.r6.s64 = ctx.r10.s64 + -4;
	// addi r9,r3,48
	ctx.r9.s64 = ctx.r3.s64 + 48;
loc_82A22198:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82a221f0
	if (!ctx.cr6.eq) goto loc_82A221F0;
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r22,48
	ctx.r10.s64 = ctx.r22.s64 + 48;
loc_82A221B0:
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82a221d0
	if (ctx.cr6.eq) goto loc_82A221D0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,60
	ctx.r10.s64 = ctx.r10.s64 + 60;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x82a221b0
	if (ctx.cr6.lt) goto loc_82A221B0;
	// b 0x82a221dc
	goto loc_82A221DC;
loc_82A221D0:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stwx r8,r10,r7
	PPC_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r8.u32);
loc_82A221DC:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82a221ec
	if (!ctx.cr6.eq) goto loc_82A221EC;
	// stwu r8,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r6.u32 = ea;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
loc_82A221EC:
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
loc_82A221F0:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,448
	ctx.r9.s64 = ctx.r9.s64 + 448;
	// cmplwi cr6,r8,6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 6, ctx.xer);
	// blt cr6,0x82a22198
	if (ctx.cr6.lt) goto loc_82A22198;
	// cmplwi cr6,r21,1
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 1, ctx.xer);
	// bne cr6,0x82a22248
	if (!ctx.cr6.eq) goto loc_82A22248;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82a22248
	if (!ctx.cr6.eq) goto loc_82A22248;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82a22248
	if (!ctx.cr6.eq) goto loc_82A22248;
	// addi r31,r22,60
	ctx.r31.s64 = ctx.r22.s64 + 60;
	// li r5,60
	ctx.r5.s64 = 60;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82A22230;
	sub_82FA77C0(ctx, base);
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A22240;
	sub_82FA7CF0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82A22248:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82a222f0
	if (ctx.cr6.eq) goto loc_82A222F0;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// addi r24,r23,32
	ctx.r24.s64 = ctx.r23.s64 + 32;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// addi r25,r11,-4
	ctx.r25.s64 = ctx.r11.s64 + -4;
	// addi r31,r22,48
	ctx.r31.s64 = ctx.r22.s64 + 48;
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
loc_82A22268:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82a22284
	if (!ctx.cr6.eq) goto loc_82A22284;
	// lwzu r11,4(r25)
	ea = 4 + ctx.r25.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r25.u32 = ea;
	// li r26,1
	ctx.r26.s64 = 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82A22284:
	// lwz r28,0(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r10,r28,448
	ctx.r10.s64 = ctx.r28.s64 * 448;
	// add r10,r10,r23
	ctx.r10.u64 = ctx.r10.u64 + ctx.r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r29,r10,48
	ctx.r29.s64 = ctx.r10.s64 + 48;
	// beq cr6,0x82a222c0
	if (ctx.cr6.eq) goto loc_82A222C0;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a222c0
	if (ctx.cr6.eq) goto loc_82A222C0;
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,-48
	ctx.r3.s64 = ctx.r31.s64 + -48;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A222BC;
	sub_82FA7CF0(ctx, base);
	// li r26,1
	ctx.r26.s64 = 1;
loc_82A222C0:
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// lvx128 v1,r0,r24
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r24.u32) & ~0xF), VectorMaskL));
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a21ed8
	ctx.lr = 0x82A222D0;
	sub_82A21ED8(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r31,r31,60
	ctx.r31.s64 = ctx.r31.s64 + 60;
	// bne 0x82a22268
	if (!ctx.cr0.eq) goto loc_82A22268;
loc_82A222F0:
	// stw r21,360(r22)
	PPC_STORE_U32(ctx.r22.u32 + 360, ctx.r21.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A22300"))) PPC_WEAK_FUNC(sub_82A22300);
PPC_FUNC_IMPL(__imp__sub_82A22300) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lfs f0,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A22328"))) PPC_WEAK_FUNC(sub_82A22328);
PPC_FUNC_IMPL(__imp__sub_82A22328) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A22330"))) PPC_WEAK_FUNC(sub_82A22330);
PPC_FUNC_IMPL(__imp__sub_82A22330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A22338"))) PPC_WEAK_FUNC(sub_82A22338);
PPC_FUNC_IMPL(__imp__sub_82A22338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A22340"))) PPC_WEAK_FUNC(sub_82A22340);
PPC_FUNC_IMPL(__imp__sub_82A22340) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A22348"))) PPC_WEAK_FUNC(sub_82A22348);
PPC_FUNC_IMPL(__imp__sub_82A22348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A22350"))) PPC_WEAK_FUNC(sub_82A22350);
PPC_FUNC_IMPL(__imp__sub_82A22350) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A22358"))) PPC_WEAK_FUNC(sub_82A22358);
PPC_FUNC_IMPL(__imp__sub_82A22358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A22360"))) PPC_WEAK_FUNC(sub_82A22360);
PPC_FUNC_IMPL(__imp__sub_82A22360) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A22368"))) PPC_WEAK_FUNC(sub_82A22368);
PPC_FUNC_IMPL(__imp__sub_82A22368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A22370"))) PPC_WEAK_FUNC(sub_82A22370);
PPC_FUNC_IMPL(__imp__sub_82A22370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A22378;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82a22398
	if (!ctx.cr6.eq) goto loc_82A22398;
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,87
	ctx.r30.u64 = ctx.r30.u64 | 87;
	// b 0x82a2249c
	goto loc_82A2249C;
loc_82A22398:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lfs f0,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x829fd340
	ctx.lr = 0x82A223C0;
	sub_829FD340(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// blt 0x82a22494
	if (ctx.cr0.lt) goto loc_82A22494;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x829fdbe0
	ctx.lr = 0x82A223DC;
	sub_829FDBE0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82a22490
	if (ctx.cr0.lt) goto loc_82A22490;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lfs f12,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-23580(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23580);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82a22408
	if (!ctx.cr6.gt) goto loc_82A22408;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_82A22408:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,7
	ctx.r5.s64 = 7;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x829fdbe0
	ctx.lr = 0x82A2241C;
	sub_829FDBE0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// blt 0x82a22494
	if (ctx.cr0.lt) goto loc_82A22494;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,6
	ctx.r5.s64 = 6;
	// bl 0x829fdbe0
	ctx.lr = 0x82A22438;
	sub_829FDBE0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// blt 0x82a22494
	if (ctx.cr0.lt) goto loc_82A22494;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x829fdbe0
	ctx.lr = 0x82A22454;
	sub_829FDBE0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82a22490
	if (ctx.cr0.lt) goto loc_82A22490;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f2,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// lfd f1,11528(r11)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 11528);
	// bl 0x82fa30a8
	ctx.lr = 0x82A22474;
	sub_82FA30A8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,23392(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23392);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
loc_82A22490:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A22494:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x829fde58
	ctx.lr = 0x82A2249C;
	sub_829FDE58(ctx, base);
loc_82A2249C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A224A8"))) PPC_WEAK_FUNC(sub_82A224A8);
PPC_FUNC_IMPL(__imp__sub_82A224A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A224B0;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82fa8d28
	ctx.lr = 0x82A224B8;
	__savefpr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lfs f0,-8020(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -8020);
	ctx.f0.f64 = double(temp.f32);
	// addi r31,r10,23656
	ctx.r31.s64 = ctx.r10.s64 + 23656;
	// fmuls f28,f2,f0
	ctx.f28.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// beq cr6,0x82a224fc
	if (ctx.cr6.eq) goto loc_82A224FC;
	// mulli r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 * 48;
	// addi r10,r31,20
	ctx.r10.s64 = ctx.r31.s64 + 20;
	// lfsx f13,r11,r10
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f2,f13
	ctx.cr6.compare(ctx.f2.f64, ctx.f13.f64);
	// ble cr6,0x82a224fc
	if (!ctx.cr6.gt) goto loc_82A224FC;
	// fmuls f28,f13,f0
	ctx.f28.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_82A224FC:
	// bl 0x82fa4060
	ctx.lr = 0x82A22500;
	sub_82FA4060(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// lfd f1,11528(r11)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 11528);
	// bl 0x82fa4060
	ctx.lr = 0x82A22510;
	sub_82FA4060(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r31,12
	ctx.r10.s64 = ctx.r31.s64 + 12;
	// mulli r11,r29,48
	ctx.r11.s64 = ctx.r29.s64 * 48;
	// lfsx f0,r11,r10
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f31,f31,f13
	ctx.f31.f64 = double(float(ctx.f31.f64 / ctx.f13.f64));
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x82a22534
	if (!ctx.cr6.gt) goto loc_82A22534;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_82A22534:
	// addi r10,r31,16
	ctx.r10.s64 = ctx.r31.s64 + 16;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x82a22548
	if (!ctx.cr6.lt) goto loc_82A22548;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_82A22548:
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fadds f29,f0,f31
	ctx.f29.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// lfsx f13,r11,r9
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-23728(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -23728);
	ctx.f0.f64 = double(temp.f32);
	// fadds f30,f13,f31
	ctx.f30.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// bge cr6,0x82a22578
	if (!ctx.cr6.lt) goto loc_82A22578;
	// fmr f13,f29
	ctx.f13.f64 = ctx.f29.f64;
	// b 0x82a2257c
	goto loc_82A2257C;
loc_82A22578:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_82A2257C:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f12,-27880(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27880);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x82a2259c
	if (!ctx.cr6.gt) goto loc_82A2259C;
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// blt cr6,0x82a225a0
	if (ctx.cr6.lt) goto loc_82A225A0;
	// fmr f29,f0
	ctx.f29.f64 = ctx.f0.f64;
	// b 0x82a225a0
	goto loc_82A225A0;
loc_82A2259C:
	// fmr f29,f12
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f12.f64;
loc_82A225A0:
	// fcmpu cr6,f30,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// bge cr6,0x82a225b0
	if (!ctx.cr6.lt) goto loc_82A225B0;
	// fmr f13,f30
	ctx.f13.f64 = ctx.f30.f64;
	// b 0x82a225b4
	goto loc_82A225B4;
loc_82A225B0:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_82A225B4:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x82a225cc
	if (!ctx.cr6.gt) goto loc_82A225CC;
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// blt cr6,0x82a225d0
	if (ctx.cr6.lt) goto loc_82A225D0;
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
	// b 0x82a225d0
	goto loc_82A225D0;
loc_82A225CC:
	// fmr f30,f12
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f12.f64;
loc_82A225D0:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x82a225e0
	if (!ctx.cr6.lt) goto loc_82A225E0;
	// fmr f13,f31
	ctx.f13.f64 = ctx.f31.f64;
	// b 0x82a225e4
	goto loc_82A225E4;
loc_82A225E0:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_82A225E4:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x82a225fc
	if (!ctx.cr6.gt) goto loc_82A225FC;
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x82a22600
	if (ctx.cr6.lt) goto loc_82A22600;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
	// b 0x82a22600
	goto loc_82A22600;
loc_82A225FC:
	// fmr f31,f12
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f12.f64;
loc_82A22600:
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x829fd340
	ctx.lr = 0x82A2260C;
	sub_829FD340(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x82a22624
	if (!ctx.cr0.lt) goto loc_82A22624;
loc_82A22614:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A2261C:
	// bl 0x829fde58
	ctx.lr = 0x82A22620;
	sub_829FDE58(ctx, base);
	// b 0x82a22670
	goto loc_82A22670;
loc_82A22624:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x829fe978
	ctx.lr = 0x82A22630;
	sub_829FE978(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82a22614
	if (ctx.cr0.lt) goto loc_82A22614;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x829fea40
	ctx.lr = 0x82A2264C;
	sub_829FEA40(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// blt 0x82a2261c
	if (ctx.cr0.lt) goto loc_82A2261C;
	// bl 0x829fde58
	ctx.lr = 0x82A22660;
	sub_829FDE58(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a22370
	ctx.lr = 0x82A2266C;
	sub_82A22370(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82A22670:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82fa8d74
	ctx.lr = 0x82A22680;
	__restfpr_28(ctx, base);
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A22684"))) PPC_WEAK_FUNC(sub_82A22684);
PPC_FUNC_IMPL(__imp__sub_82A22684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A22688"))) PPC_WEAK_FUNC(sub_82A22688);
PPC_FUNC_IMPL(__imp__sub_82A22688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x82a226b0
	if (!ctx.cr6.lt) goto loc_82A226B0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
loc_82A2269C:
	// stfs f1,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_82A226A0:
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f1,4(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
loc_82A226B0:
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82a226c8
	if (ctx.cr6.gt) goto loc_82A226C8;
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// ble cr6,0x82a226d8
	if (!ctx.cr6.gt) goto loc_82A226D8;
loc_82A226C8:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82a226e0
	if (ctx.cr6.lt) goto loc_82A226E0;
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// blt cr6,0x82a226e0
	if (ctx.cr6.lt) goto loc_82A226E0;
loc_82A226D8:
	// stfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// b 0x82a226a0
	goto loc_82A226A0;
loc_82A226E0:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82a226f0
	if (ctx.cr6.gt) goto loc_82A226F0;
	// fcmpu cr6,f13,f1
	ctx.cr6.compare(ctx.f13.f64, ctx.f1.f64);
	// ble cr6,0x82a22700
	if (!ctx.cr6.gt) goto loc_82A22700;
loc_82A226F0:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82a2269c
	if (ctx.cr6.lt) goto loc_82A2269C;
	// fcmpu cr6,f13,f1
	ctx.cr6.compare(ctx.f13.f64, ctx.f1.f64);
	// blt cr6,0x82a2269c
	if (ctx.cr6.lt) goto loc_82A2269C;
loc_82A22700:
	// stfs f13,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// b 0x82a226a0
	goto loc_82A226A0;
}

__attribute__((alias("__imp__sub_82A22708"))) PPC_WEAK_FUNC(sub_82A22708);
PPC_FUNC_IMPL(__imp__sub_82A22708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r4,-24632(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24632);
	// b 0x82691460
	sub_82691460(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A22714"))) PPC_WEAK_FUNC(sub_82A22714);
PPC_FUNC_IMPL(__imp__sub_82A22714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A22718"))) PPC_WEAK_FUNC(sub_82A22718);
PPC_FUNC_IMPL(__imp__sub_82A22718) {
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
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// lfs f0,-15356(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15356);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// lfs f13,-14268(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -14268);
	ctx.f13.f64 = double(temp.f32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// lfs f12,-1588(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -1588);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stfs f13,52(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stw r7,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r7.u32);
	// stfs f12,56(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// std r11,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, ctx.r11.u64);
	// stw r30,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// bl 0x82a26938
	ctx.lr = 0x82A22790;
	sub_82A26938(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// stb r30,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r30.u8);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// stb r30,109(r31)
	PPC_STORE_U8(ctx.r31.u32 + 109, ctx.r30.u8);
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// stb r30,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r30.u8);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f13,-23656(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23656);
	ctx.f13.f64 = double(temp.f32);
	// li r11,60
	ctx.r11.s64 = 60;
	// lfs f0,5184(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,24436(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24436);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f11,-23660(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -23660);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// lfs f10,-23672(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -23672);
	ctx.f10.f64 = double(temp.f32);
	// stfs f13,84(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// stfs f13,88(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stfs f12,100(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stfs f11,112(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stfs f10,116(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// lfs f13,21500(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 21500);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,124(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stfs f13,144(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// stb r30,140(r31)
	PPC_STORE_U8(ctx.r31.u32 + 140, ctx.r30.u8);
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

__attribute__((alias("__imp__sub_82A22824"))) PPC_WEAK_FUNC(sub_82A22824);
PPC_FUNC_IMPL(__imp__sub_82A22824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A22828"))) PPC_WEAK_FUNC(sub_82A22828);
PPC_FUNC_IMPL(__imp__sub_82A22828) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 108);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82a2285c
	if (!ctx.cr0.eq) goto loc_82A2285C;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x82a22910
	goto loc_82A22910;
loc_82A2285C:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82a239f8
	ctx.lr = 0x82A22864;
	sub_82A239F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82a22878
	if (!ctx.cr0.lt) goto loc_82A22878;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82a239f8
	ctx.lr = 0x82A22874;
	sub_82A239F8(ctx, base);
	// b 0x82a22910
	goto loc_82A22910;
loc_82A22878:
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r7,4
	ctx.r7.s64 = 4;
	// lfs f0,-15356(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15356);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-14268(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -14268);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lfs f12,-1588(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -1588);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// stb r30,140(r31)
	PPC_STORE_U8(ctx.r31.u32 + 140, ctx.r30.u8);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stb r30,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r30.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,48
	ctx.r5.s64 = 48;
	// lfs f31,5184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,24436(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24436);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-23660(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -23660);
	ctx.f13.f64 = double(temp.f32);
	// stfs f31,96(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stfs f13,112(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x82A22900;
	sub_82FA77C0(ctx, base);
	// stfs f31,124(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// stfs f31,128(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
loc_82A22910:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

__attribute__((alias("__imp__sub_82A2292C"))) PPC_WEAK_FUNC(sub_82A2292C);
PPC_FUNC_IMPL(__imp__sub_82A2292C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A22930"))) PPC_WEAK_FUNC(sub_82A22930);
PPC_FUNC_IMPL(__imp__sub_82A22930) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A22938;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 108);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82a22958
	if (!ctx.cr0.eq) goto loc_82A22958;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x82a229b4
	goto loc_82A229B4;
loc_82A22958:
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// lfs f2,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// lis r30,-32229
	ctx.r30.s64 = -2112159744;
	// addi r29,r31,64
	ctx.r29.s64 = ctx.r31.s64 + 64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f3,-11584(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11584);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,-15356(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -15356);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a26960
	ctx.lr = 0x82A22978;
	sub_82A26960(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,-15356(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -15356);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a269d0
	ctx.lr = 0x82A22984;
	sub_82A269D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82a2299c
	if (!ctx.cr0.lt) goto loc_82A2299C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,-15356(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -15356);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a269d0
	ctx.lr = 0x82A22998;
	sub_82A269D0(ctx, base);
	// b 0x82a229b4
	goto loc_82A229B4;
loc_82A2299C:
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,-15356(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -15356);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stb r11,109(r31)
	PPC_STORE_U8(ctx.r31.u32 + 109, ctx.r11.u8);
loc_82A229B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A229BC"))) PPC_WEAK_FUNC(sub_82A229BC);
PPC_FUNC_IMPL(__imp__sub_82A229BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A229C0"))) PPC_WEAK_FUNC(sub_82A229C0);
PPC_FUNC_IMPL(__imp__sub_82A229C0) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 108);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82a229f0
	if (!ctx.cr0.eq) goto loc_82A229F0;
loc_82A229E4:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x82a22aec
	goto loc_82A22AEC;
loc_82A229F0:
	// lbz r11,109(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 109);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82a229e4
	if (ctx.cr0.eq) goto loc_82A229E4;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f0,-15356(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15356);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-14268(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -14268);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lfs f12,-1588(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -1588);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stw r6,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r6.u32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82a23ac8
	ctx.lr = 0x82A22A50;
	sub_82A23AC8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82a22a68
	if (!ctx.cr0.lt) goto loc_82A22A68;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82a23ac8
	ctx.lr = 0x82A22A64;
	sub_82A23AC8(ctx, base);
	// b 0x82a22aec
	goto loc_82A22AEC;
loc_82A22A68:
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a269a8
	ctx.lr = 0x82A22A80;
	sub_82A269A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82a22aa0
	if (!ctx.cr0.lt) goto loc_82A22AA0;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a269a8
	ctx.lr = 0x82A22A9C;
	sub_82A269A8(ctx, base);
	// b 0x82a22aec
	goto loc_82A22AEC;
loc_82A22AA0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f2,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,5184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// ble cr6,0x82a229e4
	if (!ctx.cr6.gt) goto loc_82A229E4;
	// lis r30,-31975
	ctx.r30.s64 = -2095513600;
	// lfs f1,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f3,-11584(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -11584);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x82a26960
	ctx.lr = 0x82A22AC8;
	sub_82A26960(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82a22ae8
	if (!ctx.cr0.lt) goto loc_82A22AE8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f3,-11584(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -11584);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a26960
	ctx.lr = 0x82A22AE4;
	sub_82A26960(ctx, base);
	// b 0x82a22aec
	goto loc_82A22AEC;
loc_82A22AE8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A22AEC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A22B04"))) PPC_WEAK_FUNC(sub_82A22B04);
PPC_FUNC_IMPL(__imp__sub_82A22B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A22B08"))) PPC_WEAK_FUNC(sub_82A22B08);
PPC_FUNC_IMPL(__imp__sub_82A22B08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A22B10;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82fa8d24
	ctx.lr = 0x82A22B18;
	__savefpr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82a22300
	ctx.lr = 0x82A22B30;
	sub_82A22300(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a22338
	ctx.lr = 0x82A22B38;
	sub_82A22338(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// bl 0x82a22358
	ctx.lr = 0x82A22B44;
	sub_82A22358(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// bl 0x82a22348
	ctx.lr = 0x82A22B50;
	sub_82A22348(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82c0e990
	ctx.lr = 0x82A22B60;
	sub_82C0E990(ctx, base);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82a24d08
	ctx.lr = 0x82A22B68;
	sub_82A24D08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a22368
	ctx.lr = 0x82A22B70;
	sub_82A22368(ctx, base);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82a224a8
	ctx.lr = 0x82A22B88;
	sub_82A224A8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82a22c04
	if (ctx.cr0.lt) goto loc_82A22C04;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a22338
	ctx.lr = 0x82A22B98;
	sub_82A22338(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82a22358
	ctx.lr = 0x82A22BA4;
	sub_82A22358(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x82a22348
	ctx.lr = 0x82A22BB0;
	sub_82A22348(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// lfs f0,5184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// beq cr6,0x82a22bcc
	if (ctx.cr6.eq) goto loc_82A22BCC;
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// bgt cr6,0x82a22bd8
	if (ctx.cr6.gt) goto loc_82A22BD8;
loc_82A22BCC:
	// lis r29,-32768
	ctx.r29.s64 = -2147483648;
	// ori r29,r29,65535
	ctx.r29.u64 = ctx.r29.u64 | 65535;
	// b 0x82a22c04
	goto loc_82A22C04;
loc_82A22BD8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a22328
	ctx.lr = 0x82A22BE0;
	sub_82A22328(ctx, base);
	// fmuls f0,f27,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f27.f64 * ctx.f28.f64));
	// fmuls f13,f30,f31
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f31.f64));
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// bl 0x82a14440
	ctx.lr = 0x82A22C04;
	sub_82A14440(ctx, base);
loc_82A22C04:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82fa8d70
	ctx.lr = 0x82A22C14;
	__restfpr_27(ctx, base);
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A22C18"))) PPC_WEAK_FUNC(sub_82A22C18);
PPC_FUNC_IMPL(__imp__sub_82A22C18) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a22c44
	if (ctx.cr6.eq) goto loc_82A22C44;
	// bl 0x82a08ca0
	ctx.lr = 0x82A22C3C;
	sub_82A08CA0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82A22C44:
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82554918
	ctx.lr = 0x82A22C4C;
	sub_82554918(ctx, base);
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

__attribute__((alias("__imp__sub_82A22C60"))) PPC_WEAK_FUNC(sub_82A22C60);
PPC_FUNC_IMPL(__imp__sub_82A22C60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82a22c78
	if (!ctx.cr6.eq) goto loc_82A22C78;
loc_82A22C6C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_82A22C78:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82a22c6c
	if (ctx.cr6.eq) goto loc_82A22C6C;
	// lbz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 108);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82a22c98
	if (ctx.cr0.eq) goto loc_82A22C98;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82A22C98:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r5,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r8,108(r11)
	PPC_STORE_U8(ctx.r11.u32 + 108, ctx.r8.u8);
	// lfs f0,5184(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,11556(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11556);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,96(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 96, temp.u32);
	// stfs f13,84(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A22CCC"))) PPC_WEAK_FUNC(sub_82A22CCC);
PPC_FUNC_IMPL(__imp__sub_82A22CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A22CD0"))) PPC_WEAK_FUNC(sub_82A22CD0);
PPC_FUNC_IMPL(__imp__sub_82A22CD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A22CD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82a22cfc
	if (!ctx.cr6.eq) goto loc_82A22CFC;
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,87
	ctx.r29.u64 = ctx.r29.u64 | 87;
	// b 0x82a22d40
	goto loc_82A22D40;
loc_82A22CFC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a22d1c
	if (ctx.cr6.eq) goto loc_82A22D1C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a22d1c
	if (ctx.cr6.eq) goto loc_82A22D1C;
	// bl 0x82a08ca0
	ctx.lr = 0x82A22D18;
	sub_82A08CA0(ctx, base);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
loc_82A22D1C:
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_82A22D24:
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
	// bne 0x82a22d24
	if (!ctx.cr0.eq) goto loc_82A22D24;
loc_82A22D40:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A22D4C"))) PPC_WEAK_FUNC(sub_82A22D4C);
PPC_FUNC_IMPL(__imp__sub_82A22D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A22D50"))) PPC_WEAK_FUNC(sub_82A22D50);
PPC_FUNC_IMPL(__imp__sub_82A22D50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A22D58;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 108);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82a22d8c
	if (!ctx.cr0.eq) goto loc_82A22D8C;
loc_82A22D80:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x82a22f54
	goto loc_82A22F54;
loc_82A22D8C:
	// lbz r11,109(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 109);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82a22d80
	if (ctx.cr0.eq) goto loc_82A22D80;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// li r30,1
	ctx.r30.s64 = 1;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r29,0
	ctx.r29.s64 = 0;
	// lfs f0,-15356(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15356);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-14268(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -14268);
	ctx.f13.f64 = double(temp.f32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// lfs f12,-1588(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -1588);
	ctx.f12.f64 = double(temp.f32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// std r30,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r30.u64);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82a23ac8
	ctx.lr = 0x82A22DEC;
	sub_82A23AC8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82a22e04
	if (!ctx.cr0.lt) goto loc_82A22E04;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82a23ac8
	ctx.lr = 0x82A22E00;
	sub_82A23AC8(ctx, base);
	// b 0x82a22f54
	goto loc_82A22F54;
loc_82A22E04:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// subfe. r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a22f40
	if (!ctx.cr0.eq) goto loc_82A22F40;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82a22f40
	if (ctx.cr6.eq) goto loc_82A22F40;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a22e94
	if (!ctx.cr6.eq) goto loc_82A22E94;
	// lfs f13,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,112(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x82a22e74
	if (!ctx.cr6.lt) goto loc_82A22E74;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stfs f31,112(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,48
	ctx.r5.s64 = 48;
	// bl 0x82fa77c0
	ctx.lr = 0x82A22E70;
	sub_82FA77C0(ctx, base);
	// b 0x82a22f18
	goto loc_82A22F18;
loc_82A22E74:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82a22e8c
	if (!ctx.cr6.gt) goto loc_82A22E8C;
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// b 0x82a22f48
	goto loc_82A22F48;
loc_82A22E8C:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82a22f44
	goto loc_82A22F44;
loc_82A22E94:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// lfs f11,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x82a22eb0
	if (!ctx.cr6.gt) goto loc_82A22EB0;
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
	// b 0x82a22eb4
	goto loc_82A22EB4;
loc_82A22EB0:
	// fmr f10,f11
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f11.f64;
loc_82A22EB4:
	// lfs f13,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// blt cr6,0x82a22ecc
	if (ctx.cr6.lt) goto loc_82A22ECC;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_82A22ECC:
	// lfs f9,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f9.f64 = double(temp.f32);
	// fabs f12,f12
	ctx.f12.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fmuls f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x82a22f24
	if (!ctx.cr6.lt) goto loc_82A22F24;
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x82a22eec
	if (ctx.cr6.lt) goto loc_82A22EEC;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
loc_82A22EEC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,21500(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21500);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// bge cr6,0x82a22f24
	if (!ctx.cr6.lt) goto loc_82A22F24;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,48
	ctx.r5.s64 = 48;
	// bl 0x82fa77c0
	ctx.lr = 0x82A22F0C;
	sub_82FA77C0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f0,-23660(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23660);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
loc_82A22F18:
	// stb r30,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r30.u8);
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// b 0x82a22f50
	goto loc_82A22F50;
loc_82A22F24:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stb r29,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r29.u8);
	// li r10,5
	ctx.r10.s64 = 5;
	// lfs f0,-23672(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23672);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// b 0x82a22f50
	goto loc_82A22F50;
loc_82A22F40:
	// li r11,5
	ctx.r11.s64 = 5;
loc_82A22F44:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82A22F48:
	// stfs f30,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stb r29,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r29.u8);
loc_82A22F50:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A22F54:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A22F64"))) PPC_WEAK_FUNC(sub_82A22F64);
PPC_FUNC_IMPL(__imp__sub_82A22F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A22F68"))) PPC_WEAK_FUNC(sub_82A22F68);
PPC_FUNC_IMPL(__imp__sub_82A22F68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A22F70;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f0,-15356(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15356);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-14268(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -14268);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lfs f12,-1588(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -1588);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r7,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// std r11,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r11.u64);
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stw r6,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r6.u32);
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x82a23ac8
	ctx.lr = 0x82A22FD4;
	sub_82A23AC8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82a22fec
	if (!ctx.cr0.lt) goto loc_82A22FEC;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82a23ac8
	ctx.lr = 0x82A22FE8;
	sub_82A23AC8(ctx, base);
	// b 0x82a2318c
	goto loc_82A2318C;
loc_82A22FEC:
	// lfs f31,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x82a78340
	ctx.lr = 0x82A22FF4;
	sub_82A78340(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a23008
	if (!ctx.cr6.eq) goto loc_82A23008;
	// lfs f30,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f30.f64 = double(temp.f32);
	// b 0x82a2302c
	goto loc_82A2302C;
loc_82A23008:
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,-23580(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23580);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f30,f13,f0
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_82A2302C:
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x82a23048
	if (!ctx.cr6.gt) goto loc_82A23048;
	// fmr f12,f31
	ctx.f12.f64 = ctx.f31.f64;
	// b 0x82a2304c
	goto loc_82A2304C;
loc_82A23048:
	// fmr f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f0.f64;
loc_82A2304C:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// bl 0x82a22688
	ctx.lr = 0x82A2305C;
	sub_82A22688(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82a23094
	if (!ctx.cr6.eq) goto loc_82A23094;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_82A2306C:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82a25278
	ctx.lr = 0x82A23078;
	sub_82A25278(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82a23118
	if (!ctx.cr0.lt) goto loc_82A23118;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a25278
	ctx.lr = 0x82A23090;
	sub_82A25278(ctx, base);
	// b 0x82a2318c
	goto loc_82A2318C;
loc_82A23094:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x82a230a4
	if (!ctx.cr6.lt) goto loc_82A230A4;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_82A230A4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// addi r30,r31,64
	ctx.r30.s64 = ctx.r31.s64 + 64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f13,21500(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21500);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blt cr6,0x82a230f0
	if (ctx.cr6.lt) goto loc_82A230F0;
loc_82A230C8:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82a26a48
	ctx.lr = 0x82A230D0;
	sub_82A26A48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82a230f8
	if (!ctx.cr0.lt) goto loc_82A230F8;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82a26a48
	ctx.lr = 0x82A230EC;
	sub_82A26A48(ctx, base);
	// b 0x82a2318c
	goto loc_82A2318C;
loc_82A230F0:
	// lfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f31.f64 = double(temp.f32);
	// b 0x82a230c8
	goto loc_82A230C8;
loc_82A230F8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,5184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x82a2306c
	if (ctx.cr6.gt) goto loc_82A2306C;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x82a2318c
	goto loc_82A2318C;
loc_82A23118:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a22b08
	ctx.lr = 0x82A23128;
	sub_82A22B08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82a23144
	if (!ctx.cr0.lt) goto loc_82A23144;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a22b08
	ctx.lr = 0x82A23140;
	sub_82A22B08(ctx, base);
	// b 0x82a2318c
	goto loc_82A2318C;
loc_82A23144:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82a22328
	ctx.lr = 0x82A2314C;
	sub_82A22328(ctx, base);
	// addi r30,r31,64
	ctx.r30.s64 = ctx.r31.s64 + 64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a269d0
	ctx.lr = 0x82A2315C;
	sub_82A269D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82a23174
	if (!ctx.cr0.lt) goto loc_82A23174;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82a269d0
	ctx.lr = 0x82A23170;
	sub_82A269D0(ctx, base);
	// b 0x82a2318c
	goto loc_82A2318C;
loc_82A23174:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f31,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82A23188;
	sub_82FA77C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A2318C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2319C"))) PPC_WEAK_FUNC(sub_82A2319C);
PPC_FUNC_IMPL(__imp__sub_82A2319C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A231A0"))) PPC_WEAK_FUNC(sub_82A231A0);
PPC_FUNC_IMPL(__imp__sub_82A231A0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A231BC"))) PPC_WEAK_FUNC(sub_82A231BC);
PPC_FUNC_IMPL(__imp__sub_82A231BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A231C0"))) PPC_WEAK_FUNC(sub_82A231C0);
PPC_FUNC_IMPL(__imp__sub_82A231C0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A231C8"))) PPC_WEAK_FUNC(sub_82A231C8);
PPC_FUNC_IMPL(__imp__sub_82A231C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82a23200
	if (!ctx.cr6.eq) goto loc_82A23200;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a23200
	if (!ctx.cr6.eq) goto loc_82A23200;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a23200
	if (!ctx.cr6.eq) goto loc_82A23200;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_82A23200:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82a23218
	if (ctx.cr6.lt) goto loc_82A23218;
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82a2321c
	if (ctx.cr6.gt) goto loc_82A2321C;
loc_82A23218:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A2321C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82a23230
	if (ctx.cr6.lt) goto loc_82A23230;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82a23234
	if (ctx.cr6.gt) goto loc_82A23234;
loc_82A23230:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A23234:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// clrlwi. r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A23254"))) PPC_WEAK_FUNC(sub_82A23254);
PPC_FUNC_IMPL(__imp__sub_82A23254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A23258"))) PPC_WEAK_FUNC(sub_82A23258);
PPC_FUNC_IMPL(__imp__sub_82A23258) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A23260"))) PPC_WEAK_FUNC(sub_82A23260);
PPC_FUNC_IMPL(__imp__sub_82A23260) {
	PPC_FUNC_PROLOGUE();
	// li r11,16
	ctx.r11.s64 = 16;
	// lvx128 v63,r0,r4
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r3,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

