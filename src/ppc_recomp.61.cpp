#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8251E5A0"))) PPC_WEAK_FUNC(sub_8251E5A0);
PPC_FUNC_IMPL(__imp__sub_8251E5A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8251E5A8;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r10,-1
	ctx.r10.s64 = -1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8251e6b8
	if (!ctx.cr6.eq) goto loc_8251E6B8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8251e6f8
	ctx.lr = 0x8251E5D8;
	sub_8251E6F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8251e6a0
	if (ctx.cr0.eq) goto loc_8251E6A0;
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8251e5fc
	if (ctx.cr6.eq) goto loc_8251E5FC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8251dfa0
	ctx.lr = 0x8251E5FC;
	sub_8251DFA0(ctx, base);
loc_8251E5FC:
	// lfs f0,80(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fadds f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f13,80(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 80, temp.u32);
	// lfs f12,84(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f31,-2340(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,-15356(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15356);
	ctx.f0.f64 = double(temp.f32);
	// fsel f13,f13,f13,f31
	ctx.f13.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : ctx.f31.f64;
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fsel f13,f11,f12,f13
	ctx.f13.f64 = ctx.f11.f64 >= 0.0 ? ctx.f12.f64 : ctx.f13.f64;
	// stfs f13,80(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 80, temp.u32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fdivs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8251e1e8
	ctx.lr = 0x8251E64C;
	sub_8251E1E8(ctx, base);
	// stw r29,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r29.u32);
	// cmplwi cr6,r29,100
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 100, ctx.xer);
	// blt cr6,0x8251e6b8
	if (ctx.cr6.lt) goto loc_8251E6B8;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// b 0x8251e688
	goto loc_8251E688;
loc_8251E660:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r7,r10,17
	ctx.r7.s64 = ctx.r10.s64 + 17;
	// addi r10,r10,15
	ctx.r10.s64 = ctx.r10.s64 + 15;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f31,r7,r8
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, temp.u32);
	// stwx r9,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
loc_8251E688:
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8251e660
	if (!ctx.cr6.eq) goto loc_8251E660;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8251e118
	ctx.lr = 0x8251E69C;
	sub_8251E118(ctx, base);
	// b 0x8251e6b8
	goto loc_8251E6B8;
loc_8251E6A0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8251e6b8
	if (ctx.cr6.eq) goto loc_8251E6B8;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8251dfa0
	ctx.lr = 0x8251E6B8;
	sub_8251DFA0(ctx, base);
loc_8251E6B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8251E6C4"))) PPC_WEAK_FUNC(sub_8251E6C4);
PPC_FUNC_IMPL(__imp__sub_8251E6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8251E6C8"))) PPC_WEAK_FUNC(sub_8251E6C8);
PPC_FUNC_IMPL(__imp__sub_8251E6C8) {
	PPC_FUNC_PROLOGUE();
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8251da78
	sub_8251DA78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8251E6D4"))) PPC_WEAK_FUNC(sub_8251E6D4);
PPC_FUNC_IMPL(__imp__sub_8251E6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8251E6D8"))) PPC_WEAK_FUNC(sub_8251E6D8);
PPC_FUNC_IMPL(__imp__sub_8251E6D8) {
	PPC_FUNC_PROLOGUE();
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8251da78
	sub_8251DA78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8251E6E4"))) PPC_WEAK_FUNC(sub_8251E6E4);
PPC_FUNC_IMPL(__imp__sub_8251E6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8251E6E8"))) PPC_WEAK_FUNC(sub_8251E6E8);
PPC_FUNC_IMPL(__imp__sub_8251E6E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-2340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251E6F8"))) PPC_WEAK_FUNC(sub_8251E6F8);
PPC_FUNC_IMPL(__imp__sub_8251E6F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x8251E700;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8251e71c
	if (!ctx.cr6.eq) goto loc_8251E71C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8251e8bc
	goto loc_8251E8BC;
loc_8251E71C:
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r30,12(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r28,16(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r27,r25,36
	ctx.r27.s64 = ctx.r25.s64 + 36;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x8251e8a0
	goto loc_8251E8A0;
loc_8251E738:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8251e798
	if (ctx.cr6.eq) goto loc_8251E798;
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// addi r4,r10,8
	ctx.r4.s64 = ctx.r10.s64 + 8;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82580650
	ctx.lr = 0x8251E760;
	sub_82580650(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8251e784
	if (!ctx.cr0.eq) goto loc_8251E784;
	// addi r5,r10,24
	ctx.r5.s64 = ctx.r10.s64 + 24;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82580650
	ctx.lr = 0x8251E778;
	sub_82580650(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x8251e788
	if (ctx.cr0.eq) goto loc_8251E788;
loc_8251E784:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8251E788:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x8251e79c
	goto loc_8251E79C;
loc_8251E798:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8251E79C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8251e83c
	if (ctx.cr6.eq) goto loc_8251E83C;
	// lbz r11,66(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 66);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8251e7c0
	if (ctx.cr0.eq) goto loc_8251E7C0;
	// lbz r11,68(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 68);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x8251e7c4
	if (!ctx.cr0.eq) goto loc_8251E7C4;
loc_8251E7C0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8251E7C4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251e83c
	if (ctx.cr0.eq) goto loc_8251E83C;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8251e83c
	if (ctx.cr0.eq) goto loc_8251E83C;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251e83c
	if (ctx.cr0.eq) goto loc_8251E83C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r29,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8251e80c
	if (ctx.cr6.eq) goto loc_8251E80C;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8251E80C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8251E80C:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8251e830
	if (ctx.cr6.eq) goto loc_8251E830;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8251E830;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8251E830:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// b 0x8251e894
	goto loc_8251E894;
loc_8251E83C:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251e898
	if (ctx.cr0.eq) goto loc_8251E898;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8251e868
	if (ctx.cr6.eq) goto loc_8251E868;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8251E868;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8251E868:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8251e88c
	if (ctx.cr6.eq) goto loc_8251E88C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8251E88C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8251E88C:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
loc_8251E894:
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
loc_8251E898:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_8251E8A0:
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8251e738
	if (!ctx.cr6.eq) goto loc_8251E738;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r10,-1
	ctx.r10.s64 = -1;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8251E8BC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8251E8C4"))) PPC_WEAK_FUNC(sub_8251E8C4);
PPC_FUNC_IMPL(__imp__sub_8251E8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8251E8C8"))) PPC_WEAK_FUNC(sub_8251E8C8);
PPC_FUNC_IMPL(__imp__sub_8251E8C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8251E8D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,-1368
	ctx.r11.s64 = ctx.r11.s64 + -1368;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// li r5,88
	ctx.r5.s64 = 88;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x8251E904;
	sub_82FA77C0(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lfs f13,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// addi r30,r31,116
	ctx.r30.s64 = ctx.r31.s64 + 116;
	// stw r29,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r29.u32);
	// ori r9,r9,34464
	ctx.r9.u64 = ctx.r9.u64 | 34464;
	// li r28,3
	ctx.r28.s64 = 3;
	// lfs f0,-2340(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lfs f0,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// stw r7,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r7.u32);
	// stw r10,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r10.u32);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r9.u32);
	// lfs f10,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f10.f64 = double(temp.f32);
	// stw r10,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r10.u32);
	// lfs f11,136(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,124(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f0,124(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// fadds f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// rotlwi r10,r7,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stfs f0,136(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// stw r9,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r9.u32);
	// fadds f0,f13,f10
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// lwz r9,124(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// stfs f0,144(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// stw r6,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r6.u32);
	// stw r9,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r9.u32);
	// stw r10,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r10.u32);
	// beq cr6,0x8251e9b0
	if (ctx.cr6.eq) goto loc_8251E9B0;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r10,r10,34465
	ctx.r10.u64 = ctx.r10.u64 | 34465;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8251e9b4
	if (!ctx.cr6.eq) goto loc_8251E9B4;
loc_8251E9B0:
	// li r28,7
	ctx.r28.s64 = 7;
loc_8251E9B4:
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x82691500
	ctx.lr = 0x8251E9BC;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8251ea24
	if (ctx.cr0.eq) goto loc_8251EA24;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r28,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r28.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r9,r3,-8
	ctx.r9.s64 = ctx.r3.s64 + -8;
	// stw r7,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r7.u32);
	// lfs f0,-24756(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24756);
	ctx.f0.f64 = double(temp.f32);
	// std r10,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r10.u64);
	// std r10,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, ctx.r10.u64);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// addi r10,r30,-8
	ctx.r10.s64 = ctx.r30.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8251E9F8:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x8251e9f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8251E9F8;
	// stw r29,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r29.u32);
	// addi r11,r3,60
	ctx.r11.s64 = ctx.r3.s64 + 60;
	// stw r29,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r29.u32);
	// addi r11,r3,68
	ctx.r11.s64 = ctx.r3.s64 + 68;
	// stw r29,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r29.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r29,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r29.u32);
	// b 0x8251ea28
	goto loc_8251EA28;
loc_8251EA24:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8251EA28:
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8251ec80
	ctx.lr = 0x8251EA34;
	sub_8251EC80(ctx, base);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_8251EA38:
	// bl 0x825143c8
	ctx.lr = 0x8251EA3C;
	sub_825143C8(ctx, base);
	// lwzx r11,r30,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r3.u32);
	// lwz r9,112(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// addi r3,r11,76
	ctx.r3.s64 = ctx.r11.s64 + 76;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// b 0x8251ea68
	goto loc_8251EA68;
loc_8251EA58:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8251ea9c
	if (ctx.cr6.eq) goto loc_8251EA9C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8251EA68:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8251ea58
	if (!ctx.cr6.eq) goto loc_8251EA58;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8251EA74:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8251ea84
	if (!ctx.cr0.eq) goto loc_8251EA84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82545fe8
	ctx.lr = 0x8251EA84;
	sub_82545FE8(ctx, base);
loc_8251EA84:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// blt cr6,0x8251ea38
	if (ctx.cr6.lt) goto loc_8251EA38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_8251EA9C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8251ea74
	goto loc_8251EA74;
}

__attribute__((alias("__imp__sub_8251EAA4"))) PPC_WEAK_FUNC(sub_8251EAA4);
PPC_FUNC_IMPL(__imp__sub_8251EAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8251EAA8"))) PPC_WEAK_FUNC(sub_8251EAA8);
PPC_FUNC_IMPL(__imp__sub_8251EAA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8251EAB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// stw r5,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r5.u32);
	// li r5,88
	ctx.r5.s64 = 88;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x8251EADC;
	sub_82FA77C0(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lfs f13,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// stw r29,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r29.u32);
	// addi r30,r31,116
	ctx.r30.s64 = ctx.r31.s64 + 116;
	// ori r9,r9,34464
	ctx.r9.u64 = ctx.r9.u64 | 34464;
	// li r28,3
	ctx.r28.s64 = 3;
	// lfs f0,-2340(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lfs f0,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// stw r7,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r7.u32);
	// stw r10,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r10.u32);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r9.u32);
	// lfs f10,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f10.f64 = double(temp.f32);
	// stw r10,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r10.u32);
	// lfs f11,136(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,124(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f0,124(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// fadds f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// rotlwi r10,r7,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stfs f0,136(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// stw r9,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r9.u32);
	// fadds f0,f13,f10
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// lwz r9,124(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// stfs f0,144(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// stw r6,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r6.u32);
	// stw r9,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r9.u32);
	// stw r10,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r10.u32);
	// beq cr6,0x8251eb88
	if (ctx.cr6.eq) goto loc_8251EB88;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r10,r10,34465
	ctx.r10.u64 = ctx.r10.u64 | 34465;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8251eb8c
	if (!ctx.cr6.eq) goto loc_8251EB8C;
loc_8251EB88:
	// li r28,7
	ctx.r28.s64 = 7;
loc_8251EB8C:
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x82691500
	ctx.lr = 0x8251EB94;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8251ebfc
	if (ctx.cr0.eq) goto loc_8251EBFC;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r28,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r28.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r9,r3,-8
	ctx.r9.s64 = ctx.r3.s64 + -8;
	// stw r7,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r7.u32);
	// lfs f0,-24756(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24756);
	ctx.f0.f64 = double(temp.f32);
	// std r10,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r10.u64);
	// std r10,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, ctx.r10.u64);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// addi r10,r30,-8
	ctx.r10.s64 = ctx.r30.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8251EBD0:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x8251ebd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8251EBD0;
	// stw r29,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r29.u32);
	// addi r11,r3,60
	ctx.r11.s64 = ctx.r3.s64 + 60;
	// stw r29,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r29.u32);
	// addi r11,r3,68
	ctx.r11.s64 = ctx.r3.s64 + 68;
	// stw r29,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r29.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r29,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r29.u32);
	// b 0x8251ec00
	goto loc_8251EC00;
loc_8251EBFC:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8251EC00:
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8251ec80
	ctx.lr = 0x8251EC0C;
	sub_8251EC80(ctx, base);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_8251EC10:
	// bl 0x825143c8
	ctx.lr = 0x8251EC14;
	sub_825143C8(ctx, base);
	// lwzx r11,r30,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r3.u32);
	// lwz r9,112(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// addi r3,r11,76
	ctx.r3.s64 = ctx.r11.s64 + 76;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// b 0x8251ec40
	goto loc_8251EC40;
loc_8251EC30:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8251ec74
	if (ctx.cr6.eq) goto loc_8251EC74;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8251EC40:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8251ec30
	if (!ctx.cr6.eq) goto loc_8251EC30;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8251EC4C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8251ec5c
	if (!ctx.cr0.eq) goto loc_8251EC5C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82545fe8
	ctx.lr = 0x8251EC5C;
	sub_82545FE8(ctx, base);
loc_8251EC5C:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// blt cr6,0x8251ec10
	if (ctx.cr6.lt) goto loc_8251EC10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_8251EC74:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8251ec4c
	goto loc_8251EC4C;
}

__attribute__((alias("__imp__sub_8251EC7C"))) PPC_WEAK_FUNC(sub_8251EC7C);
PPC_FUNC_IMPL(__imp__sub_8251EC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8251EC80"))) PPC_WEAK_FUNC(sub_8251EC80);
PPC_FUNC_IMPL(__imp__sub_8251EC80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// ld r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 28);
	// lfs f12,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r8,r11,-22432
	ctx.r8.s64 = ctx.r11.s64 + -22432;
	// lfs f13,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// lwz r5,108(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// lis r6,-32231
	ctx.r6.s64 = -2112290816;
	// std r10,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.r10.u64);
	// std r7,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.r7.u64);
	// lwa r11,196(r8)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r8.u32 + 196));
	// std r11,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.r11.u64);
	// rlwinm. r11,r5,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwa r10,192(r8)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r8.u32 + 192));
	// lfs f11,-60(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -60);
	ctx.f11.f64 = double(temp.f32);
	// fadds f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lfd f11,-40(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// std r10,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.r10.u64);
	// lfd f9,-40(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfs f0,-64(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f13,-64(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// stfs f12,-60(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// ld r10,-64(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// std r10,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.r10.u64);
	// addi r8,r6,27984
	ctx.r8.s64 = ctx.r6.s64 + 27984;
	// fadds f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f0,31512(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 31512);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lfs f13,552(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 552);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,7008
	ctx.r11.s64 = ctx.r11.s64 + 7008;
	// fmuls f12,f10,f0
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f12,-56(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// stfs f12,-64(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// frsp f12,f11
	ctx.f12.f64 = double(float(ctx.f11.f64));
	// frsp f11,f9
	ctx.f11.f64 = double(float(ctx.f9.f64));
	// lfs f0,548(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 548);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// beq 0x8251ed38
	if (ctx.cr0.eq) goto loc_8251ED38;
	// lfs f12,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// b 0x8251ed40
	goto loc_8251ED40;
loc_8251ED38:
	// lfs f12,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
loc_8251ED40:
	// fmuls f13,f11,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f11,132(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f12,136(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,140(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	ctx.f10.f64 = double(temp.f32);
	// ld r8,-56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfs f9,144(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	ctx.f9.f64 = double(temp.f32);
	// ld r9,-64(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// addi r11,r1,-32
	ctx.r11.s64 = ctx.r1.s64 + -32;
	// lwz r10,112(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// fadds f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f12,-44(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// lfs f12,124(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f12,-40(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -40, temp.u32);
	// lfs f12,116(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// stfs f11,-48(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f11,120(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// fadds f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// lfs f12,128(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// stfs f0,-56(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// stfs f11,-52(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -52, temp.u32);
	// ld r6,-56(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// stfs f13,-36(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -36, temp.u32);
	// std r6,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r6.u64);
	// ld r5,-40(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// stfs f10,-64(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// ld r6,-48(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// stfs f9,-60(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// std r5,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r5.u64);
	// ld r7,-64(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// std r7,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r7.u64);
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// ld r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r7,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r7.u64);
	// std r6,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r6.u64);
	// std r5,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r5.u64);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// std r9,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r9.u64);
	// lfs f0,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// std r8,32(r11)
	PPC_STORE_U64(ctx.r11.u32 + 32, ctx.r8.u64);
	// lfs f13,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8251ee18
	if (!ctx.cr6.gt) goto loc_8251EE18;
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
loc_8251EE18:
	// lfs f0,44(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251EE30"))) PPC_WEAK_FUNC(sub_8251EE30);
PPC_FUNC_IMPL(__imp__sub_8251EE30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,7008
	ctx.r11.s64 = ctx.r11.s64 + 7008;
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x8251eeb4
	if (ctx.cr6.lt) goto loc_8251EEB4;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8251eeb4
	if (ctx.cr6.gt) goto loc_8251EEB4;
	// lfs f13,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x8251eeb4
	if (ctx.cr6.lt) goto loc_8251EEB4;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8251eeb4
	if (ctx.cr6.gt) goto loc_8251EEB4;
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x8251eeb4
	if (ctx.cr6.lt) goto loc_8251EEB4;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8251eeb4
	if (ctx.cr6.gt) goto loc_8251EEB4;
	// lfs f13,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x8251eeb4
	if (ctx.cr6.lt) goto loc_8251EEB4;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// li r3,1
	ctx.r3.s64 = 1;
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_8251EEB4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251EEBC"))) PPC_WEAK_FUNC(sub_8251EEBC);
PPC_FUNC_IMPL(__imp__sub_8251EEBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8251EEC0"))) PPC_WEAK_FUNC(sub_8251EEC0);
PPC_FUNC_IMPL(__imp__sub_8251EEC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8251eee0
	if (ctx.cr6.eq) goto loc_8251EEE0;
	// bne 0x8251eeec
	if (!ctx.cr0.eq) goto loc_8251EEEC;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// b 0x8251eee8
	goto loc_8251EEE8;
loc_8251EEE0:
	// beq 0x8251eeec
	if (ctx.cr0.eq) goto loc_8251EEEC;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
loc_8251EEE8:
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
loc_8251EEEC:
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm. r10,r10,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8251ef0c
	if (ctx.cr0.eq) goto loc_8251EF0C;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x8251ef10
	if (!ctx.cr0.eq) goto loc_8251EF10;
loc_8251EF0C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8251EF10:
	// lwz r10,112(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251EF1C"))) PPC_WEAK_FUNC(sub_8251EF1C);
PPC_FUNC_IMPL(__imp__sub_8251EF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8251EF20"))) PPC_WEAK_FUNC(sub_8251EF20);
PPC_FUNC_IMPL(__imp__sub_8251EF20) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82518880
	ctx.lr = 0x8251EF4C;
	sub_82518880(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r11,r11,8964
	ctx.r11.s64 = ctx.r11.s64 + 8964;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8251efb8
	if (ctx.cr6.eq) goto loc_8251EFB8;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x822e4d50
	ctx.lr = 0x8251EF78;
	sub_822E4D50(ctx, base);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82519160
	ctx.lr = 0x8251EF88;
	sub_82519160(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,8520
	ctx.r4.s64 = ctx.r11.s64 + 8520;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x826a7620
	ctx.lr = 0x8251EFA0;
	sub_826A7620(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8251efb0
	if (ctx.cr6.eq) goto loc_8251EFB0;
	// bl 0x82241d18
	ctx.lr = 0x8251EFB0;
	sub_82241D18(ctx, base);
loc_8251EFB0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e4d00
	ctx.lr = 0x8251EFB8;
	sub_822E4D00(ctx, base);
loc_8251EFB8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82519160
	ctx.lr = 0x8251EFC4;
	sub_82519160(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x826a41d0
	ctx.lr = 0x8251EFD0;
	sub_826A41D0(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8251efe0
	if (ctx.cr6.eq) goto loc_8251EFE0;
	// bl 0x82241d18
	ctx.lr = 0x8251EFE0;
	sub_82241D18(ctx, base);
loc_8251EFE0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_8251EFFC"))) PPC_WEAK_FUNC(sub_8251EFFC);
PPC_FUNC_IMPL(__imp__sub_8251EFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8251F000"))) PPC_WEAK_FUNC(sub_8251F000);
PPC_FUNC_IMPL(__imp__sub_8251F000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8251F008;
	__savegprlr_28(ctx, base);
	// stwu r1,-1248(r1)
	ea = -1248 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r31,r11,31944
	ctx.r31.s64 = ctx.r11.s64 + 31944;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x8251ef20
	ctx.lr = 0x8251F028;
	sub_8251EF20(ctx, base);
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r8,r9,8964
	ctx.r8.s64 = ctx.r9.s64 + 8964;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r1,132
	ctx.r9.s64 = ctx.r1.s64 + 132;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8251F04C:
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// stwu r11,16(r9)
	ea = 16 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8251f04c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8251F04C;
	// lhz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// li r5,510
	ctx.r5.s64 = 510;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r3,r1,178
	ctx.r3.s64 = ctx.r1.s64 + 178;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// sth r31,176(r1)
	PPC_STORE_U16(ctx.r1.u32 + 176, ctx.r31.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x8251F078;
	sub_82FA7CF0(ctx, base);
	// li r5,510
	ctx.r5.s64 = 510;
	// sth r31,688(r1)
	PPC_STORE_U16(ctx.r1.u32 + 688, ctx.r31.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,690
	ctx.r3.s64 = ctx.r1.s64 + 690;
	// bl 0x82fa7cf0
	ctx.lr = 0x8251F08C;
	sub_82FA7CF0(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// cmplwi cr6,r30,8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 8, ctx.xer);
	// addi r31,r11,21076
	ctx.r31.s64 = ctx.r11.s64 + 21076;
	// bgt cr6,0x8251f1fc
	if (ctx.cr6.gt) goto loc_8251F1FC;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8251f0e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8251F0E4;
	// bdzf 4*cr6+eq,0x8251f104
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8251F104;
	// bdzf 4*cr6+eq,0x8251f124
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8251F124;
	// bdzf 4*cr6+eq,0x8251f144
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8251F144;
	// bdzf 4*cr6+eq,0x8251f164
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8251F164;
	// bdzf 4*cr6+eq,0x8251f184
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8251F184;
	// bdzf 4*cr6+eq,0x8251f1a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8251F1A4;
	// bne cr6,0x8251f1c4
	if (!ctx.cr6.eq) goto loc_8251F1C4;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e4d50
	ctx.lr = 0x8251F0D0;
	sub_822E4D50(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r11,r11,8548
	ctx.r11.s64 = ctx.r11.s64 + 8548;
	// addi r4,r10,8560
	ctx.r4.s64 = ctx.r10.s64 + 8560;
	// b 0x8251f1e0
	goto loc_8251F1E0;
loc_8251F0E4:
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e4d50
	ctx.lr = 0x8251F0F0;
	sub_822E4D50(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r11,r11,8588
	ctx.r11.s64 = ctx.r11.s64 + 8588;
	// addi r4,r10,8600
	ctx.r4.s64 = ctx.r10.s64 + 8600;
	// b 0x8251f1e0
	goto loc_8251F1E0;
loc_8251F104:
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e4d50
	ctx.lr = 0x8251F110;
	sub_822E4D50(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r11,r11,8628
	ctx.r11.s64 = ctx.r11.s64 + 8628;
	// addi r4,r10,8640
	ctx.r4.s64 = ctx.r10.s64 + 8640;
	// b 0x8251f1e0
	goto loc_8251F1E0;
loc_8251F124:
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e4d50
	ctx.lr = 0x8251F130;
	sub_822E4D50(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r11,r11,8668
	ctx.r11.s64 = ctx.r11.s64 + 8668;
	// addi r4,r10,8680
	ctx.r4.s64 = ctx.r10.s64 + 8680;
	// b 0x8251f1e0
	goto loc_8251F1E0;
loc_8251F144:
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e4d50
	ctx.lr = 0x8251F150;
	sub_822E4D50(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r11,r11,8708
	ctx.r11.s64 = ctx.r11.s64 + 8708;
	// addi r4,r10,8720
	ctx.r4.s64 = ctx.r10.s64 + 8720;
	// b 0x8251f1e0
	goto loc_8251F1E0;
loc_8251F164:
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e4d50
	ctx.lr = 0x8251F170;
	sub_822E4D50(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r11,r11,8748
	ctx.r11.s64 = ctx.r11.s64 + 8748;
	// addi r4,r10,8760
	ctx.r4.s64 = ctx.r10.s64 + 8760;
	// b 0x8251f1e0
	goto loc_8251F1E0;
loc_8251F184:
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e4d50
	ctx.lr = 0x8251F190;
	sub_822E4D50(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r11,r11,8788
	ctx.r11.s64 = ctx.r11.s64 + 8788;
	// addi r4,r10,8800
	ctx.r4.s64 = ctx.r10.s64 + 8800;
	// b 0x8251f1e0
	goto loc_8251F1E0;
loc_8251F1A4:
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e4d50
	ctx.lr = 0x8251F1B0;
	sub_822E4D50(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r11,r11,8828
	ctx.r11.s64 = ctx.r11.s64 + 8828;
	// addi r4,r10,8840
	ctx.r4.s64 = ctx.r10.s64 + 8840;
	// b 0x8251f1e0
	goto loc_8251F1E0;
loc_8251F1C4:
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e4d50
	ctx.lr = 0x8251F1D0;
	sub_822E4D50(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r11,r11,-4464
	ctx.r11.s64 = ctx.r11.s64 + -4464;
	// addi r4,r10,8876
	ctx.r4.s64 = ctx.r10.s64 + 8876;
loc_8251F1E0:
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// bl 0x8259c8e0
	ctx.lr = 0x8251F1FC;
	sub_8259C8E0(ctx, base);
loc_8251F1FC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82519160
	ctx.lr = 0x8251F208;
	sub_82519160(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,8908
	ctx.r4.s64 = ctx.r11.s64 + 8908;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x826a7620
	ctx.lr = 0x8251F220;
	sub_826A7620(ctx, base);
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8251f230
	if (ctx.cr6.eq) goto loc_8251F230;
	// bl 0x82241d18
	ctx.lr = 0x8251F230;
	sub_82241D18(ctx, base);
loc_8251F230:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,8928
	ctx.r4.s64 = ctx.r11.s64 + 8928;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,688
	ctx.r5.s64 = ctx.r1.s64 + 688;
	// bl 0x8259c8e0
	ctx.lr = 0x8251F250;
	sub_8259C8E0(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822e4d50
	ctx.lr = 0x8251F25C;
	sub_822E4D50(ctx, base);
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822e4d50
	ctx.lr = 0x8251F270;
	sub_822E4D50(ctx, base);
	// addi r11,r1,688
	ctx.r11.s64 = ctx.r1.s64 + 688;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82519160
	ctx.lr = 0x8251F284;
	sub_82519160(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,-13760
	ctx.r4.s64 = ctx.r11.s64 + -13760;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// bl 0x826a7620
	ctx.lr = 0x8251F29C;
	sub_826A7620(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8251f2ac
	if (ctx.cr6.eq) goto loc_8251F2AC;
	// bl 0x82241d18
	ctx.lr = 0x8251F2AC;
	sub_82241D18(ctx, base);
loc_8251F2AC:
	// bl 0x8226c3f0
	ctx.lr = 0x8251F2B0;
	sub_8226C3F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e4d50
	ctx.lr = 0x8251F2C0;
	sub_822E4D50(ctx, base);
	// rlwinm r11,r28,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,120
	ctx.r11.s64 = ctx.r11.s64 + 120;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x82519160
	ctx.lr = 0x8251F2DC;
	sub_82519160(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,8948
	ctx.r4.s64 = ctx.r11.s64 + 8948;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x826a7620
	ctx.lr = 0x8251F2F4;
	sub_826A7620(ctx, base);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8251f304
	if (ctx.cr6.eq) goto loc_8251F304;
	// bl 0x82241d18
	ctx.lr = 0x8251F304;
	sub_82241D18(ctx, base);
loc_8251F304:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e4d00
	ctx.lr = 0x8251F30C;
	sub_822E4D00(ctx, base);
	// addi r31,r1,176
	ctx.r31.s64 = ctx.r1.s64 + 176;
	// li r30,1
	ctx.r30.s64 = 1;
loc_8251F314:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e4d00
	ctx.lr = 0x8251F320;
	sub_822E4D00(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8251f314
	if (!ctx.cr0.lt) goto loc_8251F314;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e4d00
	ctx.lr = 0x8251F330;
	sub_822E4D00(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,1248
	ctx.r1.s64 = ctx.r1.s64 + 1248;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8251F33C"))) PPC_WEAK_FUNC(sub_8251F33C);
PPC_FUNC_IMPL(__imp__sub_8251F33C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8251F340"))) PPC_WEAK_FUNC(sub_8251F340);
PPC_FUNC_IMPL(__imp__sub_8251F340) {
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
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,8964
	ctx.r11.s64 = ctx.r11.s64 + 8964;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82518fd0
	ctx.lr = 0x8251F36C;
	sub_82518FD0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251f37c
	if (ctx.cr0.eq) goto loc_8251F37C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x8251F37C;
	sub_82691540(ctx, base);
loc_8251F37C:
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

__attribute__((alias("__imp__sub_8251F398"))) PPC_WEAK_FUNC(sub_8251F398);
PPC_FUNC_IMPL(__imp__sub_8251F398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8251F3A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r30,r11,31944
	ctx.r30.s64 = ctx.r11.s64 + 31944;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8251ef20
	ctx.lr = 0x8251F3BC;
	sub_8251EF20(ctx, base);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r9,r10,8964
	ctx.r9.s64 = ctx.r10.s64 + 8964;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8251F3D8:
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stwu r11,16(r10)
	ea = 16 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8251f3d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8251F3D8;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// li r5,510
	ctx.r5.s64 = 510;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,130
	ctx.r3.s64 = ctx.r1.s64 + 130;
	// sth r11,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, ctx.r11.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x8251F3FC;
	sub_82FA7CF0(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r11,r11,21076
	ctx.r11.s64 = ctx.r11.s64 + 21076;
	// addi r4,r10,8928
	ctx.r4.s64 = ctx.r10.s64 + 8928;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8259c8e0
	ctx.lr = 0x8251F424;
	sub_8259C8E0(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e4d50
	ctx.lr = 0x8251F430;
	sub_822E4D50(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822e4d50
	ctx.lr = 0x8251F444;
	sub_822E4D50(ctx, base);
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82519160
	ctx.lr = 0x8251F454;
	sub_82519160(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,-13556
	ctx.r4.s64 = ctx.r11.s64 + -13556;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x826a7620
	ctx.lr = 0x8251F46C;
	sub_826A7620(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8251f47c
	if (ctx.cr6.eq) goto loc_8251F47C;
	// bl 0x82241d18
	ctx.lr = 0x8251F47C;
	sub_82241D18(ctx, base);
loc_8251F47C:
	// addi r30,r1,128
	ctx.r30.s64 = ctx.r1.s64 + 128;
	// li r29,1
	ctx.r29.s64 = 1;
loc_8251F484:
	// addi r30,r30,-16
	ctx.r30.s64 = ctx.r30.s64 + -16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e4d00
	ctx.lr = 0x8251F490;
	sub_822E4D00(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge 0x8251f484
	if (!ctx.cr0.lt) goto loc_8251F484;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8251F4A4"))) PPC_WEAK_FUNC(sub_8251F4A4);
PPC_FUNC_IMPL(__imp__sub_8251F4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8251F4A8"))) PPC_WEAK_FUNC(sub_8251F4A8);
PPC_FUNC_IMPL(__imp__sub_8251F4A8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// vor128 v12,v67,v67
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v67.u8));
	// li r11,0
	ctx.r11.s64 = 0;
	// vor128 v13,v77,v77
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v77.u8));
	// addi r10,r10,5228
	ctx.r10.s64 = ctx.r10.s64 + 5228;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lfs f0,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f0,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stb r11,72(r3)
	PPC_STORE_U8(ctx.r3.u32 + 72, ctx.r11.u8);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stw r9,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r9.u32);
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// lfs f0,-2340(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lfs f31,-24756(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24756);
	ctx.f31.f64 = double(temp.f32);
	// addi r5,r31,48
	ctx.r5.s64 = ctx.r31.s64 + 48;
	// stfs f31,40(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// addi r4,r4,28
	ctx.r4.s64 = ctx.r4.s64 + 28;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stb r11,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r11.u8);
	// stb r9,121(r31)
	PPC_STORE_U8(ctx.r31.u32 + 121, ctx.r9.u8);
	// stfs f0,116(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stfs f0,112(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// lfs f13,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// lfs f0,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stw r3,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r3.u32);
	// lvrx v0,r7,r10
	temp.u32 = ctx.r7.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx v11,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r31,100
	ctx.r11.s64 = ctx.r31.s64 + 100;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// vsldoi v0,v0,v0,4
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v0.u8), 12));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// vor v0,v11,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vsel v12,v0,v13,v12
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// stvx128 v12,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f1,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8256c298
	ctx.lr = 0x8251F5B0;
	sub_8256C298(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lwz r11,2240(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2240);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8251F5D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,208
	ctx.r3.s64 = ctx.r11.s64 + 208;
	// bl 0x8257c810
	ctx.lr = 0x8251F5E8;
	sub_8257C810(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,208
	ctx.r3.s64 = ctx.r11.s64 + 208;
	// bl 0x8257c810
	ctx.lr = 0x8251F5FC;
	sub_8257C810(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825204d0
	ctx.lr = 0x8251F608;
	sub_825204D0(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// stw r31,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r31.u32);
	// lis r9,-32174
	ctx.r9.s64 = -2108555264;
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r7,r11,-22432
	ctx.r7.s64 = ctx.r11.s64 + -22432;
	// lis r8,-32174
	ctx.r8.s64 = -2108555264;
	// addi r11,r10,936
	ctx.r11.s64 = ctx.r10.s64 + 936;
	// addi r10,r9,1024
	ctx.r10.s64 = ctx.r9.s64 + 1024;
	// addi r9,r8,1128
	ctx.r9.s64 = ctx.r8.s64 + 1128;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// lis r9,25
	ctx.r9.s64 = 1638400;
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// ori r9,r9,26125
	ctx.r9.u64 = ctx.r9.u64 | 26125;
	// addi r8,r8,6760
	ctx.r8.s64 = ctx.r8.s64 + 6760;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,36(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	// stw r11,412(r6)
	PPC_STORE_U32(ctx.r6.u32 + 412, ctx.r11.u32);
	// lwz r11,36(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,416(r7)
	PPC_STORE_U32(ctx.r7.u32 + 416, ctx.r11.u32);
	// lwz r11,21292(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21292);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// addis r11,r11,15471
	ctx.r11.s64 = ctx.r11.s64 + 1013907456;
	// lfs f0,236(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 236);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,240(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 240);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// addi r11,r11,-3233
	ctx.r11.s64 = ctx.r11.s64 + -3233;
	// clrlwi r9,r11,9
	ctx.r9.u64 = ctx.r11.u32 & 0x7FFFFF;
	// stw r11,21292(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21292, ctx.r11.u32);
	// oris r11,r9,16256
	ctx.r11.u64 = ctx.r9.u64 | 1065353216;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f31.f64));
	// fmadds f0,f13,f12,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f0.f64));
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_8251F6C0"))) PPC_WEAK_FUNC(sub_8251F6C0);
PPC_FUNC_IMPL(__imp__sub_8251F6C0) {
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
	// lis r30,-31964
	ctx.r30.s64 = -2094792704;
	// lis r6,16
	ctx.r6.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-13544(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -13544);
	// bl 0x826631f0
	ctx.lr = 0x8251F6F0;
	sub_826631F0(ctx, base);
	// lis r6,128
	ctx.r6.s64 = 8388608;
	// lwz r3,-13544(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -13544);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x826631f0
	ctx.lr = 0x8251F704;
	sub_826631F0(ctx, base);
	// lis r6,2
	ctx.r6.s64 = 131072;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,-13544(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -13544);
	// li r4,14
	ctx.r4.s64 = 14;
	// bl 0x826631f0
	ctx.lr = 0x8251F718;
	sub_826631F0(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8251f734
	if (ctx.cr6.eq) goto loc_8251F734;
	// bl 0x825202f0
	ctx.lr = 0x8251F730;
	sub_825202F0(ctx, base);
	// b 0x8251f738
	goto loc_8251F738;
loc_8251F734:
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
loc_8251F738:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8251f750
	if (ctx.cr6.eq) goto loc_8251F750;
	// bl 0x825202f0
	ctx.lr = 0x8251F74C;
	sub_825202F0(ctx, base);
	// b 0x8251f754
	goto loc_8251F754;
loc_8251F750:
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
loc_8251F754:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8251f76c
	if (ctx.cr6.eq) goto loc_8251F76C;
	// bl 0x825202f0
	ctx.lr = 0x8251F768;
	sub_825202F0(ctx, base);
	// b 0x8251f770
	goto loc_8251F770;
loc_8251F76C:
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
loc_8251F770:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8251f798
	if (ctx.cr6.eq) goto loc_8251F798;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8251f794
	if (ctx.cr6.eq) goto loc_8251F794;
	// bl 0x825202f0
	ctx.lr = 0x8251F790;
	sub_825202F0(ctx, base);
	// b 0x8251f798
	goto loc_8251F798;
loc_8251F794:
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
loc_8251F798:
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8251f7b8
	if (ctx.cr6.eq) goto loc_8251F7B8;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8251F7B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8251F7B8:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x8256c608
	ctx.lr = 0x8251F7C4;
	sub_8256C608(ctx, base);
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8251f7e4
	if (ctx.cr6.eq) goto loc_8251F7E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8251F7E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8251F7E4:
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

__attribute__((alias("__imp__sub_8251F7FC"))) PPC_WEAK_FUNC(sub_8251F7FC);
PPC_FUNC_IMPL(__imp__sub_8251F7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8251F800"))) PPC_WEAK_FUNC(sub_8251F800);
PPC_FUNC_IMPL(__imp__sub_8251F800) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8251F808;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// li r8,1
	ctx.r8.s64 = 1;
	// stfs f1,64(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r8,72(r3)
	PPC_STORE_U8(ctx.r3.u32 + 72, ctx.r8.u8);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8251fb00
	if (ctx.cr6.lt) goto loc_8251FB00;
	// beq cr6,0x8251f9fc
	if (ctx.cr6.eq) goto loc_8251F9FC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8251f954
	if (ctx.cr6.lt) goto loc_8251F954;
	// bne cr6,0x8251fbc8
	if (!ctx.cr6.eq) goto loc_8251FBC8;
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8251f94c
	if (ctx.cr6.eq) goto loc_8251F94C;
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8251f94c
	if (!ctx.cr6.eq) goto loc_8251F94C;
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8251f878
	if (ctx.cr6.eq) goto loc_8251F878;
	// lwz r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// stw r10,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r10.u32);
loc_8251F878:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// beq cr6,0x8251f8c8
	if (ctx.cr6.eq) goto loc_8251F8C8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82519160
	ctx.lr = 0x8251F89C;
	sub_82519160(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,408
	ctx.r4.s64 = ctx.r11.s64 + 408;
	// bl 0x826a68b0
	ctx.lr = 0x8251F8B0;
	sub_826A68B0(ctx, base);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8251f8c0
	if (ctx.cr6.eq) goto loc_8251F8C0;
	// bl 0x82241d18
	ctx.lr = 0x8251F8C0;
	sub_82241D18(ctx, base);
loc_8251F8C0:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x8251f8e0
	goto loc_8251F8E0;
loc_8251F8C8:
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,-22432
	ctx.r11.s64 = ctx.r11.s64 + -22432;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r11,412(r10)
	PPC_STORE_U32(ctx.r10.u32 + 412, ctx.r11.u32);
loc_8251F8E0:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,208
	ctx.r3.s64 = ctx.r11.s64 + 208;
	// bl 0x8257c810
	ctx.lr = 0x8251F8F0;
	sub_8257C810(ctx, base);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8251f93c
	if (ctx.cr6.eq) goto loc_8251F93C;
	// lbz r11,121(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 121);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8251f93c
	if (ctx.cr0.eq) goto loc_8251F93C;
	// lbz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 120);
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8251f920
	if (!ctx.cr0.eq) goto loc_8251F920;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_8251F920:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82520098
	ctx.lr = 0x8251F928;
	sub_82520098(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
loc_8251F92C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8251f93c
	if (ctx.cr6.eq) goto loc_8251F93C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825192b0
	ctx.lr = 0x8251F93C;
	sub_825192B0(ctx, base);
loc_8251F93C:
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// b 0x8251fbc8
	goto loc_8251FBC8;
loc_8251F94C:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// b 0x8251faf0
	goto loc_8251FAF0;
loc_8251F954:
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8251fbc8
	if (ctx.cr6.eq) goto loc_8251FBC8;
	// lwz r9,128(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8251f99c
	if (ctx.cr6.eq) goto loc_8251F99C;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// b 0x8251f988
	goto loc_8251F988;
loc_8251F978:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8251f9d4
	if (ctx.cr6.eq) goto loc_8251F9D4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8251F988:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8251f978
	if (!ctx.cr6.eq) goto loc_8251F978;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8251F994:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8251fbc8
	if (!ctx.cr0.eq) goto loc_8251FBC8;
loc_8251F99C:
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,-22432
	ctx.r11.s64 = ctx.r11.s64 + -22432;
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r11,412(r9)
	PPC_STORE_U32(ctx.r9.u32 + 412, ctx.r11.u32);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8251f9dc
	if (ctx.cr6.eq) goto loc_8251F9DC;
	// bl 0x825202f0
	ctx.lr = 0x8251F9D0;
	sub_825202F0(ctx, base);
	// b 0x8251f9e0
	goto loc_8251F9E0;
loc_8251F9D4:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x8251f994
	goto loc_8251F994;
loc_8251F9DC:
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
loc_8251F9E0:
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8251f9f4
	if (ctx.cr6.eq) goto loc_8251F9F4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x825192b0
	ctx.lr = 0x8251F9F4;
	sub_825192B0(ctx, base);
loc_8251F9F4:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// b 0x8251fba0
	goto loc_8251FBA0;
loc_8251F9FC:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8251faec
	if (ctx.cr6.eq) goto loc_8251FAEC;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8251faec
	if (!ctx.cr6.eq) goto loc_8251FAEC;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8251fa30
	if (ctx.cr6.eq) goto loc_8251FA30;
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
loc_8251FA30:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// beq cr6,0x8251fa80
	if (ctx.cr6.eq) goto loc_8251FA80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82519160
	ctx.lr = 0x8251FA54;
	sub_82519160(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,408
	ctx.r4.s64 = ctx.r11.s64 + 408;
	// bl 0x826a69b8
	ctx.lr = 0x8251FA68;
	sub_826A69B8(ctx, base);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8251fa78
	if (ctx.cr6.eq) goto loc_8251FA78;
	// bl 0x82241d18
	ctx.lr = 0x8251FA78;
	sub_82241D18(ctx, base);
loc_8251FA78:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x8251fa98
	goto loc_8251FA98;
loc_8251FA80:
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,-22432
	ctx.r11.s64 = ctx.r11.s64 + -22432;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r11,416(r10)
	PPC_STORE_U32(ctx.r10.u32 + 416, ctx.r11.u32);
loc_8251FA98:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,208
	ctx.r3.s64 = ctx.r11.s64 + 208;
	// bl 0x8257c810
	ctx.lr = 0x8251FAA8;
	sub_8257C810(ctx, base);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8251f93c
	if (ctx.cr6.eq) goto loc_8251F93C;
	// lbz r11,121(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 121);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8251f93c
	if (ctx.cr0.eq) goto loc_8251F93C;
	// lbz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 120);
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// bne 0x8251fadc
	if (!ctx.cr0.eq) goto loc_8251FADC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_8251FADC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82520098
	ctx.lr = 0x8251FAE4;
	sub_82520098(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// b 0x8251f92c
	goto loc_8251F92C;
loc_8251FAEC:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
loc_8251FAF0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8251fbc8
	if (!ctx.cr6.eq) goto loc_8251FBC8;
	// stb r30,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r30.u8);
	// b 0x8251fbc8
	goto loc_8251FBC8;
loc_8251FB00:
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8251fbc8
	if (ctx.cr6.eq) goto loc_8251FBC8;
	// lwz r9,128(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8251fb48
	if (ctx.cr6.eq) goto loc_8251FB48;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// b 0x8251fb34
	goto loc_8251FB34;
loc_8251FB24:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8251fb7c
	if (ctx.cr6.eq) goto loc_8251FB7C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8251FB34:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8251fb24
	if (!ctx.cr6.eq) goto loc_8251FB24;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8251FB40:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8251fbc8
	if (!ctx.cr0.eq) goto loc_8251FBC8;
loc_8251FB48:
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// stw r8,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r8.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// addi r11,r11,-22432
	ctx.r11.s64 = ctx.r11.s64 + -22432;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r11,416(r10)
	PPC_STORE_U32(ctx.r10.u32 + 416, ctx.r11.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8251fb84
	if (ctx.cr6.eq) goto loc_8251FB84;
	// bl 0x825202f0
	ctx.lr = 0x8251FB78;
	sub_825202F0(ctx, base);
	// b 0x8251fb88
	goto loc_8251FB88;
loc_8251FB7C:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x8251fb40
	goto loc_8251FB40;
loc_8251FB84:
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
loc_8251FB88:
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8251fb9c
	if (ctx.cr6.eq) goto loc_8251FB9C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x825192b0
	ctx.lr = 0x8251FB9C;
	sub_825192B0(ctx, base);
loc_8251FB9C:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
loc_8251FBA0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8251fbc8
	if (ctx.cr6.eq) goto loc_8251FBC8;
	// lbz r11,336(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 336);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8251fbc8
	if (ctx.cr0.eq) goto loc_8251FBC8;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8251fbc8
	if (!ctx.cr6.eq) goto loc_8251FBC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8251fcf0
	ctx.lr = 0x8251FBC8;
	sub_8251FCF0(ctx, base);
loc_8251FBC8:
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8251fbe8
	if (ctx.cr6.eq) goto loc_8251FBE8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8251FBE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8251FBE8:
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8251fc08
	if (ctx.cr6.eq) goto loc_8251FC08;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8251FC08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8251FC08:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8251fc30
	if (ctx.cr6.eq) goto loc_8251FC30;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8251fc2c
	if (ctx.cr6.eq) goto loc_8251FC2C;
	// bl 0x825202f0
	ctx.lr = 0x8251FC28;
	sub_825202F0(ctx, base);
	// b 0x8251fc30
	goto loc_8251FC30;
loc_8251FC2C:
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
loc_8251FC30:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x825206c8
	ctx.lr = 0x8251FC3C;
	sub_825206C8(ctx, base);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8251fc60
	if (ctx.cr6.eq) goto loc_8251FC60;
	// lbz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 72);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8251fc60
	if (ctx.cr0.eq) goto loc_8251FC60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x825205d8
	ctx.lr = 0x8251FC60;
	sub_825205D8(ctx, base);
loc_8251FC60:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8251FC6C"))) PPC_WEAK_FUNC(sub_8251FC6C);
PPC_FUNC_IMPL(__imp__sub_8251FC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8251FC70"))) PPC_WEAK_FUNC(sub_8251FC70);
PPC_FUNC_IMPL(__imp__sub_8251FC70) {
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
	// lbz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 72);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,8(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8251fcd4
	if (ctx.cr0.eq) goto loc_8251FCD4;
	// lfs f1,64(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x8282b920
	ctx.lr = 0x8251FCA4;
	sub_8282B920(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x8282c0d8
	ctx.lr = 0x8251FCAC;
	sub_8282C0D8(ctx, base);
	// addi r11,r30,32
	ctx.r11.s64 = ctx.r30.s64 + 32;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8282c270
	ctx.lr = 0x8251FCD4;
	sub_8282C270(ctx, base);
loc_8251FCD4:
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

__attribute__((alias("__imp__sub_8251FCEC"))) PPC_WEAK_FUNC(sub_8251FCEC);
PPC_FUNC_IMPL(__imp__sub_8251FCEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8251FCF0"))) PPC_WEAK_FUNC(sub_8251FCF0);
PPC_FUNC_IMPL(__imp__sub_8251FCF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x8251FCF8;
	__savegprlr_24(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,344
	ctx.r3.s64 = 344;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8251fdc4
	if (!ctx.cr6.eq) goto loc_8251FDC4;
	// bl 0x82691500
	ctx.lr = 0x8251FD14;
	sub_82691500(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq 0x8251fdb4
	if (ctx.cr0.eq) goto loc_8251FDB4;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// li r30,0
	ctx.r30.s64 = 0;
	// addic. r10,r11,40
	ctx.xer.ca = ctx.r11.u32 > 4294967255;
	ctx.r10.s64 = ctx.r11.s64 + 40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r4,r11,312
	ctx.r4.s64 = ctx.r11.s64 + 312;
	// addi r27,r11,288
	ctx.r27.s64 = ctx.r11.s64 + 288;
	// beq 0x8251fd44
	if (ctx.cr0.eq) goto loc_8251FD44;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe. r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8251fd4c
	if (!ctx.cr0.eq) goto loc_8251FD4C;
loc_8251FD44:
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// b 0x8251fd50
	goto loc_8251FD50;
loc_8251FD4C:
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
loc_8251FD50:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r25,124(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// addi r29,r11,36
	ctx.r29.s64 = ctx.r11.s64 + 36;
	// bl 0x8226c200
	ctx.lr = 0x8251FD64;
	sub_8226C200(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8226c200
	ctx.lr = 0x8251FD74;
	sub_8226C200(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// bl 0x82518b28
	ctx.lr = 0x8251FDAC;
	sub_82518B28(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// b 0x8251fdbc
	goto loc_8251FDBC;
loc_8251FDB4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
loc_8251FDBC:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// b 0x8251fe74
	goto loc_8251FE74;
loc_8251FDC4:
	// bl 0x82691500
	ctx.lr = 0x8251FDC8;
	sub_82691500(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq 0x8251fe68
	if (ctx.cr0.eq) goto loc_8251FE68;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r30,0
	ctx.r30.s64 = 0;
	// addic. r10,r11,40
	ctx.xer.ca = ctx.r11.u32 > 4294967255;
	ctx.r10.s64 = ctx.r11.s64 + 40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r4,r11,312
	ctx.r4.s64 = ctx.r11.s64 + 312;
	// addi r27,r11,288
	ctx.r27.s64 = ctx.r11.s64 + 288;
	// beq 0x8251fdf8
	if (ctx.cr0.eq) goto loc_8251FDF8;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe. r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8251fe00
	if (!ctx.cr0.eq) goto loc_8251FE00;
loc_8251FDF8:
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// b 0x8251fe04
	goto loc_8251FE04;
loc_8251FE00:
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
loc_8251FE04:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r25,124(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// addi r29,r11,36
	ctx.r29.s64 = ctx.r11.s64 + 36;
	// bl 0x8226c200
	ctx.lr = 0x8251FE18;
	sub_8226C200(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8226c200
	ctx.lr = 0x8251FE28;
	sub_8226C200(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// bl 0x82518b28
	ctx.lr = 0x8251FE60;
	sub_82518B28(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// b 0x8251fe70
	goto loc_8251FE70;
loc_8251FE68:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
loc_8251FE70:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
loc_8251FE74:
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8251ff70
	ctx.lr = 0x8251FE8C;
	sub_8251FF70(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8251FE94"))) PPC_WEAK_FUNC(sub_8251FE94);
PPC_FUNC_IMPL(__imp__sub_8251FE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8251FE98"))) PPC_WEAK_FUNC(sub_8251FE98);
PPC_FUNC_IMPL(__imp__sub_8251FE98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x8251FEA0;
	__savegprlr_22(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,344
	ctx.r3.s64 = 344;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// bl 0x82691500
	ctx.lr = 0x8251FEC8;
	sub_82691500(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8251ff34
	if (ctx.cr0.eq) goto loc_8251FF34;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r23,124(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8226c200
	ctx.lr = 0x8251FEE0;
	sub_8226C200(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8226c200
	ctx.lr = 0x8251FEF0;
	sub_8226C200(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// bl 0x82518b28
	ctx.lr = 0x8251FF2C;
	sub_82518B28(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// b 0x8251ff3c
	goto loc_8251FF3C;
loc_8251FF34:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
loc_8251FF3C:
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8251ff70
	ctx.lr = 0x8251FF54;
	sub_8251FF70(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f91940
	ctx.lr = 0x8251FF5C;
	sub_82F91940(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f91940
	ctx.lr = 0x8251FF64;
	sub_82F91940(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8251FF6C"))) PPC_WEAK_FUNC(sub_8251FF6C);
PPC_FUNC_IMPL(__imp__sub_8251FF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8251FF70"))) PPC_WEAK_FUNC(sub_8251FF70);
PPC_FUNC_IMPL(__imp__sub_8251FF70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x8251FF78;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// addi r30,r3,100
	ctx.r30.s64 = ctx.r3.s64 + 100;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8251ffac
	if (ctx.cr6.eq) goto loc_8251FFAC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825202f0
	ctx.lr = 0x8251FFA8;
	sub_825202F0(ctx, base);
	// b 0x8251ffb0
	goto loc_8251FFB0;
loc_8251FFAC:
	// stw r26,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r26.u32);
loc_8251FFB0:
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// beq cr6,0x8251ffe8
	if (ctx.cr6.eq) goto loc_8251FFE8;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// lfs f0,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stb r11,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r11.u8);
	// b 0x8251fffc
	goto loc_8251FFFC;
loc_8251FFE8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-2340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stfs f0,112(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stb r26,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r26.u8);
loc_8251FFFC:
	// stb r27,121(r31)
	PPC_STORE_U8(ctx.r31.u32 + 121, ctx.r27.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825192b0
	ctx.lr = 0x8252000C;
	sub_825192B0(ctx, base);
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252001c
	if (ctx.cr0.eq) goto loc_8252001C;
	// stw r26,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r26.u32);
	// stw r26,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r26.u32);
loc_8252001C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82520024"))) PPC_WEAK_FUNC(sub_82520024);
PPC_FUNC_IMPL(__imp__sub_82520024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82520028"))) PPC_WEAK_FUNC(sub_82520028);
PPC_FUNC_IMPL(__imp__sub_82520028) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82520030;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r3,100
	ctx.r29.s64 = ctx.r3.s64 + 100;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82520058
	if (ctx.cr6.eq) goto loc_82520058;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825202f0
	ctx.lr = 0x82520054;
	sub_825202F0(ctx, base);
	// b 0x8252005c
	goto loc_8252005C;
loc_82520058:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
loc_8252005C:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// lfs f0,-2340(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stfs f0,112(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stb r30,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r30.u8);
	// stb r11,121(r31)
	PPC_STORE_U8(ctx.r31.u32 + 121, ctx.r11.u8);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82520094"))) PPC_WEAK_FUNC(sub_82520094);
PPC_FUNC_IMPL(__imp__sub_82520094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82520098"))) PPC_WEAK_FUNC(sub_82520098);
PPC_FUNC_IMPL(__imp__sub_82520098) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x825200A0;
	__savegprlr_29(ctx, base);
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825202d8
	if (!ctx.cr6.eq) goto loc_825202D8;
	// lwz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stb r10,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r10.u8);
	// lwa r11,72(r11)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + 72));
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lfs f11,21836(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21836);
	ctx.f11.f64 = double(temp.f32);
	// frsp f29,f0
	ctx.f29.f64 = double(float(ctx.f0.f64));
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r31,r11,21836
	ctx.r31.s64 = ctx.r11.s64 + 21836;
	// beq cr6,0x825201d4
	if (ctx.cr6.eq) goto loc_825201D4;
	// lfs f0,-14900(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -14900);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-14892(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -14892);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-14888(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -14888);
	ctx.f12.f64 = double(temp.f32);
	// lfs f1,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x8283c4d0
	ctx.lr = 0x8252011C;
	sub_8283C4D0(ctx, base);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fsubs f1,f29,f0
	ctx.f1.f64 = double(float(ctx.f29.f64 - ctx.f0.f64));
	// bl 0x8283c4d0
	ctx.lr = 0x8252012C;
	sub_8283C4D0(ctx, base);
	// li r3,52
	ctx.r3.s64 = 52;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x82691500
	ctx.lr = 0x82520138;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825201c0
	if (ctx.cr0.eq) goto loc_825201C0;
	// li r11,5
	ctx.r11.s64 = 5;
	// lfs f12,-14916(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -14916);
	ctx.f12.f64 = double(temp.f32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// lfs f11,-14920(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -14920);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82520160:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82520160
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82520160;
	// fsubs f13,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r9,r11,27984
	ctx.r9.s64 = ctx.r11.s64 + 27984;
	// addi r11,r10,6044
	ctx.r11.s64 = ctx.r10.s64 + 6044;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f0,1268(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 1268);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// fsel f10,f13,f31,f30
	ctx.f10.f64 = ctx.f13.f64 >= 0.0 ? ctx.f31.f64 : ctx.f30.f64;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lfs f13,-2340(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -2340);
	ctx.f13.f64 = double(temp.f32);
	// stw r9,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r9.u32);
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f11,40(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f12,44(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f13,48(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// b 0x825201c4
	goto loc_825201C4;
loc_825201C0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825201C4:
	// stw r11,128(r29)
	PPC_STORE_U32(ctx.r29.u32 + 128, ctx.r11.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,8972
	ctx.r4.s64 = ctx.r11.s64 + 8972;
	// b 0x82520278
	goto loc_82520278;
loc_825201D4:
	// lfs f1,-14944(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -14944);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,-14936(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -14936);
	ctx.f0.f64 = double(temp.f32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f13,-14928(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -14928);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-14924(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -14924);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,-14940(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -14940);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,-14952(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -14952);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,-14948(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -14948);
	ctx.f8.f64 = double(temp.f32);
	// stfs f1,88(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f10,92(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x8283c4d0
	ctx.lr = 0x82520214;
	sub_8283C4D0(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// fsubs f1,f29,f31
	ctx.f1.f64 = double(float(ctx.f29.f64 - ctx.f31.f64));
	// bl 0x8283c4d0
	ctx.lr = 0x82520220;
	sub_8283C4D0(ctx, base);
	// li r3,68
	ctx.r3.s64 = 68;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82691500
	ctx.lr = 0x8252022C;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82520268
	if (ctx.cr0.eq) goto loc_82520268;
	// fsubs f13,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lfs f3,-14960(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -14960);
	ctx.f3.f64 = double(temp.f32);
	// addi r11,r11,27984
	ctx.r11.s64 = ctx.r11.s64 + 27984;
	// lfs f2,-14964(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -14964);
	ctx.f2.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lfs f0,1268(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1268);
	ctx.f0.f64 = double(temp.f32);
	// fsel f13,f13,f30,f31
	ctx.f13.f64 = ctx.f13.f64 >= 0.0 ? ctx.f30.f64 : ctx.f31.f64;
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x82508928
	ctx.lr = 0x82520264;
	sub_82508928(ctx, base);
	// b 0x8252026c
	goto loc_8252026C;
loc_82520268:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8252026C:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r3,128(r29)
	PPC_STORE_U32(ctx.r29.u32 + 128, ctx.r3.u32);
	// addi r4,r11,9008
	ctx.r4.s64 = ctx.r11.s64 + 9008;
loc_82520278:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82899948
	ctx.lr = 0x82520280;
	sub_82899948(ctx, base);
	// bl 0x82899798
	ctx.lr = 0x82520284;
	sub_82899798(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82899858
	ctx.lr = 0x82520290;
	sub_82899858(ctx, base);
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825202cc
	if (ctx.cr6.eq) goto loc_825202CC;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// lis r9,-31955
	ctx.r9.s64 = -2094202880;
	// lwz r4,2124(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// addi r6,r10,26796
	ctx.r6.s64 = ctx.r10.s64 + 26796;
	// addi r5,r9,26780
	ctx.r5.s64 = ctx.r9.s64 + 26780;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8256f138
	ctx.lr = 0x825202C0;
	sub_8256F138(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82570318
	ctx.lr = 0x825202CC;
	sub_82570318(ctx, base);
loc_825202CC:
	// lwz r4,128(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 128);
	// lwz r3,124(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 124);
	// bl 0x8250a710
	ctx.lr = 0x825202D8;
	sub_8250A710(ctx, base);
loc_825202D8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825202EC"))) PPC_WEAK_FUNC(sub_825202EC);
PPC_FUNC_IMPL(__imp__sub_825202EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825202F0"))) PPC_WEAK_FUNC(sub_825202F0);
PPC_FUNC_IMPL(__imp__sub_825202F0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82519160
	ctx.lr = 0x82520314;
	sub_82519160(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// subfe r30,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r30.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// beq cr6,0x82520334
	if (ctx.cr6.eq) goto loc_82520334;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82241d18
	ctx.lr = 0x82520334;
	sub_82241D18(ctx, base);
loc_82520334:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82520360
	if (ctx.cr0.eq) goto loc_82520360;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82519160
	ctx.lr = 0x82520348;
	sub_82519160(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x826a4298
	ctx.lr = 0x82520350;
	sub_826A4298(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82520360
	if (ctx.cr6.eq) goto loc_82520360;
	// bl 0x82241d18
	ctx.lr = 0x82520360;
	sub_82241D18(ctx, base);
loc_82520360:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82520380
	if (ctx.cr6.eq) goto loc_82520380;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82520380;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82520380:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_825203A4"))) PPC_WEAK_FUNC(sub_825203A4);
PPC_FUNC_IMPL(__imp__sub_825203A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825203A8"))) PPC_WEAK_FUNC(sub_825203A8);
PPC_FUNC_IMPL(__imp__sub_825203A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x825203c0
	if (ctx.cr6.eq) goto loc_825203C0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r3,84
	ctx.r11.s64 = ctx.r3.s64 + 84;
	// bne cr6,0x825203c4
	if (!ctx.cr6.eq) goto loc_825203C4;
loc_825203C0:
	// addi r11,r3,76
	ctx.r11.s64 = ctx.r3.s64 + 76;
loc_825203C4:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x825203e4
	if (ctx.cr6.eq) goto loc_825203E4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r3,84
	ctx.r11.s64 = ctx.r3.s64 + 84;
	// bne cr6,0x825203e8
	if (!ctx.cr6.eq) goto loc_825203E8;
loc_825203E4:
	// addi r11,r3,76
	ctx.r11.s64 = ctx.r3.s64 + 76;
loc_825203E8:
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825203FC"))) PPC_WEAK_FUNC(sub_825203FC);
PPC_FUNC_IMPL(__imp__sub_825203FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82520400"))) PPC_WEAK_FUNC(sub_82520400);
PPC_FUNC_IMPL(__imp__sub_82520400) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82520428
	if (ctx.cr6.eq) goto loc_82520428;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82520428
	if (ctx.cr6.eq) goto loc_82520428;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r3,84
	ctx.r10.s64 = ctx.r3.s64 + 84;
	// bne cr6,0x8252042c
	if (!ctx.cr6.eq) goto loc_8252042C;
loc_82520428:
	// addi r10,r3,76
	ctx.r10.s64 = ctx.r3.s64 + 76;
loc_8252042C:
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8252044c
	if (ctx.cr6.eq) goto loc_8252044C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r3,84
	ctx.r11.s64 = ctx.r3.s64 + 84;
	// bne cr6,0x82520450
	if (!ctx.cr6.eq) goto loc_82520450;
loc_8252044C:
	// addi r11,r3,76
	ctx.r11.s64 = ctx.r3.s64 + 76;
loc_82520450:
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
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

__attribute__((alias("__imp__sub_82520464"))) PPC_WEAK_FUNC(sub_82520464);
PPC_FUNC_IMPL(__imp__sub_82520464) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82520468"))) PPC_WEAK_FUNC(sub_82520468);
PPC_FUNC_IMPL(__imp__sub_82520468) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82520490
	if (ctx.cr6.eq) goto loc_82520490;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82520490
	if (ctx.cr6.eq) goto loc_82520490;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r3,84
	ctx.r10.s64 = ctx.r3.s64 + 84;
	// bne cr6,0x82520494
	if (!ctx.cr6.eq) goto loc_82520494;
loc_82520490:
	// addi r10,r3,76
	ctx.r10.s64 = ctx.r3.s64 + 76;
loc_82520494:
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x825204b4
	if (ctx.cr6.eq) goto loc_825204B4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r3,84
	ctx.r11.s64 = ctx.r3.s64 + 84;
	// bne cr6,0x825204b8
	if (!ctx.cr6.eq) goto loc_825204B8;
loc_825204B4:
	// addi r11,r3,76
	ctx.r11.s64 = ctx.r3.s64 + 76;
loc_825204B8:
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
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

__attribute__((alias("__imp__sub_825204CC"))) PPC_WEAK_FUNC(sub_825204CC);
PPC_FUNC_IMPL(__imp__sub_825204CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825204D0"))) PPC_WEAK_FUNC(sub_825204D0);
PPC_FUNC_IMPL(__imp__sub_825204D0) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,336
	ctx.r3.s64 = 336;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82691500
	ctx.lr = 0x825204F4;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82520518
	if (ctx.cr0.eq) goto loc_82520518;
	// addi r7,r30,48
	ctx.r7.s64 = ctx.r30.s64 + 48;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r6,r30,40
	ctx.r6.s64 = ctx.r30.s64 + 40;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r5,r30,32
	ctx.r5.s64 = ctx.r30.s64 + 32;
	// bl 0x825095d8
	ctx.lr = 0x82520514;
	sub_825095D8(ctx, base);
	// b 0x8252051c
	goto loc_8252051C;
loc_82520518:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8252051C:
	// stw r3,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r3.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,436(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 436);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8252053C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// ble cr6,0x8252057c
	if (!ctx.cr6.gt) goto loc_8252057C;
loc_82520544:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// clrlwi r4,r30,16
	ctx.r4.u64 = ctx.r30.u32 & 0xFFFF;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x8282bd88
	ctx.lr = 0x82520558;
	sub_8282BD88(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r3,436(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 436);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82520574;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82520544
	if (ctx.cr6.lt) goto loc_82520544;
loc_8252057C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82520960
	ctx.lr = 0x82520584;
	sub_82520960(ctx, base);
	// li r3,180
	ctx.r3.s64 = 180;
	// bl 0x82691500
	ctx.lr = 0x8252058C;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825205b0
	if (ctx.cr0.eq) goto loc_825205B0;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r5,72(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r4,76(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// bl 0x82508f30
	ctx.lr = 0x825205A8;
	sub_82508F30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x825205b4
	goto loc_825205B4;
loc_825205B0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_825205B4:
	// stw r4,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r4.u32);
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// bl 0x8250a710
	ctx.lr = 0x825205C0;
	sub_8250A710(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825205D8"))) PPC_WEAK_FUNC(sub_825205D8);
PPC_FUNC_IMPL(__imp__sub_825205D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,124(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// bl 0x825097b0
	ctx.lr = 0x825205F4;
	sub_825097B0(ctx, base);
	// lwz r7,132(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82520618
	if (ctx.cr6.eq) goto loc_82520618;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82520960
	ctx.lr = 0x82520608;
	sub_82520960(ctx, base);
	// addi r3,r7,56
	ctx.r3.s64 = ctx.r7.s64 + 56;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,112
	ctx.r5.s64 = 112;
	// bl 0x82fa77c0
	ctx.lr = 0x82520618;
	sub_82FA77C0(ctx, base);
loc_82520618:
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825206b4
	if (ctx.cr6.eq) goto loc_825206B4;
	// bl 0x825143c8
	ctx.lr = 0x82520628;
	sub_825143C8(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825206b4
	if (ctx.cr6.eq) goto loc_825206B4;
	// lbz r11,67(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 67);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82520658
	if (ctx.cr0.eq) goto loc_82520658;
	// lbz r11,68(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 68);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x8252065c
	if (!ctx.cr0.eq) goto loc_8252065C;
loc_82520658:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8252065C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82520694
	if (ctx.cr0.eq) goto loc_82520694;
	// ld r11,36(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 36);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// bl 0x8250aac0
	ctx.lr = 0x8252067C;
	sub_8250AAC0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82520694
	if (ctx.cr0.eq) goto loc_82520694;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,168(r11)
	PPC_STORE_U64(ctx.r11.u32 + 168, ctx.r10.u64);
	// b 0x825206b4
	goto loc_825206B4;
loc_82520694:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r11,r11,27984
	ctx.r11.s64 = ctx.r11.s64 + 27984;
	// lfs f0,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,168(r10)
	PPC_STORE_U64(ctx.r10.u32 + 168, ctx.r11.u64);
loc_825206B4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825206C8"))) PPC_WEAK_FUNC(sub_825206C8);
PPC_FUNC_IMPL(__imp__sub_825206C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x825206D0;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,76(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82520954
	if (ctx.cr6.eq) goto loc_82520954;
	// lwz r10,84(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82520954
	if (ctx.cr6.eq) goto loc_82520954;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82520954
	if (ctx.cr6.eq) goto loc_82520954;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82520954
	if (ctx.cr6.eq) goto loc_82520954;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// bne cr6,0x8252072c
	if (!ctx.cr6.eq) goto loc_8252072C;
	// addi r28,r9,24
	ctx.r28.s64 = ctx.r9.s64 + 24;
	// addi r31,r10,24
	ctx.r31.s64 = ctx.r10.s64 + 24;
	// b 0x8252073c
	goto loc_8252073C;
loc_8252072C:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8252073c
	if (!ctx.cr6.eq) goto loc_8252073C;
	// addi r28,r10,24
	ctx.r28.s64 = ctx.r10.s64 + 24;
	// addi r31,r9,24
	ctx.r31.s64 = ctx.r9.s64 + 24;
loc_8252073C:
	// lwz r9,140(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82520868
	if (ctx.cr6.eq) goto loc_82520868;
	// lwz r3,124(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// b 0x82520768
	goto loc_82520768;
loc_82520758:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82520798
	if (ctx.cr6.eq) goto loc_82520798;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82520768:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82520758
	if (!ctx.cr6.eq) goto loc_82520758;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82520774:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82520954
	if (!ctx.cr0.eq) goto loc_82520954;
	// lwz r4,144(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// bl 0x8250a660
	ctx.lr = 0x82520784;
	sub_8250A660(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r29,0(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x825207e4
	goto loc_825207E4;
loc_82520798:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82520774
	goto loc_82520774;
loc_825207A0:
	// lwz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825207d8
	if (ctx.cr0.eq) goto loc_825207D8;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,96
	ctx.xer.ca = ctx.r11.u32 > 4294967199;
	ctx.r11.s64 = ctx.r11.s64 + 96;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825207cc
	if (ctx.cr0.eq) goto loc_825207CC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe. r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825207d0
	if (!ctx.cr0.eq) goto loc_825207D0;
loc_825207CC:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_825207D0:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82518760
	ctx.lr = 0x825207D8;
	sub_82518760(ctx, base);
loc_825207D8:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_825207E4:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825207a0
	if (!ctx.cr6.eq) goto loc_825207A0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r27,140(r30)
	PPC_STORE_U32(ctx.r30.u32 + 140, ctx.r27.u32);
	// lis r11,25
	ctx.r11.s64 = 1638400;
	// stw r27,144(r30)
	PPC_STORE_U32(ctx.r30.u32 + 144, ctx.r27.u32);
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// ori r8,r11,26125
	ctx.r8.u64 = ctx.r11.u64 | 26125;
	// lis r7,-32227
	ctx.r7.s64 = -2112028672;
	// lwz r11,21292(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21292);
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// addis r11,r11,15471
	ctx.r11.s64 = ctx.r11.s64 + 1013907456;
	// lfs f12,-24756(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -24756);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r9,8072
	ctx.r9.s64 = ctx.r9.s64 + 8072;
	// addi r11,r11,-3233
	ctx.r11.s64 = ctx.r11.s64 + -3233;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,21292(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21292, ctx.r11.u32);
	// clrlwi r8,r11,9
	ctx.r8.u64 = ctx.r11.u32 & 0x7FFFFF;
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// oris r11,r8,16256
	ctx.r11.u64 = ctx.r8.u64 | 1065353216;
	// lfs f0,-1076(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -1076);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-1072(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -1072);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fmadds f0,f13,f12,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f0.f64));
	// stfs f0,148(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 148, temp.u32);
	// bl 0x825192b0
	ctx.lr = 0x82520858;
	sub_825192B0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// bl 0x825192b0
	ctx.lr = 0x82520864;
	sub_825192B0(ctx, base);
	// b 0x82520954
	goto loc_82520954;
loc_82520868:
	// bl 0x825143c8
	ctx.lr = 0x8252086C;
	sub_825143C8(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82520894
	if (ctx.cr6.eq) goto loc_82520894;
	// lbz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 68);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82520894
	if (ctx.cr0.eq) goto loc_82520894;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82520894:
	// clrlwi. r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825208f4
	if (ctx.cr0.eq) goto loc_825208F4;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r11,25
	ctx.r11.s64 = 1638400;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// ori r8,r11,26125
	ctx.r8.u64 = ctx.r11.u64 | 26125;
	// addi r9,r9,8072
	ctx.r9.s64 = ctx.r9.s64 + 8072;
	// lwz r11,21292(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21292);
	// lis r7,-32227
	ctx.r7.s64 = -2112028672;
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// lfs f0,-1076(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -1076);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-1072(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -1072);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-24756(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -24756);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// addis r11,r11,15471
	ctx.r11.s64 = ctx.r11.s64 + 1013907456;
	// addi r11,r11,-3233
	ctx.r11.s64 = ctx.r11.s64 + -3233;
	// clrlwi r9,r11,9
	ctx.r9.u64 = ctx.r11.u32 & 0x7FFFFF;
	// stw r11,21292(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21292, ctx.r11.u32);
	// oris r11,r9,16256
	ctx.r11.u64 = ctx.r9.u64 | 1065353216;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fmadds f0,f13,f12,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f0.f64));
	// b 0x8252091c
	goto loc_8252091C;
loc_825208F4:
	// lfs f0,148(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// fsubs f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f0,8072(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8072);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-15356(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15356);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fsel f0,f11,f12,f0
	ctx.f0.f64 = ctx.f11.f64 >= 0.0 ? ctx.f12.f64 : ctx.f0.f64;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsel f0,f12,f13,f0
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
loc_8252091C:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stfs f0,148(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 148, temp.u32);
	// lfs f0,-2340(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82520954
	if (ctx.cr6.gt) goto loc_82520954;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r27,144(r30)
	PPC_STORE_U32(ctx.r30.u32 + 144, ctx.r27.u32);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// b 0x8252094c
	goto loc_8252094C;
loc_82520948:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8252094C:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82520948
	if (!ctx.cr6.eq) goto loc_82520948;
loc_82520954:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82520960"))) PPC_WEAK_FUNC(sub_82520960);
PPC_FUNC_IMPL(__imp__sub_82520960) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82fa8d1c
	ctx.lr = 0x82520970;
	__savefpr_25(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r10,r11,6760
	ctx.r10.s64 = ctx.r11.s64 + 6760;
	// lfs f0,6760(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6760);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,60(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f9.f64 = double(temp.f32);
	// stfs f0,-96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// stfs f13,-92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// stfs f12,-88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -88, temp.u32);
	// stfs f11,-84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -84, temp.u32);
	// stfs f10,-80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// stfs f9,-76(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -76, temp.u32);
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,40(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,44(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,64(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,68(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,72(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,76(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,80(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,84(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	ctx.f31.f64 = double(temp.f32);
	// ld r11,-96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfs f30,88(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,92(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	ctx.f29.f64 = double(temp.f32);
	// ld r9,-88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfs f28,96(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,100(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	ctx.f27.f64 = double(temp.f32);
	// ld r8,-80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfs f26,104(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	ctx.f26.f64 = double(temp.f32);
	// lfs f25,108(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	ctx.f25.f64 = double(temp.f32);
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f13,16(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// std r9,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r9.u64);
	// stfs f12,20(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f11,24(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// std r8,56(r3)
	PPC_STORE_U64(ctx.r3.u32 + 56, ctx.r8.u64);
	// stfs f10,28(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f9,40(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f8,44(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f7,48(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f6,52(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f5,64(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f4,68(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f3,72(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f2,76(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stfs f1,80(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stfs f31,84(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stfs f30,88(r3)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stfs f29,92(r3)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stfs f28,96(r3)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stfs f27,100(r3)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stfs f26,104(r3)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stfs f25,108(r3)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82fa8d68
	ctx.lr = 0x82520A78;
	__restfpr_25(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82520A84"))) PPC_WEAK_FUNC(sub_82520A84);
PPC_FUNC_IMPL(__imp__sub_82520A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82520A88"))) PPC_WEAK_FUNC(sub_82520A88);
PPC_FUNC_IMPL(__imp__sub_82520A88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82520A90;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,9100
	ctx.r11.s64 = ctx.r11.s64 + 9100;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// addi r11,r10,5228
	ctx.r11.s64 = ctx.r10.s64 + 5228;
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// addi r3,r3,72
	ctx.r3.s64 = ctx.r3.s64 + 72;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// stw r7,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r7.u32);
	// stw r8,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r5,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r5.u32);
	// bl 0x8226c200
	ctx.lr = 0x82520AF0;
	sub_8226C200(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8226c200
	ctx.lr = 0x82520AFC;
	sub_8226C200(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// beq cr6,0x82520b34
	if (ctx.cr6.eq) goto loc_82520B34;
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x82691500
	ctx.lr = 0x82520B18;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82520b2c
	if (ctx.cr0.eq) goto loc_82520B2C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8251f4a8
	ctx.lr = 0x82520B28;
	sub_8251F4A8(ctx, base);
	// b 0x82520b30
	goto loc_82520B30;
loc_82520B2C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82520B30:
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
loc_82520B34:
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// stw r31,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r31.u32);
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// lis r9,-32208
	ctx.r9.s64 = -2110783488;
	// addi r11,r11,8120
	ctx.r11.s64 = ctx.r11.s64 + 8120;
	// addi r10,r10,8136
	ctx.r10.s64 = ctx.r10.s64 + 8136;
	// addi r9,r9,11640
	ctx.r9.s64 = ctx.r9.s64 + 11640;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// sth r30,128(r31)
	PPC_STORE_U16(ctx.r31.u32 + 128, ctx.r30.u16);
	// bl 0x82f91940
	ctx.lr = 0x82520B68;
	sub_82F91940(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82f91940
	ctx.lr = 0x82520B70;
	sub_82F91940(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82520B7C"))) PPC_WEAK_FUNC(sub_82520B7C);
PPC_FUNC_IMPL(__imp__sub_82520B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82520B80"))) PPC_WEAK_FUNC(sub_82520B80);
PPC_FUNC_IMPL(__imp__sub_82520B80) {
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
	// bl 0x82520bd0
	ctx.lr = 0x82520BA0;
	sub_82520BD0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82520bb0
	if (ctx.cr0.eq) goto loc_82520BB0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x82520BB0;
	sub_82691540(ctx, base);
loc_82520BB0:
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

__attribute__((alias("__imp__sub_82520BCC"))) PPC_WEAK_FUNC(sub_82520BCC);
PPC_FUNC_IMPL(__imp__sub_82520BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82520BD0"))) PPC_WEAK_FUNC(sub_82520BD0);
PPC_FUNC_IMPL(__imp__sub_82520BD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82520BD8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r31,16(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,9100
	ctx.r11.s64 = ctx.r11.s64 + 9100;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82520c08
	if (ctx.cr6.eq) goto loc_82520C08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8251f6c0
	ctx.lr = 0x82520C00;
	sub_8251F6C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x82520C08;
	sub_82691540(ctx, base);
loc_82520C08:
	// lwz r31,20(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// addi r28,r29,20
	ctx.r28.s64 = ctx.r29.s64 + 20;
	// b 0x82520c54
	goto loc_82520C54;
loc_82520C14:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8250b630
	ctx.lr = 0x82520C1C;
	sub_8250B630(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823090c8
	ctx.lr = 0x82520C24;
	sub_823090C8(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x823f6330
	ctx.lr = 0x82520C30;
	sub_823F6330(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82520c40
	if (ctx.cr6.eq) goto loc_82520C40;
	// bl 0x82241d18
	ctx.lr = 0x82520C40;
	sub_82241D18(ctx, base);
loc_82520C40:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82521de8
	ctx.lr = 0x82520C50;
	sub_82521DE8(ctx, base);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82520C54:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82520c14
	if (ctx.cr6.lt) goto loc_82520C14;
	// lis r30,-31957
	ctx.r30.s64 = -2094333952;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r27,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r27.u32);
	// lwz r3,23008(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23008);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82520c8c
	if (ctx.cr0.eq) goto loc_82520C8C;
loc_82520C78:
	// lwz r31,2176(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2176);
	// bl 0x82547d80
	ctx.lr = 0x82520C80;
	sub_82547D80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82520c78
	if (!ctx.cr6.eq) goto loc_82520C78;
loc_82520C8C:
	// lis r31,-31957
	ctx.r31.s64 = -2094333952;
	// stw r27,23008(r30)
	PPC_STORE_U32(ctx.r30.u32 + 23008, ctx.r27.u32);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// lwz r3,23004(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23004);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82520cb0
	if (ctx.cr6.eq) goto loc_82520CB0;
	// bl 0x82547d80
	ctx.lr = 0x82520CA8;
	sub_82547D80(ctx, base);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r27,23004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23004, ctx.r27.u32);
loc_82520CB0:
	// addi r3,r29,96
	ctx.r3.s64 = ctx.r29.s64 + 96;
	// bl 0x82f91940
	ctx.lr = 0x82520CB8;
	sub_82F91940(ctx, base);
	// addi r3,r29,72
	ctx.r3.s64 = ctx.r29.s64 + 72;
	// bl 0x82f91940
	ctx.lr = 0x82520CC0;
	sub_82F91940(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82520d08
	if (ctx.cr6.eq) goto loc_82520D08;
	// lwz r29,4(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82520d00
	if (ctx.cr6.eq) goto loc_82520D00;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
loc_82520CE0:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82520cf0
	if (ctx.cr6.eq) goto loc_82520CF0;
	// bl 0x82241d18
	ctx.lr = 0x82520CF0;
	sub_82241D18(ctx, base);
loc_82520CF0:
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82520ce0
	if (!ctx.cr6.eq) goto loc_82520CE0;
loc_82520D00:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82691540
	ctx.lr = 0x82520D08;
	sub_82691540(ctx, base);
loc_82520D08:
	// stw r27,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r27.u32);
	// stw r27,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r27.u32);
	// stw r27,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82520D1C"))) PPC_WEAK_FUNC(sub_82520D1C);
PPC_FUNC_IMPL(__imp__sub_82520D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82520D20"))) PPC_WEAK_FUNC(sub_82520D20);
PPC_FUNC_IMPL(__imp__sub_82520D20) {
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
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82520d70
	if (ctx.cr6.eq) goto loc_82520D70;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82520d68
	if (ctx.cr6.eq) goto loc_82520D68;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82520d68
	if (ctx.cr6.eq) goto loc_82520D68;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82520d68
	if (!ctx.cr6.eq) goto loc_82520D68;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82520da4
	if (ctx.cr6.eq) goto loc_82520DA4;
loc_82520D68:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82520da4
	goto loc_82520DA4;
loc_82520D70:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82520da0
	if (ctx.cr6.eq) goto loc_82520DA0;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82520da0
	if (!ctx.cr6.eq) goto loc_82520DA0;
	// bl 0x8250f738
	ctx.lr = 0x82520D90;
	sub_8250F738(ctx, base);
	// lwz r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82520da4
	if (ctx.cr6.eq) goto loc_82520DA4;
loc_82520DA0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82520DA4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82520DB4"))) PPC_WEAK_FUNC(sub_82520DB4);
PPC_FUNC_IMPL(__imp__sub_82520DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82520DB8"))) PPC_WEAK_FUNC(sub_82520DB8);
PPC_FUNC_IMPL(__imp__sub_82520DB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82520DC0;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-2528(r1)
	ea = -2528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82521980
	ctx.lr = 0x82520DD4;
	sub_82521980(ctx, base);
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252114c
	if (ctx.cr6.eq) goto loc_8252114C;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82520e0c
	if (ctx.cr6.eq) goto loc_82520E0C;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82520e0c
	if (ctx.cr6.eq) goto loc_82520E0C;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82520e0c
	if (!ctx.cr6.eq) goto loc_82520E0C;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82520e18
	if (ctx.cr6.eq) goto loc_82520E18;
loc_82520E0C:
	// bl 0x825143c8
	ctx.lr = 0x82520E10;
	sub_825143C8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
loc_82520E18:
	// lwz r3,16(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8251f800
	ctx.lr = 0x82520E24;
	sub_8251F800(ctx, base);
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8252114c
	if (ctx.cr6.eq) goto loc_8252114C;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8252114c
	if (ctx.cr6.eq) goto loc_8252114C;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8252114c
	if (ctx.cr6.eq) goto loc_8252114C;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8252114c
	if (!ctx.cr6.eq) goto loc_8252114C;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8252114c
	if (!ctx.cr6.eq) goto loc_8252114C;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82520e74
	if (ctx.cr6.eq) goto loc_82520E74;
	// lwz r28,100(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// b 0x82520e98
	goto loc_82520E98;
loc_82520E74:
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82520e90
	if (ctx.cr6.eq) goto loc_82520E90;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82520e90
	if (ctx.cr6.eq) goto loc_82520E90;
	// addi r11,r11,84
	ctx.r11.s64 = ctx.r11.s64 + 84;
	// b 0x82520e94
	goto loc_82520E94;
loc_82520E90:
	// addi r11,r11,76
	ctx.r11.s64 = ctx.r11.s64 + 76;
loc_82520E94:
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82520E98:
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82521148
	if (ctx.cr6.eq) goto loc_82521148;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r5,2046
	ctx.r5.s64 = 2046;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,418
	ctx.r3.s64 = ctx.r1.s64 + 418;
	// lhz r11,31944(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 31944);
	// sth r11,416(r1)
	PPC_STORE_U16(ctx.r1.u32 + 416, ctx.r11.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x82520EC0;
	sub_82FA7CF0(ctx, base);
	// lwz r10,36(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r30,-31957
	ctx.r30.s64 = -2094333952;
	// addi r29,r11,9040
	ctx.r29.s64 = ctx.r11.s64 + 9040;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82521004
	if (ctx.cr6.eq) goto loc_82521004;
	// lwz r11,23008(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23008);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82520fc4
	if (ctx.cr6.eq) goto loc_82520FC4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822402c8
	ctx.lr = 0x82520EF4;
	sub_822402C8(ctx, base);
	// bl 0x825b1140
	ctx.lr = 0x82520EF8;
	sub_825B1140(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825b11a0
	ctx.lr = 0x82520F00;
	sub_825B11A0(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x82520f14
	if (!ctx.cr6.lt) goto loc_82520F14;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
loc_82520F14:
	// lwz r11,44(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r6,r11,40
	ctx.r6.s64 = ctx.r11.s64 + 40;
	// bne cr6,0x82520f28
	if (!ctx.cr6.eq) goto loc_82520F28;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
loc_82520F28:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82fa4e10
	ctx.lr = 0x82520F38;
	sub_82FA4E10(ctx, base);
	// lwz r11,23008(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23008);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// beq 0x82520f68
	if (ctx.cr0.eq) goto loc_82520F68;
loc_82520F48:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82fa6640
	ctx.lr = 0x82520F54;
	sub_82FA6640(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82520fb0
	if (ctx.cr0.eq) goto loc_82520FB0;
	// lwz r31,2176(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2176);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82520f48
	if (!ctx.cr6.eq) goto loc_82520F48;
loc_82520F68:
	// lwz r3,120(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 120);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82520f9c
	if (ctx.cr6.eq) goto loc_82520F9C;
	// lwz r11,44(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r4,r11,40
	ctx.r4.s64 = ctx.r11.s64 + 40;
	// bne cr6,0x82520f88
	if (!ctx.cr6.eq) goto loc_82520F88;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_82520F88:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r1,416
	ctx.r5.s64 = ctx.r1.s64 + 416;
	// bl 0x8259c8e0
	ctx.lr = 0x82520F9C;
	sub_8259C8E0(ctx, base);
loc_82520F9C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822402c8
	ctx.lr = 0x82520FAC;
	sub_822402C8(ctx, base);
	// b 0x82520ff8
	goto loc_82520FF8;
loc_82520FB0:
	// addi r5,r31,128
	ctx.r5.s64 = ctx.r31.s64 + 128;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82fa2df8
	ctx.lr = 0x82520FC0;
	sub_82FA2DF8(ctx, base);
	// b 0x82520f9c
	goto loc_82520F9C;
loc_82520FC4:
	// lwz r3,120(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 120);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82520ff8
	if (ctx.cr6.eq) goto loc_82520FF8;
	// lwz r11,44(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r4,r11,40
	ctx.r4.s64 = ctx.r11.s64 + 40;
	// bne cr6,0x82520fe4
	if (!ctx.cr6.eq) goto loc_82520FE4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_82520FE4:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r1,416
	ctx.r5.s64 = ctx.r1.s64 + 416;
	// bl 0x8259c8e0
	ctx.lr = 0x82520FF8;
	sub_8259C8E0(ctx, base);
loc_82520FF8:
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// lwz r3,36(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// bl 0x82534af8
	ctx.lr = 0x82521004;
	sub_82534AF8(ctx, base);
loc_82521004:
	// lwz r3,40(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82521148
	if (ctx.cr6.eq) goto loc_82521148;
	// addic. r4,r27,128
	ctx.xer.ca = ctx.r27.u32 > 4294967167;
	ctx.r4.s64 = ctx.r27.s64 + 128;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82521024
	if (ctx.cr0.eq) goto loc_82521024;
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82521144
	if (!ctx.cr0.eq) goto loc_82521144;
loc_82521024:
	// lwz r11,23008(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23008);
	// sth r26,416(r1)
	PPC_STORE_U16(ctx.r1.u32 + 416, ctx.r26.u16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252110c
	if (ctx.cr6.eq) goto loc_8252110C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822402c8
	ctx.lr = 0x82521044;
	sub_822402C8(ctx, base);
	// bl 0x825b1140
	ctx.lr = 0x82521048;
	sub_825B1140(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825b11a0
	ctx.lr = 0x82521050;
	sub_825B11A0(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bge cr6,0x82521064
	if (!ctx.cr6.lt) goto loc_82521064;
	// addi r31,r1,96
	ctx.r31.s64 = ctx.r1.s64 + 96;
loc_82521064:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82518f70
	ctx.lr = 0x8252106C;
	sub_82518F70(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// bl 0x82fa4e10
	ctx.lr = 0x82521084;
	sub_82FA4E10(ctx, base);
	// lwz r11,23008(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23008);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// beq 0x825210b4
	if (ctx.cr0.eq) goto loc_825210B4;
loc_82521094:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82fa6640
	ctx.lr = 0x825210A0;
	sub_82FA6640(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825210f8
	if (ctx.cr0.eq) goto loc_825210F8;
	// lwz r31,2176(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2176);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82521094
	if (!ctx.cr6.eq) goto loc_82521094;
loc_825210B4:
	// lwz r31,120(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 120);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825210e4
	if (ctx.cr6.eq) goto loc_825210E4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r5,r1,416
	ctx.r5.s64 = ctx.r1.s64 + 416;
	// bl 0x82518f70
	ctx.lr = 0x825210CC;
	sub_82518F70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// bl 0x8259c8e0
	ctx.lr = 0x825210E4;
	sub_8259C8E0(ctx, base);
loc_825210E4:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822402c8
	ctx.lr = 0x825210F4;
	sub_822402C8(ctx, base);
	// b 0x8252113c
	goto loc_8252113C;
loc_825210F8:
	// addi r5,r31,128
	ctx.r5.s64 = ctx.r31.s64 + 128;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82fa2df8
	ctx.lr = 0x82521108;
	sub_82FA2DF8(ctx, base);
	// b 0x825210e4
	goto loc_825210E4;
loc_8252110C:
	// lwz r31,120(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 120);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8252113c
	if (ctx.cr6.eq) goto loc_8252113C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r5,r1,416
	ctx.r5.s64 = ctx.r1.s64 + 416;
	// bl 0x82518f70
	ctx.lr = 0x82521124;
	sub_82518F70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// bl 0x8259c8e0
	ctx.lr = 0x8252113C;
	sub_8259C8E0(ctx, base);
loc_8252113C:
	// lwz r3,40(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
loc_82521144:
	// bl 0x82534af8
	ctx.lr = 0x82521148;
	sub_82534AF8(ctx, base);
loc_82521148:
	// stw r26,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r26.u32);
loc_8252114C:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825211fc
	if (ctx.cr6.eq) goto loc_825211FC;
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// addi r30,r27,20
	ctx.r30.s64 = ctx.r27.s64 + 20;
	// lwz r10,24(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x825211fc
	if (ctx.cr6.eq) goto loc_825211FC;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r29,-12(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8250e470
	ctx.lr = 0x8252117C;
	sub_8250E470(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825211fc
	if (ctx.cr0.eq) goto loc_825211FC;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r10,12
	ctx.r10.s64 = 12;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r11,r11,r10
	ctx.r11.s32 = ctx.r11.s32 / ctx.r10.s32;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x825211fc
	if (!ctx.cr6.gt) goto loc_825211FC;
	// rotlwi r31,r9,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// b 0x825211f0
	goto loc_825211F0;
loc_825211A8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x825211fc
	if (ctx.cr6.eq) goto loc_825211FC;
	// bl 0x8250b630
	ctx.lr = 0x825211B8;
	sub_8250B630(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823090c8
	ctx.lr = 0x825211C0;
	sub_823090C8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x823f6330
	ctx.lr = 0x825211CC;
	sub_823F6330(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825211dc
	if (ctx.cr6.eq) goto loc_825211DC;
	// bl 0x82241d18
	ctx.lr = 0x825211DC;
	sub_82241D18(ctx, base);
loc_825211DC:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82521de8
	ctx.lr = 0x825211EC;
	sub_82521DE8(ctx, base);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_825211F0:
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825211a8
	if (ctx.cr6.lt) goto loc_825211A8;
loc_825211FC:
	// addi r1,r1,2528
	ctx.r1.s64 = ctx.r1.s64 + 2528;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82521208"))) PPC_WEAK_FUNC(sub_82521208);
PPC_FUNC_IMPL(__imp__sub_82521208) {
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
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82521240
	if (ctx.cr6.eq) goto loc_82521240;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x823f62d0
	ctx.lr = 0x8252123C;
	sub_823F62D0(ctx, base);
	// b 0x82521244
	goto loc_82521244;
loc_82521240:
	// bl 0x823090c8
	ctx.lr = 0x82521244;
	sub_823090C8(ctx, base);
loc_82521244:
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

__attribute__((alias("__imp__sub_8252125C"))) PPC_WEAK_FUNC(sub_8252125C);
PPC_FUNC_IMPL(__imp__sub_8252125C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82521260"))) PPC_WEAK_FUNC(sub_82521260);
PPC_FUNC_IMPL(__imp__sub_82521260) {
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
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x82520028
	ctx.lr = 0x82521280;
	sub_82520028(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// sth r10,128(r31)
	PPC_STORE_U16(ctx.r31.u32 + 128, ctx.r10.u16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,31944
	ctx.r30.s64 = ctx.r11.s64 + 31944;
	// beq cr6,0x825212a4
	if (ctx.cr6.eq) goto loc_825212A4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82534af8
	ctx.lr = 0x825212A4;
	sub_82534AF8(ctx, base);
loc_825212A4:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825212b8
	if (ctx.cr6.eq) goto loc_825212B8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82534af8
	ctx.lr = 0x825212B8;
	sub_82534AF8(ctx, base);
loc_825212B8:
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

__attribute__((alias("__imp__sub_825212D0"))) PPC_WEAK_FUNC(sub_825212D0);
PPC_FUNC_IMPL(__imp__sub_825212D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x825212D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-2256(r1)
	ea = -2256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r3,96
	ctx.r4.s64 = ctx.r3.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8226c200
	ctx.lr = 0x825212FC;
	sub_8226C200(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r30,72
	ctx.r4.s64 = ctx.r30.s64 + 72;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8226c200
	ctx.lr = 0x8252130C;
	sub_8226C200(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r6,r30,44
	ctx.r6.s64 = ctx.r30.s64 + 44;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// bl 0x8251fe98
	ctx.lr = 0x8252132C;
	sub_8251FE98(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,128(r30)
	PPC_STORE_U16(ctx.r30.u32 + 128, ctx.r11.u16);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r31,16(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 124, ctx.r11.u32);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82521354
	if (ctx.cr6.eq) goto loc_82521354;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// b 0x82521374
	goto loc_82521374;
loc_82521354:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8252136c
	if (ctx.cr6.eq) goto loc_8252136C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r31,84
	ctx.r11.s64 = ctx.r31.s64 + 84;
	// bne cr6,0x82521370
	if (!ctx.cr6.eq) goto loc_82521370;
loc_8252136C:
	// addi r11,r31,76
	ctx.r11.s64 = ctx.r31.s64 + 76;
loc_82521370:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82521374:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252144c
	if (ctx.cr6.eq) goto loc_8252144C;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r5,2046
	ctx.r5.s64 = 2046;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,162
	ctx.r3.s64 = ctx.r1.s64 + 162;
	// lhz r11,31944(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 31944);
	// sth r11,160(r1)
	PPC_STORE_U16(ctx.r1.u32 + 160, ctx.r11.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x82521398;
	sub_82FA7CF0(ctx, base);
	// lwz r3,120(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82521400
	if (ctx.cr6.eq) goto loc_82521400;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825213b8
	if (ctx.cr6.eq) goto loc_825213B8;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// b 0x825213d8
	goto loc_825213D8;
loc_825213B8:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x825213d0
	if (ctx.cr6.eq) goto loc_825213D0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r31,84
	ctx.r11.s64 = ctx.r31.s64 + 84;
	// bne cr6,0x825213d4
	if (!ctx.cr6.eq) goto loc_825213D4;
loc_825213D0:
	// addi r11,r31,76
	ctx.r11.s64 = ctx.r31.s64 + 76;
loc_825213D4:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_825213D8:
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x825213ec
	if (!ctx.cr6.eq) goto loc_825213EC;
	// li r4,0
	ctx.r4.s64 = 0;
loc_825213EC:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// bl 0x8259c8e0
	ctx.lr = 0x82521400;
	sub_8259C8E0(ctx, base);
loc_82521400:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82521418
	if (ctx.cr6.eq) goto loc_82521418;
	// lwz r3,100(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// b 0x8252143c
	goto loc_8252143C;
loc_82521418:
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82521434
	if (ctx.cr6.eq) goto loc_82521434;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82521434
	if (ctx.cr6.eq) goto loc_82521434;
	// addi r11,r11,84
	ctx.r11.s64 = ctx.r11.s64 + 84;
	// b 0x82521438
	goto loc_82521438;
loc_82521434:
	// addi r11,r11,76
	ctx.r11.s64 = ctx.r11.s64 + 76;
loc_82521438:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8252143C:
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// bl 0x82519c08
	ctx.lr = 0x82521444;
	sub_82519C08(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
loc_8252144C:
	// addi r1,r1,2256
	ctx.r1.s64 = ctx.r1.s64 + 2256;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82521454"))) PPC_WEAK_FUNC(sub_82521454);
PPC_FUNC_IMPL(__imp__sub_82521454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82521458"))) PPC_WEAK_FUNC(sub_82521458);
PPC_FUNC_IMPL(__imp__sub_82521458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82521460;
	__savegprlr_25(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-5056(r1)
	ea = -5056 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// stw r11,124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 124, ctx.r11.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x822a3128
	ctx.lr = 0x82521480;
	sub_822A3128(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r3,360
	ctx.r3.s64 = 360;
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// addi r26,r30,44
	ctx.r26.s64 = ctx.r30.s64 + 44;
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// bl 0x82691500
	ctx.lr = 0x82521498;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// li r27,1
	ctx.r27.s64 = 1;
	// beq 0x82521514
	if (ctx.cr0.eq) goto loc_82521514;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// addic. r28,r31,16
	ctx.xer.ca = ctx.r31.u32 > 4294967279;
	ctx.r28.s64 = ctx.r31.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// addi r11,r11,-24032
	ctx.r11.s64 = ctx.r11.s64 + -24032;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82521518
	if (ctx.cr0.eq) goto loc_82521518;
	// addi r4,r30,96
	ctx.r4.s64 = ctx.r30.s64 + 96;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8226c200
	ctx.lr = 0x825214CC;
	sub_8226C200(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r4,r30,72
	ctx.r4.s64 = ctx.r30.s64 + 72;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8226c200
	ctx.lr = 0x825214DC;
	sub_8226C200(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// bl 0x82518b28
	ctx.lr = 0x82521510;
	sub_82518B28(ctx, base);
	// b 0x82521518
	goto loc_82521518;
loc_82521514:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82521518:
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// bl 0x823f6330
	ctx.lr = 0x82521530;
	sub_823F6330(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82521540
	if (ctx.cr6.eq) goto loc_82521540;
	// bl 0x82241d18
	ctx.lr = 0x82521540;
	sub_82241D18(ctx, base);
loc_82521540:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r5,510
	ctx.r5.s64 = 510;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,210
	ctx.r3.s64 = ctx.r1.s64 + 210;
	// lhz r11,31944(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 31944);
	// sth r11,208(r1)
	PPC_STORE_U16(ctx.r1.u32 + 208, ctx.r11.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x8252155C;
	sub_82FA7CF0(ctx, base);
	// lwz r3,120(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252159c
	if (ctx.cr6.eq) goto loc_8252159C;
	// lwz r11,720(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 720);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82521584
	if (ctx.cr6.eq) goto loc_82521584;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// b 0x82521588
	goto loc_82521588;
loc_82521584:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82521588:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// bl 0x8259c8e0
	ctx.lr = 0x8252159C;
	sub_8259C8E0(ctx, base);
loc_8252159C:
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lwz r3,720(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 720);
	// bl 0x82519c08
	ctx.lr = 0x825215A8;
	sub_82519C08(ctx, base);
	// lwz r3,120(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r27,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r27.u32);
	// stw r27,728(r1)
	PPC_STORE_U32(ctx.r1.u32 + 728, ctx.r27.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r27,744(r1)
	PPC_STORE_U32(ctx.r1.u32 + 744, ctx.r27.u32);
	// stw r27,752(r1)
	PPC_STORE_U32(ctx.r1.u32 + 752, ctx.r27.u32);
	// stw r11,756(r1)
	PPC_STORE_U32(ctx.r1.u32 + 756, ctx.r11.u32);
	// stw r29,748(r1)
	PPC_STORE_U32(ctx.r1.u32 + 748, ctx.r29.u32);
	// beq cr6,0x82521628
	if (ctx.cr6.eq) goto loc_82521628;
	// lwz r11,720(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 720);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825215ec
	if (ctx.cr6.eq) goto loc_825215EC;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r4,r11,40
	ctx.r4.s64 = ctx.r11.s64 + 40;
	// b 0x825215f0
	goto loc_825215F0;
loc_825215EC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_825215F0:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r1,764
	ctx.r5.s64 = ctx.r1.s64 + 764;
	// bl 0x8259c8e0
	ctx.lr = 0x82521604;
	sub_8259C8E0(ctx, base);
	// lwz r3,720(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 720);
	// addi r5,r1,2812
	ctx.r5.s64 = ctx.r1.s64 + 2812;
	// bl 0x82518f70
	ctx.lr = 0x82521610;
	sub_82518F70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,120(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// li r6,1024
	ctx.r6.s64 = 1024;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// bl 0x8259c8e0
	ctx.lr = 0x82521628;
	sub_8259C8E0(ctx, base);
loc_82521628:
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// bl 0x8250b348
	ctx.lr = 0x82521630;
	sub_8250B348(ctx, base);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// addi r4,r1,720
	ctx.r4.s64 = ctx.r1.s64 + 720;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x825af408
	ctx.lr = 0x82521640;
	sub_825AF408(ctx, base);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
	// bl 0x82521c38
	ctx.lr = 0x8252164C;
	sub_82521C38(ctx, base);
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252165c
	if (ctx.cr6.eq) goto loc_8252165C;
	// bl 0x82241d18
	ctx.lr = 0x8252165C;
	sub_82241D18(ctx, base);
loc_8252165C:
	// lwz r3,724(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 724);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252166c
	if (ctx.cr6.eq) goto loc_8252166C;
	// bl 0x82241d18
	ctx.lr = 0x8252166C;
	sub_82241D18(ctx, base);
loc_8252166C:
	// addi r1,r1,5056
	ctx.r1.s64 = ctx.r1.s64 + 5056;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82521674"))) PPC_WEAK_FUNC(sub_82521674);
PPC_FUNC_IMPL(__imp__sub_82521674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82521678"))) PPC_WEAK_FUNC(sub_82521678);
PPC_FUNC_IMPL(__imp__sub_82521678) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82521680;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82521834
	if (ctx.cr6.eq) goto loc_82521834;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x825216ac
	if (ctx.cr6.eq) goto loc_825216AC;
	// lwz r30,100(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// b 0x825216d0
	goto loc_825216D0;
loc_825216AC:
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x825216c8
	if (ctx.cr6.eq) goto loc_825216C8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x825216c8
	if (ctx.cr6.eq) goto loc_825216C8;
	// addi r11,r11,84
	ctx.r11.s64 = ctx.r11.s64 + 84;
	// b 0x825216cc
	goto loc_825216CC;
loc_825216C8:
	// addi r11,r11,76
	ctx.r11.s64 = ctx.r11.s64 + 76;
loc_825216CC:
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_825216D0:
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x825216f0
	goto loc_825216F0;
loc_825216DC:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmplw cr6,r8,r28
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x825217e4
	if (ctx.cr6.eq) goto loc_825217E4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_825216F0:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825216dc
	if (!ctx.cr6.eq) goto loc_825216DC;
	// li r31,0
	ctx.r31.s64 = 0;
loc_825216FC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825191a8
	ctx.lr = 0x82521708;
	sub_825191A8(ctx, base);
	// addic. r11,r31,92
	ctx.xer.ca = ctx.r31.u32 > 4294967203;
	ctx.r11.s64 = ctx.r31.s64 + 92;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82521720
	if (ctx.cr0.eq) goto loc_82521720;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe. r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82521724
	if (!ctx.cr0.eq) goto loc_82521724;
loc_82521720:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82521724:
	// addic. r10,r31,96
	ctx.xer.ca = ctx.r31.u32 > 4294967199;
	ctx.r10.s64 = ctx.r31.s64 + 96;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8252173c
	if (ctx.cr0.eq) goto loc_8252173C;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe. r9,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82521740
	if (!ctx.cr0.eq) goto loc_82521740;
loc_8252173C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82521740:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82521750
	if (!ctx.cr6.eq) goto loc_82521750;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r11,r11,31460
	ctx.r11.s64 = ctx.r11.s64 + 31460;
loc_82521750:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,64(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82521788
	if (ctx.cr6.eq) goto loc_82521788;
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// addi r7,r31,100
	ctx.r7.s64 = ctx.r31.s64 + 100;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82521788;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82521788:
	// ld r11,720(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 720);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// ld r9,712(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 712);
	// lwz r8,16(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,31512(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 31512);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,124(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 124);
	// lfs f11,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f11,f10,f0,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmadds f0,f13,f0,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825217ec
	if (ctx.cr6.eq) goto loc_825217EC;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8250a8c0
	ctx.lr = 0x825217E0;
	sub_8250A8C0(ctx, base);
	// b 0x825217f4
	goto loc_825217F4;
loc_825217E4:
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// b 0x825216fc
	goto loc_825216FC;
loc_825217EC:
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
loc_825217F4:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252191c
	if (ctx.cr6.eq) goto loc_8252191C;
	// addic. r11,r30,40
	ctx.xer.ca = ctx.r30.u32 > 4294967255;
	ctx.r11.s64 = ctx.r30.s64 + 40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82521818
	if (ctx.cr0.eq) goto loc_82521818;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe. r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8252181c
	if (!ctx.cr0.eq) goto loc_8252181C;
loc_82521818:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8252181C:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825212d0
	ctx.lr = 0x82521830;
	sub_825212D0(ctx, base);
	// b 0x8252191c
	goto loc_8252191C;
loc_82521834:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8252191c
	if (ctx.cr6.eq) goto loc_8252191C;
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r9,r11,-12
	ctx.r9.s64 = ctx.r11.s64 + -12;
	// lwz r11,-8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8252186c
	goto loc_8252186C;
loc_82521858:
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// cmplw cr6,r7,r28
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82521924
	if (ctx.cr6.eq) goto loc_82521924;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8252186C:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82521858
	if (!ctx.cr6.eq) goto loc_82521858;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82521878:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// bl 0x825191a8
	ctx.lr = 0x82521884;
	sub_825191A8(ctx, base);
	// addic. r11,r31,92
	ctx.xer.ca = ctx.r31.u32 > 4294967203;
	ctx.r11.s64 = ctx.r31.s64 + 92;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252189c
	if (ctx.cr0.eq) goto loc_8252189C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe. r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825218a0
	if (!ctx.cr0.eq) goto loc_825218A0;
loc_8252189C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825218A0:
	// addic. r10,r31,96
	ctx.xer.ca = ctx.r31.u32 > 4294967199;
	ctx.r10.s64 = ctx.r31.s64 + 96;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825218b8
	if (ctx.cr0.eq) goto loc_825218B8;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe. r9,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825218bc
	if (!ctx.cr0.eq) goto loc_825218BC;
loc_825218B8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_825218BC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825218cc
	if (!ctx.cr6.eq) goto loc_825218CC;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r11,r11,31460
	ctx.r11.s64 = ctx.r11.s64 + 31460;
loc_825218CC:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,64(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82521904
	if (ctx.cr6.eq) goto loc_82521904;
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// addi r7,r31,100
	ctx.r7.s64 = ctx.r31.s64 + 100;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82521904;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82521904:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252191c
	if (ctx.cr6.eq) goto loc_8252191C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82521458
	ctx.lr = 0x8252191C;
	sub_82521458(ctx, base);
loc_8252191C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_82521924:
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// b 0x82521878
	goto loc_82521878;
}

__attribute__((alias("__imp__sub_8252192C"))) PPC_WEAK_FUNC(sub_8252192C);
PPC_FUNC_IMPL(__imp__sub_8252192C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82521930"))) PPC_WEAK_FUNC(sub_82521930);
PPC_FUNC_IMPL(__imp__sub_82521930) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// clrlwi r5,r5,24
	ctx.r5.u64 = ctx.r5.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_82521954"))) PPC_WEAK_FUNC(sub_82521954);
PPC_FUNC_IMPL(__imp__sub_82521954) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82521958"))) PPC_WEAK_FUNC(sub_82521958);
PPC_FUNC_IMPL(__imp__sub_82521958) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
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

__attribute__((alias("__imp__sub_82521978"))) PPC_WEAK_FUNC(sub_82521978);
PPC_FUNC_IMPL(__imp__sub_82521978) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252197C"))) PPC_WEAK_FUNC(sub_8252197C);
PPC_FUNC_IMPL(__imp__sub_8252197C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82521980"))) PPC_WEAK_FUNC(sub_82521980);
PPC_FUNC_IMPL(__imp__sub_82521980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82521988;
	__savegprlr_27(ctx, base);
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82521990:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a74bb0
	ctx.lr = 0x82521998;
	sub_82A74BB0(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x825219b0
	if (ctx.cr6.eq) goto loc_825219B0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// blt cr6,0x82521990
	if (ctx.cr6.lt) goto loc_82521990;
	// b 0x82521b1c
	goto loc_82521B1C;
loc_825219B0:
	// lis r27,-31957
	ctx.r27.s64 = -2094333952;
	// lwz r11,23000(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 23000);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82521a50
	if (!ctx.cr6.eq) goto loc_82521A50;
	// lis r3,6
	ctx.r3.s64 = 393216;
	// bl 0x82547c40
	ctx.lr = 0x825219C8;
	sub_82547C40(ctx, base);
	// lis r30,-31957
	ctx.r30.s64 = -2094333952;
	// lis r5,6
	ctx.r5.s64 = 393216;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,23004(r30)
	PPC_STORE_U32(ctx.r30.u32 + 23004, ctx.r3.u32);
	// bl 0x82a75988
	ctx.lr = 0x825219DC;
	sub_82A75988(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r5,28
	ctx.r5.s64 = 28;
	// addi r29,r11,21020
	ctx.r29.s64 = ctx.r11.s64 + 21020;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a75988
	ctx.lr = 0x825219F4;
	sub_82A75988(ctx, base);
	// li r11,260
	ctx.r11.s64 = 260;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r7,r10,9052
	ctx.r7.s64 = ctx.r10.s64 + 9052;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d29d50
	ctx.lr = 0x82521A20;
	sub_82D29D50(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lwz r6,23004(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23004);
	// addi r8,r11,21000
	ctx.r8.s64 = ctx.r11.s64 + 21000;
	// li r7,20
	ctx.r7.s64 = 20;
	// lis r5,3
	ctx.r5.s64 = 196608;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d28960
	ctx.lr = 0x82521A44;
	sub_82D28960(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,23000(r27)
	PPC_STORE_U32(ctx.r27.u32 + 23000, ctx.r11.u32);
	// b 0x82521b1c
	goto loc_82521B1C;
loc_82521A50:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82521b1c
	if (!ctx.cr6.eq) goto loc_82521B1C;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,21020
	ctx.r3.s64 = ctx.r11.s64 + 21020;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82a75860
	ctx.lr = 0x82521A6C;
	sub_82A75860(ctx, base);
	// cmplwi cr6,r3,996
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 996, ctx.xer);
	// beq cr6,0x82521b1c
	if (ctx.cr6.eq) goto loc_82521B1C;
	// lis r29,-31957
	ctx.r29.s64 = -2094333952;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82521b04
	if (!ctx.cr6.eq) goto loc_82521B04;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lwz r10,23004(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 23004);
	// li r31,0
	ctx.r31.s64 = 0;
	// addic. r30,r10,2
	ctx.xer.ca = ctx.r10.u32 > 4294967293;
	ctx.r30.s64 = ctx.r10.s64 + 2;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r11,21000(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21000);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq 0x82521afc
	if (ctx.cr0.eq) goto loc_82521AFC;
	// lis r28,-31957
	ctx.r28.s64 = -2094333952;
loc_82521AA4:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82521afc
	if (ctx.cr6.eq) goto loc_82521AFC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// li r3,2180
	ctx.r3.s64 = 2180;
	// bne cr6,0x82521acc
	if (!ctx.cr6.eq) goto loc_82521ACC;
	// bl 0x82547c40
	ctx.lr = 0x82521AC0;
	sub_82547C40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r3,23008(r28)
	PPC_STORE_U32(ctx.r28.u32 + 23008, ctx.r3.u32);
	// b 0x82521ad8
	goto loc_82521AD8;
loc_82521ACC:
	// bl 0x82547c40
	ctx.lr = 0x82521AD0;
	sub_82547C40(ctx, base);
	// stw r3,2176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2176, ctx.r3.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82521AD8:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,2176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2176, ctx.r11.u32);
	// addi r5,r31,128
	ctx.r5.s64 = ctx.r31.s64 + 128;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82521b28
	ctx.lr = 0x82521AF4;
	sub_82521B28(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82521aa4
	if (!ctx.cr0.eq) goto loc_82521AA4;
loc_82521AFC:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82521b08
	goto loc_82521B08;
loc_82521B04:
	// li r11,2
	ctx.r11.s64 = 2;
loc_82521B08:
	// stw r11,23000(r27)
	PPC_STORE_U32(ctx.r27.u32 + 23000, ctx.r11.u32);
	// lwz r3,23004(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 23004);
	// bl 0x82547d80
	ctx.lr = 0x82521B14;
	sub_82547D80(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,23004(r29)
	PPC_STORE_U32(ctx.r29.u32 + 23004, ctx.r11.u32);
loc_82521B1C:
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82521B24"))) PPC_WEAK_FUNC(sub_82521B24);
PPC_FUNC_IMPL(__imp__sub_82521B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82521B28"))) PPC_WEAK_FUNC(sub_82521B28);
PPC_FUNC_IMPL(__imp__sub_82521B28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82521B30;
	__savegprlr_29(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r4,-2
	ctx.r29.s64 = ctx.r4.s64 + -2;
	// sth r31,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r31.u16);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// sth r31,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r31.u16);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_82521B4C:
	// lwz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82521bfc
	if (ctx.cr6.eq) goto loc_82521BFC;
	// lhz r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,13
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 13, ctx.xer);
	// bne cr6,0x82521b7c
	if (!ctx.cr6.eq) goto loc_82521B7C;
	// addi r8,r7,-4
	ctx.r8.s64 = ctx.r7.s64 + -4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r8,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// b 0x82521b94
	goto loc_82521B94;
loc_82521B7C:
	// addi r7,r7,-2
	ctx.r7.s64 = ctx.r7.s64 + -2;
	// cmplwi cr6,r8,61
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 61, ctx.xer);
	// stw r7,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// beq cr6,0x82521ba4
	if (ctx.cr6.eq) goto loc_82521BA4;
	// sthu r30,2(r29)
	ea = 2 + ctx.r29.u32;
	PPC_STORE_U16(ea, ctx.r30.u16);
	ctx.r29.u32 = ea;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_82521B94:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplwi cr6,r11,63
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 63, ctx.xer);
	// blt cr6,0x82521b4c
	if (ctx.cr6.lt) goto loc_82521B4C;
loc_82521BA4:
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r5,-2
	ctx.r7.s64 = ctx.r5.s64 + -2;
	// sthx r31,r8,r4
	PPC_STORE_U16(ctx.r8.u32 + ctx.r4.u32, ctx.r31.u16);
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
loc_82521BC0:
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82521c04
	if (ctx.cr6.eq) goto loc_82521C04;
	// lhz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// addi r4,r4,-2
	ctx.r4.s64 = ctx.r4.s64 + -2;
	// stw r4,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// cmplwi cr6,r8,13
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 13, ctx.xer);
	// beq cr6,0x82521c14
	if (ctx.cr6.eq) goto loc_82521C14;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthu r8,2(r7)
	ea = 2 + ctx.r7.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r7.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmplwi cr6,r10,1023
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1023, ctx.xer);
	// blt cr6,0x82521bc0
	if (ctx.cr6.lt) goto loc_82521BC0;
	// b 0x82521c1c
	goto loc_82521C1C;
loc_82521BFC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82521c30
	goto loc_82521C30;
loc_82521C04:
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// li r3,0
	ctx.r3.s64 = 0;
	// sthx r31,r11,r5
	PPC_STORE_U16(ctx.r11.u32 + ctx.r5.u32, ctx.r31.u16);
	// b 0x82521c30
	goto loc_82521C30;
loc_82521C14:
	// addi r9,r4,-2
	ctx.r9.s64 = ctx.r4.s64 + -2;
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
loc_82521C1C:
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r31,r10,r5
	PPC_STORE_U16(ctx.r10.u32 + ctx.r5.u32, ctx.r31.u16);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82521C30:
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82521C34"))) PPC_WEAK_FUNC(sub_82521C34);
PPC_FUNC_IMPL(__imp__sub_82521C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82521C38"))) PPC_WEAK_FUNC(sub_82521C38);
PPC_FUNC_IMPL(__imp__sub_82521C38) {
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
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82521c70
	if (!ctx.cr6.lt) goto loc_82521C70;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82521c74
	if (!ctx.cr6.gt) goto loc_82521C74;
loc_82521C70:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82521C74:
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq 0x82521d2c
	if (ctx.cr0.eq) goto loc_82521D2C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,12
	ctx.r11.s64 = 12;
	// subf r7,r10,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r10.s64;
	// divw r30,r7,r11
	ctx.r30.s32 = ctx.r7.s32 / ctx.r11.s32;
	// bne cr6,0x82521d04
	if (!ctx.cr6.eq) goto loc_82521D04;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lis r7,5461
	ctx.r7.s64 = 357892096;
	// divw r9,r9,r11
	ctx.r9.s32 = ctx.r9.s32 / ctx.r11.s32;
	// ori r7,r7,21844
	ctx.r7.u64 = ctx.r7.u64 | 21844;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x82521cbc
	if (!ctx.cr6.gt) goto loc_82521CBC;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,31836
	ctx.r3.s64 = ctx.r11.s64 + 31836;
	// bl 0x82fa0648
	ctx.lr = 0x82521CBC;
	sub_82FA0648(ctx, base);
loc_82521CBC:
	// subf r8,r10,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r10.s64;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// divw r11,r8,r11
	ctx.r11.s32 = ctx.r8.s32 / ctx.r11.s32;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82521d04
	if (!ctx.cr6.gt) goto loc_82521D04;
	// lis r8,5461
	ctx.r8.s64 = 357892096;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// ori r8,r8,21845
	ctx.r8.u64 = ctx.r8.u64 | 21845;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r8,r9,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82521cf0
	if (ctx.cr6.lt) goto loc_82521CF0;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82521CF0:
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82521cfc
	if (!ctx.cr6.lt) goto loc_82521CFC;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_82521CFC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82521e80
	ctx.lr = 0x82521D04;
	sub_82521E80(ctx, base);
loc_82521D04:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r9,r30,12
	ctx.r9.s64 = ctx.r30.s64 * 12;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82521dc4
	if (ctx.cr6.eq) goto loc_82521DC4;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x82521dbc
	goto loc_82521DBC;
loc_82521D2C:
	// bne cr6,0x82521da4
	if (!ctx.cr6.eq) goto loc_82521DA4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,12
	ctx.r11.s64 = 12;
	// lis r7,5461
	ctx.r7.s64 = 357892096;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// ori r7,r7,21844
	ctx.r7.u64 = ctx.r7.u64 | 21844;
	// divw r9,r9,r11
	ctx.r9.s32 = ctx.r9.s32 / ctx.r11.s32;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x82521d5c
	if (!ctx.cr6.gt) goto loc_82521D5C;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,31836
	ctx.r3.s64 = ctx.r11.s64 + 31836;
	// bl 0x82fa0648
	ctx.lr = 0x82521D5C;
	sub_82FA0648(ctx, base);
loc_82521D5C:
	// subf r8,r10,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r10.s64;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// divw r11,r8,r11
	ctx.r11.s32 = ctx.r8.s32 / ctx.r11.s32;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82521da4
	if (!ctx.cr6.gt) goto loc_82521DA4;
	// lis r8,5461
	ctx.r8.s64 = 357892096;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// ori r8,r8,21845
	ctx.r8.u64 = ctx.r8.u64 | 21845;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r8,r9,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82521d90
	if (ctx.cr6.lt) goto loc_82521D90;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82521D90:
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82521d9c
	if (!ctx.cr6.lt) goto loc_82521D9C;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_82521D9C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82521e80
	ctx.lr = 0x82521DA4;
	sub_82521E80(ctx, base);
loc_82521DA4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82521dc4
	if (ctx.cr6.eq) goto loc_82521DC4;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82521DBC:
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823f62d0
	ctx.lr = 0x82521DC4;
	sub_823F62D0(ctx, base);
loc_82521DC4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
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

__attribute__((alias("__imp__sub_82521DE8"))) PPC_WEAK_FUNC(sub_82521DE8);
PPC_FUNC_IMPL(__imp__sub_82521DE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82521DF0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// addi r31,r5,12
	ctx.r31.s64 = ctx.r5.s64 + 12;
	// b 0x82521e24
	goto loc_82521E24;
loc_82521E0C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// addi r3,r31,-8
	ctx.r3.s64 = ctx.r31.s64 + -8;
	// stw r11,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r11.u32);
	// bl 0x825af408
	ctx.lr = 0x82521E20;
	sub_825AF408(ctx, base);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
loc_82521E24:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82521e0c
	if (!ctx.cr6.eq) goto loc_82521E0C;
	// lwz r28,4(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r31,r28,-12
	ctx.r31.s64 = ctx.r28.s64 + -12;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82521e60
	if (ctx.cr6.eq) goto loc_82521E60;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
loc_82521E40:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82521e50
	if (ctx.cr6.eq) goto loc_82521E50;
	// bl 0x82241d18
	ctx.lr = 0x82521E50;
	sub_82241D18(ctx, base);
loc_82521E50:
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82521e40
	if (!ctx.cr6.eq) goto loc_82521E40;
loc_82521E60:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r27,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r27.u32);
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82521E7C"))) PPC_WEAK_FUNC(sub_82521E7C);
PPC_FUNC_IMPL(__imp__sub_82521E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82521E80"))) PPC_WEAK_FUNC(sub_82521E80);
PPC_FUNC_IMPL(__imp__sub_82521E80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82521E88;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,5461
	ctx.r11.s64 = 357892096;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r11,r11,21845
	ctx.r11.u64 = ctx.r11.u64 | 21845;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82521eb0
	if (!ctx.cr6.gt) goto loc_82521EB0;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,31836
	ctx.r3.s64 = ctx.r11.s64 + 31836;
	// bl 0x82fa0648
	ctx.lr = 0x82521EB0;
	sub_82FA0648(ctx, base);
loc_82521EB0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r26,12
	ctx.r26.s64 = 12;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r11,r11,r26
	ctx.r11.s32 = ctx.r11.s32 / ctx.r26.s32;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x82521f90
	if (!ctx.cr6.lt) goto loc_82521F90;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82521ee8
	if (ctx.cr6.eq) goto loc_82521EE8;
	// mulli r3,r25,12
	ctx.r3.s64 = ctx.r25.s64 * 12;
	// bl 0x82691500
	ctx.lr = 0x82521EE0;
	sub_82691500(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x82521f98
	if (ctx.cr0.eq) goto loc_82521F98;
loc_82521EE8:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// lwz r28,4(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x82521f1c
	goto loc_82521F1C;
loc_82521EF8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82521f14
	if (ctx.cr6.eq) goto loc_82521F14;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x823f62d0
	ctx.lr = 0x82521F14;
	sub_823F62D0(ctx, base);
loc_82521F14:
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
loc_82521F1C:
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82521ef8
	if (!ctx.cr6.eq) goto loc_82521EF8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// subf r10,r11,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r11.s64;
	// divw r26,r10,r26
	ctx.r26.s32 = ctx.r10.s32 / ctx.r26.s32;
	// beq cr6,0x82521f74
	if (ctx.cr6.eq) goto loc_82521F74;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82521f6c
	if (ctx.cr6.eq) goto loc_82521F6C;
	// addi r28,r11,8
	ctx.r28.s64 = ctx.r11.s64 + 8;
loc_82521F4C:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82521f5c
	if (ctx.cr6.eq) goto loc_82521F5C;
	// bl 0x82241d18
	ctx.lr = 0x82521F5C;
	sub_82241D18(ctx, base);
loc_82521F5C:
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82521f4c
	if (!ctx.cr6.eq) goto loc_82521F4C;
loc_82521F6C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82691540
	ctx.lr = 0x82521F74;
	sub_82691540(ctx, base);
loc_82521F74:
	// mulli r11,r25,12
	ctx.r11.s64 = ctx.r25.s64 * 12;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// mulli r10,r26,12
	ctx.r10.s64 = ctx.r26.s64 * 12;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_82521F90:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_82521F98:
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
	ctx.lr = 0x82521FB4;
	sub_82240040(ctx, base);
}

__attribute__((alias("__imp__sub_82521FB4"))) PPC_WEAK_FUNC(sub_82521FB4);
PPC_FUNC_IMPL(__imp__sub_82521FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82521FB8"))) PPC_WEAK_FUNC(sub_82521FB8);
PPC_FUNC_IMPL(__imp__sub_82521FB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r12)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r12.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82521FC8"))) PPC_WEAK_FUNC(sub_82521FC8);
PPC_FUNC_IMPL(__imp__sub_82521FC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r12)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r12.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82521FD8"))) PPC_WEAK_FUNC(sub_82521FD8);
PPC_FUNC_IMPL(__imp__sub_82521FD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82521FE0;
	__savegprlr_28(ctx, base);
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// li r12,-80
	ctx.r12.s64 = -80;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r30,0
	ctx.r30.s64 = 0;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// li r11,-1
	ctx.r11.s64 = -1;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r30,180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 180, ctx.r30.u32);
	// stw r11,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, ctx.r11.u32);
	// li r3,60
	ctx.r3.s64 = 60;
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// stw r30,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r30.u32);
	// vor128 v127,v1,v1
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// stw r10,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r10.u32);
	// bl 0x82691500
	ctx.lr = 0x82522040;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82522058
	if (ctx.cr0.eq) goto loc_82522058;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x825175b8
	ctx.lr = 0x82522054;
	sub_825175B8(ctx, base);
	// b 0x8252205c
	goto loc_8252205C;
loc_82522058:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8252205C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r3,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r3.u32);
	// beq cr6,0x82522080
	if (ctx.cr6.eq) goto loc_82522080;
	// stw r29,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r29.u32);
	// vor128 v1,v127,v127
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82522168
	ctx.lr = 0x82522080;
	sub_82522168(ctx, base);
loc_82522080:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,9116
	ctx.r3.s64 = ctx.r11.s64 + 9116;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82547f38
	ctx.lr = 0x82522094;
	sub_82547F38(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82546708
	ctx.lr = 0x825220A4;
	sub_82546708(ctx, base);
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r10,r10,9560
	ctx.r10.s64 = ctx.r10.s64 + 9560;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// stw r31,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r31.u32);
	// stw r9,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// li r0,-80
	ctx.r0.s64 = -80;
	// lvx128 v127,r1,r0
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF), VectorMaskL));
	// lfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825220E4"))) PPC_WEAK_FUNC(sub_825220E4);
PPC_FUNC_IMPL(__imp__sub_825220E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825220E8"))) PPC_WEAK_FUNC(sub_825220E8);
PPC_FUNC_IMPL(__imp__sub_825220E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x825220F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r31,428(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82522160
	if (ctx.cr6.eq) goto loc_82522160;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82522120;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8252213C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,220(r30)
	PPC_STORE_U32(ctx.r30.u32 + 220, ctx.r29.u32);
	// lwz r3,176(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// bl 0x82517770
	ctx.lr = 0x82522148;
	sub_82517770(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82522160;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82522160:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82522168"))) PPC_WEAK_FUNC(sub_82522168);
PPC_FUNC_IMPL(__imp__sub_82522168) {
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
	// li r12,-64
	ctx.r12.s64 = -64;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// vor128 v127,v1,v1
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// addi r10,r10,-4400
	ctx.r10.s64 = ctx.r10.s64 + -4400;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// lis r7,-32231
	ctx.r7.s64 = -2112290816;
	// li r6,32
	ctx.r6.s64 = 32;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r5,32
	ctx.r5.s64 = 32;
	// lvx128 v0,r10,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,48
	ctx.r4.s64 = 48;
	// stvx128 v0,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r7,-2136
	ctx.r3.s64 = ctx.r7.s64 + -2136;
	// lvx128 v0,r10,r6
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// li r9,48
	ctx.r9.s64 = 48;
	// stvx128 v0,r11,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r10,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lfs f0,10208(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10208);
	ctx.f0.f64 = double(temp.f32);
	// stvx128 v0,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lfs f31,-2136(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -2136);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8283bcf0
	ctx.lr = 0x82522200;
	sub_8283BCF0(ctx, base);
	// fres f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = float(1.0 / ctx.f1.f64);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8283bcf0
	ctx.lr = 0x8252220C;
	sub_8283BCF0(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// fres f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = float(1.0 / ctx.f1.f64);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// li r9,144
	ctx.r9.s64 = 144;
	// stfs f29,80(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// li r8,532
	ctx.r8.s64 = 532;
	// li r7,536
	ctx.r7.s64 = 536;
	// stvx128 v127,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lfs f0,-2340(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,-2340
	ctx.r11.s64 = ctx.r11.s64 + -2340;
	// addi r10,r10,27984
	ctx.r10.s64 = ctx.r10.s64 + 27984;
	// stvx128 v127,r31,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// stfs f0,112(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// li r6,540
	ctx.r6.s64 = 540;
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// li r5,160
	ctx.r5.s64 = 160;
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// lfs f13,544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 544);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f30,f13
	ctx.f10.f64 = double(float(ctx.f30.f64 * ctx.f13.f64));
	// lfs f13,280(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 280);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,284(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 284);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,120(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// stfs f12,136(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// lfs f11,-24756(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24756);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,116(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// fneg f13,f10
	ctx.f13.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// stfs f0,108(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// stfs f11,124(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fneg f10,f10
	ctx.f10.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// stfs f0,140(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 140, temp.u32);
	// stfs f12,64(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f10,68(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f13,72(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r9,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r9.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r9,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r9.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r9,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r9.u32);
	// lvlx v0,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v13,r10,r8
	temp.u32 = ctx.r10.u32 + ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v12,r10,r7
	temp.u32 = ctx.r10.u32 + ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v13,v0,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// lvlx v11,r10,r6
	temp.u32 = ctx.r10.u32 + ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v11,v12,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// vrlimi128 v11,v13,3,2
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 3));
	// stvx128 v11,r31,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// li r0,-64
	ctx.r0.s64 = -64;
	// lvx128 v127,r1,r0
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF), VectorMaskL));
	// lfd f29,-48(r1)
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

__attribute__((alias("__imp__sub_82522320"))) PPC_WEAK_FUNC(sub_82522320);
PPC_FUNC_IMPL(__imp__sub_82522320) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82522328;
	__savegprlr_27(ctx, base);
	// vsubfp v8,v1,v2
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v8.f32, _mm_sub_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v2.f32)));
	// vspltisw v13,-1
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_set1_epi32(int(0xFFFFFFFF)));
	// vspltisw v0,1
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x1)));
	// lis r7,-32231
	ctx.r7.s64 = -2112290816;
	// vspltisw v12,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_set1_epi32(int(0x0)));
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// vpermwi128 v7,v3,99
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v3.u32), 0x9C));
	// addi r4,r7,27984
	ctx.r4.s64 = ctx.r7.s64 + 27984;
	// vslw v13,v13,v13
	ctx.v13.u32[0] = ctx.v13.u32[0] << (ctx.v13.u8[0] & 0x1F);
	ctx.v13.u32[1] = ctx.v13.u32[1] << (ctx.v13.u8[4] & 0x1F);
	ctx.v13.u32[2] = ctx.v13.u32[2] << (ctx.v13.u8[8] & 0x1F);
	ctx.v13.u32[3] = ctx.v13.u32[3] << (ctx.v13.u8[12] & 0x1F);
	// vpermwi128 v10,v3,135
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v3.u32), 0x78));
	// vcfsx v0,v0,1
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v0.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3F000000)))));
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// vupkd3d128 v12,v12,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v12.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v12.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v12 = vTemp;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// vxor v6,v1,v13
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// addi r8,r11,48
	ctx.r8.s64 = ctx.r11.s64 + 48;
	// addi r28,r7,-2340
	ctx.r28.s64 = ctx.r7.s64 + -2340;
	// vpermwi128 v5,v12,171
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0x54));
	// li r29,1236
	ctx.r29.s64 = 1236;
	// li r31,1248
	ctx.r31.s64 = 1248;
	// vmsum3fp128 v11,v8,v8
	_mm_store_ps(ctx.v11.f32, _mm_dp_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v8.f32), 0xEF));
	// li r30,1252
	ctx.r30.s64 = 1252;
	// lis r7,-31954
	ctx.r7.s64 = -2094137344;
	// li r27,160
	ctx.r27.s64 = 160;
	// addi r6,r7,-4400
	ctx.r6.s64 = ctx.r7.s64 + -4400;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r5,r1,-120
	ctx.r5.s64 = ctx.r1.s64 + -120;
	// addi r6,r6,-8
	ctx.r6.s64 = ctx.r6.s64 + -8;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// vrsqrtefp v13,v11
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v11.f32))));
	// vmulfp128 v12,v11,v0
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v11,v13,v13
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v9,v12,v11,v0
	_mm_store_ps(ctx.v9.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v13,v13,v9,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v11,v8,v13
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v13.f32)));
	// vpermwi128 v9,v11,135
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x78));
	// vmsum3fp128 v8,v11,v6
	_mm_store_ps(ctx.v8.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v6.f32), 0xEF));
	// vpermwi128 v4,v11,99
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x9C));
	// vmulfp128 v12,v7,v9
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v9.f32)));
	// vnmsubfp v10,v10,v4,v12
	_mm_store_ps(ctx.v10.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v4.f32)), _mm_load_ps(ctx.v12.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vrlimi128 v8,v11,14,0
	_mm_store_ps(ctx.v8.f32, _mm_blend_ps(_mm_load_ps(ctx.v8.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 228), 14));
	// vmsum3fp128 v12,v10,v10
	_mm_store_ps(ctx.v12.f32, _mm_dp_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v10.f32), 0xEF));
	// vrsqrtefp v13,v12
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v12.f32))));
	// vmulfp128 v12,v12,v0
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v11,v13,v13
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v0,v12,v11,v0
	_mm_store_ps(ctx.v0.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v13,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v12,v10,v0
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v0.f32)));
	// vpermwi128 v13,v12,135
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0x78));
	// vmsum3fp128 v11,v12,v6
	_mm_store_ps(ctx.v11.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v6.f32), 0xEF));
	// vpermwi128 v0,v12,99
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0x9C));
	// vmulfp128 v13,v4,v13
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v13,v9,v0,v13
	_mm_store_ps(ctx.v13.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vrlimi128 v11,v12,14,0
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 228), 14));
	// vmrghw v0,v11,v8
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), _mm_load_si128((__m128i*)ctx.v11.u32)));
	// vmrglw v12,v11,v8
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), _mm_load_si128((__m128i*)ctx.v11.u32)));
	// vmsum3fp128 v11,v13,v6
	_mm_store_ps(ctx.v11.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v6.f32), 0xEF));
	// vrlimi128 v11,v13,14,0
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 228), 14));
	// vmrghw v13,v11,v5
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v5.u32), _mm_load_si128((__m128i*)ctx.v11.u32)));
	// vmrglw v11,v11,v5
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v5.u32), _mm_load_si128((__m128i*)ctx.v11.u32)));
	// vmrghw v10,v0,v13
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// vmrglw v0,v0,v13
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// vmrghw v13,v12,v11
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), _mm_load_si128((__m128i*)ctx.v12.u32)));
	// vmrglw v12,v12,v11
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), _mm_load_si128((__m128i*)ctx.v12.u32)));
	// stvx128 v10,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvlx v12,0,r28
	temp.u32 = ctx.r28.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v11,r4,r29
	temp.u32 = ctx.r4.u32 + ctx.r29.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v0,r4,r31
	temp.u32 = ctx.r4.u32 + ctx.r31.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v13,r4,r30
	temp.u32 = ctx.r4.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v13,v0,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// vrlimi128 v11,v12,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// vrlimi128 v13,v11,3,2
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 78), 3));
	// stvx128 v13,r3,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_8252245C:
	// ldu r7,8(r6)
	ea = 8 + ctx.r6.u32;
	ctx.r7.u64 = PPC_LOAD_U64(ea);
	ctx.r6.u32 = ea;
	// stdu r7,8(r5)
	ea = 8 + ctx.r5.u32;
	PPC_STORE_U64(ea, ctx.r7.u64);
	ctx.r5.u32 = ea;
	// bdnz 0x8252245c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8252245C;
	// addi r7,r1,-96
	ctx.r7.s64 = ctx.r1.s64 + -96;
	// lvx128 v11,r0,r11
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r6,r1,-64
	ctx.r6.s64 = ctx.r1.s64 + -64;
	// addi r5,r1,-112
	ctx.r5.s64 = ctx.r1.s64 + -112;
	// lis r4,-32231
	ctx.r4.s64 = -2112290816;
	// addi r3,r1,-80
	ctx.r3.s64 = ctx.r1.s64 + -80;
	// lvx128 v0,r0,r7
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r7,16
	ctx.r7.s64 = 16;
	// lvx128 v13,r0,r6
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// li r6,32
	ctx.r6.s64 = 32;
	// lvx128 v12,r0,r5
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// li r5,48
	ctx.r5.s64 = 48;
	// vmrghw v10,v0,v13
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// lfs f0,8072(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8072);
	ctx.f0.f64 = double(temp.f32);
	// vmrglw v13,v0,v13
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// stfs f0,-72(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -72, temp.u32);
	// lvx128 v0,r0,r3
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// vmrghw v9,v12,v0
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v12.u32)));
	// vmrglw v0,v12,v0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v12.u32)));
	// lvx128 v12,r11,r7
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// vmrghw v8,v9,v10
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), _mm_load_si128((__m128i*)ctx.v9.u32)));
	// lvx128 v7,r11,r6
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// vmrglw v10,v9,v10
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), _mm_load_si128((__m128i*)ctx.v9.u32)));
	// lvx128 v9,r11,r5
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// vmrghw v6,v0,v13
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// vmrglw v0,v0,v13
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// vmsum4fp128 v13,v11,v8
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v13.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v8.f32), 0xFF));
	// vmsum4fp128 v5,v11,v10
	_mm_store_ps(ctx.v5.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v10.f32), 0xFF));
	// vmsum4fp128 v4,v12,v10
	_mm_store_ps(ctx.v4.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v10.f32), 0xFF));
	// vmsum4fp128 v3,v11,v6
	_mm_store_ps(ctx.v3.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v6.f32), 0xFF));
	// vmsum4fp128 v11,v11,v0
	_mm_store_ps(ctx.v11.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v0.f32), 0xFF));
	// vmsum4fp128 v2,v12,v0
	_mm_store_ps(ctx.v2.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32), 0xFF));
	// vmsum4fp128 v31,v7,v0
	_mm_store_ps(ctx.v31.f32, _mm_dp_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v0.f32), 0xFF));
	// vmsum4fp128 v30,v7,v10
	_mm_store_ps(ctx.v30.f32, _mm_dp_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v10.f32), 0xFF));
	// vmsum4fp128 v1,v12,v6
	_mm_store_ps(ctx.v1.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v6.f32), 0xFF));
	// vmsum4fp128 v29,v7,v6
	_mm_store_ps(ctx.v29.f32, _mm_dp_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v6.f32), 0xFF));
	// vmsum4fp128 v0,v9,v0
	_mm_store_ps(ctx.v0.f32, _mm_dp_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v0.f32), 0xFF));
	// vmsum4fp128 v10,v9,v10
	_mm_store_ps(ctx.v10.f32, _mm_dp_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v10.f32), 0xFF));
	// vmsum4fp128 v6,v9,v6
	_mm_store_ps(ctx.v6.f32, _mm_dp_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v6.f32), 0xFF));
	// vmsum4fp128 v12,v12,v8
	_mm_store_ps(ctx.v12.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v8.f32), 0xFF));
	// vmsum4fp128 v7,v7,v8
	_mm_store_ps(ctx.v7.f32, _mm_dp_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v8.f32), 0xFF));
	// vmsum4fp128 v9,v9,v8
	_mm_store_ps(ctx.v9.f32, _mm_dp_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v8.f32), 0xFF));
	// vmrghw v13,v13,v3
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v3.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// vmrghw v11,v5,v11
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), _mm_load_si128((__m128i*)ctx.v5.u32)));
	// vmrghw v8,v4,v2
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v2.u32), _mm_load_si128((__m128i*)ctx.v4.u32)));
	// vmrghw v13,v13,v11
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// vmrghw v11,v30,v31
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v31.u32), _mm_load_si128((__m128i*)ctx.v30.u32)));
	// vmrghw v0,v10,v0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v10.u32)));
	// vmrghw v12,v12,v1
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v1.u32), _mm_load_si128((__m128i*)ctx.v12.u32)));
	// vmrghw v7,v7,v29
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v29.u32), _mm_load_si128((__m128i*)ctx.v7.u32)));
	// vmrghw v10,v9,v6
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v6.u32), _mm_load_si128((__m128i*)ctx.v9.u32)));
	// stvx128 v13,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw v12,v12,v8
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), _mm_load_si128((__m128i*)ctx.v12.u32)));
	// vmrghw v13,v7,v11
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), _mm_load_si128((__m128i*)ctx.v7.u32)));
	// vmrghw v0,v10,v0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v10.u32)));
	// stvx128 v12,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82522554"))) PPC_WEAK_FUNC(sub_82522554);
PPC_FUNC_IMPL(__imp__sub_82522554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82522558"))) PPC_WEAK_FUNC(sub_82522558);
PPC_FUNC_IMPL(__imp__sub_82522558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7658
	ctx.lr = 0x82522560;
	__savegprlr_20(ctx, base);
	// stfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f30.u64);
	// stfd f31,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// li r12,-160
	ctx.r12.s64 = -160;
	// stvx128 v126,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r12,-144
	ctx.r12.s64 = -144;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r24,180(r4)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r4.u32 + 180);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82522e08
	if (ctx.cr6.eq) goto loc_82522E08;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r11,r11,24448
	ctx.r11.s64 = ctx.r11.s64 + 24448;
	// lwz r11,236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825225ac
	if (ctx.cr6.eq) goto loc_825225AC;
	// lwz r21,4(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x825225b0
	goto loc_825225B0;
loc_825225AC:
	// mr r21,r28
	ctx.r21.u64 = ctx.r28.u64;
loc_825225B0:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82522e08
	if (ctx.cr6.eq) goto loc_82522E08;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// addi r25,r11,-3656
	ctx.r25.s64 = ctx.r11.s64 + -3656;
	// lwz r26,-260(r25)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r25.u32 + -260);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82581d60
	ctx.lr = 0x825225D0;
	sub_82581D60(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r4,r30,80
	ctx.r4.s64 = ctx.r30.s64 + 80;
	// bl 0x82582038
	ctx.lr = 0x825225DC;
	sub_82582038(ctx, base);
	// li r11,160
	ctx.r11.s64 = 160;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lvx128 v0,r30,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x825c3168
	ctx.lr = 0x825225F8;
	sub_825C3168(ctx, base);
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// addi r31,r30,144
	ctx.r31.s64 = ctx.r30.s64 + 144;
	// addi r11,r1,368
	ctx.r11.s64 = ctx.r1.s64 + 368;
	// addi r10,r1,320
	ctx.r10.s64 = ctx.r1.s64 + 320;
	// vupkd3d128 v127,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v127 = vTemp;
	// addi r9,r1,336
	ctx.r9.s64 = ctx.r1.s64 + 336;
	// addi r8,r1,352
	ctx.r8.s64 = ctx.r1.s64 + 352;
	// lvx128 v9,r0,r31
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// addi r7,r1,368
	ctx.r7.s64 = ctx.r1.s64 + 368;
	// vxor128 v9,v9,v65
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v65.u8)));
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// vor128 v0,v127,v127
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// vor v13,v0,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vpermwi128 v12,v0,234
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x15));
	// vpermwi128 v11,v0,186
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x45));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vpermwi128 v10,v0,174
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x51));
	// vrlimi128 v13,v9,14,0
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v9.f32), 228), 14));
	// stvx128 v12,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v10,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// lwz r10,188(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// lwz r9,192(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 192);
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// lfs f1,192(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f1.f64 = double(temp.f32);
	// stw r10,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r10.u32);
	// stw r9,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r9.u32);
	// bl 0x82574dd0
	ctx.lr = 0x82522674;
	sub_82574DD0(ctx, base);
	// addi r5,r1,164
	ctx.r5.s64 = ctx.r1.s64 + 164;
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// lfs f1,196(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82574dd0
	ctx.lr = 0x82522684;
	sub_82574DD0(ctx, base);
	// addi r5,r1,180
	ctx.r5.s64 = ctx.r1.s64 + 180;
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// lfs f1,200(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82574dd0
	ctx.lr = 0x82522694;
	sub_82574DD0(ctx, base);
	// lfs f11,172(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f10.f64 = double(temp.f32);
	// lis r29,-32254
	ctx.r29.s64 = -2113798144;
	// lfs f12,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f6,f11,f10
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// lfs f13,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,180
	ctx.r11.s64 = ctx.r1.s64 + 180;
	// lfs f0,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r29,-2340
	ctx.r10.s64 = ctx.r29.s64 + -2340;
	// lfs f9,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f7,f0,f13
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f6,180(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// fmuls f8,f12,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fmuls f6,f11,f9
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// fmuls f5,f12,f0
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// addi r7,r1,164
	ctx.r7.s64 = ctx.r1.s64 + 164;
	// addi r6,r1,172
	ctx.r6.s64 = ctx.r1.s64 + 172;
	// addi r5,r1,172
	ctx.r5.s64 = ctx.r1.s64 + 172;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// fmadds f4,f7,f11,f8
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f8.f64));
	// stfs f4,176(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fmuls f8,f8,f13
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmsubs f5,f6,f13,f5
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f13.f64 - ctx.f5.f64));
	// stfs f5,172(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fmuls f5,f12,f10
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// lvlx128 v126,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// fmsubs f12,f7,f12,f6
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 - ctx.f6.f64));
	// stfs f12,164(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f5,160(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fmuls f12,f9,f10
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// lvlx v0,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// stfs f12,160(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fmuls f12,f0,f10
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// lvlx v10,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// fmadds f0,f11,f0,f8
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f8.f64));
	// lvlx v9,0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r8,r1,164
	ctx.r8.s64 = ctx.r1.s64 + 164;
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lvlx v8,0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v10,v126,4,3
	_mm_store_ps(ctx.v10.f32, _mm_blend_ps(_mm_load_ps(ctx.v10.f32), _mm_permute_ps(_mm_load_ps(ctx.v126.f32), 57), 4));
	// lvlx v13,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vpermwi128 v7,v127,234
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), 0x15));
	// lvlx v12,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vpermwi128 v5,v127,174
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), 0x51));
	// lvlx v11,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v12,v13,4,3
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 57), 4));
	// vrlimi128 v11,v0,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// stfs f13,160(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f12,164(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// vrlimi128 v9,v126,4,3
	_mm_store_ps(ctx.v9.f32, _mm_blend_ps(_mm_load_ps(ctx.v9.f32), _mm_permute_ps(_mm_load_ps(ctx.v126.f32), 57), 4));
	// lvlx v13,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor v4,v12,v12
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_load_si128((__m128i*)ctx.v12.u8));
	// lvlx v6,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v6,v13,4,3
	_mm_store_ps(ctx.v6.f32, _mm_blend_ps(_mm_load_ps(ctx.v6.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 57), 4));
	// vrlimi128 v8,v126,4,3
	_mm_store_ps(ctx.v8.f32, _mm_blend_ps(_mm_load_ps(ctx.v8.f32), _mm_permute_ps(_mm_load_ps(ctx.v126.f32), 57), 4));
	// vmrghw v1,v7,v5
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v5.u32), _mm_load_si128((__m128i*)ctx.v7.u32)));
	// vor v3,v11,v11
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// addi r11,r1,336
	ctx.r11.s64 = ctx.r1.s64 + 336;
	// vrlimi128 v6,v9,3,2
	_mm_store_ps(ctx.v6.f32, _mm_blend_ps(_mm_load_ps(ctx.v6.f32), _mm_permute_ps(_mm_load_ps(ctx.v9.f32), 78), 3));
	// addi r9,r1,352
	ctx.r9.s64 = ctx.r1.s64 + 352;
	// vrlimi128 v4,v10,3,2
	_mm_store_ps(ctx.v4.f32, _mm_blend_ps(_mm_load_ps(ctx.v4.f32), _mm_permute_ps(_mm_load_ps(ctx.v10.f32), 78), 3));
	// vmrglw v10,v7,v5
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v5.u32), _mm_load_si128((__m128i*)ctx.v7.u32)));
	// addi r7,r1,320
	ctx.r7.s64 = ctx.r1.s64 + 320;
	// vpermwi128 v2,v127,186
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), 0x45));
	// vrlimi128 v3,v8,3,2
	_mm_store_ps(ctx.v3.f32, _mm_blend_ps(_mm_load_ps(ctx.v3.f32), _mm_permute_ps(_mm_load_ps(ctx.v8.f32), 78), 3));
	// addi r6,r1,368
	ctx.r6.s64 = ctx.r1.s64 + 368;
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,368
	ctx.r11.s64 = ctx.r1.s64 + 368;
	// vmrghw v7,v4,v6
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v6.u32), _mm_load_si128((__m128i*)ctx.v4.u32)));
	// lvx128 v12,r0,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmrglw v6,v4,v6
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v6.u32), _mm_load_si128((__m128i*)ctx.v4.u32)));
	// addi r10,r1,320
	ctx.r10.s64 = ctx.r1.s64 + 320;
	// vmrghw128 v9,v3,v76
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v76.u32), _mm_load_si128((__m128i*)ctx.v3.u32)));
	// lvx128 v0,r0,r7
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vmrglw128 v8,v3,v76
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v76.u32), _mm_load_si128((__m128i*)ctx.v3.u32)));
	// lvx128 v11,r0,r6
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// addi r9,r1,336
	ctx.r9.s64 = ctx.r1.s64 + 336;
	// vmrglw v5,v7,v9
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), _mm_load_si128((__m128i*)ctx.v7.u32)));
	// vmrglw v4,v6,v8
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), _mm_load_si128((__m128i*)ctx.v6.u32)));
	// vmrghw v9,v7,v9
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), _mm_load_si128((__m128i*)ctx.v7.u32)));
	// vmrghw v8,v6,v8
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), _mm_load_si128((__m128i*)ctx.v6.u32)));
	// vmsum4fp128 v7,v0,v5
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v7.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v5.f32), 0xFF));
	// vmsum4fp128 v6,v0,v4
	_mm_store_ps(ctx.v6.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v4.f32), 0xFF));
	// vmsum4fp128 v30,v13,v5
	_mm_store_ps(ctx.v30.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v5.f32), 0xFF));
	// vmsum4fp128 v31,v13,v4
	_mm_store_ps(ctx.v31.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v4.f32), 0xFF));
	// vmsum4fp128 v28,v12,v4
	_mm_store_ps(ctx.v28.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v4.f32), 0xFF));
	// vmsum4fp128 v27,v12,v5
	_mm_store_ps(ctx.v27.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v5.f32), 0xFF));
	// vmsum4fp128 v3,v0,v9
	_mm_store_ps(ctx.v3.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v9.f32), 0xFF));
	// vmsum4fp128 v29,v13,v8
	_mm_store_ps(ctx.v29.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v8.f32), 0xFF));
	// vmsum4fp128 v5,v11,v5
	_mm_store_ps(ctx.v5.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v5.f32), 0xFF));
	// vmsum4fp128 v4,v11,v4
	_mm_store_ps(ctx.v4.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v4.f32), 0xFF));
	// vmsum4fp128 v0,v0,v8
	_mm_store_ps(ctx.v0.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v8.f32), 0xFF));
	// vmsum4fp128 v13,v13,v9
	_mm_store_ps(ctx.v13.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v9.f32), 0xFF));
	// vmsum4fp128 v26,v12,v8
	_mm_store_ps(ctx.v26.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v8.f32), 0xFF));
	// vmsum4fp128 v8,v11,v8
	_mm_store_ps(ctx.v8.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v8.f32), 0xFF));
	// vmsum4fp128 v12,v12,v9
	_mm_store_ps(ctx.v12.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v9.f32), 0xFF));
	// vmsum4fp128 v11,v11,v9
	_mm_store_ps(ctx.v11.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v9.f32), 0xFF));
	// vmrghw v9,v7,v6
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v6.u32), _mm_load_si128((__m128i*)ctx.v7.u32)));
	// vmrghw v6,v30,v31
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v31.u32), _mm_load_si128((__m128i*)ctx.v30.u32)));
	// vmrghw v7,v5,v4
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v4.u32), _mm_load_si128((__m128i*)ctx.v5.u32)));
	// vmrghw v0,v3,v0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v3.u32)));
	// vmrghw v13,v13,v29
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v29.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// vmrghw v5,v27,v28
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v28.u32), _mm_load_si128((__m128i*)ctx.v27.u32)));
	// vmrghw v11,v11,v8
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), _mm_load_si128((__m128i*)ctx.v11.u32)));
	// addi r8,r1,352
	ctx.r8.s64 = ctx.r1.s64 + 352;
	// vmrghw v12,v12,v26
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v26.u32), _mm_load_si128((__m128i*)ctx.v12.u32)));
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// vmrghw v0,v0,v9
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// addi r7,r1,320
	ctx.r7.s64 = ctx.r1.s64 + 320;
	// vmrghw v13,v13,v6
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v6.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// addi r6,r1,336
	ctx.r6.s64 = ctx.r1.s64 + 336;
	// vmrghw v11,v11,v7
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v7.u32), _mm_load_si128((__m128i*)ctx.v11.u32)));
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// vmrghw v12,v12,v5
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v5.u32), _mm_load_si128((__m128i*)ctx.v12.u32)));
	// li r4,0
	ctx.r4.s64 = 0;
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v9,r0,r31
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// vrlimi128 v127,v9,14,0
	_mm_store_ps(ctx.v127.f32, _mm_blend_ps(_mm_load_ps(ctx.v127.f32), _mm_permute_ps(_mm_load_ps(ctx.v9.f32), 228), 14));
	// vmrglw128 v8,v2,v127
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), _mm_load_si128((__m128i*)ctx.v2.u32)));
	// vmrghw128 v9,v2,v127
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), _mm_load_si128((__m128i*)ctx.v2.u32)));
	// vmrghw v6,v10,v8
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), _mm_load_si128((__m128i*)ctx.v10.u32)));
	// vmrglw v7,v1,v9
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), _mm_load_si128((__m128i*)ctx.v1.u32)));
	// vmrglw v10,v10,v8
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), _mm_load_si128((__m128i*)ctx.v10.u32)));
	// vmrghw v9,v1,v9
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), _mm_load_si128((__m128i*)ctx.v1.u32)));
	// vmsum4fp128 v5,v0,v6
	_mm_store_ps(ctx.v5.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v6.f32), 0xFF));
	// vmsum4fp128 v8,v0,v7
	_mm_store_ps(ctx.v8.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v7.f32), 0xFF));
	// vmsum4fp128 v4,v0,v10
	_mm_store_ps(ctx.v4.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32), 0xFF));
	// vmsum4fp128 v0,v0,v9
	_mm_store_ps(ctx.v0.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v9.f32), 0xFF));
	// vmsum4fp128 v3,v13,v10
	_mm_store_ps(ctx.v3.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v10.f32), 0xFF));
	// vmsum4fp128 v31,v12,v10
	_mm_store_ps(ctx.v31.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v10.f32), 0xFF));
	// vmsum4fp128 v2,v13,v7
	_mm_store_ps(ctx.v2.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v7.f32), 0xFF));
	// vmsum4fp128 v30,v12,v7
	_mm_store_ps(ctx.v30.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v7.f32), 0xFF));
	// vmsum4fp128 v1,v13,v6
	_mm_store_ps(ctx.v1.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v6.f32), 0xFF));
	// vmsum4fp128 v29,v12,v6
	_mm_store_ps(ctx.v29.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v6.f32), 0xFF));
	// vmsum4fp128 v12,v12,v9
	_mm_store_ps(ctx.v12.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v9.f32), 0xFF));
	// vmsum4fp128 v10,v11,v10
	_mm_store_ps(ctx.v10.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v10.f32), 0xFF));
	// vmsum4fp128 v7,v11,v7
	_mm_store_ps(ctx.v7.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v7.f32), 0xFF));
	// vmsum4fp128 v6,v11,v6
	_mm_store_ps(ctx.v6.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v6.f32), 0xFF));
	// vmsum4fp128 v13,v13,v9
	_mm_store_ps(ctx.v13.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v9.f32), 0xFF));
	// vmsum4fp128 v11,v11,v9
	_mm_store_ps(ctx.v11.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v9.f32), 0xFF));
	// vmrghw v9,v8,v4
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v4.u32), _mm_load_si128((__m128i*)ctx.v8.u32)));
	// vmrghw v0,v0,v5
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v5.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// vmrghw v8,v2,v3
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v3.u32), _mm_load_si128((__m128i*)ctx.v2.u32)));
	// vmrghw v0,v0,v9
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// vmrghw v9,v30,v31
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v31.u32), _mm_load_si128((__m128i*)ctx.v30.u32)));
	// vmrghw v12,v12,v29
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v29.u32), _mm_load_si128((__m128i*)ctx.v12.u32)));
	// vmrghw v10,v7,v10
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), _mm_load_si128((__m128i*)ctx.v7.u32)));
	// vmrghw v13,v13,v1
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v1.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// stvx128 v0,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw v11,v11,v6
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v6.u32), _mm_load_si128((__m128i*)ctx.v11.u32)));
	// vmrghw v0,v12,v9
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), _mm_load_si128((__m128i*)ctx.v12.u32)));
	// vmrghw v13,v13,v8
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// vmrghw v12,v11,v10
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), _mm_load_si128((__m128i*)ctx.v11.u32)));
	// stvx128 v0,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r3,424(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 424);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82522934;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lfs f31,-2340(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -2340);
	ctx.f31.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// addi r22,r11,-24756
	ctx.r22.s64 = ctx.r11.s64 + -24756;
	// lfs f30,-24756(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24756);
	ctx.f30.f64 = double(temp.f32);
	// lfs f1,7408(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7408);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lwz r31,424(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 424);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82579fb8
	ctx.lr = 0x82522960;
	sub_82579FB8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// bl 0x82579fb8
	ctx.lr = 0x82522968;
	sub_82579FB8(ctx, base);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82522988;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825229d8
	if (ctx.cr6.eq) goto loc_825229D8;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwz r3,204(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	// bl 0x8259b9c8
	ctx.lr = 0x825229A0;
	sub_8259B9C8(ctx, base);
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// addi r11,r24,32
	ctx.r11.s64 = ctx.r24.s64 + 32;
	// addi r8,r11,24
	ctx.r8.s64 = ctx.r11.s64 + 24;
	// addi r7,r11,20
	ctx.r7.s64 = ctx.r11.s64 + 20;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// ld r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// lfs f3,200(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f3.f64 = double(temp.f32);
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// lfs f2,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f1.f64 = double(temp.f32);
	// std r11,64(r24)
	PPC_STORE_U64(ctx.r24.u32 + 64, ctx.r11.u64);
	// std r10,72(r24)
	PPC_STORE_U64(ctx.r24.u32 + 72, ctx.r10.u64);
	// bl 0x82581720
	ctx.lr = 0x825229D8;
	sub_82581720(ctx, base);
loc_825229D8:
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// lwz r10,68(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 68);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r26,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r26.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r9,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r9.u32);
	// li r9,6
	ctx.r9.s64 = 6;
	// li r23,-1
	ctx.r23.s64 = -1;
	// stvx128 v75,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v75.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r9,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r9.u32);
	// addi r9,r1,168
	ctx.r9.s64 = ctx.r1.s64 + 168;
	// stw r8,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r8.u32);
	// stw r10,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r10.u32);
	// stfs f31,276(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// stfs f31,292(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// stw r28,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r28.u32);
	// stw r28,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r28.u32);
	// addi r11,r1,171
	ctx.r11.s64 = ctx.r1.s64 + 171;
	// stw r23,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r23.u32);
	// addi r10,r1,168
	ctx.r10.s64 = ctx.r1.s64 + 168;
	// lvsl v12,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lis r9,2
	ctx.r9.s64 = 131072;
	// stw r28,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r28.u32);
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// stw r28,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r28.u32);
	// ori r27,r9,2048
	ctx.r27.u64 = ctx.r9.u64 | 2048;
	// stw r28,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r28.u32);
	// vsldoi v7,v12,v12,4
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v12.u8), 12));
	// stw r28,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r28.u32);
	// lis r7,-32227
	ctx.r7.s64 = -2112028672;
	// lwz r9,220(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// addi r8,r8,3008
	ctx.r8.s64 = ctx.r8.s64 + 3008;
	// stw r9,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r9.u32);
	// addi r7,r7,2992
	ctx.r7.s64 = ctx.r7.s64 + 2992;
	// lwz r9,208(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// lvx128 v0,r0,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// stw r9,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r9.u32);
	// lvx128 v13,r0,r7
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r0,r11
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lwz r11,216(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 216);
	// lvx128 v11,r0,r10
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// li r29,1
	ctx.r29.s64 = 1;
	// lis r31,-31964
	ctx.r31.s64 = -2094792704;
	// vperm v12,v11,v12,v7
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// vupkd3d128 v12,v12,0
	vTemp.u32[0] = ctx.v12.u8[3] | 0x3F800000;
	vTemp.u32[1] = ctx.v12.u8[0] | 0x3F800000;
	vTemp.u32[2] = ctx.v12.u8[1] | 0x3F800000;
	vTemp.u32[3] = ctx.v12.u8[2] | 0x3F800000;
	ctx.v12 = vTemp;
	// vmaddfp v0,v0,v12,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// vpermwi128 v127,v0,198
	_mm_store_si128((__m128i*)ctx.v127.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x39));
	// beq cr6,0x82522b58
	if (ctx.cr6.eq) goto loc_82522B58;
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stw r29,12312(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12312, ctx.r29.u32);
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r8,12832(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12832);
	// subfic r8,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r8.s64;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r8,r29
	ctx.r10.u64 = ctx.r8.u64 & ctx.r29.u64;
	// rlwimi r10,r11,0,0,30
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFFFFE) | (ctx.r10.u64 & 0xFFFFFFFF00000001);
	// stw r10,10548(r9)
	PPC_STORE_U32(ctx.r9.u32 + 10548, ctx.r10.u32);
	// ld r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 16);
	// or r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 | ctx.r27.u64;
	// std r11,16(r9)
	PPC_STORE_U64(ctx.r9.u32 + 16, ctx.r11.u64);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r9,10548(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// ori r9,r9,1792
	ctx.r9.u64 = ctx.r9.u64 | 1792;
	// stw r9,10548(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10548, ctx.r9.u32);
	// ld r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r9,10548(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// rlwimi r9,r29,15,15,17
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r29.u32, 15) & 0x1C000) | (ctx.r9.u64 & 0xFFFFFFFFFFFE3FFF);
	// stw r9,10548(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10548, ctx.r9.u32);
	// ld r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stb r29,10499(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10499, ctx.r29.u8);
	// ld r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stb r29,10498(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10498, ctx.r29.u8);
	// ld r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stb r29,10497(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10497, ctx.r29.u8);
	// ld r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
loc_82522B58:
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stvx128 v127,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f30,276(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// bl 0x82581928
	ctx.lr = 0x82522B74;
	sub_82581928(ctx, base);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// lfs f0,208(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// li r12,1
	ctx.r12.s64 = 1;
	// lfs f13,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f12.f64 = double(temp.f32);
	// rldicr r12,r12,51,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 51) & 0xFFFFFFFFFFFFFFFF;
	// lfs f11,220(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,6832(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 6832, temp.u32);
	// stfs f13,6836(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 6836, temp.u32);
	// stfs f12,6840(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 6840, temp.u32);
	// stfs f11,6844(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 6844, temp.u32);
	// ld r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82522bd4
	if (ctx.cr6.eq) goto loc_82522BD4;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x8286de68
	ctx.lr = 0x82522BCC;
	sub_8286DE68(ctx, base);
	// lwz r5,224(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// b 0x82522be0
	goto loc_82522BE0;
loc_82522BD4:
	// lwz r3,424(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 424);
	// bl 0x825bcfd8
	ctx.lr = 0x82522BDC;
	sub_825BCFD8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_82522BE0:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82522c38
	if (ctx.cr6.eq) goto loc_82522C38;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// li r4,15
	ctx.r4.s64 = 15;
	// bl 0x826631f0
	ctx.lr = 0x82522BF8;
	sub_826631F0(ctx, base);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r9,1512(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1512);
	// rlwimi r9,r29,11,19,21
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r29.u32, 11) & 0x1C00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFE3FF);
	// stw r9,1512(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1512, ctx.r9.u32);
	// ld r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// oris r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 65536;
	// std r11,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r11.u64);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r9,1512(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1512);
	// rlwimi r9,r29,14,16,18
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r29.u32, 14) & 0xE000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF1FFF);
	// stw r9,1512(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1512, ctx.r9.u32);
	// ld r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// oris r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 65536;
	// std r11,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r11.u64);
loc_82522C38:
	// lwz r3,428(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 428);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// addi r20,r11,31552
	ctx.r20.s64 = ctx.r11.s64 + 31552;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82522C6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,6
	ctx.r9.s64 = 6;
	// lwz r6,68(r21)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r21.u32 + 68);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x825814d0
	ctx.lr = 0x82522C8C;
	sub_825814D0(ctx, base);
	// lwz r10,220(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r10.u32);
	// stvx128 v127,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f30,276(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// bl 0x82581928
	ctx.lr = 0x82522CAC;
	sub_82581928(ctx, base);
	// lwz r3,428(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 428);
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82522CD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,216(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 216);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82522dc0
	if (ctx.cr6.eq) goto loc_82522DC0;
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// vor128 v0,v126,v126
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v126.u8));
	// vor128 v13,v126,v126
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v126.u8));
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// vrlimi128 v0,v126,4,3
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v126.f32), 57), 4));
	// lwz r8,10548(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// rldicr r12,r12,63,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// rlwimi r8,r29,9,21,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r29.u32, 9) & 0x700) | (ctx.r8.u64 & 0xFFFFFFFFFFFFF8FF);
	// stw r8,10548(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10548, ctx.r8.u32);
	// ld r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r9)
	PPC_STORE_U64(ctx.r9.u32 + 16, ctx.r11.u64);
	// lvlx v12,0,r22
	temp.u32 = ctx.r22.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// vrlimi128 v13,v12,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// vrlimi128 v0,v13,3,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 3));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,208(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6016(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 6016, temp.u32);
	// lfs f0,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6020(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 6020, temp.u32);
	// lfs f0,216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,220(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,6024(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 6024, temp.u32);
	// stfs f13,6028(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 6028, temp.u32);
	// ld r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// lwz r4,-152(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + -152);
	// bl 0x82668b38
	ctx.lr = 0x82522D68;
	sub_82668B38(ctx, base);
	// lwz r4,8(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// bl 0x82668790
	ctx.lr = 0x82522D74;
	sub_82668790(ctx, base);
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// bl 0x82586a98
	ctx.lr = 0x82522D7C;
	sub_82586A98(ctx, base);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r28,12312(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12312, ctx.r28.u32);
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,10548(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// or r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 | ctx.r27.u64;
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r9,10548(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// ori r9,r9,1792
	ctx.r9.u64 = ctx.r9.u64 | 1792;
	// stw r9,10548(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10548, ctx.r9.u32);
	// ld r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
loc_82522DC0:
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r28,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r28.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r28.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82582220
	ctx.lr = 0x82522E08;
	sub_82582220(ctx, base);
loc_82522E08:
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// li r0,-160
	ctx.r0.s64 = -160;
	// lvx128 v126,r1,r0
	simd::store_shuffled(ctx.v126, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF), VectorMaskL));
	// li r0,-144
	ctx.r0.s64 = -144;
	// lvx128 v127,r1,r0
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF), VectorMaskL));
	// lfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x82fa76a8
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82522E28"))) PPC_WEAK_FUNC(sub_82522E28);
PPC_FUNC_IMPL(__imp__sub_82522E28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82522E30;
	__savegprlr_26(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,29152
	ctx.r11.s64 = ctx.r11.s64 + 29152;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r29,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82522e58
	if (!ctx.cr6.eq) goto loc_82522E58;
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// b 0x82522e70
	goto loc_82522E70;
loc_82522E58:
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r10,6380
	ctx.r10.s64 = ctx.r10.s64 + 6380;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
loc_82522E70:
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82518b28
	ctx.lr = 0x82522EA4;
	sub_82518B28(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r11,r11,9372
	ctx.r11.s64 = ctx.r11.s64 + 9372;
	// addi r10,r10,5228
	ctx.r10.s64 = ctx.r10.s64 + 5228;
	// lis r8,-32174
	ctx.r8.s64 = -2108555264;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r7,-32117
	ctx.r7.s64 = -2104819712;
	// lfs f0,-2340(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// lis r6,-32117
	ctx.r6.s64 = -2104819712;
	// stw r10,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r10.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stfs f0,388(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 388, temp.u32);
	// addi r9,r8,13416
	ctx.r9.s64 = ctx.r8.s64 + 13416;
	// stw r29,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r29.u32);
	// addi r10,r7,9280
	ctx.r10.s64 = ctx.r7.s64 + 9280;
	// stw r29,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r29.u32);
	// addi r8,r6,9280
	ctx.r8.s64 = ctx.r6.s64 + 9280;
	// stw r11,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r11.u32);
	// stw r11,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r11.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// stw r11,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r11.u32);
	// addi r30,r31,344
	ctx.r30.s64 = ctx.r31.s64 + 344;
	// stw r11,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r11.u32);
	// stw r29,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r29.u32);
	// stw r27,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r27.u32);
	// stw r31,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r31.u32);
	// stw r9,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r9.u32);
	// stw r10,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r10.u32);
	// stw r8,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r8.u32);
	// bl 0x82519160
	ctx.lr = 0x82522F28;
	sub_82519160(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x826a41d0
	ctx.lr = 0x82522F34;
	sub_826A41D0(ctx, base);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82522f44
	if (ctx.cr6.eq) goto loc_82522F44;
	// bl 0x82241d18
	ctx.lr = 0x82522F44;
	sub_82241D18(ctx, base);
loc_82522F44:
	// stw r30,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r30.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82519160
	ctx.lr = 0x82522F54;
	sub_82519160(ctx, base);
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,256
	ctx.r4.s64 = ctx.r11.s64 + 256;
	// bl 0x826a80e0
	ctx.lr = 0x82522F68;
	sub_826A80E0(ctx, base);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82522f78
	if (ctx.cr6.eq) goto loc_82522F78;
	// bl 0x82241d18
	ctx.lr = 0x82522F78;
	sub_82241D18(ctx, base);
loc_82522F78:
	// lis r26,-31957
	ctx.r26.s64 = -2094333952;
	// lwz r11,21068(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 21068);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82522f90
	if (!ctx.cr6.eq) goto loc_82522F90;
	// bl 0x822e58d0
	ctx.lr = 0x82522F8C;
	sub_822E58D0(ctx, base);
	// lwz r11,21068(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 21068);
loc_82522F90:
	// lwz r30,288(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r28,32(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// bl 0x82385da0
	ctx.lr = 0x82522FB4;
	sub_82385DA0(ctx, base);
	// stw r28,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r28.u32);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// lwz r28,32(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// bl 0x82385da0
	ctx.lr = 0x82522FD8;
	sub_82385DA0(ctx, base);
	// lwz r11,21068(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 21068);
	// stw r28,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82522ff0
	if (!ctx.cr6.eq) goto loc_82522FF0;
	// bl 0x822e58d0
	ctx.lr = 0x82522FEC;
	sub_822E58D0(ctx, base);
	// lwz r11,21068(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 21068);
loc_82522FF0:
	// lwz r30,240(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r30,32
	ctx.r10.s64 = ctx.r30.s64 + 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r9,36(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r8,40(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r7,44(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// ld r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// ld r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 24);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// bl 0x822e7f48
	ctx.lr = 0x8252302C;
	sub_822E7F48(ctx, base);
	// stw r3,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x822e8078
	ctx.lr = 0x82523040;
	sub_822E8078(ctx, base);
	// stw r3,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r3.u32);
	// bl 0x8226c3f0
	ctx.lr = 0x82523048;
	sub_8226C3F0(ctx, base);
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r27,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r27.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r29,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r29.u32);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// stw r11,96(r10)
	PPC_STORE_U32(ctx.r10.u32 + 96, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82524730
	ctx.lr = 0x82523080;
	sub_82524730(ctx, base);
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// stw r3,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r3.u32);
	// addi r11,r11,24448
	ctx.r11.s64 = ctx.r11.s64 + 24448;
	// lwz r11,236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252309c
	if (ctx.cr6.eq) goto loc_8252309C;
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_8252309C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x825230e0
	if (ctx.cr6.eq) goto loc_825230E0;
	// lwz r10,3408(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3408);
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825230e0
	if (ctx.cr6.eq) goto loc_825230E0;
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x825230e0
	if (!ctx.cr6.eq) goto loc_825230E0;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825230e0
	if (ctx.cr6.eq) goto loc_825230E0;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825230E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825230E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825230EC"))) PPC_WEAK_FUNC(sub_825230EC);
PPC_FUNC_IMPL(__imp__sub_825230EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825230F0"))) PPC_WEAK_FUNC(sub_825230F0);
PPC_FUNC_IMPL(__imp__sub_825230F0) {
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
	// bl 0x82523140
	ctx.lr = 0x82523110;
	sub_82523140(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82523120
	if (ctx.cr0.eq) goto loc_82523120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x82523120;
	sub_82691540(ctx, base);
loc_82523120:
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

__attribute__((alias("__imp__sub_8252313C"))) PPC_WEAK_FUNC(sub_8252313C);
PPC_FUNC_IMPL(__imp__sub_8252313C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82523140"))) PPC_WEAK_FUNC(sub_82523140);
PPC_FUNC_IMPL(__imp__sub_82523140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82523148;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r11,r11,24448
	ctx.r11.s64 = ctx.r11.s64 + 24448;
	// addi r10,r10,9372
	ctx.r10.s64 = ctx.r10.s64 + 9372;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252317c
	if (ctx.cr6.eq) goto loc_8252317C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82523180
	goto loc_82523180;
loc_8252317C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82523180:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825231c4
	if (ctx.cr6.eq) goto loc_825231C4;
	// lwz r10,3408(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3408);
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825231c4
	if (ctx.cr6.eq) goto loc_825231C4;
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x825231c4
	if (!ctx.cr6.eq) goto loc_825231C4;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825231c4
	if (ctx.cr6.eq) goto loc_825231C4;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825231C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825231C4:
	// lwz r3,368(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 368);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825231d8
	if (ctx.cr6.eq) goto loc_825231D8;
	// bl 0x82524840
	ctx.lr = 0x825231D4;
	sub_82524840(ctx, base);
	// stw r31,368(r30)
	PPC_STORE_U32(ctx.r30.u32 + 368, ctx.r31.u32);
loc_825231D8:
	// lwz r3,364(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825231f4
	if (ctx.cr6.eq) goto loc_825231F4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8253d820
	ctx.lr = 0x825231F0;
	sub_8253D820(ctx, base);
	// stw r31,364(r30)
	PPC_STORE_U32(ctx.r30.u32 + 364, ctx.r31.u32);
loc_825231F4:
	// lis r29,-31957
	ctx.r29.s64 = -2094333952;
	// lwz r6,21068(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 21068);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8252320c
	if (!ctx.cr6.eq) goto loc_8252320C;
	// bl 0x822e58d0
	ctx.lr = 0x82523208;
	sub_822E58D0(ctx, base);
	// lwz r6,21068(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 21068);
loc_8252320C:
	// lwz r4,372(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 372);
	// li r31,-1
	ctx.r31.s64 = -1;
	// lwz r3,288(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 288);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82523228
	if (ctx.cr6.eq) goto loc_82523228;
	// bl 0x822e89b8
	ctx.lr = 0x82523224;
	sub_822E89B8(ctx, base);
	// stw r31,372(r30)
	PPC_STORE_U32(ctx.r30.u32 + 372, ctx.r31.u32);
loc_82523228:
	// lwz r4,376(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 376);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x8252323c
	if (ctx.cr6.eq) goto loc_8252323C;
	// bl 0x822e8a40
	ctx.lr = 0x82523238;
	sub_822E8A40(ctx, base);
	// stw r31,376(r30)
	PPC_STORE_U32(ctx.r30.u32 + 376, ctx.r31.u32);
loc_8252323C:
	// lwz r4,380(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 380);
	// lwz r3,240(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 240);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82523254
	if (ctx.cr6.eq) goto loc_82523254;
	// bl 0x822e7fe0
	ctx.lr = 0x82523250;
	sub_822E7FE0(ctx, base);
	// stw r31,380(r30)
	PPC_STORE_U32(ctx.r30.u32 + 380, ctx.r31.u32);
loc_82523254:
	// lwz r4,384(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 384);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82523268
	if (ctx.cr6.eq) goto loc_82523268;
	// bl 0x822e8110
	ctx.lr = 0x82523264;
	sub_822E8110(ctx, base);
	// stw r31,384(r30)
	PPC_STORE_U32(ctx.r30.u32 + 384, ctx.r31.u32);
loc_82523268:
	// bl 0x8226c3f0
	ctx.lr = 0x8252326C;
	sub_8226C3F0(ctx, base);
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// bne 0x82523284
	if (!ctx.cr0.eq) goto loc_82523284;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
loc_82523284:
	// lwz r3,21068(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 21068);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82523298
	if (!ctx.cr6.eq) goto loc_82523298;
	// bl 0x822e58d0
	ctx.lr = 0x82523294;
	sub_822E58D0(ctx, base);
	// lwz r3,21068(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 21068);
loc_82523298:
	// bl 0x822e5ff8
	ctx.lr = 0x8252329C;
	sub_822E5FF8(ctx, base);
	// lwz r11,392(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 392);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82523314
	if (ctx.cr6.lt) goto loc_82523314;
	// beq cr6,0x82523308
	if (ctx.cr6.eq) goto loc_82523308;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x825232fc
	if (ctx.cr6.lt) goto loc_825232FC;
	// beq cr6,0x825232f0
	if (ctx.cr6.eq) goto loc_825232F0;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x825232e4
	if (ctx.cr6.lt) goto loc_825232E4;
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x825232d8
	if (ctx.cr6.eq) goto loc_825232D8;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-20
	ctx.r5.s64 = ctx.r11.s64 + -20;
	// b 0x82523324
	goto loc_82523324;
loc_825232D8:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r5,r11,9356
	ctx.r5.s64 = ctx.r11.s64 + 9356;
	// b 0x82523324
	goto loc_82523324;
loc_825232E4:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r5,r11,9348
	ctx.r5.s64 = ctx.r11.s64 + 9348;
	// b 0x8252331c
	goto loc_8252331C;
loc_825232F0:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r5,r11,9340
	ctx.r5.s64 = ctx.r11.s64 + 9340;
	// b 0x8252331c
	goto loc_8252331C;
loc_825232FC:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r5,r11,9328
	ctx.r5.s64 = ctx.r11.s64 + 9328;
	// b 0x8252331c
	goto loc_8252331C;
loc_82523308:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r5,r11,9312
	ctx.r5.s64 = ctx.r11.s64 + 9312;
	// b 0x8252331c
	goto loc_8252331C;
loc_82523314:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r5,r11,9304
	ctx.r5.s64 = ctx.r11.s64 + 9304;
loc_8252331C:
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
loc_82523324:
	// bl 0x82fa25c0
	ctx.lr = 0x82523328;
	sub_82FA25C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82518fd0
	ctx.lr = 0x82523330;
	sub_82518FD0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82523338"))) PPC_WEAK_FUNC(sub_82523338);
PPC_FUNC_IMPL(__imp__sub_82523338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82523340;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,400(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82523394
	if (ctx.cr6.eq) goto loc_82523394;
	// lis r30,-31957
	ctx.r30.s64 = -2094333952;
	// lwz r31,21068(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21068);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82523374
	if (!ctx.cr6.eq) goto loc_82523374;
	// bl 0x822e58d0
	ctx.lr = 0x82523370;
	sub_822E58D0(ctx, base);
	// lwz r31,21068(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21068);
loc_82523374:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// addi r11,r31,152
	ctx.r11.s64 = ctx.r31.s64 + 152;
	// bl 0x82513e28
	ctx.lr = 0x82523384;
	sub_82513E28(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// stw r10,400(r29)
	PPC_STORE_U32(ctx.r29.u32 + 400, ctx.r10.u32);
loc_82523394:
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lfs f0,388(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 388);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// stfs f0,388(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 388, temp.u32);
	// addi r11,r11,24448
	ctx.r11.s64 = ctx.r11.s64 + 24448;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825233c0
	if (ctx.cr6.eq) goto loc_825233C0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x825233c4
	goto loc_825233C4;
loc_825233C0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825233C4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82523424
	if (ctx.cr6.eq) goto loc_82523424;
	// lwz r11,3408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3408);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82523420
	if (!ctx.cr6.eq) goto loc_82523420;
	// lwz r31,20(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82523420
	if (ctx.cr6.eq) goto loc_82523420;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lwz r3,30428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30428);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x825233fc
	if (!ctx.cr6.eq) goto loc_825233FC;
	// bl 0x822599a0
	ctx.lr = 0x825233FC;
	sub_822599A0(ctx, base);
loc_825233FC:
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82523420
	if (!ctx.cr0.eq) goto loc_82523420;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// blt cr6,0x82523420
	if (ctx.cr6.lt) goto loc_82523420;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x82523424
	if (ctx.cr6.lt) goto loc_82523424;
loc_82523420:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82523424:
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82519230
	ctx.lr = 0x82523438;
	sub_82519230(ctx, base);
	// lwz r3,368(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 368);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252344c
	if (ctx.cr6.eq) goto loc_8252344C;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82524a90
	ctx.lr = 0x8252344C;
	sub_82524A90(ctx, base);
loc_8252344C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82519310
	ctx.lr = 0x82523458;
	sub_82519310(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82523464"))) PPC_WEAK_FUNC(sub_82523464);
PPC_FUNC_IMPL(__imp__sub_82523464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82523468"))) PPC_WEAK_FUNC(sub_82523468);
PPC_FUNC_IMPL(__imp__sub_82523468) {
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
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-7328(r1)
	ea = -7328 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r4,392(r3)
	PPC_STORE_U32(ctx.r3.u32 + 392, ctx.r4.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x82523500
	if (ctx.cr6.lt) goto loc_82523500;
	// beq cr6,0x825234f4
	if (ctx.cr6.eq) goto loc_825234F4;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// blt cr6,0x825234e8
	if (ctx.cr6.lt) goto loc_825234E8;
	// beq cr6,0x825234dc
	if (ctx.cr6.eq) goto loc_825234DC;
	// cmplwi cr6,r4,5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 5, ctx.xer);
	// blt cr6,0x825234d0
	if (ctx.cr6.lt) goto loc_825234D0;
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// beq cr6,0x825234c4
	if (ctx.cr6.eq) goto loc_825234C4;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-20
	ctx.r5.s64 = ctx.r11.s64 + -20;
	// b 0x82523510
	goto loc_82523510;
loc_825234C4:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r5,r11,9356
	ctx.r5.s64 = ctx.r11.s64 + 9356;
	// b 0x82523510
	goto loc_82523510;
loc_825234D0:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r5,r11,9348
	ctx.r5.s64 = ctx.r11.s64 + 9348;
	// b 0x82523508
	goto loc_82523508;
loc_825234DC:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r5,r11,9340
	ctx.r5.s64 = ctx.r11.s64 + 9340;
	// b 0x82523508
	goto loc_82523508;
loc_825234E8:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r5,r11,9328
	ctx.r5.s64 = ctx.r11.s64 + 9328;
	// b 0x82523508
	goto loc_82523508;
loc_825234F4:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r5,r11,9312
	ctx.r5.s64 = ctx.r11.s64 + 9312;
	// b 0x82523508
	goto loc_82523508;
loc_82523500:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r5,r11,9304
	ctx.r5.s64 = ctx.r11.s64 + 9304;
loc_82523508:
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_82523510:
	// bl 0x82fa25c0
	ctx.lr = 0x82523514;
	sub_82FA25C0(ctx, base);
	// bl 0x825143c8
	ctx.lr = 0x82523518;
	sub_825143C8(ctx, base);
	// lwz r11,396(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 396);
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,396(r30)
	PPC_STORE_U32(ctx.r30.u32 + 396, ctx.r11.u32);
	// blt cr6,0x82523710
	if (ctx.cr6.lt) goto loc_82523710;
	// beq cr6,0x825235ac
	if (ctx.cr6.eq) goto loc_825235AC;
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 3, ctx.xer);
	// blt cr6,0x8252357c
	if (ctx.cr6.lt) goto loc_8252357C;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// beq cr6,0x82523570
	if (ctx.cr6.eq) goto loc_82523570;
	// cmplwi cr6,r31,5
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 5, ctx.xer);
	// bne cr6,0x8252385c
	if (!ctx.cr6.eq) goto loc_8252385C;
	// bl 0x82514288
	ctx.lr = 0x8252354C;
	sub_82514288(ctx, base);
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r11,14456
	ctx.r5.s64 = ctx.r11.s64 + 14456;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x82a77830
	ctx.lr = 0x8252356C;
	sub_82A77830(ctx, base);
	// b 0x8252385c
	goto loc_8252385C;
loc_82523570:
	// bl 0x82514288
	ctx.lr = 0x82523574;
	sub_82514288(ctx, base);
	// bl 0x82a74d50
	ctx.lr = 0x82523578;
	sub_82A74D50(ctx, base);
	// b 0x8252385c
	goto loc_8252385C;
loc_8252357C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825191a8
	ctx.lr = 0x82523588;
	sub_825191A8(ctx, base);
	// lis r31,-31957
	ctx.r31.s64 = -2094333952;
	// lwz r11,21068(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21068);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825235a0
	if (!ctx.cr6.eq) goto loc_825235A0;
	// bl 0x822e58d0
	ctx.lr = 0x8252359C;
	sub_822E58D0(ctx, base);
	// lwz r11,21068(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21068);
loc_825235A0:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r10.u32);
	// b 0x8252385c
	goto loc_8252385C;
loc_825235AC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825191a8
	ctx.lr = 0x825235B8;
	sub_825191A8(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r5,510
	ctx.r5.s64 = 510;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,130
	ctx.r3.s64 = ctx.r1.s64 + 130;
	// lhz r31,31944(r11)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + 31944);
	// sth r31,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, ctx.r31.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x825235D4;
	sub_82FA7CF0(ctx, base);
	// li r5,2046
	ctx.r5.s64 = 2046;
	// sth r31,3200(r1)
	PPC_STORE_U16(ctx.r1.u32 + 3200, ctx.r31.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,3202
	ctx.r3.s64 = ctx.r1.s64 + 3202;
	// bl 0x82fa7cf0
	ctx.lr = 0x825235E8;
	sub_82FA7CF0(ctx, base);
	// li r5,510
	ctx.r5.s64 = 510;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r31,2688(r1)
	PPC_STORE_U16(ctx.r1.u32 + 2688, ctx.r31.u16);
	// addi r3,r1,2690
	ctx.r3.s64 = ctx.r1.s64 + 2690;
	// bl 0x82fa7cf0
	ctx.lr = 0x825235FC;
	sub_82FA7CF0(ctx, base);
	// li r5,510
	ctx.r5.s64 = 510;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r31,2176(r1)
	PPC_STORE_U16(ctx.r1.u32 + 2176, ctx.r31.u16);
	// addi r3,r1,2178
	ctx.r3.s64 = ctx.r1.s64 + 2178;
	// bl 0x82fa7cf0
	ctx.lr = 0x82523610;
	sub_82FA7CF0(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r11,21092(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21092);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r31,r11,21068
	ctx.r31.s64 = ctx.r11.s64 + 21068;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// beq cr6,0x82523654
	if (ctx.cr6.eq) goto loc_82523654;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r4,r10,9188
	ctx.r4.s64 = ctx.r10.s64 + 9188;
	// bl 0x8259c8e0
	ctx.lr = 0x82523648;
	sub_8259C8E0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,9208
	ctx.r4.s64 = ctx.r11.s64 + 9208;
	// b 0x82523668
	goto loc_82523668;
loc_82523654:
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r4,r10,9236
	ctx.r4.s64 = ctx.r10.s64 + 9236;
	// bl 0x8259c8e0
	ctx.lr = 0x82523660;
	sub_8259C8E0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,9252
	ctx.r4.s64 = ctx.r11.s64 + 9252;
loc_82523668:
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r1,3200
	ctx.r5.s64 = ctx.r1.s64 + 3200;
	// bl 0x8259c8e0
	ctx.lr = 0x82523680;
	sub_8259C8E0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r11,9152
	ctx.r4.s64 = ctx.r11.s64 + 9152;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,2688
	ctx.r5.s64 = ctx.r1.s64 + 2688;
	// bl 0x8259c8e0
	ctx.lr = 0x825236A0;
	sub_8259C8E0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r11,9172
	ctx.r4.s64 = ctx.r11.s64 + 9172;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,2176
	ctx.r5.s64 = ctx.r1.s64 + 2176;
	// bl 0x8259c8e0
	ctx.lr = 0x825236C0;
	sub_8259C8E0(ctx, base);
	// li r3,1076
	ctx.r3.s64 = 1076;
	// bl 0x82691500
	ctx.lr = 0x825236C8;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82523850
	if (ctx.cr0.eq) goto loc_82523850;
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r8,-32174
	ctx.r8.s64 = -2108555264;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r11,r11,5228
	ctx.r11.s64 = ctx.r11.s64 + 5228;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// addi r8,r8,15096
	ctx.r8.s64 = ctx.r8.s64 + 15096;
	// addi r7,r1,2176
	ctx.r7.s64 = ctx.r1.s64 + 2176;
	// addi r6,r1,2688
	ctx.r6.s64 = ctx.r1.s64 + 2688;
	// addi r5,r1,3200
	ctx.r5.s64 = ctx.r1.s64 + 3200;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253d420
	ctx.lr = 0x8252370C;
	sub_8253D420(ctx, base);
	// b 0x82523848
	goto loc_82523848;
loc_82523710:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825191a8
	ctx.lr = 0x8252371C;
	sub_825191A8(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r5,510
	ctx.r5.s64 = 510;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,1666
	ctx.r3.s64 = ctx.r1.s64 + 1666;
	// lhz r31,31944(r11)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + 31944);
	// sth r31,1664(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1664, ctx.r31.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x82523738;
	sub_82FA7CF0(ctx, base);
	// li r5,2046
	ctx.r5.s64 = 2046;
	// sth r31,5248(r1)
	PPC_STORE_U16(ctx.r1.u32 + 5248, ctx.r31.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,5250
	ctx.r3.s64 = ctx.r1.s64 + 5250;
	// bl 0x82fa7cf0
	ctx.lr = 0x8252374C;
	sub_82FA7CF0(ctx, base);
	// li r5,510
	ctx.r5.s64 = 510;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r31,1152(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1152, ctx.r31.u16);
	// addi r3,r1,1154
	ctx.r3.s64 = ctx.r1.s64 + 1154;
	// bl 0x82fa7cf0
	ctx.lr = 0x82523760;
	sub_82FA7CF0(ctx, base);
	// li r5,510
	ctx.r5.s64 = 510;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r31,640(r1)
	PPC_STORE_U16(ctx.r1.u32 + 640, ctx.r31.u16);
	// addi r3,r1,642
	ctx.r3.s64 = ctx.r1.s64 + 642;
	// bl 0x82fa7cf0
	ctx.lr = 0x82523774;
	sub_82FA7CF0(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r31,r11,21068
	ctx.r31.s64 = ctx.r11.s64 + 21068;
	// addi r4,r10,-10764
	ctx.r4.s64 = ctx.r10.s64 + -10764;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,1664
	ctx.r5.s64 = ctx.r1.s64 + 1664;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8259c8e0
	ctx.lr = 0x8252379C;
	sub_8259C8E0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r11,9132
	ctx.r4.s64 = ctx.r11.s64 + 9132;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r1,5248
	ctx.r5.s64 = ctx.r1.s64 + 5248;
	// bl 0x8259c8e0
	ctx.lr = 0x825237BC;
	sub_8259C8E0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r11,9152
	ctx.r4.s64 = ctx.r11.s64 + 9152;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,1152
	ctx.r5.s64 = ctx.r1.s64 + 1152;
	// bl 0x8259c8e0
	ctx.lr = 0x825237DC;
	sub_8259C8E0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r11,9172
	ctx.r4.s64 = ctx.r11.s64 + 9172;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,640
	ctx.r5.s64 = ctx.r1.s64 + 640;
	// bl 0x8259c8e0
	ctx.lr = 0x825237FC;
	sub_8259C8E0(ctx, base);
	// li r3,1076
	ctx.r3.s64 = 1076;
	// bl 0x82691500
	ctx.lr = 0x82523804;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82523850
	if (ctx.cr0.eq) goto loc_82523850;
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r8,-32174
	ctx.r8.s64 = -2108555264;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r11,r11,5228
	ctx.r11.s64 = ctx.r11.s64 + 5228;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// addi r8,r8,14576
	ctx.r8.s64 = ctx.r8.s64 + 14576;
	// addi r7,r1,640
	ctx.r7.s64 = ctx.r1.s64 + 640;
	// addi r6,r1,1152
	ctx.r6.s64 = ctx.r1.s64 + 1152;
	// addi r5,r1,5248
	ctx.r5.s64 = ctx.r1.s64 + 5248;
	// addi r4,r1,1664
	ctx.r4.s64 = ctx.r1.s64 + 1664;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253d420
	ctx.lr = 0x82523848;
	sub_8253D420(ctx, base);
loc_82523848:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82523854
	goto loc_82523854;
loc_82523850:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82523854:
	// stw r3,364(r30)
	PPC_STORE_U32(ctx.r30.u32 + 364, ctx.r3.u32);
	// bl 0x8253daa0
	ctx.lr = 0x8252385C;
	sub_8253DAA0(ctx, base);
loc_8252385C:
	// addi r1,r1,7328
	ctx.r1.s64 = ctx.r1.s64 + 7328;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82523874"))) PPC_WEAK_FUNC(sub_82523874);
PPC_FUNC_IMPL(__imp__sub_82523874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82523878"))) PPC_WEAK_FUNC(sub_82523878);
PPC_FUNC_IMPL(__imp__sub_82523878) {
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
	// bl 0x82513ff0
	ctx.lr = 0x82523890;
	sub_82513FF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825238ac
	if (!ctx.cr0.eq) goto loc_825238AC;
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a74d68
	ctx.lr = 0x825238A4;
	sub_82A74D68(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x825238dc
	if (!ctx.cr0.eq) goto loc_825238DC;
loc_825238AC:
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r31,r11,21296
	ctx.r31.s64 = ctx.r11.s64 + 21296;
loc_825238B4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x825238cc
	if (ctx.cr6.eq) goto loc_825238CC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825238d8
	if (ctx.cr6.eq) goto loc_825238D8;
loc_825238CC:
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82a77720
	ctx.lr = 0x825238D4;
	sub_82A77720(ctx, base);
	// b 0x825238b4
	goto loc_825238B4;
loc_825238D8:
	// bl 0x82a013d0
	ctx.lr = 0x825238DC;
	sub_82A013D0(ctx, base);
loc_825238DC:
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

__attribute__((alias("__imp__sub_825238F0"))) PPC_WEAK_FUNC(sub_825238F0);
PPC_FUNC_IMPL(__imp__sub_825238F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x825238F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82523920
	if (!ctx.cr6.eq) goto loc_82523920;
	// lwz r11,364(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 364);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82523aec
	if (ctx.cr6.eq) goto loc_82523AEC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,364(r4)
	PPC_STORE_U32(ctx.r4.u32 + 364, ctx.r11.u32);
	// b 0x82523aec
	goto loc_82523AEC;
loc_82523920:
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82523abc
	if (!ctx.cr6.eq) goto loc_82523ABC;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r30,r11,24448
	ctx.r30.s64 = ctx.r11.s64 + 24448;
	// lwz r11,236(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82523948
	if (ctx.cr6.eq) goto loc_82523948;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8252394c
	goto loc_8252394C;
loc_82523948:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_8252394C:
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8252399c
	if (ctx.cr6.eq) goto loc_8252399C;
	// lwz r10,3408(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3408);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r31,44(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8252399c
	if (ctx.cr6.eq) goto loc_8252399C;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r29,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82523998
	if (ctx.cr6.eq) goto loc_82523998;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82523998
	if (!ctx.cr6.eq) goto loc_82523998;
	// bl 0x8252edf8
	ctx.lr = 0x8252398C;
	sub_8252EDF8(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_82523998:
	// lwz r11,236(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 236);
loc_8252399C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825239ac
	if (ctx.cr6.eq) goto loc_825239AC;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x825239b0
	goto loc_825239B0;
loc_825239AC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_825239B0:
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,21272
	ctx.r3.s64 = ctx.r11.s64 + 21272;
	// bl 0x82544c50
	ctx.lr = 0x825239BC;
	sub_82544C50(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r31,r11,21068
	ctx.r31.s64 = ctx.r11.s64 + 21068;
	// beq 0x825239d8
	if (ctx.cr0.eq) goto loc_825239D8;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stb r28,349(r31)
	PPC_STORE_U8(ctx.r31.u32 + 349, ctx.r28.u8);
	// b 0x82523a08
	goto loc_82523A08;
loc_825239D8:
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lwz r11,21092(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21092);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82523a08
	if (!ctx.cr6.eq) goto loc_82523A08;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lwz r11,21120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82523a08
	if (!ctx.cr6.eq) goto loc_82523A08;
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r10,r10,24856
	ctx.r10.s64 = ctx.r10.s64 + 24856;
	// stw r29,56(r10)
	PPC_STORE_U32(ctx.r10.u32 + 56, ctx.r29.u32);
loc_82523A08:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82523a1c
	if (!ctx.cr6.eq) goto loc_82523A1C;
	// bl 0x822e58d0
	ctx.lr = 0x82523A18;
	sub_822E58D0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82523A1C:
	// stw r29,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r29.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r29,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r29.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// bl 0x82543370
	ctx.lr = 0x82523A38;
	sub_82543370(ctx, base);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// bl 0x8254a690
	ctx.lr = 0x82523A4C;
	sub_8254A690(ctx, base);
	// bl 0x8254b7e0
	ctx.lr = 0x82523A50;
	sub_8254B7E0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82523a6c
	if (ctx.cr6.eq) goto loc_82523A6C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,9276
	ctx.r4.s64 = ctx.r11.s64 + 9276;
	// b 0x82523a74
	goto loc_82523A74;
loc_82523A6C:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,9288
	ctx.r4.s64 = ctx.r11.s64 + 9288;
loc_82523A74:
	// bl 0x82899948
	ctx.lr = 0x82523A78;
	sub_82899948(ctx, base);
	// bl 0x82899798
	ctx.lr = 0x82523A7C;
	sub_82899798(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82899858
	ctx.lr = 0x82523A88;
	sub_82899858(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82570620
	ctx.lr = 0x82523A94;
	sub_82570620(ctx, base);
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r8,r11,25048
	ctx.r8.s64 = ctx.r11.s64 + 25048;
	// li r11,255
	ctx.r11.s64 = 255;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lfs f0,-2340(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// stw r11,28(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28, ctx.r11.u32);
	// stw r28,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r28.u32);
	// b 0x82523ad0
	goto loc_82523AD0;
loc_82523ABC:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82523ad0
	if (!ctx.cr6.eq) goto loc_82523AD0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825191a8
	ctx.lr = 0x82523AD0;
	sub_825191A8(ctx, base);
loc_82523AD0:
	// lwz r3,364(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82523aec
	if (ctx.cr6.eq) goto loc_82523AEC;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8253d820
	ctx.lr = 0x82523AE8;
	sub_8253D820(ctx, base);
	// stw r28,364(r27)
	PPC_STORE_U32(ctx.r27.u32 + 364, ctx.r28.u32);
loc_82523AEC:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82523AF4"))) PPC_WEAK_FUNC(sub_82523AF4);
PPC_FUNC_IMPL(__imp__sub_82523AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82523AF8"))) PPC_WEAK_FUNC(sub_82523AF8);
PPC_FUNC_IMPL(__imp__sub_82523AF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82523B00;
	__savegprlr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82523b28
	if (!ctx.cr6.eq) goto loc_82523B28;
	// lwz r11,364(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 364);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82523d9c
	if (ctx.cr6.eq) goto loc_82523D9C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,364(r4)
	PPC_STORE_U32(ctx.r4.u32 + 364, ctx.r11.u32);
	// b 0x82523d9c
	goto loc_82523D9C;
loc_82523B28:
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82523d6c
	if (!ctx.cr6.eq) goto loc_82523D6C;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lwz r10,21092(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21092);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82523b70
	if (ctx.cr6.eq) goto loc_82523B70;
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,21088(r9)
	PPC_STORE_U32(ctx.r9.u32 + 21088, ctx.r11.u32);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x825496e0
	ctx.lr = 0x82523B6C;
	sub_825496E0(ctx, base);
	// b 0x82523cfc
	goto loc_82523CFC;
loc_82523B70:
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lwz r3,21120(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21120);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82523b88
	if (ctx.cr6.eq) goto loc_82523B88;
	// bl 0x82306888
	ctx.lr = 0x82523B84;
	sub_82306888(ctx, base);
	// b 0x82523cfc
	goto loc_82523CFC;
loc_82523B88:
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r11,r11,24448
	ctx.r11.s64 = ctx.r11.s64 + 24448;
	// lwz r11,236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82523ba4
	if (ctx.cr6.eq) goto loc_82523BA4;
	// lwz r27,4(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82523ba8
	goto loc_82523BA8;
loc_82523BA4:
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
loc_82523BA8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82523cfc
	if (ctx.cr6.eq) goto loc_82523CFC;
	// lwz r11,3408(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 3408);
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82523c78
	if (!ctx.cr6.eq) goto loc_82523C78;
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82523c78
	if (ctx.cr6.eq) goto loc_82523C78;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lwz r3,30428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30428);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82523be4
	if (!ctx.cr6.eq) goto loc_82523BE4;
	// bl 0x822599a0
	ctx.lr = 0x82523BE4;
	sub_822599A0(ctx, base);
loc_82523BE4:
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82523c78
	if (!ctx.cr0.eq) goto loc_82523C78;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// blt cr6,0x82523c78
	if (ctx.cr6.lt) goto loc_82523C78;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bge cr6,0x82523c78
	if (!ctx.cr6.lt) goto loc_82523C78;
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r31,44(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// stw r28,836(r30)
	PPC_STORE_U32(ctx.r30.u32 + 836, ctx.r28.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r28,844(r30)
	PPC_STORE_U32(ctx.r30.u32 + 844, ctx.r28.u32);
	// beq cr6,0x82523c50
	if (ctx.cr6.eq) goto loc_82523C50;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r29,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82523c50
	if (ctx.cr6.eq) goto loc_82523C50;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82523c50
	if (!ctx.cr6.eq) goto loc_82523C50;
	// bl 0x8252edf8
	ctx.lr = 0x82523C44;
	sub_8252EDF8(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_82523C50:
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823418a8
	ctx.lr = 0x82523C5C;
	sub_823418A8(ctx, base);
	// lis r31,-31957
	ctx.r31.s64 = -2094333952;
	// lwz r11,21068(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21068);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82523c74
	if (!ctx.cr6.eq) goto loc_82523C74;
	// bl 0x822e58d0
	ctx.lr = 0x82523C70;
	sub_822E58D0(ctx, base);
	// lwz r11,21068(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21068);
loc_82523C74:
	// stw r29,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r29.u32);
loc_82523C78:
	// lwz r11,3408(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 3408);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// bl 0x822a00f0
	ctx.lr = 0x82523C88;
	sub_822A00F0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82523cfc
	if (ctx.cr0.eq) goto loc_82523CFC;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// addi r31,r3,376
	ctx.r31.s64 = ctx.r3.s64 + 376;
loc_82523C98:
	// lwz r11,-24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82523cb0
	if (!ctx.cr6.gt) goto loc_82523CB0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,-360
	ctx.r3.s64 = ctx.r31.s64 + -360;
	// bl 0x8258aa30
	ctx.lr = 0x82523CB0;
	sub_8258AA30(ctx, base);
loc_82523CB0:
	// stw r28,-48(r31)
	PPC_STORE_U32(ctx.r31.u32 + -48, ctx.r28.u32);
	// stw r28,-24(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24, ctx.r28.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82523ce8
	if (ctx.cr6.eq) goto loc_82523CE8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r31,-16
	ctx.r10.s64 = ctx.r31.s64 + -16;
	// subf r10,r3,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r3.s64;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// subfe r4,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82523CE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_82523CE8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// addi r31,r31,368
	ctx.r31.s64 = ctx.r31.s64 + 368;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bne cr6,0x82523c98
	if (!ctx.cr6.eq) goto loc_82523C98;
loc_82523CFC:
	// bl 0x8254b7e0
	ctx.lr = 0x82523D00;
	sub_8254B7E0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82523d1c
	if (ctx.cr6.eq) goto loc_82523D1C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,9276
	ctx.r4.s64 = ctx.r11.s64 + 9276;
	// b 0x82523d24
	goto loc_82523D24;
loc_82523D1C:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,9288
	ctx.r4.s64 = ctx.r11.s64 + 9288;
loc_82523D24:
	// bl 0x82899948
	ctx.lr = 0x82523D28;
	sub_82899948(ctx, base);
	// bl 0x82899798
	ctx.lr = 0x82523D2C;
	sub_82899798(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82899858
	ctx.lr = 0x82523D38;
	sub_82899858(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82570620
	ctx.lr = 0x82523D44;
	sub_82570620(ctx, base);
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r8,r11,25048
	ctx.r8.s64 = ctx.r11.s64 + 25048;
	// li r11,255
	ctx.r11.s64 = 255;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lfs f0,-2340(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// stw r11,28(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28, ctx.r11.u32);
	// stw r28,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r28.u32);
	// b 0x82523d80
	goto loc_82523D80;
loc_82523D6C:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82523d80
	if (!ctx.cr6.eq) goto loc_82523D80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825191a8
	ctx.lr = 0x82523D80;
	sub_825191A8(ctx, base);
loc_82523D80:
	// lwz r3,364(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82523d9c
	if (ctx.cr6.eq) goto loc_82523D9C;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8253d820
	ctx.lr = 0x82523D98;
	sub_8253D820(ctx, base);
	// stw r28,364(r26)
	PPC_STORE_U32(ctx.r26.u32 + 364, ctx.r28.u32);
loc_82523D9C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82523DA4"))) PPC_WEAK_FUNC(sub_82523DA4);
PPC_FUNC_IMPL(__imp__sub_82523DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82523DA8"))) PPC_WEAK_FUNC(sub_82523DA8);
PPC_FUNC_IMPL(__imp__sub_82523DA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82523DB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lfs f0,15164(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 15164);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// stw r30,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r30.u32);
	// beq cr6,0x82523e3c
	if (ctx.cr6.eq) goto loc_82523E3C;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe. r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82523e3c
	if (ctx.cr0.eq) goto loc_82523E3C;
	// bl 0x826a3ae0
	ctx.lr = 0x82523E04;
	sub_826A3AE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x826a3c88
	ctx.lr = 0x82523E20;
	sub_826A3C88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f6330
	ctx.lr = 0x82523E2C;
	sub_823F6330(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82523e3c
	if (ctx.cr6.eq) goto loc_82523E3C;
	// bl 0x82241d18
	ctx.lr = 0x82523E3C;
	sub_82241D18(ctx, base);
loc_82523E3C:
	// li r5,6480
	ctx.r5.s64 = 6480;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x82a75988
	ctx.lr = 0x82523E4C;
	sub_82A75988(ctx, base);
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r31,-1016
	ctx.r11.s64 = ctx.r31.s64 + -1016;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82523E58:
	// stw r30,1072(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1072, ctx.r30.u32);
	// stw r30,1076(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1076, ctx.r30.u32);
	// stw r30,1088(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1088, ctx.r30.u32);
	// stwu r30,1080(r11)
	ea = 1080 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82523e58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82523E58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82523E78"))) PPC_WEAK_FUNC(sub_82523E78);
PPC_FUNC_IMPL(__imp__sub_82523E78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82523E80;
	__savegprlr_27(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 + 28;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r30,r11,40
	ctx.r30.s64 = ctx.r11.s64 + 40;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// lfs f31,-2340(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f31.f64 = double(temp.f32);
loc_82523EB0:
	// lwz r11,-8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82523ef4
	if (ctx.cr6.eq) goto loc_82523EF4;
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82523ef0
	if (ctx.cr6.eq) goto loc_82523EF0;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x82523ef4
	if (ctx.cr6.gt) goto loc_82523EF4;
	// stw r27,-4(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4, ctx.r27.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82523fa0
	ctx.lr = 0x82523EEC;
	sub_82523FA0(ctx, base);
	// b 0x82523ef4
	goto loc_82523EF4;
loc_82523EF0:
	// li r28,1
	ctx.r28.s64 = 1;
loc_82523EF4:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,1080
	ctx.r30.s64 = ctx.r30.s64 + 1080;
	// cmplwi cr6,r29,6
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 6, ctx.xer);
	// blt cr6,0x82523eb0
	if (ctx.cr6.lt) goto loc_82523EB0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82523f54
	if (ctx.cr6.eq) goto loc_82523F54;
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82523f60
	if (!ctx.cr6.lt) goto loc_82523F60;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,15164
	ctx.r11.s64 = ctx.r11.s64 + 15164;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lfs f0,-3360(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -3360);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// beq cr6,0x82523f60
	if (ctx.cr6.eq) goto loc_82523F60;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,9596
	ctx.r4.s64 = ctx.r11.s64 + 9596;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x826a7620
	ctx.lr = 0x82523F50;
	sub_826A7620(ctx, base);
	// b 0x82523f60
	goto loc_82523F60;
loc_82523F54:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lfs f0,15164(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 15164);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
loc_82523F60:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82523f90
	if (ctx.cr6.eq) goto loc_82523F90;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82523f8c
	if (ctx.cr6.eq) goto loc_82523F8C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,9608
	ctx.r4.s64 = ctx.r11.s64 + 9608;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x826a7620
	ctx.lr = 0x82523F8C;
	sub_826A7620(ctx, base);
loc_82523F8C:
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
loc_82523F90:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82523FA0"))) PPC_WEAK_FUNC(sub_82523FA0);
PPC_FUNC_IMPL(__imp__sub_82523FA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82523FA8;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,7
	ctx.r11.s64 = 7;
	// mulli r10,r4,1080
	ctx.r10.s64 = ctx.r4.s64 * 1080;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r31,r10,28
	ctx.r31.s64 = ctx.r10.s64 + 28;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r10,r9,-12
	ctx.r10.s64 = ctx.r9.s64 + -12;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82523FD8:
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stwu r11,16(r10)
	ea = 16 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82523fd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82523FD8;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e4d50
	ctx.lr = 0x82523FF0;
	sub_822E4D50(ctx, base);
	// addi r11,r31,52
	ctx.r11.s64 = ctx.r31.s64 + 52;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r29,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r29.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x822e4d50
	ctx.lr = 0x82524010;
	sub_822E4D50(ctx, base);
	// stb r29,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r29.u8);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r29,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r29.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x822e4d50
	ctx.lr = 0x8252402C;
	sub_822E4D50(ctx, base);
	// stb r29,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r29.u8);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r29,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r29.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x822e4d50
	ctx.lr = 0x82524048;
	sub_822E4D50(ctx, base);
	// stb r29,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r29.u8);
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f31,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x822e4d50
	ctx.lr = 0x8252405C;
	sub_822E4D50(ctx, base);
	// stfd f31,152(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.f31.u64);
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lfs f31,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x822e4d50
	ctx.lr = 0x82524070;
	sub_822E4D50(ctx, base);
	// stfd f31,168(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.f31.u64);
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lfs f31,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x822e4d50
	ctx.lr = 0x82524084;
	sub_822E4D50(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stfd f31,184(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.f31.u64);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r29,r11,15328
	ctx.r29.s64 = ctx.r11.s64 + 15328;
	// beq cr6,0x825240b0
	if (ctx.cr6.eq) goto loc_825240B0;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,7
	ctx.r6.s64 = 7;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwzx r4,r11,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x826a7620
	ctx.lr = 0x825240B0;
	sub_826A7620(ctx, base);
loc_825240B0:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82524134
	if (ctx.cr6.eq) goto loc_82524134;
	// addic. r27,r31,564
	ctx.xer.ca = ctx.r31.u32 > 4294966731;
	ctx.r27.s64 = ctx.r31.s64 + 564;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x825240e0
	if (ctx.cr0.eq) goto loc_825240E0;
	// lhz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825240e0
	if (ctx.cr0.eq) goto loc_825240E0;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e4d50
	ctx.lr = 0x825240DC;
	sub_822E4D50(ctx, base);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
loc_825240E0:
	// li r4,3
	ctx.r4.s64 = 3;
	// lfs f31,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f31.f64 = double(temp.f32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822e4d50
	ctx.lr = 0x825240F0;
	sub_822E4D50(ctx, base);
	// stfd f31,168(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.f31.u64);
	// rlwinm r31,r28,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r6,7
	ctx.r6.s64 = 7;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwzx r4,r31,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// bl 0x826a7620
	ctx.lr = 0x8252410C;
	sub_826A7620(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82524134
	if (!ctx.cr6.eq) goto loc_82524134;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r11,r11,15376
	ctx.r11.s64 = ctx.r11.s64 + 15376;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x826a7620
	ctx.lr = 0x82524134;
	sub_826A7620(ctx, base);
loc_82524134:
	// addi r31,r1,192
	ctx.r31.s64 = ctx.r1.s64 + 192;
	// li r30,6
	ctx.r30.s64 = 6;
loc_8252413C:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e4d00
	ctx.lr = 0x82524148;
	sub_822E4D00(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8252413c
	if (!ctx.cr0.lt) goto loc_8252413C;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252415C"))) PPC_WEAK_FUNC(sub_8252415C);
PPC_FUNC_IMPL(__imp__sub_8252415C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82524160"))) PPC_WEAK_FUNC(sub_82524160);
PPC_FUNC_IMPL(__imp__sub_82524160) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82524168;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mulli r11,r8,1080
	ctx.r11.s64 = ctx.r8.s64 * 1080;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r31,r11,28
	ctx.r31.s64 = ctx.r11.s64 + 28;
	// bne cr6,0x82524194
	if (!ctx.cr6.eq) goto loc_82524194;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_82524194:
	// stfs f1,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// li r5,28
	ctx.r5.s64 = 28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a75198
	ctx.lr = 0x825241A4;
	sub_82A75198(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x82fa2df8
	ctx.lr = 0x825241B4;
	sub_82FA2DF8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825241d8
	if (ctx.cr6.eq) goto loc_825241D8;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825241d8
	if (ctx.cr0.eq) goto loc_825241D8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r31,564
	ctx.r3.s64 = ctx.r31.s64 + 564;
	// bl 0x82fa2df8
	ctx.lr = 0x825241D8;
	sub_82FA2DF8(ctx, base);
loc_825241D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825241E0"))) PPC_WEAK_FUNC(sub_825241E0);
PPC_FUNC_IMPL(__imp__sub_825241E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x825241E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mulli r11,r4,1080
	ctx.r11.s64 = ctx.r4.s64 * 1080;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r9,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r9.u32);
	// addi r29,r10,15376
	ctx.r29.s64 = ctx.r10.s64 + 15376;
	// stw r9,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r9.u32);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82524230
	if (ctx.cr6.eq) goto loc_82524230;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzx r4,r11,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x826a7620
	ctx.lr = 0x82524230;
	sub_826A7620(ctx, base);
loc_82524230:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8252425c
	if (ctx.cr6.eq) goto loc_8252425C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8252425c
	if (ctx.cr6.eq) goto loc_8252425C;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzx r4,r11,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x826a7620
	ctx.lr = 0x8252425C;
	sub_826A7620(ctx, base);
loc_8252425C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82524264"))) PPC_WEAK_FUNC(sub_82524264);
PPC_FUNC_IMPL(__imp__sub_82524264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82524268"))) PPC_WEAK_FUNC(sub_82524268);
PPC_FUNC_IMPL(__imp__sub_82524268) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82524270;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f2,-24756(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24756);
	ctx.f2.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x825b2130
	ctx.lr = 0x825242B0;
	sub_825B2130(ctx, base);
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82524394
	if (ctx.cr0.eq) goto loc_82524394;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x8252439c
	if (ctx.cr6.eq) goto loc_8252439C;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_825242D0:
	// stw r27,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r27.u32);
	// stwu r27,16(r11)
	ea = 16 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x825242d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825242D0;
	// mulli r11,r28,1080
	ctx.r11.s64 = ctx.r28.s64 * 1080;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// beq cr6,0x82524300
	if (ctx.cr6.eq) goto loc_82524300;
	// addi r11,r11,13140
	ctx.r11.s64 = ctx.r11.s64 + 13140;
	// lfs f31,-3416(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -3416);
	ctx.f31.f64 = double(temp.f32);
	// b 0x82524304
	goto loc_82524304;
loc_82524300:
	// lfs f31,13140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13140);
	ctx.f31.f64 = double(temp.f32);
loc_82524304:
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e4d50
	ctx.lr = 0x82524310;
	sub_822E4D50(ctx, base);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822e4d50
	ctx.lr = 0x82524328;
	sub_822E4D50(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// stfd f0,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f0.u64);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r30,r11,15400
	ctx.r30.s64 = ctx.r11.s64 + 15400;
	// beq cr6,0x82524358
	if (ctx.cr6.eq) goto loc_82524358;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x826a7620
	ctx.lr = 0x82524358;
	sub_826A7620(ctx, base);
loc_82524358:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82524378
	if (ctx.cr6.eq) goto loc_82524378;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x826a7620
	ctx.lr = 0x82524378;
	sub_826A7620(ctx, base);
loc_82524378:
	// addi r30,r1,128
	ctx.r30.s64 = ctx.r1.s64 + 128;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82524380:
	// addi r30,r30,-16
	ctx.r30.s64 = ctx.r30.s64 + -16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e4d00
	ctx.lr = 0x8252438C;
	sub_822E4D00(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge 0x82524380
	if (!ctx.cr0.lt) goto loc_82524380;
loc_82524394:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x825243ec
	if (!ctx.cr6.eq) goto loc_825243EC;
loc_8252439C:
	// mulli r11,r28,1080
	ctx.r11.s64 = ctx.r28.s64 * 1080;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x825243e4
	if (!ctx.cr6.eq) goto loc_825243E4;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// stw r9,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r9.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r10,15376
	ctx.r30.s64 = ctx.r10.s64 + 15376;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82524450
	if (ctx.cr6.eq) goto loc_82524450;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x826a7620
	ctx.lr = 0x825243E0;
	sub_826A7620(ctx, base);
	// b 0x82524450
	goto loc_82524450;
loc_825243E4:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82524470
	if (ctx.cr6.eq) goto loc_82524470;
loc_825243EC:
	// mulli r11,r28,1080
	ctx.r11.s64 = ctx.r28.s64 * 1080;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82524470
	if (ctx.cr6.eq) goto loc_82524470;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82524470
	if (ctx.cr6.eq) goto loc_82524470;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82524470
	if (!ctx.cr6.eq) goto loc_82524470;
	// stw r27,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r27.u32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r30,r10,15352
	ctx.r30.s64 = ctx.r10.s64 + 15352;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82524444
	if (ctx.cr6.eq) goto loc_82524444;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x826a7620
	ctx.lr = 0x82524444;
	sub_826A7620(ctx, base);
loc_82524444:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82524470
	if (ctx.cr6.eq) goto loc_82524470;
loc_82524450:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82524470
	if (ctx.cr6.eq) goto loc_82524470;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x826a7620
	ctx.lr = 0x82524470;
	sub_826A7620(ctx, base);
loc_82524470:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252447C"))) PPC_WEAK_FUNC(sub_8252447C);
PPC_FUNC_IMPL(__imp__sub_8252447C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82524480"))) PPC_WEAK_FUNC(sub_82524480);
PPC_FUNC_IMPL(__imp__sub_82524480) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82524488;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r10,r1,68
	ctx.r10.s64 = ctx.r1.s64 + 68;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_825244AC:
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stwu r11,16(r10)
	ea = 16 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x825244ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825244AC;
	// li r4,3
	ctx.r4.s64 = 3;
	// lfs f31,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e4d50
	ctx.lr = 0x825244C8;
	sub_822E4D50(ctx, base);
	// stfd f31,88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f31.u64);
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f31,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x822e4d50
	ctx.lr = 0x825244DC;
	sub_822E4D50(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stfd f31,104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f31.u64);
	// addi r31,r11,15400
	ctx.r31.s64 = ctx.r11.s64 + 15400;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82524508
	if (ctx.cr6.eq) goto loc_82524508;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwzx r4,r11,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x826a7620
	ctx.lr = 0x82524508;
	sub_826A7620(ctx, base);
loc_82524508:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82524528
	if (ctx.cr6.eq) goto loc_82524528;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwzx r4,r11,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x826a7620
	ctx.lr = 0x82524528;
	sub_826A7620(ctx, base);
loc_82524528:
	// addi r31,r1,112
	ctx.r31.s64 = ctx.r1.s64 + 112;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82524530:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e4d00
	ctx.lr = 0x8252453C;
	sub_822E4D00(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82524530
	if (!ctx.cr0.lt) goto loc_82524530;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82524550"))) PPC_WEAK_FUNC(sub_82524550);
PPC_FUNC_IMPL(__imp__sub_82524550) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x82518b28
	ctx.lr = 0x825245A0;
	sub_82518B28(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r30,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r30.u32);
	// addi r11,r11,9728
	ctx.r11.s64 = ctx.r11.s64 + 9728;
	// addi r10,r10,5228
	ctx.r10.s64 = ctx.r10.s64 + 5228;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r10,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r10.u32);
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// lis r8,-32174
	ctx.r8.s64 = -2108555264;
	// stw r30,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r30.u32);
	// lis r10,-32117
	ctx.r10.s64 = -2104819712;
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r30,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r30.u32);
	// addi r6,r11,20328
	ctx.r6.s64 = ctx.r11.s64 + 20328;
	// lfs f0,-2340(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r8,20176
	ctx.r8.s64 = ctx.r8.s64 + 20176;
	// stfs f0,384(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 384, temp.u32);
	// addi r10,r10,9280
	ctx.r10.s64 = ctx.r10.s64 + 9280;
	// stw r7,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r7.u32);
	// addi r11,r31,348
	ctx.r11.s64 = ctx.r31.s64 + 348;
	// stw r30,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
	// stw r30,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r31.u32);
	// stw r8,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r8.u32);
	// stw r6,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r6.u32);
	// stw r10,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r10.u32);
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82524630"))) PPC_WEAK_FUNC(sub_82524630);
PPC_FUNC_IMPL(__imp__sub_82524630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82524638;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,9728
	ctx.r11.s64 = ctx.r11.s64 + 9728;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r30,368(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 368);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82524688
	if (ctx.cr6.eq) goto loc_82524688;
	// lwz r29,372(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 372);
	// b 0x82524678
	goto loc_82524678;
loc_82524664:
	// addi r3,r30,1048
	ctx.r3.s64 = ctx.r30.s64 + 1048;
	// bl 0x82f91940
	ctx.lr = 0x8252466C;
	sub_82F91940(ctx, base);
	// addi r3,r30,1024
	ctx.r3.s64 = ctx.r30.s64 + 1024;
	// bl 0x82f91940
	ctx.lr = 0x82524674;
	sub_82F91940(ctx, base);
	// addi r30,r30,1088
	ctx.r30.s64 = ctx.r30.s64 + 1088;
loc_82524678:
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82524664
	if (!ctx.cr6.eq) goto loc_82524664;
	// lwz r3,368(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// bl 0x82691540
	ctx.lr = 0x82524688;
	sub_82691540(ctx, base);
loc_82524688:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r11.u32);
	// stw r11,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r11.u32);
	// stw r11,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r11.u32);
	// bl 0x82518fd0
	ctx.lr = 0x825246A0;
	sub_82518FD0(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825246b0
	if (ctx.cr0.eq) goto loc_825246B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x825246B0;
	sub_82691540(ctx, base);
loc_825246B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825246BC"))) PPC_WEAK_FUNC(sub_825246BC);
PPC_FUNC_IMPL(__imp__sub_825246BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825246C0"))) PPC_WEAK_FUNC(sub_825246C0);
PPC_FUNC_IMPL(__imp__sub_825246C0) {
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
	// lis r31,-31957
	ctx.r31.s64 = -2094333952;
	// lwz r3,23012(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23012);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82524718
	if (!ctx.cr6.eq) goto loc_82524718;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,9660
	ctx.r3.s64 = ctx.r11.s64 + 9660;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82547f38
	ctx.lr = 0x825246F4;
	sub_82547F38(ctx, base);
	// li r3,400
	ctx.r3.s64 = 400;
	// bl 0x82691500
	ctx.lr = 0x825246FC;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82524710
	if (ctx.cr0.eq) goto loc_82524710;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82524550
	ctx.lr = 0x8252470C;
	sub_82524550(ctx, base);
	// b 0x82524714
	goto loc_82524714;
loc_82524710:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82524714:
	// stw r3,23012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23012, ctx.r3.u32);
loc_82524718:
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

__attribute__((alias("__imp__sub_8252472C"))) PPC_WEAK_FUNC(sub_8252472C);
PPC_FUNC_IMPL(__imp__sub_8252472C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82524730"))) PPC_WEAK_FUNC(sub_82524730);
PPC_FUNC_IMPL(__imp__sub_82524730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82524738;
	__savegprlr_24(ctx, base);
	// stwu r1,-1248(r1)
	ea = -1248 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// bl 0x825246c0
	ctx.lr = 0x82524758;
	sub_825246C0(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r27,1120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1120, ctx.r27.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r27,1144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1144, ctx.r27.u32);
	// addi r3,r1,1104
	ctx.r3.s64 = ctx.r1.s64 + 1104;
	// bl 0x8234cb18
	ctx.lr = 0x82524774;
	sub_8234CB18(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,1128
	ctx.r3.s64 = ctx.r1.s64 + 1128;
	// bl 0x8234cb18
	ctx.lr = 0x82524780;
	sub_8234CB18(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r25,1156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1156, ctx.r25.u32);
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r24,1160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1160, ctx.r24.u32);
	// stw r11,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r11.u32);
	// bl 0x82f8e490
	ctx.lr = 0x82524798;
	sub_82F8E490(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825247b4
	if (ctx.cr6.eq) goto loc_825247B4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fa2df8
	ctx.lr = 0x825247B0;
	sub_82FA2DF8(ctx, base);
	// b 0x825247b8
	goto loc_825247B8;
loc_825247B4:
	// sth r27,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r27.u16);
loc_825247B8:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x825247d4
	if (ctx.cr6.eq) goto loc_825247D4;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x82fa2df8
	ctx.lr = 0x825247D0;
	sub_82FA2DF8(ctx, base);
	// b 0x825247d8
	goto loc_825247D8;
loc_825247D4:
	// sth r27,592(r1)
	PPC_STORE_U16(ctx.r1.u32 + 592, ctx.r27.u16);
loc_825247D8:
	// lwz r11,344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,368
	ctx.r3.s64 = ctx.r31.s64 + 368;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r11.u32);
	// stw r11,1152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1152, ctx.r11.u32);
	// bl 0x82524fb8
	ctx.lr = 0x825247F4;
	sub_82524FB8(ctx, base);
	// addi r5,r1,592
	ctx.r5.s64 = ctx.r1.s64 + 592;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r7,1160(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1160);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,1156(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1156);
	// bl 0x82524b28
	ctx.lr = 0x8252480C;
	sub_82524B28(ctx, base);
	// addi r3,r1,1128
	ctx.r3.s64 = ctx.r1.s64 + 1128;
	// lwz r31,1152(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1152);
	// bl 0x82f91940
	ctx.lr = 0x82524818;
	sub_82F91940(ctx, base);
	// addi r3,r1,1104
	ctx.r3.s64 = ctx.r1.s64 + 1104;
	// bl 0x82f91940
	ctx.lr = 0x82524820;
	sub_82F91940(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f91940
	ctx.lr = 0x82524828;
	sub_82F91940(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f91940
	ctx.lr = 0x82524830;
	sub_82F91940(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,1248
	ctx.r1.s64 = ctx.r1.s64 + 1248;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252483C"))) PPC_WEAK_FUNC(sub_8252483C);
PPC_FUNC_IMPL(__imp__sub_8252483C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82524840"))) PPC_WEAK_FUNC(sub_82524840);
PPC_FUNC_IMPL(__imp__sub_82524840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82524848;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825246c0
	ctx.lr = 0x82524854;
	sub_825246C0(ctx, base);
	// lwz r10,372(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 372);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,368(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 368);
	// addi r29,r3,368
	ctx.r29.s64 = ctx.r3.s64 + 368;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x825249c0
	if (ctx.cr6.eq) goto loc_825249C0;
loc_8252486C:
	// lwz r9,1072(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1072);
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8252488c
	if (ctx.cr6.eq) goto loc_8252488C;
	// lwz r9,372(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 372);
	// addi r11,r11,1088
	ctx.r11.s64 = ctx.r11.s64 + 1088;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8252486c
	if (!ctx.cr6.eq) goto loc_8252486C;
	// b 0x825249c0
	goto loc_825249C0;
loc_8252488C:
	// lwz r8,-16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16);
	// addi r10,r11,1088
	ctx.r10.s64 = ctx.r11.s64 + 1088;
	// lwz r30,4(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// cntlzw r10,r9
	ctx.r10.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r27,r10,27,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// beq cr6,0x82524930
	if (ctx.cr6.eq) goto loc_82524930;
	// addi r31,r11,2136
	ctx.r31.s64 = ctx.r11.s64 + 2136;
loc_825248B0:
	// addi r11,r31,-2136
	ctx.r11.s64 = ctx.r31.s64 + -2136;
	// li r10,256
	ctx.r10.s64 = 256;
	// subf r9,r11,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r11.s64;
	// addi r9,r9,-1048
	ctx.r9.s64 = ctx.r9.s64 + -1048;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_825248C4:
	// lhzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x825248c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825248C4;
	// li r10,256
	ctx.r10.s64 = 256;
	// addi r11,r31,-1624
	ctx.r11.s64 = ctx.r31.s64 + -1624;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_825248E0:
	// lhzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x825248e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825248E0;
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// addi r3,r31,-1112
	ctx.r3.s64 = ctx.r31.s64 + -1112;
	// bl 0x8234cb18
	ctx.lr = 0x825248FC;
	sub_8234CB18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,-1088
	ctx.r3.s64 = ctx.r31.s64 + -1088;
	// bl 0x8234cb18
	ctx.lr = 0x82524908;
	sub_8234CB18(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,-1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1064, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,-1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1060, ctx.r11.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r11,-1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1056, ctx.r11.u32);
	// addi r31,r31,1088
	ctx.r31.s64 = ctx.r31.s64 + 1088;
	// addi r11,r31,-1048
	ctx.r11.s64 = ctx.r31.s64 + -1048;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x825248b0
	if (!ctx.cr6.eq) goto loc_825248B0;
loc_82524930:
	// lwz r30,4(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r31,r30,-1088
	ctx.r31.s64 = ctx.r30.s64 + -1088;
	// b 0x82524950
	goto loc_82524950;
loc_8252493C:
	// addi r3,r31,1048
	ctx.r3.s64 = ctx.r31.s64 + 1048;
	// bl 0x82f91940
	ctx.lr = 0x82524944;
	sub_82F91940(ctx, base);
	// addi r3,r31,1024
	ctx.r3.s64 = ctx.r31.s64 + 1024;
	// bl 0x82f91940
	ctx.lr = 0x8252494C;
	sub_82F91940(ctx, base);
	// addi r31,r31,1088
	ctx.r31.s64 = ctx.r31.s64 + 1088;
loc_82524950:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8252493c
	if (!ctx.cr6.eq) goto loc_8252493C;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r11,r11,-1088
	ctx.r11.s64 = ctx.r11.s64 + -1088;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// beq cr6,0x825249c0
	if (ctx.cr6.eq) goto loc_825249C0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x825249a8
	if (ctx.cr6.eq) goto loc_825249A8;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r11,372(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 372);
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,388(r28)
	PPC_STORE_U32(ctx.r28.u32 + 388, ctx.r10.u32);
	// addi r31,r11,-1088
	ctx.r31.s64 = ctx.r11.s64 + -1088;
	// bl 0x82f8e490
	ctx.lr = 0x82524994;
	sub_82F8E490(ctx, base);
	// lwz r7,1080(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1080);
	// lwz r6,1076(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1076);
	// addi r5,r31,512
	ctx.r5.s64 = ctx.r31.s64 + 512;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// b 0x825249b8
	goto loc_825249B8;
loc_825249A8:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
loc_825249B8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82524b28
	ctx.lr = 0x825249C0;
	sub_82524B28(ctx, base);
loc_825249C0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825249C8"))) PPC_WEAK_FUNC(sub_825249C8);
PPC_FUNC_IMPL(__imp__sub_825249C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x825249D0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x825246c0
	ctx.lr = 0x825249E4;
	sub_825246C0(ctx, base);
	// lwz r11,372(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 372);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r31,368(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 368);
	// addi r29,r11,-1088
	ctx.r29.s64 = ctx.r11.s64 + -1088;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82524a84
	if (ctx.cr6.eq) goto loc_82524A84;
	// li r25,0
	ctx.r25.s64 = 0;
loc_82524A00:
	// lwz r11,1072(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1072);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82524a74
	if (!ctx.cr6.eq) goto loc_82524A74;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82524a28
	if (ctx.cr6.eq) goto loc_82524A28;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa2df8
	ctx.lr = 0x82524A24;
	sub_82FA2DF8(ctx, base);
	// b 0x82524a2c
	goto loc_82524A2C;
loc_82524A28:
	// sth r25,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r25.u16);
loc_82524A2C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82524a48
	if (ctx.cr6.eq) goto loc_82524A48;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r31,512
	ctx.r3.s64 = ctx.r31.s64 + 512;
	// bl 0x82fa2df8
	ctx.lr = 0x82524A44;
	sub_82FA2DF8(ctx, base);
	// b 0x82524a4c
	goto loc_82524A4C;
loc_82524A48:
	// sth r25,512(r31)
	PPC_STORE_U16(ctx.r31.u32 + 512, ctx.r25.u16);
loc_82524A4C:
	// lwz r11,1072(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1072);
	// lwz r10,1072(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1072);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82524a74
	if (!ctx.cr6.eq) goto loc_82524A74;
	// addi r5,r29,512
	ctx.r5.s64 = ctx.r29.s64 + 512;
	// lwz r7,1080(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1080);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r6,1076(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1076);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82524b28
	ctx.lr = 0x82524A74;
	sub_82524B28(ctx, base);
loc_82524A74:
	// lwz r11,372(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 372);
	// addi r31,r31,1088
	ctx.r31.s64 = ctx.r31.s64 + 1088;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82524a00
	if (!ctx.cr6.eq) goto loc_82524A00;
loc_82524A84:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82524A8C"))) PPC_WEAK_FUNC(sub_82524A8C);
PPC_FUNC_IMPL(__imp__sub_82524A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82524A90"))) PPC_WEAK_FUNC(sub_82524A90);
PPC_FUNC_IMPL(__imp__sub_82524A90) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x825246c0
	ctx.lr = 0x82524AB4;
	sub_825246C0(ctx, base);
	// lwz r11,368(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 368);
	// lwz r10,372(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 372);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82524b08
	if (ctx.cr6.eq) goto loc_82524B08;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r4,r11,-1088
	ctx.r4.s64 = ctx.r11.s64 + -1088;
	// lwz r11,-16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82524b08
	if (!ctx.cr6.eq) goto loc_82524B08;
	// lwz r11,1076(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1076);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82524af4
	if (ctx.cr6.eq) goto loc_82524AF4;
	// lwz r11,1080(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1080);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82524afc
	if (!ctx.cr6.eq) goto loc_82524AFC;
loc_82524AF4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82524cb0
	ctx.lr = 0x82524AFC;
	sub_82524CB0(ctx, base);
loc_82524AFC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82519310
	ctx.lr = 0x82524B08;
	sub_82519310(ctx, base);
loc_82524B08:
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

__attribute__((alias("__imp__sub_82524B24"))) PPC_WEAK_FUNC(sub_82524B24);
PPC_FUNC_IMPL(__imp__sub_82524B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82524B28"))) PPC_WEAK_FUNC(sub_82524B28);
PPC_FUNC_IMPL(__imp__sub_82524B28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82524B30;
	__savegprlr_26(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x82524b6c
	if (ctx.cr6.eq) goto loc_82524B6C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82524b6c
	if (ctx.cr6.eq) goto loc_82524B6C;
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82524b70
	if (!ctx.cr0.eq) goto loc_82524B70;
loc_82524B6C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
loc_82524B70:
	// lis r4,1
	ctx.r4.s64 = 65536;
	// lwz r3,168(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 168);
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r4,r4,34464
	ctx.r4.u64 = ctx.r4.u64 | 34464;
	// bl 0x8251db00
	ctx.lr = 0x82524B84;
	sub_8251DB00(ctx, base);
	// cmpwi cr6,r26,3
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 3, ctx.xer);
	// beq cr6,0x82524ba4
	if (ctx.cr6.eq) goto loc_82524BA4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82524ba4
	if (ctx.cr6.eq) goto loc_82524BA4;
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82524ba8
	if (!ctx.cr0.eq) goto loc_82524BA8;
loc_82524BA4:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
loc_82524BA8:
	// lis r4,1
	ctx.r4.s64 = 65536;
	// lwz r3,168(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 168);
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r4,r4,34465
	ctx.r4.u64 = ctx.r4.u64 | 34465;
	// bl 0x8251db00
	ctx.lr = 0x82524BBC;
	sub_8251DB00(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82524BC8:
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// stwu r31,16(r11)
	ea = 16 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82524bc8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82524BC8;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r31,r11,31944
	ctx.r31.s64 = ctx.r11.s64 + 31944;
	// bne cr6,0x82524be8
	if (!ctx.cr6.eq) goto loc_82524BE8;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82524BE8:
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e4d50
	ctx.lr = 0x82524BF4;
	sub_822E4D50(ctx, base);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82524c04
	if (ctx.cr6.eq) goto loc_82524C04;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82524C04:
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822e4d50
	ctx.lr = 0x82524C10;
	sub_822E4D50(ctx, base);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822e4d50
	ctx.lr = 0x82524C20;
	sub_822E4D50(ctx, base);
	// extsw r11,r27
	ctx.r11.s64 = ctx.r27.s32;
	// li r4,3
	ctx.r4.s64 = 3;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f0.u64);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822e4d50
	ctx.lr = 0x82524C40;
	sub_822E4D50(ctx, base);
	// extsw r11,r26
	ctx.r11.s64 = ctx.r26.s32;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.f0.u64);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82519160
	ctx.lr = 0x82524C60;
	sub_82519160(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,9684
	ctx.r4.s64 = ctx.r11.s64 + 9684;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x826a7620
	ctx.lr = 0x82524C78;
	sub_826A7620(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82524c88
	if (ctx.cr6.eq) goto loc_82524C88;
	// bl 0x82241d18
	ctx.lr = 0x82524C88;
	sub_82241D18(ctx, base);
loc_82524C88:
	// addi r31,r1,160
	ctx.r31.s64 = ctx.r1.s64 + 160;
	// li r30,3
	ctx.r30.s64 = 3;
loc_82524C90:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e4d00
	ctx.lr = 0x82524C9C;
	sub_822E4D00(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82524c90
	if (!ctx.cr0.lt) goto loc_82524C90;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82524CAC"))) PPC_WEAK_FUNC(sub_82524CAC);
PPC_FUNC_IMPL(__imp__sub_82524CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82524CB0"))) PPC_WEAK_FUNC(sub_82524CB0);
PPC_FUNC_IMPL(__imp__sub_82524CB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82524CB8;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r10,388(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 388);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// lfs f30,-27104(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27104);
	ctx.f30.f64 = double(temp.f32);
	// bne cr6,0x82524d38
	if (!ctx.cr6.eq) goto loc_82524D38;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_82524CE8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f8e448
	ctx.lr = 0x82524CF4;
	sub_82F8E448(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bgt cr6,0x82524d34
	if (ctx.cr6.gt) goto loc_82524D34;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// blt cr6,0x82524ce8
	if (ctx.cr6.lt) goto loc_82524CE8;
	// b 0x82524d38
	goto loc_82524D38;
loc_82524D34:
	// stw r30,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r30.u32);
loc_82524D38:
	// lwz r4,388(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// li r30,-1
	ctx.r30.s64 = -1;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82524dd0
	if (ctx.cr6.eq) goto loc_82524DD0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f8e448
	ctx.lr = 0x82524D50;
	sub_82F8E448(ctx, base);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r10,r11,6716
	ctx.r10.s64 = ctx.r11.s64 + 6716;
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f5,-24756(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24756);
	ctx.f5.f64 = double(temp.f32);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r8,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// stw r6,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// lfs f3,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// lfs f31,-2340(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f31.f64 = double(temp.f32);
	// stw r5,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r5.u32);
	// stw r9,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r9.u32);
	// lfs f2,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// bl 0x8255b868
	ctx.lr = 0x82524DA0;
	sub_8255B868(ctx, base);
	// fcmpu cr6,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// ble cr6,0x82524dc0
	if (!ctx.cr6.gt) goto loc_82524DC0;
	// lfs f13,384(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f1,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// lfs f0,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,384(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 384, temp.u32);
	// b 0x82524dd0
	goto loc_82524DD0;
loc_82524DC0:
	// stw r30,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r30.u32);
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x82f8e490
	ctx.lr = 0x82524DCC;
	sub_82F8E490(ctx, base);
	// stfs f31,384(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 384, temp.u32);
loc_82524DD0:
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// lfs f13,384(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	ctx.f13.f64 = double(temp.f32);
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f0,-15356(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15356);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x822e4d50
	ctx.lr = 0x82524DF4;
	sub_822E4D50(ctx, base);
	// stfd f31,104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f31.u64);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82519160
	ctx.lr = 0x82524E04;
	sub_82519160(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,9704
	ctx.r4.s64 = ctx.r11.s64 + 9704;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x826a7620
	ctx.lr = 0x82524E1C;
	sub_826A7620(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82524e2c
	if (ctx.cr6.eq) goto loc_82524E2C;
	// bl 0x82241d18
	ctx.lr = 0x82524E2C;
	sub_82241D18(ctx, base);
loc_82524E2C:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lfs f13,384(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,27984
	ctx.r11.s64 = ctx.r11.s64 + 27984;
	// lfs f0,612(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 612);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82524eb8
	if (ctx.cr6.lt) goto loc_82524EB8;
	// lwz r11,1040(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1040);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82524e78
	if (ctx.cr6.eq) goto loc_82524E78;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r11,r28,1024
	ctx.r11.s64 = ctx.r28.s64 + 1024;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82524e64
	if (!ctx.cr6.eq) goto loc_82524E64;
	// bl 0x82fa1518
	ctx.lr = 0x82524E64;
	sub_82FA1518(ctx, base);
loc_82524E64:
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82524E78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82524E78:
	// lwz r11,1064(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1064);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82524eac
	if (ctx.cr6.eq) goto loc_82524EAC;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r11,r28,1048
	ctx.r11.s64 = ctx.r28.s64 + 1048;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82524e98
	if (!ctx.cr6.eq) goto loc_82524E98;
	// bl 0x82fa1518
	ctx.lr = 0x82524E98;
	sub_82FA1518(ctx, base);
loc_82524E98:
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82524EAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82524EAC:
	// stw r30,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r30.u32);
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x82f8e490
	ctx.lr = 0x82524EB8;
	sub_82F8E490(ctx, base);
loc_82524EB8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e4d00
	ctx.lr = 0x82524EC0;
	sub_822E4D00(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82524ED0"))) PPC_WEAK_FUNC(sub_82524ED0);
PPC_FUNC_IMPL(__imp__sub_82524ED0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,368(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 368);
	// lwz r10,372(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 372);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addis r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -131072;
	// addi r10,r10,-1088
	ctx.r10.s64 = ctx.r10.s64 + -1088;
	// addic. r11,r11,31072
	ctx.xer.ca = ctx.r11.u32 > 4294936223;
	ctx.r11.s64 = ctx.r11.s64 + 31072;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82524f30
	if (ctx.cr0.eq) goto loc_82524F30;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,1064(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1064);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r11,r10,1048
	ctx.r11.s64 = ctx.r10.s64 + 1048;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82524f1c
	if (!ctx.cr6.eq) goto loc_82524F1C;
	// b 0x82fa1518
	sub_82FA1518(ctx, base);
	return;
loc_82524F1C:
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_82524F30:
	// lwz r11,1040(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1040);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r11,r10,1024
	ctx.r11.s64 = ctx.r10.s64 + 1024;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82524f50
	if (!ctx.cr6.eq) goto loc_82524F50;
	// b 0x82fa1518
	sub_82FA1518(ctx, base);
	return;
loc_82524F50:
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
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

__attribute__((alias("__imp__sub_82524F64"))) PPC_WEAK_FUNC(sub_82524F64);
PPC_FUNC_IMPL(__imp__sub_82524F64) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82524F68"))) PPC_WEAK_FUNC(sub_82524F68);
PPC_FUNC_IMPL(__imp__sub_82524F68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,34464
	ctx.r11.u64 = ctx.r11.u64 | 34464;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82524f84
	if (!ctx.cr6.eq) goto loc_82524F84;
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82524f88
	if (!ctx.cr0.eq) goto loc_82524F88;
loc_82524F84:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82524F88:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// stw r11,392(r3)
	PPC_STORE_U32(ctx.r3.u32 + 392, ctx.r11.u32);
	// ori r11,r10,34465
	ctx.r11.u64 = ctx.r10.u64 | 34465;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82524fa8
	if (!ctx.cr6.eq) goto loc_82524FA8;
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82524fac
	if (!ctx.cr0.eq) goto loc_82524FAC;
loc_82524FA8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82524FAC:
	// stw r11,396(r3)
	PPC_STORE_U32(ctx.r3.u32 + 396, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82524FB4"))) PPC_WEAK_FUNC(sub_82524FB4);
PPC_FUNC_IMPL(__imp__sub_82524FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82524FB8"))) PPC_WEAK_FUNC(sub_82524FB8);
PPC_FUNC_IMPL(__imp__sub_82524FB8) {
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
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82524ff0
	if (!ctx.cr6.lt) goto loc_82524FF0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82524ff4
	if (!ctx.cr6.gt) goto loc_82524FF4;
loc_82524FF0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82524FF4:
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq 0x825250a0
	if (ctx.cr0.eq) goto loc_825250A0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,1088
	ctx.r11.s64 = 1088;
	// subf r7,r10,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r10.s64;
	// divw r30,r7,r11
	ctx.r30.s32 = ctx.r7.s32 / ctx.r11.s32;
	// bne cr6,0x82525084
	if (!ctx.cr6.eq) goto loc_82525084;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lis r7,60
	ctx.r7.s64 = 3932160;
	// divw r9,r9,r11
	ctx.r9.s32 = ctx.r9.s32 / ctx.r11.s32;
	// ori r7,r7,15419
	ctx.r7.u64 = ctx.r7.u64 | 15419;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x8252503c
	if (!ctx.cr6.gt) goto loc_8252503C;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,31836
	ctx.r3.s64 = ctx.r11.s64 + 31836;
	// bl 0x82fa0648
	ctx.lr = 0x8252503C;
	sub_82FA0648(ctx, base);
loc_8252503C:
	// subf r8,r10,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r10.s64;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// divw r11,r8,r11
	ctx.r11.s32 = ctx.r8.s32 / ctx.r11.s32;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82525084
	if (!ctx.cr6.gt) goto loc_82525084;
	// lis r8,60
	ctx.r8.s64 = 3932160;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// ori r8,r8,15420
	ctx.r8.u64 = ctx.r8.u64 | 15420;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r8,r9,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82525070
	if (ctx.cr6.lt) goto loc_82525070;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82525070:
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8252507c
	if (!ctx.cr6.lt) goto loc_8252507C;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_8252507C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82525150
	ctx.lr = 0x82525084;
	sub_82525150(ctx, base);
loc_82525084:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252512c
	if (ctx.cr6.eq) goto loc_8252512C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r10,r30,1088
	ctx.r10.s64 = ctx.r30.s64 * 1088;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82525128
	goto loc_82525128;
loc_825250A0:
	// bne cr6,0x82525118
	if (!ctx.cr6.eq) goto loc_82525118;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,1088
	ctx.r11.s64 = 1088;
	// lis r7,60
	ctx.r7.s64 = 3932160;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// ori r7,r7,15419
	ctx.r7.u64 = ctx.r7.u64 | 15419;
	// divw r9,r9,r11
	ctx.r9.s32 = ctx.r9.s32 / ctx.r11.s32;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x825250d0
	if (!ctx.cr6.gt) goto loc_825250D0;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,31836
	ctx.r3.s64 = ctx.r11.s64 + 31836;
	// bl 0x82fa0648
	ctx.lr = 0x825250D0;
	sub_82FA0648(ctx, base);
loc_825250D0:
	// subf r8,r10,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r10.s64;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// divw r11,r8,r11
	ctx.r11.s32 = ctx.r8.s32 / ctx.r11.s32;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82525118
	if (!ctx.cr6.gt) goto loc_82525118;
	// lis r8,60
	ctx.r8.s64 = 3932160;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// ori r8,r8,15420
	ctx.r8.u64 = ctx.r8.u64 | 15420;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r8,r9,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82525104
	if (ctx.cr6.lt) goto loc_82525104;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82525104:
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82525110
	if (!ctx.cr6.lt) goto loc_82525110;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_82525110:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82525150
	ctx.lr = 0x82525118;
	sub_82525150(ctx, base);
loc_82525118:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252512c
	if (ctx.cr6.eq) goto loc_8252512C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82525128:
	// bl 0x82525278
	ctx.lr = 0x8252512C;
	sub_82525278(ctx, base);
loc_8252512C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1088
	ctx.r11.s64 = ctx.r11.s64 + 1088;
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

__attribute__((alias("__imp__sub_82525150"))) PPC_WEAK_FUNC(sub_82525150);
PPC_FUNC_IMPL(__imp__sub_82525150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82525158;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,60
	ctx.r11.s64 = 3932160;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r11,r11,15420
	ctx.r11.u64 = ctx.r11.u64 | 15420;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82525180
	if (!ctx.cr6.gt) goto loc_82525180;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,31836
	ctx.r3.s64 = ctx.r11.s64 + 31836;
	// bl 0x82fa0648
	ctx.lr = 0x82525180;
	sub_82FA0648(ctx, base);
loc_82525180:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r25,1088
	ctx.r25.s64 = 1088;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r11,r11,r25
	ctx.r11.s32 = ctx.r11.s32 / ctx.r25.s32;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x82525250
	if (!ctx.cr6.lt) goto loc_82525250;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x825251b8
	if (ctx.cr6.eq) goto loc_825251B8;
	// mulli r3,r26,1088
	ctx.r3.s64 = ctx.r26.s64 * 1088;
	// bl 0x82691500
	ctx.lr = 0x825251B0;
	sub_82691500(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x82525258
	if (ctx.cr0.eq) goto loc_82525258;
loc_825251B8:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// lwz r27,4(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x825251e4
	goto loc_825251E4;
loc_825251C8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x825251dc
	if (ctx.cr6.eq) goto loc_825251DC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82525278
	ctx.lr = 0x825251DC;
	sub_82525278(ctx, base);
loc_825251DC:
	// addi r30,r30,1088
	ctx.r30.s64 = ctx.r30.s64 + 1088;
	// addi r29,r29,1088
	ctx.r29.s64 = ctx.r29.s64 + 1088;
loc_825251E4:
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x825251c8
	if (!ctx.cr6.eq) goto loc_825251C8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// subf r10,r11,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r27,r10,r25
	ctx.r27.s32 = ctx.r10.s32 / ctx.r25.s32;
	// beq cr6,0x82525234
	if (ctx.cr6.eq) goto loc_82525234;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8252522c
	if (ctx.cr6.eq) goto loc_8252522C;
loc_82525210:
	// addi r3,r29,1048
	ctx.r3.s64 = ctx.r29.s64 + 1048;
	// bl 0x82f91940
	ctx.lr = 0x82525218;
	sub_82F91940(ctx, base);
	// addi r3,r29,1024
	ctx.r3.s64 = ctx.r29.s64 + 1024;
	// bl 0x82f91940
	ctx.lr = 0x82525220;
	sub_82F91940(ctx, base);
	// addi r29,r29,1088
	ctx.r29.s64 = ctx.r29.s64 + 1088;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82525210
	if (!ctx.cr6.eq) goto loc_82525210;
loc_8252522C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82691540
	ctx.lr = 0x82525234;
	sub_82691540(ctx, base);
loc_82525234:
	// mulli r11,r26,1088
	ctx.r11.s64 = ctx.r26.s64 * 1088;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// mulli r10,r27,1088
	ctx.r10.s64 = ctx.r27.s64 * 1088;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_82525250:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_82525258:
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
	ctx.lr = 0x82525274;
	sub_82240040(ctx, base);
}

__attribute__((alias("__imp__sub_82525274"))) PPC_WEAK_FUNC(sub_82525274);
PPC_FUNC_IMPL(__imp__sub_82525274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82525278"))) PPC_WEAK_FUNC(sub_82525278);
PPC_FUNC_IMPL(__imp__sub_82525278) {
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
	// li r5,512
	ctx.r5.s64 = 512;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x8252529C;
	sub_82FA77C0(ctx, base);
	// addi r3,r31,512
	ctx.r3.s64 = ctx.r31.s64 + 512;
	// addi r4,r30,512
	ctx.r4.s64 = ctx.r30.s64 + 512;
	// li r5,512
	ctx.r5.s64 = 512;
	// bl 0x82fa77c0
	ctx.lr = 0x825252AC;
	sub_82FA77C0(ctx, base);
	// addi r3,r31,1024
	ctx.r3.s64 = ctx.r31.s64 + 1024;
	// addi r4,r30,1024
	ctx.r4.s64 = ctx.r30.s64 + 1024;
	// bl 0x8226c200
	ctx.lr = 0x825252B8;
	sub_8226C200(ctx, base);
	// addi r3,r31,1048
	ctx.r3.s64 = ctx.r31.s64 + 1048;
	// addi r4,r30,1048
	ctx.r4.s64 = ctx.r30.s64 + 1048;
	// bl 0x8226c200
	ctx.lr = 0x825252C4;
	sub_8226C200(ctx, base);
	// lwz r11,1072(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1072);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1072, ctx.r11.u32);
	// lwz r11,1076(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1076);
	// stw r11,1076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1076, ctx.r11.u32);
	// lwz r11,1080(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1080);
	// stw r11,1080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1080, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_825252F8"))) PPC_WEAK_FUNC(sub_825252F8);
PPC_FUNC_IMPL(__imp__sub_825252F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82525300;
	__savegprlr_28(ctx, base);
	// stwu r1,-736(r1)
	ea = -736 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,29152
	ctx.r11.s64 = ctx.r11.s64 + 29152;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8252532c
	if (!ctx.cr6.eq) goto loc_8252532C;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// b 0x82525344
	goto loc_82525344;
loc_8252532C:
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r10,6380
	ctx.r10.s64 = ctx.r10.s64 + 6380;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
loc_82525344:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82518b28
	ctx.lr = 0x82525378;
	sub_82518B28(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r11,r11,9904
	ctx.r11.s64 = ctx.r11.s64 + 9904;
	// addi r10,r10,5228
	ctx.r10.s64 = ctx.r10.s64 + 5228;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r10,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r10.u32);
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// stw r30,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r30.u32);
	// addi r29,r31,344
	ctx.r29.s64 = ctx.r31.s64 + 344;
	// stw r30,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r30.u32);
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// bl 0x8226c200
	ctx.lr = 0x825253AC;
	sub_8226C200(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-32117
	ctx.r9.s64 = -2104819712;
	// stw r30,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r30.u32);
	// lis r8,-32117
	ctx.r8.s64 = -2104819712;
	// stw r30,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r30.u32);
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// stw r30,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r30.u32);
	// lis r7,-32231
	ctx.r7.s64 = -2112290816;
	// stw r30,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r30.u32);
	// lfs f0,-2340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r9,9280
	ctx.r11.s64 = ctx.r9.s64 + 9280;
	// addi r10,r10,22448
	ctx.r10.s64 = ctx.r10.s64 + 22448;
	// stfs f0,412(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 412, temp.u32);
	// addi r9,r8,9280
	ctx.r9.s64 = ctx.r8.s64 + 9280;
	// stw r30,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r30.u32);
	// stw r10,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r10.u32);
	// li r5,510
	ctx.r5.s64 = 510;
	// stw r11,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r9,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r9.u32);
	// addi r3,r1,178
	ctx.r3.s64 = ctx.r1.s64 + 178;
	// stw r31,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r31.u32);
	// stw r29,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r29.u32);
	// lhz r11,31944(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 31944);
	// sth r11,176(r1)
	PPC_STORE_U16(ctx.r1.u32 + 176, ctx.r11.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x82525414;
	sub_82FA7CF0(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r11,21076
	ctx.r11.s64 = ctx.r11.s64 + 21076;
	// addi r4,r10,-7760
	ctx.r4.s64 = ctx.r10.s64 + -7760;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8259c8e0
	ctx.lr = 0x8252543C;
	sub_8259C8E0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82519160
	ctx.lr = 0x82525448;
	sub_82519160(ctx, base);
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,256
	ctx.r4.s64 = ctx.r11.s64 + 256;
	// bl 0x826a80e0
	ctx.lr = 0x8252545C;
	sub_826A80E0(ctx, base);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252546c
	if (ctx.cr6.eq) goto loc_8252546C;
	// bl 0x82241d18
	ctx.lr = 0x8252546C;
	sub_82241D18(ctx, base);
loc_8252546C:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// addi r11,r11,9912
	ctx.r11.s64 = ctx.r11.s64 + 9912;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82524730
	ctx.lr = 0x825254A4;
	sub_82524730(ctx, base);
	// stw r3,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f91940
	ctx.lr = 0x825254B0;
	sub_82F91940(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825254BC"))) PPC_WEAK_FUNC(sub_825254BC);
PPC_FUNC_IMPL(__imp__sub_825254BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825254C0"))) PPC_WEAK_FUNC(sub_825254C0);
PPC_FUNC_IMPL(__imp__sub_825254C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x825254C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,364(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r11,r11,9904
	ctx.r11.s64 = ctx.r11.s64 + 9904;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x825254f8
	if (ctx.cr6.eq) goto loc_825254F8;
	// bl 0x8250b630
	ctx.lr = 0x825254F4;
	sub_8250B630(ctx, base);
	// stw r30,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r30.u32);
loc_825254F8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825191a8
	ctx.lr = 0x82525504;
	sub_825191A8(ctx, base);
	// lwz r3,372(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82525518
	if (ctx.cr6.eq) goto loc_82525518;
	// bl 0x8250b630
	ctx.lr = 0x82525514;
	sub_8250B630(ctx, base);
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
loc_82525518:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825191a8
	ctx.lr = 0x82525524;
	sub_825191A8(ctx, base);
	// lwz r3,368(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82525538
	if (ctx.cr6.eq) goto loc_82525538;
	// bl 0x8250b630
	ctx.lr = 0x82525534;
	sub_8250B630(ctx, base);
	// stw r30,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r30.u32);
loc_82525538:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825191a8
	ctx.lr = 0x82525544;
	sub_825191A8(ctx, base);
	// lwz r3,400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82525554
	if (ctx.cr6.eq) goto loc_82525554;
	// bl 0x82525598
	ctx.lr = 0x82525554;
	sub_82525598(ctx, base);
loc_82525554:
	// lwz r3,404(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// stw r30,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252556c
	if (ctx.cr6.eq) goto loc_8252556C;
	// bl 0x82524840
	ctx.lr = 0x82525568;
	sub_82524840(ctx, base);
	// stw r30,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r30.u32);
loc_8252556C:
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// bl 0x82f91940
	ctx.lr = 0x82525574;
	sub_82F91940(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82518fd0
	ctx.lr = 0x8252557C;
	sub_82518FD0(ctx, base);
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252558c
	if (ctx.cr0.eq) goto loc_8252558C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x8252558C;
	sub_82691540(ctx, base);
loc_8252558C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82525598"))) PPC_WEAK_FUNC(sub_82525598);
PPC_FUNC_IMPL(__imp__sub_82525598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x825255A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82535c10
	ctx.lr = 0x825255B8;
	sub_82535C10(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825255d0
	if (ctx.cr6.eq) goto loc_825255D0;
	// bl 0x82524840
	ctx.lr = 0x825255CC;
	sub_82524840(ctx, base);
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
loc_825255D0:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825255e4
	if (ctx.cr6.eq) goto loc_825255E4;
	// bl 0x8250b630
	ctx.lr = 0x825255E0;
	sub_8250B630(ctx, base);
	// stw r29,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
loc_825255E4:
	// lis r30,-31957
	ctx.r30.s64 = -2094333952;
	// lwz r11,21068(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21068);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825255fc
	if (!ctx.cr6.eq) goto loc_825255FC;
	// bl 0x822e58d0
	ctx.lr = 0x825255F8;
	sub_822E58D0(ctx, base);
	// lwz r11,21068(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21068);
loc_825255FC:
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r3,288(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82525618
	if (ctx.cr6.eq) goto loc_82525618;
	// bl 0x822e89b8
	ctx.lr = 0x82525614;
	sub_822E89B8(ctx, base);
	// stw r6,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r6.u32);
loc_82525618:
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x8252562c
	if (ctx.cr6.eq) goto loc_8252562C;
	// bl 0x822e8a40
	ctx.lr = 0x82525628;
	sub_822E8A40(ctx, base);
	// stw r6,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r6.u32);
loc_8252562C:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82525674
	if (ctx.cr6.eq) goto loc_82525674;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r11,r11,24448
	ctx.r11.s64 = ctx.r11.s64 + 24448;
	// lwz r11,236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82525654
	if (ctx.cr6.eq) goto loc_82525654;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82525658
	goto loc_82525658;
loc_82525654:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82525658:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82525670
	if (ctx.cr6.eq) goto loc_82525670;
	// lwz r3,2248(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2248);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82525670
	if (ctx.cr6.eq) goto loc_82525670;
	// bl 0x8259dc28
	ctx.lr = 0x82525670;
	sub_8259DC28(ctx, base);
loc_82525670:
	// stw r29,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r29.u32);
loc_82525674:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82525688
	if (ctx.cr6.eq) goto loc_82525688;
	// bl 0x825469e0
	ctx.lr = 0x82525684;
	sub_825469E0(ctx, base);
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
loc_82525688:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f91940
	ctx.lr = 0x82525690;
	sub_82F91940(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x82525698;
	sub_82691540(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825256A4"))) PPC_WEAK_FUNC(sub_825256A4);
PPC_FUNC_IMPL(__imp__sub_825256A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825256A8"))) PPC_WEAK_FUNC(sub_825256A8);
PPC_FUNC_IMPL(__imp__sub_825256A8) {
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
	// lfs f0,412(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 412);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,400(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stfs f0,412(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 412, temp.u32);
	// beq cr6,0x82525708
	if (ctx.cr6.eq) goto loc_82525708;
	// lwz r11,408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82525700
	if (ctx.cr6.eq) goto loc_82525700;
	// bl 0x82525598
	ctx.lr = 0x825256F0;
	sub_82525598(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r11.u32);
	// stw r11,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
	// b 0x82525708
	goto loc_82525708;
loc_82525700:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82515e10
	ctx.lr = 0x82525708;
	sub_82515E10(ctx, base);
loc_82525708:
	// lwz r3,404(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252571c
	if (ctx.cr6.eq) goto loc_8252571C;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82524a90
	ctx.lr = 0x8252571C;
	sub_82524A90(ctx, base);
loc_8252571C:
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lwz r30,21120(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21120);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82525758
	if (ctx.cr6.eq) goto loc_82525758;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82920510
	ctx.lr = 0x82525734;
	sub_82920510(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82525758
	if (ctx.cr0.eq) goto loc_82525758;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82920258
	ctx.lr = 0x82525744;
	sub_82920258(ctx, base);
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// li r5,0
	ctx.r5.s64 = 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252575c
	if (!ctx.cr0.eq) goto loc_8252575C;
loc_82525758:
	// li r5,1
	ctx.r5.s64 = 1;
loc_8252575C:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82519230
	ctx.lr = 0x82525768;
	sub_82519230(ctx, base);
	// bl 0x8250eb18
	ctx.lr = 0x8252576C;
	sub_8250EB18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82525784
	if (ctx.cr0.eq) goto loc_82525784;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82519230
	ctx.lr = 0x82525784;
	sub_82519230(ctx, base);
loc_82525784:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82519310
	ctx.lr = 0x82525790;
	sub_82519310(ctx, base);
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

__attribute__((alias("__imp__sub_825257AC"))) PPC_WEAK_FUNC(sub_825257AC);
PPC_FUNC_IMPL(__imp__sub_825257AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825257B0"))) PPC_WEAK_FUNC(sub_825257B0);
PPC_FUNC_IMPL(__imp__sub_825257B0) {
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
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// ld r12,-12288(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -12288);
	// stwu r1,-13008(r1)
	ea = -13008 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x82525ac8
	if (ctx.cr6.lt) goto loc_82525AC8;
	// beq cr6,0x82525a4c
	if (ctx.cr6.eq) goto loc_82525A4C;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// blt cr6,0x82525950
	if (ctx.cr6.lt) goto loc_82525950;
	// beq cr6,0x825258ec
	if (ctx.cr6.eq) goto loc_825258EC;
	// cmplwi cr6,r4,5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 5, ctx.xer);
	// bge cr6,0x82525bd0
	if (!ctx.cr6.lt) goto loc_82525BD0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x825191a8
	ctx.lr = 0x825257FC;
	sub_825191A8(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,9792
	ctx.r3.s64 = ctx.r11.s64 + 9792;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82547f38
	ctx.lr = 0x82525810;
	sub_82547F38(ctx, base);
	// addi r3,r1,4432
	ctx.r3.s64 = ctx.r1.s64 + 4432;
	// bl 0x822a3128
	ctx.lr = 0x82525818;
	sub_822A3128(ctx, base);
	// li r3,416
	ctx.r3.s64 = 416;
	// bl 0x82691500
	ctx.lr = 0x82525820;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82525870
	if (ctx.cr0.eq) goto loc_82525870;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-24032
	ctx.r10.s64 = ctx.r10.s64 + -24032;
	// addic. r3,r31,16
	ctx.xer.ca = ctx.r31.u32 > 4294967279;
	ctx.r3.s64 = ctx.r31.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// beq 0x82525874
	if (ctx.cr0.eq) goto loc_82525874;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,9984
	ctx.r11.s64 = ctx.r11.s64 + 9984;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82512310
	ctx.lr = 0x8252586C;
	sub_82512310(ctx, base);
	// b 0x82525874
	goto loc_82525874;
loc_82525870:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82525874:
	// lwz r3,4436(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 4436);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// stw r31,4436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4436, ctx.r31.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,4432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4432, ctx.r11.u32);
	// beq 0x82525890
	if (ctx.cr0.eq) goto loc_82525890;
	// bl 0x82241d18
	ctx.lr = 0x82525890;
	sub_82241D18(ctx, base);
loc_82525890:
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r31,r11,21076
	ctx.r31.s64 = ctx.r11.s64 + 21076;
	// addi r4,r10,9808
	ctx.r4.s64 = ctx.r10.s64 + 9808;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r1,4476
	ctx.r5.s64 = ctx.r1.s64 + 4476;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8259c8e0
	ctx.lr = 0x825258B8;
	sub_8259C8E0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r11,9832
	ctx.r4.s64 = ctx.r11.s64 + 9832;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r1,6524
	ctx.r5.s64 = ctx.r1.s64 + 6524;
	// bl 0x8259c8e0
	ctx.lr = 0x825258D8;
	sub_8259C8E0(ctx, base);
	// addi r3,r1,4432
	ctx.r3.s64 = ctx.r1.s64 + 4432;
	// bl 0x8250b348
	ctx.lr = 0x825258E0;
	sub_8250B348(ctx, base);
	// lwz r11,4436(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 4436);
	// stw r3,372(r30)
	PPC_STORE_U32(ctx.r30.u32 + 372, ctx.r3.u32);
	// b 0x82525bc0
	goto loc_82525BC0;
loc_825258EC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825191a8
	ctx.lr = 0x825258F8;
	sub_825191A8(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,9888
	ctx.r3.s64 = ctx.r11.s64 + 9888;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82547f38
	ctx.lr = 0x8252590C;
	sub_82547F38(ctx, base);
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x82691500
	ctx.lr = 0x82525914;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82525944
	if (ctx.cr0.eq) goto loc_82525944;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,9936
	ctx.r11.s64 = ctx.r11.s64 + 9936;
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82515c20
	ctx.lr = 0x82525940;
	sub_82515C20(ctx, base);
	// b 0x82525948
	goto loc_82525948;
loc_82525944:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82525948:
	// stw r3,400(r30)
	PPC_STORE_U32(ctx.r30.u32 + 400, ctx.r3.u32);
	// b 0x82525bd0
	goto loc_82525BD0;
loc_82525950:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825191a8
	ctx.lr = 0x8252595C;
	sub_825191A8(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,9852
	ctx.r3.s64 = ctx.r11.s64 + 9852;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82547f38
	ctx.lr = 0x82525970;
	sub_82547F38(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822a3128
	ctx.lr = 0x82525978;
	sub_822A3128(ctx, base);
	// li r3,432
	ctx.r3.s64 = 432;
	// bl 0x82691500
	ctx.lr = 0x82525980;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825259d0
	if (ctx.cr0.eq) goto loc_825259D0;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-24032
	ctx.r10.s64 = ctx.r10.s64 + -24032;
	// addic. r3,r31,16
	ctx.xer.ca = ctx.r31.u32 > 4294967279;
	ctx.r3.s64 = ctx.r31.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// beq 0x825259d4
	if (ctx.cr0.eq) goto loc_825259D4;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,10008
	ctx.r11.s64 = ctx.r11.s64 + 10008;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82530e28
	ctx.lr = 0x825259CC;
	sub_82530E28(ctx, base);
	// b 0x825259d4
	goto loc_825259D4;
loc_825259D0:
	// li r31,0
	ctx.r31.s64 = 0;
loc_825259D4:
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// beq 0x825259f0
	if (ctx.cr0.eq) goto loc_825259F0;
	// bl 0x82241d18
	ctx.lr = 0x825259F0;
	sub_82241D18(ctx, base);
loc_825259F0:
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r31,r11,21076
	ctx.r31.s64 = ctx.r11.s64 + 21076;
	// addi r4,r10,9864
	ctx.r4.s64 = ctx.r10.s64 + 9864;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r1,204
	ctx.r5.s64 = ctx.r1.s64 + 204;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8259c8e0
	ctx.lr = 0x82525A18;
	sub_8259C8E0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r11,9876
	ctx.r4.s64 = ctx.r11.s64 + 9876;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r1,2252
	ctx.r5.s64 = ctx.r1.s64 + 2252;
	// bl 0x8259c8e0
	ctx.lr = 0x82525A38;
	sub_8259C8E0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8250b348
	ctx.lr = 0x82525A40;
	sub_8250B348(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stw r3,364(r30)
	PPC_STORE_U32(ctx.r30.u32 + 364, ctx.r3.u32);
	// b 0x82525bc0
	goto loc_82525BC0;
loc_82525A4C:
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lwz r11,21120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21120);
	// lwz r11,240(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82525a74
	if (ctx.cr0.eq) goto loc_82525A74;
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// andi. r10,r10,239
	ctx.r10.u64 = ctx.r10.u64 & 239;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// b 0x82525a7c
	goto loc_82525A7C;
loc_82525A74:
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// ori r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 | 16;
loc_82525A7C:
	// stb r10,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r10.u8);
	// lwz r11,392(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 392);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82525ab4
	if (ctx.cr6.eq) goto loc_82525AB4;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r11,r30,376
	ctx.r11.s64 = ctx.r30.s64 + 376;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82525aa0
	if (!ctx.cr6.eq) goto loc_82525AA0;
	// bl 0x82fa1518
	ctx.lr = 0x82525AA0;
	sub_82FA1518(ctx, base);
loc_82525AA0:
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82525AB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82525AB4:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82519230
	ctx.lr = 0x82525AC4;
	sub_82519230(ctx, base);
	// b 0x82525bd0
	goto loc_82525BD0;
loc_82525AC8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825191a8
	ctx.lr = 0x82525AD4;
	sub_825191A8(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,9736
	ctx.r3.s64 = ctx.r11.s64 + 9736;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82547f38
	ctx.lr = 0x82525AE8;
	sub_82547F38(ctx, base);
	// addi r3,r1,8704
	ctx.r3.s64 = ctx.r1.s64 + 8704;
	// bl 0x822a3128
	ctx.lr = 0x82525AF0;
	sub_822A3128(ctx, base);
	// li r3,424
	ctx.r3.s64 = 424;
	// bl 0x82691500
	ctx.lr = 0x82525AF8;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82525b48
	if (ctx.cr0.eq) goto loc_82525B48;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-24032
	ctx.r10.s64 = ctx.r10.s64 + -24032;
	// addic. r3,r31,16
	ctx.xer.ca = ctx.r31.u32 > 4294967279;
	ctx.r3.s64 = ctx.r31.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// beq 0x82525b4c
	if (ctx.cr0.eq) goto loc_82525B4C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,9960
	ctx.r11.s64 = ctx.r11.s64 + 9960;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8252c4e0
	ctx.lr = 0x82525B44;
	sub_8252C4E0(ctx, base);
	// b 0x82525b4c
	goto loc_82525B4C;
loc_82525B48:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82525B4C:
	// lwz r3,8708(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 8708);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// stw r31,8708(r1)
	PPC_STORE_U32(ctx.r1.u32 + 8708, ctx.r31.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,8704(r1)
	PPC_STORE_U32(ctx.r1.u32 + 8704, ctx.r11.u32);
	// beq 0x82525b68
	if (ctx.cr0.eq) goto loc_82525B68;
	// bl 0x82241d18
	ctx.lr = 0x82525B68;
	sub_82241D18(ctx, base);
loc_82525B68:
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r31,r11,21076
	ctx.r31.s64 = ctx.r11.s64 + 21076;
	// addi r4,r10,9752
	ctx.r4.s64 = ctx.r10.s64 + 9752;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r1,8748
	ctx.r5.s64 = ctx.r1.s64 + 8748;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8259c8e0
	ctx.lr = 0x82525B90;
	sub_8259C8E0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r11,9772
	ctx.r4.s64 = ctx.r11.s64 + 9772;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r1,10796
	ctx.r5.s64 = ctx.r1.s64 + 10796;
	// bl 0x8259c8e0
	ctx.lr = 0x82525BB0;
	sub_8259C8E0(ctx, base);
	// addi r3,r1,8704
	ctx.r3.s64 = ctx.r1.s64 + 8704;
	// bl 0x8250b348
	ctx.lr = 0x82525BB8;
	sub_8250B348(ctx, base);
	// lwz r11,8708(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 8708);
	// stw r3,368(r30)
	PPC_STORE_U32(ctx.r30.u32 + 368, ctx.r3.u32);
loc_82525BC0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82525bd0
	if (ctx.cr6.eq) goto loc_82525BD0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82241d18
	ctx.lr = 0x82525BD0;
	sub_82241D18(ctx, base);
loc_82525BD0:
	// bl 0x825143c8
	ctx.lr = 0x82525BD4;
	sub_825143C8(ctx, base);
	// lwz r11,416(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 416);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,416(r30)
	PPC_STORE_U32(ctx.r30.u32 + 416, ctx.r11.u32);
	// addi r1,r1,13008
	ctx.r1.s64 = ctx.r1.s64 + 13008;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82525BF8"))) PPC_WEAK_FUNC(sub_82525BF8);
PPC_FUNC_IMPL(__imp__sub_82525BF8) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82525c40
	if (!ctx.cr6.eq) goto loc_82525C40;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x82525C1C;
	sub_82691500(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82525c40
	if (!ctx.cr0.eq) goto loc_82525C40;
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
	ctx.lr = 0x82525C40;
	sub_82240040(ctx, base);
loc_82525C40:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,9912
	ctx.r11.s64 = ctx.r11.s64 + 9912;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82525C6C"))) PPC_WEAK_FUNC(sub_82525C6C);
PPC_FUNC_IMPL(__imp__sub_82525C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82525C70"))) PPC_WEAK_FUNC(sub_82525C70);
PPC_FUNC_IMPL(__imp__sub_82525C70) {
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
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,404(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82525c9c
	if (ctx.cr6.eq) goto loc_82525C9C;
	// bl 0x82524840
	ctx.lr = 0x82525C94;
	sub_82524840(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r11.u32);
loc_82525C9C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825191a8
	ctx.lr = 0x82525CA8;
	sub_825191A8(ctx, base);
	// bl 0x82240590
	ctx.lr = 0x82525CAC;
	sub_82240590(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82525CC8"))) PPC_WEAK_FUNC(sub_82525CC8);
PPC_FUNC_IMPL(__imp__sub_82525CC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// addi r3,r11,-27744
	ctx.r3.s64 = ctx.r11.s64 + -27744;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82525CD4"))) PPC_WEAK_FUNC(sub_82525CD4);
PPC_FUNC_IMPL(__imp__sub_82525CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82525CD8"))) PPC_WEAK_FUNC(sub_82525CD8);
PPC_FUNC_IMPL(__imp__sub_82525CD8) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82525d20
	if (!ctx.cr6.eq) goto loc_82525D20;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x82525CFC;
	sub_82691500(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82525d20
	if (!ctx.cr0.eq) goto loc_82525D20;
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
	ctx.lr = 0x82525D20;
	sub_82240040(ctx, base);
loc_82525D20:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,9936
	ctx.r11.s64 = ctx.r11.s64 + 9936;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82525D4C"))) PPC_WEAK_FUNC(sub_82525D4C);
PPC_FUNC_IMPL(__imp__sub_82525D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82525D50"))) PPC_WEAK_FUNC(sub_82525D50);
PPC_FUNC_IMPL(__imp__sub_82525D50) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,408(r3)
	PPC_STORE_U32(ctx.r3.u32 + 408, ctx.r11.u32);
	// b 0x825191a8
	sub_825191A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82525D64"))) PPC_WEAK_FUNC(sub_82525D64);
PPC_FUNC_IMPL(__imp__sub_82525D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82525D68"))) PPC_WEAK_FUNC(sub_82525D68);
PPC_FUNC_IMPL(__imp__sub_82525D68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// addi r3,r11,-27704
	ctx.r3.s64 = ctx.r11.s64 + -27704;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82525D74"))) PPC_WEAK_FUNC(sub_82525D74);
PPC_FUNC_IMPL(__imp__sub_82525D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82525D78"))) PPC_WEAK_FUNC(sub_82525D78);
PPC_FUNC_IMPL(__imp__sub_82525D78) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82525dc0
	if (!ctx.cr6.eq) goto loc_82525DC0;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x82525D9C;
	sub_82691500(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82525dc0
	if (!ctx.cr0.eq) goto loc_82525DC0;
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
	ctx.lr = 0x82525DC0;
	sub_82240040(ctx, base);
loc_82525DC0:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,9960
	ctx.r11.s64 = ctx.r11.s64 + 9960;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82525DEC"))) PPC_WEAK_FUNC(sub_82525DEC);
PPC_FUNC_IMPL(__imp__sub_82525DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82525DF0"))) PPC_WEAK_FUNC(sub_82525DF0);
PPC_FUNC_IMPL(__imp__sub_82525DF0) {
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
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,368(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82525e1c
	if (ctx.cr6.eq) goto loc_82525E1C;
	// bl 0x8250b630
	ctx.lr = 0x82525E14;
	sub_8250B630(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r11.u32);
loc_82525E1C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825191a8
	ctx.lr = 0x82525E28;
	sub_825191A8(ctx, base);
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

__attribute__((alias("__imp__sub_82525E3C"))) PPC_WEAK_FUNC(sub_82525E3C);
PPC_FUNC_IMPL(__imp__sub_82525E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82525E40"))) PPC_WEAK_FUNC(sub_82525E40);
PPC_FUNC_IMPL(__imp__sub_82525E40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// addi r3,r11,-27664
	ctx.r3.s64 = ctx.r11.s64 + -27664;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82525E4C"))) PPC_WEAK_FUNC(sub_82525E4C);
PPC_FUNC_IMPL(__imp__sub_82525E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82525E50"))) PPC_WEAK_FUNC(sub_82525E50);
PPC_FUNC_IMPL(__imp__sub_82525E50) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82525e98
	if (!ctx.cr6.eq) goto loc_82525E98;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x82525E74;
	sub_82691500(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82525e98
	if (!ctx.cr0.eq) goto loc_82525E98;
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
	ctx.lr = 0x82525E98;
	sub_82240040(ctx, base);
loc_82525E98:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,9984
	ctx.r11.s64 = ctx.r11.s64 + 9984;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82525EC4"))) PPC_WEAK_FUNC(sub_82525EC4);
PPC_FUNC_IMPL(__imp__sub_82525EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82525EC8"))) PPC_WEAK_FUNC(sub_82525EC8);
PPC_FUNC_IMPL(__imp__sub_82525EC8) {
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
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,372(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82525ef4
	if (ctx.cr6.eq) goto loc_82525EF4;
	// bl 0x8250b630
	ctx.lr = 0x82525EEC;
	sub_8250B630(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r11.u32);
loc_82525EF4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825191a8
	ctx.lr = 0x82525F00;
	sub_825191A8(ctx, base);
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

__attribute__((alias("__imp__sub_82525F14"))) PPC_WEAK_FUNC(sub_82525F14);
PPC_FUNC_IMPL(__imp__sub_82525F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82525F18"))) PPC_WEAK_FUNC(sub_82525F18);
PPC_FUNC_IMPL(__imp__sub_82525F18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// addi r3,r11,-27624
	ctx.r3.s64 = ctx.r11.s64 + -27624;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82525F24"))) PPC_WEAK_FUNC(sub_82525F24);
PPC_FUNC_IMPL(__imp__sub_82525F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82525F28"))) PPC_WEAK_FUNC(sub_82525F28);
PPC_FUNC_IMPL(__imp__sub_82525F28) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82525f70
	if (!ctx.cr6.eq) goto loc_82525F70;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x82525F4C;
	sub_82691500(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82525f70
	if (!ctx.cr0.eq) goto loc_82525F70;
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
	ctx.lr = 0x82525F70;
	sub_82240040(ctx, base);
loc_82525F70:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,10008
	ctx.r11.s64 = ctx.r11.s64 + 10008;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82525F9C"))) PPC_WEAK_FUNC(sub_82525F9C);
PPC_FUNC_IMPL(__imp__sub_82525F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82525FA0"))) PPC_WEAK_FUNC(sub_82525FA0);
PPC_FUNC_IMPL(__imp__sub_82525FA0) {
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
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,364(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82525fcc
	if (ctx.cr6.eq) goto loc_82525FCC;
	// bl 0x8250b630
	ctx.lr = 0x82525FC4;
	sub_8250B630(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r11.u32);
loc_82525FCC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825191a8
	ctx.lr = 0x82525FD8;
	sub_825191A8(ctx, base);
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

__attribute__((alias("__imp__sub_82525FEC"))) PPC_WEAK_FUNC(sub_82525FEC);
PPC_FUNC_IMPL(__imp__sub_82525FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82525FF0"))) PPC_WEAK_FUNC(sub_82525FF0);
PPC_FUNC_IMPL(__imp__sub_82525FF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// addi r3,r11,-27584
	ctx.r3.s64 = ctx.r11.s64 + -27584;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82525FFC"))) PPC_WEAK_FUNC(sub_82525FFC);
PPC_FUNC_IMPL(__imp__sub_82525FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82526000"))) PPC_WEAK_FUNC(sub_82526000);
PPC_FUNC_IMPL(__imp__sub_82526000) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7648
	ctx.lr = 0x82526008;
	__savegprlr_16(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r16,396(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// addi r11,r11,5228
	ctx.r11.s64 = ctx.r11.s64 + 5228;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r17,r3,1664
	ctx.r17.s64 = ctx.r3.s64 + 1664;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// stw r29,1536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1536, ctx.r29.u32);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// stw r29,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r29.u32);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// stw r29,1548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1548, ctx.r29.u32);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// stw r29,1552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1552, ctx.r29.u32);
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// stw r29,1556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1556, ctx.r29.u32);
	// mr r20,r9
	ctx.r20.u64 = ctx.r9.u64;
	// stw r29,1560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1560, ctx.r29.u32);
	// mr r19,r10
	ctx.r19.u64 = ctx.r10.u64;
	// bl 0x8226c200
	ctx.lr = 0x82526070;
	sub_8226C200(ctx, base);
	// lwz r11,404(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// li r23,1
	ctx.r23.s64 = 1;
	// stw r26,1692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1692, ctx.r26.u32);
	// addi r22,r31,1704
	ctx.r22.s64 = ctx.r31.s64 + 1704;
	// stw r23,1696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1696, ctx.r23.u32);
	// li r26,3
	ctx.r26.s64 = 3;
	// addi r25,r22,32
	ctx.r25.s64 = ctx.r22.s64 + 32;
	// stw r11,1688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1688, ctx.r11.u32);
loc_82526090:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822402c8
	ctx.lr = 0x825260A0;
	sub_822402C8(ctx, base);
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r25,r25,64
	ctx.r25.s64 = ctx.r25.s64 + 64;
	// bge 0x82526090
	if (!ctx.cr0.lt) goto loc_82526090;
	// lwz r11,420(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// li r24,4
	ctx.r24.s64 = 4;
	// lwz r10,412(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 412);
	// addi r8,r31,988
	ctx.r8.s64 = ctx.r31.s64 + 988;
	// cntlzw r7,r11
	ctx.r7.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// stw r28,1964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1964, ctx.r28.u32);
	// stw r27,1968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1968, ctx.r27.u32);
	// addi r9,r30,184
	ctx.r9.s64 = ctx.r30.s64 + 184;
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// stw r29,1960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1960, ctx.r29.u32);
	// stw r11,1988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1988, ctx.r11.u32);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// stw r10,4600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4600, ctx.r10.u32);
	// addi r10,r31,752
	ctx.r10.s64 = ctx.r31.s64 + 752;
	// stw r29,1980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1980, ctx.r29.u32);
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// stw r29,1984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1984, ctx.r29.u32);
	// addi r11,r30,60
	ctx.r11.s64 = ctx.r30.s64 + 60;
	// stw r29,1992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1992, ctx.r29.u32);
	// li r18,12
	ctx.r18.s64 = 12;
	// stw r29,1996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1996, ctx.r29.u32);
	// stw r29,2000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2000, ctx.r29.u32);
	// stw r29,2004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2004, ctx.r29.u32);
	// stw r29,4604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4604, ctx.r29.u32);
	// stw r29,4608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4608, ctx.r29.u32);
	// stw r7,4616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4616, ctx.r7.u32);
	// std r29,4624(r31)
	PPC_STORE_U64(ctx.r31.u32 + 4624, ctx.r29.u64);
loc_82526118:
	// lvrx v0,r18,r11
	temp.u32 = ctx.r18.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v12,v67,v67
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v67.u8));
	// lvlx v11,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v13,v77,v77
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v77.u8));
	// vsldoi v0,v0,v0,4
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v0.u8), 12));
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// vor v0,v11,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vsel v12,v0,v13,v12
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// stvx128 v12,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lfsu f0,4(r9)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r9.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	ctx.f0.f64 = double(temp.f32);
	// stfsu f0,4(r8)
	temp.f32 = float(ctx.f0.f64);
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x82526118
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82526118;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// addi r8,r31,1276
	ctx.r8.s64 = ctx.r31.s64 + 1276;
	// addi r9,r30,200
	ctx.r9.s64 = ctx.r30.s64 + 200;
	// addi r10,r31,1088
	ctx.r10.s64 = ctx.r31.s64 + 1088;
	// addi r11,r30,108
	ctx.r11.s64 = ctx.r30.s64 + 108;
loc_82526164:
	// lvrx v0,r18,r11
	temp.u32 = ctx.r18.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v12,v67,v67
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v67.u8));
	// lvlx v11,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v13,v77,v77
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v77.u8));
	// vsldoi v0,v0,v0,4
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v0.u8), 12));
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// vor v0,v11,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vsel v12,v0,v13,v12
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// stvx128 v12,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lfsu f0,4(r9)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r9.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	ctx.f0.f64 = double(temp.f32);
	// stfsu f0,4(r8)
	temp.f32 = float(ctx.f0.f64);
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x82526164
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82526164;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// addi r6,r30,524
	ctx.r6.s64 = ctx.r30.s64 + 524;
	// addi r7,r11,-26608
	ctx.r7.s64 = ctx.r11.s64 + -26608;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,64
	ctx.r4.s64 = ctx.r31.s64 + 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82526828
	ctx.lr = 0x825261B4;
	sub_82526828(ctx, base);
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// addi r6,r30,668
	ctx.r6.s64 = ctx.r30.s64 + 668;
	// addi r7,r11,-25952
	ctx.r7.s64 = ctx.r11.s64 + -25952;
	// addi r4,r31,400
	ctx.r4.s64 = ctx.r31.s64 + 400;
	// bl 0x82526828
	ctx.lr = 0x825261C8;
	sub_82526828(ctx, base);
	// addi r11,r30,236
	ctx.r11.s64 = ctx.r30.s64 + 236;
	// stw r24,740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 740, ctx.r24.u32);
	// stw r11,736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 736, ctx.r11.u32);
	// stw r24,744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 744, ctx.r24.u32);
	// lfs f0,224(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1012(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1012, temp.u32);
	// stw r29,748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 748, ctx.r29.u32);
	// stw r23,1016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1016, ctx.r23.u32);
	// stw r29,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r29.u32);
	// lwz r9,228(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// stw r9,1020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1020, ctx.r9.u32);
	// lwz r9,232(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	// stw r9,1024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1024, ctx.r9.u32);
	// lwz r9,884(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 884);
	// stw r9,1028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1028, ctx.r9.u32);
	// lwz r9,896(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 896);
	// stw r9,1032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1032, ctx.r9.u32);
	// lwz r9,900(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 900);
	// stw r9,1036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1036, ctx.r9.u32);
	// lwz r11,372(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r10,380(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r11.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r11.u32);
	// stw r29,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r29.u32);
	// bl 0x8226d8e8
	ctx.lr = 0x82526234;
	sub_8226D8E8(ctx, base);
	// lis r21,-31958
	ctx.r21.s64 = -2094399488;
	// lwz r3,21120(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 21120);
	// bl 0x829204e8
	ctx.lr = 0x82526240;
	sub_829204E8(ctx, base);
	// stw r3,1072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1072, ctx.r3.u32);
	// lfs f0,224(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1296(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1296, temp.u32);
	// stw r29,1084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1084, ctx.r29.u32);
	// stw r23,1332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1332, ctx.r23.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r11,228(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// addi r26,r22,-48
	ctx.r26.s64 = ctx.r22.s64 + -48;
	// stw r11,1300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1300, ctx.r11.u32);
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// lwz r9,232(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	// lfs f0,-2340(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,1304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1304, ctx.r9.u32);
	// addi r27,r11,24600
	ctx.r27.s64 = ctx.r11.s64 + 24600;
	// lwz r10,884(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 884);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r10,1308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1308, ctx.r10.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,888(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 888);
	// addi r28,r31,1560
	ctx.r28.s64 = ctx.r31.s64 + 1560;
	// stw r10,1312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1312, ctx.r10.u32);
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// lwz r11,896(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 896);
	// stw r11,1316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1316, ctx.r11.u32);
	// lwz r11,900(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 900);
	// stw r11,1320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1320, ctx.r11.u32);
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// stw r11,1324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1324, ctx.r11.u32);
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// stw r11,1328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1328, ctx.r11.u32);
	// lwz r11,892(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 892);
	// stw r11,1488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1488, ctx.r11.u32);
	// lwz r11,916(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 916);
	// stw r11,1504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1504, ctx.r11.u32);
	// lwz r11,904(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 904);
	// stw r11,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r11.u32);
	// lwz r11,908(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 908);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,1496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1496, ctx.r11.u32);
	// lwz r11,912(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 912);
	// stw r11,1500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1500, ctx.r11.u32);
	// lwz r11,920(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 920);
	// stw r11,1508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1508, ctx.r11.u32);
	// lwz r11,924(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 924);
	// stw r11,1512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1512, ctx.r11.u32);
	// lwz r11,928(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 928);
	// stw r11,1516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1516, ctx.r11.u32);
	// lwz r11,932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 932);
	// stw r11,1520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1520, ctx.r11.u32);
	// lwz r11,936(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 936);
	// stw r11,1524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1524, ctx.r11.u32);
	// lfs f0,12(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
loc_82526328:
	// li r3,224
	ctx.r3.s64 = 224;
	// bl 0x82691500
	ctx.lr = 0x82526330;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82526378
	if (ctx.cr0.eq) goto loc_82526378;
	// addi r11,r27,20
	ctx.r11.s64 = ctx.r27.s64 + 20;
	// vor128 v12,v67,v67
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v67.u8));
	// li r10,20
	ctx.r10.s64 = 20;
	// vor128 v13,v77,v77
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v77.u8));
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lfs f3,16(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f2,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lvrx v0,r18,r11
	temp.u32 = ctx.r18.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx v11,r27,r10
	temp.u32 = ctx.r27.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi v0,v0,v0,4
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v0.u8), 12));
	// vor v0,v11,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vsel v1,v0,v13,v12
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// bl 0x82521fd8
	ctx.lr = 0x82526374;
	sub_82521FD8(ctx, base);
	// b 0x8252637c
	goto loc_8252637C;
loc_82526378:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8252637C:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r3,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r3.u32);
	// stw r29,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r29.u32);
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// stw r29,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r29.u32);
	// stw r11,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r11.u32);
	// stw r29,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r29.u32);
	// stwu r29,24(r28)
	ea = 24 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r28.u32 = ea;
	// stw r29,72(r26)
	PPC_STORE_U32(ctx.r26.u32 + 72, ctx.r29.u32);
	// stw r24,48(r26)
	PPC_STORE_U32(ctx.r26.u32 + 48, ctx.r24.u32);
	// stw r29,68(r26)
	PPC_STORE_U32(ctx.r26.u32 + 68, ctx.r29.u32);
	// stwu r29,64(r26)
	ea = 64 + ctx.r26.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r26.u32 = ea;
	// bne 0x82526328
	if (!ctx.cr0.eq) goto loc_82526328;
	// lis r9,-32173
	ctx.r9.s64 = -2108489728;
	// stw r31,1340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1340, ctx.r31.u32);
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// stw r31,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r31.u32);
	// addi r9,r9,-25216
	ctx.r9.s64 = ctx.r9.s64 + -25216;
	// vor128 v13,v77,v77
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v77.u8));
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// vor128 v10,v67,v67
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)ctx.v67.u8));
	// stw r9,1336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1336, ctx.r9.u32);
	// addi r10,r10,-25584
	ctx.r10.s64 = ctx.r10.s64 + -25584;
	// li r8,1344
	ctx.r8.s64 = 1344;
	// vor128 v12,v77,v77
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v77.u8));
	// stw r10,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r10.u32);
	// addi r10,r30,36
	ctx.r10.s64 = ctx.r30.s64 + 36;
	// vor128 v9,v67,v67
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)ctx.v67.u8));
	// li r7,1376
	ctx.r7.s64 = 1376;
	// addi r9,r30,48
	ctx.r9.s64 = ctx.r30.s64 + 48;
	// vor128 v8,v67,v67
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_load_si128((__m128i*)ctx.v67.u8));
	// vor128 v11,v77,v77
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v77.u8));
	// li r6,1360
	ctx.r6.s64 = 1360;
	// lis r5,-32227
	ctx.r5.s64 = -2112028672;
	// lis r4,-32173
	ctx.r4.s64 = -2108489728;
	// lis r27,-32173
	ctx.r27.s64 = -2108489728;
	// addi r4,r4,-24880
	ctx.r4.s64 = ctx.r4.s64 + -24880;
	// addi r3,r30,944
	ctx.r3.s64 = ctx.r30.s64 + 944;
	// lfs f0,-24756(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -24756);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r27,-24896
	ctx.r5.s64 = ctx.r27.s64 + -24896;
	// addi r28,r30,948
	ctx.r28.s64 = ctx.r30.s64 + 948;
	// lvlx v0,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx v7,r18,r11
	temp.u32 = ctx.r18.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vsldoi v7,v7,v7,4
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v7.u8), 12));
	// vor v0,v0,v7
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vsel v10,v0,v13,v10
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// stvx128 v10,r31,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvrx v0,r18,r10
	temp.u32 = ctx.r18.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vsldoi v0,v0,v0,4
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v0.u8), 12));
	// lvlx v13,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor v0,v13,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vsel v13,v0,v12,v9
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v12.u8))));
	// stvx128 v13,r31,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvrx v13,r18,r9
	temp.u32 = ctx.r18.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vsldoi v13,v13,v13,4
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v13.u8), 12));
	// lvlx v0,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor v0,v0,v13
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vsel v13,v0,v11,v8
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v11.u8))));
	// stvx128 v13,r31,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,176(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1392(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1392, temp.u32);
	// lfs f13,180(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1400(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1400, temp.u32);
	// lfs f13,184(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	ctx.f13.f64 = double(temp.f32);
	// stw r29,1460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1460, ctx.r29.u32);
	// stfs f13,1396(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1396, temp.u32);
	// stfs f0,1404(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1404, temp.u32);
	// lwz r11,228(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// stw r11,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r11.u32);
	// lwz r11,232(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	// stw r11,1416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1416, ctx.r11.u32);
	// lwz r11,896(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 896);
	// stw r11,1420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1420, ctx.r11.u32);
	// lwz r11,900(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 900);
	// stw r11,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r11.u32);
	// lwz r11,940(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 940);
	// stw r11,1424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1424, ctx.r11.u32);
	// lwz r11,944(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 944);
	// stw r11,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r11.u32);
	// lwz r11,948(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 948);
	// stw r11,1436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1436, ctx.r11.u32);
	// lwz r11,952(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 952);
	// stfs f0,1408(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1408, temp.u32);
	// stw r4,1464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1464, ctx.r4.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r5,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r5.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r11.u32);
	// stw r31,1468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1468, ctx.r31.u32);
	// bl 0x82546708
	ctx.lr = 0x825264E4;
	sub_82546708(ctx, base);
	// stw r3,4660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4660, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82546708
	ctx.lr = 0x825264F8;
	sub_82546708(ctx, base);
	// stw r3,4664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4664, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252ad58
	ctx.lr = 0x82526504;
	sub_8252AD58(ctx, base);
	// lwz r9,388(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// addi r11,r31,4568
	ctx.r11.s64 = ctx.r31.s64 + 4568;
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
loc_82526514:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82526534
	if (!ctx.cr6.lt) goto loc_82526534;
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// extsb. r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82526514
	if (!ctx.cr0.eq) goto loc_82526514;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
loc_82526534:
	// bne cr6,0x8252653c
	if (!ctx.cr6.eq) goto loc_8252653C;
	// stb r29,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r29.u8);
loc_8252653C:
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// stw r31,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r31.u32);
	// lis r10,-32117
	ctx.r10.s64 = -2104819712;
	// lis r9,-32117
	ctx.r9.s64 = -2104819712;
	// addi r11,r11,-24456
	ctx.r11.s64 = ctx.r11.s64 + -24456;
	// addi r10,r10,9280
	ctx.r10.s64 = ctx.r10.s64 + 9280;
	// addi r9,r9,9280
	ctx.r9.s64 = ctx.r9.s64 + 9280;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lis r8,-32117
	ctx.r8.s64 = -2104819712;
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// lis r7,-32117
	ctx.r7.s64 = -2104819712;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// lis r6,-32117
	ctx.r6.s64 = -2104819712;
	// stw r31,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r31.u32);
	// addi r11,r8,9280
	ctx.r11.s64 = ctx.r8.s64 + 9280;
	// addi r10,r7,9280
	ctx.r10.s64 = ctx.r7.s64 + 9280;
	// addi r9,r6,9280
	ctx.r9.s64 = ctx.r6.s64 + 9280;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// bl 0x8226d8e8
	ctx.lr = 0x82526590;
	sub_8226D8E8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8226e978
	ctx.lr = 0x8252659C;
	sub_8226E978(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,21120(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 21120);
	// bl 0x8226ec08
	ctx.lr = 0x825265A8;
	sub_8226EC08(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// addi r11,r11,12044
	ctx.r11.s64 = ctx.r11.s64 + 12044;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r10,r10,12020
	ctx.r10.s64 = ctx.r10.s64 + 12020;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8226e220
	ctx.lr = 0x825265E8;
	sub_8226E220(ctx, base);
	// stw r3,4612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4612, ctx.r3.u32);
	// lwz r10,4600(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4600);
	// lwz r11,6348(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6348);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8252664c
	if (ctx.cr6.eq) goto loc_8252664C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8252663c
	if (ctx.cr6.eq) goto loc_8252663C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82526634
	if (ctx.cr6.eq) goto loc_82526634;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82526628
	if (ctx.cr6.eq) goto loc_82526628;
	// ble cr6,0x82526654
	if (!ctx.cr6.gt) goto loc_82526654;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bgt cr6,0x82526654
	if (ctx.cr6.gt) goto loc_82526654;
loc_82526620:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x82526650
	goto loc_82526650;
loc_82526628:
	// lwz r11,6352(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6352);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82526620
	if (ctx.cr6.eq) goto loc_82526620;
loc_82526634:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82526650
	goto loc_82526650;
loc_8252663C:
	// lwz r11,6352(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6352);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// li r11,3
	ctx.r11.s64 = 3;
	// bne cr6,0x82526650
	if (!ctx.cr6.eq) goto loc_82526650;
loc_8252664C:
	// li r11,8
	ctx.r11.s64 = 8;
loc_82526650:
	// stw r11,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
loc_82526654:
	// lwz r11,4616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4616);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82526684
	if (ctx.cr6.eq) goto loc_82526684;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_82526664:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82527fb0
	ctx.lr = 0x82526674;
	sub_82527FB0(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// blt cr6,0x82526664
	if (ctx.cr6.lt) goto loc_82526664;
	// b 0x8252668c
	goto loc_8252668C;
loc_82526684:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82527878
	ctx.lr = 0x8252668C;
	sub_82527878(ctx, base);
loc_8252668C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825268f0
	ctx.lr = 0x82526694;
	sub_825268F0(ctx, base);
	// stw r29,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r29.u32);
	// lwz r11,16(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825266a8
	if (!ctx.cr6.eq) goto loc_825266A8;
	// bl 0x82fa1518
	ctx.lr = 0x825266A8;
	sub_82FA1518(ctx, base);
loc_825266A8:
	// lwz r3,16(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r7,256
	ctx.r7.s64 = 256;
	// addi r5,r11,-7760
	ctx.r5.s64 = ctx.r11.s64 + -7760;
	// addi r6,r31,3032
	ctx.r6.s64 = ctx.r31.s64 + 3032;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825266D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825266e0
	if (!ctx.cr6.eq) goto loc_825266E0;
	// bl 0x82fa1518
	ctx.lr = 0x825266E0;
	sub_82FA1518(ctx, base);
loc_825266E0:
	// lwz r3,16(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r7,256
	ctx.r7.s64 = 256;
	// addi r5,r11,-5224
	ctx.r5.s64 = ctx.r11.s64 + -5224;
	// addi r6,r31,3544
	ctx.r6.s64 = ctx.r31.s64 + 3544;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82526708;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82526718
	if (!ctx.cr6.eq) goto loc_82526718;
	// bl 0x82fa1518
	ctx.lr = 0x82526718;
	sub_82FA1518(ctx, base);
loc_82526718:
	// lwz r3,16(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r7,256
	ctx.r7.s64 = 256;
	// addi r5,r11,11172
	ctx.r5.s64 = ctx.r11.s64 + 11172;
	// addi r6,r31,4056
	ctx.r6.s64 = ctx.r31.s64 + 4056;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82526740;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// addi r11,r11,12068
	ctx.r11.s64 = ctx.r11.s64 + 12068;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82524730
	ctx.lr = 0x82526778;
	sub_82524730(ctx, base);
	// stw r3,4604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4604, ctx.r3.u32);
	// addi r11,r30,156
	ctx.r11.s64 = ctx.r30.s64 + 156;
	// vor128 v12,v67,v67
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v67.u8));
	// vor128 v13,v77,v77
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v77.u8));
	// li r10,4640
	ctx.r10.s64 = 4640;
	// lwz r8,972(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 972);
	// li r3,136
	ctx.r3.s64 = 136;
	// lwz r6,228(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// stw r8,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// lvrx v0,r18,r11
	temp.u32 = ctx.r18.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lwz r9,956(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 956);
	// lvlx v11,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r11,968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 968);
	// vsldoi v0,v0,v0,4
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v0.u8), 12));
	// lfs f0,224(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,964(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 964);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stw r6,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r6.u32);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// vor v0,v11,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lwz r9,960(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 960);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// vsel v12,v0,v13,v12
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r7,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// stvx128 v12,r31,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,220(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4656(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4656, temp.u32);
	// bl 0x82691500
	ctx.lr = 0x825267EC;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82526808
	if (ctx.cr0.eq) goto loc_82526808;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r6,1688(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1688);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8252bb70
	ctx.lr = 0x82526804;
	sub_8252BB70(ctx, base);
	// b 0x8252680c
	goto loc_8252680C;
loc_82526808:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8252680C:
	// stw r3,1660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1660, ctx.r3.u32);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82f91940
	ctx.lr = 0x82526818;
	sub_82F91940(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82fa7698
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82526824"))) PPC_WEAK_FUNC(sub_82526824);
PPC_FUNC_IMPL(__imp__sub_82526824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82526828"))) PPC_WEAK_FUNC(sub_82526828);
PPC_FUNC_IMPL(__imp__sub_82526828) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r9,2
	ctx.r9.s64 = 2;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r31,r4,252
	ctx.r31.s64 = ctx.r4.s64 + 252;
	// addi r8,r5,164
	ctx.r8.s64 = ctx.r5.s64 + 164;
	// addi r10,r4,16
	ctx.r10.s64 = ctx.r4.s64 + 16;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82526848:
	// li r30,12
	ctx.r30.s64 = 12;
	// lvlx v0,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v12,v67,v67
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v67.u8));
	// vor128 v13,v77,v77
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v77.u8));
	// lvrx v11,r30,r11
	temp.u32 = ctx.r30.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// vsldoi v11,v11,v11,4
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v11.u8), 12));
	// vor v0,v0,v11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v11.u8)));
	// vsel v12,v0,v13,v12
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// stvx128 v12,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lfsu f0,4(r8)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r8.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	ctx.f0.f64 = double(temp.f32);
	// stfsu f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r31.u32 = ea;
	// bdnz 0x82526848
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82526848;
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// lfs f0,224(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,276(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 276, temp.u32);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// stw r10,280(r4)
	PPC_STORE_U32(ctx.r4.u32 + 280, ctx.r10.u32);
	// stw r11,316(r4)
	PPC_STORE_U32(ctx.r4.u32 + 316, ctx.r11.u32);
	// lwz r10,228(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 228);
	// stw r10,284(r4)
	PPC_STORE_U32(ctx.r4.u32 + 284, ctx.r10.u32);
	// lwz r10,232(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 232);
	// stw r10,288(r4)
	PPC_STORE_U32(ctx.r4.u32 + 288, ctx.r10.u32);
	// lwz r10,884(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 884);
	// stw r10,292(r4)
	PPC_STORE_U32(ctx.r4.u32 + 292, ctx.r10.u32);
	// stw r11,296(r4)
	PPC_STORE_U32(ctx.r4.u32 + 296, ctx.r11.u32);
	// lwz r10,968(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 968);
	// stw r10,300(r4)
	PPC_STORE_U32(ctx.r4.u32 + 300, ctx.r10.u32);
	// lwz r10,972(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 972);
	// stw r10,312(r4)
	PPC_STORE_U32(ctx.r4.u32 + 312, ctx.r10.u32);
	// stw r11,304(r4)
	PPC_STORE_U32(ctx.r4.u32 + 304, ctx.r11.u32);
	// stw r11,308(r4)
	PPC_STORE_U32(ctx.r4.u32 + 308, ctx.r11.u32);
	// stw r7,320(r4)
	PPC_STORE_U32(ctx.r4.u32 + 320, ctx.r7.u32);
	// stw r3,324(r4)
	PPC_STORE_U32(ctx.r4.u32 + 324, ctx.r3.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825268F0"))) PPC_WEAK_FUNC(sub_825268F0);
PPC_FUNC_IMPL(__imp__sub_825268F0) {
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
	// lwz r11,4600(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4600);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,6344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6344);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82526a00
	if (ctx.cr6.lt) goto loc_82526A00;
	// beq cr6,0x82526998
	if (ctx.cr6.eq) goto loc_82526998;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82526ad4
	if (!ctx.cr6.lt) goto loc_82526AD4;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// lwz r11,1768(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1768);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// lwz r5,15168(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15168);
	// blt cr6,0x82526958
	if (ctx.cr6.lt) goto loc_82526958;
	// beq cr6,0x82526a38
	if (ctx.cr6.eq) goto loc_82526A38;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82526a2c
	if (ctx.cr6.lt) goto loc_82526A2C;
	// bne cr6,0x82526a58
	if (!ctx.cr6.eq) goto loc_82526A58;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r30,r11,11220
	ctx.r30.s64 = ctx.r11.s64 + 11220;
	// b 0x82526a58
	goto loc_82526A58;
loc_82526958:
	// li r11,4
	ctx.r11.s64 = 4;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r31,1704
	ctx.r10.s64 = ctx.r31.s64 + 1704;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82526968:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82526978
	if (ctx.cr6.eq) goto loc_82526978;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_82526978:
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// bdnz 0x82526968
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82526968;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// ble cr6,0x82526a54
	if (!ctx.cr6.gt) goto loc_82526A54;
	// addi r11,r11,15192
	ctx.r11.s64 = ctx.r11.s64 + 15192;
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82526a58
	goto loc_82526A58;
loc_82526998:
	// lwz r11,1768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// bne cr6,0x825269b0
	if (!ctx.cr6.eq) goto loc_825269B0;
	// lwz r5,15168(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15168);
	// b 0x825269b8
	goto loc_825269B8;
loc_825269B0:
	// addi r11,r11,15168
	ctx.r11.s64 = ctx.r11.s64 + 15168;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_825269B8:
	// lwz r11,1896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1896);
	// lwz r10,1832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1832);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// beq cr6,0x825269f8
	if (ctx.cr6.eq) goto loc_825269F8;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// beq cr6,0x825269ec
	if (ctx.cr6.eq) goto loc_825269EC;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r10,r10,15192
	ctx.r10.s64 = ctx.r10.s64 + 15192;
	// b 0x82526a48
	goto loc_82526A48;
loc_825269EC:
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r10,r10,15184
	ctx.r10.s64 = ctx.r10.s64 + 15184;
	// b 0x82526a48
	goto loc_82526A48;
loc_825269F8:
	// lwz r11,1860(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1860);
	// b 0x82526a3c
	goto loc_82526A3C;
loc_82526A00:
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// lwz r11,1768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// lwz r5,15168(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15168);
	// blt cr6,0x82526a50
	if (ctx.cr6.lt) goto loc_82526A50;
	// beq cr6,0x82526a38
	if (ctx.cr6.eq) goto loc_82526A38;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82526a2c
	if (ctx.cr6.lt) goto loc_82526A2C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r30,r11,11200
	ctx.r30.s64 = ctx.r11.s64 + 11200;
	// b 0x82526a58
	goto loc_82526A58;
loc_82526A2C:
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// lwz r30,15184(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15184);
	// b 0x82526a58
	goto loc_82526A58;
loc_82526A38:
	// lwz r11,1796(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1796);
loc_82526A3C:
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-15536
	ctx.r10.s64 = ctx.r10.s64 + -15536;
loc_82526A48:
	// lwzx r30,r11,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x82526a58
	goto loc_82526A58;
loc_82526A50:
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
loc_82526A54:
	// lwz r30,15192(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15192);
loc_82526A58:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82526a94
	if (ctx.cr6.eq) goto loc_82526A94;
	// lwz r10,1680(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1680);
	// addi r11,r31,1664
	ctx.r11.s64 = ctx.r31.s64 + 1664;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82526a74
	if (!ctx.cr6.eq) goto loc_82526A74;
	// bl 0x82fa1518
	ctx.lr = 0x82526A74;
	sub_82FA1518(ctx, base);
loc_82526A74:
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// li r7,256
	ctx.r7.s64 = 256;
	// addi r6,r31,2008
	ctx.r6.s64 = ctx.r31.s64 + 2008;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82526A94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82526A94:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82526ad4
	if (ctx.cr6.eq) goto loc_82526AD4;
	// lwz r10,1680(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1680);
	// addi r11,r31,1664
	ctx.r11.s64 = ctx.r31.s64 + 1664;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82526ab0
	if (!ctx.cr6.eq) goto loc_82526AB0;
	// bl 0x82fa1518
	ctx.lr = 0x82526AB0;
	sub_82FA1518(ctx, base);
loc_82526AB0:
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// li r7,256
	ctx.r7.s64 = 256;
	// addi r6,r31,2520
	ctx.r6.s64 = ctx.r31.s64 + 2520;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82526AD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82526AD4:
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

__attribute__((alias("__imp__sub_82526AEC"))) PPC_WEAK_FUNC(sub_82526AEC);
PPC_FUNC_IMPL(__imp__sub_82526AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82526AF0"))) PPC_WEAK_FUNC(sub_82526AF0);
PPC_FUNC_IMPL(__imp__sub_82526AF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82526AF8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82528748
	ctx.lr = 0x82526B0C;
	sub_82528748(ctx, base);
	// bl 0x8252b2a8
	ctx.lr = 0x82526B10;
	sub_8252B2A8(ctx, base);
	// lwz r3,1548(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1548);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82526b28
	if (ctx.cr6.eq) goto loc_82526B28;
	// bl 0x82526d18
	ctx.lr = 0x82526B24;
	sub_82526D18(ctx, base);
	// stw r28,1548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1548, ctx.r28.u32);
loc_82526B28:
	// lwz r3,1552(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1552);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82526b3c
	if (ctx.cr6.eq) goto loc_82526B3C;
	// bl 0x82526d18
	ctx.lr = 0x82526B38;
	sub_82526D18(ctx, base);
	// stw r28,1552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1552, ctx.r28.u32);
loc_82526B3C:
	// lwz r30,1556(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1556);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82526b5c
	if (ctx.cr6.eq) goto loc_82526B5C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825048b0
	ctx.lr = 0x82526B50;
	sub_825048B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82691540
	ctx.lr = 0x82526B58;
	sub_82691540(ctx, base);
	// stw r28,1556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1556, ctx.r28.u32);
loc_82526B5C:
	// lwz r3,1560(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1560);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82526b70
	if (ctx.cr6.eq) goto loc_82526B70;
	// bl 0x82319cd8
	ctx.lr = 0x82526B6C;
	sub_82319CD8(ctx, base);
	// stw r28,1560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1560, ctx.r28.u32);
loc_82526B70:
	// addi r29,r31,1728
	ctx.r29.s64 = ctx.r31.s64 + 1728;
	// addi r30,r31,1572
	ctx.r30.s64 = ctx.r31.s64 + 1572;
	// li r27,4
	ctx.r27.s64 = 4;
loc_82526B7C:
	// lwz r3,-8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82526b90
	if (ctx.cr6.eq) goto loc_82526B90;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82309b90
	ctx.lr = 0x82526B90;
	sub_82309B90(ctx, base);
loc_82526B90:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r28,-8(r30)
	PPC_STORE_U32(ctx.r30.u32 + -8, ctx.r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82526bb4
	if (ctx.cr6.eq) goto loc_82526BB4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82526BB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82526BB4:
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82526be0
	if (ctx.cr6.eq) goto loc_82526BE0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r28,-4(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4, ctx.r28.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8256c608
	ctx.lr = 0x82526BDC;
	sub_8256C608(ctx, base);
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
loc_82526BE0:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r29,r29,64
	ctx.r29.s64 = ctx.r29.s64 + 64;
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// bne 0x82526b7c
	if (!ctx.cr0.eq) goto loc_82526B7C;
	// lwz r3,4604(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4604);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82526c04
	if (ctx.cr6.eq) goto loc_82526C04;
	// bl 0x82524840
	ctx.lr = 0x82526C00;
	sub_82524840(ctx, base);
	// stw r28,4604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4604, ctx.r28.u32);
loc_82526C04:
	// lwz r30,1660(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1660);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82526c24
	if (ctx.cr6.eq) goto loc_82526C24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8252bc50
	ctx.lr = 0x82526C18;
	sub_8252BC50(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82691540
	ctx.lr = 0x82526C20;
	sub_82691540(ctx, base);
	// stw r28,1660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1660, ctx.r28.u32);
loc_82526C24:
	// bl 0x8226d8e8
	ctx.lr = 0x82526C28;
	sub_8226D8E8(ctx, base);
	// lwz r4,4612(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4612);
	// bl 0x8226e428
	ctx.lr = 0x82526C30;
	sub_8226E428(ctx, base);
	// lwz r3,1692(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1692);
	// bl 0x82520028
	ctx.lr = 0x82526C38;
	sub_82520028(ctx, base);
	// lwz r3,4608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4608);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82526c54
	if (ctx.cr6.eq) goto loc_82526C54;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8253d820
	ctx.lr = 0x82526C50;
	sub_8253D820(ctx, base);
	// stw r28,4608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4608, ctx.r28.u32);
loc_82526C54:
	// lwz r3,1964(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1964);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,31944
	ctx.r30.s64 = ctx.r11.s64 + 31944;
	// beq cr6,0x82526c70
	if (ctx.cr6.eq) goto loc_82526C70;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82534af8
	ctx.lr = 0x82526C70;
	sub_82534AF8(ctx, base);
loc_82526C70:
	// lwz r3,1968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82526c84
	if (ctx.cr6.eq) goto loc_82526C84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82534af8
	ctx.lr = 0x82526C84;
	sub_82534AF8(ctx, base);
loc_82526C84:
	// lwz r3,4660(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4660);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82526c98
	if (ctx.cr6.eq) goto loc_82526C98;
	// bl 0x825469e0
	ctx.lr = 0x82526C94;
	sub_825469E0(ctx, base);
	// stw r28,4660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4660, ctx.r28.u32);
loc_82526C98:
	// lwz r3,4664(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4664);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82526cac
	if (ctx.cr6.eq) goto loc_82526CAC;
	// bl 0x825469e0
	ctx.lr = 0x82526CA8;
	sub_825469E0(ctx, base);
	// stw r28,4664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4664, ctx.r28.u32);
loc_82526CAC:
	// lwz r3,4668(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4668);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82526cc4
	if (ctx.cr6.eq) goto loc_82526CC4;
	// bl 0x825469e0
	ctx.lr = 0x82526CBC;
	sub_825469E0(ctx, base);
	// stw r28,4668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4668, ctx.r28.u32);
	// stw r28,4676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4676, ctx.r28.u32);
loc_82526CC4:
	// lwz r3,4672(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4672);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82526cdc
	if (ctx.cr6.eq) goto loc_82526CDC;
	// bl 0x825469e0
	ctx.lr = 0x82526CD4;
	sub_825469E0(ctx, base);
	// stw r28,4672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4672, ctx.r28.u32);
	// stw r28,4680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4680, ctx.r28.u32);
loc_82526CDC:
	// addi r11,r31,1960
	ctx.r11.s64 = ctx.r31.s64 + 1960;
	// li r29,3
	ctx.r29.s64 = 3;
	// addi r30,r11,32
	ctx.r30.s64 = ctx.r11.s64 + 32;
loc_82526CE8:
	// addi r30,r30,-64
	ctx.r30.s64 = ctx.r30.s64 + -64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822402c8
	ctx.lr = 0x82526CFC;
	sub_822402C8(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge 0x82526ce8
	if (!ctx.cr0.lt) goto loc_82526CE8;
	// addi r3,r31,1664
	ctx.r3.s64 = ctx.r31.s64 + 1664;
	// bl 0x82f91940
	ctx.lr = 0x82526D0C;
	sub_82F91940(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82526D14"))) PPC_WEAK_FUNC(sub_82526D14);
PPC_FUNC_IMPL(__imp__sub_82526D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82526D18"))) PPC_WEAK_FUNC(sub_82526D18);
PPC_FUNC_IMPL(__imp__sub_82526D18) {
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
	// lwz r3,1472(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1472);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82526d3c
	if (ctx.cr6.eq) goto loc_82526D3C;
	// bl 0x82503788
	ctx.lr = 0x82526D3C;
	sub_82503788(ctx, base);
loc_82526D3C:
	// lwz r3,1500(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1500);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82526d54
	if (ctx.cr6.eq) goto loc_82526D54;
	// bl 0x82547d80
	ctx.lr = 0x82526D4C;
	sub_82547D80(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1500, ctx.r11.u32);
loc_82526D54:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x82526D5C;
	sub_82691540(ctx, base);
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

__attribute__((alias("__imp__sub_82526D74"))) PPC_WEAK_FUNC(sub_82526D74);
PPC_FUNC_IMPL(__imp__sub_82526D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82526D78"))) PPC_WEAK_FUNC(sub_82526D78);
PPC_FUNC_IMPL(__imp__sub_82526D78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82526D80;
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
	// stwu r1,-1264(r1)
	ea = -1264 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1536(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1536);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x825270c0
	if (ctx.cr6.lt) goto loc_825270C0;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82526e30
	if (ctx.cr6.lt) goto loc_82526E30;
	// beq cr6,0x82526e04
	if (ctx.cr6.eq) goto loc_82526E04;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// blt cr6,0x82526e30
	if (ctx.cr6.lt) goto loc_82526E30;
	// bne cr6,0x825271c0
	if (!ctx.cr6.eq) goto loc_825271C0;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lwz r11,23044(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23044);
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
loc_82526DD0:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r25,r10
	ctx.r9.u64 = ctx.r25.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82526dd0
	if (!ctx.cr0.eq) goto loc_82526DD0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x825271c0
	if (!ctx.cr6.eq) goto loc_825271C0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,1540(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1540, ctx.r11.u32);
	// b 0x825271c0
	goto loc_825271C0;
loc_82526E04:
	// lwz r11,1992(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1992);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825271c0
	if (!ctx.cr6.eq) goto loc_825271C0;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,1992(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1992, ctx.r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825291d0
	ctx.lr = 0x82526E2C;
	sub_825291D0(ctx, base);
	// b 0x825271c0
	goto loc_825271C0;
loc_82526E30:
	// addi r11,r30,1704
	ctx.r11.s64 = ctx.r30.s64 + 1704;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// addi r29,r11,20
	ctx.r29.s64 = ctx.r11.s64 + 20;
loc_82526E3C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82526e54
	if (ctx.cr6.eq) goto loc_82526E54;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82527318
	ctx.lr = 0x82526E54;
	sub_82527318(ctx, base);
loc_82526E54:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,64
	ctx.r29.s64 = ctx.r29.s64 + 64;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x82526e3c
	if (ctx.cr6.lt) goto loc_82526E3C;
	// lwz r11,1548(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1548);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82526ec8
	if (ctx.cr6.eq) goto loc_82526EC8;
	// lwz r3,1472(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1472);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82503ee8
	ctx.lr = 0x82526E7C;
	sub_82503EE8(ctx, base);
	// lwz r3,1548(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1548);
	// lwz r11,1472(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1472);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bgt cr6,0x82526ec8
	if (ctx.cr6.gt) goto loc_82526EC8;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82526eb0
	goto loc_82526EB0;
loc_82526E9C:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,1328(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1328);
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// bne cr6,0x82526ec8
	if (!ctx.cr6.eq) goto loc_82526EC8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82526EB0:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82526e9c
	if (!ctx.cr6.eq) goto loc_82526E9C;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82526ec4
	if (ctx.cr0.eq) goto loc_82526EC4;
	// bl 0x82526d18
	ctx.lr = 0x82526EC4;
	sub_82526D18(ctx, base);
loc_82526EC4:
	// stw r25,1548(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1548, ctx.r25.u32);
loc_82526EC8:
	// lwz r11,1552(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1552);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82526f2c
	if (ctx.cr6.eq) goto loc_82526F2C;
	// lwz r3,1472(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1472);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82503ee8
	ctx.lr = 0x82526EE0;
	sub_82503EE8(ctx, base);
	// lwz r3,1552(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1552);
	// lwz r11,1472(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1472);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bgt cr6,0x82526f2c
	if (ctx.cr6.gt) goto loc_82526F2C;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82526f14
	goto loc_82526F14;
loc_82526F00:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,1328(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1328);
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// bne cr6,0x82526f2c
	if (!ctx.cr6.eq) goto loc_82526F2C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82526F14:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82526f00
	if (!ctx.cr6.eq) goto loc_82526F00;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82526f28
	if (ctx.cr0.eq) goto loc_82526F28;
	// bl 0x82526d18
	ctx.lr = 0x82526F28;
	sub_82526D18(ctx, base);
loc_82526F28:
	// stw r25,1552(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1552, ctx.r25.u32);
loc_82526F2C:
	// lwz r11,1556(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1556);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82527024
	if (ctx.cr6.eq) goto loc_82527024;
	// lwz r10,1996(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1996);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82526fc0
	if (!ctx.cr6.eq) goto loc_82526FC0;
	// lwz r10,1772(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1772);
	// li r9,56
	ctx.r9.s64 = 56;
	// lwz r8,1768(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1768);
	// lwz r11,1584(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1584);
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// divw r10,r10,r9
	ctx.r10.s32 = ctx.r10.s32 / ctx.r9.s32;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82526fc0
	if (!ctx.cr6.gt) goto loc_82526FC0;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfs f30,4656(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4656);
	ctx.f30.f64 = double(temp.f32);
	// addi r11,r11,12092
	ctx.r11.s64 = ctx.r11.s64 + 12092;
	// lwz r31,1660(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1660);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// li r10,4640
	ctx.r10.s64 = 4640;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lvx128 v127,r30,r10
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// bl 0x8226c200
	ctx.lr = 0x82526F98;
	sub_8226C200(ctx, base);
	// vor128 v1,v127,v127
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252bd60
	ctx.lr = 0x82526FB0;
	sub_8252BD60(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f91940
	ctx.lr = 0x82526FB8;
	sub_82F91940(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1996(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1996, ctx.r11.u32);
loc_82526FC0:
	// lwz r3,1556(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1556);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82504c30
	ctx.lr = 0x82526FCC;
	sub_82504C30(ctx, base);
	// lwz r31,1556(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1556);
	// lwz r11,1472(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1472);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bgt cr6,0x82527024
	if (ctx.cr6.gt) goto loc_82527024;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82527000
	goto loc_82527000;
loc_82526FEC:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,1328(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1328);
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// bne cr6,0x82527024
	if (!ctx.cr6.eq) goto loc_82527024;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82527000:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82526fec
	if (!ctx.cr6.eq) goto loc_82526FEC;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x82527020
	if (ctx.cr0.eq) goto loc_82527020;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825048b0
	ctx.lr = 0x82527018;
	sub_825048B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x82527020;
	sub_82691540(ctx, base);
loc_82527020:
	// stw r25,1556(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1556, ctx.r25.u32);
loc_82527024:
	// lwz r31,1560(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1560);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825271c0
	if (ctx.cr6.eq) goto loc_825271C0;
	// lwz r11,692(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 692);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82527048
	if (!ctx.cr6.eq) goto loc_82527048;
	// lwz r11,696(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 696);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82527050
	if (ctx.cr6.eq) goto loc_82527050;
loc_82527048:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82505998
	ctx.lr = 0x82527050;
	sub_82505998(ctx, base);
loc_82527050:
	// lwz r3,896(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 896);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82527064
	if (ctx.cr6.eq) goto loc_82527064;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82524a90
	ctx.lr = 0x82527064;
	sub_82524A90(ctx, base);
loc_82527064:
	// lwz r3,716(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 716);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82503ee8
	ctx.lr = 0x82527070;
	sub_82503EE8(ctx, base);
	// lwz r3,1560(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1560);
	// lwz r11,716(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 716);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bgt cr6,0x825271c0
	if (ctx.cr6.gt) goto loc_825271C0;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x825270a4
	goto loc_825270A4;
loc_82527090:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,1328(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1328);
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// bne cr6,0x825271c0
	if (!ctx.cr6.eq) goto loc_825271C0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_825270A4:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82527090
	if (!ctx.cr6.eq) goto loc_82527090;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825270b8
	if (ctx.cr0.eq) goto loc_825270B8;
	// bl 0x82319cd8
	ctx.lr = 0x825270B8;
	sub_82319CD8(ctx, base);
loc_825270B8:
	// stw r25,1560(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1560, ctx.r25.u32);
	// b 0x825271c0
	goto loc_825271C0;
loc_825270C0:
	// bl 0x8226d8e8
	ctx.lr = 0x825270C4;
	sub_8226D8E8(ctx, base);
	// li r26,1
	ctx.r26.s64 = 1;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r31,r30,1704
	ctx.r31.s64 = ctx.r30.s64 + 1704;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_825270D8:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82527180
	if (ctx.cr6.eq) goto loc_82527180;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x825270f8
	if (ctx.cr6.eq) goto loc_825270F8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82527180
	if (!ctx.cr6.eq) goto loc_82527180;
loc_825270F8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8226ecf0
	ctx.lr = 0x82527100;
	sub_8226ECF0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82527180
	if (ctx.cr6.eq) goto loc_82527180;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8226ed48
	ctx.lr = 0x82527120;
	sub_8226ED48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8252717c
	if (ctx.cr0.eq) goto loc_8252717C;
	// lwz r11,4600(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4600);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,6344(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6344);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8252714c
	if (!ctx.cr6.eq) goto loc_8252714C;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,-1
	ctx.r9.s64 = -1;
	// subfc r10,r10,r29
	ctx.xer.ca = ctx.r29.u32 >= ctx.r10.u32;
	ctx.r10.s64 = ctx.r29.s64 - ctx.r10.s64;
	// subfze r4,r9
	temp.u64 = ~ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u64 < ctx.xer.ca;
	ctx.r4.u64 = temp.u64;
loc_8252714C:
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,580
	ctx.r3.s64 = ctx.r11.s64 + 580;
	// bl 0x8245c4f0
	ctx.lr = 0x8252715C;
	sub_8245C4F0(ctx, base);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8252a7c8
	ctx.lr = 0x82527174;
	sub_8252A7C8(ctx, base);
	// stw r26,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r26.u32);
	// stw r25,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r25.u32);
loc_8252717C:
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_82527180:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825271a4
	if (ctx.cr6.eq) goto loc_825271A4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82527318
	ctx.lr = 0x82527198;
	sub_82527318(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 & ctx.r28.u64;
loc_825271A4:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// blt cr6,0x825270d8
	if (ctx.cr6.lt) goto loc_825270D8;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x825271c0
	if (ctx.cr6.eq) goto loc_825271C0;
	// stw r26,1540(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1540, ctx.r26.u32);
loc_825271C0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825273c0
	ctx.lr = 0x825271C8;
	sub_825273C0(ctx, base);
	// lwz r3,4604(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4604);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825271dc
	if (ctx.cr6.eq) goto loc_825271DC;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82524a90
	ctx.lr = 0x825271DC;
	sub_82524A90(ctx, base);
loc_825271DC:
	// lwz r11,1660(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1660);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825271f4
	if (ctx.cr6.eq) goto loc_825271F4;
	// lwz r3,128(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82503ee8
	ctx.lr = 0x825271F4;
	sub_82503EE8(ctx, base);
loc_825271F4:
	// lwz r11,1536(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1536);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82527268
	if (ctx.cr6.eq) goto loc_82527268;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x82527268
	if (ctx.cr6.eq) goto loc_82527268;
	// lwz r11,1692(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1692);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82527268
	if (ctx.cr6.eq) goto loc_82527268;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82527268
	if (ctx.cr6.eq) goto loc_82527268;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82527268
	if (!ctx.cr6.eq) goto loc_82527268;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82527268
	if (!ctx.cr6.eq) goto loc_82527268;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82528678
	ctx.lr = 0x82527244;
	sub_82528678(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82527258
	if (ctx.cr6.eq) goto loc_82527258;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x826a4180
	ctx.lr = 0x82527258;
	sub_826A4180(ctx, base);
loc_82527258:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82527268
	if (ctx.cr6.eq) goto loc_82527268;
	// bl 0x82241d18
	ctx.lr = 0x82527268;
	sub_82241D18(ctx, base);
loc_82527268:
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// addi r31,r30,1580
	ctx.r31.s64 = ctx.r30.s64 + 1580;
loc_82527270:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825272f0
	if (ctx.cr6.eq) goto loc_825272F0;
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82527294
	if (!ctx.cr6.eq) goto loc_82527294;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8252ae80
	ctx.lr = 0x82527294;
	sub_8252AE80(ctx, base);
loc_82527294:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8252af40
	ctx.lr = 0x825272A4;
	sub_8252AF40(ctx, base);
	// lwz r11,-16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// lwz r29,180(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825272C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825272dc
	if (ctx.cr0.eq) goto loc_825272DC;
	// lwz r3,-16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// lwz r4,-4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// bl 0x825220e8
	ctx.lr = 0x825272D4;
	sub_825220E8(ctx, base);
	// stw r25,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r25.u32);
	// b 0x825272f0
	goto loc_825272F0;
loc_825272DC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825272F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825272F0:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// blt cr6,0x82527270
	if (ctx.cr6.lt) goto loc_82527270;
	// addi r1,r1,1264
	ctx.r1.s64 = ctx.r1.s64 + 1264;
	// li r0,-96
	ctx.r0.s64 = -96;
	// lvx128 v127,r1,r0
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF), VectorMaskL));
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82527318"))) PPC_WEAK_FUNC(sub_82527318);
PPC_FUNC_IMPL(__imp__sub_82527318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82527320;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r31,r11,1704
	ctx.r31.s64 = ctx.r11.s64 + 1704;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,1728(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1728);
	// lwz r29,2240(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2240);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82527358;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82527378
	if (!ctx.cr0.eq) goto loc_82527378;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82527374;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x825273b4
	goto loc_825273B4;
loc_82527378:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r4,r30,348
	ctx.r4.s64 = ctx.r30.s64 + 348;
	// bl 0x82568280
	ctx.lr = 0x82527388;
	sub_82568280(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x825683a8
	ctx.lr = 0x82527390;
	sub_825683A8(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82568710
	ctx.lr = 0x8252739C;
	sub_82568710(ctx, base);
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82528158
	ctx.lr = 0x825273B0;
	sub_82528158(ctx, base);
	// li r27,1
	ctx.r27.s64 = 1;
loc_825273B4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825273C0"))) PPC_WEAK_FUNC(sub_825273C0);
PPC_FUNC_IMPL(__imp__sub_825273C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x825273C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,1540(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1540);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r9,1536(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1536);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82527870
	if (ctx.cr6.eq) goto loc_82527870;
	// lwz r11,1692(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1692);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82527870
	if (ctx.cr6.eq) goto loc_82527870;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82527870
	if (ctx.cr6.eq) goto loc_82527870;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82527870
	if (!ctx.cr6.eq) goto loc_82527870;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82527870
	if (!ctx.cr6.eq) goto loc_82527870;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r9,14
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 14, ctx.xer);
	// bgt cr6,0x8252763c
	if (ctx.cr6.gt) goto loc_8252763C;
	// lis r12,-32231
	ctx.r12.s64 = -2112290816;
	// addi r12,r12,27840
	ctx.r12.s64 = ctx.r12.s64 + 27840;
	// lbzx r0,r12,r9
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r9.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32174
	ctx.r12.s64 = -2108555264;
	// nop 
	// addi r12,r12,29764
	ctx.r12.s64 = ctx.r12.s64 + 29764;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r9.u64) {
	case 0:
		goto loc_82527444;
	case 1:
		goto loc_82527464;
	case 2:
		goto loc_825274FC;
	case 3:
		goto loc_825274FC;
	case 4:
		goto loc_8252763C;
	case 5:
		goto loc_8252763C;
	case 6:
		goto loc_8252763C;
	case 7:
		goto loc_8252753C;
	case 8:
		goto loc_82527560;
	case 9:
		goto loc_82527594;
	case 10:
		goto loc_825275C0;
	case 11:
		goto loc_8252763C;
	case 12:
		goto loc_8252763C;
	case 13:
		goto loc_8252763C;
	case 14:
		goto loc_82527634;
	default:
		__builtin_unreachable();
	}
loc_82527444:
	// lwz r11,1988(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1988);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8252763c
	if (ctx.cr6.eq) goto loc_8252763C;
loc_82527450:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4604(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4604);
	// addi r4,r31,3032
	ctx.r4.s64 = ctx.r31.s64 + 3032;
	// bl 0x825249c8
	ctx.lr = 0x82527460;
	sub_825249C8(ctx, base);
	// b 0x8252763c
	goto loc_8252763C;
loc_82527464:
	// cmpwi cr6,r8,15
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 15, ctx.xer);
	// beq cr6,0x8252763c
	if (ctx.cr6.eq) goto loc_8252763C;
	// cmpwi cr6,r8,14
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 14, ctx.xer);
	// beq cr6,0x8252763c
	if (ctx.cr6.eq) goto loc_8252763C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82528748
	ctx.lr = 0x82527480;
	sub_82528748(ctx, base);
	// bl 0x8252b2a8
	ctx.lr = 0x82527484;
	sub_8252B2A8(ctx, base);
	// lwz r11,1540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1540);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x825274ec
	if (ctx.cr6.eq) goto loc_825274EC;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x825274ec
	if (ctx.cr6.eq) goto loc_825274EC;
	// li r3,344
	ctx.r3.s64 = 344;
	// lwz r30,1692(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1692);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82691500
	ctx.lr = 0x825274A8;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825274cc
	if (ctx.cr0.eq) goto loc_825274CC;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r7,124(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,1488
	ctx.r4.s64 = ctx.r31.s64 + 1488;
	// bl 0x82518880
	ctx.lr = 0x825274C4;
	sub_82518880(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x825274d0
	goto loc_825274D0;
loc_825274CC:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
loc_825274D0:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8251ff70
	ctx.lr = 0x825274E4;
	sub_8251FF70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82528438
	ctx.lr = 0x825274EC;
	sub_82528438(ctx, base);
loc_825274EC:
	// lwz r11,1988(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1988);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8252763c
	if (!ctx.cr6.eq) goto loc_8252763C;
	// b 0x82527450
	goto loc_82527450;
loc_825274FC:
	// lwz r30,1548(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1548);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// lwz r11,1144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8252752c
	if (!ctx.cr6.gt) goto loc_8252752C;
loc_82527510:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,1472(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1472);
	// bl 0x82503dd0
	ctx.lr = 0x8252751C;
	sub_82503DD0(ctx, base);
	// lwz r11,1144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1144);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82527510
	if (ctx.cr6.lt) goto loc_82527510;
loc_8252752C:
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,1472(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1472);
	// bl 0x82503dd0
	ctx.lr = 0x82527538;
	sub_82503DD0(ctx, base);
	// b 0x8252763c
	goto loc_8252763C;
loc_8252753C:
	// lwz r29,1560(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1560);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82527544:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,716(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 716);
	// bl 0x82503dd0
	ctx.lr = 0x82527550;
	sub_82503DD0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 7, ctx.xer);
	// blt cr6,0x82527544
	if (ctx.cr6.lt) goto loc_82527544;
	// b 0x82527450
	goto loc_82527450;
loc_82527560:
	// lwz r30,1552(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1552);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// lwz r11,1144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8252752c
	if (!ctx.cr6.gt) goto loc_8252752C;
loc_82527574:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,1472(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1472);
	// bl 0x82503dd0
	ctx.lr = 0x82527580;
	sub_82503DD0(ctx, base);
	// lwz r11,1144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1144);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82527574
	if (ctx.cr6.lt) goto loc_82527574;
	// b 0x8252752c
	goto loc_8252752C;
loc_82527594:
	// lwz r29,1556(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1556);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8252763c
	if (ctx.cr6.eq) goto loc_8252763C;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_825275A4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,1472(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1472);
	// bl 0x82503dd0
	ctx.lr = 0x825275B0;
	sub_82503DD0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// ble cr6,0x825275a4
	if (!ctx.cr6.gt) goto loc_825275A4;
	// b 0x8252763c
	goto loc_8252763C;
loc_825275C0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82528748
	ctx.lr = 0x825275CC;
	sub_82528748(ctx, base);
	// bl 0x8252b2a8
	ctx.lr = 0x825275D0;
	sub_8252B2A8(ctx, base);
	// lwz r11,1540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1540);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8252763c
	if (ctx.cr6.eq) goto loc_8252763C;
	// li r3,344
	ctx.r3.s64 = 344;
	// lwz r30,1692(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1692);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82691500
	ctx.lr = 0x825275EC;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82527610
	if (ctx.cr0.eq) goto loc_82527610;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r7,124(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,1488
	ctx.r4.s64 = ctx.r31.s64 + 1488;
	// bl 0x82518880
	ctx.lr = 0x82527608;
	sub_82518880(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x82527614
	goto loc_82527614;
loc_82527610:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
loc_82527614:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8251ff70
	ctx.lr = 0x82527628;
	sub_8251FF70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82528438
	ctx.lr = 0x82527630;
	sub_82528438(ctx, base);
	// b 0x8252763c
	goto loc_8252763C;
loc_82527634:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252a180
	ctx.lr = 0x8252763C;
	sub_8252A180(ctx, base);
loc_8252763C:
	// lwz r11,1540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1540);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bgt cr6,0x82527868
	if (ctx.cr6.gt) goto loc_82527868;
	// lis r12,-32231
	ctx.r12.s64 = -2112290816;
	// addi r12,r12,27824
	ctx.r12.s64 = ctx.r12.s64 + 27824;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32174
	ctx.r12.s64 = -2108555264;
	// nop 
	// addi r12,r12,30324
	ctx.r12.s64 = ctx.r12.s64 + 30324;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82527674;
	case 1:
		goto loc_8252773C;
	case 2:
		goto loc_82527748;
	case 3:
		goto loc_82527754;
	case 4:
		goto loc_82527784;
	case 5:
		goto loc_825277BC;
	case 6:
		goto loc_825277D0;
	case 7:
		goto loc_825277DC;
	case 8:
		goto loc_825277E8;
	case 9:
		goto loc_825277F4;
	case 10:
		goto loc_82527800;
	case 11:
		goto loc_8252781C;
	case 12:
		goto loc_82527838;
	case 13:
		goto loc_82527860;
	default:
		__builtin_unreachable();
	}
loc_82527674:
	// lwz r3,1548(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1548);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82527688
	if (ctx.cr6.eq) goto loc_82527688;
	// bl 0x82526d18
	ctx.lr = 0x82527684;
	sub_82526D18(ctx, base);
	// stw r28,1548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1548, ctx.r28.u32);
loc_82527688:
	// lwz r3,1552(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1552);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252769c
	if (ctx.cr6.eq) goto loc_8252769C;
	// bl 0x82526d18
	ctx.lr = 0x82527698;
	sub_82526D18(ctx, base);
	// stw r28,1552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1552, ctx.r28.u32);
loc_8252769C:
	// lwz r30,1556(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1556);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825276bc
	if (ctx.cr6.eq) goto loc_825276BC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825048b0
	ctx.lr = 0x825276B0;
	sub_825048B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82691540
	ctx.lr = 0x825276B8;
	sub_82691540(ctx, base);
	// stw r28,1556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1556, ctx.r28.u32);
loc_825276BC:
	// lwz r3,1560(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1560);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825276d0
	if (ctx.cr6.eq) goto loc_825276D0;
	// bl 0x82319cd8
	ctx.lr = 0x825276CC;
	sub_82319CD8(ctx, base);
	// stw r28,1560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1560, ctx.r28.u32);
loc_825276D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252a350
	ctx.lr = 0x825276D8;
	sub_8252A350(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825287d8
	ctx.lr = 0x825276E0;
	sub_825287D8(ctx, base);
	// lwz r11,1988(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1988);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82527868
	if (!ctx.cr6.eq) goto loc_82527868;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r5,510
	ctx.r5.s64 = 510;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,114
	ctx.r3.s64 = ctx.r1.s64 + 114;
	// lhz r11,31944(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 31944);
	// sth r11,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r11.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x82527708;
	sub_82FA7CF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r3,1688(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1688);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,-7760
	ctx.r4.s64 = ctx.r11.s64 + -7760;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// bl 0x8259c8e0
	ctx.lr = 0x82527728;
	sub_8259C8E0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,4604(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4604);
	// bl 0x825249c8
	ctx.lr = 0x82527738;
	sub_825249C8(ctx, base);
	// b 0x82527868
	goto loc_82527868;
loc_8252773C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82528aa0
	ctx.lr = 0x82527744;
	sub_82528AA0(ctx, base);
	// b 0x82527868
	goto loc_82527868;
loc_82527748:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82528ba0
	ctx.lr = 0x82527750;
	sub_82528BA0(ctx, base);
	// b 0x82527868
	goto loc_82527868;
loc_82527754:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82528678
	ctx.lr = 0x82527760;
	sub_82528678(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826a4180
	ctx.lr = 0x8252776C;
	sub_826A4180(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r28,1992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1992, ctx.r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82527868
	if (ctx.cr6.eq) goto loc_82527868;
	// bl 0x82241d18
	ctx.lr = 0x82527780;
	sub_82241D18(ctx, base);
	// b 0x82527868
	goto loc_82527868;
loc_82527784:
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// addi r5,r8,11524
	ctx.r5.s64 = ctx.r8.s64 + 11524;
	// addi r8,r11,-22000
	ctx.r8.s64 = ctx.r11.s64 + -22000;
loc_82527794:
	// lis r4,-32228
	ctx.r4.s64 = -2112094208;
	// addi r4,r4,11544
	ctx.r4.s64 = ctx.r4.s64 + 11544;
loc_8252779C:
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r6,r9,-19708
	ctx.r6.s64 = ctx.r9.s64 + -19708;
	// addi r7,r10,-19704
	ctx.r7.s64 = ctx.r10.s64 + -19704;
loc_825277AC:
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82529020
	ctx.lr = 0x825277B8;
	sub_82529020(ctx, base);
	// b 0x82527868
	goto loc_82527868;
loc_825277BC:
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// addi r5,r8,11560
	ctx.r5.s64 = ctx.r8.s64 + 11560;
	// addi r8,r11,-21840
	ctx.r8.s64 = ctx.r11.s64 + -21840;
	// b 0x82527794
	goto loc_82527794;
loc_825277D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82528d80
	ctx.lr = 0x825277D8;
	sub_82528D80(ctx, base);
	// b 0x82527868
	goto loc_82527868;
loc_825277DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825292d0
	ctx.lr = 0x825277E4;
	sub_825292D0(ctx, base);
	// b 0x82527868
	goto loc_82527868;
loc_825277E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82529458
	ctx.lr = 0x825277F0;
	sub_82529458(ctx, base);
	// b 0x82527868
	goto loc_82527868;
loc_825277F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82529500
	ctx.lr = 0x825277FC;
	sub_82529500(ctx, base);
	// b 0x82527868
	goto loc_82527868;
loc_82527800:
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// lis r4,-32228
	ctx.r4.s64 = -2112094208;
	// addi r5,r8,11800
	ctx.r5.s64 = ctx.r8.s64 + 11800;
	// addi r4,r4,11836
	ctx.r4.s64 = ctx.r4.s64 + 11836;
	// addi r8,r11,-27008
	ctx.r8.s64 = ctx.r11.s64 + -27008;
	// b 0x8252779c
	goto loc_8252779C;
loc_8252781C:
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// lis r4,-32228
	ctx.r4.s64 = -2112094208;
	// addi r5,r8,11868
	ctx.r5.s64 = ctx.r8.s64 + 11868;
	// addi r4,r4,11836
	ctx.r4.s64 = ctx.r4.s64 + 11836;
	// addi r8,r11,-26816
	ctx.r8.s64 = ctx.r11.s64 + -26816;
	// b 0x8252779c
	goto loc_8252779C;
loc_82527838:
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r4,r8,11836
	ctx.r4.s64 = ctx.r8.s64 + 11836;
	// addi r6,r10,31996
	ctx.r6.s64 = ctx.r10.s64 + 31996;
	// addi r5,r9,11904
	ctx.r5.s64 = ctx.r9.s64 + 11904;
	// addi r8,r11,-26696
	ctx.r8.s64 = ctx.r11.s64 + -26696;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x825277ac
	goto loc_825277AC;
loc_82527860:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252a180
	ctx.lr = 0x82527868;
	sub_8252A180(ctx, base);
loc_82527868:
	// lwz r11,1540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1540);
	// stw r11,1536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1536, ctx.r11.u32);
loc_82527870:
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82527878"))) PPC_WEAK_FUNC(sub_82527878);
PPC_FUNC_IMPL(__imp__sub_82527878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82527880;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4600(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4600);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,6348(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6348);
	// bl 0x82527fb0
	ctx.lr = 0x8252789C;
	sub_82527FB0(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// blt cr6,0x825279e8
	if (ctx.cr6.lt) goto loc_825279E8;
	// beq cr6,0x82527974
	if (ctx.cr6.eq) goto loc_82527974;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// blt cr6,0x82527900
	if (ctx.cr6.lt) goto loc_82527900;
	// beq cr6,0x825278f8
	if (ctx.cr6.eq) goto loc_825278F8;
	// cmplwi cr6,r30,5
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 5, ctx.xer);
	// blt cr6,0x825278e4
	if (ctx.cr6.lt) goto loc_825278E4;
	// beq cr6,0x825278d8
	if (ctx.cr6.eq) goto loc_825278D8;
	// cmplwi cr6,r30,7
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 7, ctx.xer);
	// bge cr6,0x82527a0c
	if (!ctx.cr6.lt) goto loc_82527A0C;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r29,4
	ctx.r29.s64 = 4;
	// b 0x825278ec
	goto loc_825278EC;
loc_825278D8:
	// li r4,2
	ctx.r4.s64 = 2;
	// li r29,3
	ctx.r29.s64 = 3;
	// b 0x825278ec
	goto loc_825278EC;
loc_825278E4:
	// li r4,1
	ctx.r4.s64 = 1;
	// li r29,2
	ctx.r29.s64 = 2;
loc_825278EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82527a90
	ctx.lr = 0x825278F4;
	sub_82527A90(ctx, base);
	// b 0x82527a0c
	goto loc_82527A0C;
loc_825278F8:
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x82527a0c
	goto loc_82527A0C;
loc_82527900:
	// lwz r11,4600(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4600);
	// li r29,2
	ctx.r29.s64 = 2;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r9,1056
	ctx.r9.s64 = 1056;
	// lwz r10,6344(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6344);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
loc_82527924:
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r10,2120(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2120);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82527950
	if (ctx.cr6.eq) goto loc_82527950;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82527950
	if (ctx.cr6.eq) goto loc_82527950;
	// addi r9,r9,1056
	ctx.r9.s64 = ctx.r9.s64 + 1056;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r9,4224
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4224, ctx.xer);
	// blt cr6,0x82527924
	if (ctx.cr6.lt) goto loc_82527924;
	// li r8,-1
	ctx.r8.s64 = -1;
loc_82527950:
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82527968
	if (ctx.cr6.eq) goto loc_82527968;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// bl 0x82527fb0
	ctx.lr = 0x82527964;
	sub_82527FB0(ctx, base);
	// b 0x82527a0c
	goto loc_82527A0C;
loc_82527968:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x82527b30
	ctx.lr = 0x82527970;
	sub_82527B30(ctx, base);
	// b 0x82527a0c
	goto loc_82527A0C;
loc_82527974:
	// lwz r8,4600(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4600);
	// li r29,2
	ctx.r29.s64 = 2;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,1056
	ctx.r11.s64 = 1056;
loc_82527984:
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r9,2120(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2120);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x825279b0
	if (ctx.cr6.eq) goto loc_825279B0;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x825279b0
	if (ctx.cr6.eq) goto loc_825279B0;
	// addi r11,r11,1056
	ctx.r11.s64 = ctx.r11.s64 + 1056;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r11,4224
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4224, ctx.xer);
	// blt cr6,0x82527984
	if (ctx.cr6.lt) goto loc_82527984;
	// li r10,-1
	ctx.r10.s64 = -1;
loc_825279B0:
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x825279cc
	if (ctx.cr6.eq) goto loc_825279CC;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// bl 0x82527fb0
	ctx.lr = 0x825279C8;
	sub_82527FB0(ctx, base);
	// b 0x825279d4
	goto loc_825279D4;
loc_825279CC:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82527b30
	ctx.lr = 0x825279D4;
	sub_82527B30(ctx, base);
loc_825279D4:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82527dd0
	ctx.lr = 0x825279E0;
	sub_82527DD0(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x82527a04
	goto loc_82527A04;
loc_825279E8:
	// lwz r11,4600(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4600);
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r11,6344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6344);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
loc_82527A04:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82527dd0
	ctx.lr = 0x82527A0C;
	sub_82527DD0(ctx, base);
loc_82527A0C:
	// bl 0x8226d8e8
	ctx.lr = 0x82527A10;
	sub_8226D8E8(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// b 0x82527a7c
	goto loc_82527A7C;
loc_82527A28:
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82527a40
	if (!ctx.cr6.lt) goto loc_82527A40;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x82527a44
	goto loc_82527A44;
loc_82527A40:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82527A44:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8226eb90
	ctx.lr = 0x82527A50;
	sub_8226EB90(ctx, base);
	// lbz r11,216(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 216);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82527a70
	if (ctx.cr0.eq) goto loc_82527A70;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829204e8
	ctx.lr = 0x82527A64;
	sub_829204E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8226e660
	ctx.lr = 0x82527A70;
	sub_8226E660(ctx, base);
loc_82527A70:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_82527A7C:
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bgt cr6,0x82527a28
	if (ctx.cr6.gt) goto loc_82527A28;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82527A90"))) PPC_WEAK_FUNC(sub_82527A90);
PPC_FUNC_IMPL(__imp__sub_82527A90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82527A98;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82527b28
	if (ctx.cr6.eq) goto loc_82527B28;
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
loc_82527AB4:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// bge cr6,0x82527af0
	if (!ctx.cr6.lt) goto loc_82527AF0;
	// lwz r9,4600(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4600);
	// mulli r11,r29,1056
	ctx.r11.s64 = ctx.r29.s64 * 1056;
loc_82527AC8:
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,2120(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2120);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82527af4
	if (ctx.cr6.eq) goto loc_82527AF4;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82527af4
	if (ctx.cr6.eq) goto loc_82527AF4;
	// addi r11,r11,1056
	ctx.r11.s64 = ctx.r11.s64 + 1056;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r11,4224
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4224, ctx.xer);
	// blt cr6,0x82527ac8
	if (ctx.cr6.lt) goto loc_82527AC8;
loc_82527AF0:
	// li r31,-1
	ctx.r31.s64 = -1;
loc_82527AF4:
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// beq cr6,0x82527b14
	if (ctx.cr6.eq) goto loc_82527B14;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82527fb0
	ctx.lr = 0x82527B0C;
	sub_82527FB0(ctx, base);
	// addi r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 1;
	// b 0x82527b1c
	goto loc_82527B1C;
loc_82527B14:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82527b30
	ctx.lr = 0x82527B1C;
	sub_82527B30(ctx, base);
loc_82527B1C:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bne 0x82527ab4
	if (!ctx.cr0.eq) goto loc_82527AB4;
loc_82527B28:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82527B30"))) PPC_WEAK_FUNC(sub_82527B30);
PPC_FUNC_IMPL(__imp__sub_82527B30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82527B38;
	__savegprlr_26(ctx, base);
	// stwu r1,-1152(r1)
	ea = -1152 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8226d8e8
	ctx.lr = 0x82527B48;
	sub_8226D8E8(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82527B54:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// bl 0x8226ec90
	ctx.lr = 0x82527B64;
	sub_8226EC90(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x82527bc4
	if (ctx.cr0.eq) goto loc_82527BC4;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82527bac
	if (ctx.cr6.eq) goto loc_82527BAC;
	// addi r11,r29,1708
	ctx.r11.s64 = ctx.r29.s64 + 1708;
loc_82527B7C:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82527bc4
	if (!ctx.cr6.eq) goto loc_82527BC4;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82527b94
	if (!ctx.cr6.eq) goto loc_82527B94;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82527B94:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x82527b7c
	if (ctx.cr6.lt) goto loc_82527B7C;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82527bc4
	if (!ctx.cr6.eq) goto loc_82527BC4;
loc_82527BAC:
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8226ed48
	ctx.lr = 0x82527BBC;
	sub_8226ED48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82527be4
	if (!ctx.cr0.eq) goto loc_82527BE4;
loc_82527BC4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x82527b54
	if (ctx.cr6.lt) goto loc_82527B54;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82527c88
	ctx.lr = 0x82527BDC;
	sub_82527C88(ctx, base);
loc_82527BDC:
	// addi r1,r1,1152
	ctx.r1.s64 = ctx.r1.s64 + 1152;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
loc_82527BE4:
	// rlwinm r11,r31,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0xFFFFFFC0;
	// li r10,1
	ctx.r10.s64 = 1;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r30,1708(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1708, ctx.r30.u32);
	// stw r28,1704(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1704, ctx.r28.u32);
	// stw r28,1720(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1720, ctx.r28.u32);
	// stw r10,1724(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1724, ctx.r10.u32);
	// bl 0x8226c3f0
	ctx.lr = 0x82527C04;
	sub_8226C3F0(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lwz r11,21120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82527c28
	if (ctx.cr6.eq) goto loc_82527C28;
	// lwz r11,240(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82527c68
	if (!ctx.cr0.eq) goto loc_82527C68;
loc_82527C28:
	// lwz r11,4600(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4600);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,6344(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6344);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82527c4c
	if (!ctx.cr6.eq) goto loc_82527C4C;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,-1
	ctx.r9.s64 = -1;
	// subfc r10,r10,r31
	ctx.xer.ca = ctx.r31.u32 >= ctx.r10.u32;
	ctx.r10.s64 = ctx.r31.s64 - ctx.r10.s64;
	// subfze r4,r9
	temp.u64 = ~ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u64 < ctx.xer.ca;
	ctx.r4.u64 = temp.u64;
loc_82527C4C:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,580
	ctx.r3.s64 = ctx.r11.s64 + 580;
	// bl 0x8245c4f0
	ctx.lr = 0x82527C5C;
	sub_8245C4F0(ctx, base);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// b 0x82527c70
	goto loc_82527C70;
loc_82527C68:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
loc_82527C70:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8252a7c8
	ctx.lr = 0x82527C80;
	sub_8252A7C8(ctx, base);
	// b 0x82527bdc
	goto loc_82527BDC;
}

__attribute__((alias("__imp__sub_82527C84"))) PPC_WEAK_FUNC(sub_82527C84);
PPC_FUNC_IMPL(__imp__sub_82527C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82527C88"))) PPC_WEAK_FUNC(sub_82527C88);
PPC_FUNC_IMPL(__imp__sub_82527C88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82527C90;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8226d8e8
	ctx.lr = 0x82527CA0;
	sub_8226D8E8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822402c8
	ctx.lr = 0x82527CB4;
	sub_822402C8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r11,-5144
	ctx.r4.s64 = ctx.r11.s64 + -5144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82240328
	ctx.lr = 0x82527CC8;
	sub_82240328(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252ac08
	ctx.lr = 0x82527CD4;
	sub_8252AC08(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82546708
	ctx.lr = 0x82527CE4;
	sub_82546708(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x82546708
	ctx.lr = 0x82527CF8;
	sub_82546708(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8226e560
	ctx.lr = 0x82527D0C;
	sub_8226E560(ctx, base);
	// bl 0x829204e8
	ctx.lr = 0x82527D10;
	sub_829204E8(ctx, base);
	// rlwinm r11,r30,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 6) & 0xFFFFFFC0;
	// li r26,1
	ctx.r26.s64 = 1;
	// add r28,r11,r31
	ctx.r28.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r26,1704(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1704, ctx.r26.u32);
	// stw r3,1708(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1708, ctx.r3.u32);
	// bl 0x8226c3f0
	ctx.lr = 0x82527D28;
	sub_8226C3F0(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lwz r11,21120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82527d4c
	if (ctx.cr6.eq) goto loc_82527D4C;
	// lwz r11,240(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82527d8c
	if (!ctx.cr0.eq) goto loc_82527D8C;
loc_82527D4C:
	// lwz r11,4600(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4600);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,6344(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6344);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82527d70
	if (!ctx.cr6.eq) goto loc_82527D70;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,-1
	ctx.r9.s64 = -1;
	// subfc r10,r10,r30
	ctx.xer.ca = ctx.r30.u32 >= ctx.r10.u32;
	ctx.r10.s64 = ctx.r30.s64 - ctx.r10.s64;
	// subfze r4,r9
	temp.u64 = ~ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u64 < ctx.xer.ca;
	ctx.r4.u64 = temp.u64;
loc_82527D70:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r11,580
	ctx.r3.s64 = ctx.r11.s64 + 580;
	// bl 0x8245c4f0
	ctx.lr = 0x82527D80;
	sub_8245C4F0(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// b 0x82527d94
	goto loc_82527D94;
loc_82527D8C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
loc_82527D94:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252a7c8
	ctx.lr = 0x82527DA4;
	sub_8252A7C8(ctx, base);
	// stw r26,1724(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1724, ctx.r26.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825469e0
	ctx.lr = 0x82527DB0;
	sub_825469E0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825469e0
	ctx.lr = 0x82527DB8;
	sub_825469E0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822402c8
	ctx.lr = 0x82527DC8;
	sub_822402C8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82527DD0"))) PPC_WEAK_FUNC(sub_82527DD0);
PPC_FUNC_IMPL(__imp__sub_82527DD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82527DD8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4600(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4600);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r3,r11,580
	ctx.r3.s64 = ctx.r11.s64 + 580;
	// addi r4,r10,-28500
	ctx.r4.s64 = ctx.r10.s64 + -28500;
	// bl 0x82fa3928
	ctx.lr = 0x82527DF8;
	sub_82FA3928(ctx, base);
	// lis r11,25
	ctx.r11.s64 = 1638400;
	// lis r10,15470
	ctx.r10.s64 = 1013841920;
	// lis r30,-31958
	ctx.r30.s64 = -2094399488;
	// ori r28,r11,26125
	ctx.r28.u64 = ctx.r11.u64 | 26125;
	// ori r29,r10,62303
	ctx.r29.u64 = ctx.r10.u64 | 62303;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82527e3c
	if (ctx.cr0.eq) goto loc_82527E3C;
	// lwz r11,4600(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4600);
	// addi r11,r11,2120
	ctx.r11.s64 = ctx.r11.s64 + 2120;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82adfe80
	ctx.lr = 0x82527E24;
	sub_82ADFE80(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lwz r11,21292(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21292);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82527e54
	goto loc_82527E54;
loc_82527E3C:
	// lwz r11,21292(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21292);
	// mullw r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// add. r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,21292(r30)
	PPC_STORE_U32(ctx.r30.u32 + 21292, ctx.r11.u32);
	// bgt 0x82527e5c
	if (ctx.cr0.gt) goto loc_82527E5C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82527E54:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82527eb0
	if (ctx.cr6.eq) goto loc_82527EB0;
loc_82527E5C:
	// lwa r10,4676(r31)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 4676));
	// mullw r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// clrlwi r9,r11,9
	ctx.r9.u64 = ctx.r11.u32 & 0x7FFFFF;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// stw r11,21292(r30)
	PPC_STORE_U32(ctx.r30.u32 + 21292, ctx.r11.u32);
	// oris r10,r9,16256
	ctx.r10.u64 = ctx.r9.u64 | 1065353216;
	// lwz r11,4668(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4668);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-24756(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24756);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x82527f00
	goto loc_82527F00;
loc_82527EB0:
	// lwa r10,4680(r31)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 4680));
	// mullw r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// clrlwi r9,r11,9
	ctx.r9.u64 = ctx.r11.u32 & 0x7FFFFF;
	// stw r11,21292(r30)
	PPC_STORE_U32(ctx.r30.u32 + 21292, ctx.r11.u32);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// oris r11,r9,16256
	ctx.r11.u64 = ctx.r9.u64 | 1065353216;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,4672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4672);
	// lfs f0,-24756(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24756);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_82527F00:
	// mulli r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 * 36;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8226c3f0
	ctx.lr = 0x82527F0C;
	sub_8226C3F0(ctx, base);
	// mulli r11,r27,40
	ctx.r11.s64 = ctx.r27.s64 * 40;
	// add r29,r11,r3
	ctx.r29.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r5,36
	ctx.r5.s64 = 36;
	// addi r3,r29,312
	ctx.r3.s64 = ctx.r29.s64 + 312;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82527F24;
	sub_82FA77C0(ctx, base);
	// li r28,1
	ctx.r28.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r28,348(r29)
	PPC_STORE_U32(ctx.r29.u32 + 348, ctx.r28.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// bl 0x82546708
	ctx.lr = 0x82527F3C;
	sub_82546708(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,4600(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4600);
	// bl 0x82322128
	ctx.lr = 0x82527F48;
	sub_82322128(ctx, base);
	// lwz r11,4600(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4600);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r3,r11,580
	ctx.r3.s64 = ctx.r11.s64 + 580;
	// bl 0x8245c5a8
	ctx.lr = 0x82527F60;
	sub_8245C5A8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252a7c8
	ctx.lr = 0x82527F78;
	sub_8252A7C8(ctx, base);
	// rlwinm r11,r27,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 6) & 0xFFFFFFC0;
	// li r10,2
	ctx.r10.s64 = 2;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,1704(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1704, ctx.r10.u32);
	// lwz r3,4600(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4600);
	// bl 0x82322128
	ctx.lr = 0x82527F90;
	sub_82322128(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,1732(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1732, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,1720(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1720, ctx.r11.u32);
	// stw r28,1724(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1724, ctx.r28.u32);
	// bl 0x825469e0
	ctx.lr = 0x82527FA8;
	sub_825469E0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82527FB0"))) PPC_WEAK_FUNC(sub_82527FB0);
PPC_FUNC_IMPL(__imp__sub_82527FB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82527FB8;
	__savegprlr_27(ctx, base);
	// stwu r1,-1152(r1)
	ea = -1152 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4600(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4600);
	// mulli r10,r4,1056
	ctx.r10.s64 = ctx.r4.s64 * 1056;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r5,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r28,r11,2120
	ctx.r28.s64 = ctx.r11.s64 + 2120;
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r31,r11,1704
	ctx.r31.s64 = ctx.r11.s64 + 1704;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r27,1728(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1728, ctx.r27.u32);
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// stw r10,1704(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1704, ctx.r10.u32);
	// lwz r11,1704(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1704);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x825280c4
	if (ctx.cr6.lt) goto loc_825280C4;
	// beq cr6,0x8252808c
	if (ctx.cr6.eq) goto loc_8252808C;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x8252814c
	if (!ctx.cr6.lt) goto loc_8252814C;
	// lbz r11,1052(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1052);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82528034
	if (ctx.cr0.eq) goto loc_82528034;
	// addi r5,r3,1312
	ctx.r5.s64 = ctx.r3.s64 + 1312;
	// bl 0x8252a8e0
	ctx.lr = 0x8252802C;
	sub_8252A8E0(ctx, base);
	// std r27,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r27.u64);
	// b 0x82528144
	goto loc_82528144;
loc_82528034:
	// lwz r11,4600(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4600);
	// lwz r10,6344(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6344);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82528054
	if (!ctx.cr6.eq) goto loc_82528054;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,-1
	ctx.r9.s64 = -1;
	// subfc r10,r10,r29
	ctx.xer.ca = ctx.r29.u32 >= ctx.r10.u32;
	ctx.r10.s64 = ctx.r29.s64 - ctx.r10.s64;
	// subfze r4,r9
	temp.u64 = ~ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u64 < ctx.xer.ca;
	ctx.r4.u64 = temp.u64;
loc_82528054:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,580
	ctx.r3.s64 = ctx.r11.s64 + 580;
	// bl 0x8245c4f0
	ctx.lr = 0x82528064;
	sub_8245C4F0(ctx, base);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r28,12
	ctx.r5.s64 = ctx.r28.s64 + 12;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8252a7c8
	ctx.lr = 0x8252807C;
	sub_8252A7C8(ctx, base);
	// lwz r10,4600(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4600);
	// ld r10,6368(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 6368);
	// std r10,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r10.u64);
	// b 0x82528144
	goto loc_82528144;
loc_8252808C:
	// lwz r11,4600(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4600);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r3,r11,580
	ctx.r3.s64 = ctx.r11.s64 + 580;
	// bl 0x8245c5a8
	ctx.lr = 0x825280A4;
	sub_8245C5A8(ctx, base);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// lwz r6,8(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8252a4a8
	ctx.lr = 0x825280C0;
	sub_8252A4A8(ctx, base);
	// b 0x82528150
	goto loc_82528150;
loc_825280C4:
	// bl 0x8226c3f0
	ctx.lr = 0x825280C8;
	sub_8226C3F0(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lwz r11,21120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825280f8
	if (ctx.cr6.eq) goto loc_825280F8;
	// lwz r11,240(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825280f8
	if (ctx.cr0.eq) goto loc_825280F8;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82528134
	goto loc_82528134;
loc_825280F8:
	// lwz r11,4600(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4600);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,6344(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6344);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8252811c
	if (!ctx.cr6.eq) goto loc_8252811C;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,-1
	ctx.r9.s64 = -1;
	// subfc r10,r10,r29
	ctx.xer.ca = ctx.r29.u32 >= ctx.r10.u32;
	ctx.r10.s64 = ctx.r29.s64 - ctx.r10.s64;
	// subfze r4,r9
	temp.u64 = ~ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u64 < ctx.xer.ca;
	ctx.r4.u64 = temp.u64;
loc_8252811C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r11,580
	ctx.r3.s64 = ctx.r11.s64 + 580;
	// bl 0x8245c4f0
	ctx.lr = 0x8252812C;
	sub_8245C4F0(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
loc_82528134:
	// addi r5,r28,12
	ctx.r5.s64 = ctx.r28.s64 + 12;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8252a7c8
	ctx.lr = 0x82528144;
	sub_8252A7C8(ctx, base);
loc_82528144:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_8252814C:
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
loc_82528150:
	// addi r1,r1,1152
	ctx.r1.s64 = ctx.r1.s64 + 1152;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82528158"))) PPC_WEAK_FUNC(sub_82528158);
PPC_FUNC_IMPL(__imp__sub_82528158) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82528160;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r25,2240(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 2240);
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// addi r26,r11,-2340
	ctx.r26.s64 = ctx.r11.s64 + -2340;
	// addi r30,r10,24600
	ctx.r30.s64 = ctx.r10.s64 + 24600;
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// lfs f0,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lwz r3,1572(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// beq cr6,0x825281d8
	if (ctx.cr6.eq) goto loc_825281D8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825281D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825281D8:
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r3,1564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1564);
	// li r11,-1
	ctx.r11.s64 = -1;
	// vor128 v12,v67,v67
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v67.u8));
	// stw r24,1572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1572, ctx.r24.u32);
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r11,1576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1576, ctx.r11.u32);
	// addi r11,r30,20
	ctx.r11.s64 = ctx.r30.s64 + 20;
	// li r9,20
	ctx.r9.s64 = 20;
	// stw r24,1568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1568, ctx.r24.u32);
	// vor128 v13,v77,v77
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v77.u8));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lvlx v11,r30,r9
	temp.u32 = ctx.r30.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx v0,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// stw r25,180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 180, ctx.r25.u32);
	// vsldoi v0,v0,v0,4
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v0.u8), 12));
	// lfs f1,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// vor v0,v11,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vsel v1,v0,v13,v12
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// bl 0x82522168
	ctx.lr = 0x82528228;
	sub_82522168(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r11,r11,27984
	ctx.r11.s64 = ctx.r11.s64 + 27984;
	// stw r29,1580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1580, ctx.r29.u32);
	// li r9,2492
	ctx.r9.s64 = 2492;
	// lvlx v0,0,r26
	temp.u32 = ctx.r26.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r8,540
	ctx.r8.s64 = 540;
	// lwz r6,1564(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1564);
	// li r10,1236
	ctx.r10.s64 = 1236;
	// li r7,160
	ctx.r7.s64 = 160;
	// lvlx v12,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v11,r11,r8
	temp.u32 = ctx.r11.u32 + ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v13,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v13,v0,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// vrlimi128 v11,v12,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// vrlimi128 v11,v13,3,2
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 3));
	// stvx128 v11,r6,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,1568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1568);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82528280
	if (!ctx.cr6.eq) goto loc_82528280;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8252ae80
	ctx.lr = 0x82528280;
	sub_8252AE80(ctx, base);
loc_82528280:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8252af40
	ctx.lr = 0x82528290;
	sub_8252AF40(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825282A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825282c8
	if (ctx.cr0.eq) goto loc_825282C8;
	// lwz r4,1576(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1576);
	// lwz r3,1564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1564);
	// bl 0x825220e8
	ctx.lr = 0x825282B8;
	sub_825220E8(ctx, base);
	// addi r11,r27,66
	ctx.r11.s64 = ctx.r27.s64 + 66;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// stwx r24,r11,r28
	PPC_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r24.u32);
	// b 0x825282d8
	goto loc_825282D8;
loc_825282C8:
	// addi r11,r27,66
	ctx.r11.s64 = ctx.r27.s64 + 66;
	// li r10,1
	ctx.r10.s64 = 1;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// stwx r10,r11,r28
	PPC_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r10.u32);
loc_825282D8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825282E0"))) PPC_WEAK_FUNC(sub_825282E0);
PPC_FUNC_IMPL(__imp__sub_825282E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x825282E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,1564(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1564);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822c2418
	ctx.lr = 0x82528320;
	sub_822C2418(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r28,r11,15136
	ctx.r28.s64 = ctx.r11.s64 + 15136;
	// lwz r4,15136(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15136);
	// bl 0x826a72e8
	ctx.lr = 0x82528338;
	sub_826A72E8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82528348
	if (ctx.cr6.eq) goto loc_82528348;
	// bl 0x82241d18
	ctx.lr = 0x82528348;
	sub_82241D18(ctx, base);
loc_82528348:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,1588(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1588);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822c2418
	ctx.lr = 0x82528370;
	sub_822C2418(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826a72e8
	ctx.lr = 0x82528380;
	sub_826A72E8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82528390
	if (ctx.cr6.eq) goto loc_82528390;
	// bl 0x82241d18
	ctx.lr = 0x82528390;
	sub_82241D18(ctx, base);
loc_82528390:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,1612(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1612);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822c2418
	ctx.lr = 0x825283B8;
	sub_822C2418(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826a72e8
	ctx.lr = 0x825283C8;
	sub_826A72E8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825283d8
	if (ctx.cr6.eq) goto loc_825283D8;
	// bl 0x82241d18
	ctx.lr = 0x825283D8;
	sub_82241D18(ctx, base);
loc_825283D8:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,1636(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1636);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822c2418
	ctx.lr = 0x82528400;
	sub_822C2418(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826a72e8
	ctx.lr = 0x82528410;
	sub_826A72E8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82528420
	if (ctx.cr6.eq) goto loc_82528420;
	// bl 0x82241d18
	ctx.lr = 0x82528420;
	sub_82241D18(ctx, base);
loc_82528420:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82528430
	if (ctx.cr6.eq) goto loc_82528430;
	// bl 0x82241d18
	ctx.lr = 0x82528430;
	sub_82241D18(ctx, base);
loc_82528430:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82528438"))) PPC_WEAK_FUNC(sub_82528438);
PPC_FUNC_IMPL(__imp__sub_82528438) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82528440;
	__savegprlr_26(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// li r26,1
	ctx.r26.s64 = 1;
	// bl 0x82528678
	ctx.lr = 0x82528458;
	sub_82528678(ctx, base);
	// lwz r11,1540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1540);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82528488
	if (ctx.cr6.eq) goto loc_82528488;
	// lwz r11,4600(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4600);
	// lwz r11,6344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6344);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82528480
	if (ctx.cr6.lt) goto loc_82528480;
	// beq cr6,0x82528664
	if (ctx.cr6.eq) goto loc_82528664;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82528488
	if (!ctx.cr6.lt) goto loc_82528488;
loc_82528480:
	// lwz r11,1696(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
loc_82528484:
	// addi r26,r11,1
	ctx.r26.s64 = ctx.r11.s64 + 1;
loc_82528488:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825268f0
	ctx.lr = 0x82528490;
	sub_825268F0(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r10,r31,1704
	ctx.r10.s64 = ctx.r31.s64 + 1704;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_825284A4:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x825284b4
	if (ctx.cr6.eq) goto loc_825284B4;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
loc_825284B4:
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// bdnz 0x825284a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825284A4;
	// lwz r3,4600(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4600);
	// bl 0x82323f98
	ctx.lr = 0x825284C4;
	sub_82323F98(ctx, base);
	// lwz r11,1544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x825284e8
	if (ctx.cr6.eq) goto loc_825284E8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x825284e8
	if (ctx.cr6.eq) goto loc_825284E8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// bne cr6,0x825284ec
	if (!ctx.cr6.eq) goto loc_825284EC;
loc_825284E8:
	// li r29,1
	ctx.r29.s64 = 1;
loc_825284EC:
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_825284F8:
	// stw r28,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r28.u32);
	// stwu r28,16(r11)
	ea = 16 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x825284f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825284F8;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e4d50
	ctx.lr = 0x82528510;
	sub_822E4D50(ctx, base);
	// extsw r10,r26
	ctx.r10.s64 = ctx.r26.s32;
	// lwz r11,1540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1540);
	// li r4,2
	ctx.r4.s64 = 2;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r26,r11,27,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x822e4d50
	ctx.lr = 0x82528540;
	sub_822E4D50(ctx, base);
	// stb r26,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r26.u8);
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822e4d50
	ctx.lr = 0x82528550;
	sub_822E4D50(ctx, base);
	// addi r11,r31,2008
	ctx.r11.s64 = ctx.r31.s64 + 2008;
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822e4d50
	ctx.lr = 0x82528564;
	sub_822E4D50(ctx, base);
	// addi r11,r31,2520
	ctx.r11.s64 = ctx.r31.s64 + 2520;
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822e4d50
	ctx.lr = 0x82528578;
	sub_822E4D50(ctx, base);
	// extsw r11,r27
	ctx.r11.s64 = ctx.r27.s32;
	// li r4,3
	ctx.r4.s64 = 3;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.f0.u64);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x822e4d50
	ctx.lr = 0x82528598;
	sub_822E4D50(ctx, base);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.f0.u64);
	// bl 0x822e4d50
	ctx.lr = 0x825285BC;
	sub_822E4D50(ctx, base);
	// addic r11,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// lwz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// subfe r11,r11,r29
	temp.u8 = (~ctx.r11.u32 + ctx.r29.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r29.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r29.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r10,r10,15152
	ctx.r10.s64 = ctx.r10.s64 + 15152;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// li r6,7
	ctx.r6.s64 = 7;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.f0.u64);
	// lwz r11,4600(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4600);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,6344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6344);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x826a7620
	ctx.lr = 0x82528604;
	sub_826A7620(ctx, base);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r29,92(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x822c2418
	ctx.lr = 0x82528624;
	sub_822C2418(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825282e0
	ctx.lr = 0x82528630;
	sub_825282E0(ctx, base);
	// addi r31,r1,208
	ctx.r31.s64 = ctx.r1.s64 + 208;
	// li r30,6
	ctx.r30.s64 = 6;
loc_82528638:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e4d00
	ctx.lr = 0x82528644;
	sub_822E4D00(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82528638
	if (!ctx.cr0.lt) goto loc_82528638;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8252865c
	if (ctx.cr6.eq) goto loc_8252865C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82241d18
	ctx.lr = 0x8252865C;
	sub_82241D18(ctx, base);
loc_8252865C:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
loc_82528664:
	// lwz r11,1696(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x82528484
	goto loc_82528484;
}

__attribute__((alias("__imp__sub_82528678"))) PPC_WEAK_FUNC(sub_82528678);
PPC_FUNC_IMPL(__imp__sub_82528678) {
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
	// lwz r11,1692(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1692);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x825286a4
	if (ctx.cr6.eq) goto loc_825286A4;
	// lwz r4,100(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// b 0x825286c8
	goto loc_825286C8;
loc_825286A4:
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x825286c0
	if (ctx.cr6.eq) goto loc_825286C0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x825286c0
	if (ctx.cr6.eq) goto loc_825286C0;
	// addi r11,r11,84
	ctx.r11.s64 = ctx.r11.s64 + 84;
	// b 0x825286c4
	goto loc_825286C4;
loc_825286C0:
	// addi r11,r11,76
	ctx.r11.s64 = ctx.r11.s64 + 76;
loc_825286C4:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_825286C8:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x825286e8
	if (!ctx.cr6.eq) goto loc_825286E8;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x822e7a80
	ctx.lr = 0x825286E4;
	sub_822E7A80(ctx, base);
	// b 0x82528730
	goto loc_82528730;
loc_825286E8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82519160
	ctx.lr = 0x825286F0;
	sub_82519160(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82528720
	if (ctx.cr6.eq) goto loc_82528720;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x82528724
	goto loc_82528724;
loc_82528720:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82528724:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82528730
	if (ctx.cr6.eq) goto loc_82528730;
	// bl 0x82241d18
	ctx.lr = 0x82528730;
	sub_82241D18(ctx, base);
loc_82528730:
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

__attribute__((alias("__imp__sub_82528748"))) PPC_WEAK_FUNC(sub_82528748);
PPC_FUNC_IMPL(__imp__sub_82528748) {
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
	// lwz r11,1692(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1692);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82528774
	if (ctx.cr6.eq) goto loc_82528774;
	// lwz r4,100(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// b 0x82528798
	goto loc_82528798;
loc_82528774:
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82528790
	if (ctx.cr6.eq) goto loc_82528790;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82528790
	if (ctx.cr6.eq) goto loc_82528790;
	// addi r11,r11,84
	ctx.r11.s64 = ctx.r11.s64 + 84;
	// b 0x82528794
	goto loc_82528794;
loc_82528790:
	// addi r11,r11,76
	ctx.r11.s64 = ctx.r11.s64 + 76;
loc_82528794:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82528798:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x825287ac
	if (ctx.cr6.eq) goto loc_825287AC;
	// bl 0x82519160
	ctx.lr = 0x825287A8;
	sub_82519160(ctx, base);
	// b 0x825287c0
	goto loc_825287C0;
loc_825287AC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x822e7a80
	ctx.lr = 0x825287C0;
	sub_822E7A80(ctx, base);
loc_825287C0:
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

__attribute__((alias("__imp__sub_825287D8"))) PPC_WEAK_FUNC(sub_825287D8);
PPC_FUNC_IMPL(__imp__sub_825287D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4600(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4600);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,6344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6344);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x825289f4
	if (ctx.cr6.lt) goto loc_825289F4;
	// beq cr6,0x82528904
	if (ctx.cr6.eq) goto loc_82528904;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82528a64
	if (!ctx.cr6.lt) goto loc_82528A64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82528748
	ctx.lr = 0x82528814;
	sub_82528748(ctx, base);
	// bl 0x8252b2a8
	ctx.lr = 0x82528818;
	sub_8252B2A8(ctx, base);
	// lwz r11,1544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// addi r4,r31,1664
	ctx.r4.s64 = ctx.r31.s64 + 1664;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bne cr6,0x82528840
	if (!ctx.cr6.eq) goto loc_82528840;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8226c200
	ctx.lr = 0x82528838;
	sub_8226C200(ctx, base);
	// addi r4,r31,1524
	ctx.r4.s64 = ctx.r31.s64 + 1524;
	// b 0x8252884c
	goto loc_8252884C;
loc_82528840:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8226c200
	ctx.lr = 0x82528848;
	sub_8226C200(ctx, base);
	// addi r4,r31,1504
	ctx.r4.s64 = ctx.r31.s64 + 1504;
loc_8252884C:
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r3,1692(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1692);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r6,r31,24
	ctx.r6.s64 = ctx.r31.s64 + 24;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8251fe98
	ctx.lr = 0x82528868;
	sub_8251FE98(ctx, base);
	// lwz r11,4600(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4600);
	// lwz r11,6352(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6352);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x825288d0
	if (!ctx.cr6.eq) goto loc_825288D0;
	// lwz r11,1768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82528890
	if (!ctx.cr6.eq) goto loc_82528890;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,11244
	ctx.r4.s64 = ctx.r11.s64 + 11244;
	// b 0x82528a5c
	goto loc_82528A5C;
loc_82528890:
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r31,1704
	ctx.r9.s64 = ctx.r31.s64 + 1704;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_825288A0:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x825288b0
	if (ctx.cr6.eq) goto loc_825288B0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_825288B0:
	// addi r9,r9,64
	ctx.r9.s64 = ctx.r9.s64 + 64;
	// bdnz 0x825288a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825288A0;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r11,r11,15204
	ctx.r11.s64 = ctx.r11.s64 + 15204;
loc_825288C0:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,-4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// b 0x82528a5c
	goto loc_82528A5C;
loc_825288D0:
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r31,1704
	ctx.r9.s64 = ctx.r31.s64 + 1704;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_825288E0:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x825288f0
	if (ctx.cr6.eq) goto loc_825288F0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_825288F0:
	// addi r9,r9,64
	ctx.r9.s64 = ctx.r9.s64 + 64;
	// bdnz 0x825288e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825288E0;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r11,r11,15220
	ctx.r11.s64 = ctx.r11.s64 + 15220;
	// b 0x825288c0
	goto loc_825288C0;
loc_82528904:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82528748
	ctx.lr = 0x82528910;
	sub_82528748(ctx, base);
	// bl 0x8252b2a8
	ctx.lr = 0x82528914;
	sub_8252B2A8(ctx, base);
	// lwz r11,1768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// addi r4,r31,1664
	ctx.r4.s64 = ctx.r31.s64 + 1664;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// lwz r11,1544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// bne cr6,0x8252897c
	if (!ctx.cr6.eq) goto loc_8252897C;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bne cr6,0x8252896c
	if (!ctx.cr6.eq) goto loc_8252896C;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x8226c200
	ctx.lr = 0x82528940;
	sub_8226C200(ctx, base);
	// addi r4,r31,1516
	ctx.r4.s64 = ctx.r31.s64 + 1516;
loc_82528944:
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r3,1692(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1692);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r31,24
	ctx.r6.s64 = ctx.r31.s64 + 24;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x8251fe98
	ctx.lr = 0x82528960;
	sub_8251FE98(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,11276
	ctx.r4.s64 = ctx.r11.s64 + 11276;
	// b 0x82528a5c
	goto loc_82528A5C;
loc_8252896C:
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8226c200
	ctx.lr = 0x82528974;
	sub_8226C200(ctx, base);
	// addi r4,r31,1496
	ctx.r4.s64 = ctx.r31.s64 + 1496;
	// b 0x82528a38
	goto loc_82528A38;
loc_8252897C:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bne cr6,0x825289c0
	if (!ctx.cr6.eq) goto loc_825289C0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8226c200
	ctx.lr = 0x82528994;
	sub_8226C200(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r6,r31,24
	ctx.r6.s64 = ctx.r31.s64 + 24;
	// lwz r3,1692(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1692);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,1520
	ctx.r4.s64 = ctx.r31.s64 + 1520;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x8251fe98
	ctx.lr = 0x825289B4;
	sub_8251FE98(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,11336
	ctx.r4.s64 = ctx.r11.s64 + 11336;
	// b 0x82528a5c
	goto loc_82528A5C;
loc_825289C0:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8226c200
	ctx.lr = 0x825289C8;
	sub_8226C200(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r6,r31,24
	ctx.r6.s64 = ctx.r31.s64 + 24;
	// lwz r3,1692(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1692);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,1500
	ctx.r4.s64 = ctx.r31.s64 + 1500;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x8251fe98
	ctx.lr = 0x825289E8;
	sub_8251FE98(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,11368
	ctx.r4.s64 = ctx.r11.s64 + 11368;
	// b 0x82528a5c
	goto loc_82528A5C;
loc_825289F4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82528748
	ctx.lr = 0x82528A00;
	sub_82528748(ctx, base);
	// bl 0x8252b2a8
	ctx.lr = 0x82528A04;
	sub_8252B2A8(ctx, base);
	// lwz r11,1544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// addi r4,r31,1664
	ctx.r4.s64 = ctx.r31.s64 + 1664;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bne cr6,0x82528a2c
	if (!ctx.cr6.eq) goto loc_82528A2C;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8226c200
	ctx.lr = 0x82528A24;
	sub_8226C200(ctx, base);
	// addi r4,r31,1512
	ctx.r4.s64 = ctx.r31.s64 + 1512;
	// b 0x82528944
	goto loc_82528944;
loc_82528A2C:
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x8226c200
	ctx.lr = 0x82528A34;
	sub_8226C200(ctx, base);
	// addi r4,r31,1492
	ctx.r4.s64 = ctx.r31.s64 + 1492;
loc_82528A38:
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r3,1692(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1692);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r6,r31,24
	ctx.r6.s64 = ctx.r31.s64 + 24;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8251fe98
	ctx.lr = 0x82528A54;
	sub_8251FE98(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,11304
	ctx.r4.s64 = ctx.r11.s64 + 11304;
loc_82528A5C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252ab70
	ctx.lr = 0x82528A64;
	sub_8252AB70(ctx, base);
loc_82528A64:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,11396
	ctx.r4.s64 = ctx.r11.s64 + 11396;
	// bl 0x8252a2a0
	ctx.lr = 0x82528A74;
	sub_8252A2A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82528438
	ctx.lr = 0x82528A7C;
	sub_82528438(ctx, base);
	// lwz r3,1660(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1660);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82528a8c
	if (ctx.cr6.eq) goto loc_82528A8C;
	// bl 0x8252bed0
	ctx.lr = 0x82528A8C;
	sub_8252BED0(ctx, base);
loc_82528A8C:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82528AA0"))) PPC_WEAK_FUNC(sub_82528AA0);
PPC_FUNC_IMPL(__imp__sub_82528AA0) {
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
	// lwz r3,1548(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1548);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82528ac4
	if (ctx.cr6.eq) goto loc_82528AC4;
	// bl 0x82526d18
	ctx.lr = 0x82528AC4;
	sub_82526D18(ctx, base);
loc_82528AC4:
	// li r3,1504
	ctx.r3.s64 = 1504;
	// bl 0x82691500
	ctx.lr = 0x82528ACC;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82528aec
	if (ctx.cr0.eq) goto loc_82528AEC;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,1688(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1688);
	// addi r4,r31,64
	ctx.r4.s64 = ctx.r31.s64 + 64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82503428
	ctx.lr = 0x82528AE8;
	sub_82503428(ctx, base);
	// b 0x82528af0
	goto loc_82528AF0;
loc_82528AEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82528AF0:
	// stw r3,1548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1548, ctx.r3.u32);
	// lwz r11,1472(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1472);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82528b18
	goto loc_82528B18;
loc_82528B04:
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,64(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82528b24
	if (ctx.cr6.eq) goto loc_82528B24;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82528B18:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82528b04
	if (!ctx.cr6.eq) goto loc_82528B04;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82528B24:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82528ca0
	ctx.lr = 0x82528B2C;
	sub_82528CA0(ctx, base);
	// lwz r11,1548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1548);
	// lwz r11,1472(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1472);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82528b54
	goto loc_82528B54;
loc_82528B40:
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,64(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82528b60
	if (ctx.cr6.eq) goto loc_82528B60;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82528B54:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82528b40
	if (!ctx.cr6.eq) goto loc_82528B40;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82528B60:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82528ca0
	ctx.lr = 0x82528B68;
	sub_82528CA0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,11424
	ctx.r4.s64 = ctx.r11.s64 + 11424;
	// bl 0x8252a2a0
	ctx.lr = 0x82528B78;
	sub_8252A2A0(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,32570
	ctx.r4.s64 = ctx.r11.s64 + 32570;
	// bl 0x8252ab70
	ctx.lr = 0x82528B88;
	sub_8252AB70(ctx, base);
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

__attribute__((alias("__imp__sub_82528B9C"))) PPC_WEAK_FUNC(sub_82528B9C);
PPC_FUNC_IMPL(__imp__sub_82528B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82528BA0"))) PPC_WEAK_FUNC(sub_82528BA0);
PPC_FUNC_IMPL(__imp__sub_82528BA0) {
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
	// lwz r3,1548(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1548);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82528bc4
	if (ctx.cr6.eq) goto loc_82528BC4;
	// bl 0x82526d18
	ctx.lr = 0x82528BC4;
	sub_82526D18(ctx, base);
loc_82528BC4:
	// li r3,1504
	ctx.r3.s64 = 1504;
	// bl 0x82691500
	ctx.lr = 0x82528BCC;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82528bec
	if (ctx.cr0.eq) goto loc_82528BEC;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,1688(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1688);
	// addi r4,r31,400
	ctx.r4.s64 = ctx.r31.s64 + 400;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82503428
	ctx.lr = 0x82528BE8;
	sub_82503428(ctx, base);
	// b 0x82528bf0
	goto loc_82528BF0;
loc_82528BEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82528BF0:
	// stw r3,1548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1548, ctx.r3.u32);
	// lwz r11,1472(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1472);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82528c18
	goto loc_82528C18;
loc_82528C04:
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,64(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82528c24
	if (ctx.cr6.eq) goto loc_82528C24;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82528C18:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82528c04
	if (!ctx.cr6.eq) goto loc_82528C04;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82528C24:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82528ca0
	ctx.lr = 0x82528C2C;
	sub_82528CA0(ctx, base);
	// lwz r11,1548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1548);
	// lwz r11,1472(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1472);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82528c54
	goto loc_82528C54;
loc_82528C40:
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,64(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82528c60
	if (ctx.cr6.eq) goto loc_82528C60;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82528C54:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82528c40
	if (!ctx.cr6.eq) goto loc_82528C40;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82528C60:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82528ca0
	ctx.lr = 0x82528C68;
	sub_82528CA0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,11460
	ctx.r4.s64 = ctx.r11.s64 + 11460;
	// bl 0x8252a2a0
	ctx.lr = 0x82528C78;
	sub_8252A2A0(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,32570
	ctx.r4.s64 = ctx.r11.s64 + 32570;
	// bl 0x8252ab70
	ctx.lr = 0x82528C88;
	sub_8252AB70(ctx, base);
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

__attribute__((alias("__imp__sub_82528C9C"))) PPC_WEAK_FUNC(sub_82528C9C);
PPC_FUNC_IMPL(__imp__sub_82528C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82528CA0"))) PPC_WEAK_FUNC(sub_82528CA0);
PPC_FUNC_IMPL(__imp__sub_82528CA0) {
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
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82528CCC:
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stwu r11,16(r10)
	ea = 16 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82528ccc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82528CCC;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,1324(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1324);
	// lwz r4,1320(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1320);
	// bl 0x822c2418
	ctx.lr = 0x82528CF4;
	sub_822C2418(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e4d50
	ctx.lr = 0x82528D00;
	sub_822E4D50(ctx, base);
	// addi r11,r31,1352
	ctx.r11.s64 = ctx.r31.s64 + 1352;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822e4d50
	ctx.lr = 0x82528D14;
	sub_822E4D50(ctx, base);
	// addic r11,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subfe r11,r11,r30
	temp.u8 = (~ctx.r11.u32 + ctx.r30.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r30.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r4,r10,11492
	ctx.r4.s64 = ctx.r10.s64 + 11492;
	// stb r11,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r11.u8);
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x826a7620
	ctx.lr = 0x82528D38;
	sub_826A7620(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82528d48
	if (ctx.cr6.eq) goto loc_82528D48;
	// bl 0x82241d18
	ctx.lr = 0x82528D48;
	sub_82241D18(ctx, base);
loc_82528D48:
	// addi r31,r1,128
	ctx.r31.s64 = ctx.r1.s64 + 128;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82528D50:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e4d00
	ctx.lr = 0x82528D5C;
	sub_822E4D00(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82528d50
	if (!ctx.cr0.lt) goto loc_82528D50;
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

__attribute__((alias("__imp__sub_82528D7C"))) PPC_WEAK_FUNC(sub_82528D7C);
PPC_FUNC_IMPL(__imp__sub_82528D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82528D80"))) PPC_WEAK_FUNC(sub_82528D80);
PPC_FUNC_IMPL(__imp__sub_82528D80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82528D88;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8226d8e8
	ctx.lr = 0x82528D94;
	sub_8226D8E8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r3,1560(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1560);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82528da8
	if (ctx.cr6.eq) goto loc_82528DA8;
	// bl 0x82319cd8
	ctx.lr = 0x82528DA8;
	sub_82319CD8(ctx, base);
loc_82528DA8:
	// lwz r11,4600(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4600);
	// li r25,0
	ctx.r25.s64 = 0;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// lwz r11,6344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6344);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r27,r11,3
	ctx.r27.s64 = ctx.r11.s64 + 3;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x82528e2c
	if (!ctx.cr6.gt) goto loc_82528E2C;
	// addi r29,r31,1708
	ctx.r29.s64 = ctx.r31.s64 + 1708;
loc_82528DE0:
	// lwz r11,1696(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82528e1c
	if (ctx.cr6.eq) goto loc_82528E1C;
	// lwz r11,-4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82528e1c
	if (!ctx.cr6.eq) goto loc_82528E1C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8226ecf0
	ctx.lr = 0x82528E04;
	sub_8226ECF0(ctx, base);
	// addi r11,r30,361
	ctx.r11.s64 = ctx.r30.s64 + 361;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r3.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
loc_82528E1C:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,64
	ctx.r29.s64 = ctx.r29.s64 + 64;
	// cmpw cr6,r28,r27
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x82528de0
	if (ctx.cr6.lt) goto loc_82528DE0;
loc_82528E2C:
	// lwz r11,4600(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4600);
	// lwz r11,6344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6344);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82528e9c
	if (!ctx.cr6.eq) goto loc_82528E9C;
	// lwz r11,1832(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1832);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82528e9c
	if (!ctx.cr6.eq) goto loc_82528E9C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,12116
	ctx.r11.s64 = ctx.r11.s64 + 12116;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,100(r1)
	PPC_STORE_U64(ctx.r1.u32 + 100, ctx.r11.u64);
	// bl 0x8226ee40
	ctx.lr = 0x82528E7C;
	sub_8226EE40(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82528e9c
	goto loc_82528E9C;
loc_82528E84:
	// addi r11,r30,361
	ctx.r11.s64 = ctx.r30.s64 + 361;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r25,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r25.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
loc_82528E9C:
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x82528e84
	if (ctx.cr6.lt) goto loc_82528E84;
	// lwz r11,4600(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4600);
	// lwz r11,6344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6344);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82528ed0
	if (!ctx.cr6.eq) goto loc_82528ED0;
	// lwz r11,1832(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1832);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82528ed0
	if (!ctx.cr6.eq) goto loc_82528ED0;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// addi r11,r11,-19472
	ctx.r11.s64 = ctx.r11.s64 + -19472;
	// stw r11,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r11.u32);
	// b 0x82528ed4
	goto loc_82528ED4;
loc_82528ED0:
	// stw r25,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r25.u32);
loc_82528ED4:
	// bl 0x8226c3f0
	ctx.lr = 0x82528ED8;
	sub_8226C3F0(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lwz r11,21120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82528f2c
	if (ctx.cr6.eq) goto loc_82528F2C;
	// lwz r11,240(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82528f2c
	if (ctx.cr0.eq) goto loc_82528F2C;
	// li r3,944
	ctx.r3.s64 = 944;
	// bl 0x82691500
	ctx.lr = 0x82528F04;
	sub_82691500(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82528fac
	if (ctx.cr0.eq) goto loc_82528FAC;
	// addi r4,r31,1664
	ctx.r4.s64 = ctx.r31.s64 + 1664;
	// lwz r29,4600(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4600);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r28,1688(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1688);
	// bl 0x8226c200
	ctx.lr = 0x82528F20;
	sub_8226C200(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82528f8c
	goto loc_82528F8C;
loc_82528F2C:
	// lwz r11,4600(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4600);
	// lwz r4,1696(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	// lwz r10,6344(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6344);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82528f50
	if (!ctx.cr6.eq) goto loc_82528F50;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,-1
	ctx.r9.s64 = -1;
	// subfc r10,r10,r4
	ctx.xer.ca = ctx.r4.u32 >= ctx.r10.u32;
	ctx.r10.s64 = ctx.r4.s64 - ctx.r10.s64;
	// subfze r4,r9
	temp.u64 = ~ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u64 < ctx.xer.ca;
	ctx.r4.u64 = temp.u64;
loc_82528F50:
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r11,580
	ctx.r3.s64 = ctx.r11.s64 + 580;
	// bl 0x8245c4f0
	ctx.lr = 0x82528F60;
	sub_8245C4F0(ctx, base);
	// li r3,944
	ctx.r3.s64 = 944;
	// bl 0x82691500
	ctx.lr = 0x82528F68;
	sub_82691500(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82528fac
	if (ctx.cr0.eq) goto loc_82528FAC;
	// addi r4,r31,1664
	ctx.r4.s64 = ctx.r31.s64 + 1664;
	// lwz r29,4600(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4600);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r28,1688(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1688);
	// bl 0x8226c200
	ctx.lr = 0x82528F84;
	sub_8226C200(ctx, base);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
loc_82528F8C:
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,1344
	ctx.r4.s64 = ctx.r31.s64 + 1344;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// bl 0x82505430
	ctx.lr = 0x82528FA8;
	sub_82505430(ctx, base);
	// b 0x82528fb0
	goto loc_82528FB0;
loc_82528FAC:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_82528FB0:
	// stw r3,1560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1560, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,3032
	ctx.r4.s64 = ctx.r31.s64 + 3032;
	// lwz r3,4604(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4604);
	// bl 0x825249c8
	ctx.lr = 0x82528FC4;
	sub_825249C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82528438
	ctx.lr = 0x82528FCC;
	sub_82528438(ctx, base);
	// lwz r11,4600(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4600);
	// lwz r11,6344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6344);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82528ff4
	if (!ctx.cr6.eq) goto loc_82528FF4;
	// lwz r11,1696(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82528ff4
	if (!ctx.cr6.eq) goto loc_82528FF4;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,11580
	ctx.r4.s64 = ctx.r11.s64 + 11580;
	// b 0x82528ffc
	goto loc_82528FFC;
loc_82528FF4:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,11616
	ctx.r4.s64 = ctx.r11.s64 + 11616;
loc_82528FFC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252a2a0
	ctx.lr = 0x82529004;
	sub_8252A2A0(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,32570
	ctx.r4.s64 = ctx.r11.s64 + 32570;
	// bl 0x8252ab70
	ctx.lr = 0x82529014;
	sub_8252AB70(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252901C"))) PPC_WEAK_FUNC(sub_8252901C);
PPC_FUNC_IMPL(__imp__sub_8252901C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82529020"))) PPC_WEAK_FUNC(sub_82529020);
PPC_FUNC_IMPL(__imp__sub_82529020) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82529028;
	__savegprlr_24(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4960(r1)
	ea = -4960 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,510
	ctx.r5.s64 = 510;
	// lhz r31,31944(r11)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + 31944);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,274
	ctx.r3.s64 = ctx.r1.s64 + 274;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// sth r31,272(r1)
	PPC_STORE_U16(ctx.r1.u32 + 272, ctx.r31.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x82529068;
	sub_82FA7CF0(ctx, base);
	// li r5,2046
	ctx.r5.s64 = 2046;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r31,784(r1)
	PPC_STORE_U16(ctx.r1.u32 + 784, ctx.r31.u16);
	// addi r3,r1,786
	ctx.r3.s64 = ctx.r1.s64 + 786;
	// bl 0x82fa7cf0
	ctx.lr = 0x8252907C;
	sub_82FA7CF0(ctx, base);
	// li r5,2046
	ctx.r5.s64 = 2046;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r31,2832(r1)
	PPC_STORE_U16(ctx.r1.u32 + 2832, ctx.r31.u16);
	// addi r3,r1,2834
	ctx.r3.s64 = ctx.r1.s64 + 2834;
	// bl 0x82fa7cf0
	ctx.lr = 0x82529090;
	sub_82FA7CF0(ctx, base);
	// li r5,62
	ctx.r5.s64 = 62;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r31,208(r1)
	PPC_STORE_U16(ctx.r1.u32 + 208, ctx.r31.u16);
	// addi r3,r1,210
	ctx.r3.s64 = ctx.r1.s64 + 210;
	// bl 0x82fa7cf0
	ctx.lr = 0x825290A4;
	sub_82FA7CF0(ctx, base);
	// li r5,62
	ctx.r5.s64 = 62;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r31,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, ctx.r31.u16);
	// addi r3,r1,146
	ctx.r3.s64 = ctx.r1.s64 + 146;
	// bl 0x82fa7cf0
	ctx.lr = 0x825290B8;
	sub_82FA7CF0(ctx, base);
	// lwz r11,1680(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1680);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82529168
	if (ctx.cr6.eq) goto loc_82529168;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r31,r11,21076
	ctx.r31.s64 = ctx.r11.s64 + 21076;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8259c8e0
	ctx.lr = 0x825290E8;
	sub_8259C8E0(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r1,784
	ctx.r5.s64 = ctx.r1.s64 + 784;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8259c8e0
	ctx.lr = 0x82529104;
	sub_8259C8E0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r5,r1,784
	ctx.r5.s64 = ctx.r1.s64 + 784;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,2832
	ctx.r3.s64 = ctx.r1.s64 + 2832;
	// beq cr6,0x82529124
	if (ctx.cr6.eq) goto loc_82529124;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x82563c28
	ctx.lr = 0x82529120;
	sub_82563C28(ctx, base);
	// b 0x82529128
	goto loc_82529128;
loc_82529124:
	// bl 0x82fa2df8
	ctx.lr = 0x82529128;
	sub_82FA2DF8(ctx, base);
loc_82529128:
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x8259c8e0
	ctx.lr = 0x82529144;
	sub_8259C8E0(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82529168
	if (ctx.cr6.eq) goto loc_82529168;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8259c8e0
	ctx.lr = 0x82529168;
	sub_8259C8E0(ctx, base);
loc_82529168:
	// li r3,1076
	ctx.r3.s64 = 1076;
	// bl 0x82691500
	ctx.lr = 0x82529170;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825291c0
	if (ctx.cr0.eq) goto loc_825291C0;
	// subfic r11,r27,0
	ctx.xer.ca = ctx.r27.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r27.s64;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r10,r10,5228
	ctx.r10.s64 = ctx.r10.s64 + 5228;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r10.u32);
	// and r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 & ctx.r9.u64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// addi r5,r1,2832
	ctx.r5.s64 = ctx.r1.s64 + 2832;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253d420
	ctx.lr = 0x825291BC;
	sub_8253D420(ctx, base);
	// b 0x825291c4
	goto loc_825291C4;
loc_825291C0:
	// li r31,0
	ctx.r31.s64 = 0;
loc_825291C4:
	// stw r31,4608(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4608, ctx.r31.u32);
	// addi r1,r1,4960
	ctx.r1.s64 = ctx.r1.s64 + 4960;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825291D0"))) PPC_WEAK_FUNC(sub_825291D0);
PPC_FUNC_IMPL(__imp__sub_825291D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x825291D8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82529238
	if (ctx.cr6.eq) goto loc_82529238;
	// bl 0x825293c0
	ctx.lr = 0x825291F4;
	sub_825293C0(ctx, base);
	// rlwinm r11,r30,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,1704(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1704);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82529230
	if (!ctx.cr6.eq) goto loc_82529230;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x825292c4
	if (!ctx.cr6.eq) goto loc_825292C4;
	// bl 0x8226d8e8
	ctx.lr = 0x82529218;
	sub_8226D8E8(ctx, base);
	// lwz r4,1708(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1708);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x8226ecf0
	ctx.lr = 0x82529224;
	sub_8226ECF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8226eb90
	ctx.lr = 0x82529230;
	sub_8226EB90(ctx, base);
loc_82529230:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x825292c4
	if (!ctx.cr6.eq) goto loc_825292C4;
loc_82529238:
	// rlwinm r11,r30,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 6) & 0xFFFFFFC0;
	// mulli r10,r30,24
	ctx.r10.s64 = ctx.r30.s64 * 24;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r9,1704(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1704, ctx.r9.u32);
	// lwz r11,1564(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1564);
	// lwz r3,176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// stw r28,180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 180, ctx.r28.u32);
	// bl 0x82517ca0
	ctx.lr = 0x82529264;
	sub_82517CA0(ctx, base);
	// addi r11,r30,27
	ctx.r11.s64 = ctx.r30.s64 + 27;
	// rlwinm r29,r11,6,0,25
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// lwzx r3,r29,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82529284
	if (ctx.cr6.eq) goto loc_82529284;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8256c608
	ctx.lr = 0x82529280;
	sub_8256C608(ctx, base);
	// stwx r28,r29,r31
	PPC_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r28.u32);
loc_82529284:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x825292bc
	if (ctx.cr6.eq) goto loc_825292BC;
	// lwz r11,4600(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4600);
	// lwz r11,6344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6344);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x825292b4
	if (!ctx.cr6.eq) goto loc_825292B4;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x825292b4
	if (!ctx.cr6.eq) goto loc_825292B4;
	// lwz r11,1636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1636);
	// stw r28,180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 180, ctx.r28.u32);
	// lwz r3,176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// bl 0x82517ca0
	ctx.lr = 0x825292B4;
	sub_82517CA0(ctx, base);
loc_825292B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252a350
	ctx.lr = 0x825292BC;
	sub_8252A350(ctx, base);
loc_825292BC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r11.u32);
loc_825292C4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825292CC"))) PPC_WEAK_FUNC(sub_825292CC);
PPC_FUNC_IMPL(__imp__sub_825292CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825292D0"))) PPC_WEAK_FUNC(sub_825292D0);
PPC_FUNC_IMPL(__imp__sub_825292D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,1552(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1552);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825292f4
	if (ctx.cr6.eq) goto loc_825292F4;
	// bl 0x82526d18
	ctx.lr = 0x825292F4;
	sub_82526D18(ctx, base);
loc_825292F4:
	// lwz r11,4600(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4600);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r3,r11,580
	ctx.r3.s64 = ctx.r11.s64 + 580;
	// addi r4,r10,-28500
	ctx.r4.s64 = ctx.r10.s64 + -28500;
	// bl 0x82fa3928
	ctx.lr = 0x82529308;
	sub_82FA3928(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82529344
	if (ctx.cr0.eq) goto loc_82529344;
	// lwz r11,4600(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4600);
	// addi r11,r11,2120
	ctx.r11.s64 = ctx.r11.s64 + 2120;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82adfe80
	ctx.lr = 0x82529320;
	sub_82ADFE80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82529338
	if (!ctx.cr6.eq) goto loc_82529338;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8252934c
	goto loc_8252934C;
loc_82529338:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82529350
	goto loc_82529350;
loc_82529344:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
loc_8252934C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82529350:
	// bl 0x8252a578
	ctx.lr = 0x82529354;
	sub_8252A578(ctx, base);
	// li r3,1504
	ctx.r3.s64 = 1504;
	// bl 0x82691500
	ctx.lr = 0x8252935C;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8252937c
	if (ctx.cr0.eq) goto loc_8252937C;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r6,1688(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1688);
	// addi r4,r31,736
	ctx.r4.s64 = ctx.r31.s64 + 736;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82503428
	ctx.lr = 0x82529378;
	sub_82503428(ctx, base);
	// b 0x82529380
	goto loc_82529380;
loc_8252937C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82529380:
	// stw r3,1552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1552, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82528438
	ctx.lr = 0x8252938C;
	sub_82528438(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,11644
	ctx.r4.s64 = ctx.r11.s64 + 11644;
	// bl 0x8252a2a0
	ctx.lr = 0x8252939C;
	sub_8252A2A0(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,32570
	ctx.r4.s64 = ctx.r11.s64 + 32570;
	// bl 0x8252ab70
	ctx.lr = 0x825293AC;
	sub_8252AB70(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825293C0"))) PPC_WEAK_FUNC(sub_825293C0);
PPC_FUNC_IMPL(__imp__sub_825293C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x825293C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4600(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4600);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,6344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6344);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x825293ec
	if (!ctx.cr6.eq) goto loc_825293EC;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x8252944c
	if (ctx.cr6.eq) goto loc_8252944C;
loc_825293EC:
	// bl 0x8226d8e8
	ctx.lr = 0x825293F0;
	sub_8226D8E8(ctx, base);
	// rlwinm r11,r31,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r11,1704(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1704);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8252944c
	if (!ctx.cr6.eq) goto loc_8252944C;
	// lwz r4,1708(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1708);
	// bl 0x8226ecf0
	ctx.lr = 0x82529410;
	sub_8226ECF0(ctx, base);
	// lbz r11,216(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 216);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8252944c
	if (ctx.cr0.eq) goto loc_8252944C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8226eb90
	ctx.lr = 0x82529428;
	sub_8226EB90(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,2000(r29)
	PPC_STORE_U32(ctx.r29.u32 + 2000, ctx.r11.u32);
	// lwz r4,1708(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1708);
	// bl 0x8226e660
	ctx.lr = 0x8252943C;
	sub_8226E660(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2000(r29)
	PPC_STORE_U32(ctx.r29.u32 + 2000, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82529450
	goto loc_82529450;
loc_8252944C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82529450:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82529458"))) PPC_WEAK_FUNC(sub_82529458);
PPC_FUNC_IMPL(__imp__sub_82529458) {
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
	// lwz r30,1556(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1556);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8252948c
	if (ctx.cr6.eq) goto loc_8252948C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825048b0
	ctx.lr = 0x82529484;
	sub_825048B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82691540
	ctx.lr = 0x8252948C;
	sub_82691540(ctx, base);
loc_8252948C:
	// li r3,1792
	ctx.r3.s64 = 1792;
	// bl 0x82691500
	ctx.lr = 0x82529494;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825294b0
	if (ctx.cr0.eq) goto loc_825294B0;
	// addi r4,r31,1072
	ctx.r4.s64 = ctx.r31.s64 + 1072;
	// lwz r6,1688(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1688);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825045c0
	ctx.lr = 0x825294AC;
	sub_825045C0(ctx, base);
	// b 0x825294b4
	goto loc_825294B4;
loc_825294B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825294B4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,1556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1556, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1996, ctx.r11.u32);
	// bl 0x82528438
	ctx.lr = 0x825294C8;
	sub_82528438(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,11676
	ctx.r4.s64 = ctx.r11.s64 + 11676;
	// bl 0x8252a2a0
	ctx.lr = 0x825294D8;
	sub_8252A2A0(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,32570
	ctx.r4.s64 = ctx.r11.s64 + 32570;
	// bl 0x8252ab70
	ctx.lr = 0x825294E8;
	sub_8252AB70(ctx, base);
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

__attribute__((alias("__imp__sub_82529500"))) PPC_WEAK_FUNC(sub_82529500);
PPC_FUNC_IMPL(__imp__sub_82529500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82529508;
	__savegprlr_28(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r3,1664
	ctx.r4.s64 = ctx.r3.s64 + 1664;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// bl 0x8226c200
	ctx.lr = 0x82529524;
	sub_8226C200(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r6,r31,24
	ctx.r6.s64 = ctx.r31.s64 + 24;
	// lwz r3,1692(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1692);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,1508
	ctx.r4.s64 = ctx.r31.s64 + 1508;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x8251fe98
	ctx.lr = 0x82529544;
	sub_8251FE98(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82528678
	ctx.lr = 0x82529550;
	sub_82528678(ctx, base);
	// lwz r3,4600(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4600);
	// bl 0x82323f98
	ctx.lr = 0x82529558;
	sub_82323F98(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r1,148
	ctx.r11.s64 = ctx.r1.s64 + 148;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82529568:
	// stw r30,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// stwu r30,16(r11)
	ea = 16 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82529568
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82529568;
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// addi r10,r31,1704
	ctx.r10.s64 = ctx.r31.s64 + 1704;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82529584:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82529594
	if (ctx.cr6.eq) goto loc_82529594;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_82529594:
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// bdnz 0x82529584
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82529584;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822e4d50
	ctx.lr = 0x825295A8;
	sub_822E4D50(ctx, base);
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// li r4,3
	ctx.r4.s64 = 3;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.f0.u64);
	// bl 0x822e4d50
	ctx.lr = 0x825295CC;
	sub_822E4D50(ctx, base);
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// lwz r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// addi r4,r10,11704
	ctx.r4.s64 = ctx.r10.s64 + 11704;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.f0.u64);
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826a7620
	ctx.lr = 0x82529600;
	sub_826A7620(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r28,92(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x822c2418
	ctx.lr = 0x82529620;
	sub_822C2418(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825282e0
	ctx.lr = 0x8252962C;
	sub_825282E0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,11724
	ctx.r4.s64 = ctx.r11.s64 + 11724;
	// bl 0x8252a2a0
	ctx.lr = 0x8252963C;
	sub_8252A2A0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,11760
	ctx.r4.s64 = ctx.r11.s64 + 11760;
	// bl 0x8252ab70
	ctx.lr = 0x8252964C;
	sub_8252AB70(ctx, base);
	// addi r31,r1,192
	ctx.r31.s64 = ctx.r1.s64 + 192;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82529654:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e4d00
	ctx.lr = 0x82529660;
	sub_822E4D00(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82529654
	if (!ctx.cr0.lt) goto loc_82529654;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82529678
	if (ctx.cr6.eq) goto loc_82529678;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82241d18
	ctx.lr = 0x82529678;
	sub_82241D18(ctx, base);
loc_82529678:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82529680"))) PPC_WEAK_FUNC(sub_82529680);
PPC_FUNC_IMPL(__imp__sub_82529680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-1120(r1)
	ea = -1120 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x825296a8
	if (ctx.cr6.lt) goto loc_825296A8;
	// bne cr6,0x82529728
	if (!ctx.cr6.eq) goto loc_82529728;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82529704
	goto loc_82529704;
loc_825296A8:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825291d0
	ctx.lr = 0x825296BC;
	sub_825291D0(ctx, base);
	// lwz r3,4600(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4600);
	// bl 0x82322128
	ctx.lr = 0x825296C4;
	sub_82322128(ctx, base);
	// lwz r11,4600(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4600);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r11,580
	ctx.r3.s64 = ctx.r11.s64 + 580;
	// bl 0x8245c5a8
	ctx.lr = 0x825296DC;
	sub_8245C5A8(ctx, base);
	// lwz r3,4600(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4600);
	// bl 0x82322128
	ctx.lr = 0x825296E4;
	sub_82322128(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// bl 0x8252a4a8
	ctx.lr = 0x82529700;
	sub_8252A4A8(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
loc_82529704:
	// lwz r3,4608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4608);
	// stw r11,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82529728
	if (ctx.cr6.eq) goto loc_82529728;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8253d820
	ctx.lr = 0x82529720;
	sub_8253D820(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4608, ctx.r11.u32);
loc_82529728:
	// addi r1,r1,1120
	ctx.r1.s64 = ctx.r1.s64 + 1120;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252973C"))) PPC_WEAK_FUNC(sub_8252973C);
PPC_FUNC_IMPL(__imp__sub_8252973C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82529740"))) PPC_WEAK_FUNC(sub_82529740);
PPC_FUNC_IMPL(__imp__sub_82529740) {
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
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82529768
	if (ctx.cr6.lt) goto loc_82529768;
	// bne cr6,0x825297a4
	if (!ctx.cr6.eq) goto loc_825297A4;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82529780
	goto loc_82529780;
loc_82529768:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825291d0
	ctx.lr = 0x8252977C;
	sub_825291D0(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
loc_82529780:
	// lwz r3,4608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4608);
	// stw r11,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825297a4
	if (ctx.cr6.eq) goto loc_825297A4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8253d820
	ctx.lr = 0x8252979C;
	sub_8253D820(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4608, ctx.r11.u32);
loc_825297A4:
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

__attribute__((alias("__imp__sub_825297B8"))) PPC_WEAK_FUNC(sub_825297B8);
PPC_FUNC_IMPL(__imp__sub_825297B8) {
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
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x825297fc
	if (!ctx.cr6.eq) goto loc_825297FC;
	// lwz r3,4608(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4608);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1540(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1540, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825297fc
	if (ctx.cr6.eq) goto loc_825297FC;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8253d820
	ctx.lr = 0x825297F4;
	sub_8253D820(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4608, ctx.r11.u32);
loc_825297FC:
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

__attribute__((alias("__imp__sub_82529810"))) PPC_WEAK_FUNC(sub_82529810);
PPC_FUNC_IMPL(__imp__sub_82529810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82529818;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82529a58
	if (ctx.cr6.lt) goto loc_82529A58;
	// bne cr6,0x82529a98
	if (!ctx.cr6.eq) goto loc_82529A98;
	// bl 0x8226d8e8
	ctx.lr = 0x82529834;
	sub_8226D8E8(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r5,62
	ctx.r5.s64 = 62;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// lhz r11,31944(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 31944);
	// li r26,0
	ctx.r26.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x82529860;
	sub_82FA7CF0(ctx, base);
	// lwz r11,1704(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1704);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82529918
	if (!ctx.cr6.eq) goto loc_82529918;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,1708(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1708);
	// bl 0x8226ecf0
	ctx.lr = 0x82529878;
	sub_8226ECF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82920520
	ctx.lr = 0x82529880;
	sub_82920520(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,16(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82920520
	ctx.lr = 0x82529890;
	sub_82920520(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x825298a4
	if (ctx.cr6.lt) goto loc_825298A4;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x825298a8
	goto loc_825298A8;
loc_825298A4:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_825298A8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82599998
	ctx.lr = 0x825298B4;
	sub_82599998(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825487e8
	ctx.lr = 0x825298BC;
	sub_825487E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82529904
	if (ctx.cr0.eq) goto loc_82529904;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82920518
	ctx.lr = 0x825298CC;
	sub_82920518(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82529904
	if (!ctx.cr0.eq) goto loc_82529904;
	// li r26,1
	ctx.r26.s64 = 1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825298f4
	if (ctx.cr6.eq) goto loc_825298F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82920258
	ctx.lr = 0x825298E8;
	sub_82920258(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x825298f8
	if (ctx.cr6.eq) goto loc_825298F8;
loc_825298F4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825298F8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82529904
	if (ctx.cr0.eq) goto loc_82529904;
	// li r25,1
	ctx.r25.s64 = 1;
loc_82529904:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82920518
	ctx.lr = 0x8252990C;
	sub_82920518(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82529918
	if (ctx.cr0.eq) goto loc_82529918;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82529918:
	// lwz r11,1704(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1704);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82529970
	if (!ctx.cr6.eq) goto loc_82529970;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,1708(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1708);
	// bl 0x8226ecf0
	ctx.lr = 0x82529930;
	sub_8226ECF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82920520
	ctx.lr = 0x82529938;
	sub_82920520(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,16(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82920520
	ctx.lr = 0x82529948;
	sub_82920520(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8252995c
	if (ctx.cr6.lt) goto loc_8252995C;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82529960
	goto loc_82529960;
loc_8252995C:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82529960:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82599998
	ctx.lr = 0x8252996C;
	sub_82599998(ctx, base);
	// li r27,1
	ctx.r27.s64 = 1;
loc_82529970:
	// lwz r10,4600(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4600);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,6344(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6344);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x825299ac
	if (!ctx.cr6.eq) goto loc_825299AC;
	// lwz r10,1768(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1768);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x825299ac
	if (!ctx.cr6.eq) goto loc_825299AC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,1772(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1772);
	// bl 0x8226ecf0
	ctx.lr = 0x8252999C;
	sub_8226ECF0(ctx, base);
	// bl 0x8252b3f0
	ctx.lr = 0x825299A0;
	sub_8252B3F0(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_825299AC:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x825299dc
	if (!ctx.cr6.eq) goto loc_825299DC;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x825299c8
	if (!ctx.cr6.eq) goto loc_825299C8;
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// addi r5,r8,11924
	ctx.r5.s64 = ctx.r8.s64 + 11924;
	// b 0x825299ec
	goto loc_825299EC;
loc_825299C8:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x82529a1c
	if (!ctx.cr6.eq) goto loc_82529A1C;
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// addi r5,r8,11964
	ctx.r5.s64 = ctx.r8.s64 + 11964;
	// b 0x825299ec
	goto loc_825299EC;
loc_825299DC:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x82529a1c
	if (!ctx.cr6.eq) goto loc_82529A1C;
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// addi r5,r8,11984
	ctx.r5.s64 = ctx.r8.s64 + 11984;
loc_825299EC:
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// lis r4,-32228
	ctx.r4.s64 = -2112094208;
	// addi r6,r9,31996
	ctx.r6.s64 = ctx.r9.s64 + 31996;
	// addi r7,r10,32570
	ctx.r7.s64 = ctx.r10.s64 + 32570;
	// addi r4,r4,11944
	ctx.r4.s64 = ctx.r4.s64 + 11944;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r11,-22096
	ctx.r8.s64 = ctx.r11.s64 + -22096;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82529020
	ctx.lr = 0x82529A18;
	sub_82529020(ctx, base);
	// b 0x82529a98
	goto loc_82529A98;
loc_82529A1C:
	// lwz r10,1768(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1768);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x82529a40
	if (ctx.cr6.eq) goto loc_82529A40;
	// lwz r10,4600(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4600);
	// lwz r10,6352(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6352);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82529a40
	if (!ctx.cr6.eq) goto loc_82529A40;
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x82529a94
	goto loc_82529A94;
loc_82529A40:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82529a50
	if (ctx.cr6.eq) goto loc_82529A50;
	// li r11,13
	ctx.r11.s64 = 13;
	// b 0x82529a94
	goto loc_82529A94;
loc_82529A50:
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x82529a94
	goto loc_82529A94;
loc_82529A58:
	// lwz r11,4600(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4600);
	// lwz r11,6344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6344);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82529a90
	if (!ctx.cr6.eq) goto loc_82529A90;
	// lwz r11,1696(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1696);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82529a90
	if (!ctx.cr6.eq) goto loc_82529A90;
	// lwz r11,1768(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1768);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82529a88
	if (ctx.cr6.eq) goto loc_82529A88;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82529a90
	if (!ctx.cr6.eq) goto loc_82529A90;
loc_82529A88:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82529a94
	goto loc_82529A94;
loc_82529A90:
	// li r11,7
	ctx.r11.s64 = 7;
loc_82529A94:
	// stw r11,1540(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1540, ctx.r11.u32);
loc_82529A98:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82529AA0"))) PPC_WEAK_FUNC(sub_82529AA0);
PPC_FUNC_IMPL(__imp__sub_82529AA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82529AA8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82529c00
	if (ctx.cr6.lt) goto loc_82529C00;
	// bne cr6,0x82529c08
	if (!ctx.cr6.eq) goto loc_82529C08;
	// bl 0x8226d8e8
	ctx.lr = 0x82529AC4;
	sub_8226D8E8(ctx, base);
	// lwz r11,1704(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1704);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82529b34
	if (!ctx.cr6.eq) goto loc_82529B34;
	// lwz r4,1708(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1708);
	// bl 0x8226ecf0
	ctx.lr = 0x82529AE4;
	sub_8226ECF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825487e8
	ctx.lr = 0x82529AEC;
	sub_825487E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82529b34
	if (ctx.cr0.eq) goto loc_82529B34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82920518
	ctx.lr = 0x82529AFC;
	sub_82920518(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82529b34
	if (!ctx.cr0.eq) goto loc_82529B34;
	// li r28,1
	ctx.r28.s64 = 1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82529b24
	if (ctx.cr6.eq) goto loc_82529B24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82920258
	ctx.lr = 0x82529B18;
	sub_82920258(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82529b28
	if (ctx.cr6.eq) goto loc_82529B28;
loc_82529B24:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82529B28:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82529b34
	if (ctx.cr0.eq) goto loc_82529B34;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82529B34:
	// lwz r10,4600(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4600);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,6344(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6344);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82529b70
	if (!ctx.cr6.eq) goto loc_82529B70;
	// lwz r10,1768(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1768);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82529b70
	if (!ctx.cr6.eq) goto loc_82529B70;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,1772(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1772);
	// bl 0x8226ecf0
	ctx.lr = 0x82529B60;
	sub_8226ECF0(ctx, base);
	// bl 0x8252b3f0
	ctx.lr = 0x82529B64;
	sub_8252B3F0(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_82529B70:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x82529b84
	if (!ctx.cr6.eq) goto loc_82529B84;
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// addi r5,r8,11924
	ctx.r5.s64 = ctx.r8.s64 + 11924;
	// b 0x82529b94
	goto loc_82529B94;
loc_82529B84:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82529bc4
	if (!ctx.cr6.eq) goto loc_82529BC4;
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// addi r5,r8,12012
	ctx.r5.s64 = ctx.r8.s64 + 12012;
loc_82529B94:
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// lis r4,-32228
	ctx.r4.s64 = -2112094208;
	// addi r6,r9,31996
	ctx.r6.s64 = ctx.r9.s64 + 31996;
	// addi r7,r10,32570
	ctx.r7.s64 = ctx.r10.s64 + 32570;
	// addi r4,r4,11944
	ctx.r4.s64 = ctx.r4.s64 + 11944;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,-22096
	ctx.r8.s64 = ctx.r11.s64 + -22096;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82529020
	ctx.lr = 0x82529BC0;
	sub_82529020(ctx, base);
	// b 0x82529c08
	goto loc_82529C08;
loc_82529BC4:
	// lwz r10,1768(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1768);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x82529be8
	if (ctx.cr6.eq) goto loc_82529BE8;
	// lwz r10,4600(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4600);
	// lwz r10,6352(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6352);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82529be8
	if (!ctx.cr6.eq) goto loc_82529BE8;
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x82529c04
	goto loc_82529C04;
loc_82529BE8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82529bf8
	if (ctx.cr6.eq) goto loc_82529BF8;
	// li r11,13
	ctx.r11.s64 = 13;
	// b 0x82529c04
	goto loc_82529C04;
loc_82529BF8:
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x82529c04
	goto loc_82529C04;
loc_82529C00:
	// li r11,8
	ctx.r11.s64 = 8;
loc_82529C04:
	// stw r11,1540(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1540, ctx.r11.u32);
loc_82529C08:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82529C10"))) PPC_WEAK_FUNC(sub_82529C10);
PPC_FUNC_IMPL(__imp__sub_82529C10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82529C18;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r29,4(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,2240(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2240);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82529C3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,8(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,1536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1536);
	// lwz r10,1540(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1540);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82529d74
	if (!ctx.cr6.eq) goto loc_82529D74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1696(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	// bl 0x825293c0
	ctx.lr = 0x82529C60;
	sub_825293C0(ctx, base);
	// lwz r11,1696(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	// li r10,2
	ctx.r10.s64 = 2;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,1704(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1704, ctx.r10.u32);
	// lwz r11,1696(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r29,1732(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1732, ctx.r29.u32);
	// lwz r11,4600(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4600);
	// lwz r11,6344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6344);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82529ca8
	if (!ctx.cr6.eq) goto loc_82529CA8;
	// lwz r11,1696(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82529ca8
	if (!ctx.cr6.eq) goto loc_82529CA8;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,1896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1896, ctx.r11.u32);
loc_82529CA8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,1696(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,2244(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2244);
	// lwz r11,2248(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2248);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8252a7c8
	ctx.lr = 0x82529CD4;
	sub_8252A7C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,1696(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	// bl 0x82528158
	ctx.lr = 0x82529CE4;
	sub_82528158(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,4600(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4600);
	// bl 0x82322258
	ctx.lr = 0x82529CF0;
	sub_82322258(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r28,1
	ctx.r28.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82529d70
	if (ctx.cr6.eq) goto loc_82529D70;
	// lwz r3,4600(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4600);
	// lwz r11,6344(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6344);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82529d48
	if (!ctx.cr6.eq) goto loc_82529D48;
	// lwz r11,1696(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82529d48
	if (!ctx.cr6.eq) goto loc_82529D48;
	// bl 0x82323f98
	ctx.lr = 0x82529D20;
	sub_82323F98(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82529d48
	if (!ctx.cr6.eq) goto loc_82529D48;
	// lwz r27,12(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x8226c3f0
	ctx.lr = 0x82529D30;
	sub_8226C3F0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,36
	ctx.r5.s64 = 36;
	// addi r3,r3,352
	ctx.r3.s64 = ctx.r3.s64 + 352;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82529D44;
	sub_82FA77C0(ctx, base);
	// stw r28,388(r29)
	PPC_STORE_U32(ctx.r29.u32 + 388, ctx.r28.u32);
loc_82529D48:
	// lwz r29,12(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r30,1696(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	// bl 0x8226c3f0
	ctx.lr = 0x82529D54;
	sub_8226C3F0(ctx, base);
	// mulli r11,r30,40
	ctx.r11.s64 = ctx.r30.s64 * 40;
	// add r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r5,36
	ctx.r5.s64 = 36;
	// addi r3,r30,312
	ctx.r3.s64 = ctx.r30.s64 + 312;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82529D6C;
	sub_82FA77C0(ctx, base);
	// stw r28,348(r30)
	PPC_STORE_U32(ctx.r30.u32 + 348, ctx.r28.u32);
loc_82529D70:
	// stw r28,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r28.u32);
loc_82529D74:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82529D7C"))) PPC_WEAK_FUNC(sub_82529D7C);
PPC_FUNC_IMPL(__imp__sub_82529D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82529D80"))) PPC_WEAK_FUNC(sub_82529D80);
PPC_FUNC_IMPL(__imp__sub_82529D80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82529D88;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1696(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	// bl 0x825293c0
	ctx.lr = 0x82529DA4;
	sub_825293C0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,3
	ctx.r10.s64 = 3;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,1696(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,1704(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1704, ctx.r10.u32);
	// lwz r11,1696(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bne cr6,0x82529e2c
	if (!ctx.cr6.eq) goto loc_82529E2C;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r10,1712(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1712, ctx.r10.u64);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,1696(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r10,8
	ctx.r4.s64 = ctx.r10.s64 + 8;
	// addi r3,r11,1736
	ctx.r3.s64 = ctx.r11.s64 + 1736;
	// bl 0x822401e0
	ctx.lr = 0x82529E00;
	sub_822401E0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,2240(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2240);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82529E18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r11,4624(r31)
	PPC_STORE_U64(ctx.r31.u32 + 4624, ctx.r11.u64);
	// b 0x82529e34
	goto loc_82529E34;
loc_82529E2C:
	// std r29,1712(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1712, ctx.r29.u64);
	// std r29,4624(r31)
	PPC_STORE_U64(ctx.r31.u32 + 4624, ctx.r29.u64);
loc_82529E34:
	// lwz r4,1696(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82529e8c
	if (ctx.cr6.eq) goto loc_82529E8C;
	// lwz r11,4600(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4600);
	// lwz r10,6344(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6344);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82529e60
	if (!ctx.cr6.eq) goto loc_82529E60;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,-1
	ctx.r9.s64 = -1;
	// subfc r10,r10,r4
	ctx.xer.ca = ctx.r4.u32 >= ctx.r10.u32;
	ctx.r10.s64 = ctx.r4.s64 - ctx.r10.s64;
	// subfze r4,r9
	temp.u64 = ~ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u64 < ctx.xer.ca;
	ctx.r4.u64 = temp.u64;
loc_82529E60:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r11,580
	ctx.r3.s64 = ctx.r11.s64 + 580;
	// bl 0x8245c4f0
	ctx.lr = 0x82529E70;
	sub_8245C4F0(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r4,1696(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252a7c8
	ctx.lr = 0x82529E88;
	sub_8252A7C8(ctx, base);
	// b 0x82529e98
	goto loc_82529E98;
loc_82529E8C:
	// addi r5,r31,1312
	ctx.r5.s64 = ctx.r31.s64 + 1312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252a8e0
	ctx.lr = 0x82529E98;
	sub_8252A8E0(ctx, base);
loc_82529E98:
	// lwz r4,1696(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r4,27
	ctx.r11.s64 = ctx.r4.s64 + 27;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// lwzx r5,r11,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82528158
	ctx.lr = 0x82529EB0;
	sub_82528158(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82529EC0"))) PPC_WEAK_FUNC(sub_82529EC0);
PPC_FUNC_IMPL(__imp__sub_82529EC0) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1540(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1540, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82529ECC"))) PPC_WEAK_FUNC(sub_82529ECC);
PPC_FUNC_IMPL(__imp__sub_82529ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82529ED0"))) PPC_WEAK_FUNC(sub_82529ED0);
PPC_FUNC_IMPL(__imp__sub_82529ED0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82529ee8
	if (!ctx.cr6.eq) goto loc_82529EE8;
	// b 0x82529ef0
	sub_82529EF0(ctx, base);
	return;
loc_82529EE8:
	// b 0x82529ef0
	sub_82529EF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82529EEC"))) PPC_WEAK_FUNC(sub_82529EEC);
PPC_FUNC_IMPL(__imp__sub_82529EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82529EF0"))) PPC_WEAK_FUNC(sub_82529EF0);
PPC_FUNC_IMPL(__imp__sub_82529EF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82529EF8;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,2240(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2240);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82529F1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r26,1
	ctx.r26.s64 = 1;
	// lwz r4,1696(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r26,1984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1984, ctx.r26.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825293c0
	ctx.lr = 0x82529F34;
	sub_825293C0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82529f50
	if (!ctx.cr6.eq) goto loc_82529F50;
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// b 0x82529fa8
	goto loc_82529FA8;
loc_82529F50:
	// bl 0x8226d8e8
	ctx.lr = 0x82529F54;
	sub_8226D8E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822402c8
	ctx.lr = 0x82529F68;
	sub_822402C8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r11,-5144
	ctx.r4.s64 = ctx.r11.s64 + -5144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82240328
	ctx.lr = 0x82529F7C;
	sub_82240328(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8226e560
	ctx.lr = 0x82529F8C;
	sub_8226E560(ctx, base);
	// bl 0x829204e8
	ctx.lr = 0x82529F90;
	sub_829204E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// bl 0x822402c8
	ctx.lr = 0x82529FA8;
	sub_822402C8(ctx, base);
loc_82529FA8:
	// lwz r11,1696(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r29,1704(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1704, ctx.r29.u32);
	// lwz r11,1696(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r30,1708(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1708, ctx.r30.u32);
	// bl 0x8226c3f0
	ctx.lr = 0x82529FCC;
	sub_8226C3F0(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lwz r11,21120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82529ff0
	if (ctx.cr6.eq) goto loc_82529FF0;
	// lwz r11,240(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252a038
	if (!ctx.cr0.eq) goto loc_8252A038;
loc_82529FF0:
	// lwz r11,4600(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4600);
	// lwz r4,1696(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// lwz r10,6344(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6344);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8252a01c
	if (!ctx.cr6.eq) goto loc_8252A01C;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,-1
	ctx.r9.s64 = -1;
	// subfc r10,r10,r4
	ctx.xer.ca = ctx.r4.u32 >= ctx.r10.u32;
	ctx.r10.s64 = ctx.r4.s64 - ctx.r10.s64;
	// subfze r4,r9
	temp.u64 = ~ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u64 < ctx.xer.ca;
	ctx.r4.u64 = temp.u64;
loc_8252A01C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r11,580
	ctx.r3.s64 = ctx.r11.s64 + 580;
	// bl 0x8245c4f0
	ctx.lr = 0x8252A02C;
	sub_8245C4F0(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// b 0x8252a040
	goto loc_8252A040;
loc_8252A038:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
loc_8252A040:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r4,1696(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252a7c8
	ctx.lr = 0x8252A050;
	sub_8252A7C8(ctx, base);
	// lwz r4,1696(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r4,27
	ctx.r11.s64 = ctx.r4.s64 + 27;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// lwzx r5,r11,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82528158
	ctx.lr = 0x8252A068;
	sub_82528158(ctx, base);
	// stw r26,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r26.u32);
	// stw r27,1984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1984, ctx.r27.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252A078"))) PPC_WEAK_FUNC(sub_8252A078);
PPC_FUNC_IMPL(__imp__sub_8252A078) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,4600(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4600);
	// lwz r11,6344(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6344);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8252a164
	if (ctx.cr6.lt) goto loc_8252A164;
	// beq cr6,0x8252a10c
	if (ctx.cr6.eq) goto loc_8252A10C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// beq cr6,0x8252a16c
	if (ctx.cr6.eq) goto loc_8252A16C;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// beq cr6,0x8252a104
	if (ctx.cr6.eq) goto loc_8252A104;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// beq cr6,0x8252a0fc
	if (ctx.cr6.eq) goto loc_8252A0FC;
	// cmplwi cr6,r4,5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 5, ctx.xer);
	// beq cr6,0x8252a0c4
	if (ctx.cr6.eq) goto loc_8252A0C4;
loc_8252A0B4:
	// cmplwi cr6,r4,6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 6, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,14
	ctx.r11.s64 = 14;
	// b 0x8252a178
	goto loc_8252A178;
loc_8252A0C4:
	// li r11,4
	ctx.r11.s64 = 4;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r3,1704
	ctx.r10.s64 = ctx.r3.s64 + 1704;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8252A0D4:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8252a0e4
	if (ctx.cr6.eq) goto loc_8252A0E4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_8252A0E4:
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// bdnz 0x8252a0d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8252A0D4;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// beq cr6,0x8252a174
	if (ctx.cr6.eq) goto loc_8252A174;
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x8252a178
	goto loc_8252A178;
loc_8252A0FC:
	// li r10,3
	ctx.r10.s64 = 3;
	// b 0x8252a170
	goto loc_8252A170;
loc_8252A104:
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x8252a170
	goto loc_8252A170;
loc_8252A10C:
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x8252a11c
	if (ctx.cr6.lt) goto loc_8252A11C;
	// beq cr6,0x8252a104
	if (ctx.cr6.eq) goto loc_8252A104;
	// b 0x8252a0b4
	goto loc_8252A0B4;
loc_8252A11C:
	// lwz r11,1832(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1832);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,1696(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1696, ctx.r9.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8252a15c
	if (ctx.cr6.eq) goto loc_8252A15C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8252a15c
	if (ctx.cr6.eq) goto loc_8252A15C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8252a154
	if (!ctx.cr6.eq) goto loc_8252A154;
	// lwz r11,6352(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6352);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8252a154
	if (!ctx.cr6.eq) goto loc_8252A154;
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x8252a178
	goto loc_8252A178;
loc_8252A154:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x8252a178
	goto loc_8252A178;
loc_8252A15C:
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x8252a178
	goto loc_8252A178;
loc_8252A164:
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// bne cr6,0x8252a0b4
	if (!ctx.cr6.eq) goto loc_8252A0B4;
loc_8252A16C:
	// li r10,1
	ctx.r10.s64 = 1;
loc_8252A170:
	// stw r10,1696(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1696, ctx.r10.u32);
loc_8252A174:
	// lwz r11,1544(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1544);
loc_8252A178:
	// stw r11,1540(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1540, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252A180"))) PPC_WEAK_FUNC(sub_8252A180);
PPC_FUNC_IMPL(__imp__sub_8252A180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8252A188;
	__savegprlr_28(ctx, base);
	// stwu r1,-1184(r1)
	ea = -1184 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r3,1728
	ctx.r31.s64 = ctx.r3.s64 + 1728;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_8252A19C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82324148
	ctx.lr = 0x8252A1A4;
	sub_82324148(ctx, base);
	// lwz r11,-24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne cr6,0x8252a1d0
	if (!ctx.cr6.eq) goto loc_8252A1D0;
	// ld r11,-16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + -16);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bne cr6,0x8252a1d8
	if (!ctx.cr6.eq) goto loc_8252A1D8;
	// li r11,1
	ctx.r11.s64 = 1;
	// std r28,1096(r1)
	PPC_STORE_U64(ctx.r1.u32 + 1096, ctx.r28.u64);
	// stb r11,1132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1132, ctx.r11.u8);
	// b 0x8252a230
	goto loc_8252A230;
loc_8252A1D0:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8252a230
	if (ctx.cr6.eq) goto loc_8252A230;
loc_8252A1D8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,2240(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2240);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8252A1F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1000
	ctx.r5.s64 = 1000;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82a75198
	ctx.lr = 0x8252A200;
	sub_82A75198(ctx, base);
	// lwz r11,-20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r6,-1
	ctx.r6.s64 = -1;
	// ld r9,-16(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + -16);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r28,1132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1132, ctx.r28.u8);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r1,1104
	ctx.r3.s64 = ctx.r1.s64 + 1104;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// std r9,1096(r1)
	PPC_STORE_U64(ctx.r1.u32 + 1096, ctx.r9.u64);
	// bl 0x822401e0
	ctx.lr = 0x8252A230;
	sub_822401E0(ctx, base);
loc_8252A230:
	// lwz r11,4600(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4600);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r3,r11,2120
	ctx.r3.s64 = ctx.r11.s64 + 2120;
	// bl 0x82315f00
	ctx.lr = 0x8252A244;
	sub_82315F00(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1104
	ctx.r3.s64 = ctx.r1.s64 + 1104;
	// bl 0x822402c8
	ctx.lr = 0x8252A254;
	sub_822402C8(ctx, base);
	// addi r30,r30,1056
	ctx.r30.s64 = ctx.r30.s64 + 1056;
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// cmpwi cr6,r30,4224
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4224, ctx.xer);
	// blt cr6,0x8252a19c
	if (ctx.cr6.lt) goto loc_8252A19C;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lwz r3,30428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30428);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8252a278
	if (!ctx.cr6.eq) goto loc_8252A278;
	// bl 0x822599a0
	ctx.lr = 0x8252A278;
	sub_822599A0(ctx, base);
loc_8252A278:
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4600(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4600);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8252a290
	if (!ctx.cr0.eq) goto loc_8252A290;
	// li r4,1
	ctx.r4.s64 = 1;
loc_8252A290:
	// bl 0x82323270
	ctx.lr = 0x8252A294;
	sub_82323270(ctx, base);
	// addi r1,r1,1184
	ctx.r1.s64 = ctx.r1.s64 + 1184;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252A29C"))) PPC_WEAK_FUNC(sub_8252A29C);
PPC_FUNC_IMPL(__imp__sub_8252A29C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252A2A0"))) PPC_WEAK_FUNC(sub_8252A2A0);
PPC_FUNC_IMPL(__imp__sub_8252A2A0) {
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
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4208(r1)
	ea = -4208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1964(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1964);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252a338
	if (ctx.cr6.eq) goto loc_8252A338;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r5,4094
	ctx.r5.s64 = 4094;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// lhz r11,31944(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 31944);
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x8252A2E8;
	sub_82FA7CF0(ctx, base);
	// lwz r11,1680(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1680);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252a32c
	if (ctx.cr6.eq) goto loc_8252A32C;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r11,r31,1664
	ctx.r11.s64 = ctx.r31.s64 + 1664;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8252a308
	if (!ctx.cr6.eq) goto loc_8252A308;
	// bl 0x82fa1518
	ctx.lr = 0x8252A308;
	sub_82FA1518(ctx, base);
loc_8252A308:
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// li r7,2048
	ctx.r7.s64 = 2048;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8252A32C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8252A32C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,1964(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1964);
	// bl 0x82534af8
	ctx.lr = 0x8252A338;
	sub_82534AF8(ctx, base);
loc_8252A338:
	// addi r1,r1,4208
	ctx.r1.s64 = ctx.r1.s64 + 4208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252A350"))) PPC_WEAK_FUNC(sub_8252A350);
PPC_FUNC_IMPL(__imp__sub_8252A350) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8252A358;
	__savegprlr_29(ctx, base);
	// stwu r1,-1136(r1)
	ea = -1136 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4600(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4600);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,6344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6344);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8252a49c
	if (!ctx.cr6.eq) goto loc_8252A49C;
	// lwz r11,1768(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1768);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8252a394
	if (!ctx.cr6.eq) goto loc_8252A394;
	// lwz r11,1896(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1896);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8252a49c
	if (ctx.cr6.eq) goto loc_8252A49C;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,1896(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1896, ctx.r11.u32);
	// b 0x8252a49c
	goto loc_8252A49C;
loc_8252A394:
	// lwz r11,1832(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1832);
	// lwz r10,1896(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1896);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8252a49c
	if (ctx.cr6.eq) goto loc_8252A49C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8252a3e0
	if (ctx.cr6.eq) goto loc_8252A3E0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8252a49c
	if (!ctx.cr6.eq) goto loc_8252A49C;
	// addi r5,r31,1312
	ctx.r5.s64 = ctx.r31.s64 + 1312;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252a8e0
	ctx.lr = 0x8252A3C4;
	sub_8252A8E0(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,1
	ctx.r10.s64 = 1;
	// std r29,1904(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1904, ctx.r29.u64);
	// stw r11,1896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1896, ctx.r11.u32);
	// stw r10,1916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1916, ctx.r10.u32);
	// b 0x8252a498
	goto loc_8252A498;
loc_8252A3E0:
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lwz r9,1856(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1856);
	// lis r11,25
	ctx.r11.s64 = 1638400;
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// ori r7,r11,26125
	ctx.r7.u64 = ctx.r11.u64 | 26125;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// lwz r11,21292(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21292);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r5,2244(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2244);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// lwz r9,2248(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2248);
	// lfs f0,-24756(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24756);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,31512(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 31512);
	ctx.f13.f64 = double(temp.f32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addis r11,r11,15471
	ctx.r11.s64 = ctx.r11.s64 + 1013907456;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r11,-3233
	ctx.r11.s64 = ctx.r11.s64 + -3233;
	// clrlwi r9,r11,9
	ctx.r9.u64 = ctx.r11.u32 & 0x7FFFFF;
	// stw r11,21292(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21292, ctx.r11.u32);
	// oris r11,r9,16256
	ctx.r11.u64 = ctx.r9.u64 | 1065353216;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8252a44c
	if (!ctx.cr6.gt) goto loc_8252A44C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_8252A44C:
	// lwz r3,4600(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4600);
	// li r30,2
	ctx.r30.s64 = 2;
	// lwz r11,1860(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1860);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r30,5288(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5288, ctx.r30.u32);
	// stw r11,5296(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5296, ctx.r11.u32);
	// bl 0x823236f0
	ctx.lr = 0x8252A46C;
	sub_823236F0(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252a7c8
	ctx.lr = 0x8252A484;
	sub_8252A7C8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,1896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1896, ctx.r30.u32);
	// stw r11,1916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1916, ctx.r11.u32);
	// lwz r11,1860(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1860);
	// stw r11,1924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1924, ctx.r11.u32);
loc_8252A498:
	// stw r29,1912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1912, ctx.r29.u32);
loc_8252A49C:
	// addi r1,r1,1136
	ctx.r1.s64 = ctx.r1.s64 + 1136;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252A4A4"))) PPC_WEAK_FUNC(sub_8252A4A4);
PPC_FUNC_IMPL(__imp__sub_8252A4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252A4A8"))) PPC_WEAK_FUNC(sub_8252A4A8);
PPC_FUNC_IMPL(__imp__sub_8252A4A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x8252A4B0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,1000
	ctx.r5.s64 = 1000;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x82a75988
	ctx.lr = 0x8252A4D8;
	sub_82A75988(ctx, base);
	// lwz r10,4600(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4600);
	// mulli r11,r29,1056
	ctx.r11.s64 = ctx.r29.s64 * 1056;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r5,1000
	ctx.r5.s64 = 1000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,2132
	ctx.r4.s64 = ctx.r11.s64 + 2132;
	// bl 0x82a75198
	ctx.lr = 0x8252A4F4;
	sub_82A75198(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8252a50c
	if (ctx.cr6.eq) goto loc_8252A50C;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe. r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252a530
	if (!ctx.cr0.eq) goto loc_8252A530;
loc_8252A50C:
	// lwz r11,4600(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4600);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r11,580
	ctx.r3.s64 = ctx.r11.s64 + 580;
	// bl 0x8245c5a8
	ctx.lr = 0x8252A524;
	sub_8245C5A8(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// b 0x8252a538
	goto loc_8252A538;
loc_8252A530:
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
loc_8252A538:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8252a7c8
	ctx.lr = 0x8252A548;
	sub_8252A7C8(ctx, base);
	// rlwinm r11,r29,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 6) & 0xFFFFFFC0;
	// li r10,2
	ctx.r10.s64 = 2;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,1704(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1704, ctx.r10.u32);
	// stw r27,1732(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1732, ctx.r27.u32);
	// stw r9,1720(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1720, ctx.r9.u32);
	// stw r8,1724(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1724, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252A578"))) PPC_WEAK_FUNC(sub_8252A578);
PPC_FUNC_IMPL(__imp__sub_8252A578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x8252A580;
	__savegprlr_26(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x8252a5e8
	if (ctx.cr6.eq) goto loc_8252A5E8;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,-27564
	ctx.r3.s64 = ctx.r11.s64 + -27564;
	// bl 0x82547f38
	ctx.lr = 0x8252A5B4;
	sub_82547F38(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-27528
	ctx.r3.s64 = ctx.r11.s64 + -27528;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82547f38
	ctx.lr = 0x8252A5C8;
	sub_82547F38(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-27488
	ctx.r3.s64 = ctx.r11.s64 + -27488;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82547f38
	ctx.lr = 0x8252A5DC;
	sub_82547F38(ctx, base);
loc_8252A5DC:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,-27452
	ctx.r3.s64 = ctx.r11.s64 + -27452;
	// b 0x8252a75c
	goto loc_8252A75C;
loc_8252A5E8:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8252a628
	if (ctx.cr6.eq) goto loc_8252A628;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,-27548
	ctx.r3.s64 = ctx.r11.s64 + -27548;
	// bl 0x82547f38
	ctx.lr = 0x8252A5FC;
	sub_82547F38(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-27508
	ctx.r3.s64 = ctx.r11.s64 + -27508;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82547f38
	ctx.lr = 0x8252A610;
	sub_82547F38(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-27472
	ctx.r3.s64 = ctx.r11.s64 + -27472;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82547f38
	ctx.lr = 0x8252A624;
	sub_82547F38(ctx, base);
	// b 0x8252a754
	goto loc_8252A754;
loc_8252A628:
	// lis r31,-31958
	ctx.r31.s64 = -2094399488;
	// lis r11,25
	ctx.r11.s64 = 1638400;
	// lis r10,15470
	ctx.r10.s64 = 1013841920;
	// ori r29,r11,26125
	ctx.r29.u64 = ctx.r11.u64 | 26125;
	// ori r30,r10,62303
	ctx.r30.u64 = ctx.r10.u64 | 62303;
	// lwz r11,21292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21292);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// lfs f31,-24756(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24756);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,31512(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 31512);
	ctx.f30.f64 = double(temp.f32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// clrlwi r10,r11,9
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFFFF;
	// stw r11,21292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21292, ctx.r11.u32);
	// oris r11,r10,16256
	ctx.r11.u64 = ctx.r10.u64 | 1065353216;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lfs f0,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bgt cr6,0x8252a684
	if (ctx.cr6.gt) goto loc_8252A684;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,-27564
	ctx.r3.s64 = ctx.r11.s64 + -27564;
	// b 0x8252a68c
	goto loc_8252A68C;
loc_8252A684:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,-27548
	ctx.r3.s64 = ctx.r11.s64 + -27548;
loc_8252A68C:
	// bl 0x82547f38
	ctx.lr = 0x8252A690;
	sub_82547F38(ctx, base);
	// lwz r11,21292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21292);
	// li r5,0
	ctx.r5.s64 = 0;
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// clrlwi r10,r11,9
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFFFF;
	// stw r11,21292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21292, ctx.r11.u32);
	// oris r11,r10,16256
	ctx.r11.u64 = ctx.r10.u64 | 1065353216;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bgt cr6,0x8252a6d0
	if (ctx.cr6.gt) goto loc_8252A6D0;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,-27528
	ctx.r3.s64 = ctx.r11.s64 + -27528;
	// b 0x8252a6d8
	goto loc_8252A6D8;
loc_8252A6D0:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,-27508
	ctx.r3.s64 = ctx.r11.s64 + -27508;
loc_8252A6D8:
	// bl 0x82547f38
	ctx.lr = 0x8252A6DC;
	sub_82547F38(ctx, base);
	// lwz r11,21292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21292);
	// li r5,0
	ctx.r5.s64 = 0;
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// clrlwi r10,r11,9
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFFFF;
	// stw r11,21292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21292, ctx.r11.u32);
	// oris r11,r10,16256
	ctx.r11.u64 = ctx.r10.u64 | 1065353216;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bgt cr6,0x8252a71c
	if (ctx.cr6.gt) goto loc_8252A71C;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,-27488
	ctx.r3.s64 = ctx.r11.s64 + -27488;
	// b 0x8252a724
	goto loc_8252A724;
loc_8252A71C:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,-27472
	ctx.r3.s64 = ctx.r11.s64 + -27472;
loc_8252A724:
	// bl 0x82547f38
	ctx.lr = 0x8252A728;
	sub_82547F38(ctx, base);
	// lwz r11,21292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21292);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// clrlwi r10,r11,9
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFFFF;
	// stw r11,21292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21292, ctx.r11.u32);
	// oris r11,r10,16256
	ctx.r11.u64 = ctx.r10.u64 | 1065353216;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x8252a5dc
	if (!ctx.cr6.gt) goto loc_8252A5DC;
loc_8252A754:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,-27432
	ctx.r3.s64 = ctx.r11.s64 + -27432;
loc_8252A75C:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// bl 0x82547f38
	ctx.lr = 0x8252A768;
	sub_82547F38(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8252b470
	ctx.lr = 0x8252A77C;
	sub_8252B470(ctx, base);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r26,36
	ctx.r3.s64 = ctx.r26.s64 + 36;
	// bl 0x8252b470
	ctx.lr = 0x8252A790;
	sub_8252B470(ctx, base);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r26,72
	ctx.r3.s64 = ctx.r26.s64 + 72;
	// bl 0x8252b470
	ctx.lr = 0x8252A7A4;
	sub_8252B470(ctx, base);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r26,108
	ctx.r3.s64 = ctx.r26.s64 + 108;
	// bl 0x8252b470
	ctx.lr = 0x8252A7B8;
	sub_8252B470(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252A7C8"))) PPC_WEAK_FUNC(sub_8252A7C8);
PPC_FUNC_IMPL(__imp__sub_8252A7C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x8252A7D0;
	__savegprlr_24(ctx, base);
	// stwu r1,-1632(r1)
	ea = -1632 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,27
	ctx.r11.s64 = ctx.r4.s64 + 27;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// add r28,r11,r3
	ctx.r28.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252a804
	if (ctx.cr6.eq) goto loc_8252A804;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8256c608
	ctx.lr = 0x8252A804;
	sub_8256C608(ctx, base);
loc_8252A804:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82569e10
	ctx.lr = 0x8252A80C;
	sub_82569E10(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r10,300
	ctx.r10.s64 = 300;
	// addi r11,r11,27984
	ctx.r11.s64 = ctx.r11.s64 + 27984;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r8,r1,232
	ctx.r8.s64 = ctx.r1.s64 + 232;
	// addi r9,r9,-2340
	ctx.r9.s64 = ctx.r9.s64 + -2340;
	// addi r7,r1,232
	ctx.r7.s64 = ctx.r1.s64 + 232;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r26,r1,232
	ctx.r26.s64 = ctx.r1.s64 + 232;
	// li r25,8
	ctx.r25.s64 = 8;
	// li r24,7
	ctx.r24.s64 = 7;
	// li r5,1000
	ctx.r5.s64 = 1000;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r31,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r31.u32);
	// lvlx v0,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v13,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor v12,v13,v13
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vor v11,v13,v13
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vrlimi128 v12,v0,4,3
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// vrlimi128 v11,v13,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 57), 4));
	// vrlimi128 v12,v11,3,2
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 78), 3));
	// vspltw v0,v12,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFF));
	// vspltw v13,v12,1
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xAA));
	// vspltw v12,v12,2
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0x55));
	// stvewx v0,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v13,r7,r6
	ea = (ctx.r7.u32 + ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v12,r26,r25
	ea = (ctx.r26.u32 + ctx.r25.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v12.u32[3 - ((ea & 0xF) >> 2)]);
	// stw r24,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r24.u32);
	// bl 0x82a75198
	ctx.lr = 0x8252A888;
	sub_82A75198(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r11,1320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1320, ctx.r11.u32);
	// beq cr6,0x8252a8a8
	if (ctx.cr6.eq) goto loc_8252A8A8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252a8a8
	if (ctx.cr6.eq) goto loc_8252A8A8;
	// stw r11,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r11.u32);
loc_8252A8A8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8252a8c0
	if (ctx.cr6.eq) goto loc_8252A8C0;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252a8c0
	if (ctx.cr6.eq) goto loc_8252A8C0;
	// stw r11,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r11.u32);
loc_8252A8C0:
	// addi r3,r1,155
	ctx.r3.s64 = ctx.r1.s64 + 155;
	// bl 0x8259bbf8
	ctx.lr = 0x8252A8C8;
	sub_8259BBF8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8256a330
	ctx.lr = 0x8252A8D4;
	sub_8256A330(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// addi r1,r1,1632
	ctx.r1.s64 = ctx.r1.s64 + 1632;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252A8E0"))) PPC_WEAK_FUNC(sub_8252A8E0);
PPC_FUNC_IMPL(__imp__sub_8252A8E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8252A8E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-1600(r1)
	ea = -1600 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,27
	ctx.r11.s64 = ctx.r4.s64 + 27;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// add r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252a914
	if (ctx.cr6.eq) goto loc_8252A914;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8256c608
	ctx.lr = 0x8252A914;
	sub_8256C608(ctx, base);
loc_8252A914:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82569e10
	ctx.lr = 0x8252A91C;
	sub_82569E10(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r10,300
	ctx.r10.s64 = 300;
	// addi r11,r11,27984
	ctx.r11.s64 = ctx.r11.s64 + 27984;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r8,r1,232
	ctx.r8.s64 = ctx.r1.s64 + 232;
	// addi r9,r9,-2340
	ctx.r9.s64 = ctx.r9.s64 + -2340;
	// addi r7,r1,232
	ctx.r7.s64 = ctx.r1.s64 + 232;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,232
	ctx.r5.s64 = ctx.r1.s64 + 232;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r3,r1,155
	ctx.r3.s64 = ctx.r1.s64 + 155;
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r29,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r29.u32);
	// stw r31,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r31.u32);
	// lvlx v0,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v13,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor v12,v13,v13
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vor v11,v13,v13
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vrlimi128 v12,v0,4,3
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// vrlimi128 v11,v13,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 57), 4));
	// vrlimi128 v12,v11,3,2
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 78), 3));
	// vspltw v0,v12,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFF));
	// vspltw v13,v12,1
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xAA));
	// vspltw v12,v12,2
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0x55));
	// stvewx v0,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v13,r7,r6
	ea = (ctx.r7.u32 + ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v12,r5,r4
	ea = (ctx.r5.u32 + ctx.r4.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v12.u32[3 - ((ea & 0xF) >> 2)]);
	// stw r28,1320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1320, ctx.r28.u32);
	// bl 0x8259bbf8
	ctx.lr = 0x8252A998;
	sub_8259BBF8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8256a330
	ctx.lr = 0x8252A9A4;
	sub_8256A330(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// addi r1,r1,1600
	ctx.r1.s64 = ctx.r1.s64 + 1600;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252A9B0"))) PPC_WEAK_FUNC(sub_8252A9B0);
PPC_FUNC_IMPL(__imp__sub_8252A9B0) {
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
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8252a9e0
	if (!ctx.cr6.eq) goto loc_8252A9E0;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,1540(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1540, ctx.r11.u32);
	// stw r10,4608(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4608, ctx.r10.u32);
	// b 0x8252a9f8
	goto loc_8252A9F8;
loc_8252A9E0:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,4608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4608);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8253d820
	ctx.lr = 0x8252A9F0;
	sub_8253D820(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4608, ctx.r11.u32);
loc_8252A9F8:
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

__attribute__((alias("__imp__sub_8252AA0C"))) PPC_WEAK_FUNC(sub_8252AA0C);
PPC_FUNC_IMPL(__imp__sub_8252AA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252AA10"))) PPC_WEAK_FUNC(sub_8252AA10);
PPC_FUNC_IMPL(__imp__sub_8252AA10) {
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
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8252aa3c
	if (!ctx.cr6.eq) goto loc_8252AA3C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4608(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4608, ctx.r11.u32);
	// b 0x8252aa98
	goto loc_8252AA98;
loc_8252AA3C:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8252aa7c
	if (!ctx.cr6.eq) goto loc_8252AA7C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825293c0
	ctx.lr = 0x8252AA54;
	sub_825293C0(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,1768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1768, ctx.r11.u32);
	// lwz r11,1588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1588);
	// stw r30,180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 180, ctx.r30.u32);
	// lwz r3,176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// bl 0x82517ca0
	ctx.lr = 0x8252AA6C;
	sub_82517CA0(ctx, base);
	// lwz r11,1536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1536);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// li r11,7
	ctx.r11.s64 = 7;
	// beq cr6,0x8252aa80
	if (ctx.cr6.eq) goto loc_8252AA80;
loc_8252AA7C:
	// li r11,3
	ctx.r11.s64 = 3;
loc_8252AA80:
	// stw r11,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4608);
	// bl 0x8253d820
	ctx.lr = 0x8252AA94;
	sub_8253D820(ctx, base);
	// stw r30,4608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4608, ctx.r30.u32);
loc_8252AA98:
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

__attribute__((alias("__imp__sub_8252AAB0"))) PPC_WEAK_FUNC(sub_8252AAB0);
PPC_FUNC_IMPL(__imp__sub_8252AAB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8252AAB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-1136(r1)
	ea = -1136 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8252aad4
	if (!ctx.cr6.eq) goto loc_8252AAD4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4608(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4608, ctx.r11.u32);
	// b 0x8252ab64
	goto loc_8252AB64;
loc_8252AAD4:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8252ab48
	if (!ctx.cr6.eq) goto loc_8252AB48;
	// lwz r11,1856(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1856);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,2244(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2244);
	// lwz r11,2248(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2248);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825293c0
	ctx.lr = 0x8252AB00;
	sub_825293C0(ctx, base);
	// lwz r11,1612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1612);
	// li r30,4
	ctx.r30.s64 = 4;
	// stw r30,1832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1832, ctx.r30.u32);
	// stw r29,180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 180, ctx.r29.u32);
	// lwz r3,176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// bl 0x82517ca0
	ctx.lr = 0x8252AB18;
	sub_82517CA0(ctx, base);
	// stw r30,1896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1896, ctx.r30.u32);
	// lwz r3,4600(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4600);
	// bl 0x82322128
	ctx.lr = 0x8252AB24;
	sub_82322128(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// bl 0x8252a4a8
	ctx.lr = 0x8252AB40;
	sub_8252A4A8(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x8252ab4c
	goto loc_8252AB4C;
loc_8252AB48:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8252AB4C:
	// stw r11,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4608);
	// bl 0x8253d820
	ctx.lr = 0x8252AB60;
	sub_8253D820(ctx, base);
	// stw r29,4608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4608, ctx.r29.u32);
loc_8252AB64:
	// addi r1,r1,1136
	ctx.r1.s64 = ctx.r1.s64 + 1136;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252AB6C"))) PPC_WEAK_FUNC(sub_8252AB6C);
PPC_FUNC_IMPL(__imp__sub_8252AB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252AB70"))) PPC_WEAK_FUNC(sub_8252AB70);
PPC_FUNC_IMPL(__imp__sub_8252AB70) {
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
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4208(r1)
	ea = -4208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,4094
	ctx.r5.s64 = 4094;
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r11,31944(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 31944);
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x8252ABAC;
	sub_82FA7CF0(ctx, base);
	// lwz r10,1680(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1680);
	// addi r11,r31,1664
	ctx.r11.s64 = ctx.r31.s64 + 1664;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8252abc0
	if (!ctx.cr6.eq) goto loc_8252ABC0;
	// bl 0x82fa1518
	ctx.lr = 0x8252ABC0;
	sub_82FA1518(ctx, base);
loc_8252ABC0:
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// li r7,2048
	ctx.r7.s64 = 2048;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8252ABE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,1968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// bl 0x82534af8
	ctx.lr = 0x8252ABF0;
	sub_82534AF8(ctx, base);
	// addi r1,r1,4208
	ctx.r1.s64 = ctx.r1.s64 + 4208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252AC08"))) PPC_WEAK_FUNC(sub_8252AC08);
PPC_FUNC_IMPL(__imp__sub_8252AC08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// lis r11,25
	ctx.r11.s64 = 1638400;
	// lis r9,15470
	ctx.r9.s64 = 1013841920;
	// ori r10,r11,26125
	ctx.r10.u64 = ctx.r11.u64 | 26125;
	// ori r11,r9,62303
	ctx.r11.u64 = ctx.r9.u64 | 62303;
	// lwz r9,21292(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 21292);
	// li r6,0
	ctx.r6.s64 = 0;
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add. r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r9,21292(r8)
	PPC_STORE_U32(ctx.r8.u32 + 21292, ctx.r9.u32);
	// ble 0x8252acc4
	if (!ctx.cr0.gt) goto loc_8252ACC4;
	// lwz r7,4660(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4660);
	// b 0x8252ac60
	goto loc_8252AC60;
loc_8252AC3C:
	// lwz r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8252ac68
	if (ctx.cr6.eq) goto loc_8252AC68;
	// lwz r5,4(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// subfic r5,r5,0
	ctx.xer.ca = ctx.r5.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r5.s64;
	// subfe r5,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 & ctx.r7.u64;
loc_8252AC60:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8252ac3c
	if (!ctx.cr6.eq) goto loc_8252AC3C;
loc_8252AC68:
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// extsw r9,r6
	ctx.r9.s64 = ctx.r6.s32;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stw r11,21292(r8)
	PPC_STORE_U32(ctx.r8.u32 + 21292, ctx.r11.u32);
	// lwz r10,4660(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4660);
	// clrlwi r11,r11,9
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFF;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// oris r11,r11,16256
	ctx.r11.u64 = ctx.r11.u64 | 1065353216;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lfs f12,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-24756(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24756);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x8252ad50
	goto loc_8252AD50;
loc_8252ACC4:
	// lwz r7,4664(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4664);
	// b 0x8252acf0
	goto loc_8252ACF0;
loc_8252ACCC:
	// lwz r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8252acf8
	if (ctx.cr6.eq) goto loc_8252ACF8;
	// lwz r5,4(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// subfic r5,r5,0
	ctx.xer.ca = ctx.r5.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r5.s64;
	// subfe r5,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 & ctx.r7.u64;
loc_8252ACF0:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8252accc
	if (!ctx.cr6.eq) goto loc_8252ACCC;
loc_8252ACF8:
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// clrlwi r9,r11,9
	ctx.r9.u64 = ctx.r11.u32 & 0x7FFFFF;
	// stw r11,21292(r8)
	PPC_STORE_U32(ctx.r8.u32 + 21292, ctx.r11.u32);
	// extsw r7,r6
	ctx.r7.s64 = ctx.r6.s32;
	// oris r11,r9,16256
	ctx.r11.u64 = ctx.r9.u64 | 1065353216;
	// std r7,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r7.u64);
	// lfs f0,-24756(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24756);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lfs f13,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfd f13,-8(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lwz r11,4664(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4664);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f0.u64);
	// lwz r10,-4(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_8252AD50:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252AD58"))) PPC_WEAK_FUNC(sub_8252AD58);
PPC_FUNC_IMPL(__imp__sub_8252AD58) {
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
	// lwz r3,4600(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4600);
	// bl 0x82322128
	ctx.lr = 0x8252AD78;
	sub_82322128(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x8252adf0
	if (ctx.cr6.lt) goto loc_8252ADF0;
	// beq cr6,0x8252add0
	if (ctx.cr6.eq) goto loc_8252ADD0;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// blt cr6,0x8252adb0
	if (ctx.cr6.lt) goto loc_8252ADB0;
	// bne cr6,0x8252ae18
	if (!ctx.cr6.eq) goto loc_8252AE18;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-27452
	ctx.r3.s64 = ctx.r11.s64 + -27452;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82547f38
	ctx.lr = 0x8252ADA4;
	sub_82547F38(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,-27432
	ctx.r3.s64 = ctx.r11.s64 + -27432;
	// b 0x8252ae0c
	goto loc_8252AE0C;
loc_8252ADB0:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-27488
	ctx.r3.s64 = ctx.r11.s64 + -27488;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82547f38
	ctx.lr = 0x8252ADC4;
	sub_82547F38(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,-27472
	ctx.r3.s64 = ctx.r11.s64 + -27472;
	// b 0x8252ae0c
	goto loc_8252AE0C;
loc_8252ADD0:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-27528
	ctx.r3.s64 = ctx.r11.s64 + -27528;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82547f38
	ctx.lr = 0x8252ADE4;
	sub_82547F38(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,-27508
	ctx.r3.s64 = ctx.r11.s64 + -27508;
	// b 0x8252ae0c
	goto loc_8252AE0C;
loc_8252ADF0:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-27564
	ctx.r3.s64 = ctx.r11.s64 + -27564;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82547f38
	ctx.lr = 0x8252AE04;
	sub_82547F38(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,-27548
	ctx.r3.s64 = ctx.r11.s64 + -27548;
loc_8252AE0C:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82547f38
	ctx.lr = 0x8252AE18;
	sub_82547F38(ctx, base);
loc_8252AE18:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82546708
	ctx.lr = 0x8252AE28;
	sub_82546708(ctx, base);
	// stw r3,4668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4668, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82546708
	ctx.lr = 0x8252AE3C;
	sub_82546708(ctx, base);
	// stw r3,4672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4672, ctx.r3.u32);
	// lwz r3,4668(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4668);
	// bl 0x82546b30
	ctx.lr = 0x8252AE48;
	sub_82546B30(ctx, base);
	// li r30,36
	ctx.r30.s64 = 36;
	// divwu r11,r3,r30
	ctx.r11.u32 = ctx.r3.u32 / ctx.r30.u32;
	// lwz r3,4672(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4672);
	// stw r11,4676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4676, ctx.r11.u32);
	// bl 0x82546b30
	ctx.lr = 0x8252AE5C;
	sub_82546B30(ctx, base);
	// divwu r11,r3,r30
	ctx.r11.u32 = ctx.r3.u32 / ctx.r30.u32;
	// stw r11,4680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4680, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8252AE7C"))) PPC_WEAK_FUNC(sub_8252AE7C);
PPC_FUNC_IMPL(__imp__sub_8252AE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252AE80"))) PPC_WEAK_FUNC(sub_8252AE80);
PPC_FUNC_IMPL(__imp__sub_8252AE80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8252AE88;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,1568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1568);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8252af34
	if (!ctx.cr6.eq) goto loc_8252AF34;
	// lwz r11,1564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1564);
	// lwz r30,180(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8252af34
	if (ctx.cr6.eq) goto loc_8252AF34;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r29,r31,1576
	ctx.r29.s64 = ctx.r31.s64 + 1576;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8252AECC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,1568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1568, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8252af34
	if (ctx.cr0.eq) goto loc_8252AF34;
	// li r3,416
	ctx.r3.s64 = 416;
	// bl 0x82827e80
	ctx.lr = 0x8252AEE0;
	sub_82827E80(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8252aefc
	if (ctx.cr0.eq) goto loc_8252AEFC;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,1568(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1568);
	// bl 0x825672a0
	ctx.lr = 0x8252AEF4;
	sub_825672A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8252af00
	goto loc_8252AF00;
loc_8252AEFC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8252AF00:
	// stw r4,1572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1572, ctx.r4.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,1568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1568);
	// li r6,18
	ctx.r6.s64 = 18;
	// lfs f1,-2340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8282a7b0
	ctx.lr = 0x8252AF1C;
	sub_8282A7B0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8252AF34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8252AF34:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252AF3C"))) PPC_WEAK_FUNC(sub_8252AF3C);
PPC_FUNC_IMPL(__imp__sub_8252AF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252AF40"))) PPC_WEAK_FUNC(sub_8252AF40);
PPC_FUNC_IMPL(__imp__sub_8252AF40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x8252AF48;
	__savegprlr_22(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r28,r11,r3
	ctx.r28.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,1564(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1564);
	// addi r3,r10,-10552
	ctx.r3.s64 = ctx.r10.s64 + -10552;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r27,180(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// bl 0x82547f38
	ctx.lr = 0x8252AF7C;
	sub_82547F38(ctx, base);
	// lwz r11,1568(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1568);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252b210
	if (ctx.cr6.eq) goto loc_8252B210;
	// lwz r3,1572(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1572);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252b210
	if (ctx.cr6.eq) goto loc_8252B210;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252b29c
	if (ctx.cr6.eq) goto loc_8252B29C;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// lis r7,19817
	ctx.r7.s64 = 1298726912;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,-24756(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24756);
	ctx.f13.f64 = double(temp.f32);
	// ori r7,r7,30800
	ctx.r7.u64 = ctx.r7.u64 | 30800;
	// lfs f31,-2340(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -2340);
	ctx.f31.f64 = double(temp.f32);
	// li r10,32
	ctx.r10.s64 = 32;
	// li r9,64
	ctx.r9.s64 = 64;
	// lfs f0,-2152(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -2152);
	ctx.f0.f64 = double(temp.f32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// bl 0x825678a0
	ctx.lr = 0x8252B014;
	sub_825678A0(ctx, base);
	// lwz r3,1568(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1568);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8282b920
	ctx.lr = 0x8252B020;
	sub_8282B920(ctx, base);
	// lwz r3,1568(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1568);
	// bl 0x8282c0d8
	ctx.lr = 0x8252B028;
	sub_8282C0D8(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,1576(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1576);
	// lwz r11,168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8252B040;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8252b090
	if (ctx.cr0.eq) goto loc_8252B090;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,15236
	ctx.r11.s64 = ctx.r11.s64 + 15236;
	// li r30,5
	ctx.r30.s64 = 5;
	// subf r29,r3,r11
	ctx.r29.s64 = ctx.r11.s64 - ctx.r3.s64;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f31,31512(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31512);
	ctx.f31.f64 = double(temp.f32);
loc_8252B064:
	// lwzx r11,r29,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// lwz r3,1568(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1568);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x8282bbe0
	ctx.lr = 0x8252B074;
	sub_8282BBE0(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r31
	PPC_STORE_U32(ctx.r31.u32, ctx.f0.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8252b064
	if (!ctx.cr0.eq) goto loc_8252B064;
loc_8252B090:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,1576(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1576);
	// lwz r11,164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8252B0AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8252b29c
	if (ctx.cr0.eq) goto loc_8252B29C;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r23,0(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r25,4(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lhz r26,8(r31)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// lwz r11,172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8252B0D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r3,1568(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1568);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// bne 0x8252b0f8
	if (!ctx.cr0.eq) goto loc_8252B0F8;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x8282c270
	ctx.lr = 0x8252B0F4;
	sub_8282C270(ctx, base);
	// b 0x8252b124
	goto loc_8252B124;
loc_8252B0F8:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x8282c270
	ctx.lr = 0x8252B100;
	sub_8282C270(ctx, base);
	// lwz r3,436(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 436);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8252B114;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,5056
	ctx.r4.s64 = ctx.r11.s64 + 5056;
	// bl 0x82579400
	ctx.lr = 0x8252B124;
	sub_82579400(ctx, base);
loc_8252B124:
	// li r22,1
	ctx.r22.s64 = 1;
	// lis r24,-31964
	ctx.r24.s64 = -2094792704;
loc_8252B12C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,1576(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1576);
	// lwz r11,164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8252B148;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8252b200
	if (ctx.cr0.eq) goto loc_8252B200;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r29,4(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8252b1ac
	if (ctx.cr6.eq) goto loc_8252B1AC;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8252b1ac
	if (ctx.cr6.eq) goto loc_8252B1AC;
	// rlwinm r30,r26,6,0,25
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a75038
	ctx.lr = 0x8252B17C;
	sub_82A75038(ctx, base);
	// rlwinm r11,r31,0,25,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// add r10,r30,r31
	ctx.r10.u64 = ctx.r30.u64 + ctx.r31.u64;
	// b 0x8252b190
	goto loc_8252B190;
loc_8252B188:
	// dcbf r0,r11
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
loc_8252B190:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8252b188
	if (ctx.cr6.lt) goto loc_8252B188;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,-13544(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -13544);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8266fc10
	ctx.lr = 0x8252B1AC;
	sub_8266FC10(ctx, base);
loc_8252B1AC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8252b200
	if (ctx.cr6.eq) goto loc_8252B200;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8252b200
	if (ctx.cr6.eq) goto loc_8252B200;
	// rlwinm r31,r26,6,0,25
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a75038
	ctx.lr = 0x8252B1D0;
	sub_82A75038(ctx, base);
	// rlwinm r11,r29,0,25,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// add r10,r31,r29
	ctx.r10.u64 = ctx.r31.u64 + ctx.r29.u64;
	// b 0x8252b1e4
	goto loc_8252B1E4;
loc_8252B1DC:
	// dcbf r0,r11
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
loc_8252B1E4:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8252b1dc
	if (ctx.cr6.lt) goto loc_8252B1DC;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,-13544(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -13544);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8266fc10
	ctx.lr = 0x8252B200;
	sub_8266FC10(ctx, base);
loc_8252B200:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// cmplwi cr6,r22,4
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 4, ctx.xer);
	// blt cr6,0x8252b12c
	if (ctx.cr6.lt) goto loc_8252B12C;
	// b 0x8252b29c
	goto loc_8252B29C;
loc_8252B210:
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// lis r7,19817
	ctx.r7.s64 = 1298726912;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f12,-24756(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24756);
	ctx.f12.f64 = double(temp.f32);
	// ori r7,r7,30800
	ctx.r7.u64 = ctx.r7.u64 | 30800;
	// lfs f0,-2340(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// li r10,32
	ctx.r10.s64 = 32;
	// li r9,64
	ctx.r9.s64 = 64;
	// lfs f13,-2152(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -2152);
	ctx.f13.f64 = double(temp.f32);
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82568330
	ctx.lr = 0x8252B288;
	sub_82568330(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825683a8
	ctx.lr = 0x8252B290;
	sub_825683A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82568710
	ctx.lr = 0x8252B29C;
	sub_82568710(ctx, base);
loc_8252B29C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

