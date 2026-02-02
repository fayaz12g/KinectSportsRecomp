#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82A23270"))) PPC_WEAK_FUNC(sub_82A23270);
PPC_FUNC_IMPL(__imp__sub_82A23270) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A23278"))) PPC_WEAK_FUNC(sub_82A23278);
PPC_FUNC_IMPL(__imp__sub_82A23278) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,68
	ctx.r3.s64 = ctx.r3.s64 + 68;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A23280"))) PPC_WEAK_FUNC(sub_82A23280);
PPC_FUNC_IMPL(__imp__sub_82A23280) {
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
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a232bc
	if (ctx.cr6.eq) goto loc_82A232BC;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r4,-24632(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24632);
	// bl 0x82691460
	ctx.lr = 0x82A232AC;
	sub_82691460(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_82A232BC:
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

__attribute__((alias("__imp__sub_82A232D0"))) PPC_WEAK_FUNC(sub_82A232D0);
PPC_FUNC_IMPL(__imp__sub_82A232D0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-23632
	ctx.r8.s64 = ctx.r10.s64 + -23632;
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// addi r6,r10,15312
	ctx.r6.s64 = ctx.r10.s64 + 15312;
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// addi r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 + 48;
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stb r11,48(r3)
	PPC_STORE_U8(ctx.r3.u32 + 48, ctx.r11.u8);
	// lvx128 v63,r0,r6
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stb r11,68(r3)
	PPC_STORE_U8(ctx.r3.u32 + 68, ctx.r11.u8);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// addi r11,r3,68
	ctx.r11.s64 = ctx.r3.s64 + 68;
	// stvx128 v63,r3,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A23348"))) PPC_WEAK_FUNC(sub_82A23348);
PPC_FUNC_IMPL(__imp__sub_82A23348) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stb r5,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r5.u8);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// b 0x82a231c8
	sub_82A231C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A23374"))) PPC_WEAK_FUNC(sub_82A23374);
PPC_FUNC_IMPL(__imp__sub_82A23374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A23378"))) PPC_WEAK_FUNC(sub_82A23378);
PPC_FUNC_IMPL(__imp__sub_82A23378) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A23380;
	__savegprlr_28(ctx, base);
	// li r12,-64
	ctx.r12.s64 = -64;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r10,-23644
	ctx.r8.s64 = ctx.r10.s64 + -23644;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// addi r6,r1,124
	ctx.r6.s64 = ctx.r1.s64 + 124;
	// lfs f11,-23644(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23644);
	ctx.f11.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f12,-23624(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -23624);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lfs f13,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5184(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r7,r1,140
	ctx.r7.s64 = ctx.r1.s64 + 140;
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f13,-23628(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -23628);
	ctx.f13.f64 = double(temp.f32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lvx128 v127,r3,r8
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stfs f11,132(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// sth r11,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r11.u16);
	// lvx128 v63,r0,r10
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vsubfp128 v1,v127,v63
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v1.f32, _mm_sub_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v63.f32)));
	// bl 0x8227b978
	ctx.lr = 0x82A2342C;
	sub_8227B978(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vsubfp128 v1,v127,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v1.f32, _mm_sub_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v63.f32)));
	// bl 0x8227b978
	ctx.lr = 0x82A23448;
	sub_8227B978(ctx, base);
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// lhz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82a09988
	ctx.lr = 0x82A23468;
	sub_82A09988(ctx, base);
	// mr. r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// blt 0x82a2352c
	if (ctx.cr0.lt) goto loc_82A2352C;
	// addi r9,r1,124
	ctx.r9.s64 = ctx.r1.s64 + 124;
	// lhz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 104);
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82a09988
	ctx.lr = 0x82A23490;
	sub_82A09988(ctx, base);
	// mr. r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// blt 0x82a2352c
	if (ctx.cr0.lt) goto loc_82A2352C;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lwz r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// and r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ctx.r10.u64;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// cmpw cr6,r6,r29
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r29.s32, ctx.xer);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// ble cr6,0x82a234d0
	if (!ctx.cr6.gt) goto loc_82A234D0;
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
loc_82A234D0:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// ble cr6,0x82a234e0
	if (!ctx.cr6.gt) goto loc_82A234E0;
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r28.u32);
loc_82A234E0:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// stb r10,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r10.u8);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stw r9,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
	// stw r8,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r8.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// bl 0x82a231c8
	ctx.lr = 0x82A23518;
	sub_82A231C8(ctx, base);
	// lbz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 48);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82a2352c
	if (!ctx.cr0.eq) goto loc_82A2352C;
	// lis r7,-32768
	ctx.r7.s64 = -2147483648;
	// ori r7,r7,65535
	ctx.r7.u64 = ctx.r7.u64 | 65535;
loc_82A2352C:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// li r0,-64
	ctx.r0.s64 = -64;
	// lvx128 v127,r1,r0
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF), VectorMaskL));
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A23540"))) PPC_WEAK_FUNC(sub_82A23540);
PPC_FUNC_IMPL(__imp__sub_82A23540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A23548;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a23568
	if (!ctx.cr6.eq) goto loc_82A23568;
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// ori r30,r30,16387
	ctx.r30.u64 = ctx.r30.u64 | 16387;
	// b 0x82a235d4
	goto loc_82A235D4;
loc_82A23568:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r3,96
	ctx.r3.s64 = 96;
	// lwz r4,-24632(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24632);
	// bl 0x82691410
	ctx.lr = 0x82A23578;
	sub_82691410(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a2358c
	if (ctx.cr0.eq) goto loc_82A2358C;
	// bl 0x82a232d0
	ctx.lr = 0x82A23584;
	sub_82A232D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82a23590
	goto loc_82A23590;
loc_82A2358C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82A23590:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82a235a4
	if (!ctx.cr6.eq) goto loc_82A235A4;
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// b 0x82a235d4
	goto loc_82A235D4;
loc_82A235A4:
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// addi r6,r31,44
	ctx.r6.s64 = ctx.r31.s64 + 44;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,156
	ctx.r4.s64 = 156;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a26b30
	ctx.lr = 0x82A235BC;
	sub_82A26B30(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82a235cc
	if (ctx.cr0.lt) goto loc_82A235CC;
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// b 0x82a235d4
	goto loc_82A235D4;
loc_82A235CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a08ca0
	ctx.lr = 0x82A235D4;
	sub_82A08CA0(ctx, base);
loc_82A235D4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A235E0"))) PPC_WEAK_FUNC(sub_82A235E0);
PPC_FUNC_IMPL(__imp__sub_82A235E0) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x82a26b68
	ctx.lr = 0x82A23604;
	sub_82A26B68(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x82a23660
	if (!ctx.cr6.lt) goto loc_82A23660;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a23628
	if (ctx.cr6.eq) goto loc_82A23628;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a23280
	ctx.lr = 0x82A23628;
	sub_82A23280(ctx, base);
loc_82A23628:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r30,31
	ctx.r3.s64 = ctx.r30.s64 + 31;
	// lwz r4,-24632(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24632);
	// bl 0x82691410
	ctx.lr = 0x82A23638;
	sub_82691410(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82a23650
	if (!ctx.cr0.eq) goto loc_82A23650;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82a23664
	goto loc_82A23664;
loc_82A23650:
	// addi r11,r3,31
	ctx.r11.s64 = ctx.r3.s64 + 31;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_82A23660:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A23664:
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

__attribute__((alias("__imp__sub_82A2367C"))) PPC_WEAK_FUNC(sub_82A2367C);
PPC_FUNC_IMPL(__imp__sub_82A2367C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A23680"))) PPC_WEAK_FUNC(sub_82A23680);
PPC_FUNC_IMPL(__imp__sub_82A23680) {
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
	// addi r3,r3,44
	ctx.r3.s64 = ctx.r3.s64 + 44;
	// addi r11,r11,-23632
	ctx.r11.s64 = ctx.r11.s64 + -23632;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82a9cda0
	ctx.lr = 0x82A236A8;
	sub_82A9CDA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a23280
	ctx.lr = 0x82A236B0;
	sub_82A23280(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r11,r11,29064
	ctx.r11.s64 = ctx.r11.s64 + 29064;
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

__attribute__((alias("__imp__sub_82A236D0"))) PPC_WEAK_FUNC(sub_82A236D0);
PPC_FUNC_IMPL(__imp__sub_82A236D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A236D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82a235e0
	ctx.lr = 0x82A236F8;
	sub_82A235E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a2371c
	if (ctx.cr0.lt) goto loc_82A2371C;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r7,40(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a26b80
	ctx.lr = 0x82A2371C;
	sub_82A26B80(ctx, base);
loc_82A2371C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A23724"))) PPC_WEAK_FUNC(sub_82A23724);
PPC_FUNC_IMPL(__imp__sub_82A23724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A23728"))) PPC_WEAK_FUNC(sub_82A23728);
PPC_FUNC_IMPL(__imp__sub_82A23728) {
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
	// bl 0x82a23680
	ctx.lr = 0x82A23748;
	sub_82A23680(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a23760
	if (ctx.cr0.eq) goto loc_82A23760;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-24632(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24632);
	// bl 0x82691460
	ctx.lr = 0x82A23760;
	sub_82691460(ctx, base);
loc_82A23760:
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

__attribute__((alias("__imp__sub_82A2377C"))) PPC_WEAK_FUNC(sub_82A2377C);
PPC_FUNC_IMPL(__imp__sub_82A2377C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A23780"))) PPC_WEAK_FUNC(sub_82A23780);
PPC_FUNC_IMPL(__imp__sub_82A23780) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82A23788;
	__savegprlr_23(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
	// stw r7,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r7.u32);
	// addi r30,r3,68
	ctx.r30.s64 = ctx.r3.s64 + 68;
	// stw r7,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r7.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r7,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r7.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r7,68(r31)
	PPC_STORE_U8(ctx.r31.u32 + 68, ctx.r7.u8);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// addi r27,r30,4
	ctx.r27.s64 = ctx.r30.s64 + 4;
	// stw r7,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// bl 0x82a231c8
	ctx.lr = 0x82A237D8;
	sub_82A231C8(ctx, base);
	// stb r7,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r7.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a236d0
	ctx.lr = 0x82A237E4;
	sub_82A236D0(ctx, base);
	// mr. r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt 0x82a23968
	if (ctx.cr0.lt) goto loc_82A23968;
	// clrlwi. r26,r26,24
	ctx.r26.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// li r24,1
	ctx.r24.s64 = 1;
	// bne 0x82a2385c
	if (!ctx.cr0.eq) goto loc_82A2385C;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a2385c
	if (ctx.cr6.eq) goto loc_82A2385C;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r23,r1,128
	ctx.r23.s64 = ctx.r1.s64 + 128;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// ld r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// ld r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f1,5184(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f1.f64 = double(temp.f32);
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A23850;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a2385c
	if (ctx.cr0.lt) goto loc_82A2385C;
	// stb r24,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r24.u8);
loc_82A2385C:
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82a23934
	if (!ctx.cr0.eq) goto loc_82A23934;
	// addi r6,r31,52
	ctx.r6.s64 = ctx.r31.s64 + 52;
	// lwz r6,64(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lwz r7,60(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// addi r5,r8,-23652
	ctx.r5.s64 = ctx.r8.s64 + -23652;
	// stw r6,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lfs f0,-23652(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -23652);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// lfs f13,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r8,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// lfd f12,112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// lfd f11,112(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f13,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f13.u64);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// fctiwz f13,f12
	ctx.f13.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfd f13,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f13.u64);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// stw r8,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// stw r7,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// beq cr6,0x82a23934
	if (ctx.cr6.eq) goto loc_82A23934;
	// stb r24,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r24.u8);
loc_82A23934:
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lbz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
	// stw r8,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r8.u32);
	// stw r7,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r7.u32);
	// stw r11,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r11.u32);
	// bl 0x82a231c8
	ctx.lr = 0x82A23968;
	sub_82A231C8(ctx, base);
loc_82A23968:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A23974"))) PPC_WEAK_FUNC(sub_82A23974);
PPC_FUNC_IMPL(__imp__sub_82A23974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A23978"))) PPC_WEAK_FUNC(sub_82A23978);
PPC_FUNC_IMPL(__imp__sub_82A23978) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f1,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r8,r11,-23616
	ctx.r8.s64 = ctx.r11.s64 + -23616;
loc_82A2398C:
	// li r10,5
	ctx.r10.s64 = 5;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82A23998:
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// bdnz 0x82a23998
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A23998;
	// addi r9,r9,5
	ctx.r9.s64 = ctx.r9.s64 + 5;
	// cmpwi cr6,r9,25
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 25, ctx.xer);
	// blt cr6,0x82a2398c
	if (ctx.cr6.lt) goto loc_82A2398C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A239C0"))) PPC_WEAK_FUNC(sub_82A239C0);
PPC_FUNC_IMPL(__imp__sub_82A239C0) {
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
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// bl 0x828b2440
	ctx.lr = 0x82A239DC;
	sub_828B2440(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82a27418
	ctx.lr = 0x82A239E4;
	sub_82A27418(ctx, base);
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

__attribute__((alias("__imp__sub_82A239F8"))) PPC_WEAK_FUNC(sub_82A239F8);
PPC_FUNC_IMPL(__imp__sub_82A239F8) {
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
	// lwz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a23a28
	if (!ctx.cr6.eq) goto loc_82A23A28;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x82a23ab0
	goto loc_82A23AB0;
loc_82A23A28:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82a25348
	ctx.lr = 0x82A23A30;
	sub_82A25348(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82a23a44
	if (!ctx.cr0.lt) goto loc_82A23A44;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82a25348
	ctx.lr = 0x82A23A40;
	sub_82A25348(ctx, base);
	// b 0x82a23ab0
	goto loc_82A23AB0;
loc_82A23A44:
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a27288
	ctx.lr = 0x82A23A50;
	sub_82A27288(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82a23a64
	if (!ctx.cr0.lt) goto loc_82A23A64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a27288
	ctx.lr = 0x82A23A60;
	sub_82A27288(ctx, base);
	// b 0x82a23ab0
	goto loc_82A23AB0;
loc_82A23A64:
	// addi r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 + 40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a275b8
	ctx.lr = 0x82A23A70;
	sub_82A275B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82a23a84
	if (!ctx.cr0.lt) goto loc_82A23A84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a275b8
	ctx.lr = 0x82A23A80;
	sub_82A275B8(ctx, base);
	// b 0x82a23ab0
	goto loc_82A23AB0;
loc_82A23A84:
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// lfs f0,24436(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24436);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// stfs f0,264(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 264, temp.u32);
	// stw r9,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r9.u32);
	// stfs f0,160(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
loc_82A23AB0:
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

__attribute__((alias("__imp__sub_82A23AC8"))) PPC_WEAK_FUNC(sub_82A23AC8);
PPC_FUNC_IMPL(__imp__sub_82A23AC8) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82a23af0
	if (!ctx.cr6.eq) goto loc_82A23AF0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82a23b24
	goto loc_82A23B24;
loc_82A23AF0:
	// lwz r10,176(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82a23b1c
	if (ctx.cr6.eq) goto loc_82A23B1C;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82a23b1c
	if (!ctx.cr6.eq) goto loc_82A23B1C;
	// addi r4,r11,184
	ctx.r4.s64 = ctx.r11.s64 + 184;
	// li r5,48
	ctx.r5.s64 = 48;
	// bl 0x82fa77c0
	ctx.lr = 0x82A23B14;
	sub_82FA77C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a23b24
	goto loc_82A23B24;
loc_82A23B1C:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
loc_82A23B24:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A23B34"))) PPC_WEAK_FUNC(sub_82A23B34);
PPC_FUNC_IMPL(__imp__sub_82A23B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A23B38"))) PPC_WEAK_FUNC(sub_82A23B38);
PPC_FUNC_IMPL(__imp__sub_82A23B38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,140(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82a23b64
	if (ctx.cr6.eq) goto loc_82A23B64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// stw r10,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r10.u32);
	// bne cr6,0x82a23b5c
	if (!ctx.cr6.eq) goto loc_82A23B5C;
	// stw r10,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r10.u32);
loc_82A23B5C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82A23B64:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x82a23b88
	if (!ctx.cr6.eq) goto loc_82A23B88;
	// lwz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82a23b88
	if (ctx.cr6.eq) goto loc_82A23B88;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 144, ctx.r10.u32);
	// blr 
	return;
loc_82A23B88:
	// lwz r11,260(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A23B9C"))) PPC_WEAK_FUNC(sub_82A23B9C);
PPC_FUNC_IMPL(__imp__sub_82A23B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A23BA0"))) PPC_WEAK_FUNC(sub_82A23BA0);
PPC_FUNC_IMPL(__imp__sub_82A23BA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// addi r7,r11,-23616
	ctx.r7.s64 = ctx.r11.s64 + -23616;
loc_82A23BBC:
	// li r9,5
	ctx.r9.s64 = 5;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82A23BC8:
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r9,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r9,r7
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	ctx.f11.f64 = double(temp.f32);
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fmadds f0,f11,f12,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f0.f64));
	// bdnz 0x82a23bc8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A23BC8;
	// addi r10,r10,5
	ctx.r10.s64 = ctx.r10.s64 + 5;
	// cmpwi cr6,r10,25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 25, ctx.xer);
	// blt cr6,0x82a23bbc
	if (ctx.cr6.lt) goto loc_82A23BBC;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f12,31480(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31480);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-25408(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25408);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fmuls f0,f13,f11
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A23C1C"))) PPC_WEAK_FUNC(sub_82A23C1C);
PPC_FUNC_IMPL(__imp__sub_82A23C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A23C20"))) PPC_WEAK_FUNC(sub_82A23C20);
PPC_FUNC_IMPL(__imp__sub_82A23C20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// lfs f0,5184(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// bgt cr6,0x82a23c68
	if (ctx.cr6.gt) goto loc_82A23C68;
	// subfic r10,r11,256
	ctx.xer.ca = ctx.r11.u32 <= 256;
	ctx.r10.s64 = 256 - ctx.r11.s64;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,25
	ctx.r11.s64 = ctx.r11.s64 + 25;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82A23C48:
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// bdnz 0x82a23c48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A23C48;
loc_82A23C68:
	// lwz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// lwz r10,120(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A23C98"))) PPC_WEAK_FUNC(sub_82A23C98);
PPC_FUNC_IMPL(__imp__sub_82A23C98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82A23CA0;
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
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a23d5c
	if (!ctx.cr6.eq) goto loc_82A23D5C;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x82a23d5c
	if (ctx.cr6.eq) goto loc_82A23D5C;
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a23d5c
	if (!ctx.cr6.eq) goto loc_82A23D5C;
	// addi r29,r3,40
	ctx.r29.s64 = ctx.r3.s64 + 40;
	// lfs f2,156(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,152(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	ctx.f1.f64 = double(temp.f32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// bl 0x82a275e8
	ctx.lr = 0x82A23D04;
	sub_82A275E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82a23d2c
	if (!ctx.cr0.lt) goto loc_82A23D2C;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f2,156(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	ctx.f2.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,152(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	ctx.f1.f64 = double(temp.f32);
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// bl 0x82a275e8
	ctx.lr = 0x82A23D28;
	sub_82A275E8(ctx, base);
	// b 0x82a23d6c
	goto loc_82A23D6C;
loc_82A23D2C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a23d58
	if (!ctx.cr6.eq) goto loc_82A23D58;
	// lfs f13,156(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// fsubs f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f31.f64));
	// lfs f0,-23492(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23492);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fabs f13,f12
	ctx.f13.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82a23d5c
	if (!ctx.cr6.gt) goto loc_82A23D5C;
loc_82A23D58:
	// li r30,1
	ctx.r30.s64 = 1;
loc_82A23D5C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_82A23D6C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A23D7C"))) PPC_WEAK_FUNC(sub_82A23D7C);
PPC_FUNC_IMPL(__imp__sub_82A23D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A23D80"))) PPC_WEAK_FUNC(sub_82A23D80);
PPC_FUNC_IMPL(__imp__sub_82A23D80) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// blt cr6,0x82a23db0
	if (ctx.cr6.lt) goto loc_82A23DB0;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x82a23db8
	goto loc_82A23DB8;
loc_82A23DB0:
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_82A23DB8:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f1,11528(r11)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 11528);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,-23468(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23468);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x82fa30a8
	ctx.lr = 0x82A23DD4;
	sub_82FA30A8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
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
}

__attribute__((alias("__imp__sub_82A23DF4"))) PPC_WEAK_FUNC(sub_82A23DF4);
PPC_FUNC_IMPL(__imp__sub_82A23DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A23DF8"))) PPC_WEAK_FUNC(sub_82A23DF8);
PPC_FUNC_IMPL(__imp__sub_82A23DF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A23E00;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// bl 0x82a26f90
	ctx.lr = 0x82A23E18;
	sub_82A26F90(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82a27558
	ctx.lr = 0x82A23E20;
	sub_82A27558(ctx, base);
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stw r30,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r30.u32);
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// lfs f0,24436(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24436);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// stfs f0,160(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// li r29,4
	ctx.r29.s64 = 4;
	// lfs f12,-14268(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -14268);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,220(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 220, temp.u32);
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// lfs f13,-15356(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -15356);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// lfs f11,-1588(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -1588);
	ctx.f11.f64 = double(temp.f32);
	// stw r29,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r29.u32);
	// stfs f13,184(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// std r11,208(r31)
	PPC_STORE_U64(ctx.r31.u32 + 208, ctx.r11.u64);
	// stfs f13,188(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 188, temp.u32);
	// stw r30,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r30.u32);
	// stfs f11,224(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 224, temp.u32);
	// lfs f12,-23496(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -23496);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,248(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// lfs f10,-16424(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -16424);
	ctx.f10.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f13,-23480(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23480);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-23484(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -23484);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-23488(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -23488);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,-23496(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -23496);
	ctx.f9.f64 = double(temp.f32);
	// stfs f13,232(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 232, temp.u32);
	// stfs f12,236(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 236, temp.u32);
	// stfs f11,240(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 240, temp.u32);
	// stfs f10,244(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 244, temp.u32);
	// stfs f9,252(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 252, temp.u32);
	// stfs f0,256(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// stw r30,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r30.u32);
	// stfs f0,264(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 264, temp.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A23EE8"))) PPC_WEAK_FUNC(sub_82A23EE8);
PPC_FUNC_IMPL(__imp__sub_82A23EE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A23EF0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82a23f10
	if (!ctx.cr6.eq) goto loc_82A23F10;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82a23f98
	goto loc_82A23F98;
loc_82A23F10:
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a23f28
	if (ctx.cr6.eq) goto loc_82A23F28;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x82a23f98
	goto loc_82A23F98;
loc_82A23F28:
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a27468
	ctx.lr = 0x82A23F34;
	sub_82A27468(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82a23f48
	if (!ctx.cr0.lt) goto loc_82A23F48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a27468
	ctx.lr = 0x82A23F44;
	sub_82A27468(ctx, base);
	// b 0x82a23f98
	goto loc_82A23F98;
loc_82A23F48:
	// addi r29,r31,40
	ctx.r29.s64 = ctx.r31.s64 + 40;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a27588
	ctx.lr = 0x82A23F58;
	sub_82A27588(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82a23f70
	if (!ctx.cr0.lt) goto loc_82A23F70;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a27588
	ctx.lr = 0x82A23F6C;
	sub_82A27588(ctx, base);
	// b 0x82a23f98
	goto loc_82A23F98;
loc_82A23F70:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r9.u32);
	// lfs f0,23552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23552);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-23464(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23464);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,232(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 232, temp.u32);
	// stfs f13,240(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 240, temp.u32);
loc_82A23F98:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A23FA0"))) PPC_WEAK_FUNC(sub_82A23FA0);
PPC_FUNC_IMPL(__imp__sub_82A23FA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A23FA8;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82fa8d28
	ctx.lr = 0x82A23FB0;
	__savefpr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// fmr f29,f2
	ctx.f29.f64 = ctx.f2.f64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// fmr f28,f3
	ctx.f28.f64 = ctx.f3.f64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// fmr f31,f4
	ctx.f31.f64 = ctx.f4.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82a23c98
	ctx.lr = 0x82A23FE0;
	sub_82A23C98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82a24008
	if (!ctx.cr0.lt) goto loc_82A24008;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a23c98
	ctx.lr = 0x82A24004;
	sub_82A23C98(ctx, base);
	// b 0x82a24128
	goto loc_82A24128;
loc_82A24008:
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lfs f0,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f13,132(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82a2409c
	if (!ctx.cr6.eq) goto loc_82A2409C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a2409c
	if (!ctx.cr6.eq) goto loc_82A2409C;
	// lwz r10,148(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82a2409c
	if (!ctx.cr6.eq) goto loc_82A2409C;
	// lwz r10,260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82a2404c
	if (!ctx.cr6.eq) goto loc_82A2404C;
	// lfs f12,160(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f31,f12
	ctx.cr6.compare(ctx.f31.f64, ctx.f12.f64);
	// beq cr6,0x82a24108
	if (ctx.cr6.eq) goto loc_82A24108;
loc_82A2404C:
	// lfs f13,264(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f28,f31
	ctx.f12.f64 = double(float(ctx.f28.f64 * ctx.f31.f64));
	// lfs f11,160(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmuls f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfs f13,23924(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 23924);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82a2408c
	if (ctx.cr6.gt) goto loc_82A2408C;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lfs f12,-23516(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23516);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82a2408c
	if (!ctx.cr6.lt) goto loc_82A2408C;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// b 0x82a24108
	goto loc_82A24108;
loc_82A2408C:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82a24108
	if (ctx.cr6.gt) goto loc_82A24108;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x82a24108
	goto loc_82A24108;
loc_82A2409C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,240(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lbzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfs f13,23924(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 23924);
	ctx.f13.f64 = double(temp.f32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82a240f4
	if (ctx.cr6.gt) goto loc_82A240F4;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lfs f12,-23516(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23516);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82a240f4
	if (!ctx.cr6.lt) goto loc_82A240F4;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// b 0x82a24100
	goto loc_82A24100;
loc_82A240F4:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82a24100
	if (ctx.cr6.gt) goto loc_82A24100;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_82A24100:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
loc_82A24108:
	// lwz r10,252(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// stfs f0,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// lwz r9,260(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// stfs f13,132(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
loc_82A24128:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82fa8d74
	ctx.lr = 0x82A24134;
	__restfpr_28(ctx, base);
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A24138"))) PPC_WEAK_FUNC(sub_82A24138);
PPC_FUNC_IMPL(__imp__sub_82A24138) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82A24140;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// lwz r10,120(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mullw r6,r10,r11
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82a27320
	ctx.lr = 0x82A24170;
	sub_82A27320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82a24198
	if (!ctx.cr0.lt) goto loc_82A24198;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mullw r6,r11,r10
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// bl 0x82a27320
	ctx.lr = 0x82A24194;
	sub_82A27320(ctx, base);
	// b 0x82a241d8
	goto loc_82A241D8;
loc_82A24198:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a23ba0
	ctx.lr = 0x82A241A8;
	sub_82A23BA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82a241c4
	if (!ctx.cr0.lt) goto loc_82A241C4;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a23ba0
	ctx.lr = 0x82A241C0;
	sub_82A23BA0(ctx, base);
	// b 0x82a241d8
	goto loc_82A241D8;
loc_82A241C4:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// stfs f13,0(r27)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
loc_82A241D8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A241E0"))) PPC_WEAK_FUNC(sub_82A241E0);
PPC_FUNC_IMPL(__imp__sub_82A241E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A241E8;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82fa8d28
	ctx.lr = 0x82A241F0;
	__savefpr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f29,f2
	ctx.f29.f64 = ctx.f2.f64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// fmr f28,f3
	ctx.f28.f64 = ctx.f3.f64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// fmr f30,f4
	ctx.f30.f64 = ctx.f4.f64;
	// bl 0x82a23b38
	ctx.lr = 0x82A24218;
	sub_82A23B38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82a2435c
	if (!ctx.cr0.eq) goto loc_82A2435C;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82a2435c
	if (!ctx.cr6.eq) goto loc_82A2435C;
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// lwz r10,260(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82a2435c
	if (!ctx.cr6.eq) goto loc_82A2435C;
	// lfs f0,108(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lfs f12,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82a2435c
	if (ctx.cr6.gt) goto loc_82A2435C;
	// addi r29,r31,40
	ctx.r29.s64 = ctx.r31.s64 + 40;
	// lfs f2,112(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f2.f64 = double(temp.f32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f1,116(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// bl 0x82a275e8
	ctx.lr = 0x82A24274;
	sub_82A275E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82a2429c
	if (!ctx.cr0.lt) goto loc_82A2429C;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f2,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f2.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,116(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// bl 0x82a275e8
	ctx.lr = 0x82A24298;
	sub_82A275E8(ctx, base);
	// b 0x82a2434c
	goto loc_82A2434C;
loc_82A2429C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a2435c
	if (!ctx.cr6.eq) goto loc_82A2435C;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x82a242c4
	if (!ctx.cr6.eq) goto loc_82A242C4;
	// lwz r11,252(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a24364
	if (!ctx.cr6.eq) goto loc_82A24364;
	// lfs f0,136(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82a2432c
	goto loc_82A2432C;
loc_82A242C4:
	// lfs f0,132(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f28,f0
	ctx.cr6.compare(ctx.f28.f64, ctx.f0.f64);
	// ble cr6,0x82a242d8
	if (!ctx.cr6.gt) goto loc_82A242D8;
	// fmr f11,f28
	ctx.f11.f64 = ctx.f28.f64;
	// b 0x82a242dc
	goto loc_82A242DC;
loc_82A242D8:
	// fmr f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f0.f64;
loc_82A242DC:
	// fcmpu cr6,f28,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f0.f64);
	// bge cr6,0x82a242ec
	if (!ctx.cr6.lt) goto loc_82A242EC;
	// fmr f13,f28
	ctx.f13.f64 = ctx.f28.f64;
	// b 0x82a242f0
	goto loc_82A242F0;
loc_82A242EC:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_82A242F0:
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lfs f12,24436(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x82a24304
	if (ctx.cr6.gt) goto loc_82A24304;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
loc_82A24304:
	// fdivs f13,f11,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f11.f64 / ctx.f13.f64));
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// fsubs f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// bne cr6,0x82a2431c
	if (!ctx.cr6.eq) goto loc_82A2431C;
	// lfs f13,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82a24320
	goto loc_82A24320;
loc_82A2431C:
	// lfs f13,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f13.f64 = double(temp.f32);
loc_82A24320:
	// fcmpu cr6,f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x82a2432c
	if (!ctx.cr6.gt) goto loc_82A2432C;
loc_82A24328:
	// fmr f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f28.f64;
loc_82A2432C:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f13,-23516(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23516);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82a24340
	if (!ctx.cr6.lt) goto loc_82A24340;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82A24340:
	// lwz r11,268(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_82A2434C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82fa8d74
	ctx.lr = 0x82A24358;
	__restfpr_28(ctx, base);
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_82A2435C:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x82a24328
	if (!ctx.cr6.eq) goto loc_82A24328;
loc_82A24364:
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82a2432c
	goto loc_82A2432C;
}

__attribute__((alias("__imp__sub_82A2436C"))) PPC_WEAK_FUNC(sub_82A2436C);
PPC_FUNC_IMPL(__imp__sub_82A2436C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A24370"))) PPC_WEAK_FUNC(sub_82A24370);
PPC_FUNC_IMPL(__imp__sub_82A24370) {
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
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lfs f12,256(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	ctx.f12.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f0,24436(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x82a243f4
	if (!ctx.cr6.lt) goto loc_82A243F4;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82a243a4
	if (!ctx.cr6.eq) goto loc_82A243A4;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// beq cr6,0x82a243f0
	if (ctx.cr6.eq) goto loc_82A243F0;
loc_82A243A4:
	// fcmpu cr6,f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f2.f64, ctx.f1.f64);
	// bgt cr6,0x82a243f4
	if (ctx.cr6.gt) goto loc_82A243F4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fdivs f13,f1,f2
	ctx.f13.f64 = double(float(ctx.f1.f64 / ctx.f2.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lbz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 200);
	// lfd f0,22496(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 22496);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fdivs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 / ctx.f13.f64));
	// fadd f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 + ctx.f0.f64;
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lbz r4,87(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// bl 0x82a23c20
	ctx.lr = 0x82A243E8;
	sub_82A23C20(ctx, base);
	// fcmpu cr6,f1,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// ble cr6,0x82a243f4
	if (!ctx.cr6.gt) goto loc_82A243F4;
loc_82A243F0:
	// li r8,1
	ctx.r8.s64 = 1;
loc_82A243F4:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A24408"))) PPC_WEAK_FUNC(sub_82A24408);
PPC_FUNC_IMPL(__imp__sub_82A24408) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A24410;
	__savegprlr_29(ctx, base);
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
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82a24434
	if (!ctx.cr6.eq) goto loc_82A24434;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82a24480
	goto loc_82A24480;
loc_82A24434:
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82a2446c
	if (ctx.cr6.eq) goto loc_82A2446C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a23d80
	ctx.lr = 0x82A24450;
	sub_82A23D80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82a24474
	if (!ctx.cr0.lt) goto loc_82A24474;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a23d80
	ctx.lr = 0x82A24468;
	sub_82A23D80(ctx, base);
	// b 0x82a24480
	goto loc_82A24480;
loc_82A2446C:
	// lfs f0,264(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82a24478
	goto loc_82A24478;
loc_82A24474:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
loc_82A24478:
	// stfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A24480:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A24488"))) PPC_WEAK_FUNC(sub_82A24488);
PPC_FUNC_IMPL(__imp__sub_82A24488) {
	PPC_FUNC_PROLOGUE();
	// stw r4,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r4.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x82a23ee8
	sub_82A23EE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A24494"))) PPC_WEAK_FUNC(sub_82A24494);
PPC_FUNC_IMPL(__imp__sub_82A24494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A24498"))) PPC_WEAK_FUNC(sub_82A24498);
PPC_FUNC_IMPL(__imp__sub_82A24498) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82A244A0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a244d4
	if (!ctx.cr6.eq) goto loc_82A244D4;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x82a24570
	goto loc_82A24570;
loc_82A244D4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82a25360
	ctx.lr = 0x82A244E0;
	sub_82A25360(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82a244f8
	if (!ctx.cr0.lt) goto loc_82A244F8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82a25360
	ctx.lr = 0x82A244F4;
	sub_82A25360(ctx, base);
	// b 0x82a24570
	goto loc_82A24570;
loc_82A244F8:
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r29,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r29.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82a26fb8
	ctx.lr = 0x82A24514;
	sub_82A26FB8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82a275a8
	ctx.lr = 0x82A24524;
	sub_82A275A8(ctx, base);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a24138
	ctx.lr = 0x82A24538;
	sub_82A24138(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82a24558
	if (!ctx.cr0.lt) goto loc_82A24558;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a24138
	ctx.lr = 0x82A24554;
	sub_82A24138(ctx, base);
	// b 0x82a24570
	goto loc_82A24570;
loc_82A24558:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,5184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
loc_82A24570:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A24578"))) PPC_WEAK_FUNC(sub_82A24578);
PPC_FUNC_IMPL(__imp__sub_82A24578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82A24580;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82fa8d28
	ctx.lr = 0x82A24588;
	__savefpr_28(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f30,f3
	ctx.f30.f64 = ctx.f3.f64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mullw r6,r10,r11
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// bl 0x82a27320
	ctx.lr = 0x82A245C4;
	sub_82A27320(ctx, base);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82a245ec
	if (!ctx.cr0.lt) goto loc_82A245EC;
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mullw r6,r11,r10
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// bl 0x82a27320
	ctx.lr = 0x82A245E8;
	sub_82A27320(ctx, base);
	// b 0x82a248a8
	goto loc_82A248A8;
loc_82A245EC:
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// lwz r9,124(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// addi r28,r31,40
	ctx.r28.s64 = ctx.r31.s64 + 40;
	// lfs f2,236(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f2.f64 = double(temp.f32);
	// addi r8,r1,132
	ctx.r8.s64 = ctx.r1.s64 + 132;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// lfs f1,136(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f1.f64 = double(temp.f32);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// mullw r6,r11,r9
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a27c40
	ctx.lr = 0x82A24628;
	sub_82A27C40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bge 0x82a24670
	if (!ctx.cr0.lt) goto loc_82A24670;
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r8,124(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// addi r9,r1,132
	ctx.r9.s64 = ctx.r1.s64 + 132;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lfs f2,236(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f2.f64 = double(temp.f32);
	// mullw r6,r11,r8
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// lfs f1,136(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f1.f64 = double(temp.f32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82a27c40
	ctx.lr = 0x82A2466C;
	sub_82A27C40(ctx, base);
	// b 0x82a248a8
	goto loc_82A248A8;
loc_82A24670:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// bl 0x82a27688
	ctx.lr = 0x82A2467C;
	sub_82A27688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82a24698
	if (!ctx.cr0.lt) goto loc_82A24698;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a27688
	ctx.lr = 0x82A24694;
	sub_82A27688(ctx, base);
	// b 0x82a248a8
	goto loc_82A248A8;
loc_82A24698:
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a23ba0
	ctx.lr = 0x82A246A8;
	sub_82A23BA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82a246c4
	if (!ctx.cr0.lt) goto loc_82A246C4;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a23ba0
	ctx.lr = 0x82A246C0;
	sub_82A23BA0(ctx, base);
	// b 0x82a248a8
	goto loc_82A248A8;
loc_82A246C4:
	// lwz r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r28,0
	ctx.r28.s64 = 0;
	// lfs f29,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f29.f64 = double(temp.f32);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// stw r28,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r28.u32);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// beq cr6,0x82a24770
	if (ctx.cr6.eq) goto loc_82A24770;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r9,r1,136
	ctx.r9.s64 = ctx.r1.s64 + 136;
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82a23fa0
	ctx.lr = 0x82A24720;
	sub_82A23FA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82a24768
	if (!ctx.cr0.lt) goto loc_82A24768;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f30.f64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82a23fa0
	ctx.lr = 0x82A24764;
	sub_82A23FA0(ctx, base);
	// b 0x82a248a8
	goto loc_82A248A8;
loc_82A24768:
	// lwz r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r30,128(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_82A24770:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lwz r29,324(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// lfs f31,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f31.f64 = double(temp.f32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lfs f4,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f4.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82a241e0
	ctx.lr = 0x82A247B0;
	sub_82A241E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82a247f8
	if (!ctx.cr0.lt) goto loc_82A247F8;
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f4,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f4.f64 = double(temp.f32);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// lwz r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82a241e0
	ctx.lr = 0x82A247F4;
	sub_82A241E0(ctx, base);
	// b 0x82a248a8
	goto loc_82A248A8;
loc_82A247F8:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lfs f11,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a24864
	if (!ctx.cr6.eq) goto loc_82A24864;
	// lfs f0,136(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fdivs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// lfs f13,23924(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 23924);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82a24844
	if (ctx.cr6.gt) goto loc_82A24844;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lfs f12,-23516(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23516);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82a24844
	if (!ctx.cr6.lt) goto loc_82A24844;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x82a24850
	goto loc_82A24850;
loc_82A24844:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82a24850
	if (!ctx.cr6.gt) goto loc_82A24850;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82A24850:
	// stfs f0,132(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// stw r28,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r28.u32);
	// stfs f29,152(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// stfs f28,156(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// b 0x82a24868
	goto loc_82A24868;
loc_82A24864:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82A24868:
	// lwz r10,332(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r9,340(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r7,348(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r6,124(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stfs f11,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lwz r5,356(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r10,364(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r4,372(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r31,136(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stfs f29,0(r10)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stw r31,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r31.u32);
loc_82A248A8:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82fa8d74
	ctx.lr = 0x82A248B4;
	__restfpr_28(ctx, base);
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A248B8"))) PPC_WEAK_FUNC(sub_82A248B8);
PPC_FUNC_IMPL(__imp__sub_82A248B8) {
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
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82a248ec
	if (!ctx.cr6.eq) goto loc_82A248EC;
	// lfs f10,136(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	ctx.f10.f64 = double(temp.f32);
	// b 0x82a248f0
	goto loc_82A248F0;
loc_82A248EC:
	// lfs f10,132(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	ctx.f10.f64 = double(temp.f32);
loc_82A248F0:
	// fdivs f0,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f2,-23516(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23516);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fcmpu cr6,f0,f2
	ctx.cr6.compare(ctx.f0.f64, ctx.f2.f64);
	// blt cr6,0x82a2490c
	if (ctx.cr6.lt) goto loc_82A2490C;
	// fmr f2,f0
	ctx.f2.f64 = ctx.f0.f64;
loc_82A2490C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82a2493c
	if (!ctx.cr6.eq) goto loc_82A2493C;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// bl 0x82a24370
	ctx.lr = 0x82A2491C;
	sub_82A24370(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82a2493c
	if (ctx.cr0.eq) goto loc_82A2493C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lfs f0,-23472(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23472);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-23476(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23476);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f2,f2,f13
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
loc_82A2493C:
	// stfs f10,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f2,0(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
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

__attribute__((alias("__imp__sub_82A2495C"))) PPC_WEAK_FUNC(sub_82A2495C);
PPC_FUNC_IMPL(__imp__sub_82A2495C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A24960"))) PPC_WEAK_FUNC(sub_82A24960);
PPC_FUNC_IMPL(__imp__sub_82A24960) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x82A24968;
	__savegprlr_22(ctx, base);
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x82fa8d24
	ctx.lr = 0x82A24970;
	__savefpr_27(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82a249a8
	if (!ctx.cr6.eq) goto loc_82A249A8;
loc_82A2499C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82a24cf8
	goto loc_82A24CF8;
loc_82A249A8:
	// lwz r29,420(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82a2499c
	if (ctx.cr6.eq) goto loc_82A2499C;
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a249cc
	if (!ctx.cr6.eq) goto loc_82A249CC;
loc_82A249C0:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x82a24cf8
	goto loc_82A24CF8;
loc_82A249CC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82a25360
	ctx.lr = 0x82A249D8;
	sub_82A25360(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82a249f0
	if (!ctx.cr0.lt) goto loc_82A249F0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82a25360
	ctx.lr = 0x82A249EC;
	sub_82A25360(ctx, base);
	// b 0x82a24cf8
	goto loc_82A24CF8;
loc_82A249F0:
	// stw r25,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r25.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r24,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r24.u32);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82a26fb8
	ctx.lr = 0x82A24A0C;
	sub_82A26FB8(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82a275a8
	ctx.lr = 0x82A24A1C;
	sub_82A275A8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a22328
	ctx.lr = 0x82A24A24;
	sub_82A22328(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f0,5184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82a249c0
	if (!ctx.cr6.gt) goto loc_82A249C0;
	// lwz r29,436(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82a24408
	ctx.lr = 0x82A24A4C;
	sub_82A24408(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82a24a68
	if (!ctx.cr0.lt) goto loc_82A24A68;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a24408
	ctx.lr = 0x82A24A64;
	sub_82A24408(ctx, base);
	// b 0x82a24cf8
	goto loc_82A24CF8;
loc_82A24A68:
	// lfs f28,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f28.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f0,f28,f30
	ctx.f0.f64 = double(float(ctx.f28.f64 * ctx.f30.f64));
	// lfs f13,23924(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23924);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82a24a98
	if (ctx.cr6.gt) goto loc_82A24A98;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f12,-23516(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23516);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82a24a98
	if (!ctx.cr6.lt) goto loc_82A24A98;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x82a24aa4
	goto loc_82A24AA4;
loc_82A24A98:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82a24aa4
	if (!ctx.cr6.gt) goto loc_82A24AA4;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82A24AA4:
	// addi r11,r1,148
	ctx.r11.s64 = ctx.r1.s64 + 148;
	// stfs f0,136(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// addi r11,r1,152
	ctx.r11.s64 = ctx.r1.s64 + 152;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lfs f0,-15356(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15356);
	ctx.f0.f64 = double(temp.f32);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r7,r1,168
	ctx.r7.s64 = ctx.r1.s64 + 168;
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lfs f13,-14268(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -14268);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lfs f29,24436(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f29.f64 = double(temp.f32);
	// addi r11,r1,172
	ctx.r11.s64 = ctx.r1.s64 + 172;
	// lfs f12,-1588(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -1588);
	ctx.f12.f64 = double(temp.f32);
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r23,r1,176
	ctx.r23.s64 = ctx.r1.s64 + 176;
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// li r22,0
	ctx.r22.s64 = 0;
	// stfs f13,196(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// stfs f12,200(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r30,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r30.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r30,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// stw r23,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r9,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// std r30,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r30.u64);
	// stw r22,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r22.u32);
	// bl 0x82a24578
	ctx.lr = 0x82A24B50;
	sub_82A24578(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bge 0x82a24bb4
	if (!ctx.cr0.lt) goto loc_82A24BB4;
	// addi r11,r1,148
	ctx.r11.s64 = ctx.r1.s64 + 148;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// addi r10,r1,152
	ctx.r10.s64 = ctx.r1.s64 + 152;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// addi r9,r1,168
	ctx.r9.s64 = ctx.r1.s64 + 168;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// addi r10,r1,172
	ctx.r10.s64 = ctx.r1.s64 + 172;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82a24578
	ctx.lr = 0x82A24BB0;
	sub_82A24578(ctx, base);
	// b 0x82a24cf8
	goto loc_82A24CF8;
loc_82A24BB4:
	// lfs f30,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f30.f64 = double(temp.f32);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r8,176(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lwz r7,172(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82a248b8
	ctx.lr = 0x82A24BD8;
	sub_82A248B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82a24c08
	if (!ctx.cr0.lt) goto loc_82A24C08;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lwz r8,176(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,172(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82a248b8
	ctx.lr = 0x82A24C04;
	sub_82A248B8(ctx, base);
	// b 0x82a24cf8
	goto loc_82A24CF8;
loc_82A24C08:
	// ld r11,424(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 424);
	// lfs f27,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f27.f64 = double(temp.f32);
	// lwz r10,260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f30,196(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f27,200(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// std r11,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r11.u64);
	// beq cr6,0x82a24c34
	if (ctx.cr6.eq) goto loc_82A24C34;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82a24c40
	goto loc_82A24C40;
loc_82A24C34:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_82A24C40:
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// li r5,48
	ctx.r5.s64 = 48;
	// bl 0x82fa77c0
	ctx.lr = 0x82A24C54;
	sub_82FA77C0(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r10,444(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 444);
	// lfs f0,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,452(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// addi r11,r11,23656
	ctx.r11.s64 = ctx.r11.s64 + 23656;
	// lfs f13,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// stw r29,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r29.u32);
	// stfs f0,108(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// stfs f31,112(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stfs f13,116(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stfs f28,264(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 264, temp.u32);
	// stfs f29,160(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// stfs f31,164(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// stfs f30,0(r10)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a24cf4
	if (ctx.cr6.eq) goto loc_82A24CF4;
	// lis r6,-31963
	ctx.r6.s64 = -2094727168;
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r6,31428
	ctx.r3.s64 = ctx.r6.s64 + 31428;
	// lwz r8,172(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// stw r10,31428(r6)
	PPC_STORE_U32(ctx.r6.u32 + 31428, ctx.r10.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stfs f31,16(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r26,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r26.u32);
	// stfs f30,24(r3)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stw r25,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r25.u32);
	// stfs f27,28(r3)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stw r24,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r24.u32);
	// stw r7,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r7.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A24CF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A24CF4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A24CF8:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x82fa8d70
	ctx.lr = 0x82A24D04;
	__restfpr_27(ctx, base);
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A24D08"))) PPC_WEAK_FUNC(sub_82A24D08);
PPC_FUNC_IMPL(__imp__sub_82A24D08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a24d24
	if (ctx.cr6.eq) goto loc_82A24D24;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lfs f1,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82A24D24:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A24D30"))) PPC_WEAK_FUNC(sub_82A24D30);
PPC_FUNC_IMPL(__imp__sub_82A24D30) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,9(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A24D38"))) PPC_WEAK_FUNC(sub_82A24D38);
PPC_FUNC_IMPL(__imp__sub_82A24D38) {
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
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-23128
	ctx.r10.s64 = ctx.r10.s64 + -23128;
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// li r7,60
	ctx.r7.s64 = 60;
	// lfs f0,5184(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stb r11,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r11.u8);
	// addi r3,r3,152
	ctx.r3.s64 = ctx.r3.s64 + 152;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stb r11,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r11.u8);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x82a22300
	ctx.lr = 0x82A24D94;
	sub_82A22300(ctx, base);
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

__attribute__((alias("__imp__sub_82A24DAC"))) PPC_WEAK_FUNC(sub_82A24DAC);
PPC_FUNC_IMPL(__imp__sub_82A24DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A24DB0"))) PPC_WEAK_FUNC(sub_82A24DB0);
PPC_FUNC_IMPL(__imp__sub_82A24DB0) {
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
	// lbz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82a24f1c
	if (!ctx.cr0.eq) goto loc_82A24F1C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lfs f0,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x82a09238
	ctx.lr = 0x82A24E00;
	sub_82A09238(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a24e70
	if (ctx.cr0.lt) goto loc_82A24E70;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x82a24e70
	if (!ctx.cr6.eq) goto loc_82A24E70;
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// li r6,120
	ctx.r6.s64 = 120;
	// addi r5,r31,32
	ctx.r5.s64 = ctx.r31.s64 + 32;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82a09238
	ctx.lr = 0x82A24E34;
	sub_82A09238(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a24e70
	if (ctx.cr0.lt) goto loc_82A24E70;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a24e70
	if (ctx.cr6.eq) goto loc_82A24E70;
	// li r10,12
	ctx.r10.s64 = 12;
	// divwu r9,r11,r10
	ctx.r9.u32 = ctx.r11.u32 / ctx.r10.u32;
	// mulli r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 * 12;
	// subf. r9,r9,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82a24e70
	if (!ctx.cr0.eq) goto loc_82A24E70;
	// li r9,1
	ctx.r9.s64 = 1;
	// divwu r11,r11,r10
	ctx.r11.u32 = ctx.r11.u32 / ctx.r10.u32;
	// stb r9,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r9.u8);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// b 0x82a24f1c
	goto loc_82A24F1C;
loc_82A24E70:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// cmplwi cr6,r10,50
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 50, ctx.xer);
	// lfs f0,-23456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23456);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// bne cr6,0x82a24ed8
	if (!ctx.cr6.eq) goto loc_82A24ED8;
	// li r10,6
	ctx.r10.s64 = 6;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
	// addi r11,r11,-23360
	ctx.r11.s64 = ctx.r11.s64 + -23360;
loc_82A24EA4:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82a24ea4
	if (ctx.cr6.lt) goto loc_82A24EA4;
	// b 0x82a24f1c
	goto loc_82A24F1C;
loc_82A24ED8:
	// li r10,7
	ctx.r10.s64 = 7;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
	// addi r11,r11,-23448
	ctx.r11.s64 = ctx.r11.s64 + -23448;
loc_82A24EEC:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82a24eec
	if (ctx.cr6.lt) goto loc_82A24EEC;
loc_82A24F1C:
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

__attribute__((alias("__imp__sub_82A24F34"))) PPC_WEAK_FUNC(sub_82A24F34);
PPC_FUNC_IMPL(__imp__sub_82A24F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A24F38"))) PPC_WEAK_FUNC(sub_82A24F38);
PPC_FUNC_IMPL(__imp__sub_82A24F38) {
	PPC_FUNC_PROLOGUE();
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// b 0x82a24db0
	sub_82A24DB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A24F40"))) PPC_WEAK_FUNC(sub_82A24F40);
PPC_FUNC_IMPL(__imp__sub_82A24F40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A24F48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a24f68
	if (!ctx.cr6.eq) goto loc_82A24F68;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16387
	ctx.r3.u64 = ctx.r3.u64 | 16387;
	// b 0x82a24fbc
	goto loc_82A24FBC;
loc_82A24F68:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r3,176
	ctx.r3.s64 = 176;
	// lwz r4,-24632(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24632);
	// bl 0x82691410
	ctx.lr = 0x82A24F78;
	sub_82691410(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a24f8c
	if (ctx.cr0.eq) goto loc_82A24F8C;
	// bl 0x82a24d38
	ctx.lr = 0x82A24F84;
	sub_82A24D38(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82a24f90
	goto loc_82A24F90;
loc_82A24F8C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82A24F90:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82a24fa4
	if (!ctx.cr6.eq) goto loc_82A24FA4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82a24fbc
	goto loc_82A24FBC;
loc_82A24FA4:
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// bl 0x82c0e990
	ctx.lr = 0x82A24FB4;
	sub_82C0E990(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
loc_82A24FBC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A24FC4"))) PPC_WEAK_FUNC(sub_82A24FC4);
PPC_FUNC_IMPL(__imp__sub_82A24FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A24FC8"))) PPC_WEAK_FUNC(sub_82A24FC8);
PPC_FUNC_IMPL(__imp__sub_82A24FC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82A24FD0;
	__savegprlr_24(ctx, base);
	// stfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f29.u64);
	// stfd f30,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// fmr f29,f1
	ctx.f29.f64 = ctx.f1.f64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82a25020
	if (ctx.cr6.eq) goto loc_82A25020;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82a25020
	if (ctx.cr6.eq) goto loc_82A25020;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82a25020
	if (ctx.cr6.eq) goto loc_82A25020;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82a2502c
	if (!ctx.cr6.eq) goto loc_82A2502C;
loc_82A25020:
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,87
	ctx.r29.u64 = ctx.r29.u64 | 87;
	// b 0x82a25210
	goto loc_82A25210;
loc_82A2502C:
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stb r29,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r29.u8);
	// li r25,1
	ctx.r25.s64 = 1;
	// addi r30,r11,23656
	ctx.r30.s64 = ctx.r11.s64 + 23656;
	// stb r29,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r29.u8);
	// mulli r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 * 48;
	// addi r11,r30,40
	ctx.r11.s64 = ctx.r30.s64 + 40;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x82a25064
	if (ctx.cr6.eq) goto loc_82A25064;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82a25064
	if (ctx.cr6.eq) goto loc_82A25064;
	// stwx r25,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r25.u32);
loc_82A25064:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a25078
	if (!ctx.cr6.eq) goto loc_82A25078;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a24db0
	ctx.lr = 0x82A25078;
	sub_82A24DB0(ctx, base);
loc_82A25078:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a25090
	if (!ctx.cr6.eq) goto loc_82A25090;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f0,-23728(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23728);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82a2509c
	goto loc_82A2509C;
loc_82A25090:
	// mulli r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 * 48;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
loc_82A2509C:
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f31,24436(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f31.f64 = double(temp.f32);
	// lfd f1,11528(r10)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r10.u32 + 11528);
	// fsubs f2,f0,f31
	ctx.f2.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// bl 0x82fa30a8
	ctx.lr = 0x82A250B4;
	sub_82FA30A8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r30,20
	ctx.r10.s64 = ctx.r30.s64 + 20;
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mulli r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 * 48;
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lfsx f0,r11,r10
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// li r9,3
	ctx.r9.s64 = 3;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// ble cr6,0x82a251b4
	if (!ctx.cr6.gt) goto loc_82A251B4;
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
loc_82A250E0:
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f30,f13
	ctx.cr6.compare(ctx.f30.f64, ctx.f13.f64);
	// blt cr6,0x82a25104
	if (ctx.cr6.lt) goto loc_82A25104;
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82a250e0
	if (ctx.cr6.lt) goto loc_82A250E0;
	// b 0x82a251b4
	goto loc_82A251B4;
loc_82A25104:
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// mulli r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 * 12;
	// mulli r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 * 12;
	// lfsx f13,r8,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r26)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lfs f13,40(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r28)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82a25164
	if (ctx.cr6.eq) goto loc_82A25164;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82a25164
	if (!ctx.cr6.gt) goto loc_82A25164;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,5184(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82a25164
	if (!ctx.cr6.gt) goto loc_82A25164;
	// fdivs f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// stfs f13,0(r26)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 * 48;
	// addi r8,r30,40
	ctx.r8.s64 = ctx.r30.s64 + 40;
	// stwx r9,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
loc_82A25164:
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// lfs f13,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x82a251b4
	if (ctx.cr6.lt) goto loc_82A251B4;
	// stfs f12,0(r27)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a251a0
	if (!ctx.cr6.eq) goto loc_82A251A0;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r8,r30,40
	ctx.r8.s64 = ctx.r30.s64 + 40;
	// stb r25,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r25.u8);
	// mulli r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 * 48;
	// stwx r9,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
loc_82A251A0:
	// lfs f13,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f13,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f29,f13,f0
	ctx.f29.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
loc_82A251B4:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82a2520c
	if (!ctx.cr6.eq) goto loc_82A2520C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f31,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// addi r10,r30,40
	ctx.r10.s64 = ctx.r30.s64 + 40;
	// lfs f0,23392(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23392);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// lfs f13,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// lfs f0,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 * 48;
	// stb r25,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r25.u8);
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lfs f0,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fdivs f29,f0,f13
	ctx.f29.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
loc_82A2520C:
	// stfs f29,0(r24)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r24.u32 + 0, temp.u32);
loc_82A25210:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A25228"))) PPC_WEAK_FUNC(sub_82A25228);
PPC_FUNC_IMPL(__imp__sub_82A25228) {
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
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,29064
	ctx.r11.s64 = ctx.r11.s64 + 29064;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x82a2525c
	if (ctx.cr0.eq) goto loc_82A2525C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r4,-24632(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24632);
	// bl 0x82691460
	ctx.lr = 0x82A2525C;
	sub_82691460(ctx, base);
loc_82A2525C:
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

__attribute__((alias("__imp__sub_82A25274"))) PPC_WEAK_FUNC(sub_82A25274);
PPC_FUNC_IMPL(__imp__sub_82A25274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A25278"))) PPC_WEAK_FUNC(sub_82A25278);
PPC_FUNC_IMPL(__imp__sub_82A25278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A25280;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lfs f31,5184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f31.f64 = double(temp.f32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x82a24fc8
	ctx.lr = 0x82A252BC;
	sub_82A24FC8(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x82a25324
	if (ctx.cr0.lt) goto loc_82A25324;
	// addi r31,r30,152
	ctx.r31.s64 = ctx.r30.s64 + 152;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a22350
	ctx.lr = 0x82A252D4;
	sub_82A22350(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a22360
	ctx.lr = 0x82A252E0;
	sub_82A22360(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a22340
	ctx.lr = 0x82A252EC;
	sub_82A22340(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a22330
	ctx.lr = 0x82A252F8;
	sub_82A22330(ctx, base);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a25314
	if (ctx.cr6.eq) goto loc_82A25314;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lfs f1,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82a25318
	goto loc_82A25318;
loc_82A25314:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_82A25318:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a22368
	ctx.lr = 0x82A25320;
	sub_82A22368(ctx, base);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
loc_82A25324:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A25334"))) PPC_WEAK_FUNC(sub_82A25334);
PPC_FUNC_IMPL(__imp__sub_82A25334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A25338"))) PPC_WEAK_FUNC(sub_82A25338);
PPC_FUNC_IMPL(__imp__sub_82A25338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r4,-24632(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24632);
	// b 0x82691410
	sub_82691410(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A25344"))) PPC_WEAK_FUNC(sub_82A25344);
PPC_FUNC_IMPL(__imp__sub_82A25344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A25348"))) PPC_WEAK_FUNC(sub_82A25348);
PPC_FUNC_IMPL(__imp__sub_82A25348) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2535C"))) PPC_WEAK_FUNC(sub_82A2535C);
PPC_FUNC_IMPL(__imp__sub_82A2535C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A25360"))) PPC_WEAK_FUNC(sub_82A25360);
PPC_FUNC_IMPL(__imp__sub_82A25360) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a25378
	if (ctx.cr6.eq) goto loc_82A25378;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82A25378:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A25384"))) PPC_WEAK_FUNC(sub_82A25384);
PPC_FUNC_IMPL(__imp__sub_82A25384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A25388"))) PPC_WEAK_FUNC(sub_82A25388);
PPC_FUNC_IMPL(__imp__sub_82A25388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,256
	ctx.r10.s64 = 256;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r3,2044
	ctx.r11.s64 = ctx.r3.s64 + 2044;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r8,r10,-11552
	ctx.r8.s64 = ctx.r10.s64 + -11552;
loc_82A253A0:
	// add r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// mulli r7,r7,77
	ctx.r7.s64 = ctx.r7.s64 * 77;
	// stw r7,-2044(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2044, ctx.r7.u32);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// mulli r7,r7,150
	ctx.r7.s64 = ctx.r7.s64 * 150;
	// stw r7,-1020(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1020, ctx.r7.u32);
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// mulli r10,r10,29
	ctx.r10.s64 = ctx.r10.s64 * 29;
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a253a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A253A0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A253D8"))) PPC_WEAK_FUNC(sub_82A253D8);
PPC_FUNC_IMPL(__imp__sub_82A253D8) {
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
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r9,-31963
	ctx.r9.s64 = -2094727168;
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// lwz r11,-30976(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30976);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// addi r3,r9,31488
	ctx.r3.s64 = ctx.r9.s64 + 31488;
	// stw r5,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r5.u32);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r5,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r5.u32);
	// bne 0x82a25420
	if (!ctx.cr0.eq) goto loc_82A25420;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-30976(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30976, ctx.r11.u32);
	// bl 0x82a25388
	ctx.lr = 0x82A25420;
	sub_82A25388(ctx, base);
loc_82A25420:
	// stw r3,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r3.u32);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// stb r5,24(r6)
	PPC_STORE_U8(ctx.r6.u32 + 24, ctx.r5.u8);
	// stw r5,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r5.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A25440"))) PPC_WEAK_FUNC(sub_82A25440);
PPC_FUNC_IMPL(__imp__sub_82A25440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82A25448;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82a25474
	if (!ctx.cr6.eq) goto loc_82A25474;
loc_82A25464:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
loc_82A25474:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a25464
	if (ctx.cr6.eq) goto loc_82A25464;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a25498
	if (!ctx.cr6.eq) goto loc_82A25498;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
loc_82A25498:
	// lwz r25,4(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r24,0(r8)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r23,12(r8)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// subf r29,r25,r23
	ctx.r29.s64 = ctx.r23.s64 - ctx.r25.s64;
	// subf r28,r24,r11
	ctx.r28.s64 = ctx.r11.s64 - ctx.r24.s64;
	// mullw r5,r29,r28
	ctx.r5.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r28.s32);
	// bl 0x82fa7cf0
	ctx.lr = 0x82A254C0;
	sub_82FA7CF0(ctx, base);
	// mullw r10,r25,r26
	ctx.r10.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r26.s32);
	// rlwinm r11,r24,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r25,r23
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r23.u32, ctx.xer);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r6,r11,r27
	ctx.r6.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bge cr6,0x82a25660
	if (!ctx.cr6.lt) goto loc_82A25660;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r5,r11,-4
	ctx.r5.s64 = ctx.r11.s64 + -4;
loc_82A254E4:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// addi r4,r5,4
	ctx.r4.s64 = ctx.r5.s64 + 4;
	// li r10,128
	ctx.r10.s64 = 128;
	// dcbt r10,r6
	// clrlwi r9,r6,29
	ctx.r9.u64 = ctx.r6.u32 & 0x7;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a25548
	if (ctx.cr6.eq) goto loc_82A25548;
	// lwz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r11,r6,4
	ctx.r11.s64 = ctx.r6.s64 + 4;
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm r10,r8,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// rlwinm r9,r8,16,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFF;
	// addi r3,r10,512
	ctx.r3.s64 = ctx.r10.s64 + 512;
	// addi r10,r9,256
	ctx.r10.s64 = ctx.r9.s64 + 256;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,10,22,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 10) & 0x3FC;
	// lwzx r9,r9,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lwzx r10,r3,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// lwzx r8,r8,r7
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r3,r7,24,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFF;
	// stb r3,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r3.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82A25548:
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82a25604
	if (!ctx.cr6.lt) goto loc_82A25604;
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r11.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82A25564:
	// ld r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r28,20(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// rldicl r10,r3,56,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u64, 56) & 0xFFFFFFFFFFFFFF;
	// rldicl r8,r3,48,16
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u64, 48) & 0xFFFFFFFFFFFF;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// rldicl r7,r3,24,40
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u64, 24) & 0xFFFFFF;
	// rldicl r10,r3,16,48
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u64, 16) & 0xFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// addi r8,r8,256
	ctx.r8.s64 = ctx.r8.s64 + 256;
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,256
	ctx.r10.s64 = ctx.r10.s64 + 256;
	// addi r7,r7,512
	ctx.r7.s64 = ctx.r7.s64 + 512;
	// rldicl r27,r3,40,24
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u64, 40) & 0xFFFFFFFFFF;
	// rlwinm r25,r10,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r28
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r28.u32);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r28
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r28.u32);
	// rldicl r3,r3,8,56
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 8) & 0xFF;
	// rlwinm r27,r27,2,22,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0x3FC;
	// rlwinm r3,r3,2,22,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3FC;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwzx r9,r25,r28
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r28.u32);
	// lwzx r10,r7,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r28.u32);
	// lwzx r7,r27,r28
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwzx r9,r3,r28
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r28.u32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r3,r8,24,8,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r10,r7,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFF;
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
	// stbu r9,1(r31)
	ea = 1 + ctx.r31.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r31.u32 = ea;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bdnz 0x82a25564
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A25564;
loc_82A25604:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82a25650
	if (!ctx.cr6.lt) goto loc_82A25650;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,20(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm r10,r9,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// rlwinm r11,r9,16,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFF;
	// addi r7,r10,512
	ctx.r7.s64 = ctx.r10.s64 + 512;
	// addi r4,r11,256
	ctx.r4.s64 = ctx.r11.s64 + 256;
	// rlwinm r3,r7,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,10,22,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 10) & 0x3FC;
	// lwzx r11,r3,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// lwzx r9,r10,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwzx r10,r7,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r3,r4,24,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFF;
	// stb r3,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r3.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82A25650:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r6,r6,r26
	ctx.r6.u64 = ctx.r6.u64 + ctx.r26.u64;
	// add r5,r5,r26
	ctx.r5.u64 = ctx.r5.u64 + ctx.r26.u64;
	// bne 0x82a254e4
	if (!ctx.cr0.eq) goto loc_82A254E4;
loc_82A25660:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A25674"))) PPC_WEAK_FUNC(sub_82A25674);
PPC_FUNC_IMPL(__imp__sub_82A25674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A25678"))) PPC_WEAK_FUNC(sub_82A25678);
PPC_FUNC_IMPL(__imp__sub_82A25678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82A25680;
	__savegprlr_25(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82a25698
	if (!ctx.cr6.eq) goto loc_82A25698;
loc_82A2568C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_82A25698:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a2568c
	if (ctx.cr6.eq) goto loc_82A2568C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a256b8
	if (!ctx.cr6.eq) goto loc_82A256B8;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_82A256B8:
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82a25744
	if (ctx.cr6.eq) goto loc_82A25744;
	// rlwinm r27,r5,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r28,r7,r8
	ctx.r28.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// addi r5,r9,-1
	ctx.r5.s64 = ctx.r9.s64 + -1;
loc_82A256D4:
	// add r30,r28,r30
	ctx.r30.u64 = ctx.r28.u64 + ctx.r30.u64;
	// add r29,r29,r8
	ctx.r29.u64 = ctx.r29.u64 + ctx.r8.u64;
	// add r4,r27,r30
	ctx.r4.u64 = ctx.r27.u64 + ctx.r30.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82a2573c
	if (!ctx.cr6.lt) goto loc_82A2573C;
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
loc_82A256F0:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r26,20(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r10,r7,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFF;
	// rlwinm r9,r7,16,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// addi r9,r9,256
	ctx.r9.s64 = ctx.r9.s64 + 256;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r25,r7,10,22,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 10) & 0x3FC;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// lwzx r10,r10,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// lwzx r7,r9,r26
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r26.u32);
	// lwzx r9,r25,r26
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r26.u32);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r7,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFF;
	// stbu r10,1(r5)
	ea = 1 + ctx.r5.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r5.u32 = ea;
	// blt cr6,0x82a256f0
	if (ctx.cr6.lt) goto loc_82A256F0;
loc_82A2573C:
	// cmplw cr6,r29,r6
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82a256d4
	if (ctx.cr6.lt) goto loc_82A256D4;
loc_82A25744:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A25754"))) PPC_WEAK_FUNC(sub_82A25754);
PPC_FUNC_IMPL(__imp__sub_82A25754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A25758"))) PPC_WEAK_FUNC(sub_82A25758);
PPC_FUNC_IMPL(__imp__sub_82A25758) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82a25774
	if (ctx.cr6.eq) goto loc_82A25774;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82A25774:
	// lis r9,-31975
	ctx.r9.s64 = -2095513600;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r9,-11552
	ctx.r9.s64 = ctx.r9.s64 + -11552;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r10,25(r11)
	PPC_STORE_U8(ctx.r11.u32 + 25, ctx.r10.u8);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A257A4"))) PPC_WEAK_FUNC(sub_82A257A4);
PPC_FUNC_IMPL(__imp__sub_82A257A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A257A8"))) PPC_WEAK_FUNC(sub_82A257A8);
PPC_FUNC_IMPL(__imp__sub_82A257A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82a27d90
	sub_82A27D90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A257B0"))) PPC_WEAK_FUNC(sub_82A257B0);
PPC_FUNC_IMPL(__imp__sub_82A257B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82a27da8
	sub_82A27DA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A257B8"))) PPC_WEAK_FUNC(sub_82A257B8);
PPC_FUNC_IMPL(__imp__sub_82A257B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82A257C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a2585c
	if (ctx.cr6.eq) goto loc_82A2585C;
	// bl 0x82a27d90
	ctx.lr = 0x82A257E8;
	sub_82A27D90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82a25864
	if (!ctx.cr0.eq) goto loc_82A25864;
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f13,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f11,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,-23096(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23096);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bgt cr6,0x82a25850
	if (ctx.cr6.gt) goto loc_82A25850;
	// lfs f13,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82a25850
	if (ctx.cr6.gt) goto loc_82A25850;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a27e40
	ctx.lr = 0x82A2584C;
	sub_82A27E40(ctx, base);
	// b 0x82a25864
	goto loc_82A25864;
loc_82A25850:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_82A2585C:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_82A25864:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2586C"))) PPC_WEAK_FUNC(sub_82A2586C);
PPC_FUNC_IMPL(__imp__sub_82A2586C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A25870"))) PPC_WEAK_FUNC(sub_82A25870);
PPC_FUNC_IMPL(__imp__sub_82A25870) {
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
	// bl 0x82a27fb8
	ctx.lr = 0x82A25890;
	sub_82A27FB8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a258c0
	if (ctx.cr0.eq) goto loc_82A258C0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a258c0
	if (ctx.cr6.eq) goto loc_82A258C0;
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
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a81d88
	ctx.lr = 0x82A258C0;
	sub_82A81D88(ctx, base);
loc_82A258C0:
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

__attribute__((alias("__imp__sub_82A258DC"))) PPC_WEAK_FUNC(sub_82A258DC);
PPC_FUNC_IMPL(__imp__sub_82A258DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A258E0"))) PPC_WEAK_FUNC(sub_82A258E0);
PPC_FUNC_IMPL(__imp__sub_82A258E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A258E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// rlwinm. r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a25960
	if (ctx.cr0.eq) goto loc_82A25960;
	// lwz r10,-4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// addi r29,r3,-4
	ctx.r29.s64 = ctx.r3.s64 + -4;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addic. r30,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r30.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// blt 0x82a25928
	if (ctx.cr0.lt) goto loc_82A25928;
loc_82A25914:
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a27fb8
	ctx.lr = 0x82A25920;
	sub_82A27FB8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82a25914
	if (!ctx.cr0.lt) goto loc_82A25914;
loc_82A25928:
	// clrlwi. r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a25958
	if (ctx.cr0.eq) goto loc_82A25958;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82a25958
	if (ctx.cr6.eq) goto loc_82A25958;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// ori r10,r10,63156
	ctx.r10.u64 = ctx.r10.u64 | 63156;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a81d88
	ctx.lr = 0x82A25958;
	sub_82A81D88(ctx, base);
loc_82A25958:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82a2599c
	goto loc_82A2599C;
loc_82A25960:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a27fb8
	ctx.lr = 0x82A25968;
	sub_82A27FB8(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a25998
	if (ctx.cr0.eq) goto loc_82A25998;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a25998
	if (ctx.cr6.eq) goto loc_82A25998;
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
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a81d88
	ctx.lr = 0x82A25998;
	sub_82A81D88(ctx, base);
loc_82A25998:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A2599C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A259A4"))) PPC_WEAK_FUNC(sub_82A259A4);
PPC_FUNC_IMPL(__imp__sub_82A259A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A259A8"))) PPC_WEAK_FUNC(sub_82A259A8);
PPC_FUNC_IMPL(__imp__sub_82A259A8) {
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
	// lis r10,8
	ctx.r10.s64 = 524288;
	// li r5,12
	ctx.r5.s64 = 12;
	// ori r10,r10,63156
	ctx.r10.u64 = ctx.r10.u64 | 63156;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a81490
	ctx.lr = 0x82A259D4;
	sub_82A81490(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a259f8
	if (ctx.cr0.eq) goto loc_82A259F8;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-23124
	ctx.r10.s64 = ctx.r10.s64 + -23124;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// b 0x82a259fc
	goto loc_82A259FC;
loc_82A259F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A259FC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A25A0C"))) PPC_WEAK_FUNC(sub_82A25A0C);
PPC_FUNC_IMPL(__imp__sub_82A25A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A25A10"))) PPC_WEAK_FUNC(sub_82A25A10);
PPC_FUNC_IMPL(__imp__sub_82A25A10) {
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
	// lis r10,8
	ctx.r10.s64 = 524288;
	// li r5,12
	ctx.r5.s64 = 12;
	// ori r10,r10,63156
	ctx.r10.u64 = ctx.r10.u64 | 63156;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a81490
	ctx.lr = 0x82A25A3C;
	sub_82A81490(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a25a60
	if (ctx.cr0.eq) goto loc_82A25A60;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-23108
	ctx.r10.s64 = ctx.r10.s64 + -23108;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// b 0x82a25a64
	goto loc_82A25A64;
loc_82A25A60:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A25A64:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A25A74"))) PPC_WEAK_FUNC(sub_82A25A74);
PPC_FUNC_IMPL(__imp__sub_82A25A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A25A78"))) PPC_WEAK_FUNC(sub_82A25A78);
PPC_FUNC_IMPL(__imp__sub_82A25A78) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a25aa8
	if (ctx.cr6.eq) goto loc_82A25AA8;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82a258e0
	ctx.lr = 0x82A25AA0;
	sub_82A258E0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82A25AA8:
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// li r5,4
	ctx.r5.s64 = 4;
	// ori r10,r10,63156
	ctx.r10.u64 = ctx.r10.u64 | 63156;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a81490
	ctx.lr = 0x82A25AC8;
	sub_82A81490(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a25ad8
	if (ctx.cr0.eq) goto loc_82A25AD8;
	// bl 0x8295be18
	ctx.lr = 0x82A25AD4;
	sub_8295BE18(ctx, base);
	// b 0x82a25adc
	goto loc_82A25ADC;
loc_82A25AD8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A25ADC:
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82A25B08"))) PPC_WEAK_FUNC(sub_82A25B08);
PPC_FUNC_IMPL(__imp__sub_82A25B08) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a25b3c
	if (ctx.cr6.eq) goto loc_82A25B3C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82a25870
	ctx.lr = 0x82A25B38;
	sub_82A25870(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82A25B3C:
	// stb r30,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r30.u8);
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

__attribute__((alias("__imp__sub_82A25B58"))) PPC_WEAK_FUNC(sub_82A25B58);
PPC_FUNC_IMPL(__imp__sub_82A25B58) {
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
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82a25b80
	if (ctx.cr0.eq) goto loc_82A25B80;
	// bl 0x82a25b08
	ctx.lr = 0x82A25B80;
	sub_82A25B08(ctx, base);
loc_82A25B80:
	// addi r31,r30,4
	ctx.r31.s64 = ctx.r30.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a25a78
	ctx.lr = 0x82A25B8C;
	sub_82A25A78(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82a25bac
	if (!ctx.cr0.eq) goto loc_82A25BAC;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82a27dc0
	ctx.lr = 0x82A25B9C;
	sub_82A27DC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82a25bac
	if (!ctx.cr0.eq) goto loc_82A25BAC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r11.u8);
loc_82A25BAC:
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

__attribute__((alias("__imp__sub_82A25BC4"))) PPC_WEAK_FUNC(sub_82A25BC4);
PPC_FUNC_IMPL(__imp__sub_82A25BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A25BC8"))) PPC_WEAK_FUNC(sub_82A25BC8);
PPC_FUNC_IMPL(__imp__sub_82A25BC8) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-23124
	ctx.r11.s64 = ctx.r11.s64 + -23124;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82a25b08
	ctx.lr = 0x82A25BF4;
	sub_82A25B08(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a25c1c
	if (ctx.cr0.eq) goto loc_82A25C1C;
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
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a81d88
	ctx.lr = 0x82A25C1C;
	sub_82A81D88(ctx, base);
loc_82A25C1C:
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

__attribute__((alias("__imp__sub_82A25C38"))) PPC_WEAK_FUNC(sub_82A25C38);
PPC_FUNC_IMPL(__imp__sub_82A25C38) {
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
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82a25c60
	if (ctx.cr0.eq) goto loc_82A25C60;
	// bl 0x82a25b08
	ctx.lr = 0x82A25C60;
	sub_82A25B08(ctx, base);
loc_82A25C60:
	// addi r31,r30,4
	ctx.r31.s64 = ctx.r30.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a25a78
	ctx.lr = 0x82A25C6C;
	sub_82A25A78(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82a25c8c
	if (!ctx.cr0.eq) goto loc_82A25C8C;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82a27fc0
	ctx.lr = 0x82A25C7C;
	sub_82A27FC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82a25c8c
	if (!ctx.cr0.eq) goto loc_82A25C8C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r11.u8);
loc_82A25C8C:
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

__attribute__((alias("__imp__sub_82A25CA4"))) PPC_WEAK_FUNC(sub_82A25CA4);
PPC_FUNC_IMPL(__imp__sub_82A25CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A25CA8"))) PPC_WEAK_FUNC(sub_82A25CA8);
PPC_FUNC_IMPL(__imp__sub_82A25CA8) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-23108
	ctx.r11.s64 = ctx.r11.s64 + -23108;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82a25b08
	ctx.lr = 0x82A25CD4;
	sub_82A25B08(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a25cfc
	if (ctx.cr0.eq) goto loc_82A25CFC;
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
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a81d88
	ctx.lr = 0x82A25CFC;
	sub_82A81D88(ctx, base);
loc_82A25CFC:
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

__attribute__((alias("__imp__sub_82A25D18"))) PPC_WEAK_FUNC(sub_82A25D18);
PPC_FUNC_IMPL(__imp__sub_82A25D18) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82a25bc8
	sub_82A25BC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A25D28"))) PPC_WEAK_FUNC(sub_82A25D28);
PPC_FUNC_IMPL(__imp__sub_82A25D28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A25D2C"))) PPC_WEAK_FUNC(sub_82A25D2C);
PPC_FUNC_IMPL(__imp__sub_82A25D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A25D30"))) PPC_WEAK_FUNC(sub_82A25D30);
PPC_FUNC_IMPL(__imp__sub_82A25D30) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82a25ca8
	sub_82A25CA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A25D40"))) PPC_WEAK_FUNC(sub_82A25D40);
PPC_FUNC_IMPL(__imp__sub_82A25D40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A25D44"))) PPC_WEAK_FUNC(sub_82A25D44);
PPC_FUNC_IMPL(__imp__sub_82A25D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A25D48"))) PPC_WEAK_FUNC(sub_82A25D48);
PPC_FUNC_IMPL(__imp__sub_82A25D48) {
	PPC_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82a282a0
	sub_82A282A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A25D50"))) PPC_WEAK_FUNC(sub_82A25D50);
PPC_FUNC_IMPL(__imp__sub_82A25D50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82A25D58;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r30,r3,12
	ctx.r30.s64 = ctx.r3.s64 + 12;
loc_82A25D74:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a25d94
	if (!ctx.cr6.eq) goto loc_82A25D94;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a25dc0
	if (ctx.cr6.eq) goto loc_82A25DC0;
loc_82A25D94:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a25dc0
	if (ctx.cr6.eq) goto loc_82A25DC0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A25DB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82A25DC0:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 2, ctx.xer);
	// blt cr6,0x82a25d74
	if (ctx.cr6.lt) goto loc_82A25D74;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A25DF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A25DF8"))) PPC_WEAK_FUNC(sub_82A25DF8);
PPC_FUNC_IMPL(__imp__sub_82A25DF8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82A25E00;
	__savegprlr_14(ctx, base);
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// beq cr6,0x82a26040
	if (ctx.cr6.eq) goto loc_82A26040;
	// clrlwi. r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a26024
	if (ctx.cr0.eq) goto loc_82A26024;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r10,r10,-23056
	ctx.r10.s64 = ctx.r10.s64 + -23056;
	// addi r11,r3,208
	ctx.r11.s64 = ctx.r3.s64 + 208;
	// stw r8,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r8.u32);
	// li r23,-64
	ctx.r23.s64 = -64;
	// stw r10,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r10.u32);
	// li r7,-48
	ctx.r7.s64 = -48;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r6,-32
	ctx.r6.s64 = -32;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r31,-16
	ctx.r31.s64 = -16;
	// li r30,48
	ctx.r30.s64 = 48;
	// li r29,64
	ctx.r29.s64 = 64;
	// li r28,128
	ctx.r28.s64 = 128;
	// li r27,80
	ctx.r27.s64 = 80;
	// li r26,144
	ctx.r26.s64 = 144;
	// li r25,96
	ctx.r25.s64 = 96;
	// li r24,160
	ctx.r24.s64 = 160;
loc_82A25E64:
	// lwz r10,-160(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -160);
	// addi r22,r11,-160
	ctx.r22.s64 = ctx.r11.s64 + -160;
	// stw r22,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r22.u32);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82a26014
	if (!ctx.cr6.eq) goto loc_82A26014;
	// lwz r10,208(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// lvx128 v63,r11,r7
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v62,r11,r9
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// lwz r7,268(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// lvx128 v56,r11,r29
	simd::store_shuffled(ctx.v56, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r29.u32) & ~0xF), VectorMaskL));
	// lwz r8,216(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	// stvx128 v63,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r9,252(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// lwz r29,-172(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + -172);
	// lvx128 v61,r11,r23
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r23.u32) & ~0xF), VectorMaskL));
	// stw r10,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r10.u32);
	// lvx128 v60,r11,r6
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// lwz r10,212(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// lvx128 v59,r11,r5
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// lwz r3,228(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// lvx128 v58,r11,r31
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r31.u32) & ~0xF), VectorMaskL));
	// lwz r22,232(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// lvx128 v57,r11,r30
	simd::store_shuffled(ctx.v57, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r30.u32) & ~0xF), VectorMaskL));
	// stw r7,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r7.u32);
	// lvx128 v55,r11,r28
	simd::store_shuffled(ctx.v55, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r28.u32) & ~0xF), VectorMaskL));
	// lvx128 v54,r11,r27
	simd::store_shuffled(ctx.v54, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r27.u32) & ~0xF), VectorMaskL));
	// li r7,-48
	ctx.r7.s64 = -48;
	// stw r10,228(r11)
	PPC_STORE_U32(ctx.r11.u32 + 228, ctx.r10.u32);
	// lvx128 v53,r11,r26
	simd::store_shuffled(ctx.v53, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r26.u32) & ~0xF), VectorMaskL));
	// lvx128 v52,r11,r25
	simd::store_shuffled(ctx.v52, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r25.u32) & ~0xF), VectorMaskL));
	// stw r8,232(r11)
	PPC_STORE_U32(ctx.r11.u32 + 232, ctx.r8.u32);
	// lvx128 v51,r11,r24
	simd::store_shuffled(ctx.v51, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r24.u32) & ~0xF), VectorMaskL));
	// lwz r4,224(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// lvx128 v63,r0,r29
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r29.u32) & ~0xF), VectorMaskL));
	// lwz r21,236(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// lwz r20,256(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// li r5,32
	ctx.r5.s64 = 32;
	// lwz r19,220(r11)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// li r30,48
	ctx.r30.s64 = 48;
	// lwz r18,260(r11)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// li r28,128
	ctx.r28.s64 = 128;
	// lwz r17,240(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// li r26,144
	ctx.r26.s64 = 144;
	// lwz r16,244(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	// li r23,-64
	ctx.r23.s64 = -64;
	// lwz r15,264(r11)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// li r6,-32
	ctx.r6.s64 = -32;
	// lwz r14,248(r11)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	// li r31,-16
	ctx.r31.s64 = -16;
	// li r29,64
	ctx.r29.s64 = 64;
	// lvx128 v50,r0,r11
	simd::store_shuffled(ctx.v50, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// li r27,80
	ctx.r27.s64 = 80;
	// stvx128 v61,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r25,96
	ctx.r25.s64 = 96;
	// stvx128 v62,r11,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r10,-168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// li r24,160
	ctx.r24.s64 = 160;
	// stw r9,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r9.u32);
	// li r8,112
	ctx.r8.s64 = 112;
	// li r9,176
	ctx.r9.s64 = 176;
	// stvx128 v60,r11,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v58,r11,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r19,236(r11)
	PPC_STORE_U32(ctx.r11.u32 + 236, ctx.r19.u32);
	// stvx128 v56,r11,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r17,256(r11)
	PPC_STORE_U32(ctx.r11.u32 + 256, ctx.r17.u32);
	// stw r10,224(r11)
	PPC_STORE_U32(ctx.r11.u32 + 224, ctx.r10.u32);
	// stvx128 v54,r11,r26
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v62,r11,r8
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// stw r4,208(r11)
	PPC_STORE_U32(ctx.r11.u32 + 208, ctx.r4.u32);
	// lvx128 v61,r11,r9
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// stw r3,212(r11)
	PPC_STORE_U32(ctx.r11.u32 + 212, ctx.r3.u32);
	// stvx128 v50,r11,r23
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r23.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r22,216(r11)
	PPC_STORE_U32(ctx.r11.u32 + 216, ctx.r22.u32);
	// stvx128 v59,r11,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r16,260(r11)
	PPC_STORE_U32(ctx.r11.u32 + 260, ctx.r16.u32);
	// stvx128 v57,r11,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r21,220(r11)
	PPC_STORE_U32(ctx.r11.u32 + 220, ctx.r21.u32);
	// stvx128 v55,r11,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r20,240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 240, ctx.r20.u32);
	// stvx128 v53,r11,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r18,244(r11)
	PPC_STORE_U32(ctx.r11.u32 + 244, ctx.r18.u32);
	// stvx128 v51,r11,r25
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r25.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r14,264(r11)
	PPC_STORE_U32(ctx.r11.u32 + 264, ctx.r14.u32);
	// stvx128 v52,r11,r24
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r10,20
	ctx.r10.s64 = 20;
	// stw r15,248(r11)
	PPC_STORE_U32(ctx.r11.u32 + 248, ctx.r15.u32);
	// lwz r4,-168(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// stvx128 v61,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r11,-128
	ctx.r8.s64 = ctx.r11.s64 + -128;
	// stvx128 v62,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r4,268(r11)
	PPC_STORE_U32(ctx.r11.u32 + 268, ctx.r4.u32);
	// lwz r4,-164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -164);
	// stw r4,252(r11)
	PPC_STORE_U32(ctx.r11.u32 + 252, ctx.r4.u32);
loc_82A25FDC:
	// lvx128 v62,r0,r8
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v62,v62,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v62.f32, _mm_mul_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v63.f32)));
	// stvx128 v62,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// bdnz 0x82a25fdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A25FDC;
	// lwz r10,-160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// li r9,16
	ctx.r9.s64 = 16;
	// lwz r8,-176(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lwz r4,28(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// lwz r3,20(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lvx128 v62,r0,r10
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v63,v62,v63
	_mm_store_ps(ctx.v63.f32, _mm_mul_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v63.f32)));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82A26014:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r11,r11,448
	ctx.r11.s64 = ctx.r11.s64 + 448;
	// stw r8,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r8.u32);
	// bne 0x82a25e64
	if (!ctx.cr0.eq) goto loc_82A25E64;
loc_82A26024:
	// rlwinm. r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a26040
	if (ctx.cr0.eq) goto loc_82A26040;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82a26040
	if (!ctx.cr0.eq) goto loc_82A26040;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
loc_82A26040:
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A26044"))) PPC_WEAK_FUNC(sub_82A26044);
PPC_FUNC_IMPL(__imp__sub_82A26044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A26048"))) PPC_WEAK_FUNC(sub_82A26048);
PPC_FUNC_IMPL(__imp__sub_82A26048) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A26050;
	__savegprlr_28(ctx, base);
	// li r12,-64
	ctx.r12.s64 = -64;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,2736
	ctx.r5.s64 = 2736;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a75220
	ctx.lr = 0x82A26078;
	sub_82A75220(ctx, base);
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// addi r9,r11,-30944
	ctx.r9.s64 = ctx.r11.s64 + -30944;
	// lwz r11,-30928(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30928);
	// clrlwi. r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82a260ac
	if (!ctx.cr0.eq) goto loc_82A260AC;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r8,r8,-29680
	ctx.r8.s64 = ctx.r8.s64 + -29680;
	// stw r11,-30928(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30928, ctx.r11.u32);
	// lvx128 v61,r0,r8
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// stvx128 v61,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82a260b0
	goto loc_82A260B0;
loc_82A260AC:
	// lvx128 v61,r0,r9
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
loc_82A260B0:
	// li r28,32
	ctx.r28.s64 = 32;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lvx128 v63,r31,r28
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r28.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v62,v63,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v62.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v63.f32), 0xEF));
	// lfs f0,-25140(r10)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25140);
	ctx.f0.f64 = double(temp.f32);
	// stvx128 v62,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82a260e0
	if (!ctx.cr6.lt) goto loc_82A260E0;
	// vor128 v63,v61,v61
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_load_si128((__m128i*)ctx.v61.u8));
loc_82A260E0:
	// lis r9,-31975
	ctx.r9.s64 = -2095513600;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82a26154
	if (!ctx.cr6.eq) goto loc_82A26154;
	// lwz r11,-11296(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -11296);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a26154
	if (!ctx.cr6.eq) goto loc_82A26154;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// vspltisw128 v60,1
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_set1_epi32(int(0x1)));
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// vspltisw128 v62,0
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_set1_epi32(int(0x0)));
	// addi r11,r11,-30960
	ctx.r11.s64 = ctx.r11.s64 + -30960;
	// addi r10,r10,11976
	ctx.r10.s64 = ctx.r10.s64 + 11976;
	// vcsxwfp128 v10,v60,1
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v60.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3F000000)))));
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vsubfp128 v13,v63,v0
	_mm_store_ps(ctx.v13.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v0.f32)));
	// lvlx128 v63,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v12,v63,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// vmaddfp v0,v13,v12,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v0.f32)));
	// vor128 v60,v0,v0
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vmsum3fp128 v63,v60,v60
	_mm_store_ps(ctx.v63.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v60.f32), 0xEF));
	// vrsqrtefp128 v0,v63
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v63.f32))));
	// vor128 v11,v63,v63
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// vmulfp128 v13,v63,v10
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v10.f32)));
	// vcmpeqfp128 v63,v63,v62
	_mm_store_ps(ctx.v63.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v62.f32)));
	// vmulfp128 v12,v0,v0
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v10,v13,v12,v10
	_mm_store_ps(ctx.v10.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v10.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v10,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v0,v60,v0
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v0.f32)));
	// b 0x82a26198
	goto loc_82A26198;
loc_82A26154:
	// vmsum3fp128 v60,v63,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v60.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v63.f32), 0xEF));
	// vspltisw128 v59,1
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_set1_epi32(int(0x1)));
	// vspltisw128 v62,0
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-30960
	ctx.r11.s64 = ctx.r11.s64 + -30960;
	// vcsxwfp128 v10,v59,1
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v59.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3F000000)))));
	// stw r10,-11296(r9)
	PPC_STORE_U32(ctx.r9.u32 + -11296, ctx.r10.u32);
	// vrsqrtefp128 v0,v60
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v60.f32))));
	// vor128 v11,v60,v60
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v60.u8));
	// vmulfp128 v13,v60,v10
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v10.f32)));
	// vcmpeqfp128 v9,v60,v62
	_mm_store_ps(ctx.v9.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v62.f32)));
	// vmulfp128 v12,v0,v0
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v10,v13,v12,v10
	_mm_store_ps(ctx.v10.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v10.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v10,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v0,v63,v0
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v0.f32)));
	// vor128 v63,v9,v9
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
loc_82A26198:
	// vsel128 v63,v0,v11,v63
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v11.u8))));
	// vpermwi128 v60,v61,135
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), 0x78));
	// vpermwi128 v13,v61,99
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), 0x9C));
	// vpermwi128 v58,v62,24
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0xE7));
	// vpermwi128 v59,v63,99
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0x9C));
	// stvx128 v63,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vpermwi128 v0,v63,135
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0x78));
	// li r11,0
	ctx.r11.s64 = 0;
	// vmulfp128 v127,v59,v60
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v127.f32, _mm_mul_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v60.f32)));
	// vnmsubfp128 v127,v0,v13,v127
	_mm_store_ps(ctx.v127.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v127.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vpermwi128 v60,v127,24
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), 0xE7));
	// vcmpeqfp128. v60,v60,v58
	_mm_store_ps(ctx.v60.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v58.f32)));
	ctx.cr6.setFromMask(_mm_load_ps(ctx.v60.f32), 0xF);
	// bge cr6,0x82a261e4
	if (!ctx.cr6.lt) goto loc_82A261E4;
	// vupkd3d128 v60,v62,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v62.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v62.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v60 = vTemp;
	// vpermwi128 v63,v60,234
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), 0x15));
	// vpermwi128 v62,v60,186
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), 0x45));
	// vpermwi128 v61,v60,174
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), 0x51));
	// vpermwi128 v60,v60,171
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), 0x54));
	// b 0x82a26220
	goto loc_82A26220;
loc_82A261E4:
	// vmsum3fp128 v63,v63,v61
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v63.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v61.f32), 0xEF));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stvx128 v63,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82fa3ec8
	ctx.lr = 0x82A261F8;
	sub_82FA3EC8(ctx, base);
	// vor128 v1,v127,v127
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// bl 0x8247a400
	ctx.lr = 0x82A26208;
	sub_8247A400(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// li r10,48
	ctx.r10.s64 = 48;
	// lvx128 v63,r0,r3
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// lvx128 v61,r3,r28
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r28.u32) & ~0xF), VectorMaskL));
	// lvx128 v62,r3,r11
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v60,r3,r10
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
loc_82A26220:
	// vmrghw128 v59,v63,v61
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// addi r6,r31,16
	ctx.r6.s64 = ctx.r31.s64 + 16;
	// vmrghw128 v58,v62,v60
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), _mm_load_si128((__m128i*)ctx.v62.u32)));
	// addi r5,r30,16
	ctx.r5.s64 = ctx.r30.s64 + 16;
	// vmrglw128 v63,v63,v61
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// li r9,5
	ctx.r9.s64 = 5;
	// vmrglw128 v62,v62,v60
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), _mm_load_si128((__m128i*)ctx.v62.u32)));
	// addi r8,r31,48
	ctx.r8.s64 = ctx.r31.s64 + 48;
	// addi r11,r30,64
	ctx.r11.s64 = ctx.r30.s64 + 64;
	// subf r4,r30,r31
	ctx.r4.s64 = ctx.r31.s64 - ctx.r30.s64;
loc_82A26248:
	// vor128 v57,v58,v58
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_load_si128((__m128i*)ctx.v58.u8));
	// lvx128 v60,r0,r6
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vor128 v61,v59,v59
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_load_si128((__m128i*)ctx.v59.u8));
	// vor128 v55,v62,v62
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_load_si128((__m128i*)ctx.v62.u8));
	// vor128 v56,v63,v63
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// vor128 v52,v58,v58
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_load_si128((__m128i*)ctx.v58.u8));
	// vmrghw128 v53,v61,v57
	_mm_store_si128((__m128i*)ctx.v53.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), _mm_load_si128((__m128i*)ctx.v61.u32)));
	// vor128 v54,v59,v59
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_load_si128((__m128i*)ctx.v59.u8));
	// vmrglw128 v61,v61,v57
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), _mm_load_si128((__m128i*)ctx.v61.u32)));
	// vor128 v57,v63,v63
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// vmrghw128 v51,v56,v55
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), _mm_load_si128((__m128i*)ctx.v56.u32)));
	// vor128 v50,v62,v62
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_load_si128((__m128i*)ctx.v62.u8));
	// vmrglw128 v56,v56,v55
	_mm_store_si128((__m128i*)ctx.v56.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), _mm_load_si128((__m128i*)ctx.v56.u32)));
	// vmsum4fp128 v55,v60,v53
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v55.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v53.f32), 0xFF));
	// vmrghw128 v53,v54,v52
	_mm_store_si128((__m128i*)ctx.v53.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v52.u32), _mm_load_si128((__m128i*)ctx.v54.u32)));
	// vmrglw128 v54,v54,v52
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v52.u32), _mm_load_si128((__m128i*)ctx.v54.u32)));
	// vmsum4fp128 v61,v60,v61
	_mm_store_ps(ctx.v61.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v61.f32), 0xFF));
	// vmsum4fp128 v52,v60,v51
	_mm_store_ps(ctx.v52.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmrghw128 v51,v57,v50
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v50.u32), _mm_load_si128((__m128i*)ctx.v57.u32)));
	// vmsum4fp128 v60,v60,v56
	_mm_store_ps(ctx.v60.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v56.f32), 0xFF));
	// vmrglw128 v57,v57,v50
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v50.u32), _mm_load_si128((__m128i*)ctx.v57.u32)));
	// vmrghw128 v56,v55,v52
	_mm_store_si128((__m128i*)ctx.v56.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v52.u32), _mm_load_si128((__m128i*)ctx.v55.u32)));
	// vmrghw128 v61,v61,v60
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), _mm_load_si128((__m128i*)ctx.v61.u32)));
	// vmrghw128 v61,v56,v61
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v56.u32)));
	// stvx128 v61,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v61,r4,r11
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vmsum4fp128 v60,v61,v57
	_mm_store_ps(ctx.v60.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v57.f32), 0xFF));
	// vmsum4fp128 v57,v61,v54
	_mm_store_ps(ctx.v57.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v54.f32), 0xFF));
	// vmsum4fp128 v56,v61,v51
	_mm_store_ps(ctx.v56.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v61,v61,v53
	_mm_store_ps(ctx.v61.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v53.f32), 0xFF));
	// vmrghw128 v60,v57,v60
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), _mm_load_si128((__m128i*)ctx.v57.u32)));
	// vmrghw128 v61,v61,v56
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v56.u32), _mm_load_si128((__m128i*)ctx.v61.u32)));
	// vmrghw128 v61,v61,v60
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), _mm_load_si128((__m128i*)ctx.v61.u32)));
	// stvx128 v61,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82a2633c
	if (!ctx.cr6.eq) goto loc_82A2633C;
	// vor128 v57,v58,v58
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_load_si128((__m128i*)ctx.v58.u8));
	// li r7,20
	ctx.r7.s64 = 20;
	// vor128 v60,v59,v59
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_load_si128((__m128i*)ctx.v59.u8));
	// li r10,0
	ctx.r10.s64 = 0;
	// vor128 v56,v63,v63
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// vor128 v55,v62,v62
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_load_si128((__m128i*)ctx.v62.u8));
	// vmrghw128 v61,v60,v57
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), _mm_load_si128((__m128i*)ctx.v60.u32)));
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// vmrglw128 v60,v60,v57
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), _mm_load_si128((__m128i*)ctx.v60.u32)));
	// vmrghw128 v57,v56,v55
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), _mm_load_si128((__m128i*)ctx.v56.u32)));
	// vmrglw128 v56,v56,v55
	_mm_store_si128((__m128i*)ctx.v56.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), _mm_load_si128((__m128i*)ctx.v56.u32)));
loc_82A26308:
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r7,r7,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lvx128 v55,r7,r31
	simd::store_shuffled(ctx.v55, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r31.u32) & ~0xF), VectorMaskL));
	// vmsum4fp128 v54,v55,v56
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v54.f32, _mm_dp_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v56.f32), 0xFF));
	// vmsum4fp128 v53,v55,v60
	_mm_store_ps(ctx.v53.f32, _mm_dp_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v60.f32), 0xFF));
	// vmsum4fp128 v52,v55,v57
	_mm_store_ps(ctx.v52.f32, _mm_dp_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v57.f32), 0xFF));
	// vmsum4fp128 v55,v55,v61
	_mm_store_ps(ctx.v55.f32, _mm_dp_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v61.f32), 0xFF));
	// vmrghw128 v54,v53,v54
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), _mm_load_si128((__m128i*)ctx.v53.u32)));
	// vmrghw128 v55,v55,v52
	_mm_store_si128((__m128i*)ctx.v55.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v52.u32), _mm_load_si128((__m128i*)ctx.v55.u32)));
	// vmrghw128 v55,v55,v54
	_mm_store_si128((__m128i*)ctx.v55.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), _mm_load_si128((__m128i*)ctx.v55.u32)));
	// stvx128 v55,r7,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bdnz 0x82a26308
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A26308;
loc_82A2633C:
	// addi r9,r9,28
	ctx.r9.s64 = ctx.r9.s64 + 28;
	// addi r11,r11,448
	ctx.r11.s64 = ctx.r11.s64 + 448;
	// addi r8,r8,448
	ctx.r8.s64 = ctx.r8.s64 + 448;
	// cmplwi cr6,r9,173
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 173, ctx.xer);
	// blt cr6,0x82a26248
	if (ctx.cr6.lt) goto loc_82A26248;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// li r0,-64
	ctx.r0.s64 = -64;
	// lvx128 v127,r1,r0
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF), VectorMaskL));
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A26360"))) PPC_WEAK_FUNC(sub_82A26360);
PPC_FUNC_IMPL(__imp__sub_82A26360) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r9,10
	ctx.r9.s64 = 10;
	// lbz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// divwu r8,r10,r9
	ctx.r8.u32 = ctx.r10.u32 / ctx.r9.u32;
	// mulli r8,r8,10
	ctx.r8.s64 = ctx.r8.s64 * 10;
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// beq 0x82a263a0
	if (ctx.cr0.eq) goto loc_82A263A0;
	// subfc r9,r9,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r9,31
	ctx.r3.u64 = ctx.r9.u32 & 0x1;
	// b 0x82a263c0
	goto loc_82A263C0;
loc_82A263A0:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82a263b8
	if (!ctx.cr6.lt) goto loc_82A263B8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// li r9,1
	ctx.r9.s64 = 1;
	// bne cr6,0x82a263bc
	if (!ctx.cr6.eq) goto loc_82A263BC;
loc_82A263B8:
	// li r9,0
	ctx.r9.s64 = 0;
loc_82A263BC:
	// clrlwi r3,r9,24
	ctx.r3.u64 = ctx.r9.u32 & 0xFF;
loc_82A263C0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A263CC"))) PPC_WEAK_FUNC(sub_82A263CC);
PPC_FUNC_IMPL(__imp__sub_82A263CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A263D0"))) PPC_WEAK_FUNC(sub_82A263D0);
PPC_FUNC_IMPL(__imp__sub_82A263D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r11,r11,-23040
	ctx.r11.s64 = ctx.r11.s64 + -23040;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82a26618
	if (!ctx.cr6.gt) goto loc_82A26618;
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82a26618
	if (!ctx.cr0.eq) goto loc_82A26618;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-31962
	ctx.r9.s64 = -2094661632;
	// vspltisw128 v63,1
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x1)));
	// addi r10,r10,-30912
	ctx.r10.s64 = ctx.r10.s64 + -30912;
	// vspltisw128 v60,0
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_set1_epi32(int(0x0)));
	// addi r11,r9,-30896
	ctx.r11.s64 = ctx.r9.s64 + -30896;
	// lis r8,-31962
	ctx.r8.s64 = -2094661632;
	// vcsxwfp128 v0,v63,1
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v63.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3F000000)))));
	// addi r9,r3,16
	ctx.r9.s64 = ctx.r3.s64 + 16;
	// addi r8,r8,-30880
	ctx.r8.s64 = ctx.r8.s64 + -30880;
	// lvx128 v63,r0,r10
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v62,r0,r11
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v59,v63,v63
	_mm_store_ps(ctx.v59.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v63.f32), 0xEF));
	// vmsum3fp128 v58,v62,v62
	_mm_store_ps(ctx.v58.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v62.f32), 0xEF));
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lvx128 v57,r0,r9
	simd::store_shuffled(ctx.v57, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// lvx128 v61,r0,r8
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vsubfp128 v57,v1,v57
	_mm_store_ps(ctx.v57.f32, _mm_sub_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v57.f32)));
	// vmsum3fp128 v56,v61,v61
	_mm_store_ps(ctx.v56.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v61.f32), 0xEF));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// vrsqrtefp128 v13,v59
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v59.f32))));
	// vor128 v3,v59,v59
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_load_si128((__m128i*)ctx.v59.u8));
	// vrsqrtefp128 v12,v58
	_mm_store_ps(ctx.v12.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v58.f32))));
	// vor128 v2,v58,v58
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v58.u8));
	// vmulfp128 v9,v59,v0
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v7,v58,v0
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v0.f32)));
	// vrsqrtefp128 v11,v56
	_mm_store_ps(ctx.v11.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v56.f32))));
	// vor128 v10,v56,v56
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)ctx.v56.u8));
	// vmulfp128 v5,v56,v0
	_mm_store_ps(ctx.v5.f32, _mm_mul_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp128 v29,v59,v60
	_mm_store_ps(ctx.v29.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v60.f32)));
	// vcmpeqfp128 v28,v58,v60
	_mm_store_ps(ctx.v28.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v60.f32)));
	// vcmpeqfp128 v31,v56,v60
	_mm_store_ps(ctx.v31.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v60.f32)));
	// vmulfp128 v8,v13,v13
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v6,v12,v12
	_mm_store_ps(ctx.v6.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v4,v11,v11
	_mm_store_ps(ctx.v4.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v11.f32)));
	// vnmsubfp v30,v9,v8,v0
	_mm_store_ps(ctx.v30.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vnmsubfp v9,v7,v6,v0
	_mm_store_ps(ctx.v9.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vnmsubfp v8,v5,v4,v0
	_mm_store_ps(ctx.v8.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v4.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v13,v13,v30,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v30.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v9,v12,v9,v12
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v8,v11,v8,v11
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v12,v63,v13
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v11,v62,v9
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v9.f32)));
	// vmulfp128 v13,v61,v8
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v8.f32)));
	// vsel v9,v12,v3,v29
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)ctx.v12.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)ctx.v3.u8))));
	// vsel v12,v11,v2,v28
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v11.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v2.u8))));
	// vmsum3fp128 v62,v57,v9
	_mm_store_ps(ctx.v62.f32, _mm_dp_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v9.f32), 0xEF));
	// vor128 v63,v12,v12
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_load_si128((__m128i*)ctx.v12.u8));
	// vsel v12,v13,v10,v31
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v10.u8))));
	// vmsum3fp128 v61,v57,v63
	_mm_store_ps(ctx.v61.f32, _mm_dp_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v63.f32), 0xEF));
	// vmsum3fp128 v59,v57,v12
	_mm_store_ps(ctx.v59.f32, _mm_dp_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v12.f32), 0xEF));
	// vmulfp128 v62,v62,v9
	_mm_store_ps(ctx.v62.f32, _mm_mul_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v9.f32)));
	// vmulfp128 v63,v61,v63
	_mm_store_ps(ctx.v63.f32, _mm_mul_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v61,v59,v12
	_mm_store_ps(ctx.v61.f32, _mm_mul_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v12.f32)));
	// vmsum3fp128 v62,v62,v62
	_mm_store_ps(ctx.v62.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v62.f32), 0xEF));
	// vmsum3fp128 v63,v63,v63
	_mm_store_ps(ctx.v63.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v63.f32), 0xEF));
	// vmsum3fp128 v61,v61,v61
	_mm_store_ps(ctx.v61.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v61.f32), 0xEF));
	// vrsqrtefp128 v13,v62
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v62.f32))));
	// vor128 v11,v62,v62
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v62.u8));
	// vmulfp128 v6,v62,v0
	_mm_store_ps(ctx.v6.f32, _mm_mul_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp128 v5,v62,v60
	_mm_store_ps(ctx.v5.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v60.f32)));
	// vrsqrtefp128 v12,v63
	_mm_store_ps(ctx.v12.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v63.f32))));
	// vor128 v10,v63,v63
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// vmulfp128 v8,v63,v0
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp128 v4,v63,v60
	_mm_store_ps(ctx.v4.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v60.f32)));
	// vmulfp128 v7,v13,v13
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v9,v12,v12
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32)));
	// vnmsubfp v3,v6,v7,v0
	_mm_store_ps(ctx.v3.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vnmsubfp v7,v8,v9,v0
	_mm_store_ps(ctx.v7.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v13,v13,v3,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v3.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v12,v12,v7,v12
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v13,v62,v13
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v12,v63,v12
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v12.f32)));
	// vsel v9,v12,v10,v4
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v12.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v10.u8))));
	// vmulfp128 v10,v61,v0
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v0.f32)));
	// vsel v12,v13,v11,v5
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v11.u8))));
	// vrsqrtefp128 v13,v61
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v61.f32))));
	// stvx128 v9,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v11,v13,v13
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// lfs f11,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f11.f64 = double(temp.f32);
	// vcmpeqfp128 v9,v61,v60
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v9.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v60.f32)));
	// stvx128 v12,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// vor128 v12,v61,v61
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v61.u8));
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f13,5184(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5184);
	ctx.f13.f64 = double(temp.f32);
	// vnmsubfp v0,v10,v11,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// fsubs f11,f11,f0
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// vmaddfp v0,v13,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v0,v61,v0
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v0.f32)));
	// vsel v13,v0,v12,v9
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v12.u8))));
	// stvx128 v13,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f10,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// bge cr6,0x82a26580
	if (!ctx.cr6.lt) goto loc_82A26580;
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
loc_82A26580:
	// fcmpu cr6,f11,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bge cr6,0x82a2658c
	if (!ctx.cr6.lt) goto loc_82A2658C;
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
loc_82A2658C:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82a26598
	if (!ctx.cr6.lt) goto loc_82A26598;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82A26598:
	// fadds f12,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lfs f0,-23028(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -23028);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lfs f13,24436(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24436);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fdivs f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f1.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f12,f11,f13
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f12,-12(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// ld r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// stdx r8,r10,r11
	PPC_STORE_U64(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u64);
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// bne cr6,0x82a265fc
	if (!ctx.cr6.eq) goto loc_82A265FC;
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
loc_82A265FC:
	// li r8,10
	ctx.r8.s64 = 10;
	// divwu r8,r10,r8
	ctx.r8.u32 = ctx.r10.u32 / ctx.r8.u32;
	// mulli r8,r8,10
	ctx.r8.s64 = ctx.r8.s64 * 10;
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stvx128 v1,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
loc_82A26618:
	// li r11,16
	ctx.r11.s64 = 16;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// stvx128 v1,r3,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2662C"))) PPC_WEAK_FUNC(sub_82A2662C);
PPC_FUNC_IMPL(__imp__sub_82A2662C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A26630"))) PPC_WEAK_FUNC(sub_82A26630);
PPC_FUNC_IMPL(__imp__sub_82A26630) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lbz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 32);
	// addi r31,r3,32
	ctx.r31.s64 = ctx.r3.s64 + 32;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f31,5184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f31.f64 = double(temp.f32);
	// bne 0x82a26668
	if (!ctx.cr0.eq) goto loc_82A26668;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a266f0
	if (ctx.cr6.eq) goto loc_82A266F0;
loc_82A26668:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,9
	ctx.r9.s64 = 9;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// beq 0x82a266b0
	if (ctx.cr0.eq) goto loc_82A266B0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a266b0
	if (ctx.cr6.eq) goto loc_82A266B0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82a266b0
	goto loc_82A266B0;
loc_82A2669C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lfsx f0,r11,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// fadds f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
loc_82A266B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a26360
	ctx.lr = 0x82A266B8;
	sub_82A26360(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a2669c
	if (!ctx.cr0.eq) goto loc_82A2669C;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,10
	ctx.r11.s64 = 10;
	// bne 0x82a266d4
	if (!ctx.cr0.eq) goto loc_82A266D4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82A266D4:
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fdivs f1,f31,f0
	ctx.f1.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// b 0x82a266f4
	goto loc_82A266F4;
loc_82A266F0:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_82A266F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2670C"))) PPC_WEAK_FUNC(sub_82A2670C);
PPC_FUNC_IMPL(__imp__sub_82A2670C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A26710"))) PPC_WEAK_FUNC(sub_82A26710);
PPC_FUNC_IMPL(__imp__sub_82A26710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lbz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 32);
	// addi r31,r3,32
	ctx.r31.s64 = ctx.r3.s64 + 32;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f31,5184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f31.f64 = double(temp.f32);
	// bne 0x82a26748
	if (!ctx.cr0.eq) goto loc_82A26748;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a267d0
	if (ctx.cr6.eq) goto loc_82A267D0;
loc_82A26748:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,9
	ctx.r9.s64 = 9;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// beq 0x82a26790
	if (ctx.cr0.eq) goto loc_82A26790;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a26790
	if (ctx.cr6.eq) goto loc_82A26790;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82a26790
	goto loc_82A26790;
loc_82A2677C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fadds f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
loc_82A26790:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a26360
	ctx.lr = 0x82A26798;
	sub_82A26360(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a2677c
	if (!ctx.cr0.eq) goto loc_82A2677C;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,10
	ctx.r11.s64 = 10;
	// bne 0x82a267b4
	if (!ctx.cr0.eq) goto loc_82A267B4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82A267B4:
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fdivs f1,f31,f0
	ctx.f1.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// b 0x82a267d4
	goto loc_82A267D4;
loc_82A267D0:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_82A267D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A267EC"))) PPC_WEAK_FUNC(sub_82A267EC);
PPC_FUNC_IMPL(__imp__sub_82A267EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A267F0"))) PPC_WEAK_FUNC(sub_82A267F0);
PPC_FUNC_IMPL(__imp__sub_82A267F0) {
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
	// li r10,10
	ctx.r10.s64 = 10;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// lfs f0,5184(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
loc_82A26830:
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfsu f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a26830
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A26830;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A26848;
	sub_82FA7CF0(ctx, base);
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

__attribute__((alias("__imp__sub_82A26860"))) PPC_WEAK_FUNC(sub_82A26860);
PPC_FUNC_IMPL(__imp__sub_82A26860) {
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
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// bl 0x82a267f0
	ctx.lr = 0x82A2687C;
	sub_82A267F0(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,15312
	ctx.r11.s64 = ctx.r11.s64 + 15312;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r31,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
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

__attribute__((alias("__imp__sub_82A268B0"))) PPC_WEAK_FUNC(sub_82A268B0);
PPC_FUNC_IMPL(__imp__sub_82A268B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A268B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,19
	ctx.r31.s64 = 19;
loc_82A268C8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a26860
	ctx.lr = 0x82A268D0;
	sub_82A26860(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
	// bge 0x82a268c8
	if (!ctx.cr0.lt) goto loc_82A268C8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A268E8"))) PPC_WEAK_FUNC(sub_82A268E8);
PPC_FUNC_IMPL(__imp__sub_82A268E8) {
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
	// addi r5,r4,32
	ctx.r5.s64 = ctx.r4.s64 + 32;
	// addi r4,r4,352
	ctx.r4.s64 = ctx.r4.s64 + 352;
	// li r6,20
	ctx.r6.s64 = 20;
loc_82A26900:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a26914
	if (ctx.cr6.eq) goto loc_82A26914;
	// lvx128 v1,r0,r5
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// bl 0x82a263d0
	ctx.lr = 0x82A26914;
	sub_82A263D0(ctx, base);
loc_82A26914:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r5,r5,16
	ctx.r5.s64 = ctx.r5.s64 + 16;
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// bne 0x82a26900
	if (!ctx.cr0.eq) goto loc_82A26900;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A26938"))) PPC_WEAK_FUNC(sub_82A26938);
PPC_FUNC_IMPL(__imp__sub_82A26938) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r10,r10,29064
	ctx.r10.s64 = ctx.r10.s64 + 29064;
	// lfs f0,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A26960"))) PPC_WEAK_FUNC(sub_82A26960);
PPC_FUNC_IMPL(__imp__sub_82A26960) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f0,5184(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x82a26980
	if (!ctx.cr6.lt) goto loc_82A26980;
loc_82A26974:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_82A26980:
	// fcmpu cr6,f2,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// ble cr6,0x82a26974
	if (!ctx.cr6.gt) goto loc_82A26974;
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// ble cr6,0x82a26974
	if (!ctx.cr6.gt) goto loc_82A26974;
	// stfs f1,4(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f2,8(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f3,12(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A269A4"))) PPC_WEAK_FUNC(sub_82A269A4);
PPC_FUNC_IMPL(__imp__sub_82A269A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A269A8"))) PPC_WEAK_FUNC(sub_82A269A8);
PPC_FUNC_IMPL(__imp__sub_82A269A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A269CC"))) PPC_WEAK_FUNC(sub_82A269CC);
PPC_FUNC_IMPL(__imp__sub_82A269CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A269D0"))) PPC_WEAK_FUNC(sub_82A269D0);
PPC_FUNC_IMPL(__imp__sub_82A269D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A269DC"))) PPC_WEAK_FUNC(sub_82A269DC);
PPC_FUNC_IMPL(__imp__sub_82A269DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A269E0"))) PPC_WEAK_FUNC(sub_82A269E0);
PPC_FUNC_IMPL(__imp__sub_82A269E0) {
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
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lfs f0,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x82a26a10
	if (ctx.cr6.gt) goto loc_82A26A10;
loc_82A26A04:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82a26a30
	goto loc_82A26A30;
loc_82A26A10:
	// fcmpu cr6,f2,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// ble cr6,0x82a26a04
	if (!ctx.cr6.gt) goto loc_82A26A04;
	// fdivs f0,f1,f2
	ctx.f0.f64 = double(float(ctx.f1.f64 / ctx.f2.f64));
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// bl 0x82fa4be8
	ctx.lr = 0x82A26A24;
	sub_82FA4BE8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A26A30:
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

__attribute__((alias("__imp__sub_82A26A44"))) PPC_WEAK_FUNC(sub_82A26A44);
PPC_FUNC_IMPL(__imp__sub_82A26A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A26A48"))) PPC_WEAK_FUNC(sub_82A26A48);
PPC_FUNC_IMPL(__imp__sub_82A26A48) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lfs f0,5184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// bgt cr6,0x82a26a90
	if (ctx.cr6.gt) goto loc_82A26A90;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82a26b0c
	goto loc_82A26B0C;
loc_82A26A90:
	// lfs f13,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82a26aa8
	if (ctx.cr6.gt) goto loc_82A26AA8;
loc_82A26A9C:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x82a26b0c
	goto loc_82A26B0C;
loc_82A26AA8:
	// lfs f2,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// ble cr6,0x82a26a9c
	if (!ctx.cr6.gt) goto loc_82A26A9C;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a269e0
	ctx.lr = 0x82A26AC4;
	sub_82A269E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82a26ae4
	if (!ctx.cr0.lt) goto loc_82A26AE4;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f2,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82a269e0
	ctx.lr = 0x82A26AE0;
	sub_82A269E0(ctx, base);
	// b 0x82a26b0c
	goto loc_82A26B0C;
loc_82A26AE4:
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f0,24436(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fmadds f0,f0,f30,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 + ctx.f12.f64));
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
loc_82A26B0C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
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

__attribute__((alias("__imp__sub_82A26B2C"))) PPC_WEAK_FUNC(sub_82A26B2C);
PPC_FUNC_IMPL(__imp__sub_82A26B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A26B30"))) PPC_WEAK_FUNC(sub_82A26B30);
PPC_FUNC_IMPL(__imp__sub_82A26B30) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82a26b5c
	if (ctx.cr6.lt) goto loc_82A26B5C;
	// beq cr6,0x82a26b54
	if (ctx.cr6.eq) goto loc_82A26B54;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_82A26B54:
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// b 0x82a28d28
	sub_82A28D28(ctx, base);
	return;
loc_82A26B5C:
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// b 0x82a28768
	sub_82A28768(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A26B64"))) PPC_WEAK_FUNC(sub_82A26B64);
PPC_FUNC_IMPL(__imp__sub_82A26B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A26B68"))) PPC_WEAK_FUNC(sub_82A26B68);
PPC_FUNC_IMPL(__imp__sub_82A26B68) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// addi r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 1;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A26B7C"))) PPC_WEAK_FUNC(sub_82A26B7C);
PPC_FUNC_IMPL(__imp__sub_82A26B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A26B80"))) PPC_WEAK_FUNC(sub_82A26B80);
PPC_FUNC_IMPL(__imp__sub_82A26B80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7658
	ctx.lr = 0x82A26B88;
	__savegprlr_20(ctx, base);
	// li r12,-128
	ctx.r12.s64 = -128;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r5,1
	ctx.r28.s64 = ctx.r5.s64 + 1;
	// stw r4,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r4.u32);
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// stw r6,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r6.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mullw r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82a26bc8
	if (!ctx.cr6.gt) goto loc_82A26BC8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82a26f7c
	goto loc_82A26F7C;
loc_82A26BC8:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r23,1
	ctx.r11.s64 = ctx.r23.s64 + 1;
	// addi r9,r10,-13520
	ctx.r9.s64 = ctx.r10.s64 + -13520;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r20,r11,28,4,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r21,r11,28
	ctx.r21.u64 = ctx.r11.u32 & 0xF;
	// lvx128 v127,r0,r9
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r20,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r20.u32);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// stw r21,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r21.u32);
	// addi r30,r7,8
	ctx.r30.s64 = ctx.r7.s64 + 8;
	// add r31,r10,r7
	ctx.r31.u64 = ctx.r10.u64 + ctx.r7.u64;
	// bl 0x82a75988
	ctx.lr = 0x82A26C08;
	sub_82A75988(ctx, base);
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// ble cr6,0x82a26f78
	if (!ctx.cr6.gt) goto loc_82A26F78;
	// lis r26,-31962
	ctx.r26.s64 = -2094661632;
	// vspltisw128 v58,0
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_set1_epi32(int(0x0)));
	// lis r25,-31962
	ctx.r25.s64 = -2094661632;
	// addi r22,r28,-1
	ctx.r22.s64 = ctx.r28.s64 + -1;
	// addi r10,r26,-28912
	ctx.r10.s64 = ctx.r26.s64 + -28912;
	// addi r9,r25,-30848
	ctx.r9.s64 = ctx.r25.s64 + -30848;
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// lis r4,-31962
	ctx.r4.s64 = -2094661632;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lis r3,-31962
	ctx.r3.s64 = -2094661632;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lis r28,-31962
	ctx.r28.s64 = -2094661632;
	// lis r27,-31962
	ctx.r27.s64 = -2094661632;
	// li r11,16
	ctx.r11.s64 = 16;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r8,80
	ctx.r8.s64 = 80;
	// li r9,96
	ctx.r9.s64 = 96;
	// li r10,112
	ctx.r10.s64 = 112;
	// li r24,128
	ctx.r24.s64 = 128;
	// addi r4,r4,-28896
	ctx.r4.s64 = ctx.r4.s64 + -28896;
	// addi r3,r3,-30864
	ctx.r3.s64 = ctx.r3.s64 + -30864;
	// addi r28,r28,-30816
	ctx.r28.s64 = ctx.r28.s64 + -30816;
	// addi r27,r27,-30832
	ctx.r27.s64 = ctx.r27.s64 + -30832;
loc_82A26C74:
	// vor128 v59,v58,v58
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_load_si128((__m128i*)ctx.v58.u8));
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// vor128 v60,v58,v58
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_load_si128((__m128i*)ctx.v58.u8));
	// beq cr6,0x82a26ee8
	if (ctx.cr6.eq) goto loc_82A26EE8;
	// mtctr r20
	ctx.ctr.u64 = ctx.r20.u64;
loc_82A26C88:
	// lwz r26,92(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lvrx128 v62,r11,r29
	temp.u32 = ctx.r11.u32 + ctx.r29.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx128 v63,r0,r29
	temp.u32 = ctx.r29.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r25,96(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// vor128 v63,v63,v62
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8)));
	// lvx128 v0,r0,r3
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// lvx128 v6,r0,r27
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r27.u32) & ~0xF), VectorMaskL));
	// lvx128 v5,r0,r28
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// lvx128 v62,r0,r26
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r26.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r0,r25
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r25.u32) & ~0xF), VectorMaskL));
	// vperm128 v57,v63,v62,v0
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v61,r0,r4
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vperm128 v56,v63,v62,v7
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vperm128 v55,v63,v62,v6
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// vperm128 v63,v63,v62,v5
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vcsxwfp128 v62,v57,0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v62.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v57.u32)));
	// vcsxwfp128 v57,v56,0
	_mm_store_ps(ctx.v57.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v56.u32)));
	// vcsxwfp128 v56,v55,0
	_mm_store_ps(ctx.v56.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v55.u32)));
	// vcsxwfp128 v63,v63,0
	_mm_store_ps(ctx.v63.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v63.u32)));
	// vmsum4fp128 v55,v62,v61
	_mm_store_ps(ctx.v55.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v61.f32), 0xFF));
	// vmulfp128 v54,v62,v62
	_mm_store_ps(ctx.v54.f32, _mm_mul_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v62.f32)));
	// vmsum4fp128 v53,v62,v62
	_mm_store_ps(ctx.v53.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v62.f32), 0xFF));
	// vslo128 v62,v62,v127
	simd::vec128i shift_amt = simd::srli_i16(ctx.v127.v128, 3);
	int shift = simd::extract_u8(shift_amt, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v62.v128 = simd::zero_i128();
	} else {
		ctx.v62.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v62.v128, 16 - shift);
	}
	// vmsum4fp128 v52,v57,v61
	_mm_store_ps(ctx.v52.f32, _mm_dp_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v61.f32), 0xFF));
	// vmulfp128 v51,v57,v57
	_mm_store_ps(ctx.v51.f32, _mm_mul_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v57.f32)));
	// vmsum4fp128 v50,v57,v57
	_mm_store_ps(ctx.v50.f32, _mm_dp_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v57.f32), 0xFF));
	// vmulfp128 v48,v56,v56
	_mm_store_ps(ctx.v48.f32, _mm_mul_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v56.f32)));
	// vmsum4fp128 v49,v56,v61
	_mm_store_ps(ctx.v49.f32, _mm_dp_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v61.f32), 0xFF));
	// vslo128 v57,v57,v127
	simd::vec128i shift_amt = simd::srli_i16(ctx.v127.v128, 3);
	int shift = simd::extract_u8(shift_amt, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v57.v128 = simd::zero_i128();
	} else {
		ctx.v57.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v57.v128, 16 - shift);
	}
	// vmsum4fp128 v47,v56,v56
	_mm_store_ps(ctx.v47.f32, _mm_dp_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v56.f32), 0xFF));
	// vslo128 v46,v62,v127
	simd::vec128i shift_amt = simd::srli_i16(ctx.v127.v128, 3);
	int shift = simd::extract_u8(shift_amt, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v46.v128 = simd::zero_i128();
	} else {
		ctx.v46.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v62.v128, 16 - shift);
	}
	// vmsum4fp128 v45,v63,v63
	_mm_store_ps(ctx.v45.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v63.f32), 0xFF));
	// vmulfp128 v44,v63,v63
	_mm_store_ps(ctx.v44.f32, _mm_mul_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v63.f32)));
	// vslo128 v56,v56,v127
	simd::vec128i shift_amt = simd::srli_i16(ctx.v127.v128, 3);
	int shift = simd::extract_u8(shift_amt, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v56.v128 = simd::zero_i128();
	} else {
		ctx.v56.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v56.v128, 16 - shift);
	}
	// vmsum4fp128 v61,v63,v61
	_mm_store_ps(ctx.v61.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v61.f32), 0xFF));
	// vslo128 v43,v57,v127
	simd::vec128i shift_amt = simd::srli_i16(ctx.v127.v128, 3);
	int shift = simd::extract_u8(shift_amt, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v43.v128 = simd::zero_i128();
	} else {
		ctx.v43.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v57.v128, 16 - shift);
	}
	// vslo128 v42,v46,v127
	simd::vec128i shift_amt = simd::srli_i16(ctx.v127.v128, 3);
	int shift = simd::extract_u8(shift_amt, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v42.v128 = simd::zero_i128();
	} else {
		ctx.v42.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v46.v128, 16 - shift);
	}
	// vslo128 v63,v63,v127
	simd::vec128i shift_amt = simd::srli_i16(ctx.v127.v128, 3);
	int shift = simd::extract_u8(shift_amt, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v63.v128 = simd::zero_i128();
	} else {
		ctx.v63.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v63.v128, 16 - shift);
	}
	// vslo128 v41,v56,v127
	simd::vec128i shift_amt = simd::srli_i16(ctx.v127.v128, 3);
	int shift = simd::extract_u8(shift_amt, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v41.v128 = simd::zero_i128();
	} else {
		ctx.v41.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v56.v128, 16 - shift);
	}
	// vslo128 v54,v54,v127
	simd::vec128i shift_amt = simd::srli_i16(ctx.v127.v128, 3);
	int shift = simd::extract_u8(shift_amt, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v54.v128 = simd::zero_i128();
	} else {
		ctx.v54.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v54.v128, 16 - shift);
	}
	// vslo128 v40,v43,v127
	simd::vec128i shift_amt = simd::srli_i16(ctx.v127.v128, 3);
	int shift = simd::extract_u8(shift_amt, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v40.v128 = simd::zero_i128();
	} else {
		ctx.v40.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v43.v128, 16 - shift);
	}
	// vslo128 v51,v51,v127
	simd::vec128i shift_amt = simd::srli_i16(ctx.v127.v128, 3);
	int shift = simd::extract_u8(shift_amt, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v51.v128 = simd::zero_i128();
	} else {
		ctx.v51.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v51.v128, 16 - shift);
	}
	// vslo128 v39,v63,v127
	simd::vec128i shift_amt = simd::srli_i16(ctx.v127.v128, 3);
	int shift = simd::extract_u8(shift_amt, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v39.v128 = simd::zero_i128();
	} else {
		ctx.v39.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v63.v128, 16 - shift);
	}
	// vaddfp128 v59,v59,v55
	_mm_store_ps(ctx.v59.f32, _mm_add_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v55.f32)));
	// vslo128 v55,v54,v127
	simd::vec128i shift_amt = simd::srli_i16(ctx.v127.v128, 3);
	int shift = simd::extract_u8(shift_amt, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v55.v128 = simd::zero_i128();
	} else {
		ctx.v55.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v54.v128, 16 - shift);
	}
	// vaddfp128 v60,v60,v53
	_mm_store_ps(ctx.v60.f32, _mm_add_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v53.f32)));
	// vslo128 v53,v48,v127
	simd::vec128i shift_amt = simd::srli_i16(ctx.v127.v128, 3);
	int shift = simd::extract_u8(shift_amt, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v53.v128 = simd::zero_i128();
	} else {
		ctx.v53.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v48.v128, 16 - shift);
	}
	// vslo128 v48,v51,v127
	simd::vec128i shift_amt = simd::srli_i16(ctx.v127.v128, 3);
	int shift = simd::extract_u8(shift_amt, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v48.v128 = simd::zero_i128();
	} else {
		ctx.v48.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v51.v128, 16 - shift);
	}
	// vslo128 v44,v44,v127
	simd::vec128i shift_amt = simd::srli_i16(ctx.v127.v128, 3);
	int shift = simd::extract_u8(shift_amt, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v44.v128 = simd::zero_i128();
	} else {
		ctx.v44.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v44.v128, 16 - shift);
	}
	// vslo128 v38,v55,v127
	simd::vec128i shift_amt = simd::srli_i16(ctx.v127.v128, 3);
	int shift = simd::extract_u8(shift_amt, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v38.v128 = simd::zero_i128();
	} else {
		ctx.v38.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v55.v128, 16 - shift);
	}
	// vslo128 v37,v53,v127
	simd::vec128i shift_amt = simd::srli_i16(ctx.v127.v128, 3);
	int shift = simd::extract_u8(shift_amt, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v37.v128 = simd::zero_i128();
	} else {
		ctx.v37.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v53.v128, 16 - shift);
	}
	// vslo128 v36,v48,v127
	simd::vec128i shift_amt = simd::srli_i16(ctx.v127.v128, 3);
	int shift = simd::extract_u8(shift_amt, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v36.v128 = simd::zero_i128();
	} else {
		ctx.v36.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v48.v128, 16 - shift);
	}
	// vslo128 v35,v44,v127
	simd::vec128i shift_amt = simd::srli_i16(ctx.v127.v128, 3);
	int shift = simd::extract_u8(shift_amt, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v35.v128 = simd::zero_i128();
	} else {
		ctx.v35.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v44.v128, 16 - shift);
	}
	// vslo128 v34,v41,v127
	simd::vec128i shift_amt = simd::srli_i16(ctx.v127.v128, 3);
	int shift = simd::extract_u8(shift_amt, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v34.v128 = simd::zero_i128();
	} else {
		ctx.v34.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v41.v128, 16 - shift);
	}
	// vslo128 v33,v37,v127
	simd::vec128i shift_amt = simd::srli_i16(ctx.v127.v128, 3);
	int shift = simd::extract_u8(shift_amt, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v33.v128 = simd::zero_i128();
	} else {
		ctx.v33.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v37.v128, 16 - shift);
	}
	// vslo128 v32,v39,v127
	simd::vec128i shift_amt = simd::srli_i16(ctx.v127.v128, 3);
	int shift = simd::extract_u8(shift_amt, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v32.v128 = simd::zero_i128();
	} else {
		ctx.v32.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v39.v128, 16 - shift);
	}
	// vslo128 v0,v35,v127
	simd::vec128i shift_amt = simd::srli_i16(ctx.v127.v128, 3);
	int shift = simd::extract_u8(shift_amt, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v0.v128 = simd::zero_i128();
	} else {
		ctx.v0.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v35.v128, 16 - shift);
	}
	// vaddfp128 v52,v59,v52
	_mm_store_ps(ctx.v52.f32, _mm_add_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v52.f32)));
	// vaddfp128 v50,v60,v50
	_mm_store_ps(ctx.v50.f32, _mm_add_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v50.f32)));
	// vsubfp128 v60,v60,v54
	_mm_store_ps(ctx.v60.f32, _mm_sub_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v54.f32)));
	// vsubfp128 v62,v59,v62
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v62.f32)));
	// vaddfp128 v59,v52,v49
	_mm_store_ps(ctx.v59.f32, _mm_add_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v49.f32)));
	// vaddfp128 v54,v50,v47
	_mm_store_ps(ctx.v54.f32, _mm_add_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v47.f32)));
	// vsubfp128 v60,v60,v55
	_mm_store_ps(ctx.v60.f32, _mm_sub_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v55.f32)));
	// vsubfp128 v57,v52,v57
	_mm_store_ps(ctx.v57.f32, _mm_sub_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v57.f32)));
	// vsubfp128 v62,v62,v46
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v46.f32)));
	// vsubfp128 v55,v50,v51
	_mm_store_ps(ctx.v55.f32, _mm_sub_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v51.f32)));
	// vsubfp128 v56,v59,v56
	_mm_store_ps(ctx.v56.f32, _mm_sub_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v56.f32)));
	// vsubfp128 v53,v54,v53
	_mm_store_ps(ctx.v53.f32, _mm_sub_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v53.f32)));
	// vsubfp128 v52,v60,v38
	_mm_store_ps(ctx.v52.f32, _mm_sub_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v38.f32)));
	// vaddfp128 v60,v54,v45
	_mm_store_ps(ctx.v60.f32, _mm_add_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v45.f32)));
	// vsubfp128 v62,v62,v42
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v42.f32)));
	// vsubfp128 v55,v55,v48
	_mm_store_ps(ctx.v55.f32, _mm_sub_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v48.f32)));
	// vsubfp128 v57,v57,v43
	_mm_store_ps(ctx.v57.f32, _mm_sub_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v43.f32)));
	// vaddfp128 v59,v59,v61
	_mm_store_ps(ctx.v59.f32, _mm_add_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v61.f32)));
	// vsubfp128 v61,v56,v41
	_mm_store_ps(ctx.v61.f32, _mm_sub_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v41.f32)));
	// vsubfp128 v56,v53,v37
	_mm_store_ps(ctx.v56.f32, _mm_sub_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v37.f32)));
	// vsubfp128 v53,v60,v44
	_mm_store_ps(ctx.v53.f32, _mm_sub_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v44.f32)));
	// vmrghw128 v54,v62,v52
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v52.u32), _mm_load_si128((__m128i*)ctx.v62.u32)));
	// vsubfp128 v55,v55,v36
	_mm_store_ps(ctx.v55.f32, _mm_sub_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v36.f32)));
	// vsubfp128 v57,v57,v40
	_mm_store_ps(ctx.v57.f32, _mm_sub_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v40.f32)));
	// vsubfp128 v63,v59,v63
	_mm_store_ps(ctx.v63.f32, _mm_sub_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v63.f32)));
	// lvrx128 v50,r11,r30
	temp.u32 = ctx.r11.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v50.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vsubfp128 v53,v53,v35
	_mm_store_ps(ctx.v53.f32, _mm_sub_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v35.f32)));
	// lvlx128 v51,r0,r30
	temp.u32 = ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v49,r5,r30
	temp.u32 = ctx.r5.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v49.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v51,v51,v50
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)ctx.v50.u8)));
	// lvlx128 v48,r11,r30
	temp.u32 = ctx.r11.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglw128 v62,v62,v52
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v52.u32), _mm_load_si128((__m128i*)ctx.v62.u32)));
	// vor128 v52,v48,v49
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)ctx.v49.u8)));
	// vsubfp128 v56,v56,v33
	_mm_store_ps(ctx.v56.f32, _mm_sub_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v33.f32)));
	// vsubfp128 v61,v61,v34
	_mm_store_ps(ctx.v61.f32, _mm_sub_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v34.f32)));
	// lvlx128 v47,r5,r30
	temp.u32 = ctx.r5.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vaddfp128 v54,v51,v54
	_mm_store_ps(ctx.v54.f32, _mm_add_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v54.f32)));
	// lvlx128 v48,r6,r30
	temp.u32 = ctx.r6.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v50,r6,r30
	temp.u32 = ctx.r6.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v50.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vmrghw128 v46,v57,v55
	_mm_store_si128((__m128i*)ctx.v46.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), _mm_load_si128((__m128i*)ctx.v57.u32)));
	// vaddfp128 v62,v52,v62
	_mm_store_ps(ctx.v62.f32, _mm_add_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v62.f32)));
	// lvrx128 v49,r7,r30
	temp.u32 = ctx.r7.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v49.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v50,v47,v50
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)ctx.v50.u8)));
	// vmrglw128 v57,v57,v55
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), _mm_load_si128((__m128i*)ctx.v57.u32)));
	// vor128 v49,v48,v49
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)ctx.v49.u8)));
	// lvrx128 v51,r8,r30
	temp.u32 = ctx.r8.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v51.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx128 v55,r7,r30
	temp.u32 = ctx.r7.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// vsubfp128 v63,v63,v39
	_mm_store_ps(ctx.v63.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v39.f32)));
	// vor128 v55,v55,v51
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)ctx.v51.u8)));
	// vsubfp128 v53,v53,v0
	_mm_store_ps(ctx.v53.f32, _mm_sub_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v0.f32)));
	// lvrx128 v52,r9,r30
	temp.u32 = ctx.r9.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v52.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vaddfp128 v51,v50,v46
	_mm_store_ps(ctx.v51.f32, _mm_add_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v46.f32)));
	// lvlx128 v48,r8,r30
	temp.u32 = ctx.r8.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vaddfp128 v57,v49,v57
	_mm_store_ps(ctx.v57.f32, _mm_add_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v57.f32)));
	// lvrx128 v50,r10,r30
	temp.u32 = ctx.r10.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v50.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx128 v46,r9,r30
	temp.u32 = ctx.r9.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v52,v48,v52
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)ctx.v52.u8)));
	// vmrghw128 v47,v61,v56
	_mm_store_si128((__m128i*)ctx.v47.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v56.u32), _mm_load_si128((__m128i*)ctx.v61.u32)));
	// lvlx128 v49,r10,r30
	temp.u32 = ctx.r10.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglw128 v61,v61,v56
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v56.u32), _mm_load_si128((__m128i*)ctx.v61.u32)));
	// lvrx128 v56,r24,r30
	temp.u32 = ctx.r24.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v56.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// stvlx128 v54,r0,r31
	ea = ctx.r31.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v54.u8[15 - i]);
	// vor128 v50,v46,v50
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v46.u8), _mm_load_si128((__m128i*)ctx.v50.u8)));
	// stvrx128 v54,r31,r11
	ea = ctx.r31.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v54.u8[i]);
	// vor128 v56,v49,v56
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)ctx.v56.u8)));
	// stvlx128 v62,r31,r11
	ea = ctx.r31.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v62.u8[15 - i]);
	// vaddfp128 v55,v55,v47
	_mm_store_ps(ctx.v55.f32, _mm_add_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v47.f32)));
	// stvrx128 v62,r31,r5
	ea = ctx.r31.u32 + ctx.r5.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v62.u8[i]);
	// vaddfp128 v61,v52,v61
	_mm_store_ps(ctx.v61.f32, _mm_add_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v61.f32)));
	// li r24,128
	ctx.r24.s64 = 128;
	// vsubfp128 v63,v63,v32
	_mm_store_ps(ctx.v63.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v32.f32)));
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
	// stvlx128 v51,r31,r5
	ea = ctx.r31.u32 + ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v51.u8[15 - i]);
	// stvrx128 v51,r31,r6
	ea = ctx.r31.u32 + ctx.r6.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v51.u8[i]);
	// stvlx128 v57,r31,r6
	ea = ctx.r31.u32 + ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v57.u8[15 - i]);
	// stvrx128 v57,r31,r7
	ea = ctx.r31.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v57.u8[i]);
	// stvlx128 v55,r31,r7
	ea = ctx.r31.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v55.u8[15 - i]);
	// stvrx128 v55,r31,r8
	ea = ctx.r31.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v55.u8[i]);
	// stvlx128 v61,r31,r8
	ea = ctx.r31.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v61.u8[15 - i]);
	// vmrghw128 v62,v63,v53
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v53.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// stvrx128 v61,r31,r9
	ea = ctx.r31.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v61.u8[i]);
	// vmrglw128 v63,v63,v53
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v53.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// vaddfp128 v62,v50,v62
	_mm_store_ps(ctx.v62.f32, _mm_add_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v62.f32)));
	// vaddfp128 v63,v56,v63
	_mm_store_ps(ctx.v63.f32, _mm_add_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v63.f32)));
	// stvlx128 v62,r31,r9
	ea = ctx.r31.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v62.u8[15 - i]);
	// stvrx128 v62,r31,r10
	ea = ctx.r31.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v62.u8[i]);
	// stvlx128 v63,r31,r10
	ea = ctx.r31.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r31,r24
	ea = ctx.r31.u32 + ctx.r24.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// addi r31,r31,128
	ctx.r31.s64 = ctx.r31.s64 + 128;
	// bdnz 0x82a26c88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A26C88;
	// lwz r22,88(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r21,100(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r20,104(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r23,284(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
loc_82A26EE8:
	// addi r26,r1,84
	ctx.r26.s64 = ctx.r1.s64 + 84;
	// addi r25,r1,80
	ctx.r25.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// stvewx128 v59,r0,r26
	ea = (ctx.r26.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v59.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r0,r25
	ea = (ctx.r25.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// beq cr6,0x82a26f58
	if (ctx.cr6.eq) goto loc_82A26F58;
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r21
	ctx.ctr.u64 = ctx.r21.u64;
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
loc_82A26F0C:
	// lbz r26,0(r29)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// lfs f12,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// std r26,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r26.u64);
	// lfd f11,112(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fmadds f13,f11,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bdnz 0x82a26f0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A26F0C;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_82A26F58:
	// lwz r26,300(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// addic. r22,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// subf r29,r23,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r23.s64;
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// add r29,r29,r26
	ctx.r29.u64 = ctx.r29.u64 + ctx.r26.u64;
	// bne 0x82a26c74
	if (!ctx.cr0.eq) goto loc_82A26C74;
loc_82A26F78:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A26F7C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// li r0,-128
	ctx.r0.s64 = -128;
	// lvx128 v127,r1,r0
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF), VectorMaskL));
	// b 0x82fa76a8
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A26F8C"))) PPC_WEAK_FUNC(sub_82A26F8C);
PPC_FUNC_IMPL(__imp__sub_82A26F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A26F90"))) PPC_WEAK_FUNC(sub_82A26F90);
PPC_FUNC_IMPL(__imp__sub_82A26F90) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A26FB4"))) PPC_WEAK_FUNC(sub_82A26FB4);
PPC_FUNC_IMPL(__imp__sub_82A26FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A26FB8"))) PPC_WEAK_FUNC(sub_82A26FB8);
PPC_FUNC_IMPL(__imp__sub_82A26FB8) {
	PPC_FUNC_PROLOGUE();
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// divw r10,r4,r11
	ctx.r10.s32 = ctx.r4.s32 / ctx.r11.s32;
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// divw r11,r5,r11
	ctx.r11.s32 = ctx.r5.s32 / ctx.r11.s32;
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A26FDC"))) PPC_WEAK_FUNC(sub_82A26FDC);
PPC_FUNC_IMPL(__imp__sub_82A26FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A26FE0"))) PPC_WEAK_FUNC(sub_82A26FE0);
PPC_FUNC_IMPL(__imp__sub_82A26FE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A26FE8;
	__savegprlr_28(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a27008
	if (ctx.cr6.eq) goto loc_82A27008;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x82a270d8
	goto loc_82A270D8;
loc_82A27008:
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// lfs f0,24436(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24436);
	ctx.f0.f64 = double(temp.f32);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r11.u64);
	// lfd f13,-48(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
loc_82A2703C:
	// li r10,5
	ctx.r10.s64 = 5;
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r11,0
	ctx.r11.s64 = 0;
	// mullw r6,r31,r9
	ctx.r6.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r9.s32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82A27050:
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// add r30,r5,r11
	ctx.r30.u64 = ctx.r5.u64 + ctx.r11.u64;
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// lwz r29,28(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mullw r7,r9,r11
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// lwz r28,4(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mullw r10,r8,r6
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// mullw r8,r8,r29
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r29.s32);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r7,r7,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r8,r4
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfsx f12,r9,r4
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfsx f12,r7,r4
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r10,r4
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fadds f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsx f13,r30,r28
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r28.u32, temp.u32);
	// bdnz 0x82a27050
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A27050;
	// addi r5,r5,5
	ctx.r5.s64 = ctx.r5.s64 + 5;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r5,25
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 25, ctx.xer);
	// blt cr6,0x82a2703c
	if (ctx.cr6.lt) goto loc_82A2703C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A270D8:
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A270DC"))) PPC_WEAK_FUNC(sub_82A270DC);
PPC_FUNC_IMPL(__imp__sub_82A270DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A270E0"))) PPC_WEAK_FUNC(sub_82A270E0);
PPC_FUNC_IMPL(__imp__sub_82A270E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A270E8;
	__savegprlr_28(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a27108
	if (ctx.cr6.eq) goto loc_82A27108;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x82a2721c
	goto loc_82A2721C;
loc_82A27108:
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// lfs f0,24436(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24436);
	ctx.f0.f64 = double(temp.f32);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.r11.u64);
	// lfd f13,-80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
loc_82A2713C:
	// li r10,5
	ctx.r10.s64 = 5;
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r11,0
	ctx.r11.s64 = 0;
	// mullw r6,r31,r9
	ctx.r6.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r9.s32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82A27150:
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// add r30,r5,r11
	ctx.r30.u64 = ctx.r5.u64 + ctx.r11.u64;
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// lwz r29,28(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mullw r7,r9,r11
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// lwz r28,4(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mullw r10,r8,r6
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// mullw r8,r8,r29
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r29.s32);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r7,r7,r4
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r4.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbzx r9,r9,r4
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r4.u32);
	// lbzx r10,r10,r4
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// lbzx r8,r8,r4
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r4.u32);
	// std r7,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.r7.u64);
	// lfd f13,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// std r9,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.r9.u64);
	// lfd f12,-72(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// std r10,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.r10.u64);
	// lfd f11,-64(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// std r8,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.r8.u64);
	// lfd f10,-56(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fsubs f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fadds f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsx f13,r30,r28
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r28.u32, temp.u32);
	// bdnz 0x82a27150
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A27150;
	// addi r5,r5,5
	ctx.r5.s64 = ctx.r5.s64 + 5;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r5,25
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 25, ctx.xer);
	// blt cr6,0x82a2713c
	if (ctx.cr6.lt) goto loc_82A2713C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A2721C:
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A27220"))) PPC_WEAK_FUNC(sub_82A27220);
PPC_FUNC_IMPL(__imp__sub_82A27220) {
	PPC_FUNC_PROLOGUE();
	// rlwinm. r10,r5,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// beq 0x82a27280
	if (ctx.cr0.eq) goto loc_82A27280;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82A27234:
	// lbzx r10,r11,r4
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r10,r10,25
	ctx.r10.s64 = ctx.r10.s64 + 25;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stwx r7,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r7.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// divwu r9,r8,r10
	ctx.r9.u32 = ctx.r8.u32 / ctx.r10.u32;
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// twllei r10,0
	if (ctx.r10.u32 <= 0) __builtin_debugtrap();
	// subf. r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82a27278
	if (!ctx.cr0.eq) goto loc_82A27278;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82A27278:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bdnz 0x82a27234
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A27234;
loc_82A27280:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A27288"))) PPC_WEAK_FUNC(sub_82A27288);
PPC_FUNC_IMPL(__imp__sub_82A27288) {
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
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82a272b8
	if (!ctx.cr0.eq) goto loc_82A272B8;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x82a27304
	goto loc_82A27304;
loc_82A272B8:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,100
	ctx.r5.s64 = 100;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A272CC;
	sub_82FA7CF0(ctx, base);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A272DC;
	sub_82FA7CF0(ctx, base);
	// li r5,100
	ctx.r5.s64 = 100;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A272F0;
	sub_82FA7CF0(ctx, base);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A27300;
	sub_82FA7CF0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A27304:
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

__attribute__((alias("__imp__sub_82A2731C"))) PPC_WEAK_FUNC(sub_82A2731C);
PPC_FUNC_IMPL(__imp__sub_82A2731C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A27320"))) PPC_WEAK_FUNC(sub_82A27320);
PPC_FUNC_IMPL(__imp__sub_82A27320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82A27328;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82a27408
	if (ctx.cr0.eq) goto loc_82A27408;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82a27408
	if (!ctx.cr6.eq) goto loc_82A27408;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,100
	ctx.r5.s64 = 100;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82fa7cf0
	ctx.lr = 0x82A2737C;
	sub_82FA7CF0(ctx, base);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r29,100
	ctx.r3.s64 = ctx.r29.s64 + 100;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A2738C;
	sub_82FA7CF0(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82a273a8
	if (!ctx.cr6.eq) goto loc_82A273A8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82a270e0
	ctx.lr = 0x82A273A4;
	sub_82A270E0(ctx, base);
	// b 0x82a273b0
	goto loc_82A273B0;
loc_82A273A8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82a26fe0
	ctx.lr = 0x82A273B0;
	sub_82A26FE0(ctx, base);
loc_82A273B0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bge cr6,0x82a273e0
	if (!ctx.cr6.lt) goto loc_82A273E0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82a273d4
	if (!ctx.cr6.eq) goto loc_82A273D4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82a270e0
	ctx.lr = 0x82A273D0;
	sub_82A270E0(ctx, base);
	// b 0x82a27410
	goto loc_82A27410;
loc_82A273D4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82a26fe0
	ctx.lr = 0x82A273DC;
	sub_82A26FE0(ctx, base);
	// b 0x82a27410
	goto loc_82A27410;
loc_82A273E0:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82a27220
	ctx.lr = 0x82A273E8;
	sub_82A27220(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82a27400
	if (!ctx.cr0.lt) goto loc_82A27400;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a27220
	ctx.lr = 0x82A273FC;
	sub_82A27220(ctx, base);
	// b 0x82a27410
	goto loc_82A27410;
loc_82A27400:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a27410
	goto loc_82A27410;
loc_82A27408:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
loc_82A27410:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A27418"))) PPC_WEAK_FUNC(sub_82A27418);
PPC_FUNC_IMPL(__imp__sub_82A27418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A27420;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r30,-32250
	ctx.r30.s64 = -2113536000;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a27448
	if (ctx.cr6.eq) goto loc_82A27448;
	// lwz r4,-24632(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -24632);
	// bl 0x82691460
	ctx.lr = 0x82A27444;
	sub_82691460(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_82A27448:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a27460
	if (ctx.cr6.eq) goto loc_82A27460;
	// lwz r4,-24632(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -24632);
	// bl 0x82691460
	ctx.lr = 0x82A2745C;
	sub_82691460(ctx, base);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_82A27460:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A27468"))) PPC_WEAK_FUNC(sub_82A27468);
PPC_FUNC_IMPL(__imp__sub_82A27468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A27470;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32250
	ctx.r30.s64 = -2113536000;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,1124
	ctx.r3.s64 = 1124;
	// lwz r4,-24632(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -24632);
	// bl 0x82691410
	ctx.lr = 0x82A27488;
	sub_82691410(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a27500
	if (ctx.cr6.eq) goto loc_82A27500;
	// li r5,100
	ctx.r5.s64 = 100;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A274A4;
	sub_82FA7CF0(ctx, base);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A274B4;
	sub_82FA7CF0(ctx, base);
	// li r3,1124
	ctx.r3.s64 = 1124;
	// lwz r4,-24632(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -24632);
	// bl 0x82691410
	ctx.lr = 0x82A274C0;
	sub_82691410(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a27500
	if (ctx.cr6.eq) goto loc_82A27500;
	// li r5,100
	ctx.r5.s64 = 100;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A274DC;
	sub_82FA7CF0(ctx, base);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A274EC;
	sub_82FA7CF0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,8(r29)
	PPC_STORE_U8(ctx.r29.u32 + 8, ctx.r11.u8);
loc_82A274F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_82A27500:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82a274f8
	goto loc_82A274F8;
}

__attribute__((alias("__imp__sub_82A2750C"))) PPC_WEAK_FUNC(sub_82A2750C);
PPC_FUNC_IMPL(__imp__sub_82A2750C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A27510"))) PPC_WEAK_FUNC(sub_82A27510);
PPC_FUNC_IMPL(__imp__sub_82A27510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f1,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r8,r11,-22944
	ctx.r8.s64 = ctx.r11.s64 + -22944;
loc_82A27524:
	// li r10,3
	ctx.r10.s64 = 3;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82A27530:
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// bdnz 0x82a27530
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A27530;
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// cmpwi cr6,r9,9
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 9, ctx.xer);
	// blt cr6,0x82a27524
	if (ctx.cr6.lt) goto loc_82A27524;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A27558"))) PPC_WEAK_FUNC(sub_82A27558);
PPC_FUNC_IMPL(__imp__sub_82A27558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lfs f0,5184(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r9,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A27588"))) PPC_WEAK_FUNC(sub_82A27588);
PPC_FUNC_IMPL(__imp__sub_82A27588) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82a2759c
	if (!ctx.cr6.eq) goto loc_82A2759C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_82A2759C:
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A275A8"))) PPC_WEAK_FUNC(sub_82A275A8);
PPC_FUNC_IMPL(__imp__sub_82A275A8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r4.u32);
	// stw r5,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A275B4"))) PPC_WEAK_FUNC(sub_82A275B4);
PPC_FUNC_IMPL(__imp__sub_82A275B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A275B8"))) PPC_WEAK_FUNC(sub_82A275B8);
PPC_FUNC_IMPL(__imp__sub_82A275B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,5184(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 60, temp.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r8,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A275E4"))) PPC_WEAK_FUNC(sub_82A275E4);
PPC_FUNC_IMPL(__imp__sub_82A275E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A275E8"))) PPC_WEAK_FUNC(sub_82A275E8);
PPC_FUNC_IMPL(__imp__sub_82A275E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f4,f0
	ctx.cr6.compare(ctx.f4.f64, ctx.f0.f64);
	// bgt cr6,0x82a27604
	if (ctx.cr6.gt) goto loc_82A27604;
loc_82A275F8:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82A27604:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82a27618
	if (!ctx.cr6.eq) goto loc_82A27618;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_82A27618:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a275f8
	if (ctx.cr6.eq) goto loc_82A275F8;
	// fdivs f0,f2,f4
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f2.f64 / ctx.f4.f64));
	// li r11,0
	ctx.r11.s64 = 0;
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// ble cr6,0x82a27640
	if (!ctx.cr6.gt) goto loc_82A27640;
	// fmr f12,f3
	ctx.f12.f64 = ctx.f3.f64;
	// b 0x82a27644
	goto loc_82A27644;
loc_82A27640:
	// fmr f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f0.f64;
loc_82A27644:
	// fcmpu cr6,f3,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// bge cr6,0x82a27650
	if (!ctx.cr6.lt) goto loc_82A27650;
	// fmr f0,f3
	ctx.f0.f64 = ctx.f3.f64;
loc_82A27650:
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lfs f13,-22952(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -22952);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82a27664
	if (ctx.cr6.gt) goto loc_82A27664;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82A27664:
	// fdivs f0,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82a27678
	if (!ctx.cr6.gt) goto loc_82A27678;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82A27678:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A27688"))) PPC_WEAK_FUNC(sub_82A27688);
PPC_FUNC_IMPL(__imp__sub_82A27688) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82a276a0
	if (!ctx.cr6.eq) goto loc_82A276A0;
loc_82A27694:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_82A276A0:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82a27694
	if (ctx.cr6.eq) goto loc_82A27694;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A276C0"))) PPC_WEAK_FUNC(sub_82A276C0);
PPC_FUNC_IMPL(__imp__sub_82A276C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-19524(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -19524);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x82a27720
	if (ctx.cr6.gt) goto loc_82A27720;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82A276E0:
	// li r9,5
	ctx.r9.s64 = 5;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82A276EC:
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r9,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82a27704
	if (!ctx.cr6.gt) goto loc_82A27704;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_82A27704:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82a276ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A276EC;
	// addi r10,r10,5
	ctx.r10.s64 = ctx.r10.s64 + 5;
	// cmpwi cr6,r10,25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 25, ctx.xer);
	// blt cr6,0x82a276e0
	if (ctx.cr6.lt) goto loc_82A276E0;
	// cmplwi cr6,r7,4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 4, ctx.xer);
	// blt cr6,0x82a27728
	if (ctx.cr6.lt) goto loc_82A27728;
loc_82A27720:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82A27728:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r10,128
	ctx.r10.s64 = 128;
	// li r11,612
	ctx.r11.s64 = 612;
	// lfs f0,5184(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82A2773C:
	// lwzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// bdnz 0x82a2773c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A2773C;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// lfs f13,-22956(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -22956);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// li r11,1
	ctx.r11.s64 = 1;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fdivs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82a27798
	if (ctx.cr6.gt) goto loc_82A27798;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A27798:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A277A0"))) PPC_WEAK_FUNC(sub_82A277A0);
PPC_FUNC_IMPL(__imp__sub_82A277A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A277A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,8(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bne cr6,0x82a277e8
	if (!ctx.cr6.eq) goto loc_82A277E8;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// addi r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 + 28;
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
loc_82A277E8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r30,2
	ctx.r30.s64 = 2;
	// bl 0x82a231c0
	ctx.lr = 0x82A277F4;
	sub_82A231C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a27854
	if (ctx.cr0.eq) goto loc_82A27854;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8234cc28
	ctx.lr = 0x82A27804;
	sub_8234CC28(ctx, base);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r6,12(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r6,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
loc_82A27854:
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A27868"))) PPC_WEAK_FUNC(sub_82A27868);
PPC_FUNC_IMPL(__imp__sub_82A27868) {
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
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,5
	ctx.r11.s64 = 5;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lfs f0,5184(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
loc_82A27894:
	// lfsu f13,4(r11)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// bdnz 0x82a27894
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A27894;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lfs f13,11508(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11508);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmr f1,f11
	ctx.f1.f64 = ctx.f11.f64;
	// bl 0x82a276c0
	ctx.lr = 0x82A278B8;
	sub_82A276C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stfs f11,64(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 64, temp.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A278E8"))) PPC_WEAK_FUNC(sub_82A278E8);
PPC_FUNC_IMPL(__imp__sub_82A278E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A278F0;
	__savegprlr_28(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a27910
	if (ctx.cr6.eq) goto loc_82A27910;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f1,-22908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -22908);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82a279f0
	goto loc_82A279F0;
loc_82A27910:
	// lwz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r9,3
	ctx.r9.s64 = 3;
	// lwz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r31,-32250
	ctx.r31.s64 = -2113536000;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// lwz r8,44(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lis r3,-32250
	ctx.r3.s64 = -2113536000;
	// subf r10,r6,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r6.s64;
	// lfs f0,5184(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfs f13,-22952(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -22952);
	ctx.f13.f64 = double(temp.f32);
	// divwu r11,r11,r9
	ctx.r11.u32 = ctx.r11.u32 / ctx.r9.u32;
	// divwu r10,r10,r9
	ctx.r10.u32 = ctx.r10.u32 / ctx.r9.u32;
	// addi r3,r3,-22944
	ctx.r3.s64 = ctx.r3.s64 + -22944;
	// mullw r5,r10,r11
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// clrldi r9,r5,32
	ctx.r9.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// addi r5,r8,1
	ctx.r5.s64 = ctx.r8.s64 + 1;
	// std r9,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r9.u64);
	// lfd f12,-48(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// li r9,0
	ctx.r9.s64 = 0;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// mullw r30,r5,r10
	ctx.r30.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// fdivs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
loc_82A27988:
	// add r8,r9,r6
	ctx.r8.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lfsu f12,12(r3)
	ctx.fpscr.disableFlushMode();
	ea = 12 + ctx.r3.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r3.u32 = ea;
	ctx.f12.f64 = double(temp.f32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mullw r8,r8,r5
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r31,r30,r8
	ctx.r31.u64 = ctx.r30.u64 + ctx.r8.u64;
	// add r29,r8,r11
	ctx.r29.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r28,r31,r11
	ctx.r28.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r31,r31,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r28,r28,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r29,r29,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lfsx f11,r31,r4
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f10,r28,r4
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r4.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// lfsx f10,r29,r4
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r4.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfsx f9,r8,r4
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fadds f11,f11,f9
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmadds f0,f12,f13,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f0.f64));
	// bdnz 0x82a27988
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A27988;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// lfs f13,-30800(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30800);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
loc_82A279F0:
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A279F4"))) PPC_WEAK_FUNC(sub_82A279F4);
PPC_FUNC_IMPL(__imp__sub_82A279F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A279F8"))) PPC_WEAK_FUNC(sub_82A279F8);
PPC_FUNC_IMPL(__imp__sub_82A279F8) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f0,-22960(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -22960);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// blt cr6,0x82a27a18
	if (ctx.cr6.lt) goto loc_82A27A18;
	// fmr f0,f2
	ctx.f0.f64 = ctx.f2.f64;
loc_82A27A18:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f13,-15356(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15356);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// ble cr6,0x82a27a40
	if (!ctx.cr6.gt) goto loc_82A27A40;
	// fdivs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 / ctx.f0.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,21500(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21500);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82a27a44
	if (ctx.cr6.gt) goto loc_82A27A44;
loc_82A27A40:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A27A44:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a27a5c
	if (!ctx.cr0.eq) goto loc_82A27A5C;
	// bl 0x82a276c0
	ctx.lr = 0x82A27A50;
	sub_82A276C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x82a27a60
	if (ctx.cr0.eq) goto loc_82A27A60;
loc_82A27A5C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82A27A60:
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

__attribute__((alias("__imp__sub_82A27A74"))) PPC_WEAK_FUNC(sub_82A27A74);
PPC_FUNC_IMPL(__imp__sub_82A27A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A27A78"))) PPC_WEAK_FUNC(sub_82A27A78);
PPC_FUNC_IMPL(__imp__sub_82A27A78) {
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
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lfs f0,64(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// bl 0x82a277a0
	ctx.lr = 0x82A27AA8;
	sub_82A277A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82a27ac0
	if (!ctx.cr0.lt) goto loc_82A27AC0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a277a0
	ctx.lr = 0x82A27ABC;
	sub_82A277A0(ctx, base);
	// b 0x82a27ac4
	goto loc_82A27AC4;
loc_82A27AC0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A27AC4:
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

__attribute__((alias("__imp__sub_82A27ADC"))) PPC_WEAK_FUNC(sub_82A27ADC);
PPC_FUNC_IMPL(__imp__sub_82A27ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A27AE0"))) PPC_WEAK_FUNC(sub_82A27AE0);
PPC_FUNC_IMPL(__imp__sub_82A27AE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A27AE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = ctx.f1.f64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// fmr f7,f2
	ctx.f7.f64 = ctx.f2.f64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a27b24
	if (ctx.cr6.eq) goto loc_82A27B24;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x82a27c34
	goto loc_82A27C34;
loc_82A27B24:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a278e8
	ctx.lr = 0x82A27B2C;
	sub_82A278E8(ctx, base);
	// fsubs f13,f1,f8
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f8.f64));
	// fmuls f0,f8,f7
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// li r11,1
	ctx.r11.s64 = 1;
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82a27b4c
	if (ctx.cr6.gt) goto loc_82A27B4C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A27B4C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a27b7c
	if (ctx.cr0.eq) goto loc_82A27B7C;
	// fcmpu cr6,f2,f8
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f2.f64, ctx.f8.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a27b64
	if (ctx.cr6.lt) goto loc_82A27B64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A27B64:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// b 0x82a27b80
	goto loc_82A27B80;
loc_82A27B7C:
	// li r6,0
	ctx.r6.s64 = 0;
loc_82A27B80:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,5
	ctx.r11.s64 = 5;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lfs f0,5184(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
loc_82A27B9C:
	// lfsu f13,4(r11)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// bdnz 0x82a27b9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A27B9C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// lfs f13,11508(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11508);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bne cr6,0x82a27bc4
	if (!ctx.cr6.eq) goto loc_82A27BC4;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82a27c20
	goto loc_82A27C20;
loc_82A27BC4:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f1,-22960(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -22960);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f11,f1
	ctx.cr6.compare(ctx.f11.f64, ctx.f1.f64);
	// blt cr6,0x82a27bd8
	if (ctx.cr6.lt) goto loc_82A27BD8;
	// fmr f1,f11
	ctx.f1.f64 = ctx.f11.f64;
loc_82A27BD8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a279f8
	ctx.lr = 0x82A27BE0;
	sub_82A279F8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a27bf0
	if (ctx.cr0.eq) goto loc_82A27BF0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a27c20
	goto loc_82A27C20;
loc_82A27BF0:
	// fdivs f13,f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f2.f64 / ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,21500(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21500);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82a27c0c
	if (ctx.cr6.gt) goto loc_82A27C0C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A27C0C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82A27C20:
	// stfs f11,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f2,0(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82A27C34:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A27C3C"))) PPC_WEAK_FUNC(sub_82A27C3C);
PPC_FUNC_IMPL(__imp__sub_82A27C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A27C40"))) PPC_WEAK_FUNC(sub_82A27C40);
PPC_FUNC_IMPL(__imp__sub_82A27C40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82A27C48;
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82a27c84
	if (!ctx.cr6.eq) goto loc_82A27C84;
loc_82A27C78:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82a27d7c
	goto loc_82A27D7C;
loc_82A27C84:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a27c78
	if (ctx.cr6.eq) goto loc_82A27C78;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82a27c78
	if (ctx.cr6.eq) goto loc_82A27C78;
	// lwz r25,260(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82a27c78
	if (ctx.cr6.eq) goto loc_82A27C78;
	// lwz r26,268(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82a27c78
	if (ctx.cr6.eq) goto loc_82A27C78;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a27a78
	ctx.lr = 0x82A27CB8;
	sub_82A27A78(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bge 0x82a27cd0
	if (!ctx.cr0.lt) goto loc_82A27CD0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a27a78
	ctx.lr = 0x82A27CCC;
	sub_82A27A78(ctx, base);
	// b 0x82a27d7c
	goto loc_82A27D7C;
loc_82A27CD0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lfs f0,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bne cr6,0x82a27d34
	if (!ctx.cr6.eq) goto loc_82A27D34;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82a27ae0
	ctx.lr = 0x82A27D08;
	sub_82A27AE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82a27d5c
	if (!ctx.cr0.lt) goto loc_82A27D5C;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a27ae0
	ctx.lr = 0x82A27D30;
	sub_82A27AE0(ctx, base);
	// b 0x82a27d7c
	goto loc_82A27D7C;
loc_82A27D34:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82a27868
	ctx.lr = 0x82A27D40;
	sub_82A27868(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82a27d5c
	if (!ctx.cr0.lt) goto loc_82A27D5C;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a27868
	ctx.lr = 0x82A27D58;
	sub_82A27868(ctx, base);
	// b 0x82a27d7c
	goto loc_82A27D7C;
loc_82A27D5C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// stfs f0,0(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
loc_82A27D7C:
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

__attribute__((alias("__imp__sub_82A27D8C"))) PPC_WEAK_FUNC(sub_82A27D8C);
PPC_FUNC_IMPL(__imp__sub_82A27D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A27D90"))) PPC_WEAK_FUNC(sub_82A27D90);
PPC_FUNC_IMPL(__imp__sub_82A27D90) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82A27DA4"))) PPC_WEAK_FUNC(sub_82A27DA4);
PPC_FUNC_IMPL(__imp__sub_82A27DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A27DA8"))) PPC_WEAK_FUNC(sub_82A27DA8);
PPC_FUNC_IMPL(__imp__sub_82A27DA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82A27DBC"))) PPC_WEAK_FUNC(sub_82A27DBC);
PPC_FUNC_IMPL(__imp__sub_82A27DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A27DC0"))) PPC_WEAK_FUNC(sub_82A27DC0);
PPC_FUNC_IMPL(__imp__sub_82A27DC0) {
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
	// bl 0x82a27f68
	ctx.lr = 0x82A27DD8;
	sub_82A27F68(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// li r5,28
	ctx.r5.s64 = 28;
	// ori r10,r10,63156
	ctx.r10.u64 = ctx.r10.u64 | 63156;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a81490
	ctx.lr = 0x82A27DF8;
	sub_82A81490(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a27e08
	if (ctx.cr0.eq) goto loc_82A27E08;
	// bl 0x82a28f08
	ctx.lr = 0x82A27E04;
	sub_82A28F08(ctx, base);
	// b 0x82a27e0c
	goto loc_82A27E0C;
loc_82A27E08:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A27E0C:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a27e24
	if (!ctx.cr6.eq) goto loc_82A27E24;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82a27e2c
	goto loc_82A27E2C;
loc_82A27E24:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a29048
	ctx.lr = 0x82A27E2C;
	sub_82A29048(ctx, base);
loc_82A27E2C:
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

__attribute__((alias("__imp__sub_82A27E40"))) PPC_WEAK_FUNC(sub_82A27E40);
PPC_FUNC_IMPL(__imp__sub_82A27E40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A27E48;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r6,60
	ctx.r30.s64 = ctx.r6.s64 + 60;
	// addi r7,r6,16
	ctx.r7.s64 = ctx.r6.s64 + 16;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82a29ce8
	ctx.lr = 0x82A27E60;
	sub_82A29CE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82a27f5c
	if (!ctx.cr0.eq) goto loc_82A27F5C;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r3,24032(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24032);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a27e8c
	if (ctx.cr6.eq) goto loc_82A27E8C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A27E8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A27E8C:
	// lis r4,1
	ctx.r4.s64 = 65536;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,3584
	ctx.r4.u64 = ctx.r4.u64 | 3584;
	// bl 0x82a0d110
	ctx.lr = 0x82A27E9C;
	sub_82A0D110(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addis r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 65536;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r5,-30976
	ctx.r5.s64 = ctx.r5.s64 + -30976;
	// bl 0x82a29c78
	ctx.lr = 0x82A27EB4;
	sub_82A29C78(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x82a27eec
	if (ctx.cr0.eq) goto loc_82A27EEC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a27ee4
	if (ctx.cr6.eq) goto loc_82A27EE4;
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
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a81d88
	ctx.lr = 0x82A27EE4;
	sub_82A81D88(ctx, base);
loc_82A27EE4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x82a27f5c
	goto loc_82A27F5C;
loc_82A27EEC:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,56(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a29220
	ctx.lr = 0x82A27EFC;
	sub_82A29220(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x82a27f34
	if (ctx.cr0.eq) goto loc_82A27F34;
	// beq cr6,0x82a27f2c
	if (ctx.cr6.eq) goto loc_82A27F2C;
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
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a81d88
	ctx.lr = 0x82A27F2C;
	sub_82A81D88(ctx, base);
loc_82A27F2C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82a27f5c
	goto loc_82A27F5C;
loc_82A27F34:
	// beq cr6,0x82a27f58
	if (ctx.cr6.eq) goto loc_82A27F58;
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
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a81d88
	ctx.lr = 0x82A27F58;
	sub_82A81D88(ctx, base);
loc_82A27F58:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A27F5C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A27F64"))) PPC_WEAK_FUNC(sub_82A27F64);
PPC_FUNC_IMPL(__imp__sub_82A27F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A27F68"))) PPC_WEAK_FUNC(sub_82A27F68);
PPC_FUNC_IMPL(__imp__sub_82A27F68) {
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
	// beq cr6,0x82a27fa4
	if (ctx.cr6.eq) goto loc_82A27FA4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A27F9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82A27FA4:
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

__attribute__((alias("__imp__sub_82A27FB8"))) PPC_WEAK_FUNC(sub_82A27FB8);
PPC_FUNC_IMPL(__imp__sub_82A27FB8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82a27f68
	sub_82A27F68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A27FBC"))) PPC_WEAK_FUNC(sub_82A27FBC);
PPC_FUNC_IMPL(__imp__sub_82A27FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A27FC0"))) PPC_WEAK_FUNC(sub_82A27FC0);
PPC_FUNC_IMPL(__imp__sub_82A27FC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a27f68
	ctx.lr = 0x82A27FD8;
	sub_82A27F68(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// li r5,76
	ctx.r5.s64 = 76;
	// ori r10,r10,63156
	ctx.r10.u64 = ctx.r10.u64 | 63156;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a81490
	ctx.lr = 0x82A27FF8;
	sub_82A81490(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a28008
	if (ctx.cr0.eq) goto loc_82A28008;
	// bl 0x82a2a198
	ctx.lr = 0x82A28004;
	sub_82A2A198(ctx, base);
	// b 0x82a2800c
	goto loc_82A2800C;
loc_82A28008:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A2800C:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a28024
	if (!ctx.cr6.eq) goto loc_82A28024;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82a28084
	goto loc_82A28084;
loc_82A28024:
	// bl 0x82a0c140
	ctx.lr = 0x82A28028;
	sub_82A0C140(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fa5590
	ctx.lr = 0x82A28038;
	sub_82FA5590(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82a2805c
	if (!ctx.cr0.eq) goto loc_82A2805C;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r5,r11,27008
	ctx.r5.s64 = ctx.r11.s64 + 27008;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fa85a0
	ctx.lr = 0x82A28054;
	sub_82FA85A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82a28068
	if (ctx.cr0.eq) goto loc_82A28068;
loc_82A2805C:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82a28084
	goto loc_82A28084;
loc_82A28068:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82a2a360
	ctx.lr = 0x82A28074;
	sub_82A2A360(ctx, base);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// srawi r10,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 31;
	// ori r11,r11,16389
	ctx.r11.u64 = ctx.r11.u64 | 16389;
	// and r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_82A28084:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A28098"))) PPC_WEAK_FUNC(sub_82A28098);
PPC_FUNC_IMPL(__imp__sub_82A28098) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// li r12,-48
	ctx.r12.s64 = -48;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a28280
	if (ctx.cr6.eq) goto loc_82A28280;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82a28280
	if (ctx.cr6.eq) goto loc_82A28280;
	// lis r9,-31962
	ctx.r9.s64 = -2094661632;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// addi r10,r11,-30656
	ctx.r10.s64 = ctx.r11.s64 + -30656;
	// lwz r11,-30640(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30640);
	// clrlwi. r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82a28100
	if (!ctx.cr0.eq) goto loc_82A28100;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r8,r8,-29680
	ctx.r8.s64 = ctx.r8.s64 + -29680;
	// stw r11,-30640(r9)
	PPC_STORE_U32(ctx.r9.u32 + -30640, ctx.r11.u32);
	// lvx128 v62,r0,r8
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// stvx128 v62,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82a28104
	goto loc_82A28104;
loc_82A28100:
	// lvx128 v62,r0,r10
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
loc_82A28104:
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// rlwinm. r8,r11,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r10,r10,-30688
	ctx.r10.s64 = ctx.r10.s64 + -30688;
	// bne 0x82a28128
	if (!ctx.cr0.eq) goto loc_82A28128;
	// li r8,16
	ctx.r8.s64 = 16;
	// stvx128 v62,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,-30640(r9)
	PPC_STORE_U32(ctx.r9.u32 + -30640, ctx.r11.u32);
	// stvx128 v62,r10,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82A28128:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82a2813c
	if (ctx.cr6.eq) goto loc_82A2813C;
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// lvx128 v63,r0,r6
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82A2813C:
	// lvx128 v63,r0,r6
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// vmsum3fp128 v61,v63,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v61.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v63.f32), 0xEF));
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lfs f0,-25140(r9)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25140);
	ctx.f0.f64 = double(temp.f32);
	// stvx128 v61,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82a28168
	if (!ctx.cr6.lt) goto loc_82A28168;
	// vor128 v63,v62,v62
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_load_si128((__m128i*)ctx.v62.u8));
loc_82A28168:
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r9,11976
	ctx.r10.s64 = ctx.r9.s64 + 11976;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vsubfp128 v13,v63,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v0.f32)));
	// lvlx128 v63,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v12,v63,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// vmaddfp v9,v13,v12,v0
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v9,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82a28280
	if (!ctx.cr6.eq) goto loc_82A28280;
	// vmsum4fp128 v61,v9,v9
	_mm_store_ps(ctx.v61.f32, _mm_dp_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v9.f32), 0xFF));
	// vspltisw128 v60,1
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_set1_epi32(int(0x1)));
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// vpermwi128 v59,v62,135
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0x78));
	// vpermwi128 v13,v62,99
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0x9C));
	// vcsxwfp128 v8,v60,1
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v60.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3F000000)))));
	// vrsqrtefp128 v0,v61
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v61.f32))));
	// vor128 v12,v61,v61
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v61.u8));
	// vmulfp128 v11,v61,v8
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v8.f32)));
	// vcmpeqfp128 v7,v61,v63
	_mm_store_ps(ctx.v7.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v10,v0,v0
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v8,v11,v10,v8
	_mm_store_ps(ctx.v8.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v8.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v8,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v0,v9,v0
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v0.f32)));
	// vsel v11,v0,v12,v7
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v12.u8))));
	// vpermwi128 v61,v11,99
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x9C));
	// vpermwi128 v0,v11,135
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x78));
	// vmulfp128 v127,v61,v59
	_mm_store_ps(ctx.v127.f32, _mm_mul_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v59.f32)));
	// vnmsubfp128 v127,v0,v13,v127
	_mm_store_ps(ctx.v127.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v127.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vcmpeqfp128. v61,v127,v63
	_mm_store_ps(ctx.v61.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v63.f32)));
	ctx.cr6.setFromMask(_mm_load_ps(ctx.v61.f32), 0xF);
	// bge cr6,0x82a28208
	if (!ctx.cr6.lt) goto loc_82A28208;
	// vupkd3d128 v63,v63,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v63.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v63.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v63 = vTemp;
	// vpermwi128 v0,v63,234
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0x15));
	// vpermwi128 v13,v63,186
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0x45));
	// vpermwi128 v12,v63,174
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0x51));
	// vpermwi128 v11,v63,171
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0x54));
	// b 0x82a28248
	goto loc_82A28248;
loc_82A28208:
	// vmsum4fp128 v63,v62,v11
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v63.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v11.f32), 0xFF));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stvx128 v63,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82fa3ec8
	ctx.lr = 0x82A2821C;
	sub_82FA3EC8(ctx, base);
	// vor128 v1,v127,v127
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// bl 0x8247a400
	ctx.lr = 0x82A2822C;
	sub_8247A400(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// li r10,32
	ctx.r10.s64 = 32;
	// lvx128 v0,r0,r3
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// li r9,48
	ctx.r9.s64 = 48;
	// lvx128 v13,r3,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r3,r10
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r3,r9
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
loc_82A28248:
	// li r10,20
	ctx.r10.s64 = 20;
	// addi r11,r30,32
	ctx.r11.s64 = ctx.r30.s64 + 32;
	// subf r9,r30,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r30.s64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82A28258:
	// lvx128 v63,r9,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vspltw128 v8,v63,2
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0x55));
	// vspltw128 v9,v63,1
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xAA));
	// vspltw128 v10,v63,0
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// vmaddfp v8,v12,v8,v11
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v9,v9,v13,v8
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v8.f32)));
	// vmaddfp v10,v10,v0,v9
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v9.f32)));
	// stvx128 v10,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x82a28258
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A28258;
loc_82A28280:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// li r0,-48
	ctx.r0.s64 = -48;
	// lvx128 v127,r1,r0
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF), VectorMaskL));
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A282A0"))) PPC_WEAK_FUNC(sub_82A282A0);
PPC_FUNC_IMPL(__imp__sub_82A282A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82A282A8;
	__savegprlr_26(ctx, base);
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// ld r30,0(r5)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// lis r29,-31962
	ctx.r29.s64 = -2094661632;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,-14928(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14928);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// ld r31,-30720(r29)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r29.u32 + -30720);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// subf r3,r31,r30
	ctx.r3.s64 = ctx.r30.s64 - ctx.r31.s64;
	// stw r11,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, ctx.r11.u32);
	// bl 0x82fa9760
	ctx.lr = 0x82A282E0;
	sub_82FA9760(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmpldi cr6,r31,0
	ctx.cr6.compare<uint64_t>(ctx.r31.u64, 0, ctx.xer);
	// lfs f0,-23580(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23580);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bne cr6,0x82a28310
	if (!ctx.cr6.eq) goto loc_82A28310;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lfs f0,5184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_82A28310:
	// std r30,-30720(r29)
	PPC_STORE_U64(ctx.r29.u32 + -30720, ctx.r30.u64);
	// li r5,448
	ctx.r5.s64 = 448;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a75220
	ctx.lr = 0x82A28324;
	sub_82A75220(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82a28344
	if (ctx.cr6.eq) goto loc_82A28344;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a28098
	ctx.lr = 0x82A28344;
	sub_82A28098(ctx, base);
loc_82A28344:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a2a7e8
	ctx.lr = 0x82A28358;
	sub_82A2A7E8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a28370
	if (ctx.cr6.eq) goto loc_82A28370;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lfs f0,27160(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27160);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_82A28370:
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// lis r29,-31962
	ctx.r29.s64 = -2094661632;
	// lwz r30,-30704(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30704);
	// lwz r11,-30708(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -30708);
	// dcbt r0,r11
	// li r10,128
	ctx.r10.s64 = 128;
	// dcbt r10,r11
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x82a283d0
	if (ctx.cr0.eq) goto loc_82A283D0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82A28398:
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A283B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-30708(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -30708);
	// li r10,128
	ctx.r10.s64 = 128;
	// lwzx r9,r31,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// dcbt r10,r9
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82a28398
	if (!ctx.cr0.eq) goto loc_82A28398;
loc_82A283D0:
	// lwz r3,544(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 544);
	// bl 0x82faddd8
	ctx.lr = 0x82A283D8;
	sub_82FADDD8(ctx, base);
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A283E0"))) PPC_WEAK_FUNC(sub_82A283E0);
PPC_FUNC_IMPL(__imp__sub_82A283E0) {
	PPC_FUNC_PROLOGUE();
	// li r10,20
	ctx.r10.s64 = 20;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82A283F0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a28450
	if (ctx.cr6.eq) goto loc_82A28450;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82a28450
	if (ctx.cr6.eq) goto loc_82A28450;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82a28450
	if (ctx.cr6.eq) goto loc_82A28450;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82a28450
	if (ctx.cr6.eq) goto loc_82A28450;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82a28450
	if (ctx.cr6.eq) goto loc_82A28450;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x82a28450
	if (ctx.cr6.eq) goto loc_82A28450;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x82a28450
	if (ctx.cr6.eq) goto loc_82A28450;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x82a28450
	if (ctx.cr6.eq) goto loc_82A28450;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// beq cr6,0x82a28450
	if (ctx.cr6.eq) goto loc_82A28450;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x82a28450
	if (ctx.cr6.eq) goto loc_82A28450;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// beq cr6,0x82a28450
	if (ctx.cr6.eq) goto loc_82A28450;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x82a2845c
	if (!ctx.cr6.eq) goto loc_82A2845C;
loc_82A28450:
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// or r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 | ctx.r3.u64;
loc_82A2845C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82a283f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A283F0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A28468"))) PPC_WEAK_FUNC(sub_82A28468);
PPC_FUNC_IMPL(__imp__sub_82A28468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A28470;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 1;
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// addi r10,r7,1
	ctx.r10.s64 = ctx.r7.s64 + 1;
	// std r8,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r8.u64);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// addi r30,r3,12
	ctx.r30.s64 = ctx.r3.s64 + 12;
	// std r9,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r9.u64);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r5,196(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// bl 0x82a2ea38
	ctx.lr = 0x82A284B0;
	sub_82A2EA38(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r5,188(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r4,184(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82a2e9f8
	ctx.lr = 0x82A284C4;
	sub_82A2E9F8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// bl 0x82a2aec8
	ctx.lr = 0x82A284E0;
	sub_82A2AEC8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a28500
	if (ctx.cr0.lt) goto loc_82A28500;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,212(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82a2b650
	ctx.lr = 0x82A28500;
	sub_82A2B650(ctx, base);
loc_82A28500:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2850C"))) PPC_WEAK_FUNC(sub_82A2850C);
PPC_FUNC_IMPL(__imp__sub_82A2850C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A28510"))) PPC_WEAK_FUNC(sub_82A28510);
PPC_FUNC_IMPL(__imp__sub_82A28510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A28518;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 1;
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// addi r10,r7,1
	ctx.r10.s64 = ctx.r7.s64 + 1;
	// std r8,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r8.u64);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// addi r30,r3,12
	ctx.r30.s64 = ctx.r3.s64 + 12;
	// std r9,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r9.u64);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r5,196(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// bl 0x82a2ea38
	ctx.lr = 0x82A28558;
	sub_82A2EA38(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r5,188(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r4,184(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82a2e9f8
	ctx.lr = 0x82A2856C;
	sub_82A2E9F8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x82a2aec8
	ctx.lr = 0x82A28588;
	sub_82A2AEC8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a285a0
	if (ctx.cr0.lt) goto loc_82A285A0;
	// lwz r5,220(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// lwz r4,212(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82a2b650
	ctx.lr = 0x82A285A0;
	sub_82A2B650(ctx, base);
loc_82A285A0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A285AC"))) PPC_WEAK_FUNC(sub_82A285AC);
PPC_FUNC_IMPL(__imp__sub_82A285AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A285B0"))) PPC_WEAK_FUNC(sub_82A285B0);
PPC_FUNC_IMPL(__imp__sub_82A285B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82A285B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a28618
	if (ctx.cr6.eq) goto loc_82A28618;
	// bl 0x826914b0
	ctx.lr = 0x82A285D4;
	sub_826914B0(ctx, base);
	// li r11,520
	ctx.r11.s64 = 520;
	// li r31,0
	ctx.r31.s64 = 0;
	// divwu. r29,r3,r11
	ctx.r29.u32 = ctx.r3.u32 / ctx.r11.u32;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82a28604
	if (ctx.cr0.eq) goto loc_82A28604;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82A285E8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x828b2440
	ctx.lr = 0x82A285F4;
	sub_828B2440(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,520
	ctx.r30.s64 = ctx.r30.s64 + 520;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82a285e8
	if (ctx.cr6.lt) goto loc_82A285E8;
loc_82A28604:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82691460
	ctx.lr = 0x82A28610;
	sub_82691460(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82A28618:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A28620"))) PPC_WEAK_FUNC(sub_82A28620);
PPC_FUNC_IMPL(__imp__sub_82A28620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A28628;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mulli r3,r30,520
	ctx.r3.s64 = ctx.r30.s64 * 520;
	// bl 0x82691410
	ctx.lr = 0x82A2863C;
	sub_82691410(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82a2866c
	if (ctx.cr0.eq) goto loc_82A2866C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a2866c
	if (ctx.cr6.eq) goto loc_82A2866C;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82A28650:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a28660
	if (ctx.cr6.eq) goto loc_82A28660;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2ae88
	ctx.lr = 0x82A28660;
	sub_82A2AE88(ctx, base);
loc_82A28660:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,520
	ctx.r31.s64 = ctx.r31.s64 + 520;
	// bne 0x82a28650
	if (!ctx.cr0.eq) goto loc_82A28650;
loc_82A2866C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A28678"))) PPC_WEAK_FUNC(sub_82A28678);
PPC_FUNC_IMPL(__imp__sub_82A28678) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mulli r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 * 28;
	// bl 0x82691410
	ctx.lr = 0x82A28698;
	sub_82691410(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a286e8
	if (ctx.cr0.eq) goto loc_82A286E8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a286e8
	if (ctx.cr6.eq) goto loc_82A286E8;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r9,-15104
	ctx.r9.s64 = ctx.r9.s64 + -15104;
loc_82A286BC:
	// addic. r8,r11,-20
	ctx.xer.ca = ctx.r11.u32 > 19;
	ctx.r8.s64 = ctx.r11.s64 + -20;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82a286e0
	if (ctx.cr0.eq) goto loc_82A286E0;
	// stw r9,-20(r11)
	PPC_STORE_U32(ctx.r11.u32 + -20, ctx.r9.u32);
	// stw r10,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r10.u32);
	// stw r10,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r10.u32);
	// stw r10,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r10.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,-16(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16, ctx.r10.u32);
loc_82A286E0:
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// bdnz 0x82a286bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A286BC;
loc_82A286E8:
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

__attribute__((alias("__imp__sub_82A286FC"))) PPC_WEAK_FUNC(sub_82A286FC);
PPC_FUNC_IMPL(__imp__sub_82A286FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A28700"))) PPC_WEAK_FUNC(sub_82A28700);
PPC_FUNC_IMPL(__imp__sub_82A28700) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x82a28620
	ctx.lr = 0x82A28720;
	sub_82A28620(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82a28738
	if (!ctx.cr0.eq) goto loc_82A28738;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82a28754
	goto loc_82A28754;
loc_82A28738:
	// bl 0x82a2ae58
	ctx.lr = 0x82A2873C;
	sub_82A2AE58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lis r10,-32761
	ctx.r10.s64 = -2147024896;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// ori r10,r10,14
	ctx.r10.u64 = ctx.r10.u64 | 14;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_82A28754:
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

__attribute__((alias("__imp__sub_82A28768"))) PPC_WEAK_FUNC(sub_82A28768);
PPC_FUNC_IMPL(__imp__sub_82A28768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A28770;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r3,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// oris r30,r11,8192
	ctx.r30.u64 = ctx.r11.u64 | 536870912;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a28678
	ctx.lr = 0x82A2878C;
	sub_82A28678(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82a287a0
	if (!ctx.cr0.eq) goto loc_82A287A0;
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// b 0x82a287d0
	goto loc_82A287D0;
loc_82A287A0:
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a28700
	ctx.lr = 0x82A287AC;
	sub_82A28700(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82a287bc
	if (ctx.cr0.lt) goto loc_82A287BC;
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// b 0x82a287d0
	goto loc_82A287D0;
loc_82A287BC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A287D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A287D0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A287DC"))) PPC_WEAK_FUNC(sub_82A287DC);
PPC_FUNC_IMPL(__imp__sub_82A287DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A287E0"))) PPC_WEAK_FUNC(sub_82A287E0);
PPC_FUNC_IMPL(__imp__sub_82A287E0) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,-15104
	ctx.r11.s64 = ctx.r11.s64 + -15104;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82a285b0
	ctx.lr = 0x82A28814;
	sub_82A285B0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a28824
	if (ctx.cr0.eq) goto loc_82A28824;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x82A28824;
	sub_82691540(ctx, base);
loc_82A28824:
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

__attribute__((alias("__imp__sub_82A28840"))) PPC_WEAK_FUNC(sub_82A28840);
PPC_FUNC_IMPL(__imp__sub_82A28840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82A28848;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a288ac
	if (ctx.cr6.eq) goto loc_82A288AC;
	// bl 0x826914b0
	ctx.lr = 0x82A28864;
	sub_826914B0(ctx, base);
	// li r11,28
	ctx.r11.s64 = 28;
	// li r31,0
	ctx.r31.s64 = 0;
	// divwu. r29,r3,r11
	ctx.r29.u32 = ctx.r3.u32 / ctx.r11.u32;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82a28898
	if (ctx.cr0.eq) goto loc_82A28898;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82A28878:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82a287e0
	ctx.lr = 0x82A28888;
	sub_82A287E0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82a28878
	if (ctx.cr6.lt) goto loc_82A28878;
loc_82A28898:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82691460
	ctx.lr = 0x82A288A4;
	sub_82691460(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82A288AC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A288B4"))) PPC_WEAK_FUNC(sub_82A288B4);
PPC_FUNC_IMPL(__imp__sub_82A288B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A288B8"))) PPC_WEAK_FUNC(sub_82A288B8);
PPC_FUNC_IMPL(__imp__sub_82A288B8) {
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
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82a28840
	ctx.lr = 0x82A288D8;
	sub_82A28840(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A288E8"))) PPC_WEAK_FUNC(sub_82A288E8);
PPC_FUNC_IMPL(__imp__sub_82A288E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A288F0;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 1;
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// addi r10,r7,1
	ctx.r10.s64 = ctx.r7.s64 + 1;
	// std r8,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r8.u64);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// std r9,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r9.u64);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r5,196(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// bl 0x82a2bfb8
	ctx.lr = 0x82A28930;
	sub_82A2BFB8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r5,188(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r4,184(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82a2bf78
	ctx.lr = 0x82A28944;
	sub_82A2BF78(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// bl 0x82a2c0a0
	ctx.lr = 0x82A28960;
	sub_82A2C0A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a28980
	if (ctx.cr0.lt) goto loc_82A28980;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,212(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82a2da38
	ctx.lr = 0x82A28980;
	sub_82A2DA38(ctx, base);
loc_82A28980:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2898C"))) PPC_WEAK_FUNC(sub_82A2898C);
PPC_FUNC_IMPL(__imp__sub_82A2898C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A28990"))) PPC_WEAK_FUNC(sub_82A28990);
PPC_FUNC_IMPL(__imp__sub_82A28990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A28998;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 1;
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// addi r10,r7,1
	ctx.r10.s64 = ctx.r7.s64 + 1;
	// std r8,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r8.u64);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// std r9,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r9.u64);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r5,196(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// bl 0x82a2bfb8
	ctx.lr = 0x82A289D8;
	sub_82A2BFB8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r5,188(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r4,184(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82a2bf78
	ctx.lr = 0x82A289EC;
	sub_82A2BF78(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x82a2c0a0
	ctx.lr = 0x82A28A08;
	sub_82A2C0A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a28a20
	if (ctx.cr0.lt) goto loc_82A28A20;
	// lwz r5,220(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// lwz r4,212(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82a2da38
	ctx.lr = 0x82A28A20;
	sub_82A2DA38(ctx, base);
loc_82A28A20:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A28A2C"))) PPC_WEAK_FUNC(sub_82A28A2C);
PPC_FUNC_IMPL(__imp__sub_82A28A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A28A30"))) PPC_WEAK_FUNC(sub_82A28A30);
PPC_FUNC_IMPL(__imp__sub_82A28A30) {
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
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,2384
	ctx.r5.s64 = 2384;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-28960(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28960);
	// bl 0x82a81490
	ctx.lr = 0x82A28A60;
	sub_82A81490(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a28a70
	if (ctx.cr0.eq) goto loc_82A28A70;
	// bl 0x828b2440
	ctx.lr = 0x82A28A6C;
	sub_828B2440(ctx, base);
	// b 0x82a28a74
	goto loc_82A28A74;
loc_82A28A70:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A28A74:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// bne cr6,0x82a28a8c
	if (!ctx.cr6.eq) goto loc_82A28A8C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82a28aa4
	goto loc_82A28AA4;
loc_82A28A8C:
	// bl 0x82a2c000
	ctx.lr = 0x82A28A90;
	sub_82A2C000(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a28aa4
	if (ctx.cr0.lt) goto loc_82A28AA4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82a2be30
	ctx.lr = 0x82A28AA4;
	sub_82A2BE30(ctx, base);
loc_82A28AA4:
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

__attribute__((alias("__imp__sub_82A28ABC"))) PPC_WEAK_FUNC(sub_82A28ABC);
PPC_FUNC_IMPL(__imp__sub_82A28ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A28AC0"))) PPC_WEAK_FUNC(sub_82A28AC0);
PPC_FUNC_IMPL(__imp__sub_82A28AC0) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mulli r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 * 24;
	// bl 0x82691410
	ctx.lr = 0x82A28AE0;
	sub_82691410(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a28b30
	if (ctx.cr0.eq) goto loc_82A28B30;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a28b30
	if (ctx.cr6.eq) goto loc_82A28B30;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r9,-15012
	ctx.r9.s64 = ctx.r9.s64 + -15012;
loc_82A28B04:
	// addic. r8,r11,-16
	ctx.xer.ca = ctx.r11.u32 > 15;
	ctx.r8.s64 = ctx.r11.s64 + -16;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82a28b28
	if (ctx.cr0.eq) goto loc_82A28B28;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,-16(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16, ctx.r9.u32);
	// stw r10,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r10.u32);
	// stw r10,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r10.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r8,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r8.u32);
loc_82A28B28:
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// bdnz 0x82a28b04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A28B04;
loc_82A28B30:
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

__attribute__((alias("__imp__sub_82A28B44"))) PPC_WEAK_FUNC(sub_82A28B44);
PPC_FUNC_IMPL(__imp__sub_82A28B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A28B48"))) PPC_WEAK_FUNC(sub_82A28B48);
PPC_FUNC_IMPL(__imp__sub_82A28B48) {
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
	// bl 0x82a2dd38
	ctx.lr = 0x82A28B68;
	sub_82A2DD38(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a28b8c
	if (ctx.cr0.eq) goto loc_82A28B8C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a28b8c
	if (ctx.cr6.eq) goto loc_82A28B8C;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-28960(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28960);
	// bl 0x82a81d88
	ctx.lr = 0x82A28B8C;
	sub_82A81D88(ctx, base);
loc_82A28B8C:
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

__attribute__((alias("__imp__sub_82A28BA8"))) PPC_WEAK_FUNC(sub_82A28BA8);
PPC_FUNC_IMPL(__imp__sub_82A28BA8) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-15012
	ctx.r11.s64 = ctx.r11.s64 + -15012;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a28be4
	if (ctx.cr6.eq) goto loc_82A28BE4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82a28b48
	ctx.lr = 0x82A28BDC;
	sub_82A28B48(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_82A28BE4:
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

__attribute__((alias("__imp__sub_82A28BF8"))) PPC_WEAK_FUNC(sub_82A28BF8);
PPC_FUNC_IMPL(__imp__sub_82A28BF8) {
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
	// bl 0x82a28ba8
	ctx.lr = 0x82A28C18;
	sub_82A28BA8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a28c3c
	if (ctx.cr0.eq) goto loc_82A28C3C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a28c3c
	if (ctx.cr6.eq) goto loc_82A28C3C;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-28960(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28960);
	// bl 0x82a81d88
	ctx.lr = 0x82A28C3C;
	sub_82A81D88(ctx, base);
loc_82A28C3C:
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

__attribute__((alias("__imp__sub_82A28C58"))) PPC_WEAK_FUNC(sub_82A28C58);
PPC_FUNC_IMPL(__imp__sub_82A28C58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82A28C60;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a28cc4
	if (ctx.cr6.eq) goto loc_82A28CC4;
	// bl 0x826914b0
	ctx.lr = 0x82A28C7C;
	sub_826914B0(ctx, base);
	// li r11,24
	ctx.r11.s64 = 24;
	// li r31,0
	ctx.r31.s64 = 0;
	// divwu. r29,r3,r11
	ctx.r29.u32 = ctx.r3.u32 / ctx.r11.u32;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82a28cb0
	if (ctx.cr0.eq) goto loc_82A28CB0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82A28C90:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82a28bf8
	ctx.lr = 0x82A28CA0;
	sub_82A28BF8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82a28c90
	if (ctx.cr6.lt) goto loc_82A28C90;
loc_82A28CB0:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82691460
	ctx.lr = 0x82A28CBC;
	sub_82691460(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82A28CC4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A28CCC"))) PPC_WEAK_FUNC(sub_82A28CCC);
PPC_FUNC_IMPL(__imp__sub_82A28CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A28CD0"))) PPC_WEAK_FUNC(sub_82A28CD0);
PPC_FUNC_IMPL(__imp__sub_82A28CD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A28CD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r31,-31962
	ctx.r31.s64 = -2094661632;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-28952(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28952);
	// bl 0x82a28c58
	ctx.lr = 0x82A28CF0;
	sub_82A28C58(ctx, base);
	// lis r30,-31962
	ctx.r30.s64 = -2094661632;
	// lwz r3,-28960(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28960);
	// bl 0x82a80070
	ctx.lr = 0x82A28CFC;
	sub_82A80070(ctx, base);
	// lis r29,-31962
	ctx.r29.s64 = -2094661632;
	// lwz r4,-28952(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28952);
	// lwz r3,-28956(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -28956);
	// bl 0x82691460
	ctx.lr = 0x82A28D0C;
	sub_82691460(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,-28960(r30)
	PPC_STORE_U32(ctx.r30.u32 + -28960, ctx.r11.u32);
	// stw r10,-28956(r29)
	PPC_STORE_U32(ctx.r29.u32 + -28956, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A28D24"))) PPC_WEAK_FUNC(sub_82A28D24);
PPC_FUNC_IMPL(__imp__sub_82A28D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A28D28"))) PPC_WEAK_FUNC(sub_82A28D28);
PPC_FUNC_IMPL(__imp__sub_82A28D28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82A28D30;
	__savegprlr_24(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31962
	ctx.r30.s64 = -2094661632;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,-28960(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28960);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a28d5c
	if (ctx.cr6.eq) goto loc_82A28D5C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,1247
	ctx.r3.u64 = ctx.r3.u64 | 1247;
	// b 0x82a28e7c
	goto loc_82A28E7C;
loc_82A28D5C:
	// rlwinm r11,r3,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// lis r29,-31962
	ctx.r29.s64 = -2094661632;
	// oris r4,r11,8192
	ctx.r4.u64 = ctx.r11.u64 | 536870912;
	// lis r3,29
	ctx.r3.s64 = 1900544;
	// ori r3,r3,32768
	ctx.r3.u64 = ctx.r3.u64 | 32768;
	// stw r4,-28952(r29)
	PPC_STORE_U32(ctx.r29.u32 + -28952, ctx.r4.u32);
	// bl 0x82691410
	ctx.lr = 0x82A28D78;
	sub_82691410(ctx, base);
	// lis r26,-31962
	ctx.r26.s64 = -2094661632;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// ori r28,r11,14
	ctx.r28.u64 = ctx.r11.u64 | 14;
	// stw r3,-28956(r26)
	PPC_STORE_U32(ctx.r26.u32 + -28956, ctx.r3.u32);
	// beq 0x82a28da8
	if (ctx.cr0.eq) goto loc_82A28DA8;
	// lis r4,29
	ctx.r4.s64 = 1900544;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x82a28e88
	ctx.lr = 0x82A28D9C;
	sub_82A28E88(ctx, base);
	// stw r3,-28960(r30)
	PPC_STORE_U32(ctx.r30.u32 + -28960, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82a28dac
	if (!ctx.cr0.eq) goto loc_82A28DAC;
loc_82A28DA8:
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
loc_82A28DAC:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// blt cr6,0x82a28e40
	if (ctx.cr6.lt) goto loc_82A28E40;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-28952(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -28952);
	// bl 0x82a28ac0
	ctx.lr = 0x82A28DC8;
	sub_82A28AC0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// bne 0x82a28dd8
	if (!ctx.cr0.eq) goto loc_82A28DD8;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
loc_82A28DD8:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt cr6,0x82a28e40
	if (ctx.cr6.lt) goto loc_82A28E40;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82fa5590
	ctx.lr = 0x82A28DF0;
	sub_82FA5590(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82a28e14
	if (!ctx.cr0.eq) goto loc_82A28E14;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r5,r11,-15000
	ctx.r5.s64 = ctx.r11.s64 + -15000;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82fa85a0
	ctx.lr = 0x82A28E0C;
	sub_82FA85A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82a28e1c
	if (ctx.cr0.eq) goto loc_82A28E1C;
loc_82A28E14:
	// lis r27,-32768
	ctx.r27.s64 = -2147483648;
	// ori r27,r27,16389
	ctx.r27.u64 = ctx.r27.u64 | 16389;
loc_82A28E1C:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt cr6,0x82a28e40
	if (ctx.cr6.lt) goto loc_82A28E40;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a28a30
	ctx.lr = 0x82A28E30;
	sub_82A28A30(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt 0x82a28e40
	if (ctx.cr0.lt) goto loc_82A28E40;
	// stw r31,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r31.u32);
	// b 0x82a28e78
	goto loc_82A28E78;
loc_82A28E40:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-28952(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -28952);
	// bl 0x82a28c58
	ctx.lr = 0x82A28E4C;
	sub_82A28C58(ctx, base);
	// lwz r3,-28960(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28960);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a28e64
	if (ctx.cr6.eq) goto loc_82A28E64;
	// bl 0x82a80070
	ctx.lr = 0x82A28E5C;
	sub_82A80070(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-28960(r30)
	PPC_STORE_U32(ctx.r30.u32 + -28960, ctx.r11.u32);
loc_82A28E64:
	// lwz r3,-28956(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -28956);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a28e78
	if (ctx.cr6.eq) goto loc_82A28E78;
	// lwz r4,-28952(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -28952);
	// bl 0x82691460
	ctx.lr = 0x82A28E78;
	sub_82691460(ctx, base);
loc_82A28E78:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82A28E7C:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A28E84"))) PPC_WEAK_FUNC(sub_82A28E84);
PPC_FUNC_IMPL(__imp__sub_82A28E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A28E88"))) PPC_WEAK_FUNC(sub_82A28E88);
PPC_FUNC_IMPL(__imp__sub_82A28E88) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,44
	ctx.r5.s64 = 44;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A28EB4;
	sub_82FA7CF0(ctx, base);
	// lis r11,-32095
	ctx.r11.s64 = -2103377920;
	// li r10,48
	ctx.r10.s64 = 48;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// addi r11,r11,-16080
	ctx.r11.s64 = ctx.r11.s64 + -16080;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,4096
	ctx.r3.s64 = 4096;
	// bl 0x82a80ec0
	ctx.lr = 0x82A28EEC;
	sub_82A80EC0(ctx, base);
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

__attribute__((alias("__imp__sub_82A28F04"))) PPC_WEAK_FUNC(sub_82A28F04);
PPC_FUNC_IMPL(__imp__sub_82A28F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A28F08"))) PPC_WEAK_FUNC(sub_82A28F08);
PPC_FUNC_IMPL(__imp__sub_82A28F08) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,-14916
	ctx.r11.s64 = ctx.r11.s64 + -14916;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82c8af70
	ctx.lr = 0x82A28F30;
	sub_82C8AF70(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82A28F50"))) PPC_WEAK_FUNC(sub_82A28F50);
PPC_FUNC_IMPL(__imp__sub_82A28F50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82A28F58;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,4
	ctx.r28.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// bl 0x82a2de28
	ctx.lr = 0x82A28F84;
	sub_82A2DE28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a28fd0
	if (ctx.cr0.lt) goto loc_82A28FD0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a2ea38
	ctx.lr = 0x82A28F9C;
	sub_82A2EA38(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82a2e9f8
	ctx.lr = 0x82A28FB0;
	sub_82A2E9F8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x82a2e278
	ctx.lr = 0x82A28FC8;
	sub_82A2E278(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// b 0x82a28fd4
	goto loc_82A28FD4;
loc_82A28FD0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A28FD4:
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A28FE0"))) PPC_WEAK_FUNC(sub_82A28FE0);
PPC_FUNC_IMPL(__imp__sub_82A28FE0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x82a2dd40
	sub_82A2DD40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A28FE8"))) PPC_WEAK_FUNC(sub_82A28FE8);
PPC_FUNC_IMPL(__imp__sub_82A28FE8) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-14928
	ctx.r11.s64 = ctx.r11.s64 + -14928;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x82a29030
	if (ctx.cr0.eq) goto loc_82A29030;
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
	ctx.lr = 0x82A29030;
	sub_82A81D88(ctx, base);
loc_82A29030:
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

__attribute__((alias("__imp__sub_82A29048"))) PPC_WEAK_FUNC(sub_82A29048);
PPC_FUNC_IMPL(__imp__sub_82A29048) {
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
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// li r5,20
	ctx.r5.s64 = 20;
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
	ctx.lr = 0x82A2907C;
	sub_82A81490(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a2908c
	if (ctx.cr0.eq) goto loc_82A2908C;
	// bl 0x82a2ea80
	ctx.lr = 0x82A29088;
	sub_82A2EA80(ctx, base);
	// b 0x82a29090
	goto loc_82A29090;
loc_82A2908C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A29090:
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a290a8
	if (!ctx.cr6.eq) goto loc_82A290A8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82a290c4
	goto loc_82A290C4;
loc_82A290A8:
	// bl 0x82a2e258
	ctx.lr = 0x82A290AC;
	sub_82A2E258(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lis r10,-32761
	ctx.r10.s64 = -2147024896;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// ori r10,r10,14
	ctx.r10.u64 = ctx.r10.u64 | 14;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_82A290C4:
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

__attribute__((alias("__imp__sub_82A290D8"))) PPC_WEAK_FUNC(sub_82A290D8);
PPC_FUNC_IMPL(__imp__sub_82A290D8) {
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
	// bl 0x828b2440
	ctx.lr = 0x82A290F8;
	sub_828B2440(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a29128
	if (ctx.cr0.eq) goto loc_82A29128;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a29128
	if (ctx.cr6.eq) goto loc_82A29128;
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
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a81d88
	ctx.lr = 0x82A29128;
	sub_82A81D88(ctx, base);
loc_82A29128:
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

__attribute__((alias("__imp__sub_82A29144"))) PPC_WEAK_FUNC(sub_82A29144);
PPC_FUNC_IMPL(__imp__sub_82A29144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A29148"))) PPC_WEAK_FUNC(sub_82A29148);
PPC_FUNC_IMPL(__imp__sub_82A29148) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-14916
	ctx.r11.s64 = ctx.r11.s64 + -14916;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a29184
	if (ctx.cr6.eq) goto loc_82A29184;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82a290d8
	ctx.lr = 0x82A2917C;
	sub_82A290D8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_82A29184:
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82a2dd88
	ctx.lr = 0x82A2918C;
	sub_82A2DD88(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,-14928
	ctx.r11.s64 = ctx.r11.s64 + -14928;
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

__attribute__((alias("__imp__sub_82A291AC"))) PPC_WEAK_FUNC(sub_82A291AC);
PPC_FUNC_IMPL(__imp__sub_82A291AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A291B0"))) PPC_WEAK_FUNC(sub_82A291B0);
PPC_FUNC_IMPL(__imp__sub_82A291B0) {
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
	// bl 0x82a29148
	ctx.lr = 0x82A291D0;
	sub_82A29148(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a29200
	if (ctx.cr0.eq) goto loc_82A29200;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a29200
	if (ctx.cr6.eq) goto loc_82A29200;
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
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a81d88
	ctx.lr = 0x82A29200;
	sub_82A81D88(ctx, base);
loc_82A29200:
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

__attribute__((alias("__imp__sub_82A2921C"))) PPC_WEAK_FUNC(sub_82A2921C);
PPC_FUNC_IMPL(__imp__sub_82A2921C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A29220"))) PPC_WEAK_FUNC(sub_82A29220);
PPC_FUNC_IMPL(__imp__sub_82A29220) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82A29228;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,8640
	ctx.r5.s64 = 8640;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A29248;
	sub_82FA7CF0(ctx, base);
	// li r5,3717
	ctx.r5.s64 = 3717;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A29258;
	sub_82FA7CF0(ctx, base);
	// addi r11,r31,320
	ctx.r11.s64 = ctx.r31.s64 + 320;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// addi r5,r11,320
	ctx.r5.s64 = ctx.r11.s64 + 320;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// lis r31,-31962
	ctx.r31.s64 = -2094661632;
	// addi r11,r11,-28768
	ctx.r11.s64 = ctx.r11.s64 + -28768;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lis r9,-31962
	ctx.r9.s64 = -2094661632;
	// lis r7,-31962
	ctx.r7.s64 = -2094661632;
	// lis r3,-31962
	ctx.r3.s64 = -2094661632;
	// addi r28,r31,-28848
	ctx.r28.s64 = ctx.r31.s64 + -28848;
	// lvx128 v58,r0,r11
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r10,r10,-28784
	ctx.r10.s64 = ctx.r10.s64 + -28784;
	// addi r9,r9,-28800
	ctx.r9.s64 = ctx.r9.s64 + -28800;
	// addi r7,r7,-28816
	ctx.r7.s64 = ctx.r7.s64 + -28816;
	// addi r3,r3,-28832
	ctx.r3.s64 = ctx.r3.s64 + -28832;
	// addi r4,r30,80
	ctx.r4.s64 = ctx.r30.s64 + 80;
	// lvx128 v63,r0,r28
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lvx128 v59,r0,r10
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v60,r0,r9
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r6,r4,2
	ctx.r6.s64 = ctx.r4.s64 + 2;
	// lvx128 v61,r0,r7
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r30,106
	ctx.r30.s64 = 106;
	// lvx128 v62,r0,r3
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// addi r31,r11,-14896
	ctx.r31.s64 = ctx.r11.s64 + -14896;
loc_82A292C0:
	// li r9,40
	ctx.r9.s64 = 40;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r6,-1
	ctx.r3.s64 = ctx.r6.s64 + -1;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82A292D4:
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// lvlx128 v57,r11,r8
	temp.u32 = ctx.r11.u32 + ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r7,r8,320
	ctx.r7.s64 = ctx.r8.s64 + 320;
	// lvlx128 v56,r11,r5
	temp.u32 = ctx.r11.u32 + ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// addi r27,r1,80
	ctx.r27.s64 = ctx.r1.s64 + 80;
	// li r26,4
	ctx.r26.s64 = 4;
	// lvrx128 v55,r9,r8
	temp.u32 = ctx.r9.u32 + ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v55.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v57,v57,v55
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v55.u8)));
	// lvrx128 v55,r9,r7
	temp.u32 = ctx.r9.u32 + ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v55.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx128 v54,r11,r7
	temp.u32 = ctx.r11.u32 + ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// vor128 v55,v54,v55
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)ctx.v55.u8)));
	// lvrx128 v54,r9,r5
	temp.u32 = ctx.r9.u32 + ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v54.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v56,v56,v54
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v54.u8)));
	// vspltw128 v54,v55,1
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), 0xAA));
	// vspltw128 v53,v55,2
	_mm_store_si128((__m128i*)ctx.v53.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), 0x55));
	// vcmpgtfp128 v52,v55,v54
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v52.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v54.f32)));
	// vcmpgtfp128 v51,v57,v54
	_mm_store_ps(ctx.v51.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v54.f32)));
	// vcmpgtfp128 v57,v57,v53
	_mm_store_ps(ctx.v57.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v53.f32)));
	// vcmpgtfp128 v55,v55,v53
	_mm_store_ps(ctx.v55.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v53.f32)));
	// vcmpgtfp128 v54,v56,v54
	_mm_store_ps(ctx.v54.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v54.f32)));
	// vcmpgtfp128 v56,v56,v53
	_mm_store_ps(ctx.v56.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v53.f32)));
	// vcsxwfp128 v53,v52,0
	_mm_store_ps(ctx.v53.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v52.u32)));
	// vcsxwfp128 v52,v51,0
	_mm_store_ps(ctx.v52.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v51.u32)));
	// vcsxwfp128 v57,v57,0
	_mm_store_ps(ctx.v57.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v57.u32)));
	// vcsxwfp128 v55,v55,0
	_mm_store_ps(ctx.v55.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v55.u32)));
	// vcsxwfp128 v54,v54,0
	_mm_store_ps(ctx.v54.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v54.u32)));
	// vcsxwfp128 v56,v56,0
	_mm_store_ps(ctx.v56.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v56.u32)));
	// vmsum4fp128 v53,v53,v62
	_mm_store_ps(ctx.v53.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v62.f32), 0xFF));
	// vmsum4fp128 v52,v52,v63
	_mm_store_ps(ctx.v52.f32, _mm_dp_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v63.f32), 0xFF));
	// vmsum4fp128 v57,v57,v60
	_mm_store_ps(ctx.v57.f32, _mm_dp_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v60.f32), 0xFF));
	// vmsum4fp128 v55,v55,v59
	_mm_store_ps(ctx.v55.f32, _mm_dp_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v59.f32), 0xFF));
	// vmsum4fp128 v54,v54,v61
	_mm_store_ps(ctx.v54.f32, _mm_dp_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v61.f32), 0xFF));
	// vmsum4fp128 v56,v56,v58
	_mm_store_ps(ctx.v56.f32, _mm_dp_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v58.f32), 0xFF));
	// vaddfp128 v53,v52,v53
	_mm_store_ps(ctx.v53.f32, _mm_add_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v53.f32)));
	// vaddfp128 v57,v57,v55
	_mm_store_ps(ctx.v57.f32, _mm_add_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v55.f32)));
	// vaddfp128 v55,v53,v54
	_mm_store_ps(ctx.v55.f32, _mm_add_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v54.f32)));
	// vaddfp128 v57,v57,v56
	_mm_store_ps(ctx.v57.f32, _mm_add_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v56.f32)));
	// vcfpsxws128 v56,v55,0
	_mm_store_si128((__m128i*)ctx.v56.s32, _mm_vctsxs(_mm_load_ps(ctx.v55.f32)));
	// vcfpsxws128 v57,v57,0
	_mm_store_si128((__m128i*)ctx.v57.s32, _mm_vctsxs(_mm_load_ps(ctx.v57.f32)));
	// stvewx128 v56,r0,r28
	ea = (ctx.r28.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v56.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v57,r27,r26
	ea = (ctx.r27.u32 + ctx.r26.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v57.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lbzx r9,r9,r31
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r31.u32);
	// stbx r9,r3,r10
	PPC_STORE_U8(ctx.r3.u32 + ctx.r10.u32, ctx.r9.u8);
	// lbzx r9,r28,r31
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r31.u32);
	// stbx r9,r6,r10
	PPC_STORE_U8(ctx.r6.u32 + ctx.r10.u32, ctx.r9.u8);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bdnz 0x82a292d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A292D4;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// addi r5,r5,320
	ctx.r5.s64 = ctx.r5.s64 + 320;
	// addi r6,r6,80
	ctx.r6.s64 = ctx.r6.s64 + 80;
	// bne 0x82a292c0
	if (!ctx.cr0.eq) goto loc_82A292C0;
	// addi r6,r4,1
	ctx.r6.s64 = ctx.r4.s64 + 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// subfic r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 <= 4294967295;
	ctx.r4.s64 = -1 - ctx.r4.s64;
	// li r3,11
	ctx.r3.s64 = 11;
loc_82A293C4:
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// divw r11,r11,r3
	ctx.r11.s32 = ctx.r11.s32 / ctx.r3.s32;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x82a29434
	if (ctx.cr6.eq) goto loc_82A29434;
	// mulli r7,r11,7
	ctx.r7.s64 = ctx.r11.s64 * 7;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82A293E0:
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// divw r9,r9,r3
	ctx.r9.s32 = ctx.r9.s32 / ctx.r3.s32;
	// cmpwi cr6,r9,7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 7, ctx.xer);
	// beq cr6,0x82a29420
	if (ctx.cr6.eq) goto loc_82A29420;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mulli r9,r9,59
	ctx.r9.s64 = ctx.r9.s64 * 59;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,79
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 79, ctx.xer);
	// lbzx r8,r9,r29
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r29.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// stbx r8,r9,r29
	PPC_STORE_U8(ctx.r9.u32 + ctx.r29.u32, ctx.r8.u8);
	// blt cr6,0x82a293e0
	if (ctx.cr6.lt) goto loc_82A293E0;
loc_82A29420:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r6,r6,80
	ctx.r6.s64 = ctx.r6.s64 + 80;
	// addi r4,r4,-80
	ctx.r4.s64 = ctx.r4.s64 + -80;
	// cmpwi cr6,r5,107
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 107, ctx.xer);
	// blt cr6,0x82a293c4
	if (ctx.cr6.lt) goto loc_82A293C4;
loc_82A29434:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A29440"))) PPC_WEAK_FUNC(sub_82A29440);
PPC_FUNC_IMPL(__imp__sub_82A29440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82A29448;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82fac154
	ctx.lr = 0x82A29450;
	__savevmx_124(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-5408(r1)
	ea = -5408 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,-14544
	ctx.r11.s64 = ctx.r11.s64 + -14544;
	// li r9,32
	ctx.r9.s64 = 32;
	// li r8,48
	ctx.r8.s64 = 48;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lvx128 v127,r0,r11
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lvx128 v126,r11,r10
	simd::store_shuffled(ctx.v126, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lvx128 v125,r11,r9
	simd::store_shuffled(ctx.v125, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// subf r30,r4,r7
	ctx.r30.s64 = ctx.r7.s64 - ctx.r4.s64;
	// lvx128 v124,r11,r8
	simd::store_shuffled(ctx.v124, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// subf r28,r4,r3
	ctx.r28.s64 = ctx.r3.s64 - ctx.r4.s64;
	// li r29,108
	ctx.r29.s64 = 108;
	// addi r25,r11,-30752
	ctx.r25.s64 = ctx.r11.s64 + -30752;
loc_82A294A0:
	// li r5,5200
	ctx.r5.s64 = 5200;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a75988
	ctx.lr = 0x82A294B0;
	sub_82A75988(ctx, base);
	// li r5,320
	ctx.r5.s64 = 320;
	// add r4,r28,r31
	ctx.r4.u64 = ctx.r28.u64 + ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82a75220
	ctx.lr = 0x82A294C0;
	sub_82A75220(ctx, base);
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r1,420
	ctx.r10.s64 = ctx.r1.s64 + 420;
	// addi r11,r1,424
	ctx.r11.s64 = ctx.r1.s64 + 424;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82A294D0:
	// lfs f0,-316(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -316);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-324(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -324, temp.u32);
	// lfsu f0,-4(r11)
	ea = -4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f0.f64 = double(temp.f32);
	// stfsu f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82a294d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A294D0;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// li r10,20
	ctx.r10.s64 = 20;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lvx128 v60,r0,r9
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v63,r0,r8
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v62,r0,r7
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82A29508:
	// lvx128 v59,r11,r30
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r30.u32) & ~0xF), VectorMaskL));
	// vsldoi128 v58,v63,v62,4
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), 12));
	// lvx128 v61,r0,r25
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r25.u32) & ~0xF), VectorMaskL));
	// vsldoi128 v57,v60,v63,4
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v63.u8), 12));
	// vsldoi128 v56,v62,v59,4
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v59.u8), 12));
	// vmsum4fp128 v55,v127,v60
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v55.f32, _mm_dp_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v60.f32), 0xFF));
	// vsldoi128 v60,v59,v61,4
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v61.u8), 12));
	// vmsum4fp128 v54,v126,v63
	_mm_store_ps(ctx.v54.f32, _mm_dp_ps(_mm_load_ps(ctx.v126.f32), _mm_load_ps(ctx.v63.f32), 0xFF));
	// vmsum4fp128 v53,v125,v62
	_mm_store_ps(ctx.v53.f32, _mm_dp_ps(_mm_load_ps(ctx.v125.f32), _mm_load_ps(ctx.v62.f32), 0xFF));
	// vmsum4fp128 v59,v124,v59
	_mm_store_ps(ctx.v59.f32, _mm_dp_ps(_mm_load_ps(ctx.v124.f32), _mm_load_ps(ctx.v59.f32), 0xFF));
	// vsldoi128 v63,v57,v58,4
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v58.u8), 12));
	// vsldoi128 v62,v58,v56,4
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)ctx.v56.u8), 12));
	// vmsum4fp128 v57,v127,v57
	_mm_store_ps(ctx.v57.f32, _mm_dp_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v57.f32), 0xFF));
	// vsldoi128 v52,v56,v60,4
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v60.u8), 12));
	// vmsum4fp128 v58,v126,v58
	_mm_store_ps(ctx.v58.f32, _mm_dp_ps(_mm_load_ps(ctx.v126.f32), _mm_load_ps(ctx.v58.f32), 0xFF));
	// vsldoi128 v51,v60,v61,4
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v61.u8), 12));
	// vmsum4fp128 v56,v125,v56
	_mm_store_ps(ctx.v56.f32, _mm_dp_ps(_mm_load_ps(ctx.v125.f32), _mm_load_ps(ctx.v56.f32), 0xFF));
	// vmsum4fp128 v50,v124,v60
	_mm_store_ps(ctx.v50.f32, _mm_dp_ps(_mm_load_ps(ctx.v124.f32), _mm_load_ps(ctx.v60.f32), 0xFF));
	// vmsum4fp128 v49,v127,v63
	_mm_store_ps(ctx.v49.f32, _mm_dp_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v63.f32), 0xFF));
	// vsldoi128 v63,v63,v62,4
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), 12));
	// vmsum4fp128 v48,v126,v62
	_mm_store_ps(ctx.v48.f32, _mm_dp_ps(_mm_load_ps(ctx.v126.f32), _mm_load_ps(ctx.v62.f32), 0xFF));
	// vsldoi128 v62,v62,v52,4
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v52.u8), 12));
	// vmsum4fp128 v47,v125,v52
	_mm_store_ps(ctx.v47.f32, _mm_dp_ps(_mm_load_ps(ctx.v125.f32), _mm_load_ps(ctx.v52.f32), 0xFF));
	// vsldoi128 v61,v51,v61,4
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)ctx.v61.u8), 12));
	// vsldoi128 v52,v52,v51,4
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)ctx.v51.u8), 12));
	// vmsum4fp128 v46,v124,v51
	_mm_store_ps(ctx.v46.f32, _mm_dp_ps(_mm_load_ps(ctx.v124.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v51,v127,v63
	_mm_store_ps(ctx.v51.f32, _mm_dp_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v63.f32), 0xFF));
	// vmsum4fp128 v45,v126,v62
	_mm_store_ps(ctx.v45.f32, _mm_dp_ps(_mm_load_ps(ctx.v126.f32), _mm_load_ps(ctx.v62.f32), 0xFF));
	// vsldoi128 v60,v63,v62,4
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), 12));
	// vmsum4fp128 v43,v124,v61
	_mm_store_ps(ctx.v43.f32, _mm_dp_ps(_mm_load_ps(ctx.v124.f32), _mm_load_ps(ctx.v61.f32), 0xFF));
	// vmsum4fp128 v44,v125,v52
	_mm_store_ps(ctx.v44.f32, _mm_dp_ps(_mm_load_ps(ctx.v125.f32), _mm_load_ps(ctx.v52.f32), 0xFF));
	// vsldoi128 v63,v62,v52,4
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v52.u8), 12));
	// vsldoi128 v62,v52,v61,4
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)ctx.v61.u8), 12));
	// vaddfp128 v61,v55,v54
	_mm_store_ps(ctx.v61.f32, _mm_add_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v54.f32)));
	// vaddfp128 v59,v53,v59
	_mm_store_ps(ctx.v59.f32, _mm_add_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v59.f32)));
	// vaddfp128 v58,v57,v58
	_mm_store_ps(ctx.v58.f32, _mm_add_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v58.f32)));
	// vaddfp128 v57,v56,v50
	_mm_store_ps(ctx.v57.f32, _mm_add_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v50.f32)));
	// vaddfp128 v56,v49,v48
	_mm_store_ps(ctx.v56.f32, _mm_add_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v48.f32)));
	// vaddfp128 v55,v47,v46
	_mm_store_ps(ctx.v55.f32, _mm_add_ps(_mm_load_ps(ctx.v47.f32), _mm_load_ps(ctx.v46.f32)));
	// vaddfp128 v54,v51,v45
	_mm_store_ps(ctx.v54.f32, _mm_add_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v45.f32)));
	// vaddfp128 v61,v61,v59
	_mm_store_ps(ctx.v61.f32, _mm_add_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v59.f32)));
	// vaddfp128 v59,v44,v43
	_mm_store_ps(ctx.v59.f32, _mm_add_ps(_mm_load_ps(ctx.v44.f32), _mm_load_ps(ctx.v43.f32)));
	// vaddfp128 v58,v58,v57
	_mm_store_ps(ctx.v58.f32, _mm_add_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v57.f32)));
	// vaddfp128 v57,v56,v55
	_mm_store_ps(ctx.v57.f32, _mm_add_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v55.f32)));
	// vaddfp128 v59,v54,v59
	_mm_store_ps(ctx.v59.f32, _mm_add_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v59.f32)));
	// vrlimi128 v61,v58,4,0
	_mm_store_ps(ctx.v61.f32, _mm_blend_ps(_mm_load_ps(ctx.v61.f32), _mm_permute_ps(_mm_load_ps(ctx.v58.f32), 228), 4));
	// vrlimi128 v61,v57,2,0
	_mm_store_ps(ctx.v61.f32, _mm_blend_ps(_mm_load_ps(ctx.v61.f32), _mm_permute_ps(_mm_load_ps(ctx.v57.f32), 228), 2));
	// vrlimi128 v61,v59,1,0
	_mm_store_ps(ctx.v61.f32, _mm_blend_ps(_mm_load_ps(ctx.v61.f32), _mm_permute_ps(_mm_load_ps(ctx.v59.f32), 228), 1));
	// stvx128 v61,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x82a29508
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A29508;
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// addi r30,r30,-320
	ctx.r30.s64 = ctx.r30.s64 + -320;
	// bne 0x82a294a0
	if (!ctx.cr0.eq) goto loc_82A294A0;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,160
	ctx.r31.s64 = 160;
	// li r29,80
	ctx.r29.s64 = 80;
loc_82A295F0:
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A29600;
	sub_82FA7CF0(ctx, base);
	// li r11,108
	ctx.r11.s64 = 108;
	// add r10,r30,r26
	ctx.r10.u64 = ctx.r30.u64 + ctx.r26.u64;
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// addi r10,r10,-320
	ctx.r10.s64 = ctx.r10.s64 + -320;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82A29614:
	// lfsu f0,320(r10)
	ctx.fpscr.disableFlushMode();
	ea = 320 + ctx.r10.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	ctx.f0.f64 = double(temp.f32);
	// stfsu f0,4(r9)
	temp.f32 = float(ctx.f0.f64);
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82a29614
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A29614;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r1,532
	ctx.r10.s64 = ctx.r1.s64 + 532;
	// addi r11,r1,536
	ctx.r11.s64 = ctx.r1.s64 + 536;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82A29630:
	// lfs f0,-428(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -428);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-436(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -436, temp.u32);
	// lfsu f0,-4(r11)
	ea = -4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f0.f64 = double(temp.f32);
	// stfsu f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82a29630
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A29630;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r8,27
	ctx.r8.s64 = 27;
	// li r11,0
	ctx.r11.s64 = 0;
	// lvx128 v60,r0,r10
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r7,r31,-80
	ctx.r7.s64 = ctx.r31.s64 + -80;
	// lvx128 v63,r0,r9
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// lvx128 v62,r0,r5
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82A29678:
	// lvx128 v59,r0,r10
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vsldoi128 v58,v63,v62,4
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), 12));
	// lvx128 v61,r0,r25
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r25.u32) & ~0xF), VectorMaskL));
	// vsldoi128 v57,v60,v63,4
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v63.u8), 12));
	// vsldoi128 v56,v62,v59,4
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v59.u8), 12));
	// vmsum4fp128 v55,v125,v62
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v55.f32, _mm_dp_ps(_mm_load_ps(ctx.v125.f32), _mm_load_ps(ctx.v62.f32), 0xFF));
	// vsldoi128 v62,v59,v61,4
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v61.u8), 12));
	// vmsum4fp128 v54,v126,v63
	_mm_store_ps(ctx.v54.f32, _mm_dp_ps(_mm_load_ps(ctx.v126.f32), _mm_load_ps(ctx.v63.f32), 0xFF));
	// vmsum4fp128 v53,v127,v60
	_mm_store_ps(ctx.v53.f32, _mm_dp_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v60.f32), 0xFF));
	// add r8,r7,r11
	ctx.r8.u64 = ctx.r7.u64 + ctx.r11.u64;
	// vsldoi128 v63,v57,v58,4
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v58.u8), 12));
	// vmsum4fp128 v59,v124,v59
	_mm_store_ps(ctx.v59.f32, _mm_dp_ps(_mm_load_ps(ctx.v124.f32), _mm_load_ps(ctx.v59.f32), 0xFF));
	// vsldoi128 v60,v58,v56,4
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)ctx.v56.u8), 12));
	// vmsum4fp128 v58,v126,v58
	_mm_store_ps(ctx.v58.f32, _mm_dp_ps(_mm_load_ps(ctx.v126.f32), _mm_load_ps(ctx.v58.f32), 0xFF));
	// vsldoi128 v52,v56,v62,4
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v62.u8), 12));
	// vmsum4fp128 v50,v124,v62
	_mm_store_ps(ctx.v50.f32, _mm_dp_ps(_mm_load_ps(ctx.v124.f32), _mm_load_ps(ctx.v62.f32), 0xFF));
	// vsldoi128 v51,v62,v61,4
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v61.u8), 12));
	// vmsum4fp128 v57,v127,v57
	_mm_store_ps(ctx.v57.f32, _mm_dp_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v57.f32), 0xFF));
	// vmsum4fp128 v49,v127,v63
	_mm_store_ps(ctx.v49.f32, _mm_dp_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v63.f32), 0xFF));
	// add r5,r31,r11
	ctx.r5.u64 = ctx.r31.u64 + ctx.r11.u64;
	// vsldoi128 v62,v63,v60,4
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v60.u8), 12));
	// vmsum4fp128 v56,v125,v56
	_mm_store_ps(ctx.v56.f32, _mm_dp_ps(_mm_load_ps(ctx.v125.f32), _mm_load_ps(ctx.v56.f32), 0xFF));
	// vsldoi128 v63,v60,v52,4
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v52.u8), 12));
	// vmsum4fp128 v48,v126,v60
	_mm_store_ps(ctx.v48.f32, _mm_dp_ps(_mm_load_ps(ctx.v126.f32), _mm_load_ps(ctx.v60.f32), 0xFF));
	// vsldoi128 v47,v52,v51,4
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)ctx.v51.u8), 12));
	// vmsum4fp128 v52,v125,v52
	_mm_store_ps(ctx.v52.f32, _mm_dp_ps(_mm_load_ps(ctx.v125.f32), _mm_load_ps(ctx.v52.f32), 0xFF));
	// vsldoi128 v61,v51,v61,4
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)ctx.v61.u8), 12));
	// vmsum4fp128 v51,v124,v51
	_mm_store_ps(ctx.v51.f32, _mm_dp_ps(_mm_load_ps(ctx.v124.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v46,v127,v62
	_mm_store_ps(ctx.v46.f32, _mm_dp_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v62.f32), 0xFF));
	// add r4,r6,r11
	ctx.r4.u64 = ctx.r6.u64 + ctx.r11.u64;
	// vmsum4fp128 v45,v126,v63
	_mm_store_ps(ctx.v45.f32, _mm_dp_ps(_mm_load_ps(ctx.v126.f32), _mm_load_ps(ctx.v63.f32), 0xFF));
	// vsldoi128 v60,v62,v63,4
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v63.u8), 12));
	// vmsum4fp128 v44,v125,v47
	_mm_store_ps(ctx.v44.f32, _mm_dp_ps(_mm_load_ps(ctx.v125.f32), _mm_load_ps(ctx.v47.f32), 0xFF));
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// vmsum4fp128 v43,v124,v61
	_mm_store_ps(ctx.v43.f32, _mm_dp_ps(_mm_load_ps(ctx.v124.f32), _mm_load_ps(ctx.v61.f32), 0xFF));
	// vsldoi128 v62,v47,v61,4
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)ctx.v61.u8), 12));
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// vsldoi128 v63,v63,v47,4
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v47.u8), 12));
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// vaddfp128 v54,v53,v54
	_mm_store_ps(ctx.v54.f32, _mm_add_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v54.f32)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// vaddfp128 v61,v55,v59
	_mm_store_ps(ctx.v61.f32, _mm_add_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v59.f32)));
	// addi r11,r11,320
	ctx.r11.s64 = ctx.r11.s64 + 320;
	// vaddfp128 v59,v57,v58
	_mm_store_ps(ctx.v59.f32, _mm_add_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v58.f32)));
	// vaddfp128 v58,v56,v50
	_mm_store_ps(ctx.v58.f32, _mm_add_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v50.f32)));
	// vaddfp128 v57,v49,v48
	_mm_store_ps(ctx.v57.f32, _mm_add_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v48.f32)));
	// vaddfp128 v56,v52,v51
	_mm_store_ps(ctx.v56.f32, _mm_add_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v51.f32)));
	// vaddfp128 v55,v46,v45
	_mm_store_ps(ctx.v55.f32, _mm_add_ps(_mm_load_ps(ctx.v46.f32), _mm_load_ps(ctx.v45.f32)));
	// vaddfp128 v53,v44,v43
	_mm_store_ps(ctx.v53.f32, _mm_add_ps(_mm_load_ps(ctx.v44.f32), _mm_load_ps(ctx.v43.f32)));
	// vaddfp128 v61,v54,v61
	_mm_store_ps(ctx.v61.f32, _mm_add_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v61.f32)));
	// vaddfp128 v59,v59,v58
	_mm_store_ps(ctx.v59.f32, _mm_add_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v58.f32)));
	// vaddfp128 v58,v57,v56
	_mm_store_ps(ctx.v58.f32, _mm_add_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v56.f32)));
	// vaddfp128 v57,v55,v53
	_mm_store_ps(ctx.v57.f32, _mm_add_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v53.f32)));
	// stvewx128 v61,r27,r9
	ea = (ctx.r27.u32 + ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r9,r9,1280
	ctx.r9.s64 = ctx.r9.s64 + 1280;
	// stvewx128 v59,r27,r8
	ea = (ctx.r27.u32 + ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v59.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v58,r27,r5
	ea = (ctx.r27.u32 + ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v58.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v57,r27,r4
	ea = (ctx.r27.u32 + ctx.r4.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v57.u32[3 - ((ea & 0xF) >> 2)]);
	// bdnz 0x82a29678
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A29678;
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82a295f0
	if (!ctx.cr0.eq) goto loc_82A295F0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,5408
	ctx.r1.s64 = ctx.r1.s64 + 5408;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82fac3ec
	ctx.lr = 0x82A29784;
	__restvmx_124(ctx, base);
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A29788"))) PPC_WEAK_FUNC(sub_82A29788);
PPC_FUNC_IMPL(__imp__sub_82A29788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82A29790;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82fac13c
	ctx.lr = 0x82A29798;
	__savevmx_121(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-10656(r1)
	ea = -10656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// addi r11,r11,-14480
	ctx.r11.s64 = ctx.r11.s64 + -14480;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,32
	ctx.r9.s64 = 32;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,80
	ctx.r6.s64 = 80;
	// lvx128 v127,r0,r11
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// li r5,96
	ctx.r5.s64 = 96;
	// lvx128 v126,r11,r10
	simd::store_shuffled(ctx.v126, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v125,r11,r9
	simd::store_shuffled(ctx.v125, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lvx128 v124,r11,r8
	simd::store_shuffled(ctx.v124, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lvx128 v123,r11,r7
	simd::store_shuffled(ctx.v123, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lvx128 v122,r11,r6
	simd::store_shuffled(ctx.v122, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// lvx128 v121,r11,r5
	simd::store_shuffled(ctx.v121, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// subf r30,r26,r4
	ctx.r30.s64 = ctx.r4.s64 - ctx.r26.s64;
	// subf r27,r26,r3
	ctx.r27.s64 = ctx.r3.s64 - ctx.r26.s64;
	// li r29,108
	ctx.r29.s64 = 108;
	// addi r25,r11,-30752
	ctx.r25.s64 = ctx.r11.s64 + -30752;
loc_82A29808:
	// li r5,10384
	ctx.r5.s64 = 10384;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a75988
	ctx.lr = 0x82A29818;
	sub_82A75988(ctx, base);
	// li r5,320
	ctx.r5.s64 = 320;
	// add r4,r27,r31
	ctx.r4.u64 = ctx.r27.u64 + ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82a75220
	ctx.lr = 0x82A29828;
	sub_82A75220(ctx, base);
	// li r9,12
	ctx.r9.s64 = 12;
	// addi r10,r1,444
	ctx.r10.s64 = ctx.r1.s64 + 444;
	// addi r11,r1,448
	ctx.r11.s64 = ctx.r1.s64 + 448;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82A29838:
	// lfs f0,-316(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -316);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-324(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -324, temp.u32);
	// lfsu f0,-4(r11)
	ea = -4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f0.f64 = double(temp.f32);
	// stfsu f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82a29838
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A29838;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lvx128 v57,r0,r11
	simd::store_shuffled(ctx.v57, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// li r10,20
	ctx.r10.s64 = 20;
	// lvx128 v63,r0,r9
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v62,r0,r8
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lvx128 v61,r0,r7
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v60,r0,r6
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// lvx128 v59,r0,r5
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82A29888:
	// vsldoi128 v55,v63,v62,4
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), 12));
	// vmsum4fp128 v50,v126,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v50.f32, _mm_dp_ps(_mm_load_ps(ctx.v126.f32), _mm_load_ps(ctx.v63.f32), 0xFF));
	// vsldoi128 v51,v60,v59,4
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v59.u8), 12));
	// lvx128 v56,r30,r11
	simd::store_shuffled(ctx.v56, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vsldoi128 v54,v62,v61,4
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v61.u8), 12));
	// vmsum4fp128 v52,v127,v57
	_mm_store_ps(ctx.v52.f32, _mm_dp_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v57.f32), 0xFF));
	// vsldoi128 v53,v61,v60,4
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v60.u8), 12));
	// lvx128 v58,r0,r25
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r25.u32) & ~0xF), VectorMaskL));
	// vsldoi128 v63,v57,v63,4
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v63.u8), 12));
	// vmsum4fp128 v44,v126,v55
	_mm_store_ps(ctx.v44.f32, _mm_dp_ps(_mm_load_ps(ctx.v126.f32), _mm_load_ps(ctx.v55.f32), 0xFF));
	// vsldoi128 v57,v59,v56,4
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v56.u8), 12));
	// vmsum4fp128 v60,v123,v60
	_mm_store_ps(ctx.v60.f32, _mm_dp_ps(_mm_load_ps(ctx.v123.f32), _mm_load_ps(ctx.v60.f32), 0xFF));
	// vsldoi128 v48,v55,v54,4
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)ctx.v54.u8), 12));
	// vmsum4fp128 v59,v122,v59
	_mm_store_ps(ctx.v59.f32, _mm_dp_ps(_mm_load_ps(ctx.v122.f32), _mm_load_ps(ctx.v59.f32), 0xFF));
	// vsldoi128 v49,v56,v58,4
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v58.u8), 12));
	// vmsum4fp128 v62,v125,v62
	_mm_store_ps(ctx.v62.f32, _mm_dp_ps(_mm_load_ps(ctx.v125.f32), _mm_load_ps(ctx.v62.f32), 0xFF));
	// vsldoi128 v47,v54,v53,4
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)ctx.v53.u8), 12));
	// vmsum4fp128 v46,v127,v63
	_mm_store_ps(ctx.v46.f32, _mm_dp_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v63.f32), 0xFF));
	// vsldoi128 v45,v53,v51,4
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)ctx.v51.u8), 12));
	// vmsum4fp128 v54,v125,v54
	_mm_store_ps(ctx.v54.f32, _mm_dp_ps(_mm_load_ps(ctx.v125.f32), _mm_load_ps(ctx.v54.f32), 0xFF));
	// vmsum4fp128 v53,v124,v53
	_mm_store_ps(ctx.v53.f32, _mm_dp_ps(_mm_load_ps(ctx.v124.f32), _mm_load_ps(ctx.v53.f32), 0xFF));
	// vsldoi128 v63,v63,v55,4
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v55.u8), 12));
	// vsldoi128 v43,v51,v57,4
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)ctx.v57.u8), 12));
	// vmsum4fp128 v55,v123,v51
	_mm_store_ps(ctx.v55.f32, _mm_dp_ps(_mm_load_ps(ctx.v123.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vsldoi128 v41,v49,v58,4
	_mm_store_si128((__m128i*)ctx.v41.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)ctx.v58.u8), 12));
	// vmsum4fp128 v39,v126,v48
	_mm_store_ps(ctx.v39.f32, _mm_dp_ps(_mm_load_ps(ctx.v126.f32), _mm_load_ps(ctx.v48.f32), 0xFF));
	// vsldoi128 v42,v57,v49,4
	_mm_store_si128((__m128i*)ctx.v42.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v49.u8), 12));
	// vmsum4fp128 v40,v122,v57
	_mm_store_ps(ctx.v40.f32, _mm_dp_ps(_mm_load_ps(ctx.v122.f32), _mm_load_ps(ctx.v57.f32), 0xFF));
	// vmsum4fp128 v35,v127,v63
	_mm_store_ps(ctx.v35.f32, _mm_dp_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v63.f32), 0xFF));
	// vsldoi128 v51,v48,v47,4
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)ctx.v47.u8), 12));
	// vsldoi128 v38,v47,v45,4
	_mm_store_si128((__m128i*)ctx.v38.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)ctx.v45.u8), 12));
	// vmsum4fp128 v47,v125,v47
	_mm_store_ps(ctx.v47.f32, _mm_dp_ps(_mm_load_ps(ctx.v125.f32), _mm_load_ps(ctx.v47.f32), 0xFF));
	// vsldoi128 v37,v45,v43,4
	_mm_store_si128((__m128i*)ctx.v37.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v45.u8), _mm_load_si128((__m128i*)ctx.v43.u8), 12));
	// vmsum4fp128 v45,v124,v45
	_mm_store_ps(ctx.v45.f32, _mm_dp_ps(_mm_load_ps(ctx.v124.f32), _mm_load_ps(ctx.v45.f32), 0xFF));
	// vsldoi128 v63,v63,v48,4
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v48.u8), 12));
	// vmsum4fp128 v48,v122,v42
	_mm_store_ps(ctx.v48.f32, _mm_dp_ps(_mm_load_ps(ctx.v122.f32), _mm_load_ps(ctx.v42.f32), 0xFF));
	// vsldoi128 v36,v43,v42,4
	_mm_store_si128((__m128i*)ctx.v36.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v43.u8), _mm_load_si128((__m128i*)ctx.v42.u8), 12));
	// vaddfp128 v52,v52,v50
	_mm_store_ps(ctx.v52.f32, _mm_add_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v50.f32)));
	// vsldoi128 v34,v42,v41,4
	_mm_store_si128((__m128i*)ctx.v34.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v42.u8), _mm_load_si128((__m128i*)ctx.v41.u8), 12));
	// vmsum4fp128 v42,v126,v51
	_mm_store_ps(ctx.v42.f32, _mm_dp_ps(_mm_load_ps(ctx.v126.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v33,v125,v38
	_mm_store_ps(ctx.v33.f32, _mm_dp_ps(_mm_load_ps(ctx.v125.f32), _mm_load_ps(ctx.v38.f32), 0xFF));
	// vsldoi128 v58,v41,v58,4
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v41.u8), _mm_load_si128((__m128i*)ctx.v58.u8), 12));
	// vmsum4fp128 v50,v127,v63
	_mm_store_ps(ctx.v50.f32, _mm_dp_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v63.f32), 0xFF));
	// vsldoi128 v57,v63,v51,4
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v51.u8), 12));
	// vmsum4fp128 v0,v124,v37
	_mm_store_ps(ctx.v0.f32, _mm_dp_ps(_mm_load_ps(ctx.v124.f32), _mm_load_ps(ctx.v37.f32), 0xFF));
	// vsldoi128 v63,v51,v38,4
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)ctx.v38.u8), 12));
	// vmsum4fp128 v61,v124,v61
	_mm_store_ps(ctx.v61.f32, _mm_dp_ps(_mm_load_ps(ctx.v124.f32), _mm_load_ps(ctx.v61.f32), 0xFF));
	// vaddfp128 v13,v60,v59
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v59.f32)));
	// vmsum4fp128 v43,v123,v43
	_mm_store_ps(ctx.v43.f32, _mm_dp_ps(_mm_load_ps(ctx.v123.f32), _mm_load_ps(ctx.v43.f32), 0xFF));
	// vaddfp128 v46,v46,v44
	_mm_store_ps(ctx.v46.f32, _mm_add_ps(_mm_load_ps(ctx.v46.f32), _mm_load_ps(ctx.v44.f32)));
	// vmsum4fp128 v12,v122,v34
	_mm_store_ps(ctx.v12.f32, _mm_dp_ps(_mm_load_ps(ctx.v122.f32), _mm_load_ps(ctx.v34.f32), 0xFF));
	// vsldoi128 v59,v34,v58,4
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v34.u8), _mm_load_si128((__m128i*)ctx.v58.u8), 12));
	// vmsum4fp128 v11,v123,v36
	_mm_store_ps(ctx.v11.f32, _mm_dp_ps(_mm_load_ps(ctx.v123.f32), _mm_load_ps(ctx.v36.f32), 0xFF));
	// vaddfp128 v54,v54,v53
	_mm_store_ps(ctx.v54.f32, _mm_add_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v53.f32)));
	// vmsum4fp128 v51,v121,v49
	_mm_store_ps(ctx.v51.f32, _mm_dp_ps(_mm_load_ps(ctx.v121.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vsldoi128 v60,v36,v34,4
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v36.u8), _mm_load_si128((__m128i*)ctx.v34.u8), 12));
	// vmsum4fp128 v49,v121,v58
	_mm_store_ps(ctx.v49.f32, _mm_dp_ps(_mm_load_ps(ctx.v121.f32), _mm_load_ps(ctx.v58.f32), 0xFF));
	// vmsum4fp128 v56,v121,v56
	_mm_store_ps(ctx.v56.f32, _mm_dp_ps(_mm_load_ps(ctx.v121.f32), _mm_load_ps(ctx.v56.f32), 0xFF));
	// vaddfp128 v55,v55,v40
	_mm_store_ps(ctx.v55.f32, _mm_add_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v40.f32)));
	// vmsum4fp128 v53,v121,v41
	_mm_store_ps(ctx.v53.f32, _mm_dp_ps(_mm_load_ps(ctx.v121.f32), _mm_load_ps(ctx.v41.f32), 0xFF));
	// vaddfp128 v58,v35,v39
	_mm_store_ps(ctx.v58.f32, _mm_add_ps(_mm_load_ps(ctx.v35.f32), _mm_load_ps(ctx.v39.f32)));
	// vaddfp128 v47,v47,v45
	_mm_store_ps(ctx.v47.f32, _mm_add_ps(_mm_load_ps(ctx.v47.f32), _mm_load_ps(ctx.v45.f32)));
	// vaddfp128 v50,v50,v42
	_mm_store_ps(ctx.v50.f32, _mm_add_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v42.f32)));
	// vaddfp128 v54,v46,v54
	_mm_store_ps(ctx.v54.f32, _mm_add_ps(_mm_load_ps(ctx.v46.f32), _mm_load_ps(ctx.v54.f32)));
	// vaddfp128 v45,v33,v0
	_mm_store_ps(ctx.v45.f32, _mm_add_ps(_mm_load_ps(ctx.v33.f32), _mm_load_ps(ctx.v0.f32)));
	// vaddfp128 v32,v62,v61
	_mm_store_ps(ctx.v32.f32, _mm_add_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v61.f32)));
	// vsldoi128 v62,v38,v37,4
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v38.u8), _mm_load_si128((__m128i*)ctx.v37.u8), 12));
	// vaddfp128 v48,v43,v48
	_mm_store_ps(ctx.v48.f32, _mm_add_ps(_mm_load_ps(ctx.v43.f32), _mm_load_ps(ctx.v48.f32)));
	// vsldoi128 v61,v37,v36,4
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v37.u8), _mm_load_si128((__m128i*)ctx.v36.u8), 12));
	// vaddfp128 v46,v11,v12
	_mm_store_ps(ctx.v46.f32, _mm_add_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v12.f32)));
	// vaddfp128 v55,v55,v51
	_mm_store_ps(ctx.v55.f32, _mm_add_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v51.f32)));
	// vaddfp128 v58,v58,v47
	_mm_store_ps(ctx.v58.f32, _mm_add_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v47.f32)));
	// vaddfp128 v56,v13,v56
	_mm_store_ps(ctx.v56.f32, _mm_add_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v56.f32)));
	// vaddfp128 v51,v50,v45
	_mm_store_ps(ctx.v51.f32, _mm_add_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v45.f32)));
	// vaddfp128 v52,v52,v32
	_mm_store_ps(ctx.v52.f32, _mm_add_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v32.f32)));
	// vaddfp128 v53,v48,v53
	_mm_store_ps(ctx.v53.f32, _mm_add_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v53.f32)));
	// vaddfp128 v50,v46,v49
	_mm_store_ps(ctx.v50.f32, _mm_add_ps(_mm_load_ps(ctx.v46.f32), _mm_load_ps(ctx.v49.f32)));
	// vaddfp128 v55,v54,v55
	_mm_store_ps(ctx.v55.f32, _mm_add_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v55.f32)));
	// vaddfp128 v56,v52,v56
	_mm_store_ps(ctx.v56.f32, _mm_add_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v56.f32)));
	// vaddfp128 v58,v58,v53
	_mm_store_ps(ctx.v58.f32, _mm_add_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v53.f32)));
	// vaddfp128 v54,v51,v50
	_mm_store_ps(ctx.v54.f32, _mm_add_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v50.f32)));
	// vrlimi128 v56,v55,4,0
	_mm_store_ps(ctx.v56.f32, _mm_blend_ps(_mm_load_ps(ctx.v56.f32), _mm_permute_ps(_mm_load_ps(ctx.v55.f32), 228), 4));
	// vrlimi128 v56,v58,2,0
	_mm_store_ps(ctx.v56.f32, _mm_blend_ps(_mm_load_ps(ctx.v56.f32), _mm_permute_ps(_mm_load_ps(ctx.v58.f32), 228), 2));
	// vrlimi128 v56,v54,1,0
	_mm_store_ps(ctx.v56.f32, _mm_blend_ps(_mm_load_ps(ctx.v56.f32), _mm_permute_ps(_mm_load_ps(ctx.v54.f32), 228), 1));
	// stvx128 v56,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x82a29888
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A29888;
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// addi r30,r30,-320
	ctx.r30.s64 = ctx.r30.s64 + -320;
	// bne 0x82a29808
	if (!ctx.cr0.eq) goto loc_82A29808;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,160
	ctx.r31.s64 = 160;
	// li r29,80
	ctx.r29.s64 = 80;
loc_82A29A00:
	// li r5,132
	ctx.r5.s64 = 132;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a75988
	ctx.lr = 0x82A29A10;
	sub_82A75988(ctx, base);
	// li r11,108
	ctx.r11.s64 = 108;
	// add r10,r30,r26
	ctx.r10.u64 = ctx.r30.u64 + ctx.r26.u64;
	// addi r9,r1,124
	ctx.r9.s64 = ctx.r1.s64 + 124;
	// addi r10,r10,-320
	ctx.r10.s64 = ctx.r10.s64 + -320;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82A29A24:
	// lfsu f0,320(r10)
	ctx.fpscr.disableFlushMode();
	ea = 320 + ctx.r10.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	ctx.f0.f64 = double(temp.f32);
	// stfsu f0,4(r9)
	temp.f32 = float(ctx.f0.f64);
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82a29a24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A29A24;
	// li r9,12
	ctx.r9.s64 = 12;
	// addi r10,r1,556
	ctx.r10.s64 = ctx.r1.s64 + 556;
	// addi r11,r1,560
	ctx.r11.s64 = ctx.r1.s64 + 560;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82A29A40:
	// lfs f0,-428(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -428);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-436(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -436, temp.u32);
	// lfsu f0,-4(r11)
	ea = -4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f0.f64 = double(temp.f32);
	// stfsu f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82a29a40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A29A40;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lvx128 v58,r0,r11
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// li r8,27
	ctx.r8.s64 = 27;
	// lvx128 v63,r0,r10
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v62,r0,r9
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// li r11,0
	ctx.r11.s64 = 0;
	// lvx128 v61,r0,r7
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// addi r7,r31,-80
	ctx.r7.s64 = ctx.r31.s64 + -80;
	// lvx128 v60,r0,r6
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// lvx128 v59,r0,r5
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82A29AA0:
	// vsldoi128 v54,v63,v62,4
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), 12));
	// vmsum4fp128 v53,v125,v62
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v53.f32, _mm_dp_ps(_mm_load_ps(ctx.v125.f32), _mm_load_ps(ctx.v62.f32), 0xFF));
	// vsldoi128 v62,v62,v61,4
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v61.u8), 12));
	// vmsum4fp128 v55,v124,v61
	_mm_store_ps(ctx.v55.f32, _mm_dp_ps(_mm_load_ps(ctx.v124.f32), _mm_load_ps(ctx.v61.f32), 0xFF));
	// vsldoi128 v50,v60,v59,4
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v59.u8), 12));
	// vmsum4fp128 v52,v127,v58
	_mm_store_ps(ctx.v52.f32, _mm_dp_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v58.f32), 0xFF));
	// vsldoi128 v61,v61,v60,4
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v60.u8), 12));
	// vmsum4fp128 v57,v126,v63
	_mm_store_ps(ctx.v57.f32, _mm_dp_ps(_mm_load_ps(ctx.v126.f32), _mm_load_ps(ctx.v63.f32), 0xFF));
	// vmsum4fp128 v51,v122,v59
	_mm_store_ps(ctx.v51.f32, _mm_dp_ps(_mm_load_ps(ctx.v122.f32), _mm_load_ps(ctx.v59.f32), 0xFF));
	// lvx128 v56,r0,r10
	simd::store_shuffled(ctx.v56, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmsum4fp128 v60,v123,v60
	_mm_store_ps(ctx.v60.f32, _mm_dp_ps(_mm_load_ps(ctx.v123.f32), _mm_load_ps(ctx.v60.f32), 0xFF));
	// vsldoi128 v58,v58,v63,4
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)ctx.v63.u8), 12));
	// lvx128 v63,r0,r25
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r25.u32) & ~0xF), VectorMaskL));
	// vsldoi128 v59,v59,v56,4
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v56.u8), 12));
	// vmsum4fp128 v49,v121,v56
	_mm_store_ps(ctx.v49.f32, _mm_dp_ps(_mm_load_ps(ctx.v121.f32), _mm_load_ps(ctx.v56.f32), 0xFF));
	// vsldoi128 v48,v54,v62,4
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)ctx.v62.u8), 12));
	// vsldoi128 v56,v56,v63,4
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v63.u8), 12));
	// vmsum4fp128 v47,v126,v54
	_mm_store_ps(ctx.v47.f32, _mm_dp_ps(_mm_load_ps(ctx.v126.f32), _mm_load_ps(ctx.v54.f32), 0xFF));
	// vsldoi128 v44,v61,v50,4
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v50.u8), 12));
	// vmsum4fp128 v46,v127,v58
	_mm_store_ps(ctx.v46.f32, _mm_dp_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v58.f32), 0xFF));
	// vsldoi128 v43,v50,v59,4
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)ctx.v59.u8), 12));
	// vmsum4fp128 v50,v123,v50
	_mm_store_ps(ctx.v50.f32, _mm_dp_ps(_mm_load_ps(ctx.v123.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// vsldoi128 v45,v62,v61,4
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v61.u8), 12));
	// vmsum4fp128 v62,v125,v62
	_mm_store_ps(ctx.v62.f32, _mm_dp_ps(_mm_load_ps(ctx.v125.f32), _mm_load_ps(ctx.v62.f32), 0xFF));
	// vsldoi128 v42,v59,v56,4
	_mm_store_si128((__m128i*)ctx.v42.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v56.u8), 12));
	// vmsum4fp128 v61,v124,v61
	_mm_store_ps(ctx.v61.f32, _mm_dp_ps(_mm_load_ps(ctx.v124.f32), _mm_load_ps(ctx.v61.f32), 0xFF));
	// vmsum4fp128 v59,v122,v59
	_mm_store_ps(ctx.v59.f32, _mm_dp_ps(_mm_load_ps(ctx.v122.f32), _mm_load_ps(ctx.v59.f32), 0xFF));
	// vsldoi128 v58,v58,v54,4
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)ctx.v54.u8), 12));
	// vsldoi128 v37,v44,v43,4
	_mm_store_si128((__m128i*)ctx.v37.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v44.u8), _mm_load_si128((__m128i*)ctx.v43.u8), 12));
	// vmsum4fp128 v41,v126,v48
	_mm_store_ps(ctx.v41.f32, _mm_dp_ps(_mm_load_ps(ctx.v126.f32), _mm_load_ps(ctx.v48.f32), 0xFF));
	// vsldoi128 v40,v48,v45,4
	_mm_store_si128((__m128i*)ctx.v40.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)ctx.v45.u8), 12));
	// vmsum4fp128 v39,v125,v45
	_mm_store_ps(ctx.v39.f32, _mm_dp_ps(_mm_load_ps(ctx.v125.f32), _mm_load_ps(ctx.v45.f32), 0xFF));
	// vsldoi128 v45,v45,v44,4
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v45.u8), _mm_load_si128((__m128i*)ctx.v44.u8), 12));
	// vmsum4fp128 v54,v121,v56
	_mm_store_ps(ctx.v54.f32, _mm_dp_ps(_mm_load_ps(ctx.v121.f32), _mm_load_ps(ctx.v56.f32), 0xFF));
	// vaddfp128 v55,v53,v55
	_mm_store_ps(ctx.v55.f32, _mm_add_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v55.f32)));
	// vmsum4fp128 v38,v127,v58
	_mm_store_ps(ctx.v38.f32, _mm_dp_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v58.f32), 0xFF));
	// vmsum4fp128 v53,v124,v44
	_mm_store_ps(ctx.v53.f32, _mm_dp_ps(_mm_load_ps(ctx.v124.f32), _mm_load_ps(ctx.v44.f32), 0xFF));
	// vsldoi128 v56,v56,v63,4
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v63.u8), 12));
	// vaddfp128 v57,v52,v57
	_mm_store_ps(ctx.v57.f32, _mm_add_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v57.f32)));
	// vmsum4fp128 v52,v123,v43
	_mm_store_ps(ctx.v52.f32, _mm_dp_ps(_mm_load_ps(ctx.v123.f32), _mm_load_ps(ctx.v43.f32), 0xFF));
	// vmsum4fp128 v44,v122,v42
	_mm_store_ps(ctx.v44.f32, _mm_dp_ps(_mm_load_ps(ctx.v122.f32), _mm_load_ps(ctx.v42.f32), 0xFF));
	// vsldoi128 v58,v58,v48,4
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)ctx.v48.u8), 12));
	// vaddfp128 v60,v60,v51
	_mm_store_ps(ctx.v60.f32, _mm_add_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v51.f32)));
	// vsldoi128 v43,v43,v42,4
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v43.u8), _mm_load_si128((__m128i*)ctx.v42.u8), 12));
	// vsldoi128 v51,v42,v56,4
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v42.u8), _mm_load_si128((__m128i*)ctx.v56.u8), 12));
	// vmsum4fp128 v48,v121,v56
	_mm_store_ps(ctx.v48.f32, _mm_dp_ps(_mm_load_ps(ctx.v121.f32), _mm_load_ps(ctx.v56.f32), 0xFF));
	// vsldoi128 v56,v56,v63,4
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v63.u8), 12));
	// vmsum4fp128 v42,v125,v45
	_mm_store_ps(ctx.v42.f32, _mm_dp_ps(_mm_load_ps(ctx.v125.f32), _mm_load_ps(ctx.v45.f32), 0xFF));
	// vmsum4fp128 v35,v127,v58
	_mm_store_ps(ctx.v35.f32, _mm_dp_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v58.f32), 0xFF));
	// add r8,r7,r11
	ctx.r8.u64 = ctx.r7.u64 + ctx.r11.u64;
	// vaddfp128 v47,v46,v47
	_mm_store_ps(ctx.v47.f32, _mm_add_ps(_mm_load_ps(ctx.v46.f32), _mm_load_ps(ctx.v47.f32)));
	// vmsum4fp128 v46,v126,v40
	_mm_store_ps(ctx.v46.f32, _mm_dp_ps(_mm_load_ps(ctx.v126.f32), _mm_load_ps(ctx.v40.f32), 0xFF));
	// vmsum4fp128 v33,v122,v51
	_mm_store_ps(ctx.v33.f32, _mm_dp_ps(_mm_load_ps(ctx.v122.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// add r5,r31,r11
	ctx.r5.u64 = ctx.r31.u64 + ctx.r11.u64;
	// vmsum4fp128 v36,v124,v37
	_mm_store_ps(ctx.v36.f32, _mm_dp_ps(_mm_load_ps(ctx.v124.f32), _mm_load_ps(ctx.v37.f32), 0xFF));
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// vaddfp128 v34,v62,v61
	_mm_store_ps(ctx.v34.f32, _mm_add_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v61.f32)));
	// vmsum4fp128 v32,v123,v43
	_mm_store_ps(ctx.v32.f32, _mm_dp_ps(_mm_load_ps(ctx.v123.f32), _mm_load_ps(ctx.v43.f32), 0xFF));
	// vaddfp128 v50,v50,v59
	_mm_store_ps(ctx.v50.f32, _mm_add_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v59.f32)));
	// vsldoi128 v59,v51,v56,4
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)ctx.v56.u8), 12));
	// vsldoi128 v58,v58,v40,4
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)ctx.v40.u8), 12));
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// vaddfp128 v57,v57,v55
	_mm_store_ps(ctx.v57.f32, _mm_add_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v55.f32)));
	// vsldoi128 v63,v40,v45,4
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v40.u8), _mm_load_si128((__m128i*)ctx.v45.u8), 12));
	// vsldoi128 v62,v45,v37,4
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v45.u8), _mm_load_si128((__m128i*)ctx.v37.u8), 12));
	// vaddfp128 v55,v60,v49
	_mm_store_ps(ctx.v55.f32, _mm_add_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v49.f32)));
	// vsldoi128 v60,v43,v51,4
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v43.u8), _mm_load_si128((__m128i*)ctx.v51.u8), 12));
	// vaddfp128 v53,v39,v53
	_mm_store_ps(ctx.v53.f32, _mm_add_ps(_mm_load_ps(ctx.v39.f32), _mm_load_ps(ctx.v53.f32)));
	// vsldoi128 v61,v37,v43,4
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v37.u8), _mm_load_si128((__m128i*)ctx.v43.u8), 12));
	// vaddfp128 v49,v38,v41
	_mm_store_ps(ctx.v49.f32, _mm_add_ps(_mm_load_ps(ctx.v38.f32), _mm_load_ps(ctx.v41.f32)));
	// vaddfp128 v52,v52,v44
	_mm_store_ps(ctx.v52.f32, _mm_add_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v44.f32)));
	// vaddfp128 v51,v47,v34
	_mm_store_ps(ctx.v51.f32, _mm_add_ps(_mm_load_ps(ctx.v47.f32), _mm_load_ps(ctx.v34.f32)));
	// vaddfp128 v54,v50,v54
	_mm_store_ps(ctx.v54.f32, _mm_add_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v54.f32)));
	// vaddfp128 v50,v35,v46
	_mm_store_ps(ctx.v50.f32, _mm_add_ps(_mm_load_ps(ctx.v35.f32), _mm_load_ps(ctx.v46.f32)));
	// vaddfp128 v47,v42,v36
	_mm_store_ps(ctx.v47.f32, _mm_add_ps(_mm_load_ps(ctx.v42.f32), _mm_load_ps(ctx.v36.f32)));
	// vaddfp128 v46,v32,v33
	_mm_store_ps(ctx.v46.f32, _mm_add_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v33.f32)));
	// vaddfp128 v57,v57,v55
	_mm_store_ps(ctx.v57.f32, _mm_add_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v55.f32)));
	// vaddfp128 v55,v49,v53
	_mm_store_ps(ctx.v55.f32, _mm_add_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v53.f32)));
	// vaddfp128 v53,v52,v48
	_mm_store_ps(ctx.v53.f32, _mm_add_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v48.f32)));
	// vaddfp128 v54,v51,v54
	_mm_store_ps(ctx.v54.f32, _mm_add_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v54.f32)));
	// stvewx128 v57,r28,r9
	ea = (ctx.r28.u32 + ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v57.u32[3 - ((ea & 0xF) >> 2)]);
	// vmsum4fp128 v57,v121,v56
	_mm_store_ps(ctx.v57.f32, _mm_dp_ps(_mm_load_ps(ctx.v121.f32), _mm_load_ps(ctx.v56.f32), 0xFF));
	// vaddfp128 v56,v50,v47
	_mm_store_ps(ctx.v56.f32, _mm_add_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v47.f32)));
	// vaddfp128 v55,v55,v53
	_mm_store_ps(ctx.v55.f32, _mm_add_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v53.f32)));
	// add r4,r6,r11
	ctx.r4.u64 = ctx.r6.u64 + ctx.r11.u64;
	// stvewx128 v54,r28,r8
	ea = (ctx.r28.u32 + ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v54.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,320
	ctx.r11.s64 = ctx.r11.s64 + 320;
	// addi r9,r9,1280
	ctx.r9.s64 = ctx.r9.s64 + 1280;
	// stvewx128 v55,r28,r5
	ea = (ctx.r28.u32 + ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v55.u32[3 - ((ea & 0xF) >> 2)]);
	// vaddfp128 v57,v46,v57
	_mm_store_ps(ctx.v57.f32, _mm_add_ps(_mm_load_ps(ctx.v46.f32), _mm_load_ps(ctx.v57.f32)));
	// vaddfp128 v57,v56,v57
	_mm_store_ps(ctx.v57.f32, _mm_add_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v57.f32)));
	// stvewx128 v57,r28,r8
	ea = (ctx.r28.u32 + ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v57.u32[3 - ((ea & 0xF) >> 2)]);
	// bdnz 0x82a29aa0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A29AA0;
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82a29a00
	if (!ctx.cr0.eq) goto loc_82A29A00;
	// li r10,2160
	ctx.r10.s64 = 2160;
	// li r11,16
	ctx.r11.s64 = 16;
	// addi r9,r28,-16
	ctx.r9.s64 = ctx.r28.s64 + -16;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82A29C3C:
	// addi r10,r11,-16
	ctx.r10.s64 = ctx.r11.s64 + -16;
	// lvrx128 v63,r11,r24
	temp.u32 = ctx.r11.u32 + ctx.r24.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvx128 v62,r9,r11
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// lvlx128 v61,r10,r24
	temp.u32 = ctx.r10.u32 + ctx.r24.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v63,v61,v63
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v63.u8)));
	// vsubfp128 v63,v63,v62
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v63.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v62.f32)));
	// stvlx128 v63,r24,r10
	ea = ctx.r24.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r24,r11
	ea = ctx.r24.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x82a29c3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A29C3C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,10656
	ctx.r1.s64 = ctx.r1.s64 + 10656;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82fac3d4
	ctx.lr = 0x82A29C74;
	__restvmx_121(ctx, base);
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A29C78"))) PPC_WEAK_FUNC(sub_82A29C78);
PPC_FUNC_IMPL(__imp__sub_82A29C78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A29C80;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r5,r5,34560
	ctx.r5.u64 = ctx.r5.u64 | 34560;
	// bl 0x82a75220
	ctx.lr = 0x82A29CA4;
	sub_82A75220(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,-14544
	ctx.r11.s64 = ctx.r11.s64 + -14544;
	// dcbt r0,r11
	// li r10,64
	ctx.r10.s64 = 64;
	// dcbt r11,r10
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a29440
	ctx.lr = 0x82A29CC4;
	sub_82A29440(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82a29cdc
	if (!ctx.cr0.eq) goto loc_82A29CDC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a29788
	ctx.lr = 0x82A29CDC;
	sub_82A29788(ctx, base);
loc_82A29CDC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A29CE4"))) PPC_WEAK_FUNC(sub_82A29CE4);
PPC_FUNC_IMPL(__imp__sub_82A29CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A29CE8"))) PPC_WEAK_FUNC(sub_82A29CE8);
PPC_FUNC_IMPL(__imp__sub_82A29CE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82A29CF0;
	__savegprlr_26(ctx, base);
	// lfs f0,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r29,r1,28
	ctx.r29.s64 = ctx.r1.s64 + 28;
	// lfs f13,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lfs f13,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f12,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r11,-14368
	ctx.r11.s64 = ctx.r11.s64 + -14368;
	// lvlx128 v61,r0,r29
	temp.u32 = ctx.r29.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// fsubs f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// stfs f13,-72(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -72, temp.u32);
	// stw r5,36(r1)
	PPC_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lfs f12,23556(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 23556);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r6,-32248
	ctx.r6.s64 = -2113404928;
	// fmuls f9,f13,f12
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// addi r31,r10,-30752
	ctx.r31.s64 = ctx.r10.s64 + -30752;
	// lfs f13,-14356(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -14356);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r1,-112
	ctx.r9.s64 = ctx.r1.s64 + -112;
	// fmuls f8,f11,f11
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// stfs f9,-108(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -108, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,-88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -88, temp.u32);
	// stfs f13,-112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -112, temp.u32);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// lfs f13,24436(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 24436);
	ctx.f13.f64 = double(temp.f32);
	// addi r30,r1,36
	ctx.r30.s64 = ctx.r1.s64 + 36;
	// lfs f12,-14360(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -14360);
	ctx.f12.f64 = double(temp.f32);
	// addi r5,r11,-30736
	ctx.r5.s64 = ctx.r11.s64 + -30736;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// lfs f0,5184(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r1,-80
	ctx.r8.s64 = ctx.r1.s64 + -80;
	// stfs f0,-104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -104, temp.u32);
	// addi r10,r4,16
	ctx.r10.s64 = ctx.r4.s64 + 16;
	// stfs f0,-100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -100, temp.u32);
	// lis r7,-31962
	ctx.r7.s64 = -2094661632;
	// stfs f0,-84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -84, temp.u32);
	// fmadds f9,f10,f10,f8
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f8.f64));
	// stfs f0,-68(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -68, temp.u32);
	// lvlx128 v63,r0,r30
	temp.u32 = ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v60,v63,0
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// fsqrts f9,f9
	ctx.f9.f64 = double(float(sqrt(ctx.f9.f64)));
	// vspltw128 v61,v61,0
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), 0xFF));
	// lvx128 v62,r0,r5
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// vcsxwfp128 v58,v60,0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v58.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v60.u32)));
	// vor128 v59,v62,v62
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_load_si128((__m128i*)ctx.v62.u8));
	// lvx128 v63,r0,r31
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// lvx128 v60,r0,r9
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vor128 v54,v60,v60
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_load_si128((__m128i*)ctx.v60.u8));
	// fdivs f0,f13,f9
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f9.f64));
	// vcsxwfp128 v0,v61,0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v61.u32)));
	// fmuls f13,f9,f12
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// vor128 v57,v59,v59
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_load_si128((__m128i*)ctx.v59.u8));
	// vsubfp128 v58,v58,v62
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v58.f32, _mm_sub_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v62.f32)));
	// addi r9,r1,-96
	ctx.r9.s64 = ctx.r1.s64 + -96;
	// vor128 v55,v59,v59
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_load_si128((__m128i*)ctx.v59.u8));
	// li r30,108
	ctx.r30.s64 = 108;
	// vor128 v61,v59,v59
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_load_si128((__m128i*)ctx.v59.u8));
	// vrlimi128 v57,v63,13,0
	_mm_store_ps(ctx.v57.f32, _mm_blend_ps(_mm_load_ps(ctx.v57.f32), _mm_permute_ps(_mm_load_ps(ctx.v63.f32), 228), 13));
	// vrlimi128 v55,v63,11,0
	_mm_store_ps(ctx.v55.f32, _mm_blend_ps(_mm_load_ps(ctx.v55.f32), _mm_permute_ps(_mm_load_ps(ctx.v63.f32), 228), 11));
	// vrlimi128 v61,v63,7,0
	_mm_store_ps(ctx.v61.f32, _mm_blend_ps(_mm_load_ps(ctx.v61.f32), _mm_permute_ps(_mm_load_ps(ctx.v63.f32), 228), 7));
	// vsubfp128 v60,v57,v60
	_mm_store_ps(ctx.v60.f32, _mm_sub_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v60.f32)));
	// fmuls f0,f13,f0
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// vsubfp128 v56,v0,v62
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v56.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v62.f32)));
	// vsubfp128 v58,v58,v62
	_mm_store_ps(ctx.v58.f32, _mm_sub_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v62.f32)));
	// fmuls f13,f0,f10
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f13,-80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f0,-96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// stfs f0,-76(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -76, temp.u32);
	// vrlimi128 v54,v60,8,0
	_mm_store_ps(ctx.v54.f32, _mm_blend_ps(_mm_load_ps(ctx.v54.f32), _mm_permute_ps(_mm_load_ps(ctx.v60.f32), 228), 8));
	// vsubfp128 v59,v56,v62
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v59.f32, _mm_sub_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v62.f32)));
	// lvx128 v56,r0,r8
	simd::store_shuffled(ctx.v56, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// fneg f0,f13
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f0,-92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// lvx128 v57,r0,r9
	simd::store_shuffled(ctx.v57, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r9,r7,-28752
	ctx.r9.s64 = ctx.r7.s64 + -28752;
	// lvx128 v7,r0,r9
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// b 0x82a29e48
	goto loc_82A29E48;
loc_82A29E40:
	// lvx128 v62,r0,r5
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// lvx128 v63,r0,r31
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
loc_82A29E48:
	// li r9,20
	ctx.r9.s64 = 20;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// b 0x82a29e5c
	goto loc_82A29E5C;
loc_82A29E54:
	// lvx128 v62,r0,r5
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// lvx128 v63,r0,r31
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
loc_82A29E5C:
	// vaddfp128 v53,v60,v61
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v53.f32, _mm_add_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v61.f32)));
	// vmsum3fp128 v52,v60,v57
	_mm_store_ps(ctx.v52.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v57.f32), 0xEF));
	// vmsum3fp128 v60,v60,v56
	_mm_store_ps(ctx.v60.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v56.f32), 0xEF));
	// addi r9,r1,-80
	ctx.r9.s64 = ctx.r1.s64 + -80;
	// li r29,16
	ctx.r29.s64 = 16;
	// vaddfp128 v51,v53,v61
	_mm_store_ps(ctx.v51.f32, _mm_add_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v61.f32)));
	// vmsum3fp128 v50,v53,v57
	_mm_store_ps(ctx.v50.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v57.f32), 0xEF));
	// vmsum3fp128 v53,v53,v56
	_mm_store_ps(ctx.v53.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v56.f32), 0xEF));
	// vmaxfp128 v52,v63,v52
	_mm_store_ps(ctx.v52.f32, _mm_max_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v52.f32)));
	// vmaxfp128 v60,v63,v60
	_mm_store_ps(ctx.v60.f32, _mm_max_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v60.f32)));
	// vaddfp128 v49,v51,v61
	_mm_store_ps(ctx.v49.f32, _mm_add_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v61.f32)));
	// vmsum3fp128 v48,v51,v57
	_mm_store_ps(ctx.v48.f32, _mm_dp_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v57.f32), 0xEF));
	// vmsum3fp128 v51,v51,v56
	_mm_store_ps(ctx.v51.f32, _mm_dp_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v56.f32), 0xEF));
	// vmaxfp128 v50,v63,v50
	_mm_store_ps(ctx.v50.f32, _mm_max_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v50.f32)));
	// vminfp128 v47,v58,v60
	_mm_store_ps(ctx.v47.f32, _mm_min_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v60.f32)));
	// vmaxfp128 v53,v63,v53
	_mm_store_ps(ctx.v53.f32, _mm_max_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v53.f32)));
	// vminfp128 v52,v59,v52
	_mm_store_ps(ctx.v52.f32, _mm_min_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v52.f32)));
	// vmsum3fp128 v46,v49,v57
	_mm_store_ps(ctx.v46.f32, _mm_dp_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v57.f32), 0xEF));
	// vaddfp128 v60,v49,v61
	_mm_store_ps(ctx.v60.f32, _mm_add_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v61.f32)));
	// vmsum3fp128 v49,v49,v56
	_mm_store_ps(ctx.v49.f32, _mm_dp_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v56.f32), 0xEF));
	// vmaxfp128 v48,v63,v48
	_mm_store_ps(ctx.v48.f32, _mm_max_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v48.f32)));
	// vmaxfp128 v51,v63,v51
	_mm_store_ps(ctx.v51.f32, _mm_max_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v51.f32)));
	// vminfp128 v50,v59,v50
	_mm_store_ps(ctx.v50.f32, _mm_min_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v50.f32)));
	// vminfp128 v53,v58,v53
	_mm_store_ps(ctx.v53.f32, _mm_min_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v53.f32)));
	// vrfiz128 v12,v47
	_mm_store_ps(ctx.v12.f32, _mm_round_ps(_mm_load_ps(ctx.v47.f32), _MM_FROUND_TO_ZERO | _MM_FROUND_NO_EXC));
	// vrfiz128 v13,v52
	_mm_store_ps(ctx.v13.f32, _mm_round_ps(_mm_load_ps(ctx.v52.f32), _MM_FROUND_TO_ZERO | _MM_FROUND_NO_EXC));
	// vmaxfp128 v46,v63,v46
	_mm_store_ps(ctx.v46.f32, _mm_max_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v46.f32)));
	// vmaxfp128 v49,v63,v49
	_mm_store_ps(ctx.v49.f32, _mm_max_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v49.f32)));
	// vminfp128 v48,v59,v48
	_mm_store_ps(ctx.v48.f32, _mm_min_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v48.f32)));
	// vminfp128 v51,v58,v51
	_mm_store_ps(ctx.v51.f32, _mm_min_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v51.f32)));
	// vrfiz128 v11,v50
	_mm_store_ps(ctx.v11.f32, _mm_round_ps(_mm_load_ps(ctx.v50.f32), _MM_FROUND_TO_ZERO | _MM_FROUND_NO_EXC));
	// vrfiz128 v10,v53
	_mm_store_ps(ctx.v10.f32, _mm_round_ps(_mm_load_ps(ctx.v53.f32), _MM_FROUND_TO_ZERO | _MM_FROUND_NO_EXC));
	// vsubfp128 v47,v47,v12
	_mm_store_ps(ctx.v47.f32, _mm_sub_ps(_mm_load_ps(ctx.v47.f32), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v9,v0,v12,v13
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// vsubfp128 v52,v52,v13
	_mm_store_ps(ctx.v52.f32, _mm_sub_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v13.f32)));
	// vminfp128 v46,v59,v46
	_mm_store_ps(ctx.v46.f32, _mm_min_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v46.f32)));
	// vminfp128 v49,v58,v49
	_mm_store_ps(ctx.v49.f32, _mm_min_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v49.f32)));
	// vrfiz128 v13,v48
	_mm_store_ps(ctx.v13.f32, _mm_round_ps(_mm_load_ps(ctx.v48.f32), _MM_FROUND_TO_ZERO | _MM_FROUND_NO_EXC));
	// vrfiz128 v12,v51
	_mm_store_ps(ctx.v12.f32, _mm_round_ps(_mm_load_ps(ctx.v51.f32), _MM_FROUND_TO_ZERO | _MM_FROUND_NO_EXC));
	// vsubfp128 v50,v50,v11
	_mm_store_ps(ctx.v50.f32, _mm_sub_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v11.f32)));
	// vsubfp128 v53,v53,v10
	_mm_store_ps(ctx.v53.f32, _mm_sub_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v10.f32)));
	// vmaddfp v8,v0,v10,v11
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v11.f32)));
	// vor128 v43,v47,v47
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_load_si128((__m128i*)ctx.v47.u8));
	// vsubfp128 v47,v62,v47
	_mm_store_ps(ctx.v47.f32, _mm_sub_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v47.f32)));
	// vor128 v44,v52,v52
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_load_si128((__m128i*)ctx.v52.u8));
	// vsubfp128 v52,v62,v52
	_mm_store_ps(ctx.v52.f32, _mm_sub_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v52.f32)));
	// vcfpsxws128 v45,v9,0
	_mm_store_si128((__m128i*)ctx.v45.s32, _mm_vctsxs(_mm_load_ps(ctx.v9.f32)));
	// vrfiz128 v11,v46
	_mm_store_ps(ctx.v11.f32, _mm_round_ps(_mm_load_ps(ctx.v46.f32), _MM_FROUND_TO_ZERO | _MM_FROUND_NO_EXC));
	// vrfiz128 v10,v49
	_mm_store_ps(ctx.v10.f32, _mm_round_ps(_mm_load_ps(ctx.v49.f32), _MM_FROUND_TO_ZERO | _MM_FROUND_NO_EXC));
	// vsubfp128 v48,v48,v13
	_mm_store_ps(ctx.v48.f32, _mm_sub_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v13,v0,v12,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// vor128 v42,v50,v50
	_mm_store_si128((__m128i*)ctx.v42.u8, _mm_load_si128((__m128i*)ctx.v50.u8));
	// vsubfp128 v50,v62,v50
	_mm_store_ps(ctx.v50.f32, _mm_sub_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v50.f32)));
	// vsubfp128 v51,v51,v12
	_mm_store_ps(ctx.v51.f32, _mm_sub_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v12.f32)));
	// vor128 v40,v53,v53
	_mm_store_si128((__m128i*)ctx.v40.u8, _mm_load_si128((__m128i*)ctx.v53.u8));
	// vcfpsxws128 v41,v8,0
	_mm_store_si128((__m128i*)ctx.v41.s32, _mm_vctsxs(_mm_load_ps(ctx.v8.f32)));
	// vrlimi128 v43,v47,12,0
	_mm_store_ps(ctx.v43.f32, _mm_blend_ps(_mm_load_ps(ctx.v43.f32), _mm_permute_ps(_mm_load_ps(ctx.v47.f32), 228), 12));
	// vsubfp128 v53,v62,v53
	_mm_store_ps(ctx.v53.f32, _mm_sub_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v53.f32)));
	// vrlimi128 v44,v52,10,0
	_mm_store_ps(ctx.v44.f32, _mm_blend_ps(_mm_load_ps(ctx.v44.f32), _mm_permute_ps(_mm_load_ps(ctx.v52.f32), 228), 10));
	// vsubfp128 v52,v46,v11
	_mm_store_ps(ctx.v52.f32, _mm_sub_ps(_mm_load_ps(ctx.v46.f32), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v12,v0,v10,v11
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v11.f32)));
	// vsubfp128 v47,v62,v48
	_mm_store_ps(ctx.v47.f32, _mm_sub_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v48.f32)));
	// vsubfp128 v49,v49,v10
	_mm_store_ps(ctx.v49.f32, _mm_sub_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v10.f32)));
	// vcfpsxws128 v46,v13,0
	_mm_store_si128((__m128i*)ctx.v46.s32, _mm_vctsxs(_mm_load_ps(ctx.v13.f32)));
	// vrlimi128 v42,v50,10,0
	_mm_store_ps(ctx.v42.f32, _mm_blend_ps(_mm_load_ps(ctx.v42.f32), _mm_permute_ps(_mm_load_ps(ctx.v50.f32), 228), 10));
	// vmulfp128 v50,v44,v43
	_mm_store_ps(ctx.v50.f32, _mm_mul_ps(_mm_load_ps(ctx.v44.f32), _mm_load_ps(ctx.v43.f32)));
	// vsubfp128 v39,v62,v51
	_mm_store_ps(ctx.v39.f32, _mm_sub_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v51.f32)));
	// vrlimi128 v45,v41,4,0
	_mm_store_ps(ctx.v45.f32, _mm_blend_ps(_mm_load_ps(ctx.v45.f32), _mm_permute_ps(_mm_load_ps(ctx.v41.f32), 228), 4));
	// vrlimi128 v40,v53,12,0
	_mm_store_ps(ctx.v40.f32, _mm_blend_ps(_mm_load_ps(ctx.v40.f32), _mm_permute_ps(_mm_load_ps(ctx.v53.f32), 228), 12));
	// vmulfp128 v53,v42,v40
	_mm_store_ps(ctx.v53.f32, _mm_mul_ps(_mm_load_ps(ctx.v42.f32), _mm_load_ps(ctx.v40.f32)));
	// vcfpsxws128 v44,v12,0
	_mm_store_si128((__m128i*)ctx.v44.s32, _mm_vctsxs(_mm_load_ps(ctx.v12.f32)));
	// vrlimi128 v48,v47,10,0
	_mm_store_ps(ctx.v48.f32, _mm_blend_ps(_mm_load_ps(ctx.v48.f32), _mm_permute_ps(_mm_load_ps(ctx.v47.f32), 228), 10));
	// vsubfp128 v47,v62,v49
	_mm_store_ps(ctx.v47.f32, _mm_sub_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v49.f32)));
	// vrlimi128 v45,v46,2,0
	_mm_store_ps(ctx.v45.f32, _mm_blend_ps(_mm_load_ps(ctx.v45.f32), _mm_permute_ps(_mm_load_ps(ctx.v46.f32), 228), 2));
	// vsubfp128 v62,v62,v52
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v52.f32)));
	// vrlimi128 v51,v39,12,0
	_mm_store_ps(ctx.v51.f32, _mm_blend_ps(_mm_load_ps(ctx.v51.f32), _mm_permute_ps(_mm_load_ps(ctx.v39.f32), 228), 12));
	// vmulfp128 v51,v48,v51
	_mm_store_ps(ctx.v51.f32, _mm_mul_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v51.f32)));
	// vrlimi128 v45,v44,1,0
	_mm_store_ps(ctx.v45.f32, _mm_blend_ps(_mm_load_ps(ctx.v45.f32), _mm_permute_ps(_mm_load_ps(ctx.v44.f32), 228), 1));
	// vrlimi128 v49,v47,12,0
	_mm_store_ps(ctx.v49.f32, _mm_blend_ps(_mm_load_ps(ctx.v49.f32), _mm_permute_ps(_mm_load_ps(ctx.v47.f32), 228), 12));
	// stvx128 v45,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v45.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r9,-76(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -76);
	// lwz r8,-80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -80);
	// add r27,r9,r4
	ctx.r27.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvlx128 v46,r9,r3
	temp.u32 = ctx.r9.u32 + ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r7,-72(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -72);
	// add r28,r8,r4
	ctx.r28.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lwz r6,-68(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -68);
	// add r26,r8,r10
	ctx.r26.u64 = ctx.r8.u64 + ctx.r10.u64;
	// vrlimi128 v52,v62,10,0
	_mm_store_ps(ctx.v52.f32, _mm_blend_ps(_mm_load_ps(ctx.v52.f32), _mm_permute_ps(_mm_load_ps(ctx.v62.f32), 228), 10));
	// lvlx128 v47,r8,r3
	temp.u32 = ctx.r8.u32 + ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// lvlx128 v43,r27,r3
	temp.u32 = ctx.r27.u32 + ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r27,r7,r4
	ctx.r27.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lvlx128 v48,r28,r3
	temp.u32 = ctx.r28.u32 + ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r28,r9,r10
	ctx.r28.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// lvrx128 v41,r26,r3
	temp.u32 = ctx.r26.u32 + ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v41.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v48,v48,v41
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)ctx.v41.u8)));
	// lvlx128 v45,r7,r3
	temp.u32 = ctx.r7.u32 + ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v41,r8,r3
	temp.u32 = ctx.r8.u32 + ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v41.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// add r8,r6,r4
	ctx.r8.u64 = ctx.r6.u64 + ctx.r4.u64;
	// vor128 v47,v47,v41
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)ctx.v41.u8)));
	// lvlx128 v41,r27,r3
	temp.u32 = ctx.r27.u32 + ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v41.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v42,r28,r3
	temp.u32 = ctx.r28.u32 + ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v42.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// add r28,r7,r10
	ctx.r28.u64 = ctx.r7.u64 + ctx.r10.u64;
	// vor128 v43,v43,v42
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v43.u8), _mm_load_si128((__m128i*)ctx.v42.u8)));
	// lvrx128 v42,r9,r3
	temp.u32 = ctx.r9.u32 + ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v42.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v46,v46,v42
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v46.u8), _mm_load_si128((__m128i*)ctx.v42.u8)));
	// addi r9,r7,16
	ctx.r9.s64 = ctx.r7.s64 + 16;
	// vrlimi128 v48,v63,1,0
	_mm_store_ps(ctx.v48.f32, _mm_blend_ps(_mm_load_ps(ctx.v48.f32), _mm_permute_ps(_mm_load_ps(ctx.v63.f32), 228), 1));
	// add r7,r6,r10
	ctx.r7.u64 = ctx.r6.u64 + ctx.r10.u64;
	// vmulfp128 v52,v52,v49
	_mm_store_ps(ctx.v52.f32, _mm_mul_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v49.f32)));
	// lvlx128 v44,r6,r3
	temp.u32 = ctx.r6.u32 + ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v43,v63,1,0
	_mm_store_ps(ctx.v43.f32, _mm_blend_ps(_mm_load_ps(ctx.v43.f32), _mm_permute_ps(_mm_load_ps(ctx.v63.f32), 228), 1));
	// lvrx128 v42,r28,r3
	temp.u32 = ctx.r28.u32 + ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v42.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v42,v41,v42
	_mm_store_si128((__m128i*)ctx.v42.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v41.u8), _mm_load_si128((__m128i*)ctx.v42.u8)));
	// vperm128 v48,v47,v48,v7
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// lvrx128 v49,r7,r3
	temp.u32 = ctx.r7.u32 + ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v49.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vperm128 v62,v46,v43,v7
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v46.u8), _mm_load_si128((__m128i*)ctx.v43.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// lvrx128 v46,r9,r3
	temp.u32 = ctx.r9.u32 + ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v46.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v47,v45,v46
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v45.u8), _mm_load_si128((__m128i*)ctx.v46.u8)));
	// addi r9,r6,16
	ctx.r9.s64 = ctx.r6.s64 + 16;
	// lvlx128 v46,r8,r3
	temp.u32 = ctx.r8.u32 + ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v42,v63,1,0
	_mm_store_ps(ctx.v42.f32, _mm_blend_ps(_mm_load_ps(ctx.v42.f32), _mm_permute_ps(_mm_load_ps(ctx.v63.f32), 228), 1));
	// vor128 v49,v46,v49
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v46.u8), _mm_load_si128((__m128i*)ctx.v49.u8)));
	// vcsxwfp128 v48,v48,0
	_mm_store_ps(ctx.v48.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v48.u32)));
	// vcsxwfp128 v62,v62,0
	_mm_store_ps(ctx.v62.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v62.u32)));
	// lvrx128 v46,r9,r3
	temp.u32 = ctx.r9.u32 + ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v46.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vperm128 v47,v47,v42,v7
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)ctx.v42.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vrlimi128 v49,v63,1,0
	_mm_store_ps(ctx.v49.f32, _mm_blend_ps(_mm_load_ps(ctx.v49.f32), _mm_permute_ps(_mm_load_ps(ctx.v63.f32), 228), 1));
	// vor128 v46,v44,v46
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v44.u8), _mm_load_si128((__m128i*)ctx.v46.u8)));
	// vcsxwfp128 v63,v47,0
	_mm_store_ps(ctx.v63.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v47.u32)));
	// vperm128 v49,v46,v49,v7
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v46.u8), _mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vmsum4fp128 v62,v53,v62
	_mm_store_ps(ctx.v62.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v62.f32), 0xFF));
	// vmsum4fp128 v53,v50,v48
	_mm_store_ps(ctx.v53.f32, _mm_dp_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v48.f32), 0xFF));
	// vcsxwfp128 v50,v49,0
	_mm_store_ps(ctx.v50.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v49.u32)));
	// vmsum4fp128 v63,v51,v63
	_mm_store_ps(ctx.v63.f32, _mm_dp_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v63.f32), 0xFF));
	// vmsum4fp128 v52,v52,v50
	_mm_store_ps(ctx.v52.f32, _mm_dp_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// vrlimi128 v53,v62,4,0
	_mm_store_ps(ctx.v53.f32, _mm_blend_ps(_mm_load_ps(ctx.v53.f32), _mm_permute_ps(_mm_load_ps(ctx.v62.f32), 228), 4));
	// vrlimi128 v53,v63,2,0
	_mm_store_ps(ctx.v53.f32, _mm_blend_ps(_mm_load_ps(ctx.v53.f32), _mm_permute_ps(_mm_load_ps(ctx.v63.f32), 228), 2));
	// vrlimi128 v53,v52,1,0
	_mm_store_ps(ctx.v53.f32, _mm_blend_ps(_mm_load_ps(ctx.v53.f32), _mm_permute_ps(_mm_load_ps(ctx.v52.f32), 228), 1));
	// stvlx128 v53,r0,r11
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v53.u8[15 - i]);
	// stvrx128 v53,r11,r29
	ea = ctx.r11.u32 + ctx.r29.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v53.u8[i]);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x82a29e54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A29E54;
	// vrlimi128 v60,v54,8,0
	_mm_store_ps(ctx.v60.f32, _mm_blend_ps(_mm_load_ps(ctx.v60.f32), _mm_permute_ps(_mm_load_ps(ctx.v54.f32), 228), 8));
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// vaddfp128 v60,v60,v55
	_mm_store_ps(ctx.v60.f32, _mm_add_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v55.f32)));
	// bne 0x82a29e40
	if (!ctx.cr0.eq) goto loc_82A29E40;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2A0B8"))) PPC_WEAK_FUNC(sub_82A2A0B8);
PPC_FUNC_IMPL(__imp__sub_82A2A0B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r11,-13232
	ctx.r3.s64 = ctx.r11.s64 + -13232;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2A0C4"))) PPC_WEAK_FUNC(sub_82A2A0C4);
PPC_FUNC_IMPL(__imp__sub_82A2A0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2A0C8"))) PPC_WEAK_FUNC(sub_82A2A0C8);
PPC_FUNC_IMPL(__imp__sub_82A2A0C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r11,-13216
	ctx.r3.s64 = ctx.r11.s64 + -13216;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2A0D4"))) PPC_WEAK_FUNC(sub_82A2A0D4);
PPC_FUNC_IMPL(__imp__sub_82A2A0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2A0D8"))) PPC_WEAK_FUNC(sub_82A2A0D8);
PPC_FUNC_IMPL(__imp__sub_82A2A0D8) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-14352
	ctx.r11.s64 = ctx.r11.s64 + -14352;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x82a2a120
	if (ctx.cr0.eq) goto loc_82A2A120;
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
	ctx.lr = 0x82A2A120;
	sub_82A81D88(ctx, base);
loc_82A2A120:
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

__attribute__((alias("__imp__sub_82A2A138"))) PPC_WEAK_FUNC(sub_82A2A138);
PPC_FUNC_IMPL(__imp__sub_82A2A138) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-14344
	ctx.r11.s64 = ctx.r11.s64 + -14344;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x82a2a180
	if (ctx.cr0.eq) goto loc_82A2A180;
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
	ctx.lr = 0x82A2A180;
	sub_82A81D88(ctx, base);
loc_82A2A180:
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

__attribute__((alias("__imp__sub_82A2A198"))) PPC_WEAK_FUNC(sub_82A2A198);
PPC_FUNC_IMPL(__imp__sub_82A2A198) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// addi r7,r10,-14328
	ctx.r7.s64 = ctx.r10.s64 + -14328;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r8,r8,-14336
	ctx.r8.s64 = ctx.r8.s64 + -14336;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r11.u8);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r10,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r10.u32);
	// stw r10,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r9,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r9.u32);
	// stw r9,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r9.u32);
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2A208"))) PPC_WEAK_FUNC(sub_82A2A208);
PPC_FUNC_IMPL(__imp__sub_82A2A208) {
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
	// bl 0x82a2ea98
	ctx.lr = 0x82A2A228;
	sub_82A2EA98(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a2a258
	if (ctx.cr0.eq) goto loc_82A2A258;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a2a258
	if (ctx.cr6.eq) goto loc_82A2A258;
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
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a81d88
	ctx.lr = 0x82A2A258;
	sub_82A81D88(ctx, base);
loc_82A2A258:
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

__attribute__((alias("__imp__sub_82A2A274"))) PPC_WEAK_FUNC(sub_82A2A274);
PPC_FUNC_IMPL(__imp__sub_82A2A274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2A278"))) PPC_WEAK_FUNC(sub_82A2A278);
PPC_FUNC_IMPL(__imp__sub_82A2A278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A2A280;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,8
	ctx.r11.s64 = 524288;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lis r29,-31963
	ctx.r29.s64 = -2094727168;
	// ori r30,r11,63156
	ctx.r30.u64 = ctx.r11.u64 | 63156;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82a2a2bc
	if (ctx.cr6.eq) goto loc_82A2A2BC;
	// lwz r11,24028(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24028);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x82a81d88
	ctx.lr = 0x82A2A2B4;
	sub_82A81D88(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82A2A2BC:
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// rlwinm r5,r28,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82a2a2d4
	if (!ctx.cr6.gt) goto loc_82A2A2D4;
	// li r5,-1
	ctx.r5.s64 = -1;
loc_82A2A2D4:
	// lwz r11,24028(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24028);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x82a81490
	ctx.lr = 0x82A2A2E4;
	sub_82A81490(ctx, base);
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// and r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 & ctx.r11.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2A304"))) PPC_WEAK_FUNC(sub_82A2A304);
PPC_FUNC_IMPL(__imp__sub_82A2A304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2A308"))) PPC_WEAK_FUNC(sub_82A2A308);
PPC_FUNC_IMPL(__imp__sub_82A2A308) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,-14328
	ctx.r11.s64 = ctx.r11.s64 + -14328;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82a27f68
	ctx.lr = 0x82A2A330;
	sub_82A27F68(ctx, base);
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x82a35780
	ctx.lr = 0x82A2A338;
	sub_82A35780(ctx, base);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x82a2ea98
	ctx.lr = 0x82A2A340;
	sub_82A2EA98(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,-14352
	ctx.r11.s64 = ctx.r11.s64 + -14352;
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

__attribute__((alias("__imp__sub_82A2A360"))) PPC_WEAK_FUNC(sub_82A2A360);
PPC_FUNC_IMPL(__imp__sub_82A2A360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A2A368;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82a27f68
	ctx.lr = 0x82A2A380;
	sub_82A27F68(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// li r5,32
	ctx.r5.s64 = 32;
	// ori r10,r10,63156
	ctx.r10.u64 = ctx.r10.u64 | 63156;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a81490
	ctx.lr = 0x82A2A3A0;
	sub_82A81490(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a2a3b4
	if (ctx.cr0.eq) goto loc_82A2A3B4;
	// bl 0x82a2ef30
	ctx.lr = 0x82A2A3B0;
	sub_82A2EF30(ctx, base);
	// b 0x82a2a3b8
	goto loc_82A2A3B8;
loc_82A2A3B4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82A2A3B8:
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a2a3d0
	if (!ctx.cr6.eq) goto loc_82A2A3D0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82a2a49c
	goto loc_82A2A49C;
loc_82A2A3D0:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82a2f6e0
	ctx.lr = 0x82A2A3DC;
	sub_82A2F6E0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge 0x82a2a3fc
	if (!ctx.cr0.lt) goto loc_82A2A3FC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a27f68
	ctx.lr = 0x82A2A3EC;
	sub_82A27F68(ctx, base);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// stb r28,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r28.u8);
	// b 0x82a2a498
	goto loc_82A2A498;
loc_82A2A3FC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82a2efb0
	ctx.lr = 0x82A2A408;
	sub_82A2EFB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a2a498
	if (ctx.cr0.lt) goto loc_82A2A498;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// ble cr6,0x82a2a498
	if (!ctx.cr6.gt) goto loc_82A2A498;
	// divwu r10,r10,r11
	ctx.r10.u32 = ctx.r10.u32 / ctx.r11.u32;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// bne cr6,0x82a2a498
	if (!ctx.cr6.eq) goto loc_82A2A498;
	// addi r30,r31,20
	ctx.r30.s64 = ctx.r31.s64 + 20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2eaf8
	ctx.lr = 0x82A2A45C;
	sub_82A2EAF8(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r7,4
	ctx.r7.s64 = 4;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2ebd0
	ctx.lr = 0x82A2A47C;
	sub_82A2EBD0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mullw r4,r11,r10
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// bl 0x82a2a278
	ctx.lr = 0x82A2A498;
	sub_82A2A278(ctx, base);
loc_82A2A498:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82A2A49C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2A4A4"))) PPC_WEAK_FUNC(sub_82A2A4A4);
PPC_FUNC_IMPL(__imp__sub_82A2A4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2A4A8"))) PPC_WEAK_FUNC(sub_82A2A4A8);
PPC_FUNC_IMPL(__imp__sub_82A2A4A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82A2A4B0;
	__savegprlr_25(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82a2a760
	if (ctx.cr0.eq) goto loc_82A2A760;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-14336
	ctx.r10.s64 = ctx.r10.s64 + -14336;
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// stw r30,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r30.u32);
	// stw r30,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r30.u32);
	// stw r9,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r9.u32);
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// bl 0x82a2eaf8
	ctx.lr = 0x82A2A520;
	sub_82A2EAF8(ctx, base);
	// lwz r5,4(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r4,8(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mullw r6,r5,r29
	ctx.r6.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r29.s32);
	// subf r26,r11,r4
	ctx.r26.s64 = ctx.r4.s64 - ctx.r11.s64;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r25,12(r27)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// subf r25,r5,r25
	ctx.r25.s64 = ctx.r25.s64 - ctx.r5.s64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// bl 0x82a2edd8
	ctx.lr = 0x82A2A564;
	sub_82A2EDD8(ctx, base);
	// addi r29,r31,20
	ctx.r29.s64 = ctx.r31.s64 + 20;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82a31da0
	ctx.lr = 0x82A2A578;
	sub_82A31DA0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f0,5184(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// ble cr6,0x82a2a5c8
	if (!ctx.cr6.gt) goto loc_82A2A5C8;
	// lwz r8,36(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r6,56(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r7,40(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
loc_82A2A59C:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82a2a5c0
	if (!ctx.cr6.gt) goto loc_82A2A5C0;
	// addi r9,r7,-4
	ctx.r9.s64 = ctx.r7.s64 + -4;
loc_82A2A5AC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfsu f13,4(r9)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r9.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82a2a5ac
	if (ctx.cr6.lt) goto loc_82A2A5AC;
loc_82A2A5C0:
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// bdnz 0x82a2a59c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A2A59C;
loc_82A2A5C8:
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mullw r5,r8,r6
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// lfs f13,-14316(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -14316);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// ble cr6,0x82a2a644
	if (!ctx.cr6.gt) goto loc_82A2A644;
	// addi r6,r10,-4
	ctx.r6.s64 = ctx.r10.s64 + -4;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
loc_82A2A5F8:
	// lwz r8,36(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lwz r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mullw r8,r7,r8
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// ble cr6,0x82a2a634
	if (!ctx.cr6.gt) goto loc_82A2A634;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_82A2A618:
	// lfsu f13,4(r9)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r9.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsu f13,4(r6)
	temp.f32 = float(ctx.f13.f64);
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r6.u32 = ea;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82a2a618
	if (ctx.cr6.lt) goto loc_82A2A618;
loc_82A2A634:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82a2a5f8
	if (ctx.cr6.lt) goto loc_82A2A5F8;
loc_82A2A644:
	// li r8,10
	ctx.r8.s64 = 10;
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// bl 0x82a2f070
	ctx.lr = 0x82A2A65C;
	sub_82A2F070(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82a2a754
	if (ctx.cr0.lt) goto loc_82A2A754;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82a2f028
	ctx.lr = 0x82A2A670;
	sub_82A2F028(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82a2a754
	if (!ctx.cr0.eq) goto loc_82A2A754;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// blt cr6,0x82a2a688
	if (ctx.cr6.lt) goto loc_82A2A688;
	// li r11,10
	ctx.r11.s64 = 10;
loc_82A2A688:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a2a754
	if (ctx.cr6.eq) goto loc_82A2A754;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// lfs f0,-14320(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -14320);
	ctx.f0.f64 = double(temp.f32);
loc_82A2A6A0:
	// lfs f13,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsu f13,4(r10)
	temp.f32 = float(ctx.f13.f64);
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82a2a6a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A2A6A0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a2a754
	if (ctx.cr6.eq) goto loc_82A2A754;
	// extsw r10,r25
	ctx.r10.s64 = ctx.r25.s32;
	// extsw r9,r26
	ctx.r9.s64 = ctx.r26.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r9,-8
	ctx.r11.s64 = ctx.r9.s64 + -8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
loc_82A2A6F8:
	// lwa r8,0(r27)
	ctx.r8.s64 = int32_t(PPC_LOAD_U32(ctx.r27.u32 + 0));
	// rlwinm r10,r30,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x7FFFFFFF;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lfs f11,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r9,r30,2,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFF8;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lfsu f0,8(r11)
	ea = 8 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f0.f64 = double(temp.f32);
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + ctx.r27.u64;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmadds f11,f11,f13,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f10.f64));
	// stfsx f11,r10,r27
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r27.u32, temp.u32);
	// lwa r10,4(r27)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r27.u32 + 4));
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmadds f0,f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64 + ctx.f11.f64));
	// stfs f0,20(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// bdnz 0x82a2a6f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A2A6F8;
loc_82A2A754:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82a2ea98
	ctx.lr = 0x82A2A75C;
	sub_82A2EA98(ctx, base);
	// b 0x82a2a768
	goto loc_82A2A768;
loc_82A2A760:
	// lis r29,-32768
	ctx.r29.s64 = -2147483648;
	// ori r29,r29,65535
	ctx.r29.u64 = ctx.r29.u64 | 65535;
loc_82A2A768:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2A774"))) PPC_WEAK_FUNC(sub_82A2A774);
PPC_FUNC_IMPL(__imp__sub_82A2A774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2A778"))) PPC_WEAK_FUNC(sub_82A2A778);
PPC_FUNC_IMPL(__imp__sub_82A2A778) {
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
	// bl 0x82a2a308
	ctx.lr = 0x82A2A798;
	sub_82A2A308(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a2a7c8
	if (ctx.cr0.eq) goto loc_82A2A7C8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a2a7c8
	if (ctx.cr6.eq) goto loc_82A2A7C8;
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
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a81d88
	ctx.lr = 0x82A2A7C8;
	sub_82A81D88(ctx, base);
loc_82A2A7C8:
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

__attribute__((alias("__imp__sub_82A2A7E4"))) PPC_WEAK_FUNC(sub_82A2A7E4);
PPC_FUNC_IMPL(__imp__sub_82A2A7E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2A7E8"))) PPC_WEAK_FUNC(sub_82A2A7E8);
PPC_FUNC_IMPL(__imp__sub_82A2A7E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82A2A7F0;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,5184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq cr6,0x82a2a820
	if (ctx.cr6.eq) goto loc_82A2A820;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A2A820:
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// mulli r29,r26,1360
	ctx.r29.s64 = ctx.r26.s64 * 1360;
	// addi r30,r11,-13920
	ctx.r30.s64 = ctx.r11.s64 + -13920;
	// li r10,2
	ctx.r10.s64 = 2;
	// add r31,r29,r30
	ctx.r31.u64 = ctx.r29.u64 + ctx.r30.u64;
	// lwzx r11,r29,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwx r11,r29,r30
	PPC_STORE_U32(ctx.r29.u32 + ctx.r30.u32, ctx.r11.u32);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82a2a850
	if (ctx.cr6.lt) goto loc_82A2A850;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_82A2A850:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82a2a868
	if (ctx.cr6.lt) goto loc_82A2A868;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_82A2A868:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,448
	ctx.r5.s64 = 448;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mulli r11,r11,448
	ctx.r11.s64 = ctx.r11.s64 * 448;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x82a75220
	ctx.lr = 0x82A2A884;
	sub_82A75220(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,3
	ctx.r7.s64 = 3;
	// lwz r6,4(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r30,16
	ctx.r9.s64 = ctx.r30.s64 + 16;
	// subfc r10,r7,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r7.u32;
	ctx.r10.s64 = ctx.r11.s64 - ctx.r7.s64;
	// addi r8,r30,16
	ctx.r8.s64 = ctx.r30.s64 + 16;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// mulli r10,r10,448
	ctx.r10.s64 = ctx.r10.s64 * 448;
	// subfc r7,r7,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r7.u32;
	ctx.r7.s64 = ctx.r11.s64 - ctx.r7.s64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// subfe r7,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// mulli r11,r11,448
	ctx.r11.s64 = ctx.r11.s64 * 448;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// bne cr6,0x82a2a904
	if (!ctx.cr6.eq) goto loc_82A2A904;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82a2a904
	if (!ctx.cr6.eq) goto loc_82A2A904;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82a2a904
	if (!ctx.cr6.eq) goto loc_82A2A904;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82a2a934
	if (ctx.cr6.eq) goto loc_82A2A934;
loc_82A2A904:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82A2A908:
	// add r10,r31,r29
	ctx.r10.u64 = ctx.r31.u64 + ctx.r29.u64;
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// li r5,448
	ctx.r5.s64 = 448;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82a75220
	ctx.lr = 0x82A2A920;
	sub_82A75220(ctx, base);
	// addi r31,r31,448
	ctx.r31.s64 = ctx.r31.s64 + 448;
	// cmplwi cr6,r31,1344
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1344, ctx.xer);
	// blt cr6,0x82a2a908
	if (ctx.cr6.lt) goto loc_82A2A908;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_82A2A934:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82a2a988
	if (ctx.cr6.eq) goto loc_82A2A988;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82A2A944:
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// addi r10,r30,16
	ctx.r10.s64 = ctx.r30.s64 + 16;
	// li r5,448
	ctx.r5.s64 = 448;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82a75220
	ctx.lr = 0x82A2A95C;
	sub_82A75220(ctx, base);
	// addi r31,r31,448
	ctx.r31.s64 = ctx.r31.s64 + 448;
	// cmplwi cr6,r31,1344
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1344, ctx.xer);
	// blt cr6,0x82a2a944
	if (ctx.cr6.lt) goto loc_82A2A944;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// mulli r11,r26,7408
	ctx.r11.s64 = ctx.r26.s64 * 7408;
	// addi r10,r10,-28736
	ctx.r10.s64 = ctx.r10.s64 + -28736;
	// li r5,7408
	ctx.r5.s64 = 7408;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82a75988
	ctx.lr = 0x82A2A984;
	sub_82A75988(ctx, base);
	// b 0x82a2aa28
	goto loc_82A2AA28;
loc_82A2A988:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a2a9f8
	if (ctx.cr6.eq) goto loc_82A2A9F8;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82A2A998:
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// addi r10,r30,16
	ctx.r10.s64 = ctx.r30.s64 + 16;
	// li r5,448
	ctx.r5.s64 = 448;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82a75220
	ctx.lr = 0x82A2A9B0;
	sub_82A75220(ctx, base);
	// addi r31,r31,448
	ctx.r31.s64 = ctx.r31.s64 + 448;
	// cmplwi cr6,r31,1344
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1344, ctx.xer);
	// blt cr6,0x82a2a998
	if (ctx.cr6.lt) goto loc_82A2A998;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// mulli r11,r26,7408
	ctx.r11.s64 = ctx.r26.s64 * 7408;
	// addi r10,r10,-28736
	ctx.r10.s64 = ctx.r10.s64 + -28736;
	// li r5,7408
	ctx.r5.s64 = 7408;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a75988
	ctx.lr = 0x82A2A9DC;
	sub_82A75988(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-29680
	ctx.r11.s64 = ctx.r11.s64 + -29680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,27160(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 27160);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82a2aa18
	goto loc_82A2AA18;
loc_82A2A9F8:
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mulli r11,r26,7408
	ctx.r11.s64 = ctx.r26.s64 * 7408;
	// addi r10,r10,-28736
	ctx.r10.s64 = ctx.r10.s64 + -28736;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r9,-29680
	ctx.r11.s64 = ctx.r9.s64 + -29680;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
loc_82A2AA18:
	// addi r6,r28,352
	ctx.r6.s64 = ctx.r28.s64 + 352;
	// lvx128 v1,r0,r11
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r5,r28,32
	ctx.r5.s64 = ctx.r28.s64 + 32;
	// bl 0x82a33970
	ctx.lr = 0x82A2AA28;
	sub_82A33970(ctx, base);
loc_82A2AA28:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2AA34"))) PPC_WEAK_FUNC(sub_82A2AA34);
PPC_FUNC_IMPL(__imp__sub_82A2AA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2AA38"))) PPC_WEAK_FUNC(sub_82A2AA38);
PPC_FUNC_IMPL(__imp__sub_82A2AA38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// blr 
	return;
}

